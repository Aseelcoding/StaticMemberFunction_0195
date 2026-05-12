#include <iostream>
using namespace std;
class Mahasiswa 
{
public :
	static int nim;
	int id;
	string name;

	void setID();
	void printAll();

	Mahasiswa(string pnama) :name(pnama)
	{
		setID();
	}
};
int main() 
{

}