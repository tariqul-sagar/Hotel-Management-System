#include<bits/stdc++.h>
using namespace std;

string s;
int deluxe =100;
int atrium =200;
int  business =300;
int premier =400;
int standard =500;
int r,i,e,h,room1,age1,sum;
char name1[20],residence1[20],cheakin1[20],cheakout1[20],number1[20];

struct node
{
    int room,age;
    char name[20],number[20];
    char residence[20];
    char cheakin[20];
    char cheakout[20];
    int bill;
    struct node *next;
};

struct node *head1=NULL,*head2=NULL,*head3=NULL,*head4=NULL,*head5=NULL,*temp,*temp1,*s0,*s1,*s2,*s3,*s4,*cur,*pre;

void deluxe1();
void premier1();
void atrium1();
void business1();
void standard1();
void dis_deluxe();
void dis_atrium();
void dis_business();
void dis_premier();
void dis_standard();
void details();
void book_atrium();
void book_business();
void book_duluxe();
void book_premier();
void book_standard();
void display();
void cancel();
void start();


int main()
{

    while(1)
    {
        system("cls");
        string keyword;
        cout<<endl;
        cout<<"                              *       *      * * * *     * * * * *    * * * *    *            "<<endl;
        cout<<"                              *       *     *       *        *        *          *            "<<endl;
        cout<<"                              * * * * *     *       *        *        * * * *    *            "<<endl;
        cout<<"                              *       *     *       *        *        *          *            "<<endl;
        cout<<"                              *       *      * * * *         *        * * * *    * * * *      "<<endl;
        cout<<endl<<endl;


        cout<<"     * * * *            **         * * * *       * * * * *       * * * *         * * * * *      *           *    "<<endl;
        cout<<"     *       *         *  *        *        *        *          *        *      *         *     * *         *    "<<endl;
        cout<<"     *       *        *    *       *        *        *          *               *         *     *   *       *    "<<endl;
        cout<<"     * * * *         *  * * *      *        *        *           * * * *        *         *     *     *     *    "<<endl;
        cout<<"     *  *           *        *     *        *        *                  *       *         *     *       *   *    "<<endl;
        cout<<"     *     *       *          *    *       *         *         *        *       *         *     *         * *    "<<endl;
        cout<<"     *        *   *            *   * * * *       * * * * *       * * * *         * * * * *      *           *    "<<endl;

        cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;

        cout<<"If you want to ENTER into the project type  'enter'"<<endl<<endl;

        cout<<"If you want to close the project type 'close'"<<endl<<endl;

        cin>>s;

        if(s=="enter")
        {
            start();
        }
        else if(s=="close")
        {
            system("cls");
            cout<<"                                       T H A N K S    F O R   U S I N G  O U R   S Y S T E M   "<<endl<<endl<<endl<<endl;
            break;

        }
    }
    return 0;
}
void deluxe1()
{
    system("cls");
    cout<<endl<<"DELUXE ROOMS: "<<endl<<endl;

    cout<<"SERVICES FOR DELUXE ROOMS:  "<<endl;
    cout<<"Featuring one queen or two twin beds and three-piece bathrooms"<<endl;
    cout<<"Guests can put final touches on projects at the work desk, enjoy a drink from the minibar, and relax in the plush armchair"<<endl;
    cout<<"1. Electronic safe"<<endl;
    cout<<"2. Free Wi-Fi"<<endl;
    cout<<"3. Individual climate control"<<endl;
    cout<<"4. Minibar and room service (available 24 hours)"<<endl;
    cout<<"4. Phone with direct international dialing"<<endl<<endl<<endl;

    cout<<"You have to pay 4000 TK for one day and one night "<<endl<<endl<<endl;

    cout<<"If you want to book deluxe room type 'yes' otherwise 'no'"<<endl;
    cin>>s;
    getchar();
    if(s=="yes")
    {
        book_duluxe();
    }

}

