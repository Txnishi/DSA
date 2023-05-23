#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'timeConversion' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string timeConversion(string s) {
    string h = s.substr(0, 2);
    string m = s.substr(8,9);
 
    
    int hnum = stoi(h);
    
    string res;
    
    if(m == "AM"){
        if(h == "12"){
            res =  "00" + s.substr(2,6);
            return res;  
        }else{
            return s.substr(0,8);
        }   
    }else{
        if(hnum < 12){
            hnum +=12; 
        }
        string n = to_string(hnum);
        res =   n + s.substr(2,6);
        return res;     
    }
    
    
    return s.substr(0,8);
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
