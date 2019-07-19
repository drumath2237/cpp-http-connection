# C++ HTTP 通信テスト

## About

`cpp-httplib`を用いたHTTP通信のテスト。
公式ドキュメントを写経して鯖とクライアントを実装した。
結構簡単にできて感動した。

## Environment

- Windows Powershell
- clang version 7.0.0
- [cpp-httplib](https://github.com/yhirose/cpp-httplib)

## install

1. clone this repo.
2. `clang server.cpp -o server.exe`でサーバーサイドをコンパイル
3. `clang cli.cpp -o cli.exe`でクライアントをコンパイル

## Usage

```bash
./server
```

で鯖が立ち上がります。
このまま

```bash
./cli
```

とすると、

```bash
200
Hello, World
```

と帰ってくるはずです。
