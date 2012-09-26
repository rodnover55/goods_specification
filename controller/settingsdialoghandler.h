#ifndef SETTINGSDIALOGHANDLER_H
#define SETTINGSDIALOGHANDLER_H

#include "model/applicationconfig.h"
#include "view/settingsdialog.h"


class SettingsDialogHandler
{
    SettingsDialog dialog;
public:
    SettingsDialogHandler();
    void exec();
};

#endif // SETTINGSDIALOGHANDLER_H
