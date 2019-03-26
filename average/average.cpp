#include <bits/stdc++.h>
using namespace std;

int main(){
    ifstream infile;
    infile.open("input.in");
    ofstream outfile;
    outfile.open("output.out");

    int n;
    float avg;
    float sum=0;
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

 for (int i = 0; i<n; i++){
        sum = sum + v[i];
    }

    avg = sum/n;

    cout << "Average: " << avg << endl;
    outfile << avg << endl;
}