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
	cout<<"\t OCTET : 0x"<<hex<<getOctet()<<endl<<"\t OFFSET : 0x"<<getOffset()<<endl;
}

int Page::getOctet(){
	int masque=0xfffff;
	return adrDepart&masque;
}

int Page::getOffset(){
	int masque=0xfff00000;
	return adrDepart&masque;
}