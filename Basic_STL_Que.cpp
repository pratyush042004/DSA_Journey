#include<iostream>
#include<array>
#include<vector>
#include<deque>
#include<list>
#include<stack>
#include<algorithm>

using namespace std;
                                                                //reverse an array after sorting
 /*vector<int> sortOrder(vector<int> a)
 {
    sort(a.begin(),a.end());
    return a;
 }
 vector<int> reverseOrder(vector<int> b)
 {
    for(int i=0,j=b.size()-1;i<j;i++,j--)
    {
        swap(b[i],b[j]);
    }
    return b;
 }

 int main()
 {
    vector<int> userInput;
    int userinput;

    cout<<"Enter the input"<<endl;
    while(cin>>userinput)
    {
        userInput.push_back(userinput);
    }

    vector<int> b = sortOrder(userInput);
    vector<int> x = reverseOrder(b);
    cout<<"------------------------"<<endl;
    for(int i:x)
    {
        cout<<i<<endl;

    }
 }*/

                                     //Declare, Insert and Print a pair of strings paired with another pair of int paired with int.
/*int main()
{
    pair<string,pair<int,int>> x;
    x={"Geeks",{1,2}};
    cout<<x.first<<" "<<x.second.first<<" "<<x.second.second;
    return 0;
}
*/
                                //Find the index of a given element in a vector,
                                // such that the next element to it is 2, and if there exists more than one such index returns the larger one if there is no such index then return -1.

/*int main() {
    vector<int> a;
    vector<int> x;
    int input;

    while (cin >> input) {
        a.push_back(input);
    }

    for (int i = 0; i < a.size(); i++) {
        if (a[i] == 2) {
            x.push_back(i); // Store the index in x
        }
    }

    if (x.empty()) {
        cout << -1 << endl;
    } else {
        int maxVal = x[0]; // Initialize maxVal with the first index

        for (int i = 1; i < x.size(); i++) {
            if (x[i] > maxVal) {
                maxVal = x[i]; // Update maxVal if a greater index is found
            }
        }

        cout << maxVal << endl;
    }

    return 0;
}
*/
