#include <stdio.h>
#include <stdlib.h>

int tonghaiso(int x, int y) {
    return x + y;

}

int truhaiso(int x, int y) {
    return x - y;
}

int nhanhaiso(int x, int y) {
    return x * y;
}

float chiahaiso(int x, int y) {
    if (y == 0) {
        printf("khong the chia cho 0");
        exit(1);
    }
    return (float) x / y;
}

void taomenu() {
    printf("lua chon phep tinh: \n");
//    printf("1. phep cong. \n");
//    printf("2. phep tru. \n");
//    printf("3. phep nhan. \n");
//    printf("4. phep chia. \n");
//    printf("5. thoat chuong trinh. \n");
    printf("nhap lua chon cua ban (+|-|*|/|n): \n");
}

int main() {
    int a, b, ketqua, luachon;
    printf("vui long nhap so thu nhat: ");
    scanf("%d", &a);
    printf("vui long nhap so thu hai: ");
    scanf("%d", &b);
    taomenu();
    getchar();
    char luachonmoi;
    printf("+,-,*,/");
    scanf("%c", &luachonmoi);
    switch (luachonmoi) {
        case '+':
            printf("tonghaiso %d va %d la %d", a, b, tonghaiso(a, b));
            break;
        case '-':
            printf("hieuhaiso %d va %d la %d", a, b, truhaiso(a, b));
            break;
        case '*':
            printf("tichhaiso %d va %d la %d", a, b, nhanhaiso(a, b));
            break;
        case '/':
            printf("thuonghaiso %d va %d la %.2f", a, b, chiahaiso(a, b));
            break;
        case 'n':
            printf("hen gap lai");
        default:
            printf("lua chon sai");
            break;
    }
    return 0;

}