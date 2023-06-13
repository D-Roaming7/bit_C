#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>
#include<stdlib.h>
//   void printf_arr(int arr1)
   //{
   //	for (int i = 0;i < 10;i++)
   //	{
   //		printf("%d ", arr1);
   //		arr1 = arr1 + 1;
   //	}
   //}
   //int main()
   //{
   //	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
   //	void printf_arr(int arr);
   //	printf_arr(*arr);

   //	return 0;
   //}
//int main()                       //越界访问导致死循环
//{
//	int j = 0;
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	for ( i = 0;i <= 100;i++)
//	{
//		arr[i] = 0;
//		printf("hehe\n");
//	}
//}

//void printf_s(unsigned int(*arr)[10])
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0;i < 10;i++)
//	{
//		for (j = 0;j <= i;j++)
//		{
//			if (j == 0)
//			{
//				arr[i][j] = 1;
//			}
//			if (i == j)
//			{
//				arr[i][j] = 1;
//			}
//			if (j >0 && i >1)
//			{
//				arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
//			}
//
//		}
//	}
//	
//	for (int i = 0;i < 10;i++)
//	{
//		
//		for (int j = 0;j <= i;j++)
//		{
//			int temp =8-i;
//			if (!j)
//			{
//				while (temp + 1)
//				{
//					printf(" ");
//					temp--;
//				}
//			}
//				printf("%d ", arr[i][j]);
//		}
//		
//		printf("\n");
//	}
//
//}
//int main()                   //输出杨辉三角
//{
//	unsigned int arr[10][10] = { 1231455555551222222 };
//	printf_s(arr);
//
//	return 0;
//}
//#include<time.h>
//
//void xipai(int* arr)
//{
//	for (int i = 4;i >= 0;--i)
//	{
//		srand(time(0));
//		int j = i+rand() %(5-i);
//		int temp = arr[j];
//		arr[j] = arr[i];
//		arr[i] = temp;
//
//	}
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5 };
//	
//	int a = 0, b = 0, c = 0, d = 0, e = 0;
//	void xipai(int* arr);
//	
//	/*for (int j = 0;j < 50;j++)
//	{
//		xipai(arr);
//		for (int i = 0;i < 5;i++)
//		{
//			printf("%d ", arr[i]);
//		}
//		printf("\n");
//	}*/
//	while (1)
//	{
//		xipai(arr);
//		a = arr[0];
//		b = arr[1];
//		c = arr[2];
//		d = arr[3];
//		e = arr[4];
//		if (((b == 2) + (a == 3) == 1)
//			&& ((b == 2) + (e == 4) == 1)
//			&& ((c == 1) + (d == 2) == 1)
//			&& ((c == 5) + (d == 3) == 1)
//			&& ((e == 4) + (a == 1) == 1))
//		{
//			break;
//		}
//	}
//		printf("%d ,%d ,%d ,%d ,%d ", a, b, c, d, e);
//}
//int main()
//{
//	for (int i = 1;i <= 4;i++)
//	{
//		for (int j = 1;j<=4-i;j++)
//		{
//			printf(" ");
//		}
//		for (int w = 1;w <= i * 2 - 1;w ++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	for (int i = 3;i > 0;i--)
//	{
//		for (int j = 1;j <= 4-i;j++)
//		{
//			printf(" ");
//		}
//		for (int w = 1;w <= i * 2 - 1;w++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//}
//#include<string.h>
//using namespace std;
//const int Max = 100001;
//int arr[Max];
//int main()
//{
//	
//	int n = 0, m = 0;
//	while (~scanf("%d %d", &n, &m))
//	{
//		memset(arr, 0, sizeof(arr));
//		for (int i = 0;i < n;i++)
//		{
//			int a = 0;
//			scanf_s("%d", &a);
//			if (arr[a + 50000]>=1)
//			{
//				arr[a + 50000]=1+ arr[a + 50000];
//			}
//			else
//				arr[a + 50000] = 1;
//		}
//		for (int i = Max;m > 0;i--)
//		{
//			if (arr[i])
//			{
//				if (m)
//				{
//					if (arr[i] > 1)
//					{
//						for (int j = arr[i];j > 0;j--)
//						{
//							m--;
//							printf("%d ", i - 50000);
//						}
//					}
//					else if (arr[i])
//					{
//						m--;
//						printf("%d ", i - 50000);
//					}
//
//				}
//			}
//		}
//	}
//}


