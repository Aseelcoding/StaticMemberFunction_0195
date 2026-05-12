#include<iostream>
using namespace std;

class Mahasiswa 
{
public:
	Mahasiswa();
};

Mahasiswa::Mahasiswa() 
{
	cout << "Constructer " << endl;
}
int main() 
{
	Mahasiswa mhs;
	return 0;
}