#include <stdio.h>
int main() {
	long long int p, i, l;
	printf("请输入当月利润：");
	scanf_s("%lld", &p);
	l = p / 100000;
	switch (l)
	{
	case 10:
		i = (p - 1000000) * 0.01;
		break;
	case 6:
		i = (p - 600000) * 0.015;
		break;
	case 4:
		i = (p - 400000) * 0.03;
		break;
	case 2:
		i = (p - 200000) * 0.05;
		break;
	case 1:
		i = (p - 100000) * 0.075;
		break;
	case 0:
		i = p * 0.1;
		break;
	default:
		printf("输入值异常/n");
		break;
	}
	printf("应发奖金数为：%lld", i);
	return 0;
}