void premier1()
{
    system("cls");
    cout<<endl<<"PREMIER ROOMS: "<<endl<<endl;
    cout<<"Our Premier Room makes for the perfect urban oasis with its great views, an ensuite bathroom and a well-equipped work area."<<endl;
    cout<<"1.28 square meter large room"<<endl;
    cout<<"2.Choice of king sized bed or twin beds"<<endl;
    cout<<"3.Pool view or City view from the room"<<endl;
    cout<<"4.Electronic safe"<<endl;
    cout<<"5.Wired and wireless Internet access"<<endl;
    cout<<"6.Ensuite bathroom with separate shower and long bathtub (in twin-bedded rooms)"<<endl;
    cout<<"7.Executive writing table and stationery set."<<endl;
    cout<<"8.32” LCD television with local and cable channel."<<endl;
    cout<<"9.Fully stocked minibar."<<endl;
    cout<<"10.Complimentary bottled water."<<endl;
    cout<<"11.Daily newspaper."<<endl<<endl<<endl;

    cout<<"You have to pay 3000 TK for one day and one night "<<endl<<endl<<endl;

    cout<<"If you want to book premier room type 'yes' otherwise 'no'"<<endl;
    cin>>s;
    getchar();
    if(s=="yes")
    {
        book_premier();
    }


}

void atrium1()
{
    system("cls");
    cout<<endl<<"ATRIUM ROOMS"<<endl<<endl;

    cout<<"Atrium Rooms offer one king or two double beds, elegant linens and comfortable armchairs"<<endl;
    cout<<"Free high-speed, wireless Internet so you can stay connected and productive"<<endl;
    cout<<"1. Electronic safe"<<endl;
    cout<<"2. Free Wi-Fi"<<endl;
    cout<<"3. Individual climate control"<<endl;
    cout<<"4. Minibar and room service (available 24 hours)"<<endl;
    cout<<"4. Phone with direct international dialing"<<endl<<endl<<endl;

    cout<<"You have to pay 6000 TK for one day and one night "<<endl<<endl<<endl;

    cout<<"If you want to book atrium room type 'yes' otherwise 'no'"<<endl;
    cin>>s;
    getchar();
    if(s=="yes")
    {
        book_atrium();
    }


}

void business1()
{
    system("cls");
    cout<<endl<<"BUSINESS CLASS ROOMS"<<endl<<endl;

    cout<<"Corporate travelers love our Business Class Rooms"<<endl;

    cout<<"1. Electronic safe"<<endl;
    cout<<"2. Free Wi-Fi"<<endl;
    cout<<"3. Individual climate control"<<endl;
    cout<<"4. Minibar and room service (available 24 hours)"<<endl;
    cout<<"4. Phone with direct international dialing"<<endl<<endl<<endl;

    cout<<"ADDITIONAL BUSINESS CLASS AMENITIES"<<endl;
    cout<<"Access to Business Class Lounge"<<endl;
    cout<<"Airport transfer"<<endl;
    cout<<"All-day refreshment in the Business Class Lounge"<<endl<<endl<<endl;

    cout<<"You have to pay 5000 TK for one day and one night "<<endl<<endl<<endl;

    cout<<"If you want to book business room type 'yes' otherwise 'no'"<<endl;
    cin>>s;
    getchar();
    if(s=="yes")
    {
        book_business();
    }

}

void standard1()
{
    system("cls");
    cout<<endl<<"STANDARD ROOMS: "<<endl<<endl;
    cout<<"Our comfortable Standard Room comes with city views and convenient amenities including cable television channels, to offer you a pleasant stay."<<endl;
    cout<<"1.23 square meter large room"<<endl;
    cout<<"2.Queen-sized Bed"<<endl;
    cout<<"3.Executive writing table and stationery set."<<endl;
    cout<<"4.Ensuite bathroom."<<endl;
    cout<<"5.LCD television with local and cable channels."<<endl;
    cout<<"6.Wired and wireless Internet access."<<endl;
    cout<<"7.Secure key-card access."<<endl;
    cout<<"8.Daily newspaper on request"<<endl<<endl<<endl;

    cout<<"You have to pay 4200 TK for one day and one night "<<endl<<endl<<endl;

    cout<<"If you want to book standard room type 'yes' otherwise 'no'"<<endl;
    cin>>s;
    getchar();
    if(s=="yes")
    {
        book_standard();
    }

}

void dis_deluxe()
{

    temp1=head1;
    if(head1==NULL)
    {
        cout<<"You haven't booked any deluxe room yet "<<endl;
    }
    else
    {
        cout<<endl<<"Here is the details of booked deluxe room"<<endl;
        while(temp1!=NULL)
        {
            cout<<"Name of customer : "<<temp1->name<<endl;
            cout<<"Age of customer : "<<temp1->age<<endl;
            cout<<"Cheakin date of customer "<<temp1->cheakin<<endl;
            cout<<"Cheakout date of customer "<<temp1->cheakout<<endl;
            cout<<"Residence of cusstomer : "<<temp1->residence<<endl;
            cout<<"Phone number of customer : "<<temp1->number<<endl;
            cout<<"customer's booked deluxe room no is : "<<temp1->room<<endl<<endl;

            temp1=temp1->next;
        }
    }
}

