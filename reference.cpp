#include<iostream>
#include<vector>
using namespace std;
void dis_vector(const std::vector<string>& v){
	size_t size=v.size();
	cout<<"el tamaño del vector es: "<<size;
	if(size){
		for(string s: v){
			printf("\n");
			printf("[%s]",s.c_str());
		}
		puts("");
	}
	fflush(stdout);
}
template<typename T>
void swap1( T&a , T&b){
	cout<<"cambio:";

	T temp(std::move(a));
	a=std::move(b);
	b=std::move(temp);
}
int main(){
	std::vector<string> v1={"uno","dos","tres"};
	std::vector<string> v2={"cuatro","cinco","seis"};
	cout<<"v1"<<endl;
	dis_vector(v1);
	cout<<"v2"<<endl;
	dis_vector(v2);
	swap1(v1,v2);
	cout<<"v1"<<endl;
	dis_vector(v1);
	cout<<endl<<"v2"<<endl;
	dis_vector(v2);

	return 0;

}