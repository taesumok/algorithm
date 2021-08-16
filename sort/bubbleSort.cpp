#include<stdio.h>

int main()
{
	char arr[10] = {3,4,5,1,2,8,9,10,6,7};
	int temp;
	for(int i = 0 ; i < 10 ; ++i){
		for(int j = 0 ; j < 9-i ; ++j){
			if(arr[j]>arr[j+1]){
				temp = arr[j+1];
				arr[j+1]=arr[j];
				arr[j] = temp;
			}
		}
	}
	
	for(int i = 0 ; i < 10 ; ++i)
		printf("%d ",arr[i]);
	
}
