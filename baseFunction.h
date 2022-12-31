#include<iostream>
using namespace std;
//1. maximun
template <typename t> void maximum(t a, t b){
    if(a>b) cout<<a<<endl;
    else cout<<b<<endl;
}
//2.minimum
template <typename t> void minimum(t a, t b){
    if(a<b) cout<<a<<endl;
    else cout<<b<<endl;
}
//3. area of a circle
template <typename t> void CircleArea(t a){
    cout<<3.141596*a*a<<endl;
}






