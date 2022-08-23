#include<iostream>
using namespace std;

void Create() {
        int n;
        cout<<"Enter the size of the Array : \n";
        cin>>n;
        int a[n];
        for (int i=0; i<=(n-1); i++) {
        cin>>a[i];
        }
        for (int i=0; i<=(n-1); i++) {
        cout<<a[i]<<" ";
        }




void Searching() {
	    int n;
        cout<<"Enter the size of the Array : \n";
        cin>>n;
        int a[n];
        for (int i=0; i<=(n-1); i++) {
        cin>>a[i];
        }
        for (int i=0; i<=(n-1); i++) {
        cout<<a[i]<<" "; }
        cout<<"\nEnter the number for searching :";
        int z;
        cin>>Z;
        for (int i=0; i<=(n-1); i++) {
        if ( a[i] = z )  {
		
       	cout<<"The number is found";
	   }
        }
}

void Swapping () {
	    int n;
        
        int a[10];
        int num;
        cout<<"Enter the size of the Array : ";
        cin>>n;
        cout<<"\n";
         
        for (int i=0; i<=n-1; i++) 
        
        for (int i=0; i<=n-1; i++) {
            cout<<a[i]<<" ";
        }
         
        cout<<"\nAfter Swapping \n";
        
	    for(int i=0 ; i<(n-1)/2 ; i++) {
		    num = a[i];	    
			a[i] = a[(n-1) - i ] ;
		    a[(n-1) - i ] = num ;	
		    }
		    
		 for(int i=0 ; i<n ; i++) {
		    cout<<a[i]<<" ";	
		    }    
		    
}

int main() {
    cout<<"ARRAY OPERATIONS :\n";
    cout<<"1. Create\n";
    cout<<"2. Insert\n";
    cout<<"3. Delete\n";
    cout<<"4. Swapping\n";
    cout<<"5. Searching\n";
 
    cout<<"Enter the number of operation to be performed";

    int operation;
    cin>>operation;

    switch(operation) {
    
	case 1 : 
    Create();
    break;
    
    case 4: 
    Swapping();
	break;
	
    case 5 : 
    Searching();
    break;
    
    }

    return 0;
}
