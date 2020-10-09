#include <iostream>
#include <list>
#include <string.h>
#include <cstdlib>
using namespace std;
void display(int,int,int);
class Patient;//forward declaration of class
class Medical_details
{
    public: char patient_name[30];
            char doctor_name[30];
            int fees;
            char timing[30];
            char dept[30];
    public:
        void input_Details();
        void output_Details();
        void output_Expenses();
};
void Medical_details::input_Details()
{
    cout<<"\n-----------------------------------------\n"<<endl;
    cout<<"Please fill up the form to help us keep your records: "<<endl;
    cout<<"\n-----------------------------------------\n"<<endl;
    cout<<"Enter your name: "<<endl;
    cin>>patient_name;
    cout<<endl;
    cout<<"Enter the doctor's name you want to consult with: "<<endl;
    cin>>doctor_name;
    cout<<endl;
    cout<<"Enter the department you will be visiting: "<<endl;
    cin>>dept;
    cout<<endl;
    cout<<"Enter the timings of your appointment: "<<endl;
    cin>>timing;
    cout<<endl;
    cout<<"Enter the visiting fees of your doctor: "<<endl;
    cin>>fees;
}
void Medical_details::output_Details()
{
    cout<<patient_name<<"\t\t"<<doctor_name<<"\t\t\t"<<dept<<"\t\t\t\t"<<timing<<"\t\t\t\t"<<fees<<endl;
    
}
void Medical_details::output_Expenses()
{
    int ch,reg_fee=500,med_fee,doc_fee,ch1;
    char n[30];
    cout<<"Enter your name: ";
    cin>>n;
        cout<<"Kindly choose the category of the medicine you require: "<<endl;
        cout<<"1.Cardiovascular Medicine"<<endl;
        cout<<"2.Gasterology Medicine"<<endl;
        cout<<"3.Gastroenterolgical Medicine"<<endl;
        cout<<"4.Dermatological Medicine"<<endl;
        cout<<"5.Psychiatric Medicine"<<endl;
        cin>>ch1;
        switch(ch1)
        {
            case 1: med_fee=3000;
            doc_fee=1050;
            cout<<"Your name: \t"<<n;
            display(reg_fee,med_fee,doc_fee);
                    break;
                    
            case 2: med_fee=2000;
            doc_fee=1000;
            cout<<"Your name: \t"<<n;
            display(reg_fee,med_fee,doc_fee);
                    break;
                    
            case 3: med_fee=1500;
            doc_fee=950;
            cout<<"Your name: \t"<<n;
            display(reg_fee,med_fee,doc_fee);
                    break;
                    
            case 4: med_fee=1100;
            doc_fee=900;
            cout<<"Your name: \t"<<n;
            display(reg_fee,med_fee,doc_fee);
                    break;
                    
                    
            case 5: med_fee=1500;
            doc_fee=900;
            cout<<"Your name: \t"<<n;
            display(reg_fee,med_fee,doc_fee);
                    break;
                    
            default: cout<<"Wrong choice!";

        }
    }
class Patient:public Medical_details
{
	public:
    char name[30];
    char sex;
    int age;
    float weight;
    float height;
    char email[30];
    unsigned long long int contact;
public:

    // default constructor
    Patient()
    {

        strcpy(name,"N/A");
        sex = ' ';
        age = 0;
        weight=0.0;
        height=0.0;
        strcpy(email,"N/A");
        contact=0;
    }

    // Parameterized constructor
    Patient(char *pName, char pSex,int pAge,float pWeight,float pHeight,char *pEmail,unsigned long long int pContact)

    {
        strcpy(name,pName);
        sex=pSex;
        age=pAge;
        weight=pWeight;
        height=pHeight;
        strcpy(email,pEmail);
        contact=pContact;
    }
    void getDetails();
    void showDetails();

    /*Patient& operator=(const Patient& rhs)
    {
        //name = new char[strlen(rhs.name) + 1];
        strcpy(name, rhs.name);
        sex = rhs.sex;
        age = rhs.age;

        return *this;
    }*/

};

