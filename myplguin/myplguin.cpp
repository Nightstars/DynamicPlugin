#include "myplguin.h"
#include <QtWidgets/qmessagebox.h>

myplguin::myplguin()
{
}
void myplguin::SayHello(QWidget* parent)
{
	QMessageBox::information(parent, "Plugin", "Hello, I'm dynamically loaded.");
}