#include<iostream>
#include<iomanip>
using namespace std;

int main(){
	int A [10] [10];
	int n;
	cout<<"Masukan Panjang Matriks : ";
	cin>>n;
	cout<<endl;
	
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<"["<<i<<"],["<<j<<"] :";
			cin>>A[i][j];
			if(i+j==n-1){
				A[i][j]=0;
			}
		}
	}
	cout<<endl;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<setw(3)<<A[i][j];
		}
		cout<<endl;
	}
	return 0;
}
