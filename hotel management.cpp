#include<iostream>
using namespace std;

int main()
{
    int quant;
    int choice;

    //QUANTITY
    int Qrooms = 0;
    int Qpasta = 0;
    int Qburger = 0;
    int Qnoodle = 0;
    int Qshake = 0;
    int Qchicken = 0;

    //ITEMS SOLD
    int Srooms =0;
    int Spasta = 0;
    int Sburger = 0;
    int Snoodle = 0;
    int Sshake = 0;
    int Schicken = 0;

    //TOTAL PRICE OF ITEMS
    int Total_rooms = 0;
    int Total_pasta = 0;
    int Total_burger = 0;
    int Total_noodle = 0;
    int Total_shake = 0;
    int Total_chicken = 0;


    cout<< "\n\t Quantity of items we have ";
    cout<< "\n Rooms available:";
    cin>>Qrooms;
    cout<< "\n Quantity of pasta :";
    cin>>Qpasta;
    cout<< "\n Quantity of burger :";
    cin>>Qburger;
    cout<< "\n Quantity of noodles :";
    cin>>Qnoodle;
    cout<< "\n Quantity of shake :";
    cin>>Qshake;
    cout<< "\n Quantity of chicken-roll :";
    cin>>Qchicken;

    m:
    cout<< "\n\t\t\t Please select from the menu options ";
    cout<< "\n\n1) Rooms";
    cout<< "\n2) Pasta";
    cout<< "\n3) Burger";
    cout<< "\n4) Noodles";
    cout<< "\n5) Shake";
    cout<< "\n6) Chicken-roll";
    cout<< "\n7) Information regarding sales and collection";
    cout<< "\n8) Exit";

    cout<< "\n\n Please enter your choice: ";
    cin>>choice;

    switch(choice)
    {
        case 1:
            cout<< "\n\n Enter the number of rooms you want: ";

            cin>>quant;
            if(Qrooms-Srooms >= quant)
            {
                Srooms = Srooms + quant;
                Total_rooms = Total_rooms + (quant * 1200);
                cout<< "\n\n\t\t"<<quant<<" rooms have been alloted to you";
            }
            else
            {
                cout<<"\n\tOnly "<<Qrooms-Srooms<<" are remaining in the hotel.";
            }
            break;

            case 2:
            cout<< "\n\n Enter the number of pasta you want: ";

            cin>>quant;
            if(Qpasta-Spasta >= quant)
            {
                Spasta = Spasta + quant;
                Total_pasta = Total_pasta + (quant * 250);
                cout<< "\n\n\t\t"<<quant<<" pasta is your order!";
            }
            else
            {
                cout<<"\n\tOnly "<<Qpasta-Spasta<<" are remaining in the hotel.";
            }
            break;

            case 3:
            cout<< "\n\n Enter the number of burger you want: ";

            cin>>quant;
            if(Qburger-Sburger >= quant)
            {
                Sburger = Sburger + quant;
                Total_burger = Total_burger + (quant * 120);
                cout<< "\n\n\t\t"<<quant<<" burger is your order!";
            }
            else
            {
                cout<<"\n\tOnly "<<Qburger-Sburger<<" are remaining in the hotel.";
            }
            break;

            case 4:
            cout<< "\n\n Enter the number of noodles you want: ";

            cin>>quant;
            if(Qnoodle-Snoodle >= quant)
            {
                Snoodle = Snoodle + quant;
                Total_noodle = Total_noodle + (quant * 150);
                cout<< "\n\n\t\t"<<quant<<" noodles is your order!";
            }
            else
            {
                cout<<"\n\tOnly "<<Qnoodle-Snoodle<<" are remaining in the hotel.";
            }
            break;

            case 5:
            cout<< "\n\n Enter the number of shake you want: ";

            cin>>quant;
            if(Qshake-Sshake >= quant)
            {
                Sshake = Sshake + quant;
                Total_shake = Total_shake + (quant * 200);
                cout<< "\n\n\t\t"<<quant<<" shakes is your order!";
            }
            else
            {
                cout<<"\n\tOnly "<<Qshake-Sshake<<" are remaining in the hotel.";
            }
            break;

             case 6:
            cout<< "\n\n Enter the number of chicken-roll you want: ";

            cin>>quant;
            if(Qchicken-Schicken >= quant)
            {
                Schicken = Schicken + quant;
                Total_chicken = Total_chicken + (quant * 180);
                cout<< "\n\n\t\t"<<quant<<" chicken-rolls is your order!";
            }
            else
            {
                cout<<"\n\tOnly "<<Qchicken-Schicken<<" are remaining in the hotel.";
            }
            break;


             case 7:
                cout<< "\n\t\tDetails of sales and collection ";
                cout<<"\n\n Number of rooms we had: "<<Qrooms;
                cout<<"\n\n Number of rooms we have for rent: "<<Srooms;
                cout<<"\n\n Remaining rooms: "<< Qrooms-Srooms;
                cout<<"\n\n Total rooms collection of the day: "<<Total_rooms;

                cout<<"\n\n Number of pasta we had: "<<Qpasta;
                cout<<"\n\n Number of pasta we have for rent: "<<Spasta;
                cout<<"\n\n Remaining pasta: "<< Qpasta-Spasta;
                cout<<"\n\n Total pasta collection of the day: "<<Total_pasta;

                cout<<"\n\n Number of burger we had: "<<Qburger;
                cout<<"\n\n Number of burger we have for rent: "<<Sburger;
                cout<<"\n\n Remaining burger: "<< Qburger-Sburger;
                cout<<"\n\n Total burger collection of the day: "<<Total_burger;

                cout<<"\n\n Number of noodle we had: "<<Qnoodle;
                cout<<"\n\n Number of noodle we have for rent: "<<Snoodle;
                cout<<"\n\n Remaining noodle: "<< Qnoodle-Snoodle;
                cout<<"\n\n Total noodle collection of the day: "<<Total_noodle;

                cout<<"\n\n Number of shake we had: "<<Qshake;
                cout<<"\n\n Number of shake we have for rent: "<<Sshake;
                cout<<"\n\n Remaining shake: "<< Qshake-Sshake;
                cout<<"\n\n Total shake collection of the day: "<<Total_shake;

                cout<<"\n\n Number of chicken-roll we had: "<<Qchicken;
                cout<<"\n\n Number of chicken-roll we have for rent: "<<Schicken;
                cout<<"\n\n Remaining chicken-roll: "<< Qchicken-Schicken;
                cout<<"\n\n Total chicken-roll collection of the day: "<<Total_chicken;

                cout<<"\n\n\nTotal collection for the day is: "<<Total_rooms + Total_pasta + Total_burger + Total_noodle + Total_shake + Total_chicken;
                cout<<endl;

             case 8:
                exit(0);

             default:
                cout<<"\n Please select the numbers mentioned above!";
    }

    goto m;


    return 0;
}
