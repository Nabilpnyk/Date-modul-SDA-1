/* Nama Program : mdate.c
	Deskripsi : Driver untuk menggunakan unit ADT Date
			yang ada di date.h dan date.c
*/
#include "date.h"

/* P R O G R A M   U T A M A   */
int main(){
	 date D1, D2, D3, D4;
	 char lagi = 'y';

	/* Algoritma : Procedure yang isi bodynya call thd semua feature yang ada */
	for (;;){
		system("cls");
		 //lakukan clear screen;
		CreateDate (&D1);
		printf ("\nHasil CreateDate (&D1), maka D1 bernilai : ");
		PrintObj (D1);
		//lakukan set tanggal, bulan, dan tahun, simpan hasil ke var D2
		ReadDate (&D2);
		//tampilkan D2
		printf("Setelah Perintah ReadDate(&D2) maka D2 Bernilai :");
		PrintObj(D2);
		
		printf("Menggunakan perintah DateBefore (D2), Sebelum Tanggal ");
		PrintObj(D2);
		DateBefore (D2);
		//dan seterusnya uji semua modul yang ada di file body 
		
		printf("Menggunakan perintah NextDate (D2), Setelah Tanggal ");
		PrintObj(D2);
		NextDate (D2);
		//spesification-nya (date.cpp) dengan cara memanggil dari driver 
		//(modul main) ini
		ReadDate (&D3);
		//tampilkan D2
		printf("Setelah Perintah ReadDate(&D3) maka D3 Bernilai :");
		PrintObj(D2);
		
		printf("Menggunakan perintah DifferenceDate (D2, D3), Selisih antara ");
		PrintObj(D2);
		printf(" dengan ");
		PrintObj(D3);
		DifferenceDate (D2, D3);
		
		printf("Coba Lagi ? (y / n)");
		lagi = getchar();
		if ((lagi != 'y') || (lagi != 'Y'))
			return 0;
	}
}
