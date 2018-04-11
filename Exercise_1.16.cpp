/*
给Matrix类添加一个resize 成员函数和一个零参数构造函数
*/
#include<iostream>
#include<stdio.h>
#include<vector>
using namespace std;
template <typename Object>
class matrix{
private:
	vector<vector<Object>> array;
public:
	matrix(int rows, int cols) :array(rows){
		for (int i = 0; i != rows.length; i++){
			array[i].resize(cols);
		}
	}
	matrix(){
		int a = 0;
		int b = 0;
		array.reserve(a);
		array[a].reserve(b);
	}
	const vector<Object> &operator[](int row)const {
		return array[row];
	}
	vector<Object> &operator[](int row){
		return array[row];
	}
	int numrows(){
		return array.size();
	}
	int numcols(){
		return numrows() ? array[0].size() : 0;
	}
	vector<Object> resize(int cols){
		vector<Object> colums;
		colums.reserve(cols);
		return colums;
	}
	
};
int main(){
	return 0;
}