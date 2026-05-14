#include<bits/stdc++.h>
using namespace std;
#define max 100
struct  Queue{
       int arr[max];
       int front ;
       int rare;
};
void createqueue(Queue* q){
    q->front=0;
    q->rare=-1;
}
void enqueue(Queue* q,int val){
       if(q->rare==max-1){
        cout<<"queue overflow";
        return;
       }
       q->rare++;
       q->arr[q->rare]=val;
       cout<<"enqueue done"<<endl;
}
void dequeue(Queue* q){
    if(q->front>q->rare){
        cout<<"queue is empty"<<endl;
        return;
    }
    q->front++;
    cout<<"dequeue done"<<endl;
}
int frontofqueue(Queue*q){
    if(q->front>q->rare){
        cout<<"Empty"<<endl;
        return -1;
    }
    return q->arr[q->front];
}
int rareofqueue(Queue*q){
    if(q->front>q->rare){
        cout<<"Empty"<<endl;
        return -1;
    }
    return q->arr[q->rare];
}
bool isempty(Queue* q){
    return q->front>q->rare;
}
bool isfull(Queue* q){
    return q->rare==max-1;
}
int size(Queue*q){
    return (q->rare-q->front)+1;
}
