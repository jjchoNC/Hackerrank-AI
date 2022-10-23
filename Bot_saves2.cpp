#include <iostream>
using namespace std;

void nextMove(int mx, int my, int px, int py)
{
    if (mx == px)
    {
            if (my > py)
            {
                cout << "UP";
            }

            else
            {
                cout << "DOWN";
            }
    }

    else if (py == my)
    {
            if (mx > px)
            {
                cout << "LEFT";
            }
            
            else
            {
                cout << "RIGHT";
            }
    }

    else
    {
        if (mx > px)
        {
            cout << "LEFT";
        }

        else
        {
            cout << "RIGHT";
        }
        
        
    }
    
}

int main(){
    int n;
    cin >> n;
    int mx, my;
    cin >> my >> mx;
    char grid[n][n];
    int px, py;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> grid[i][j];
            if (grid[i][j] == 'p')
            {
                px = j;
                py = i;
            }
            
        }
    }
    // cout << mx << my << px << py //
    nextMove(mx,my,px,py);
}