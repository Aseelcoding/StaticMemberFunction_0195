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

	static void setNIM(int pnim) 
	{
		nim = pnim;
	}

	static int getNIM() 
	{
		return nim;
	}


	Mahasiswa(string pnama) :name(pnama)
	{
		setID();
	}

};

int Mahasiswa::nim = 0;

void Mahasiswa::setID() 
{
	id = ++nim;
}
int main() 
{

}