#include <iostream>
using namespace std;

class angka
{
private:
    int* arr;
    int panjang;

public:
    void cetakData();
    void isiData();
    angka(int);
    ~angka();
};
void angka::cetakData()
{
    for (int i = 1; i <= panjang; i++)
    {
        cout << i << " = " << arr[i] << endl;
    }
}

void angka::isiData()
{
    for (int i = 1; i <= panjang; i++)
    {
        cout << i << " = ";
        cin >> arr[i];
    }
}
int main() 
{

}