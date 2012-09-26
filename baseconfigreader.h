#ifndef BASECONFIGREADER_H
#define BASECONFIGREADER_H

template <typename T>
class BaseConfigReader
{
public:
    virtual bool read(T *appConfig) = 0;
    virtual bool write(T *appConfig) = 0;
};

#endif // BASECONFIGREADER_H
