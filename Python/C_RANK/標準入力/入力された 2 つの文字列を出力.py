# コードを標準入力から値を取得して動作するように記述します
import sys
input = sys.stdin.read

# 入力を改行で分割してリストにする
data = input().strip().split()

# それぞれの文字列SとTを取得
S = data[0]
T = data[1]

# SとTを改行区切りで出力
print(S)
print(T)