#include<iostream>
using namespace std;
//int main()
//{
//	float r;
//		int h  ;
//		const double pi = 3.1415926;
//		cin >> r >> h;
//		double d = 2 * pi * r;
//		double s = pi * r * r;
//		double s1 = 4 * pi * r * r;
//		double v1 = 4.0 / 3 * pi * pow(r, 3);
//		double v2 = s * h;
//		printf("周长是%.2f ，面积是%.2f ，表面积是%.2f ，球体积是%.2f ，圆柱体积是%.2f",d,s,s1,v1,v2);
//}
//int main()
//{
//	int x, y;
//	int a = 3, b = 4, c = 5;
//	int q1 = a + b > c && b == c;
//	int q2 = a || b + c && b - c;
//	int q3 = !(a > b) && !c || 1;
//	int q4 = !(x = a) && (y = b) && 0;
//	int q5 = !(a + b) + c - 1 && b + c/2;
//	cout << q1  <<" " << q2 << " " << q3 << " " << q4 << " " << q5 << endl;
//}
//int max(int a, int b, int c)
//{
//	if (b > a)
//	{
//	    int temp = a;
//		a = b;
//		b = temp;
//	}
//		
//	if (c > a)
//		{
//			int temp = a;
//			a = c;
//			c = temp;
//		}
//	return a;
//		
//}
//int main()
//{
//	int a, b, c;
//	cin >> a >> b >> c;
//	int ret=max(a, b, c);
//	cout << ret << endl;
//}
//int f(int x)
//{
//	if (x < 1)
//	{
//		x = x;
//	}
//	else if (x < 10)
//		x = 2 * x - 1;
//	else if (x >= 10)
//	{
//		x = 3 * x - 11;
//	}
//	return x;
//}
//int main()
//{
//	int x, y;
//    while(~scanf("%d", &x)&&x!=0)
//	{
//		y = f(x);
//		cout << y << endl;
//	}
//	
//}
//#include<iostream>
//using namespace std;
//int main()
//{
//	int k = 0;
//	int p = k;
//	while(~scanf("%d",&k)&&k!=0)// (cin >> k&&k!=0)
//	{
//		int n = 2 * k;
//		int m = k;
//		while (1)
//		{
//			int j = 0;
//			int s = 0;
//			for (j = 0;j < k;j++)
//			{
//
//				s = (s + m -1) % (n - j);
//				if (s < k)
//					break;
//			}
//			if (j == k)
//				break;
//			m++;
//		}
//		cout << m << endl;
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int m = n;
//	int count = 0;
//	while (m != 0)
//	{
//		m = m / 10;
//		count++;
//	  }
//	printf("%d\n", count);
//	int j = n;
//	for (int i = 0;i < count;i++)
//	{
//		int a = j % 10;
//		printf("%d ", a);
//		j = j / 10;
//     }
//	int ni = 0;
//	for (int i = 0;i < count;i++)
//	{
//		
//		int b = n % 10;
//		ni = ni * 10 + b;
//		n = n / 10;
//		
//		
//	}
//	printf("%d\n", ni);
//}
//void maopao(int* arr, int sz)
//{
//	for (int i = 0;i < sz - 1;i++)
//	{
//		for (int j = 0;j < sz - i - 1;j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int temp = 0;
//				temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//			}
//		}
//	}
//	for(int i=0;i<sz;i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//int main()
//{
//	int arr[4] = { 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (int i = 0;i < 4;i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	maopao(arr,sz);
//}
//int main()
//{
//	char a;
//	int abc = 0, kong = 0, shuzi = 0, Else = 0;
//	while ((a=getchar())!='\n')
//	{
//		if (a >= 'A' && a <= 'Z' || a >= 'a' && a <= 'z')
//			abc++;
//		else if (a == ' ')
//			kong++;
//		else if (a > 47 && a < 58)
//			shuzi++;
//		else
//			Else++;
//	}
//	printf("%d %d %d %d", abc, kong, shuzi, Else);
//}
//int main()
//{
//	int a, n;
//	cin >> a >> n;
//	int sum = 0;
//	int m = a;
//	for (int i = 1;i <= n;i++)
//	{
//		sum = sum + a;
//		a = a * 10 + m;
//	}
//	cout << sum << endl;
//}
//int main()
//{
//	for (int j = 100;j < 1000;j++)
//	{
//		int sum = 0;
//		int m = j;
//		for (int i = 0;i < 3;i++)
//		{
//			int a = m % 10;
//			sum = sum + pow(a, 3);
//			m = m / 10;
//		}
//		if (sum == j)
//		{
//			cout << j << " ";
//		}
//	}
//}
//void fin (int arr[3][3], int h, int l, int k)
//{
//	int x = 0;
//	int y = l-1;
//	while (x < h && y >= 0)
//	{
//		if (arr[x][y] > k)
//			y--;
//		else
//			x++;
//		if (arr[x][y] == k)
//		printf("zhaodaol");
//	}
//}
//int main()
//{
//	int arr[3][3] = { 1,2,3,4,5,6,7,8,9 };
//	int k;
//	scanf_s("%d", &k);
//	fin(arr, 3, 3, k);
//}
//#include<string.h>
//int main()
//{
//	char arr1[] = {"abbbbcbbbbcdef"};
//	char arr2[] = { "bbbbcde" };
//	void my_strstr(char*, char*);
//	my_strstr(arr1, arr2);
//}
//void my_strstr(char* str1, char* str2)
//{
//	const char* s1 = str1;
//	const char* s2 = str2;
//	char* cpp = str1;
//	while (*cpp&&*str2)
//	{
//		if (*cpp == *str2)
//		{
//			cpp++;
//			str2++;
//		}
//		else
//		{
//			str2 = (char*)s2;
//			//str1++;
//			cpp = ++str1;
//		}
//	}
//	printf("%s",str1);
//}
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	double a, b, c;
//	double s = 0;
//	scanf("%lf%lf%lf",&a,&b,&c);
//	if ((a + b )>= c &&( a + c )>= b &&( b + c )>= a)
//	{
//		double p = (a + b + c) / 2;
//		s = sqrt(p * (p - a) * (p - b) * (p - c));
//		printf("%.2f", s);
//	}
//}
//#include<stdio.h>
//int main()
//{
//	double  r;
//	double  h;
//	const double pi = 3.1415926;
//	scanf("%lf%lf", &r, &h);
//	double d = 2 * pi * r;
//	double s = pi * r * r;
//	double s1 = 4 * pi * r * r;
//	double v1 = 4.0 / 3 * pi * pow(r, 3);
//	double v2 = s * h;
//	printf("%.2f%.2f%.2f%.2f%.2f", d, s, v2, s1, v1);
//}
//int main()
//{
//	int y, Y;
//	double f, t;
//	while(1==scanf("%d",&y)&&y)
//	{
//		int n = (y - 1940) / 10;
//		double t = pow(2, n) * log(2);
//		f = 0;
//		int i = 1;
//		while (f<t)
//		{
//			f += log(++i);
//		}
//		cout << i - 1 << endl;
//	}
//}
//#include<stdio.h>
//int main()
//{
//	int n, p;
//	while (~scanf("%d", &n)) 
//	{
//		int ans = 0;
//		while (n)
//		{
//			scanf("%d", &p);
//			ans = ans ^ p;
//			n--;
//		}
//		if (ans)
//			printf("Yes\n");
//		else
//			printf("No\n");
//	}
//}
//#include<stdio.h>
//int main()
//{
//	int big, little, n, c, k, len;
//	scanf("%d", &c);
//	while (c-- && 2 == scanf("%d%d", &len, &n))
//	{
//		big = 0;
//		little = 0;
//		int temp;
//		for (int i = 0;i < n;i++)
//		{
//
//			scanf("%d", &k);
//			k > len - k ? temp = k : temp = len - k;
//			if (temp > big)big = temp;
//			if (len-temp >little)little = len - temp;
//		}
//		printf("%d %d\n", little, big);
//	}
//}
//void my_memmove(void* dest, void* str, size_t num)
//{
//	for (int i = 0;i < num;i++)
//	{
//		void arr[i] = *(char*)str;
//
//	}
//}
//int main()
//{
//	char str1[] = { 'A','B','C' };
//	char str2[] = { 'X','Y','Z' };
//	for(int i=0;i<3;i++)
//	{
//		for (int j=0;j<3;j++)
//		{
//			if (str1[i] == 'A' && str2[j] == 'X')
//				break;
//			else if (str1[i] == 'C' && (str2[j] == 'X' || str2[j] == 'Z'))
//				break;
//			printf("%c %c", str1[i], str2[j]);
//		}
//	}
//}

//int main()
//{
//	double i = 1.0;
//	double sum = 0;
//	double n = 2.0;
//	for (int j = 0;j < 20;j++)
//	{
//		sum = n / i + sum;
//		int w = i + n;
//		i = n;
//		n = w;
//	}
//	printf("%16.10lf", sum);
//}
//int main()
//{
//	for (int i = 1;i <1000;i++)
//	{
//		int j, sum = 0;
//		for ( j = 1;j <i;j++)
//		{
//			if (i % j == 0)
//			{
//			sum = sum + j;
//			}
//		}
//		if (i ==sum)
//		{
//			printf("%d:",i);
//			for (j = 1;j < i;j++)
//			{
//				if (i % j == 0)
//				{
//					printf("%d ",j);
//				}
//			}
//			printf("\n");
//		}
//	}
//}
//void xipai(char* arr)
//{
//	for (int i = 2;i >= 0;--i)
//	{
//		srand(time(0));
//		int j = i + rand() % (3 - i);
//		char temp = arr[j];
//		arr[j] = arr[i];
//		arr[i] = temp;
//	}
//}
//int main()
//{
//	char str[2][3] = {'A','B','C','X','Y','Z' };
//	while (1)
//	{		
//		xipai(str[1]);
//		if ((str[1][0] != 'X') &&
//			(str[1][2] != 'X' && str[1][2] != 'Z'))
//			break;
//	}
//	for (int i = 0;i < 3;i++)
//	{
//		printf("%c%c ", str[0][i], str[1][i]);
//	}
//}
//#include<stdio.h>
//int main()
//{
//	int m, n;
//	scanf("%d %d",&m,&n);
//	int cout = 0;
//	int j;
//	for (j = m;j <= n;j++)
//	{
//		int sum = 0;
//		int w;
//		int o = j;
//		for (int i = 0;i < 3;i++)
//		{
//			w = o % 10;
//			sum = sum + w * w * w;
//			o = o / 10;
//		}
//		if (sum == j) {
//			printf("%d ", j);
//			cout++;
//		}
//	}
//	if (!cout)
//		printf("no");
//}

//给电文加密。加密规则是对于每一个字符，如果是字母，变换成其相应的其后（循环的字母序，即A紧跟在Z的后面）的第4个字母
//。例如A变成E，a变成e，W变成A，X变成B，Y变成C，Z变成D。如果不是字母，则不进行变换。
//输入
//输入一行字符。
//输出
//输出相应的密码。
//请注意行尾输出换行。
#include<stdio.h>
//using namespace std;
//int main()
//{
//	char arr[31] = {"ABCDEFGHIJKLMNOPQRSTUVWXYZABCD"};
//	char arr1[31] = {"abcdefghijklmnopqrstuvwxyzabcd" };
//
//	char str[100];
//	while (1)
//	{
//		gets_s(str);
//		int i;
//		for ( i = 0;i < strlen(str);i++)
//		{
//			if (str[i] >= 'A' && str[i] <= 'Z')
//				str[i] = arr[(int)(str[i] - 'A') + 4];
//			else if (str[i] >= 'a' && str[i] <= 'z')
//				str[i] = arr1[(int)(str[i] - 'a') + 4];
//		}
//        if (str[i] == '\0');
//		break;
//	}
//	for (int i = 0;i < strlen(str);i++)
//	{
//		printf("%c", str[i]);
//	}
//	printf("\n");
//}

