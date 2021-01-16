//
// Created by JiamingShan on 2021/1/14.
//

#ifndef QUORIDOR_CHESSENGINE_H
#define QUORIDOR_CHESSENGINE_H

#include<string>

using std::string;

enum chess_circumstance { none , circle , cross };  // 3 kinds of circumstances for each block
enum barrier { vacuum , straight , vertical };   //  3 kinds of circumstances for each border
const int SIZE = 9;

class ChessEngine {
private:

    chess_circumstance chessboard[SIZE][SIZE] ; // 0-base
    barrier chess_boarder[SIZE-1][SIZE-1] ; // 0-base

//    chess_circumstance turn ; // to find out whose turn  initialization : circle

    int circle_border ;  // initialization : 8
    int cross_border ;  // initialization : 8

    int all_step ;  // initialization : 0

    ChessEngine() ;

    ~ChessEngine() ;



public:
    /*
     * string ShowState() const;
     * A function changing present state to string
     * to show its information
     */
    string ShowState() const;

    /*
     * void InputMove(string);
     * A function that read a given string(probably by user or AI)
     * as an input and change the state of the board accordingly.
     */
    void InputMove(string);

    /*
     * first input : move or put
     *      move means to move your chess
     *      put means to set one border
     * second input :
     *      horizontal & vertical coordinates & position for put
     *      forward | backward | left | right for move
     *      move forward
     *      put 3 4 straight
     */

};


#endif //QUORIDOR_CHESSENGINE_H