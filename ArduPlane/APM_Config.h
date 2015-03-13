// -*- tab-width: 4; Mode: C++; c-basic-offset: 4; indent-tabs-mode: nil -*-

// This file is just a placeholder for your configuration file.  If
// you wish to change any of the setup parameters from their default
// values, place the appropriate #define statements here.

// If you used to define your CONFIG_APM_HARDWARE setting here, it is no
// longer valid! You should switch to using CONFIG_HAL_BOARD via the HAL_BOARD
// flag in your local config.mk instead.

// The following are the recommended settings for Xplane
// simulation. Remove the leading "/* and trailing "*/" to enable:

//#define HIL_MODE            HIL_MODE_DISABLED

/*
 *  // HIL_MODE SELECTION
 *  //
 *  // Mavlink supports
 *  // 2. HIL_MODE_SENSORS: full sensor simulation
 *
 */

//#define HIL_MODE            HIL_MODE_ATTITUDE
//#define HIL_MODE				HIL_MODE_SENSORS
//#define HIL_PORT				0
//#define HIL_PROTOCOL			HIL_PROTOCOL_XPLANE

//Select Debug Terminal as the GCS to use:
//#define GCS_PROTOCOL        GCS_PROTOCOL_DEBUGTERMINAL
//#define MAV_SYSTEM_ID		8

//Use the telemetry port for the Debug Terminal interface:
//(selecting 0 here would cause the USB serial port to be used instead)
//#define GCS_PORT            3

//Set the baud rate for the telemetry port to match your XBee setup:
//#define SERIAL3_BAUD        115200

