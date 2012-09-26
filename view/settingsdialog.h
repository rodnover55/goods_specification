#ifndef SETTINGSDIALOG_H
#define SETTINGSDIALOG_H

#include <QDialog>
#include <QDebug>

namespace Ui {
class SettingsDialog;
}

class SettingsDialog : public QDialog
{
    Q_OBJECT
    
public:
    explicit SettingsDialog(QWidget *parent = 0);
    bool get(QString &serverName);
    ~SettingsDialog();
    
private:
    Ui::SettingsDialog *ui;
};

#endif // SETTINGSDIALOG_H
