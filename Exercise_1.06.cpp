/*
��д������������������
void permute(const string & str)
void permute(const string & str, int low, int high)
*/
#include<iostream>
#include<stdio.h>
#include<string>
using namespace std;
//��Ҫ�ǹ��ں������ص���ϰ
void permute(const string& str){
	cout << "first permute�� "<<str << endl;
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