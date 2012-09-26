#ifndef APPLICATIONCONFIG_H
#define APPLICATIONCONFIG_H

#include <memory>
#include <QString>

#include "baseconfigreader.h"

class ApplicationConfig
{
    QString serverName;

    std::shared_ptr<BaseConfigReader<ApplicationConfig> > reader;
protected:
    static ApplicationConfig *instance;

    ApplicationConfig();
    virtual ~ApplicationConfig();
public:
    static ApplicationConfig *getInstance();
    static bool initialize(BaseConfigReader<ApplicationConfig> *reader);
    bool read();
    bool write();

    void setServerName(QString value);
    QString getServerName() const;
};

#endif // QAPPLICATIONCONFIG_H
