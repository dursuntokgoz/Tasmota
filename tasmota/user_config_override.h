#ifndef _USER_CONFIG_OVERRIDE_H_
#define _USER_CONFIG_OVERRIDE_H_

// Tasmota yapılandırmalarını buraya yazabilirsiniz
#define LANGUAGE              tr  // Türkçe dil desteği

// Wi-Fi Ayarları
#define WIFI_CONFIG_TOOL         WIFI_MANAGER    // Wi-Fi erişim noktası yapılandırması

// Universal Display Ayarları
#define USE_DISPLAY                             // Universal Display sürücüsünü etkinleştir
#define DISPLAY_MODEL          4                // 4 = ST7735 ekran sürücüsü
#define DISPLAY_WIDTH          128              // ST7735 ekran genişliği
#define DISPLAY_HEIGHT         160              // ST7735 ekran yüksekliği
#define DISPLAY_CS             GPIO5            // CS pini
#define DISPLAY_RST            GPIO17           // Reset pini
#define DISPLAY_DC             GPIO16           // Data/Command pini
#define DISPLAY_SCLK           GPIO18          // SPI Clock pini
#define DISPLAY_MOSI           GPIO23          // SPI Data pini

// Röle ve Sensör Ayarları
#define RELAY_PIN              GPIO26           // Röle kontrol pini
#define DS18B20_PIN            GPIO2            // DS18B20 data pini
#define MQ5_PIN                GPIO34           // MQ-5 analog sensör pini
// MQ sensör için analog pini tanımla
#define USE_MQ5_SENSOR          // MQ-5 gaz sensörünü kullan


// Kural tanımlamaları
#define USE_RULES // Kural desteğini etkinleştir
#define RULE1 \
    "ON System#Boot DO DisplayText [z1]Hoş Geldiniz[n]Sistem Başlatılıyor... ENDON\n" \
    "ON DS18B20#Temperature DO DisplayText [z1]Sıcaklık: %value% °C[n] ENDON\n" \
    "ON Analog#A0 DO DisplayText [z2]Gaz Seviyesi: %value% ENDON"

// Kuralı otomatik etkinleştirmek için:
#define ENABLE_RULE1 1


#endif  // _USER_CONFIG_OVERRIDE_H_
