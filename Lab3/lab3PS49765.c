#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int choice;

    do {
        printf("\n===== Menu lab 3 =====\n");
        printf("1. Xep loai hoc luc\n");
        printf("2. Giai phuong trinh bac nhat\n"); 
        printf("3. Giai phuong trinh bac hai\n");
        printf("4. Chuong trinh tinh tien dien\n");
        printf("0. Thoat chuong trinh\n");
        printf("Nhap lua chon cua ban: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: {
            float diem;
            printf("Nhap diem: ");
            scanf("%f", &diem);

            if (diem >= 9) printf("Xuat sac\n");
            else if (diem >= 8) printf("Gioi\n");
            else if (diem >= 6.5) printf("Kha\n");
            else if (diem >= 5) printf("Trung binh\n");
            else if (diem >= 3) printf("Kem\n");
            else printf("Yeu\n");

            break;
        }
            case 2: {
            float a, b;
            printf("Nhap a, b: ");
            scanf("%f %f", &a, &b);

            if (a == 0) {
                if (b == 0) printf("Vo so nghiem\n");
                else printf("Vo nghiem\n");
            } else {
                printf("Nghiem: x = %.2f\n", -b / a);
            }
            break;
        }

            case 3: {
            float a, b, c;
            printf("Nhap a, b, c: ");
            scanf("%f %f %f", &a, &b, &c);

            if (a == 0) {
                printf("Khong phai PT bac 2\n");
            } else {
                float delta = b*b - 4*a*c;

                if (delta < 0) printf("Vo nghiem\n");
                else if (delta == 0) printf("Nghiem kep: x = %.2f\n", -b/(2*a));
                else {
                    float x1 = (-b + sqrt(delta)) / (2*a);
                    float x2 = (-b - sqrt(delta)) / (2*a);
                    printf("Hai nghiem phan biet: x1 = %.2f, x2 = %.2f\n", x1, x2);
                }
            }
            break;
        }
            case 4: {
            int kWh;
            long money = 0;
            printf("Nhap so kWh: ");
            scanf("%d", &kWh);

            if (kWh <= 50)
                money = kWh * 1678;
            else if (kWh <= 100)
                money = 50*1678 + (kWh-50)*1734;
            else if (kWh <= 200)
                money = 50*1678 + 50*1734 + (kWh-100)*2014;
            else if (kWh <= 300)
                money = 50*1678 + 50*1734 + 100*2014 + (kWh-200)*2536;
            else if (kWh <= 400)
                money = 50*1678 + 50*1734 + 100*2014 + 100*2536 + (kWh-300)*2834;
            else
                money = 50*1678 + 50*1734 + 100*2014 + 100*2536 + 100*2834 + (kWh-400)*2927;

            printf("Tien dien: %ld dong\n", money);
            break;
        }

            case 0:
                printf("Thoat chuong trinh. Tam biet!\n");
                break;
                exit(0);
            default:
                printf("Lua chon khong hop le. Vui long chon lai!\n");
                break;
        }

    } while (choice != 0);

    return 0;
}
