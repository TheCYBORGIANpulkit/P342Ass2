#include <iostream>  //declaring variables
#include <iomanip>
#include <string>
#include <fstream>
using namespace std;
int main() {
   //initialie the array size
   cout<<"The matrix M is:"<< endl;
    int arrM[3][3];
    ifstream myfileM;
    myfileM.open("M.txt");
    for(int i = 0;i<3;i++){
        for(int j = 0;j<3;j++){
            myfileM >> arrM[i][j];
            cout<< arrM[i][j] <<" ";
        }
        cout<<endl;
    }

    cout<<"The matrix N is:"<< endl;
    int arrN[3][3];
    ifstream myfileN;
    myfileN.open("N.txt");
    for(int i = 0;i<3;i++){
        for(int j = 0;j<3;j++){
            myfileN >> arrN[i][j];
            cout<< arrN[i][j]<< " ";
        }
        cout<<endl;
    }

    int arrP[3][3], x;
    int arrQ[3][3];
    for(int i = 0;i<3;i++){
        for(int j = 0;j<3;j++){
            arrP[i][j] = 0;
            arrQ[i][j] = 0;
        }
    }
    for(int a = 0;a<3;a++){
        for(int b = 0;b<3;b++){
            for(int i = 0;i<3;i++){
                x = int(arrM[a][i])*int(arrN[i][b]);
                //cout<<x<<endl;
                arrP[a][b] = arrP[a][b] + x;
                //cout<< arrP[a][b];
            }
            //cout<< arrP[a][b]<< " ";
            //cout<< endl;
        }
    }
    cout<<"The product M*N matrix is:"<< endl;
    for(int i = 0;i<3;i++){
        for(int j = 0;j<3;j++){
            cout<<arrP[i][j]<< " ";
        }
        cout<<endl;
    }
//A matrix
    int arrA[3][3];
    for(int i = 0;i<3;i++){
        for (int j = 0;j<3;j++){
            if(i == j){
                arrA[i][j] = -1;
            }
            else{
                arrA[i][j] = 0;
            }
        }
    }
    for(int a = 0;a<3;a++){
        for(int b = 0;b<3;b++){
            for(int i = 0;i<3;i++){
                x = int(arrM[a][i])*int(arrA[i][b]);
                //cout<<x<<endl;
                arrQ[a][b] = arrQ[a][b] + x;
                //cout<< arrP[a][b];
            }
            //cout<< arrP[a][b]<< " ";
            //cout<< endl;
        }
    }
    cout<<"The product M*A is:"<< endl;
    for(int i = 0;i<3;i++){
        for(int j = 0;j<3;j++){
            cout<<arrQ[i][j]<< " ";
        }
        cout<<endl;
    }
    //RESULT:
    /*
    The matrix M is:
    1 0 0
    0 2 0
    0 0 3
    The matrix N is:
    3 0 0
    0 2 0
    0 0 1
    The product M*N matrix is:
    3 0 0
    0 4 0
    0 0 3
    The product M*A is:
    -1 0 0
    0 -2 0
    0 0 -3
    */
    myfileM.close();
    myfileN.close();
    return 0;
}
