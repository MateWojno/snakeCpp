#include <iostream>
#include <string>

using namespace std;

int main ()
{
    cout << "Hello world!";
    int bgMatrix[32][32] {
    {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31},
    {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31}
    };
    
    int snakeMatrix[32][32] {
        // y axis first
    {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31},
    {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31}
    };

    int fruitMatrix[32][32] {
    {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31},
    {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31}
    };
    
    int spawnFruit_x;
    int spawnFruit_y;
    int scoreCounter = 0;
    int playerController_y;
    int playerController_x;
    // mainGameLoop
    bool isDead = false;
    
    while (isDead=false)
    {   
        // playerMovement loop, collision with background listener;
        while (playerController_x >0 && playerController_x < 32 && playerController_x >0 && playerController_y < 32)
        {   
            cout << "Here comes the main loop";
            playerController_x = getchar();
            playerController_y = getchar();
            if (playerController_x = 'a'  )
            {
                --playerController_x;
            }
            else if (playerController_x= 'd')
            {
                ++playerController_x;
            }
            else if (playerController_y = 's')
            {
                --playerController_y;
            }
            else if (playerController_y = 'w')
            {
                ++playerController_y;   
            }
        // constantly changing snake coords;
         snakeMatrix[32][32]=snakeMatrix[playerController_y][playerController_x];

        if (playerController_x || playerController_y == 0 || 32)
        {
            cout << "You died";
            isDead=true;
        }
           // fruit spawner;
        while (true)
        {
            if (fruitMatrix[32][32] =! snakeMatrix[32][32])
            {
                while (true)
                {
                    if (spawnFruit_x, spawnFruit_y > 0 && spawnFruit_x, spawnFruit_y  < 32)
                    {
                        ++spawnFruit_x;
                        ++spawnFruit_y; 
                    }
                }
            }
            else if (fruitMatrix[32][32] == snakeMatrix[32][32])
            {
                ++scoreCounter;
                cout << "Your score is:\n" + scoreCounter;
            }
        }  
        // updating fruit position
        fruitMatrix[32][32] = fruitMatrix[spawnFruit_x][spawnFruit_y];          
        }
    };
    
    return 0;
}