//int main()
//{
//	char str1[20], str2[20] = {0};
//	scanf("%s", str1);
//	char c;
//	int i;
//	for (i = 0;i<strlen(str1);i++)
//	{
//		c = str1[i];
//		if(65<=c<=87)str2[i] = (char)((int)c + 4);
//	}
//	//for (int i = 0;i <strlen(str2);i++)
//		printf("%s", str2);
//}
// 
// 
//int main()
//{
//	int n;
//	while (~scanf("%d", &n) && n != 0)
//	{
//		for (int j = 0;j < n;j++)
//		{
//			for (int i = 0;i < n;i++)
//			{
//				if (i == j)
//					printf("*");
//				else if (i + j == n - 1)
//					printf("*");
//				else printf(" ");
//			}
//			printf("\n");
//		}
//	}
//}
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int arr[51] = { 0 };
//	for (int i = 0;i < n;i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int m = 0;
//	scanf("%d", &m);
//	int i = 0;
//	for ( i = n - 1;i >= 0;i--)
//	{
//		if (arr[i] > m)
//			arr[i + 1] = arr[i];
//		else
//		{
//			arr[i + 1] = m;
//			break;
//		}
//	}
//	//当插入数据最小是i=-1
//	if (i < 0) {
//		arr[0] = m;
//	}
//	for (int i = 0;i < n + 1;i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}

//凯撒大帝密码问题
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char s[] = { "VWXYZABCDEFGHIJKLMNOPQRSTU" },str[400];
//	while (1)
//	{
//		gets_s(str);
//		if (strcmp(str, "START") == 0)continue;
//		if (strcmp(str, "END") == 0)continue;
//		if (strcmp(str, "ENDOFINPUT") == 0)break;
//		for (int i = 0;i < strlen(str);i++)
//		{
//			if (str[i] < 'A' || str[i]>'Z')continue;
//			str[i] = s[(int)(str[i] - 'A')];
//		}
//		puts(str);
//	}
//}
//
//石头剪刀布
//#include<stdio.h>
//#include<string.h>
//int n, k;
//int p1, p2;
//char m1[10],m2[10];
//int main()
//{
//	int win[105] = {0}, lose[105] = {0};
//    for (int m = 0;~scanf("%d%d",&n,&k)&& n != 0;m++)
//	{
//		if (m) {
//			printf("\n");
//			memset(win, 0, sizeof(win));
//			memset(lose, 0, sizeof(lose));
//	   }
//		int i;
//		for ( i = 0;i < k * n * (n - 1) / 2;i++)
//		{
//			scanf("%d %s %d %s", &p1, &m1, &p2, &m2);
//			if (!strcmp(m1, m2))continue;
//			else if (m1[0] == 'r' && m2[0] == 's' ||
//				m1[0] == 's' && m2[0] == 'p' ||
//				m1[0] == 'p' && m2[0] == 'r'
//				) {
//				win[p1]++; lose[p2]++;
//			}
//			else {
//				win[p2]++; lose[p1]++;
//			}
//		}
//		for (int j = 1;j <= n;j++)
//		{
//			if (win[j] + lose[j])printf("%.3lf\n", (double)win[j] / (win[j] + lose[j]));
//			else printf("-\n");
//		}
//	}
//}

//送气球问题   贪心排序
//#include<bits/stdc++.h>
//using namespace std;
//typedef long long ll;
//const int N = 2e5 + 10;
//ll tid[N], id[N];
//int main()
//{
//	int t;
//	scanf("%d", &t);
//	while (t--)
//	{
//		ll n, m, p;
//		scanf("%lld%lld%lld", &n, &m, &p);
//		for (int i = 1;i <= n;i++)
//			scanf("%lld", &id[i]);
//		ll ans = 1e18, sum = 0;
//		for (int i = 1;i <= p;i++)
//		{
//			ll a, b;
//			scanf("%lld%lld", &a, &b);
//			tid[i] = (id[a] - 1 - b + m) % m;
//			sum += tid[i];
//		}
//		sort(tid + 1, tid + p + 1);
//		for (int i = 1;i <= p;i++)
//			ans = min(ans, sum + m * (i - 1) - tid[i] * p);
//		printf("%lld\n", ans);
//	}
//}

//#include<cmath>
//#include<cstdio>
//#include<string.h>
//using namespace std;
//bool u[1111111];
//int su[1111111] = { 0 };
//int num;
//void prepare()
//{
//	int i, j;
//	num = 0;
//	memset(u, true, sizeof(u));
//	for (i = 2;i <= 1000000;i++)
//	{
//		if (u[i])
//			su[++num] = i;
//		for (j = 1;j <= num;j++)
//		{
//			if (i * su[j] > 1000000)break;
//			u[i * su[j]] = false;
//			if (i % su[j] == 0)break;
//		}
//	}
//	/*for (int m = 1;m <= num;m++)
//		printf("%d ", su[m]);*/
//}
//int main()
//{
//	int n;
//	prepare();
//	while (scanf("%d", &n) > 0 && n)
//	{
//		int i = 0;
//		int j = 0;
//		for (i = 1;i <= num;i++)
//		{
//			if (su[i] * 2 > n)break;
//			if (u[n - su[i]])
//			{
//				j = 1;
//				break;
//			}
//		}
//		if (j)
//			printf("%d = %d +%d\n", n, su[i], n - su[i]);//注意空格
//		else
//			printf("Gold's conjecture is wrong");
//	}
//}

//#include<cmath>
//#include<cstdio>
//#include<string.h>
//using namespace std;
//bool u[10000001];
//int su[5000000];
//int num;
//void prepare()
//{
//	int i, j;
//	num = 0;
//	memset(u, true, sizeof(u));
//	for (i = 2;i <= 9999999;i++)
//	{
//		if (u[i])
//			su[++num] = i;
//		for (j = 1;j <= num;j++)
//		{
//			if (i * su[j] > 9999999)break;
//			u[i * su[j]] = false;
//			if (i % su[j] == 0)break;
//		}
//	}
//}
//int main()
//{
//	int n;
//	prepare();
//	while (scanf("%d", &n) > 0)
//	{
//		/*if (n == 8) { puts("2 2 2 2");continue; }
//		if (n == 9) { puts("2 2 2 3");continue; }
//		if (n == 10) { puts("2 2 3 3");continue; }
//		if (n == 11) { puts("2 3 3 3");continue; }
//		if (n == 12) { puts("3 3 3 3");continue; }*/
//		int i = 0;
//		if (n < 8) {
//			puts("Impossible.");continue;
//		}
//		if (n % 2 == 0) { printf("2 2 ");n -= 4; }
//		else { printf("2 3 ");n -= 5; }
//		for (i = 1;i <= num;i++)
//		{
//			if (su[i] * 2 > n)break;
//			if (u[n - su[i]])
//			{
//				printf("%d %d\n", su[i], n - su[i]);
//				break;
//			}
//		}
//	}
//}

//#include<cmath>
//#include<cstdio>
//#include<string.h>
//#define MAX 1000000+100
//using namespace std;
//bool u[MAX];
//int su[MAX] = { 0 };
//int u2[MAX] = { 0 };
//int num;
//void prepare()
//{
//	int i, j;
//	num = 0;
//	memset(u, true, sizeof(u));
//	u[1] = false;
//	for (i = 2;i < MAX;i++)
//	{
//		if (u[i])
//			su[++num] = i;
//		for (j = 1;j <=num;j++)
//		{
//			if (i * su[j] > MAX-100)break;
//			u[i * su[j]] = false;
//			if (i % su[j] == 0)break;
//		}
//	}
//}
//bool issu(int x)
//{
//	int sum = 0;
//	while (x)
//	{
//		sum += x % 10;x = x / 10;
//	}
//	return u[sum];
//}
//int main()
//{
//	prepare();
//	int m = 0;
//	for (m = 2;m <MAX;m++)
//	{
//		if (u[m] && issu(m))
//			u2[m] = 1;
//	}
//	for (m = 2;m < MAX;m++)
//		u2[m] += u2[m - 1];
//	int n, j, k;
//	scanf("%d", &n);
//	while (n--)
//	{
//		scanf("%d%d", &j, &k);
//		printf("%d\n", u2[k] - u2[j - 1]);
//	}
//}

//#include<cmath>
//#include<cstdio>
//#include<string.h>
//#define MAX 1500000
//using namespace std;
//bool u[MAX];
//int su[MAX] = { 0 };
//int ans[MAX] = { 0 };
//int num;
//void prepare()
//{
//	int i, j;
//	num = 0;
//	memset(u, true, sizeof(u));
//	u[1] = false;
//	for (i = 2;i < MAX;i++)
//	{
//		if (u[i])
//			su[++num] = i;
//		for (j = 1;j <= num;j++)
//		{
//			if (i * su[j] >= MAX)break; //少个等号就越界？？？？？？？？？？？？
//			u[i * su[j]] = false;
//			if (i % su[j] == 0)break;
//		}
//	}
//	int m, n;
//	for (m = 2;m < MAX;m++)
//	{
//		if (!u[m])
//		{
//			n = m+1;
//			while (n < MAX && !u[n]) n++;
//			for (int k = m;k <= n - 1;k++)ans[k] = n - m + 1;
//			m = n;
//		}
//	}
//}
//int main()
//{
//	prepare();
//	int n;
//	while (~scanf("%d", &n) && n)
//	{
//		printf("%d\n", ans[n]);
//	}
//}

