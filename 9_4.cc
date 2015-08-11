// Example program
#include <iostream>
#include <string>
#include <set>

using std::set;
using std::cout;
using std::endl;

// Write a method to return all subsets of a set.

void print(set<set<int> >& all) {
    cout << "[ ";
     for(set<set<int> >::iterator it = all.begin(); it != all.end(); it++) {
        cout << "{ ";
        for(set<int>::iterator it2 = it->begin(); it2 != it->end(); it2++) {
            int x = *it2;
            cout << x << ", ";
        }
        cout << " }" << endl;
    }   
    cout << " ]" << endl;
}

void print2(set<int>& all) {
            cout << "{ ";
     for(set<int>::iterator it = all.begin(); it != all.end(); it++) {

            int x = *it;
            cout << x << ", ";
    }   
    
        cout << " }" << endl;
}

void helper(set<int>& input, set<set<int> >& all_subsets) {
  for(set<int>::iterator it = input.begin(); it != input.end(); it++) {
      set<int> copy = input;
      copy.erase(*it);  // O(log n)

      std::pair<set<set<int> >::iterator, bool> p = all_subsets.insert(copy);
      if(p.second) {  // true if new element inserted, false if already exists
        helper(copy, all_subsets);
      }
  }
}

set<set<int> > SubsetsOfASet(std::set<int>& input) {
  set<set<int> > all_subsets;
  helper(input, all_subsets);
  return all_subsets;
}


int main()
{
  set<int> s;
  s.insert(0);
  s.insert(1);
  s.insert(2);
  s.insert(3);
  
    set<set<int> > all = SubsetsOfASet(s);
    print(all);
    return 0;
}
