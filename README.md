#                                                                        🍜 Philosophers

# 🤵🏻‍♂️ Filozofların Akşam Yemeği (Dining Philosophers)

Dining Philosophers problemi, 1965 yılında bilgisayar bilimci Edsger Dijkstra tarafından ortaya konmuş, daha sonra Tony Hoare tarafından şimdiki formuyla düzenlenmiş klasik bir senkronizasyon problemidir. Problem, bilgisayar biliminde eşzamanlılık (concurrency) kavramını ve paylaşılan kaynakların senkronizasyonunu öğretmek için kullanılır.

## 🚀 Proje Hakkında

Bu proje, Dining Philosophers problemini çözmeyi amaçlar. Filozoflar bir masanın etrafında oturur ve ya düşünür ya da yer. Yemek yemek için masada bulunan çatalları kullanmaları gerekir. Her filozofun sağında ve solunda birer çatal bulunur ve yemek için iki çatala da ihtiyaçları vardır.

### Problemin Temel Zorlukları:

1. **Kilitlenme (Deadlock)**: Eğer her filozof aynı anda sol çatalı alırsa, hiçbiri sağ çatalı alamaz ve program kilitlenir.
2. **Açlık (Starvation)**: Bir filozofun sürekli olarak çatal alamaması ve açlıktan ölmesi durumu.

## 📋 Proje Gereksinimleri

- Tüm filozoflar yemek yemelidir ve açlıktan ölmemelidir.
- Filozoflar birbirleriyle konuşmaz ve durumlarını bilemez.
- Her durum değişikliği ekrana yazdırılır (çatal alma, yeme, uyuma, düşünme, ölme).
- Bir filozof öldüğünde, diğer filozoflar yemeyi bırakmalıdır.
- Mutex kilitlerini (mutex locks) kullanarak çatalların paylaşımını senkronize et.

## 💻 Uygulama Detayları

- Thread'ler filozofları temsil eder
- Mutex'ler çatalları temsil eder
- Her filozof bir thread olarak çalışır ve yaşam döngüsünü sürdürür (düşünme, yeme, uyuma)
- Zamanında yiyemezse filozof ölür ve simülasyon sonlanır
- Tüm filozoflar gerekli sayıda yemek yerse simülasyon başarıyla sonlanır

