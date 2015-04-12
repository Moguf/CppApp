## cplus
### C言語学習者によるC++の学修記録
### [ローベルのC＋＋教室](http://www7b.biglobe.ne.jp/~robe/)サイトを参考にして
#### まずは標準出力
```c++
#include <iostream>
using namespace std;
//まずは、標準出力のライブラリをインクルード
//stdio.hの代わりだと思えばいい

std::cout << "string1" <<std::endl;
//printf("string");の代わり
//ストリームとライブラリの違いはまだ理解出来ていない
```
####C言語のヘッダファイルに関して
```c++
include <string.h>
include <stdio.h>
//もちろんC言語でのライブラリもインクルードすることができる
```

####inlineとは何ぞや
```c++
inline void func()
//でインライン関数になる。マクロのような振る舞いをする。
//やたらめったら、inlineをするとプログラムサイズが大きくなる。
```

####グローバル変数へのアクセス
```c++
int a=1
void func(){
    int a=10;
    std::cont<<a<<::a<<std::endl;
    }
//これで、グローバル変数とローカル変数に別々にアクセスすることが出来る。
```

####メモリの確保
```c++
p=new int;
plist=new int[N];
//malloc,callocに対応,
//include <stdlib.h>
//p=(int *)malloc(sizof(int));

delete p;
delete []plist;
//free(p);
```

####ブール値
```c++
bool flag;
flag=true;
flag=false
```

####ちょっと復習(列挙子)
```c++
enum List{
     one  = 1;
     two  = 2;
     three= 3;
     }
//簡易版defineだと思ってしまう...。     
```