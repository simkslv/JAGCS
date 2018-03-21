#ifndef SETTINGS_H
#define SETTINGS_H

#include <QString>

namespace settings
{
    namespace data_base
    {
        const QString name = "Data_base/name";
    }

    namespace communication
    {
        const QString systemId = "Communication/systemId";
        const QString componentId = "Communication/componentId";
        const QString heartbeat = "Communication/heartbeat";
        const QString timeout = "Communication/timeout";
        const QString autoAdd = "Communication/autoAdd";
        const QString baudRate = "Communication/baudRate";
        const QString port = "Communication/port";
        const QString statisticsCount = "Communication/statisticsCount";
    }

    namespace mission
    {
        const QString defaultAcceptanceRadius = "Mission/defaultAcceptanceRadius";
        const QString defaultTakeoffPitch = "Mission/defaultTakeoffPitch";
        const QString visibility = "Mission/visibility";
    }

    namespace map
    {
        const QString zoomLevel = "Map/zoomLevel";
        const QString centerLatitude = "Map/centerLatitude";
        const QString centerLongitude = "Map/centerLongitude";
        const QString bearing = "Map/bearing";
        const QString tilt = "Map/tilt";
        const QString plugin = "Map/plugin";
        const QString osmActiveMapType = "Map/osmActiveMapType";
        const QString mapBoxActiveMapType = "Map/mapBoxActiveMapType";
        const QString esriActiveMapType = "Map/esriActiveMapType";
        const QString tileHost = "Map/tileHost";
        const QString cacheSize = "Map/cacheSize";
        const QString highdpiTiles = "Map/highdpiTiles";
        const QString trackLength = "Map/trackLength";
    }

    namespace video
    {
        const QString activeVideo = "Video/activeVideo";
    }

    namespace manual
    {
        const QString enabled = "Manual/enabled";
        const QString interval = "Manual/interval";

        namespace joystick
        {
            const QString enabled = "Manual/Joystick/enabled";
            const QString device = "Manual/Joystick/device";

            namespace pitch
            {
                const QString axis = "Manual/Joystick/Pitch/axis";
                const QString factor = "Manual/Joystick/Pitch/factor";
            }

            namespace roll
            {
                const QString axis = "Manual/Joystick/Roll/axis";
                const QString factor = "Manual/Joystick/Roll/factor";
            }

            namespace throttle
            {
                const QString axis = "Manual/Joystick/Throttle/axis";
                const QString factor = "Manual/Joystick/Throttle/factor";
            }

            namespace yaw
            {
                const QString axis = "Manual/Joystick/Yaw/axis";
                const QString factor = "Manual/Joystick/Yaw/factor";
            }
        }
    }

    namespace gui
    {
        const QString geometry = "Gui/geometry";
        const QString fullscreen = "Gui/fullscreen";
        const QString locale = "Gui/locale";
        const QString uiSize = "Gui/uiSize";
        const QString paletteStyle = "Gui/paletteStyle";
        const QString fdRollInverted = "Gui/fdRollInverted";
        const QString fdSpeedStep = "Gui/fdSpeedStep";
        const QString fdSpeedUnits = "Gui/fdSpeedUnits";
        const QString fdAltitudeStep = "Gui/fdAltitudeStep";
        const QString fdAltitudeUnits = "Gui/fdAltitudeUnits";
        const QString fdRelativeAltitude = "Gui/fdRelativeAltitude";
        const QString vibrationModelCount = "Gui/vibrationModelCount";
        const QString coordinatesDms = "Gui/coordinatesDms";
    }

    namespace proxy
    {
        const QString type = "NetworkProxy/type";
        const QString hostName = "NetworkProxy/hostName";
        const QString port = "NetworkProxy/port";
        const QString user = "NetworkProxy/user";
        const QString password = "NetworkProxy/password";
    }

    namespace vehicle
    {
        const QString vehicle = "veh_";

        namespace visibility
        {
            const QString diagnostics = "diagnosticsVisible";
            const QString status = "statusVisible";
            const QString fd = "fdVisible";
            const QString hsi = "hsiVisible";
            const QString landing = "landingVisible";
            const QString control = "controlVisible";
        }
    }
}

#endif // SETTINGS_H
