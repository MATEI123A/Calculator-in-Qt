#include "calculator.h"
#include "ui_calculator.h"
#include<QDebug>
#include <QCoreApplication>

Calculator::Calculator(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Calculator)
{
    ui->setupUi(this);
    this->value=0;
    ui->Button_divide->setEnabled(false);
    ui->Button_plus->setEnabled(false);
    ui->Button_minus->setEnabled(false);
    ui->Button_multiple->setEnabled(false);
    ui->Button_egal->setEnabled(false);
    ui->res1->hide();
    ui->res2->hide();
    ui->res3->hide();
    ui->res4->hide();
    ui->Display->setText("Enter your expression");
    int ok=0;
}

Calculator::~Calculator()
{
    delete ui;
}

void Calculator::on_pushButton_14_customContextMenuRequested(const QPoint &pos)
{
    QPushButton* numbers[10];

}

void Calculator::on_Button8_clicked()
{
    this->form_value+='8';
    ui->Display->setText(this->form_value);
    ui->Button_divide->setEnabled(true);
    ui->Button_plus->setEnabled(true);
    ui->Button_minus->setEnabled(true);
    ui->Button_multiple->setEnabled(true);
    ui->Button_egal->setEnabled(true);
}


void Calculator::on_Button1_clicked()
{
    this->form_value+='1';
    ui->Display->setText(this->form_value);
    ui->Button_divide->setEnabled(true);
    ui->Button_plus->setEnabled(true);
    ui->Button_minus->setEnabled(true);
    ui->Button_multiple->setEnabled(true);
    ui->Button_egal->setEnabled(true);
}


void Calculator::on_Button_clear_clicked()
{
    this->form_value.clear();
    ui->Display->setText(this->form_value);
    value=0;
    ui->Button_divide->setEnabled(false);
    ui->Button_plus->setEnabled(false);
    ui->Button_minus->setEnabled(false);
    ui->Button_multiple->setEnabled(false);
    ui->Button_egal->setEnabled(false);
}


void Calculator::on_Button0_clicked()
{
    this->form_value+='0';
    ui->Display->setText(this->form_value);
    ui->Button_divide->setEnabled(true);
    ui->Button_plus->setEnabled(true);
    ui->Button_minus->setEnabled(true);
    ui->Button_multiple->setEnabled(true);
    ui->Button_egal->setEnabled(true);
}


void Calculator::on_Button2_clicked()
{
    this->form_value+='2';
    ui->Display->setText(this->form_value);
    ui->Button_divide->setEnabled(true);
    ui->Button_plus->setEnabled(true);
    ui->Button_minus->setEnabled(true);
    ui->Button_multiple->setEnabled(true);
    ui->Button_egal->setEnabled(true);
}


void Calculator::on_Button3_clicked()
{
    this->form_value+='3';
    ui->Display->setText(this->form_value);
    ui->Button_divide->setEnabled(true);
    ui->Button_plus->setEnabled(true);
    ui->Button_minus->setEnabled(true);
    ui->Button_multiple->setEnabled(true);
    ui->Button_egal->setEnabled(true);
}


void Calculator::on_Button4_clicked()
{
    this->form_value+='4';
    ui->Display->setText(this->form_value);
    ui->Button_divide->setEnabled(true);
    ui->Button_plus->setEnabled(true);
    ui->Button_minus->setEnabled(true);
    ui->Button_multiple->setEnabled(true);
    ui->Button_egal->setEnabled(true);
}


void Calculator::on_Button5_clicked()
{
    this->form_value+='5';
    ui->Display->setText(this->form_value);
    ui->Button_divide->setEnabled(true);
    ui->Button_plus->setEnabled(true);
    ui->Button_minus->setEnabled(true);
    ui->Button_multiple->setEnabled(true);
    ui->Button_egal->setEnabled(true);
}


void Calculator::on_Button6_clicked()
{
    this->form_value+='6';
    ui->Display->setText(this->form_value);
    ui->Button_divide->setEnabled(true);
    ui->Button_plus->setEnabled(true);
    ui->Button_minus->setEnabled(true);
    ui->Button_multiple->setEnabled(true);
    ui->Button_egal->setEnabled(true);
}


