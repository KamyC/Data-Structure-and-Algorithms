/*
设计一个类模版OrderedCollection, 来存储Object对象的集合（在一个数组中），
以及该集合当前的大小。提供public型的函数isEmpty，makeEmpty，insert，remove，findMin和findMax。
findMin和findMax分别返回该集合中最小的和最大的Comparable对象。说明：如果这些操作发生在空结合里应该怎样处理
*/
#include<iostream>
#include<stdio.h>
#include<vector>
using namespace std;
template <typename Object>
class OrderedCollection{
private:
	Object obj;
public:
	OrderedCollection(){};
	~OrderedCollection(){};
	OrderedCollection(Object &val) :obj(val){};
	Object getObj(){
		return obj;
	}
	bool isEmpty(){
		return obj.size() == 0 ? true : false;
	}
	template<typename T>
	Object insert(T val){
		Object temp;
		temp.resize(obj.size() + 1);
		for (size_t i = 0; i != obj.size(); i++){
			temp[i] = obj[i];
		};
		temp[obj.size()] = val;
		obj = temp;
		return obj;
	}
	template<typename T>
	bool contains(T val){
		if (obj.size() == 0){
			return false;
		}
		else{
			for (size_t i = 0; i != obj.size(); i++){
				if (obj[i] == val){
					return true;
				}
				else{
					return false;
				}
			}
		}
	}

	template<typename T>
	void remove(T val){
		if (obj.size() == 0){
			return;
		}
		for (size_t i = 0; i != obj.size(); i++){
			if (obj[i] == val){
				obj[i] = NULL;
			}
		}
		Object temp;
		temp.resize(obj.size() - 1);
		int i = 0;
		for (size_t i = 0; i != obj.size(); i++){
			if (obj[i] != NULL){
				temp[i] = obj[i];
			}
		}
		obj = temp;
	}
	int findMax(){
		int max=obj[0];
		for (size_t i = 1; i != obj.size(); i++){
			if (max < obj[i]){
				max = obj[i];
			}
		}
		return max;
	}
	int findMin(){
		int min = obj[0];
		for (size_t i = 1; i != obj.size(); i++){
			if (min > obj[i]){
				min = obj[i];
			}
		}
		return min;
	}
	void print(){
		for (size_t i = 0; i != obj.size(); i++){
			cout << obj[i] << " ";
		}
		cout << endl;
	}
};


int main(){
	vector<int> a = { 1, 2, 3, 4, 5, 6 };
	OrderedCollection<vector<int>> c(a);
	cout << c.getObj()[0] << endl;
	c.insert(11);
	c.print();
	cout<<c.findMax()<<endl;
	cout << c.findMin() << endl; 
	return 0;
}