#include <iostream>
using namespace std;

int linear_search(int n ,int arr[] ,int key){
	for (int i=0 ; i<n ;i++){
		if (arr[i]==key){
			return i;
		}
	}
	return -1;
}


int main() {
	int n;
	cout << "Enter n: ";
	cin >> n;
	
	int arr[n];
	for (int i=0 ; i<n ; i++){
		cin >> arr[i];
	}
	
	int key;
	cout << "Enter key: ";
	cin >> key;
	
cout<< linear_search(n,arr,key) << endl;
	
	
	return 0;
}

