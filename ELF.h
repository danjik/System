#ifndef __ELF__
#define __ELF__
class ELF
{
	int tailleCode;
	int tailleTas;
	int taillePile;
public:
	void setTailleCode(int t){tailleCode=t;};
	int getTailleCode(){return tailleCode;};
	void setTailleTas(int v){tailleTas=v;};
	int getTailleTas(){return tailleTas;};
	void setTaillePile(int sr){taillePile=sr;};
	int getTaillePile(){return taillePile;};
	ELF(int tC,int tT, int tP);
	~ELF(void);
};
#endif

