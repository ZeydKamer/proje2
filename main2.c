#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {


  	char kitapadi[15],yazar[15],yazarsoyadi[15],sayfa[15],BasimTarihi[4],Basimevi[15];
	
	printf("Kitap Adi: ",kitapadi);
	scanf("%s",kitapadi);
	
	printf("Yazarinadi: ",yazar);
	scanf("%s",yazar);
	
	printf("Yazarinsoyadi: ",yazarsoyadi);
	scanf("%s",yazarsoyadi);
	
	printf("Sayfa Sayisi: ",sayfa);
	scanf("%s",sayfa);
	
	printf("Basim Tarihi: ",BasimTarihi);
	scanf("%s",BasimTarihi);
	
	printf("Basimevi: ",Basimevi);
	scanf("%s",Basimevi);
	
	printf("Kitap Adi: %s - Yazari: %s\n",kitapadi,yazar);
	printf("Yazarsoyadi: %s - Sayfa Sayisi: %s\n",yazarsoyadi,sayfa);
	printf("BasimTarihi: %s - Basimevi: %s",BasimTarihi,Basimevi);
	
  	
	return 0;
}
