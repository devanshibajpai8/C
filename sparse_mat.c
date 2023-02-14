#include <stdio.h>
#include<stdlib.h>
int main()
{
    int sparse_matrix[3][4]=
    {
        {0,0,0,6},
        {0,5,0,2},
        {0,0,3,0}
    };
    int i,j,size=0;

    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
        if(sparse_matrix[i][j]!=0)
        {
            size++;
        }
        }
    }
    int com_mat[3][size];
    int k=0;
    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
        if(sparse_matrix[i][j]!=0)
        {
            com_mat[0][k]=i;
            com_mat[1][k]=j;
            com_mat[2][k]=sparse_matrix[i][j];
            k++;
        }
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<size;j++)
        {
            printf("%d ",com_mat[i][j]);
           
        }
         printf("\n");
       
    }
     return 0;

}