//#include<cmath>
//#include<cstdio>
//#include<string.h>
//#include<cstdlib>
//#define MAX 100010
//using namespace std;
//bool u[MAX];
//int su[MAX] = { 0 };
//int num;
//void prepare()
//{
//	int i, j;
//	num = 0;
//	memset(u, true, sizeof(u));
//	u[1] = false;
//	for (i = 2;i < MAX;i++)
//	{
//		if (u[i])
//			su[++num] = i;
//		for (j = 1;j <= num;j++)
//		{
//			if (i * su[j] >= MAX)break; 
//			u[i * su[j]] = false;
//			if (i % su[j] == 0)break;
//		}
//	}
//}
//bool ispri(int x)
//{
//	if (x < 10010)return u[x];
//	else {
//		for (int m = 2;m <= num;m++)
//		{
//			if (x % su[m] == 0)
//			{
//				return false;
//				break;
//			}
//		}
//		return true;
//	}
//}
//int main()
//{
//	prepare();
//	int n;
//	int* s = NULL;
//	scanf("%d", &n);
//	while (n--)
//	{
//		int t;
//		scanf("%d", &t);
//		s = (int*)malloc(t * sizeof(int));
//		s[0] = 0;
//		for (int a = 1;a <= t;a++)
//		{
//			scanf("%d", &s[a]);
//			s[a] += s[a - 1];
//		}
//		bool ok = false;
//		for (int i = 2;i <= t;i++)//动态规划，步长为2
//		{
//			int k = 0;
//			int j;
//			for (j = 1;j + i - 1 <= t;j++)//从头到尾搜索以步长为2开始的和
//			{
//				k = s[j + i - 1] - s[j - 1];
//				if (ispri(k))
//				{
//					ok = true;
//					printf("Shortest primed subsequence is length %d:", i);
//					for (int p = 1;p <= i;p++)
//						printf(" %d", s[j + p - 1] - s[j + p - 2]);
//					printf("\n");
//					break;//已找到跳出
//				}
//			}
//			if (ok)//找到最短步长跳出
//				break;
//		}
//		if (!ok)puts("This sequence is anti-primed.");//找不到
//	}
//	free(s);
//	s = NULL;
//}



//#include<cstdio>
//#include<string.h>
//#include<cstdlib>
//#include<iostream>
//using namespace std;
//int p[1000000];
//int gcd(int a, int  b)
//{
//	return b == 0 ? a : gcd(b, a % b);
//}
//int main()
//{
//	int  m ;
//	long long  k;
//	while (cin >> m >> k)
//	{
//		int j = 0;
//		for (int i = 1;i <= m;i++)
//		{
//			if (gcd(m, i) == 1)
//				p[j++] = i;
//		}
//		int n = j;
//		if (k%n!=0)
//			cout<< k / n * m + p[k % n-1]<<endl;
//		else
//			cout << (k / n -1)*m + p[n - 1] << endl;
//	}
//}
//
//#include <iostream>
//#include <vector>
//using namespace std;
//int gcd(int a, int b) {
//	if (b == 0) {
//		return a;
//	}
//	return gcd(b, a % b);
//}
//
//int main() {
//	int m;
//	long long k;
//	while (cin >> m >> k) {
//		vector<int> coprimes;
//		for (int i = 1; i <= m; i++) {
//			if (gcd(i, m) == 1) {
//				coprimes.push_back(i);
//			}
//		}
//		int n = coprimes.size();
//		if (k % n == 0) {
//			cout << (k / n - 1) * m + coprimes[n - 1] << endl;
//		}
//		else {
//			cout << (k / n) * m + coprimes[k % n - 1] << endl;
//		}
//	}
//	return 0;
//}
//
//#include<cstdio>
//#include<string.h>
//#include<cstdlib>
//#include<iostream>
//using namespace std;
//int gcd(int a, int  b)
//{
//	return b == 0 ? a : gcd(b, a % b);
//}
//int main()
//{
//	int* p = NULL;
//	int m;
//	long long  k;
//	while (cin >> m >> k)
//	{
//		p = (int*)malloc(m * sizeof(int) + 40);
//		int j = 0;
//		for (int i = 1;i <= m;i++)
//		{
//			if (gcd(m, i) == 1)
//			{
//				p[j] = i;
//				j++;
//			}
//		}
//		if (k <= j)
//			printf("%d\n", p[k-1]);
//		else if (k % j == 0)
//			cout << k / j * m - m + p[j-1] << endl;
//		else
//			cout << k / j * m + p[k % j-1] << endl;
//	}
//	free(p);
//	p = NULL;
//}

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
//int arr[10];
//void paixu(int* arr)
//{
//	for (int j = 0;j < 10;j++)
//	{
//		int small = j;
//		for (int i= j+1;i < 10;i++)
//		{
//			if (arr[i] < arr[small])
//				small = i;
//		}
//		int temp = arr[small];
//		arr[small] = arr[j];
//		arr[j] = temp;
//		printf("%d ", arr[j]);
//	}
//}
//int main()
//{
//	for (int i = 0;i < 10;i++)
//	{
//		scanf("%d",&arr[i]);
//	}
//	paixu(arr);
//}
//void paixu(int* arr, int  sz)
//{
//	for (int j = 0;j < sz;j++)
//	{
//		int small = j;
//		for (int i = j + 1;i < sz;i++)
//		{
//			if (arr[i] < arr[small])
//				small = i;
//		}
//		int temp = arr[small];
//		arr[small] = arr[j];
//		arr[j] = temp;
//		printf("%d ", arr[j]);
//	}
//}
//int main()
//{
//	int arr[10] = {0,11,21,35,45,56,67,79,888,9999};
//	int m;
//	scanf("%d", &m);
//	int sz = (int)sizeof(arr)/4 + 1;
//	int* p = NULL;
//	/*p=(int*)realloc(arr, sizeof(int)*(sz+1));*/
//	p = (int*)malloc(sizeof(int) * (sz + 1));
//	if (p != NULL)
//		for (int i = 0;i < 10;i++)
//			p[i] = arr[i];
//	p[sz - 1] = m;
//	paixu(p, sz);
//	free(p);
//	p = NULL;
//}
//int main()
//{
//	int arr[10][10] = {1};
//	for (int i = 1;i < 10;i++)
//	{
//		arr[i][0] = 1;
//		arr[i][i] = 1;
//		for(int j=1;j<i;j++)
//		arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
//	}
//	for (int i = 0;i < 10;i++) {
//		for (int j = 0;j <= i;j++)
//			printf("%d ", arr[i][j]);
//		printf("\n");
//	}
//}
#include<stdio.h>
#include<string.h>
#include<iomanip>
using namespace std;
//int main()
//{
//	char str[240] = { 0 };
//	gets_s(str);
//	int ABC = 0;
//	int abc = 0;
//	int number = 0;
//	int kong = 0;
//	int elsechar = 0;
//	for (int i = 0;i < 240;i++)
//	{
//		if (str[i] >= 'A' && str[i] <= 'Z')
//			ABC++;
//		else if (str[i] >= 'a' && str[i] <= 'z')
//			abc++;
//		else if (str[i] >= '0' && str[i] <= '9')
//			number++;
//		else if (str[i]==' ')
//			kong++;
//		else
//			elsechar++;
//	}
//	cout <<setw(4)<< ABC <<setw(4) <<abc << setw(4) << number << setw(4) << kong << setw(4) << elsechar << endl;
//}
//char* my_strcpy(char* str1, char* str2)
//{
//	int i = 0, j = 0;
//	while (str2[j]!= '\0')
//		str1[i++] = str2[j++];
//	str1[i] = str2[j];
//	return str1;
//}
//int main()
//{
//	char str1[] = { "我是神里绫华" };
//	char str2[] = { "的dog" };
//	char* p=my_strcpy(str1, str2);
//	printf("%s", p);
//}

