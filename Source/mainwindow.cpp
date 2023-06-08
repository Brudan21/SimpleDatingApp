#include "mainwindow.h"
#include"loginwindow.h"
#include "ui_loginwindow.h"
#include "./ui_mainwindow.h"
#include<QString>
#include<QVariant>
#include<vector>
#include<algorithm>
#include<string>
#include<iostream>
using namespace std;
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_save_clicked()
{

    QVariant regName=ui->name->property("text");
    QVariant regSurname=ui->surname->property("text");;
    QVariant regSex=ui->sex->property("currentText");
    QVariant regAge=ui->age->property("text");;
    QVariant regMBTI=ui->MBTI->property("currentText");
    QString regHobbies="";
    QVariant regPassword=ui->password->property("text");
    if(ui->writing->property("checked")==1)
        regHobbies+=" "+(ui->writing->property("text")).toString();
    if(ui->reading->property("checked")==1)
        regHobbies+=" "+(ui->reading->property("text")).toString();
    if(ui->board_games->property("checked")==1)
        regHobbies+=" "+(ui->board_games->property("text")).toString();
    if(ui->sports->property("checked")==1)
        regHobbies+=" "+(ui->sports->property("text")).toString();
    if(ui->hiking->property("checked")==1)
        regHobbies+=" "+(ui->hiking->property("text")).toString();
    if(ui->gaming->property("checked")==1)
        regHobbies+=" "+(ui->gaming->property("text")).toString();
    if(ui->drawing->property("checked")==1)
        regHobbies+=" "+(ui->drawing->property("text")).toString();
    if(ui->travelling->property("checked")==1)
        regHobbies+=" "+(ui->travelling->property("text")).toString();
    if(ui->photography->property("checked")==1)
        regHobbies+=" "+(ui->photography->property("text")).toString();
    if(ui->cooking->property("checked")==1)
        regHobbies+=" "+(ui->cooking->property("text")).toString();
    if(ui->fishing->property("checked")==1)
        regHobbies+=" "+(ui->fishing->property("text")).toString();
    if(ui->gardening->property("checked")==1)
        regHobbies+=" "+(ui->gardening->property("text")).toString();


   //static users mainUser;
    mainUser.putName(regName.toString());
    mainUser.putSurname(regSurname.toString());
    mainUser.putSex(regSex.toString());
    mainUser.putAge(regAge.toString());
    mainUser.putMBTI(regMBTI.toString());
    mainUser.putHobbies(regHobbies);
    mainUser.putPassword(regPassword.toString());


   ui->pAge->setProperty("text","Age: "+mainUser.getAge());
   ui->profileHobbies->setProperty("markdown",mainUser.getHobbies());
   ui->profileSurname->setProperty("text","Surname: "+mainUser.getSurname());
   ui->profileMBTI->setProperty("text","MBTI: "+mainUser.getMBTI());
   ui->profileName->setProperty("text","Name: "+mainUser.getName());
   ui->profileSex->setProperty("text","Sex: "+mainUser.getSex());

   QString filename = "mainUser.xml";
   QFile file(filename);
   if (!file.open(QFile::ReadOnly | QFile::Text))
        qDebug() << "Error saving XML file.";



   QDomDocument xml;
   xml.setContent(&file);
   qDebug()<<xml.isNull();

   QDomElement root= xml.firstChildElement();

   qDebug()<<xml.firstChildElement().isNull();
   file.close();
  //QDomElement root = xml.createElement("mainUser");
   QDomElement tagObject = xml.createElement("object");
   //xml.appendChild(root);



    QDomElement tagName = xml.createElement("name");
    tagObject.appendChild(tagName);
    QDomText textName = xml.createTextNode(mainUser.getName());
    tagName.appendChild(textName);

    QDomElement tagName2 = xml.createElement("surname");
    tagObject.appendChild(tagName2);
    QDomText textName6 = xml.createTextNode(mainUser.getSurname());
    tagName2.appendChild(textName6);

    QDomElement tagName3 = xml.createElement("age");
    tagObject.appendChild(tagName3);
    QDomText textName2 = xml.createTextNode(mainUser.getAge());
    tagName3.appendChild(textName2);

    QDomElement tagName4 = xml.createElement("MBTI");
    tagObject.appendChild(tagName4);
    QDomText textName3 = xml.createTextNode(mainUser.getMBTI());
    tagName4.appendChild(textName3);

    QDomElement tagName5 = xml.createElement("sex");
    tagObject.appendChild(tagName5);
    QDomText textName4 = xml.createTextNode(mainUser.getSex());
    tagName5.appendChild(textName4);

    QDomElement tagName6 = xml.createElement("password");
    tagObject.appendChild(tagName6);
    QDomText textName5 = xml.createTextNode(mainUser.getPassword());
    tagName6.appendChild(textName5);

    root.appendChild(tagObject);
    file.open(QIODevice::WriteOnly | QIODevice::Text);
    QTextStream output(&file);
    output << xml.toString();
    file.close();




    ui->name->setProperty("text","");
    ui->surname->setProperty("text","");;
    ui->sex->setProperty("currentText","");
    ui->age->setProperty("text","");;
    ui->MBTI->setProperty("currentText","");
    ui->password->setProperty("text","");

   ui->stackedWidget->setProperty("currentIndex",3);
}


