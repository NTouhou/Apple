#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

double integral(double, double, int);
double f(double);
void main(){
	int n;
	double a,b,result;
	printf("始端の値を入力してください＞＞");
	scanf("%lf", &a);
	printf("終端の値を入力してください＞＞");
	scanf("%lf", &b);
	printf("区間の分割数を入力してください＞＞");
	scanf("%d", &n);

	result = integral(a,b,n);
	printf("計算結果は%lfです。\n",result);

	scanf("%d", &n); //実行画面が勝手に消えてしまうので
	return;
}

double integral(double a, double b, int n){
	double result=0;
	int i;
	for(i=1;i<=n;i++){
		result += f(a+((b-a)/n)*i);
	}
	result *= (b-a)/n;
	return result;
}

double f(double x){
	return 1/(1+(x*x));
}