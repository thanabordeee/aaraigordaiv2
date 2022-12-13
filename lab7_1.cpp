#include<iostream>
#include<string>

using namespace std;

string func1(string x){
	int i = 0, L = x.size();
	string y = "";
	while(i < L){
		y += x[L-i-1];
		i++;
	}
	return y;
}

string func2(string x){
	int i = 0, L = x.size();
	string y = "";
	while(i < L){
		y += toupper(x[i]);
		i++;
	}
	return y;	
}

string func3(string x){
	int i = 0, L = x.size();
	string y = "";
	while(i < L){
		y += tolower(x[i]);
		i++;
	}
	return y;	
}

int main(){
	string text;
    cout << "Input text: ";
	cin >> text;
    cout << "Reversed text: " << func1(text);
	if(func2(text) == func1(func2(text))){
    cout << "\nPalindrome: Yes";
	}
	else if (func3(text) == func1(func3(text)))
	{
		cout << "\nPalindrome: Yes";
	}
	else{
		 cout << "\nPalindrome: No";
	}

    return 0;
}
