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
//4 prime
template <typename t> void prime(t a){
    t c=0;
    for(int i=2;i<a;i++){
        if(a%i==0)
        c=1;
    }
    if(c==0)
    cout<<"Number is prime"<<endl;
    else
    cout<<"Number is not prime"<<endl;
}
//5 reverse a number
template <typename t> void reverse(t n){
    t r,a=0;
    while(n>0){
    r = n%10;
    a=a*10+r;
    n=n/10;
    }
    cout<<a<<endl;
}
//6 factorial
template <typename t> void factorial(t n){
    int fact = 1;
    for(int i=2;i<=n;i++){
        fact=fact*i;
    }
    cout<<fact<<endl;
}
//7 linear search
template <typename t> void LinearSearch(t a[],t n,t m){
    t c,d=0;
    for(int i=0;i<n;i++){
        if(a[i]==m){
        c=m;
        d=1;
        cout<<"Found at index: "<<i<<" "<<"place: "<<i+1<<endl;
        }
    }
    if(d==0)
    cout<<"Not Found"<<endl;
}
//8 Binary Search