void dis_atrium()
{

    temp=head2;
    if(head2==NULL)
    {
        cout<<"You haven't booked any atrium room yet "<<endl;
    }
    else
    {
        cout<<endl<<"Here is the details of booked atrium room"<<endl;
        while(temp!=NULL)
        {
            cout<<"Name of customer : "<<temp->name<<endl;
            cout<<"Age of customer : "<<temp->age<<endl;
            cout<<"Cheakin date of customer "<<temp->cheakin<<endl;
            cout<<"Cheakout date of customer "<<temp->cheakout<<endl;
            cout<<"Residence of cusstomer : "<<temp->residence<<endl;
            cout<<"Phone number of customer : "<<temp->number<<endl;
            cout<<"customer's booked atrium room no is : ";
            cout<<temp->room<<"."<<endl;

            temp=temp->next;
        }
    }
}

void dis_business()
{

    temp=head3;
    if(head3==NULL)
    {
        cout<<"You haven't booked any business room yet "<<endl;
    }
    else
    {
        cout<<endl<<"Here is the details of booked business class room"<<endl;
        while(temp!=NULL)
        {
            cout<<"Name of customer : "<<temp->name<<endl;
            cout<<"Age of customer : "<<temp->age<<endl;
            cout<<"Cheakin date of customer "<<temp->cheakin<<endl;
            cout<<"Cheakout date of customer "<<temp->cheakout<<endl;
            cout<<"Residence of cusstomer : "<<temp->residence<<endl;
            cout<<"Phone number of customer : "<<temp->number<<endl;
            cout<<"customer's booked business room no is : ";
            cout<<temp->room<<"."<<endl;
            temp=temp->next;
        }
    }
}
void dis_premier()
{

    temp=head4;
    if(head4==NULL)
    {
        cout<<"You haven't booked any premier room yet "<<endl;
    }
    else
    {
        cout<<endl<<"Here is the details of booked premier room"<<endl;
        while(temp!=NULL)
        {
            cout<<"Name of customer : "<<temp->name<<endl;
            cout<<"Age of customer : "<<temp->age<<endl;
            cout<<"Cheakin date of customer "<<temp->cheakin<<endl;
            cout<<"Cheakout date of customer "<<temp->cheakout<<endl;
            cout<<"Residence of cusstomer : "<<temp->residence<<endl;
            cout<<"Phone number of customer : "<<temp->number<<endl;
            cout<<"customer's booked premier room no is : ";
            cout<<temp->room<<"."<<endl;
            temp=temp->next;
        }
    }
}
void dis_standard()
{

    temp=head5;
    if(head5==NULL)
    {
        cout<<"You haven't booked any standard room yet "<<endl;
    }
    else
    {
        cout<<endl<<"Here is the details of booked standard room"<<endl;
        while(temp!=NULL)
        {
            cout<<"Name of customer : "<<temp->name<<endl;
            cout<<"Age of customer : "<<temp->age<<endl;
            cout<<"Cheakin date of customer "<<temp->cheakin<<endl;
            cout<<"Cheakout date of customer "<<temp->cheakout<<endl;
            cout<<"Residence of customer : "<<temp->residence<<endl;
            cout<<"Phone number of customer : "<<temp->number<<endl;
            cout<<"your booked standard room no is : ";
            cout<<temp->room<<"."<<endl;
            temp=temp->next;
        }
    }
}

