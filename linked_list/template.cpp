//single list
#include <iostream>
#include <vector>

struct Node{
    Node* next;
    int val;
    Node(): val(0),next(nullptr){}
    Node(int x) : val(x), next(nullptr) {}
    Node(int x, Node *next) : val(x), next(next) {}
    ~Node();

};

void printNode(Node* head){
    if(head!=nullptr){
        std::cout <<head->val;
        head = head->next;
    }else{return;}
    
    while(head){
        std::cout << "->" << head->val;
        head = head->next;
    }
    std::cout << std::endl;
}


int main(){
    Node *head = new Node(3);
    Node *n5 = new Node(2);
    Node *n4 = new Node(1);
    Node *n3 = new Node(4);
    Node *n2 = new Node(5);
    Node *n1 = new Node(6);
    n1->next = n2;
    n2->next = n3;
    n3->next = n4;
    n4->next = n5;
    head->next = n1;


    std::vector<int> vec ={2,3,4,5,6,3} ;
    Node *headv = new Node(vec[0]);
    Node *head_tmp = new Node();
    head_tmp = headv;
    for(int i=1; i<vec.size(); ++i){
        Node *tmp = new Node(vec[i]);
        head_tmp -> next = tmp;
        head_tmp = head_tmp-> next;
    }
    printNode(head);
    printNode(headv);

    return 0;
}