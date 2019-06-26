#include <stdio.h>

//Printing the array elements with using pointer(iter)...

void print_array(int *array , int size);

int main(){

	int size,value;

	printf("Enter the size of Array\n");
	scanf("%d",&size);

	int array[size];

	for(int i=0 ; i<size ;i++){
		printf("Pls Enter %d. element of array\n",i+1);
		scanf("%d",&value);
		array[i] = value;
	}

	print_array(array,size);

}

void print_array(int *array , int size){

	int *iter;

	iter = array;

	for(int i=0 ; i<size ; i++){
		printf("%d " , *(iter+i) );
	}
	printf("\n");
}
