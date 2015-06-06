# 実装時のメモ

## 大前提

### コードでは無いですが，仕様の説明という意味で
https://github.com/shopetan/shopetan-sezemi-2015-readable-code/blob/master/readme/README_no1.md
この文字化けする場合という記述

### どうしてリーダブルだと思っているかの説明
あらゆる環境の人が実行できることを目的としているので，環境に合わせて文字コードを変更すべきという内容を付与した．

### この書き方の一言説明
環境依存への対処方法


## 仕様(3)

### 実際のコード
https://github.com/shopetan/shopetan-sezemi-2015-readable-code/blob/master/code/no3.c #8

```c
    char *fname = "recipe-data.txt";
```


### どうしてリーダブルだと思っているかの説明
fopen時に何をopenしているか明示的にする．
何か変更を加えたい時に分かりやすい．

### この書き方の一言説明
明示的な表記

## 仕様(4)

### 実際のコード
https://github.com/shopetan/shopetan-sezemi-2015-readable-code/blob/master/code/no3.c #8

### どうしてリーダブルだと思っているかの説明
fopen時に何をopenしているか明示的にする．
何か変更を加えたい時に分かりやすい．

### この書き方の一言説明
明示的な表記