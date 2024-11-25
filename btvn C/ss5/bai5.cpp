#include<stdio.h>
int main(){
	int so,nhan;
	for(so=1;so <=9;so++){
		for(nhan=1;nhan<=9;nhan++){
			printf("\n%d x %d = %d", so,nhan,so*nhan);
		}
	}
	return 0;
}
