#include <iostream>
#include <map>
#include <vector>

using namespace std;

int main() {
    int N;
    cin >> N;

    map<int, int> lastReceivedTime; 
    map<int, int> responseTime;     

    int totalTime = 0; 
    for (int i = 0; i < N; ++i) {
        char eventType;
        int X;
        cin >> eventType >> X;

        if (eventType == 'R') {
            lastReceivedTime[X] = totalTime; 
        } else if (eventType == 'E') {
            
            if (lastReceivedTime.find(X) != lastReceivedTime.end()) {
                responseTime[X] += totalTime - lastReceivedTime[X];
                lastReceivedTime.erase(X); 
            }
        } else if (eventType == 'T') {
            totalTime += X; 
        }
    }

 
    for (const auto& pair : lastReceivedTime) {
        responseTime[pair.first] = -1; 


    for (const auto& pair : responseTime) {
        cout << pair.first << " " << pair.second << endl;
    }
    }
    return 0;
}
