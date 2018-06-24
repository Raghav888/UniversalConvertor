#include<iostream>
#include<cstring>
#include<math.h>
 using namespace std;
  long double num; 
  char unit[10];

   class Length
    {
 	public:
  	long double km,m,cm,mm,ft,in;
    	void fun();
    };

  void Length::fun()
    {
  	int a,b;
  	Again:
  	cout<<"\nEnter the unit in which quantity the quantity will be entered:-\n";				
  	cout<<"\n1.Kilometer\n2.Meter\n3.Centimeter\n4.Millimeter\n5.Feet\n6.Inch\n";
  	cin>>a;       

  	cout<<"\nEnter the unit in which conversion is to be done:-\n";		
  	cout<<"\n1.Kilometer\n2.Meter\n3.Centimeter\n4.Millimeter\n5.Feet\n6.Inch\n";
  	cin>>b;

  	cout<<"\nEnter the quantity:-\n";					
  	cin>>num;  

   	switch (a){
    	 case 1:
      	 m=num*1000; strcpy(unit,"km");
         break;
    	 case 2:
   	 m=num;strcpy(unit,"m");
   	 break;
    	 case 3:	
   	 m=num/100;strcpy(unit,"cm");
   	 break;
   	 case 4:	
   	 m=num/1000;strcpy(unit,"mm");
         break;
         case 5:	
   	 m=num/3.28084;strcpy(unit,"ft");
   	 break;
         case 6:	
   	 m=num/39.3701;strcpy(unit,"in");
   	 break;
         default :
         cout<<"Invalid Input\n";
         goto Again;
         break;
 	        }

   	km=m/1000;
   	cm=m*100;
	mm=m*1000;
   	ft=m*3.28084;
   	in=m*39.3701;
   
   
system("clear");
	switch (b){
   	 case 1:
   	 cout<<"\n\n\t\t\t\tAnswer:\n\t\t\t\t";
    	 cout<<num<<" "<<unit<<" = "<<km<<" km\n\n";
         break;
         case 2:
   	 cout<<"\n\n\t\t\t\tAnswer:\n\t\t\t\t";
         cout<<num<<" "<<unit<<" = "<<m<<" m \n\n";
   	 break;
         case 3:	
   	 cout<<"\n\n\t\t\t\tAnswer:\n\t\t\t\t";
         cout<<num<<" "<<unit<<" = "<<cm<<" cm\n\n";
   	 break;
         case 4:
   	 cout<<"\n\n\t\t\t\tAnswer:\n\t\t\t\t";
         cout<<num<<" "<<unit<<" = "<<mm<<" mm\n\n";
   	 break;
         case 5:	
   	 cout<<"\n\n\t\t\t\tAnswer:\n\t\t\t\t";
         cout<<num<<" "<<unit<<" = "<<ft<<" ft\n\n";
   	 break;
         case 6:	
   	 cout<<"\n\n\t\t\t\tAnswer:\n\t\t\t\t";
         cout<<num<<" "<<unit<<" = "<<in<<" in\n\n";
   	 break;
         default:
         cout<<"Invalid Input\n";
         goto Again;
         break;
  	   	}
	}


   class Area
   {
    public:
  	long double h, ac,cm,km,m;
    	void fun();
   };

   void Area::fun(){
  	int a,b;
  	Again:
  	cout<<"\nEnter the unit in which quantity the quantity will be entered:-\n";
  	cout<<"\n1.Hectare\n2.Acre\n3.Meter.sq\n4.Centimeter.sq\n5.Kilometer.sq\n";
  	cin>>a;       
  
  	cout<<"\nEnter the unit in which conversion is to be done:-\n";
  	cout<<"\n1.Hectare\n2.Acre\n3.Meter.sq\n4.Centimeter.sq\n5.Kilometer.sq\n";
  	cin>>b;

  	cout<<"\nEnter the quantity:-\n";
 	cin>>num;
 
	switch (a){
    	 case 1:
       	  m=num*10000; strcpy(unit,"ha");
       	  break;
         case 2:
   	  m=num*4046.86;strcpy(unit,"ac");
   	  break;
   	 case 3:	
   	  m=num;strcpy(unit,"m.sq");
   	  break;
   	 case 4:	
   	  m=num/10000;strcpy(unit,"cm.sq");
   	  break;
   	 case 5:	
   	  m=num*1000000;strcpy(unit,"sq.km");
   	  break;
    	 default :
      	  cout<<"Invalid Input\n";
      	  goto Again;
          break;
 	           }
   
   	h=m/10000;
   	ac=m/4046.86;
   	cm=m*10000;
   	km=m*1000000;
   
   
system("clear");
	switch (b){
    	 case 1:
         cout<<"\n\n\t\t\t\tAnswer:\n\t\t\t\t";
    	 cout<<num<<" "<<unit<<" = "<<h<<" ha\n\n";
         break;
    	case 2:
   	 cout<<"\n\n\t\t\t\tAnswer:\n\t\t\t\t";
         cout<<num<<" "<<unit<<" = "<<ac<<" ac\n\n";
   	 break;
        case 3:	
   	 cout<<"\n\n\t\t\t\tAnswer:\n\t\t\t\t";
         cout<<num<<" "<<unit<<" = "<<m<<" m.sq\n\n";
   	 break;
    	case 4:
   	 cout<<"\n\n\t\t\t\tAnswer:\n\t\t\t\t";
         cout<<num<<" "<<unit<<" = "<<cm<<" cm.sq\n\n";
   	 break;
    	case 5:	
   	 cout<<"\n\n\t\t\t\tAnswer:\n\t\t\t\t";
         cout<<num<<" "<<unit<<" = "<<km<<" sq.km\n\n";
   	 break;
        default:
         cout<<"Invalid Input\n";
         goto Again;
         break;
  	   	
   		  }
	}

   class Vol
    {
  	public:
         	long double l,ml,m,cm,ba;
    		void fun();
    };

   void Vol::fun(){
  	int a,b;
  	Again:
  	cout<<"\nEnter the unit in which quantity the quantity will be entered:-\n";
  	cout<<"\n1.Liter\n2.Milli Liter\n3.Cube Meter\n4.Cubic Centimeter\n5.Barrel\n";
  	cin>>a;       
  
  	cout<<"\nEnter the unit in which conversion is to be done:-\n";
  	cout<<"\n1.Liter\n2.Milliliter\n3.Cube Meter\n4.Cubic Centimeter\n5.Barrel\n";
  	cin>>b;

  	cout<<"\nEnter the quantity:-\n";
  	cin>>num;
 

   	switch (a){
         case 1:
         m=num/1000; strcpy(unit,"l");
         break;
    	 case 2:
   	 m=num/1000000;strcpy(unit,"ml");
   	 break;
    	 case 3:	
   	 m=num;strcpy(unit,"cu.m");
   	 break;
         case 4:	
   	 m=num/1000000;strcpy(unit,"cu.cm");
   	 break;
   	 case 5:	
   	 m=num/6.289811;strcpy(unit,"bbl");
   	 break;
         default :
         cout<<"Invalid Input\n";
         goto Again;
         break;
 	    }
   	l=m*1000;
   	ml=m*1000000;
   	cm=m*1000000;
   	ba=m*6.289811;   
   
  	switch (b){
    	 case 1:
         cout<<"\n\n\t\t\t\tAnswer:\n\t\t\t\t";
    	 cout<<num<<" "<<unit<<" = "<<l<<" l\n\n";
         break;
    	 case 2:
   	 cout<<"\n\n\t\t\t\tAnswer:\n\t\t\t\t";
         cout<<num<<" "<<unit<<" = "<<ml<<" ml\n\n";
   	 break;
    	 case 3:	
   	 cout<<"\n\n\t\t\t\tAnswer:\n\t\t\t\t";
         cout<<num<<" "<<unit<<" = "<<m<<" cu.m\n\n";
   	 break;
    	 case 4:
   	 cout<<"\n\n\t\t\t\tAnswer:\n\t\t\t\t";
         cout<<num<<" "<<unit<<" = "<<cm<<" cu.cm\n\n";
   	 break;
    	 case 5:	
   	 cout<<"\n\n\t\t\t\tAnswer:\n\t\t\t\t";
         cout<<num<<" "<<unit<<" = "<<ba<<" bbl\n\n";
   	 break;
         default:
         cout<<"Invalid Input\n";
         goto Again;
         break;
  	   	
             }
   }

    class Time
      {
	public:
	  long double w,d,hr,m,s;
    	  void fun();
      };

    void Time::fun(){
  	int a,b;
  	Again:
  	cout<<"\nEnter the unit in which quantity the quantity will be entered:-\n";
  	cout<<"\n1.Week\n2.Day\n3.Hour\n4.Minute\n5.Seconds\n";
  	cin>>a;       
  
  	cout<<"\nEnter the unit in which conversion is to be done:-\n";
   	cout<<"\n1.Week\n2.Day\n3.Hour\n4.Minute\n5.Seconds\n";
  	cin>>b;

  	cout<<"\nEnter the quantity:-\n";
  	cin>>num;
 

   	switch (a){
         case 1:
         hr=num*168; strcpy(unit,"Week");
         break;
    	 case 2:
   	 hr=num*24;strcpy(unit,"Day");
   	 break;
    	 case 3:	
   	 hr=num;strcpy(unit,"hr");
   	 break;
   	 case 4:	
   	 hr=num/60;strcpy(unit,"min");
   	 break;
   	 case 5:	
 	 hr=num/3600;strcpy(unit,"s");
   	 break;
         default :
         cout<<"Invalid Input\n";
         goto Again;
         break;
 	          } 
   	w=hr/168;
   	d=hr/24;
   	m=hr*60;
   	s=hr*3600;
  	
	switch (b){
    	 case 1:
         cout<<"\n\n\t\t\t\tAnswer:\n\t\t\t\t";
    	 cout<<num<<" "<<unit<<" = "<<w<<" Week\n\n";
         break;
    	 case 2:
         cout<<"\n\n\t\t\t\tAnswer:\n\t\t\t\t";
   	 cout<<num<<" "<<unit<<" = "<<d<<" Day\n\n";
   	 break;
    	 case 3:
         cout<<"\n\n\t\t\t\tAnswer:\n\t\t\t\t";	
   	 cout<<num<<" "<<unit<<" = "<<hr<<" hr\n\n";
    	 break;
   	 case 4:
         cout<<"\n\n\t\t\t\tAnswer:\n\t\t\t\t";
   	 cout<<num<<" "<<unit<<" = "<<m<<" min\n\n";
   	 break;
    	 case 5:
         cout<<"\n\n\t\t\t\tAnswer:\n\t\t\t\t";	
   	 cout<<num<<" "<<unit<<" = "<<s<<" s\n\n";
   	 break;
         default:
         cout<<"Invalid Input\n";
         goto Again;
         break;
  	   	
        }
   }



   class Temp
    {
	 public:
  		long double c, k , f;
    		void fun();
 
    };

    void Temp::fun(){
  	int a,b;
  	Again:
  	cout<<"\nEnter the unit in which quantity the quantity will be entered:-\n";
  	cout<<"\n1.Celsius\n2.Kelvin\n3.Fahrenheit\n";
  	cin>>a;       

  	cout<<"\nEnter the unit in which conversion is to be done:-\n";
		cout<<"\n1.Celsius\n2.Kelvin\n3.Fahrenheit\n";
  	cin>>b;

  	cout<<"\nEnter the quantity:-\n";
  	cin>>num;  
 

  	switch (a){
    	 case 1:
         c=num; strcpy(unit,"C");
         break;
    	 case 2:
   	 c=num-273;strcpy(unit,"K");
   	 break;
     	 case 3:	
   	 c=(num-32)*5/9;strcpy(unit,"F");
  	 break;
  	 default :
         cout<<"Invalid Input\n";
         goto Again;
         break;
 	            }
   
   	k=273+c; 
   	f=(9/5)*c +32;
   
   
 system("clear");
	switch (b){
    	 case 1:
         cout<<"\n\n\t\t\t\tAnswer:\n\t\t\t\t";
    	 cout<<num<<" "<<unit<<" = "<<c<<"C\n\n";
         break;
    	 case 2:
         cout<<"\n\n\t\t\t\tAnswer:\n\t\t\t\t";
   	 cout<<num<<" "<<unit<<" = "<<k<<"K\n\n";
   	 break;
    	 case 3:
         cout<<"\n\n\t\t\t\tAnswer:\n\t\t\t\t";	
   	 cout<<num<<" "<<unit<<" = "<<f<<"F\n\n";
   	 break;
    	 default:
         cout<<"Invalid Input\n";
         goto Again;
         break;
  	   	
   	}
 }

   class Speed
     {
 	public:
  		long double ms,kmh,mph;
  		void fun();

    };

    void Speed::fun(){
  	int a,b;
  	Again:
  	cout<<"\nEnter the unit in which quantity the quantity will be entered:-\n";
	cout<<"\n1.m/s\n2.km/hr\n3.mi/hr\n";
 	cin>>a;       
  
  	cout<<"\nEnter the unit in which conversion is to be done:-\n";
  	cout<<"\n1.m/s\n2.km/hr\n3.mi/hr\n";
  	cin>>b;

  	cout<<"\nEnter the quantity:-\n";
  	cin>>num;

   	switch (a){
    	 case 1:
         ms= num;strcpy(unit,"m/s");
         break;
    	 case 2:
    	 ms = num / 3.6;strcpy(unit,"km/hr");
   	 break;
    	 case 3:	
   	 ms = num / 2.236936292;strcpy(unit,"mi/hr");
   	 break;
    	 default :
         cout<<"Invalid Input";
       	 goto Again;
         break;
 	          }
   
  	kmh=ms/0.2777;
   	mph=ms/0.44704;
   
system("clear");
	switch (b){
    	 case 1:
         cout<<"\n\n\t\t\t\tAnswer:\n\t\t\t\t";
    	 cout<<num<<" "<<unit<<" = "<<ms<<" m/s\n\n";
         break;
    	 case 2:
         cout<<"\n\n\t\t\t\tAnswer:\n\t\t\t\t";
   	 cout<<num<<" "<<unit<<" = "<<kmh<<" km/hr\n\n";
   	 break;
    	 case 3:
         cout<<"\n\n\t\t\t\tAnswer:\n\t\t\t\t";	
   	 cout<<num<<" "<<unit<<" = "<<mph<<" mi/hr\n\n";
   	 break;
    	 default:
         cout<<"Invalid Input";
         goto Again;
         break;
  	   	
   		}
     
	}	 

    class Mass
     {
 	public:
  		long double g,kg,ton,q,car;
  		void fun();
  
     };

     void Mass::fun(){
  	int a,b;
  	Again:
  	cout<<"\nEnter the unit in which quantity the quantity will be entered:-\n";
  	cout<<"\n1.Gram\n2.Kilogram\n3.Ton\n4.Quintal\n5.Carat\n";
  	cin>>a;       
  
  	cout<<"\nEnter the unit in which conversion is to be done:-\n";
  	cout<<"\n1.Gram\n2.Kilogram\n3.Ton\n4.Quintal\n5.Carat\n";
  	cin>>b;

  	cout<<"\nEnter the quantity:-\n";
  	cin>>num;
      
   	switch (a){
    	 case 1:
         g= num;strcpy(unit,"g");
         break;
    	 case 2:
   	 g = num * 1000;strcpy(unit,"kg");
   	 break;
    	 case 3:	
   	 g = num * 1000000;strcpy(unit,"ton");
   	 break;
    	 case 4:	
   	 g = num * 100000;strcpy(unit,"quintal");
   	 break;
    	 case 5:	
   	 g = num / 5;strcpy(unit,"ct");
   	 break;	  
    	 default :
         cout<<"Invalid Input\n";
         goto Again;
         break;
 	          }
   
   	kg = g / 1000;
   	q =  g / 100000;
   	ton= g / 1000000;
   	car= g * 5;
   
   
system("clear");
	switch (b){
    	 case 1:
         cout<<"\n\n\t\t\t\tAnswer:\n\t\t\t\t";
    	 cout<<num<<" "<<unit<<" = "<<g<<" g\n\n";
         break;
    	 case 2:
         cout<<"\n\n\t\t\t\tAnswer:\n\t\t\t\t";
   	 cout<<num<<" "<<unit<<" = "<<kg<<" kg\n\n";
   	 break;
    	 case 3:
         cout<<"\n\n\t\t\t\tAnswer:\n\t\t\t\t";	
   	 cout<<num<<" "<<unit<<" = "<<ton<<" ton\n\n";
   	 break;
    	 case 4:
         cout<<"\n\n\t\t\t\tAnswer:\n\t\t\t\t";	
   	 cout<<num<<" "<<unit<<" = "<<q<<" quintal\n\n";
   	 break;
    	 case 5:
         cout<<"\n\n\t\t\t\tAnswer:\n\t\t\t\t";
   	 cout<<num<<" "<<unit<<" = "<<car<<" ct\n\n";
   	 break;	  
     	 default:
         cout<<"Invalid Input\n";
         goto Again;
         break;
  	   	
     }
     
 } 
   
   class Mem
     {
 	public:
  		long double b,kb,mb,gb,tb ;
  		void fun();

     };

     void Mem::fun(){
     	int a,c;
  	Again:
  	cout<<"\nEnter the unit in which quantity the quantity will be entered:-\n";
  	cout<<"\n1.Byte\n2.KB\n3.MB\n4.GB\n5.TB\n";
  	cin>>a;       
  
  	cout<<"\nEnter the unit in which conversion is to be done:-\n";
 	cout<<"\n1.Byte\n2.KB\n3.MB\n4.GB\n5.TB\n";
	cin>>c;

  	cout<<"\nEnter the quantity:-\n";
  	cin>>num;

   	switch (a){
    	 case 1:
         mb=num/1048576;strcpy(unit,"byte");
         break;
    	 case 2:
   	 mb=num/1024;strcpy(unit,"KB");
   	 break;
    	 case 3:	
   	 mb = num;strcpy(unit,"MB");
   	 break;
    	 case 4:	
   	 mb = num *1024;strcpy(unit,"GB");
   	 break;
    	 case 5:	
   	 mb = num *1024*1024;strcpy(unit,"TB");
   	 break;	  
    	 default :
         cout<<"Invalid Input\n";
         goto Again;
         break;
 	           }
   
   	b=mb*1024*1024;
   	kb=mb*1024;
   	gb=mb/1024;
   	tb=mb/1048576;
   
   
system("clear");
	switch(c){
    	 case 1:
         cout<<"\n\n\t\t\t\tAnswer:\n\t\t\t\t";
    	 cout<<num<<" "<<unit<<" = "<<b<<" byte\n\n";
         break;
    	 case 2:
         cout<<"\n\n\t\t\t\tAnswer:\n\t\t\t\t";
   	 cout<<num<<" "<<unit<<" = "<<kb<<" KB\n\n";
   	 break;
    	 case 3:
         cout<<"\n\n\t\t\t\tAnswer:\n\t\t\t\t";	
   	 cout<<num<<" "<<unit<<" = "<<mb<<" MB\n\n";
   	 break;
    	 case 4:
         cout<<"\n\n\t\t\t\tAnswer:\n\t\t\t\t";	
   	 cout<<num<<" "<<unit<<" = "<<gb<<" GB\n\n";
   	 break;
    	 case 5:
         cout<<"\n\n\t\t\t\tAnswer:\n\t\t\t\t";	
   	 cout<<num<<" "<<unit<<" = "<<tb<<" TB\n\n";
   	 break;	  
     	 default:
         cout<<"Invalid Input\n";
         goto Again;
         break;
  	   	
      }
     
  } 
  
  class Num{
 public:
 long long decimal(long long binum)
 {
   long long temp_dec=0,rem=0,b=0;
    while (binum > 0)
    {
        rem =binum % 10;
        temp_dec = temp_dec + rem * (pow(2,b));
        binum = binum / 10 ;b++;
    }
    return temp_dec;
 }

 long long dec_binary(long long decnum)
 {
   long long temp_dec=0,rem=0,b=0;
    while (decnum > 0)
    {
        rem =decnum % 2;
        temp_dec = temp_dec + rem * (pow(10,b));
        decnum = decnum / 2 ;b++;
    }
    return temp_dec;
 }

 long long oct_binary(long long octnum)
 {
   long long temp_dec,rem=0,b,temp_rem=0,ba=0,binum=0;
    while (octnum > 0)
    {
        rem =octnum % 10;
	b=0;temp_dec=0;
  	    while (rem > 0)
  	  {
  	      temp_rem =rem % 2;
  	      temp_dec = temp_dec + temp_rem * (pow(10,b));
  	      rem = rem / 2 ;b++;
  	  }
        binum = binum + temp_dec * (pow(10,ba));
        octnum = octnum / 10 ;ba=ba+3;
    }
    return binum;
 }

 long long hex_binary()
 {
   long long temp_hex=0,temp_rem=0,temp_dec,rem=0,b=0,binum=0,n=0,i=0,ba=0;
   char hex[20];
   cout<<"  Enter number in hexadecimal:  \n";
   cin>>hex;
   n=strlen(hex);
   for(i=n-1;i>=0;i--)
   {
    if(hex[i]=='A'||hex[i]=='B'||hex[i]=='C'||hex[i]=='D'||hex[i]=='E'||hex[i]=='F')
    { 
     temp_hex=hex[i] - 55;
    }
    else
    {
     temp_hex=hex[i] - 48;
    }
    b=0;temp_dec=0;
    while (temp_hex > 0)
    {
  	   temp_rem =temp_hex % 2;
  	   temp_dec = temp_dec + temp_rem * (pow(10,b));
  	   temp_hex = temp_hex / 2 ;b++;
    }
       binum = binum + temp_dec * (pow(10,ba));
       ba=ba+4;
   }
  cout<<"hexadecimal value is : "<<hex<<endl;
  return binum;
 }

 long long octal(long long binum)
 {
    long long octa=0,rem,temp_bi,temp_oct,b,ba=0;
    while (binum != 0)
    {
        temp_bi = binum % 1000;
	temp_oct=0;b=0;
        while (temp_bi > 0)
        {
            rem =temp_bi % 10;
            temp_oct = temp_oct + rem * (pow(2,b));
            temp_bi = temp_bi/ 10 ;b++;
        }
        octa = octa + temp_oct *(pow(10,ba));
        ba++;
        binum = binum / 1000;
    }
    return octa;
 }

 char hexa(long long binum)
 {
    long long rem,temp_bi,temp_hex,b,ba=0;int i=0,j=0;
    char hex[20];
    while (binum != 0)
    {
        temp_bi = binum % 10000;
	temp_hex=0;b=0;
        while (temp_bi > 0)
        {
            rem =temp_bi % 10;
            temp_hex = temp_hex + rem * (pow(2,b));
            temp_bi = temp_bi/ 10 ;b++;
        }
	if(temp_hex<10)
	{
	temp_hex=temp_hex + 48;
	}
	else
	{
	temp_hex=temp_hex + 55;
	}
	hex[ba++]=temp_hex;
        binum = binum / 10000;
    }
    cout<<"Hexadecimal value is ";
 	for(j=ba-1 ;j>=0;j--)
	{
		cout<<("%c",hex[j]);
	}
    cout<<" \n ";
    return hex[ba];
 }

 void fun(){
  int n=0,ch,i=0,j=20,check=0;
  long long decnum,octnum,binum;
  char hex[20];
  cout<<"\nEnter input in\n1.Binary:\n2.Decimal:\n3.Oct:\n4.Hex:\n5:Exit\n";
  cin>>ch;
  switch (ch)
  {
  case 1:goto binary_num;
	break;
  case 2:goto decimal_num;
	break;
  case 3:goto octal_num;
	break;
  case 4:goto hexal_num;
	break;
  case 5:exit(0);
 	break;	
  default:cout<<"Invalid Input!!!\n";
	exit(0);
	break;
  }
  
  binary_num:
  cout<<"Enter number in binary:\n";
  cin>>binum;
  decnum=decimal(binum);
  octnum=octal(binum);
  goto continue_;

  decimal_num:
  cout<<"Enter number in decimal:\n";
  cin>>decnum;
  binum=dec_binary(decnum);
  octnum=octal(binum);
  goto continue_;

  octal_num:
  cout<<"Enter number in octal:\n";
  cin>>octnum;
  binum=oct_binary(octnum);
  decnum=decimal(binum);
  goto continue_;

  hexal_num:
  binum=hex_binary();
  decnum=decimal(binum);
  octnum=octal(binum);
  goto continue_; 

  continue_:
  cout<<"Binary value is "<<binum<<endl;
  cout<<"Decimal value is "<<decnum<<endl;      
  cout<<"Octal value is "<<octnum<<endl;
  if(ch!=4)
  {
   hex[i]=hexa(binum);
  }
 }
};


   int main()
	{
	int c;
 	Start: 
  system("clear");
 	cout<<"\t\t____________THE CONVERTOR___________\n";
	cout<<"\n----------------------------------------------------------------------------------------";
 	cout<<"\n1.Length\t\t4.Time\t\t\t7.Mass\n2.Area\t\t\t5.Temperature\t\t8.Memory\n3.Volume\t\t6.Speed\t\t\t9.Number System\n\n\t\t\t0.Exit\n";
	cout<<"\n-----------------------------------------------------------------------------------------";
 	cout<<"\nPlease Enter Choice for convertor\n";
 	cin>>c;
 
 	switch (c){
    	 case 1 :
    	 system("clear");
      	 Length obj1;
       	 obj1.fun();
      	 //goto Start; 
    	 break;
    	 case 2 :
    	 system("clear");
      	 Area obj2;
      	 obj2.fun();
      	 //goto Start; 
    	 break;
    	 case 3 :
    	 system("clear");
       	 Vol obj3;
      	 obj3.fun();
      	 //goto Start;
    	 break;
    	 case 4 :
    	 system("clear");
      	 Time obj4;
       	 obj4.fun();
      	 //goto Start;
    	 break;
    	 case 5 :
    	 system("clear");
      	 Temp obj5;
      	 obj5.fun();
         //goto Start; 
    	 break;
    	 case 6 :
    	 system("clear");
      	 Speed obj6;
      	 obj6.fun();
      	//goto Start; 		
    	 break;
    	 case 7 :
    	 system("clear");
      	 Mass obj7;
      	 obj7.fun();
      	//goto Start;
  	 break;
    	 case 8 :
    	 system("clear");
      	 Mem obj8;
      	 obj8.fun();
      	 //goto Start;
    	 break;		
    	  case 9 :
    	  system("clear");
         Num obj9;
         obj9.fun();
        // goto Start;			
    	 case 0 :
    	 exit(0);
   }
 
   return 0;
}
