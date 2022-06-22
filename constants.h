#define ALERT_IN_GERMEN 0 

#if ALERT_IN_GERMEN == 0
//Alert - messages - english 
#define TEMP_OUT_OF_RANGE_ENG "Temperature out of range!"
#define STATE_OF_CHARGE_OUT_OF_RANGE_ENG "State of Charge out of range!"
#define CHARGE_RATE_OUT_OF_RANGE_ENG "Charge Rate out of range!"
#define LOWER_ABNORMAL_MESSAGE  "The input value is LOWER than the accepted limit"
#define HIGHER_ABNORMAL_MESSAGE "The input value is HIGHER than the accepted limit"
#elif ALERT_IN_GERMEN == 1
//Alert - messages - germen 
#define TEMP_OUT_OF_RANGE_ENG "Temperatur außerhalb des Bereichs!!"
#define STATE_OF_CHARGE_OUT_OF_RANGE_ENG "Ladezustand außerhalb des Bereichs!"
#define CHARGE_RATE_OUT_OF_RANGE_ENG "Laderate außerhalb des Bereichs!"
#define LOWER_ABNORMAL_MESSAGE  "Der Eingabewert ist LOWER als der akzeptierte Grenzwert"
#define HIGHER_ABNORMAL_MESSAGE "Der Eingabewert ist HÖHER als der akzeptierte Grenzwert"
#endif


//warning message 
#define DISCHARGE_WARN "Approaching discharge"
#define CHARGE_PEAK_WARN "Approaching charge-peak"
#define TEMPERATURE_WARN "Approaching Low temperature"
#define TEMPERATURE_PEAK_WARN "Approaching temperature-peak"
#define CHARGE_RATE_WARN "Approaching Low charge rate"
#define CHARGE_RATE_PEAK_WARN "Approaching peak-charge-rate"


#define LOW_TEMPERATURE 0
#define HIGH_TEMPERATURE 45
#define LOW_SOC 20
#define HIGH_SOC 80
#define CHARGE_RATE 0.8
