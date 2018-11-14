#include <stdio.h>
#include <stdlib.h>

int main() {

	int a,b,c;
    printf("这是一个加法计算器,欢迎您的使用\n");
    printf("-------------------\n");
    printf("请输入第一个数(输入完毕后请按回车)\n");
	scanf("%d", &a);
    printf("请输入第二个数(输入完毕后请按回车)\n");
	scanf("%d", &a);
	c=a+b;
	printf("%d+%d=%d", a,b,c);
	system("pause");
	return 0;
}
