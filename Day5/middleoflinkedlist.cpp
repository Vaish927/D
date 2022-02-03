//problem Link:https://www.codingninjas.com/codestudio/problems/middle-of-linked-list_973250?source=youtube&campaign=Lovebabbarcodestudio_24thJan&utm_source=youtube&utm_medium=affiliate&utm_campaign=Lovebabbarcodestudio_24thJan&leftPanelTab=1

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

/****************************************************************

    Following is the class structure of the Node class:

       class Node 
        { 
        public:
            int data;
            Node *next;
            Node(int data) 
            {
               this->data = data;
              this->next = NULL;
            }
        };

*****************************************************************/
int getlength(Node *head){
    int len=0;
    while(head!=NULL)
    {
        len++;
        head=head->next;
    }
    return len;
}


Node* getmiddle(Node* head)
{
    Node* slow=head;
    Node* fast=head;
    while(fast!=NULL && fast->next!=NULL)
    {
        fast=fast->next->next;
        slow=slow->next;
    }
    return slow;
}
Node *findMiddle(Node *head) {
    // Write your code here
    /*int ans=getlength(head);
    int len=ans/2;
    Node *temp=head;
    while(len--)
    {
        temp=temp->next;
    }
    return temp;*/
    return getmiddle;
}