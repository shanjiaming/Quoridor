//
// Created by JiamingShan on 2021/1/14.
//

#ifndef QUORIDOR_CHESSENGINE_H
#define QUORIDOR_CHESSENGINE_H

#include<string>

using std::string;


class ChessEngine {
public:

    /*
     * string ShowState() const;
     * A function changing present state to string
     * to show its information
     */
    string ShowState() const;

    /*
     * void InputMove(string);
     * A function that read a given string(probalbly by user or AI)
     * as an input and change the state of the board accordingly.
     */
    void InputMove(string);

};


#endif //QUORIDOR_CHESSENGINE_H
