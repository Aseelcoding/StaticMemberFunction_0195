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

void Mahasiswa::PrintAll() 
{
	cout << "ID = " << id << endl;
	cout << "Name : " << name << endl;
	cout << endl;
}
int main() 
{
	Mahasiswa mhs1("Aseel");
	Mahasiswa mhs2("Ahmed");
	Mahasiswa::setNIM(9);
	Mahasiswa mhs3("Ali");
	Mahasiswa mhs4("Khalid");


	mhs1.PrintAll();
	mhs2.PrintAll();
	mhs3.PrintAll();
	mhs4.PrintAll();

	cout << "\n\nAccess dari luar opject = " << Mahasiswa::getNIM() << endl;
	system("pause");
}