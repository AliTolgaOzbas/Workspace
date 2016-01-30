#include <stdio.h>

int main(void)
{
	int ogrenciler = 30;
	int dersler = 8;
	int donem_sinavlari = 2;
	int donem_sayisi = 2;

	int kagit_sayisi;
	kagit_sayisi = ogrenciler * dersler * donem_sinavlari * donem_sayisi;
	printf("%d tane sınav kağıdı gerekecek\n", kagit_sayisi);
	return 0;

}
