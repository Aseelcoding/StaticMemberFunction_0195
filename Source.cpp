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

int Mahasiswa::nim = 10;

void Mahasiswa::setID() 
{
	id = ++nim;
}
void Mahasiswa::printAll() 
{
	cout << "ID : " << id << endl;
	cout << "Name : " << name << endl;
	cout << endl;

}


int main() 
{
	Mahasiswa mhs1("Aseel");
	Mahasiswa mhs2("Ahmed");


}