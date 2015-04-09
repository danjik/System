#ifndef __PAGE__
#define __PAGE__
#include <string>
#include <iostream>
using namespace std;
class Page
{
	static const int taillePage=4000;
	int adrDepart;
	bool ecriture;
	bool lecture;
	bool execution;
	//RESTE ADRESSE
public:
	int getAdrDepart(){return adrDepart;};
	void setAdrDepart(int toSet){adrDepart=toSet;};
	bool getEcriture(){return ecriture;};
	void setEcriture(bool v){ecriture=v;};
	bool getLecture(){return lecture;};
	void setLecture(bool v){lecture=v;};
	bool getExecution(){return execution;};
	void setExecution(bool v){execution=v;};
	static int getTaillePage(){return taillePage;};
	void afficher();
	Page(int adrDep);
	~Page(void);
};
#endif

