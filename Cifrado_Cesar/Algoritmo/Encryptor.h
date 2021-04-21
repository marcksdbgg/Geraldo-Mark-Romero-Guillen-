//
// Created by marck on 21/04/2021.
//

#pragma once

#include <string>
using namespace std;

class encryptor{
private:
    int clave; //La clave del algoritmo
public:
    string alf={"abcdefghijklmnopqrstuvwxyz"}; //Alfabeto para el algoritmo
    encryptor(int); //Constructor de la clase que recive la clave
    int modulo(int,int);//Funcion modulo para el algoritmo
    string encrypted (string&); //Metodo de encriptado
    string decrypted (string&); //Metodo de desencriptado
};