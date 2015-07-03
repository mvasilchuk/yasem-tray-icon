#include "trayiconplugin.h"
#include "trayiconobject.h"

using namespace yasem;

TrayIcon::TrayIcon(QObject* parent):
    SDK::Plugin(parent)
{

}

TrayIcon::~TrayIcon()
{

}


void yasem::TrayIcon::register_dependencies()
{
}

void yasem::TrayIcon::register_roles()
{
    register_role(SDK::ROLE_UNSPECIFIED, new TrayIconObject(this));
}
