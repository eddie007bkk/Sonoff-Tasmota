/*
  pt-PT.h - localization for Portuguese - Portugal for Sonoff-Tasmota

  Copyright (C) 2018  Theo Arends and Paulo Paiva

  This program is free software: you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation, either version 3 of the License, or
  (at your option) any later version.

  This program is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef _LANGUAGE_PT_PT_H_
#define _LANGUAGE_PT_PT_H_

/*************************** ATTENTION *******************************\
 *
 * Due to memory constraints only UTF-8 is supported.
 * To save code space keep text as short as possible.
 * Time and Date provided by SDK can not be localized (yet).
 * Use online command StateText to translate ON, OFF, HOLD and TOGGLE.
 * Use online command Prefix to translate cmnd, stat and tele.
 *
 * Updated until v5.12.0
\*********************************************************************/

//#define LANGUAGE_MODULE_NAME         // Enable to display "Module Generic" (ie Spanish), Disable to display "Generic Module" (ie English)

// HTML (ISO 639-1) Language Code
#define D_HTML_LANGUAGE "pt"

// "2017-03-07T11:08:02" - ISO8601:2004
#define D_YEAR_MONTH_SEPARATOR "-"
#define D_MONTH_DAY_SEPARATOR "-"
#define D_DATE_TIME_SEPARATOR "T"
#define D_HOUR_MINUTE_SEPARATOR ":"
#define D_MINUTE_SECOND_SEPARATOR ":"

#define D_DAY3LIST "DomSegTerQuaQuiSexSab"
#define D_MONTH3LIST "JanFevMarAbrMaiJunJulAgoSepOutNovDez"

// Non JSON decimal separator
#define D_DECIMAL_SEPARATOR "."

