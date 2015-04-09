#include <iostream>
#include "ELF.h"
#include "Noyau.h"
#include <Windows.h>
#include "Processus.h"
using namespace std;

<<<<<<< HEAD
int main(){
    cout<<"Toto"<<endl;
    return 0;
=======
int main()
{	
	Processus procToTest(Noyau::creerProcessus(),new ELF(30000,50000,100000));
	procToTest.afficher();
	Processus procToTest2(Noyau::creerProcessus(),new ELF(30000,50000,100000));
	procToTest2.afficher();
	system("PAUSE");
>>>>>>> d03036c995f5fe02ff8d218c4a6ea25b1e0c6257
}
