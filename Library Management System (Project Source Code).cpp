//#include <bits/stdc++.h>
#include <fstream>
#include <conio.h>
#include <iostream>
#include <ctime>
#include <string>

using namespace std;

//--------------------------------------Function Prototypes---------------------------------//

void pageShuffle();
void dashboardScreenAdd();
void dashboardScreenDelete();
void dashboardScreenEnter();
void dashboardScreenShow();
void interfaceScreen();
void mainPage();

//-----------------------------------------Classes------------------------------------------//
class Login{
	private:
		string username;
		string password;
		int choice;
		string hint1, hint2;
	protected:
		char  ch;
		int option;
		int count = 0;
		string Id, pass;
		string register_userID, register_pass, rId, rpass;
		string fpass,fuserID,fid;
		
	public:	
		//registration method
		void SignUp(){
			cout<<"\n\n\n\n\n\t\t\t\t\t\t\t   ***************************************\n"; 
			cout<<"\t\t\t\t\t\t\t   *  Enter Your Username And Password   *\n";
			cout<<"\t\t\t\t\t\t\t   *                                     *\n";
			cout<<"\t\t\t\t\t\t\t   ***************************************\n"; 
    		cout<<"\t\t\t\t\t\t\t\t------------------------------";
    		cout<<"\n\t\t\t\t\t\t\t\t\t    SignUp \n";	
    		cout<<"\t\t\t\t\t\t\t\t------------------------------\n\n";	
    		cout << "\t\t\t\t\t\t\t\tEnter Username: ";
			cin>>register_userID;
    		cout<<"\n\t\t\t\t\t\t\t\tEnter Password: ";
			cin>>register_pass;
			cout << "\t\t\t\t\t\t\t\tSet a one word Hint to Recover Password if lost: ";
			cin >> hint1;
	
			ofstream ToSignUp("logins.txt", ios::app);
			
			ToSignUp << register_userID << ' ' << register_pass << ' ' << hint1 << endl;
			
			cout<<"\n Your SuccessFully SignedUp And SignIn And Enjoy!!"<<endl<<endl;
			system("pause");
			system("cls");
			mainPage();
}
		//login method 
		void SignIn(){ 
			
			system("cls");
			cout<<"\n\n\n\n\n\t\t\t\t\t\t\t   ***************************************\n"; 
			cout<<"\t\t\t\t\t\t\t   *                                     *\n";
			cout<<"\t\t\t\t\t\t\t   *  Enter Your Username And Password   *\n";
			cout<<"\t\t\t\t\t\t\t   *                                     *\n";
			cout<<"\t\t\t\t\t\t\t   ***************************************\n"; 
    		cout<<"\t\t\t\t\t\t\t\t------------------------------";
    		cout<<"\n\t\t\t\t\t\t\t\t\t    SignIn \n";	
    		cout<<"\t\t\t\t\t\t\t\t------------------------------\n\n";	
    		cout << "\t\t\t\t\t\t\t\tEnter Username: ";
    		cin>>username;
   			cout<<"\n\t\t\t\t\t\t\t\tEnter Password: ";
    
     		ch = _getwch();
    		while(ch != 13)
   		    {
		 		password.push_back(ch);
      			cout << '*';
      			ch = _getwch();
    		}
    		ifstream ToRead("logins.txt");
    		if(!ToRead)
    		{
			cout<<"\n\n\a !! File Not Found !!";
			
			}
			
			
		while(ToRead >> Id >> pass)
		{
			if(Id==username && password==pass)
				{
					count=1;
					
				}
		}
		ToRead.close(); 
			if(count==1)
				{
				  cout<<"\n You SignedIn SuccessFully !!"<<endl<<endl;
				  system("pause");
				  system("cls");		  
				  mainPage();
				}
			else
				{
					cout<<"\n\n\a Username Or Password Is Incorrect !!!"<<endl<<endl;
					cout << "\n\n\a\t\t\t Redirecting you to the Login Page!" << endl;
					sleep(3);
					system("cls");
					loginUI();
				}
}
		//forget password method
		void Forget(){
			
	
			cout<<"\n\n\n\n\n\t\t\t\t\t\t\t   ***************************************\n"; 
			cout<<"\t\t\t\t\t\t\t   *                                     *\n";
			cout<<"\t\t\t\t\t\t\t   *     Forgot Password Not Worry!      *\n";
			cout<<"\t\t\t\t\t\t\t   *            We will Fix              *\n";
			cout<<"\t\t\t\t\t\t\t   *                                     *\n";
			cout<<"\t\t\t\t\t\t\t   ***************************************\n"; 
			cout<<"\n\n\n\t\t\t\t\t\t\t\t------------------------------";
			cout<<"\n\t\t\t\t\t\t\t\t  Library Managment System \n";
   	 		cout<<"\t\t\t\t\t\t\t\t------------------------------\n";

  			cout<<"\n\t\t\t\t\t\t\t _________________________________________________\n";
      		cout<<"\t\t\t\t\t\t\t|                                                 |\n";
    		cout<<"\t\t\t\t\t\t\t|        .Press 1 To Search Id By Username.       |\n";
    		cout<<"\t\t\t\t\t\t\t|                                                 |\n";
    		cout<<"\t\t\t\t\t\t\t|        .Press 2 To Return Login Page.           |\n";
    		cout<<"\t\t\t\t\t\t\t|_________________________________________________|\n";
			cout<<"\n\n\t\t\t\t\t\tPlease Enter Your Choice: ";                
			cin>>option;
		                                                               
		switch(option){
				case 1:
					{
						system("cls");
						int count=0;
						cout<<"\n\n\n\n\n\t\t\t\t\t\t\t   ***************************************\n"; 
						cout<<"\t\t\t\t\t\t\t   *                                     *\n";
						cout<<"\t\t\t\t\t\t\t   *            We will Fix Here         *\n";
						cout<<"\t\t\t\t\t\t\t   *                                     *\n";
						cout<<"\t\t\t\t\t\t\t   ***************************************\n"; 
						cout<<"\n\n\n\t\t\t\t\t\t\t\t------------------------------";
						cout<<"\n\t\t\t\t\t\t\t\t  Library Managment System \n";
    					cout<<"\t\t\t\t\t\t\t\t------------------------------\n";
    					cout<<"\n\t\t\t\t\t\t\tPlease Enter Your Username: ";
    					cin>>fuserID;
    					cout<<"\n\t\t\t\t\t\t\tPlease Enter The Hint you set to recover Password: ";
    					cin >> hint2;    	
//    				if(hint1 != hint2){
//    					cout << "The Hint is Incorrect!..\n You Can not proceed Please Return to Login Page and try again!..\n" << endl;
//						loginUI();
//					} else {
//						cout << "Hint is Correct!...\n You Can Now Proceed!..\n" << endl;
    					ifstream ToForget("logins.txt");
    					while(ToForget>>fid>>fpass)
    					{                
    						if(fid==fuserID)
    							{
    								count=1;
								}
						}
					ToForget.close();
				
					if(count==1)
					{	
							cout<<"\n\n Your Account Is SuccessFully Found ! ";
							cout<<"\n-------------------------------------------";
							cout<<"\n\n Your Password Is: "<<fpass<<endl;
							cout<<"\n-------------------------------------------"<<endl;
							system("pause");
							system("cls");
							SignIn(); 					         
					} else{																										  		                                                                                                  
							cout<<"\n\n\a Your Username Does not Exist !! \n \n\n You Want To SignUp . "<<endl;
							system("pause");
							system("cls");
							SignIn();
						}
//					}
						break;
					}
					{
						system("cls");
						SignIn();	
						break;
					}	
					 
				default:
					 	
						cout<<"\n\n\a Please Make Sure Your Choice Is Valid !!\n\n";
						system("pause");
						system("cls");
						Forget();
			}	
}

//login function interface

void loginUI(){
	cout<<"\t\t\t______________________________________________________________________\n\n\n";
	cout<<"\t\t\t                          Welcome To Login Page                        \n\n\n";
	cout<<"\t\t\t _____________________________    MENU    ____________________________  \n\n";
	cout<<"\t\t\t                                                                         \n\n";
	cout<<"\t\t\t\t\t _____________________________________\n";
	cout<<"\t\t\t\t\t|                                     |\n";
	cout<<"\t\t\t\t\t|        Press 1 For Sign In          |\n ";
	cout<<"\t\t\t\t\t|        Press 2 For Sign Up          |\n";
	cout<<"\t\t\t\t\t|        Press 3 For Frogot ID        |\n";
	cout<<"\t\t\t\t\t|        Press 4 For Exit             |\n";
	cout<<"\t\t\t\t\t|_____________________________________|\n\n\n";
	cout<<"\t\t\t\t\t Enter Your Choice :  ";
	cin>>choice;
		switch(choice)
		{
			case 1:
				{
					system("cls");
					SignIn();
					break;   
				}
			case 2:
				{
					system("cls");
					SignUp();
					break;
				}
			case 3:
				{
					system("cls");
					Forget();         
					break;
				}
			case 4:
				{
				 system("cls");
					  cout<<"\n\n\t\t Thank You !!";                                    
					break;
				}
			default:
				system("cls");
				cout<<"\n\n\t \a Please Make Sure Your Choice Is "<<choice<<" Valid !!\n\n";
				cout<<"\n\t\t\t------------------Program is Exiting with Error 404-----------------\n";
//				sleep(2);
				break;
		}
}

};