// Common
#define D_ADMIN "Admin"
#define D_AIR_QUALITY "Qualidade do Ar"
#define D_AP "AP"                    // Ponto de Acesso
#define D_AS "como"
#define D_AUTO "AUTO"
#define D_BLINK "Piscar"
#define D_BLINKOFF "Piscar desligado"
#define D_BOOT_COUNT "Contagem de Inicialização"
#define D_BRIGHTLIGHT "Brilho"
#define D_BUTTON "Botão"
#define D_BY "por"                    // Write by me
#define D_BYTES "Bytes"
#define D_CELSIUS "Celsius"
#define D_CO2 "Dioxido de Carbono"
#define D_CODE "Código"                // Button code
#define D_COLDLIGHT "Luz Fria"
#define D_COMMAND "Comando"
#define D_CONNECTED "Ligado"
#define D_COUNT "Contagem"
#define D_COUNTER "Contador"
#define D_CURRENT "Corrente"          // As in Voltage and Current
#define D_DATA "Dados"
#define D_DARKLIGHT "Luz Escura"
#define D_DEBUG "Depurar"
#define D_DISABLED "Disabilitado"
#define D_DISTANCE "Distance"
#define D_DNS_SERVER "Servidor DNS"
#define D_DONE "Concluído"
#define D_DST_TIME "DST"
#define D_ECO2 "eCO2"
#define D_EMULATION "Emulação"
#define D_ENABLED "Habilitado"
#define D_ERASE "Apagar"
#define D_ERROR "Erro"
#define D_FAHRENHEIT "Fahrenheit"
#define D_FAILED "Falha"
#define D_FALLBACK "Retornar"
#define D_FALLBACK_TOPIC "Tópico para retornar"
#define D_FALSE "Falso"
#define D_FILE "Ficheiro"
#define D_FREE_MEMORY "Memoria Livre"
#define D_GAS "Gás"
#define D_GATEWAY "Gateway"
#define D_GROUP "Grupo"
#define D_HOST "Anfitrião"
#define D_HOSTNAME "Nome Anfitrião"
#define D_HUMIDITY "Humidade"
#define D_ILLUMINANCE "Luminâcia"
#define D_IMMEDIATE "Immediato"      // Button immediate
#define D_INDEX "Indíce"
#define D_INFO "Info"
#define D_INITIALIZED "Inicializado"
#define D_IP_ADDRESS "Endereço IP"
#define D_LIGHT "Luz"
#define D_LWT "LWT"
#define D_MODULE "Módulo"
#define D_MQTT "MQTT"
#define D_MULTI_PRESS "multi-pressão"
#define D_NOISE "Ruído"
#define D_NONE "Nenhum"
#define D_OFF "Off"
#define D_OFFLINE "Desconetado"
#define D_OK "Ok"
#define D_ON "On"
#define D_ONLINE "Conetado"
#define D_PASSWORD "Palavra Chave"
#define D_PORT "Porta"
#define D_POWER_FACTOR "Factor de Potência"
#define D_POWERUSAGE "Potência"
#define D_PRESSURE "Pressão"
#define D_PRESSUREATSEALEVEL "Pressão ao nível do Mar"
#define D_PROGRAM_FLASH_SIZE "Tamanho do Programa na Flash"
#define D_PROGRAM_SIZE "Tamanho do Programa"
#define D_PROJECT "Projeto"
#define D_RECEIVED "Recebido"
#define D_RESTART "Reiniciar"
#define D_RESTARTING "A reiniciar"
#define D_RESTART_REASON "Razão do reinicio"
#define D_RESTORE "Restauro"
#define D_RETAINED "Manter"
#define D_RULE "Rule"
#define D_SAVE "Salvar"
#define D_SENSOR "Sensor"
#define D_SSID "SSId"
#define D_START "Início"
#define D_STD_TIME "STD"
#define D_STOP "Parar"
#define D_SUBNET_MASK "Mascara sub rede"
#define D_SUBSCRIBE_TO "Subescrever para"
#define D_SUCCESSFUL "Successo"
#define D_SUNRISE "Sunrise"
#define D_SUNSET "Sunset"
#define D_TEMPERATURE "Temperatura"
#define D_TO "para"
#define D_TOGGLE "Pressionar"
#define D_TOPIC "Tópico"
#define D_TRANSMIT "Transmitir"
#define D_TRUE "Verdadeiro"
#define D_TVOC "TVOC"
#define D_UPGRADE "Atualizar"
#define D_UPLOAD "Enviar"
#define D_UPTIME "Tempo de Atividade"
#define D_USER "Utilizador"
#define D_UTC_TIME "UTC"
#define D_UV_LEVEL "Nível UV"
#define D_VERSION "Versão"
#define D_VOLTAGE "Voltagem"
#define D_WARMLIGHT "Luz Quente"
#define D_WEB_SERVER "servidor WEB"

// sonoff.ino
#define D_WARNING_MINIMAL_VERSION "AVISO esta versão não supporta configurações persistentes"
#define D_LEVEL_10 "nível 1-0"
#define D_LEVEL_01 "nível 0-1"
#define D_SERIAL_LOGGING_DISABLED "Registro em serie desabilitado"
#define D_SYSLOG_LOGGING_REENABLED "Registro do Syslog reativado"

#define D_SET_BAUDRATE_TO "Ajuste da velocidade para"
#define D_RECEIVED_TOPIC "Topico Recebido"
#define D_DATA_SIZE "Tamanho de dados"
#define D_ANALOG_INPUT "Entrada Analógica"

