#include <stdio.h>
#include <conio.h>
#include <string.h>

struct NHANVIEN
{
    char cccd[15];//căn cước công dân
    char phuong[100];// phường
    char quan[50];//quận 
    int tinhtrang; //tình trạng bệnh
};

void nhap1nv (NHANVIEN &nv)
{   
    fflush(stdin);
    printf("\nNhap CCCD : ");
    gets(nv.cccd);
    fflush(stdin);
    printf("\nNhap phuong : ");
    gets(nv.phuong);
    fflush(stdin);
    printf("\nNhap quan : ");
    gets(nv.quan);
    printf("\nNhap tinh trang : ");
    gets(nv.tinhtrang);
}

void nhapds(NHANVIEN ds[] , int &soluong)
{
    printf("\nNhap so luong nhan vien : ");
    scanf("%d",&soluong);
    for (int i = 0; i < soluong; i++)
    {
        printf("\nNhap sinh vien thu %d ",i+1);
        nhap1nv(ds[i]);
    }
    
}
int main()
{
    NHANVIEN ds[100];
    int soluong;
    nhapds(ds,soluong);
}