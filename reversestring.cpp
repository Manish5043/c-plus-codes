#include<iostream>
using namespace std;

void reverse(string& str, int i, int j){
    //base case
    if(i>j)
       return;
    swap(str[i],str[j]);
    i++;
    j--;

    reverse(str, i, j);   
}
int main(){

    string name = "gaurav";
    cout<<endl;
    reverse(name, 0, name.length()-1);
    cout<<endl;
    cout<< name <<endl;

    return 0;

}