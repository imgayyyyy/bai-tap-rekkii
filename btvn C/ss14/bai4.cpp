//#include<stdio.h>
//#include<string.h>
//int main(){
//	char str[50]="aaabbbccddd";
//	int soLanXuatHien=1;
//	
//	for(int i=0;i<strlen(str)-1;i++){
//		if(str[i]==)
//	}
//}





#include<stdio.h>
#include<string.h>
int main(){
	char arr [50]="hello thay";
	char a;
	int b=0;
	int length = sizeof(arr)/sizeof(char);
	printf("hay nhap ki tu: ");
	scanf("%c",&a);
	for(int i= 0; i < length -1 ; i++ ){
		if (a == arr[i]){
			b++;
		}else{
			printf("\n ko co phan tu nao");
			break;
		}
	}
        printf("\n so luong la: %d ",b);
return 0;
}
