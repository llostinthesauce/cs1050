  1 /* CS1050
  2  * SP 2023
  3  * LAB 4
  4  * Corbin Shanks, cwswgv
  5  * Feb 10, 2023
  6  * 
  7  * ***********************/
  8 
  9 #include<stdio.h>
 10 
 11 int main(void)
 12 {
 13     int base = 11;
 14 
 15     do
 16     {
 17         base++;
 18         switch (base)
 19         {
 20             case 11:
 21                 printf("eleven, ");
 22                 break;
 23             case 12:
 24                 printf("twelve, ");
 25                 break;
 26             case 13:
 27                 printf("thirteen, ");
 28                 break;
 29             case 14:
 30                 printf("fourteen, ");
 31                 break;
 32             case 15:
 33                 printf("fifteen, ");
 34                 break;
 35             case 16:
 36                 printf("sixteen, ");
 37                 break;
 38             case 17:
 39                 printf("seventeen, ");
 40                 break;
 41             case 18:
 42                 printf("eighteen, ");
 43                 break;
 44             case 19:
 45                 printf("nineteen, ");
 46                 break;
 47 
 48             case 20:
 49             case 21:
 50             case 22:
 51             case 23:
 52             case 24:
 53             case 25:
 54             case 26:
 55             case 27:
 56             case 28:
 57             case 29:
 58                 printf("twenty ");
 59                 break;
 60 
 61             case 30:
 62             case 31:
 63             case 32:
 64             case 33:
 65             case 34:
 66             case 35:
 67             case 36:
 68             case 37:
 69             case 38:
 70             case 39:
 71                 printf("thirty ");
 72                 break;
 73 
 74             case 40:
 75             case 41:
 76             case 42:
 77             case 43:
 78             case 44:
 79             case 45:
 80             case 46:
 81             case 47:
 82             case 48:
 83             case 49:
 84                 printf("fourty ");
 85                 break;
 86 
 87             case 50:
 88             case 51:
 89             case 52:
 90             case 53:
 91             case 54:
 92             case 55:
 93             case 56:
 94             case 57:
 95             case 58:
 96             case 59:
 97                 printf("fifty ");
 98                 break;
 99 
100             case 60:
101             case 61:
102             case 62:
103             case 63:
104             case 64:
105             case 65:
106             case 66:
107             case 67:
108             case 68:
109             case 69:
110                 printf("sixty ");
111                 break;
112 
113             case 70:
114             case 71:
115             case 72:
116             case 73:
117             case 74:
118             case 75:
119             case 76:
120             case 77:
121             case 78:
122             case 79:
123                 printf("seventy ");
124                 break;
125 
126             case 80:
127             case 81:
128             case 82:
129             case 83:
130             case 84:
131             case 85:
132             case 86:
133             case 87:
134             case 88:
135             case 89:
136                 printf("eighty ");
137                 break;
138 
139             case 90:
140             case 91:
141             case 92:
142             case 93:
143             case 94:
144             case 95:
145             case 96:
146             case 97:
147             case 98:
148             case 99:
149                 printf("ninety ");
150                 break;
151 
152 }
153 
154     }
155 
156 while (base < 100);
157 
158 return(0);
159 
160 }
