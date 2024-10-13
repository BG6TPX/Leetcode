from os import *
import keyword


class myclass:
    i = 123456
    def f(self):
        return "hello world"

x = myclass()

print("MyClass 类的属性 i 为：", x.i)
print("MyClass 类的方法 f 输出为：", x.f())