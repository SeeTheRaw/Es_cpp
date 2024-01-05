#ifndef ACTIVITY_HPP
#define ACTIVITY_HPP
#include<iostream>
#include <string>
using namespace std;

class Activity{
    public:
    Activity(string n, string d, int du, int g, int c) : name(n), description(d), duration(du), goal(g), caloriesBurned(c) {}
    ~Activity() {}

    const string &getName() const{
        return name; 
    }

    void setName(const string &n){
        name = n;
    }

    const string &getDescription() const{
        return description;
    }

    void setDescription(const string &d){
        description = d;
    }

    const int &getDuration() const{
        return duration;
    }

    void setDuration(const int &du){
        duration = du;
    }

    int &getGoal() {
        return goal;
    }

    void setGoal(int &g){
        goal = g;
    }

    int &getCaloriesBurned(){
        return caloriesBurned;
    }

    void setCaloriesBurned(int &c){
        caloriesBurned = c;
    }

    void updateGoal(int &g){
        goal += g;
    }

    bool operator==(const Activity &other) const {}

    void printActivity(){
        cout << "\nAttivita => " << name << "\nDescrizione => " << description << "\nDurata => " << duration << " ora/e \nObbiettivo => " << goal << " ora/e \nCalorie bruciate => " << caloriesBurned << "\n";
    }


    private:
    string name;
    string description;
    int duration;
    int goal;
    int caloriesBurned;
};

#endif // ACTIVITY_HPP