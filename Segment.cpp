#include "Segment.h"

/*
** Fonction permettant de vérifier qu'une adresse est bien comprise
** entre 0x0 et 0xFFFFFFFF
** PARAMETRES : 
**	- unAd = L'adresse à vérifier
** RETOUR :
**	- false = L'adresse n'est pas valide
**	- true = L'adresse est valide
*/
bool Segment::adresseValide(int unAd){
	return true;
}

Segment::Segment(int ad,int t, bool f, bool r)
{
	adresse=ad;
	taille=t;
	forward=f;
	resizable=r;
	int init=ad;
	if(f){
		for(int a=0;a<taille/Page::getTaillePage();a++){
			vecPages.push_back(new Page(init));
			init=init+Page::getTaillePage();
		}
	}
	else{
		for(int a=0;a<taille/Page::getTaillePage();a++){
			vecPages.push_back(new Page(init));
			init=init-Page::getTaillePage();
		}
	}
}

Segment::~Segment(void)
{
}

void Segment::afficher(){
	cout<<"Adresse : 0x"<<hex<<adresse<<endl;
	cout<<"Taille : "<<dec<<taille<<endl;
	cout<<"Forward : "<<forward<<endl;
	cout<<"Resizable : "<<resizable<<endl;
	for(int i=0;i<vecPages.size();i++){
		vecPages[i]->afficher();
	}
}
