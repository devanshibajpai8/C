#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,j;
    int sparse1[3][4],sparse2[3][4];
    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
        scanf("%d",&sparse1[i][j]);
        }
    }
    printf("input second matrix:");
    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        scanf("%d",&sparse2[i][j]);
    }
    int size1=0,size2=0;
    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
        if(sparse1[i][j]!=0)
        size1++;
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
        if(sparse2[i][j]!=0)
            size2++;
        }
    }

    int com_mat1[3][size1],com_mat2[3][size2];
    int k=0,r=0;

    for(i=0;i<3;i++)
    {
     for(j=0;j<4;j++)
        {
        if(sparse1[i][j]!=0)
        {
            com_mat1[0][k]=i;
            com_mat1[1][k]=j;
            com_mat1[2][k]=sparse1[i][j];
            k++;
        }
        }
    }
    for(i=0;i<3;i++)
    {
      for(j=0;j<4;j++)
        {
        if(sparse2[i][j]!=0)
        {
            com_mat2[0][r]=i;
            com_mat2[1][r]=j;
            com_mat2[2][r]=sparse2[i][j];
            r++;
        }
        }
    }
    printf("first matrix:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<size1;j++)
        {
        printf("%d ",com_mat1[i][j]);
        }
        printf("\n");
    }
    printf("second matrix:\n");

    for(i=0;i<3;i++)
    {
        for(j=0;j<size2;j++)
        {
        printf("%d ",com_mat2[i][j]);
        }
        printf("\n");
    }
    
    printf("addition:");
    for(j=0;j<4;j++)
    {
        printf("%d ",com_mat1[2][j]+com_mat2[2][j]);
    }
}

