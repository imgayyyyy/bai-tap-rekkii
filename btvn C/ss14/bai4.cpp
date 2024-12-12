


#include<stdio.h>
#include<string.h>
int main(){
	char str [50]="hello thay";
	char a;
	int b=0;
	int length = strlen(str);
	printf("hay nhap ki tu: ");
	scanf("%c",&a);
	for(int i= 0; i < length -1 ; i++ ){
		if (a == str[i]){
			b++;
		}
	}
        printf("\n so luong la: %d ",b);
	return 0;
}
