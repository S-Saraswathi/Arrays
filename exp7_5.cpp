//PRN: 22070123102
//Exp-7

#include<iostream>
using namespace std;

int main() {
    int a1[5], i, j=0, k, l, a2[5], temp;
    for(i=0;i<5;i++) {
        cout<<"Enter element-"<<i+1<<": ";
        cin>>a1[i];
    }
    for(k=4;k>=0;k--) {
        temp = a1[k];
        a2[j] = temp;
        j++;
    }
    for(l=0;l<5;l++) {
        cout<<a2[l];
    }

/*Output
PS D:\Sem-3> cd "d:\Sem-3\" ; if ($?) { g++ exp7_5.cpp -o exp7_5 } ; if ($?) { .\exp7_5 }
Enter element-1: 1
Enter element-2: 2
Enter element-3: 3
Enter element-4: 4
Enter element-5: 5
54321 */
}