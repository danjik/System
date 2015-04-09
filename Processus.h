#include <vector>
#include "Segment.h"
using namespace std;

class Processus
{
	int pid;
	vector<int> espaceAdressage;

	Segment code(int,int, true,false);
public:
	Processus(void);
	~Processus(void);
};

