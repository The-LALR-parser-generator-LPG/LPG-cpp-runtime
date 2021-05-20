
////////////////////////////////////////////////////////////////////////////////
// Copyright (c) 2007 IBM Corporation.
// All rights reserved. This program and the accompanying materials
// are made available under the terms of the Eclipse Public License v1.0
// which accompanies this distribution, and is available at
// http://www.eclipse.org/legal/epl-v10.html
//
//Contributors:
//    Philippe Charles (pcharles@us.ibm.com) - initial API and implementation

////////////////////////////////////////////////////////////////////////////////

#pragma once
 #include <string>
  #include "JavaLexersym.h"
 #include "ParseTable.h"
 struct JavaLexerprs :public ParseTable,public JavaLexersym {
             typedef  unsigned char byte;
     constexpr   static int ERROR_SYMBOL = 0;
     int getErrorSymbol() { return ERROR_SYMBOL; }

     constexpr   static int SCOPE_UBOUND = 0;
     int getScopeUbound() { return SCOPE_UBOUND; }

     constexpr   static int SCOPE_SIZE = 0;
     int getScopeSize() { return SCOPE_SIZE; }

     constexpr   static int MAX_NAME_LENGTH = 0;
     int getMaxNameLength() { return MAX_NAME_LENGTH; }

     constexpr   static int NUM_STATES = 65;
     int getNumStates() { return NUM_STATES; }

     constexpr   static int NT_OFFSET = 102;
     int getNtOffset() { return NT_OFFSET; }

     constexpr   static int LA_STATE_OFFSET = 895;
     int getLaStateOffset() { return LA_STATE_OFFSET; }

     constexpr   static int MAX_LA = 1;
     int getMaxLa() { return MAX_LA; }

     constexpr   static int NUM_RULES = 352;
     int getNumRules() { return NUM_RULES; }

     constexpr   static int NUM_NONTERMINALS = 39;
     int getNumNonterminals() { return NUM_NONTERMINALS; }

     constexpr   static int NUM_SYMBOLS = 141;
     int getNumSymbols() { return NUM_SYMBOLS; }

     constexpr   static int START_STATE = 353;
     int getStartState() { return START_STATE; }

     constexpr   static int IDENTIFIER_SYMBOL = 0;
     int getIdentifier_SYMBOL() { return IDENTIFIER_SYMBOL; }

     constexpr   static int EOFT_SYMBOL = 99;
     int getEoftSymbol() { return EOFT_SYMBOL; }

     constexpr   static int EOLT_SYMBOL = 103;
     int getEoltSymbol() { return EOLT_SYMBOL; }

     constexpr   static int ACCEPT_ACTION = 542;
     int getAcceptAction() { return ACCEPT_ACTION; }

     constexpr   static int ERROR_ACTION = 543;
     int getErrorAction() { return ERROR_ACTION; }

   constexpr   static bool BACKTRACK = false;
      bool getBacktrack() { return BACKTRACK; }

     int getStartSymbol() { return lhs(0); }
      bool isValidForParser() { return JavaLexersym::isValidForParser; }

inline static char _isNullable[] = {0,
            0,0,0,0,0,0,0,0,0,0,
            0,0,0,0,0,0,0,0,0,0,
            0,0,0,0,0,0,0,0,0,0,
            0,0,0,0,0,0,0,0,0,0,
            0,0,0,0,0,0,0,0,0,0,
            0,0,0,0,0,0,0,0,0,0,
            0,0,0,0,0,0,0,0,0,0,
            0,0,0,0,0,0,0,0,0,0,
            0,0,0,0,0,0,0,0,0,0,
            0,0,0,0,0,0,0,0,0,0,
            0,0,0,0,0,0,0,0,0,0,
            0,0,0,0,0,0,0,0,0,0,
            0,1,0,0,0,0,1,0,0,0,
            0,0,0,0,0,0,0,0,0,0,
            0
        };
char * get_isNullable_data(){ return  _isNullable;}
      bool isNullable(int index) { return _isNullable[index] != 0; }
inline static signed int _prosthesesIndex[] = {0,
            24,25,32,28,29,30,13,18,20,27,
            31,14,19,21,26,35,39,2,3,4,
            5,6,7,8,9,10,11,12,15,16,
            17,22,23,33,34,36,37,1,38
        };
signed int * get_prosthesesIndex_data(){ return  _prosthesesIndex;}
      int prosthesesIndex(int index) { return _prosthesesIndex[index]; }
inline static char _isKeyword[] = {0,
            0,0,0,0,0,0,0,0,0,0,
            0,0,0,0,0,0,0,0,0,0,
            0,0,0,0,0,0,0,0,0,0,
            0,0,0,0,0,0,0,0,0,0,
            0,0,0,0,0,0,0,0,0,0,
            0,0,0,0,0,0,0,0,0,0,
            0,0,0,0,0,0,0,0,0,0,
            0,0,0,0,0,0,0,0,0,0,
            0,0,0,0,0,0,0,0,0,0,
            0,0,0,0,0,0,0,0,0,0,
            0,0
        };
char * get_isKeyword_data(){ return  _isKeyword;}
      bool isKeyword(int index) { return _isKeyword[index] != 0; }
inline static signed int _baseCheck[] = {0,
            1,3,3,1,1,1,5,1,1,1,
            1,1,1,1,1,1,1,1,1,1,
            1,1,1,1,1,1,1,1,1,1,
            1,1,1,1,2,2,2,2,2,2,
            2,2,2,2,2,2,2,2,3,2,
            2,3,1,2,3,4,1,2,2,3,
            2,3,2,2,3,3,2,3,2,2,
            0,1,2,2,2,0,2,1,2,1,
            2,2,2,3,2,3,3,1,1,1,
            1,1,1,1,1,1,1,1,1,1,
            1,1,1,1,1,1,1,1,1,1,
            1,1,1,1,1,1,1,1,1,1,
            1,1,1,1,1,1,1,1,1,1,
            1,1,1,1,1,1,1,1,1,1,
            1,1,1,1,1,1,1,1,1,1,
            1,1,1,1,1,1,1,1,1,1,
            1,1,1,1,1,1,1,1,1,1,
            1,1,1,1,1,1,1,1,1,1,
            1,1,2,3,1,1,1,1,1,1,
            1,1,1,1,1,2,1,2,2,1,
            1,1,1,1,1,1,1,1,1,1,
            1,1,1,1,1,1,1,1,1,1,
            1,1,1,1,1,1,1,1,1,1,
            1,1,1,1,1,1,1,1,1,1,
            1,1,1,1,1,1,1,1,1,1,
            1,1,1,1,1,1,1,1,1,1,
            1,1,1,1,1,1,1,1,1,1,
            1,1,1,1,1,1,1,1,1,1,
            1,1,1,1,1,1,1,1,1,1,
            1,1,1,1,1,1,1,1,1,1,
            1,1,1,1,1,1,1,1,1,1,
            1,1,1,1,1,1,1,1,1,1,
            1,1,1,1,1,1,1,1,1,1,
            1,1,1,6,2,1,1,1,1,1,
            1,1,6,2,2,2,2,2,2,2,
            2,2
        };
signed int * get_baseCheck_data(){ return  _baseCheck;}
      int baseCheck(int index) { return _baseCheck[index]; }
inline      static signed int*  _rhs = _baseCheck;
     int rhs(int index) { return _rhs[index]; };
signed int*  get_rhs_data(){ return _rhs;}
inline static signed int _baseAction[] = {
            18,18,18,18,18,18,18,18,18,18,
            18,18,18,18,18,18,18,18,18,18,
            18,18,18,18,18,18,18,18,18,18,
            18,18,18,18,18,18,18,18,18,18,
            18,18,18,18,18,18,18,18,18,18,
            18,18,18,22,22,22,22,24,24,24,
            24,24,24,24,23,23,23,23,25,25,
            25,25,26,26,27,27,20,20,7,7,
            30,30,31,31,31,13,13,13,10,10,
            10,10,10,4,4,4,4,4,5,5,
            5,5,5,5,5,5,5,5,5,5,
            5,5,5,5,5,5,5,5,5,5,
            5,5,5,5,6,6,6,6,6,6,
            6,6,6,6,6,6,6,6,6,6,
            6,6,6,6,6,6,6,6,6,6,
            1,1,1,1,1,1,1,1,1,1,
            11,11,11,11,11,11,11,11,3,3,
            3,3,3,3,3,3,3,3,3,3,
            2,2,34,34,34,8,8,9,9,12,
            12,15,15,29,29,28,28,19,19,19,
            35,35,35,35,35,35,35,35,35,35,
            35,35,35,35,35,35,35,35,35,35,
            35,35,35,35,35,35,35,35,35,16,
            16,16,16,16,16,16,16,16,16,16,
            16,16,16,16,16,16,16,16,16,16,
            16,16,16,16,16,16,16,36,36,36,
            36,36,36,36,36,36,36,36,36,36,
            36,36,36,36,36,36,36,36,36,36,
            36,36,36,36,36,37,37,37,37,37,
            37,37,37,37,37,37,37,37,37,37,
            37,37,37,37,37,37,37,37,37,37,
            37,37,37,14,14,14,14,39,39,32,
            32,32,32,32,32,32,32,33,33,33,
            33,33,33,33,33,33,21,21,21,21,
            21,21,21,21,21,17,17,17,17,17,
            17,17,17,407,531,1063,79,530,530,530,
            440,608,199,532,1179,198,198,198,975,1117,
            79,373,361,682,196,4,5,6,1052,355,
            433,364,1,70,451,355,70,70,70,509,
            528,963,70,528,528,528,70,442,70,308,
            77,954,450,77,77,77,528,1183,413,1181,
            528,202,632,103,68,1182,77,68,68,68,
            60,65,946,68,955,344,528,68,977,68,
            62,66,77,205,75,77,382,75,75,75,
            931,79,715,473,473,473,993,100,63,67,
            1161,1017,54,422,996,456,1041,369,998,58,
            64,516,976,369,412,75,456,399,75,335,
            1128,79,473,684,81,81,81,739,481,481,
            481,763,490,490,490,56,787,494,494,494,
            811,498,498,498,835,502,502,502,859,343,
            343,343,883,506,506,506,907,334,334,334,
            1084,470,1095,522,1106,524,1170,470,1184,522,
            1180,524,1139,79,1150,79,1018,184,733,681,
            853,979,980,805,877,925,986,1015,1185,1186,
            1187,543,543
        };
signed int * get_baseAction_data(){ return  _baseAction;}
      int baseAction(int index) { return _baseAction[index]; }
 inline     static signed int * _lhs = _baseAction;
     int lhs(int index) { return _lhs[index]; };
signed int*  get_lhs_data(){ return _lhs;}
inline static signed int _termCheck[] = {0,
            0,1,2,3,4,5,6,7,8,9,
            10,11,12,13,14,15,16,17,18,19,
            20,21,22,23,24,25,26,27,28,29,
            30,31,32,33,34,35,36,37,38,39,
            40,41,42,43,44,45,46,47,48,49,
            50,51,52,53,54,55,56,57,58,59,
            60,61,62,63,64,65,66,67,68,69,
            70,71,72,73,74,75,76,77,78,79,
            80,81,82,83,84,85,86,87,88,89,
            90,91,92,93,94,95,96,97,98,0,
            100,101,0,1,2,3,4,5,6,7,
            8,9,10,11,12,13,14,15,16,17,
            18,19,20,21,22,23,24,25,26,27,
            28,29,30,31,32,33,34,35,36,37,
            38,39,40,41,42,43,44,45,46,47,
            48,49,50,51,52,53,54,55,56,57,
            58,59,60,61,62,63,64,65,66,67,
            68,69,70,71,72,73,74,75,76,77,
            78,79,80,81,82,83,84,85,86,87,
            88,89,90,91,92,93,94,95,96,97,
            98,0,100,101,0,1,2,3,4,5,
            6,7,8,9,10,11,12,13,14,15,
            16,17,18,19,20,21,22,23,24,25,
            26,27,28,29,30,31,32,33,34,35,
            36,37,38,39,40,41,42,43,44,45,
            46,47,48,49,50,51,52,53,54,55,
            56,57,58,59,60,61,62,63,64,65,
            66,67,68,69,70,71,72,73,74,75,
            76,77,78,79,80,81,82,83,84,85,
            86,87,88,89,90,91,92,93,94,95,
            96,97,98,0,0,0,102,0,1,2,
            3,4,5,6,7,8,9,10,11,12,
            13,14,15,16,17,18,19,20,21,22,
            23,24,25,26,27,28,29,30,31,32,
            33,34,35,36,37,38,39,40,41,42,
            43,44,45,46,47,48,49,50,51,52,
            53,54,55,56,57,58,59,60,61,62,
            63,64,65,66,67,68,69,70,71,72,
            73,74,75,76,77,78,79,80,81,82,
            83,84,85,86,87,88,89,90,91,92,
            93,94,95,96,97,98,0,1,2,3,
            4,5,6,7,8,9,10,11,12,13,
            14,15,16,17,18,19,20,21,22,23,
            24,25,26,27,28,29,30,31,32,33,
            34,35,36,37,38,39,40,41,42,43,
            44,45,46,47,48,49,50,51,52,53,
            54,55,56,57,58,59,60,61,62,63,
            64,65,66,67,68,69,70,71,72,73,
            74,75,76,0,78,79,80,81,82,83,
            84,85,86,87,88,89,90,91,92,93,
            94,95,96,0,0,0,100,101,0,1,
            2,3,4,5,6,7,8,9,10,11,
            12,13,14,15,16,17,18,19,20,21,
            22,23,0,25,26,27,28,29,30,31,
            32,33,34,35,36,37,38,39,40,41,
            42,43,44,45,46,47,48,49,50,51,
            52,53,54,55,56,57,58,59,60,61,
            62,63,64,65,66,67,68,69,70,71,
            72,73,74,75,76,77,78,79,80,81,
            82,83,84,85,86,87,88,89,90,91,
            92,93,94,95,96,97,98,0,1,2,
            3,4,5,6,7,8,9,10,11,12,
            13,14,15,16,17,0,19,20,21,22,
            23,0,25,26,27,28,29,30,0,32,
            33,0,11,12,13,14,39,40,41,42,
            43,44,45,46,47,48,49,50,51,52,
            53,54,55,56,57,58,59,60,61,62,
            63,64,65,66,67,68,69,70,71,72,
            0,0,75,0,1,2,3,4,5,6,
            7,8,9,10,11,12,13,14,15,16,
            17,0,19,20,21,22,23,0,25,0,
            0,31,0,30,0,1,2,3,4,5,
            6,7,8,9,10,11,12,13,14,15,
            16,17,0,19,20,21,22,23,0,1,
            2,3,4,5,6,7,8,9,10,11,
            12,13,14,15,16,17,24,19,20,21,
            22,23,0,1,2,3,4,5,6,7,
            8,9,10,11,12,13,14,15,16,17,
            99,19,20,21,22,23,0,1,2,3,
            4,5,6,7,8,9,10,11,12,13,
            14,15,16,17,0,19,20,21,22,23,
            0,1,2,3,4,5,6,7,8,9,
            10,11,12,13,14,15,16,17,24,19,
            20,21,22,23,0,1,2,3,4,5,
            6,7,8,9,10,11,12,13,14,15,
            16,17,0,19,20,21,22,23,0,1,
            2,3,4,5,6,7,8,9,10,11,
            12,13,14,15,16,17,0,19,20,21,
            22,23,0,1,2,3,4,5,6,7,
            8,9,10,11,12,13,14,15,16,17,
            24,19,20,21,22,23,0,1,2,3,
            4,5,6,7,8,9,10,11,12,13,
            14,15,16,17,0,19,20,21,22,23,
            0,1,2,3,4,5,6,7,8,9,
            10,11,12,13,14,0,16,17,24,0,
            0,99,0,0,0,25,11,12,13,14,
            30,31,0,1,2,3,4,5,6,7,
            8,18,18,11,0,0,0,15,0,0,
            0,0,0,0,0,0,24,0,26,27,
            28,29,0,18,18,0,34,0,1,2,
            3,4,5,6,7,8,32,33,11,24,
            18,36,15,18,0,0,0,0,0,0,
            0,24,0,26,27,28,29,11,12,13,
            14,34,16,17,0,18,0,0,24,77,
            0,1,2,3,4,5,6,7,8,9,
            10,0,1,2,3,4,5,6,7,8,
            9,10,0,1,2,3,4,5,6,7,
            8,9,10,99,77,35,36,99,99,0,
            0,0,31,0,1,2,3,4,5,6,
            7,8,9,10,0,1,2,3,4,5,
            6,7,8,9,10,0,1,2,3,4,
            5,6,7,8,9,10,0,1,2,3,
            4,5,6,7,8,9,10,0,1,2,
            3,4,5,6,7,8,9,10,0,1,
            2,3,4,5,6,7,8,9,10,0,
            1,2,3,4,5,6,7,8,9,10,
            0,1,2,3,4,5,6,7,8,0,
            1,2,3,4,5,6,7,8,0,0,
            0,0,0,0,0,0,0,0,0,0,
            0,0,0,0,0,0,0,18,18,18,
            18,18,0,0,0,0,0,0,24,24,
            24,0,0,0,0,37,38,0,35,0,
            0,0,0,0,0,0,0,0,0,0,
            0,0,0,0,0,0,0,0,0,0,
            0,0,0,0,0,0,0,0,0,0,
            0,73,0,0,0,74,76,0,79,80,
            78,0,0,0,0,0,0,0,0,0,
            0,0,0,0,0,0,0,0,100,101,
            0,0,0,0,0,0,0,0,0
        };
signed int * get_termCheck_data(){ return  _termCheck;}
      int termCheck(int index) { return _termCheck[index]; }
inline static signed int _termAction[] = {0,
            543,613,613,613,613,613,613,613,613,613,
            613,613,613,613,613,613,613,613,613,613,
            613,613,613,613,613,613,613,613,613,613,
            613,613,613,613,613,613,613,613,613,613,
            613,613,613,613,613,613,613,613,613,613,
            613,613,613,613,613,613,613,613,613,613,
            613,613,613,613,613,613,613,613,613,613,
            613,613,613,613,613,613,613,613,613,612,
            413,613,613,613,613,613,613,613,613,613,
            613,613,613,613,613,613,613,613,613,76,
            613,613,543,611,611,611,611,611,611,611,
            611,611,611,611,611,611,611,611,611,611,
            611,611,611,611,611,611,611,611,611,611,
            611,611,611,611,611,611,611,611,611,611,
            611,611,611,611,611,611,611,611,611,611,
            611,611,611,611,611,611,611,611,611,611,
            611,611,611,611,611,611,611,611,611,611,
            611,611,611,611,611,611,611,611,611,611,
            611,550,616,611,611,611,611,611,611,611,
            611,611,611,611,611,611,611,611,611,611,
            611,71,611,611,8,618,618,618,618,618,
            618,618,618,618,618,618,618,618,618,618,
            618,618,618,618,618,618,618,618,618,618,
            618,618,618,618,618,618,618,618,618,618,
            618,618,618,618,618,618,618,618,618,618,
            618,618,618,618,618,618,618,618,618,618,
            618,618,618,618,618,618,618,618,618,618,
            618,618,618,618,618,618,618,618,618,618,
            618,618,618,618,618,618,618,618,618,618,
            618,618,618,618,618,618,618,618,618,618,
            618,618,618,543,543,543,618,543,620,620,
            620,620,620,620,620,620,620,620,620,620,
            620,620,620,620,620,620,620,620,620,620,
            620,620,620,620,620,620,620,620,620,620,
            620,545,620,620,620,620,620,620,620,620,
            620,620,620,620,620,620,620,620,620,620,
            620,620,620,620,620,620,620,620,620,620,
            620,620,620,620,620,620,620,620,620,620,
            620,620,620,620,458,620,620,620,620,620,
            620,620,620,620,620,620,620,620,620,620,
            620,620,620,620,620,620,543,368,531,531,
            531,531,531,531,531,531,531,530,530,530,
            530,530,530,530,446,530,530,530,530,530,
            389,530,530,530,530,530,530,378,530,530,
            447,518,462,532,532,530,530,530,530,530,
            530,530,530,530,530,530,530,530,530,530,
            530,530,530,530,530,530,530,530,530,530,
            530,530,530,530,530,530,530,530,530,532,
            415,530,409,543,407,520,454,424,401,577,
            565,428,561,562,574,575,572,573,576,560,
            569,557,558,543,543,543,532,532,543,528,
            528,528,528,528,528,528,528,528,528,528,
            528,528,528,528,528,528,528,528,528,528,
            528,528,543,528,528,528,528,528,528,528,
            528,528,528,528,528,528,528,528,528,528,
            528,528,528,528,528,528,528,528,528,528,
            528,528,528,528,528,528,528,528,528,528,
            528,528,528,528,528,528,528,528,528,528,
            528,528,528,528,528,391,528,528,528,528,
            528,528,528,528,528,528,528,528,528,528,
            528,528,528,528,528,528,528,1,742,742,
            742,742,742,742,742,742,742,742,741,741,
            741,741,741,741,741,543,741,741,741,741,
            741,59,741,741,741,741,741,741,543,741,
            741,543,608,603,603,608,741,741,741,741,
            741,741,741,741,741,741,741,741,741,741,
            741,741,741,741,741,741,741,741,741,741,
            741,741,741,741,741,741,741,741,741,741,
            543,543,741,55,624,624,624,624,624,624,
            624,624,624,624,624,624,624,624,624,624,
            624,543,624,624,624,624,624,543,599,543,
            543,595,543,599,543,473,473,473,473,473,
            473,473,473,473,473,473,473,473,473,473,
            473,473,543,473,473,473,473,473,543,481,
            481,481,481,481,481,481,481,481,481,481,
            481,481,481,481,481,481,546,481,481,481,
            481,481,543,490,490,490,490,490,490,490,
            490,490,490,490,490,490,490,490,490,490,
            542,490,490,490,490,490,543,494,494,494,
            494,494,494,494,494,494,494,494,494,494,
            494,494,494,494,160,494,494,494,494,494,
            543,498,498,498,498,498,498,498,498,498,
            498,498,498,498,498,498,498,498,182,498,
            498,498,498,498,543,502,502,502,502,502,
            502,502,502,502,502,502,502,502,502,502,
            502,502,197,502,502,502,502,502,543,886,
            886,886,886,886,886,886,886,886,886,886,
            886,886,886,886,886,886,161,886,886,886,
            886,886,543,506,506,506,506,506,506,506,
            506,506,506,506,506,506,506,506,506,506,
            182,506,506,506,506,506,543,877,877,877,
            877,877,877,877,877,877,877,877,877,877,
            877,877,877,877,162,877,877,877,877,877,
            4,622,622,622,622,622,622,622,622,622,
            622,610,606,606,610,61,456,456,182,543,
            543,1,543,28,21,597,609,605,605,609,
            597,510,543,533,534,535,536,537,538,539,
            540,582,591,891,78,11,20,888,78,195,
            543,543,543,543,543,163,894,543,890,892,
            889,477,16,585,590,12,893,543,878,878,
            878,878,878,878,878,878,442,442,891,182,
            580,579,888,586,164,543,6,40,543,543,
            543,894,543,890,892,889,486,607,601,601,
            607,893,456,456,543,592,543,543,182,895,
            543,369,369,369,369,369,369,369,369,369,
            369,27,355,355,355,355,355,355,355,355,
            355,355,82,622,622,622,622,622,622,622,
            622,622,622,4,895,514,512,4,9,543,
            543,543,529,83,470,470,470,470,470,470,
            470,470,470,470,543,522,522,522,522,522,
            522,522,522,522,522,543,524,524,524,524,
            524,524,524,524,524,524,85,622,622,622,
            622,622,622,622,622,622,622,84,622,622,
            622,622,622,622,622,622,622,622,87,622,
            622,622,622,622,622,622,622,622,622,86,
            622,622,622,622,622,622,622,622,622,622,
            182,516,516,516,516,516,516,516,516,183,
            727,727,727,727,727,727,727,727,9,13,
            24,23,25,10,165,166,167,543,543,543,
            543,543,543,543,543,543,543,587,588,589,
            581,584,543,543,543,543,543,543,182,182,
            182,543,543,543,543,739,739,543,578,543,
            543,543,543,543,543,543,543,543,543,543,
            543,543,543,543,543,543,543,543,543,543,
            543,543,543,543,543,543,543,543,543,543,
            543,739,543,543,543,593,594,543,617,411,
            526,543,543,543,543,543,543,543,543,543,
            543,543,543,543,543,543,543,543,739,739
        };
signed int * get_termAction_data(){ return  _termAction;}
      int termAction(int index) { return _termAction[index]; }
     int asb(int index) { return 0; }
     int asr(int index) { return 0; }
     int nasb(int index) { return 0; }
     int nasr(int index) { return 0; }
     int terminalIndex(int index) { return 0; }
     int nonterminalIndex(int index) { return 0; }
     int scopePrefix(int index) { return 0;}
     int scopeSuffix(int index) { return 0;}
     int scopeLhs(int index) { return 0;}
     int scopeLa(int index) { return 0;}
     int scopeStateSet(int index) { return 0;}
     int scopeRhs(int index) { return 0;}
     int scopeState(int index) { return 0;}
     int inSymb(int index) { return 0;}
      std::wstring name(int index) { return {}; }
     int originalState(int state) { return 0; }
     int asi(int state) { return 0; }
     int nasi(int state) { return 0; }
     int inSymbol(int state) { return 0; }

    /**
     * assert(! goto_default);
     */
     int ntAction(int state, int sym) {
        return _baseAction[state + sym];
    }

    /**
     * assert(! shift_default);
     */
     int tAction(int state, int sym) {
        int i = _baseAction[state],
            k = i + sym;
        return _termAction[_termCheck[k] == sym ? k : i];
    }
     int lookAhead(int la_state, int sym) {
        int k = la_state + sym;
        return _termAction[_termCheck[k] == sym ? k : la_state];
    }
};
