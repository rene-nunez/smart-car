#include "config.h"

const char* ssid = "YOUR_SSID";
const char* password = "YOUR_PASSWORD";
const char* mqtt_server = "BROKER_HOST";
const int port = BROKER_PORT;

const Topics topics = {
    .manual = "smartcar/modo/manual",
    .seguidor = "smartcar/modo/seguidor",
    .obstaculos = "smartcar/modo/obstaculos",
    .navegacion = "smartcar/modo/navegacion",
    .modo = "smartcar/accion/modo",
    .claxon = "smartcar/accion/claxon",
    .luces = "smartcar/accion/luces",
    .ubicacion = "smartcar/estado/ubicacion"
};

const int motorA1 = 18;
const int motorA2 = 19;
const int motorB1 = 13;
const int motorB2 = 4;

const int canalA1 = 0;
const int canalA2 = 1;
const int canalB1 = 2;
const int canalB2 = 3;
const int canalBuzzer = 4;

const int freq = 5000;
const int resolucion = 8;

const int pinBuzzer = 5;
const int freqBuzzer = 2000;

const int trig = 14;
const int echo = 23;

const int pinS1 = 32;
const int pinS2 = 33;
const int pinS3 = 25;
const int pinS4 = 26;
const int pinS5 = 27;

const int sensorVelDer = 34;
const int sensorVelIzq = 35;

const int gpsRX = 16;
const int gpsTX = 17;

const ConfigLuces lucesConf {
    .pinR = 0,
    .pinG = 1,
    .pinB = 2,
    .pinLedDer = 4,
    .pinLedIzq = 3,
    .pinFrenoDer = 5,
    .pinFrenoIzq = 6,
    .colorManual = {1, 0, 1},
    .colorSeguidor = {0, 1, 0},
    .colorObstaculos = {1, 0, 0},
    .colorNavegacion = {1, 1, 0},
    .colorNull = {0, 0, 0}
};

const unsigned long timeoutLuces = 3000;
