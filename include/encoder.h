#ifndef __RIOS_ENCODER_IFC_H__
#define __RIOS_ENCODER_IFC_H__


#include "device.h"


namespace rios { namespace interfaces {


class encoder : public device
{

public:

    DECLARE_SMART_PTR(encoder)

public:

    /**
     * @brief get the position of the encoder (rad).
     * 
     * @return double last position read from the encoder.
     * 
     */
    virtual double getPosition() const = 0;

    /**
     * @brief get the counts of the encoder: this number is proportional to the encoder's position.
     * 
     * @return last counts read from the encoder.
     * 
     */
    virtual uint64_t getCounts() const = 0;
    
    /**
     * @brief get the type of encoder.
     * 
     * @return true if the encoder is incremental.
     * @return false if the encoder is absolute.
     * 
     */
    virtual bool isIncremental() const = 0;

};


} /* interfaces */ } /* rios */


#endif /* __RIOS_DEVICE_IFC_H__ */
