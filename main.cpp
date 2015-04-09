#include <iostream>
#include "ELF.h"
#include "Noyau.h"
#include <Windows.h>
#include "Processus.h"
using namespace std;


int main()

{
	Processus procToTest(Noyau::creerProcessus(),new ELF(30000,50000,100000));
	procToTest.afficher();
	Processus procToTest2(Noyau::creerProcessus(),new ELF(30000,50000,100000));
	procToTest2.afficher();
	system("PAUSE");
}
