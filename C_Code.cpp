#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct bill
{
    int quan;
    char dish[50];
    int price;
    int total;
};

int totalbill(int menutable);

struct TABLE
{
    int cnt;
    int finaltotal;
    struct bill b[50];
};

struct TABLE t[5];

void set(struct TABLE *table)
{
    table->cnt = 0;
    table->finaltotal = 0;
}

void print(struct TABLE *table, int menutable)
{
    if(table->cnt == 0)
    {
        printf("You have not ordered anything yet. Go fast and order it first!!!\n\n\n");
    }
    else
    {
        for(int i = 0; i < table->cnt; i++)
        {
            if(i == 0)
            {
                printf("\n\nHere is your bill.\n\n\n");
                printf(" Sr. \t\tName of the dish items\t\tPrice   Quantity   Total\n");
                printf(" --- \t\t---------------------\t\t-----   --------   -----\n\n");
            }
            printf(" %d. %-39s%10d%8d%10d\n", i + 1, table->b[i].dish, table->b[i].price, table->b[i].quan, table->b[i].total);
            table->finaltotal += table->b[i].total;
            if(i == table->cnt - 1)
            {
                printf("\n");
                printf("-------------------------------------------------------------------------\n");
                printf("  GRAND TOTAL%58d\n\n", totalbill(menutable));
                printf("\nTHANKYOU!!! VISIT AGAIN!!!\n\n\n");
            }
        }
    }
}

int billll(struct TABLE *table)
{
    return table->finaltotal;
}

int totalbill(int menutable)
{
    return billll(&t[menutable]);
}

