//WAP TO PRINT FIBBONACHI SERIES TILL N TIMES USING DO WHILE LOOP.



 #include<iostream>
 using namespace std;
 
 main()
 {
 	int a,n;
 	int b=0;
 	int sum;
 	
 	cout<<"enter the a:";
 	cin>>a;
 	
 	cout<<"enter the n:";
 	cin>>n;
 	
 	do
 	{
 	    a=b;
		b=sum;
	    a=sum;
		
		if(a==b)
		
		{
			cout<<"FIBBONACHI SERIES ";
     	 }
     	 
		 } while(a>=n);	 
	}
 
 	 
 
