//PRN: 22070123102
//Exp-7
//Program-4

#include<iostream>
using namespace std;

int main() {
    int a1[5], i, j;
    float sum=0, avg;
    for(i=0;i<5;i++) {
        cout<<"Enter element-"<<i+1<<": ";
        cin>>a1[i];
    }
    for(j=0;j<5;j++) {
        sum = sum + a1[j];
    }
    cout<<"Sum of elements = "<<sum<<endl;
    avg = sum/5;
    cout<<"Average = "<<avg;

/*Output 
PS D:\Sem-3> cd "d:\Sem-3\" ; if ($?) { g++ exp7_4.cpp -o exp7_4 } ; if ($?) { .\exp7_4 }
Enter element-1: 78
Enter element-2: 93
Enter element-3: 88
Enter element-4: 85
Enter element-5: 80
Sum of elements = 424
Average = 84.8 */

}
