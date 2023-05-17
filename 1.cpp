// mohammad amin kiani 4003613052         محمد امین کیانی

#include <bits/stdc++.h>
//------------------------------------------------------------------------------------------------------
using namespace std;

int main()
{
    int n, s;
    cin >> n;

    vector<int> courses;

    while(cin >> s && cin.get() != '\n')
    {
           courses.push_back(s);
    }
    courses.push_back(s);

    sort(courses.begin(), courses.end());

    int min_units = 0;
    int max_units = 0;

    for (int i = 0; i < n; i++)
    {
        min_units += courses[i];
        max_units += courses[s - i - 1];
    }

    cout << min_units << " " << max_units << endl;
    return 0;
}