//parent class of books
class Books{
	protected:
		string bookID;
		string edition;
		string copies;
		string rack;
		
		char f_name_id[200];
	public:
		string title;
		Books(){
			title = "Empty";
			bookID = "000";
			edition = "zero";
			copies= "00";
			rack = "0A";
		}
	//method to display the information about the university
		void infoLibrary(){	
			ifstream file;
			file.open("InfoLib.txt");
			if(!file)	
				{	
					cout<<"\a\nError while opening the file\n";
					mainPage();
				}
			else
				{
		    		cout<<"\n\n\n\n\n\n\n\t\t\t\t\t...........................Information about the Library.............................\n\n";
		    		string line;
			
						while(file.good())
							{
								getline(file,line);
								cout<<line<<endl;
							}
			
			cout<<endl;
			system("pause");
            system("cls");
			mainPage();
				}	
		}
};

class Student : Books
{

private:
int rollno;
string name;
public:

Student ()
{
rollno=0;
name="Empty";
}
void setdataStudent()
		{
			cout<<endl;
  			
			ofstream std_file;
  			char f_name_id[200];
  			
  			  cout<<"\n\n\t\t\t...........Adding a Student...........";
			  cout<<"\n\nEnter the Student's file ID or Title : ";
  		cin.ignore();
  			gets(f_name_id);
  			std_file.open(f_name_id);
  	
  		if(!f_name_id) {
			cout<<"\nError while opening the file\n";
	mainPage();
		  } else {

            cout<<"\n\n************************\n"<<endl;
			std_file<<"\n************************\n"<<endl;
           
			cout<<"Name of the Student : ";
			std_file<<"Name of the Student : ";
			getline(cin, name);
			std_file<<name<<endl;
      
			cout<<"Roll No : ";
			std_file<<"Roll No : ";
			cin>>rollno;
			std_file<<rollno<<endl;
		
        
//both functions included from header file "conio.h"//       
	system("pause");
	system("cls");
	cout<<"Information Added Successfully!"<<endl;
	mainPage();
		}
	}

      
    


	void showDataStudent()
	{
    	fstream std_file;
    	cout<<"Enter the Student's file title to be opened : ";
    	cin.ignore();
    	gets(f_name_id);
    	system("cls");
		std_file.open(f_name_id, ios::in);
			if(!std_file)	
			{
				cout<<"Error while opening the file"<<endl;
				mainPage();
			} else {
		    	cout<<"\t\t\t\t........................................ Full Record of "<<f_name_id<<" ........................................"<<endl;
		    	string info;
		    
				while(std_file.good())
				{				
					getline(std_file,info);
					cout<<info<<endl;	
				}
				cout<<endl;
   		    }
        	system("pause");
        	system("cls");
     	 mainPage();
}


void deleteDataStudent()
	{
		fstream std_file;
    cout<<"Enter the Student's File Name or ID to Delete : ";
    cin.ignore();
    gets(f_name_id);
    system("cls");
		if(!f_name_id)	
		{
			cout<<"That File Of Student Does not Exist ."<<endl;
			system("pause");
			mainPage();
		}
		else
		{
			remove(f_name_id);
		    cout<<"\n\n\n\t\t\t Student "<<f_name_id<<" Data Deleted SuccessFully. "<<endl;
        }
        system("pause");
        system("cls");
        mainPage();
	}
	

};



//class for the books of english (Child)
class English : public Books{
	protected:
		string review;
        string description;
        string availability;
		string author_English;
	public:
		
		
		//default construtor to initialise values
		English()
		{
			title = "Empty";
			author_English = "Empty";
		}
		
		
		//setting books of English		
	void setDataEnglish(){
			cout<<endl;
  			
			ofstream eng_file;
  			char f_name_id[200];
  			
  			  cout<<"\n\n\t\t\t...........Adding a Book...........";
			  cout<<"\n\nEnter the Book's file ID or Title : ";
  		cin.ignore();
  			gets(f_name_id);
  			eng_file.open(f_name_id);
  	
  		if(!f_name_id) {
			cout<<"\nError while opening the file\n";
			mainPage();
		  } else {

            cout<<"\n\n********************************************************************\n"<<endl;
			eng_file<<"\n********************************************************************\n"<<endl;
        //For Book Title    
			cout << "Title of the Book : " ;
			eng_file << "Title of the Book : " ;
			getline(cin, title);
			eng_file << title << endl;
        //For Author name    
			cout << "Author Name : ";
			eng_file << "Author Name : ";
			getline(cin, author_English);
			eng_file<<author_English<<endl;
		//for Book ID	
            cout << "Book ID : ";
			eng_file << "Book ID : ";
			getline(cin, bookID);
			eng_file << bookID << endl;
		//for Book Edition
            cout << "Edition of Book : ";
			eng_file << "Edition of Book : ";
			getline(cin, edition);
			eng_file << edition << endl;
		//for Number of Copies
            cout << "Number of Copies : ";
			eng_file << "Number of Copies : ";
			getline(cin, copies);
			eng_file << copies << endl;
		//for The Rack id where the book is placed in the library
            cout << "Rack Number where Book is placed : ";
			eng_file << "Rack Number where Book is placed : ";
			getline(cin, rack);
			eng_file << rack << endl;
        
//both functions included from header file "conio.h"//       
	system("pause");
	system("cls");
	cout<<"Information Added Successfully!"<<endl;
	mainPage();
		}
	}
	
	
	//delete the book method
	
	
	void deleteDataEnglish()
	{
		fstream eng_file;
    cout<<"Enter the Book's File Name or ID to Delete : ";
    cin.ignore();
    gets(f_name_id);
    system("cls");
		if(!f_name_id)	
		{
			cout<<"That File Of Book Does not Exist ."<<endl;
			system("pause");
			mainPage();
		}
		else
		{
			remove(f_name_id);
		    cout<<"\n\n\n\t\t\t Book "<<f_name_id<<" Data Deleted SuccessFully. "<<endl;
        }
        system("pause");
        system("cls");
        mainPage();
	}
	
	//showing record of existing books
	void showDataEng(){
    	fstream eng_file;
    	cout<<"Enter the Book's file title to be opened : ";
    	cin.ignore();
    	gets(f_name_id);
    	system("cls");
		eng_file.open(f_name_id, ios::in);
			if(!eng_file)	
			{
				cout<<"Error while opening the file"<<endl;
				mainPage();
			} else {
		    	cout<<"\t\t\t\t........................................ Full Record of "<<f_name_id<<" ........................................"<<endl;
		    	string info;
		    
				while(eng_file.good())
				{				
					getline(eng_file,info);
					cout<<info<<endl;	
				}
				cout<<endl;
   		    }
        	system("pause");
        	system("cls");
       	 mainPage();
}

//alter the record of existing books by adding more information

