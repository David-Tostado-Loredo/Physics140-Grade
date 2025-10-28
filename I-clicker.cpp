#include <iostream>
#include <vector>

using namespace std;


int main(){
    vector<double> scores = {
        100 / 100.0, 
        100 / 100.0, 
        91.67 / 100.0, 
        95 / 100.0, 
        91.68 / 100.0, 
        93.75 / 100.0, 
        100 / 100.0, 
        95 / 100.0, 
        100 / 100.0, 
        100 / 100.0, 
        75 / 100.0, 
        95 / 100.0, 
        100 / 100.0, 
        100 / 100.0, 
        100 / 100.0, 
        96.43 / 100.0, 
        100 / 100.0, 
        95 / 100.0, 
        100 / 100.0, 
        93.75 / 100.0, 
        95.84 / 100.0, 
        100 / 100.0, 
        100 / 100.0, 
        100 / 100.0, 
        100 / 100.0, 
        95 / 100.0, 
        100 / 100.0, 
        85.72 / 100.0, 
        100 / 100.0};

    double sum =0;
    for(int i = 0; i < scores.size(); ++i){
        scores[i] *= 100;
        sum+= scores[i];
        cout << "Score " << i << ": " << scores[i] << endl;
    }
    cout << "SUM: " << sum << endl;
    cout << "Total Possible: " << 100 * scores.size() << endl;
    cout << "Percent Grade: " << sum / scores.size() << "%" << endl;
}