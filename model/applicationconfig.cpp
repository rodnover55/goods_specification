#include "applicationconfig.h"

ApplicationConfig *ApplicationConfig::instance = nullptr;

ApplicationConfig::ApplicationConfig()
{

}

ApplicationConfig::~ApplicationConfig()
{
    ApplicationConfig::write();
}

ApplicationConfig *ApplicationConfig::getInstance()
{
    if (ApplicationConfig::instance == nullptr) {
        ApplicationConfig::instance = new ApplicationConfig();
    }

    return ApplicationConfig::instance;
}

bool ApplicationConfig::initialize(BaseConfigReader<ApplicationConfig> *reader)
{
    ApplicationConfig *inst = ApplicationConfig::getInstance();

    inst->reader = std::shared_ptr<BaseConfigReader<ApplicationConfig> >(reader);
    return inst->read();
}

bool ApplicationConfig::read()
{
    return this->reader->read(this);
}

bool ApplicationConfig::write()
{
    return this->reader->write(this);
}

void ApplicationConfig::setServerName(QString value)
{
    this->serverName = value;
}

QString ApplicationConfig::getServerName() const
{
    return this->serverName;
}

