#include "bot.h"
#include <iostream>
Bot::Bot()
{



}

Bot::Bot(int a,int b)
{
    btex.loadFromFile("O.png");
    bsprite.setTexture(btex);
    bsprite.setPosition(a,b);
}

Bot::~Bot()
{

}
void Bot::Delay(double s)
{
    int sec = int(s*1000);
    Sleep(sec);
}


 // Pure virtual function
/*{
    //Delay(1);


    //it will read the board
    //then set any one 0 to 2
    bool placed = false;
//    bool isempty=true;
    if(type=="EASY")
    {

        while(placed==false )//nerating random array positions until if finds one that is empty.
        {

            //all places filled checker
            bool full = true; //assume that board is FULL
            for(int i=0;i<3;i++)
            {
                for(int j=0;j<3;j++)
                {
                    if(board[i][j]==0) //if any cell is empty, set 'full' to false
                    {
                        full = false;
                    }
                }
            }

            if(full == true)
            {
                std::cout << "board is full" << std::endl;
                break; //if board is full, bot can not place a piece
            }

            int a = rand()%3;
            int b = rand()%3;
            //isempty=false;
            std::cout << a << " " << b << std::endl;

            if(board[a][b]==0)
            {
                std::cout << "Placing" << std::endl;

                board[a][b]=2;
                placed = true;
            }

        }

    }
    else //for hard difficulty
    {
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

    }
}
*/
