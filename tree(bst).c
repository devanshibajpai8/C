#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *left;
    struct node *right;
};
struct node* create(int data)
{
    struct node *r=(struct node *)malloc(sizeof(struct node));
    r->data=data;
    r->left=NULL;
    r->right=NULL;
}
void pre(struct node *root)
{
    if(root!=NULL)
    {
        printf("%d",root->data);
        pre(root->left);
        pre(root->right);
    }
}
void in(struct node *root)
{
    if(root!=NULL)
    {
        in(root->left);
        printf("%d",root->data);
        in(root->right);
    }
}
void post(struct node *root)
{
    if(root!=NULL)
    {
        post(root->left);
        post(root->right);
        printf("%d",root->data);
    }
}
void insert(struct node *root,int key)
{
    struct node *pre=NULL;
    while(root!=NULL)
    {
        pre=root;
        if(root->data==key)
        {
            return;
        }
        else if(key<root->data)
        {
            root=root->left;
        }
        else
        {
            root=root->right;
        }
    }
    struct node *new=create(key);
    if(key>pre->data)
    {
        pre->right=new;
    }
    else
    {
        pre->left=new;
    }
}
struct node* search(struct node *root,int key)
{
    if(root==NULL)
    {
        return NULL;
    }
    if(root->data==key)
    {
        return root;
    }
    else if(key<root->data)
    {
    return search(root->left,key);
    }
    else
    {
    return search(root->right,key);
    }   
}
struct node *searchiter(struct node *root,int key)
{
    while(root!=NULL)
    {
        if(key==root->data)
        {
            return root;
        }
        else if(key>root->data)
        {
            root=root->right;
        }
        else
        {
            root=root->left;
        }
    }
    return NULL;

}
struct node *inorderpre(struct node *root)
{
    root=root->left;
    while(root->right!=NULL)
    {
        root=root->right;
    }
    return root;

}
struct node *delete(struct node *root,int key)
{
    struct node *ipre;
    if(root==NULL)
    {
        return NULL;
    }
    if(root->left==NULL && root->right==NULL)
    {
        free(root);
        return NULL;
    }
    if(root->data>key)
    {
        root->left=delete(root->left,key);
    }
    else if(root->data<key)
    {
        root->right=delete(root->right,key);
    }
    else
    {
        ipre=inorderpre(root);
        root->data=ipre->data;
        root->left=delete(root->left,ipre->data);
    }
    return root;
}
int main()
{
    struct node *p = create(5);
    struct node *p1 = create(3);
    struct node *p2 = create(6);
    struct node *p3 = create(1);
    struct node *p4 = create(4);
    p->left = p1;
    p->right = p2;
    p1->left=p3;
    p1->right=p4;
    pre(p);
    printf("\n");
    in(p);
    printf("\n");
    post(p);
    printf("\n");
    insert(p,5);
    in(p);
    printf("\n");
    struct node *n=search(p,11);
    if(n!=NULL)
    {
        printf("element found:%d",n->data);
    }
    else
    {
        printf("element not found");
    }
    printf("\n");
    struct node *r=searchiter(p,4);
    if(r!=NULL)
    {
        printf("element found:%d",r->data);
    }
    else
    {
        printf("element not found");
    }
    printf("\n");
    delete(p,4);
    printf("inorder predecessor data:%d",p->data);
    printf("\n");
    in(p);
    return 0;
}
