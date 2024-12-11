#include<stdio.h>

int main (){
	float math,literature,english,sum,avg;
	printf("nhap diem mon toan: ");
	scanf("%f",&math);
	printf("nhap diem mon van: ");
	scanf("%f",&literature);
	printf("nhap diem mon anh: ");
	scanf("%f",&english);
	sum= math+literature+english;
	avg= sum/3.0;
	printf("tong ba mon la: %.2f",sum);
	printf("\ntrung binh ba mon la: %.2f",avg);
	return 0;
}
