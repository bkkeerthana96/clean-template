#include <gtest/gtest.h>
#include "VehicleParams.h"


TEST(Translate_Veh_Params, when_a_parameter_received_from_a_vehicle_should_update_aginst_vechile_id) 
{ 
 telematics Veh_received_param = {231, motor_temp, 30};
 inventory Veh_params = Translate_Veh_info(Veh_received_param);
 ASSERT_EQ(Veh_params.motor_temp, 30); 
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
