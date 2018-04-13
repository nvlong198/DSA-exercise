#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#define ROW 4
#define COL 4

int isSafe(int M[][COL], int row, int col, bool visited[][COL])
{

    return (row >= 0) && (row < ROW) &&
           (col >= 0) && (col < COL) &&
           (M[row][col] && !visited[row][col]);
}


void DFS(int M[][COL], int row, int col, bool visited[][COL])
{

    static int rowNbr[] = {-1, -1, -1,  0, 0,  1, 1, 1};
    static int colNbr[] = {-1,  0,  1, -1, 1, -1, 0, 1};

    visited[row][col] = true;

    for (int k = 0; k < 8; ++k)
        if (isSafe(M, row + rowNbr[k], col + colNbr[k], visited) )
            DFS(M, row + rowNbr[k], col + colNbr[k], visited);
}


int countIslands(int M[][COL])
{

    bool visited[ROW][COL];
    memset(visited, 0, sizeof(visited));


    int count = 0;
    for (int i = 0; i < ROW; ++i)
        for (int j = 0; j < COL; ++j)
            if (M[i][j] && !visited[i][j]) // If a cell with value 1 is not
            {                         // visited yet, then new island found
                DFS(M, i, j, visited);     // Visit all cells in this island.
                ++count;                   // and increment island count
            }

    return count;
}

// Driver program to test above function
int main()
{
    int M[][COL]= {
        {1, 1, 0, 0},
        {1, 1, 1, 0},
        {0, 1, 1, 0},
        {0, 0, 0, 1}
    };

    printf("Number of islands is: %d\n", countIslands(M));

    return 0;
}
