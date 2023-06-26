#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	printf("********************");
	printf("\n");
	printf("**      MENU      **");
	printf("\n");

	printf("********************\n");
	int s1,s2,sonuc,secim;
	printf("1.Toplama\n");
	printf("2.Carpma\n");
	printf("3.Bolme\n");
	printf("4.Kare Alma\n");
	printf("5.Kup Alma\n");
	printf("6.Denklem=5x^2+4x+3\n");
	printf("Yapmak istediginiz islemi seciniz:  ");
	scanf("%d",&secim);
	
	switch(secim)
	{
		case 1: 
			printf("iki sayi giriniz: ");
			scanf("%d%d",&s1,&s2);
			sonuc=s1+s2;
			printf("Girdiginiz Sayilarin Toplami: %d",sonuc);
			break;
		case 2:
			printf("iki sayi giriniz: ");
			scanf("%d%d",&s1,&s2);
			sonuc=s1*s2;
			printf("Girdiginiz Sayilarin Carpimi: %d",sonuc);
			break;
		case 3:
			printf("iki sayi giriniz: ");
			scanf("%d%d",&s1,&s2);
			sonuc=s1/s2;
			printf("Girdiginiz Sayilarin Bolumu: %d",sonuc);
			break;
		case 4:
			printf("Karesi Alinacak Sayiyi Giriniz: ");
			scanf("%d",&s1);
			sonuc=s1*s1;
			printf("Girdiginiz Sayinin Karesi: %d",sonuc);
			break;
		case 5:
			printf("Kupu Alinacak Sayiyi Giriniz: ");
			scanf("%d",&s1);
			sonuc=s1*s1*s1;
			printf("Girdiginiz Sayinini Kupu: %d",sonuc);
			break;
		case 6:
			printf("Denkleme Verilecek Degeri Giriniz: ");
			scanf("%d",&s1);
			sonuc=5*s1*s1+4*s1+3;
			printf("Girdiginiz Sayinin Denklem Degeri: %d",sonuc);
			break;
	}
	
	return 0;
	}
