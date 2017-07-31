#include "statusbar_presenter.h"

// Qt
#include <QGuiApplication>

// Internal
#include "service_registry.h"
#include "telemetry_service.h"

#include "radio_presenter.h"

using namespace presentation;

class StatusbarPresenter::Impl
{
public:
    RadioPresenter* radio;
};

StatusbarPresenter::StatusbarPresenter(QObject* parent):
    BasePresenter(parent),
    d(new Impl())
{
    d->radio = new RadioPresenter(domain::ServiceRegistry::telemetryService()->radioNode(),
                                  this);
}

StatusbarPresenter::~StatusbarPresenter()
{}

void StatusbarPresenter::connectView(QObject* view)
{
    d->radio->setView(view->findChild<QObject*>(NAME(radio)));

    connect(view, SIGNAL(setMode(QString)), this, SIGNAL(setMode(QString)));

    connect(view, SIGNAL(quit()), qApp, SLOT(quit()));
}
