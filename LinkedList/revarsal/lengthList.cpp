//  Length of a Linked List

// Input: 0->1->2, val = 2
// Output: True

// Time Complexity: O(N)
// Space Complexity: O(1)

class Solution {
public:
    void lengthNode(listNode* node) {

	int count = 0;
        listNode* temp = head;  // start of the node
	
	while(temp != nullptr){
		count++;
		temp = temp->next;
	}
	return count;
    }
};
