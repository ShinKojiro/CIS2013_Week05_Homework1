#include <iostream>
#include <string>

using namespace std;

// The examle output in the book doesnt make any sense >=(

int main(){

    int edocCount = 0;
    int edocCandies = 0;
    int margorpCount = 0;
    int experiencePossible = 0;
    bool notDone = true;
    char cont = 'y';

    while(notDone){
        switch(cont){
            case 'y':
            case 'Y':
                cout << "Enter the number of Edoc you have cought: ";
                cin >> edocCount;
                cout << "Enter the number of Edoc candies in you have now: ";
                cin >> edocCandies;


                while(edocCount > 0){
                    while(edocCandies >= 12){
                        edocCount--;
                        margorpCount++;
                        edocCandies++;
                        experiencePossible+= 500;
                        edocCandies-= 12;
                    }
                    if(edocCount > 0){
                        edocCount--;
                        edocCandies++;
                    }
                    while(margorpCount > 0){
                        margorpCount--;
                        edocCandies++;
                    }
                }
                
                

                // margorpCount = (edocCandies / 12);
                // edocCandies = ((margorpCount * edocCandies) - edocCandies);
                // experiencePossible = (margorpCount * 500);

                cout << "Number of Margorps = " << margorpCount << endl;
                cout << "Number of leftover Edocs = " << edocCount << endl;
                cout << "Number of leftover Edoc Candies = " << edocCandies << endl;
                cout << "Exp possible = " << experiencePossible << endl << endl;

                edocCount = 0;
                edocCandies = 0;
                margorpCount = 0;
                experiencePossible = 0;

                cout << "Enter again? ";
                cin >> cont;
            break;
            case 'n':
            case 'N':
                notDone = false;
            break;
            default:
                cout << "That is not a valid selection.";
                cont = 'n';
            break;

        }
    }

    // for(edocCount = 0; edocCandies % 12 == 0; margorpCount++){
    //     //margorpCount = (edocCandies / 12);
    //     edocCandies = ((margorpCount * edocCandies) - edocCandies);
    //     experiencePossible = (margorpCount * 500);
    // }

    // // margorpCount = (edocCandies / 12);
    // // edocCandies = ((margorpCount * edocCandies) - edocCandies);
    // // experiencePossible = (margorpCount * 500);

    // cout << "Number of margorps = " << margorpCount << endl;
    // cout << "Number of left over edoc Candies = " << edocCandies << endl;
    // cout << "Exp possible = " << experiencePossible;
}