	void alterDataEng(){
    	fstream eng_file;
    		cout<<"Enter the Book's file Title to be opened : ";
    	cin.ignore();
    		gets(f_name_id);
    		system("cls");
			eng_file.open(f_name_id, ios::in);
		if(!eng_file)
			{
				cout<<"Error while opening the file!"<<endl;
				mainPage();
			} else {
		    	cout<<"\t\t\t\t........................................ Record Of "<<f_name_id<<" ........................................"<<endl;
		    	string info;
			
				while(eng_file.good())
				{
				
				getline(eng_file,info);
				cout<<info<<endl;
			
				}
			
			cout<<endl;
			eng_file.close();
			/*
			
			ios::out | ios::app:
								ios output and ios append. ios output is used when the file is opened for output (to write)
								and ios append allows the written data to be stored at the end of the file instead of
								actually overwriting or rewriting the already existing data! They are basically flag used with file 
								stream
			*/
			
			
			//adding the additional information at the end of file instead of overwriting or manipulating existing data in file//
			eng_file.open(f_name_id, ios::out | ios::app);
            cout<<endl;
            
			cout<<"Add a review to Book: "<<f_name_id<< "'s file... : \n";
			eng_file<<endl;
            
        //for review about the book
            cout<<"Review : ";
			eng_file<<"Review : ";
			getline(cin, review); 
			eng_file << review << endl;
		//for Description of the book
            cout<<"Description : "; 
			eng_file<<"Description : ";
			getline(cin, description); 
			eng_file << description << endl;
		//for Availability of respective book book
            cout<<"Availability : "; 
			eng_file<<"Availability : ";
			getline(cin, availability); 
			eng_file << availability << endl;

			eng_file<<"\n*************************************************************************";
       		cout<<"\n Information added sucessfully! \n"<<endl;
        		
			eng_file.close();
			cout<<endl;
			
			system("pause");
            system("cls");
			mainPage();
			
			}
}	


//borrow book event so that the student can borrow a book from the library
void borrowEnglish(){
	
	
	fstream eng_file;
    		cout<<"Enter the Book's file Title to be borrowed : ";
    	cin.ignore();
    		gets(f_name_id);
    		system("cls");
			eng_file.open(f_name_id, ios::in);

    if (!eng_file) {
        cout << "Error while opening the file!" << endl;
        mainPage();
        return;
    }

    cout << "Book found. You can proceed with borrowing this book: " << f_name_id << endl;
fstream std_file;
    cout << "Enter the Student's file title who is borrowing the book: ";
    gets(f_name_id);
    system("cls");
   std_file.open(f_name_id, ios::out | ios::app);

    if (!std_file) {
        cout << "Student does not exist." << endl;
        mainPage();
        return;
    }

    cout << "Student found. Borrowing the book now." << endl;

    string info;
    while (getline(eng_file, info)) {
        std_file << info << endl;
        cout << info << endl;
    }

    cout << "Book borrowed successfully." << endl;

    eng_file.close();
    std_file.close();
    mainPage();
}


bool ReturnBookEnglish()
{
	fstream eng_file;
	string f_name_id;
	
	cout << "Enter the Book's file Title to be borrowed: ";
    cin.ignore();
    getline(cin, f_name_id);
    system("cls");
    
    eng_file.open (f_name_id, ios::in);
    if (!eng_file)
    {
    	cout << "Error while opening the file!" << endl;
        return false;
	}
	else
	{
		cout<< " You can borrow the  book "<<f_name_id<<endl;
	}
	
	 fstream std_file;
    cout << "Enter the Student's file title who had borrowing the book: ";
      getline(cin, f_name_id);
    system("cls");
    
    std_file.open(f_name_id, ios::in);
    if(!std_file)
    {
    	cout<<" student record does not exist : "<<endl;
    	return false;
	}
	else
	{
		cout<<" student found borrowing the book now : "<<endl;
	}
	std_file.close();
	
	
	std_file.open(f_name_id , ios::out | ios::app);
	
		 cout << endl;
    string info;
    while (getline(eng_file, info)) {
        std_file << info << endl;
        cout << info << endl;
    }
	
	eng_file.close();
    std_file.close();
    
    
    return true;
	
}



	
};

//class for the books of mathematics (Child)
class Mathematics : public Books{
	protected:
		string review;
        string description;
        string availability;
		string author_Mathematics;
	public:
		//default contructor
		Mathematics()
		{
			title = "Empty";
			author_Mathematics = "Empty";
		}
		
		//adding mathematics books to the file
			void setDataMathematics()
		{
			cout<<endl;
  			
			ofstream math_file;
  			char f_name_id[200];
  			
  			  cout<<"\n\n\t\t\t...........Adding a Book...........";
			  cout<<"\n\nEnter the Book's file ID or Title : ";
  		cin.ignore();
  			gets(f_name_id);
  			math_file.open(f_name_id);
  	
  		if(!f_name_id) {
			cout<<"\nError while opening the file\n";
			mainPage();
		  } else {

            cout<<"\n\n********************************************************************\n"<<endl;
			math_file<<"\n********************************************************************\n"<<endl;
        //For Book Title    
			cout<<"Title of the Book : ";
			math_file<<"Title of the Book : ";
			getline(cin, title);
			math_file<<title<<endl;
        //For Author name    
			cout<<"Author Name : ";
			math_file<<"Author Name : ";
			getline(cin, author_Mathematics);
			math_file<<author_Mathematics<<endl;
		//for Book ID	
            cout<<"Book ID : ";
			math_file<<"Book ID : ";
			getline(cin, bookID);
			math_file<<bookID<<endl;
		//for Book Edition
            cout<<"Edition of Book : ";
			math_file<<"Edition of Book : ";
			getline(cin, edition);
			math_file<<edition<<endl;
		//for Number of Copies
            cout<<"Number of Copies : ";
			math_file<<"Number of Copies : ";
			getline(cin, copies);
			math_file<<copies<<endl;
		//for The Rack id where the book is placed in the library
            cout<<"Rack Number where Book is placed : ";
			math_file<<"Rack Number where Book is placed : ";
			getline(cin, rack);
			math_file<<rack<<endl;
        
//both functions included from header file "conio.h"//       
	system("pause");
	system("cls");
	cout<<"Information Added Successfully!"<<endl;
	mainPage();
		}
	}
	
	
	//delete book from Mathematics category
	
	
	void deleteDataMathematics()
	{
		fstream math_file;
    cout<<"Enter the Book's File Name or ID to Delete : ";
    cin.ignore();
    gets(f_name_id);
    system("cls");
		if(!f_name_id)	
		{
			cout<<"That File Of Book Does not Exist ."<<endl;
			system("pause");
			mainPage();
		}
		else
		{
			remove(f_name_id);
		    cout<<"\n\n\n\t\t\t Book "<<f_name_id<<" Data Deleted SuccessFully. "<<endl;
        }
        system("pause");
        system("cls");
        mainPage();
	}
	
	//showing record of existing books
	void showDataMath(){
    	fstream math_file;
    	cout<<"Enter the Book's file title to be opened : ";
    	cin.ignore();
    	gets(f_name_id);
    	system("cls");
		math_file.open(f_name_id, ios::in);
			if(!math_file)	
			{
				cout<<"Error while opening the file"<<endl;
				mainPage();
			} else {
		    	cout<<"\t\t\t\t........................................ Full Record of "<<f_name_id<<" ........................................"<<endl;
		    	string info;
		    
				while(math_file.good())
				{				
					getline(math_file,info);
					cout<<info<<endl;	
				}
				cout<<endl;
   		    }
        	system("pause");
        	system("cls");
       	 mainPage();
}

	//alter the record of existing books by adding more information

	void alterDataMathematics(){
    	fstream math_file;
    		cout<<"Enter the Book's file Title to be opened : ";
    	cin.ignore();
    		gets(f_name_id);
    		system("cls");
			math_file.open(f_name_id, ios::in);
		if(!math_file)
			{
				cout<<"Error while opening the file!"<<endl;
				mainPage();
			} else {
		    	cout<<"\t\t\t\t........................................ Record Of "<<f_name_id<<" ........................................"<<endl;
		    	string info;
			
				while(math_file.good())
				{
				
				getline(math_file,info);
				cout<<info<<endl;
			
				}
			
			cout<<endl;
			math_file.close();
			/*
			
			ios::out | ios::app:
								ios output and ios append. ios output is used when the file is opened for output (to write)
								and ios append allows the written data to be stored at the end of the file instead of
								actually overwriting or rewriting the already existing data! They are basically flag used with file 
								stream
			*/
			
			
			//adding the additional information at the end of file instead of overwriting or manipulating existing data in file//
			math_file.open(f_name_id, ios::out | ios::app);
            cout<<endl;
            
			cout<<"Add a review to Book: "<<f_name_id<< "'s file... : \n";
			math_file<<endl;
            
        //for review about the book
            cout<<"Review : ";
			math_file<<"Review : ";
			getline(cin, review); 
			math_file << review << endl;
		//for Description of the book
            cout<<"Description : "; 
			math_file<<"Description : ";
			getline(cin, description); 
			math_file << description << endl;
		//for Availability of respective book book
            cout<<"Availability : "; 
			math_file<<"Availability : ";
			getline(cin, availability); 
			math_file << availability << endl;

			math_file<<"\n*************************************************************************";
       		cout<<"\n Information added sucessfully! \n"<<endl;
        		
			math_file.close();
			cout<<endl;
			
			system("pause");
            system("cls");
			mainPage();
			
			}
}

//method through which students can easily borrow books form library

void borrowMathematics(){
	
	fstream math_file;
    		cout<<"Enter the Book's file Title to be borrowed : ";
    	cin.ignore();
    		gets(f_name_id);
    		system("cls");
			math_file.open(f_name_id, ios::in);

    if (!math_file) {
        cout << "Error while opening the file!" << endl;
        mainPage();
        return;
    }

    cout << "Book found. You can proceed with borrowing this book: " << f_name_id << endl;
fstream std_file;
    cout << "Enter the Student's file title who is borrowing the book: ";
    gets(f_name_id);
    system("cls");
   std_file.open(f_name_id, ios::out | ios::app);

    if (!std_file) {
        cout << "Student does not exist." << endl;
        mainPage();
        return;
    }

    cout << "Student found. Borrowing the book now." << endl;

    string info;
    while (getline(math_file, info)) {
        std_file << info << endl;
        cout << info << endl;
    }

    cout << "Book borrowed successfully." << endl;

    math_file.close();
    std_file.close();
    mainPage();
}

bool ReturnBookMathematics()
{
	fstream math_file;
	string f_name_id;
	
	cout << "Enter the Book's file Title to be borrowed: ";
    cin.ignore();
    getline(cin, f_name_id);
    system("cls");
    
    math_file.open (f_name_id, ios::in);
    if (!math_file)
    {
    	cout << "Error while opening the file!" << endl;
        return false;
	}
	else
	{
		cout<< " You can borrow the  book "<<f_name_id<<endl;
	}
	
	 fstream std_file;
    cout << "Enter the Student's file title who is borrowing the book: ";
      getline(cin, f_name_id);
    system("cls");
    
    std_file.open(f_name_id, ios::in);
    if(!std_file)
    {
    	cout<<" student record does not exist : "<<endl;
    	return false;
	}
	else
	{
		cout<<" student found borrowing the book now : "<<endl;
	}
	std_file.close();
	
	
	std_file.open(f_name_id , ios::out | ios::app);
	
		 cout << endl;
    string info;
    while (getline(math_file, info)) {
        std_file << info << endl;
        cout << info << endl;
    }
	
	math_file.close();
    std_file.close();
    
    
    return true;
	
}

};

