#include <iostream>
#include <string>

using namespace std;

int main(){

    int edocCount;
    int edocCandies;
    int margorpCount = 0;
    int experiencePossible;

    cout << "Enter the number of Edoc you have cought: ";
    cin >> edocCount;
    cout << "Enter the number of Edoc candies in you have now: ";
    cin >> edocCandies;

    margorpCount = (edocCandies / 12);
    edocCandies = ((margorpCount * edocCandies) - edocCandies);
    experiencePossible = (margorpCount * 500);

    cout << "Number of margorps = " << margorpCount << endl;
    cout << "Number of left over edoc Candies = " << edocCandies << endl;
    cout << "Exp possible = " << experiencePossible;
}