#include <iostream>

using namespace std;
#define N 5
int arr[N];
class cQueues{
    int front;
    int rear;
    
    public:
    cQueues(){
        front=-1;
        rear=-1;
    }
    
    // INSERTION
    void cEnqueue(int value){
        if((rear==N-1 && front==0) || rear==front-1)
            cout<<"QUEUE OVERFLOW"<<endl;
        if(rear==-1){
            front=rear=0;
        }
        else if(rear==N-1 && front!=0){
            rear=0;
        }
        else{
            rear++;
        }
        arr[rear]=value;
        //return;
    }
    
    //DELETION
    void cDequeue(){
        if(front==-1){
            cout<<"QUEUE UNDERFLOW"<<endl;
        }
        cout<<arr[front]<<endl;
        arr[front]=0;
        if(front==rear){
            front=rear=-1;
        }
        else if(front==N-1){
            front=0;
        }
        else{
            front++;
        }
        //cout<<front<<" "<<rear<<endl;
    }
    void display(){
        int flag=0;
        int i;
        for(i=front;i<=N-1;i++){
            cout<<arr[i]<<" ";
            if(i==N-1 && front>rear){
                i=0;
                flag =1;
                break;
            }
        }
        if(flag){
            //cout<<flag<<endl;
            for(int j=0;j<=rear;j++)
                cout<<arr[j]<<" ";
        }
        
        
    }
};


int main()
{
    cQueues q;
    q.cEnqueue(11);
    q.cEnqueue(12);
    q.cEnqueue(13);
    q.cEnqueue(14);
    q.cEnqueue(15);
    q.cDequeue();
    q.cEnqueue(16);
    q.cDequeue();
    
    q.display();
    return 0;
}