//class for the books of Programming (Child)
class Programming : public Books{
	protected:
		string review;
        string description;
        string availability;
		string author_Programming;
	public:
		//default construtor
		
		Programming()
		{
			title = "Empty";
			author_Programming = "Empty";
		}
		
		
		//setting books of Programming
		
		
		void setDataProgramming()
		{
			cout<<endl;
  			
			ofstream prog_file;
  			char f_name_id[200];
  			
  			  cout<<"\n\n\t\t\t...........Adding a Book...........";
			  cout<<"\n\nEnter the Book's file ID or Title : ";
  		cin.ignore();
  			gets(f_name_id);
  			prog_file.open(f_name_id);
  	
  		if(!f_name_id) {
			cout<<"\nError while opening the file\n";
			mainPage();
		  } else {

            cout<<"\n\n********************************************************************\n"<<endl;
			prog_file<<"\n********************************************************************\n"<<endl;
        //For Book title    
			cout<<"Title of the Book : ";
			prog_file<<"Title of the Book : ";
			getline(cin, title);
			prog_file<<title<<endl;
        //For Author name    
			cout<<"Author Name : ";
			prog_file<<"Author Name : ";
			getline(cin, author_Programming);
			prog_file<<author_Programming<<endl;
		//for Book id
            cout<<"Book ID : ";
			prog_file<<"Book ID : ";
			getline(cin, bookID);
			prog_file<<bookID<<endl;
		//for the edition of the book
            cout<<"Edition of Book : ";
			prog_file<<"Edition of Book : ";
			getline(cin, edition);
			prog_file<<edition<<endl;
		//for Number of copies of the book
            cout<<"Number of Copies : ";
			prog_file<<"Number of Copies : ";
			getline(cin, copies);
			prog_file<<copies<<endl;
		//for The Rack id where the book is placed in the library
            cout<<"Rack Number where Book is placed : ";
			prog_file<<"Rack Number where Book is placed : ";
			getline(cin, rack);
			prog_file<<rack<<endl;
        
//both functions included from header file "conio.h"//       
	system("pause");
	system("cls");
	cout<<"Information Added Successfully!"<<endl;
	mainPage();
		}
	}
	
	
	//delete a book from Programming category
	
	
		void deleteDataProgramming()
		{
			fstream prog_file;
    		cout<<"Enter the Book's File Name or ID to Delete : ";
    		cin.ignore();
    		gets(f_name_id);
    		system("cls");
			if(!f_name_id)	
		{
			cout<<"That File Of Book Does not Exist ."<<endl;
			system("pause");
			mainPage();
		}
		else
		{
			remove(f_name_id);
		    cout<<"\n\n\n\t\t\t Book "<<f_name_id<<" Data Deleted SuccessFully. "<<endl;
        }
        	system("pause");
        	system("cls");
        	mainPage();
	}
	//showing record of existing books
	void showDataProgramming(){
    	fstream prog_file;
    	cout<<"Enter the Book's file title to be opened : ";
    	cin.ignore();
    	gets(f_name_id);
    	system("cls");
		prog_file.open(f_name_id, ios::in);
			if(!prog_file)	
			{
				cout<<"Error while opening the file"<<endl;
				mainPage();
			} else {
		    	cout<<"\t\t\t\t........................................ Full Record of "<<f_name_id<<" ........................................"<<endl;
		    	string info;
		    
				while(prog_file.good())
				{				
					getline(prog_file,info);
					cout<<info<<endl;	
				}
				cout<<endl;
   		    }
        	system("pause");
        	system("cls");
       	 mainPage();
}

		//alter the record of existing books by adding more information

	void alterDataProgramming(){
    	fstream prog_file;
    		cout<<"Enter the Book's file Title to be opened : ";
    	cin.ignore();
    		gets(f_name_id);
    		system("cls");
			prog_file.open(f_name_id, ios::in);
		if(!prog_file)
			{
				cout<<"Error while opening the file!"<<endl;
				mainPage();
			} else {
		    	cout<<"\t\t\t\t........................................ Record Of "<<f_name_id<<" ........................................"<<endl;
		    	string info;
			
				while(prog_file.good())
				{
				
				getline(prog_file,info);
				cout<<info<<endl;
			
				}
			
			cout<<endl;
			prog_file.close();
			/*
			
			ios::out | ios::app:
								ios output and ios append. ios output is used when the file is opened for output (to write)
								and ios append allows the written data to be stored at the end of the file instead of
								actually overwriting or rewriting the already existing data! They are basically flag used with file 
								stream
			*/
			
			
			//adding the additional information at the end of file instead of overwriting or manipulating existing data in file//
			prog_file.open(f_name_id, ios::out | ios::app);
            cout<<endl;
            
			cout<<"Add a review to Book: "<<f_name_id<< "'s file... : \n";
			prog_file<<endl;
                            
        //for review about the book
            cout<<"Review : ";
			prog_file<<"Review : ";
			getline(cin, review); 
			prog_file << review << endl;
		//for Description of the book
            cout<<"Description : "; 
			prog_file<<"Description : ";
			getline(cin, description); 
			prog_file << description << endl;
		//for Availability of respective book book
            cout<<"Availability : "; 
			prog_file<<"Availability : ";
			getline(cin, availability); 
			prog_file << availability << endl;

			prog_file<<"\n*************************************************************************";
       		cout<<"\n Information added sucessfully! \n"<<endl;
        		
			prog_file.close();
			cout<<endl;
			
			system("pause");
            system("cls");
			mainPage();
			
			}
}

//method through which students can easily access and borrow boooks from library

void borrowProgramming(){
		fstream prog_file;
    		cout<<"Enter the Book's file Title to be borrowed : ";
    	cin.ignore();
    		gets(f_name_id);
    		system("cls");
			prog_file.open(f_name_id, ios::in);

    if (!prog_file) {
        cout << "Error while opening the file!" << endl;
        mainPage();
        return;
    }

    cout << "Book found. You can proceed with borrowing this book: " << f_name_id << endl;
fstream std_file;
    cout << "Enter the Student's file title who is borrowing the book: ";
    gets(f_name_id);
    system("cls");
   std_file.open(f_name_id, ios::out | ios::app);

    if (!std_file) {
        cout << "Student does not exist." << endl;
        mainPage();
        return;
    }

    cout << "Student found. Borrowing the book now." << endl;

    string info;
    while (getline(prog_file, info)) {
        std_file << info << endl;
        cout << info << endl;
    }

    cout << "Book borrowed successfully." << endl;

    prog_file.close();
    std_file.close();
    mainPage();
}

bool ReturnBookProgramming()
{
	fstream prog_file;
	string f_name_id;
	
	cout << "Enter the Book's file Title to be borrowed: ";
    cin.ignore();
    getline(cin, f_name_id);
    system("cls");
    
    prog_file.open (f_name_id, ios::in);
    if (!prog_file)
    {
    	cout << "Error while opening the file!" << endl;
        return false;
	}
	else
	{
		cout<< " You can borrow the  book "<<f_name_id<<endl;
	}
	
	 fstream std_file;
    cout << "Enter the Student's file title who is borrowing the book: ";
      getline(cin, f_name_id);
    system("cls");
    
    std_file.open(f_name_id, ios::in);
    if(!std_file)
    {
    	cout<<" student record does not exist : "<<endl;
    	return false;
	}
	else
	{
		cout<<" student found borrowing the book now : "<<endl;
	}
	std_file.close();
	
	
	std_file.open(f_name_id , ios::out | ios::app);
	
		 cout << endl;
    string info;
    while (getline(prog_file, info)) {
        std_file << info << endl;
        cout << info << endl;
    }
	
	prog_file.close();
    std_file.close();
    
    
    return true;
	
}

};

//class for the books of Chemistry (Child)
class Chemistry : public Books{
	protected:
		string review;
    	string description;
        string availability;
		string author_Chemistry;
	public:
		
