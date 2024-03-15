#include <iostream>

#include <string>

using namespace std;

bool EsMultiploDe3 (int n);



bool EsMultiploDe3 (int n)

{
	bool flag= false;
	
	if (n%3== 0)
{
	flag = true;
}

return flag;
}

int main(){
	int num; 
	
	 
	string msg= "no es multiplo";
	
	cout<<"ingrese un numero"<<endl;
	
	cin>> num;
	
	if (EsMultiploDe3 (num));
	
	{
		msg = "es multiplo";
	}
	
	cout<<msg<<endl;
	
	return 0;
}