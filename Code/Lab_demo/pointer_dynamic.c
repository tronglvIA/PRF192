#include <stdio.h>
// Thư viện này cần để cấp phát bộ nhớ động
#include <stdlib.h>
 
int main()
{
    int n, i, *ptr, sum = 0;
    printf("Nhap so luong phan tu: ");
    scanf("%d", &n);
    ptr = (int *)calloc(n, sizeof(int));
 
    // Nếu không thể cấp phát, 
    // hàm malloc sẽ trả về con trỏ NULL
    if (ptr == NULL)
    {
        printf("Co loi! khong the cap phat bo nho.");
        exit(0);
    }
    printf("Nhap cac gia tri: ");
    for (i = 0; i < n; ++i)
    {
        scanf("%d", &ptr[i]);
        printf("addr %d = %d\n",i, &ptr[i]);
        sum += ptr[i];
    }
    printf("Tong = %d", sum);
    for(i=0;i<n;i++){
        printf("the value of ptr[%d] = %d \n",i,ptr[i]);
    }
 
    // Giải phóng vùng nhớ cho con trỏ
    free(ptr);
    for(i=0;i<n;i++){
        printf("the value of ptr[%d] = %d \n",i,ptr[i]);
    }
    
    return 0;
}