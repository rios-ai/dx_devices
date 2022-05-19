#ifndef __RIOS_DEVICE_IFC_H__
#define __RIOS_DEVICE_IFC_H__


#include <dx_rios_utils/generic.h>


namespace rios { namespace interfaces { 


/**
 * @brief RIOS device interface.
 * 
 */
class device
{

public:

    DECLARE_SMART_PTR(device)

public:

    /**
     * @brief get device id.
     * 
     * @return device id as a string.
     * 
     */
    virtual std::string getId() const = 0;
    
    /**
     * @brief read data from the sensors and synchronize: this method may be RT safe.
     * 
     * @return true if data have been successfully synchronized.
     * @return false if data haven't been synchronized.
     * 
     */
    virtual bool sense() = 0;
    
    /**
     * @brief transmit data to update on the hardware: this method may be RT safe.
     * 
     * @return true if data have successfully been transmitted to the hardware.
     * @return false if data haven't been transmitted.
     * 
     */
    virtual bool synchronize() = 0;

};


} /* interfaces */ } /* rios */


#endif /* __RIOS_DEVICE_IFC_H__ */
