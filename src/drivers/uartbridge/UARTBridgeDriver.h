#ifndef ESP_PLATFORM

#ifndef _UARTBRIDGEDRIVER_H_
#define _UARTBRIDGEDRIVER_H_

#include "drivers/gpdriver.h"

class UARTBridgeDriver : public GPDriver 
{
    public:
        virtual void initialize();
        virtual void process(int idx, Gamepad * gamepad, uint8_t * outBuffer);
        virtual uint16_t get_report(uint8_t report_id, hid_report_type_t report_type, uint8_t *buffer, uint16_t reqlen);
        virtual void set_report(uint8_t report_id, hid_report_type_t report_type, uint8_t const *buffer, uint16_t bufsize);
        virtual bool vendor_control_xfer_cb(uint8_t rhport, uint8_t stage, tusb_control_request_t const *request);
        virtual const uint16_t * get_descriptor_string_cb(uint8_t index, uint16_t langid);
        virtual const uint8_t * get_descriptor_device_cb();
        virtual const uint8_t * get_hid_descriptor_report_cb(uint8_t itf);
        virtual const uint8_t * get_descriptor_configuration_cb(uint8_t index);
        virtual const uint8_t * get_descriptor_device_qualifier_cb();
        virtual void update_rumble(int idx, Gamepad * gamepad);
    private:
};

#endif // _UARTBRIDGEDRIVER_H_

#endif // ESP_PLATFORM