void details()
{
    system("cls");
    while(1)
    {
        system("cls");
        cout<<"Which room's details you want to see"<<endl<<endl;
        string room;
        cout<<"    For DELEUXE room type 'deluxe'"<<endl;
        cout<<"    For ATRIUM room type 'atrium'"<<endl;
        cout<<"    For BUSINESS CLASS room type 'business'"<<endl;
        cout<<"    For PREMIER room type 'premier'"<<endl;
        cout<<"    For STANDARD room type 'standard'"<<endl<<endl<<endl;

        cout<<"If you want to go back to the previous page type 'back'"<<endl;


        cin>>room;

        if(room=="deluxe")
        {
            deluxe1();
        }
        else if(room=="atrium")
        {
            atrium1();
        }
        else if(room=="business")
        {
            business1();
        }
        else if(room=="premier")
        {
            premier1();
        }
        else if(room=="standard")
        {
            standard1();
        }
        else if(room=="back")
        {
            break;
        }
        else
        {
            system("cls");
            cout<<"You entered a wrong keyword...please try again"<<endl;
            continue;
        }
        system("cls");
s:
        cout<<endl<<"If you want to see more details about room type 'yes' otherwise type 'no'"<<endl;
        cin>>s;
        if(s=="yes")
        {
            continue;
        }
        else if(s=="no")
        {
            break;
        }
        else
        {
            system("cls");
            cout<<"Sorry you entered a wrong keyword...please try again"<<endl;
            goto s;
        }

    }

}

void book_duluxe()
{
    system("cls");

    sum=0;

    cout<<"Enter your name"<<endl;
    fgets(name1,20,stdin);
    cout<<"Enter your residence"<<endl;
    fgets(residence1,20,stdin);


    cout<<"Enter cheakin Date"<<endl;
    fgets(cheakin1,20,stdin);

    cout<<"Enter cheakout Date"<<endl;
    fgets(cheakout1,20,stdin);

    cout<<"Enter your number"<<endl;
    fgets(number1,20,stdin);


    cout<<"Enter How many days you want to stay"<<endl;
    cin>>e;

    cout<<"Enter how many room you want to book"<<endl;
    cin>>r;

    cout<<"Enter your Age"<<endl;
    cin>>age1;

    system("cls");

    cout<<endl<<"Congratulations!!!"<<endl<<endl;
    cout<<"You have successfully booked "<<r<<" deluxe room"<<endl;

    for(i=1; i<=r; i++)
    {
        struct node *newnode;
        newnode=(struct node*)malloc(sizeof(struct node));

        strcpy(newnode->name,name1);

        strcpy(newnode->number,number1);
        newnode->age=age1;
        strcpy(newnode->residence,residence1);
        strcpy(newnode->cheakin,cheakin1);
        strcpy(newnode->cheakout,cheakout1);

        sum+=4000;

        deluxe++;
        newnode->room=deluxe;
        cout<<"Your booked room number "<<deluxe<<"."<<endl;

        if(head1==NULL)
        {
            head1=newnode;
            head1->next=NULL;
            s0=head1;
        }
        else
        {
            s0->next=newnode;
            s0=newnode;
            s0->next=NULL;
        }
    }
    cout<<endl;
    cout<<name1<<" have to pay "<<sum<<" taka without tax"<<endl;
    cout<<name1<<" have also to pay 10% tax = "<<(10*sum)/100<<" taka";

    cout<<endl<<name1<<" have to pay all total(with tax) "<<sum+(10*sum/100)<<" taka"<<endl;

    cout<<endl<<"Type 'ok' to continue"<<endl;
    cin>>s;

}

void book_atrium()
{
    system("cls");

    sum=0;

    cout<<"Enter your name"<<endl;
    fgets(name1,20,stdin);
    cout<<"Enter your residence"<<endl;
    fgets(residence1,20,stdin);


    cout<<"Enter cheakin Date"<<endl;
    fgets(cheakin1,20,stdin);

    cout<<"Enter cheakout Date"<<endl;
    fgets(cheakout1,20,stdin);

    cout<<"Enter your number"<<endl;
    fgets(number1,20,stdin);


    cout<<"Enter How many days you want to stay"<<endl;
    cin>>e;

    cout<<"Enter how many room you want to book"<<endl;
    cin>>r;

    cout<<"Enter your Age"<<endl;
    cin>>age1;

    system("cls");

    cout<<endl<<"Congratulations!!!"<<endl<<endl;
    cout<<"You have successfully booked "<<r<<" deluxe room"<<endl;

    for(i=1; i<=r; i++)
    {
        struct node *newnode;
        newnode=(struct node*)malloc(sizeof(struct node));

        strcpy(newnode->name,name1);

        strcpy(newnode->number,number1);
        newnode->age=age1;
        strcpy(newnode->residence,residence1);
        strcpy(newnode->cheakin,cheakin1);
        strcpy(newnode->cheakout,cheakout1);
        atrium++;
        newnode->room=atrium;
        cout<<"Your booked atrium room number "<< newnode->room<<"."<<endl<<endl;

        sum+=6000;

        newnode->next=NULL;
        if(head2==NULL)
        {
            head2=newnode;
            s1=head2;
        }
        else
        {
            s1->next=newnode;
            s1=newnode;
        }
    }
    cout<<name1<<" have to pay "<<sum<<" taka"<<endl;

    cout<<name1<<" have also to pay 10% tax = "<<(10*sum)/100<<" taka";

    cout<<endl<<name1<<" have to pay all total(with tax) "<<sum+(10*sum/100)<<" taka"<<endl;

    cout<<endl<<"Type ok to continue"<<endl;
    cin>>s;

}

