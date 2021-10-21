#include <iostream>
#include <conio.h>
using namespace std;


int main()

{
    //Data Declaration

	int i, n, total, price = 0, pre;
	float disc;

   
	cout<< "--------------------------------------------------" << endl;
	cout<< "       Program Penghitungan Penjualan Total       " << endl;
	cout<< "--------------------------------------------------" << endl;
	

    //Data Input

	cout<< "Total Jumlah Jenis Barang : "; cin >> n;
	cout<< endl;

	for(i=1; i<=n; i++){
		cout<< "Jumlah Harga Barang Ke-" << i << ": ";cin >> pre;
		price = price+pre;
	}
		if(price > 500){
			disc = price - (price*10/100);			
		}
		else if(price >= 200 && price <= 500){
			disc = price - (price*5/100);
		}
		else {
			disc = price;
		}
		
        cout << endl;


    //Result

	
	cout << "--------------------------------------------------" << endl;	
	cout << "Total Harga Asli = Rp" << price << endl;
	cout << "Total Harga Setelah Diskon = Rp" << disc << endl;
	cout << "--------------------------------------------------" << endl;	

	return 0;

}
