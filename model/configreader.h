#ifndef CONFIGREADER_H
#define CONFIGREADER_H

#include "baseconfigreader.h"
#include "applicationconfig.h"
#include <QSettings>
#include <QtDebug>

class ConfigReader : public BaseConfigReader<ApplicationConfig>
{
    QSettings settings;
public:
    ConfigReader(const QString &organization, const QString &application);
    virtual bool read(ApplicationConfig *appConfig);
    virtual bool write(ApplicationConfig *appConfig);
};

#endif // CONFIGREADER_H
