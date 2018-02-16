/*
只使用处理I/O的printDigit，编写一个函数来输出任意double型量（可以是负的）
*/
#include<iostream>
#include<stdio.h>
#include<math.h>
#include<algorithm>
using namespace std;

void printAll(int n){
	if(n>10){
		printAll(n / 10);
	}
	cout << n % 10;
}
void printDouble(double d, int dec){
	int i = d;
	double frac = d - i;
	if (i< 0){
		putchar('-');
		i = -i;
		frac = -frac;
	}
	printAll(i);
	cout << ".";//0.3456
	frac = frac*pow(10, dec);//345.6
	int frac_2 = frac;//345
	int temp = frac * 10 - frac_2 * 10;
	if (temp > -5){
		frac_2++;
	}
	printAll(frac_2);
}
int main(){
	printDouble(12.3456, 3);
	return 0;
}