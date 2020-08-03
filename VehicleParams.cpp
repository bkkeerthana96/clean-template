#include "VehicleParams.h"
 
 inventory Translate_Veh_info(telematics* Veh_received_param)
{
      inventory store_params;
 
      store_params.vehicle_id = Veh_received_param->vehicle_id;
      
      switch(Veh_received_param->type)
      {
        case motor_temp:
          store_params.motor_temp = Veh_received_param->measurement;
          break;
        case battery_pc:
          store_params.motor_temp = Veh_received_param->measurement;
          break;
        case battery_temp:
          store_params.motor_temp = Veh_received_param->measurement;
          break;
       default:
          break;
      }
      
      return store_params;
 }
