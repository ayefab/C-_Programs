#include <iostream>
#include <vector>// FIXME include vector library
using namespace std;

int main() {

vector <int> jersey;
vector <int> rating;
int j, r, temp;

for (int i = 1; i <= 5; i++){
   
cout << "Enter player "<< i << "'s jersey number:" << endl;
cin >> j;
jersey.push_back(j);

cout << "Enter player " << i << "'s rating:" << endl;
cin >> r;
rating.push_back(r);
cout << endl;
}

cout << "ROSTER" << endl;
for (int i = 0; i < 5; i++){
 cout <<"Player " << i+1 << " -- Jersey number: " << jersey[i] << ", Rating: " << rating[i] << endl;   
}

char choice;
while (true)
{
cout << endl;
cout << "MENU" << endl;
cout << "a - Add player" << endl;
cout << "d - Remove player" << endl;
cout << "u - Update player rating" << endl;
cout << "o - Output roster" << endl;
cout << "q - Quit" << endl;
cout << endl;

cout << "Choose an option:" << endl;
cin >> choice;

switch (choice)
    {
    case 'a':
        cout << "Enter a new player's jersey number: ";
        cin >> temp;
        jersey.push_back(temp);

        cout << "Enter the player's rating: ";
        cin >> temp;
        rating.push_back(temp);
        break;

    case 'd':
        cout << "Enter a jersey number: ";
        cin >> temp;
        int i;

        for (i = 0; i < jersey.size(); i++)
        {
            if (jersey.at(i) == temp)
            {
                jersey.erase(jersey.begin() + i);
                rating.erase(rating.begin() + i);
                break;
            }
        }

        break;

    case 'u':
        cout << "Enter a jersey number: ";
        cin >> temp;

        for (int i = 0; i < jersey.size(); i++)
        {
            if (jersey.at(i) == temp)
            {
                cout << "Enter a new rating for player: ";
                cin >> temp;
                rating.at(i) = temp;
                break;
            }
        }
        break;

    case 'r':
        cout << "Enter a rating: ";
        cin >> temp;
        cout << endl << "ABOVE " << temp << endl;

        for (int i = 0; i < jersey.size(); i++)
            if (rating.at(i) > temp)
                cout << "Player " << i + 1 << " -- Jersey number: " << jersey.at(i) << ", Rating: " << rating.at(i) << endl;
        break;

    case 'o':
        cout << "ROSTER" << endl;
        for (int i = 0; i < jersey.size(); i++)
            cout << "Player " << i + 1 << " -- " << "Jersey number: " << rating.at(i) << endl;
        break;

    case 'q':
        return 0;
    default:
        cout << "Invalid" << endl;
    
    }}
   return 0;

}
