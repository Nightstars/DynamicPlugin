#pragma once

#include <QtWidgets/QWidget>
#include "ui_testplugin.h"
#include <QtWidgets\qboxlayout.h>
#include <QtWidgets\qpushbutton.h>

class testplugin : public QWidget
{
    Q_OBJECT

public:
    testplugin(QWidget *parent = Q_NULLPTR);

private:
    Ui::testpluginClass ui;
    QVBoxLayout* m_qvbltMainlayout;
    QPushButton* m_qpbtnSayHello;
private slots:
    void OnBtnClick();
};
