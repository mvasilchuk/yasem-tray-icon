#include "trayicon.h"

using namespace yasem;

TrayIcon::TrayIcon()
{
}

TrayIcon::~TrayIcon()
{
    trayIcon->hide();
}

PLUGIN_ERROR_CODES TrayIcon::initialize()
{
    trayIcon = new QSystemTrayIcon();

    trayIcon->setIcon(QIcon(":/tray-icon/icons/icon.png"));
    trayIcon->show();

    return PLUGIN_ERROR_NO_ERROR;
}

PLUGIN_ERROR_CODES TrayIcon::deinitialize()
{
    return PLUGIN_ERROR_NO_ERROR;
}