		//default constructor
		Chemistry()
		{
			title = "Empty";
			author_Chemistry =  "Empty";
		}
		
		
		//setting books of Chemistry
		
		
		void setDataChemistry()
		{
			cout<<endl;
  			
			ofstream chem_file;
  			char f_name_id[200];
  			
  			  cout<<"\n\n\t\t\t...........Adding a Book...........";
			  cout<<"\n\nEnter the Book's file ID or Title : ";
  		cin.ignore();
  			gets(f_name_id);
  			chem_file.open(f_name_id);
  	
  		if(!f_name_id) {
			cout<<"\nError while opening the file\n";
			mainPage();
		  } else {

            cout<<"\n\n********************************************************************\n"<<endl;
			chem_file<<"\n********************************************************************\n"<<endl;
        //For Book title    
			cout<<"Title of the Book : ";
			chem_file<<"Title of the Book : ";
			getline(cin, title);
			chem_file<<title<<endl;
        //For Author name    
			cout<<"Author Name : ";
			chem_file<<"Author Name : ";
			getline(cin, author_Chemistry);
			chem_file<<author_Chemistry<<endl;
		//for Book id
            cout<<"Book ID : ";
			chem_file<<"Book ID : ";
			getline(cin, bookID);
			chem_file<<bookID<<endl;
		//for the edition of the book
            cout<<"Edition of Book : ";
			chem_file<<"Edition of Book : ";
			getline(cin, edition);
			chem_file<<edition<<endl;
		//for Number of copies of the book
            cout<<"Number of Copies : ";
			chem_file<<"Number of Copies : ";
			getline(cin, copies);
			chem_file<<copies<<endl;
		//for The Rack id where the book is placed in the library
            cout<<"Rack Number where Book is placed : ";
			chem_file<<"Rack Number where Book is placed : ";
			getline(cin, rack);
			chem_file<<rack<<endl;
        
//both functions included from header file "conio.h"//       
	system("pause");
	system("cls");
	cout<<"Information Added Successfully!"<<endl;
	mainPage();
		}
	}
	
	
		//delete a book from Chemistry category
	
	
		void deleteDataChemistry()
		{
			fstream chem_file;
    		cout<<"Enter the Book's File Name or ID to Delete : ";
    		cin.ignore();
    		gets(f_name_id);
    		system("cls");
			if(!f_name_id)	
		{
			cout<<"That File Of Book Does not Exist ."<<endl;
			system("pause");
			mainPage();
		}
		else
		{
			remove(f_name_id);
		    cout<<"\n\n\n\t\t\t Book "<<f_name_id<<" Data Deleted SuccessFully. "<<endl;
        }
        	system("pause");
        	system("cls");
        	mainPage();
	}
	
	//showing record of existing books
	void showDataChemistry(){
    	fstream chem_file;
    	cout<<"Enter the Book's file title to be opened : ";
    	cin.ignore();
    	gets(f_name_id);
    	system("cls");
		chem_file.open(f_name_id, ios::in);
			if(!chem_file)	
			{
				cout<<"Error while opening the file"<<endl;
				mainPage();
			} else {
		    	cout<<"\t\t\t\t........................................ Full Record of "<<f_name_id<<" ........................................"<<endl;
		    	string info;
		    
				while(chem_file.good())
				{				
					getline(chem_file,info);
					cout<<info<<endl;	
				}
				cout<<endl;
   		    }
        	system("pause");
        	system("cls");
       	 mainPage();
}
	
//alter the record of existing books by adding more information

	void alterDataChemistry(){
    	fstream chem_file;
    		cout<<"Enter the Book's file Title to be opened : ";
    	cin.ignore();
    		gets(f_name_id);
    		system("cls");
			chem_file.open(f_name_id, ios::in);
		if(!chem_file)
			{
				cout<<"Error while opening the file!"<<endl;
				mainPage();
			} else {
		    	cout<<"\t\t\t\t........................................ Record Of "<<f_name_id<<" ........................................"<<endl;
		    	string info;
			
				while(chem_file.good())
				{
				
				getline(chem_file,info);
				cout<<info<<endl;
			
				}
			
			cout<<endl;
			chem_file.close();
			/*
			
			ios::out | ios::app:
								ios output and ios append. ios output is used when the file is opened for output (to write)
								and ios append allows the written data to be stored at the end of the file instead of
								actually overwriting or rewriting the already existing data! They are basically flag used with file 
								stream
			*/
			
			
			//adding the additional information at the end of file instead of overwriting or manipulating existing data in file//
			chem_file.open(f_name_id, ios::out | ios::app);
            cout<<endl;
            
			cout<<"Add a review to Book: "<<f_name_id<< "'s file... : \n";
			chem_file<<endl;
            
        //for review about the book
            cout<<"Review : ";
			chem_file<<"Review : ";
			getline(cin, review); 
			chem_file << review << endl;
		//for Description of the book
            cout<<"Description : "; 
			chem_file<<"Description : ";
			getline(cin, description); 
			chem_file << description << endl;
		//for Availability of respective book book
            cout<<"Availability : "; 
			chem_file<<"Availability : ";
			getline(cin, availability); 
			chem_file << availability << endl;

			chem_file<<"\n*************************************************************************";
       		cout<<"\n Information added sucessfully! \n"<<endl;
        		
			chem_file.close();
			cout<<endl;
			
			system("pause");
            system("cls");
			mainPage();
			
			}
}

//method through which student can easily borrow book from library

void borrowChemistry(){
	
		fstream chem_file;
    		cout<<"Enter the Book's file Title to be borrowed : ";
    	cin.ignore();
    		gets(f_name_id);
    		system("cls");
			chem_file.open(f_name_id, ios::in);

    if (!chem_file) {
        cout << "Error while opening the file!" << endl;
        return;
    }

    cout << "Book found. You can proceed with borrowing this book: " << f_name_id << endl;
fstream std_file;
    cout << "Enter the Student's file title who is borrowing the book: ";
    gets(f_name_id);
    system("cls");
   std_file.open(f_name_id, ios::out | ios::app);

    if (!std_file) {
        cout << "Student does not exist." << endl;
        return;
    }

    cout << "Student found. Borrowing the book now." << endl;

    string info;
    while (getline(chem_file, info)) {
        std_file << info << endl;
        cout << info << endl;
    }

    cout << "Book borrowed successfully." << endl;

    chem_file.close();
    std_file.close();
}
	
bool ReturnBookChemistry()
{
	fstream chem_file;
	string f_name_id;
	
	cout << "Enter the Book's file Title to be borrowed: ";
    cin.ignore();
    getline(cin, f_name_id);
    system("cls");
    
    chem_file.open (f_name_id, ios::in);
    if (!chem_file)
    {
    	cout << "Error while opening the file!" << endl;
        return false;
	}
	else
	{
		cout<< " You can borrow the  book "<<f_name_id<<endl;
	}
	
	 fstream std_file;
    cout << "Enter the Student's file title who is borrowing the book: ";
      getline(cin, f_name_id);
    system("cls");
    
    std_file.open(f_name_id, ios::in);
    if(!std_file)
    {
    	cout<<" student record does not exist : "<<endl;
    	return false;
	}
	else
	{
		cout<<" student found borrowing the book now : "<<endl;
	}
	std_file.close();
	
	
	std_file.open(f_name_id , ios::out | ios::app);
	
		 cout << endl;
    string info;
    while (getline(chem_file, info)) {
        std_file << info << endl;
        cout << info << endl;
    }
	
	chem_file.close();
    std_file.close();
    
    
    return true;
	
}
	
};


//class for the books of Biology (Child)
class Biology : public Books{
	protected:
		string author_Biology;
		string review;
        string description;
        string availability;
	public:
		//default constructor
		
		Biology()
		{
			title = "Empty";
			title = "Empty";
		}
		
			//setting books of Biology
		
		
		void setDataBiology()
		{
			cout<<endl;
  			
			ofstream bio_file;
  			char f_name_id[200];
  			
  			  cout<<"\n\n\t\t\t...........Adding a Book...........";
			  cout<<"\n\nEnter the Book's file ID or Title : ";
  		cin.ignore();
  			gets(f_name_id);
  			bio_file.open(f_name_id);
  	
  		if(!f_name_id) {
			cout<<"\nError while opening the file\n";
			mainPage();
		  } else {

            cout<<"\n\n********************************************************************\n"<<endl;
			bio_file<<"\n********************************************************************\n"<<endl;
        //For Book title    
			cout<<"Title of the Book : ";
			bio_file<<"Title of the Book : ";
			getline(cin, title);
			bio_file<<title<<endl;
        //For Author name    
			cout<<"Author Name : ";
			bio_file<<"Author Name : ";
			getline(cin, author_Biology);
			bio_file<<author_Biology<<endl;
		//for Book id
            cout<<"Book ID : ";
			bio_file<<"Book ID : ";
			getline(cin, bookID);
			bio_file<<bookID<<endl;
		//for the edition of the book
            cout<<"Edition of Book : ";
			bio_file<<"Edition of Book : ";
			getline(cin, edition);
			bio_file<<edition<<endl;
		//for Number of copies of the book
            cout<<"Number of Copies : ";
			bio_file<<"Number of Copies : ";
			getline(cin, copies);
			bio_file<<copies<<endl;
		//for The Rack id where the book is placed in the library
            cout<<"Rack Number where Book is placed : ";
			bio_file<<"Rack Number where Book is placed : ";
			getline(cin, rack);
			bio_file<<rack<<endl;
        
//both functions included from header file "conio.h"//       
	system("pause");
	system("cls");
	cout<<"Information Added Successfully!"<<endl;
	mainPage();
		}
	}
		//delete a book from Biology category
		void deleteDataBiology()
		{
			fstream bio_file;
    		cout<<"Enter the Book's File Name or ID to Delete : ";
    		cin.ignore();
    		gets(f_name_id);
    		system("cls");
			if(!f_name_id)	
		{
			cout<<"That File Of Book Does not Exist ."<<endl;
			system("pause");
			mainPage();
		}
		else
		{
			remove(f_name_id);
		    cout<<"\n\n\n\t\t\t Book "<<f_name_id<<" Data Deleted SuccessFully. "<<endl;
        }
        	system("pause");
        	system("cls");
        	mainPage();
	}
	
