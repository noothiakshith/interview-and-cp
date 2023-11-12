#include <iostream>

struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(nullptr) {}
};

ListNode* oddEvenList(ListNode* head) {
    ListNode* less = new ListNode(100);
    ListNode* more = new ListNode(100);
    ListNode* odd = less;
    ListNode* even = more;
    while (head != nullptr) {
        if (head->val % 2 == 0) {
            even->next = head;
            head = head->next;
            even = even->next;
        } else {
            odd->next = head;
            head = head->next;
            odd = odd->next;
        }
    }
    even->next = nullptr;
    odd->next = more->next;
    return less->next;
}

void printList(ListNode* head) {
    if (head == nullptr) {
        return;
    }
    printList(head->next);
    std::cout << head->val << " ";
}

int main() {
    ListNode* head = new ListNode(2);
    head->next = new ListNode(1);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(5);
    head->next->next->next->next = new ListNode(6);
    head->next->next->next->next->next = new ListNode(4);
    head->next->next->next->next->next->next = new ListNode(7);

    std::cout << "Original list: ";
    printList(head);
    std::cout << std::endl;

    ListNode* modifiedList = oddEvenList(head);

    std::cout << "Modified list: ";
    printList(modifiedList);
    std::cout << std::endl;

    return 0;
}
