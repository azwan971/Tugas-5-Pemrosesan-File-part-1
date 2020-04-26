#include <iostream>
#include <fstream>
using namespace std;

int main(){
	ifstream myfile;
	char sv_teks;
	
	myfile.open("contoh.text");

	if(!myfile.fail()){
	cout<<"Isi dari file ->";
	while(!myfile.eof()){
		myfile.get(sv_teks);
		cout<<sv_teks;
	}
	myfile.close();
	}
	else{
		cout<<"File tidak ditemukan"<<endl; 	
	}
	
	
	
	return 0;
	
}
