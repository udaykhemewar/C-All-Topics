#include<iostream>
using namespace std;
struct treenode
{
  int key;
  struct treenode *left, *right;
};
struct treenode* insert(struct treenode *root,int x)
{
    struct treenode *p,*q;
    q=(struct treenode*)malloc(sizeof(struct treenode));
    q->key=x;
    q->right=NULL;
    q->left=NULL;
    if(root==NULL) return q;
    p=root;
    while(1)
    {
        if(x<p->key)
        {
            if(p->left==NULL)
            break;
            p=p->left;
        }
        else
        {
            if(p->right==NULL)
            break;
            p=p->right;
        }
    }
    if(x<p->key)
    p->left=q;
    else
    p->right=q;
    return root;
}
void display(struct treenode *root)
{
    if(root==NULL)return;
    display(root->left);
    cout<<root->key<<" ";
    display(root->right);
}
int main()
{
    int choice, x;
    struct treenode *root;
    root=NULL;
    cout<<"1.Insert in binary search tree\n";
    cout<<"2.Display\n";
    while(1)
    {
        cout<<"\nEnter choice: ";
        cin>>choice;
        switch(choice)
        {
            case 1:
            cout<<"Insert Elements";
            cin>>x;
            root=insert(root,x);
            break;
            case 2:
            display(root);
            break;
            case 3:
            exit(0);
        }
    }
    return 0;
}
