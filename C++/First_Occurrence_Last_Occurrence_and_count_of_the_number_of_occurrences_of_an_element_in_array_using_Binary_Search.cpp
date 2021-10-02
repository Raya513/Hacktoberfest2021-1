
#include <iostream>
using namespace std;

int Binarysearch(int a[],int n,int key,bool firstOcc)
{
    int low=0,high=n-1,result=-1;
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(key==a[mid])
        {
            result=mid;
            if(firstOcc) //if true search the first occurence of the element
               high=mid-1;//searching in lower half for first occurence
            else
               low=mid+1;//searching in upper half for last occurence
        }
        else if(key<a[mid])
        {
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    return result;
}

int main()
{
    int a[]={1,3,3,3,3,3,4};
    int FirstOcc=Binarysearch(a,7,3,true);
    int LastOcc=Binarysearch(a,7,3,false);
    cout<<"FIRST occurence of the element at = "<<Binarysearch(a,7,3,true)+1<<endl;
    cout<<"LAST occurence of the element at = "<<Binarysearch(a,7,3,false)+1<<endl;
    cout<<"Count of occurences of the element = "<<LastOcc-FirstOcc+1;
    
    return 0;
}
