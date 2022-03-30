#include <math.h>
#include <stdio.h>
#include <conio.h>

void input(int arr[], int n);
void output(int arr[], int n);
void insertionSort(int arr[], int n);

int main()
{
    int n;
    printf("Nhap n phan tu mang: ");
    scanf("%d", &n);
    int arr[n];
    printf("Nhap mang:\n");
    input(arr, n);
    insertionSort(arr, n);
    printf("Mang sau khi sap xep:\n");
    output(arr, n);
    getch();
    return 0;
}

void insertionSort(int arr[], int n)
{
    int i, key, j;
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

void output(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

void input(int arr[], int n){
    for (int i = 0; i < n; ++i)
    {
        printf("arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }
}