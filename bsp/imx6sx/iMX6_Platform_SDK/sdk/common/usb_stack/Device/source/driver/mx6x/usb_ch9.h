/*
 * Copyright (C) 2009-2010, Freescale Semiconductor, Inc. All Rights Reserved
 * THIS SOURCE CODE IS CONFIDENTIAL AND PROPRIETARY AND MAY NOT
 * BE USED OR DISTRIBUTED WITHOUT THE WRITTEN PERMISSION OF
 * Freescale Semiconductor, Inc.
*/  
    
#ifndef USB_CH9_H_
#define USB_CH9_H_
    
/*
typedef unsigned char unsigned char;
typedef unsigned short unsigned short;
typedef unsigned int uint32_t;
typedef char int8_t;
typedef short int16_t;
typedef int int32_t;
*/ 
/* Standard Request Code */ 
#define GET_STATUS         0x0
#define CLEAR_FEATURE      0x1
#define SET_FEATURE        0x3
#define SET_ADDRESS        0x5
#define GET_DESCRIPTOR     0x6
#define SET_DESCRIPTOR     0x7
#define GET_CONFIGURATION  0x8
#define SET_CONFIGURATION  0x9
#define GET_INTERFACE      0xA
#define SET_INTERFACE      0xB
#define SYNCH_FRAME        0xC
    
/* USB Descriptor Type */ 
#define DEVICE_DESCRIPTOR             0x1
#define CONFIG_DESCRIPTOR             0x2
#define STRING_DESCRIPTOR             0x3
#define INTERFACE_DESCRIPTOR          0x4
#define ENDPOINT_DESCRIPTOR           0x5
#define DEVICE_QUALIFIER_DESCRIPTOR   0x6
#define OTHER_SPEED_CONFIG_DESCRIPTOR 0x7
#define INTERFACE_POWER_DESCRIPTOR    0x8
    
/* USB device state */ 
#define USB_DEVICE_POWERED_STATE     0x00
#define USB_DEVICE_DEFAULT_STATE     0x01
#define USB_DEVICE_ADDRESSED_STATE   0x02
#define USB_DEVICE_CONFIGURED_STATE  0x03
    
/* USB Device Status*/ 
#define USB_DEVICE_STATUS_SELF_POWERED  (1<<0)
#define USB_DEVICE_STATUS_REMOTE_WAKEUP (1<<1)
/* USB standard device request*/ 
typedef struct usb_standrd_device_request 
    
    
    
    
    


/* USB device descriptor */ 
typedef struct usb_device_descriptor 
    
    
    
    
    
    
    
    
    
    
    
    
    
    


/* USB Configuration descriptor*/ 
typedef struct usb_config_descriptor 
    
    
    
                                       length of all descriptors returned for this configuration */
    
    
    
    
    
                                   when the device is fully operational. Expressed in 2mA units */


#define USB_CONFIG_DESC_ATTRIBUTE_SELF_POWERED    (1<<6)
#define USB_CONFIG_DESC_ATTRIBUTE_REMOTE_WAKEUP   (1<<5)
    
/* USB Interface descriptor */ 
typedef struct usb_interface_descriptor 
    
    
    
    
    
    
    
    
    


//HID class interface descriptor definitions
#define CLASS_CODE_HID                     0x03
#define SUBCLASS_CODE_HID_NOSUBCLASS       0x00
#define SUBCLASS_CODE_HID_BOOT_INTERFACE   0x01
#define PROTOCOL_CODE_HID_NONE             0x00
#define PROTOCOL_CODE_HID_KEYBOARD         0x01
#define PROTOCOL_CODE_HID_MOUSE            0x02
//MSC class interface descriptor definitions
#define CLASS_CODE_MSC                     0x08
#define SUBCLASS_CODE_MSC_RBC              0x01   /*Reduced Block Commandds, typically for a flash device*/
#define SUBCLASS_CODE_MSC_SFF8020          0x02   /*a CD/DVD device uses SFF-8020i or MMC-2 command blocks*/
#define SUBCLASS_CODE_MSC_QIC              0x03   /*a tape device uses QIC-157 command blocks*/
#define SUBCLASS_CODE_MSC_UFI              0x04   /*a floppy disk drive device*/
#define SUBCLASS_CODE_MSC_SFF8070          0x05   /*a floppy disk drive device*/
#define SUBCLASS_CODE_MSC_SCSI             0x06   /*SCSI transparent command set, popular in msc*/
#define PROTOCOL_CODE_MSC_CBI00            0x00   /*for floppy device - with command completion interrupt*/
#define PROTOCOL_CODE_MSC_CBI01            0x01   /*for floppy device - with no command completion interrupt*/
#define PROTOCOL_CODE_MSC_BOT              0x50   /*Bulk-Only Transport, popular in msc*/
//HUB class interface descriptor definitions
#define CLASS_CODE_HUB                     0x09
#define SUBCLASS_CODE_HUB                  0x00
#define PROTOCOL_CODE_HUB_NON_HIGHSPEED    0x00   /*for full/low speed hub*/
#define PROTOCOL_CODE_HUB_MULTI_TT         0x02   /*multiple TT*/
#define PROTOCOL_CODE_USB_SINGLE_TT        0x01   /*single TT*/
    
/* USB Endpoint descriptor */ 
typedef struct usb_endpoint_descriptor 
    
    
    
    
    
                                       when this configuration is selected */
    


// Endpoint direction
#define EP_OUT        (0<<7)
#define EP_IN         (1<<7)
// Endpoint attributes
#define EP_TRANSFER_TYPE_CONTROL   (0x0<<0)
#define EP_TRANSFER_TYPE_ISOCHRONOUS   (0x1<<0)
#define EP_TRANSFER_TYPE_BULK          (0x2<<0)
#define EP_TRANSFER_TYPE_INTERRUPT     (0x3<<0)
    
#define EP_SYNC_TYPE_NOSYNC            (0x0<<2)
#define EP_SYNC_TYPE_ASYNC             (0x1<<2)
#define EP_SYNC_TYPE_ADAPTIVE          (0x2<<2)
#define EP_SYNC_TYPE_SYNC              (0x3<<2)
    
#define EP_USAGE_TYPE_DATA_ENDPOINT        (0x0<<4)
#define EP_USAGE_TYPE_FEEDBACK_ENDPOINT    (0x1<<4)
#define EP_USAGE_TYPE_IMPLICIT_ENDPOINT    (0x2<<4)
// Endpoint additional transaction opportunities per microframe for HS isochronous and interrupt endpoints
#define ONE_TRANSACTION_PER_MICROFRAME     (0x0<<11)
#define TWO_TRANSACTION_PER_MICROFRAME     (0x0<<11)
#define THREE_TRANSACTION_PER_MICROFRAME   (0x0<<11)
    
/* USB String descriptor */ 
typedef struct usb_string_descriptor 
    
    
    


#endif  /*USB_CH9_H_*/