	//showing record of existing books
	void showDataBiology(){
    	fstream bio_file;
    	cout<<"Enter the Book's file title to be opened : ";
    	cin.ignore();
    	gets(f_name_id);
    	system("cls");
		bio_file.open(f_name_id, ios::in);
			if(!bio_file)	
			{
				cout<<"Error while opening the file"<<endl;
				mainPage();
			} else {
		    	cout<<"\t\t\t\t........................................ Full Record of "<<f_name_id<<" ........................................"<<endl;
		    	string info;
		    
				while(bio_file.good())
				{				
					getline(bio_file,info);
					cout<<info<<endl;	
				}
				cout<<endl;
   		    }
        	system("pause");
        	system("cls");
       	 mainPage();
}
	
//alter the record of existing books by adding more information

	void alterDataBilogy(){
    	fstream bio_file;
    		cout<<"Enter the Book's file Title to be opened : ";
    	cin.ignore();
    		gets(f_name_id);
    		system("cls");
			bio_file.open(f_name_id, ios::in);
		if(!bio_file)
			{
				cout<<"Error while opening the file!"<<endl;
				mainPage();
			} else {
		    	cout<<"\t\t\t\t........................................ Record Of "<<f_name_id<<" ........................................"<<endl;
		    	string info;
			
				while(bio_file.good())
				{
				
				getline(bio_file,info);
				cout<<info<<endl;
			
				}
			
			cout<<endl;
			bio_file.close();
			/*
			
			ios::out | ios::app:
								ios output and ios append. ios output is used when the file is opened for output (to write)
								and ios append allows the written data to be stored at the end of the file instead of
								actually overwriting or rewriting the already existing data! They are basically flag used with file 
								stream
			*/
			
			
			//adding the additional information at the end of file instead of overwriting or manipulating existing data in file//
			bio_file.open(f_name_id, ios::out | ios::app);
            cout<<endl;
            
			cout<<"Add a review to Book: "<<f_name_id<< "'s file... : \n";
			bio_file<<endl;
            
        //for review about the book
            cout<<"Review : ";
			bio_file<<"Review : ";
			getline(cin, review); 
			bio_file<<review<<endl;
		//for Description of the book
            cout<<"Description : "; 
			bio_file<<"Description : ";
			getline(cin, description); 
			bio_file<<description<<endl;
		//for Availability of respective book book
            cout<<"Availability : "; 
			bio_file<<"Availability : ";
			getline(cin, availability); 
			bio_file<<availability<<endl;

			bio_file<<"\n*************************************************************************";
       		cout<<"\n Information added sucessfully! \n"<<endl;
        		
			bio_file.close();
			cout<<endl;
			
			system("pause");
            system("cls");
			mainPage();
			
			}
}

//method through which student can easily borrow the book from library
void borrowBiology()
{
	fstream bio_file;
    		cout<<"Enter the Book's file Title to be borrowed : ";
    	cin.ignore();
    		gets(f_name_id);
    		system("cls");
			bio_file.open(f_name_id, ios::in);

    if (!bio_file) {
        cout << "Error while opening the file!" << endl;
        return;
    }

    cout << "Book found. You can proceed with borrowing this book: " << f_name_id << endl;
fstream std_file;
    cout << "Enter the Student's file title who is borrowing the book: ";
    gets(f_name_id);
    system("cls");
   std_file.open(f_name_id, ios::out | ios::app);

    if (!std_file) {
        cout << "Student does not exist." << endl;
        return;
    }

    cout << "Student found. Borrowing the book now." << endl;

    string info;
    while (getline(bio_file, info)) {
        std_file << info << endl;
        cout << info << endl;
    }

    cout << "Book borrowed successfully." << endl;

    bio_file.close();
    std_file.close();
}

bool ReturnBookBiology()
{
	fstream bio_file;
	string f_name_id;
	
	cout << "Enter the Book's file Title to be borrowed: ";
    cin.ignore();
    getline(cin, f_name_id);
    system("cls");
    
    bio_file.open (f_name_id, ios::in);
    if (!bio_file)
    {
    	cout << "Error while opening the file!" << endl;
        return false;
	}
	else
	{
		cout<< " You can borrow the  book "<<f_name_id<<endl;
	}
	
	 fstream std_file;
    cout << "Enter the Student's file title who is borrowing the book: ";
      getline(cin, f_name_id);
    system("cls");
    
    std_file.open(f_name_id, ios::in);
    if(!std_file)
    {
    	cout<<" student record does not exist : "<<endl;
    	return false;
	}
	else
	{
		cout<<" student found borrowing the book now : "<<endl;
	}
	std_file.close();
	
	
	std_file.open(f_name_id , ios::out | ios::app);
	
		 cout << endl;
    string info;
    while (getline(bio_file, info)) {
        std_file << info << endl;
        cout << info << endl;
    }
	
	bio_file.close();
    std_file.close();
    
    
    return true;
	
}

};



void dashboardScreenReturn()
{
		cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t  LIBRARY MANAGEMENT SYSTEM \n\n";	
cout<<"\n\n\t\t\t\t\t\tPlease,  Choose from the following Options: \n\n";
cout<<"\t\t\t\t\t\t _________________________________________________________________ \n";
cout<<"\t\t\t\t\t\t|                                           	                  |\n";
cout<<"\t\t\t\t\t\t|             1.  -> Return a Book of English                     |\n";
cout<<"\t\t\t\t\t\t|             2.  -> Return a Book of Mathematics                 |\n";
cout<<"\t\t\t\t\t\t|             3.  -> Return a Book of Programming	          |\n";
cout<<"\t\t\t\t\t\t|             4.  -> Return a Book of Chemistry                   |\n";
cout<<"\t\t\t\t\t\t|             5.  -> Return a Book of Biology	                  |\n";
cout<<"\t\t\t\t\t\t|             6.  -> Back                                         |\n";
cout<<"\t\t\t\t\t\t|_________________________________________________________________|\n\n";
}

void dashboardScreenStudent()
{
		cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t  LIBRARY MANAGEMENT SYSTEM \n\n";	
cout<<"\n\n\t\t\t\t\t\tPlease,  Choose from the following Options: \n\n";
cout<<"\t\t\t\t\t\t _________________________________________________________________ \n";
cout<<"\t\t\t\t\t\t|                                           	                  |\n";
cout<<"\t\t\t\t\t\t|             1.  -> Add a Student Record		                 |\n";
cout<<"\t\t\t\t\t\t|             2.  -> Delete a Student Record		                 |\n";
cout<<"\t\t\t\t\t\t|             3.  -> Display Student Record			             |\n";
cout<<"\t\t\t\t\t\t|             4.  -> Back                                         |\n";
cout<<"\t\t\t\t\t\t|_________________________________________________________________|\n\n";
}


void dashboardScreenShow()
{
		cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t  LIBRARY MANAGEMENT SYSTEM \n\n";	
cout<<"\n\n\t\t\t\t\t\tPlease,  Choose from the following Options: \n\n";
cout<<"\t\t\t\t\t\t _________________________________________________________________ \n";
cout<<"\t\t\t\t\t\t|                                           	                  |\n";
cout<<"\t\t\t\t\t\t|             1.  -> Show Book Record for English                 |\n";
cout<<"\t\t\t\t\t\t|             2.  -> Show Book Record for Mathematics             |\n";
cout<<"\t\t\t\t\t\t|             3.  -> Show Book Record for Programming             |\n";
cout<<"\t\t\t\t\t\t|             4.  -> Show Book Record for Chemistry               |\n";
cout<<"\t\t\t\t\t\t|             5.  -> Show Book Record for Biology                 |\n";
cout<<"\t\t\t\t\t\t|             6.  -> Back                                         |\n";
cout<<"\t\t\t\t\t\t|_________________________________________________________________|\n\n";
}