// support.ino
#define D_OSWATCH "osWatch"
#define D_BLOCKED_LOOP "Loop Bloqueado"
#define D_WPS_FAILED_WITH_STATUS "WPSconfig Falha de estado"
#define D_ACTIVE_FOR_3_MINUTES "ativo por 3 minutes"
#define D_FAILED_TO_START "Falha ao iníciar"
#define D_PATCH_ISSUE_2186 "Questão 2186"
#define D_CONNECTING_TO_AP "Ligando ao AP"
#define D_IN_MODE "em modo"
#define D_CONNECT_FAILED_NO_IP_ADDRESS "A ligação falhou porque nenhum endereço IP foi recebido"
#define D_CONNECT_FAILED_AP_NOT_REACHED "A ligação falhou porque o AP não pode ser alcançado"
#define D_CONNECT_FAILED_WRONG_PASSWORD "A ligação falhou porque a palavra chave está incorreta"
#define D_CONNECT_FAILED_AP_TIMEOUT "A ligação falhou porque o tempo excedeu"
#define D_ATTEMPTING_CONNECTION "A ligar..."
#define D_CHECKING_CONNECTION "A verificar ligação..."
#define D_QUERY_DONE "Consulta finalizada. Serviço MQTT não encontrado"
#define D_MQTT_SERVICE_FOUND "Serviço MQTT encontrado em"
#define D_FOUND_AT "encontrado em"
#define D_SYSLOG_HOST_NOT_FOUND "Syslog anfitrião não encontrado"

// settings.ino
#define D_SAVED_TO_FLASH_AT "Guardado na flash em"
#define D_LOADED_FROM_FLASH_AT "Lido da flash em"
#define D_USE_DEFAULTS "Usar predefinições"
#define D_ERASED_SECTOR "Apagar setores"

// webserver.ino
#define D_MINIMAL_FIRMWARE_PLEASE_UPGRADE "MINIMO firmware - Atualizar Por favor"
#define D_WEBSERVER_ACTIVE_ON "Servidor WEB ativo em"
#define D_WITH_IP_ADDRESS "com o endereço IP"
#define D_WEBSERVER_STOPPED "Servitor WEB parou"
#define D_FILE_NOT_FOUND "Ficheiro não encontrado"
#define D_REDIRECTED "Redirecionado para o portal ativo"
#define D_WIFIMANAGER_SET_ACCESSPOINT_AND_STATION "Wifimanager configura o Ponto de Acesso e mantem a Estação"
#define D_WIFIMANAGER_SET_ACCESSPOINT "Wifimanager configura o Ponto de Acesso"
#define D_TRYING_TO_CONNECT "A tentar ligar o dispositivo à rede"

#define D_RESTART_IN "Reinicia em"
#define D_SECONDS "segundos"
#define D_DEVICE_WILL_RESTART "O dispositivo irá reiniciar dentro de alguns segundos"
#define D_BUTTON_TOGGLE "Pressionar"
#define D_CONFIGURATION "Configuração"
#define D_INFORMATION "Informação"
#define D_FIRMWARE_UPGRADE "Atualização de Firmware"
#define D_CONSOLE "Consola"
#define D_CONFIRM_RESTART "Confirmar o reinicio"

#define D_CONFIGURE_MODULE "Configurar Módulo"
#define D_CONFIGURE_WIFI "Configurar WiFi"
#define D_CONFIGURE_MQTT "Configurar MQTT"
#define D_CONFIGURE_DOMOTICZ "Configurar Domoticz"
#define D_CONFIGURE_LOGGING "Configurar Logging"
#define D_CONFIGURE_OTHER "Configurar outras opções"
#define D_CONFIRM_RESET_CONFIGURATION "Apagar configuração Confirmar"
#define D_RESET_CONFIGURATION "Apagar configuração"
#define D_BACKUP_CONFIGURATION "Guardar configuração"
#define D_RESTORE_CONFIGURATION "Repor configuração"
#define D_MAIN_MENU "Menu Principal"

#define D_MODULE_PARAMETERS "Parametros do Módulo"
#define D_MODULE_TYPE "Tipo de Módulo"
#define D_GPIO "GPIO"
#define D_SERIAL_IN "Serial Entrada"
#define D_SERIAL_OUT "Serial Saída"

