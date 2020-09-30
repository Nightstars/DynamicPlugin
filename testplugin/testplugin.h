#pragma once

#include <QtWidgets/QWidget>
#include "ui_testplugin.h"
#include <QtWidgets\qboxlayout.h>
#include <QtWidgets\qpushbutton.h>
#include <QStackedWidget>

class testplugin : public QWidget
{
    Q_OBJECT

public:
    testplugin(QWidget *parent = Q_NULLPTR);

private:
    Ui::testpluginClass ui;
    QVBoxLayout* m_qvbltMainlayout;
    QPushButton* m_qpbtnSayHello;
    QStackedWidget* m_stkwgt_mainPage;
private slots:
    void OnBtnClick();
};