void menu(int menutable)
{
    char d[50];
    int choice2, choice3, choice4, i = 1;
    while(1)
    {
        printf("The menu is given below: \n\n");
        printf("   1. PUNJABI\n");
        printf("   2. CHINESE\n");
        printf("   3. SOUTH INDIAN\n");
        printf("   4. PIZZA\n");
        printf("   5. BURGER\n");
        printf("   6. BEVERAGES\n");
        printf("   7. EXIT\n\n");
        printf("What would you like to have? Enter choice number: ");
        scanf("%d", &choice2);
        printf("\n");
        if(choice2 == 7)
            break;
        else
        {
            switch(choice2)
            {
                case 1:
                {
                    printf("\t\t\tPUNJABI\n");
                    printf("\t\t\t------\n\n\n");
                    printf("%-45s%10d\n", "  1. Cheese Corn", 80);
                    printf("%-45s%10d\n", "  2. Shahi Paneer", 70);
                    printf("%-45s%10d\n", "  3. Palak Paneer", 90);
                    printf("%-45s%10d\n", "  4. Paneer Bhurji", 75);
                    printf("%-45s%10d\n", "  5. Paneer Makhani", 100);
                    printf("%-45s%10d\n", "  6. Malai Kofta", 110);
                    printf("%-45s%10d\n", "  7. Naan", 30);
                    printf("%-45s%10d\n", "  8. Butter Naan", 40);
                    printf("  9. Back to menu\n\n");
                    while(1)
                    {
                        printf("\nWhat would you like to have? Select choice number: ");
                        scanf("%d", &choice3);
                        
                        while(1)
                        {
                            if(choice3 < 1 || choice3 > 9)
                            {
                                printf("Incorrect choice. Enter correct choice number: ");
                                scanf("%d", &choice3);
                            }
                            else
                            {
                                break;
                            }
                        }
                        
                        if(choice3 == 9)
                            break;
                        else
                        {
                            printf("How many plates would you like to have? ");
                            scanf("%d", &choice4);
                            while(1)
                            {
                                if(choice4 < 0)
                                {
                                    printf("Incorrect choice. Enter correct choice number: ");
                                    scanf("%d", &choice4);
                                }
                                else
                                {
                                    break;
                                }
                            }
                        }
                        
                        if(choice3 == 1)
                        {
                            strcpy(d, "Cheese Corn");
                            t[menutable].b[t[menutable].cnt].quan = choice4;
                            t[menutable].b[t[menutable].cnt].price = 80;
                            strcpy(t[menutable].b[t[menutable].cnt].dish, d);
                            t[menutable].b[t[menutable].cnt].total = 80 * choice4;
                            t[menutable].cnt++;
                        }
                        else if(choice3 == 2)
                        {
                            strcpy(d, "Shahi Paneer");
                            t[menutable].b[t[menutable].cnt].quan = choice4;
                            t[menutable].b[t[menutable].cnt].price = 70;
                            strcpy(t[menutable].b[t[menutable].cnt].dish, d);
                            t[menutable].b[t[menutable].cnt].total = 70 * choice4;
                            t[menutable].cnt++;
                        }
                        else if(choice3 == 3)
                        {
                            strcpy(d, "Palak Paneer");
                            t[menutable].b[t[menutable].cnt].quan = choice4;
                            t[menutable].b[t[menutable].cnt].price = 90;
                            strcpy(t[menutable].b[t[menutable].cnt].dish, d);
                            t[menutable].b[t[menutable].cnt].total = 90 * choice4;
                            t[menutable].cnt++;
                        }
                        else if(choice3 == 4)
                        {
                            strcpy(d, "Paneer Bhurji");
                            t[menutable].b[t[menutable].cnt].quan = choice4;
                            t[menutable].b[t[menutable].cnt].price = 75;
                            strcpy(t[menutable].b[t[menutable].cnt].dish, d);
                            t[menutable].b[t[menutable].cnt].total = 75 * choice4;
                            t[menutable].cnt++;
                        }
                        else if(choice3 == 5)
                        {
                            strcpy(d, "Paneer Makhni");
                            t[menutable].b[t[menutable].cnt].quan = choice4;
                            t[menutable].b[t[menutable].cnt].price = 100;
                            strcpy(t[menutable].b[t[menutable].cnt].dish, d);
                            t[menutable].b[t[menutable].cnt].total = 100 * choice4;
                            t[menutable].cnt++;
                        }
                        else if(choice3 == 6)
                        {
                            strcpy(d, "Malai Kofta");
                            t[menutable].b[t[menutable].cnt].quan = choice4;
                            t[menutable].b[t[menutable].cnt].price = 110;
                            strcpy(t[menutable].b[t[menutable].cnt].dish, d);
                            t[menutable].b[t[menutable].cnt].total = 110 * choice4;
                            t[menutable].cnt++;
                        }
                        else if(choice3 == 7)
                        {
                            strcpy(d, "Naan");
                            t[menutable].b[t[menutable].cnt].quan = choice4;
                            t[menutable].b[t[menutable].cnt].price = 30;
                            strcpy(t[menutable].b[t[menutable].cnt].dish, d);
                            t[menutable].b[t[menutable].cnt].total = 30 * choice4;
                            t[menutable].cnt++;
                        }
                        else if(choice3 == 8)
                        {
                            strcpy(d, "Butter Naan");
                            t[menutable].b[t[menutable].cnt].quan = choice4;
                            t[menutable].b[t[menutable].cnt].price = 40;
                            strcpy(t[menutable].b[t[menutable].cnt].dish, d);
                            t[menutable].b[t[menutable].cnt].total = 40 * choice4;
                            t[menutable].cnt++;
                        }
                    }
                    break;
                }
                case 2:
                {
                    printf("\t\t\tCHINESE\n");
                    printf("\t\t\t-------\n\n\n");
                    printf("%-45s%10d\n", "  1. Spring Roll", 70);
                    printf("%-45s%10d\n", "  2. Haka Noodles", 90);
                    printf("%-45s%10d\n", "  3. Hot Pot", 100);
                    printf("%-45s%10d\n", "  4. Mapo Tofu", 125);
                    printf("%-45s%10d\n", "  5. Dumplings", 130);
                    printf("%-45s%10d\n", "  6. Dry Manchurian", 110);
                    printf("%-45s%10d\n", "  7. Manchurain with Gravy", 130);
                    printf("%-45s%10d\n", "  8. Lemon Fried Rice", 60);
                    printf("  9. Back to menu\n\n");
                    
                    while(1)
                    {
                        printf("\nWhat would you like to have? Select choice number: ");
                        scanf("%d", &choice3);
                        
                        while(1)
                        {
                            if(choice3 < 1 || choice3 > 9)
                            {
                                printf("Incorrect choice. Enter correct choice number: ");
                                scanf("%d", &choice3);
                            }
                            else
                            {
                                break;
                            }
                        }
                        
                        if(choice3 == 9)
                            break;
                        else
                        {
                            printf("How many plates would you like to have? ");
                            scanf("%d", &choice4);
                            while(1)
                            {
                                if(choice4 < 0)
                                {
                                    printf("Incorrect choice. Enter correct choice number: ");
                                    scanf("%d", &choice4);
                                }
                                else
                                {
                                    break;
                                }
                            }
                        }
                        if(choice3 == 1)
                        {
                            strcpy(d, "Spring Roll");
                            t[menutable].b[t[menutable].cnt].quan = choice4;
                            t[menutable].b[t[menutable].cnt].price = 70;
                            strcpy(t[menutable].b[t[menutable].cnt].dish, d);
                            t[menutable].b[t[menutable].cnt].total = 70 * choice4;
                            t[menutable].cnt++;
                        }
                        else if(choice3 == 2)
                        {
                            strcpy(d, "Haka Noodles");
                            t[menutable].b[t[menutable].cnt].quan = choice4;
                            t[menutable].b[t[menutable].cnt].price = 90;
                            strcpy(t[menutable].b[t[menutable].cnt].dish, d);
                            t[menutable].b[t[menutable].cnt].total = 90 * choice4;
                            t[menutable].cnt++;
                        }
                        else if(choice3 == 3)
                        {
                            strcpy(d, "Hot Pot");
                            t[menutable].b[t[menutable].cnt].quan = choice4;
                            t[menutable].b[t[menutable].cnt].price = 100;
                            strcpy(t[menutable].b[t[menutable].cnt].dish, d);
                            t[menutable].b[t[menutable].cnt].total = 100 * choice4;
                            t[menutable].cnt++;
                        }
                        else if(choice3 == 4)
                        {
                            strcpy(d, "Mapo Tofu");
                            t[menutable].b[t[menutable].cnt].quan = choice4;
                            t[menutable].b[t[menutable].cnt].price = 125;
                            strcpy(t[menutable].b[t[menutable].cnt].dish, d);
                            t[menutable].b[t[menutable].cnt].total = 125 * choice4;
                            t[menutable].cnt++;
                        }
                        else if(choice3 == 5)
                        {
                            strcpy(d, "Dumplings");
                            t[menutable].b[t[menutable].cnt].quan = choice4;
                            t[menutable].b[t[menutable].cnt].price = 130;
                            strcpy(t[menutable].b[t[menutable].cnt].dish, d);
                            t[menutable].b[t[menutable].cnt].total = 130 * choice4;
                            t[menutable].cnt++;
                        }
                        else if(choice3 == 6)
                        {
                            strcpy(d, "Dry Manchurian");
                            t[menutable].b[t[menutable].cnt].quan = choice4;
                            t[menutable].b[t[menutable].cnt].price = 110;
                            strcpy(t[menutable].b[t[menutable].cnt].dish, d);
                            t[menutable].b[t[menutable].cnt].total = 110 * choice4;
                            t[menutable].cnt++;
                        }
                        else if(choice3 == 7)
                        {
                            strcpy(d, "Manchurian with Gravy");
                            t[menutable].b[t[menutable].cnt].quan = choice4;
                            t[menutable].b[t[menutable].cnt].price = 130;
                            strcpy(t[menutable].b[t[menutable].cnt].dish, d);
                            t[menutable].b[t[menutable].cnt].total = 130 * choice4;
                            t[menutable].cnt++;
                        }
                        else if(choice3 == 8)
                        {
                            strcpy(d, "Lemon Fried Rice");
                            t[menutable].b[t[menutable].cnt].quan = choice4;
                            t[menutable].b[t[menutable].cnt].price = 60;
                            strcpy(t[menutable].b[t[menutable].cnt].dish, d);
                            t[menutable].b[t[menutable].cnt].total = 60 * choice4;
                            t[menutable].cnt++;
                        }
                    }
                    break;
                }
                case 3:
                {
                    printf("\t\t\tSOUTH INDIAN\n");
                    printf("\t\t\t------------\n\n\n");
                    printf("%-45s%10d\n", "  1. Menduvada", 100);
                    printf("%-45s%10d\n", "  2. Masala Dosa", 120);
                    printf("%-45s%10d\n", "  3. Maysur Malasa Dosa", 140);
                    printf("%-45s%10d\n", "  4. Paper Dosa", 65);
                    printf("%-45s%10d\n", "  5. Plain Cheese Butter Dosa", 80);
                    printf("%-45s%10d\n", "  6. Butter Paneer Dosa", 150);
                    printf("%-45s%10d\n", "  7. Rava Masala Dosa", 160);
                    printf("%-45s%10d\n", "  8. Idli-Sambhar", 90);
                    printf("  9. Back to menu\n\n");
                    
                    while(1)
                    {
                        printf("\nWhat would you like to have? Select choice number: ");
                        scanf("%d", &choice3);
                        
                        while(1)
                        {
                            if(choice3 < 1 || choice3 > 9)
                            {
                                printf("Incorrect choice. Enter correct choice number: ");
                                scanf("%d", &choice3);
                            }
                            else
                            {
                                break;
                            }
                        }
                        
                        if(choice3 == 9)
                            break;
                        else
                        {
                            printf("How many plates would you like to have? ");
                            scanf("%d", &choice4);
                            while(1)
                            {
                                if(choice4 < 0)
                                {
                                    printf("Incorrect choice. Enter correct choice number: ");
                                    scanf("%d", &choice4);
                                }
                                else
                                {
                                    break;
                                }
                            }
                        }
                        
                        if(choice3 == 1)
                        {
                            strcpy(d, "Menduvada");
                            t[menutable].b[t[menutable].cnt].quan = choice4;
                            t[menutable].b[t[menutable].cnt].price = 100;
                            strcpy(t[menutable].b[t[menutable].cnt].dish, d);
                            t[menutable].b[t[menutable].cnt].total = 100 * choice4;
                            t[menutable].cnt++;
                        }
                        else if(choice3 == 2)
                        {
                            strcpy(d, "Masala Dosa");
                            t[menutable].b[t[menutable].cnt].quan = choice4;
                            t[menutable].b[t[menutable].cnt].price = 120;
                            strcpy(t[menutable].b[t[menutable].cnt].dish, d);
                            t[menutable].b[t[menutable].cnt].total = 120 * choice4;
                            t[menutable].cnt++;
                        }
                        else if(choice3 == 3)
                        {
                            strcpy(d, "Maysur Masala Dosa");
                            t[menutable].b[t[menutable].cnt].quan = choice4;
                            t[menutable].b[t[menutable].cnt].price = 140;
                            strcpy(t[menutable].b[t[menutable].cnt].dish, d);
                            t[menutable].b[t[menutable].cnt].total = 140 * choice4;
                            t[menutable].cnt++;
                        }
                        else if(choice3 == 4)
                        {
                            strcpy(d, "Paper Dosa");
                            t[menutable].b[t[menutable].cnt].quan = choice4;
                            t[menutable].b[t[menutable].cnt].price = 65;
                            strcpy(t[menutable].b[t[menutable].cnt].dish, d);
                            t[menutable].b[t[menutable].cnt].total = 65 * choice4;
                            t[menutable].cnt++;
                        }
                        else if(choice3 == 5)
                        {
                            strcpy(d, "Plain Cheese Butter Dosa");
                            t[menutable].b[t[menutable].cnt].quan = choice4;
                            t[menutable].b[t[menutable].cnt].price = 80;
                            strcpy(t[menutable].b[t[menutable].cnt].dish, d);
                            t[menutable].b[t[menutable].cnt].total = 80 * choice4;
                            t[menutable].cnt++;
                        }
                        else if(choice3 == 6)
                        {
                            strcpy(d, "Butter Paneer Dosa");
                            t[menutable].b[t[menutable].cnt].quan = choice4;
                            t[menutable].b[t[menutable].cnt].price = 150;
                            strcpy(t[menutable].b[t[menutable].cnt].dish, d);
                            t[menutable].b[t[menutable].cnt].total = 150 * choice4;
                            t[menutable].cnt++;
                        }
                        else if(choice3 == 7)
                        {
                            strcpy(d, "Rava Masala Dosa");
                            t[menutable].b[t[menutable].cnt].quan = choice4;
                            t[menutable].b[t[menutable].cnt].price = 160;
                            strcpy(t[menutable].b[t[menutable].cnt].dish, d);
                            t[menutable].b[t[menutable].cnt].total = 160 * choice4;
                            t[menutable].cnt++;
                        }
                        else if(choice3 == 8)
                        {
                            strcpy(d, "Idli-Sambhar");
                            t[menutable].b[t[menutable].cnt].quan = choice4;
                            t[menutable].b[t[menutable].cnt].price = 90;
                            strcpy(t[menutable].b[t[menutable].cnt].dish, d);
                            t[menutable].b[t[menutable].cnt].total = 90 * choice4;
                            t[menutable].cnt++;
                        }
                    }
                    break;
                }
                case 4:
                {
                    printf("\t\t\tPIZZA\n");
                    printf("\t\t\t-----\n\n\n");
                    printf("%-45s%10d\n", "  1. Seven cheesy Pizza", 270);
                    printf("%-45s%10d\n", "  2. Burn to hell Pizza", 260);
                    printf("%-45s%10d\n", "  3. Margherita Pizza", 200);
                    printf("%-45s%10d\n", "  4. Farm House", 165);
                    printf("%-45s%10d\n", "  5. Paneer Tika Butter Pizza", 210);
                    printf("%-45s%10d\n", "  6. Peri Peri Veg Pizza", 180);
                    printf("%-45s%10d\n", "  7. Tandoori Paneer Pizza", 170);
                    printf("%-45s%10d\n", "  8. Lapinoz Special", 300);
                    printf("  9. Back to menu\n\n");
                    
                    while(1)
                    {
                        printf("\nWhat would you like to have? Select choice number: ");
                        scanf("%d", &choice3);
                        
                        while(1)
                        {
                            if(choice3 < 1 || choice3 > 9)
                            {
                                printf("Incorrect choice. Enter correct choice number: ");
                                scanf("%d", &choice3);
                            }
                            else
                            {
                                break;
                            }
                        }
                        
                        if(choice3 == 9)
                            break;
                        else
                        {
                            printf("How many plates would you like to have? ");
                            scanf("%d", &choice4);
                            while(1)
                            {
                                if(choice4 < 0)
                                {
                                    printf("Incorrect choice. Enter correct choice number: ");
                                    scanf("%d", &choice4);
                                }
                                else
                                {
                                    break;
                                }
                            }
                        }
                        
                        if(choice3 == 1)
                        {
                            strcpy(d, "Seven cheesy Pizza");
                            t[menutable].b[t[menutable].cnt].quan = choice4;
                            t[menutable].b[t[menutable].cnt].price = 270;
                            strcpy(t[menutable].b[t[menutable].cnt].dish, d);
                            t[menutable].b[t[menutable].cnt].total = 270 * choice4;
                            t[menutable].cnt++;
                        }
                        else if(choice3 == 2)
                        {
                            strcpy(d, "Burn to hell Pizza");
                            t[menutable].b[t[menutable].cnt].quan = choice4;
                            t[menutable].b[t[menutable].cnt].price = 260;
                            strcpy(t[menutable].b[t[menutable].cnt].dish, d);
                            t[menutable].b[t[menutable].cnt].total = 260 * choice4;
                            t[menutable].cnt++;
                        }
                        else if(choice3 == 3)
                        {
                            strcpy(d, "Margherita Pizza");
                            t[menutable].b[t[menutable].cnt].quan = choice4;
                            t[menutable].b[t[menutable].cnt].price = 200;
                            strcpy(t[menutable].b[t[menutable].cnt].dish, d);
                            t[menutable].b[t[menutable].cnt].total = 200 * choice4;
                            t[menutable].cnt++;
                        }
                        else if(choice3 == 4)
                        {
                            strcpy(d, "Farm House");
                            t[menutable].b[t[menutable].cnt].quan = choice4;
                            t[menutable].b[t[menutable].cnt].price = 165;
                            strcpy(t[menutable].b[t[menutable].cnt].dish, d);
                            t[menutable].b[t[menutable].cnt].total = 165 * choice4;
                            t[menutable].cnt++;
                        }
                        else if(choice3 == 5)
                        {
                            strcpy(d, "Paneer Tika Butter Pizza");
                            t[menutable].b[t[menutable].cnt].quan = choice4;
                            t[menutable].b[t[menutable].cnt].price = 210;
                            strcpy(t[menutable].b[t[menutable].cnt].dish, d);
                            t[menutable].b[t[menutable].cnt].total = 210 * choice4;
                            t[menutable].cnt++;
                        }
                        else if(choice3 == 6)
                        {
                            strcpy(d, "Peri Peri Veg Pizza");
                            t[menutable].b[t[menutable].cnt].quan = choice4;
                            t[menutable].b[t[menutable].cnt].price = 180;
                            strcpy(t[menutable].b[t[menutable].cnt].dish, d);
                            t[menutable].b[t[menutable].cnt].total = 180 * choice4;
                            t[menutable].cnt++;
                        }
                        else if(choice3 == 7)
                        {
                            strcpy(d, "Tandoori Paneer Pizza");
                            t[menutable].b[t[menutable].cnt].quan = choice4;
                            t[menutable].b[t[menutable].cnt].price = 170;
                            strcpy(t[menutable].b[t[menutable].cnt].dish, d);
                            t[menutable].b[t[menutable].cnt].total = 170 * choice4;
                            t[menutable].cnt++;
                        }
                        else if(choice3 == 8)
                        {
                            strcpy(d, "Lapinoz Special");
                            t[menutable].b[t[menutable].cnt].quan = choice4;
                            t[menutable].b[t[menutable].cnt].price = 300;
                            strcpy(t[menutable].b[t[menutable].cnt].dish, d);
                            t[menutable].b[t[menutable].cnt].total = 300 * choice4;
                            t[menutable].cnt++;
                        }
                    }
                    break;
                }
                case 5:
                {
                    printf("\t\t\tBURGER\n");
                    printf("\t\t\t------\n\n\n");
                    printf("%-45s%10d\n", "  1. Aalu Tiki Burger", 80);
                    printf("%-45s%10d\n", "  2. Classic Burger", 100);
                    printf("%-45s%10d\n", "  3. Chilli Burger", 120);
                    printf("%-45s%10d\n", "  4. Classic Bacon & Cheese Burger", 145);
                    printf("%-45s%10d\n", "  5. Cheese Burger", 160);
                    printf("%-45s%10d\n", "  6. Veggie Burger", 140);
                    printf("%-45s%10d\n", "  7. Turkey Burger", 155);
                    printf("%-45s%10d\n", "  8. Mac'D Special", 250);
                    printf("  9. Back to menu\n\n");
                    
                    while(1)
                    {
                        printf("\nWhat would you like to have? Select choice number: ");
                        scanf("%d", &choice3);
                        
                        while(1)
                        {
                            if(choice3 < 1 || choice3 > 9)
                            {
                                printf("Incorrect choice. Enter correct choice number: ");
                                scanf("%d", &choice3);
                            }
                            else
                            {
                                break;
                            }
                        }
                        
                        if(choice3 == 9)
                            break;
                        else
                        {
                            printf("How many plates would you like to have? ");
                            scanf("%d", &choice4);
                            while(1)
                            {
                                if(choice4 < 0)
                                {
                                    printf("Incorrect choice. Enter correct choice number: ");
                                    scanf("%d", &choice4);
                                }
                                else
                                {
                                    break;
                                }
                            }
                        }
                        
                        if(choice3 == 1)
                        {
                            strcpy(d, "Aalu Tiki Burger");
                            t[menutable].b[t[menutable].cnt].quan = choice4;
                            t[menutable].b[t[menutable].cnt].price = 80;
                            strcpy(t[menutable].b[t[menutable].cnt].dish, d);
                            t[menutable].b[t[menutable].cnt].total = 80 * choice4;
                            t[menutable].cnt++;
                        }
                        else if(choice3 == 2)
                        {
                            strcpy(d, "Classic Burger");
                            t[menutable].b[t[menutable].cnt].quan = choice4;
                            t[menutable].b[t[menutable].cnt].price = 100;
                            strcpy(t[menutable].b[t[menutable].cnt].dish, d);
                            t[menutable].b[t[menutable].cnt].total = 100 * choice4;
                            t[menutable].cnt++;
                        }
                        else if(choice3 == 3)
                        {
                            strcpy(d, "Chilli Burger");
                            t[menutable].b[t[menutable].cnt].quan = choice4;
                            t[menutable].b[t[menutable].cnt].price = 120;
                            strcpy(t[menutable].b[t[menutable].cnt].dish, d);
                            t[menutable].b[t[menutable].cnt].total = 120 * choice4;
                            t[menutable].cnt++;
                        }
                        else if(choice3 == 4)
                        {
                            strcpy(d, "Classic Bacon & Cheese Burger");
                            t[menutable].b[t[menutable].cnt].quan = choice4;
                            t[menutable].b[t[menutable].cnt].price = 145;
                            strcpy(t[menutable].b[t[menutable].cnt].dish, d);
                            t[menutable].b[t[menutable].cnt].total = 145 * choice4;
                            t[menutable].cnt++;
                        }
                        else if(choice3 == 5)
                        {
                            strcpy(d, "Cheese Burger");
                            t[menutable].b[t[menutable].cnt].quan = choice4;
                            t[menutable].b[t[menutable].cnt].price = 160;
                            strcpy(t[menutable].b[t[menutable].cnt].dish, d);
                            t[menutable].b[t[menutable].cnt].total = 160 * choice4;
                            t[menutable].cnt++;
                        }
                        else if(choice3 == 6)
                        {
                            strcpy(d, "Veggie Burger");
                            t[menutable].b[t[menutable].cnt].quan = choice4;
                            t[menutable].b[t[menutable].cnt].price = 140;
                            strcpy(t[menutable].b[t[menutable].cnt].dish, d);
                            t[menutable].b[t[menutable].cnt].total = 140 * choice4;
                            t[menutable].cnt++;
                        }
                        else if(choice3 == 7)
                        {
                            strcpy(d, "Turkey Burger");
                            t[menutable].b[t[menutable].cnt].quan = choice4;
                            t[menutable].b[t[menutable].cnt].price = 155;
                            strcpy(t[menutable].b[t[menutable].cnt].dish, d);
                            t[menutable].b[t[menutable].cnt].total = 155 * choice4;
                            t[menutable].cnt++;
                        }
                        else if(choice3 == 8)
                        {
                            strcpy(d, "Mac'D Special");
                            t[menutable].b[t[menutable].cnt].quan = choice4;
                            t[menutable].b[t[menutable].cnt].price = 250;
                            strcpy(t[menutable].b[t[menutable].cnt].dish, d);
                            t[menutable].b[t[menutable].cnt].total = 250 * choice4;
                            t[menutable].cnt++;
                        }
                    }
                    break;
                }
                case 6:
                {
                    printf("\t\t\tBEVERAGES\n");
                    printf("\t\t\t------\n\n\n");
                    printf("%-45s%10d\n", "  1. Coke", 40);
                    printf("%-45s%10d\n", "  2. Thumps Up", 30);
                    printf("%-45s%10d\n", "  3. Seven Up", 30);
                    printf("%-45s%10d\n", "  4. Fanta", 25);
                    printf("%-45s%10d\n", "  5. Sprite", 20);
                    printf("%-45s%10d\n", "  6. Mocktail", 100);
                    printf("  7. Back to menu\n\n");
                    
                    while(1)
                    {
                        printf("\nWhat would you like to have? Select choice number: ");
                        scanf("%d", &choice3);
                        
                        while(1)
                        {
                            if(choice3 < 1 || choice3 > 7)
                            {
                                printf("Incorrect choice. Enter correct choice number: ");
                                scanf("%d", &choice3);
                            }
                            else
                            {
                                break;
                            }
                        }
                        
                        if(choice3 == 7)
                            break;
                        else
                        {
                            printf("How many drinks would you like to have? ");
                            scanf("%d", &choice4);
                            while(1)
                            {
                                if(choice4 < 0)
                                {
                                    printf("Incorrect choice. Enter correct choice number: ");
                                    scanf("%d", &choice4);
                                }
                                else
                                {
                                    break;
                                }
                            }
                        }
                        
                        if(choice3 == 1)
                        {
                            strcpy(d, "Coke");
                            t[menutable].b[t[menutable].cnt].quan = choice4;
                            t[menutable].b[t[menutable].cnt].price = 40;
                            strcpy(t[menutable].b[t[menutable].cnt].dish, d);
                            t[menutable].b[t[menutable].cnt].total = 40 * choice4;
                            t[menutable].cnt++;
                        }
                        else if(choice3 == 2)
                        {
                            strcpy(d, "Thumps Up");
                            t[menutable].b[t[menutable].cnt].quan = choice4;
                            t[menutable].b[t[menutable].cnt].price = 30;
                            strcpy(t[menutable].b[t[menutable].cnt].dish, d);
                            t[menutable].b[t[menutable].cnt].total = 30 * choice4;
                            t[menutable].cnt++;
                        }
                        else if(choice3 == 3)
                        {
                            strcpy(d, "Seven Up");
                            t[menutable].b[t[menutable].cnt].quan = choice4;
                            t[menutable].b[t[menutable].cnt].price = 30;
                            strcpy(t[menutable].b[t[menutable].cnt].dish, d);
                            t[menutable].b[t[menutable].cnt].total = 30 * choice4;
                            t[menutable].cnt++;
                        }
                        else if(choice3 == 4)
                        {
                            strcpy(d, "Fanta");
                            t[menutable].b[t[menutable].cnt].quan = choice4;
                            t[menutable].b[t[menutable].cnt].price = 25;
                            strcpy(t[menutable].b[t[menutable].cnt].dish, d);
                            t[menutable].b[t[menutable].cnt].total = 25 * choice4;
                            t[menutable].cnt++;
                        }
                        else if(choice3 == 5)
                        {
                            strcpy(d, "Sprite");
                            t[menutable].b[t[menutable].cnt].quan = choice4;
                            t[menutable].b[t[menutable].cnt].price = 25;
                            strcpy(t[menutable].b[t[menutable].cnt].dish, d);
                            t[menutable].b[t[menutable].cnt].total = 25 * choice4;
                            t[menutable].cnt++;
                        }
                        else if(choice3 == 6)
                        {
                            strcpy(d, "Mocktail");
                            t[menutable].b[t[menutable].cnt].quan = choice4;
                            t[menutable].b[t[menutable].cnt].price = 100;
                            strcpy(t[menutable].b[t[menutable].cnt].dish, d);
                            t[menutable].b[t[menutable].cnt].total = 100 * choice4;
                            t[menutable].cnt++;
                        }
                    }
                    break;
                }
            }   
        }
    }
}

