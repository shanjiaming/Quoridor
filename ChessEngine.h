//
// Created by JiamingShan on 2021/1/14.
//

#ifndef QUORIDOR_CHESSENGINE_H
#define QUORIDOR_CHESSENGINE_H

#include<string>

using std::string;

//enum ChessCircumstance { none , circle , cross };  // 3 kinds of circumstances for each block
typedef int ChessCircumstance;
//enum Barrier { vacuum , straight , vertical };   //  3 kinds of circumstances for each border
typedef int Barrier;
const int SIZE = 9;
const int PLAYER_NUM = 2;

struct ChessEngine {

public:

//    ChessCircumstance chessboard[SIZE][SIZE] ; // 0-base
    Barrier chessBoarders[SIZE - 1][SIZE - 1] ; // 0-base
    ChessCircumstance turn ; // to find out whose turn  initialization : circle


    ChessEngine(string="");

    ~ChessEngine() ;

    /*
     * void InputMove(string);
     * A function that read a given string(probably by user or AI)
     * as an input and change the state of the board accordingly.
     */
    struct Player{
        int barrierNum;
        int x;
        int y;
        bool (*hasWin)(Player);//While using, this "Player" should be itself. This function differs from player to player. Though I haven't got ideas to improve it.
    };
    Player players[PLAYER_NUM];//eg:player[0] player[1]

    void GameInitialize(string);

    void InputMove(string);

    /*
     * first input : move or put
     *      mov means to move your chess
     *      put means to set one border
     *      oth include other circumstances
     * second input :
     *      - & | , coordinates & position for put
     *      A | D | W | X | something like Q|E|Z|C|S for move
     *      mov A
     *      put 3 4 -
     */

};


#endif //QUORIDOR_CHESSENGINE_H