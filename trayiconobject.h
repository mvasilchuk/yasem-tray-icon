#ifndef TRAYICONOBJECT_H
#define TRAYICONOBJECT_H

#include "abstractpluginobject.h"

#include <QSystemTrayIcon>
#include <QMenu>

namespace yasem {

class TrayIconObject: public SDK::AbstractPluginObject
{
    Q_OBJECT
public:
    explicit TrayIconObject(SDK::Plugin* plugin);
    virtual ~TrayIconObject();

    // AbstractPluginObject interface
public:
    SDK::PluginObjectResult init();
    SDK::PluginObjectResult deinit();

protected:
    QSystemTrayIcon* m_tray_icon;
    QMenu* m_menu;
};

}

#endif // TRAYICONOBJECT_H
