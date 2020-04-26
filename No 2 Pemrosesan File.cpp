#include <iostream>
#include <fstream>
using namespace std;

int main(){
	ofstream myfile;
	
	myfile.open("contoh.text");

	if(!myfile.fail()){
	myfile<<"Saya membuka file"<<endl;
	myfile.close();
	cout<<"Belajar operasi file"<<endl;
	}
	else{
		cout<<"File tidak ditemukan"<<endl; 	
	}
	
	
	
	return 0;
	
}
