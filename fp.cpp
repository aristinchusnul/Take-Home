#include <conio.h>
#include <stdio.h>
#include <iostream>

using namespace std;

class laptop{
	public:
		char tipe [100];
		int jml,hrg;
};

laptop hp;

main(){
system ("cls");
	cout<<"================================"<<endl;
	cout<<"SPESIFIKASI LAPTOP"<<endl<<endl;
	cout<<"================================"<<endl;
	cout<<"Tipe Laptop : ";cin>>hp.tipe;
	cout<<"Jumlah   :";cin>>hp.jml;
	cout<<"Harga  :Rp.";cin>>hp.hrg;
	cout<<endl;
	cout<<"================================"<<endl;
	cout<<"SPESIFIKASI LAPTOP"<<endl<<endl;
	cout<<"================================"<<endl;
	cout<<"Tipe Laptop :"<<hp.tipe<<endl;
	cout<<"Jumlah  :"<<hp.jml<<endl;
	cout<<"Harga   :Rp."<<hp.hrg<<endl;
	
getch();
}
