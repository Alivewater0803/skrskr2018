// skrskr.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"

void  main()
{
	printf("请输入一段字符：");
	char s[80];
	gets_s(s);
	int a = 0, b = 0, c = 0, d = 0, e = 0, i;
	for (i = 0; s[i] != '\0'; i++)
	{
		if ((s[i] <= 'Z') && (s[i] >= 'A'))
		{
			a++;
		}
		else if ((s[i] <= 'z') && (s[i] >= 'a'))
		{
			b++;
		}
		else if ((s[i] <= '9') && (s[i] >= '0'))
		{
			c++;
		}
		else if (s[i] == ' ')
		{
			d++;
		}
		else
		{
			e++;
		}
	}
	printf("大写字母数为：%d\n", a);
	printf("小写字母数为：%d\n", b);
	printf("数字数为：%d\n", c);
	printf("空格数为：%d\n", d);
	printf("其他特殊含义字符数为：%d\n", e);
}

 