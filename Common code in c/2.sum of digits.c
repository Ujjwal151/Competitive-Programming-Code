//#include<stdio.h>
/*#include<bits.stc++.h>
#define MAX 5
int main()
{
    int num[MAX] = {10,20,30,40,50};
    int temp, i,j;
    for(int i = 0, j =MAX-1; i<MAX/2; i++, j-- ){
        temp = num[i];
        num[i] = num[j];
        num[j] = temp;
    }
    for(i = 0; i<MAX; i++)
    {
        printf("%d ",num[i]);
    }

}
*/
#include<bits/stdc++.h>

#include <iostream>

#define MAX 5
int main()
{
    int num[MAX] = {10,20,30,40,50};
    int temp, i,j;
    for(int i = 0, j =MAX-1; i<MAX/2; i++, j-- ){
        temp = num[i];
        num[i] = num[j];
        num[j] = temp;
    }
    for(i = 0; i<MAX; i++)
    {
        printf("%d ",num[i]);
    }

}
