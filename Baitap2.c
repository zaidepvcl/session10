/*Khởi tạo và gán giá trị cho mảng số nguyên bất kỳ,
hãy sử dụng thuật toán sắp xếp nổi bọt (bubble sort) để sắp xếp lại mảng theo thứ tự tăng dần.*/
#include<stdio.h>
int main()
{
    int a[10]={6,5,4,8,9,10,2,7,3,1};
    int temp;
    for (int i =0; i < 10 -1 ; i++)
    {
        for (int j =0; j < 10 -i -1;j++)
        {
            if (a[j] > a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
            
        }
    }
    for(int i=0; i<10; i++)
    {
        printf("%d ",a[i]);  
    }
}