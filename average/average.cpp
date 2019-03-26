#include <bits/stdc++.h>
using namespace std;

int main(){
    ifstream infile;
    infile.open("input.in");

    int n;
    long long avg;
    std::vector<long long> v;

    if (infile.is_open()){
        infile >> n;
        for (int i = 0; i<n; i++){
            long long j;
            infile>>j;
            v.push_back(j);
        }
        infile.close();
    }


    cout << "n: "<< n<<endl;
    for (int i = 0; i<n; i++){
        cout<< "v: " << v[i]<< endl;
    }
}