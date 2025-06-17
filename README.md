# 🚗 Bluetooth Kontrollü Kameralı Mini Araç

Bu proje, Raspberry Pi ve Arduino kullanılarak geliştirilen uzaktan kontrollü, kameralı ve sesli-ışıklı bir mini araç sistemidir. Proje BOZ214 Fiziksel Programlama dersi kapsamında gerçekleştirilmiştir.

## 🎯 Proje Özellikleri

- 📷 **USB Kamera** ile gerçek zamanlı görüntü aktarımı (PiConnect üzerinden)
- 🎮 **Bluetooth (HC-05)** üzerinden mobil veya PC kontrollü yönlendirme
- 🔊 **Pasif Buzzer** ile korna sesi (2 saniyelik uyarı)
- 🔦 **LED Farlar** ile ışıklı uyarı sistemi
- 🔁 **Servo motor** ile yön kontrolü (sağ/sol dönüş)
- 🔋 Harici 9V pil ile motor beslemesi (Arduino'dan ayrılmış güç kaynağı)

## 🔧 Kullanılan Donanım

- Arduino UNO R3
- Raspberry Pi 4 (PiConnect görüntü aktarımı için)
- HC-05 Bluetooth modülü
- USB Kamera (Pi USB portuna bağlı)
- 2x DC Motor + Tekerlek
- 1x Servo Motor (direksiyon kontrolü için)
- 1x Pasif Buzzer
- 2x LED (Farlar)
- 1x 9V Pil
- Breadboard, jumper kablolar, dirençler

## 🧠 Kod Açıklaması

Arduino tarafında Bluetooth ile gelen karakter komutlarına göre motor, servo, buzzer ve LED'ler kontrol edilir.

| Komut | İşlevi                     |
|-------|----------------------------|
| `F`   | İleri git                  |
| `B`   | Geri git                   |
| `S`   | Dur                        |
| `L`   | Sola dön (servo)          |
| `R`   | Sağa dön (servo)          |
| `G/H`| İleri+Sağ/Sol (servo+motor)|
| `I/J`| Geri+Sağ/Sol               |
| `Y`   | 2 saniye korna sesi (buzzer) |


## 📄 Lisans

Bu proje yalnızca eğitim amaçlıdır ve BOZ214 dersi için geliştirilmiştir.
