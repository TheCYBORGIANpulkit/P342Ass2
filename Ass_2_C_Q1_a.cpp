#include<iostream>
using namespace std;

int main(){
    int d;
    int n = 0;
    /*
    for(int i = 0;i<6; i++){
       arr[i] = i+1;
       //cout << arr[i] << endl;
    }*/
    float a = 0;
    for(int i = 1;i<7; i++){
        for(int j = 1;j<7;j++){
            d = i - j;
            if(d<0)d = (-1)*d;
            a = a + d;
            n = n+1;
        }
    }
    a = a/n;
    cout<<n<<endl;
    cout<< "The average distance between the points is " << a << "." << endl;
    return 0;
}   //RESULT:The average distance between the points is 1.6667.