void MainWindow::on_next1_clicked()
{
    ui->stackedWidget->setProperty("currentIndex",1);
}


void MainWindow::on_back1_clicked()
{
    ui->stackedWidget->setProperty("currentIndex",0);
}


void MainWindow::on_next2_clicked()
{
    ui->stackedWidget->setProperty("currentIndex",2);
}


void MainWindow::on_back2_clicked()
{
    ui->stackedWidget->setProperty("currentIndex",1);
}


void MainWindow::on_pushButton_clicked()
{
    static vector<users> vecUsers;
    //  static vector<users> vecMatchingUsers1;
    vecUsers.clear();
    users tempUser;


    QXmlStreamReader xml;
    QString filename = "mainUser.xml";
    QFile file(filename);
    if (!file.open(QFile::ReadOnly | QFile::Text))
    qDebug() << "Error loading XML file.";

    xml.setDevice(&file);
    while(!xml.atEnd()) {

    if (xml.isStartElement()) {
        QString name = xml.name().toString();
        if (name == "object") {
            qDebug() <<"[Object]=================================";
            for (int i = 0; i < xml.attributes().size();i++) {
                qDebug() << xml.attributes().at(i).name()
                         << xml.attributes().at(i).value();
            }
        }

        if (name == "name")
            tempUser.putName(xml.readElementText());
        if (name == "sex")
            tempUser.putSex(xml.readElementText());
        if( name == "surname" )
            tempUser.putSurname(xml.readElementText());
        if( name =="age" )
            tempUser.putAge(xml.readElementText());
        if( name =="hobbies" )
            tempUser.putHobbies(xml.readElementText());
        if( name == "MBTI")
            tempUser.putMBTI( xml.readElementText());
        if( name == "password")
            tempUser.putPassword(xml.readElementText());


    }

    //  qDebug()<<vecUsers[b].getName();
    if (xml.isEndElement()) {

        QString name = xml.name().toString();
        if (name == "object") {
            qDebug() <<"=========================================";
            qDebug()<<tempUser.getName();
            if(tempUser.getName()==(ui->lineEdit->property("text")).toString()&&tempUser.getPassword()==(ui->lineEdit_2->property("text")).toString()){

                    ui->profileName->setProperty("text","Name: "+tempUser.getName());
                    ui->profileSurname->setProperty("text","Surname: "+tempUser.getSurname());
                    ui->profileSex->setProperty("text","Sex: "+tempUser.getSex());
                    ui->profileMBTI->setProperty("text","MBTI: "+tempUser.getMBTI());
                    ui->pAge->setProperty("text","Age: "+tempUser.getAge());
                    ui->profileHobbies->setProperty("markdown",tempUser.getHobbies());
                    mainUser.putName(tempUser.getName());
                    mainUser.putSurname(tempUser.getSurname());
                    mainUser.putSex(tempUser.getSex());
                    mainUser.putAge(tempUser.getAge());
                    mainUser.putMBTI(tempUser.getMBTI());
                    mainUser.putHobbies(tempUser.getHobbies());
                    mainUser.putPassword(tempUser.getPassword());

                 //file.close();
                //goto exit;
            }
        }
    }

    xml.readNext();
    }
    if (xml.hasError()) {
    qDebug() << "Error loading XML:" << xml.errorString();
    }



    ui->stackedWidget->setProperty("currentIndex",4);
}


void MainWindow::on_pushButton_2_clicked()
{
    ui->stackedWidget->setProperty("currentIndex",0);
}


