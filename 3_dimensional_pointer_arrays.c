#include <stdio.h>
#include <stdlib.h>

//3 boyut array elemanlari hakkinda

int main(){
	int dizi[2][2][2] = {1,2,3,4,5,6,7,8};
	int *p , *q ;
	p = &dizi[1][1][1];
	q = dizi; // Verilen warning sebebi ?
	printf("%d , %d\n",*p,*q);

	for(int i=0 ; i<2 ; i++){
		for(int j=0 ; j<2 ; j++){
			for(int k=0 ; k<2 ; k++){
				printf("%d ",dizi[i][j][k] );
			}
			printf("\n");
		}
		printf("\n");
	}

	printf("%d\n",dizi[0][1][1] );

}