void book_business()
{
    system("cls");

    sum=0;

    cout<<"Enter your name"<<endl;
    fgets(name1,20,stdin);
    cout<<"Enter your residence"<<endl;
    fgets(residence1,20,stdin);


    cout<<"Enter cheakin Date"<<endl;
    fgets(cheakin1,20,stdin);

    cout<<"Enter cheakout Date"<<endl;
    fgets(cheakout1,20,stdin);

    cout<<"Enter your number"<<endl;
    fgets(number1,20,stdin);


    cout<<"Enter How many days you want to stay"<<endl;
    cin>>e;

    cout<<"Enter how many room you want to book"<<endl;
    cin>>r;

    cout<<"Enter your Age"<<endl;
    cin>>age1;

    system("cls");

    cout<<endl<<"Congratulations!!!"<<endl<<endl;
    cout<<"You have successfully booked "<<r<<" deluxe room"<<endl;

    for(i=1; i<=r; i++)
    {
        struct node *newnode;
        newnode=(struct node*)malloc(sizeof(struct node));

        strcpy(newnode->name,name1);

        strcpy(newnode->number,number1);
        newnode->age=age1;
        strcpy(newnode->residence,residence1);
        strcpy(newnode->cheakin,cheakin1);
        strcpy(newnode->cheakout,cheakout1);

        sum+=5000;

        business++;
        cout<<"Your booked business room number "<<business<<"."<<endl<<endl;
        newnode->room=business;
        newnode->next=NULL;
        if(head3==NULL)
        {
            head3=newnode;
            s2=head3;
        }
        else
        {
            s2->next=newnode;
            s2=newnode;
        }
    }

    cout<<endl<<name1<<" have to pay "<<sum<<" taka"<<endl;
    cout<<name1<<" have also to pay 10% tax = "<<(10*sum)/100<<" taka";

    cout<<endl<<name1<<" have to pay all total(with tax) "<<sum+(10*sum/100)<<" taka"<<endl;


    cout<<endl<<endl<<"Type ok to continue"<<endl;
    cin>>s;

}

void book_premier()
{
    system("cls");

    sum=0;

    cout<<"Enter your name"<<endl;
    fgets(name1,20,stdin);
    cout<<"Enter your residence"<<endl;
    fgets(residence1,20,stdin);


    cout<<"Enter cheakin Date"<<endl;
    fgets(cheakin1,20,stdin);

    cout<<"Enter cheakout Date"<<endl;
    fgets(cheakout1,20,stdin);

    cout<<"Enter your number"<<endl;
    fgets(number1,20,stdin);


    cout<<"Enter How many days you want to stay"<<endl;
    cin>>e;

    cout<<"Enter how many room you want to book"<<endl;
    cin>>r;

    cout<<"Enter your Age"<<endl;
    cin>>age1;

    system("cls");

    cout<<endl<<"Congratulations!!!"<<endl<<endl;
    cout<<"You have successfully booked "<<r<<" deluxe room"<<endl;


    for(i=1; i<=r; i++)
    {

        struct node *newnode;
        newnode=(struct node*)malloc(sizeof(struct node));

        strcpy(newnode->name,name1);

        strcpy(newnode->number,number1);
        newnode->age=age1;
        strcpy(newnode->residence,residence1);
        strcpy(newnode->cheakin,cheakin1);
        strcpy(newnode->cheakout,cheakout1);

        sum+=3000;
        premier++;
        cout<<"Your booked premier room number "<<premier<<"."<<endl;
        newnode->next=NULL;
        newnode->room=premier;

        if(head4==NULL)
        {
            head4=newnode;
            s3=head4;
        }
        else
        {
            s3->next=newnode;
            s3=newnode;
        }
    }
    cout<<name1<<" have to pay "<<sum<<" taka"<<endl;
    cout<<name1<<" have also to pay 10% tax = "<<(10*sum)/100<<" taka";

    cout<<endl<<name1<<" have to pay all total(with tax) "<<sum+(10*sum/100)<<" taka"<<endl;

    cout<<endl<<"Type ok to continue"<<endl;
    cin>>s;
}