//int main()
//{
//	int f[40], n;
//	scanf("%d", &n);
//	f[1] = 1, f[2] = 1;
//	for (int i = 3;i <=n;i++)
//	{
//		f[i] = f[i - 1] + f[i - 2];
//	}
//	for (int j = 1;j <= n;j++)
//	{
//		printf("%12d", f[j]);
//		if (j % 5 == 0)
//			printf("\n");
//	}
//}
//void maopao(int* arr, int n)
//{
//	for(int i=0;i<n-1;i++)
//		for(int j=0;j<n-i-1;j++)
//			if (arr[j] > arr[j + 1])
//			{
//				int temp = 0;
//				temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//			}
//	for(int i=0;i<n;i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//int main()
//{
//	int arr[200] = { 0 };
//	int n = 0;
//	scanf("%d", &n);
//	for (int i = 0;i<n;i++)
//	{
//		int m;
//		scanf("%d", &m);
//		arr[i] = m;
//	}
//    maopao(arr, n);
//}
//void paixu(int* arr)
//{
//	for (int i = 0;i < 10;i++)
//	{
//		int small = i;
//		for (int j = i+1;j < 10;j++)
//		{
//			if (arr[small] > arr[j])
//			small = j;
//		}
//		int temp = arr[small];
//		arr[small] = arr[i];
//		arr[i] = temp;
//		printf("%d ", arr[i]);
//	}
//}
//int main()
//{
//	int arr[10];
//	for (int n = 0;n < 10;n++)
//	{
//		scanf("%d", &arr[n]);
//	}
//	paixu(arr);
//	printf("\n");
//}
//int main()
//{
//	int n;
//	double avg = 0;
//	scanf("%d", &n);
//	int i = n;
//	while (n--)
//	{
//		int m;
//		scanf("%d", &m);
//		avg += m;
//	}
//	avg /= i;
//	printf("%.2lf", avg);
//}
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int arr[50] = {0};
//	for (int j = 0;j < n;j++)
//	{
//		scanf("%d", &arr[j]);
//	}
//	scanf("%d", &arr[n]);
//	for (int i = 0;i <n+1-1;i++)
//	{
//		for(int a=0;a<n+1-1-i;a++)
//		if (arr[a] > arr[a+ 1])
//		{
//			int temp = arr[a];
//			arr[a] = arr[a + 1];
//			arr[a + 1] = temp;
//		}
//	}
//	for (int j = 0;j < n+1;j++)
//	{
//		printf("%d ", arr[j]);
//	}
//	printf("\n");
//}
//int gcd(int a, int b)
//{
//	return b == 0 ? a : gcd(b, a % b);
//}
//int o_gcd(int x, int y)
//{
//	return x / y;
//}
//int main()
//{
//	int a, b;
//	scanf("%d%d", &a, &b);
//	int ret=gcd(a, b);
//	int bei = o_gcd(a * b, ret);
//	printf("%d %d", ret, bei);
//}

//int isprime(int n)
//{
//	int i;
//	for (i = 2;i <n;i += 2)
//	{
//		if (n % i == 0)break;
//	}
//	if (i >= n)
//		return 1;
//	else
//		return 0;
//}
//int main()
//{
//	int n;
//	while (~scanf("%d", &n)&&n) 
//	{
//		int ret = isprime(n);
//		if (ret)
//			printf("yes ");
//		else
//			printf("no ");
//	}
//}

//void nixu(char * arr,int sz)
//{
//	for (int i = 0;i<=sz-1;i++, sz--)
//	{
//		char temp = arr[sz-1];
//		arr[sz - 1] = arr[i];
//		arr[i] = temp;
//	}
//}
//int main()
//{
//	char arr[1000] = { 0 };
//	while (gets_s(arr) )
//	{
//		int sz = strlen(arr);
//		nixu(arr, sz);
//		printf("%s", arr);
//	}
//}
//void copy(char arr[], char str[], int sz)
//{
//	int j = 0;
//	for (int i = 0;i <= sz - 1;i++) {
//		if (arr[i] == 'a' || arr[i] == 'e' || arr[i] == 'i' || arr[i] == 'o' || arr[i] == 'u')
//		{
//			str[j++] = arr[i];
//		}
//	}
//}
//int main()
//{
//	char arr[100] = { 0 };
//	char str[100] = { 0 };
//	gets_s(arr);
//	int sz = strlen(arr);
//	copy(arr,str, sz);
//	printf("%s",str);
//}


//void maopao(char* str)
//{
//	for (int i=0;i<10-1;i++)
//	{
//		for (int j=0;j<10-1-i;j++)
//		{
//			if (str[j]> str[j+1])
//			{
//				int temp = str[j];
//				str[j] = str[j + 1];
//				str[j + 1] = temp;
//			}
//		}
//	}
//}
//int main()
//{
//	char str[10];
//	for (int i = 0;i < 10;i++)
//	{
//		scanf("%c", &str[i]);
//	}
//	maopao(str);
//	for (int p = 0;p < 10;p++) {
//		printf("%c", str[p]);
//	}
//}

//float p(int n,int x)
//{
//	if (n == 0)
//		return 1;
//	else if (n == 1)
//		return x;
//	else
//		return (2 * n - 1) * x - p(n - 1, x) - (n - 1) * p(n - 2, x) / n;
//}
//int main()
//{
//	int n, x;
//	scanf("%d%d", &n,&x);
//	printf("%f",p(n, x));
//}


