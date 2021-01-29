#ifndef USUARIOS_H
#define USUARIOS_H

#include <iostream>
#include <map>
#include <fstream>
#include <stdlib.h>
#include <ctime>
#include<cmath>
#include <vector>

using namespace std;

class usuarios
{
private:
    map<string,string> users;
    map<string,string>:: iterator it;

public:
    usuarios();
    int caso=0;
    int UsuarioExistente(string nombre, string clave, int caso);
    void CrearUsuario(string nombre, string clave);
};

#endif // USUARIOS_H
