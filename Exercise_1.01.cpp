/*
��дһ��������ѡ�����⡣��k=N/2,���������ʾ��ĳ����Nȡ��ֵͬʱ������ʱ�䡣
*/
/*
1)�������д�������㷨���ֱ�Ϊbubblesort��sort_2, 
2)����bubblesort���Ը�����Ҫ����������������ģN����ô��K���ֵ��Ȼ�ڵ�K-1λ��
3)����sort_2���㷨����ʱ�����ķ���ֵΪ��K��ġ�
4��ͬʱ���ñ�׼���ڵ�time�������ж���N��ͬ��ʱ���£����ߵ�����ʱ�䳤�̡�
*/
#include<iostream>
#include<stdio.h>
#include<vector>
#include<time.h>
#include<ctime>
using namespace std;

void showAll(const  vector<int> &arr){
	for (vector<int>::size_type i = 0; i != arr.size(); i++){
		cout << arr[i] << ' ';
	}
	cout << "DONE!" << endl;
}
void bubbleSort(vector<int> &arr){
	for (vector<int>::size_type i = 0; i != arr.size(); i++){
		for (vector<int>::size_type j = i; j != arr.size(); j++){
			if (arr[i] < arr[j]){
				swap(arr[i], arr[j]);
			}
		}
	}
}
void Sort_2(vector<int> &arr,int k){
	for (int i = 0; i != k+1; i++){//same as bubblesort except the input size.
		for (int j = i; j != k+1; j++){
			if (arr[i] < arr[j]){
				swap(arr[i], arr[j]);
			}
		}
	}
	//showAll(arr);
	//cout << "start to swap" << endl;
	for (int i = k+1; i != arr.size(); i++){
		if (arr[i] > arr[k]){
			for (int j = 0; j !=k+1 ; j++){
				if (arr[i] > arr[j]){
					swap(arr[i], arr[j]);
					//showAll(arr);
				}
			}
		}
	}

}
void swap(int &a, int &b){
	int temp = b;
	b=a;
	a = temp;
}

void showK(const vector<int> &arr, int k){
	cout << arr[k] << endl;
}
void autoGenerate(vector<int> &arr, int N){
	srand((unsigned) time(NULL));
	for (int i = 0; i != N; i++){
		arr.push_back(rand());
	}
}
int main(){
	vector<int> arr = { 2, 4, 7, 1, 34, 74, 73, 84, 8, 10 };
	int N;
	cin >> N;
	int k = N / 2-1;
	//autoGenerate(arr, N);
	showAll(arr);
	cout << "-------" << endl;
	//double start = clock();
	bubbleSort(arr);
	//double end = clock();
	//cout << end - start << endl;
	showAll(arr);
	cout << "-------" << endl;
	showK(arr, k);
	cout << "-------" << endl;

	vector<int> arr_2 = { 2, 4, 7, 1, 34, 74, 73, 84, 8, 10 };
	Sort_2(arr_2, k);
	showK(arr_2, k);
	return 0;
}