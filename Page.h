#include <string>
using namespace std;
class Page
{
	static const int taillePage=4;
	string adrDepart;
	bool ecriture;
	bool lecture;
	bool execution;
	//RESTE ADRESSE
public:
	Page(void);
	~Page(void);
};

