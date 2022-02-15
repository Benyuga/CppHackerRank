#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cassert>
using namespace std;

/*Write the class AddElements here*/
template<class T>
class AddElements{
    
    public:
        T element;
        AddElements(T value){element=value;}
        T add(T value){return element+value;}
        T concatenate(T value){return element+value;}
        
};
int main () {