void dashboardScreenAdd()
{
		cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t  LIBRARY MANAGEMENT SYSTEM \n\n";	
cout<<"\n\n\t\t\t\t\t\tPlease,  Choose from the following Options: \n\n";
cout<<"\t\t\t\t\t\t _________________________________________________________________ \n";
cout<<"\t\t\t\t\t\t|                                           	                  |\n";
cout<<"\t\t\t\t\t\t|             1.  -> Add Book Information for English             |\n";
cout<<"\t\t\t\t\t\t|             2.  -> Add Book Information for Mathematics         |\n";
cout<<"\t\t\t\t\t\t|             3.  -> Add Book Information for Programming         |\n";
cout<<"\t\t\t\t\t\t|             4.  -> Add Book Information for Chemistry           |\n";
cout<<"\t\t\t\t\t\t|             5.  -> Add Book Information for Biology             |\n";
cout<<"\t\t\t\t\t\t|             6.  -> Back                                         |\n";
cout<<"\t\t\t\t\t\t|_________________________________________________________________|\n\n";
}
void dashboardScreenEnter(){
		cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t  LIBRARY MANAGEMENT SYSTEM \n\n";	
cout<<"\n\n\t\t\t\t\t\tPlease,  Choose from the following Options: \n\n";
cout<<"\t\t\t\t\t\t _________________________________________________________________ \n";
cout<<"\t\t\t\t\t\t|                                           	                  |\n";
cout<<"\t\t\t\t\t\t|             1.  -> Enter New Book for English                   |\n";
cout<<"\t\t\t\t\t\t|             2.  -> Enter New Book for Mathematics               |\n";
cout<<"\t\t\t\t\t\t|             3.  -> Enter New Book for Programming	          |\n";
cout<<"\t\t\t\t\t\t|             4.  -> Enter New Book for Chemistry                 |\n";
cout<<"\t\t\t\t\t\t|             5.  -> Enter New Book for Biology	                  |\n";
cout<<"\t\t\t\t\t\t|             6.  -> Back                                         |\n";
cout<<"\t\t\t\t\t\t|_________________________________________________________________|\n\n";
}

void dashboardScreenDelete()
{
		cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t  LIBRARY MANAGEMENT SYSTEM \n\n";	
cout<<"\n\n\t\t\t\t\t\tPlease,  Choose from the following Options: \n\n";
cout<<"\t\t\t\t\t\t _________________________________________________________________ \n";
cout<<"\t\t\t\t\t\t|                                           	                  |\n";
cout<<"\t\t\t\t\t\t|             1.  -> Delete a Book of English                     |\n";
cout<<"\t\t\t\t\t\t|             2.  -> Delete a Book of Mathematics                 |\n";
cout<<"\t\t\t\t\t\t|             3.  -> Delete a Book of Programming	          |\n";
cout<<"\t\t\t\t\t\t|             4.  -> Delete a Book of Chemistry                   |\n";
cout<<"\t\t\t\t\t\t|             5.  -> Delete a Book of Biology	                  |\n";
cout<<"\t\t\t\t\t\t|             6.  -> Back                                         |\n";
cout<<"\t\t\t\t\t\t|_________________________________________________________________|\n\n";
}


void dashboardScreenBorrow()
{
		cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t  LIBRARY MANAGEMENT SYSTEM \n\n";	
cout<<"\n\n\t\t\t\t\t\tPlease,  Choose from the following Options: \n\n";
cout<<"\t\t\t\t\t\t _________________________________________________________________ \n";
cout<<"\t\t\t\t\t\t|                                           	                  |\n";
cout<<"\t\t\t\t\t\t|             1.  -> Borrow a Book of English                     |\n";
cout<<"\t\t\t\t\t\t|             2.  -> Borrow a Book of Mathematics                 |\n";
cout<<"\t\t\t\t\t\t|             3.  -> Borrow a Book of Programming	          |\n";
cout<<"\t\t\t\t\t\t|             4.  -> Borrow a Book of Chemistry                   |\n";
cout<<"\t\t\t\t\t\t|             5.  -> Borrow a Book of Biology	                  |\n";
cout<<"\t\t\t\t\t\t|             6.  -> Back                                         |\n";
cout<<"\t\t\t\t\t\t|_________________________________________________________________|\n\n";
}

void interfaceScreen(){
	cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t  LIBRARY MANAGEMENT SYSTEM \n\n";	
cout<<"\n\n\t\t\t\t\t\tPlease,  Choose from the following Options: \n\n";
cout<<"\t\t\t\t\t\t _________________________________________________________________ \n";
cout<<"\t\t\t\t\t\t|                                           	                  |\n";
cout<<"\t\t\t\t\t\t|             1.  -> Enter New Book Record                        |\n";
cout<<"\t\t\t\t\t\t|             2.  -> Add Book Information                         |\n";
cout<<"\t\t\t\t\t\t|             3.  -> Delete a Book Record             	          |\n";
cout<<"\t\t\t\t\t\t|             4.  -> Show Book Records			          |\n";
cout<<"\t\t\t\t\t\t|             5.  -> Borrow a Book                                |\n";
cout<<"\t\t\t\t\t\t|             6.  -> Return a Book                                |\n";
cout<<"\t\t\t\t\t\t|             7.  -> Add a Student Information                    |\n";
cout<<"\t\t\t\t\t\t|             8.  -> Show the Student Information                 |\n";
cout<<"\t\t\t\t\t\t|             9.  -> Delete the Student Information               |\n";
cout<<"\t\t\t\t\t\t|            10.  -> Information About the Library                |\n";
cout<<"\t\t\t\t\t\t|            11.  -> Logout                                       |\n";
cout<<"\t\t\t\t\t\t|            12.  -> Exit the Program                             |\n";
cout<<"\t\t\t\t\t\t|_________________________________________________________________|\n\n";
}


/*
Add
Delete
Alter
Show
Borrow
*/

/*

--Classes--*

Login
Books
English
Math
Student
Programming
Chemistry
Biology
*/

void pageShuffle(){
	Login l2;
	cout<<endl;
	cout<<endl;
	cout<<endl;
	cout<<endl;
	cout<<endl;
	cout<<endl;
	cout<<endl;
	cout<<endl;
	cout<<"\t\t\t\t\t\t _________________________________________________________________ \n";
	cout<<"\t\t\t\t\t\t|                                           	                  |\n";
	cout<<"\t\t\t\t\t\t|                    LIBRARY MANAGEMENT SYSTEM                    |\n";
	cout<<"\t\t\t\t\t\t|_________________________________________________________________|\n\n";
	cout<<endl;
	cout << "\n\t\t\t*****************************************************************************************\n";
	cout << endl;
	cout << "\n\t\t\tPlease Wait While We Redirect You to the Login Page!"<<endl;
//	sleep(2);
	system("CLS");
	l2.loginUI();
}

