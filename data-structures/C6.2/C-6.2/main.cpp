//
//  main.cpp
//  C-6.2
//
//  Created by Clayton Castro on 11/10/21.
//

#include <iostream>

using namespace std;


typedef int Elem;
class ArrayVector{
public:
    ArrayVector() :  capacity(0), n(0), A(NULL) { };
    int size() const;
    bool empty() const;
    Elem& operator[](int i);
    Elem& at(int i); //throw(IndexOutOfBounds);
    void erase(int i);
    void insert(int i, const Elem& e);
    void reserve(int N);
protected:
    int capacity;
    int n;
    Elem* A;
    
};


int ArrayVector::size() const{
    return n;
}
bool ArrayVector::empty() const {
    return size() == 0;
}

Elem& ArrayVector::operator[ ](int i) {
    return A[i];
}
Elem& ArrayVector::at(int i) {
    return A[i];
}
void ArrayVector::erase(int i) {
    for (int j = i+1; j < n; j++){
        A[j-1]=A[j];
    }
    n--;
}
void ArrayVector::reserve(int N) {
    if (capacity >= N) return;
    Elem* B = new Elem[N];
    for (int j = 0; j < n; j++){
        B[j] = A[j];
    }
    if (A != NULL) delete [] A;
    A = B;
    capacity = N;
}
void ArrayVector::insert(int i, const Elem& e) {
    if (n >= capacity){
        reserve(max(1, 2 * capacity));
    }
    for (int j = n - 1; j >= i; j--){
        A[j+1] = A[j];
    }
    A[i] = e;
    n++;
}



class ShrinkingVector: public ArrayVector{
public:
        void shrinkToFit(){
                Elem* newArr=new Elem[n];
                for(int i=0;i<n;i++){
                        newArr[i]=A[i];
                }
                delete[] A;
                A=newArr;
                capacity=n;
        }
};


int main(int argc, const char * argv[]) {

    ShrinkingVector x;
    x.insert(0,5);
    x.insert(1,6);
    x.insert(2,12);
    x.reserve(5);
    x.shrinkToFit();
    
    for(int i=0; i<x.size(); i++){
        cout << x.at(i) << endl;
    }
    
    
    return 0;
}