#define D_WIFI_PARAMETERS "Parametros Wifi"
#define D_SCAN_FOR_WIFI_NETWORKS "Em busca de redes wifi"
#define D_SCAN_DONE "Busca finalizada"
#define D_NO_NETWORKS_FOUND "Sem redes"
#define D_REFRESH_TO_SCAN_AGAIN "Nova busca"
#define D_DUPLICATE_ACCESSPOINT "Ponto de Acesso duplicado"
#define D_SKIPPING_LOW_QUALITY "Ignorado devido a baixa qualidade do sinal"
#define D_RSSI "RSSI"
#define D_WEP "WEP"
#define D_WPA_PSK "WPA PSK"
#define D_WPA2_PSK "WPA2 PSK"
#define D_AP1_SSID "AP1 SSId"
#define D_AP1_PASSWORD "AP1 Palavra Chave"
#define D_AP2_SSID "AP2 SSId"
#define D_AP2_PASSWORD "AP2 Palavra Chave"

#define D_MQTT_PARAMETERS "Parametros MQTT"
#define D_CLIENT "Cliente"
#define D_FULL_TOPIC "Tópico completo"

#define D_LOGGING_PARAMETERS "Parametros Logging"
#define D_SERIAL_LOG_LEVEL "Nível de registro serial"
#define D_WEB_LOG_LEVEL "Nível de registro WEB"
#define D_SYS_LOG_LEVEL "Nível de registro Syslog"
#define D_MORE_DEBUG "Depurar mais"
#define D_SYSLOG_HOST "Syslog anfitrião"
#define D_SYSLOG_PORT "Porta Syslog"
#define D_TELEMETRY_PERIOD "Periodo de Telemetria"

#define D_OTHER_PARAMETERS "Outros parametros"
#define D_WEB_ADMIN_PASSWORD "Palavra Chave de WEB Admin"
#define D_MQTT_ENABLE "MQTT habilitado"
#define D_FRIENDLY_NAME "Nome amigável"
#define D_BELKIN_WEMO "Belkin WeMo"
#define D_HUE_BRIDGE "Hue Bridge"
#define D_SINGLE_DEVICE "dispositivo único"
#define D_MULTI_DEVICE "multiplos dispositivos"

#define D_SAVE_CONFIGURATION "Salvar configuração"
#define D_CONFIGURATION_SAVED "Configuração guardada"
#define D_CONFIGURATION_RESET "Reinicialização da configuração"

#define D_PROGRAM_VERSION "Versão do Programa"
#define D_BUILD_DATE_AND_TIME "Data e Hora da construção"
#define D_CORE_AND_SDK_VERSION "Versão Core/SDK"
#define D_FLASH_WRITE_COUNT "contagem de gravação flash"
#define D_MAC_ADDRESS "Endereço MAC"
#define D_MQTT_HOST "MQTT Servidor"
#define D_MQTT_PORT "MQTT Porta"
#define D_MQTT_CLIENT "MQTT Cliente"
#define D_MQTT_USER "MQTT Utilizador"
#define D_MQTT_TOPIC "MQTT Tópico"
#define D_MQTT_GROUP_TOPIC "MQTT Tópico Grupo"
#define D_MQTT_FULL_TOPIC "MQTT Tópico Completo"
#define D_MDNS_DISCOVERY "Descobrir mDNS"
#define D_MDNS_ADVERTISE "Anunciar mDNS"
#define D_ESP_CHIP_ID "ESP Chip Id"
#define D_FLASH_CHIP_ID "Flash Chip Id"
#define D_FLASH_CHIP_SIZE "Flash Size"
#define D_FREE_PROGRAM_SPACE "Espaço Livre Programa"

