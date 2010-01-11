/********************************************************************************
** Form generated from reading ui file 'help.ui'
**
** Created: Mon Jan 11 11:32:39 2010
**      by: Qt User Interface Compiler version 4.5.3
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_HELP_H
#define UI_HELP_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QListWidget>
#include <QtGui/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_Help
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QListWidget *listWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QListWidget *listWidget_2;
    QSpacerItem *verticalSpacer;

    void setupUi(QDialog *Help)
    {
        if (Help->objectName().isEmpty())
            Help->setObjectName(QString::fromUtf8("Help"));
        Help->resize(266, 190);
        QIcon icon;
        icon.addFile(QString::fromUtf8("images/Torchlight_help.png"), QSize(), QIcon::Normal, QIcon::Off);
        Help->setWindowIcon(icon);
        gridLayout = new QGridLayout(Help);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label = new QLabel(Help);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(170, 0));
        label->setFrameShape(QFrame::Box);
        label->setFrameShadow(QFrame::Sunken);

        horizontalLayout_2->addWidget(label);

        listWidget = new QListWidget(Help);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setMaximumSize(QSize(70, 60));

        horizontalLayout_2->addWidget(listWidget);


        gridLayout->addLayout(horizontalLayout_2, 0, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_2 = new QLabel(Help);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMinimumSize(QSize(170, 0));
        label_2->setFrameShape(QFrame::Box);
        label_2->setFrameShadow(QFrame::Sunken);

        horizontalLayout->addWidget(label_2);

        listWidget_2 = new QListWidget(Help);
        new QListWidgetItem(listWidget_2);
        new QListWidgetItem(listWidget_2);
        new QListWidgetItem(listWidget_2);
        listWidget_2->setObjectName(QString::fromUtf8("listWidget_2"));
        listWidget_2->setMaximumSize(QSize(70, 60));

        horizontalLayout->addWidget(listWidget_2);


        gridLayout->addLayout(horizontalLayout, 1, 0, 1, 1);

        verticalSpacer = new QSpacerItem(245, 23, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 2, 0, 1, 1);


        retranslateUi(Help);

        QMetaObject::connectSlotsByName(Help);
    } // setupUi

    void retranslateUi(QDialog *Help)
    {
        Help->setWindowTitle(QApplication::translate("Help", "Help", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("Help", "\346\225\260\346\215\256\345\217\226\345\200\274\350\214\203\345\233\264\346\255\243\347\241\256\345\241\253\345\206\231\346\226\271\345\274\217\357\274\232", 0, QApplication::UnicodeUTF8));

        const bool __sortingEnabled = listWidget->isSortingEnabled();
        listWidget->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = listWidget->item(0);
        ___qlistwidgetitem->setText(QApplication::translate("Help", "4", 0, QApplication::UnicodeUTF8));
        QListWidgetItem *___qlistwidgetitem1 = listWidget->item(1);
        ___qlistwidgetitem1->setText(QApplication::translate("Help", "12-40", 0, QApplication::UnicodeUTF8));
        QListWidgetItem *___qlistwidgetitem2 = listWidget->item(2);
        ___qlistwidgetitem2->setText(QApplication::translate("Help", "200~300", 0, QApplication::UnicodeUTF8));
        listWidget->setSortingEnabled(__sortingEnabled);

        label_2->setText(QApplication::translate("Help", "\344\270\215\346\255\243\347\241\256\347\232\204\346\226\271\345\274\217\345\246\202\344\270\213\357\274\232\n"
"1.\350\264\237\346\225\260 \n"
"2.\346\262\241\347\224\250\"\357\275\236\"\346\210\226\350\200\205\"-\" \350\277\236\346\216\245\n"
"3.\350\214\203\345\233\264\351\207\215\345\244\215", 0, QApplication::UnicodeUTF8));

        const bool __sortingEnabled1 = listWidget_2->isSortingEnabled();
        listWidget_2->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem3 = listWidget_2->item(0);
        ___qlistwidgetitem3->setText(QApplication::translate("Help", "-4", 0, QApplication::UnicodeUTF8));
        QListWidgetItem *___qlistwidgetitem4 = listWidget_2->item(1);
        ___qlistwidgetitem4->setText(QApplication::translate("Help", "12->40", 0, QApplication::UnicodeUTF8));
        QListWidgetItem *___qlistwidgetitem5 = listWidget_2->item(2);
        ___qlistwidgetitem5->setText(QApplication::translate("Help", "36,78", 0, QApplication::UnicodeUTF8));
        listWidget_2->setSortingEnabled(__sortingEnabled1);

        Q_UNUSED(Help);
    } // retranslateUi

};

namespace Ui {
    class Help: public Ui_Help {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HELP_H
