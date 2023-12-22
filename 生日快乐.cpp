#include<bits/stdc++.h>
#include<windows.h>
void printf_red(const char *s)
{
	printf("\033[0m\033[1;31m%s\033[0m", s);
}

void printf_green(const char *s)
{
	printf("\033[0m\033[1;32m%s\033[0m", s);
}

void printf_yellow(const char *s)
{
	printf("\033[0m\033[1;33m%s\033[0m", s);
}

void printf_blue(const char *s)
{
	printf("\033[0m\033[1;34m%s\033[0m", s);
}

void printf_pink(const char *s)
{
	printf("\033[0m\033[1;35m%s\033[0m", s);
}

void printf_cyan(const char *s)
{
	printf("\033[0m\033[1;36m%s\033[0m", s);
}

using namespace std;
int main()
{
	int a=100;
	while(1)
	{
		cout<<endl;
		printf_cyan("    Happy Birthday");
		Sleep(a);
		system("cls");
		cout<<endl;
		printf_blue("    Happy Birthday");
		Sleep(a);
		system("cls");
		cout<<endl;
		printf_green("    Happy Birthday");
		Sleep(a);
		system("cls");
		cout<<endl;
		printf_yellow("    Happy Birthday");
		Sleep(a);
		system("cls");
		cout<<endl;
		printf_red("    Happy Birthday");
		Sleep(a);
		system("cls");
		cout<<endl;
		printf_pink("    Happy Birthday");
		Sleep(a);
		system("cls");
	}
	return 0;
}