void Patient::getDetails()
{
    cout<<"\n-----------------------------------------\n"<<endl;
    cout<<"Please enter the personal details of the Patient"<<endl;
    cout<<"\n-----------------------------------------\n"<<endl;
    cout<<endl;
    cout<<"Please enter the Name of the Patient:"<<endl;
		cin>>name; 
		cout<<endl;
		cout<<"Please enter the Gender of the Patient:"<<endl;
		cin>>sex;
		cout<<endl;
		cout<<"Please enter the Age of the Patient:"<<endl;
		cin>>age;
		cout<<endl;
		cout<<"Please enter the Height of the Patient:"<<endl;
		cin>>height;
		cout<<endl;
		cout<<"Please enter the Weight of the Patient:"<<endl;
		cin>>weight;
		cout<<endl;
		cout<<"Please enter the Email of the Patient:"<<endl;
		cin>>email;
		cout<<endl;
		cout<<"Please enter the Contact Number of the Patient: "<<endl;
		cin>>contact;
		cout<<endl;
}
void Patient::showDetails()
{
    cout<<name<<"\t"<<sex<<"\t"<<age<<"\t"<<weight<<"\t"<<height<<"\t"<<email<<"\t\t"<<contact<<"\t"<<endl;
}
int main()
{

    list<Patient> lst;
	list<Patient>::iterator it;
	list<Medical_details> mst;
    list<Medical_details>::iterator its;
    Medical_details m1;
    Medical_details temp1;
	Patient p1;
	Patient temp;
	int choice,flag;
    while (1)
    {
        cout<<"\n-----------------------------------------\n"<<endl;
        cout<<"Patient Consultancy Management System"<<endl;
        cout<<"\n-----------------------------------------\n"<<endl;
        cout<<"1.Enter a new Patient's details."<<endl;
        cout<<"2.To book an appointment."<<endl;
        cout<<"3.Delete Patient's record from the front."<<endl;
        cout<<"4.Delete Patient's record from the back."<<endl;
    	cout<<"5.View all Expenses."<<endl;
    	cout<<"6.View all Patient's records."<<endl;
    	cout<<"7.Leave the Hospital."<<endl;
        cout<<"\nEnter your Choice: ";
        cin>>choice;
        switch(choice)
        {
        	
        case 1:
            p1.getDetails();
            lst.push_back(p1);
            break;
        case 2:
        int ch1;
               cout<<"\n-----------------------------------------\n"<<endl;
                 cout<<"Welcome to the Appointment Centre"<<endl;
                 cout<<"\n-----------------------------------------\n"<<endl;
                 cout<<endl;
            cout<<"Please select the symptoms you may be suffering from: "<<endl;
            cout<<endl;
            cout<<"1.Chest Pain, Chest discomfort, Shortness of breath, Pain in the neck, Jaw, Throat, Upper Abdomen or Back."<<endl;
            cout<<endl;
            cout<<"2.Abdominal pain and discomfort, Constipation and Diarrhoea, Nausea, Vomiting."<<endl;
            cout<<endl;
            cout<<"3.Burning sensation during urination, Pain or pressure in pelvis, Sores or lumps in the genital area."<<endl;
            cout<<endl;
            cout<<"4.Skin, Hair, Nails, and Adjacent Mucous Membranes Disorders. "<<endl;
            cout<<endl;
            cout<<"5.Emotional and Mental Illness (Physical, Emotional, Behavioural)."<<endl;
            cout<<"\nEnter your choice: ";
            cin>>ch1;
            
            
            switch(ch1)
            {
                case 1: int ch2;
                cout<<"YOU ARE GUIDED TO OUR CARDIOLOGY DEPARTMENT"<<endl;
                 cout<<endl;
                cout<<"Here is a list of the avaliable doctors with their timings. Kindly select one according to your need."<<endl;
                cout<<endl;
                cout<<"SERIAL NO"<<"\t"<<"NAME"<<"\t"<<"\t"<<"APPOINTMENT TIME"<<endl;
                cout<<"1."<<"\t"<<"Dr. AS BAWA "<<"\t"<<"\t"<<"11AM-12:30PM"<<endl;
                cout<<"2."<<"\t"<<"Dr. AJAY KASHYAP "<<"\t"<<"10AM-11:30PM"<<endl;
                cout<<endl;
                cout<<"Enter the Doctor you wish to consult: "<<endl;
                cin>>ch2;
                
                
                switch(ch2)
                {
                    case 1:
                        cout<<"YOUR APPOINTMENT WITH DR A S BAWA IS FIXED AT TIME 11AM-12:30PM..."<<endl;
                        cout<<endl;
                    cout<<"YOUR APPOINTMENT FEE IS RS 1050"<<endl;
                    cout<<endl;
                    cout<<"THANK YOU!"<<endl;
                    break;

                    case 2: cout<<"YOUR APPOINTMENT WITH DR AJAY KASHYAP IS FIXED AT TIME 10AM-11:30PM..."<<endl;
                    cout<<endl;
                    cout<<"YOUR APPOINTMENT FEE IS RS 1050"<<endl;
                    cout<<endl;
                    cout<<"THANK YOU!"<<endl;
                    break;
                    default:cout<<"Wrong choice";
                }
                break;
                
                
                
                
                case 2: int ch3;
                 cout<<"YOU ARE GUIDED TO OUR GASTERNOLOGY DEPARTMENT"<<endl;
                 cout<<endl;
                cout<<"Here is a list of the avaliable doctors with their timings. Kindly select one according to your needs"<<endl;
                cout<<endl;
                cout<<"SERIAL NO"<<"\t"<<"NAME"<<"\t"<<"\t"<<"APPOINTMENT TIME"<<endl;
                cout<<"1."<<"\t"<<"Dr ALKA GUPTA"<<"\t"<<"\t"<<"02:00PM-03:30PM"<<endl;
                cout<<"2."<<"\t"<<"Dr ANUP SEHGAL"<<"\t"<<"\t"<<"04:00PM-05:30PM"<<endl;
                cout<<endl;
                cout<<"Enter the doctor you wish to consult: "<<endl;
                cin>>ch3;
                switch(ch3)
                {
                    case 1: cout<<"YOUR APPOINTMENT WITH DR ALKA GUPTA IS FIXED AT TIME 02:00PM-03:30PM..."<<endl;
                    cout<<endl;
                    cout<<"YOUR APPOINTMENT FEE IS RS 1000"<<endl;
                    cout<<endl;
                    cout<<"THANK YOU DO VISIT AGAIN !!!"<<endl;
                    break;

                    case 2: cout<<"YOUR APPOINTMENT WITH DR ANUP SEHGAL IS FIXED AT TIME 04:00PM-05:30PM..."<<endl;
                    cout<<endl;
                    cout<<"YOUR APPOINTMENT FEE IS RS 1000"<<endl;
                    cout<<endl;
                    cout<<"THANK YOU!!"<<endl;
                }
                break;
                
                
                 case 3: int ch4;
                 cout<<"YOU ARE GUIDED TO OUR GASTROENTEROLGIST DEPARTMENT"<<endl;
                 cout<<endl;
                cout<<"Here is a list of the avaliable doctors with their timings. Kindly select one according to your needs"<<endl;
                cout<<endl;
                cout<<"SERIAL NO"<<"\t"<<"NAME"<<"\t"<<"\t"<<"APPOINTMENT TIME"<<endl;
                cout<<"1."<<"\t"<<"Dr. BEDI"<<"\t"<<"\t"<<"05:00PM-07:30PM"<<endl;
                cout<<"2."<<"\t"<<"Dr ABHISHEK SINGHAL"<<"\t"<<"\t"<<"04:00AM-05:30PM"<<endl;
                cout<<endl;
                cout<<"Enter the doctor you wish to consult: "<<endl;
                cin>>ch4;
                switch(ch4)
                {
                    case 1: cout<<"YOUR APPOINTMENT WITH DR. BEDI IS FIXED AT TIME 05:00PM-07:30PM..."<<endl;
                    cout<<endl;
                    cout<<"YOUR APPOINTMENT FEE IS RS 950"<<endl;
                    cout<<endl;
                    cout<<"THANK YOU!"<<endl;
                    break;

                    case 2: cout<<"YOUR APPOINTMENT WITH DR ABHISHEK SINGHAL IS FIXED AT TIME 04:00AM-05:30PM..."<<endl;
                    cout<<endl;
                    cout<<"YOUR APPOINTMENT FEE IS RS 950"<<endl;
                    cout<<endl;
                    cout<<"THANK YOU!!"<<endl;
                }
                break;
                
                
                
                
                case 4: int ch5;
                 cout<<"YOU ARE GUIDED TO OUR DERMATOLOGY DEPARTMENT"<<endl;
                 cout<<endl;
                cout<<"Here is a list of the avaliable doctors with their timings. Kindly select one according to your needs"<<endl;
                cout<<endl;
                cout<<"SERIAL NO"<<"\t"<<"NAME"<<"\t"<<"\t"<<"APPOINTMENT TIME"<<endl;
                cout<<"1."<<"\t"<<"Dr LIPIKA"<<"\t"<<"\t"<<"06:00PM-07:30PM"<<endl;
                cout<<"2."<<"\t"<<"Dr MAMTA MISHRA"<<"\t"<<"\t"<<"10:00AM-12:00PM"<<endl;
                cout<<endl;
                cout<<"Enter the Doctor you wish to consult: "<<endl;
                cin>>ch5;
                switch(ch5)
                {
                    case 1: cout<<"YOUR APPOINTMENT WITH DR LIPIKA IS FIXED AT TIME 06:00PM-07:30PM..."<<endl;
                    cout<<endl;
                    cout<<"YOUR APPOINTMENT FEE IS RS 900"<<endl;
                    cout<<endl;
                    cout<<"THANK YOU!"<<endl;
                    break;

                    case 2: cout<<"YOUR APPOINTMENT WITH DR MAMTA MISHRA IS FIXED AT TIME 10:00AM-12:00PM..."<<endl;
                    cout<<endl;
                    cout<<"YOUR APPOINTMENT FEE IS RS 900"<<endl;
                    cout<<endl;
                    cout<<"THANK YOU!!"<<endl;
                }
                break;
                
                
                
                
                 case 5: int ch6;
                 cout<<"YOU ARE GUIDED TO OUR PSYCHIATRY DEPARTMENT"<<endl;
                 cout<<endl;
                cout<<"Here is a list of the avaliable Doctors with their timings. Kindly select one according to your need."<<endl;
                cout<<endl;
                cout<<"SERIAL NO"<<"\t"<<"NAME"<<"\t"<<"\t"<<"APPOINTMENT TIME"<<endl;
                cout<<"1."<<"\t"<<"Dr P.B.DUTTA"<<"\t"<<"\t"<<"11AM-12:30PM"<<endl;
                cout<<"2."<<"\t"<<"Dr MANOJ MIGLANI"<<"\t"<<"\t"<<"01:00PM-02:30PM"<<endl;
                cout<<endl;
                cout<<"Enter the doctor you wish to consult: "<<endl;
                cin>>ch6;
                switch(ch6)
                {
                    case 1: cout<<"YOUR APPOINTMENT WITH DR P.P DUTTA IS FIXED AT TIME 11AM-12:30PM..."<<endl;
                    cout<<endl;
                    cout<<"YOUR APPOINTMENT FEE IS RS 900"<<endl;
                    cout<<endl;
                    cout<<"THANK YOU!"<<endl;
                    break;

                    case 2: cout<<"YOUR APPOINTMENT WITH DR MANOJ MIGLANI IS FIXED AT TIME 01:00PM-02:30PM..."<<endl;
                    cout<<endl;
                    cout<<"YOUR APPOINTMENT FEE IS RS 900"<<endl;
                    cout<<endl;
                    cout<<"THANK YOU!!"<<endl;
                }
                break;
                
                
                
            }
           m1.input_Details();
            mst.push_back(m1);
            break;
            
            
            
            
            //deleting from front
            case 3:int c;
                cout<<"Press 1 to delete Patient's Personal Record:"<<endl<<"Press 2 to delete Patient's Medical Records: "<<endl;
            cin>>c;
            if(c==1)
            {
                cout<<endl;
                cout<<"The personal details of the patient before deleting are: "<<endl;
                cout<<endl;
                cout<<"Name"<<"\t"<<"Sex"<<"\t"<<"Age"<<"\t"<<"Weight"<<"\t"<<"Height"<<"\t"<<"Email"<<"\t\t"<<"Contact no"<<endl;
                for(it = lst.begin(); it != lst.end(); ++it)
                    it->showDetails();

                cout <<"\t"<< endl;
                temp = lst.front();
                lst.pop_front();

                cout<<"The personal details of the patient after deleting are: "<<endl;
                cout<<endl;
                cout<<"Name"<<"\t"<<"Sex"<<"\t"<<"Age"<<"\t"<<"Weight"<<"\t"<<"Height"<<"\t"<<"Email"<<"\t\t"<<"Contact no"<<endl;
                for(it = lst.begin(); it != lst.end(); ++it)
                    it->showDetails();

                cout <<"\t"<< endl;

            }
            else //deleting medical record
            {
                cout<<endl;
                cout<<"The medical details of the patients before deleting are: "<<endl;
                cout<<endl;
                cout<<"Patient's Name"<<"\t"<<"Consulting Doctor"<<"\t"<<"Visiting Department"<<"\t\t"<<"Appointment Timings"<<"\t\t"<<"Doctor's' Fee"<<endl;
                for(its = mst.begin(); its != mst.end(); ++its)
                    its->output_Details();

                cout <<"\t"<< endl;
                temp1 = mst.front();
                mst.pop_front();
                cout<<endl;
                cout<<"The medical details of the patients after deleting are: "<<endl;
                cout<<endl;
                cout<<"Patient's Name"<<"\t"<<"Consulting Doctor"<<"\t"<<"Visiting Department"<<"\t\t"<<"Appointment Timings"<<"\t\t"<<"Doctor's' Fee"<<endl;
                for(its = mst.begin(); its != mst.end(); ++its)
                    its->output_Details();

                cout <<"\t"<< endl;
            }
            cout<<"THANK YOU!"<<endl;
            break;
            
            
            
            //deleting from back
            case 4:int choice1;
                cout<<"Press 1 to delete Patient's Personal Record:"<<endl<<"Press 2 to delete Patient's Medical Records: "<<endl;
            cin>>choice1;
            if(choice1==1)
            {
                cout<<endl;
                cout<<"The personal details of the patients before deleting are: "<<endl;
                cout<<endl;
                cout<<"Name"<<"\t"<<"Sex"<<"\t"<<"Age"<<"\t"<<"Weight"<<"\t"<<"Height"<<"\t"<<"Email"<<"\t\t"<<"Contact no"<<endl;
                for(it = lst.begin(); it != lst.end(); ++it)
                    it->showDetails();

                cout <<"\t"<< endl;
                temp = lst.back();
                lst.pop_back();

                cout<<"The personal details of the patients after deleting are: "<<endl;
                cout<<endl;
                cout<<"Name"<<"\t"<<"Sex"<<"\t"<<"Age"<<"\t"<<"Weight"<<"\t"<<"Height"<<"\t"<<"Email"<<"\t\t"<<"Contact no"<<endl;
                for(it = lst.begin(); it != lst.end(); ++it)
                    it->showDetails();

                cout <<"\t"<< endl;

            }
            else
            {
                cout<<endl;
                cout<<"The medical details of the patients before deleting are: "<<endl;
                cout<<endl;
                cout<<"Patient's'Name"<<"\t\t"<<"Consulting Doctor"<<"\t\t"<<"Visiting Department"<<"\t\t"<<"Appointment Timings"<<"\t\t"<<"Doctor's Fee"<<endl;
                for(its = mst.begin(); its != mst.end(); ++its)
                    its->output_Details();

                cout <<"\t"<< endl;
                temp1 = mst.back();
                mst.pop_back();

                cout<<endl;
                cout<<"The medical details of the patients after deleting are: "<<endl;
                cout<<endl;
                cout<<"Patient's Name"<<"\t\t"<<"Consulting Doctor"<<"\t\t"<<"Visiting Department"<<"\t\t"<<"Appointment Timings"<<"\t\t"<<"Doctor's Fee"<<endl;
                for(its = mst.begin(); its != mst.end(); ++its)
                    its->output_Details();

                cout <<"\t"<< endl;
            }
            cout<<"THANK YOU!"<<endl;
            break;
            
            
            
            case 5: temp1.output_Expenses();
            break;
            
            
        
            //veiw details
        case 6:int c1;
            cout<<endl;
            cout<<"Press 1 to view all Patient's Personal Record:"<<endl<<"Press 2 to view all Patient's Medical Records: "<<endl;
            cin>>c1;
            if(c1==1)
            {
                cout<<endl;
                cout<<"The personal details of the patient are: "<<endl;
                cout<<endl;
                cout<<"Name"<<"\t"<<"Sex"<<"\t"<<"Age"<<"\t"<<"Weight"<<"\t"<<"Height"<<"\t"<<"Email"<<"\t\t"<<"Contact Number"<<endl;
    for(it = lst.begin(); it != lst.end(); ++it)
        it->showDetails();

    cout <<"\t"<< endl;
                        cout<<"THANK YOU!"<<endl;
            }
            
            
            
            else
            {
                cout<<endl;
                cout<<"The medical details of the patient are: "<<endl;
                cout<<endl;
                cout<<"Patient's Name"<<"\t"<<"Consulting Doctor"<<"\t"<<"Visiting Department"<<"\t\t"<<"Appointment Timings"<<"\t\t"<<"Doctor's Fee"<<endl;
            for(its = mst.begin(); its != mst.end(); ++its)
        its->output_Details();

    cout <<"\t"<< endl;

                    cout<<"THANK YOU!"<<endl;

            }

            break;
        case 7: cout<<"Thank You For Visiting !";
            exit(0);

        default:
            cout<<"Wrong Choice!"<<endl;
        }
    }
    return 0;
}
void display(int rf,int mf,int df)
    {
                cout<<endl;
                cout<<"Your total bill summary is as follows:"<<endl;
                    cout<<"Registration Fee: \t\t"<<rf<<endl;
                    cout<<"Visiting Doctor Fee: \t\t"<<df<<endl;
                    cout<<"Medicinal Fee: \t\t\t"<<mf<<endl;
                    cout<<"Total: \t\t\t\t"<<rf+df+mf<<endl;
                    cout<<"THANK YOU!";
    }



