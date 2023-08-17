//PRN: 22070123102
//Exp-7

#include<iostream>
using namespace std;

int main() {
    int i, marks[5] = {80, 76, 93, 87, 74};
    for(i=0;i<5;i++) {
        cout<<"Element-"<<i+1<<": "<<marks[i]<<endl;
    }

/*Output
PS D:\Sem-3> cd "d:\Sem-3\" ; if ($?) { g++ exp7_1.cpp -o exp7_1 } ; if ($?) { .\exp7_1 }
Element-1: 80
Element-2: 76
Element-3: 93
Element-4: 87
Element-5: 74 */

}