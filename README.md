# ![](https://drive.google.com/uc?id=10INx5_pkhMcYRdx_OO4rXNXxcsvPtBYq) Template Method 樣板方法模式   
> ##### 理論請自行找，網路上有很多相關的文章，這邊只關注於範例實作的部分.

---
<br>

<!--ts-->
## 目錄
* [目的](#目的)
* [使用時機](#使用時機)
* [URL結構圖](#url結構圖)
* [實作成員](#實作成員)
* [實作範例](#實作範例)
* [參考資料](#參考資料)
<!--te-->

---
<br>

## 目的
Template Method 是一種行為型的設計模式，其目的是定義一個操作中的算法骨架，並將一些步驟延遲到子類別中實現。<br>
這樣可以使得子類別在不改變算法結構的前提下，重新定義算法中的某些步驟，從而實現不同的行為。

---
<br>

## 使用時機
- 在不改變算法的情況下，定義一些步驟的不同實現方式。
- 當需要在類別層次結構中定義算法的骨架，而不希望每個子類別都實現完整的算法時。

---
<br>

## URL結構圖
![](https://drive.google.com/uc?id=1hhNrRQQKxpAcuWmNGg0iIbYLvg8p-MPm)
> 圖片來源：[Refactoring.Guru - Template Method](https://refactoring.guru/design-patterns/template-method)

---
<br>

## 實作成員
* AbstractClass
  * 定義一個模板方法，並定義一些抽象方法和具體方法，這些方法將在模板方法中被使用。
* ConcreteClass
  * 實現AbstractClass中定義的抽象方法和具體方法，從而實現完整的算法。
* Client
  * 創建ConcreteClass的實例，調用其模板方法來執行算法。

---
<br>

## 實作範例:
- [待補...]() 

---
<br>

## 參考資料
* [Wiki - Template Method Pattern](https://en.wikipedia.org/wiki/Template_method_pattern) <br>
* [Refactoring.Guru - Template Method](https://refactoring.guru/design-patterns/template-method) <br>

---
<br>

---
<!--ts-->
#### [目錄 ↩](#目錄)
<!--te-->
---
