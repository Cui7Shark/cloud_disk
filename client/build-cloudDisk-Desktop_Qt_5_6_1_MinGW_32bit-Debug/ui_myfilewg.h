/********************************************************************************
** Form generated from reading UI file 'myfilewg.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYFILEWG_H
#define UI_MYFILEWG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MyFileWg
{
public:
    QVBoxLayout *verticalLayout;
    QListWidget *listWidget;

    void setupUi(QWidget *MyFileWg)
    {
        if (MyFileWg->objectName().isEmpty())
            MyFileWg->setObjectName(QStringLiteral("MyFileWg"));
        MyFileWg->resize(744, 592);
        verticalLayout = new QVBoxLayout(MyFileWg);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        listWidget = new QListWidget(MyFileWg);
        listWidget->setObjectName(QStringLiteral("listWidget"));

        verticalLayout->addWidget(listWidget);


        retranslateUi(MyFileWg);

        QMetaObject::connectSlotsByName(MyFileWg);
    } // setupUi

    void retranslateUi(QWidget *MyFileWg)
    {
        MyFileWg->setWindowTitle(QApplication::translate("MyFileWg", "Form", 0));
    } // retranslateUi

};

namespace Ui {
    class MyFileWg: public Ui_MyFileWg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYFILEWG_H
