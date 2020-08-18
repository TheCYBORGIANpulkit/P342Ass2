#include<iostream>
using namespace std;

int main(){
    int arr1[3] = {1,2,3};
    int arr2[3] = {1,-2,1};
    int arr3[3];
    int dot = 0, p;
    for(int i = 0;i<3;i++){
        arr3[i] = arr1[i] + arr2[i];
        //cout<<  arr3[i]",";
        p = arr1[i]*arr2[i];
        dot = dot + p;
    }
    cout<< "The vector obtained by adding A and B vectors is the vector {" << arr3[0] << "," << arr3[1] << "," << arr3[2] << "}" <<endl;
    cout<< "The dot product of the vectors is " << dot << "." << endl;
    return 0;
    //The vector obtained by adding A and B vectors is {2,0,4}
    //The dot product of the vectors is 0.//
}
