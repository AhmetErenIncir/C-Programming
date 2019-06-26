#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100

void Array_inputs(int* array , int size){
	int* array_end = &array[size-1]; // array+(size-1) de kullanilabilirdi.
	while(array<=array_end){
		scanf("%d",(array));
		array++;
	}
}

void print_array(int* array ,int size){
	int i=0;
	for(i=0; i<size; i++){
		printf("%d ",*(array+i));
	}
	printf("\n");
}

void reverse_array(int* array , int size){
	int temp;
	int* end_array = &array[size-1];
	while(array<=end_array){
		temp = *array;
		*array = *end_array;
		*end_array = temp;
		array++;
		end_array--;
	}
}

int main(){
	int array[MAX_SIZE],size;
	printf("Enter the array size\n");
	scanf("%d",&size);
	printf("Enter the array elements\n");
	Array_inputs(array,size);
	printf("Array before reversing\n");
	print_array(array,size);
	reverse_array(array,size);
	printf("Array after reversing\n");
	print_array(array,size);
}
