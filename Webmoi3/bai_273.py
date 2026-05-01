from datetime import datetime, timedelta
def nhap_gio():
    time_str = input().strip()
    return datetime.strptime(time_str, "%H:%M:%S")
t1 = nhap_gio()
t2 = nhap_gio()
if t2 < t1:
    t2 += timedelta(days=1)
delta = t2 - t1
tong_giay = int(delta.total_seconds())
gio = tong_giay // 3600
tong_giay %= 3600
phut = tong_giay // 60
giay = tong_giay % 60
print(f"{gio} giờ, {phut} phút, {giay} giây")
