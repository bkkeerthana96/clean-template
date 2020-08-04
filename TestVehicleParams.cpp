#include <gtest/gtest.h>
#include "VehicleParams.h"


TEST(Translate_Veh_Params, when_a_temp_received_from_a_vehicle_should_update_aginst_vechile_id) 
{ 
 telematics Veh_received_param = {231, motor_temp, 30};
 inventory Veh_params = Translate_Veh_info(&Veh_received_param);
 ASSERT_EQ(Veh_params.motor_temp, 30); 
}
TEST(Translate_Veh_Params, when_a_battery_received_from_a_vehicle_should_update_aginst_vechile_id) 
{ 
 telematics Veh_received_param = {231, battery_temp, 70};
 inventory Veh_params = Translate_Veh_info(&Veh_received_param);
 ASSERT_EQ(Veh_params.battery_temp, 70); 
}
TEST(Translate_Veh_Params, when_a_battery_pc_received_from_a_vehicle_should_update_aginst_vechile_id) 
{ 
 telematics Veh_received_param = {231, battery_pc, 50};
 inventory Veh_params = Translate_Veh_info(&Veh_received_param);
 ASSERT_EQ(Veh_params.battery_pc, 50); 
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
