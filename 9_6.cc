// Implement an algorithm to print all valid (i.e., properly opened and closed) combinations
of n-pairs of parentheses.
// this is not the most efficient solution! Revisit this problem.

#include <iostream>
#include <string>
#include <set>

using std::set;
using std::string;
using std::cout;
using std::endl;

set<string> AllPermutations(int n) {
    set <string> retval;
    if (n < 1) {
        cout << "error" << endl;
        exit(1);
    }
    
    if (n == 1) {
        retval.insert("()");
        return retval;
    }
    
    set<string> middle = AllPermutations(n-1);
    for (set<string>::iterator j = middle.begin(); j != middle.end(); j++) {
        string s = *j;
        retval.insert("(" + s+ ")");
    }
    
    for (int i = 1; i < n; i++) {
        set<string> left = AllPermutations(i);
        set<string> right = AllPermutations(n - i);
        
        for (set<string>::iterator j = left.begin(); j != left.end(); j++) {
            for (set<string>::iterator k = right.begin(); k != right.end(); k++) {
                string l = *j, r = *k;
                retval.insert(l + r);
                retval.insert(r + l);
            }
        }
    }
    
    return retval;
}

int main()
{
    set<string> all = AllPermutations(3);
    
    for (set<string>::iterator j = all.begin(); j != all.end(); j++) {
        string s = *j;
        cout << s << endl;
    }
    return 0;
}
