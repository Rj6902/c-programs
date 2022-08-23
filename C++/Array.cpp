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

}

void Swapping () {
	    int n;
        
        int a[10];
        int num;
        cout<<"Enter the size of the Array : ";
        cin>>n;
        cout<<"\n";
         
        for (int i=0; i<=n-1; i++) {
            cin>>a[i];
        }
        
        for (int i=0; i<=n-1; i++) {
            cout<<a[i]<<" ";
        }
         
        cout<<"After Swapping \n";
        
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
    cout<<"4. Insert\n";
    cout<<"3. Delete\n";
    cout<<"2. Swapping\n";
    cout<<"5. Searching\n";
 
    cout<<"Enter the number of operation to be performed";

    int operation;
    cin>>operation;

    switch(operation) {
    
	case 1 : 
    Create();
    break;
    
    case 2 : 
    Swapping();
	break;
	
    case 3 : 
     
    break;
    }

    return 0;
}
