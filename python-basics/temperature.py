print("您选择1摄氏度转华氏度，2华氏度转摄氏度")
choice=input("请选择1或2：")
if choice=="1":
   celsius=float(input("请输入摄氏度："))
   print("华氏度为",celsius*9/5+32,"℉")
elif choice=="2":
    fahrenheit=float(input("请输入华氏度"))
    print("摄氏度为",(fahrenheit-32)*5/9,"℃")
else:
    print("错误")
input("press any key to exit")
