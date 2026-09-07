#include <bits/stdc++.h>
using namespace std;

struct Task
{
    int id;
    int priority;
    int time;
};

int main()
{
    int n;
    cin >> n;

    vector<Task> tasks(n);

    for (int i = 0; i < n; i++)
    {
        cin >> tasks[i].id >> tasks[i].priority >> tasks[i].time;
    }

    stable_sort(tasks.begin(), tasks.end(), [](Task a, Task b) { return a.priority > b.priority; });

    int currentTime = 0;

    cout << "Execution Order:\n";

    for (Task x : tasks)
    {
        currentTime += x.time;

        cout << "Task " << x.id << " completes at " << currentTime << endl;
    }

    cout << "Total time = " << currentTime << endl;

    return 0;
}