void MainWindow::on_matches_button_clicked()
{
    vector<users> vecUsers;
  //  static vector<users> vecMatchingUsers1;
    //vecUsers.clear();
    users tempUser;

    qDebug()<<"this far";
    QXmlStreamReader xml;
    QString filename = "userBase.xml";
    QFile file(filename);
    if (!file.open(QFile::ReadOnly | QFile::Text))
        qDebug() << "Error loading XML file.";

        xml.setDevice(&file);
    while(!xml.atEnd()) {

        if (xml.isStartElement()) {
            QString name = xml.name().toString();
            if (name == "object") {
               qDebug() <<"[Object]=================================";
                for (int i = 0; i < xml.attributes().size();i++) {
                    qDebug() << xml.attributes().at(i).name()
                             << xml.attributes().at(i).value();
                }
            }

            if (name == "name")
                tempUser.putName(xml.readElementText());
            if( name == "surname" )
                tempUser.putSurname(xml.readElementText());
            if( name =="age" )
                tempUser.putAge(xml.readElementText());
            if( name =="hobbies" )
                tempUser.putHobbies(xml.readElementText());
            if( name == "MBTI")
                tempUser.putMBTI( xml.readElementText());
            if( name == "sex")
                tempUser.putSex( xml.readElementText());


        }

      //  qDebug()<<vecUsers[b].getName();
        if (xml.isEndElement()) {

            QString name = xml.name().toString();
            if (name == "object") {
                qDebug() <<"=========================================";

                vecUsers.push_back(tempUser);
                qDebug()<< vecUsers[0].getName();

            }
        }

        xml.readNext();

    if (xml.hasError()) {
        qDebug() << "Error loading XML:" << xml.errorString();
    }
    //vector<users> tempVec=matchingAlgorithm(mainUser,vecUsers);
   // qDebug()<<tempVec[0].getName();
    qDebug()<<"this far";


}
     matchingAlgorithm(mainUser,vecUsers,vecMatchingUsers1);
    ui->label_20->setProperty("text","Name: "+vecMatchingUsers1[0].getName());
    ui->label_21->setProperty("text","Surname: "+vecMatchingUsers1[0].getSurname());
    ui->label_22->setProperty("text","Sex: "+vecMatchingUsers1[0].getSex());
    ui->label_24->setProperty("text","MBTI: "+vecMatchingUsers1[0].getMBTI());
    ui->label_23->setProperty("text","Age: "+vecMatchingUsers1[0].getAge());
    ui->textBrowser_2->setProperty("markdown",vecMatchingUsers1[0].getHobbies());


    ui->stackedWidget->setProperty("currentIndex",5);


}



void MainWindow::matchingAlgorithm(users mainUser1,vector<users> vecUsers2,vector<users>& vecMatchingUsers){


    vector<string> vecStringMainUserHobby;

    int hobbyCount=0;
    string ahobbies[]={"writing","reading","board games","sports","hiking","gaming","drawing","travelling","photography","cooking","fishing","gardening"};


    string tempString=mainUser1.getHobbies().toStdString();
    transform(tempString.begin(),tempString.end(),tempString.begin(),::tolower);

    for(int b=0;b<11;b++){

        auto found=tempString.find(ahobbies[b]);
        if (found!=std::string::npos)
        vecStringMainUserHobby.push_back(ahobbies[b]);

    }

    for(int i=0;i<vecUsers2.size();i++){
        string tempUsersString=vecUsers2[i].getHobbies().toStdString();
        transform(tempUsersString.begin(),tempUsersString.end(),tempUsersString.begin(),::tolower);
        hobbyCount=0;
         for(int c=0;c<vecStringMainUserHobby.size();c++){

        auto found=tempUsersString.find(vecStringMainUserHobby[c]);
        if (found!=std::string::npos)
                hobbyCount++;

        if(hobbyCount>=2&&mainUser1.getSex()!=vecUsers2[i].getSex()){
                vecMatchingUsers.push_back(vecUsers2[i]);
               break;
        }

         }
    }








}

void MainWindow::on_back2_2_clicked()
{
    ui->stackedWidget->setProperty("currentIndex",4);
}


void MainWindow::on_nextMatch_clicked()
{
    if(matchListingIndex==(vecMatchingUsers1.size()-1))
         matchListingIndex=0;
    else
         matchListingIndex++;

    ui->label_20->setProperty("text","Name: "+vecMatchingUsers1[matchListingIndex].getName());
    ui->label_21->setProperty("text","Surname: "+vecMatchingUsers1[matchListingIndex].getSurname());
    ui->label_22->setProperty("text","Sex: "+vecMatchingUsers1[matchListingIndex].getSex());
    ui->label_24->setProperty("text","MBTI: "+vecMatchingUsers1[matchListingIndex].getMBTI());
    ui->label_23->setProperty("text","Age: "+vecMatchingUsers1[matchListingIndex].getAge());
    ui->textBrowser_2->setProperty("markdown",vecMatchingUsers1[matchListingIndex].getHobbies());
}





