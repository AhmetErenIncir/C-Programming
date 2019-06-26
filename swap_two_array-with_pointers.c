#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100

void print_array(int* array ,int size){
	int i;
	for(i=0;i<size;i++){
		printf("%d ",*(array+i));
	}
	printf("\n");
}

void swap_array(int* arr1 , int* arr2 , int size){//size son elemanlari bulmak icin goderiliyor.
	int i , temp;
	int* arr1_end = (arr1+(size-1));//Ilk ve ikinci arrayin son elemanlari bulunur.
	int* arr2_end = (arr2+(size-1));
	while(arr1<=arr1_end && arr2<=arr2_end){ //Son elemanlara kadar swap islemi yapilir.
		temp = *arr1;
		*arr1 = *arr2;
		*arr2 = temp;

		arr1++;
		arr2++;
	}
}

int main(){
	int i,size;
	int first_arr[MAX_SIZE],second_array[MAX_SIZE];
	int* first_iter = first_arr; // iterler ile arrayler uzerinde traverse yapilabilir.
	int* second_iter = second_array;//ama kullanilmak zorunda degiller.

	printf("Enter size of arrays\n");
	scanf("%d",&size);

	printf("Enter the elements of first array\n");
	for(i=0;i<size;i++){
		scanf("%d",(first_iter+i));
	}
	printf("Enter the elements of second array\n");
	for(i=0;i<size;i++){
		scanf("%d",(second_iter+i));
	}

	printf("First array before swapping :");
	print_array(first_arr,size);

	printf("Second array before swapping : ");
	print_array(second_array,size);

	swap_array(first_arr,second_array,size);
	//swap_array(first_iter,second_iter,size)//Ayni islemi yapar.

	printf("First array after swapping: ");
	print_array(first_arr,size);

	printf("Second array after swapping : ");
	print_array(second_array,size);


}
