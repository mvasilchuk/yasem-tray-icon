#include "trayiconobject.h"

#include <QCoreApplication>

using namespace yasem;

TrayIconObject::TrayIconObject(Plugin* plugin):
    AbstractPluginObject(plugin),
    m_tray_icon(NULL),
    m_menu(NULL)
{

}

TrayIconObject::~TrayIconObject()
{
#ifdef Q_OS_WIN
    if(m_tray_icon != NULL && m_tray_icon->isVisible())
        m_tray_icon->hide();
#endif
}

PluginObjectResult yasem::TrayIconObject::init()
{
    m_tray_icon = new QSystemTrayIcon(qApp);
    m_tray_icon->setIcon(QIcon(":/tray-icon/icons/icon.png"));
    m_tray_icon->show();

    m_menu = new QMenu();

    QAction* exitAction = m_menu->addAction(tr("Exit"));
    connect(exitAction, &QAction::triggered, qApp, QCoreApplication::quit);

    m_tray_icon->setContextMenu(m_menu);


    return PLUGIN_OBJECT_RESULT_OK;
}

PluginObjectResult yasem::TrayIconObject::deinit()
{
    return PLUGIN_OBJECT_RESULT_OK;
}
