#include <iostream>

using namespace std;

int main(){
	int liczba;
	cin >> liczba;
	
	if(liczba <=0){
		cout << "wczytana liczba nie jest dodatnia" << endl;
		return 0;
	}
	cout << liczba;

	return 0;
}
