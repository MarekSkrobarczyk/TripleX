#include <iostream>

using namespace std;

void Introduction(int difficulty)
{
    cout << " \n\n\n Your name is Kenny. You are a Minesweeper, (Level = " << difficulty << "  ) " 
        << " There is a bomb in front of you. The code is 3 digits. \n"
        << " Your specialist equipment from \"Biedronka\" gives you the following hints: \n";
}
bool PlayGame(int difficulty)
{

    const int CodeA = rand() % difficulty + 1 ;
    const int CodeB = rand() % difficulty + 1 ;
    const int CodeC = rand() % difficulty + 1 ;

    const int CodeSum = CodeA + CodeB + CodeC;
    const int CodeProduct = CodeA * CodeB * CodeC;

    Introduction(difficulty);

        cout << " When you add all numbers you will get " << CodeSum << endl
        << " And when you multiple them, you will get " << CodeProduct << endl << endl;

    int GuessA, GuessB, GuessC;

    cin >> GuessA >> GuessB >> GuessC;


    cout << " You have enter " << GuessA << GuessB << GuessC;

    int GuessSum = GuessA + GuessB + GuessC;
    int GuessProduct = GuessA * GuessB * GuessC;

    if (GuessSum == CodeSum && GuessProduct == CodeProduct)
    {
        cout << "\n\n You stay alife, congrat :)";
        return true;
    }

    else
    {
        cout << " \n\n Oh my God! You killed Kenny! You Buster !!! :( ";
        return false;
    }

}

void Intoduction()
{

}

int main()
{
    int LevelDifficulty = 1;
    const int MaxLevel = 11;

    while (LevelDifficulty < MaxLevel)
    {
        bool bLevelComplete = PlayGame(LevelDifficulty);
        
        cin.clear();
        cin.ignore();

        if (bLevelComplete)
        {
            LevelDifficulty++;
        }
    }
}


