#include<bits/stdc++.h>
using namespace std;

struct Team {
    string name;
    int points = 0;
    int goal_diff = 0;
    int goals_scored = 0;
};

bool compareTournament(const Team &a, const Team &b) {
    if (a.points != b.points) {
        return a.points > b.points;
    }
    if (a.goal_diff != b.goal_diff) {
        return a.goal_diff > b.goal_diff;
    }
    return a.goals_scored > b.goals_scored;
}

int findTeamIndex(const vector<Team> &teams, const string &name) {
    for (int i = 0; i < teams.size(); i++) {
        if (teams[i].name == name) {
            return i;
        }
    }
    return -1;
}

int main(){

    int n;
    if (!(cin >> n)) return 0;

    vector<Team> teams(n);
    for (int i = 0; i < n; i++) {
        cin >> teams[i].name;
    }

    int total_matches = n * (n - 1) / 2;

    for (int i = 0; i < total_matches; i++) {
        string match_names, score_str;
        cin >> match_names >> score_str;

        
        int dash_pos = match_names.find('-');
        string nameA = match_names.substr(0, dash_pos);
        string nameB = match_names.substr(dash_pos + 1);

        
        int colon_pos = score_str.find(':');
        int scoreA = stoi(score_str.substr(0, colon_pos));
        int scoreB = stoi(score_str.substr(colon_pos + 1));

        int idxA = findTeamIndex(teams, nameA);
        int idxB = findTeamIndex(teams, nameB);

        
        teams[idxA].goals_scored += scoreA;
        teams[idxB].goals_scored += scoreB;

        teams[idxA].goal_diff += (scoreA - scoreB);
        teams[idxB].goal_diff += (scoreB - scoreA);

        
        if (scoreA > scoreB) {
            teams[idxA].points += 3;
        } else if (scoreB > scoreA) {
            teams[idxB].points += 3;
        } else {
            teams[idxA].points += 1;
            teams[idxB].points += 1;
        }
    }

    sort(teams.begin(), teams.end(), compareTournament);

    
    vector<string> qualified;
    for (int i = 0; i < n / 2; i++) {
        qualified.push_back(teams[i].name);
    }

    
    sort(qualified.begin(), qualified.end());

    
    for (int i = 0; i < qualified.size(); i++) {
        cout << qualified[i] << "\n";
    }

    return 0;
}