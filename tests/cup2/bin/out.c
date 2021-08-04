#include "stdint.h"
#include "stdlib.h"
#include "string.h"
#include "stdio.h"
#include "stdarg.h"
#include "dirent.h"
#include "ctype.h"
#include "time.h"
typedef struct _Y1 _Y1;typedef struct _b1 _b1;typedef struct _g1 _g1;typedef struct _k1 _k1;typedef struct _p1 _p1;typedef struct _s1 _s1;typedef struct _z1 _z1;typedef struct _x1 _x1;typedef struct _m1 _m1;typedef struct _42 _42;typedef struct _72 _72;typedef struct _y1 _y1;typedef struct _B2 _B2;typedef struct _G2 _G2;typedef struct _H2 _H2;typedef struct _I2 _I2;typedef struct _J2 _J2;typedef struct _K2 _K2;typedef struct _L2 _L2;typedef struct _M2 _M2;typedef struct _r1 _r1;double _X1();void _Z1(_Y1 __1);void _a1();_b1 _c1(int __1);_b1 _d1(uint8_t* __1);void _e1(_b1* this,uint8_t __1);_g1 _f1(_b1* this);_g1 _h1(int __1);_g1 _i1(uint8_t* __1);void _j1(uint8_t* __1,...);int main(int __1,uint8_t** __2);_k1 _l1(int __4);_s1 _t1(int __8);_g1 _v1(_p1* this);void _q1(_p1* __1,_k1 __2,int __3);void _u1(_g1 __1,_s1* __2);_g1 _w1(_g1 __1,_g1 __2);void _22(_x1* this,int __1,uint8_t* __2,...);void _32(_g1 __1,int __2,int __3);void _o1(uint8_t* __1,uint8_t* __2,uint8_t* __3);_m1 _n1(_k1 __1);_42 _52(int __4);void _62(_42* this,uint8_t __6);int _82(_72 __1);uint8_t* _92(_72 __1);void _A2(_x1 __1,int __2,_b1* __3,uint8_t __4,_B2 __5);_72 _C2(uint8_t* __1);uint8_t _D2(_72 __1);_z1 _02(_x1 __1);_z1 _E2(int __3);void _F2(_z1* this,_y1 __B);void _12(_z1 __1);uint8_t* _T="\n    No options are available for this command";uint8_t* _U="\n    -i, --input     Specify the input file name\n    -o, --output    Specify the output file name\n    -cg, --gcc     Use GCC as a compiler\n    -cm, --msvc    Use MSVC as a compiler\n    -cc, --clang   use Clang as a compiler\n    -ct, --tcc     Use TinyCC as a compiler";typedef struct _Y1{int t;union{}u;}_Y1;typedef struct _b1{uint8_t* buf;int len;int cap;}_b1;typedef struct _g1{uint8_t* buf;int len;}_g1;typedef struct _k1{_g1* buf;int len;}_k1;typedef struct _p1{int t;union{struct{_g1 thing;}Some;}u;}_p1;typedef struct _s1{_r1* buf;int len;int cap;}_s1;typedef struct _z1{_y1* buf;int len;int cap;}_z1;typedef struct _x1{_g1 name;_g1 data;}_x1;typedef struct _m1{int t;union{}u;}_m1;typedef struct _42{uint8_t* buf;int len;int cap;}_42;typedef struct _72{int t;union{}u;}_72;typedef struct _y1{_72 kind;int index;_g1 value;}_y1;typedef struct _B2{int t;union{}u;}_B2;typedef struct _G2{uint8_t* name;_s1 gens;}_G2;typedef struct _H2{uint8_t* name;_r1* value;}_H2;typedef struct _I2{uint8_t* name;}_I2;typedef struct _K2{_G2* buf;int len;int cap;}_K2;typedef struct _L2{_H2* buf;int len;int cap;}_L2;typedef struct _M2{_I2* buf;int len;int cap;}_M2;typedef struct _J2{int t;union{struct{uint8_t* name;_s1 args;}Tag;struct{_K2 path;int index;}Path;struct{_r1* path;_s1 args;_s1 body;}TagDef;struct{_s1 body;}Block;struct{_r1* path;_s1 body;}Mod;struct{_r1* path;}Use;struct{_r1* _type;uint8_t* name;}Field;struct{_r1* path;_s1 fields;_s1 body;}Comp;struct{_r1* path;_s1 opts;_s1 body;}Enum;struct{uint8_t* name;_s1 fields;}Option;struct{_r1* path;_s1 body;}Prop;struct{_r1* _prop;_r1* target;_s1 body;}Def;struct{_r1* ret_type;_r1* path;_s1 args;_s1 body;}SubDef;struct{_r1* _type;_r1* path;_r1* value;}VarDef;struct{_r1* _type;uint8_t* name;_r1* value;}LocalVarDef;struct{_r1* path;_s1 args;}SubCall;struct{_r1* path;}VarUse;struct{_r1* _type;_L2 field_vals;}CompInst;struct{_r1* _type;_r1* path;int opt_index;_s1 args;}EnumInst;struct{uint8_t* value;}StringLit;struct{uint8_t* value;}CharLit;struct{uint8_t* value;}IntLit;struct{uint8_t* value;}FloatLit;struct{uint8_t value;}BoolLit;struct{_s1 body;}LocalBlock;struct{_r1* _if;_s1 _elif;_r1* _else;}If;struct{_r1* cond;_s1 body;}IfBranch;struct{_s1 body;}ElseBranch;struct{_s1 body;}Loop;struct{_r1* cond;_s1 body;}While;struct{uint8_t* iter;_r1* iter_value;_r1* cond;_r1* _next;_s1 body;}For;struct{_M2 vars;_r1* iter;_s1 body;}Each;struct{_r1* value;_s1 cases;}Match;struct{_s1 values;_s1 body;}Case;struct{uint8_t* label;_r1* value;}Ret;struct{uint8_t* label;}Next;struct{uint8_t* label;}Jump;struct{uint8_t* label;_r1* value;}Try;struct{_r1* value;_72 kind;}UnaryOp;struct{_r1* lhs;_r1* rhs;_72 kind;}BinaryOp;struct{_r1* cond;_r1* valueA;_r1* valueB;}TernaryOp;}u;}_J2;typedef struct _r1{_J2 kind;_s1 tags;uint8_t* label;}_r1;double _X1(){return ((double)clock())/CLOCKS_PER_SEC;};void _Z1(_Y1 __1){if(__1.t==0){printf("\033[35m");}else if(__1.t==1){printf("\033[32m");}else if(__1.t==2){printf("\033[0;31m");}};void _a1(){printf("\033[0m");};_b1 _c1(int __1){return (_b1){.buf=malloc(sizeof(uint8_t)*__1),.len=0,.cap=__1,};};_b1 _d1(uint8_t* __1){int __2=strlen(__1)+1;uint8_t* __3=malloc((sizeof(uint8_t)*__2)*2);memcpy(__3,__1,sizeof(uint8_t)*__2);return (_b1){.buf=__3,.len=__2-1,.cap=__2*2,};};void _e1(_b1* this,uint8_t __1){(((*this).buf)[((*this).len)])=__1;((*this).len)+=1;if(((*this).len)==((*this).cap)){((*this).cap)*=4;((*this).buf)=realloc((*this).buf,sizeof(uint8_t)*((*this).cap));}(((*this).buf)[((*this).len)])='\0';};_g1 _f1(_b1* this){return (_g1){.buf=(*this).buf,.len=(*this).len,};};_g1 _h1(int __1){return (_g1){.buf=malloc(sizeof(uint8_t)*__1),.len=__1,};};_g1 _i1(uint8_t* __1){int __2=strlen(__1)+1;uint8_t* __3=malloc(sizeof(uint8_t)*__2);memcpy(__3,__1,sizeof(uint8_t)*__2);return (_g1){.buf=__3,.len=__2-1,};};void _j1(uint8_t* __1,...){va_list __2;va_start(__2,__1);_Z1((_Y1){.t=2});printf("error:");_a1();printf(" ");vprintf(__1,__2);printf("\n");exit(1);va_end(__2);};_k1 _l1(int __4){return (_k1){.buf=malloc(sizeof(_g1)*__4),.len=__4,};};_s1 _t1(int __8){return (_s1){.buf=malloc(sizeof(_r1)*__8),.len=0,.cap=__8,};};_g1 _v1(_p1* this){if((*this).t==0){_g1 __8=(*this).u.Some.thing;return __8;}else if((*this).t==1){_j1("unwrap failed");}};int main(int __1,uint8_t** __2){_k1 __3=_l1(__1);for(int __4=0;__4<(__3.len);__4+=1){((__3.buf)[__4])=_i1((*(__2+__4)));}_m1 __4=_n1(__3);if(__4.t==0){_Z1((_Y1){.t=2});printf("error: ");_a1();printf("no such command: '%s",(__3.buf)[1]);for(int __5=2;__5<__1;__5+=1){printf(" %s",(__3.buf)[__5]);}printf("'\n\nSee 'cup help' for the list of available commands.\n");return 1;}else if(__4.t==14||__4.t==15){goto ret_m;}else if(__4.t==16||__4.t==17||__4.t==18||__4.t==19||__4.t==20||__4.t==21||__4.t==22||__4.t==23||__4.t==24||__4.t==25){return 1;}else if(__4.t==1){printf("Cup Toolkit v0.0.1\n\n");printf("USAGE:\n    cup [COMMAND] [OPTIONS]");printf("\n\nCOMMANDS:");printf("\n    run                  Compile and run the current package");printf("\n    build                Compile the current package");printf("\n    check                Analyze the current package");printf("\n    new [PACKAGE]        Create a new package");printf("\n    update [PACKAGE]     Update given dependency");printf("\n    add [PACKAGE]        Adds given dependency");printf("\n    remove [PACKAGE]     Removes given dependency");printf("\n    gen docs             Generate documentation for the current package");printf("\n    gen binds [HEADER]   Generate bindings for a given C header file");printf("\n    self update          Update the Cup Toolkit");printf("\n    self install         Install the Cup Toolkit");printf("\n    self uninstall       Uninstall the Cup Toolkit");printf("\n\nSee 'cup help [COMMAND]' for more info about a specific command and it's available options.\n");return 0;}else if(__4.t==2){_o1("run","Compile and run the current package",_U);return 0;}else if(__4.t==3){_o1("build","Compile the current package",_U);return 0;}else if(__4.t==4){_o1("check","Analyze the current package",_T);return 0;}else if(__4.t==5){_o1("new","Create a new package",_T);return 0;}else if(__4.t==6){_o1("update","Update given dependency",_T);return 0;}else if(__4.t==7){_o1("add","Adds given dependency",_T);return 0;}else if(__4.t==8){_o1("remove","Removes given dependency",_T);return 0;}else if(__4.t==9){_o1("gen docs","Generate documentation for the current package",_T);return 0;}else if(__4.t==10){_o1("gen binds","Generate bindings for a given C header file",_T);return 0;}else if(__4.t==11){_o1("self update","Update the Cup Toolkit",_T);return 0;}else if(__4.t==12){_o1("self install","Install the Cup Toolkit",_T);return 0;}else if(__4.t==13){_o1("self uninstall","Uninstall the Cup Toolkite",_T);return 0;}ret_m:_p1 __5=(_p1){.t=1};_p1 __6=(_p1){.t=1};for(int __7=2;__7<(__3.len);__7+=1){if((strcmp(((__3.buf)[__7]).buf,"-i")==0)||(strcmp(((__3.buf)[__7]).buf,"--input")==0)){_q1((&__5),__3,__7+=1);}else if(((strcmp(((__3.buf)[__7]).buf,"-o")==0)||strcmp(((__3.buf)[__7]).buf,"--output"))==0){_q1((&__6),__3,__7+=1);}else{_Z1((_Y1){.t=2});printf("error: ");_a1();printf("invalid option '%s'\n",((__3.buf)[__7]).buf);return 1;}}if((__5.t)==1){__5=(_p1){.t=0,.u={.Some={.thing=_i1("."),}}};}if((__6.t)==1){__6=(_p1){.t=0,.u={.Some={.thing=_i1("out.c"),}}};}_s1 __7=_t1(8);_u1(_v1((&__5)),(&__7));printf("Compilation ");_Z1((_Y1){.t=1});printf("successful");_a1();printf(" (%.2lfs elapsed)\n",_X1());return 0;};void _q1(_p1* __1,_k1 __2,int __3){if((__2.len)>__3){(*__1)=(_p1){.t=0,.u={.Some={.thing=(__2.buf)[__3],}}};}else{_j1("missing value after '%s' option",((__2.buf)[(__3-1)]).buf);}};void _u1(_g1 __1,_s1* __2){DIR* __3=opendir(__1.buf);if(__3==0){_j1("no such file or directory: '%s'\n",__1.buf);}struct dirent* __4;for(;;){__4=readdir(__3);if(__4==0){goto ret_d;}if(((*__4).d_type)==DT_DIR){if((strcmp((*__4).d_name,".")==0)||(strcmp((*__4).d_name,"..")==0)){goto d;}_g1 __5=_w1(__1,_i1((*__4).d_name));_u1(__5,__2);free(__5.buf);}d:}ret_d:rewinddir(__3);for(;;){__4=readdir(__3);if(__4==0){goto ret_f;}if(((*__4).d_type)==DT_REG){_g1 __5=_w1(__1,_i1((*__4).d_name));FILE* __6=fopen(__5.buf,"r");fseek(__6,0,SEEK_END);_g1 __7=_h1(ftell(__6)-1);rewind(__6);fread(__7.buf,(__7.len)+1,1,__6);fclose(__6);printf("Compiling %s:\n",__5);_x1 __8=(_x1){.name=__5,.data=__7,};_z1 __9=_02(__8);_12(__9);}f:}ret_f:closedir(__3);};_g1 _w1(_g1 __1,_g1 __2){_g1 __3=_h1(((__1.len)+1)+(__2.len));memcpy(__3.buf,__1.buf,sizeof(uint8_t)*(__1.len));((__3.buf)[(__1.len)])='/';memcpy(((__3.buf)+(__1.len))+1,__2.buf,sizeof(uint8_t)*(__2.len));((__3.buf)[(__3.len)])='\0';return __3;};void _22(_x1* this,int __1,uint8_t* __2,...){va_list __3;va_start(__3,__2);int __4=1;int __5=1;for(int __6=0;__6<__1;__6+=1){if(((((*this).data).buf)[__6])=='\n'){__4+=1;__5=1;}else{__5+=1;}}printf("%s:%i:%i: ",((*this).name).buf,__4,__5);_Z1((_Y1){.t=2});printf("error:");_a1();printf(" ");vprintf(__2,__3);printf("\n");_32((*this).data,__4,__5);exit(1);va_end(__3);};void _32(_g1 __1,int __2,int __3){printf(" %i | ",__2);int __4=2;int __5=__2;while(__5!=0){__4+=1;__5/=10;}int __6=1;for(int __7=0;__7<(__1.len);__7+=1){uint8_t __8=(__1.buf)[__7];if(__8=='\n'){__6+=1;if(__6>__2){goto ret_l;}}else if(__6==__2){putchar(__8);}l:}ret_l:putchar('\n');for(int __7=0;__7<__4;__7+=1){putchar(' ');}putchar('|');for(int __7=0;__7<__3;__7+=1){putchar(' ');}_Z1((_Y1){.t=2});putchar('^');_a1();putchar('\n');};void _o1(uint8_t* __1,uint8_t* __2,uint8_t* __3){printf(__2);printf("\n\nUSAGE:\n    cup ");printf(__1);printf(" [OPTIONS]\n\nOPTIONS:");printf(__3);printf("\n");};_42 _52(int __4){return (_42){.buf=malloc(sizeof(uint8_t)*__4),.len=0,.cap=__4,};};void _62(_42* this,uint8_t __6){(((*this).buf)[((*this).len)])=__6;((*this).len)+=1;if(((*this).len)==((*this).cap)){((*this).cap)*=4;((*this).buf)=realloc((*this).buf,sizeof(uint8_t)*((*this).cap));}};_m1 _n1(_k1 __1){if((__1.len)==1){return (_m1){.t=1};}uint8_t __2=0;_42 __3=_52(16);for(int __4=1;__4<(__1.len);__4+=1){if(__4==4){goto ret_l;}if(((((__1.buf)[__4]).buf)[0])=='-'){if(__2){goto ret_l;}goto l;}__2=1;for(int __5=0;__5<(((__1.buf)[__4]).len);__5+=1){_62((&__3),(((__1.buf)[__4]).buf)[__5]);}l:}ret_l:((__3.buf)[(__3.len)])='\0';uint8_t* __4=__3.buf;if(strcmp(__4,"help")==0){return (_m1){.t=1};}else if(strcmp(__4,"helprun")==0){return (_m1){.t=2};}else if(strcmp(__4,"helpbuild")==0){return (_m1){.t=3};}else if(strcmp(__4,"helpcheck")==0){return (_m1){.t=4};}else if(strcmp(__4,"helpupdate")==0){return (_m1){.t=6};}else if(strcmp(__4,"helpadd")==0){return (_m1){.t=7};}else if(strcmp(__4,"helpremove")==0){return (_m1){.t=8};}else if(strcmp(__4,"helpgendocs")==0){return (_m1){.t=9};}else if(strcmp(__4,"helpgenbinds")==0){return (_m1){.t=10};}else if(strcmp(__4,"helpselfupdate")==0){return (_m1){.t=11};}else if(strcmp(__4,"helpselfinstall")==0){return (_m1){.t=12};}else if(strcmp(__4,"helpselfuninstall")==0){return (_m1){.t=13};}else if(strcmp(__4,"run")==0){return (_m1){.t=14};}else if(strcmp(__4,"build")==0){return (_m1){.t=15};}else if(strcmp(__4,"check")==0){return (_m1){.t=16};}else if(strcmp(__4,"update")==0){return (_m1){.t=18};}else if(strcmp(__4,"add")==0){return (_m1){.t=19};}else if(strcmp(__4,"remove")==0){return (_m1){.t=20};}else if(strcmp(__4,"gendocs")==0){return (_m1){.t=21};}else if(strcmp(__4,"genbinds")==0){return (_m1){.t=22};}else if(strcmp(__4,"selfupdate")==0){return (_m1){.t=23};}else if(strcmp(__4,"selfinstall")==0){return (_m1){.t=24};}else if(strcmp(__4,"selfuninstall")==0){return (_m1){.t=25};}return (_m1){.t=0};};int _82(_72 __1){if(__1.t==8||__1.t==25||__1.t==29){return 5;}else if(__1.t==7||__1.t==9||__1.t==10||__1.t==14||__1.t==15||__1.t==16||__1.t==22||__1.t==23||__1.t==24||__1.t==27||__1.t==31||__1.t==32){return 4;}else if(__1.t==11||__1.t==12||__1.t==13||__1.t==17||__1.t==18||__1.t==19||__1.t==20||__1.t==26||__1.t==30||__1.t==33||__1.t==35){return 3;}else if(__1.t==21||__1.t==28||__1.t==34||__1.t==52||__1.t==54||__1.t==58||__1.t==60||__1.t==62||__1.t==64||__1.t==66||__1.t==68||__1.t==70){return 2;}else if(__1.t==36||__1.t==37||__1.t==38||__1.t==39||__1.t==40||__1.t==41||__1.t==42||__1.t==43||__1.t==44||__1.t==45||__1.t==46||__1.t==47||__1.t==48||__1.t==49||__1.t==50||__1.t==51||__1.t==53||__1.t==55||__1.t==56||__1.t==57||__1.t==59||__1.t==61||__1.t==63||__1.t==65||__1.t==67||__1.t==69){return 1;}};uint8_t* _92(_72 __1){if(__1.t==1){return "EMPTY";}else if(__1.t==2){return "IDENT";}else if(__1.t==3){return "STRING_LIT";}else if(__1.t==4){return "CHAR_LIT";}else if(__1.t==5){return "INT_LIT";}else if(__1.t==6){return "FLOAT_LIT";}else if(__1.t==7){return "TRUE";}else if(__1.t==8){return "FALSE";}else if(__1.t==9){return "THIS";}else if(__1.t==10){return "TYPE";}else if(__1.t==11){return "TAG";}else if(__1.t==12){return "MOD";}else if(__1.t==13){return "USE";}else if(__1.t==14){return "COMP";}else if(__1.t==15){return "ENUM";}else if(__1.t==16){return "PROP";}else if(__1.t==17){return "DEF";}else if(__1.t==18){return "SUB";}else if(__1.t==19){return "VAR";}else if(__1.t==20){return "NEW";}else if(__1.t==21){return "IF";}else if(__1.t==22){return "ELIF";}else if(__1.t==23){return "ELSE";}else if(__1.t==24){return "LOOP";}else if(__1.t==25){return "WHILE";}else if(__1.t==26){return "FOR";}else if(__1.t==27){return "EACH";}else if(__1.t==28){return "IN";}else if(__1.t==29){return "MATCH";}else if(__1.t==30){return "RET";}else if(__1.t==31){return "NEXT";}else if(__1.t==32){return "JUMP";}else if(__1.t==33){return "TRY";}else if(__1.t==34){return "AS";}else if(__1.t==35){return "HAS";}else if(__1.t==36){return "SEMICOLON";}else if(__1.t==37){return "COLON";}else if(__1.t==38){return "COMMA";}else if(__1.t==39){return "DOT";}else if(__1.t==40){return "QUESTION_MARK";}else if(__1.t==41){return "TILDE";}else if(__1.t==42){return "HASH";}else if(__1.t==43){return "LEFT_PAREN";}else if(__1.t==44){return "RIGHT_PAREN";}else if(__1.t==45){return "LEFT_BRACE";}else if(__1.t==46){return "RIGHT_BRACE";}else if(__1.t==47){return "LEFT_BRACKET";}else if(__1.t==48){return "RIGHT_BRACKET";}else if(__1.t==49){return "DEREF";}else if(__1.t==50){return "ADDRESS";}else if(__1.t==51){return "ASSIGN";}else if(__1.t==52){return "EQUAL";}else if(__1.t==53){return "NOT";}else if(__1.t==54){return "NOT_EQUAL";}else if(__1.t==55){return "AND";}else if(__1.t==56){return "OR";}else if(__1.t==57){return "LESS";}else if(__1.t==58){return "LESS_EQUAL";}else if(__1.t==59){return "GREATER";}else if(__1.t==60){return "GREATER_EQUAL";}else if(__1.t==61){return "ADD";}else if(__1.t==62){return "ADD_ASSIGN";}else if(__1.t==63){return "SUBTRACT";}else if(__1.t==64){return "SUBTRACT_ASSIGN";}else if(__1.t==65){return "MULTIPLY";}else if(__1.t==66){return "MULTIPLY_ASSIGN";}else if(__1.t==67){return "DIVIDE";}else if(__1.t==68){return "DIVIDE_ASSIGN";}else if(__1.t==69){return "MODULO";}else if(__1.t==70){return "MODULO_ASSIGN";}};void _A2(_x1 __1,int __2,_b1* __3,uint8_t __4,_B2 __5){if(((__5.t)==1)&&(((*__3).len)==4)){_22((&__1),__2,"too many characters in character literal");}_e1(__3,__4);(((*__3).buf)[((*__3).len)])='\0';};_72 _C2(uint8_t* __1){if(strcmp(__1,"tag")==0){return (_72){.t=11};}else if(strcmp(__1,"mod")==0){return (_72){.t=12};}else if(strcmp(__1,"use")==0){return (_72){.t=13};}else if(strcmp(__1,"comp")==0){return (_72){.t=14};}else if(strcmp(__1,"enum")==0){return (_72){.t=15};}else if(strcmp(__1,"prop")==0){return (_72){.t=16};}else if(strcmp(__1,"def")==0){return (_72){.t=17};}else if(strcmp(__1,"sub")==0){return (_72){.t=18};}else if(strcmp(__1,"var")==0){return (_72){.t=19};}else if(strcmp(__1,"this")==0){return (_72){.t=9};}else if(strcmp(__1,"type")==0){return (_72){.t=10};}else if(strcmp(__1,"new")==0){return (_72){.t=20};}else if(strcmp(__1,"true")==0){return (_72){.t=7};}else if(strcmp(__1,"false")==0){return (_72){.t=8};}else if(strcmp(__1,"if")==0){return (_72){.t=21};}else if(strcmp(__1,"elif")==0){return (_72){.t=22};}else if(strcmp(__1,"else")==0){return (_72){.t=23};}else if(strcmp(__1,"loop")==0){return (_72){.t=24};}else if(strcmp(__1,"while")==0){return (_72){.t=25};}else if(strcmp(__1,"for")==0){return (_72){.t=26};}else if(strcmp(__1,"each")==0){return (_72){.t=27};}else if(strcmp(__1,"in")==0){return (_72){.t=28};}else if(strcmp(__1,"match")==0){return (_72){.t=29};}else if(strcmp(__1,"ret")==0){return (_72){.t=30};}else if(strcmp(__1,"next")==0){return (_72){.t=31};}else if(strcmp(__1,"jump")==0){return (_72){.t=32};}else if(strcmp(__1,"try")==0){return (_72){.t=33};}else if(strcmp(__1,"as")==0){return (_72){.t=34};}else if(strcmp(__1,"has")==0){return (_72){.t=35};}return (_72){.t=1};};uint8_t _D2(_72 __1){if(__1.t==43||__1.t==51||__1.t==52||__1.t==54||__1.t==55||__1.t==56||__1.t==57||__1.t==58||__1.t==59||__1.t==60||__1.t==61||__1.t==62||__1.t==63||__1.t==64||__1.t==65||__1.t==66||__1.t==67||__1.t==68||__1.t==69||__1.t==70||__1.t==34||__1.t==35){return 1;}else if(1){return 0;}};_z1 _E2(int __3){return (_z1){.buf=malloc(sizeof(_y1)*__3),.len=0,.cap=__3,};};void _F2(_z1* this,_y1 __B){(((*this).buf)[((*this).len)])=__B;((*this).len)+=1;if(((*this).len)==((*this).cap)){((*this).cap)*=4;((*this).buf)=realloc((*this).buf,sizeof(_y1)*((*this).cap));}};_z1 _02(_x1 __1){_z1 __2=_E2(32);uint8_t __3=0;_B2 __4=(_B2){.t=0};_b1 __5=_c1(8);((__5.buf)[(__5.len)])='\0';for(int __6=0;__6<=((__1.data).len);__6+=1){uint8_t __7=((__1.data).buf)[__6];if(((((__7=='`')&&((__4.t)!=1))&&((__4.t)!=2))&&((__4.t)!=3))&&((__4.t)!=4)){__3=1;goto l;}if(__3){if(__7=='\n'){__3=0;}goto l;}_72 __8=(_72){.t=0};if((__4.t)==3){__4=(_B2){.t=1};}else if((__4.t)==4){__4=(_B2){.t=2};}if(((__4.t)==1)||((__4.t)==2)){if(__7==0){if((__4.t)==1){_22((&__1),__6-1,"expected end of char literal");}else{_22((&__1),__6-1,"expected end of string literal");}}else if(((__4.t)==1)&&(__7==39)){}else if(((__4.t)==2)&&(__7=='"')){}else{if(__7==92){__7=(((__1.data).buf)[(__6+=1)]);if(__7=='b'){__7=8;}else if(__7=='f'){__7=12;}else if(__7=='n'){__7=10;}else if(__7=='r'){__7=13;}else if(__7=='t'){__7=9;}else if(__7=='v'){__7=11;}else if(__7==92){__7=92;}else if(__7==39){__7=39;}else if(__7=='"'){__7='"';}else{_22((&__1),__6-1,"unrecognized character escape sequence");}}_A2(__1,__6,(&__5),__7,__4);goto l;}}if((__7==0)||isspace(__7)){__8=(_72){.t=1};}else{if(__7==39){if((__4.t)==1){__8=(_72){.t=4};__4=(_B2){.t=0};}else{__8=(_72){.t=1};__4=(_B2){.t=3};}}else if(__7=='"'){if((__4.t)==2){__8=(_72){.t=3};__4=(_B2){.t=0};}else{__8=(_72){.t=1};__4=(_B2){.t=4};}}else if(__7==';'){__8=(_72){.t=36};}else if(__7==':'){__8=(_72){.t=37};}else if(__7==','){__8=(_72){.t=38};}else if(__7=='.'){uint8_t __9=((__1.data).buf)[(__6+1)];if((((__4.t)!=7)||(__9=='_'))||isalpha(__9)){__8=(_72){.t=39};}}else if(__7=='?'){__8=(_72){.t=40};}else if(__7=='~'){__8=(_72){.t=41};}else if(__7=='#'){__8=(_72){.t=42};}else if(__7=='('){__8=(_72){.t=43};}else if(__7==')'){__8=(_72){.t=44};}else if(__7=='{'){__8=(_72){.t=45};}else if(__7=='}'){__8=(_72){.t=46};}else if(__7=='['){__8=(_72){.t=47};}else if(__7==']'){__8=(_72){.t=48};}else if(__7=='@'){__8=(_72){.t=49};}else if(__7=='$'){__8=(_72){.t=50};}else if(__7=='&'){__8=(_72){.t=55};}else if(__7=='|'){__8=(_72){.t=56};}else if(__7=='='){if((((__1.data).buf)[(__6+1)])=='='){__8=(_72){.t=52};__6+=1;}else{__8=(_72){.t=51};}}else if(__7=='!'){if((((__1.data).buf)[(__6+1)])=='='){__8=(_72){.t=54};__6+=1;}else{__8=(_72){.t=53};}}else if(__7=='<'){if((((__1.data).buf)[(__6+1)])=='='){__8=(_72){.t=58};__6+=1;}else{__8=(_72){.t=57};}}else if(__7=='>'){if((((__1.data).buf)[(__6+1)])=='='){__8=(_72){.t=60};__6+=1;}else{__8=(_72){.t=59};}}else if(__7=='+'){if((((__1.data).buf)[(__6+1)])=='='){__8=(_72){.t=62};__6+=1;}else{__8=(_72){.t=61};}}else if(__7=='-'){if(_D2(((__2.buf)[((__2.len)-1)]).kind)&&isdigit(((__1.data).buf)[(__6+1)])){goto ret_ll;}if((((__1.data).buf)[(__6+1)])=='='){__8=(_72){.t=64};__6+=1;}else{__8=(_72){.t=63};}}else if(__7=='*'){if((((__1.data).buf)[(__6+1)])=='='){__8=(_72){.t=66};__6+=1;}else{__8=(_72){.t=65};}}else if(__7=='/'){if((((__1.data).buf)[(__6+1)])=='='){__8=(_72){.t=68};__6+=1;}else{__8=(_72){.t=67};}}else if(__7=='%'){if((((__1.data).buf)[(__6+1)])=='='){__8=(_72){.t=70};__6+=1;}else{__8=(_72){.t=69};}}}ret_ll:if(__8.t==0){if(((((__7=='-')||(__7=='_'))||(__7=='.'))||(__7==':'))||isalnum(__7)){if((((__5.len)==0)&&isdigit(__7))||(__7=='-')){__4=(_B2){.t=7};}else if(((__4.t)==7)||((__4.t)==8)){if((__7=='.')&&((__4.t)==7)){__4=(_B2){.t=8};}else if((__7=='_')||isdigit(__7)){}else{_22((&__1),__6-(__5.len),"invalid identifier name starting with a digit");}}if((((__4.t)!=7)&&((__4.t)!=8))||(__7!='_')){_A2(__1,__6,(&__5),__7,__4);}}else{_22((&__1),__6,"unexpected symbol %c",__7);}}else if(1){if((__5.len)>0){if(__8.t==3||__8.t==4){}else if(1){_72 __9=_C2(__5.buf);if(__9.t==1){_y1 __A;if((__4.t)==7){(__A.kind)=(_72){.t=5};}else if((__4.t)==8){(__A.kind)=(_72){.t=6};if(((__5.buf)[((__5.len)-1)])=='.'){_22((&__1),__6-1,"expected a value after the decimal point");}}else{(__A.kind)=(_72){.t=2};}(__A.index)=(__6-(__5.len));(__A.value)=_f1((&__5));_F2((&__2),__A);}else if(1){_y1 __A=(_y1){.kind=__9,.index=__6-_82(__9),};_F2((&__2),__A);}__5=_c1(8);((__5.buf)[(__5.len)])='\0';__4=(_B2){.t=0};}}if(__8.t==1){}else if(1){_y1 __9=(_y1){.kind=__8,};if(__8.t==3||__8.t==4){(__9.value)=_f1((&__5));(__9.index)=(__6-(__5.len));__5=_c1(8);((__5.buf)[(__5.len)])='\0';}else if(1){(__9.index)=((__6-_82(__8))+1);}_F2((&__2),__9);}}l:}ret_l:_y1 __6;if((__2.len)>0){__6=((__2.buf)[((__2.len)-1)]);if(__6.kind.t==2){(__6.index)=((__6.index)+((__6.value).len));}else if(1){(__6.index)=((__6.index)+_82(__6.kind));}}else{(__6.index)=0;}(__6.kind)=(_72){.t=1};_F2((&__2),__6);return __2;};void _12(_z1 __1){printf("Tokens:\n");for(int __2=0;__2<(__1.len);__2+=1){_72 __3=((__1.buf)[__2]).kind;_Z1((_Y1){.t=0});printf("  %s",_92(__3));_a1();if(__3.t==2||__3.t==3||__3.t==4||__3.t==5||__3.t==6){printf("(%s)",((__1.buf)[__2]).value);}printf("\n");}printf("\n");};