#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

double integral(double, double, int);
double f(double);
void main(){
	int n;
	double a,b,result;
	printf("�n�[�̒l����͂��Ă�����������");
	scanf("%lf", &a);
	printf("�I�[�̒l����͂��Ă�����������");
	scanf("%lf", &b);
	printf("��Ԃ̕���������͂��Ă�����������");
	scanf("%d", &n);

	result = integral(a,b,n);
	printf("�v�Z���ʂ�%lf�ł��B\n",result);


	scanf("%d", &n); //���s��ʂ�����ɏ����Ă��܂��̂�
	return;
}

double integral(double a, double b, int n){
	double result=0,x,h;
	int i;
	h=((b-a)/n);
	for(i=0;i<n;i++){
		x = a+h*i;
		result += f(x)+f(x+h);
	}
	result *= h/2;
	return result;
}

double f(double x){
	return 1/(1+(x*x));
}