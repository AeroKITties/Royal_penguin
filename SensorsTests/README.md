## Проект IMU-BARO_test
Исправленная проблема:
OArt13 и YuraTheBest обнаружили, что из-за инвертированности сигнала SS (CS) в шине spi, 
при **не**выключении датчика, на него перманентно приходит "0" ("включение режима отправки данных").
Из-за чего MISO перегружается, тк получает и те данные, которые были запрошены (при тестировании baro -- данные с baro), 
и те, которые получать не предполагалось (при тестировании baro -- данные с невыключенного imu).

Решение проблемы:
При написании классов датчиков поместить выключение датчиков (отправку "1" по SS) в конструкторы, 
а инициализацию поместить в отдельную функцию.

Особенности решения:
Инициализировать датчики можно лишь тогда, когда созданы объекты **всех** датчиков, которые будут использоваться в проекте
