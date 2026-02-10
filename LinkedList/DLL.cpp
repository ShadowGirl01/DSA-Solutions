//  Doubly Linked List : Introduction

//  input: 10<->20<->30<->Nullptr


/**
 * Definition for Doubly-linked list.
 * class Node {
 * public:
 *     int val;
 *     Node *next;
 *     Node* prev;
 *	
 *     Node(int x) {
 *	val = x;
 *	next = nullptr;
 *	prev = nullptr;
 *     }
 * };
 */

class Solution {
public:

    // Forward Traversal (returns values in a vector)
vector<int> ForwardTraversal(node* head){
vector<int> result;

node* temp = head;

while(head != nullptr){
result.push_back();
temp = temp->next;
}
return result;
}



class Solution {
public:

    // Backward Traversal (returns values in a vector)
vector<int> BackwardTraversal(node* head){
vector<int> result;

node* temp = head;

while(head != nullptr){
result.push_back();
temp = temp->prev;
}
return result;
}
};