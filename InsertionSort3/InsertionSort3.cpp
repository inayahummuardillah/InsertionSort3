#include <iostream>
using namespace std;

int arr[20];     //Membuat array dengan panjang data 20
int n;           //Membuat variable inputan n

void input()
{    //Procedur Input
	while (true)
	{
		cout << "Masukan jumlah data pada Array : ";   //Membuat inputan jumlah element Array
		cin >> n;                                      //Memanggil variable inputan n

		if (n <= 20)
		{   //Membuat kondisi n tidak lebh dari 20
			break;
		}
	}

}
