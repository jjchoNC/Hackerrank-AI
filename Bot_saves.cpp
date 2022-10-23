#include <iostream>
using namespace std;

void displayPathtoPrincess(int px, int py, int mx, int my)
{
    while (!((mx == px) && (my == py)))
    {
        if (mx < px)
        {
            cout << "RIGHT" << endl;
            mx++;
        }
        
        else if (mx > px)
        {
            cout << "LEFT" << endl;
            mx--;
        }
        
        if (my > py)
        {
            cout << "UP" << endl;
            my--;
        }
        
        else if(my < py)
        {
            cout << "DOWN" << endl;
            my++;
        }
    }
}

int main(void) {

    int m;
    cin >> m;
    char s[3][3];
    int mx, my, px, py;
    for(int i = 0; i < m; i++) 
    {
        for (int j = 0; j < m; j++)
        {
            cin >> s[i][j];
            if (s[i][j] == 'p')
            {
                px = j;
                py = i;
            }
            
            if (s[i][j] == 'm')
            {
                mx = j;
                my = i;
            }
        }
    }
    // cout << mx << my << px << py;
    displayPathtoPrincess(px,py,mx,my);

    return 0;
}
