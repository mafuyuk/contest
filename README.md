# contest

Macの場合はbrewでgccとg++を以下のコマンドでいれる
```
$ brew install gcc
```

## C言語
```bash
$ mkdir build
$ cd build
$ cmake ..
$ make
```

## C++
```bash
$ g++ -o helloworld main.cpp -std=c++11
```