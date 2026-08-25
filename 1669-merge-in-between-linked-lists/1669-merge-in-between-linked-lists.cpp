class Solution {
public:
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {

        // Step 1: a-1 node sudhi pahochvu
        ListNode* curr = list1;

        for(int i = 0; i < a - 1; i++) {
            curr = curr->next;
        }

        // curr = a-1 node
        // a node thi b node remove karvana chhe

        // Step 2: b+1 node find karo
        ListNode* after = curr->next;

        for(int i = a; i <= b; i++) {
            after = after->next;
        }

        // Step 3: list2 na last node sudhi jao
        ListNode* last = list2;

        while(last->next != nullptr) {
            last = last->next;
        }

        // Step 4: connections karo
        curr->next = list2;
        last->next = after;

        return list1;
    }
};