void mainPage(){
	
	
	int choice;
	int add;
	int enter;
	int del;
	int show;
	int borrow;
	int returnBook;
	
	//-------------------Declaring Objects---------------------//

	Login l1;
	Books b1;
	English e1;
	Mathematics m1;
	Programming p1;
	Chemistry c1;
	Biology b2;
	Student s1;
		
	//Interface Screen function shows the basic Ui to the user through which he could see different 
	//functionalities of the program
	a:
	interfaceScreen();
	//skipping lines
	cout<<endl;
	cout<<"\n\t\t\t\t\t\t*******************************************************************\n"<<endl;
	cout<<endl;
	//--------------------------taking user choice as input-----------------------------//
	cout << "Enter your Choice: ";
	cin >> choice ;
	//system clear screen
	system("CLS");
	//switch for main functionality
	//nested switch case
	switch(choice)
	{
		//case 1 for Enter book Record
		case 1:
			dashboardScreenEnter();
			cout<<endl;
			cout<<"\n\t\t\t\t\t\t*******************************************************************\n"<<endl;
			cout<<endl;
			cout << "Please Enter your Choice: ";
			cin >> enter;
			//nested switch for Entering Data to various classes of books
			switch(enter){
				case 1: //english
					cout<<"Please Wait while we Redirect!"<<endl;
					sleep(2);
					system("CLS");
					e1.setDataEnglish();
					break;
				case 2: //mathematics
					cout<<"Please Wait while we Redirect!"<<endl;
					sleep(2);
					system("CLS");
					m1.setDataMathematics();
					break;
				case 3: //programming
					cout<<"Please Wait while we Redirect!"<<endl;
					sleep(2);
					system("CLS");
					p1.setDataProgramming();
					break;
				case 4: //Chemistry
					cout<<"Please Wait while we Redirect!"<<endl;
					sleep(2);
					system("CLS");
					c1.setDataChemistry();
					break;
				case 5: //Biology
					cout<<"Please Wait while we Redirect!"<<endl;
					sleep(2);
					system("CLS");
					b2.setDataBiology();
					break;
				case 6:
					cout<<"Redirecting your Request!"<<endl;
					sleep(2);
					//redirects to the main page of user selection
					goto a;
					break;
				default: 
					cout<<"\n\t\t--------------Invalid Selection!------------------\n";
					cout<<"\n\t\t-------Please Sign In Again to Continue-------\n";
					sleep(2);
					system("CLS");
					l1.SignIn();
					break;
			}
			break;
		// case 2 for Add more book information
		case 2:
			dashboardScreenAdd();
cout<<endl;
			cout<<"\n\t\t\t\t\t\t*******************************************************************\n"<<endl;
			cout<<endl;
			cout << "Please Enter your Choice: ";
			cin >> add;
			//nested switch for Entering Data to various classes of books
			switch(add){
				case 1: //english
					cout<<"Please Wait while we Redirect!"<<endl;
					sleep(2);
					system("CLS");
					e1.alterDataEng();
					break;
				case 2: //mathematics
					cout<<"Please Wait while we Redirect!"<<endl;
					sleep(2);
					system("CLS");
					m1.alterDataMathematics();
					break;
				case 3: //programming
					cout<<"Please Wait while we Redirect!"<<endl;
					sleep(2);
					system("CLS");
					p1.alterDataProgramming();
					break;
				case 4: //Chemistry
					cout<<"Please Wait while we Redirect!"<<endl;
					sleep(2);
					system("CLS");
					c1.alterDataChemistry();
					break;
				case 5: //Biology
					cout<<"Please Wait while we Redirect!"<<endl;
					sleep(2);
					system("CLS");
					b2.alterDataBilogy();
					break;
				case 6:
					cout<<"Redirecting your Request!"<<endl;
					sleep(2);
					//redirects to the main page of user selection
					goto a;
					break;
				default: 
					cout<<"\n\t\t--------------Invalid Selection!------------------\n";
					cout<<"\n\t\t-------Please Sign In Again to Continue-------\n";
					sleep(2);
					system("CLS");
					l1.SignIn();
					break;
			}
			break;
		//case 3 to delete the book data
		case 3:
			dashboardScreenDelete();
cout<<endl;
			cout<<"\n\t\t\t\t\t\t*******************************************************************\n"<<endl;
			cout<<endl;
			cout << "Please Enter your Choice: ";
			cin >> del;
			//nested switch for Entering Data to various classes of books
			switch(del){
				case 1: //english
					cout<<"Please Wait while we Redirect!"<<endl;
					sleep(2);
					system("CLS");
					e1.deleteDataEnglish();
					break;
				case 2: //mathematics
					cout<<"Please Wait while we Redirect!"<<endl;
					sleep(2);
					system("CLS");
					m1.deleteDataMathematics();
					break;
				case 3: //programming
					cout<<"Please Wait while we Redirect!"<<endl;
					sleep(2);
					system("CLS");
					p1.deleteDataProgramming();
					break;
				case 4: //Chemistry
					cout<<"Please Wait while we Redirect!"<<endl;
					sleep(2);
					system("CLS");
					c1.deleteDataChemistry();
					break;
				case 5: //Biology
					cout<<"Please Wait while we Redirect!"<<endl;
					sleep(2);
					system("CLS");
					b2.deleteDataBiology();
					break;
				case 6:
					cout<<"Redirecting your Request!"<<endl;
					sleep(2);
					//redirects to the main page of user selection
					goto a;
					break;
				default: 
					cout<<"\n\t\t--------------Invalid Selection!------------------\n";
					cout<<"\n\t\t-------Please Sign In Again to Continue-------\n";
					sleep(2);
					system("CLS");
					l1.SignIn();
					break;
			}
			break;
		//case 4 to show all the data of books selected
		case 4:
			dashboardScreenShow();
cout<<endl;
			cout<<"\n\t\t\t\t\t\t*******************************************************************\n"<<endl;
			cout<<endl;
			cout << "Please Enter your Choice: ";
			cin >> show;
			//nested switch for Entering Data to various classes of books
			switch(show){
				case 1: //english
					cout<<"Please Wait while we Redirect!"<<endl;
					sleep(2);
					system("CLS");
					e1.showDataEng();
					break;
				case 2: //mathematics
					cout<<"Please Wait while we Redirect!"<<endl;
					sleep(2);
					system("CLS");
					m1.showDataMath();
					break;
				case 3: //programming
					cout<<"Please Wait while we Redirect!"<<endl;
					sleep(2);
					system("CLS");
					p1.showDataProgramming();
					break;
				case 4: //Chemistry
					cout<<"Please Wait while we Redirect!"<<endl;
					sleep(2);
					system("CLS");
					c1.showDataChemistry();
					break;
				case 5: //Biology
					cout<<"Please Wait while we Redirect!"<<endl;
					sleep(2);
					system("CLS");
					b2.showDataBiology();
					break;
				case 6:
					cout<<"Redirecting your Request!"<<endl;
					sleep(2);
					//redirects to the main page of user selection
					goto a;
					break;
				default: 
					cout<<"\n\t\t--------------Invalid Selection!------------------\n";
					cout<<"\n\t\t-------Please Sign In Again to Continue-------\n";
					sleep(2);
					system("CLS");
					l1.SignIn();
					break;
			}
			break;
//		case 5 for borrow the book method
		case 5:
			dashboardScreenBorrow();
			cout<<endl;
			cout<<"\n\t\t\t\t\t\t*******************************************************************\n"<<endl;
			cout<<endl;
			cout << "Please Enter your Choice: ";
			cin >> borrow;
			switch(borrow)
			{
				case 1 : //english
					cout<<"Please Wait while we Redirect!"<<endl;
					sleep(2);
					system("CLS");
					e1.borrowEnglish();
					break;
				case 2 : //math
					cout<<"Please Wait while we Redirect!"<<endl;
					sleep(2);
					system("CLS");
					m1.borrowMathematics();
					break;
				case 3 : //programming
					cout<<"Please Wait while we Redirect!"<<endl;
					sleep(2);
					system("CLS");
					p1.borrowProgramming();
					break;
				case 4 : //chemistry
					cout<<"Please Wait while we Redirect!"<<endl;
					sleep(2);
					system("CLS");
					c1.borrowChemistry();
					break;
				case 5 : //biology
					cout<<"Please Wait while we Redirect!"<<endl;
					sleep(2);
					system("CLS");
					b2.borrowBiology();
					break;
				default:
					cout<<"\n\t\t--------------Invalid Selection!------------------\n";
					cout<<"\n\t\t-------Please Sign In Again to Continue-------\n";
					sleep(2);
					system("CLS");
					l1.SignIn();
					break;
			}
			break;
//		case 6 to Return a book borrowed from the university
		case 6 :
			dashboardScreenReturn();
			cout<<endl;
			cout<<"\n\t\t\t\t\t\t*******************************************************************\n"<<endl;
			cout<<endl;
			cout << "Please Enter your Choice: ";
			cin >> returnBook;
			switch(returnBook){
				case 1 : //english
					cout<<"Please Wait while we Redirect!"<<endl;
					sleep(2);
					system("CLS");
					e1.ReturnBookEnglish();
					break;
				case 2 : //math
					cout<<"Please Wait while we Redirect!"<<endl;
					sleep(2);
					system("CLS");
					m1.ReturnBookMathematics();
					break;
				case 3 : //programming
					cout<<"Please Wait while we Redirect!"<<endl;
					sleep(2);
					system("CLS");
					p1.ReturnBookProgramming();
					break;
				case 4 : //chemistry
					cout<<"Please Wait while we Redirect!"<<endl;
					sleep(2);
					system("CLS");
					c1.ReturnBookChemistry();
					break;
				case 5 : //biology
					cout<<"Please Wait while we Redirect!"<<endl;
					sleep(2);
					system("CLS");
					b2.ReturnBookBiology();
					break;
				default:
					cout<<"\n\t\t--------------Invalid Selection!------------------\n";
					cout<<"\n\t\t-------Please Sign In Again to Continue-------\n";
					sleep(2);
					system("CLS");
					l1.SignIn();
					break;
			}
			break;
//		case 7 to set the data of a student
		case 7 :
			cout<<"Please Wait while we Redirect!"<<endl;
			sleep(2);
			system("CLS");
			s1.setdataStudent();
			break;
//		case 8 to show the student data
		case 8 :
			cout<<"Please Wait while we Redirect!"<<endl;
			sleep(2);
			system("CLS");
			s1.showDataStudent();
			break;
//		case 9 to delete the data of the Student
		case 9 :
			cout<<"Please Wait while we Redirect!"<<endl;
			sleep(2);
			system("CLS");
			s1.deleteDataStudent();
			break;
//		case 10 to display the information about the library 
		case 10 :
			b1.infoLibrary();
			break;
//		case 10 to get back to the login screen
		case 11 :
			cout<<"\n\t\t\t\t\t-----------------------Thanks For Using Library Management System-------------------------\n"<<endl;
			cout<<"\n\t\t\t\t\t------------------------------------Logging Out-------------------------------------------\n"<<endl;
			l1.loginUI();
			break;
//		case 11 to exit the program
		case 12 :
			cout<<"\n\t\t\t\t\t-----------------------Thanks For Using Library Management System-------------------------\n"<<endl;
			//sleep event works with values taken in seconds while pause methods works with values taken in milliseconds
			sleep(3); 
			break;
//		default case for exception
		default:
			cout<<endl;
			cout<<"\t\t\t\t-------------------Invalid Selection of Choice Program is Exiting!---------------------\n";
			sleep(2);
			break;
	}
	
}

//main function
int main()
{
	pageShuffle();
}