# infinitive_input
getting input until Enter... [ cin >> s && cin.get() != '\n' ]


    int n, s;
    cin >> n;

    vector<int> courses;

    while(cin >> s && cin.get() != '\n')
    {
           courses.push_back(s);
    }
    courses.push_back(s);

    sort(courses.begin(), courses.end());
