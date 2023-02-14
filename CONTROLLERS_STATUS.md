## Penguin 1
> usb: + (USB_A)  
acc: +  
gyro: -  
mag: +  
bmp: -   (temp = 2000, pr = 0)   
WHOAMI:   ?  
status:  проверить INS_test


## Penguin 2
> usb: -  
acc: ?    
gyro: ?   
mag: ?    
bmp: ?  
WHOAMI: ?   
status:  dead


## Penguin 3
> usb: +  
acc: - (все значения = -1)  
gyro: - (все значения = 0)   
mag: - (все значения = -1)  
bmp: ?  (temp +, pr -)  
WHOAMI: 255  
status:  
 
WARNING: whoAmI возвращает непонятные значения при изменении строки 271 файла MPU9250.c

Проверял: OArt13  
Дата: 14.02.23
