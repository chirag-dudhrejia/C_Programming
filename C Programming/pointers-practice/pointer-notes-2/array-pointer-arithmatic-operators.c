#include <stdio.h>

int main()
{
    int arr[] = {5,6,7,8,9};

    // TO Print Value Of Element
    printf("The Value Of Element One Is %d\n", arr[0]);
    printf("The Value Of Element One Is %d\n", *(arr));
    printf("The Value Of Element One Is %d\n\n", *(&arr[0]));

    printf("The Value Of Element Two Is %d\n", arr[1]);
    printf("The Value Of Element Two Is %d\n", *(arr + 1));
    printf("The Value Of Element Two Is %d\n\n", *(&arr[1]));

    // To Print Address Of Element
    printf("The Address Of Element One Is %d\n", &arr[0]);
    printf("The Address Of Element One Is %d\n\n", arr);

    printf("The Address Of Element One Is %d\n", &arr[1]);
    printf("The Address Of Element One Is %d\n\n", arr + 1);

    return 0;
}