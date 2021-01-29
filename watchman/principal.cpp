#include "principal.h"
#include "ui_principal.h"

extern Game * juego;

Principal::Principal(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Principal)
{
    ui->setupUi(this);
}

Principal::~Principal()
{
    delete ui;
}

void Principal::on_pushButton_clicked()
{
    this->hide();
    nivel= new Niveles();
    nivel->show();
}

void Principal::on_pushButton_2_clicked()
{
    this->hide();
    juego = new Game(2,1);
    juego->show();
}

void Principal::on_pushButton_3_clicked()
{
    QString user = ui->NameR->text();
    QString password = ui->ClaveR->text();
    string name = user.toStdString();               //Pasa el nombre del usuario de QString a un string normal
    string pass = password.toStdString();
    if(name.length()>=4){
        if(pass.length()>=4){
            usuarios users;
            users.CrearUsuario(name,pass);
            if(users.caso==1) QMessageBox::information(this,"Registro","Usuario existente");
            if(users.caso==2) QMessageBox::information(this,"Registro","Usuario creado correctamente");
        }
        else{
            QMessageBox::information(this,"Registro","minimo 4 caracteres para la clave");
        }
    }
    else{
        QMessageBox::information(this,"Registro","minimo 4 caracteres para el nombre de usuario");
    }

}

void Principal::on_pushButton_4_clicked()
{
    QString user = ui->NameI->text();
    QString password = ui->ClaveI->text();
    string name = user.toStdString();               //Pasa el nombre del usuario de QString a un string normal
    string pass = password.toStdString();
    usuarios users;
    users.UsuarioExistente(name,pass,2);
    if(users.caso==1) QMessageBox::information(this,"Registro",user+" bienvenido");
    else if(users.caso==2) QMessageBox::information(this,"Registro","usuario incorrecto");
    else if(users.caso==3) QMessageBox::information(this,"Registro","clave incorrecta");

}
