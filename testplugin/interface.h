#pragma once
#include <QtWidgets/QWidget>

class PluginInterface
{
public:
    virtual ~PluginInterface() {}
    virtual void SayHello(QWidget* parent) = 0;
};

#define pluginInterface_iid "com.smartsoftstudio"
Q_DECLARE_INTERFACE(PluginInterface, pluginInterface_iid)

