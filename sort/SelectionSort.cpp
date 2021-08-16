#include<stdio.h>


int main(void){
	int min, minIndex,temp;
	int arr[10] = {3,4,5,1,2,6,7,8,9,10};
	
	
	for(int i = 0 ; i < 10; ++i ){
		min = 9999;	
		for(int j = i ; j < 10 ; ++j){
			if(arr[j] < min){
				min = arr[j];
				minIndex = j;
			}
		}
		temp = arr[i];
		arr[i] = arr[minIndex];
		arr[minIndex] = temp;
	}
	
	for(int i = 0 ; i < 10 ; ++i )
		printf("%d ", arr[i]);
	
	
}
