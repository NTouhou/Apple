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