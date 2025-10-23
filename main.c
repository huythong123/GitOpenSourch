	#include "mylib.h"

void menu(){
    printf("*** MENU ***\n");
    printf("1- Xem ngay cua thang\n");
    printf("2- Kiem tra nam nhuan\n");
    printf("3- Giai phuong trinh bac 2\n");
    printf("4- Xep hoc luc \n");
    printf("5- Tinh tien dien\n");
    printf("6- In bang cuu chuong\n");
    printf("7- Tính giai thừa\n");
    printf("8- Hien day so hinh tam giac\n");
    printf("9- Nhap day theo thu tu\n");
    printf("10- Fibonac\n");
    printf("11- In cay *\n");
    int c;
    scanf("%d",&c);

    switch (c)
    {
    case 1:
        xemthang();
        menu();
        break;
    case 2:
        namnhuan();
        menu();
        break;
    case 3:
    	giaiptb2();
    	menu();
    	break;
    case 4:
    	xephocluc();
    	menu();
    	break;
    case 5:
        tinhtiendien();
        menu();
        break;
    
    
    default:
        menu();
        break;
    }

}

int main(){
    menu();
    return 0;
}
