#include "qregistry.h"

QRegistry::QRegistry()
{
}

QRegistry::~QRegistry()
{
}

QRegistry *QRegistry::getInstance()
{
    if (QRegistry::instance == nullptr)
    {
        QRegistry::instance = new QRegistry();
    }

    return QRegistry::instance;
}
