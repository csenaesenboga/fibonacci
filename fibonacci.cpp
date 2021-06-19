#include <iostream>
using namespace std;

int main(){
    int a;
    cout<<"how many elements of the fibonacci series do you want to see?"<<endl;
    cin>>a;
    if(a>=0){
        switch (a)
        {
        case 0:
            break;
        case 1:
            cout<<1;
            break;
        default:
            cout<<1<<" "<<1<<" ";
            break;
        }
        int firstNum = 1;
        int secondNum = 1;
        for(int i=2;i<a;i++){
            int nextNum = firstNum+secondNum;
            cout<<" "<<nextNum<<" ";
            firstNum=secondNum;
            secondNum=nextNum;
        }
    }
    else
        cout<<"please enter a positive number"<<endl;
    }
    

