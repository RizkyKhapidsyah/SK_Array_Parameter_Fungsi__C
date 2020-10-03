#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

/* Created by Rizky Khapidsyah */

void input_array(int bil[], int banyak_data) {
	int i;

	for (i = 0; i < banyak_data; i++)
	{
		printf("Nilai bil[%i]  = ", i + 1);
		scanf_s("%i", &bil[i]);
	}
}

int jumlah_elemen(int bil[], int banyak_data) {
	int i, jumlah = 0;

	for (i = 0; i < banyak_data; i++)
	{
		jumlah = jumlah + bil[i];
	}

	return jumlah;
}

int main() {
	int bil[100]; /* Maksimal Elemen */
	int banyak_data;
	int jumlah;

	printf("Masukkan Banyak Elemen Yang Diinginkan  : ");
	scanf_s("%i", &banyak_data);

	puts("");

	/* Memanggil void input_array */
	input_array(bil, banyak_data);

	/* Memanggil fungsi jumlah_elemen */
	jumlah = jumlah_elemen(bil, banyak_data);

	puts("");
	printf("Hasil Penjumlahan Elemen  = %i\n\n", jumlah);
	
	_getch();
	return 0;
}