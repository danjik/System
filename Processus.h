#include <vector>
#include "Segment.h"
using namespace std;

class Processus
{
	int pid;
	vector<int> espaceAdressage;

	Segment code(0x10000,(int)0x20000000-0x10000, true,false);
public:
	Processus(void);
	~Processus(void);
};

