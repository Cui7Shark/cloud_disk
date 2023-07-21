/********************************************************************************
** Form generated from reading UI file 'filepropertyinfo.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FILEPROPERTYINFO_H
#define UI_FILEPROPERTYINFO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_FilePropertyInfo
{
public:
    QGridLayout *gridLayout;
    QLabel *time;
    QLabel *label_8;
    QLabel *label_4;
    QLabel *label_2;
    QLabel *url;
    QLabel *share;
    QLabel *filename;
    QLabel *size;
    QLabel *label_13;
    QLabel *label_12;
    QLabel *label_10;
    QLabel *user;
    QLabel *label_6;
    QLabel *pv;

    void setupUi(QDialog *FilePropertyInfo)
    {
        if (FilePropertyInfo->objectName().isEmpty())
            FilePropertyInfo->setObjectName(QStringLiteral("FilePropertyInfo"));
        FilePropertyInfo->resize(389, 353);
        gridLayout = new QGridLayout(FilePropertyInfo);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        time = new QLabel(FilePropertyInfo);
        time->setObjectName(QStringLiteral("time"));
        time->setStyleSheet(QString::fromUtf8("font: 16pt \"\351\232\266\344\271\246\";\n"
"color: qradialgradient(spread:repeat, cx:0.5, cy:0.5, radius:0.077, fx:0.5, fy:0.5, stop:0 rgba(0, 169, 0, 147), stop:0.497326 rgba(0, 0, 0, 147), stop:1 rgba(0, 169, 255, 147));"));

        gridLayout->addWidget(time, 2, 1, 1, 1);

        label_8 = new QLabel(FilePropertyInfo);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setStyleSheet(QString::fromUtf8("font: 16pt \"\351\232\266\344\271\246\";\\ncolor: qradialgradient(spread:repeat, cx:0.5, cy:0.5, radius:0.077, fx:0.5, fy:0.5, stop:0 rgba(0, 169, 0, 147), stop:0.497326 rgba(0, 0, 0, 147), stop:1 rgba(0, 169, 255, 147));"));

        gridLayout->addWidget(label_8, 6, 0, 1, 1);

        label_4 = new QLabel(FilePropertyInfo);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setStyleSheet(QString::fromUtf8("font: 16pt \"\351\232\266\344\271\246\";\\ncolor: qradialgradient(spread:repeat, cx:0.5, cy:0.5, radius:0.077, fx:0.5, fy:0.5, stop:0 rgba(0, 169, 0, 147), stop:0.497326 rgba(0, 0, 0, 147), stop:1 rgba(0, 169, 255, 147));"));

        gridLayout->addWidget(label_4, 1, 0, 1, 1);

        label_2 = new QLabel(FilePropertyInfo);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setStyleSheet(QString::fromUtf8("font: 16pt \"\351\232\266\344\271\246\";\\ncolor: qradialgradient(spread:repeat, cx:0.5, cy:0.5, radius:0.077, fx:0.5, fy:0.5, stop:0 rgba(0, 169, 0, 147), stop:0.497326 rgba(0, 0, 0, 147), stop:1 rgba(0, 169, 255, 147));"));

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        url = new QLabel(FilePropertyInfo);
        url->setObjectName(QStringLiteral("url"));
        url->setStyleSheet(QString::fromUtf8("font: 16pt \"\351\232\266\344\271\246\";\n"
"color: qradialgradient(spread:repeat, cx:0.5, cy:0.5, radius:0.077, fx:0.5, fy:0.5, stop:0 rgba(0, 169, 0, 147), stop:0.497326 rgba(0, 0, 0, 147), stop:1 rgba(0, 169, 255, 147));"));

        gridLayout->addWidget(url, 5, 1, 1, 1);

        share = new QLabel(FilePropertyInfo);
        share->setObjectName(QStringLiteral("share"));
        share->setStyleSheet(QString::fromUtf8("font: 16pt \"\351\232\266\344\271\246\";\n"
"color: qradialgradient(spread:repeat, cx:0.5, cy:0.5, radius:0.077, fx:0.5, fy:0.5, stop:0 rgba(0, 169, 0, 147), stop:0.497326 rgba(0, 0, 0, 147), stop:1 rgba(0, 169, 255, 147));"));

        gridLayout->addWidget(share, 4, 1, 1, 1);

        filename = new QLabel(FilePropertyInfo);
        filename->setObjectName(QStringLiteral("filename"));
        filename->setStyleSheet(QString::fromUtf8("font: 16pt \"\351\232\266\344\271\246\";\n"
"color: qradialgradient(spread:repeat, cx:0.5, cy:0.5, radius:0.077, fx:0.5, fy:0.5, stop:0 rgba(0, 169, 0, 147), stop:0.497326 rgba(0, 0, 0, 147), stop:1 rgba(0, 169, 255, 147));"));

        gridLayout->addWidget(filename, 0, 1, 1, 1);

        size = new QLabel(FilePropertyInfo);
        size->setObjectName(QStringLiteral("size"));
        size->setStyleSheet(QString::fromUtf8("font: 16pt \"\351\232\266\344\271\246\";\n"
"color: qradialgradient(spread:repeat, cx:0.5, cy:0.5, radius:0.077, fx:0.5, fy:0.5, stop:0 rgba(0, 169, 0, 147), stop:0.497326 rgba(0, 0, 0, 147), stop:1 rgba(0, 169, 255, 147));"));

        gridLayout->addWidget(size, 3, 1, 1, 1);

        label_13 = new QLabel(FilePropertyInfo);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setStyleSheet(QString::fromUtf8("font: 16pt \"\351\232\266\344\271\246\";\\ncolor: qradialgradient(spread:repeat, cx:0.5, cy:0.5, radius:0.077, fx:0.5, fy:0.5, stop:0 rgba(0, 169, 0, 147), stop:0.497326 rgba(0, 0, 0, 147), stop:1 rgba(0, 169, 255, 147));"));

        gridLayout->addWidget(label_13, 3, 0, 1, 1);

        label_12 = new QLabel(FilePropertyInfo);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setStyleSheet(QString::fromUtf8("font: 16pt \"\351\232\266\344\271\246\";\\ncolor: qradialgradient(spread:repeat, cx:0.5, cy:0.5, radius:0.077, fx:0.5, fy:0.5, stop:0 rgba(0, 169, 0, 147), stop:0.497326 rgba(0, 0, 0, 147), stop:1 rgba(0, 169, 255, 147));"));

        gridLayout->addWidget(label_12, 5, 0, 1, 1);

        label_10 = new QLabel(FilePropertyInfo);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setStyleSheet(QString::fromUtf8("font: 16pt \"\351\232\266\344\271\246\";\\ncolor: qradialgradient(spread:repeat, cx:0.5, cy:0.5, radius:0.077, fx:0.5, fy:0.5, stop:0 rgba(0, 169, 0, 147), stop:0.497326 rgba(0, 0, 0, 147), stop:1 rgba(0, 169, 255, 147));"));

        gridLayout->addWidget(label_10, 4, 0, 1, 1);

        user = new QLabel(FilePropertyInfo);
        user->setObjectName(QStringLiteral("user"));
        user->setStyleSheet(QString::fromUtf8("font: 16pt \"\351\232\266\344\271\246\";\n"
"color: qradialgradient(spread:repeat, cx:0.5, cy:0.5, radius:0.077, fx:0.5, fy:0.5, stop:0 rgba(0, 169, 0, 147), stop:0.497326 rgba(0, 0, 0, 147), stop:1 rgba(0, 169, 255, 147));"));

        gridLayout->addWidget(user, 1, 1, 1, 1);

        label_6 = new QLabel(FilePropertyInfo);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setStyleSheet(QString::fromUtf8("font: 16pt \"\351\232\266\344\271\246\";\\ncolor: qradialgradient(spread:repeat, cx:0.5, cy:0.5, radius:0.077, fx:0.5, fy:0.5, stop:0 rgba(0, 169, 0, 147), stop:0.497326 rgba(0, 0, 0, 147), stop:1 rgba(0, 169, 255, 147));"));

        gridLayout->addWidget(label_6, 2, 0, 1, 1);

        pv = new QLabel(FilePropertyInfo);
        pv->setObjectName(QStringLiteral("pv"));
        pv->setStyleSheet(QString::fromUtf8("font: 16pt \"\351\232\266\344\271\246\";\n"
"color: qradialgradient(spread:repeat, cx:0.5, cy:0.5, radius:0.077, fx:0.5, fy:0.5, stop:0 rgba(0, 169, 0, 147), stop:0.497326 rgba(0, 0, 0, 147), stop:1 rgba(0, 169, 255, 147));"));

        gridLayout->addWidget(pv, 6, 1, 1, 1);

        label_2->raise();
        label_4->raise();
        label_6->raise();
        label_13->raise();
        label_10->raise();
        label_12->raise();
        label_8->raise();
        filename->raise();
        user->raise();
        time->raise();
        size->raise();
        share->raise();
        url->raise();
        pv->raise();

        retranslateUi(FilePropertyInfo);

        QMetaObject::connectSlotsByName(FilePropertyInfo);
    } // setupUi

    void retranslateUi(QDialog *FilePropertyInfo)
    {
        FilePropertyInfo->setWindowTitle(QApplication::translate("FilePropertyInfo", "\346\226\207\344\273\266\345\261\236\346\200\247", 0));
        time->setText(QApplication::translate("FilePropertyInfo", "\346\227\266\351\227\264", 0));
        label_8->setText(QApplication::translate("FilePropertyInfo", "\344\270\213 \350\275\275 \351\207\217:", 0));
        label_4->setText(QApplication::translate("FilePropertyInfo", "\344\270\212 \344\274\240 \350\200\205:", 0));
        label_2->setText(QApplication::translate("FilePropertyInfo", "\346\226\207\344\273\266\345\220\215\345\255\227:", 0));
        url->setText(QApplication::translate("FilePropertyInfo", "\346\265\213\350\257\225", 0));
        share->setText(QApplication::translate("FilePropertyInfo", "\345\267\262\347\273\217\345\210\206\344\272\253", 0));
        filename->setText(QApplication::translate("FilePropertyInfo", "\346\226\207\344\273\2661", 0));
        size->setText(QApplication::translate("FilePropertyInfo", "1024 KB", 0));
        label_13->setText(QApplication::translate("FilePropertyInfo", "\346\226\207\344\273\266\345\244\247\345\260\217:", 0));
        label_12->setText(QApplication::translate("FilePropertyInfo", "\344\270\213\350\275\275\345\234\260\345\235\200:", 0));
        label_10->setText(QApplication::translate("FilePropertyInfo", "\345\210\206\344\272\253\347\212\266\346\200\201:", 0));
        user->setText(QApplication::translate("FilePropertyInfo", "\350\221\243\345\260\221", 0));
        label_6->setText(QApplication::translate("FilePropertyInfo", "\344\270\212\344\274\240\346\227\266\351\227\264:", 0));
        pv->setText(QApplication::translate("FilePropertyInfo", "1", 0));
    } // retranslateUi

};

namespace Ui {
    class FilePropertyInfo: public Ui_FilePropertyInfo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FILEPROPERTYINFO_H
