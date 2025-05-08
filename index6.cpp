#include<bits/stdc++.h>
using namespace std;

struct ListNode {

    int val;           // 数据域

    ListNode *next;    // 指针域

    ListNode(int x) : val(x), next(nullptr) {}

};


class LinkedList {

private:

    ListNode* head;     // 头结点指针

    ListNode* tail;

    int size;          // 链表长度

    

public:

    // 构造函数

    LinkedList(int *arr,int csize); 

    

    // 析构函数

    ~LinkedList() {
        ListNode* p = head; 
        while (p != nullptr) { 
            ListNode* q = p->next; 
            delete p; 
            p = q; 
        }
    };

    

    // 基本操作

    void insertAtHead(int val);      // 在头部插入结点

    void insertAtTail(int val);      // 在尾部插入结点

    void insertAtIndex(int index, int val); // 在指定位置插入

    

    void deleteAtHead();             // 删除头结点

    void deleteAtTail();             // 删除尾结点

    void deleteAtIndex(int index);   // 删除指定位置结点

    

    int get(int index);              // 获取指定位置的值

    bool search(int val);            // 查找值是否存在

    int searchIndex(int val);      // 查找值的索引
    

    void display();                  // 遍历显示链表

    int getSize();                   // 获取链表长度

    void reverse();                 // 反转链表

    void sort();                    // 排序链表
};

LinkedList::LinkedList(int *arr,int csize) {
    head = nullptr; 
    tail = nullptr;
    size = csize;
       for(int i=0;i<size;i++){
            ListNode* p = new ListNode(arr[i]); 
            if (head == nullptr) { 
                head = p; 
                tail = p; 
            } else {
                tail->next = p; 
                tail = p; 
            }
        }     
};               



void LinkedList::insertAtHead(int val){
    ListNode* p = new ListNode(val); 
    p->next = head;                  
    head = p;                       
    size++;                         
};      

void LinkedList::insertAtTail(int val){
    ListNode* p = new ListNode(val); 
    if (head == nullptr) {           
        head = p;                   
    } else {
        tail->next = p;             
    }
    tail = p;                       
    size++;
};      

void LinkedList::insertAtIndex(int index, int val){
    ListNode* pp = new ListNode(val);
    ListNode* p = head;
    ListNode* q = head->next;
    int i = 0;
    if(index ==0){
        insertAtHead(val);
    }
    else if (index == size)
    {
        insertAtTail(val);
    }
    else{
        while(i!=index-1 && q != nullptr){
            p = q; 
            q = q->next; 
            i++;
        }
        pp->next = q;
        p->next = pp;
        size++;
    }

}; // 在指定位置插入

    

void LinkedList::deleteAtHead(){
    ListNode* p = head;
    ListNode* q = head->next;
    head = q; 
    delete p;  
    size--;
};             // 删除头结点

void LinkedList::deleteAtTail(){
    ListNode* p = head;
    ListNode* q = head->next;
    while(q->next!= nullptr){
        p = q; 
        q = q->next; 
    }
    p->next = nullptr;
    delete q;
    size--;
};             // 删除尾结点

void LinkedList::deleteAtIndex(int index){
    int i = 0;
    ListNode* p = head; 
    ListNode* q = head->next;
    if(index < size){
        while(i!= index-1 && q != nullptr){
            p = q; 
            q = q->next; 
            i++;
        }
        p->next = q->next;
        delete q;
        size--;
    }
    
};   // 删除指定位置结点

    

int LinkedList::get(int index){
    if (index < 0 || index >= size) { 
        return -1;
    }
    if (head == nullptr) { 
        return -1; 
    }
    ListNode* p = head;
    int i = 0;
    while (p != nullptr && i < index) { 
        p = p->next; 
        i++;
    }
};              // 获取指定位置的值

bool LinkedList::search(int val){
    ListNode* p = head; // 从头结点开始遍历
    while (p != nullptr) { 
        if (p->val == val) { 
            return true;
        }
        p = p->next; 
    }
};            // 查找值是否存在

void LinkedList::reverse(){
    ListNode* p = head; 
    ListNode* q = head->next; 
    ListNode* r = nullptr; 
    while (p != nullptr) { 
        p->next = r; 
        r = p; 
        p = q; 
        if (q != nullptr) { 
            q = q->next; 
        }
    }
    head = r;
    // 更新头结点
};                  // 反转链表 

void LinkedList::sort(){

    ListNode * p = head;
    ListNode * q = head->next;
    int i = 0;
    int arr[size-1];
    while(q != nullptr){
        arr[i] = p->val;
        p = p->next;
        q = q->next;
        i++;
    }
    std::sort(arr,arr+size-1); 
    for(int i=0;i<size;i++){
        cout << arr[i] << " ";
    }

}

void LinkedList::display(){
    ListNode* p = head;
    ListNode * q = head->next;
    if (p == nullptr) { 
        cout << "链表为空" << endl; 
        return;
    }
    while(q != nullptr){
        cout << p->val << "->";
        p = p->next;
        q = q->next;
    }
    cout << p->val <<  endl; // 输出最后一个结点的值
};                  // 遍历显示链表

int LinkedList::getSize(){
    return size;
};                   // 获取链表长度

int LinkedList::searchIndex(int val){
    ListNode* p = head;
    int i = 0;
    while (p != nullptr) { 
        if (p->val == val) { 
            return i;
        }
        p = p->next; 
        i++;
    }
    return -1;
};
int main(){
    int a[10]={56,34,3,67,89,55,22,43,12,9};
    LinkedList list(a,10);
    list.display();
    cout << endl;
    list.insertAtIndex(list.searchIndex(89)+1,72);
    list.display();
    cout << endl;
    list.insertAtIndex(list.searchIndex(22),90);
    list.display();
    cout << endl;
    list.insertAtHead(5);
    list.display();
    cout << endl;
    list.insertAtTail(99);
    list.display();
    cout << endl;
    list.deleteAtIndex(list.searchIndex(55));
    list.display();
    cout << endl;
    list.reverse();
    list.display();
    cout << endl;
    //list.sort();
    //cout << endl;


}