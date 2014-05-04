//
//  board.h
//  cltetris
//
//  Created by Ethan Laur on 5/3/14.
//  Copyright (c) 2014 Ethan Laur. All rights reserved.
//

#ifndef cltetris_board_h
#define cltetris_board_h

#define NUM_BOARD_PIECES 7
typedef char board_piece_t[4][4];
typedef char **board_piece_g;
const static board_piece_t
board_pieces[NUM_BOARD_PIECES] =
{
	{    //bar
		0, 0, 0, 1,
		0, 0, 0, 1,
		0, 0, 0, 1,
		0, 0, 0, 1
	},
	{    //zig
		0, 0, 0, 0,
		0, 1, 0, 0,
		0, 1, 1, 0,
		0, 0, 1, 0
		
	},
	{    //zag
		0, 0, 0, 0,
		0, 0, 1, 0,
		0, 1, 1, 0,
		0, 1, 0, 0
		
	},
	{
		//block
		0, 0, 0, 0,
		0, 1, 1, 0,
		0, 1, 1, 0,
		0, 0, 0, 0
	},
	{
		//T
		0, 0, 0, 0,
		0, 0, 0, 0,
		0, 0, 1, 0,
		0, 1, 1, 1
	},
	{
		//L
		0, 0, 0, 0,
		0, 0, 0, 0,
		0, 0, 0, 1,
		0, 1, 1, 1
	},
	{
		//backwards L
		0, 0, 0, 0,
		0, 0, 0, 0,
		0, 1, 0, 0,
		0, 1, 1, 1
	}
};

board_piece_g
get_piece_from_list(int);
void
rotate_piece_left(board_piece_g);
void
rotate_piece_right(board_piece_g);

#endif
