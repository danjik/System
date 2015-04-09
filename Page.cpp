#include "Page.h"


Page::Page(int adrDep)
{
	adrDepart=adrDep;
}


Page::~Page(void)
{
}

void Page::afficher(){
	cout<<"PAGE 0x"<<hex<<adrDepart<<" : "<<endl<<dec<<"Ecriture : "<<ecriture<<endl<<"Lecture : "<<lecture<<endl<<"Execution : "<<execution<<endl;

}