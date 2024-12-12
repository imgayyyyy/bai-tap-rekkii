#include<stdio.h>
#include<string.h>
int main(){
	int a = 1;
	char arr[100];
	     printf("hay nhap mot chuoi: ");
	     fgets(arr,100,stdin);
	     int length = strlen(arr);
	     for(int i = 0 ; i < length;i++){
	     	if(arr[i]== ' '  ){
	     	a++;
	}
	}
	     printf("%d",a);
	     
	return 0;
}
