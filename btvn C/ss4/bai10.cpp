#include<stdio.h>
int main(){
	int a,b,c;
	scanf("%d %d %d", &a, &b, &c);
	int max,mid, min;
	if(a>b && a>c){
		max=a;
		if(b>c){
			min = c;
			mid =b;
		}else{
			min=b;
			mid = c;
		}
	}else if(b>a && b>c){
		max=b;
		if(a>c){
			min = c;
			mid = a;
		}else{
			min=a;
			mid=c;
		}
	}else if(c>b && c>a){
		max=c;
		if(b>a){
			min = a;
			mid = b;
		}else{
			min=b;
			mid=a;
		}
	}
	printf("%d %d %d", min, mid, max);
	return 0;
}
