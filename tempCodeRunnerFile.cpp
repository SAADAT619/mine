priority_queue<int> q; //This queue is for int values

    q.push(1400);
    q.push(100);
    q.push(12);
    q.push(1700);


    //To print the prioeity queue
    while(!q.empty()){
        int x;
        x = q.top();
        cout << x << endl;
        q.pop();
    }