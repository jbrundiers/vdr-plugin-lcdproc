/*
lcdtranstbl-nomap.h
nothing except '"' is mapped here, seems that somone does not understand '\"' ...
newline,tab and friends are mapped to ' '
*/

const unsigned char LcdTransTbl[256]={
/*   0 ( '^@') */ (unsigned char)   0,
/*   1 ( '^A') */ (unsigned char)   1,
/*   2 ( '^B') */ (unsigned char)   2,
/*   3 ( '^C') */ (unsigned char)   3,
/*   4 ( '^D') */ (unsigned char)   4,
/*   5 ( '^E') */ (unsigned char)   5,
/*   6 ( '^F') */ (unsigned char)   6,
/*   7 ( '^G') */ (unsigned char)   7,
/*   8 ( '^H') */ (unsigned char)   8,
/*   9 (  '' ) */ (unsigned char)  32,
/*  10 (  '' ) */ (unsigned char)  32,
/*  11 ( '^K') */ (unsigned char)  32,
/*  12 ( '^L') */ (unsigned char)  32,
/*  13 ( '^M') */ (unsigned char)  32,
/*  14 ( '^N') */ (unsigned char)  14,
/*  15 ( '^O') */ (unsigned char)  15,
/*  16 ( '^P') */ (unsigned char)  16,
/*  17 ( '^Q') */ (unsigned char)  17,
/*  18 ( '^R') */ (unsigned char)  18,
/*  19 ( '^S') */ (unsigned char)  19,
/*  20 ( '^T') */ (unsigned char)  20,
/*  21 ( '^U') */ (unsigned char)  21,
/*  22 ( '^V') */ (unsigned char)  22,
/*  23 ( '^W') */ (unsigned char)  23,
/*  24 ( '^X') */ (unsigned char)  24,
/*  25 ( '^Y') */ (unsigned char)  25,
/*  26 ( '^Z') */ (unsigned char)  26,
/*  27 ( '^[') */ (unsigned char)  27,
/*  28 ( '^\') */ (unsigned char)  28,
/*  29 ( '^]') */ (unsigned char)  29,
/*  30 ( '^^') */ (unsigned char)  30,
/*  31 ( '^_') */ (unsigned char)  31,
/*  32 ( ' ' ) */ (unsigned char)  32,
/*  33 ( '!' ) */ (unsigned char)  33,
/*  34 ( '"' ) */ (unsigned char)  39,
/*  35 ( '#' ) */ (unsigned char)  35,
/*  36 ( '$' ) */ (unsigned char)  36,
/*  37 ( '%' ) */ (unsigned char)  37,
/*  38 ( '&' ) */ (unsigned char)  38,
/*  39 ( ''' ) */ (unsigned char)  39,
/*  40 ( '(' ) */ (unsigned char)  40,
/*  41 ( ')' ) */ (unsigned char)  41,
/*  42 ( '*' ) */ (unsigned char)  42,
/*  43 ( '+' ) */ (unsigned char)  43,
/*  44 ( ',' ) */ (unsigned char)  44,
/*  45 ( '-' ) */ (unsigned char)  45,
/*  46 ( '.' ) */ (unsigned char)  46,
/*  47 ( '/' ) */ (unsigned char)  47,
/*  48 ( '0' ) */ (unsigned char)  48,
/*  49 ( '1' ) */ (unsigned char)  49,
/*  50 ( '2' ) */ (unsigned char)  50,
/*  51 ( '3' ) */ (unsigned char)  51,
/*  52 ( '4' ) */ (unsigned char)  52,
/*  53 ( '5' ) */ (unsigned char)  53,
/*  54 ( '6' ) */ (unsigned char)  54,
/*  55 ( '7' ) */ (unsigned char)  55,
/*  56 ( '8' ) */ (unsigned char)  56,
/*  57 ( '9' ) */ (unsigned char)  57,
/*  58 ( ':' ) */ (unsigned char)  58,
/*  59 ( ';' ) */ (unsigned char)  59,
/*  60 ( '<' ) */ (unsigned char)  60,
/*  61 ( '=' ) */ (unsigned char)  61,
/*  62 ( '>' ) */ (unsigned char)  62,
/*  63 ( '?' ) */ (unsigned char)  63,
/*  64 ( '@' ) */ (unsigned char)  64,
/*  65 ( 'A' ) */ (unsigned char)  65,
/*  66 ( 'B' ) */ (unsigned char)  66,
/*  67 ( 'C' ) */ (unsigned char)  67,
/*  68 ( 'D' ) */ (unsigned char)  68,
/*  69 ( 'E' ) */ (unsigned char)  69,
/*  70 ( 'F' ) */ (unsigned char)  70,
/*  71 ( 'G' ) */ (unsigned char)  71,
/*  72 ( 'H' ) */ (unsigned char)  72,
/*  73 ( 'I' ) */ (unsigned char)  73,
/*  74 ( 'J' ) */ (unsigned char)  74,
/*  75 ( 'K' ) */ (unsigned char)  75,
/*  76 ( 'L' ) */ (unsigned char)  76,
/*  77 ( 'M' ) */ (unsigned char)  77,
/*  78 ( 'N' ) */ (unsigned char)  78,
/*  79 ( 'O' ) */ (unsigned char)  79,
/*  80 ( 'P' ) */ (unsigned char)  80,
/*  81 ( 'Q' ) */ (unsigned char)  81,
/*  82 ( 'R' ) */ (unsigned char)  82,
/*  83 ( 'S' ) */ (unsigned char)  83,
/*  84 ( 'T' ) */ (unsigned char)  84,
/*  85 ( 'U' ) */ (unsigned char)  85,
/*  86 ( 'V' ) */ (unsigned char)  86,
/*  87 ( 'W' ) */ (unsigned char)  87,
/*  88 ( 'X' ) */ (unsigned char)  88,
/*  89 ( 'Y' ) */ (unsigned char)  89,
/*  90 ( 'Z' ) */ (unsigned char)  90,
/*  91 ( '[' ) */ (unsigned char)  91,
/*  92 ( '\' ) */ (unsigned char)  92,
/*  93 ( ']' ) */ (unsigned char)  93,
/*  94 ( '^' ) */ (unsigned char)  94,
/*  95 ( '_' ) */ (unsigned char)  95,
/*  96 ( '`' ) */ (unsigned char)  96,
/*  97 ( 'a' ) */ (unsigned char)  97,
/*  98 ( 'b' ) */ (unsigned char)  98,
/*  99 ( 'c' ) */ (unsigned char)  99,
/* 100 ( 'd' ) */ (unsigned char) 100,
/* 101 ( 'e' ) */ (unsigned char) 101,
/* 102 ( 'f' ) */ (unsigned char) 102,
/* 103 ( 'g' ) */ (unsigned char) 103,
/* 104 ( 'h' ) */ (unsigned char) 104,
/* 105 ( 'i' ) */ (unsigned char) 105,
/* 106 ( 'j' ) */ (unsigned char) 106,
/* 107 ( 'k' ) */ (unsigned char) 107,
/* 108 ( 'l' ) */ (unsigned char) 108,
/* 109 ( 'm' ) */ (unsigned char) 109,
/* 110 ( 'n' ) */ (unsigned char) 110,
/* 111 ( 'o' ) */ (unsigned char) 111,
/* 112 ( 'p' ) */ (unsigned char) 112,
/* 113 ( 'q' ) */ (unsigned char) 113,
/* 114 ( 'r' ) */ (unsigned char) 114,
/* 115 ( 's' ) */ (unsigned char) 115,
/* 116 ( 't' ) */ (unsigned char) 116,
/* 117 ( 'u' ) */ (unsigned char) 117,
/* 118 ( 'v' ) */ (unsigned char) 118,
/* 119 ( 'w' ) */ (unsigned char) 119,
/* 120 ( 'x' ) */ (unsigned char) 120,
/* 121 ( 'y' ) */ (unsigned char) 121,
/* 122 ( 'z' ) */ (unsigned char) 122,
/* 123 ( '{' ) */ (unsigned char) 123,
/* 124 ( '|' ) */ (unsigned char) 124,
/* 125 ( '}' ) */ (unsigned char) 125,
/* 126 ( '~' ) */ (unsigned char) 126,
/* 127 ( '^?') */ (unsigned char) 127,
/* 128 ( '~@') */ (unsigned char) 128,
/* 129 ( '~A') */ (unsigned char) 129,
/* 130 ( '~B') */ (unsigned char) 130,
/* 131 ( '~C') */ (unsigned char) 131,
/* 132 ( '~D') */ (unsigned char) 132,
/* 133 ( '~E') */ (unsigned char) 133,
/* 134 ( '~F') */ (unsigned char) 134,
/* 135 ( '~G') */ (unsigned char) 135,
/* 136 ( '~H') */ (unsigned char) 136,
/* 137 ( '~I') */ (unsigned char) 137,
/* 138 ( '~J') */ (unsigned char) 138,
/* 139 ( '~K') */ (unsigned char) 139,
/* 140 ( '~L') */ (unsigned char) 140,
/* 141 ( '~M') */ (unsigned char) 141,
/* 142 ( '~N') */ (unsigned char) 142,
/* 143 ( '~O') */ (unsigned char) 143,
/* 144 ( '~P') */ (unsigned char) 144,
/* 145 ( '~Q') */ (unsigned char) 145,
/* 146 ( '~R') */ (unsigned char) 146,
/* 147 ( '~S') */ (unsigned char) 147,
/* 148 ( '~T') */ (unsigned char) 148,
/* 149 ( '~U') */ (unsigned char) 149,
/* 150 ( '~V') */ (unsigned char) 150,
/* 151 ( '~W') */ (unsigned char) 151,
/* 152 ( '~X') */ (unsigned char) 152,
/* 153 ( '~Y') */ (unsigned char) 153,
/* 154 ( '~Z') */ (unsigned char) 154,
/* 155 ( '~[') */ (unsigned char) 155,
/* 156 ( '~\') */ (unsigned char) 156,
/* 157 ( '~]') */ (unsigned char) 157,
/* 158 ( '~^') */ (unsigned char) 158,
/* 159 ( '~_') */ (unsigned char) 159,
/* 160 ( '| ') */ (unsigned char) 160,
/* 161 ( '�' ) */ (unsigned char) 161,
/* 162 ( '�' ) */ (unsigned char) 162,
/* 163 ( '�' ) */ (unsigned char) 163,
/* 164 ( '�' ) */ (unsigned char) 164,
/* 165 ( '�' ) */ (unsigned char) 165,
/* 166 ( '�' ) */ (unsigned char) 166,
/* 167 ( '�' ) */ (unsigned char) 167,
/* 168 ( '�' ) */ (unsigned char) 168,
/* 169 ( '�' ) */ (unsigned char) 169,
/* 170 ( '�' ) */ (unsigned char) 170,
/* 171 ( '�' ) */ (unsigned char) 171,
/* 172 ( '�' ) */ (unsigned char) 172,
/* 173 ( '�' ) */ (unsigned char) 173,
/* 174 ( '�' ) */ (unsigned char) 174,
/* 175 ( '�' ) */ (unsigned char) 175,
/* 176 ( '�' ) */ (unsigned char) 176,
/* 177 ( '�' ) */ (unsigned char) 177,
/* 178 ( '�' ) */ (unsigned char) 178,
/* 179 ( '�' ) */ (unsigned char) 179,
/* 180 ( '�' ) */ (unsigned char) 180,
/* 181 ( '�' ) */ (unsigned char) 181,
/* 182 ( '�' ) */ (unsigned char) 182,
/* 183 ( '�' ) */ (unsigned char) 183,
/* 184 ( '�' ) */ (unsigned char) 184,
/* 185 ( '�' ) */ (unsigned char) 185,
/* 186 ( '�' ) */ (unsigned char) 186,
/* 187 ( '�' ) */ (unsigned char) 187,
/* 188 ( '�' ) */ (unsigned char) 188,
/* 189 ( '�' ) */ (unsigned char) 189,
/* 190 ( '�' ) */ (unsigned char) 190,
/* 191 ( '�' ) */ (unsigned char) 191,
/* 192 ( '�' ) */ (unsigned char) 192,
/* 193 ( '�' ) */ (unsigned char) 193,
/* 194 ( '�' ) */ (unsigned char) 194,
/* 195 ( '�' ) */ (unsigned char) 195,
/* 196 ( '�' ) */ (unsigned char) 196,
/* 197 ( '�' ) */ (unsigned char) 197,
/* 198 ( '�' ) */ (unsigned char) 198,
/* 199 ( '�' ) */ (unsigned char) 199,
/* 200 ( '�' ) */ (unsigned char) 200,
/* 201 ( '�' ) */ (unsigned char) 201,
/* 202 ( '�' ) */ (unsigned char) 202,
/* 203 ( '�' ) */ (unsigned char) 203,
/* 204 ( '�' ) */ (unsigned char) 204,
/* 205 ( '�' ) */ (unsigned char) 205,
/* 206 ( '�' ) */ (unsigned char) 206,
/* 207 ( '�' ) */ (unsigned char) 207,
/* 208 ( '�' ) */ (unsigned char) 208,
/* 209 ( '�' ) */ (unsigned char) 209,
/* 210 ( '�' ) */ (unsigned char) 210,
/* 211 ( '�' ) */ (unsigned char) 211,
/* 212 ( '�' ) */ (unsigned char) 212,
/* 213 ( '�' ) */ (unsigned char) 213,
/* 214 ( '�' ) */ (unsigned char) 214,
/* 215 ( '�' ) */ (unsigned char) 215,
/* 216 ( '�' ) */ (unsigned char) 216,
/* 217 ( '�' ) */ (unsigned char) 217,
/* 218 ( '�' ) */ (unsigned char) 218,
/* 219 ( '�' ) */ (unsigned char) 219,
/* 220 ( '�' ) */ (unsigned char) 220,
/* 221 ( '�' ) */ (unsigned char) 221,
/* 222 ( '�' ) */ (unsigned char) 222,
/* 223 ( '�' ) */ (unsigned char) 223,
/* 224 ( '�' ) */ (unsigned char) 224,
/* 225 ( '�' ) */ (unsigned char) 225,
/* 226 ( '�' ) */ (unsigned char) 226,
/* 227 ( '�' ) */ (unsigned char) 227,
/* 228 ( '�' ) */ (unsigned char) 228,
/* 229 ( '�' ) */ (unsigned char) 229,
/* 230 ( '�' ) */ (unsigned char) 230,
/* 231 ( '�' ) */ (unsigned char) 231,
/* 232 ( '�' ) */ (unsigned char) 232,
/* 233 ( '�' ) */ (unsigned char) 233,
/* 234 ( '�' ) */ (unsigned char) 234,
/* 235 ( '�' ) */ (unsigned char) 235,
/* 236 ( '�' ) */ (unsigned char) 236,
/* 237 ( '�' ) */ (unsigned char) 237,
/* 238 ( '�' ) */ (unsigned char) 238,
/* 239 ( '�' ) */ (unsigned char) 239,
/* 240 ( '�' ) */ (unsigned char) 240,
/* 241 ( '�' ) */ (unsigned char) 241,
/* 242 ( '�' ) */ (unsigned char) 242,
/* 243 ( '�' ) */ (unsigned char) 243,
/* 244 ( '�' ) */ (unsigned char) 244,
/* 245 ( '�' ) */ (unsigned char) 245,
/* 246 ( '�' ) */ (unsigned char) 246,
/* 247 ( '�' ) */ (unsigned char) 247,
/* 248 ( '�' ) */ (unsigned char) 248,
/* 249 ( '�' ) */ (unsigned char) 249,
/* 250 ( '�' ) */ (unsigned char) 250,
/* 251 ( '�' ) */ (unsigned char) 251,
/* 252 ( '�' ) */ (unsigned char) 252,
/* 253 ( '�' ) */ (unsigned char) 253,
/* 254 ( '�' ) */ (unsigned char) 254,
/* 255 ( '�' ) */ (unsigned char) 255};

