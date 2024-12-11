#include <stdio.h>

int main (){
	float pi=3.14,r,chuvi,dientich;
	printf("nhap ban kinh hinh tron : ");
	scanf("%f",&r);
	chuvi= r*2*pi;
	dientich= r*r*pi;
	printf("hinh tron co chu vi la: %.2f",chuvi);
	printf("\nhinh tron co dien tich la: %.2f",dientich);
	return 0;
}