void MainWindow::on_lastMatch_clicked()
{
    if(matchListingIndex==0)
         matchListingIndex=vecMatchingUsers1.size()-1;
    else
         matchListingIndex-=1;

    ui->label_20->setProperty("text","Name: "+vecMatchingUsers1[matchListingIndex].getName());
    ui->label_21->setProperty("text","Surname: "+vecMatchingUsers1[matchListingIndex].getSurname());
    ui->label_22->setProperty("text","Sex: "+vecMatchingUsers1[matchListingIndex].getSex());
    ui->label_24->setProperty("text","MBTI: "+vecMatchingUsers1[matchListingIndex].getMBTI());
    ui->label_23->setProperty("text","Age: "+vecMatchingUsers1[matchListingIndex].getAge());
    ui->textBrowser_2->setProperty("markdown",vecMatchingUsers1[matchListingIndex].getHobbies());




}


void MainWindow::on_commandLinkButton_clicked()
{
    ui->listWidget->clear();
    users tempUser;

    qDebug()<<"this far";
    QXmlStreamReader xml;
    QString filename = "likedUsers.xml";
    QFile file(filename);
    if (!file.open(QFile::ReadOnly | QFile::Text))
         qDebug() << "Error loading XML file.";

    xml.setDevice(&file);
    while(!xml.atEnd()) {

         if (xml.isStartElement()) {
        QString name = xml.name().toString();
        if (name == "object") {
               qDebug() <<"[Object]=================================";
               for (int i = 0; i < xml.attributes().size();i++) {
                    qDebug() << xml.attributes().at(i).name()
                             << xml.attributes().at(i).value();
               }
        }

        if (name == "name")
               tempUser.putName(xml.readElementText());
        if( name == "surname" )
               tempUser.putSurname(xml.readElementText());
        if( name == "password" )
               tempUser.putPassword(xml.readElementText());


         }

         //  qDebug()<<vecUsers[b].getName();
         if (xml.isEndElement()) {

        QString name = xml.name().toString();
        if (name == "object") {
               qDebug() <<"=========================================";

               if(tempUser.getPassword()==mainUser.getPassword())
               {
                    QListWidgetItem* widgetItem = new QListWidgetItem;
                    widgetItem->setText(tempUser.getName()+" "+tempUser.getSurname());
                    ui->listWidget->addItem(widgetItem);
                   // ui->listWidget->addItem(tempUser.getName()+" "+tempUser.getSurname());



               }

        }
         }

         xml.readNext();

         if (xml.hasError()) {
        qDebug() << "Error loading XML:" << xml.errorString();
         }
         //vector<users> tempVec=matchingAlgorithm(mainUser,vecUsers);
         // qDebug()<<tempVec[0].getName();
         qDebug()<<"this far";


    }








    ui->stackedWidget->setProperty("currentIndex",6);
}




























void MainWindow::on_nextMatch_2_clicked()
{
    QString filename = "likedUsers.xml";
    QFile file(filename);
    if (!file.open(QFile::ReadOnly | QFile::Text))
         qDebug() << "Error saving XML file.";



    QDomDocument xml;
    xml.setContent(&file);
    qDebug()<<xml.isNull();

    QDomElement root= xml.firstChildElement();

    qDebug()<<xml.firstChildElement().isNull();
    file.close();
    //QDomElement root = xml.createElement("mainUser");
    QDomElement tagObject = xml.createElement("object");
    //xml.appendChild(root);



    QDomElement tagName = xml.createElement("name");
    tagObject.appendChild(tagName);
    QString a=ui->label_20->property("text").toString();
    a.replace(QRegularExpression(QStringLiteral("Name:")),QString());
    a=a.trimmed();
    QDomText textName = xml.createTextNode(a);
    tagName.appendChild(textName);

    QDomElement tagName2 = xml.createElement("surname");
    tagObject.appendChild(tagName2);
    QString s=ui->label_21->property("text").toString();
    s.replace(QRegularExpression(QStringLiteral("Surname:")),QString());
    s=s.trimmed();
    QDomText textName6 = xml.createTextNode(s);
    tagName2.appendChild(textName6);

    QDomElement tagName6 = xml.createElement("password");
    tagObject.appendChild(tagName6);
    QDomText textName5 = xml.createTextNode(mainUser.getPassword());
    tagName6.appendChild(textName5);

    root.appendChild(tagObject);
    file.open(QIODevice::WriteOnly | QIODevice::Text);
    QTextStream output(&file);
    output << xml.toString();
    file.close();
}

















void MainWindow::on_back2_5_clicked()
{
    ui->stackedWidget->setProperty("currentIndex",5);
}

