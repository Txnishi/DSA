#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'superReducedString' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string superReducedString(string s) {
    
    stack<char>t;
    string k = "";
    t.push(s[0]);
    
    for(int i = 1; i< s.length(); i++){

        if(!t.empty() && s[i] == t.top()){
            t.pop();
        }else{
            t.push(s[i]);
        }
    }
    
    while(!t.empty()){
        k+=t.top();
        t.pop();
    }

    reverse(k.begin(), k.end());
    if(k.empty()){
        return "Empty String";
    }
    
    return k;
   
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = superReducedString(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
