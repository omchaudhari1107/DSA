#include <stdio.h>
#include <malloc.h>
struct node
{
    int data;
    struct node *left;
    struct node *right;
};
struct node *createNode(int data)
{
    struct node *n = (struct node *)malloc(sizeof(struct node));
    n->data = data;
    n->left = NULL;
    n->right = NULL;
    return n;
}
struct node *linking(struct node *left_c, struct node *parent, struct node *right_c)
{
    parent->left = left_c;
    parent->right = right_c;
    return parent;
}
void preOrderTraversal(struct node *root)
{
    if (root != NULL)
    {
        printf("%d ", root->data);
        preOrderTraversal(root->left);
        preOrderTraversal(root->right);
    }
}
void postOrderTraversal(struct node *root)
{
    if (root != NULL)
    {
        postOrderTraversal(root->left);
        postOrderTraversal(root->right);
        printf("%d ", root->data);
    }
}
void InOrderTraversal(struct node *root)
{
    if (root != NULL)
    {
        InOrderTraversal(root->left);
        printf("%d ", root->data);
        InOrderTraversal(root->right);
    }
}
int main()
{
    struct node *p = createNode(1);
    struct node *p1 = createNode(2);
    struct node *p2 = createNode(3);
    struct node *p3 = createNode(4);
    struct node *p4 = createNode(5);
    //    p          1
    //   / \
    //  p1  p2     2   3
    //  /\  /\
    // p3 n n p4  4 n n 5

    // Pre-order
    // Root->left->right
    //  1->[2,4]->[3,5]

    // post-order
    // left->right->root
    //[4,2]->[5,3]->1

    // In-oreder
    // left->root->right
    //[4,2]->1->[3,5]
    p = linking(p1, p, p2);
    p1 = linking(p3, p1, NULL);
    p2 = linking(NULL, p2, p4);
    p3 = linking(NULL, p3, NULL);
    p4 = linking(NULL, p4, NULL);

    printf("Pre-Order Traversal\n");
    preOrderTraversal(p);
    printf("\n");
    printf("Post-Order Traversal\n");
    postOrderTraversal(p);
    printf("\n");
    printf("In-Order Traversal\n");
    InOrderTraversal(p);
}