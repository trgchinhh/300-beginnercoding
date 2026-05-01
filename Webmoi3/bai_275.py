from datetime import datetime

def nhap_thoi_gian():
    return datetime.strptime(input().strip(), "%d/%m/%y %H:%M:%S")

hien_tai = nhap_thoi_gian()
moc_tuong_lai = nhap_thoi_gian()
khoang_thoi_gian = abs(moc_tuong_lai - hien_tai)

tong_giay = int(khoang_thoi_gian.total_seconds())
ngay = tong_giay // 86400
tong_giay %= 86400
gio = tong_giay // 3600
tong_giay %= 3600
phut = tong_giay // 60
giay = tong_giay % 60

print(f"{ngay} ngay {gio} gio {phut} phut {giay} giay")
