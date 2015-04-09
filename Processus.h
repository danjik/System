#ifndef __PROCESSUS__
#define __PROCESSUS__
#include <vector>
#include "ELF.h"
#include <iostream>
#include "Segment.h"
using namespace std;

class Processus
{
	int pid;
	vector<int> espaceAdressage;
	Segment code(int,int, true,false);
	Segment * code;
	Segment * tas;
	Segment * pile;
public:
	Processus(int p, ELF * leBinaire);
	void afficher();
	~Processus(void);
};
#endif

