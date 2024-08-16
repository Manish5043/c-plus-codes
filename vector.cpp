#include<iostream>
#include<vector>
using namespace std;
int main(){

    vector<int>v;
    cout<< " capacity="<<v.capacity()<<endl;

    v.pushback(1);
      cout<< " capacity="<<v.capacity()<<endl;

     v.pushback(2);
      cout<< " capacity="<<v.capacity()<<endl;

     v.pushback(3);
      cout<< " capacity="<<v.capacity()<<endl;
      cout<< " size"<<v.size()<<endl;

    cout<<"element a 2 index ="<<v.at(2)<<endl;

     cout<< " front="<<v.front()<<endl;
     cout<< " back="<<v.back()<<endl;

     cout<<"before pop="<<endl;
    for(int i : v){
        cout<< "i"<<"  ";
    } cout<< endl;

    v.popback();
     cout<<"after pop"<<endl;
    for(int i:v){
        cout<<i<<"  ";
    }cout<<endl;

     cout<<"before clear size"v.size()<<endl;
     v.clear();
      cout<<"after clear size"v.size()<<endl;

      vector<int> a (5,1);
       cout<<"print a"<<endl;
       for (int i:a){
        cout<< i <"  ";

        return 0;
       }






}