#pragma once
#include <iostream>
int board_layout[34][34];
using namespace std;

void gridassign() {
	int x;
	int y;
	int xcount = 3;
	int ycount = 3;
	int grid[16][8]{
		{2,6,10,14,18,22,26,30},
		{2,2,2,2,2,2,2,2},
		{2,6,10,14,18,22,26,30},
		{6,6,6,6,6,6,6,6},
		{2,6,10,14,18,22,26,30},
		{10,10,10,10,10,10,10,10},
		{2,6,10,14,18,22,26,30},
		{14,14,14,14,14,14,14,14},
		{2,6,10,14,18,22,26,30},
		{18,18,18,18,18,18,18,18},
		{2,6,10,14,18,22,26,30},
		{22,22,22,22,22,22,22,22},
		{2,6,10,14,18,22,26,30},
		{26,26,26,26,26,26,26,26},
		{2,6,10,14,18,22,26,30},
		{30,30,30,30,30,30,30,30}
	};

	board_layout[grid[1][1]][2] = 7;
	board_layout[grid[2][1]][2] = 7;
	
		
	
}
void drawboardmap() {

	int y;
	int x;
	int xcount = 0;

	for (x = 1; x <= (31); x = x + 1) {
		for (y = 1; y <= (31); y = y + 1) {
			if (xcount == 3) {
				board_layout[y][x] = 1;
				xcount = 0;

			}
			//else if(board_layout[y][x] > 0) {

            // xcount = xcount + 1;
			//}
			else {
				board_layout[y][x] = 0;
				
			}


		}
		xcount = 0;
		
	}
	x = 0;
	y = 0;
	xcount = 0;
	int z = 0;
	int ycount = 0;
	for (y = 1; y <= (31); y = y + 1) {
		for (x = 1; x <= (31); x = x + 1) {

			if (xcount == 3 or board_layout[y][x] == 1) {

				if (board_layout[y][x] == 1) {
				}
				else {
					board_layout[y][x] = 1;
					xcount = 0;
				}

			}
			else {
				board_layout[y][x] = 0;
				xcount = xcount + 1;
			}
			if (board_layout[y][x] == 1 and ycount == 4) {
				board_layout[y - 1][x] = 2;
				ycount = 0;
				//cout << "|" << " X loc: " << x << " Y loc: " << (y - 1) << "|";
				for (z = 1; z <= 7; z = z + 1) {
					board_layout[y - 1][x + (z * 4)] = 2;
					ycount = 0;
					//cout << "|" << " X loc: " << x << " Y loc: " << (y-1) << "|";

				}


			}

		}
		xcount = 0;
		ycount = ycount + 1;

	}
	ycount = 0;
	xcount = 3;
	
	for (x = 1; x <= 33; x = x + 1) {
		if (xcount == 4) {
			board_layout[33][x] = 4;
			xcount = 0;
		}
		else {
			board_layout[33][x] = 0;

		}

		xcount = xcount + 1;
		
	
	}
	//board_layout[33][2] = 4;
	/*for (x = 1; x <= (31); x = x + 1) {
		for (y = 1; y <= (31); x = x + 1) {
			if (xcount == 3) {
				if (board_layout[y][x] == 2) {
				xcount = 0;
				}
				else if (board_layout[y][x] == 1 and xcount == 3) {
				board_layout[y][x] = 3;
				xcount = 0;

				}


			}
			xcount = xcount + 1;



		}
		xcount = 0;

	}*/
	for (x = 1; x <= (33); x = x + 1) {
		for (y = 1; y <= (33); y = y + 1) {

		 std::cout << board_layout[y][x] << " ";
		   if (y == 33) {
			 std::cout << endl;

			}

		}
		y = 0;
	}
}


