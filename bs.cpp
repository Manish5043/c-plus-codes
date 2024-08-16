#include<iostream>
using namespace std;

int binarysearch(int arr[],int size,int key){

    int start=0;
    int end=size-1;

    int mid=(start+end)/2;

    while(start<=end){

        if(arr[mid]== key){
            return mid;
        }
        if(key>arr[mid]){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
        mid=(start+end)/2;
    }
    return -1;
}
int main(){
    int even[6]={2,4,6,8,10,12};
    int odd[5]={3,8,11,14,16};
    int evenindex = binarysearch(even,6,10);
    cout<<"index of 10 is"<<evenindex<<endl;
    int oddindex = binarysearch(even,5,11);
    cout<<"index of 14 is"<<oddindex<<endl;

    return 0;
}
