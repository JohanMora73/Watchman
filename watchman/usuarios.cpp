#include "usuarios.h"
#include <QDebug>
//#include "principal.h"

//extern Principal * principal;

usuarios::usuarios()
{

}

int usuarios::UsuarioExistente(string nombre, string clave, int n)
{
    string linea;
    string name="";
    string pass="";
    string l;
    int resp=0;

    ifstream archivo;
    archivo.open("usuarios.txt",ios::in);

    while (!archivo.eof()) {
        getline(archivo,linea);
        int len=linea.length();
        for(int i =0;i<len;i++) {
            l=linea[i];
            if(l==","){
                resp=1;
            }
            if(resp==0)name.append(l);
            else if(resp==1 && l!=",")pass.append(l);
        }
        if(n==1){
            if(name==nombre){
                caso=1;
                break;
            }
        }
        else if(n==2){
            if(name==nombre){
                if(pass==clave){
                    caso=1;
                    break;
                }
                caso=3;
                break;
            }
        }
        QString qstr1 = QString::fromStdString(name);
        QString qstr2 = QString::fromStdString(pass);
        qDebug()<<"1:"<<qstr1<<":2:"<<qstr2;
        resp=0;
        name="";
        pass="";

    }
    if (caso==0)caso=2;
    archivo.close();

    return caso;
}

void usuarios::CrearUsuario(string nombre, string clave)
{
    int c =UsuarioExistente(nombre,clave,1);
    if(c==2){
        ofstream archivo;
        archivo.open("usuarios.txt",ios::app); //Se abre el archivo en modo aniaadir
        archivo<<'\n'<<nombre<<","<<clave;
        archivo.close();

        archivo.open(nombre+".txt",ios::out);
        archivo<<"1";

    }
}
