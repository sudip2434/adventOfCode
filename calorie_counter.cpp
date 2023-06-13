#include<iostream>
#include<fstream>
#include<string>
#include<typeinfo>
#include<vector>
#include<algorithm>

using namespace std;

int main(){

    int sum = 0;
    string x;
    ifstream file;
    file.open("calories.txt");

    if (!file) {
        cout << "Unable to open file";
        exit(1); // terminate with error
    }

    auto temp = 0;
    vector<int> arr;
    while(getline(file, x)){
  
        if(x.empty()){
            sum = max(sum,temp);
            arr.push_back(temp);
            temp = 0;
        }

        else{
            temp += stoi(x);
        }
      
    }

    cout << sum << endl;

    sort(arr.begin(), arr.end(), greater<int>());

    
    cout << (arr[0] + arr[1] + arr[2]) << endl;

    return 0;
}