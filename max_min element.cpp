//PRN: 22070123102
//Exp - 7
//Program -5

#include<iostream>
using namespace std;

int main() {
    int n, i, max=0;
    cout<<"Enter number of elements: ";
    cin>>n;
    int a[n];
    for(i=0;i<n;i++){
        cout<<"Enter element-"<<i<<": ";
        cin>>a[i];
    }
    for(i=0;i<n;i++){
        if(a[i]>max){
            max=a[i];
        }
    }
    int min=a[0];
    for(i=0;i<n;i++){
        if(min>a[i]){
            min=a[i];
        }
    }
    cout<<"Maximum: "<<max<<endl<<"Minimum: "<<min;
}
/*OUTPUT
PS D:\Sem-3> cd "d:\Sem-3\Exp7\" ; if ($?) { g++ exp7_6.cpp -o exp7_6 } ; if ($?) { .\exp7_6 }
Enter number of elements: 5
Enter element-0: 2
Enter element-1: 8
Enter element-2: 4
Enter element-3: 1
Enter element-4: 7
Maximum: 8
Minimum: 1 */