void Calculator::on_Button7_clicked()
{
    this->form_value+='7';
    ui->Display->setText(this->form_value);
    ui->Button_divide->setEnabled(true);
    ui->Button_plus->setEnabled(true);
    ui->Button_minus->setEnabled(true);
    ui->Button_multiple->setEnabled(true);
    ui->Button_egal->setEnabled(true);
}


void Calculator::on_Button9_clicked()
{
    this->form_value+='9';
    ui->Display->setText(this->form_value);
    ui->Button_divide->setEnabled(true);
    ui->Button_plus->setEnabled(true);
    ui->Button_minus->setEnabled(true);
    ui->Button_multiple->setEnabled(true);
    ui->Button_egal->setEnabled(true);
}


void Calculator::on_Button_plus_clicked()
{
    this->form_value+='+';
    ui->Display->setText(this->form_value);
    ui->Button_divide->setEnabled(false);
    ui->Button_plus->setEnabled(false);
    ui->Button_minus->setEnabled(false);
    ui->Button_multiple->setEnabled(false);
    ui->Button_egal->setEnabled(false);
}


void Calculator::on_Button_minus_clicked()
{
    this->form_value+='-';
    ui->Display->setText(this->form_value);
    ui->Button_divide->setEnabled(false);
    ui->Button_plus->setEnabled(false);
    ui->Button_minus->setEnabled(false);
    ui->Button_multiple->setEnabled(false);
    ui->Button_egal->setEnabled(false);
}


void Calculator::on_Button_divide_clicked()
{
    this->form_value+='/';
    ui->Display->setText(this->form_value);
    ui->Button_plus->setEnabled(false);
    ui->Button_minus->setEnabled(false);
    ui->Button_multiple->setEnabled(false);
    ui->Button_egal->setEnabled(false);
    ui->Button_divide->setEnabled(false);
}


void Calculator::on_Button_multiple_clicked()
{
    this->form_value+='*';
    ui->Display->setText(this->form_value);
    ui->Button_divide->setEnabled(false);
    ui->Button_plus->setEnabled(false);
    ui->Button_minus->setEnabled(false);
    ui->Button_multiple->setEnabled(false);
    ui->Button_egal->setEnabled(false);
}


void Calculator::on_Button_egal_clicked()
{
    this->form_value+='=';
    ui->Display->setText(this->form_value);
    ui->Button_divide->setEnabled(false);
    ui->Button_plus->setEnabled(false);
    ui->Button_minus->setEnabled(false);
    ui->Button_multiple->setEnabled(false);
    ui->Button_egal->setEnabled(false);
    int i,j,calc=0;
    QString res;
    ui->res1->show();

    for(i=0;i<form_value.size();i++)
        if(form_value[i].isDigit())
            value=value*10+form_value[i].digitValue();
        else
            break;

    for(j=i;j<form_value.size();j++)
        if(form_value[j]=='+')
        {
            j++;

            while(form_value[j].isDigit())
            {
                calc=calc*10+form_value[j].digitValue();
                j++;
            }

            value+=calc;
            calc=0;
            j--;
        }
        else
            if(form_value[j]=='-')
            {
                j++;

                while(form_value[j].isDigit())
                {
                    calc=calc*10+form_value[j].digitValue();
                    j++;
                }

                value-=calc;
                calc=0;
                j--;
            }
        else
            if(form_value[j]=='*')
            {
                j++;

                while(form_value[j].isDigit())
                {
                    calc=calc*10+form_value[j].digitValue();
                    j++;
                }

                value*=calc;
                calc=0;
                j--;
            }
            else
                if(form_value[j]=='/')
                {
                    j++;

                    while(form_value[j].isDigit())
                    {
                        calc=calc*10+form_value[j].digitValue();
                        j++;
                    }

                    value/=calc;
                    calc=0;
                    j--;
                }


    form_value+=QString::number(value);
    ui->Display->setText(form_value);

    if(ok%4==0)
    {
        ++ok;
        ui->res1->setText(form_value);
    }
    else
        if(ok%4==1)
    {
        ++ok;
        ui->res2->setText(form_value);
        ui->res2->show();
    }
    else
        if(ok%4==2)
    {
        ++ok;
        ui->res3->setText(form_value);
        ui->res3->show();
    }
    else
        if(ok%4==3)
    {
        ++ok;
        ui->res4->setText(form_value);
        ui->res4->show();
    }

    form_value.clear();
    value=0;
}