//int main()
//{
//	int arr[10][5];
//	for (int i = 0;i < 10;i++)
//	{
//		printf("      sub1     sub2      sub3      sub4      sub5\n");
//		for (int j = 0;j < 5;j++) {
//			printf("NO %d", i+1);
//			scanf_s("%d", &arr[i][j]);
//		}
//	}
//	double avg[10] = { 0 };
//	for (int j = 0;j <50;j++)
//	{
//		int sum = 0, cout = 0, n = 0;
//		sum += (*arr)[j];
//		cout++;
//		if (cout % 5 == 0)
//		{
//			avg[n++] = sum /5;
//			sum = 0;
//		}
//	}
//	double avgsubject[5];
//	for (int i = 0;i < 5;i++)
//	{
//		int sum = 0;
//		for (int j = 0;j < 10;j++)
//		{
//			sum += arr[j][i];
//		}
//		avgsubject[i] = sum/10;
//		sum = 0;
//	}
//	int max = 0;
//	for (int i = 0;i < 10;i++)
//	{
//		for (int j = 0;j < 5;j++)
//			if (max < arr[i][j])
//				max = arr[i][j];
//	}
//	for (int i = 0;i < 10;i++)
//	{
//		printf("%lf", avg[i]);
//	}
//	for(int i=0;i<5;i++)
//		printf("%lf", avgsubject[i]);
//}
//
//int main()
//{
//	int year = 0;
//	int month = 0;
//	int day = 0;
//	cin >> year>>month >> day;
//	int arr[] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
//	bool ru = false;
//	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
//		ru = true;
//	if (ru)
//		arr[2] += 1;
//	int sum = 0;
//	for (int i = 0;i < month;i++)
//	{
//		sum += arr[i];
//	}
//	printf("是%d的第%d天", year, sum + day);
//}
//# define N 2
//# define M 5
//typedef struct transcript
//{
//	int id;
//	int score[M];
//}ts;
//void search(ts* p, int x, int y)
//{
//	int maxid = 0, maxscoreid = 0;
//	for (int i = 0;i < N;i++)
//	{
//		for (int j = 0;j < M;j++)
//		{
//			if (p[i].score[j] > p[maxid].score[maxscoreid]) {
//				maxid = i;
//				maxscoreid = j;
//			}
//		}
//	}
//	printf("最高分的学生为%d的course%d\n", p[maxid].id, maxscoreid+1);
//}
//void myprintf(ts*p,int n,int m,int *avg,int *avgscore)
//{
//	printf("%-10s\t%-10s\t%-10s\t%-10s\t%-10s\t%-10s\n", "学号", "课程1", "课程2", "课程3", "课程4","课程5","平均分");
//	for (int i = 0;i < N;i++)
//	{
//		printf("%-10d\t",p[i].id );
//		for(int j=0;j<m;j++)
//		printf("%-10d\t",p[i].score[j]);
//		printf("%-10d\t", avg[i]);
//		printf("\n");
//	}
//	printf("%-10s\t"," ");
//	for (int j = 0;j < m;j++)
//		printf("%-10d\t",avgscore[j]);
//	printf("\n");
//}
//int main()
//{
//	ts p[N];
//	int n = N;
//	int m = M;
//	int i = 0;
//	while (n--)
//	{
//		printf("请输入学生的学号");
//		scanf("%d", &(p[i].id));
//		printf("输入学生%d门课程的成绩", m);
//		for (int j = 0;j < M;j++)
//		{
//			scanf("%d", &(p[i].score[j]));
//		}
//		i++;
//	}
//	int avg[N];
//	for (int i = 0;i < N;i++)
//	{
//		int sum = 0;
//		for (int j = 0;j < M;j++)
//		{
//			sum += p[i].score[j];
//		}
//		avg[i] = sum / M;
//	}
//	int avgscore[M];
//	for (int i = 0;i < M;i++)
//	{
//		int sum = 0;
//		for (int j = 0;j < N;j++)
//		{
//			sum += p[j].score[i];
//		}
//		avgscore[i] = sum /N;
//	}
//	double fc;
//	int sum_N = 0;
//	myprintf(p,n,m,avg,avgscore);
//	search(p, M, N);
//	for (int i = 0;i < N;i++)
//	{
//		fc = 1.0 / n * avg[i] * avg[i] - pow((avg[i] / n), 2);
//	}
//	printf("方差为%lf\n", fc);
//}
//#include<stdio.h>
//#include<stdio.h>
//typedef struct cr
//{
//	char str[105];
//}S;
//int main()
//{
//	S arr[3];
//	for (int i = 0;i < 3;i++)
//	{
//		scanf("%s", arr[i].str);
//	}
//	int id;
//	int ret=strcmp(arr[0].str, arr[1].str);
//	int ret2=2, ret3=3;
//	if (ret)
//	{
//		ret2=strcmp(arr[0].str, arr[2].str);
//	}
//	else
//		ret3=strcmp(arr[1].str, arr[2].str);
//	if(!ret&&!ret2)
//	printf("%s\n", arr[0].str);
//	else if (!ret && ret2)
//		printf("%s\n", arr[2].str);
//	else
//		printf("%s\n", arr[1].str);
//}
//计算非负整数 m 到 n（包括m 和 n ）之间的所有奇数的和，其中，m 不大于 n，且n 不大于300。例如 m = 3, n = 12, 其和则为：3 + 5 + 7 + 9 + 11 = 35。
//输入
//两个数 m 和 n，两个数以一个空格分开，其中 0 <= m <= n <= 300 。
//输出
//输出一行，包含一个整数，表示m 到 n（包括m 和 n ）之间的所有奇数的和。
//样例输入
//7 15
//样例输出
//55
// 
//求N以内（包括N）的素数。(N <= 100000)
//
//输入
//N
//
//输出
//N以内的所有素数，一个素数占一行。
//#define Max 100001
//bool u[Max];
//int su[Max];
//int main()
//{
//	int num = 0;
//	memset(u, true, sizeof(u));
//	for (int i = 2;i <= Max;i++)
//	{
//		if (u[i])
//			su[++num] = i;
//		for (int j = 1;j <= num;j++)
//		{
//			if (su[j] * i >= Max)break;
//			u[su[j] * i] = false;
//			if (su[j] % i == 0)break;
//		}
//	}
//	int N;
//	scanf("%d", &N);
//	for (int i = 2;i <= N;i++)
//	{
//		if(u[i])
//		printf("%d\n",i);
//	}
//}
//给定n个整数，求其中第m大的数，请编程实现。
//输入
//第一行输入n和m，0 < n <= 100，第二行是n个数的序列，每个数之间有一个空格。
//	输出
//	第m大的数。
//int main()
//{
//	int n, m;
//	scanf("%d%d", &n, &m);
//	int arr[101] = { 0 };
//	for (int i = 0;i < n;i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	for (int i = 0;i < n - 1;i++)
//	{
//		for (int j = 0;j < n - 1 - i;j++)
//		{
//			if (arr[j] < arr[j + 1])
//			{
//				int temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//			}
//		}
//	}
//	printf("%d", arr[m-1]);
//}
//int main()
//{
//	int n;
//	while (~scanf("%d", &n) && n)
//	{
//		int t =n;
//		int arr[1001] = { 0 };
//		for (int i = 0;i < n;i++)
//		{
//			scanf("%d", &arr[i]);
//		}
//		int temp;
//		scanf("%d",&temp);
//		int cout = 0;
//		for (int i = 0;i < n;i++)
//		{
//			if (arr[i] == temp)
//			cout++;
//		}
//		printf("%d\n", cout);
//	}
//}


//具体来说，函数swap的参数是两个指向指针的指针a和b。在函数内部，它创建了一个指向b的指针temp，然后将b的值赋给temp，a的值赋给b，temp的值赋给a。
// 这样做的问题是，虽然指针变量a和b的值被交换了，但是它们指向的地址并没有改变，也就是说，原来指向a的指针依然指向a，原来指向b的指针依然指向b。
// 因此，这个函数并没有实现指针值的交换。
//要实现交换两个指针的值，应该修改swap函数的参数，使其直接接受两个指针，并且在函数内部使用临时指针变量来交换指针所指向的地址。例如，修改函数swap的定义如下：
//void swap(char** a, char** b)
//{
//	char* temp =* b;
//	*b =* a;
//	*a = temp;
//
//}
//int main()
//{
//	char* arr[3];
//	for (int i = 0;i < 3;i++)
//	{
//		arr[i] = (char*)malloc(sizeof(char) * 100);
//		scanf("%s",arr[i]);
//	}
//	void swap(char** a, char** b);
//	for (int j = 0;j < 3-1;j++)
//	{
//		int min = j;
//		for (int g = j + 1;g < 3 - 1;g++)
//		{
//			if(strcmp(arr[min],arr[g]))
//				min=g;
//		}
//		swap(&arr[j], &arr[min]);
//	}
//	for (int i = 0;i < 3;i++)
//	{
//		printf("%s ", arr[i]);
//	}
//}
//void myscanf(int *arr)
//{
//	for (int i = 0;i < 10;i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//}
//void chuli(int* arr) 
//{
//	int max = 0,min = 9;
//	for (int i = 0;i < 10;i++)
//	{
//		if (arr[i] > arr[max])
//			max = i;
//		if (arr[i] < arr[min])
//			min = i;
//	}
//	int temp = arr[max];
//	arr[max] =arr[9];
//	arr[9] = temp;
//    temp = arr[min];
//	arr[min] = arr[0];
//	arr[0] = temp;
//}
//int main()
//{
//	int arr[10] = { 0 };
//	myscanf(arr);
//	chuli(arr);
//	for (int i = 0;i < 10;i++) 
//	{
//		printf("%d ", arr[i]);
//	}
//}
//int main()
//{
//	int n, m;
//	scanf("%d %d", &n,&m);
//	int* p =(int*) realloc(NULL,sizeof(int) * (2*n-m+1));
//	if (p != NULL) 
//	{
//		memset(p, 0, sizeof(int) * (2 * n - m));
//		for (int i = 0;i < n;i++)
//		{
//			scanf("%d", &p[i]);
//		}
//		for (int i = 0,j = n;i < n - m;i++,j++)
//		{
//			int temp = p[i];
//			p[j] = temp;
//		}
//		for (int i = n - m;i < n - m + n;i++)
//		{
//			printf("%d ", p[i]);
//		}
//	}
//	free(p);
//	p = NULL;
//}
//int main()
//{
//	int arr[50];
//	int n;
//	scanf("%d", &n);
//	int* p = arr;
//	for (int i = 0;i < n;i++)
//	{
//		p[i] = i+1;
//	}
//	int m = 0;
//	int i = 0;
//	int k = 0;
//	while (m<n-1)
//	{
//		if (p[i])
//			k++;
//		if (k == 3)
//		{
//			p[i] = 0;
//			k = 0;
//			m++;
//		}
//		i++;
//		if (i == n)
//			i = 0;
//	}
//	for (int i = 0;i < n;i++)
//	{
//		if (p[i])
//			printf("NO%d ", p[i]);
//	}
//}
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char arr[101]={0}, str[101];
//	gets_s(arr);
//	int j = 0;
//	for (int i = 0;i <(int)strlen(arr);i++)
//	{
//		if (arr[i] =='a' || arr[i] =='e' || arr[i] == 'i' || arr[i] == 'o' || arr[i] == 'u' || arr[i] == 'A' || arr[i] == 'E' ||
//			arr[i] == 'I' || arr[i] == 'O' || arr[i] == 'U')
//		{
//			str[j] = arr[i];
//			j++;
//		}
//		str[j] = '\0';
//	}
//	puts(str);
//}
//#include<stdio.h>
//int main()
//{
//	char* arr[10];
//	for (int i = 0;i < 10;i++)
//	{
//		arr[i] = (char*)malloc(sizeof(char) * 100);
//		scanf("%s", arr[i]);
//	}
//	for (int i = 0;i < 10 - 1;i++)
//	{
//		for (int j = i;j < 10 - 1 - i;j++)
//		{
//			if (strcmp(arr[j], arr[j + 1]))
//			{
//				char* p = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = p;
//			}
//		}
//	}
//	for (int i = 0;i < 10;i++)
//	{
//		printf("%s\n", arr[i]);
//	}
//}
//#include<stdio.h>
//int main()
//{
//	int arr[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
//	int year, month, day;
//	scanf("%d%d%d", &year, &month, &day);
//	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
//	{
//		arr[2] += 1;
//	}
//	int sum = 0;
//	for (int i = 0;i < month;i++)
//	{
//		sum += arr[i];
//	}
//	sum += day;
//	if(sum%5||sum%5||sum||%5)
//}
//

