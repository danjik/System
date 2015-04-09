#include "Noyau.h"

int Noyau::lastPIDGiven=0;
Noyau::Noyau(void)
{
}
bool Noyau::tuerProcessus(int PID){
	return true;
}

int Noyau::creerProcessus(){
	int toSave=lastPIDGiven;
	lastPIDGiven++;
	return toSave;
}
Noyau::~Noyau(void)
{
}
