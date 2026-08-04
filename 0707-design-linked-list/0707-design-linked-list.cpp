class Node{
    public:
    int data;
    Node* next;
    Node(int data1){
        data = data1;
        next= nullptr;
        
    }
};

class MyLinkedList {
 Node* head;  
public:
    MyLinkedList() {
    head = nullptr;
    }
    
    int get(int index) {
       Node* temp =head;
       int count=0;
       while(temp !=nullptr){
        if(count==index){
           return temp->data; 
        }
        count++;
        temp = temp->next;
       } 
       return -1;
    }
    
    void addAtHead(int val) {
     Node* temp = new  Node(val);  
     temp->next=head; 
     head=temp;  
    }
    
    void addAtTail(int val) {
       Node* temp = head;
       Node* newNode =  new Node(val);
       if(head==nullptr){
        newNode->next=head; 
        head=newNode;  
        return;

       }

       while(temp->next !=nullptr){
        temp = temp->next;
       }
       temp->next = newNode;
    }
    
    void addAtIndex(int index, int val) {
    if(index==0){
      addAtHead(val);  
      return;
    }
     Node* temp = head;
        int count = 0;
     while (temp != nullptr && count < index - 1) {
            temp = temp->next;
            count++;
        }

        if (temp == nullptr) {
            return;
        }

        Node* newNode = new Node(val);
        newNode->next = temp->next;
        temp->next = newNode;

    }
    
    void deleteAtIndex(int index) {
     if(head==nullptr){
        return;
     } 
       if (index == 0) {
            Node* del = head;
            head = head->next;
            delete del;
            return;
        }
      Node* temp = head;
      int count = 0;
  while (temp != nullptr && count < index - 1) {
            temp = temp->next;
            count++;
        }

        if (temp == nullptr || temp->next == nullptr) {
            return;
        }

        Node* del = temp->next;
        temp->next = del->next;
        delete del;

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