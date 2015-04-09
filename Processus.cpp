#include "Processus.h"

Processus::Processus(int p, ELF * monBinaire)
{
	pid=p;
	code=new Segment(0x10000,monBinaire->getTailleCode(), true,false);
	for(int i=0;i<code->getPages().size();i++){
		code->getPages().at(i)->setLecture(true);
		code->getPages().at(i)->setEcriture(false);
		code->getPages().at(i)->setExecution(true);
	}
	tas=new Segment(0x2000000,monBinaire->getTailleTas(), true,true);
	for(int j=0;j<tas->getPages().size();j++){
		tas->getPages().at(j)->setLecture(true);
		tas->getPages().at(j)->setEcriture(true);
		tas->getPages().at(j)->setExecution(false);
	}
	pile=new Segment(0xFFFFFFFF,monBinaire->getTaillePile(), false,true);
	for(int m=0;m<pile->getPages().size();m++){
		pile->getPages().at(m)->setLecture(true);
		pile->getPages().at(m)->setEcriture(true);
		pile->getPages().at(m)->setExecution(false);
	}
}


Processus::~Processus(void)
{
}

void Processus::afficher(){
	cout<<"-----------------------------"<<endl;
	cout<<"PID : "<<pid<<endl;
	cout<<"***SEGMENT Code***"<<endl;
	code->afficher();
	cout<<"***SEGMENT Tas***"<<endl;
	tas->afficher();
	cout<<"***SEGMENT Pile***"<<endl;
	pile->afficher();
}
