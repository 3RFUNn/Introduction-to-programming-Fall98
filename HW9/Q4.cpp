#include <iostream>
using namespace std;
char dequeue(char* &queue, int &n){
    if(n<=0){
        return -1;
    }
    char avval=queue[0];
    for (int i = 0; i <n-1 ; ++i) {
        queue[i]=queue[i+1];

    }
    --n;
    return avval;
}
void print_queue(char* queue, int n){
    if(n<=0){
        cout<<"empty"<<endl;
    }
    for (int i = 0; i <n ; ++i) {
        cout<<queue[i]<<" ";
    }
    cout<<endl;
}
void enqueue(char* &queue, int &n, char data) {

    char *pointer2 = new char[n + 1];
    for (int i = 0; i <n ; ++i) {
        pointer2[i]=queue[i];
    }
    pointer2[n]=data;
    queue=pointer2;
    n++;
}

int main() {
    int adad=0;
    char*pointer=new char[0];
    char function,input;
    cin>>function;
    while(function!= 'F' ){
        if(function=='E'){
            cin>>input;
            enqueue(pointer,adad,input);
        } else if (function=='D'){
            char bazgasht= dequeue(pointer,adad);
            if(bazgasht==-1)
                cout<<"empty"<<endl;
            else
                cout<<bazgasht<<endl;

        } else if (function=='S'){
                    cout<<adad<<endl;
        }
        else if (function=='P'){
            print_queue(pointer,adad);
        }
        cin>>function;
    }


    return 0;
}