void book_standard()
{
    system("cls");
    sum=0;

    cout<<"Enter your name"<<endl;
    fgets(name1,20,stdin);
    cout<<"Enter your residence"<<endl;
    fgets(residence1,20,stdin);


    cout<<"Enter cheakin Date"<<endl;
    fgets(cheakin1,20,stdin);

    cout<<"Enter cheakout Date"<<endl;
    fgets(cheakout1,20,stdin);

    cout<<"Enter your number"<<endl;
    fgets(number1,20,stdin);


    cout<<"Enter How many days you want to stay"<<endl;
    cin>>e;

    cout<<"Enter how many room you want to book"<<endl;
    cin>>r;

    cout<<"Enter your Age"<<endl;
    cin>>age1;

    system("cls");

    cout<<endl<<"Congratulations!!!"<<endl<<endl;
    cout<<"You have successfully booked "<<r<<" deluxe room"<<endl;


    for(i=1; i<=r; i++)
    {
        struct node *newnode;
        newnode=(struct node*)malloc(sizeof(struct node));

        strcpy(newnode->name,name1);

        strcpy(newnode->number,number1);
        newnode->age=age1;
        strcpy(newnode->residence,residence1);
        strcpy(newnode->cheakin,cheakin1);
        strcpy(newnode->cheakout,cheakout1);

        sum+=4200;

        standard++;
        newnode->room=standard;
        cout<<"Your booked room number "<<standard<<"."<<endl<<endl;

        newnode->next=NULL;

        if(head5==NULL)
        {
            head5=newnode;
            s4=head5;
        }
        else
        {
            s4->next=newnode;
            s4=newnode;
        }
    }
    cout<<name1<<" have to pay "<<sum<<" taka"<<endl;
    cout<<name1<<" have also to pay 10% tax = "<<(10*sum)/100<<" taka";

    cout<<endl<<name1<<" have to pay all total(with tax) "<<sum+(10*sum/100)<<" taka"<<endl;

    cout<<endl<<"Type ok to continue"<<endl;
    cin>>s;
}

void book()
{

    while(1)

    {
        system("cls");
        cout<<"     For Booking DELUXE ROOMS type 'deluxe'"<<endl;
        cout<<"     For Booking  ATRIUM ROOMS type 'atrium' "<<endl;
        cout<<"     For Booking BUSINESS CLASS ROOMS 'business' "<<endl;
        cout<<"     For Booking  PREMIER ROOMS type 'premier' "<<endl;
        cout<<"     For Booking  STANDARD ROOMS type 'standard' "<<endl;

        cout<<"If you want to go back to the previous page type 'back'"<<endl;

        string x;
        cin>>x;
        getchar();

        if(x=="deluxe")
        {
            book_duluxe();
        }
        else if(x=="atrium")
        {
            book_atrium();
        }
        else if(x=="business")
        {
            book_business();
        }
        else if(x=="premier")
        {
            book_premier();
        }
        else if(x=="standard")
        {
            book_standard();
        }
        else if(x=="back")
        {
            break;
        }
        else
        {
            system("cls");
            cout<<"You entered a wrong keyword...please try again"<<endl;
            continue;
        }
bok:
        system("cls");
        cout<<endl<<"If you want to book more rooms type 'yes' otherwise 'no'"<<endl;
        cin>>s;
        if(s=="yes")
        {
            continue;
        }
        else if(s=="no")
        {
            break;
        }
        else
        {
            system("cls");
            cout<<"You entered a wrong keyword please try again"<<endl;
            goto bok;
        }


    }


}

