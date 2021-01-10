#include<iostream>

using namespace std;

int main()
{
    cout<<endl<<"************** PRODUCT OF TWO MATRICES ****************"<<endl<<endl;
    
    int m,n,p,q;
    cout<<" Enter Dimensions of First Matrix : "<<endl<<endl;
    cout<<" Rows    : ";
    cin>>m;
    cout<<" Columns : ";
    cin>>n;
    
    cout<<endl;
    
    cout<<" Enter Dimensions of Second Matrix : "<<endl<<endl;
    cout<<" Rows    : ";
    cin>>p;
    cout<<" Columns : ";
    cin>>q;
    
    int A[m][n];
    int B[p][q];
    int C[m][q];
    
    if(n==p)
    {
        // Input of Matrices
        
        cout<<endl<<" Enter Matrix 1 (Row wise) "<<endl;
        
        for(int i = 0; i<m; ++i)
        {
            for(int j = 0; j<n; ++j)
            {
                cout<<" Element ("<<i+1<<","<<j+1<<") : ";
                cin>>A[i][j];
            }
        }
        
        cout<<endl<<" Enter Matrix 2 (Row wise) "<<endl;
        
        for(int i = 0; i<p; ++i)
        {
            for(int j = 0; j<q; ++j)
            {
                cout<<" Element ("<<i+1<<","<<j+1<<") : ";
                cin>>B[i][j];
            }
        }
        
        // Displaying the Matrices
        
        cout<<endl<<" Matrix 1 : "<<endl<<endl;
        
        for(int i = 0; i<m; ++i)
        {
            for(int j = 0; j<n; ++j)
            {
                cout<<" "<<A[i][j]<<"   ";
            }
            cout<<endl;
        }
        
        cout<<endl<<" Matrix 2 : "<<endl<<endl;
        
        for(int i = 0; i<p; ++i)
        {
            for(int j = 0; j<q; ++j)
            {
                cout<<" "<<B[i][j]<<"   ";
            }
            cout<<endl;
        }
        
        // Calculating the C = AB
        
        for(int i = 0; i<m; ++i)
        {
            for(int j = 0; j<q; ++j)
            {
                C[i][j] = 0;
                
                for(int k = 0; k<n; ++k)
                {
                    C[i][j] += A[i][k] * B[k][j];
                }
                
            }
        }
        
        // Displaying C
        
        cout<<endl<<" Product of the matrices : "<<endl<<endl;
        
        for(int i = 0; i<m; ++i)
        {
            for(int j = 0; j<q; ++j)
            {
                cout<<" "<<C[i][j]<<"   ";
            }
            cout<<endl;
        }
        
    }
    else
    {
        cout<<endl<<" The matrices cannot be multiplied!";
    }
    
    cout<<endl<<endl;
    
    return 0;
    
}
