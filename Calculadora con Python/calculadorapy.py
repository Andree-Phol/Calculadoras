from tkinter import *

principal=Tk()
principal.title("Calculadora con Python")
principal.geometry("400x300")
principal.config(bg="white")

class calc:
    def __init__(self):
        self.nmra=0
        self.nmrb=0
        self.van=0
        self.van1=0
        pass
    def suma(self):
        self.nmra=float(txt_ventana.get())
        txt_ventana.delete("0",END)
        self.van=1
    def resta(self):
        self.nmra=float(txt_ventana.get())
        txt_ventana.delete("0",END)
        self.van=2
    def multi(self):
        self.nmra=float(txt_ventana.get())
        txt_ventana.delete("0",END)
        self.van=3
    def divi(self):
        self.nmra=float(txt_ventana.get())
        txt_ventana.delete("0",END)
        self.van=4
    def res(self):
        self.nmrb=float(txt_ventana.get())
        txt_ventana.delete("0",END)
        res=0
        if self.van==1:
            res=self.nmra+self.nmrb
        if self.van==2:
            res=self.nmra-self.nmrb
        if self.van==3:
            res=self.nmra*self.nmrb
        if self.van==4:
            res=self.nmra/self.nmrb
        txt_ventana.insert(0,res)
        self.van=0
        self.van1=1

    def nmr1(self):
        if self.van1==1:
            txt_ventana.delete(0,END)
            self.van1=0
        txt_ventana.insert(END,"1")
    def nmr2(self):
        if self.van1==1:
            txt_ventana.delete(0,END)
            self.van1=0
        txt_ventana.insert(END,"2")

    def nmr3(self):
        if self.van1==1:
            txt_ventana.delete(0,END)
            self.van1=0
        txt_ventana.insert(END,"3")

    def nmr4(self):
        if self.van1==1:
            txt_ventana.delete(0,END)
            self.van1=0
        txt_ventana.insert(END,"4")

    def nmr5(self):
        if self.van1==1:
            txt_ventana.delete(0,END)
            self.van1=0
        txt_ventana.insert(END,"5")

    def nmr6(self):
        if self.van1==1:
            txt_ventana.delete(0,END)
            self.van1=0
        txt_ventana.insert(END,"6")

    def nmr7(self):
        if self.van1==1:
            txt_ventana.delete(0,END)
            self.van1=0
        txt_ventana.insert(END,"7")

    def nmr8(self):
        if self.van1==1:
            txt_ventana.delete(0,END)
            self.van1=0
        txt_ventana.insert(END,"8")

    def nmr9(self):
        if self.van1==1:
            txt_ventana.delete(0,END)
            self.van1=0
        txt_ventana.insert(END,"9")

    def nmr0(self):
        if self.van1==1:
            txt_ventana.delete(0,END)
            self.van1=0
        txt_ventana.insert(END,"0")

    def nmrpun(self):
        if self.van1==1:
            txt_ventana.delete(0,END)
            self.van1=0
        txt_ventana.insert(END,".")
    def elim(self):
        txt_ventana.delete(txt_ventana.index(END)-1) 
    def lim(self):
        txt_ventana.delete(0,END)


calculador=calc()

txt_ventana=Entry(principal,bg="white")
txt_ventana.place(x=10,y=10,width=200,height=25)

btn_1=Button(principal,text="1",command=calculador.nmr1)
btn_1.place(x=10,y=150,width=25,height=25)

btn_2=Button(principal,text="2",command=calculador.nmr2)
btn_2.place(x=45,y=150,width=25,height=25)

btn_3=Button(principal,text="3",command=calculador.nmr3)
btn_3.place(x=80,y=150,width=25,height=25)

btn_4=Button(principal,text="4",command=calculador.nmr4)
btn_4.place(x=10,y=115,width=25,height=25)

btn_5=Button(principal,text="5",command=calculador.nmr5)
btn_5.place(x=45,y=115,width=25,height=25)

btn_6=Button(principal,text="6",command=calculador.nmr6)
btn_6.place(x=80,y=115,width=25,height=25)

btn_7=Button(principal,text="7",command=calculador.nmr7)
btn_7.place(x=10,y=80,width=25,height=25)

btn_8=Button(principal,text="8",command=calculador.nmr8)
btn_8.place(x=45,y=80,width=25,height=25)

btn_9=Button(principal,text="9",command=calculador.nmr9)
btn_9.place(x=80,y=80,width=25,height=25)

btn_0=Button(principal,text="0",command=calculador.nmr0)
btn_0.place(x=10,y=185,width=25,height=25)

btn_punto=Button(principal,text=".",command=calculador.nmrpun)
btn_punto.place(x=45,y=185,width=25,height=25)

btn_igual=Button(principal,text="=",command=calculador.res)
btn_igual.place(x=115,y=150,width=25,height=60)

btn_mas=Button(principal,text="+",command=calculador.suma)
btn_mas.place(x=115,y=80,width=25,height=25)

btn_menos=Button(principal,text="-",command=calculador.resta)
btn_menos.place(x=115,y=115,width=25,height=25)

btn_por=Button(principal,text="*",command=calculador.multi)
btn_por.place(x=115,y=45,width=25,height=25)

btn_entre=Button(principal,text="/",command=calculador.divi)
btn_entre.place(x=80,y=45,width=25,height=25)

btn_lim=Button(principal,text="X",command=calculador.lim)
btn_lim.place(x=10,y=45,width=25,height=25)

btn_quit=Button(principal,text="<-",command=calculador.elim)
btn_quit.place(x=45,y=45,width=25,height=25)

principal.mainloop()