void drawrawboard() {
	
	int y;
	int x;
	int xcount = 0;
	//int board_layout[34][34];
	for (x = 1; x <= (32); x = x + 1) {
		for (y = 1; y <= (32); y = y + 1) {
			if (board_layout[y][x] < 4) {
			if (xcount == 3) {
				board_layout[y][x] = 1;
				xcount = 0;

			}
			else {
				board_layout[y][x] = 0;
				xcount = xcount + 1;
			}
			
			}
			else if (board_layout[x][y] > 4) {
				//std::cout << "HERE";
				xcount = xcount + 1;
			}
			


		}
		xcount = 0;

	}
	x = 0;
	y = 0;
	xcount = 0;
	int z = 0;
	int ycount = 0;
	for (y = 1; y <= (32); y = y + 1) {
		for (x = 1; x <= (32); x = x + 1) {
			if (board_layout[y][x] < 4){
			if (xcount == 3 or board_layout[y][x] == 1) {

				if (board_layout[y][x] == 1) {
				}
				else {
					board_layout[y][x] = 1;
					xcount = 0;
				}

			}
			else {
				board_layout[y][x] = 0;
				xcount = xcount + 1;
			}
			if (board_layout[y][x] == 1 and ycount == 4) {
				board_layout[y - 1][x] = 2;
				ycount = 0;
				//cout << "|" << " X loc: " << x << " Y loc: " << (y - 1) << "|";
				for (z = 1; z <= 7; z = z + 1) {
					board_layout[y - 1][x + (z * 4)] = 2;
					ycount = 0;
					//cout << "|" << " X loc: " << x << " Y loc: " << (y-1) << "|";

				}


			}
			
			
			}
			else if (board_layout[x][y] > 4) {
				//std::cout << "HERE";
				xcount = xcount + 1;
			}
			

		}
		xcount = 0;
		ycount = ycount + 1;

	}
	using namespace std;

	std::cout << "    A           B           C           D           E           F           G           H" << endl;
	for (x = 1; x <= 31; x = x + 1) {
		std::cout << " - ";

	}
	std::cout << " + ";
	std::cout << endl;
	x = 0;
	ycount = 3;
	xcount = 0;
	int cordval = 1;
	for (x = 1; x <= 33; x = x + 1) {
		for (y = 1; y <= 33; y = y + 1) {

			if (y == 33) {
				if (ycount == 4) {

					std::cout << "  " << cordval;
					ycount = 0;
					cordval = cordval + 1;
				}
				else {
				}



			}

			if (x == 32) {
				if (y == 32) {
					std::cout << " + ";
				}
				if (x == 32) {
					if (y < 32) {
						std::cout << " - ";

					}
				}


			}

			else if (board_layout[y][x] < 4) {
				if (board_layout[y][x] == 0 and y < 32) {
					std::cout << " * ";
					xcount = xcount + 1;
				}
				else if (board_layout[y][x] == 2) {
					std::cout << " + ";
					xcount = 0;
				}
				else if (xcount == 3)
				{
					if (board_layout[y][x] == 1) {
						std::cout << " | ";
						xcount = 0;

					}

				}

				else if (xcount < 3 and board_layout[y][x] == 1) {
					std::cout << " - ";
					xcount = xcount + 1;
				}

			}
			else {
			
				std::cout << " " << board_layout[y][x] << " ";
				xcount = xcount + 1;
			}

			

		}
		ycount = ycount + 1;
		std::cout << endl;
		xcount = 0;

	}

	
	

}	

void refreshboard() {
	int x;
	int ycount;
	int xcount = 0;
	x = 0;
	int y = 0;
	ycount = 3;
	int cordval = 1;
	for (x = 1; x <= 33; x = x + 1) {
		for (y = 1; y <= 33; y = y + 1) {

			if (y == 33) {
				if (ycount == 4) {

					std::cout << "  " << cordval;
					ycount = 0;
					cordval = cordval + 1;
				}
				else {
				}



			}

			if (x == 32) {
				if (y == 32) {
					std::cout << " + ";
				}
				if (x == 32) {
					if (y < 32) {
						std::cout << " - ";

					}
				}


			}

			else if (board_layout[y][x] < 4) {
				if (board_layout[y][x] == 0 and y < 32) {
					std::cout << " * ";
					xcount = xcount + 1;
				}
				else if (board_layout[y][x] == 2) {
					std::cout << " + ";
					xcount = 0;
				}
				else if (xcount == 3)
				{
					if (board_layout[y][x] == 1) {
						std::cout << " | ";
						xcount = 0;

					}

				}

				else if (xcount < 3 and board_layout[y][x] == 1) {
					std::cout << " - ";
					xcount = xcount + 1;
				}

			}
			else {
				std::cout << board_layout[x][y];
			
			}



		}
		ycount = ycount + 1;
		std::cout << endl;
		xcount = 0;

	}

}

