#include<bits/stdc++.h>
using namespace std;

Node* swapPairs(Node *head) {
    if(head == nullptr && head -> next = nullptr) {
        return head;
    }

    node* temp = head -> next;

    head -> next = swapPairs(head -> next -> next);

    temp -> next = head;

    return temp;
}

int main() {
    node
}