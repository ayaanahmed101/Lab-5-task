
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 5
#define MINES 5

char board[N][N];
char show[N][N];

// count bombs around cell
int count(int r,int c){
    int i,j,n=0;
    for(i=r-1;i<=r+1;i++){
        for(j=c-1;j<=c+1;j++){
            if(i>=0 && i<N && j>=0 && j<N){
                if(board[i][j]=='*') n++;
            }
        }
    }
    return n;
}

void setup(){
    int i,j,m=0;
    for(i=0;i<N;i++){
        for(j=0;j<N;j++){
            board[i][j]='0';   
            show[i][j]='#';    
        }
    }
    while(m<MINES){
        int r=rand()%N,c=rand()%N;
        if(board[r][c]!='*'){
            board[r][c]='*';   
            m++;
        }
    }
    // fill numbers
    for(i=0;i<N;i++){
        for(j=0;j<N;j++){
            if(board[i][j]!='*'){
                board[i][j]='0'+count(i,j);
            }
        }
    }
}

// print current state
void print(){
    int i,j;
    printf("   ");
    for(j=0;j<N;j++) printf("%d ",j);
    printf("\n");
    for(i=0;i<N;i++){
        printf("%d: ",i);
        for(j=0;j<N;j++) printf("%c ",show[i][j]);
        printf("\n");
    }
}

int main(){
    srand(time(0));
    setup();
    int safe=N*N-MINES,open=0;
    while(1){
        print();
        int r,c;
        printf("row col: ");
        if(scanf("%d%d",&r,&c)!=2) break; // bad input

        if(r<0||r>=N||c<0||c>=N){
            printf("Invalid row/col\n");
            continue;
        }
        if(board[r][c]=='*'){
            printf("Game over!\n");
            break;
        }
        if(show[r][c]=='#'){
            show[r][c]=board[r][c]; // reveal
            open++;
        } else {
            printf("Already opened\n");
        }
        if(open==safe){
            printf("You win!\n");
            break;
        }
    }
    // final reveal
    printf("Final board:\n");
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++) printf("%c ",board[i][j]);
        printf("\n");
    }
    return 0;
}
