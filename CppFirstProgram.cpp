#include <iostream>
#include <vector>

using namespace std;

//void create_board(vector<string> row_1, vector<string> row_2, vector<string> row_3);
void showCurrentBoard(vector<string> row_1, vector<string> row_2, vector<string> row_3);
void selecting(bool& cplayer, vector<string>& row_1, vector<string>& row_2, vector<string>& row_3);
void checkWin(bool playerB, vector<string> row_1, vector<string> row_2, vector<string> row_3, bool& gameStatus);

int main()
{
    bool gameOver = false;
    bool currentPlayer = true;

    vector<string> row1(3, "[ ]");
    vector<string> row2(3, "[ ]");
    vector<string> row3(3, "[ ]");

    std::cout << "Welcome to Tic Tac Toe! \n";

    while(gameOver == false)
    {
        showCurrentBoard(row1, row2, row3);
        selecting(currentPlayer, row1, row2, row3);
        checkWin(currentPlayer, row1, row2, row3, gameOver);  
    }

}

void selecting(bool& cplayer, vector<string>& row_1, vector<string>& row_2, vector<string>& row_3)
{
    int rowChoice;
    int collumnChoice;

    string player;
    string piece;

    if(cplayer == true)
    {
        player = "Player 1 ";
    }
    if(cplayer == false)
    {
        player = "Player 2 ";
    }
    if(cplayer == true)
    {
        piece = "[O]";
    }
    if(cplayer == false)
    {
        piece = "[X]";
    }


    std::cout << player << "Choose a Row \n";
    std::cin >> rowChoice;
    while (rowChoice > 3 || rowChoice < 1)
    {
        std::cout << "Try again. \n";
        std::cin >> rowChoice;
    }
    rowChoice -= 1;
    
    std::cout << player << "Choose a Collumn \n";
    std::cin >> collumnChoice;
    while (collumnChoice > 3 || collumnChoice < 1)
    {
        std::cout << "Try again. \n";
        std::cin >> collumnChoice;
    }
    collumnChoice -= 1;
     

    if (rowChoice == 0)
    {
        if (row_1[collumnChoice] == "[X]" || row_1[collumnChoice] == "[O]")
        {
            std::cout << "Sorry that spot is taken \n";
            return;
        }
        row_1[collumnChoice] = piece;
        if(cplayer == true)
        {
            cplayer = false;
            return;
        }
        else if(cplayer == false)
        {
            cplayer = true;
            return;
        }
    }
    if (rowChoice == 1)
    {
        if (row_2[collumnChoice] == "[X]" || row_2[collumnChoice] == "[O]")
        {
            std::cout << "Sorry that spot is taken \n";
            return;
        }
        row_2[collumnChoice] = piece;
        if(cplayer == true)
        {
            cplayer = false;
            return;
        }
        else if(cplayer == false)
        {
            cplayer = true;
            return;
        }
    }
    if (rowChoice == 2)
    {
        if (row_3[collumnChoice] == "[X]" || row_3[collumnChoice] == "[O]")
        {
            std::cout << "Sorry that spot is taken \n";
            return;
        }
        row_3[collumnChoice] = piece;
        if(cplayer == true)
        {
            cplayer = false;
            return;
        }
        else if(cplayer == false)
        {
            cplayer = true;
            return;
        }      
    }
    
}

void checkWin(bool playerB, vector<string> row_1, vector<string> row_2, vector<string> row_3, bool& gameStatus)
{
    string piece;
    string player;

    if(playerB == true)
    {
        piece = "[X]";
    }
    if(playerB == false)
    {
        piece = "[O]";
    }
    if(playerB == true)
    {
        player = "Player 2";
    }
    if(playerB == false)
    {
        player = "Player 1";
    }

    //Horizontal Checks
    if(row_1[0] == piece && row_1[1] == piece && row_1[2] == piece )
    {
        std::cout << player << " has won the game!";
        gameStatus = true;

    }
    if(row_2[0] == piece && row_2[1] == piece && row_2[2] == piece )
    {
        std::cout << player << " has won the game!";
        gameStatus = true;
    }
    if(row_3[0] == piece && row_3[1] == piece && row_3[2] == piece )
    {
        std::cout << player << " has won the game!";
        gameStatus = true;
    }
    //Vertical Checks
    if(row_1[0] == piece && row_2[0] == piece && row_3[0] == piece )
    {
        std::cout << player << " has won the game!";
        gameStatus = true;
    }
    if(row_1[0] == piece && row_2[0] == piece && row_3[0] == piece )
    {
        std::cout << player << " has won the game!";
        gameStatus = true;
    }
    if(row_1[0] == piece && row_2[0] == piece && row_3[0] == piece )
    {
        std::cout << player << " has won the game!";
        gameStatus = true;
    }
    //Diagonal Checks
    if(row_1[0] == piece && row_2[1] == piece && row_3[2] == piece )
    {
        std::cout << player << " has won the game!";
        gameStatus = true;
    }
    if(row_3[0] == piece && row_2[1] == piece && row_1[2] == piece )
    {
        std::cout << player << " has won the game!";
        gameStatus = true;
    }
}
void showCurrentBoard(vector<string> row_1, vector<string> row_2, vector<string> row_3)
{
    std::cout 
    << row_1.at(0) << row_1.at(1) << row_1.at(2) << "\n" 
    << row_2.at(0) << row_2.at(1) << row_2.at(2) << "\n" 
    << row_3.at(0) << row_3.at(1) << row_3.at(2) << "\n";
}

/*void create_board(vector<string> row_1, vector<string> row_2, vector<string> row_3)
{
    row_1.push_back("[ ]");
    row_1.push_back("[ ]");
    row_1.push_back("[ ]");
    row_2.push_back("[ ]");
    row_2.push_back("[ ]");
    row_2.push_back("[ ]");
    row_3.push_back("[ ]");
    row_3.push_back("[ ]");
    row_3.push_back("[ ]");

} */