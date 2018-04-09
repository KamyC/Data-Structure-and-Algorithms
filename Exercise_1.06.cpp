/*
编写带有下列声明的例程
void permute(const string & str)
void permute(const string & str, int low, int high)
*/
#include<iostream>
#include<stdio.h>
#include<string>
using namespace std;
//主要是关于函数重载的练习
void permute(const string& str){
	cout << "first permute： "<<str << endl;
}
void permute(const string &str, int low, int high){
	
	for (low; low != high; low++){
		cout << str[low] << endl;
	}
}
int main(){
	string str;
	cin >> str;
	int low = 0;
	int high = str.length();
	permute(str);
	permute(str, low, high);
	return 0;
}