void cancel()
{
    while(1)
    {
        system("cls");
        cout<<"Here is the details of your booked room list"<<endl;
        dis_atrium();
        dis_business();
        dis_deluxe();
        dis_standard();
        dis_premier();

        cout<<endl<<endl<<"Which Room reservation you want to delete"<<endl<<endl;

        cout<<"      For deleting reservation of DELUXE ROOMS type 'deluxe' "<<endl;
        cout<<"      For deleting reservation of  ATRIUM ROOMS type 'atrium'"<<endl;
        cout<<"      For deleting reservation of BUSINESS CLASS ROOMS type 'business'"<<endl;
        cout<<"      For deleting reservation of  PREMIER ROOMS type 'premier' "<<endl;
        cout<<"      For deleting reservation of  STANDARD ROOMS type 'standard'"<<endl<<endl<<endl;

        cout<<"If you want to go back to the previous page type 'back'"<<endl;

        string y;
        cin>>y;

        if(y=="deluxe")
        {
            pre=head1;
            cur=head1->next;
            cout<<"Enter a number which you want to delete deluxe room number"<<endl;
            cin>>h;
            if(head1==NULL)
            {
                system("cls");
                cout<<endl<<"sorry you have not any reservation"<<endl<<endl;
            }

            else if(h==pre->room)
            {
                head1=cur;
                cout<<"Thank you!!!"<<endl<<endl;
                cout<<"Your resevation of deluxe room no "<<h<<" was cancelled"<<endl<<endl;
                delete(pre);
            }
            else
            {
                while(cur->room!=h && cur->next!=NULL)
                {
                    pre=cur;
                    cur=cur->next;

                }
                if(cur->room==h)
                {
                    pre->next=cur->next;
                    delete(cur);
                    cout<<"Thank you!!!"<<endl<<endl;
                    cout<<"Your resevation of deluxe room no "<<h<<" was cancelled"<<endl<<endl;
                }
                else
                {
                    cout<<"Data was not found"<<endl;
                }
            }
        }
        else if(y=="atrium")
        {
            pre=head2;
            cur=head2->next;
            cout<<"Enter a number which you want to delete atrium room number"<<endl;
            cin>>h;
            if(head2==NULL)
            {
                system("cls");
                cout<<endl<<"sorry you have not any reservation"<<endl<<endl;
            }

            else if(h==pre->room)
            {
                head2=cur;
                cout<<"Thank you!!!"<<endl<<endl;
                cout<<"Your resevation of atrium room no "<<h<<" was cancelled"<<endl<<endl;
                delete(pre);
            }
            else
            {
                while(cur->room!=h && cur->next!=NULL)
                {
                    pre=cur;
                    cur=cur->next;

                }
                if(cur->room==h)
                {
                    pre->next=cur->next;
                    delete(cur);
                    cout<<"Thank you!!!"<<endl<<endl;
                    cout<<"Your resevation of deluxe room no "<<h<<" was cancelled"<<endl<<endl;
                }
                else
                {
                    cout<<"Data was not found"<<endl;
                }
            }
        }
        else if(y=="business")
        {
            pre=head3;
            cur=head3->next;
            cout<<"Enter a number which you want to delete business room number"<<endl;
            cin>>h;
            if(head3==NULL)
            {
                system("cls");
                cout<<endl<<"sorry you have not any reservation"<<endl<<endl;
            }

            else if(h==pre->room)
            {
                head3=cur;
                cout<<"Thank you!!!"<<endl<<endl;
                cout<<"Your resevation of business room no "<<h<<" was cancelled"<<endl<<endl;
                delete(pre);
            }
            else
            {
                while(cur->room!=h && cur->next!=NULL)
                {
                    pre=cur;
                    cur=cur->next;

                }
                if(cur->room==h)
                {
                    pre->next=cur->next;
                    delete(cur);
                    cout<<"Thank you!!!"<<endl<<endl;
                    cout<<"Your resevation of business room no "<<h<<" was cancelled"<<endl<<endl;
                }
                else
                {
                    cout<<"Data was not found"<<endl;
                }
            }
        }
        else if(y=="premier")
        {
            pre=head4;
            cur=head4->next;
            cout<<"Enter a number which you want to delete premier room number"<<endl;
            cin>>h;
            if(head4==NULL)
            {
                system("cls");
                cout<<endl<<"sorry you have not any reservation"<<endl<<endl;
            }

            else if(h==pre->room)
            {
                head4=cur;
                cout<<"Thank you!!!"<<endl<<endl;
                cout<<"Your resevation of premier room no "<<h<<" was cancelled"<<endl<<endl;
                delete(pre);
            }
            else
            {
                while(cur->room!=h && cur->next!=NULL)
                {
                    pre=cur;
                    cur=cur->next;

                }
                if(cur->room==h)
                {
                    pre->next=cur->next;
                    delete(cur);
                    cout<<"Thank you!!!"<<endl<<endl;
                    cout<<"Your resevation of premier room no "<<h<<" was cancelled"<<endl<<endl;
                }
                else
                {
                    cout<<"Data was not found"<<endl;
                }
            }
        }
        else if(y=="standard")
        {
            pre=head5;
            cur=head5->next;
            cout<<"Enter a number which you want to delete standard room number"<<endl;
            cin>>h;
            if(head5==NULL)
            {
                system("cls");
                cout<<endl<<"sorry you have not any reservation"<<endl<<endl;
            }

            else if(h==pre->room)
            {
                head5=cur;
                cout<<"Thank you!!!"<<endl<<endl;
                cout<<"Your resevation of standard room no "<<h<<" was cancelled"<<endl<<endl;
                delete(pre);
            }
            else
            {
                while(cur->room!=h && cur->next!=NULL)
                {
                    pre=cur;
                    cur=cur->next;

                }
                if(cur->room==h)
                {
                    pre->next=cur->next;
                    delete(cur);
                    cout<<"Thank you!!!"<<endl<<endl;
                    cout<<"Your resevation of standard room no "<<h<<" was cancelled"<<endl<<endl;
                }
                else
                {
                    cout<<"Data was not found"<<endl;
                }
            }
        }
        else if(y=="back")
        {
            break;
        }
        else
        {
            system("cls");
            cout<<"Sorry you type a wron keyword...please try agian"<<endl;
            continue;
        }
can:
        cout<<"If you want to cancel more rooms reservation type 'yes' otherwiae 'no' "<<endl;
        cin>>s;
        if(s=="yes")
        {
            continue;
        }
        else if(s=="no")
        {
            break;
        }
        else
        {
            system("cls");
            cout<<"Sorry you entered a wrong keyword "<<endl;
            goto can;
        }
    }
}