#define D_UPGRADE_BY_WEBSERVER "Atualizar pelo servidor WEB"
#define D_OTA_URL "OTA Url"
#define D_START_UPGRADE "Iniciar atualização"
#define D_UPGRADE_BY_FILE_UPLOAD "Atualização por envio de ficheiro"
#define D_UPLOAD_STARTED "Início do envio"
#define D_UPGRADE_STARTED "Atualização Iniciada"
#define D_UPLOAD_DONE "Atualização Finalizada"
#define D_UPLOAD_ERR_1 "Nenhum ficheiro selecionado"
#define D_UPLOAD_ERR_2 "Nao existe espaço disponível"
#define D_UPLOAD_ERR_3 "Byte mágico não é 0xE9"
#define D_UPLOAD_ERR_4 "O tamanho do programa e maior do que o tamanho real da flash"
#define D_UPLOAD_ERR_5 "Envio buffer miscompare"
#define D_UPLOAD_ERR_6 "Falha no envio. Hablitar logging 3"
#define D_UPLOAD_ERR_7 "Envio cancelado"
#define D_UPLOAD_ERR_8 "Ficheiro inválido"
#define D_UPLOAD_ERR_9 "Ficheiro demasiado grande"
#define D_UPLOAD_ERROR_CODE "Código de erro do envio"

#define D_ENTER_COMMAND "Inserir comando"
#define D_ENABLE_WEBLOG_FOR_RESPONSE "Habilitar weblog 2 se resposta esperada"
#define D_NEED_USER_AND_PASSWORD "Necessário user=<nome utilizador>&password=<palavra chave>"

// xdrv_00_mqtt.ino
#define D_FINGERPRINT "Verifique a impressão digital TLS..."
#define D_TLS_CONNECT_FAILED_TO "TLS não conseguiu ligar"
#define D_RETRY_IN "Tentativa em"
#define D_VERIFIED "Verificado impressão digital "
#define D_INSECURE "Ligação insegura devido à impressão digital inválida"
#define D_CONNECT_FAILED_TO "A ligação falhou ao"

// xdrv_wemohue.ino
#define D_MULTICAST_DISABLED "Multicast desabilitado"
#define D_MULTICAST_REJOINED "Multicast (re)ingressou"
#define D_MULTICAST_JOIN_FAILED "Multicast falha no reingresso"
#define D_FAILED_TO_SEND_RESPONSE "Falha no envio de reposta"

#define D_WEMO "WeMo"
#define D_WEMO_BASIC_EVENT "WeMo evento básico"
#define D_WEMO_EVENT_SERVICE "WeMo evento de serviço"
#define D_WEMO_META_SERVICE "WeMo serviço meta"
#define D_WEMO_SETUP "WeMo configuração"
#define D_RESPONSE_SENT "Rsposta enviada"

#define D_HUE "Hue"
#define D_HUE_BRIDGE_SETUP "Hue setup"
#define D_HUE_API_NOT_IMPLEMENTED "Hue API nao implementada"
#define D_HUE_API "Hue API"
#define D_HUE_POST_ARGS "Hue POST args"
#define D_3_RESPONSE_PACKETS_SENT "3 pacotes de resposta enviados"

// xdrv_05_domoticz.ino
#define D_DOMOTICZ_PARAMETERS "Parametros Domoticz"
#define D_DOMOTICZ_IDX "Idx"
#define D_DOMOTICZ_KEY_IDX "Chave idx"
#define D_DOMOTICZ_SWITCH_IDX "Interruptor idx"
#define D_DOMOTICZ_SENSOR_IDX "Sensor idx"
  #define D_DOMOTICZ_TEMP "Temp"
  #define D_DOMOTICZ_TEMP_HUM "Temp,Hum"
  #define D_DOMOTICZ_TEMP_HUM_BARO "Temp,Hum,Baro"
  #define D_DOMOTICZ_POWER_ENERGY "Potência,Energia"
  #define D_DOMOTICZ_ILLUMINANCE "Luminâcia"
  #define D_DOMOTICZ_COUNT "Contagem/PM1"
  #define D_DOMOTICZ_VOLTAGE "Voltagem/PM2.5"
  #define D_DOMOTICZ_CURRENT "Corrente/PM10"
  #define D_DOMOTICZ_AIRQUALITY "Qualidade do Ar"
#define D_DOMOTICZ_UPDATE_TIMER "Tempo de atualização"

