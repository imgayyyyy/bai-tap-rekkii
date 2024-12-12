#include<Stdio.h>
#include<string.h>
int main(){
	char str[50]="abcd";
	int length=strlen(str);
	for(int i=0;i<length;i++){
		printf(" %c",str[i]);
	}
}
