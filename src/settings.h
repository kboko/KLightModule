

#define MAX_UNITS 3

struct Unit{
	char unit_name [255];
	int gpio_movement;
	int gpio_led;
	int gpio_ilum;
	int gpio_switch;
	int gpio_humidity;
	// number - if it is dark than this level
	// The module will start the LEDs
	int ilum_threshold;
	// Seconds to stay on
	int on_time;		//sec
	// Dimm time to on
	int time_to_on;		//sec
	// Dimm time to off
	int time_to_off;	//sec
	// Max Brightness
	int max_brightness;	//0-255
	bool movement_alarm;
	
	// Oper Variables
	int brightness;		// 0-255
	int iluinance;
	struct k_queue *events;		
};

struct Wlan{
	char name [255];
	struct UnitCfg units[MAX_UNITS];
	struct k_queue *events;
};
struct Mqtt{
	char name [255];
	struct UnitCfg units[MAX_UNITS];
	struct k_queue *events;
};

struct Http{
	char name [255];
	struct UnitCfg units[MAX_UNITS];
	struct k_queue *events;
};

struct InternalData{
	char name [255];
	struct Unit units[MAX_UNITS];
	struct Mqtt mqtt;
	struct Wlan wlan;
	struct Http http;
	
};