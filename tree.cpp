#include<iostream>
#include<stdlib.h>
using namespace std;

struct node
{
    int data;
    struct node *left, *right;
};
struct node *root=NULL;
struct node *insert(struct node *root, int x)
{
    if(root==NULL)
    {
        root= (struct node *) malloc (sizeof(struct node));
        root->data=x;
        root->left=NULL;
        root->right=NULL;
        cout<<root->data;
    }
    else if(root->data<x)
    {
        root->right=insert(root->right,x);
        cout<<root->data;
    }
    else if(root->data>x)
    {
        root->left=insert(root->left,x);
        cout<<root->data;
    }
    return root;
};


struct node* inorder(struct node *root)
{
    if(root->right==NULL && root->left==NULL)
    {
       cout<<root->data<<endl;
    }
     if(root->left!=NULL)
    {
        root->left=inorder(root->left);
        cout<<root->data<<endl;


    }
     if(root->right!=NULL)
    {
         root->right=inorder(root->right);
         cout<<root->data<<endl;


    }
    return root;

};


int main()
{
    int p,z;



    while(1)
    {
        cout<<"Enter 1 to insert "<<endl;
        cout<<"enter 2 to show data"<<endl;
        cin>>z;
        if(z==1)
        {

            cout<<"enter values :"<<endl;
            cin>>p;
            root=insert(root,p);
        }

        if(z==2)
        {
          inorder(root);
        }

    }

    return 0;
}
