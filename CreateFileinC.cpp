#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	srand(time(NULL));
	FILE *dosya;
	dosya = fopen("sayilar.txt","w");
	for(int i=0;i<100;i++)
	{
	int sayi=rand()%1000;
	fprintf(dosya,"%d\n",sayi);
	}
	fclose(dosya);
	return 0;
}
