// Cycle Detection - Solution

#include <iostream>
#include <memory>

class SinglyLinkedListNode {
    public:
        int data;
        SinglyLinkedListNode *next;
        SinglyLinkedListNode(int node_data) {
            this->data = node_data;
            this->next = nullptr;
        }
};

class SinglyLinkedList {
    public:
        SinglyLinkedListNode *head;
        SinglyLinkedListNode *tail;
        SinglyLinkedList() {
            this->head = nullptr;
            this->tail = nullptr;
        }
        void insert_node(int node_data) {
            SinglyLinkedListNode* node = new SinglyLinkedListNode(node_data);
            if (!this->head) 
                this->head = node;
            else
                this->tail->next = node;
            this->tail = node;
        }
};

void print_singly_linked_list(SinglyLinkedListNode* node) {
    while (node) {
        std::cout << node->data << '\n';
        node = node->next;
    }    
}

// Checks whether there is a cycle in the linked list
bool has_cycle(SinglyLinkedListNode* head) {
    // ptr1 is a slow pointer and ptr2 is a fast pointer
    SinglyLinkedListNode *ptr1 = head, *ptr2 = head;
    // ptr1 goes one step forward and ptr2 goes two steps forward
    // We compare them after these steps. 
    // If there is no equality and the loop finds out there is not a cycle, the output will be 0, else 1.
    while (ptr1 && ptr2 && ptr2->next) {
        ptr1 = ptr1->next;
        ptr2 = ptr2->next->next;
        if (ptr1 == ptr2)
            return true;
    }
    return false;
}

int main() {
    int testCount;
    std::cin >> testCount;
    for (int i = 0; i < testCount; i++) {
        int index;
        std::cin >> index;
        std::unique_ptr<SinglyLinkedList> llist = std::make_unique<SinglyLinkedList>();
        int llist_size;
        std::cin >> llist_size;
        for (int i = 0; i < llist_size; i++) {
            int llist_item;
            std::cin >> llist_item;
            llist->insert_node(llist_item);
        }
        SinglyLinkedListNode *extra = new SinglyLinkedListNode(-1);
        SinglyLinkedListNode *temp = llist->head;
        for (int i = 0; i < llist_size; i++) {
            if (i == index)
                extra = temp;
            if (i != llist_size-1)
                temp = temp->next;
        }
        temp->next = extra;
        bool result = has_cycle(llist->head);
        std::cout << result << '\n';
        delete extra;
    }
    return 0;
}