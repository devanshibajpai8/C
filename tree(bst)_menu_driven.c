#include<stdio.h>
#include<stdlib.h>
struct node 
{
    int data;
    struct node *left;
    struct node *right;
};
struct node *new(int data)
{
    struct node *r=(struct node *)malloc(sizeof(struct node));
    r->data=data;
    r->left=NULL;
    r->right=NULL;
    return r;
}
struct node *insert(struct node *root,int key)
{
    if(root==NULL)
    {
        root=new(key);
        return root;
    }
    else if(key<=root->data)
    {
       root->left=insert(root->left,key);
    }
    else
    {
        root->right=insert(root->right,key);
    }
    return root;
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
void pre(struct node *root)
{
    if(root!=NULL)
    {
        printf("%d",root->data);
        pre(root->left);
        pre(root->right);
    }
}
struct node *search(struct node *root,int val)
{
    if(root==NULL)
    {
        return NULL;
    }
    if(val==root->data)
    {
        printf("data found");
        return root;
    }
    else if(val<root->data)
    {
        return search(root->left,val);
    }
    else
    {
        return search(root->right,val);
    }
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
struct node *delete(struct node *root,int valu)
{
    struct node *p=(struct node *)malloc(sizeof(struct node));
    p=root;
    struct node *ipre;
    if(p==NULL)
    {
        return NULL;
    }
    if(p->left==NULL && p->right==NULL)
    {
        free(p);
        return NULL;
    }
    if(p->data>valu)
    {
        p->left=delete(p->left,valu);
    }
    else if(p->data<valu)
    {
        p->right=delete(p->right,valu);
    }
    else
    {

        ipre=inorderpre(p);
        p->data=ipre->data;
        p->left=delete(p->left,ipre->data);
    }
    return p;
}
struct node *max(struct node *root)
{
    struct node *temp=root;
    while(temp->right!=NULL)
    {
        temp=temp->right;
    }
    printf("largest element:%d",temp->data);
}
struct node *min(struct node *root)
{
    struct node *tem=root;
    while(tem->left!=NULL)
    {
        tem=tem->left;
    }
    printf("smallest element:%d",tem->data);
}

int main()
{
    struct node *root=NULL;
    int i,c,n,d,e;
    printf("-------------MENU----------\n1)insert\n2)inorder\n3)preorder\n4)postorder\n5)search\n6)delete\n7)max element\n8)min element\n9)exit");
    while(1)
    {
        printf("\nenter your choice:");
        scanf("%d",&c);
        switch(c)
        {
            case 1:
            printf("enter the data:");
            scanf("%d",&n);
            root=insert(root,n);
            break;

            case 2:
            in(root);
            break;

            case 3:
            pre(root);
            break;

            case 4:
            post(root);
            break;

            case 5:
            printf("\nenter the value to be searched:");
            scanf("%d",&d);
            search(root,d);
            break;

            case 6:
            printf("enter the value to be deleted:");
            scanf("%d",&e);
            delete(root,e);
            break;

            case 7:
            max(root);
            break;

            case 8:
            min(root);
            break;

            case 9:
            exit(0);
            
            default:
            printf("wrong choice");
            break;

        }
    }
}

