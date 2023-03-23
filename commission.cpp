#include<bits/stdc++.h>
using namespace std;
int main() {
    string s;
    cin >> s;
    char ch;
    cin >> ch;
    if(ch!='Y') {
        cout << "TOTAL MEMBERS:1" << endl;
        cout << "COMMISSION DETAILS" << endl;
        cout << s << ": " << 5000*(0.05) << " INR" << endl;
    }
    else {
        string temp;
        getline(cin, temp);
        int c=1;
        vector<string> res;
        string a = "";
        for(int i=0;i<temp.size();i++) {
            if(temp[i]!=',' && temp[i]!=' ')
                a += temp[i];
            else {
                c++;
                res.push_back(a);
                a = "";
            }
        }
        cout<<"TOTAL MEMBERS:"<<c<<endl;
        cout<<"COMMISSION DETAILS"<<endl;
        cout << s << ": " << 5000*(0.1) << " INR" << endl;
        for(int i=0;i<res.size();i++) { 
            cout << res[i] << ": " << 5000*(0.05) << " INR" << endl;
        }
    }
    return 0;
}