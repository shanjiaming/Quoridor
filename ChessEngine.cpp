//
// Created by JiamingShan on 2021/1/14.
//

#include "ChessEngine.h"


string ChessEngine::ShowState() const {}

void ChessEngine::InputMove(string str)
{

}

ChessEngine::ChessEngine() : turn(circle) , circle_border(8) , cross_border(8) , all_step(0)
{
    for ( int i = 0 ; i < 9 ; i++ )
        for ( int j = 0 ; j < 9 ; j++ )
            chessboard[i][j] = none ;

    for ( int i = 0 ; i < 8 ; i++ )
        for ( int j = 0 ; j < 8 ; j++ )
            chess_boarder[i][j] = vacuum ;
}
