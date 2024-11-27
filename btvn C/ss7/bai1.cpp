#include<stdio.h>
int main(){
	int a[5] = {1 ,2,3,4,5};
	
	
	
	
	
	
	int length = sizeof(a) / sizeof(a[0]);


	for (int i = 0; i < length; i++) {
	        printf("a[%d] = %d\n", i, a[i]);
	    }
	    
    printf("do dai: %d", length);
    
    return 0;
}


//int length = sizeof(arr) / sizeof(arr[0]);
//
//
//for (int i = 0; i < length; i++) {
//        printf("arr[%d] = %d\n", i, arr[i]);
//    }
