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

}

Segment::~Segment(void)
{
}
