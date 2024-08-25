#include<bits/stdc++.h>
using namespace std;

void selection_sort(vector<int> vec,int n){
       for (int  i = 0; i <=n-2; i++)
       {    int mini=i;
            for(int j=i;j<=n-1;j++)
            {
              if(vec[j]<vec[mini])
              mini=j;
            }
            swap(vec[i],vec[mini]);
       }
       for (int i = 0; i < n; i++)
       {
        cout<<vec[i]<<" ";
       }
       
      

}

int main()
{
    int n;
    cout<<"Enter a number n:"<<endl;
    cin>>n;
    vector<int> vec;
    for (int i = 0; i <n; i++)
    {
        int ele;
        cin>>ele;
        vec.push_back(ele);
    }

    selection_sort(vec,n);
    

}