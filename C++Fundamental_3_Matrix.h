//#ifndef MATRIX_H
//#define MATRIX_H
//#include<vector>
//
//using namespace std;
//template <typename Object> 
//class matrix{
//public :
//	matrix(int rows, int cols){//initialize the matrix with rows and cols
//		//arr = rows; //this line seems indispensable
//		for (int i = 0; i != rows; i++){
//			arr[i].resize(cols);
//		}
//	}
//	const vector<Object> &operator[](int row) const{
//		return arr[row];
//	}
//	vector<Object> &operator[](int row){
//		return arr[row]
//	}
//
//	int numrows() const{
//		return arr.size();
//	}
//	int numcols() const{
//		return numrows() ? arr[0].size() : 0;
//	}
//private:
//	vector<vector<Object> > arr;
//};
//
//void copy(const matrix <int>& from, matrix <int>& to){
//	for (int i = 0; i != from.numrows(); i++){
//		to[i] = from[i];
//	}
//}
//#endif
