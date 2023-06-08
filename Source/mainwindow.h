#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QXmlStreamReader>
#include<QXmlStreamWriter>
#include <QDebug>
#include <QFile>
#include <QFileDialog>
#include <QDomDocument>
#include "loginwindow.h"
#include "users.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    users mainUser;
    vector<users> vecMatchingUsers1;
    int matchListingIndex=0;
    void matchingAlgorithm(users mainUser1,vector<users> vecUsers2,vector<users>& vecMatchingUsers1);
private slots:
    void on_save_clicked();

    void on_next1_clicked();

    void on_back1_clicked();

    void on_next2_clicked();

    void on_back2_clicked();

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_matches_button_clicked();



    void on_back2_2_clicked();

    void on_nextMatch_clicked();

    void on_lastMatch_clicked();

    void on_commandLinkButton_clicked();

    void on_nextMatch_2_clicked();

    void on_back2_5_clicked();

private:
    Ui::MainWindow *ui;




};
#endif // MAINWINDOW_H
