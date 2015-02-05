#include "trayicon.h"

using namespace yasem;

TrayIcon::TrayIcon(QObject* parent)
    : QObject(parent)
{
    trayIcon = new QSystemTrayIcon();
    menu = new QMenu();
}

TrayIcon::~TrayIcon()
{
    #ifdef Q_OS_WIN
        trayIcon->hide();
    #endif
}

PLUGIN_ERROR_CODES TrayIcon::initialize()
{
    trayIcon->setIcon(QIcon(":/tray-icon/icons/icon.png"));
    trayIcon->show();

    trayIcon->setContextMenu(menu);

    QAction* exitAction = menu->addAction(tr("Exit"));
    connect(exitAction, &QAction::triggered, qApp, QCoreApplication::quit);

    return PLUGIN_ERROR_NO_ERROR;
}

PLUGIN_ERROR_CODES TrayIcon::deinitialize()
{
    return PLUGIN_ERROR_NO_ERROR;
}


void yasem::TrayIcon::register_dependencies()
{
}

void yasem::TrayIcon::register_roles()
{
    register_role(ROLE_UNSPECIFIED);
}
