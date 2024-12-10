#include <stdio.h>t
/* Function: ham tai sao phai dung ham
 + Ham dung de chia nho cac cong viec lon.
 + Chua mot doan ma code thuc thi mot chuc nang , cong viec, nhiem vu nhat dinh, cu the.
 + de quan ly code.
 + ham co kha nang tai su dung( viet 1 lan va su dung nhieu hon)
 ************************
 Cach khai bao ham
 1 Ham co kieu du lieu tra ve
 2 Ham khong co kieu du lieu tra ve 
 
 luu y : muon ham duoc thuc thi phai goi ham( goi o trong ham main)
  + Quy tac dat ten ham : giong voi quy tac dat ten bien
  + Dat ten ham theo dung 1 dich, chuc nang 
  
*/
   // Khai bao mot hang tinh tong a , b 
   int sum(){
   	int a=5;
   	int b=6;
   	printf ("Tong 2 so %d va %d la %d ", a, b, a + b);
   	return a + b;
   }
   void sayHello(){
   		printf("\nhello");
   }
int main(){
	printf("Hello world! \n");
	sum();
	sayHello();
	return 0;
}