//#include <stdio.h>
//#include <string.h>
//
//void main() {
//    int input, output, i = 0, j = 0, integer = 0, position = 0, length_of_integer = 0, decimal_integer = 0;
//    double decimal = 0;
//    char origin[51] = { 0 }, final[51] = { 0 };
//
//    printf("请输入原数据的进制类型：\n");
//    scanf("%d", &input);
//    printf("请输入你要转换的数据：\n");
//    scanf("%s", origin);
//    printf("请输入你要转换成的进制类型：\n");
//    scanf("%d", &output);
//
//    printf("转换成的%d进制数为：\n", output);
//
//    while (origin[position] != '.' && position < 50) {  //寻找小数点的位置，分离整数小数
//        position++;
//    }
//
//    if (origin[position] == '.') {
//        for (i = 0; i < position; i++) {            //转化整数部分，先转化为十进制数，再进行其他进制转换
//            integer = integer * input;
//            if (origin[i] == 'A' || origin[i] == 'B' || origin[i] == 'C' || origin[i] == 'D' || origin[i] == 'E' || origin[i] == 'F') {
//                integer = integer + (origin[i] - 'A' + 10);
//            }
//            else {
//                integer = integer + (origin[i] - '0');
//            }
//        }
//
//        for (i = strlen(origin) - 1; i > position; i--) {      //转化小数部分，先转换为十进制数，再进行其他进制转换
//            if (origin[i] == 'A' || origin[i] == 'B' || origin[i] == 'C' || origin[i] == 'D' || origin[i] == 'E' || origin[i] == 'F') {
//                decimal = decimal + (origin[i] - 'A' + 10);
//            }
//            else {
//                decimal = decimal + (origin[i] - '0');
//            }
//            decimal = decimal / input;
//        }
//    }
//    else {
//        for (i = 0; i < strlen(origin); i++) {      //如果不是小数，先转换为十进制数，再进行其他进制转换
//            integer = integer * input;
//            if (origin[i] == 'A' || origin[i] == 'B' || origin[i] == 'C' || origin[i] == 'D' || origin[i] == 'E' || origin[i] == 'F') {
//                integer = integer + (origin[i] - 'A' + 10);
//            }
//            else {
//                integer = integer + (origin[i] - '0');
//            }
//        }
//    }
//
//    if (integer == 0) {       //单独判断一下整数部分是否为0，如果是，则单独处理
//        final[j] = '0';
//        j++;
//        length_of_integer++;
//    }
//    while (integer) {                //整数部分从十进制转化成其他进制
//        if (integer % output > 9) {
//            final[j] = 'A' - 10 + integer % output;
//        }
//        else {
//            final[j] = integer % output + '0';
//        }
//        integer = integer / output;
//        j++;
//        length_of_integer++;
//    }
//
//    while (j <= 50 && decimal != 0.0) {               //小数部分从十进制转换成其他进制
//        decimal_integer = decimal * output;
//        if (decimal * output > 9) {
//            final[j] = 'A' - 10 + decimal_integer;
//        }
//        else {
//            final[j] = decimal_integer + '0';
//        }
//        decimal = decimal * output - decimal_integer;
//        j++;
//    }
//
//    for (i = length_of_integer - 1; i >= 0; i--) {     //输出整数部分
//        printf("%c", final[i]);
//    }
//    if (origin[position] == '.') {      //如果是小数
//        printf(".");
//        for (i = length_of_integer; i < j; i++) {     //挨个输出小数字符数字
//            printf("%c", final[i]);
//        }
//    }
//}
//#include<iostream>
//#include<algorithm>
//using namespace std;
//int N[5010];
//int main()
//{
//	int n;
//	while (scanf("%d", &n) && n)
//	{
//		for (int i = 1;i <= n;i++)
//			scanf("%d", &N[i]);
//
//		sort(N + 1, N + 1 + n);
//		int num[5010] = { 0 };
//		int j = 0;
//		for (int i = 1;i <= n - 1;i++)
//		{
//			num[j++] = N[i] + N[i + 1];
//			N[i + 1] = N[i] + N[i + 1];
//			sort(N + i + 1, N + n + 1);
//		}
//		int sum = 0;
//		for (int m = 0;m <= j;m++)
//			sum += num[m];
//		cout << sum << endl;
//	}
//	return 0;
//}

//int main()
//{
//	int n;
//	scanf("%d", &n);
//	if(n>=0)
//		n%2==0
//}
//
//
//bool u[160];
//int su[160];
//int w[160];
//int main()
//{
//	int num = 0;
//	memset(u, true, sizeof(u));
//	for (int i = 2;i <160;i++)
//	{
//		if (u[i])
//			su[++num] = i;
//		for (int j = 1;j <= num;j++)
//		{
//			if (i * su[j] >=160)break;
//			u[i * su[j]] = false;
//			if (i % su[j] == 0)break;
//		}
//	}
//	int i, n = 1;
//	for (i = 1;i <= 150;i++)
//	{
//		if ((i - 1) / 4 == 0)
//			if (u[i])
//				w[n++] = i;
//	}
//	for (int o = 1;o <n;o++)
//	{
//		w[o]
//	}
//}
//
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int count = 0;
//	int op = n;
//	while (op)
//	{
//	   
//	}
//}
//
//int main()
//{
//	int n;
//	int year;
//	int my = 0;
//	scanf("%d", &n);
//	my = n % 10000;
//	year = (n - my) / 10000+1;
//	int day=0, month=0;
//	while (1)
//	{
//		int fany = 0;
//		int temp = 0;
//		int cy = year;
//		while (cy)
//		{
//			temp = cy % 10;
//			cy /= 10;
//			fany = fany * 10 + temp;
//		}
//		day = fany % 100;
//		month = (fany - day) / 100;
//		if (day <= 31 && month > 0 && month < 13)
//			break;
//		year++;
//	}
//	year = year * 10000 + day + month * 100;
//	printf("%d", year);
//}
//
//int main()
//{
//	int n;
//	int arr[50][50] = {0};
//	scanf("%d", &n);
//	int l = 0, r = n - 1;
//	int med = n / 2;
//	arr[med - 1][med-1] = med;
//	for (int i = 0;i < r;i++)
//		arr[0][i] = 1;
//	for (int i = 0;i < r;i++)
//		arr[i][0] = 1;
//	for (int i = 1;i < r-1;i++)
//		arr[1][i] = 1;
//	for (int i = 1;i < r-1;i++)
//		arr[i][1] = 1;
//}
//int main()
//{
//	char a[25], b[25], c[25];
//	scanf("%s%s%s", a, b, c);
//	const char* x = a;
//	const char* y = b;
//	const char* z = c;
//	if (strcmp(x ,y))
//	{
//		if (strcmp(y , z))
//			printf("%s %s %s\n", a, b, c);
//		else
//			if(strcmp(z, x))
//			printf("%s %s %s\n", c, a, b);
//			else
//				printf("%s %s %s\n", a, c, b);
//	}
//	else
//		if ((strcmp(x, z)))
//			printf("%s %s %s\n", b, a, c);
//		else
//			if ((strcmp(y, z)))
//				printf("%s %s %s\n", b, c, a);
//			else
//				printf("%s %s %s\n", c, b, a);
//
//}

