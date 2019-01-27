
static float speedRFactor[5] = {0.95, 1, 1.05, 1.1, 1.15};


static int rotateArray[36][2] = {
	{500, 450},	//5  degree - tested
	{650, 620},	//10 degree - tested 650 620 works
	{650, 580},	//15 degree - tested
	{650, 540},	//20 degree - tested
	{650, 510},	//25
	{650, 480},	//30 degree - tested
	{650, 450},	//35 degree - tested
	{650, 400},	//40 degree - tested
	{650, 330},	//45 degree - tested
	{700, 300},	//50 degree - tested
	{750, 330},	//55 degree - tested
	{750, 200},	//60 degree - tested
	{765, 65},	//65 degree - tested
	{800, 65},	//70 degree - tested
	{835, 65},	//75 degree - tested
	{870, 65},	//80 degree - tested
	{900, 65},	//85 degree - tested
	{935, 65},	//90 degree - tested
	{970, 65},	//95 degree -  tested
	{1005, 65},	//100 degree - tested
	{1050, 65},	//105 degree - tested	1120,65 for 112
	{1090, 65},	//110 degree - tested
	{1170, 65},	//115 degree - tested
	{1270, 65},	//120 degree - tested	1300, 150 works
	{1310, 65},	//125 degree - tested
	{1350, 65},	//130 degree - tested
	{1390, 65},	//135 degree - tested
	{1440, 65},	//140 degree - tested
	{1490, 65},	//145 degree - tested
	{1540, 65},	//150 degree - tested
	{1590, 65},	//155 degree - tested
	{1640, 65},	//160 degree - tested
	{1690, 65},	//165 degree - tested
	{1740, 65},	//170 degree - tested
	{1790, 65},	//175 degree - tested
	{1830, 65}	//180 degree - tested
};

static int moveFArray[24][2] = {
	{250, 230},  //0: tick = 75 => 3 inches tested 3.5 inch
	{300, 255},  //1: 6 inches tested 300-260 is for 5; 240 is for 7
	{300, 220},  //2: 9 inches - tested 300-250 is for 7
	{300, 200},  //3: 12 inches - tested
	{375, 230},  //4: 15 inches - tested 375 200 is for 17, 250 for 14
	{450, 260},  //5: 18 inches - tested 250 for 19 290 is for 16
	{525, 280},  //6: 21 inches - tested
	{600, 300},  //7: 24 inches - tested
	{675, 335},  //8: 27 inches - tested 675 330 is for 28, 350 is for 26
	{750, 340},  //9: 30 inches - tested
	{825, 345},  //10: 33 inches - tested
	{900, 330},  //11: 36 inches - tested
	{975, 385},   //12: 39 inches - tested 975 350 is for 40
	{1050, 385},  //13: 42 inches - tested
	{1125, 385},  //14: 45 inches - tested
	{1200, 385},  //15: 48 inches - tested
	{1270, 385},  //16: 51 inches - tested
	{1345, 385},  //17: 54 inches - tested
	{1415, 385},  //18: 57 inches - tested
	{1490, 385},  //19: 60 inches - tested
	{1560, 385},  //20: 63 inches - tested
	{1630, 385},  //21: 66 inches - tested
	{1700, 385},  //22: 69 inches - tested
	{1775, 385},  //23: 72 inches - tested
};


static int moveBArray[24][2] = {
	{75, 25},    //0: tick = 75 = 3 inches
	{150, 50},   //1: 6 inches
	{225, 100},  //2: 9 inches
	{300, 100},  //3: tick = 300 = 12 inches
	{375, 125},  //4: 15 inches
	{450, 150},  //5: 18 inches
	{525, 200},  //6: 21 inches
	{600, 320},  //7: tick = 600 = 24 inches - passed
	{675, 300},  //8: 27 inches
	{750, 300},  //9: 30 inches
	{825, 300},  //10: 33 inches
	{900, 325},  //11: 36 inches
	{975, 325},   //12: 39 inches
	{1050, 350},  //13: 42 inches
	{1125, 350},  //14: 45 inches
	{1200, 400},  //15: tick = 1200 = 48 inches = passed
	{1275, 375},  //16: 51 inches
	{1350, 375},  //17: 54 inches
	{1425, 450},  //18: 57 inches
	{1500, 450},  //19: 60 inches
	{1575, 525},  //20: 63 inches
	{1650, 525},  //21: 66 inches
	{1725, 600},  //22: 69 inches
	{1800, 450},  //23: tick = 1800 = 72 inches
};
