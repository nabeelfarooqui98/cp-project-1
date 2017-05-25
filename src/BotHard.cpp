#include "bot.h"
#include "BotHard.h"

BotHard::BotHard()
{
    //ctor
}

void BotHard::placePiece(int board[3][3])
{
    //Delay(1);


    //it will read the board
    //then set any one 0 to 2
    //for hard difficulty

        //almost winning

        if (board[0][0]==2 && board[0][1]==2 && board[0][2]==0 ){
            board[0][2]=2;
        }
        else if (board[0][0]==2 && board[0][2]==2 && board[0][1]==0 ){
            board[0][1]=2;

        }
        else if (board[0][1]==2 && board[0][2]==2 && board[0][0]==0 ){
            board[0][0]=2;

        }
        //-----
        else if (board[1][0]==2 && board[1][1]==2 && board[1][2]==0 ){
            board[1][2]=2;
        }
        else if (board[1][1]==2 && board[1][2]==2 && board[1][0]==0 ){
            board[1][0]=2;
        }
        else if (board[1][0]==2 && board[1][2]==2 && board[1][1]==0 ){
            board[1][1]=2;
        }
        ///-----
        else if (board[2][0]==2 && board[2][1]==2 && board[2][2]==0 ){
            board[2][2]=2;
        }
        else if (board[2][1]==2 && board[2][2]==2 && board[2][0]==0 ){
            board[2][0]=2;
        }
        else if (board[2][0]==2 && board[2][2]==2 && board[2][1]==0 ){
            board[2][1]=2;
        }
        ///-----row ends
        else if (board[0][0]==2 && board[1][0]==2 && board[2][0]==0){
            board[2][0]=2;
        }
        else if (board[1][0]==2 && board[2][0]==2 && board[0][0]==0){
            board[0][0]=2;
        }
        else if (board[0][0]==2 && board[2][0]==2 && board[1][0]==0){
            board[1][0]=2;
        }//------col
        else if (board[0][1]==2 && board[1][1]==2 && board[2][1]==0){
            board[2][1]=2;
        }
        else if (board[1][1]==2 && board[2][1]==2 && board[0][1]==0){
            board[0][1]=2;
        }
        else if (board[0][1]==2 && board[2][1]==2 && board[1][1]==0){
            board[1][1]=2;
        }//----col
        else if (board[0][2]==2 && board[1][2]==2 && board[2][2]==0){
            board[2][2]=2;
        }
        else if (board[1][2]==2 && board[2][2]==2 && board[0][2]==0){
            board[0][2]=2;
        }
        else if (board[0][2]==2 && board[2][2]==2 && board[1][2]==0){
            board[1][2]=2;
        }//----col ends


        //keeray

        else if (board[0][0]==1 && board[0][1]==1 && board[0][2]==0 ){
            board[0][2]=2;
        }
        else if (board[0][0]==1 && board[0][2]==1 && board[0][1]==0 ){
            board[0][1]=2;
        }
        else if (board[0][1]==1 && board[0][2]==1 && board[0][0]==0 ){
            board[0][0]=2;
        }
        //-----
        else if (board[1][0]==1 && board[1][1]==1 && board[1][2]==0 ){
            board[1][2]=2;
        }
        else if (board[1][1]==1 && board[1][2]==1 && board[1][0]==0 ){
            board[1][0]=2;
        }
        else if (board[1][0]==1 && board[1][2]==1 && board[1][1]==0 ){
            board[1][1]=2;
        }
        ///-----
        else if (board[2][0]==1 && board[2][1]==1 && board[2][2]==0 ){
            board[2][2]=2;
        }
        else if (board[2][1]==1 && board[2][2]==1 && board[2][0]==0 ){
            board[2][0]=2;
        }
        else if (board[2][0]==1 && board[2][2]==1 && board[2][1]==0 ){
            board[2][1]=2;
        }
        ///-----row ends
        else if (board[0][0]==1 && board[1][0]==1 && board[2][0]==0){
            board[2][0]=2;
        }
        else if (board[1][0]==1 && board[2][0]==1 && board[0][0]==0){
            board[0][0]=2;
        }
        else if (board[0][0]==1 && board[2][0]==1 && board[1][0]==0){
            board[1][0]=2;
        }//------col
        else if (board[0][1]==1 && board[1][1]==1 && board[2][1]==0){
            board[2][1]=2;
        }
        else if (board[1][1]==1 && board[2][1]==1 && board[0][1]==0){
            board[0][1]=2;
        }
        else if (board[0][1]==1 && board[2][1]==1 && board[1][1]==0){
            board[1][1]=2;
        }//----col
        else if (board[0][2]==1 && board[1][2]==1 && board[2][2]==0){
            board[2][2]=2;
        }
        else if (board[1][2]==1 && board[2][2]==1 && board[0][2]==0){
            board[0][2]=2;
        }
        else if (board[0][2]==1 && board[2][2]==1 && board[1][2]==0){
            board[1][2]=2;
        }//----col ends
        else if (board[0][0]==2 && board[1][1]==2 && board[2][2]==0){
            board[2][2]=2;
        }
        else if (board[2][2]==2 && board[1][1]==2 && board[0][0]==0){
            board[0][0]=2;
        }
        else if (board[0][0]==2 && board[2][2]==2 && board[1][1]==0){
            board[1][1]=2;
        }///------;
        else if (board[0][2]==2 && board[1][1]==2 && board[2][0]==0){
            board[2][0]=2;
        }
        else if (board[0][2]==2 && board[2][0]==2 && board[1][1]==0){
            board[1][1]=2;
        }
        else if (board[1][1]==2 && board[2][0]==2 && board[0][2]==0){
            board[0][2]=2;
        }//-----dignals bot end
        else if (board[0][0]==1 && board[1][1]==1 && board[2][2]==0){
            board[2][2]=2;
        }
        else if (board[2][2]==1 && board[1][1]==1 && board[0][0]==0){
            board[0][0]=2;
        }
        else if (board[0][0]==1 && board[2][2]==1 && board[1][1]==0){
            board[1][1]=2;
        }///------;
        else if (board[0][2]==1 && board[1][1]==1 && board[2][0]==0){
            board[2][0]=2;
        }
        else if (board[0][2]==1 && board[2][0]==1 && board[1][1]==0){
            board[1][1]=2;
        }
        else if (board[1][1]==1 && board[2][0]==1 && board[0][2]==0){
            board[0][2]=2;
        }


        else if(board[1][1]==0)
        {
            board[1][1]=2;
        }

        else if(board[0][0]==1 && board[2][2]==1 && board[1][1]==2)
        {
            if(board[2][1]==0)
            {
                board[2][1]=2;
            }

        }
        else if(board[0][2]==1 && board[2][0]==1 && board[1][1]==2)
        {
            if(board[2][1]==0)
            {
                board[2][1]=2;
            }

        }


        else
        {
            if(board[0][0]==0) board[0][0]=2;
            else if(board[0][2]==0) board[0][2]=2;
            else if(board[2][0]==0) board[2][0]=2;
            else if(board[2][2]==0) board[2][2]=2;
        }

    } // function end

