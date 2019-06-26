#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100

void printArray(int *array,int size){ //*array gonderilen arrayin 0. indisinin adresini tutar.
	int i=0;
	for(i=0 ; i<size ; i++){
		printf("%d ",*(array+i));//size kadar memory de ileri gidilir ve bastirilir.
	}
	printf("\n");
}

int main(){
	int i,size;
	int source_array[MAX_SIZE],dest_array[MAX_SIZE];
	int* source_pointer = source_array;//traverse yapmak icin pointer degiskenler kullanilir
	int* dest_pointer = dest_array;
	int* end_pointer;//source arrayin son elemaninin adresini(size-1) tutar.

	printf("Enter size of source array\n");
	scanf("%d",&size);
	printf("Enter elements of source array\n");
	for(i=0 ; i<size ; i++){
		scanf("%d",(source_pointer+i));
	}

	end_pointer = &source_array[size-1]; //source_array[size-1]: size-1 indisindeki deger demek.&adresi demek.

	printf("source array : ");
	printArray(source_array,size);

	while(source_pointer<=end_pointer){
		*dest_pointer = *source_pointer;
		source_pointer++;
		dest_pointer++;
	}

	printf("Dest Array is : ");
	printArray(dest_array,size);


}
