#ifndef TRAYICON_H
#define TRAYICON_H

#include "stbplugin.h"

#include "trayicon_global.h"

#include <QObject>
#include <QSystemTrayIcon>

namespace yasem {

class TRAYICONSHARED_EXPORT TrayIcon: public QObject, public virtual Plugin
{
    Q_OBJECT
    Q_PLUGIN_METADATA(IID "com.mvas.yasem.TrayIconPlugin/1.0" FILE "metadata.json")
    Q_INTERFACES(yasem::Plugin)

    Q_CLASSINFO("author", "Maxim Vasilchuk")
    Q_CLASSINFO("description", "Tray icon plugin for YASEM")
public:
    TrayIcon();

    // Plugin interface
public:
    PLUGIN_ERROR_CODES initialize();
    PLUGIN_ERROR_CODES deinitialize();

protected:
    QSystemTrayIcon* trayIcon;
};

}

#endif // TRAYICON_H
