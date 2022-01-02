


#include "Biblioteca.h"
 using namespace  std;
Biblioteca::Biblioteca() {
    an_construire=0;
    strcpy(adresa,"");
    nume= nullptr;
    bibliotecar= nullptr;
}
Biblioteca::Biblioteca (char adresa[],char* nume, char* bibliotecar , int an_construire) {
    this->an_construire = an_construire;
    this->nume= strdup(nume);
    this->bibliotecar = strdup(bibliotecar);
    strcpy(this->adresa,adresa);

}
Biblioteca::Biblioteca(const Biblioteca &obiect) {
    an_construire=obiect.an_construire;
    nume= strdup(obiect.nume);
    bibliotecar= strdup(obiect.bibliotecar);
    strcpy(adresa,obiect.adresa);
}
void Biblioteca::modif(char a[],char *n, char *b , int an) {
    an_construire = an;
    nume= strdup(n);
    bibliotecar= strdup(b);
    strcpy(adresa,a);
}
void Biblioteca::afisare() const {
    cout<<"Anul de construire: "<<an_construire<<endl;
    cout<<"Adresa este: "<<adresa<<endl;
    cout<<"Numele este:"<<nume<<endl;
    cout<<"Bibliotecarul este:"<<bibliotecar<<endl;
}
char* Biblioteca::getBibliotecar() const {
    return bibliotecar;
}
char* Biblioteca::getNume() const {
    return nume;
}
int getAn(const Biblioteca& obj){
    return obj.an_construire;
}

void interschimbare (Biblioteca &obj1,Biblioteca &obj2){
    int aux;
    aux=obj1.an_construire;
    obj1.an_construire=obj2.an_construire;
    obj2.an_construire=aux;

    char *aux1;
    aux1=strdup(obj1.bibliotecar);
    obj1.bibliotecar= strdup(obj2.bibliotecar);
    obj2.bibliotecar= aux1;
    aux1=strdup(obj1.nume);
    obj1.nume= strdup(obj2.nume);
    obj2.nume= aux1;

    char aux2[20];
    strcpy(aux2,obj1.adresa);
    strcpy(obj1.adresa,obj2.adresa);
    strcpy(obj2.adresa,aux2);

}
Biblioteca::~Biblioteca() {
    delete []nume;
    delete []bibliotecar;
    cout<<"Obiectul a fost distrus"<<endl;
}