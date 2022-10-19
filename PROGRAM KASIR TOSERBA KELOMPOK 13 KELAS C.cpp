#include <iostream>
#include <iomanip>
using namespace std;

void jenis(){
	cout << "Masukkan Jumlah Jenis Barang: "; }

int main(){

	jenis();
	
	long item, jumlah[100], harga[100], total[100], uang, diskon, sum = 0;
	string namabarang[100];

	cin >> item;

	
	for(int a = 1; a <= item; a++){
		cout << endl;
		cout << "Barang ke-" << a << endl;
		
		cout << "Nama Barang	: ";
		cin >> namabarang[a];
		
		cout << "Jumlah		: ";
		cin >> jumlah[a];
		
		cout << "Harga		: ";
		cin >> harga[a];
		
		total[a] = jumlah[a] * harga[a];
		sum = sum + total[a];
		}
		
	cout << endl;
	cout << endl;
		
	cout << "            TOSERBA PUKU PUKU PAW" << endl;
	cout << "                 KELOMPOK 13" << endl;
	cout << "            JL. MAGIC SHOP NO. 127" << endl;
	cout << "-------------------------------------------" << endl;
	cout << "-------------------------------------------";
	cout << endl;
	cout << endl;
	cout << "No     Barang    Jumlah     Harga     Total" << endl;
	for(int b = 1; b <= item; b++){
		cout << b << setw(12) << namabarang[b] << setw(8) << jumlah[b] << setw(12) << harga[b] << setw(10) << total[b] << endl; }
		
	
	if(sum >= 100000 && sum < 200000){
		diskon = sum * 0.5; }
	else if(sum >= 200000){
		diskon = sum * 0.15; }
	else{ diskon == 0; }
	
	cout << endl;
	cout << "-------------------------------------------" << endl;
	cout << "-------------------------------------------" << endl;
		
	cout << "Total Harga	: Rp " << sum << endl;
	cout << "Potongan	: Rp " << diskon << endl;
	cout << "Total Belanja 	: Rp " << sum - diskon << endl;
	cout << "Bayar		: Rp ";
	cin >> uang;
	cout << "Kembali		: Rp " << (uang - (sum - diskon)) << endl;
	
	cout << endl;
	cout << "-------------------------------------------" << endl;
	cout << "Terima Kasih Selamat Berbelanja Kembali" << endl;
	cout << "-------------------------------------------" << endl;
	
	
	
	return 0;
}
