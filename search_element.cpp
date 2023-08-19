//PRN: 22070123102
//Exp-7
//Program-2

#include<iostream>
using namespace std;

int main() {
    int marks[5], i, j, num, flag=0, count=0;
    for(i=0;i<5;i++) {
        cout<<"Enter element-"<<i+1<<": ";
        cin>>marks[i];
    }
    cout<<"Enter element to be searched: ";
    cin>>num;
    for(j=0;j<5;j++) {
        if(marks[j]==num) {
            cout<<"Position of "<<num<<": "<<j+1<<endl;
            count++;
            flag=1;
        }
    }
    if(flag==0) {
        cout<<"Element not present";
    }
    else if(flag==1) {
        cout<<"Element is present: "<<count<<" times";
    }

/*Output
PS D:\Sem-3> cd "d:\Sem-3\" ; if ($?) { g++ exp7_2.cpp -o exp7_2 } ; if ($?) { .\exp7_2 }
Enter element-1: 45
Enter element-2: 63
Enter element-3: 23
Enter element-4: 12
Enter element-5: 57
Enter element to be searched: 98
Element not present
PS D:\Sem-3> cd "d:\Sem-3\" ; if ($?) { g++ exp7_2.cpp -o exp7_2 } ; if ($?) { .\exp7_2 }
Enter element-1: 45
Enter element-2: 64
Enter element-3: 23
Enter element-4: 23
Enter element-5: 12
Enter element to be searched: 23
Position of 23: 3
Position of 23: 4
Element is present: 2 times */

}
