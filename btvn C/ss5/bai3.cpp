#include<stdio.h>
int main(){
	int a;
	int sum =0;
	scanf("%d",&a);
	while(a!=0){
		sum+=a;
		if(a>0){
			a--;
		}else{
			a++;
		}
	}
	printf("%d",sum);
	return 0;
}
