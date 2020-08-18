#include<iostream>
#include<cmath>
using namespace std;

int main(){
    float s = 0, n = 0;
    float d;
        for (int a = 1;a<7;a++){
            for(int b = 1;b<7;b++){
                for(int i = 1;i<7;i++){
                    for(int j = 1;j<7;j++){
                        d = (abs(i-a)+ abs(j-b));
                        s = s+d;
                        n = n+1;
                    }
                }
            }
        }
    float a = s/n;
    cout<< "The average distance between points is " << a << endl;
    return 0;
    //RESULT: The average distance between two points in the grid is 3.8889.
}

