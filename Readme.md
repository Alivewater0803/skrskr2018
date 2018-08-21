 #  任天喆的demo
 ##  干什么用的
输入一串数字并计算其平均值  
 ## 如何运行
```cpp
 #include "stdafx.h"
 #include<iostream>
using namespace std;
int main()
{
	int i, n;
	double score, sum, avg;
	sum = 0;
	cout << "数字数目" << endl;
	cin >> n;
	cout << "输入数字" << endl;
	i = 1;
	while (i <= n)
	{
		cin >> score;
		sum += score;
		i++;
	}
	avg = sum / n;
	cout << "平均数为" << avg << endl;
	system("pause");
    return 0;
} 
```
![mywork](mywork.png)