// Qt
#include <QCoreApplication>

// Core
#include "db_manager.h"
#include "service_registry.h"

// Tests
#include "links_test.h"
#include "communication_service_test.h"
#include "telemetry_service_test.h"
#include "mission_service_test.h"

#define execTest(T) { T t; QTest::qExec(&t); }

int main(int argc, char* argv[])
{
    QCoreApplication app(argc, argv);

    execTest(LinksTest)

    {
        QFile file("test_db");
        if (file.exists()) file.remove();
    }

    data_source::DbManager dbManager;
    if (!dbManager.open("test_db"))
    {
        qFatal("Unable to establish DB connection");
        app.quit();
    }

    domain::ServiceRegistry registy;
    Q_UNUSED(registy);

    CommunicationServiceTest commTest;
    QTest::qExec(&commTest);

    MissionServiceTest missionTest;
    QTest::qExec(&missionTest);

    TelemetryServiceTest telemetryTest;
    QTest::qExec(&telemetryTest);

    return 0;
}
