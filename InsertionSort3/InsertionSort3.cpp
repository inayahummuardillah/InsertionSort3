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
		else
		{
			cout << "\nArray yang anda masukan maksimal 20 element. \n";   //Menampilkan pesan jika
		}
	}
	cout << endl;                              //Membuat jarak per baris program
	cout << "=====================" << endl;  //Membuat tampilan susunan data element array
	cout << "Masukan Element Array" << endl;
	cout << "=====================" << endl;

	for (int i = 0; i < n; i++)   //Menggunakan perulangan for untuk menyimpan data pada array
	{
		cout << "Data Ke-" << (i + 1) << ": ";   //Memasukkan nilai data n kedalam array arr
	}
}
//Procedur Insertoinsort
void Insertionsort()
{

	int temp;   //Membuat variable data temoprer atau penyimpanan sementara
	int j;      //Membuat variable j sebagai penanda

	for (int i = 1; 1 < n; i++)             //1. Looping dengan i dimulai dari 1 hingga n-1
	{
		temp = arr[i];                     //2. Simpan nilai arr[i] ke variable sementara temp

		j = i - 1;                         //3. Setting nilai j sama dengan i-1;
	}
}