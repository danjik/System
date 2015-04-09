#include <string>
#include "Page.h"
#include <vector>
using namespace std;
class Segment
{
	int adresse;
	int taille;
	bool forward;//True si c'est +, false si c'est -
	bool resizable;//Peut etre agrandi dynamiquement
	vector<Page> vecPages;//"Les segments sont divisés en pages de taille fixes"
public:
	/*
	** CONSTRUCTEURS
	*/
	Segment(int ad,int t, bool f, bool r);
	~Segment(void);
	/*
	** ACCESSEURS
	*/
	void setTaille(int t){taille=t;};
	int getTaille(){return taille;};
	void setForward(bool v){forward=v;};
	bool getForward(){return forward;};
	void setResizable(bool sr){resizable=sr;};
	bool getResizable(){return resizable;};
	void setAdresse(string adr);
	int getAdresse(){return adresse;}; 
	/*
	** FONCTIONNALITES
	*/
	bool adresseValide(int uneAdr);
};

