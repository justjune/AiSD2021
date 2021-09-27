#include "printBT.h"


void printBT(const std::string& prefix, const Node* node, bool isLeft)
{
    if (node != nullptr)
    {
        std::cout << prefix;

        std::cout << (isLeft ? "L " : "R ");

        // print the value of the node
        std::cout << node->data << std::endl;

        // enter the next tree level - left and right branch
        printBT(prefix + (isLeft ? "│   " : "    "), node->left, true);
        printBT(prefix + (isLeft ? "│   " : "    "), node->right, false);
    }
}

void printBT(const Node* node)
{
    printBT("", node, false);
}


int main() {
    Node* root = NULL;

    root = insert(root, 6);
    root = insert(root, 10);
    root = insert(root, 7);
    root = insert(root, 23);
    root = insert(root, 15);
    root = insert(root, -1);

    printBT(root);

    deleteNode(root, -1);

    printBT(root);
}