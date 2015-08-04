#include "trayiconobject.h"
#include "macros.h"

#include <QCoreApplication>

using namespace yasem;

TrayIconObject::TrayIconObject(SDK::Plugin* plugin):
    SDK::AbstractPluginObject(plugin),
    m_tray_icon(NULL),
    m_menu(NULL)
{

}

TrayIconObject::~TrayIconObject()
{
    STUB();
    if(m_tray_icon)
        m_tray_icon->deleteLater();

    if(m_menu)
        m_menu->deleteLater();
}

SDK::PluginObjectResult yasem::TrayIconObject::init()
{
    m_tray_icon = new QSystemTrayIcon();
    m_tray_icon->setIcon(QIcon(":/tray-icon/icons/icon.png"));
    m_tray_icon->show();

    m_menu = new QMenu();

    QAction* exitAction = m_menu->addAction(tr("Exit"));
    connect(exitAction, &QAction::triggered, qApp, QCoreApplication::quit);

    m_tray_icon->setContextMenu(m_menu);

    return SDK::PLUGIN_OBJECT_RESULT_OK;
}

SDK::PluginObjectResult yasem::TrayIconObject::deinit()
{
    return SDK::PLUGIN_OBJECT_RESULT_OK;
}
