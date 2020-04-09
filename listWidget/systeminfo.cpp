#include "systeminfo.h"
#include "ui_systeminfo.h"
#include<iostream>
#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include <bits/stdc++.h>
using namespace std ;

SystemInfo::SystemInfo(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::SystemInfo)
{
    ui->setupUi(this);
}

SystemInfo::~SystemInfo()
{
    delete ui;
}



QString SystemInfo::GetStdoutFromCommand(QString cmd) {

    QString data;
    FILE * stream;
    const int max_buffer = 512;
    char buffer[max_buffer];
    cmd.append(" 2>&1");

    stream = popen(cmd.toStdString().c_str(),"r");

    //stream = popen(cmd.c_str(), "r") ;
    if (stream) {
    while (!feof(stream))
    if (fgets(buffer, max_buffer, stream) != NULL) data.append(buffer);
    pclose(stream);
    }
    return data;
    }

void SystemInfo::on_pushButton_clicked()

{



    ui->listWidget->addItem(GetStdoutFromCommand("lshw"));
}
