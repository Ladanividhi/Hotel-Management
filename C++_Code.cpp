#include<iostream>
#include<cstring>
#include<string>
#include<iomanip>
#include<vector>
#include<cmath>
using namespace std;

class bill
{
    int quan;
    string dish;
    int price;
    
    public:
    int total;
    void set(string d, int q, int rate)
    {
        quan=q;
        price=rate;
        dish=d;
        total=rate*q;
    }
    void print(int i)
    {
        if(i<9)
            cout<<"  "<<i+1<<". "<<left<<setw(45)<<dish<<setw(10)<<price<<setw(9)<<quan<<total<<endl;
        else
            cout<<" "<<i+1<<". "<<left<<setw(45)<<dish<<setw(10)<<price<<setw(9)<<quan<<total<<endl;
    }
};
int totalbill(int menutable);
class TABLE
{
    public:
    int cnt;
    int finaltotal;
    friend class bill;
    bill b[50];
    void set()
    {
        cnt=0;
        finaltotal=0;
    }
    void print(int menutable)
    {
        if(cnt==0)
        {
            cout<<"You have not ordered anything yet. Go fast and order it first!!!\n\n\n";
        }
        else
        {
            for(int i=0; i<cnt; i++)
            {
                if(i==0)
                {
                    cout<<"\n\nHere is your bill.\n\n\n";
                    cout<<" Sr. "<<"\t\tName of the dish item\t\t"<<"Price   Quantity   Total\n";
                    cout<<" --- "<<"\t\t---------------------\t\t"<<"-----   --------   -----\n\n";
                }
                b[i].print(i);
                finaltotal+=b[i].total;
                if(i==cnt-1)
                {
                    cout<<"\n";
                    cout<<"-------------------------------------------------------------------------\n";
                    cout<<"  GRAND TOTAL"<<right<<setw(58)<<totalbill(menutable)<<endl<<endl;
                    cout<<"\nTHANKYOU!!! VISIT AGAIN!!!\n\n\n";
                }
            }
        }
    }
    int billll()
    {
        return finaltotal;
    }
};

TABLE t[5];

int totalbill(int menutable)
{
    return t[menutable].billll();
}