// xdrv_09_timers.ino
#define D_CONFIGURE_TIMER "Configure Timer"
#define D_TIMER_PARAMETERS "Timer parameters"
#define D_TIMER_ARM "Arm"
#define D_TIMER_TIME "Time"
#define D_TIMER_DAYS "Days"
#define D_TIMER_REPEAT "Repeat"
#define D_TIMER_OUTPUT "Output"
#define D_TIMER_ACTION "Action"

// xdrv_10_knx.ino
#define D_CONFIGURE_KNX "Configure KNX"
#define D_KNX_PARAMETERS "KNX Parameters"
#define D_KNX_GENERAL_CONFIG "General"
#define D_KNX_PHYSICAL_ADDRESS "Physical Address"
#define D_KNX_PHYSICAL_ADDRESS_NOTE "( Must be unique on the KNX network )"
#define D_KNX_ENABLE "Enable KNX"
#define D_KNX_GROUP_ADDRESS_TO_WRITE "Data to Send to Group Addresses"
#define D_ADD "Add"
#define D_DELETE "Delete"
#define D_REPLY "Reply"
#define D_KNX_GROUP_ADDRESS_TO_READ "Group Addresses to Receive Data from"
#define D_LOG_KNX "KNX: "
#define D_RECEIVED_FROM "Received from"
#define D_KNX_COMMAND_WRITE "Write"
#define D_KNX_COMMAND_READ "Read"
#define D_KNX_COMMAND_OTHER "Other"
#define D_SENT_TO "sent to"
#define D_KNX_WARNING "The group address ( 0 / 0 / 0 ) is reserved and can not be used."

// xdrv_03_energy.ino
#define D_ENERGY_TODAY "Consumo energético de hoje"
#define D_ENERGY_YESTERDAY "Consumo energético de ontem"
#define D_ENERGY_TOTAL "Consumo total de energial"

// xsns_05_ds18b20.ino
#define D_SENSOR_BUSY "Sensor ocupado"
#define D_SENSOR_CRC_ERROR "Erro Sensor CRC"
#define D_SENSORS_FOUND "Sensors encontrados"

// xsns_06_dht.ino
#define D_TIMEOUT_WAITING_FOR "Fim do tempo de espera"
#define D_START_SIGNAL_LOW "Sinal de início baixo"
#define D_START_SIGNAL_HIGH "Sinal de início elevado"
#define D_PULSE "pulse"
#define D_CHECKSUM_FAILURE "Falha Checksum"

// xsns_07_sht1x.ino
#define D_SENSOR_DID_NOT_ACK_COMMAND "Sensor não aceitou o comando ACK"
#define D_SHT1X_FOUND "SHT1X encontrado"

// xsns_18_pms5003.ino
#define D_STANDARD_CONCENTRATION "CF-1 PM"     // Standard Particle CF-1 Particle Matter
#define D_ENVIRONMENTAL_CONCENTRATION "PM"     // Environmetal Particle Matter
#define D_PARTICALS_BEYOND "Partículas"

