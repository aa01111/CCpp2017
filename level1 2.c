#include <stdio.h>
#include <stdlib.h>
int main()
{
	int num,mark=0,i;
	printf("����һ�����ڶ�������");
	scanf("%d", &num);
	for (i=2;i<num;i++)
	{
		if (num % i == 0)
		{
			printf("%d��������", num);
			mark = 1;
			break;
		}
	  }

	if (mark == 0)
	{
		printf("%d������", num);
	}
		system("pause");
		return 0;
}
