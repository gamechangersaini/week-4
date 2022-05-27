#include <iostream>
using namespace std;

void quick(int arr[],int l,int h)
{
  int pivot=arr[l];
  int i=l;
  int j=h;
  int temp;
  while(i<j)
  {
      while(pivot>=arr[i] && i<j)
      {
          i++;
      }
      while(pivot<arr[j])
      {
          j--;
      }
      if(i<j)
      {
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
      }
  }
  temp=arr[l];
  arr[l]=arr[j];
  arr[j]=temp;
   if(l<h)
        {
            quick(arr,l,j);
            quick(arr,j+1,h);
        }

}

int main ()
{int t;
cin>>t;
while(t--)
{
    int n;
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    quick(arr,0,n);
    for(int i=0;i<n;i++)
    {
       cout<<arr[i]<<" ";
    }
cout<<endl;
}
    return 0;
}
