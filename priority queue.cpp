#include<iostream>
#include<queue>
using namespace std;
int main(){

    priority_queue<int>max;

    priority_queue<int,vector<int>,greater<int>>mini;

    maxi.push(1);
    maxi.push(3);
    maxi.push(2);
    maxi.push(0);
    int n=maxi.size();
    for(int i=0;i<maxi.size();i++){
        cout<<maxi.top()<<"  ";
        maxi.pop();
    }cout<<endl;
    mini.push(5);
    mini.push(1);
    mini.push(6);
    mini.push(0);   

    int m=mini.size();
    for(int i=0;i<m;i++){
        cout<<mini.top();<<"  ";
        mini.pop();
    }cout<<endl;
    return 0;

}