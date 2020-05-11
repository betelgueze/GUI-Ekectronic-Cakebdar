/********************************************************************************
** Form generated from reading UI file 'calendar.ui'
**
** Created: Sun 18. Dec 12:45:02 2011
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CALENDAR_H
#define UI_CALENDAR_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDateEdit>
#include <QtGui/QFrame>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QListWidget>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QStackedWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CalendarClass
{
public:
    QVBoxLayout *verticalLayout_3;
    QFrame *frame;
    QVBoxLayout *layoutW;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *setButton;
    QVBoxLayout *layout;
    QWidget *page_2;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *exitButton;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *calButton;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label;
    QComboBox *pozBox;
    QHBoxLayout *horizontalLayout;
    QLabel *label_3;
    QSpinBox *spinBox;
    QComboBox *comboBox;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_2;
    QDateEdit *dateEdit;
    QPushButton *addButton;
    QListWidget *listView;

    void setupUi(QWidget *CalendarClass)
    {
        if (CalendarClass->objectName().isEmpty())
            CalendarClass->setObjectName(QString::fromUtf8("CalendarClass"));
        CalendarClass->resize(272, 324);
        CalendarClass->setStyleSheet(QString::fromUtf8("#CalendarClass {background-color: rgb(255, 255, 255);}"));
        verticalLayout_3 = new QVBoxLayout(CalendarClass);
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        frame = new QFrame(CalendarClass);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setEnabled(true);
        frame->setStyleSheet(QString::fromUtf8(""));
        frame->setFrameShape(QFrame::Box);
        frame->setFrameShadow(QFrame::Plain);
        layoutW = new QVBoxLayout(frame);
        layoutW->setSpacing(6);
        layoutW->setContentsMargins(11, 11, 11, 11);
        layoutW->setObjectName(QString::fromUtf8("layoutW"));
        stackedWidget = new QStackedWidget(frame);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setMaximumSize(QSize(16777215, 16777215));
        stackedWidget->setStyleSheet(QString::fromUtf8("#stackedWidget>* {background-color: rgb(255, 255, 255);}"));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        verticalLayout = new QVBoxLayout(page);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        setButton = new QPushButton(page);
        setButton->setObjectName(QString::fromUtf8("setButton"));

        horizontalLayout_2->addWidget(setButton);


        verticalLayout->addLayout(horizontalLayout_2);

        layout = new QVBoxLayout();
        layout->setSpacing(6);
        layout->setObjectName(QString::fromUtf8("layout"));

        verticalLayout->addLayout(layout);

        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        verticalLayout_2 = new QVBoxLayout(page_2);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        exitButton = new QPushButton(page_2);
        exitButton->setObjectName(QString::fromUtf8("exitButton"));

        horizontalLayout_5->addWidget(exitButton);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_2);

        calButton = new QPushButton(page_2);
        calButton->setObjectName(QString::fromUtf8("calButton"));

        horizontalLayout_5->addWidget(calButton);


        verticalLayout_2->addLayout(horizontalLayout_5);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label = new QLabel(page_2);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);

        horizontalLayout_3->addWidget(label);

        pozBox = new QComboBox(page_2);
        pozBox->setObjectName(QString::fromUtf8("pozBox"));

        horizontalLayout_3->addWidget(pozBox);


        verticalLayout_2->addLayout(horizontalLayout_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(-1, 0, -1, 0);
        label_3 = new QLabel(page_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout->addWidget(label_3);

        spinBox = new QSpinBox(page_2);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));

        horizontalLayout->addWidget(spinBox);

        comboBox = new QComboBox(page_2);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        horizontalLayout->addWidget(comboBox);


        verticalLayout_2->addLayout(horizontalLayout);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_2 = new QLabel(page_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);

        horizontalLayout_4->addWidget(label_2);

        dateEdit = new QDateEdit(page_2);
        dateEdit->setObjectName(QString::fromUtf8("dateEdit"));

        horizontalLayout_4->addWidget(dateEdit);

        addButton = new QPushButton(page_2);
        addButton->setObjectName(QString::fromUtf8("addButton"));

        horizontalLayout_4->addWidget(addButton);


        verticalLayout_2->addLayout(horizontalLayout_4);

        listView = new QListWidget(page_2);
        listView->setObjectName(QString::fromUtf8("listView"));
        listView->setMaximumSize(QSize(234, 150));
        listView->setAlternatingRowColors(true);
        listView->setSelectionMode(QAbstractItemView::NoSelection);
        listView->setSortingEnabled(false);

        verticalLayout_2->addWidget(listView);

        stackedWidget->addWidget(page_2);

        layoutW->addWidget(stackedWidget);


        verticalLayout_3->addWidget(frame);


        retranslateUi(CalendarClass);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(CalendarClass);
    } // setupUi

    void retranslateUi(QWidget *CalendarClass)
    {
        CalendarClass->setWindowTitle(QApplication::translate("CalendarClass", "Calendar", 0, QApplication::UnicodeUTF8));
        setButton->setText(QApplication::translate("CalendarClass", "Nastavenia", 0, QApplication::UnicodeUTF8));
        exitButton->setText(QApplication::translate("CalendarClass", "Koniec", 0, QApplication::UnicodeUTF8));
        calButton->setText(QApplication::translate("CalendarClass", "Kalendar", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("CalendarClass", "Pozicia:", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("CalendarClass", "Pocet", 0, QApplication::UnicodeUTF8));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("CalendarClass", "Tyzdnov", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("CalendarClass", "Mesiacov", 0, QApplication::UnicodeUTF8)
        );
        label_2->setText(QApplication::translate("CalendarClass", "Sviatok:", 0, QApplication::UnicodeUTF8));
        dateEdit->setDisplayFormat(QApplication::translate("CalendarClass", "d.M.", 0, QApplication::UnicodeUTF8));
        addButton->setText(QApplication::translate("CalendarClass", "Pridat", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class CalendarClass: public Ui_CalendarClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALENDAR_H
