#include<iostream>
#include<stdio.h>
#include<vector>
#include<string>
using namespace std;

template<typename Comparable> 
const Comparable & findMax(const vector<Comparable> &arr){
	int maxIndex = 0;

	for (int i = 1; i != arr.size(); i++){
		if (arr[maxIndex]<arr[i]){
			maxIndex = i;
		}
	}
	return arr[maxIndex];
}

//template<typename Object> class MemoryCell{
//private:
//	Object storedValue;
//public:
//	explicit MemoryCell(const Object& initialValue=Object()) :storedValue(initialValue){};
//	const Object &read()const{
//		return storedValue;
//	}
//	void write(const Object &x){
//		storedValue = x;
//	}
//};
class Employee{
private:
	string name;
	int salary;
public:
	void setValue(const string &n,const int &value ){
		name = n;
		salary = value;
	}
	const string & getName() const{
		return name;
	}
	void print(ostream &out) const{
		out << name << " :" << salary;
	}
	bool operator< (const Employee & rhs ) const{
		return salary < rhs.salary;
	}
};
ostream & operator<< (ostream & out, const Employee &rhs){
	rhs.print(out);
	return out;
}
int main(){
	//MemoryCell<int> m1;
	//MemoryCell<string> m2("Hello");
	//m1.write(20);
	//cout << m1.read() << endl; 
	//cout << m2.read() << endl;

	vector<Employee> vec(3);
	vec[0].setValue("Jonathan", 10000);
	vec[1].setValue("Kamy", 20000);
	vec[2].setValue("Jinghan", 30000);
	cout << findMax(vec) << endl;
	return 0;
}