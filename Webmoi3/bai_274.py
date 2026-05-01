from datetime import datetime, timedelta

hien_tai_str = input().strip()
hien_tai = datetime.strptime(hien_tai_str, "%H:%M")
cong_str = input().strip()
gio_cong, phut_cong = map(int, cong_str.split(":"))
khoang_tg = timedelta(hours=gio_cong, minutes=phut_cong)
ket_qua = hien_tai + khoang_tg
print(ket_qua.strftime("%H:%M"))
