# Hanoi-Towers-in-C
Hanoi towers solution in C programming language.
	
HANOİ KULELERİ DÖKÜMANTASYON YAZISI
Çözüm Fonksiyonu:
 
Void ile tanımlanmış 4 adet parametre içeren ismi "hanoi" olan fonksiyondur. Parametrelerden "n" oyunda kullanılan disk sayısını , "kaynak" başlangıç çubuğunu,"hedef" oyunun sonlanacağı çubuğu,"yardimci" oyun sonlandırmak için gerekli olan yardımcı çubuğu ifade etmektedir.

Fonksiyonun içine girdiğimizde if yapısının koşulu n=1 ise içe gir değil ise alta geç komutudur.

Ben bu çözümü daha net anlatabilme adına örnekleme yöntemini izleyerek fonksiyon da ne düşündüğümü aktarmak istiyorum.

n=4 alırsak;
Fonksiyon mekanizması çalıştığında ilk olarak gideceği merkez 1. recursive(özyinelemeli) fonksiyon olacaktır. Bu fonksiyonun amacı (void içindeki 1. fonksiyondan bahsediyorum) başlangıç çubuğundaki 4 diskin, en alttaki ve en büyüğünü bu çubukta bırakarak diğer 3 diski yardımcı çubuğa taşımasıdır. (n disk var ise n-1 diski geçiş çubuğuna taşıyor.) Bu durumu kendi içinde kendini tekrar çağırarak yapıyor.

Sonra fonksiyon kendini çağıra çağıra n=1 olduğunda en alttaki, en büyük disk hedef çubuğa geçiyor.

Onun altındaki printf yazısı geçişleri komut ekranına bastırıyor.
Daha sonra 2. fonksiyon olarak adlandırdığım (void içindeki en alttaki fonksiyondan bahsediyorum) fonksiyona geçiyoruz. Bu fonksiyon yardımcı çubuğa aktardığımız 3 tane diski hedef çubuğa aktarıyor.(Kendini tekrar tekrar çağırarak) 

Böylece 4 diskte hedef çubukta yerini almış oluyor. Az önce anlattığım durumu özetleyen internetten aldığım bir görsel ile pekiştirmek istiyorum. Dosya ekinde mevcut.
 
-----------------------------------------------------------------------------------------------------------------------
Main Fonksiyonu:
 
Disk sayısına karşılık gelen n değişkeni atıyoruz.  Zamanı ölçer  time_spent değişkeni atıyoruz. 
Kullanıcıdan disk sayısı alıyoruz.
Clock() fonksiyonunu kullanarak zaman ölçümünün başlangıcını alıyoruz.
Fonksiyon değerlerimizi ve çubuk değişkenlerini main içine yazıyoruz.
Clock() fonksiyonunu kullanarak zaman ölçümünün sonunu alıyoruz.
Zaman değişkenimizi saniye sayacına bölüyoruz.
Ve zaman değişkenini (time_spent) konsola yazdırıyoruz.

ENSAR YİĞİT SARITAŞ




  