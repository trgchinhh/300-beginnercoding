from datetime import datetime

def nhap_ngay():
    return datetime.strptime(input().strip(), "%d-%m-%Y")

ngay1 = nhap_ngay()
ngay2 = nhap_ngay()
so_ngay = abs((ngay2 - ngay1).days)
print(so_ngay)
