/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <myfilewg.h>
#include <rankinglist.h>
#include <sharelist.h>
#include <transfer.h>
#include "buttongroup.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    ButtonGroup *btn_group;
    QStackedWidget *stackedWidget;
    MyFileWg *myfiles_page;
    ShareList *sharefile_page;
    RankingList *ranking_page;
    Transfer *transfer_page;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(755, 621);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(0);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        btn_group = new ButtonGroup(centralWidget);
        btn_group->setObjectName(QStringLiteral("btn_group"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(btn_group->sizePolicy().hasHeightForWidth());
        btn_group->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(btn_group);

        stackedWidget = new QStackedWidget(centralWidget);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        myfiles_page = new MyFileWg();
        myfiles_page->setObjectName(QStringLiteral("myfiles_page"));
        stackedWidget->addWidget(myfiles_page);
        sharefile_page = new ShareList();
        sharefile_page->setObjectName(QStringLiteral("sharefile_page"));
        stackedWidget->addWidget(sharefile_page);
        ranking_page = new RankingList();
        ranking_page->setObjectName(QStringLiteral("ranking_page"));
        stackedWidget->addWidget(ranking_page);
        transfer_page = new Transfer();
        transfer_page->setObjectName(QStringLiteral("transfer_page"));
        stackedWidget->addWidget(transfer_page);

        verticalLayout->addWidget(stackedWidget);

        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
