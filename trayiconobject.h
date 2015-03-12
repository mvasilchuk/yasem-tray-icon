#ifndef TRAYICONOBJECT_H
#define TRAYICONOBJECT_H

#include "abstractpluginobject.h"

#include <QSystemTrayIcon>
#include <QMenu>

namespace yasem {

class TrayIconObject: public AbstractPluginObject
{
    Q_OBJECT
public:
    explicit TrayIconObject(Plugin* plugin);
    virtual ~TrayIconObject();

    // AbstractPluginObject interface
public:
    PluginObjectResult init();
    PluginObjectResult deinit();

protected:
    QSystemTrayIcon* m_tray_icon;
    QMenu* m_menu;
};

}

#endif // TRAYICONOBJECT_H
