#include<stdio.h>
#include<stdlib.h>

struct myArray
{
    int total_size;
    int used_size;
    int *ptr;

};

void createArray(struct myArray *a, int tSize, int uSize)
{
    a->total_size = tSize;
    a->used_size = uSize;
    a->ptr = (int *) malloc(tSize * sizeof(int));

}

void showArray(struct myArray *a)
{
    for (int i = 0; i < a->used_size; i++)
    {
        printf("%d \n", (a->ptr)[i]);
    }
    
}

void setValue(struct myArray *a)
{
    int n;

    for (int i = 0; i < a->used_size; i++)
    {
        scanf("%d \n", &n);
        (a->ptr)[i] = n;
    }
    
}

int main()
{
    int a;
    struct myArray marks;

    createArray(&marks, 10, 5);
    setValue(&marks);
    showArray(&marks);
    scanf("%d \n", a);
    
    return 0;
}
