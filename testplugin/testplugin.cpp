#include "testplugin.h"
#include <QtCore\qpluginloader.h>
#include "interface.h"

testplugin::testplugin(QWidget *parent)
    : QWidget(parent)
{
    ui.setupUi(this);
    m_qvbltMainlayout = new QVBoxLayout();
    m_qpbtnSayHello = new QPushButton();
    m_qpbtnSayHello->setText(QStringLiteral("SayHello"));
    m_qvbltMainlayout->addWidget(m_qpbtnSayHello);
    this->setLayout(m_qvbltMainlayout);
    connect(m_qpbtnSayHello, SIGNAL(clicked()), this, SLOT(OnBtnClick()));
}
void testplugin::OnBtnClick()
{
    PluginInterface* interface = nullptr;
    QPluginLoader pluginLoader("./plugins/c6f306775e719b6e6b6aaac516b1b1e5/myplguin.dll");
    QObject* plugin = pluginLoader.instance();
    if (plugin)
    {
        interface = qobject_cast<PluginInterface*>(plugin);
        if (interface)
        {
            interface->SayHello(this);
        }
    }
}