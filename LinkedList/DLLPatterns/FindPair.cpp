//	Find Pairs with Given Sum in Doubly Linked List

//	Input: 1 ⇄ 2 ⇄ 3 ⇄ 4 ⇄ 5 ⇄ 6 ⇄ 7 , Target = 8
//	Output: (1,7) ,(2,6), (3,5)

//	Time Complexity: O(n)
//	Space Complexity: O(1)


class Node {
public:
    int val;
    Node* next;
    Node* prev;
}; 
class Solution {
public:
	vector<vector<int>> Find Pairs(ListNode* head, int target){

vector<vector<int>> ans;

if(head == nullptr) return ans;

ListNode* left = head;
ListNode* right = head;

while(right->next != nullptr){
right = right->next;
}

while(left != nullptr && right != nullptr
&& left != right && right->next != nullptr ){

int sum = left->val + right->val;

if(sum == target){
ans.push_back(left->val, right->val);
}

left = left->next;
right = right->prev;
 else if(sum>target){
right = right->prev;
}
else{
left = left->next;
}
}
return ans;
}
};