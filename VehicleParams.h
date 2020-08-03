enum measure
{
  motor_temp,
  battery_pc,
  battery_temp
};

struct telematics
{
  int vehicle_id;
  measure type;
  float measurement;
};

typedef struct inventory
{
  int vehicle_id;
  float motor_temp;
  float battery_pc;
  float battery_temp;
 };
 
 inventory Translate_Veh_info(telematics* Veh_received_param);
