#ifndef USERS_H
#define USERS_H
#include <QString>

using namespace std;
//{}
class users {

    QString name = "";
    QString surname = "";
    QString sex="";
    QString age = "0";
    QString MBTI = "";
    QString hobbies = "";
    QString password="";

public:




    ~users() {

    }
    void putPassword(QString rpassword) {

        this->password=rpassword;
    }
    void putName(QString rname) {

        this->name=rname;
    }
    void putSurname(QString rsurname) {

        this->surname=rsurname;
    }
    void putSex(QString rsex) {

        this->sex=rsex;
    }
    void putAge(QString rage) {

        this->age=rage;
    }
    void putMBTI(QString rmbti) {

        this->MBTI=rmbti;
    }
    void putHobbies(QString rhobbies) {

        this->hobbies=rhobbies;
    }
    QString getPassword() {

        return password;
    }
    QString getName() {

        return name;
    }
    QString getSurname() {

        return surname;
    }
    QString getSex() {

        return sex;
    }
    QString getAge() {

        return age;
    }
    QString getMBTI() {

        return MBTI;
    }
    QString getHobbies() {

        return hobbies;
    }
};






















#endif // USERS_H
