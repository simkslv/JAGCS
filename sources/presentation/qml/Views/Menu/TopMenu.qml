import QtQuick 2.6

import "../../Controls" as Controls

Controls.SideNav {
    menuModel: [
        { text: qsTr("Communications"), source: "Communications/CommunicationsView.qml" },
        { text: qsTr("Vehicles"), source: "Vehicles/VehiclesView.qml" },
        { text: qsTr("Planning"), source: "Planning/PlanningView.qml" },
        { text: qsTr("Settings"), source: "Settings/SettingsMenu.qml" },
        { text: qsTr("About"), source: "About/AboutView.qml" },
        { text: qsTr("Quit"), source: "Quit/QuitView.qml" }
    ]
}
