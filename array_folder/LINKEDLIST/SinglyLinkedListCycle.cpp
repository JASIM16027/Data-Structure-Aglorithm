#include<bits/stdc++.h>
using namespace std;

class ListNode {
    public:
        int val;
        ListNode* next;
        ListNode(int data) {
            val = data;
            next = NULL;
        }
};

void insertNode(ListNode* &head,int val) {
    ListNode* newNode = new ListNode(val);
    if(head == NULL) {
        head = newNode;
        return;
    }
    ListNode* temp = head;
    while(temp->next != NULL) temp = temp->next;
    
    temp->next = newNode;
    return;
}

void createCycle(ListNode* &head,int pos) {
    ListNode* cur = head;
    ListNode* temp = head;
    int cnt = 0;
    while(temp->next != NULL) {
        if(cnt != pos) {
            ++cnt;
            cur = cur->next;
        } 
        temp = temp->next;
    }
    temp->next = cur;
}
//process as per mentioned in solution
ListNode* detectCycle(ListNode* head) {
    unordered_set<ListNode*> Hashtable;
    while(head != NULL) {
        if(Hashtable.find(head) != Hashtable.end()) return head;
        Hashtable.insert(head);
        head = head->next;
    }
    return NULL;
}

int main() {
    ListNode* head = NULL;
    
    insertNode(head,1);
    insertNode(head,2);
    insertNode(head,3);
    insertNode(head,4);
    insertNode(head,3);
    insertNode(head,6);
    insertNode(head,10);
    
    createCycle(head,2);
    
    ListNode* nodeRecieve = detectCycle(head);
    cout<<nodeRecieve->val<<endl;
    if(nodeRecieve == NULL) cout<<"No cycle";
    else {
        ListNode* temp = head;
        int pos = 0;
        while(temp!=nodeRecieve) {
            ++pos;
            temp = temp->next;
        }
        cout<<"Tail connects at pos "<<pos<<endl;
    }
    
    return 0;
}