void menu(int menutable)
{
    string d;
    int choice2, choice3, choice4, i=1;
    while(1)
    {
        cout<<"The menu is given below: \n\n";
        cout<<"   1. PUNJABI\n";
        cout<<"   2. CHINESE\n";
        cout<<"   3. SOUTH INDIAN\n";
        cout<<"   4. PIZZA\n";
        cout<<"   5. BURGER\n";
        cout<<"   6. BEVERAGES\n";
        cout<<"   7. EXIT\n\n";
        cout<<"What would you like to have? Enter choice number: ";            
        cin>>choice2;
        cout<<"\n";
        if(choice2==7)
            break;
        else
        {
                switch(choice2)
                {
                    case 1:
                    {
                        cout<<"\t\t\tPUNJABI\n";
                        cout<<"\t\t\t-------\n\n\n";
                        cout<<left<<setfill(' ')<<setw(45)<<"  1. Cheese Corn"<<"80"<<endl;
                        cout<<left<<setfill(' ')<<setw(45)<<"  2. Shahi Paneer"<<"70"<<endl;
                        cout<<left<<setfill(' ')<<setw(45)<<"  3. Palak Paneer"<<"90"<<endl;
                        cout<<left<<setfill(' ')<<setw(45)<<"  4. Paneer Bhurji"<<"75"<<endl;
                        cout<<left<<setfill(' ')<<setw(45)<<"  5. Paneer Makhani"<<"100"<<endl;
                        cout<<left<<setfill(' ')<<setw(45)<<"  6. Malai Kofta"<<"110"<<endl;
                        cout<<left<<setfill(' ')<<setw(45)<<"  7. Naan"<<"30"<<endl;
                        cout<<left<<setfill(' ')<<setw(45)<<"  8. Butter Naan"<<"40"<<endl;
                        cout<<"  9. Back to menu\n\n";
                        
                        while(1)
                        {
                            cout<<"\nWhat would you like to have? Select choice number: ";
                            cin>>choice3;
                            
                            while(1)
                            {
                                if(choice3<1 || choice3>9)
                                {
                                    cout<<"Incorrect choice. Enter correct choice number: ";
                                    cin>>choice3;
                                }
                                else
                                {
                                    break;
                                }
                            }
                            
                            if(choice3==9)
                                break;
                            else
                            {
                                cout<<"How many plates would you like to have? ";
                                cin>>choice4;
                                while(1)
                                {
                                    if(choice4<0)
                                    {
                                        cout<<"Incorrect choice. Enter correct choice number: ";
                                        cin>>choice4;
                                    }
                                    else
                                    {
                                        break;
                                    }
                                }
                            }
                            
                            if(choice3==1)
                            {
                                d="Cheese Corn";
                                t[menutable].b[(t[menutable].cnt)].set(d, choice4, 80);
                                t[menutable].cnt++;
                            }
                            else if(choice3==2)
                            {
                                d="Shahi Paneer";
                                t[menutable].b[(t[menutable].cnt)].set(d, choice4, 70);
                                t[menutable].cnt++;
                            }
                            else if(choice3==3)
                            {
                                d="Palak Paneer";
                                t[menutable].b[(t[menutable].cnt)].set(d, choice4, 90);
                                t[menutable].cnt++;
                            }
                            else if(choice3==4)
                            {
                                d="Paneer Bhurji";
                                t[menutable].b[(t[menutable].cnt)].set(d, choice4, 75);
                                t[menutable].cnt++;
                            }
                            else if(choice3==5)
                            {
                                d="Paneer Makhni";
                                t[menutable].b[(t[menutable].cnt)].set(d, choice4, 100);
                                t[menutable].cnt++;
                            }
                            else if(choice3==6)
                            {
                                d="Malai Kofta";
                                t[menutable].b[(t[menutable].cnt)].set(d, choice4, 110);
                                t[menutable].cnt++;
                            }
                            else if(choice3==7)
                            {
                                d="Naan";
                                t[menutable].b[(t[menutable].cnt)].set(d, choice4, 30);
                                t[menutable].cnt++;
                            }
                            else if(choice3==8)
                            {
                                d="Butter Naan";
                                t[menutable].b[(t[menutable].cnt)].set(d, choice4, 40);
                                t[menutable].cnt++;
                            }
                        }
                        break;
                        
                    }
                    
                    case 2:
                    {
                        cout<<"\t\t\tCHINESE\n";
                        cout<<"\t\t\t-------\n\n\n";
                        cout<<left<<setfill(' ')<<setw(45)<<"  1. Spring Roll"<<"70"<<endl;
                        cout<<left<<setfill(' ')<<setw(45)<<"  2. Haka Noodles"<<"90"<<endl;
                        cout<<left<<setfill(' ')<<setw(45)<<"  3. Hot Pot"<<"100"<<endl;
                        cout<<left<<setfill(' ')<<setw(45)<<"  4. Mapo Tofu"<<"125"<<endl;
                        cout<<left<<setfill(' ')<<setw(45)<<"  5. Dumplings"<<"130"<<endl;
                        cout<<left<<setfill(' ')<<setw(45)<<"  6. Dry Manchurian"<<"110"<<endl;
                        cout<<left<<setfill(' ')<<setw(45)<<"  7. Manchurain with Gravy"<<"130"<<endl;
                        cout<<left<<setfill(' ')<<setw(45)<<"  8. Lemon Fried Rice"<<"60"<<endl;
                        cout<<"  9. Back to menu\n\n";
                        
                        while(1)
                        {
                            cout<<"\nWhat would you like to have? Select choice number: ";
                            cin>>choice3;
                            
                            while(1)
                            {
                                if(choice3<1 || choice3>9)
                                {
                                    cout<<"Incorrect choice. Enter correct choice number: ";
                                    cin>>choice3;
                                }
                                else
                                {
                                    break;
                                }
                            }
                            
                            if(choice3==9)
                                break;
                            else
                            {
                                cout<<"How many plates would you like to have? ";
                                cin>>choice4;
                                while(1)
                                {
                                    if(choice4<0)
                                    {
                                        cout<<"Incorrect choice. Enter correct choice number: ";
                                        cin>>choice4;
                                    }
                                    else
                                    {
                                        break;
                                    }
                                }
                            }
                            if(choice3==1)
                            {
                                d="Spring Roll";
                                t[menutable].b[(t[menutable].cnt)].set(d, choice4, 70);
                                t[menutable].cnt++;
                            }
                            else if(choice3==2)
                            {
                                d="Haka Noodles";
                                t[menutable].b[(t[menutable].cnt)].set(d, choice4, 90);
                                t[menutable].cnt++;
                            }
                            else if(choice3==3)
                            {
                                d="Hot Pot";
                                t[menutable].b[(t[menutable].cnt)].set(d, choice4, 100);
                                t[menutable].cnt++;
                            }
                            else if(choice3==4)
                            {
                                d="Mapo Tofu";
                                t[menutable].b[(t[menutable].cnt)].set(d, choice4, 125);
                                t[menutable].cnt++;
                            }
                            else if(choice3==5)
                            {
                                d="Dumplings";
                                t[menutable].b[(t[menutable].cnt)].set(d, choice4, 130);
                                t[menutable].cnt++;
                            }
                            else if(choice3==6)
                            {
                                d="Dry Manchurian";
                                t[menutable].b[(t[menutable].cnt)].set(d, choice4, 110);
                                t[menutable].cnt++;
                            }
                            else if(choice3==7)
                            {
                                d="Manchurian with Gravy";
                                t[menutable].b[(t[menutable].cnt)].set(d, choice4, 130);
                                t[menutable].cnt++;
                            }
                            else if(choice3==8)
                            {
                                d="Lemon Fried Rice";
                                t[menutable].b[(t[menutable].cnt)].set(d, choice4, 60);
                                t[menutable].cnt++;
                            }
                        }
                        break;
                        
                    }
                    
                    case 3:
                    {
                        cout<<"\t\t\tSOUTH INDIAN\n";
                        cout<<"\t\t\t------------\n\n\n";
                        cout<<left<<setfill(' ')<<setw(45)<<"  1. Menduvada"<<"100"<<endl;
                        cout<<left<<setfill(' ')<<setw(45)<<"  2. Masala Dosa"<<"120"<<endl;
                        cout<<left<<setfill(' ')<<setw(45)<<"  3. Maysur Malasa Dosa"<<"140"<<endl;
                        cout<<left<<setfill(' ')<<setw(45)<<"  4. Paper Dosa"<<"65"<<endl;
                        cout<<left<<setfill(' ')<<setw(45)<<"  5. Plain Cheese Butter Dosa"<<"80"<<endl;
                        cout<<left<<setfill(' ')<<setw(45)<<"  6. Butter Paneer Dosa"<<"150"<<endl;
                        cout<<left<<setfill(' ')<<setw(45)<<"  7. Rava Masala Dosa"<<"160"<<endl;
                        cout<<left<<setfill(' ')<<setw(45)<<"  8. Idli-Sambhar"<<"90"<<endl;
                        cout<<"  9. Back to menu\n\n";
                        
                        while(1)
                        {
                            cout<<"\nWhat would you like to have? Select choice number: ";
                            cin>>choice3;
                            
                            while(1)
                            {
                                if(choice3<1 || choice3>9)
                                {
                                    cout<<"Incorrect choice. Enter correct choice number: ";
                                    cin>>choice3;
                                }
                                else
                                {
                                    break;
                                }
                            }
                            
                            if(choice3==9)
                                break;
                            else
                            {
                                cout<<"How many plates would you like to have? ";
                                cin>>choice4;
                                while(1)
                                {
                                    if(choice4<0)
                                    {
                                        cout<<"Incorrect choice. Enter correct choice number: ";
                                        cin>>choice4;
                                    }
                                    else
                                    {
                                        break;
                                    }
                                }
                            }
                            
                            if(choice3==1)
                            {
                                d="Menduvada";
                                t[menutable].b[(t[menutable].cnt)].set(d, choice4, 100);
                                t[menutable].cnt++;
                            }
                            else if(choice3==2)
                            {
                                d="Masala Dosa";
                                t[menutable].b[(t[menutable].cnt)].set(d, choice4, 120);
                                t[menutable].cnt++;
                            }
                            else if(choice3==3)
                            {
                                d="Maysur Masala Dosa";
                                t[menutable].b[(t[menutable].cnt)].set(d, choice4, 140);
                                t[menutable].cnt++;
                            }
                            else if(choice3==4)
                            {
                                d="Paper Dosa";
                                t[menutable].b[(t[menutable].cnt)].set(d, choice4, 65);
                                t[menutable].cnt++;
                            }
                            else if(choice3==5)
                            {
                                d="Plain Cheese Butter Dosa";
                                t[menutable].b[(t[menutable].cnt)].set(d, choice4, 80);
                                t[menutable].cnt++;
                            }
                            else if(choice3==6)
                            {
                                d="Butter Paneer Dosa";
                                t[menutable].b[(t[menutable].cnt)].set(d, choice4, 150);
                                t[menutable].cnt++;
                            }
                            else if(choice3==7)
                            {
                                d="Rava Masala Dosa";
                                t[menutable].b[(t[menutable].cnt)].set(d, choice4, 160);
                                t[menutable].cnt++;
                            }
                            else if(choice3==8)
                            {
                                d="Idli-Sambhar";
                                t[menutable].b[(t[menutable].cnt)].set(d, choice4, 90);
                                t[menutable].cnt++;
                            }
                        }
                        break;
                        
                    }
                    case 4:
                    {
                        cout<<"\t\t\tPIZZA\n";
                        cout<<"\t\t\t-----\n\n\n";
                        cout<<left<<setfill(' ')<<setw(45)<<"  1. Seven cheesy Pizza"<<"270"<<endl;
                        cout<<left<<setfill(' ')<<setw(45)<<"  2. Burn to hell Pizza"<<"260"<<endl;
                        cout<<left<<setfill(' ')<<setw(45)<<"  3. Margherita Pizza"<<"200"<<endl;
                        cout<<left<<setfill(' ')<<setw(45)<<"  4. Farm House"<<"165"<<endl;
                        cout<<left<<setfill(' ')<<setw(45)<<"  5. Paneer Tika Butter Pizza"<<"210"<<endl;
                        cout<<left<<setfill(' ')<<setw(45)<<"  6. Peri Peri Veg Pizza"<<"180"<<endl;
                        cout<<left<<setfill(' ')<<setw(45)<<"  7. Tandoori Paneer Pizza"<<"170"<<endl;
                        cout<<left<<setfill(' ')<<setw(45)<<"  8. Lapinoz Special"<<"300"<<endl;
                        cout<<"  9. Back to menu\n\n";
                        
                        while(1)
                        {
                            cout<<"\nWhat would you like to have? Select choice number: ";
                            cin>>choice3;
                            
                            while(1)
                            {
                                if(choice3<1 || choice3>9)
                                {
                                    cout<<"Incorrect choice. Enter correct choice number: ";
                                    cin>>choice3;
                                }
                                else
                                {
                                    break;
                                }
                            }
                            
                            if(choice3==9)
                                break;
                            else
                            {
                                cout<<"How many plates would you like to have? ";
                                cin>>choice4;
                                while(1)
                                {
                                    if(choice4<0)
                                    {
                                        cout<<"Incorrect choice. Enter correct choice number: ";
                                        cin>>choice4;
                                    }
                                    else
                                    {
                                        break;
                                    }
                                }
                            }
                            
                            if(choice3==1)
                            {
                                d="Seven cheesy Pizza";
                                t[menutable].b[(t[menutable].cnt)].set(d, choice4, 270);
                                t[menutable].cnt++;
                            }
                            else if(choice3==2)
                            {
                                d="Burn to hell Pizza";
                                t[menutable].b[(t[menutable].cnt)].set(d, choice4, 260);
                                t[menutable].cnt++;
                            }
                            else if(choice3==3)
                            {
                                d="Margherita Pizza";
                                t[menutable].b[(t[menutable].cnt)].set(d, choice4, 200);
                                t[menutable].cnt++;
                            }
                            else if(choice3==4)
                            {
                                d="Farm House";
                                t[menutable].b[(t[menutable].cnt)].set(d, choice4, 165);
                                t[menutable].cnt++;
                            }
                            else if(choice3==5)
                            {
                                d="Paneer Tika Butter Pizza";
                                t[menutable].b[(t[menutable].cnt)].set(d, choice4, 210);
                                t[menutable].cnt++;
                            }
                            else if(choice3==6)
                            {
                                d="Peri Peri Veg Pizza";
                                t[menutable].b[(t[menutable].cnt)].set(d, choice4, 180);
                                t[menutable].cnt++;
                            }
                            else if(choice3==7)
                            {
                                d="Tandoori Paneer Pizza";
                                t[menutable].b[(t[menutable].cnt)].set(d, choice4, 170);
                                t[menutable].cnt++;
                            }
                            else if(choice3==8)
                            {
                                d="Lapinoz Special";
                                t[menutable].b[(t[menutable].cnt)].set(d, choice4, 300);
                                t[menutable].cnt++;
                            }
                        }
                        break;
                    }
                    case 5:
                    {
                        cout<<"\t\t\tBURGER\n";
                        cout<<"\t\t\t------\n\n\n";
                        cout<<left<<setfill(' ')<<setw(45)<<"  1. Aalu Tiki Burger"<<"80"<<endl;
                        cout<<left<<setfill(' ')<<setw(45)<<"  2. Classic Burger"<<"100"<<endl;
                        cout<<left<<setfill(' ')<<setw(45)<<"  3. Chilli Burger"<<"120"<<endl;
                        cout<<left<<setfill(' ')<<setw(45)<<"  4. Classic Bacon & Cheese Burger"<<"145"<<endl;
                        cout<<left<<setfill(' ')<<setw(45)<<"  5. Cheese Burger"<<"160"<<endl;
                        cout<<left<<setfill(' ')<<setw(45)<<"  6. Veggie Burger"<<"140"<<endl;
                        cout<<left<<setfill(' ')<<setw(45)<<"  7. Turkey Burger"<<"155"<<endl;
                        cout<<left<<setfill(' ')<<setw(45)<<"  8. Mac'D Special"<<"250"<<endl;
                        cout<<"  9. Back to menu\n\n";
                        
                        while(1)
                        {
                            cout<<"\nWhat would you like to have? Select choice number: ";
                            cin>>choice3;
                            
                            while(1)
                            {
                                if(choice3<1 || choice3>9)
                                {
                                    cout<<"Incorrect choice. Enter correct choice number: ";
                                    cin>>choice3;
                                }
                                else
                                {
                                    break;
                                }
                            }
                            
                            if(choice3==9)
                                break;
                            else
                            {
                                cout<<"How many plates would you like to have? ";
                                cin>>choice4;
                                while(1)
                                {
                                    if(choice4<0)
                                    {
                                        cout<<"Incorrect choice. Enter correct choice number: ";
                                        cin>>choice4;
                                    }
                                    else
                                    {
                                        break;
                                    }
                                }
                            }
                            
                            if(choice3==1)
                            {
                                d="Aalu Tiki Burger";
                                t[menutable].b[(t[menutable].cnt)].set(d, choice4, 80);
                                t[menutable].cnt++;
                            }
                            else if(choice3==2)
                            {
                                d="Classic Burger";
                                t[menutable].b[(t[menutable].cnt)].set(d, choice4, 100);
                                t[menutable].cnt++;
                            }
                            else if(choice3==3)
                            {
                                d="Chilli Burger";
                                t[menutable].b[(t[menutable].cnt)].set(d, choice4, 120);
                                t[menutable].cnt++;
                            }
                            else if(choice3==4)
                            {
                                d="Classic Bacon & Cheese Burger";
                                t[menutable].b[(t[menutable].cnt)].set(d, choice4, 145);
                                t[menutable].cnt++;
                            }
                            else if(choice3==5)
                            {
                                d="Cheese Burger";
                                t[menutable].b[(t[menutable].cnt)].set(d, choice4, 160);
                                t[menutable].cnt++;
                            }
                            else if(choice3==6)
                            {
                                d="Veggie Burger";
                                t[menutable].b[(t[menutable].cnt)].set(d, choice4, 140);
                                t[menutable].cnt++;
                            }
                            else if(choice3==7)
                            {
                                d="Turkey Burger";
                                t[menutable].b[(t[menutable].cnt)].set(d, choice4, 155);
                                t[menutable].cnt++;
                            }
                            else if(choice3==8)
                            {
                                d="Mac'D Special";
                                t[menutable].b[(t[menutable].cnt)].set(d, choice4, 250);
                                t[menutable].cnt++;
                            }
                        }
                        break;
                    }
                    case 6:
                    {
                        cout<<"\t\t\tBEVERAGES\n";
                        cout<<"\t\t\t---------\n\n\n";
                        cout<<left<<setfill(' ')<<setw(45)<<"  1. Coke"<<"40"<<endl;
                        cout<<left<<setfill(' ')<<setw(45)<<"  2. Thumps Up"<<"30"<<endl;
                        cout<<left<<setfill(' ')<<setw(45)<<"  3. Seven Up"<<"30"<<endl;
                        cout<<left<<setfill(' ')<<setw(45)<<"  4. Fanta"<<"25"<<endl;
                        cout<<left<<setfill(' ')<<setw(45)<<"  5. Sprite"<<"25"<<endl;
                        cout<<left<<setfill(' ')<<setw(45)<<"  6. Mocktail"<<"100"<<endl;
                        cout<<"  7. Back to menu\n\n";
                        
                        while(1)
                        {
                            cout<<"\nWhat would you like to have? Select choice number: ";
                            cin>>choice3;
                            
                            while(1)
                            {
                                if(choice3<1 || choice3>7)
                                {
                                    cout<<"Incorrect choice. Enter correct choice number: ";
                                    cin>>choice3;
                                }
                                else
                                {
                                    break;
                                }
                            }
                            
                            if(choice3==7)
                                break;
                            else
                            {
                                cout<<"How many drinks would you like to have? ";
                                cin>>choice4;
                                while(1)
                                {
                                    if(choice4<0)
                                    {
                                        cout<<"Incorrect choice. Enter correct choice number: ";
                                        cin>>choice4;
                                    }
                                    else
                                    {
                                        break;
                                    }
                                }
                            }
                            
                            if(choice3==1)
                            {
                                d="Coke";
                                t[menutable].b[(t[menutable].cnt)].set(d, choice4, 40);
                                t[menutable].cnt++;
                            }
                            else if(choice3==2)
                            {
                                d="Thumps Up";
                                t[menutable].b[(t[menutable].cnt)].set(d, choice4, 30);
                                t[menutable].cnt++;
                            }
                            else if(choice3==3)
                            {
                                d="Seven Up";
                                t[menutable].b[(t[menutable].cnt)].set(d, choice4, 30);
                                t[menutable].cnt++;
                            }
                            else if(choice3==4)
                            {
                                d="Fanta";
                                t[menutable].b[(t[menutable].cnt)].set(d, choice4, 25);
                                t[menutable].cnt++;
                            }
                            else if(choice3==5)
                            {
                                d="Sprite";
                                t[menutable].b[(t[menutable].cnt)].set(d, choice4, 25);
                                t[menutable].cnt++;
                            }
                            else if(choice3==6)
                            {
                                d="Mocktail";
                                t[menutable].b[(t[menutable].cnt)].set(d, choice4, 100);
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
    t[menutable].print(menutable);    
}

void setcnt(int menutable)
{
    t[menutable].set();
}

int main()
{
    int t[5]={1,2,3,4,5}, booked[5]={}, table;
    int tblcnt=0, flag=0, flag2=0;
    int choice;
    cout<<"\t\t\t\t\t\tSARGAM FOOD ZONE\n";
    cout<<"\t\t\t\t\t\t----------------\n\n\n\n";
    cout<<"\t\t\t\t\t\t   Welcome!!!\n\n";
    cout<<"Greetings of the day!\n";
    
    while(1)
    {
        cout<<"What would you like to go for?\n";
        cout<<"   1. Book a table.\n";
        cout<<"   2. Get the menu.\n";
        cout<<"   3. Get the bill.\n";
        cout<<"   4. Exit.\n\n";
        cout<<"Enter choice number: ";
        cin>>choice;
        while(1)
        {
            if(choice<1 || choice>4)
            {
                cout<<"Incorrect choice. Enter correct choice number: ";
                cin>>choice;
            }
            else
            {
                break;
            }
        }
        
        int table, cnt=0, menutable, m=0;
        switch(choice)
        {
            case 1:
            {
                for(int i=0; i<5; i++)
                {
                    if(booked[i]!=0)
                    {
                        cnt++;
                    }
                }
                if(cnt==5)
                {
                    cout<<"\nOops, all the tables are booked. You need to wait for sometime.\n";
                    cout<<"Thank you for your co-operation.\n\n\n";
                    break;
                }
                else
                {
                    cout<<"Which table number would you like to book?\n";
                    cout<<"Available tables are:\n";
                    for(int i=0; i<5; i++)
                    {
                        int flag=0;
                        for(int j=0; j<tblcnt; j++)
                        {
                            if(t[i]==booked[j])
                            {
                                flag=1;
                                cnt++;
                                break;
                            }
                        }
                        if(flag!=1)
                        {
                            cout<<t[i]<<" ";
                        }
                    }
                
                    cout<<"\nEnter correct choice: ";
                    cin>>table;
                    while(1)
                    {
                        if((table<1 || table>5) || (booked[0]==table) || (booked[1]==table) || (booked[2]==table) || (booked[3]==table) || (booked[4]==table))
                        {
                            cout<<"Incorrect choice. Enter correct choice number: ";
                            cin>>table;
                        }
                        else
                        {
                            cout<<"Table number "<<table<<" is booked.\n\n";
                            booked[tblcnt]=table;
                            tblcnt++;
                            setcnt(table-1);
                            break;
                        }
                    }
                }
            break;
            }
            
            case 2:
            {
                m=0;
                cout<<"Which is your table number? ";
                cin>>menutable;
                for(int i=0; i<5; i++)
                {
                    if(menutable==booked[i])
                    {
                        m=1;
                    }
                }
                
                if(m!=1)
                {
                    while(1)
                    {
                        if(menutable<1 || menutable>5)
                        {
                            cout<<"Incorrect choice. Please enter corect choice: ";
                            cin>>menutable;
                            for(int i=0; i<5; i++)
                            {
                                if(menutable==booked[i])
                                {
                                    m=1;
                                }
                            }
                        }
                        else
                        {
                            cout<<"Your table is not booked. Please book the table first.\n\n";
                            break;
                        }
                    }
                }
                if(m==1)
                    menu(menutable-1);
            
                break;
            }
            case 3:
            {
                m=0;
                cout<<"Which is your table number? ";
                cin>>menutable;
                for(int i=0; i<5; i++)
                {
                    if(menutable==booked[i])
                    {
                        m=1;
                    }
                }
                flag2=0;
                if(m!=1)
                {
                    while(1)
                    {
                        flag2=0;
                        if(menutable<1 || menutable>5)
                        {
                            cout<<"Incorrect choice. Please enter corect choice: ";
                            cin>>menutable;
                            for(int i=0; i<5; i++)
                            {
                                if(menutable==booked[i])
                                {
                                    m=1;
                                }
                            }
                        }
                        else
                        {
                            cout<<"Your table is not booked. Please book the table first.\n\n";
                            flag2=1;
                            break;
                        }
                    }
                }
                if(flag2==1)
                {
                    break;
                }
                else
                {
                    if(m==1)
                        printbill(menutable-1);
                    
                    break;
                }
            }
            case 4:
            {
                cout<<"THANK YOU!!! VISIT AGAIN!!!\n";
                return 0;
            }
        }
    }
    return 0;
}
