#include "DataStructure/StackQueue.h"


int main()
{
    Stack <int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    while(!st.empty()){
        cout<<st.pop()<<endl;

    }

    cout<<st.size()<<endl;
    if(!st.empty())
    cout<<st.Top()<<endl;


    return 0;
}