//#include <stdio.h>
//
//
//int main()
//{
//    char a[100];
//    int number = 0; //数字个数
//    int space = 0;  //空格个数
//    int daletters = 0;//字母个数
//    int xiaoletters = 0;//字母个数
//    int other = 0;  //其他个数
//    scanf("%s", a);
//    int i = 0;
//    while (a[i]=='\0')
//    {
//        if (a[i] >= '0' && a[i] <= '9')
//        {
//            number++;
//        }
//        else if (a[i] == ' ')
//        {
//            space++;
//        }
//        else if (a[i] >= 'a' && a[i] <= 'z')
//            xiaoletters++;
//        else if((a[i] >= 'A' && a[i] <= 'Z'))
//        {
//            daletters++;
//        }
//        else
//        {
//            other++;
//        }
//        i++;
//    }
//
//    printf("%d ", daletters);
//    printf("%d ", xiaoletters);
//    printf("%d ", number);
//    printf("%d ", space);
//    printf("%d\n", other);
//    return 0;
//}
//
//int main()
//{
//	int arr[10];
//	for (int i = 0;i < 10;i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int max = 0, min = 0;
//	for (int i = 0;i < 10;i++)
//	{
//		if (arr[i] > arr[max])
//			max = i;
//		if (arr[i] < arr[min])
//			min = i;
//	}
//	int temp = arr[9];
//	arr[9] = arr[max];
//	arr[max] = temp;
//    temp = arr[0];
//	arr[0] = arr[min];
//	arr[min] = temp;
//	for (int i = 0;i < 8;i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("%d\n", arr[9]);
//}
//写一个函数，将一个5×5的整型矩阵中最大的元素放在中心，4个角分别放4个最小的元素（顺序为从左到右，从上到下顺序依次从小到大存放）。所有的元素调整都需要通过位置的交换实现。在main函数中输入和输出矩阵，通过调用函数来实现矩阵的处理过程。
//
//输入
//共有5行，每行包括5个用空格隔开的整数，表示整个5×5的矩阵。保证整个矩阵中所有的元素互不相同，且最大的元素以及最小的4个元素初始时不在矩阵中心或四个角。
//
//输出
//与输入格式相同，输出按照题目描述中的方法处理后的矩阵。在每个整数后输出一个空格。
//请注意行尾输出换行。
//int main()
//{
//	int arr[5][5];
//	for (int i = 0;i < 5;i++)
//	{
//		for(int j=0;j<5;j++)
//		scanf("%d", &arr[i][j]);
//	}
//	int op[50];
//	for (int j = 0;j < 5;j++)
//		scanf("%d", &arr[i][j]);
//	int max = 0, may= 0;
//	for (int i = 0;i < 5;i++)
//	{
//		for (int j = 0;j < 5;j++)
//			if (arr[i][j] > arr[max][may])
//				max = i, may = j;
//	}
//	int n = 0;
//	for (int i = 0;i < 5;i++)
//	{
//		for (int j = 0;j < 5;j++)
//			op[n++] = arr[i][j];
//	}
//	for(int )
//}
//int main()
//{
//	char str1[201];
//	char str2[201];
//	scanf("%s", str1);
//	scanf("%s", str2);
//	int a = strlen(str1);
//	int b = strlen(str2);
//	int i,c;
//	a > b ? c = a : c = b;
//	for ( i = 0;i <c;i++)
//	{
//		if (str1[i] != str2[i])
//		{
//			printf("%d\n", str1[i] - str2[i]);
//			break;
//		}
//	}
//	if(i==c)
//		printf("%d\n", 0);
//}
//在以上的结构体中，如果job项为s（学生），则第5项为class（班级）；如果job项是t（教师），则第5项为position（职务）。
//输入几个人员的数据，将其保存在以上包含共用体的结构体数组中，并输出。
//输入
//第一行有一个整数n，表示以下n行分别表示n个人员的数据。保证n不超过100。
//之后的n行，每行有5项用空格隔开的内容。前4项分别为人员的号码（整数）、姓名（长度不超过9的无空格字符串）、
//性别（字符，m或f）和职业（字符，s或t）。如果第4项是s，则第5项为一个整数，表示班级；如果第4项是t，则第5项为一个长度不超过9的无空格字符串，表示职务。

//int main()
//{
//	typedef struct {
//		int num;
//		char name[10];
//		char sex;
//		char job;
//		union {
//			int clas;
//			char position[10];
//		}category;
//	}S;
//	S arr[20];
//	int n;
//	scanf("%d", &n);
//	for (int i=0;i < n;i++)
//	{
//		scanf("%d", &arr[i].num);
//		scanf("%s", arr[i].name);
//		getchar();
//		scanf("%c %c", &arr[i].sex, &arr[i].job);
//		if(arr[i].job == 't')
//			scanf("%s", arr[i].category.position);
//		else
//			scanf("%d", &arr[i].category.clas);
//	}
//	for (int i= 0;i < n;i++)
//	{
//		printf("%d ", arr[i].num);
//		printf("%s ", arr[i].name);
//		printf("%c ", arr[i].sex);
//		printf("%c ", arr[i].job);
//		if (arr[i].job == 't')
//			printf("%s\n", arr[i].category.position);
//		else
//			printf("%d\n", arr[i].category.clas);
//	}
//}
//编写两个函数input和print，分别用来输入5个学生的数据记录和打印这5个学生的记录。对于每一个学生，其记录包含了学号、名字、3门课程的成绩共5项。
//用主函数分别调用input和print函数进行输入和输出。
//要求使用结构体数组实现，结构体中包括了每个学生的5项记录。
//
//输入
//共有5行，每行包含了一个学生的学号（整数）、名字（长度不超过19的无空格字符串）和3门课程的成绩（0至100之间的整数），用空格隔开。
//
//输出
//与输入格式相同，每行输出一个学生的所有记录。
//请注意行尾输出换行。
//int main()
//{
//	typedef struct {
//	int num;
//	char name[10];
//	int arr[3];
//	}S;
//	S a[5];
//	for (int i = 0;i < 5;i++)
//			{
//				scanf("%d", &a[i].num);
//				scanf("%s", a[i].name);
//				getchar();
//				scanf("%d %d %d", &a[i].arr[0], &a[i].arr[1], &a[i].arr[2]);
//			
//			}
//	for (int i = 0;i < 5;i++)
//	{
//		printf("%d ", a[i].num);
//		printf("%s ", a[i].name);
//		
//		printf("%d %d %d\n", a[i].arr[0], a[i].arr[1], a[i].arr[2]);
//
//	}
//}
//有10个学生，每个学生的数据包括学号、姓名、3门课程的成绩。读入这10个学生的数据，要求输出3门课程的总平均成绩，
//以及个人平均分最高的学生的数据（包括学号、姓名、3门课程成绩）。
//
//输入
//共有10行，每行包含了一个学生的学号（整数）、名字（长度不超过19的无空格字符串）和3门课程的成绩（0至100之间的整数），用空格隔开。
//
//输出
//第一行包含了3个实数，分别表示3门课程的总平均成绩，保留2位小数，每个数之后输出一个空格。
//第二行输出个人平均分最高的学生的数据，与输入数据格式相同。如果有多位个人平均分最高的学生，输出按照输入顺序第一个最高分的学生数据。
//请注意行尾输出换行。
//int main()
//{
//	typedef struct {
//		int num;
//		char name[10];
//		int arr[3];
//	}S;
//	S a[10];
//	for (int i = 0; i < 10; i++)
//	{
//		scanf("%d", &a[i].num);
//		scanf("%s", a[i].name);
//		getchar();
//		scanf("%d %d %d", &a[i].arr[0], &a[i].arr[1], &a[i].arr[2]);
//
//	}
//	int sum1 = 0, sum2 = 0, sum3 = 0;
//	int sum[10];
//	for (int i = 0; i < 10; i++)
//	{
//		sum1 += a[i].arr[0];
//		sum2 += a[i].arr[1];
//		sum3 += a[i].arr[2];
//		sum[i] = a[i].arr[0] + a[i].arr[1] + a[i].arr[2];
//	}
//	int j = 0;
//	for (int i = 0; i < 10; i++)
//	{
//		if (sum[j] < sum[i])
//			j = i;
//	}
//	printf("%.2f %.2f %.2f\n", sum1 / 10.0, sum2 / 10.0, sum3 / 10.0);
//	printf("%d ", a[j].num);
//	printf("%s ", a[j].name);
//	printf("%d %d %d\n", a[j].arr[0], a[j].arr[1], a[j].arr[2]);
//}

//git出现问题了服了
//打几个水字再push一遍

