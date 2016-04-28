#include <iostream>
#include <queue>
#include <math.h>
using namespace std;

class City {
  public:
    bool operator()(pair<double,double> city1, pair<double,double> city2) {
        return city1.first<city2.first;
    }
};

int main() {
    priority_queue<pair<double,double>,vector<pair<double,double>>,City> cities;
    
    int numCities, numClinics;
    double population;
    
    cin >> numCities >> numClinics;
    
    for(int i=0;i<numCities;++i) {
        cin >> population;
        cities.emplace(make_pair(population,1));
    }
    
    for(int i=0;i<(numClinics-numCities);++i) {
        double p1 = cities.top().first, p2 = cities.top().second;
        cities.pop();
        cities.emplace(make_pair(p1*(p2/(p2+1)),p2+1));
    }
    
    cout << ceil(cities.top().first);
    
    return 0;
}