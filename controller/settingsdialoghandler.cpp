#include "settingsdialoghandler.h"

SettingsDialogHandler::SettingsDialogHandler()
{
}

void SettingsDialogHandler::exec()
{
    QString serverName = ApplicationConfig::getInstance()->getServerName();

    if (this->dialog.get(serverName)) {
        ApplicationConfig::getInstance()->setServerName(serverName);
        ApplicationConfig::getInstance()->write();
    }
}
