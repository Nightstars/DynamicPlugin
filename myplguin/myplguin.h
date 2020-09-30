#pragma once
#include <QObject>
#include "myplguin_global.h"
#include "../testplugin/interface.h"

class MYPLGUIN_EXPORT myplguin : public QObject, PluginInterface
{
	Q_OBJECT
	Q_PLUGIN_METADATA(IID pluginInterface_iid FILE "plugin.json")
	Q_INTERFACES(PluginInterface)
public:
    myplguin();
	void SayHello(QWidget* parent) Q_DECL_OVERRIDE;
};
