#ifndef SYSTEMINFO_H
#define SYSTEMINFO_H

#include <QMainWindow>
#include<iostream>
using namespace std ;

QT_BEGIN_NAMESPACE
namespace Ui { class SystemInfo; }
QT_END_NAMESPACE

class SystemInfo : public QMainWindow
{
    Q_OBJECT

public:
    SystemInfo(QWidget *parent = nullptr);
    ~SystemInfo();


private slots:
    void on_pushButton_clicked();

private:
    Ui::SystemInfo *ui;

    QString GetStdoutFromCommand(QString cmd);
};
#endif // SYSTEMINFO_H
