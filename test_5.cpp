#include <stdio.h>
#include <stdlib.h>

#define MPF_1 0x0001
#define XZF_2 0x0002

#define SORT_WAY XZF_2

int main()
{
	int a[10], b[10], j, i,k;
	scanf_s("%d", &k);
	srand(k);
	printf("������10������:");
	//ѡ�񷨰���ѡ(���ظ���10������
	for (i = 0; i < 10; i++)
	{
		a[i] = rand() % 10;
		b[i] = a[i];
		printf("%d  ", a[i]);
	}//����һ����ֵ
	printf("\n");

#if SORT_WAY == XZF_2
	for (i = 0; i < 10; i++)
	{
		if (i != 0)
		{
			a[i] = 0;
			for (j = 0; j < 10; j++)
			{
				if (b[j] >= a[i] && b[j] < a[i - 1])
				{
					a[i] = b[j];
				}
			}
		}
		else
		{
			a[0] = 0;
			for (j = 0; j < 10; j++)
				if (b[j] >= a[0])
				{
					a[0] = b[j];
				}
		}
	}
	for (i = 0; i < 10; i++)//��ӡ
	{
		printf("%d ", a[i]);
		if (a[i] == 0)
			break;
	}
#elif SORT_WAY == MPF_1
	//ð�ݷ�����
	int r;
	for (i = 0; i < 10; i++)//i���ܣ�ֻ��������10��
	{
		for (j = 0; j < 9-i; j++)
		{
			if (a[j] > a[j + 1])
			{
				r = a[j];
				a[j] = a[j + 1];
				a[j + 1] = r;
			}
		}
	}
	for (i = 0; i < 10; i++)//��ӡ
	{
		printf("%d ", a[i]);
	}
#endif
	return 0;
}