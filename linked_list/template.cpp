#include <iostream>
#include <vector>

struct Node{
    Node* next;
    int val;
    Node(): val(0),next(nullptr){}
    Node(int x) : val(x), next(nullptr) {}
    Node(int x, Node *next) : val(x), next(next) {}
 
};

int main(){
    Node* head;
    std::cout <<head->val<<std::endl;
    return 0;
}