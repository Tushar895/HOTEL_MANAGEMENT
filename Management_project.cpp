#include<iostream>
#include<conio.h>
using namespace std;
 
 int main()
 {

     int quant, choice;
     int Qrooms=0, Qpasta=0, Qburger=0, Qnoodles=0, Qshake=0,Qpizza=0;
     int Srooms=0, Spasta=0, Sburger=0, Snoodles=0, Sshake=0,Spizza=0;
    
     int Total_rooms=0, Total_pasta=0, Total_burger=0, Total_noodles=0,Total_shake=0,Total_pizza=0;
     


     cout<<"\n\t Quantity of items we have";
     cout<<"\n Rooms Available";
     cin>>Qrooms;
     cout<<"\n Quantity of pasta";
     cin>>Qpasta;
     cout<<"\n Quantity of burger";
     cin>>Qburger;
     cout<<"\n Quantity of noodle";
     cin>>Qnoodles;
     cout<<"\n Quantity of Shake";
     cin>>Qshake;
     cout<<"\n Quantity of pizza";
     cin>>Qpizza;



    m:
    cout<<"\n\t\t\t please select from the menu options";
    cout<<"\n\n 1) rooms"; 
    cout<<"\n 2)pasta";
    cout<<"\n 3)burger";
    cout<<"\n 4)noodles";
    cout<<"\n 5)shake";
    cout<<"\n 6)pizza";
    cout<<"\n 7) Informatation regarding sales and collections ";
    cout<<"\n 8)Exit";

          cout<<"\n\n Please enter your choice";
          cin>>choice;
          
          
          
	switch(choice)
{
    case 1:
       cout<<"\n\n Enter the number of rooms you want";
       cin>>quant;
       if(Qrooms-Srooms >=quant)
       {
           Srooms=Srooms+quant;
           Total_rooms=(Total_rooms+quant*1200); 
           cout<<"\n\n\t\t"<<quant<<"room/rooms have been alloted to you";

       }
       else{
            cout<<"\n\tOnly"<<Qrooms-Srooms<< "rooms remaining in hotel" ;
            break;
       }


       case 2:
       cout<<"\n\n Enter Pasta Quantity";
       cin>>quant;
       if(Qpasta-Spasta >=quant)
       {
           Spasta=Spasta+quant;
           Total_pasta =(Total_pasta+quant*250); 
           cout<<"\n\n\t\t"<<quant<<"Pasta is the order";

       }
       else{
            cout<<"\n\tOnly"<<Qpasta-Spasta<< "Pasta remaining in hotel" ;
            break;
       }


       case 3:
       cout<<"\n\n Enter the number of Burgers you want";
       cin>>quant;

       if(Qburger-Sburger >=quant)
       {
           Sburger=Sburger+quant;
           Total_burger=(Total_burger+quant*120); 
           cout<<"\n\n\t\t"<<quant<<"Burger is  the order";

       }
       else{
            cout<<"\n\tOnly"<<Qburger-Sburger<< "burgers remaining in hotel" ;
            break;
       }


 case 4:
       cout<<"\n\n Enter the number of Noodles you want";
       cin>>quant;

       if(Qnoodles-Snoodles >=quant)
       {
           Snoodles=Snoodles+quant;
           Total_noodles=(Total_noodles+quant*140); 
           cout<<"\n\n\t\t"<<quant<<"Noodles is  the order";

       }
       else{
            cout<<"\n\tOnly"<<Qnoodles-Snoodles<< "Noodles remaining in hotel" ;
            break;
       }


        case 5:
       cout<<"\n\n Enter the shakes of Burgers you want";
       cin>>quant;

       if(Qshake-Sshake >=quant)
       {
           Sshake=Sshake+quant;
           Total_shake=(Total_shake+quant*120); 
           cout<<"\n\n\t\t"<<quant<<"Shake is  the order";

       }
       else{
            cout<<"\n\tOnly"<<Qshake-Sshake<< " Shakes remaining in hotel" ;
            break;
       }




        case 6:
       cout<<"\n\n Enter the number of Pizza you want";
       cin>>quant;

       if(Qpizza-Spizza >=quant)
       {
           Spizza=Spizza+quant;
           Total_pizza=(Total_pizza+quant*150); 
           cout<<"\n\n\t\t"<<quant<<"Pizza is  the order";

       }
       else{
            cout<<"\n\tOnly"<<Qpizza-Spizza<< "Pizza remaining in hotel" ;
            break;
       }


      case 7:

        cout<<"\n\t\t Details of sales and collection";

        cout<<"\n\n no of rooms we had: "<<Qrooms;
        cout<<"\n\n no of rooms we gave for rent: "<<Srooms;
        cout<<"\n\n remaining Rooms: "<<Qrooms-Srooms;
        cout<<"\n\ntotal room collection for the day:"<<Total_rooms;



        cout<<"\n\n no of pasta we had: "<<Qpasta;
        cout<<"\n\n no of pasta we sold: "<<Spasta;
        cout<<"\n\n remaining pasta: "<<Qpasta-Spasta;
        cout<<"\n\ntotal pasta collection for the day:"<<Total_pasta;


        cout<<"\n\n no of Burgers we had: "<<Qburger;
        cout<<"\n\n no of burgers we sold: "<<Sburger;
        cout<<"\n\n remaining Burgers: "<<Qburger-Sburger;
        cout<<"\n\ntotal Burger collection for the day:"<<Total_burger;



        cout<<"\n\n no of Noodles  we had: "<<Qnoodles;
        cout<<"\n\n no of Noodles we sold: "<<Snoodles;
        cout<<"\n\n remaining Noodles: "<<Qnoodles-Snoodles;
        cout<<"\n\ntotal Noodles collection for the day:"<<Total_noodles;



        cout<<"\n\n no of shakes we had: "<<Qshake;
        cout<<"\n\n no of shakes we sold: "<<Sshake;
        cout<<"\n\n remaining shakes: "<<Qshake-Sshake;
        cout<<"\n\ntotal shakes collection for the day:"<<Total_shake;



        cout<<"\n\n no of pizza we had: "<<Qpizza;
        cout<<"\n\n no of pizza we sold: "<<Spizza;
        cout<<"\n\n remaining pizza: "<<Qpizza-Spizza;
        cout<<"\n\ntotal pizza collection for the day:"<<Total_pizza;
		
		cout<<"\n\n\n Total collection for the day: "<<Total_rooms+ Total_pasta+Total_burger+Total_noodles+ Total_shake+ Total_pizza;
	     	break;

        case 8:
            exit(0);

            deafault:
            cout<<"\n please select the numbers mentioned above";

    }
 
    goto m;
       getch();
    
}



     



