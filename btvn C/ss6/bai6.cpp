#include<stdio.h>
int main(){
	int ngay,thang;
	printf("nhap ngay ...... thang......");
	scanf("%d %d", &ngay, &thang);
	if( (ngay >= 21 && ngay <=31 && thang ==3) || (ngay >=1 && ngay <=20 && thang == 4)){
		printf("bach duong");
	}else if((ngay>=21 && ngay<=30 && thang ==4) || (ngay>=1 && ngay<=20 && thang ==5)){
		printf("kim nguu");
	}else if((ngay>=21 && ngay <=31 && thang==5) || (ngay>=1&&ngay<=21&&thang==6)){
		printf("song tu");
	}else if((ngay>=22&&ngay<=30&&thang==6) || (ngay>=1&&ngay<=22&&thang==7)){
		printf("cu giai");
	}else if((ngay>=23&&ngay<=31&&thang==7) || (ngay>=1&&ngay<=22&&thang==8)){
		printf("su tu");
	}else if((ngay>=23&&ngay<=31&&thang==8) || (ngay>=1&&ngay<=22&&thang==9)){
		printf("xu nu");
	}else if((ngay>=23&&ngay<=30&&thang==9) || (ngay>=1&&ngay<=23&&thang==10)){
		printf("thien binh");
	}else if((ngay>=24&&ngay<=31&&thang==10) || (ngay>=1&&ngay<=22&&thang==11)){
		printf("bo cap");
	}else if((ngay>=23&&ngay<=30&&thang==11) || (ngay>=1&&ngay<=21&&thang==12)){
		printf("nhan ma");
	}else if((ngay>=22&&ngay<=31&&thang==12) || (ngay>=1&&ngay<=19&&thang==1)){
		printf("ma ket");
	}else if((ngay>=20&&ngay<=31&&thang==1) || (ngay>=1&&ngay<=18&&thang==2)){
		printf("bao binh");
	}else if((ngay>=19&&ngay<=29&&thang==2) || (ngay>=1&&ngay<=20&&thang==3)){
		printf("su tu");
	}
	return 0;
}
