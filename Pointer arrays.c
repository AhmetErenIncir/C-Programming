#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/* array[] ile *array kullanim farkliliklari */

float ortalama_bul(int* dizim , int boyut);

int main(){

	srand(time(NULL));

	int n,i;


	printf("N sayisini giriniz\n");
	scanf("%d",&n);

	int dizi[n];
	//int* dizi = (int*) malloc(sizeof(n));

	for(i=0 ; i<n ; i++){
		//*(dizi+i) = -20 + rand()%120;
		dizi[i] = -20 + rand()%120;
	}

	printf("%s\n","Ortalamasi bulunacak sayilar : ");

	for (i = 0; i < n; i++) {
		//printf("%d ",*(dizi+i));
		printf("%d ",dizi[i]);
	}

	printf("\nOrtalama : %.2f\n",ortalama_bul(dizi,n));

}

float ortalama_bul(int* dizim , int boyut){

	int i,toplam=0;
	float ort;

	for(i=0 ; i<boyut ; i++){
		//toplam += *(dizim+i);
		toplam += dizim[i];
	}

	ort = toplam / (float)boyut ;

	return ort;

}
