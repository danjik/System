#pragma once
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
	bool creerProcessus();
};

