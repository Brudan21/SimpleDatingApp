/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QCommandLinkButton>
#include <QtWidgets/QGridLayout>
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

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QWidget *topPanel;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_3;
    QLabel *label_5;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *verticalSpacer;
    QStackedWidget *stackedWidget;
    QWidget *reg_page1;
    QWidget *horizontalWidget;
    QHBoxLayout *horizontalLayout_3;
    QWidget *nameInput;
    QVBoxLayout *verticalLayout_3;
    QLabel *label;
    QLineEdit *name;
    QLabel *label_2;
    QLineEdit *surname;
    QLabel *label_3;
    QComboBox *sex;
    QLabel *label_4;
    QLineEdit *age;
    QSpacerItem *horizontalSpacer;
    QCommandLinkButton *next1;
    QWidget *reg_page2;
    QWidget *horizontalWidget_2;
    QHBoxLayout *horizontalLayout_5;
    QWidget *nameInput2;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_8;
    QComboBox *MBTI;
    QLabel *label_9;
    QGridLayout *gridLayout;
    QCheckBox *reading;
    QCheckBox *gardening;
    QCheckBox *cooking;
    QCheckBox *drawing;
    QCheckBox *photography;
    QCheckBox *writing;
    QCheckBox *travelling;
    QCheckBox *sports;
    QCheckBox *gaming;
    QCheckBox *board_games;
    QCheckBox *hiking;
    QCheckBox *fishing;
    QSpacerItem *horizontalSpacer_5;
    QCommandLinkButton *next2;
    QPushButton *back1;
    QWidget *reg_page3;
    QLineEdit *password;
    QLabel *label_6;
    QCommandLinkButton *save;
    QPushButton *back2;
    QWidget *loginPage;
    QWidget *nameInput_6;
    QVBoxLayout *verticalLayout_7;
    QLabel *label_17;
    QLineEdit *lineEdit;
    QLabel *label_18;
    QLineEdit *lineEdit_2;
    QSpacerItem *verticalSpacer_3;
    QPushButton *pushButton;
    QSpacerItem *verticalSpacer_4;
    QLabel *label_19;
    QPushButton *pushButton_2;
    QWidget *profilePage;
    QWidget *horizontalWidget_3;
    QHBoxLayout *horizontalLayout_4;
    QWidget *nameInput_2;
    QVBoxLayout *verticalLayout_5;
    QLabel *profileName;
    QLabel *profileSurname;
    QLabel *profileSex;
    QLabel *pAge;
    QSpacerItem *horizontalSpacer_6;
    QWidget *nameInput_3;
    QVBoxLayout *verticalLayout_6;
    QLabel *profileMBTI;
    QLabel *label_16;
    QTextBrowser *profileHobbies;
    QCommandLinkButton *matches_button;
    QWidget *matchesPage;
    QWidget *horizontalWidget_4;
    QHBoxLayout *horizontalLayout_6;
    QWidget *nameInput_4;
    QVBoxLayout *verticalLayout_8;
    QLabel *label_20;
    QLabel *label_21;
    QLabel *label_22;
    QLabel *label_23;
    QSpacerItem *horizontalSpacer_8;
    QPushButton *nextMatch_2;
    QSpacerItem *horizontalSpacer_7;
    QWidget *nameInput_5;
    QVBoxLayout *verticalLayout_9;
    QLabel *label_24;
    QLabel *label_25;
    QTextBrowser *textBrowser_2;
    QPushButton *back2_2;
    QPushButton *lastMatch;
    QPushButton *nextMatch;
    QCommandLinkButton *commandLinkButton;
    QPushButton *back2_3;
    QPushButton *back2_4;
    QWidget *savedMatchesPage;
    QWidget *nameInput_7;
    QVBoxLayout *verticalLayout_10;
    QLabel *label_26;
    QListWidget *listWidget;
    QPushButton *back2_5;
    QPushButton *back2_6;
    QSpacerItem *verticalSpacer_2;
    QWidget *bottomPanel;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(812, 573);
        MainWindow->setStyleSheet(QString::fromUtf8("#centralwidget {background-color: qlineargradient(spread:reflect, x1:0.727273, y1:0.205, x2:1, y2:1, stop:0.278409 rgba(170, 170, 255, 255), stop:1 rgba(255, 255, 255, 255));}\n"
"\n"
"#nameInput{border-radius:8px;background-color:rgb(80, 90, 120);}\n"
"#nameInput2{border-radius:8px;background-color:rgb(80, 90, 120);}\n"
"#nameInput_2{border-radius:8px;background-color:rgb(80, 90, 120);}\n"
"#nameInput_3{border-radius:8px;background-color:rgb(80, 90, 120);}\n"
"#nameInput_4{border-radius:8px;background-color:rgb(80, 90, 120);}\n"
"#nameInput_5{border-radius:8px;background-color:rgb(80, 90, 120);}\n"
"#nameInput_6{border-radius:8px;background-color:rgb(80, 90, 120);}\n"
"#nameInput_7{border-radius:8px;background-color:rgb(80, 90, 120);}\n"
"#back1{background-color:rgb(45, 58, 77);border-radius:2px;font: 700 italic 9pt \"Segoe UI\";color: rgb(255, 255, 255);}\n"
"#back2{background-color:rgb(45, 58, 77);border-radius:2px;font: 700 italic 9pt \"Segoe UI\";color: rgb(255, 255, 255);}\n"
"#back2_2{background-color:r"
                        "gb(45, 58, 77);border-radius:2px;font: 700 italic 9pt \"Segoe UI\";color: rgb(255, 255, 255);}\n"
"#back2_4{background-color:rgb(45, 58, 77);border-radius:2px;font: 700 italic 9pt \"Segoe UI\";color: rgb(255, 255, 255);}\n"
"#back2_3{background-color:rgb(45, 58, 77);border-radius:2px;font: 700 italic 9pt \"Segoe UI\";color: rgb(255, 255, 255);}\n"
"#back2_5{background-color:rgb(45, 58, 77);border-radius:2px;font: 700 italic 9pt \"Segoe UI\";color: rgb(255, 255, 255);}\n"
"#lastMatch{background-color:rgb(45, 58, 77);border-radius:2px;font: 700 italic 9pt \"Segoe UI\";color: rgb(255, 255, 255);}\n"
"#nextMatch{background-color:rgb(45, 58, 77);border-radius:2px;font: 700 italic 9pt \"Segoe UI\";color: rgb(255, 255, 255);}\n"
"#nextMatch_2{background-color:rgb(45, 58, 77);selection-background-color: rgb(0, 170, 0);border-radius:2px;font: 700 italic 9pt \"Segoe UI\";color: rgb(255, 255, 255);}\n"
"\n"
"\n"
"\n"
"QLabel { color: white; }\n"
"#topPanel{background-color:rgb(80, 90, 120);}"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        topPanel = new QWidget(centralwidget);
        topPanel->setObjectName("topPanel");
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
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


        verticalLayout->addWidget(topPanel);

        verticalSpacer = new QSpacerItem(20, 46, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName("stackedWidget");
        sizePolicy.setHeightForWidth(stackedWidget->sizePolicy().hasHeightForWidth());
        stackedWidget->setSizePolicy(sizePolicy);
        stackedWidget->setMinimumSize(QSize(0, 350));
        reg_page1 = new QWidget();
        reg_page1->setObjectName("reg_page1");
        horizontalWidget = new QWidget(reg_page1);
        horizontalWidget->setObjectName("horizontalWidget");
        horizontalWidget->setGeometry(QRect(20, 30, 601, 281));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
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

        name = new QLineEdit(nameInput);
        name->setObjectName("name");

        verticalLayout_3->addWidget(name);

        label_2 = new QLabel(nameInput);
        label_2->setObjectName("label_2");
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);

        verticalLayout_3->addWidget(label_2);

        surname = new QLineEdit(nameInput);
        surname->setObjectName("surname");

        verticalLayout_3->addWidget(surname);

        label_3 = new QLabel(nameInput);
        label_3->setObjectName("label_3");
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);

        verticalLayout_3->addWidget(label_3);

        sex = new QComboBox(nameInput);
        sex->addItem(QString());
        sex->addItem(QString());
        sex->setObjectName("sex");

        verticalLayout_3->addWidget(sex);

        label_4 = new QLabel(nameInput);
        label_4->setObjectName("label_4");
        sizePolicy.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy);

        verticalLayout_3->addWidget(label_4);

        age = new QLineEdit(nameInput);
        age->setObjectName("age");

        verticalLayout_3->addWidget(age);


        horizontalLayout_3->addWidget(nameInput);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        next1 = new QCommandLinkButton(reg_page1);
        next1->setObjectName("next1");
        next1->setGeometry(QRect(630, 300, 172, 38));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(next1->sizePolicy().hasHeightForWidth());
        next1->setSizePolicy(sizePolicy2);
        next1->setMinimumSize(QSize(20, 0));
        stackedWidget->addWidget(reg_page1);
        reg_page2 = new QWidget();
        reg_page2->setObjectName("reg_page2");
        horizontalWidget_2 = new QWidget(reg_page2);
        horizontalWidget_2->setObjectName("horizontalWidget_2");
        horizontalWidget_2->setGeometry(QRect(30, 30, 601, 281));
        sizePolicy1.setHeightForWidth(horizontalWidget_2->sizePolicy().hasHeightForWidth());
        horizontalWidget_2->setSizePolicy(sizePolicy1);
        horizontalWidget_2->setMinimumSize(QSize(600, 280));
        horizontalLayout_5 = new QHBoxLayout(horizontalWidget_2);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        nameInput2 = new QWidget(horizontalWidget_2);
        nameInput2->setObjectName("nameInput2");
        sizePolicy1.setHeightForWidth(nameInput2->sizePolicy().hasHeightForWidth());
        nameInput2->setSizePolicy(sizePolicy1);
        nameInput2->setMinimumSize(QSize(320, 270));
        verticalLayout_4 = new QVBoxLayout(nameInput2);
        verticalLayout_4->setSpacing(8);
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalLayout_4->setContentsMargins(25, 25, 25, 25);
        label_8 = new QLabel(nameInput2);
        label_8->setObjectName("label_8");
        sizePolicy.setHeightForWidth(label_8->sizePolicy().hasHeightForWidth());
        label_8->setSizePolicy(sizePolicy);

        verticalLayout_4->addWidget(label_8);

        MBTI = new QComboBox(nameInput2);
        MBTI->addItem(QString());
        MBTI->addItem(QString());
        MBTI->addItem(QString());
        MBTI->addItem(QString());
        MBTI->addItem(QString());
        MBTI->addItem(QString());
        MBTI->addItem(QString());
        MBTI->addItem(QString());
        MBTI->addItem(QString());
        MBTI->addItem(QString());
        MBTI->addItem(QString());
        MBTI->addItem(QString());
        MBTI->addItem(QString());
        MBTI->addItem(QString());
        MBTI->addItem(QString());
        MBTI->addItem(QString());
        MBTI->setObjectName("MBTI");

        verticalLayout_4->addWidget(MBTI);

        label_9 = new QLabel(nameInput2);
        label_9->setObjectName("label_9");
        sizePolicy.setHeightForWidth(label_9->sizePolicy().hasHeightForWidth());
        label_9->setSizePolicy(sizePolicy);

        verticalLayout_4->addWidget(label_9);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        reading = new QCheckBox(nameInput2);
        reading->setObjectName("reading");

        gridLayout->addWidget(reading, 1, 1, 1, 1);

        gardening = new QCheckBox(nameInput2);
        gardening->setObjectName("gardening");

        gridLayout->addWidget(gardening, 2, 1, 1, 1);

        cooking = new QCheckBox(nameInput2);
        cooking->setObjectName("cooking");

        gridLayout->addWidget(cooking, 3, 1, 1, 1);

        drawing = new QCheckBox(nameInput2);
        drawing->setObjectName("drawing");

        gridLayout->addWidget(drawing, 2, 0, 1, 1);

        photography = new QCheckBox(nameInput2);
        photography->setObjectName("photography");
        photography->setChecked(false);

        gridLayout->addWidget(photography, 0, 0, 1, 1);

        writing = new QCheckBox(nameInput2);
        writing->setObjectName("writing");

        gridLayout->addWidget(writing, 1, 0, 1, 1);

        travelling = new QCheckBox(nameInput2);
        travelling->setObjectName("travelling");

        gridLayout->addWidget(travelling, 3, 0, 1, 1);

        sports = new QCheckBox(nameInput2);
        sports->setObjectName("sports");

        gridLayout->addWidget(sports, 0, 1, 1, 1);

        gaming = new QCheckBox(nameInput2);
        gaming->setObjectName("gaming");

        gridLayout->addWidget(gaming, 4, 0, 1, 1);

        board_games = new QCheckBox(nameInput2);
        board_games->setObjectName("board_games");

        gridLayout->addWidget(board_games, 4, 1, 1, 1);

        hiking = new QCheckBox(nameInput2);
        hiking->setObjectName("hiking");

        gridLayout->addWidget(hiking, 5, 0, 1, 1);

        fishing = new QCheckBox(nameInput2);
        fishing->setObjectName("fishing");

        gridLayout->addWidget(fishing, 5, 1, 1, 1);


        verticalLayout_4->addLayout(gridLayout);


        horizontalLayout_5->addWidget(nameInput2);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_5);

        next2 = new QCommandLinkButton(reg_page2);
        next2->setObjectName("next2");
        next2->setGeometry(QRect(640, 300, 172, 38));
        sizePolicy2.setHeightForWidth(next2->sizePolicy().hasHeightForWidth());
        next2->setSizePolicy(sizePolicy2);
        next2->setMinimumSize(QSize(20, 0));
        back1 = new QPushButton(reg_page2);
        back1->setObjectName("back1");
        back1->setGeometry(QRect(30, 5, 81, 30));
        sizePolicy1.setHeightForWidth(back1->sizePolicy().hasHeightForWidth());
        back1->setSizePolicy(sizePolicy1);
        back1->setMinimumSize(QSize(30, 30));
        stackedWidget->addWidget(reg_page2);
        back1->raise();
        horizontalWidget_2->raise();
        next2->raise();
        reg_page3 = new QWidget();
        reg_page3->setObjectName("reg_page3");
        password = new QLineEdit(reg_page3);
        password->setObjectName("password");
        password->setGeometry(QRect(330, 180, 113, 22));
        label_6 = new QLabel(reg_page3);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(330, 150, 101, 16));
        save = new QCommandLinkButton(reg_page3);
        save->setObjectName("save");
        save->setGeometry(QRect(640, 300, 172, 38));
        sizePolicy2.setHeightForWidth(save->sizePolicy().hasHeightForWidth());
        save->setSizePolicy(sizePolicy2);
        save->setMinimumSize(QSize(20, 0));
        back2 = new QPushButton(reg_page3);
        back2->setObjectName("back2");
        back2->setGeometry(QRect(230, 175, 81, 31));
        sizePolicy1.setHeightForWidth(back2->sizePolicy().hasHeightForWidth());
        back2->setSizePolicy(sizePolicy1);
        back2->setMinimumSize(QSize(30, 30));
        stackedWidget->addWidget(reg_page3);
        back2->raise();
        password->raise();
        label_6->raise();
        save->raise();
        loginPage = new QWidget();
        loginPage->setObjectName("loginPage");
        nameInput_6 = new QWidget(loginPage);
        nameInput_6->setObjectName("nameInput_6");
        nameInput_6->setGeometry(QRect(20, 40, 320, 270));
        sizePolicy1.setHeightForWidth(nameInput_6->sizePolicy().hasHeightForWidth());
        nameInput_6->setSizePolicy(sizePolicy1);
        nameInput_6->setMinimumSize(QSize(320, 270));
        verticalLayout_7 = new QVBoxLayout(nameInput_6);
        verticalLayout_7->setSpacing(8);
        verticalLayout_7->setObjectName("verticalLayout_7");
        verticalLayout_7->setContentsMargins(25, 25, 25, 25);
        label_17 = new QLabel(nameInput_6);
        label_17->setObjectName("label_17");
        sizePolicy.setHeightForWidth(label_17->sizePolicy().hasHeightForWidth());
        label_17->setSizePolicy(sizePolicy);

        verticalLayout_7->addWidget(label_17);

        lineEdit = new QLineEdit(nameInput_6);
        lineEdit->setObjectName("lineEdit");

        verticalLayout_7->addWidget(lineEdit);

        label_18 = new QLabel(nameInput_6);
        label_18->setObjectName("label_18");
        sizePolicy.setHeightForWidth(label_18->sizePolicy().hasHeightForWidth());
        label_18->setSizePolicy(sizePolicy);

        verticalLayout_7->addWidget(label_18);

        lineEdit_2 = new QLineEdit(nameInput_6);
        lineEdit_2->setObjectName("lineEdit_2");

        verticalLayout_7->addWidget(lineEdit_2);

        verticalSpacer_3 = new QSpacerItem(20, 8, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_7->addItem(verticalSpacer_3);

        pushButton = new QPushButton(nameInput_6);
        pushButton->setObjectName("pushButton");

        verticalLayout_7->addWidget(pushButton);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_7->addItem(verticalSpacer_4);

        label_19 = new QLabel(nameInput_6);
        label_19->setObjectName("label_19");

        verticalLayout_7->addWidget(label_19);

        pushButton_2 = new QPushButton(nameInput_6);
        pushButton_2->setObjectName("pushButton_2");

        verticalLayout_7->addWidget(pushButton_2);

        stackedWidget->addWidget(loginPage);
        profilePage = new QWidget();
        profilePage->setObjectName("profilePage");
        horizontalWidget_3 = new QWidget(profilePage);
        horizontalWidget_3->setObjectName("horizontalWidget_3");
        horizontalWidget_3->setGeometry(QRect(10, 40, 781, 281));
        sizePolicy1.setHeightForWidth(horizontalWidget_3->sizePolicy().hasHeightForWidth());
        horizontalWidget_3->setSizePolicy(sizePolicy1);
        horizontalWidget_3->setMinimumSize(QSize(600, 280));
        horizontalLayout_4 = new QHBoxLayout(horizontalWidget_3);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        nameInput_2 = new QWidget(horizontalWidget_3);
        nameInput_2->setObjectName("nameInput_2");
        sizePolicy1.setHeightForWidth(nameInput_2->sizePolicy().hasHeightForWidth());
        nameInput_2->setSizePolicy(sizePolicy1);
        nameInput_2->setMinimumSize(QSize(320, 270));
        verticalLayout_5 = new QVBoxLayout(nameInput_2);
        verticalLayout_5->setSpacing(8);
        verticalLayout_5->setObjectName("verticalLayout_5");
        verticalLayout_5->setContentsMargins(25, 25, 25, 25);
        profileName = new QLabel(nameInput_2);
        profileName->setObjectName("profileName");
        sizePolicy.setHeightForWidth(profileName->sizePolicy().hasHeightForWidth());
        profileName->setSizePolicy(sizePolicy);

        verticalLayout_5->addWidget(profileName);

        profileSurname = new QLabel(nameInput_2);
        profileSurname->setObjectName("profileSurname");
        sizePolicy.setHeightForWidth(profileSurname->sizePolicy().hasHeightForWidth());
        profileSurname->setSizePolicy(sizePolicy);

        verticalLayout_5->addWidget(profileSurname);

        profileSex = new QLabel(nameInput_2);
        profileSex->setObjectName("profileSex");
        sizePolicy.setHeightForWidth(profileSex->sizePolicy().hasHeightForWidth());
        profileSex->setSizePolicy(sizePolicy);

        verticalLayout_5->addWidget(profileSex);

        pAge = new QLabel(nameInput_2);
        pAge->setObjectName("pAge");
        sizePolicy.setHeightForWidth(pAge->sizePolicy().hasHeightForWidth());
        pAge->setSizePolicy(sizePolicy);

        verticalLayout_5->addWidget(pAge);


        horizontalLayout_4->addWidget(nameInput_2);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_6);

        nameInput_3 = new QWidget(horizontalWidget_3);
        nameInput_3->setObjectName("nameInput_3");
        sizePolicy1.setHeightForWidth(nameInput_3->sizePolicy().hasHeightForWidth());
        nameInput_3->setSizePolicy(sizePolicy1);
        nameInput_3->setMinimumSize(QSize(320, 260));
        verticalLayout_6 = new QVBoxLayout(nameInput_3);
        verticalLayout_6->setSpacing(8);
        verticalLayout_6->setObjectName("verticalLayout_6");
        verticalLayout_6->setContentsMargins(25, 25, 25, 25);
        profileMBTI = new QLabel(nameInput_3);
        profileMBTI->setObjectName("profileMBTI");
        sizePolicy.setHeightForWidth(profileMBTI->sizePolicy().hasHeightForWidth());
        profileMBTI->setSizePolicy(sizePolicy);

        verticalLayout_6->addWidget(profileMBTI);

        label_16 = new QLabel(nameInput_3);
        label_16->setObjectName("label_16");
        sizePolicy.setHeightForWidth(label_16->sizePolicy().hasHeightForWidth());
        label_16->setSizePolicy(sizePolicy);

        verticalLayout_6->addWidget(label_16);

        profileHobbies = new QTextBrowser(nameInput_3);
        profileHobbies->setObjectName("profileHobbies");

        verticalLayout_6->addWidget(profileHobbies);


        horizontalLayout_4->addWidget(nameInput_3);

        matches_button = new QCommandLinkButton(profilePage);
        matches_button->setObjectName("matches_button");
        matches_button->setGeometry(QRect(570, 320, 172, 38));
        sizePolicy2.setHeightForWidth(matches_button->sizePolicy().hasHeightForWidth());
        matches_button->setSizePolicy(sizePolicy2);
        matches_button->setMinimumSize(QSize(20, 0));
        stackedWidget->addWidget(profilePage);
        matchesPage = new QWidget();
        matchesPage->setObjectName("matchesPage");
        horizontalWidget_4 = new QWidget(matchesPage);
        horizontalWidget_4->setObjectName("horizontalWidget_4");
        horizontalWidget_4->setGeometry(QRect(10, 40, 781, 281));
        sizePolicy1.setHeightForWidth(horizontalWidget_4->sizePolicy().hasHeightForWidth());
        horizontalWidget_4->setSizePolicy(sizePolicy1);
        horizontalWidget_4->setMinimumSize(QSize(600, 280));
        horizontalLayout_6 = new QHBoxLayout(horizontalWidget_4);
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        nameInput_4 = new QWidget(horizontalWidget_4);
        nameInput_4->setObjectName("nameInput_4");
        sizePolicy1.setHeightForWidth(nameInput_4->sizePolicy().hasHeightForWidth());
        nameInput_4->setSizePolicy(sizePolicy1);
        nameInput_4->setMinimumSize(QSize(320, 280));
        verticalLayout_8 = new QVBoxLayout(nameInput_4);
        verticalLayout_8->setSpacing(8);
        verticalLayout_8->setObjectName("verticalLayout_8");
        verticalLayout_8->setContentsMargins(25, 25, 25, 25);
        label_20 = new QLabel(nameInput_4);
        label_20->setObjectName("label_20");
        sizePolicy.setHeightForWidth(label_20->sizePolicy().hasHeightForWidth());
        label_20->setSizePolicy(sizePolicy);

        verticalLayout_8->addWidget(label_20);

        label_21 = new QLabel(nameInput_4);
        label_21->setObjectName("label_21");
        sizePolicy.setHeightForWidth(label_21->sizePolicy().hasHeightForWidth());
        label_21->setSizePolicy(sizePolicy);

        verticalLayout_8->addWidget(label_21);

        label_22 = new QLabel(nameInput_4);
        label_22->setObjectName("label_22");
        sizePolicy.setHeightForWidth(label_22->sizePolicy().hasHeightForWidth());
        label_22->setSizePolicy(sizePolicy);

        verticalLayout_8->addWidget(label_22);

        label_23 = new QLabel(nameInput_4);
        label_23->setObjectName("label_23");
        sizePolicy.setHeightForWidth(label_23->sizePolicy().hasHeightForWidth());
        label_23->setSizePolicy(sizePolicy);

        verticalLayout_8->addWidget(label_23);


        horizontalLayout_6->addWidget(nameInput_4);

        horizontalSpacer_8 = new QSpacerItem(17, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_8);

        nextMatch_2 = new QPushButton(horizontalWidget_4);
        nextMatch_2->setObjectName("nextMatch_2");
        sizePolicy1.setHeightForWidth(nextMatch_2->sizePolicy().hasHeightForWidth());
        nextMatch_2->setSizePolicy(sizePolicy1);
        nextMatch_2->setMinimumSize(QSize(95, 30));

        horizontalLayout_6->addWidget(nextMatch_2);

        horizontalSpacer_7 = new QSpacerItem(16, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_7);

        nameInput_5 = new QWidget(horizontalWidget_4);
        nameInput_5->setObjectName("nameInput_5");
        sizePolicy1.setHeightForWidth(nameInput_5->sizePolicy().hasHeightForWidth());
        nameInput_5->setSizePolicy(sizePolicy1);
        nameInput_5->setMinimumSize(QSize(320, 270));
        verticalLayout_9 = new QVBoxLayout(nameInput_5);
        verticalLayout_9->setSpacing(8);
        verticalLayout_9->setObjectName("verticalLayout_9");
        verticalLayout_9->setContentsMargins(25, 25, 25, 25);
        label_24 = new QLabel(nameInput_5);
        label_24->setObjectName("label_24");
        sizePolicy.setHeightForWidth(label_24->sizePolicy().hasHeightForWidth());
        label_24->setSizePolicy(sizePolicy);

        verticalLayout_9->addWidget(label_24);

        label_25 = new QLabel(nameInput_5);
        label_25->setObjectName("label_25");
        sizePolicy.setHeightForWidth(label_25->sizePolicy().hasHeightForWidth());
        label_25->setSizePolicy(sizePolicy);

        verticalLayout_9->addWidget(label_25);

        textBrowser_2 = new QTextBrowser(nameInput_5);
        textBrowser_2->setObjectName("textBrowser_2");

        verticalLayout_9->addWidget(textBrowser_2);


        horizontalLayout_6->addWidget(nameInput_5);

        back2_2 = new QPushButton(matchesPage);
        back2_2->setObjectName("back2_2");
        back2_2->setGeometry(QRect(10, 14, 81, 30));
        sizePolicy1.setHeightForWidth(back2_2->sizePolicy().hasHeightForWidth());
        back2_2->setSizePolicy(sizePolicy1);
        back2_2->setMinimumSize(QSize(30, 30));
        lastMatch = new QPushButton(matchesPage);
        lastMatch->setObjectName("lastMatch");
        lastMatch->setGeometry(QRect(229, 14, 101, 30));
        sizePolicy1.setHeightForWidth(lastMatch->sizePolicy().hasHeightForWidth());
        lastMatch->setSizePolicy(sizePolicy1);
        lastMatch->setMinimumSize(QSize(30, 30));
        nextMatch = new QPushButton(matchesPage);
        nextMatch->setObjectName("nextMatch");
        nextMatch->setGeometry(QRect(470, 14, 101, 31));
        sizePolicy1.setHeightForWidth(nextMatch->sizePolicy().hasHeightForWidth());
        nextMatch->setSizePolicy(sizePolicy1);
        nextMatch->setMinimumSize(QSize(30, 30));
        commandLinkButton = new QCommandLinkButton(matchesPage);
        commandLinkButton->setObjectName("commandLinkButton");
        commandLinkButton->setGeometry(QRect(570, 314, 185, 41));
        back2_3 = new QPushButton(matchesPage);
        back2_3->setObjectName("back2_3");
        back2_3->setGeometry(QRect(10, 40, 81, 51));
        sizePolicy1.setHeightForWidth(back2_3->sizePolicy().hasHeightForWidth());
        back2_3->setSizePolicy(sizePolicy1);
        back2_3->setMinimumSize(QSize(30, 30));
        back2_4 = new QPushButton(matchesPage);
        back2_4->setObjectName("back2_4");
        back2_4->setGeometry(QRect(250, 40, 80, 51));
        sizePolicy1.setHeightForWidth(back2_4->sizePolicy().hasHeightForWidth());
        back2_4->setSizePolicy(sizePolicy1);
        back2_4->setMinimumSize(QSize(30, 30));
        stackedWidget->addWidget(matchesPage);
        back2_4->raise();
        back2_3->raise();
        nextMatch->raise();
        lastMatch->raise();
        back2_2->raise();
        horizontalWidget_4->raise();
        commandLinkButton->raise();
        savedMatchesPage = new QWidget();
        savedMatchesPage->setObjectName("savedMatchesPage");
        nameInput_7 = new QWidget(savedMatchesPage);
        nameInput_7->setObjectName("nameInput_7");
        nameInput_7->setGeometry(QRect(20, 40, 320, 281));
        sizePolicy1.setHeightForWidth(nameInput_7->sizePolicy().hasHeightForWidth());
        nameInput_7->setSizePolicy(sizePolicy1);
        nameInput_7->setMinimumSize(QSize(320, 270));
        verticalLayout_10 = new QVBoxLayout(nameInput_7);
        verticalLayout_10->setSpacing(8);
        verticalLayout_10->setObjectName("verticalLayout_10");
        verticalLayout_10->setContentsMargins(25, 25, 25, 25);
        label_26 = new QLabel(nameInput_7);
        label_26->setObjectName("label_26");
        sizePolicy.setHeightForWidth(label_26->sizePolicy().hasHeightForWidth());
        label_26->setSizePolicy(sizePolicy);

        verticalLayout_10->addWidget(label_26);

        listWidget = new QListWidget(nameInput_7);
        listWidget->setObjectName("listWidget");
        listWidget->setProperty("isWrapping", QVariant(false));
        listWidget->setResizeMode(QListView::Adjust);
        listWidget->setViewMode(QListView::ListMode);

        verticalLayout_10->addWidget(listWidget);

        back2_5 = new QPushButton(savedMatchesPage);
        back2_5->setObjectName("back2_5");
        back2_5->setGeometry(QRect(20, 14, 81, 30));
        sizePolicy1.setHeightForWidth(back2_5->sizePolicy().hasHeightForWidth());
        back2_5->setSizePolicy(sizePolicy1);
        back2_5->setMinimumSize(QSize(30, 30));
        back2_6 = new QPushButton(savedMatchesPage);
        back2_6->setObjectName("back2_6");
        back2_6->setGeometry(QRect(20, 40, 81, 71));
        sizePolicy1.setHeightForWidth(back2_6->sizePolicy().hasHeightForWidth());
        back2_6->setSizePolicy(sizePolicy1);
        back2_6->setMinimumSize(QSize(30, 30));
        back2_6->setStyleSheet(QString::fromUtf8("#back2_6{background-color:rgb(45, 58, 77);selection-background-color: rgb(0, 170, 0);border-radius:2px;font: 700 italic 9pt \"Segoe UI\";color: rgb(255, 255, 255);}"));
        stackedWidget->addWidget(savedMatchesPage);
        back2_6->raise();
        back2_5->raise();
        nameInput_7->raise();

        verticalLayout->addWidget(stackedWidget);

        verticalSpacer_2 = new QSpacerItem(20, 30, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_2);

        bottomPanel = new QWidget(centralwidget);
        bottomPanel->setObjectName("bottomPanel");
        sizePolicy.setHeightForWidth(bottomPanel->sizePolicy().hasHeightForWidth());
        bottomPanel->setSizePolicy(sizePolicy);
        bottomPanel->setMinimumSize(QSize(0, 50));
        horizontalLayout = new QHBoxLayout(bottomPanel);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout->addWidget(bottomPanel);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(3);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "SimpleDatingApp", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Name:", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Surname:", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Sex:", nullptr));
        sex->setItemText(0, QCoreApplication::translate("MainWindow", "M", nullptr));
        sex->setItemText(1, QCoreApplication::translate("MainWindow", "F", nullptr));

        label_4->setText(QCoreApplication::translate("MainWindow", "Age:", nullptr));
        next1->setText(QCoreApplication::translate("MainWindow", "Next", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "MBTI:", nullptr));
        MBTI->setItemText(0, QCoreApplication::translate("MainWindow", "ISTJ", nullptr));
        MBTI->setItemText(1, QCoreApplication::translate("MainWindow", "ISFJ", nullptr));
        MBTI->setItemText(2, QCoreApplication::translate("MainWindow", "INFJ", nullptr));
        MBTI->setItemText(3, QCoreApplication::translate("MainWindow", "INTJ", nullptr));
        MBTI->setItemText(4, QCoreApplication::translate("MainWindow", "ISTP", nullptr));
        MBTI->setItemText(5, QCoreApplication::translate("MainWindow", "ISFP", nullptr));
        MBTI->setItemText(6, QCoreApplication::translate("MainWindow", "INFP", nullptr));
        MBTI->setItemText(7, QCoreApplication::translate("MainWindow", "INTP", nullptr));
        MBTI->setItemText(8, QCoreApplication::translate("MainWindow", "ESTP", nullptr));
        MBTI->setItemText(9, QCoreApplication::translate("MainWindow", "ESFP", nullptr));
        MBTI->setItemText(10, QCoreApplication::translate("MainWindow", "ENFP", nullptr));
        MBTI->setItemText(11, QCoreApplication::translate("MainWindow", "ENTP", nullptr));
        MBTI->setItemText(12, QCoreApplication::translate("MainWindow", "ESTJ", nullptr));
        MBTI->setItemText(13, QCoreApplication::translate("MainWindow", "ESFJ", nullptr));
        MBTI->setItemText(14, QCoreApplication::translate("MainWindow", "ENFJ", nullptr));
        MBTI->setItemText(15, QCoreApplication::translate("MainWindow", "ENTJ", nullptr));

        label_9->setText(QCoreApplication::translate("MainWindow", "Hobbies:", nullptr));
        reading->setText(QCoreApplication::translate("MainWindow", "Reading", nullptr));
        gardening->setText(QCoreApplication::translate("MainWindow", "Gardening", nullptr));
        cooking->setText(QCoreApplication::translate("MainWindow", "Cooking", nullptr));
        drawing->setText(QCoreApplication::translate("MainWindow", "Drawing", nullptr));
        photography->setText(QCoreApplication::translate("MainWindow", "Photography", nullptr));
        writing->setText(QCoreApplication::translate("MainWindow", "Writing", nullptr));
        travelling->setText(QCoreApplication::translate("MainWindow", "Travelling", nullptr));
        sports->setText(QCoreApplication::translate("MainWindow", "Sports", nullptr));
        gaming->setText(QCoreApplication::translate("MainWindow", "Gaming", nullptr));
        board_games->setText(QCoreApplication::translate("MainWindow", "Board games", nullptr));
        hiking->setText(QCoreApplication::translate("MainWindow", "Hiking", nullptr));
        fishing->setText(QCoreApplication::translate("MainWindow", "Fishing", nullptr));
        next2->setText(QCoreApplication::translate("MainWindow", "Next", nullptr));
        back1->setText(QCoreApplication::translate("MainWindow", "Back", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Choose a password", nullptr));
        save->setText(QCoreApplication::translate("MainWindow", "Save", nullptr));
        back2->setText(QCoreApplication::translate("MainWindow", "Back", nullptr));
        label_17->setText(QCoreApplication::translate("MainWindow", "First name:", nullptr));
        label_18->setText(QCoreApplication::translate("MainWindow", "Password:", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Login", nullptr));
        label_19->setText(QCoreApplication::translate("MainWindow", "Don't have an account?", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "Register Now", nullptr));
        profileName->setText(QCoreApplication::translate("MainWindow", "Name:", nullptr));
        profileSurname->setText(QCoreApplication::translate("MainWindow", "Surname:", nullptr));
        profileSex->setText(QCoreApplication::translate("MainWindow", "Sex:", nullptr));
        pAge->setText(QCoreApplication::translate("MainWindow", "Age:", nullptr));
        profileMBTI->setText(QCoreApplication::translate("MainWindow", "MBTI:", nullptr));
        label_16->setText(QCoreApplication::translate("MainWindow", "Hobbies:", nullptr));
        profileHobbies->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        matches_button->setText(QCoreApplication::translate("MainWindow", "Matches", nullptr));
        label_20->setText(QCoreApplication::translate("MainWindow", "Name:", nullptr));
        label_21->setText(QCoreApplication::translate("MainWindow", "Surname:", nullptr));
        label_22->setText(QCoreApplication::translate("MainWindow", "Sex:", nullptr));
        label_23->setText(QCoreApplication::translate("MainWindow", "Age:", nullptr));
        nextMatch_2->setText(QCoreApplication::translate("MainWindow", "Like", nullptr));
        label_24->setText(QCoreApplication::translate("MainWindow", "MBTI:", nullptr));
        label_25->setText(QCoreApplication::translate("MainWindow", "Hobbies:", nullptr));
        back2_2->setText(QCoreApplication::translate("MainWindow", "Back", nullptr));
        lastMatch->setText(QCoreApplication::translate("MainWindow", "Last match", nullptr));
        nextMatch->setText(QCoreApplication::translate("MainWindow", "Next match", nullptr));
        commandLinkButton->setText(QCoreApplication::translate("MainWindow", "Likes", nullptr));
        back2_3->setText(QString());
        back2_4->setText(QCoreApplication::translate("MainWindow", "Back", nullptr));
        label_26->setText(QCoreApplication::translate("MainWindow", "Currently saved/liked matches", nullptr));
        back2_5->setText(QCoreApplication::translate("MainWindow", "Back", nullptr));
        back2_6->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
