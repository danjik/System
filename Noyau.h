#ifndef __NOYAU__
#define __NOYAU__
class Noyau
{
	static int lastPIDGiven;
public:
	Noyau(void);
	~Noyau(void);
	/*
	** FONCTIONNALITES
	*/
	bool tuerProcessus(int PID);
	static int creerProcessus();//Retourne un PID et incrémente
};
#endif
