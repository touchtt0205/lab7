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
    string A;
	string B;

	cout << "Input text: ";
    cin>>A;
    
    cout << "Reversed text: "<<func1(A)<<"\n";
    B = func1(A);
    
	if(func2(A) == func2(B) and func3(A) == func3(B)){
		cout << "Palindrome: "<<"Yes";
	}else{
		cout << "Palindrome: "<<"No";
	}

    return 0;
}
