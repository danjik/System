class ELF
{
	int tailleCode;
	int tailleTas;
	int taillePile;
public:
	void setTailleCode(int t){tailleCode=t;};
	int getTailleCode(){return tailleCode;};
	void setForward(int v){tailleTas=v;};
	int getForward(){return tailleTas;};
	void setResizable(int sr){taillePile=sr;};
	int getResizable(){return taillePile;};
	ELF(int tC,int tT, int tP);
	~ELF(void);
};

