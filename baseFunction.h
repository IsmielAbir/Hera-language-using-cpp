#include<bits/stdc++.h>
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
int BinarySearch(int a[], int l, int r, int n){
    while(l<=r){
        int mid = l+(r-l)/2;
        if(a[mid]==n)
        return mid;
        else if(a[mid]<n)
        l = mid +1;
        else
        r= mid -1;
    }
    return -1;
}
//9 ternary search
int TernarySearch(int ar[],int l, int r, int key){
    while (r >= l) {
        int mid1 = l + (r - l) / 3;
        int mid2 = r - (r - l) / 3;
            if (ar[mid1] == key) {
            return mid1;
        }
        if (ar[mid2] == key) {
            return mid2;
        }
        if (key < ar[mid1]) {
            r = mid1 - 1;
        }
        else if (key > ar[mid2]) {
            l = mid2 + 1;
        }
        else {
            l = mid1 + 1;
            r = mid2 - 1;
        }
    }
    return -1;
}
//10 selection sort
void selectionSort(int a[], int n){
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(a[j]<a[i])
            swap(a[j],a[i]);
        }
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}
//11 bubble sort
void bubbleSort(int a[], int n){
    int c=1;
    while(c<n-1){
        for(int i=0;i<n-c;i++){
            if(a[i]>a[i+1])
            swap(a[i], a[i+1]);
        }
        c++;
    }
    for(int i=0;i<n;i++)
    cout<<a[i]<<" ";
}
//12 insertion sort
void insertionSort(int a[], int n){
    for(int i=1;i<n;i++){
        int c=a[i];
        int j=i-1;
        while(j>=0 && a[j]>c){
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=c;
    }
    for(int i=0;i<n;i++)
    cout<<a[i]<<" ";
}
//13 possible sub array of the following
void subArray(int a[], int n){
   for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            for(int k=i;k<=j;k++){
                cout<<a[k]<<" ";
            }
            cout<<endl;
        }
    }
}
//14 palindrome
template<typename N>void stringPalindrome(N n){
    int c=0;
    for(int i=0;i<n.size();i++){
        if(n[i]!=n[n.size()-1-i])
        c=1;
    }
    if(c==0)
    cout<<"Palindrome"<<endl;
    else
    cout<<"Not Palindrome"<<endl;
}
//15 lower to upper
void lowerToUpper(string s){
    transform(s.begin(), s.end(), s.begin(), ::toupper);
    cout<<s<<endl;
}
//16 upper to lower
void upperToLower(string s){
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    cout<<s<<endl;
}
//17 sieve algorithm
void sievePrime(int n){
    int prime[1000]={};
    for(int i=2;i<=n;i++){
        if(prime[i]==0){
            for(int j=i*i;j<=n;j+=i){
                prime[j]=1;
            }
        }
    }
    for(int i=2;i<=n;i++){
        if(prime[i]==0)
        cout<<i<<" ";
    }
}
//18 gcd
void gcd(int a, int b){
    cout<<__gcd(a,b);
}
//19 print function 
template<typename T>void hera(T value) {
    std::cout << value;
}
template<typename T, typename... Args>void hera(T value, Args... args) {
    std::cout << value;
    hera(args...);
}
//20 input function
template<typename N>void zeus(N& a){
    cin>>a;
}
template<typename N, typename... args> void zeus(N& b, args&... c){
    cin>>b;
    zeus(c...);
}
//21 fibonacci
int fibonacci(int n){
    if(n==0 || n==1)
    return n;
    return fibonacci(n-1) + fibonacci(n-2);
}
//22 print all number in decreasing order
void decrease(int n){
    if(n==0)
    return;
    cout<<n<<" ";
    decrease(n-1);
}
//23 print all number in increasing order
void increase(int n){
    if(n==0)
    return;
    increase(n-1);
    cout<<n<<" ";
}
//24