/*다음 소스 코드를 완성하여 정사각행렬의 주대각선 성분이 출력되게 만드세요. 주대각선 성분은 왼쪽 위부터 오른쪽 아래까지 이어지는 대각선에 위치한 값을 말합니다.*/

#include <stdio.h>

int main()
{
    int matrix[8][8] = {
        {  1,  2,  3,  4,  5,  6,  7,  8 },
        {  9, 10, 11, 12, 13, 14, 15, 16 },
        { 17, 18, 19, 20, 21, 22, 23, 24 },
        { 25, 26, 27, 28, 29, 30, 31, 32 },
        { 33, 34, 35, 36, 37, 38, 39, 40 },
        { 41, 42, 43, 44, 45, 46, 47, 48 },
        { 49, 50, 51, 52, 53, 54, 55, 56 },
        { 57, 58, 59, 60, 61, 62, 63, 64 }
    };
    int j=0;
    for(int i=0;i<8;i++)
    {

        printf("%d ", matrix[i][j]);

        j++;
    }
    return 0;
}