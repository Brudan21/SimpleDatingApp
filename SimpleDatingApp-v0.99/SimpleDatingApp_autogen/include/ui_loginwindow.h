/********************************************************************************
** Form generated from reading UI file 'loginwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINWINDOW_H
#define UI_LOGINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LoginWindow
{
public:
    QWidget *centralwidget;
    QWidget *bottomPanel;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_2;
    QWidget *topPanel;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_3;
    QLabel *label_5;
    QSpacerItem *horizontalSpacer_4;
    QStackedWidget *stackedWidget;
    QWidget *page_4;
    QWidget *nameInput_6;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_6;
    QLineEdit *lineEdit;
    QLabel *label_8;
    QLineEdit *lineEdit_2;
    QSpacerItem *verticalSpacer;
    QPushButton *pushButton;
    QSpacerItem *verticalSpacer_2;
    QLabel *label_9;
    QPushButton *pushButton_2;
    QWidget *page;
    QWidget *horizontalWidget;
    QHBoxLayout *horizontalLayout_3;
    QWidget *nameInput;
    QVBoxLayout *verticalLayout_3;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QSpacerItem *horizontalSpacer;
    QWidget *nameInput_2;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_7;
    QLabel *label_10;
    QTextBrowser *textBrowser;
    QWidget *page_2;
    QWidget *horizontalWidget_3;
    QHBoxLayout *horizontalLayout_4;
    QWidget *nameInput_3;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_13;
    QLabel *label_14;
    QSpacerItem *horizontalSpacer_6;
    QWidget *nameInput_4;
    QVBoxLayout *verticalLayout_7;
    QLabel *label_15;
    QLabel *label_16;
    QTextBrowser *textBrowser_2;
    QWidget *page_3;
    QWidget *nameInput_5;
    QVBoxLayout *verticalLayout_8;
    QLabel *label_18;
    QListWidget *listWidget;

    void setupUi(QMainWindow *LoginWindow)
    {
        if (LoginWindow->objectName().isEmpty())
            LoginWindow->setObjectName("LoginWindow");
        LoginWindow->resize(812, 589);
        LoginWindow->setStyleSheet(QString::fromUtf8("#centralwidget {background-color: qlineargradient(spread:reflect, x1:0.727273, y1:0.205, x2:1, y2:1, stop:0.278409 rgba(170, 170, 255, 255), stop:1 rgba(255, 255, 255, 255));}\n"
"\n"
"#nameInput{border-radius:8px;background-color:rgb(80, 90, 120);}\n"
"#nameInput2{border-radius:8px;background-color:rgb(80, 90, 120);}\n"
"#nameInput_2{border-radius:8px;background-color:rgb(80, 90, 120);}\n"
"#nameInput_3{border-radius:8px;background-color:rgb(80, 90, 120);}\n"
"#nameInput_4{border-radius:8px;background-color:rgb(80, 90, 120);}\n"
"#nameInput_5{border-radius:8px;background-color:rgb(80, 90, 120);}\n"
"#nameInput_6{border-radius:8px;background-color:rgb(80, 90, 120);}\n"
"\n"
"QLabel { color: white; }\n"
"#topPanel{background-color:rgb(80, 90, 120);}"));
        centralwidget = new QWidget(LoginWindow);
        centralwidget->setObjectName("centralwidget");
        bottomPanel = new QWidget(centralwidget);
        bottomPanel->setObjectName("bottomPanel");
        bottomPanel->setGeometry(QRect(0, 520, 812, 56));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(bottomPanel->sizePolicy().hasHeightForWidth());
        bottomPanel->setSizePolicy(sizePolicy);
        bottomPanel->setMinimumSize(QSize(0, 50));
        horizontalLayout = new QHBoxLayout(bottomPanel);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        topPanel = new QWidget(centralwidget);
        topPanel->setObjectName("topPanel");
        topPanel->setGeometry(QRect(1, -8, 821, 81));
        sizePolicy.setHeightForWidth(topPanel->sizePolicy().hasHeightForWidth());
        topPanel->setSizePolicy(sizePolicy);
        topPanel->setMinimumSize(QSize(0, 70));
        horizontalLayout_2 = new QHBoxLayout(topPanel);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(-1, 0, -1, -1);
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        label_5 = new QLabel(topPanel);
        label_5->setObjectName("label_5");
        QFont font;
        font.setFamilies({QString::fromUtf8("Tw Cen MT")});
        font.setPointSize(26);
        font.setBold(true);
        font.setItalic(true);
        label_5->setFont(font);

        horizontalLayout_2->addWidget(label_5);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);

        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setGeometry(QRect(0, 128, 812, 350));
        sizePolicy.setHeightForWidth(stackedWidget->sizePolicy().hasHeightForWidth());
        stackedWidget->setSizePolicy(sizePolicy);
        stackedWidget->setMinimumSize(QSize(0, 350));
        page_4 = new QWidget();
        page_4->setObjectName("page_4");
        nameInput_6 = new QWidget(page_4);
        nameInput_6->setObjectName("nameInput_6");
        nameInput_6->setGeometry(QRect(20, 40, 320, 270));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(nameInput_6->sizePolicy().hasHeightForWidth());
        nameInput_6->setSizePolicy(sizePolicy1);
        nameInput_6->setMinimumSize(QSize(320, 270));
        verticalLayout_4 = new QVBoxLayout(nameInput_6);
        verticalLayout_4->setSpacing(8);
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalLayout_4->setContentsMargins(25, 25, 25, 25);
        label_6 = new QLabel(nameInput_6);
        label_6->setObjectName("label_6");
        sizePolicy.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy);

        verticalLayout_4->addWidget(label_6);

        lineEdit = new QLineEdit(nameInput_6);
        lineEdit->setObjectName("lineEdit");

        verticalLayout_4->addWidget(lineEdit);

        label_8 = new QLabel(nameInput_6);
        label_8->setObjectName("label_8");
        sizePolicy.setHeightForWidth(label_8->sizePolicy().hasHeightForWidth());
        label_8->setSizePolicy(sizePolicy);

        verticalLayout_4->addWidget(label_8);

        lineEdit_2 = new QLineEdit(nameInput_6);
        lineEdit_2->setObjectName("lineEdit_2");

        verticalLayout_4->addWidget(lineEdit_2);

        verticalSpacer = new QSpacerItem(20, 8, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer);

        pushButton = new QPushButton(nameInput_6);
        pushButton->setObjectName("pushButton");

        verticalLayout_4->addWidget(pushButton);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_2);

        label_9 = new QLabel(nameInput_6);
        label_9->setObjectName("label_9");

        verticalLayout_4->addWidget(label_9);

        pushButton_2 = new QPushButton(nameInput_6);
        pushButton_2->setObjectName("pushButton_2");

        verticalLayout_4->addWidget(pushButton_2);

        stackedWidget->addWidget(page_4);
        page = new QWidget();
        page->setObjectName("page");
        horizontalWidget = new QWidget(page);
        horizontalWidget->setObjectName("horizontalWidget");
        horizontalWidget->setGeometry(QRect(20, 30, 781, 281));
        sizePolicy1.setHeightForWidth(horizontalWidget->sizePolicy().hasHeightForWidth());
        horizontalWidget->setSizePolicy(sizePolicy1);
        horizontalWidget->setMinimumSize(QSize(600, 280));
        horizontalLayout_3 = new QHBoxLayout(horizontalWidget);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        nameInput = new QWidget(horizontalWidget);
        nameInput->setObjectName("nameInput");
        sizePolicy1.setHeightForWidth(nameInput->sizePolicy().hasHeightForWidth());
        nameInput->setSizePolicy(sizePolicy1);
        nameInput->setMinimumSize(QSize(320, 270));
        verticalLayout_3 = new QVBoxLayout(nameInput);
        verticalLayout_3->setSpacing(8);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(25, 25, 25, 25);
        label = new QLabel(nameInput);
        label->setObjectName("label");
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);

        verticalLayout_3->addWidget(label);

        label_2 = new QLabel(nameInput);
        label_2->setObjectName("label_2");
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);

        verticalLayout_3->addWidget(label_2);

        label_3 = new QLabel(nameInput);
        label_3->setObjectName("label_3");
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);

        verticalLayout_3->addWidget(label_3);

        label_4 = new QLabel(nameInput);
        label_4->setObjectName("label_4");
        sizePolicy.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy);

        verticalLayout_3->addWidget(label_4);


        horizontalLayout_3->addWidget(nameInput);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        nameInput_2 = new QWidget(horizontalWidget);
        nameInput_2->setObjectName("nameInput_2");
        sizePolicy1.setHeightForWidth(nameInput_2->sizePolicy().hasHeightForWidth());
        nameInput_2->setSizePolicy(sizePolicy1);
        nameInput_2->setMinimumSize(QSize(320, 270));
        verticalLayout_5 = new QVBoxLayout(nameInput_2);
        verticalLayout_5->setSpacing(8);
        verticalLayout_5->setObjectName("verticalLayout_5");
        verticalLayout_5->setContentsMargins(25, 25, 25, 25);
        label_7 = new QLabel(nameInput_2);
        label_7->setObjectName("label_7");
        sizePolicy.setHeightForWidth(label_7->sizePolicy().hasHeightForWidth());
        label_7->setSizePolicy(sizePolicy);

        verticalLayout_5->addWidget(label_7);

        label_10 = new QLabel(nameInput_2);
        label_10->setObjectName("label_10");
        sizePolicy.setHeightForWidth(label_10->sizePolicy().hasHeightForWidth());
        label_10->setSizePolicy(sizePolicy);

        verticalLayout_5->addWidget(label_10);

        textBrowser = new QTextBrowser(nameInput_2);
        textBrowser->setObjectName("textBrowser");

        verticalLayout_5->addWidget(textBrowser);


        horizontalLayout_3->addWidget(nameInput_2);

        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName("page_2");
        horizontalWidget_3 = new QWidget(page_2);
        horizontalWidget_3->setObjectName("horizontalWidget_3");
        horizontalWidget_3->setGeometry(QRect(20, 30, 781, 281));
        sizePolicy1.setHeightForWidth(horizontalWidget_3->sizePolicy().hasHeightForWidth());
        horizontalWidget_3->setSizePolicy(sizePolicy1);
        horizontalWidget_3->setMinimumSize(QSize(600, 280));
        horizontalLayout_4 = new QHBoxLayout(horizontalWidget_3);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        nameInput_3 = new QWidget(horizontalWidget_3);
        nameInput_3->setObjectName("nameInput_3");
        sizePolicy1.setHeightForWidth(nameInput_3->sizePolicy().hasHeightForWidth());
        nameInput_3->setSizePolicy(sizePolicy1);
        nameInput_3->setMinimumSize(QSize(320, 270));
        verticalLayout_6 = new QVBoxLayout(nameInput_3);
        verticalLayout_6->setSpacing(8);
        verticalLayout_6->setObjectName("verticalLayout_6");
        verticalLayout_6->setContentsMargins(25, 25, 25, 25);
        label_11 = new QLabel(nameInput_3);
        label_11->setObjectName("label_11");
        sizePolicy.setHeightForWidth(label_11->sizePolicy().hasHeightForWidth());
        label_11->setSizePolicy(sizePolicy);

        verticalLayout_6->addWidget(label_11);

        label_12 = new QLabel(nameInput_3);
        label_12->setObjectName("label_12");
        sizePolicy.setHeightForWidth(label_12->sizePolicy().hasHeightForWidth());
        label_12->setSizePolicy(sizePolicy);

        verticalLayout_6->addWidget(label_12);

        label_13 = new QLabel(nameInput_3);
        label_13->setObjectName("label_13");
        sizePolicy.setHeightForWidth(label_13->sizePolicy().hasHeightForWidth());
        label_13->setSizePolicy(sizePolicy);

        verticalLayout_6->addWidget(label_13);

        label_14 = new QLabel(nameInput_3);
        label_14->setObjectName("label_14");
        sizePolicy.setHeightForWidth(label_14->sizePolicy().hasHeightForWidth());
        label_14->setSizePolicy(sizePolicy);

        verticalLayout_6->addWidget(label_14);


        horizontalLayout_4->addWidget(nameInput_3);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_6);

        nameInput_4 = new QWidget(horizontalWidget_3);
        nameInput_4->setObjectName("nameInput_4");
        sizePolicy1.setHeightForWidth(nameInput_4->sizePolicy().hasHeightForWidth());
        nameInput_4->setSizePolicy(sizePolicy1);
        nameInput_4->setMinimumSize(QSize(320, 270));
        verticalLayout_7 = new QVBoxLayout(nameInput_4);
        verticalLayout_7->setSpacing(8);
        verticalLayout_7->setObjectName("verticalLayout_7");
        verticalLayout_7->setContentsMargins(25, 25, 25, 25);
        label_15 = new QLabel(nameInput_4);
        label_15->setObjectName("label_15");
        sizePolicy.setHeightForWidth(label_15->sizePolicy().hasHeightForWidth());
        label_15->setSizePolicy(sizePolicy);

        verticalLayout_7->addWidget(label_15);

        label_16 = new QLabel(nameInput_4);
        label_16->setObjectName("label_16");
        sizePolicy.setHeightForWidth(label_16->sizePolicy().hasHeightForWidth());
        label_16->setSizePolicy(sizePolicy);

        verticalLayout_7->addWidget(label_16);

        textBrowser_2 = new QTextBrowser(nameInput_4);
        textBrowser_2->setObjectName("textBrowser_2");

        verticalLayout_7->addWidget(textBrowser_2);


        horizontalLayout_4->addWidget(nameInput_4);

        stackedWidget->addWidget(page_2);
        page_3 = new QWidget();
        page_3->setObjectName("page_3");
        nameInput_5 = new QWidget(page_3);
        nameInput_5->setObjectName("nameInput_5");
        nameInput_5->setGeometry(QRect(30, 30, 320, 281));
        sizePolicy1.setHeightForWidth(nameInput_5->sizePolicy().hasHeightForWidth());
        nameInput_5->setSizePolicy(sizePolicy1);
        nameInput_5->setMinimumSize(QSize(320, 270));
        verticalLayout_8 = new QVBoxLayout(nameInput_5);
        verticalLayout_8->setSpacing(8);
        verticalLayout_8->setObjectName("verticalLayout_8");
        verticalLayout_8->setContentsMargins(25, 25, 25, 25);
        label_18 = new QLabel(nameInput_5);
        label_18->setObjectName("label_18");
        sizePolicy.setHeightForWidth(label_18->sizePolicy().hasHeightForWidth());
        label_18->setSizePolicy(sizePolicy);

        verticalLayout_8->addWidget(label_18);

        listWidget = new QListWidget(nameInput_5);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        listWidget->setObjectName("listWidget");

        verticalLayout_8->addWidget(listWidget);

        stackedWidget->addWidget(page_3);
        LoginWindow->setCentralWidget(centralwidget);

        retranslateUi(LoginWindow);

        stackedWidget->setCurrentIndex(3);


        QMetaObject::connectSlotsByName(LoginWindow);
    } // setupUi

    void retranslateUi(QMainWindow *LoginWindow)
    {
        LoginWindow->setWindowTitle(QCoreApplication::translate("LoginWindow", "MainWindow", nullptr));
        label_5->setText(QCoreApplication::translate("LoginWindow", "SimpleDatingApp", nullptr));
        label_6->setText(QCoreApplication::translate("LoginWindow", "Name:", nullptr));
        label_8->setText(QCoreApplication::translate("LoginWindow", "Surname:", nullptr));
        pushButton->setText(QCoreApplication::translate("LoginWindow", "Login", nullptr));
        label_9->setText(QCoreApplication::translate("LoginWindow", "Don't have an account?", nullptr));
        pushButton_2->setText(QCoreApplication::translate("LoginWindow", "Register Now", nullptr));
        label->setText(QCoreApplication::translate("LoginWindow", "Name:", nullptr));
        label_2->setText(QCoreApplication::translate("LoginWindow", "Surname:", nullptr));
        label_3->setText(QCoreApplication::translate("LoginWindow", "Sex:", nullptr));
        label_4->setText(QCoreApplication::translate("LoginWindow", "Age:", nullptr));
        label_7->setText(QCoreApplication::translate("LoginWindow", "MBTI:", nullptr));
        label_10->setText(QCoreApplication::translate("LoginWindow", "Hobbies:", nullptr));
        label_11->setText(QCoreApplication::translate("LoginWindow", "Name:", nullptr));
        label_12->setText(QCoreApplication::translate("LoginWindow", "Surname:", nullptr));
        label_13->setText(QCoreApplication::translate("LoginWindow", "Sex:", nullptr));
        label_14->setText(QCoreApplication::translate("LoginWindow", "Age:", nullptr));
        label_15->setText(QCoreApplication::translate("LoginWindow", "MBTI:", nullptr));
        label_16->setText(QCoreApplication::translate("LoginWindow", "Hobbies:", nullptr));
        label_18->setText(QCoreApplication::translate("LoginWindow", "Currently saved/liked matches", nullptr));

        const bool __sortingEnabled = listWidget->isSortingEnabled();
        listWidget->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = listWidget->item(0);
        ___qlistwidgetitem->setText(QCoreApplication::translate("LoginWindow", "New Item", nullptr));
        QListWidgetItem *___qlistwidgetitem1 = listWidget->item(1);
        ___qlistwidgetitem1->setText(QCoreApplication::translate("LoginWindow", "New Item", nullptr));
        QListWidgetItem *___qlistwidgetitem2 = listWidget->item(2);
        ___qlistwidgetitem2->setText(QCoreApplication::translate("LoginWindow", "New Item", nullptr));
        listWidget->setSortingEnabled(__sortingEnabled);

    } // retranslateUi

};

namespace Ui {
    class LoginWindow: public Ui_LoginWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINWINDOW_H
