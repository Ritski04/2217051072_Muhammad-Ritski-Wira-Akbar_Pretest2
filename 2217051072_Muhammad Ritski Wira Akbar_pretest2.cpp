#include <iostream>
using namespace std;
int main(){
	float detik,menit,jam;
	cout<<"program konversi detik ke menit dan jam\n";
	cout<<"masukan detik \n";
	cin>>detik;
	menit=detik/60;
	jam=menit/60;
	cout<<detik<<" detik sama dengan "<<jam<<" jam, atau "<<menit<<" menit.";
	return 0;
}
