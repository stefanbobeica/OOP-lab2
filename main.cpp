#include "Biblioteca.h"
using namespace  std;
void sortare(Biblioteca *Vector){
    for(int i=0 ; i < 4; i++)
        for(int j=i; j < 4; j++) {
            if (strcmp(Vector[i].getNume(), Vector[j].getNume()) > 0)
                interschimbare(Vector[i],Vector[j]);
        }
}


int main() {
Biblioteca Obj1("Strada Fericirii","Colaj Manele 2000","Florin Salam",2000);
Biblioteca Obj2(Obj1);
    Obj1.afisare();
cout<<"AFISARE OBIECT2"<<endl;
    Obj2.afisare();
    Obj2.modif("Strada Necazului","MGK","AlbertNBN",2020);
cout<<"AFISARE OBIECT2 DUPA MODIFICARE:"<<endl;
    Obj2.afisare();
cout<<"TESTARE getBibliotecar:"<<endl;
cout<<Obj2.getBibliotecar()<<endl;
Biblioteca *v;
 v= new Biblioteca[4];
 v[0].modif("Strada 0","Drake","Bibliotecar0",0);
 v[1].modif("Strada 1","Vasile","Bibliotecar1",1);
 v[2].modif("Strada 2","Gigel","Bibliotecar2",2);
 v[3].modif("Strada 3","Ionel","Bibliotecar3",3);

    sortare(v);
    cout<<"Afisare vector SORTAT :"<<endl;
 for(int i=0;i < 4; i++)
     v[i].afisare();
int an_min=999;
for(int i=0; i < 4; i++){
    if(an_min>getAn(v[i]))
        an_min=getAn(v[i]);
}
 cout<<"Afisez cele mai vechi/veche biblioteca:"<<endl;
for(int i=0; i < 4; i++)
    if(an_min==getAn(v[i]))
        cout<<v[i].getNume()<<endl;

delete []v;
    return 0;
}