void printbill(int menutable)
{
    print(&t[menutable], menutable);    
}

void setcnt(int menutable)
{
    set(&t[menutable]);
}

int main()
{
    int t[5] = {1, 2, 3, 4, 5}, booked[5] = {}, table;
    int tblcnt = 0, flag = 0, flag2 = 0;
    int choice;
    printf("\t\t\t\t\t\tSARGAM FOOD ZONE\n");
    printf("\t\t\t\t\t\t----------------\n\n\n\n");
    printf("\t\t\t\t\t\t   Welcome!!!\n\n");
    printf("Greetings of the day!\n");
    
    while(1)
    {
        printf("What would you like to go for?\n");
        printf("   1. Book a table.\n");
        printf("   2. Get the menu.\n");
        printf("   3. Get the bill.\n");
        printf("   4. Exit.\n\n");
        printf("Enter choice number: ");
        scanf("%d", &choice);
        while(1)
        {
            if(choice < 1 || choice > 4)
            {
                printf("Incorrect choice. Enter correct choice number: ");
                scanf("%d", &choice);
            }
            else
            {
                break;
            }
        }
        
        int table, cnt = 0, menutable, m = 0;
        switch(choice)
        {
            case 1:
            {
                for(int i = 0; i < 5; i++)
                {
                    if(booked[i] != 0)
                    {
                        cnt++;
                    }
                }
                if(cnt == 5)
                {
                    printf("\nOops, all the tables are booked. You need to wait for sometime.\n");
                    printf("Thank you for your co-operation.\n\n\n");
                    break;
                }
                else
                {
                    printf("Which table number would you like to book?\n");
                    printf("Available tables are:\n");
                    for(int i = 0; i < 5; i++)
                    {
                        int flag = 0;
                        for(int j = 0; j < tblcnt; j++)
                        {
                            if(t[i] == booked[j])
                            {
                                flag = 1;
                                cnt++;
                                break;
                            }
                        }
                        if(flag != 1)
                        {
                            printf("%d ", t[i]);
                        }
                    }
                
                    printf("\nEnter correct choice: ");
                    scanf("%d", &table);
                    while(1)
                    {
                        if((table < 1 || table > 5) || (booked[0] == table) || (booked[1] == table) || (booked[2] == table) || (booked[3] == table) || (booked[4] == table))
                        {
                            printf("Incorrect choice. Enter correct choice number: ");
                            scanf("%d", &table);
                        }
                        else
                        {
                            printf("Table number %d is booked.\n\n", table);
                            booked[tblcnt] = table;
                            tblcnt++;
                            setcnt(table - 1);
                            break;
                        }
                    }
                }
            break;
            }
            
            case 2:
            {
                m = 0;
                printf("Which is your table number? ");
                scanf("%d", &menutable);
                for(int i = 0; i < 5; i++)
                {
                    if(menutable == booked[i])
                    {
                        m = 1;
                    }
                }
                
                if(m != 1)
                {
                    while(1)
                    {
                        if(menutable < 1 || menutable > 5)
                        {
                            printf("Incorrect choice. Please enter corect choice: ");
                            scanf("%d", &menutable);
                            for(int i = 0; i < 5; i++)
                            {
                                if(menutable == booked[i])
                                {
                                    m = 1;
                                }
                            }
                        }
                        else
                        {
                            printf("Your table is not booked. Please book the table first.\n\n");
                            break;
                        }
                    }
                }
                if(m == 1)
                    menu(menutable - 1);
            
                break;
            }
            case 3:
            {
                m = 0;
                printf("Which is your table number? ");
                scanf("%d", &menutable);
                for(int i = 0; i < 5; i++)
                {
                    if(menutable == booked[i])
                    {
                        m = 1;
                    }
                }
                flag2 = 0;
                if(m != 1)
                {
                    while(1)
                    {
                        flag2 = 0;
                        if(menutable < 1 || menutable > 5)
                        {
                            printf("Incorrect choice. Please enter corect choice: ");
                            scanf("%d", &menutable);
                            for(int i = 0; i < 5; i++)
                            {
                                if(menutable == booked[i])
                                {
                                    m = 1;
                                }
                            }
                        }
                        else
                        {
                            printf("Your table is not booked. Please book the table first.\n\n");
                            flag2 = 1;
                            break;
                        }
                    }
                }
                if(flag2 == 1)
                {
                    break;
                }
                else
                {
                    if(m == 1)
                        printbill(menutable - 1);
                    
                    break;
                }
            }
            case 4:
            {
                printf("THANK YOU!!! VISIT AGAIN!!!\n");
                return 0;
            }
        }
    }
    return 0;
}
