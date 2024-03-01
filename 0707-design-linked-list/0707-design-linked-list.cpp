class Node{
public:
    int val;
    Node *next;
    Node(int v){
        this->val=v;
        this->next=NULL;
    }
};

class MyLinkedList {
public:
    Node* head;
    MyLinkedList() {
        head = NULL;
    }
    
    int get(int index) {
        Node* temp = head;
        
        while(index>0 && temp!=NULL){
            temp=temp->next;
            index--;
        }
        if(temp==NULL) return -1;
        return temp->val;
    }
    
    void addAtHead(int val) {
        Node* n = new Node(val);
        if(head==NULL){
            head=n;
        }
        else{
            n->next = head;
            head = n;
        }
    }
    
    void addAtTail(int val) {
        Node* n = new Node(val);
        if(head == NULL){
            head=n;
        }
        else{
            Node *temp = head;
            while(temp->next!=NULL){
                temp=temp->next;
            }
            temp->next=n;
        }
    }
    
    void addAtIndex(int index, int val) {
        Node* n = new Node(val);
        Node* temp = head;
        if(index == 0){
            n->next=head;
            head = n;
        }else{
            while(temp!=NULL && index>1){
            temp = temp->next;
            index--;
            }
            if(temp== NULL) return;
            if(temp!=NULL && temp->next == NULL){
                temp->next=n;
            }
            else{
                n->next=temp->next;
                temp->next=n;
            }
        }
         
    }
    
    void deleteAtIndex(int index) {
        Node* temp =head;
        if(index ==0){
            head=head->next;
        }
        while(temp!=NULL && index>1){
            temp=temp->next;
            index--;
        }
        if(temp==NULL) return;
        if(temp!=NULL && temp->next!=NULL){
            temp->next = temp->next->next;
        }
    }
};
/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */