#include "settingsdialog.h"
#include "ui_settingsdialog.h"

SettingsDialog::SettingsDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SettingsDialog)
{
    ui->setupUi(this);
}

bool SettingsDialog::get(QString &serverName)
{
    this->ui->leDbServer->setText(serverName);

    bool result = this->exec() == QDialog::Accepted;
    if (result) {
        qDebug() << this->ui->leDbServer->text();
        serverName = this->ui->leDbServer->text();
    }
    return result;
}

SettingsDialog::~SettingsDialog()
{
    delete ui;
}