// sonoff_template.h
#define D_SENSOR_NONE     "Nenhum"
#define D_SENSOR_DHT11    "DHT11"
#define D_SENSOR_AM2301   "AM2301"
#define D_SENSOR_SI7021   "SI7021"
#define D_SENSOR_DS18X20  "DS18x20"
#define D_SENSOR_I2C_SCL  "I2C SCL"
#define D_SENSOR_I2C_SDA  "I2C SDA"
#define D_SENSOR_WS2812   "WS2812"
#define D_SENSOR_IRSEND   "IRsend"
#define D_SENSOR_SWITCH   "Interruptor"   // Suffix "1"
#define D_SENSOR_BUTTON   "Botão"   // Suffix "1"
#define D_SENSOR_RELAY    "Relé"    // Suffix "1i"
#define D_SENSOR_LED      "Led"      // Suffix "1i"
#define D_SENSOR_PWM      "PWM"      // Suffix "1"
#define D_SENSOR_COUNTER  "Contador"  // Suffix "1"
#define D_SENSOR_IRRECV   "IRrecv"
#define D_SENSOR_MHZ_RX   "MHZ Rx"
#define D_SENSOR_MHZ_TX   "MHZ Tx"
#define D_SENSOR_PZEM_RX  "PZEM Rx"
#define D_SENSOR_PZEM_TX  "PZEM Tx"
#define D_SENSOR_SAIR_RX  "SAir Rx"
#define D_SENSOR_SAIR_TX  "SAir Tx"
#define D_SENSOR_SPI_CS   "SPI CS"
#define D_SENSOR_SPI_DC   "SPI DC"
#define D_SENSOR_BACKLIGHT "Luz negra"
#define D_SENSOR_PMS5003  "PMS5003"
#define D_SENSOR_SDS0X1   "SDS0X1"
#define D_SENSOR_SBR_RX   "SerBr Rx"
#define D_SENSOR_SBR_TX   "SerBr Tx"
#define D_SENSOR_SR04_TRIG "SR04 Tri"
#define D_SENSOR_SR04_ECHO "SR04 Ech"

// Units
#define D_UNIT_AMPERE "A"
#define D_UNIT_CENTIMETER "cm"
#define D_UNIT_HOUR "Hr"
#define D_UNIT_KILOOHM "kOhm"
#define D_UNIT_KILOWATTHOUR "kWh"
#define D_UNIT_LUX "lx"
#define D_UNIT_MICROGRAM_PER_CUBIC_METER "ug/m3"
#define D_UNIT_MICROMETER "um"
#define D_UNIT_MICROSECOND "us"
#define D_UNIT_MILLIAMPERE "mA"
#define D_UNIT_MILLISECOND "ms"
#define D_UNIT_MINUTE "Min"
#define D_UNIT_PARTS_PER_BILLION "ppb"
#define D_UNIT_PARTS_PER_DECILITER "ppd"
#define D_UNIT_PARTS_PER_MILLION "ppm"
#define D_UNIT_PRESSURE "hPa"
#define D_UNIT_SECOND "sec"
#define D_UNIT_SECTORS "sectors"
#define D_UNIT_VOLT "V"
#define D_UNIT_WATT "W"
#define D_UNIT_WATTHOUR "Wh"

// Log message prefix
#define D_LOG_APPLICATION "APP: "  // Application
#define D_LOG_BRIDGE "BRG: "       // Bridge
#define D_LOG_CONFIG "CFG: "       // Settings
#define D_LOG_COMMAND "CMD: "      // Command
#define D_LOG_DEBUG "DBG: "        // Debug
#define D_LOG_DHT "DHT: "          // DHT sensor
#define D_LOG_DOMOTICZ "DOM: "     // Domoticz
#define D_LOG_DSB "DSB: "          // DS18xB20 sensor
#define D_LOG_HTTP "HTP: "         // HTTP webserver
#define D_LOG_I2C "I2C: "          // I2C
#define D_LOG_IRR "IRR: "          // Infra Red Received
#define D_LOG_LOG "LOG: "          // Logging
#define D_LOG_MODULE "MOD: "       // Module
#define D_LOG_MDNS "DNS: "         // mDNS
#define D_LOG_MQTT "MQT: "         // MQTT
#define D_LOG_OTHER "OTH: "        // Other
#define D_LOG_RESULT "RSL: "       // Result
#define D_LOG_RFR "RFR: "          // RF Received
#define D_LOG_SERIAL "SER: "       // Serial
#define D_LOG_SHT1 "SHT: "         // SHT1x sensor
#define D_LOG_UPLOAD "UPL: "       // Upload
#define D_LOG_UPNP "UPP: "         // UPnP
#define D_LOG_WIFI "WIF: "         // Wifi

#endif  // _LANGUAGE_PT_PT_H_
