#ifndef QREGISTRY_H
#define QREGISTRY_H

class QRegistry
{
protected:
    static QRegistry *instance;

    QRegistry();
    virtual ~QRegistry();
public:
    static QRegistry *getInstance();
};
QRegistry *QRegistry::instance = nullptr;

#endif // QREGISTRY_H
