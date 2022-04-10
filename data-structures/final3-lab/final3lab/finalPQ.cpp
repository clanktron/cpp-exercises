//
//  finalPQ.cpp
//  labfinal3
//
//  Created by Clayton Castro on 12/13/21.
//

#include "finalPQ.hpp"

void finalPQ::insert(int x) {
    data[count] = x;
    sort();
    count++;
}

void finalPQ::removeMin() {
    int tmp[10];
    for(int i=0; i<size(); i++){
        tmp[i]=data[i+1];
    }
    copy(begin(tmp), end(tmp), begin(data));
}

bool finalPQ::isEmpty() {
    return count == 0;
}

int finalPQ::min() {
    return data[0];
}

int finalPQ::size() {
    return count;
}

void finalPQ::sort(){
    for(int i=0; i<size(); i++)
        {
            for(int j=i+1; j<size(); j++)
            {
                if(data[i]>data[j])
                {
                    int temp=data[i];
                    data[i]=data[j];
                    data[j]=temp;
                }
            }
        }
}
