

#ifndef LAB2_BIBLIOTECA_H
#define LAB2_BIBLIOTECA_H
#include <iostream>
#include <cstring>
using namespace  std;

class Biblioteca {


    int an_construire;
    char adresa[20];
    char *nume;
    char *bibliotecar;

public:
    Biblioteca(); //constructor fara parametri
    Biblioteca(char[], char*, char*, int );//constructor cu parametri
    Biblioteca(const Biblioteca&); //constructor de copiere
    ~Biblioteca(); //destructorul
    void afisare() const; //afiseaza atributele clasei
    void modif(char*, char*, char[],int); //modifica atributele clasei
    char* getBibliotecar() const;
    char* getNume() const;
    friend int getAn(const Biblioteca&); //returneaza vechimea obiectului apelat
    friend void interschimbare(Biblioteca&, Biblioteca&); //interschimba valorile dintre 2 obiecte de tip Biblioteca

};


#endif //LAB2_BIBLIOTECA_H