void display()
{
    while(1)
    {
        system("cls");

        cout<<"    For watching deluxe booked room list type 'deluxe' "<<endl;
        cout<<"    For watching atrium booked room list type 'atrium' "<<endl;
        cout<<"    For watching premier booked room list type 'premier' "<<endl;
        cout<<"    For watching business class booked room list type 'business' "<<endl;
        cout<<"    For watching standard booked room list type 'standard' "<<endl<<endl<<endl;

        cout<<"If you want to go back to the previous page type 'back'"<<endl;

        cin>>s;
        if(s=="deluxe")
        {
            dis_deluxe();
        }
        else if(s=="atrium")
        {
            dis_atrium();
        }
        else if(s=="premier")
        {
            dis_premier();
        }
        else if(s=="business")
        {
            dis_business();
        }
        else if(s=="standard")
        {
            dis_standard();
        }
        else if(s=="back")
        {
            break;
        }
        else
        {
            system("cls");
            cout<<"You entered a wrong keyword"<<endl;
            continue;
        }
dis:
        cout<<"If you want to see more booked room's details type 'yes' otherwise 'no'"<<endl;
        cin>>s;
        if(s=="yes")
        {
            continue;
        }
        else if(s=="no")
        {
            break;
        }
        else
        {
            system("cls");
            cout<<"you entered a wrong keyword..please try again"<<endl;
            goto dis;
        }

    }
}

void start()
{
    while(1)
    {
        system("cls");
        cout<<"Control Panel"<<endl<<endl;

        cout<<"If you want to see the details of room type 'details'"<<endl;
        cout<<"If you want to book room type 'book'"<<endl;
        cout<<"For cancel any reservation type 'cancel'"<<endl;
        cout<<"For watching the booked room list of customer type 'show' "<<endl<<endl<<endl<<endl;
        cout<<"If you want to go to homepage type 'homepage'"<<endl;


        cin>>s;
        if(s=="details")
        {
            details();
        }
        else if(s=="book")
        {
            book();
        }
        else if(s=="cancel")
        {
            cancel();
        }
        else if(s=="show")
        {
            display();
        }
        else if(s=="homepage")
        {
            int main();

            break;
        }
        else
        {
            system("cls");

            cout<<"You entered a wrong keyword...please try again..type 'ok' to continue"<<endl;
            cin>>s;

        }

    }
}
