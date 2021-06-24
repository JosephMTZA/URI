#include <bits/stdc++.h>
using namespace std;

int main(){
	vector <int> nums;
	vector <int> veces;
	int n;
	int aux, cont,contador;
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> aux;
		nums.push_back(aux);
	}

	sort(nums.begin(),nums.end());
	/*
	for (int i = 0; i < n; i++)
		veces.push_back(1);

	*/
	cont = 1;
	for(int i = 0; i < nums.size(); i++){
		for (int j = i+1; j < nums.size(); j++){
				//cout << nums[j] << " ";
			if (nums[i] == nums[j]){
				cont++;
				nums.erase(nums.begin()+j);
				j--;
			}

		}
		cout << nums[i] << " aparece " << cont << " vez(es)"<<endl;
		cont = 1;
	}
}