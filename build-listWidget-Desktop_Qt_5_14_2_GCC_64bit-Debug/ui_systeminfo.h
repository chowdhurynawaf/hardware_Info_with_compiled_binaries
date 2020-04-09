/********************************************************************************
** Form generated from reading UI file 'systeminfo.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SYSTEMINFO_H
#define UI_SYSTEMINFO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SystemInfo
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QListWidget *listWidget;
    QPushButton *pushButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *SystemInfo)
    {
        if (SystemInfo->objectName().isEmpty())
            SystemInfo->setObjectName(QString::fromUtf8("SystemInfo"));
        SystemInfo->resize(800, 600);
        centralwidget = new QWidget(SystemInfo);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        listWidget = new QListWidget(centralwidget);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));

        verticalLayout->addWidget(listWidget);

        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        verticalLayout->addWidget(pushButton);

        SystemInfo->setCentralWidget(centralwidget);
        menubar = new QMenuBar(SystemInfo);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 22));
        SystemInfo->setMenuBar(menubar);
        statusbar = new QStatusBar(SystemInfo);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        SystemInfo->setStatusBar(statusbar);

        retranslateUi(SystemInfo);

        QMetaObject::connectSlotsByName(SystemInfo);
    } // setupUi

    void retranslateUi(QMainWindow *SystemInfo)
    {
        SystemInfo->setWindowTitle(QCoreApplication::translate("SystemInfo", "SystemInfo", nullptr));
        pushButton->setText(QCoreApplication::translate("SystemInfo", "Show hardware info", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SystemInfo: public Ui_SystemInfo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SYSTEMINFO_H
