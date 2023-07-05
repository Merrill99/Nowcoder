#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>

typedef char BTDataType;
typedef struct BinaryTreeNode
{
    BTDataType data;
    struct BinaryTreeNode* left;
    struct BinaryTreeNode* right;
}BTNode;

BTNode* BuyBTNode(BTDataType x)
{
    BTNode* root = (BTNode*)malloc(sizeof(BTNode));

    root->data = x;
    root->left = NULL;
    root->right = NULL;

    return root;
}

BTNode* BTreePrevCreate(BTDataType* arr, int* pi)
{
    if (arr[*pi] == '#')
    {
        ++(*pi);
        return NULL;
    }


    BTNode* root = BuyBTNode(arr[*pi]);
    ++* (pi);

    root->left = BTreePrevCreate(arr, pi);
    root->right = BTreePrevCreate(arr, pi);

    return root;
}

void BinaryTreeInOrder(BTNode* root)
{
    if (root == NULL)
        return;

    BinaryTreeInOrder(root->left);
    printf("%c ", root->data);
    BinaryTreeInOrder(root->right);
}

int main()
{
    BTDataType input[101];
    scanf("%s", input);
    int i = 0;
    BTNode* root = BTreePrevCreate(input, &i);
    BinaryTreeInOrder(root);
    return 0;
}