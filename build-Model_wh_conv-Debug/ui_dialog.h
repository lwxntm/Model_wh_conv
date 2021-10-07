/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 6.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLineEdit *lineEditFeet;
    QLineEdit *lineEditInches;
    QLabel *label;
    QLineEdit *lineEditCm;
    QLabel *label_2;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *lineEditLbs;
    QLabel *label_3;
    QLineEdit *lineEditKg;
    QLabel *label_4;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QString::fromUtf8("Dialog"));
        Dialog->resize(255, 126);
        widget = new QWidget(Dialog);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(10, 30, 221, 27));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        lineEditFeet = new QLineEdit(widget);
        lineEditFeet->setObjectName(QString::fromUtf8("lineEditFeet"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lineEditFeet->sizePolicy().hasHeightForWidth());
        lineEditFeet->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(lineEditFeet);

        lineEditInches = new QLineEdit(widget);
        lineEditInches->setObjectName(QString::fromUtf8("lineEditInches"));

        horizontalLayout->addWidget(lineEditInches);

        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        lineEditCm = new QLineEdit(widget);
        lineEditCm->setObjectName(QString::fromUtf8("lineEditCm"));

        horizontalLayout->addWidget(lineEditCm);

        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout->addWidget(label_2);

        widget1 = new QWidget(Dialog);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(10, 80, 221, 27));
        horizontalLayout_2 = new QHBoxLayout(widget1);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        lineEditLbs = new QLineEdit(widget1);
        lineEditLbs->setObjectName(QString::fromUtf8("lineEditLbs"));
        sizePolicy.setHeightForWidth(lineEditLbs->sizePolicy().hasHeightForWidth());
        lineEditLbs->setSizePolicy(sizePolicy);

        horizontalLayout_2->addWidget(lineEditLbs);

        label_3 = new QLabel(widget1);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_2->addWidget(label_3);

        lineEditKg = new QLineEdit(widget1);
        lineEditKg->setObjectName(QString::fromUtf8("lineEditKg"));
        sizePolicy.setHeightForWidth(lineEditKg->sizePolicy().hasHeightForWidth());
        lineEditKg->setSizePolicy(sizePolicy);

        horizontalLayout_2->addWidget(lineEditKg);

        label_4 = new QLabel(widget1);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_2->addWidget(label_4);


        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QCoreApplication::translate("Dialog", "\350\272\253\351\253\230\344\275\223\351\207\215\350\275\254\346\215\242", nullptr));
#if QT_CONFIG(tooltip)
        lineEditFeet->setToolTip(QCoreApplication::translate("Dialog", "<html><head/><body><p>\350\213\261\345\260\272</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        lineEditFeet->setPlaceholderText(QCoreApplication::translate("Dialog", "Feet", nullptr));
#if QT_CONFIG(tooltip)
        lineEditInches->setToolTip(QCoreApplication::translate("Dialog", "<html><head/><body><p>\350\213\261\345\257\270</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        lineEditInches->setPlaceholderText(QCoreApplication::translate("Dialog", "Inches", nullptr));
        label->setText(QCoreApplication::translate("Dialog", "\351\225\277\345\272\246", nullptr));
#if QT_CONFIG(tooltip)
        lineEditCm->setToolTip(QCoreApplication::translate("Dialog", "<html><head/><body><p>1\350\213\261\345\260\272=12\350\213\261\345\257\270</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        label_2->setText(QCoreApplication::translate("Dialog", "cm", nullptr));
#if QT_CONFIG(tooltip)
        lineEditLbs->setToolTip(QCoreApplication::translate("Dialog", "<html><head/><body><p>Lbs/\347\243\205</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        lineEditLbs->setPlaceholderText(QCoreApplication::translate("Dialog", "Lbs", nullptr));
        label_3->setText(QCoreApplication::translate("Dialog", "\350\264\250\351\207\217", nullptr));
#if QT_CONFIG(tooltip)
        lineEditKg->setToolTip(QCoreApplication::translate("Dialog", "<html><head/><body><p>1\347\243\205\347\272\246\347\255\211\344\272\2160.45\345\205\254\346\226\244</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        label_4->setText(QCoreApplication::translate("Dialog", "kg", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
