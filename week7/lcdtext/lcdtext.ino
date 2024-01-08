// This #include statement was automatically added by the Particle IDE.
#include <LiquidCrystal_I2C_Spark.h>

LiquidCrystal_I2C *lcd;

void setup() {
    Particle.function("lcd", lcdToggle);
    
    lcd = new LiquidCrystal_I2C(0x27, 16, 2);
    lcd->init();
    lcd->backlight();
    lcd->clear();

}

void loop() {

}

int lcdToggle(String command){
    lcd->clear();
    lcd->print(command);
}
