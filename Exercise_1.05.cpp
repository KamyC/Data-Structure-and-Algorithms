/*
��дһ���ݹ鷽������������N�Ķ����Ʊ�ʾ��1�ĸ�����������������ʵ�����N����������ô������N/2�Ķ����Ʊ�ʾ��1�ĸ�����1
*/
#include<iostream>
#include<string>
using namespace std;

//����Ƿǵݹ�ķ���
int conBinary_1(int n){
	int count = 0;
	while (n >0)
	{	
		if (n % 2 == 1){
			count++;
			cout << "count++" << endl;
		};
		n = n / 2;
	}

	return count;
}
//����ǵݹ�ķ���
int conBinary_2(int n){
	if (n == 0){
		return 0;
	}
	else if (n % 2 == 1){
		return conBinary_2(n / 2) + 1;
	}
	else{
		return conBinary_2(n / 2);
	};
}


int main(){
	int input;
	cin >> input;
	cout << conBinary_1(input) << endl;
	cout << conBinary_2(input) << endl;
	return 0;
}