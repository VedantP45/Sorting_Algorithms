#include<bits/stdc++.h>
using namespace std;

void insertion_sort(int arr[],int n)
{
    for(int i=0;i<=n-1;i++)
        {
          int j=i;
        while(j>0 && arr[j-1]>arr[j])
        {
         swap(arr[j-1],arr[j]);
         j--;

        }
       
     }
for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
     }

}
      

int main()
{
     int n;
     cout<<"Enter the value of n:" <<endl;
     cin>>n;
     int arr[n];

     for(int i=0;i<n;i++){
        cin>>arr[i];
     }
     insertion_sort(arr,n);
return 0;
}