#include <iostream>
using namespace std;
void EscribirNom(const string& name){
	cout<<name<<endl;
}
void EscribirNom(const string&& name){
	cout<<name<<endl;
}
int main(){
	string fname= "ed";
	string sname= "ros";
	string tname = fname + sname;
	EscribirNom(tname);
	EscribirNom(fname+sname);
	return 0;
}