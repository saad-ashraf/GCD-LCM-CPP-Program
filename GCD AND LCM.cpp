#include <iostream>
#include<stdlib.h>
#include<time.h>  
#include<windows.h>
#include<mmsystem.h>
#include<algorithm>
using namespace std;

                     //     GCD FOR 2 NUMBER
int gcd2()
{
	int n1, n2;
	cout << " Enter the two numbers you want to find the GCD and LCM of : \n\n";
    cout << " First No : ";
    cin >> n1;
    cout << " Second No : ";
    cin >> n2;
    cout<<endl<<endl<<"-------------------------------------------------------------";
	
//  int  maxi=max(n1,n2);
	int gcd=1;
	 for ( int i = 1; i < 1000; i++)
    {
        if ((n1 % i == 0) && (n2 % i == 0))
        {
             gcd = i;          
        }
        
    }

	return gcd;
	
}


                     //     GCD FOR 3 NUMBER
int gcd3()
{
	int n1, n2, n3,a;
	cout << " Enter the three numbers you want to find the GCD  \n\n";
    cout << " First No   : ";
    cin >> n1;
    cout << " Second No  : ";
    cin >> n2;
    cout << " Third no.  : ";
    cin >>n2;
    cout<<endl<<endl<<"-------------------------------------------------------------";
	
   a=max(n1,n2);
       a=max(a,n3);
	int gcd=1;
	 for ( int i = 1; i < a; i++)
    {
        if ( (n1 % i == 0) && (n2 % i == 0) && (n3%i==0) )
        {
             gcd = i;          
        }
        
    }

	return gcd;
	
}

                            //     LCM FOR 2 NUMBER
int lcm2() 
{
	int n1 ,n2;
	cout << " Enter the two numbers you want to find the GCD  \n\n";
    cout << " First No  : ";
    cin >> n1;
    cout << " Second No : ";
    cin >> n2;
     cout<<endl<<endl<<"-------------------------------------------------------------";
	
	
   int a;
   a = max(n1,n2);
   while (true)
    {
      if (a % n1 == 0 && a % n2 == 0)
         return a;
         ++a;
   }
}
     
                            //     LCM FOR 3 NUMBER
int lcm3()
{
	int n1, n2, n3 ,a;
	cout << " Enter the three numbers you want to find the GCD  \n\n";
    cout << " First No    : ";
    cin >> n1;
    cout << " Second No   : ";
    cin >> n2;
    cout << " Third no.   : ";
    cin >>n3;
     cout<<endl<<endl<<"-------------------------------------------------------------";

      
	a=max(n1,n2);
	a=max(a,n3);
	while (true)
    {
      if ((a % n1 == 0) && (a % n2 == 0) && (a%n3==0))
         return a;
         ++a;
   }
}

class front{
 public:
   int groupName()
   {
cout<<" ****************************************************************************"<<endl	;
cout<<" ****************************************************************************"<<endl	;
cout<<" **                                                                        **"<<endl ;
cout<<" **   *****    ******     ******  *      *  *****          *******         **"<<endl ;
cout<<" **  *     *   *     *   *      * *      *  *    *         *               **"<<endl ;
cout<<" ** *          *     *   *      * *      *  *    *         *               **"<<endl ;
cout<<" ** *          ******    *      * *      *  *****          *******         **"<<endl ;
cout<<" ** *    ****  *    *    *      * *      *  *     *****    *               **"<<endl ;
cout<<" **  *    * *  *     *   *      * *      *  *              *               **"<<endl ;
cout<<" **   ****  *  *      *   ******   ******   *              *               **"<<endl ;
cout<<" **                                                                        **"<<endl ;
cout<<" ****************************************************************************"<<endl	;
cout<<" ****************************************************************************"<<endl	;
 	Beep(1000,500);
 	Beep(500,500);
 	Beep(1000,500);
}
};
   

int member()
   {
        	Sleep(1000);   	
   		system("CLS");
	cout<<"--------------------------------------------------------------------------------"<<endl;
	cout<<"--------------------------------------------------------------------------------"<<endl;
	cout<<"-----------               MEMBERS OF GROUP - F                            -----"<<endl<<endl;
	Beep(1000,500);
	Sleep(800);
	cout<<"----------- 1: SAAD ASHRAF		  (MCSM-F20-061)                  -----"<<endl<<endl;
	Beep(1000,500);
	Sleep(800);
	cout<<"----------- 2: AFIFA JAVED 		  (MCSM-F20-056)                  -----"<<endl<<endl;
	Beep(1000,500);
	Sleep(800);
	cout<<"----------- 3: ZUBAIR JAVED		  (MCSM-F20-032)                  -----"<<endl<<endl;
	Beep(1000,500);
	Sleep(800);
	cout<<"----------- 4: QASIM      		  (MCSM-F20-003)                  -----"<<endl<<endl;
    Beep(1000,500);
	Sleep(800); 
	cout<<"----------- 5: UMAIR BUTT		 (MCSM-F20-04)                    -----"<<endl<<endl;
    Beep(1000,500);
	Sleep(800);
	cout<<"--------------------------------------------------------------------------------"<<endl;
	cout<<"--------------------------------------------------------------------------------"<<endl;
	cout<<"press any to next";
	cin.get();
	return 0;
   }
   	
int number()
{
	int a;
   cout<<" how many number you want to check 2 or 3"<<endl<<endl; 
   cin>>a;
  cout<<"-------------------------------------------------------------"<<endl<<endl;

    return a;
 }   	



int main()
{
	system("cls");
	
	  char ch ;
	 front aa;
	aa.groupName();	
     member();
     do
     {
	 
	system("cls");
    cout << "\n\n =====  Program to find the GCD and LCM of two / three numbers ===== \n\n";
    int  a   ;
  
  cout<<"   ________________________ "<<endl;
  cout<<"   |                       |"<<endl; 
  cout<<"   |     1:     GCD        |"<<endl; 
  cout<<"   |     2:     LCM        |"<<endl;
  cout<<"   |_______________________|"<<endl<<endl;
  cin>>a;
   cout<<"-------------------------------------------------------------"<<endl<<endl;
if (a==1)
{
 int n  = 	number();
	if (n==2)
	 {
     cout << " \n\nThe GCD of the two numbers  is      : " << gcd2() <<endl<<endl;
    
	 }
	
    else if(n==3) 
	{
	  cout << " \n\nThe GCD of the three numbers  is      : " << gcd3()<<endl<<endl;
    
	}
    
	 
	
}
else if (a==2)
{
   int n  = 	number();
	if (n==2)
	   {
  	  cout << " \n\nThe LCM of the two numbers  is      : " << lcm2()<<endl<<endl;
     
	   }
	
    else if(n==3) 
		{
      cout << " \n\nThe LCM of the three numbers  is      : " << lcm3()<<endl<<endl;
    
		}

}
else 
		{
			cout<<" you select a wronge number ";
		}

  cout<<"-------------------------------------------------------------"<<endl<<endl;

	cout << "========== Do you want to check it again ============ "<<endl;	
  cout<<"   ________________________ "<<endl;
  cout<<"   |                       |"<<endl; 
  cout<<"   |     Y :     yes       |"<<endl; 
  cout<<"   |     N :     no        |"<<endl;
  cout<<"   |_______________________|"<<endl<<endl<<endl<<endl<<endl<<endl;
	cin>>ch;
			
}while( ch=='y' || ch=='Y') ;


    return 0;
}
