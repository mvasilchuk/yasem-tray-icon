#ifndef TRAYICON_H
#define TRAYICON_H

#include "trayicon_global.h"

#include "plugin.h"

#include <QObject>
#include <QSystemTrayIcon>
#include <QMenu>

namespace yasem {

class TRAYICONSHARED_EXPORT TrayIcon: public Plugin
{
    Q_OBJECT
    Q_PLUGIN_METADATA(IID "com.mvas.yasem.TrayIconPlugin/1.0" FILE "metadata.json")
    Q_INTERFACES(yasem::Plugin)

    Q_CLASSINFO("author", "Maxim Vasilchuk")
    Q_CLASSINFO("description", "Tray icon")
    Q_CLASSINFO("version", MODULE_VERSION)
    Q_CLASSINFO("revision", GIT_VERSION)
public:
    TrayIcon(QObject* parent = 0);
    virtual ~TrayIcon();

    // Plugin interface
public:
    void register_dependencies();
    void register_roles();
};

}

#endif // TRAYICON_H
