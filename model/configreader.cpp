#include "configreader.h"

const char *DB_SERVER_NAME = "/ServerName";
const char *DB_SERVER_NAME_DEFAULT = "localhost";

ConfigReader::ConfigReader(const QString &organization, const QString &application) :
    settings(organization, application)
{
}

bool ConfigReader::read(ApplicationConfig *appConfig)
{
    qDebug() << DB_SERVER_NAME;
    qDebug() << DB_SERVER_NAME_DEFAULT;
    qDebug() << this->settings.value(DB_SERVER_NAME, DB_SERVER_NAME_DEFAULT).toString();
    appConfig->getInstance()->setServerName(this->settings.value(DB_SERVER_NAME, DB_SERVER_NAME_DEFAULT).toString());
    return true;
}

bool ConfigReader::write(ApplicationConfig *appConfig)
{
    qDebug() << "DBName" << appConfig->getInstance()->getServerName();
    this->settings.setValue(DB_SERVER_NAME, appConfig->getInstance()->getServerName()) ;
    return true;
}
