#include <stdio.h>
#include <conio.h>
int main(){
	char kalimat[50];
	int i,temu=0;
	char cari;
	
	printf("Masukan Kalimat (50 char) :");
	scanf("%[^\n]",kalimat);
	printf("Masukan huruf (case sensitif) :");
	scanf("%s",&cari);
	for(i=0;kalimat[i]!='\0';i++){
		if(cari==kalimat[i])temu++;
	}
	if(temu!=0)
	printf("\nTerddapat sebanyak %d huruf '%c' dari kalimat di atas !",temu,cari);
	else
	printf("\nHuruf yang diminta tidak di temukan pada kalimat diatas !");
	getch();
}
