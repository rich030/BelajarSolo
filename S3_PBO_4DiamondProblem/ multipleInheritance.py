class B():
    def m(self):
        print("from B")
    
class C():
    def n(self):
        print("from C")

class D(B,C):
    pass

x = D()
x.n()
x.m()