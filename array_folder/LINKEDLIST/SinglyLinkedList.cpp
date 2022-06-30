#include<bits/stdc++.h>
using namespace std;

class ListNode{
    public:
        int val;
        ListNode* next;
        ListNode(int data){
            val = data;
            next = NULL;

        }

};

// insert Node in a SinglyLinkedList

void insertNode(ListNode* &head, int val){
    ListNode* newNode = new ListNode(val);
    if (head==NULL){
        head = newNode;
        return ;
    }

    ListNode* temp = head;
    while (temp->next!=NULL) temp = temp->next;
    temp->next = newNode;
    return;
}

void createCycle(ListNode* &head, int pos){
    ListNode* cur = head;
    ListNode* temp = head;
    int cnt=0;

    while (temp->next!=NULL)
    {
        if (cnt!=pos){
            ++cnt;
            cur=cur->next;
        }
        temp = temp->next;  
    }

    temp->next = cur;
    
}
ListNode* detectCycle(ListNode* head){
    ListNode* slow = head;
    ListNode* fast = head;
    ListNode* start = head;

    while (fast->next && fast->next->next){
        slow = slow->next;
        fast = fast->next->next;
        if (slow==fast){
    
            while (start!=slow){
              
                slow = slow->next;
                start = start->next;
            }
            return slow;
        }
    }
    return NULL;
    
}

/*
ListNode* detectCycle(ListNode* head){
    unordered_set<ListNode*>hashtable;
    while (head!=NULL)
    {
        if(hashtable.find(head)!=hashtable.end()) return head;
        hashtable.insert(head);
        head = head->next;
        
    }
    return NULL;
    
}
*/

int main(){
    ListNode* head = NULL;
    insertNode(head,1);
    insertNode(head,2);
    insertNode(head,3);
    insertNode(head,4);
    insertNode(head,3);
    insertNode(head,6);
    insertNode(head,10);

    createCycle(head,3);
    ListNode* receivedNode = detectCycle(head);
    cout<<receivedNode->val<<endl;
    
    if (receivedNode==NULL) cout<<"No Cycle is detected"<<endl;
    else{
        ListNode* temp = head;
        int pos=0;
        while (temp!=receivedNode){
            ++pos;
            temp = temp->next;
            
        }
        cout<<"Tail connects at position "<<pos<<endl;
    }
    return 0;
}

// Time Complexity: O(N)

// Reason: Iterating the entire list once.

// Space Complexity: O(N)

// Reason: We store all nodes in a hash table.