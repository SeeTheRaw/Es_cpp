#ifndef FITNESS_APP_HPP
#define FITNESS_APP_HPP
#include "Activity.hpp"
#include <list>

class FitnessApp{

    public:

    void addActivity(Activity &a){
        activities.push_back(a);
        totalCaloriesBurned += a.getCaloriesBurned();
        totalDuration += a.getDuration();
        totalStandUpDuration += a.getDuration() * 2;
    }

    void removeActivity(Activity &a){
        activities.remove(a);
        totalCaloriesBurned -= a.getCaloriesBurned();
        totalDuration -= a.getDuration();
        totalStandUpDuration -= a.getDuration() * 2;
    }

    void printStatistics(){
        cout << "\nTOT. CALORIE BRUCIATE : " << totalCaloriesBurned << "   TOT. ATTIVITA FISICA : " << totalDuration << " ore   TOT. DURATA IN PIEDI : " << totalStandUpDuration << " ore\n";
    }

    void printActivities(){
        cout << "\n LISTA ATTIVITA REGISTRATE: \n";
        for (auto &a : activities){
            a.printActivity();
            cout << "\n";
        }
    }

    private:
        list<Activity> activities;
        int totalStandUpDuration = 0;
        int totalCaloriesBurned = 0;
        int totalDuration = 0;
};

#endif // FITNESS_APP_HPP