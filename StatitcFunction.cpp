#include <iostream>
using namespace std;
class Mahasiswa 
{
private :
	static int nim;

public :
	int id;
	string name;

	void setID();
	void PrintAll();

	static void setNIMM(int pnim) 
	{
		nim = pnim;
	}

	static int getNIM() 
	{

	}
};


int main() 
{

}