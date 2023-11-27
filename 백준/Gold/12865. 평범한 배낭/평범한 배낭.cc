#include <cstdio>
 
#define WEIGHT 0
#define VALUE 1
 
using namespace std;
 
int main()
{
    int dp[101][100001] = {0, };
    int item[101][2];
 
    int N, K;
    scanf("%d %d", &N, &K);
 
    for (int i = 1; i <= N; i++){
        scanf("%d %d", &item[i][WEIGHT], &item[i][VALUE]);
    }
 
    for (int i = 1 ; i <= N ; i++){
        for (int w = 1 ; w <= K ; w++){
            if (item[i][WEIGHT] <= w){ // 최대 무게를 하나씩 올려가면서 계산
                if ((item[i][VALUE] + dp[i-1][w-item[i][WEIGHT]]) > dp[i-1][w]) // 이전 최대가치를 사용하는 것보다 이전걸 빼고 현재물건을 넣는게 더 좋다면 넣어주자
                    dp[i][w] = item[i][VALUE] + dp[i-1][w-item[i][WEIGHT]];
                else dp[i][w] = dp[i-1][w]; // 아니라면 이전가치를  그대로 사용
            }
            else{
                dp[i][w] = dp[i-1][w];
            }
        }
    }
 
    printf("%d", dp[N][K]);
    return 0;
}