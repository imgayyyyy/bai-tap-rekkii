#include<stdio.h>
int main(){
	int a,b,c,d,e;
	scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
	int soChan = 0,soLe = 0;
	
	if(a%2!=0){
		soLe++;
	}else{
		soChan++;
	}
	
	if(b%2!=0){
		soLe++;
	}else{
		soChan++;
	}
	
	if(c%2!=0){
		soLe++;
	}else{
		soChan++;
	}
	
	if(d%2!=0){
		soLe++;
	}else{
		soChan++;
	}
	
	if(e%2!=0){
		soLe++;
	}else{
		soChan++;
	}
	printf("so le co %d so",soLe);
	printf("\nso chan co %d so",soChan);
	return 0;
}
