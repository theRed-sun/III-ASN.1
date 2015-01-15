/*
 * h245test.cpp
 *
 * Copyright (c) 2001 Institute for Information Industry, Taiwan, Republic of China
 * (http://www.iii.org.tw/iiia/ewelcome.htm)
 *
 * Permission to copy, use, modify, sell and distribute this software
 * is granted provided this copyright notice appears in all copies.
 * This software is provided "as is" without express or implied
 * warranty, and with no claim as to its suitability for any purpose.
 *
 */
#ifdef HAVE_CONFIG_H
#include <config.h>
#endif

#include "multimedia_system_control.h"
#include "asn1test.h"

void H245Test()
{
    const char tm[]= "\x02\x70\x01\x06\x00\x08\x81\x75"
                     "\x00\x03\x80\x0d\x00\x00\x3c\x00"
                     "\x01\x00\x00\x01\x00\x00\x01\x00"
                     "\x00\x0e\x80\x7f\xff\x04\xb5\x42"
                     "\x80\x80\x01\x01\x80\x00\x0e\x48"
                     "\x30\x60\x01\x00\x80\x0c\x96\xa8"
                     "\x80\x00\x00\x20\x20\xb5\x00\x53"
                     "\x4c\x48\x02\x00\x00\x00\x00\x00"
                     "\xf4\x01\x00\x00\xf4\x01\x01\x00"
                     "\x04\x00\x00\x00\x00\x00\x02\x00"
                     "\x01\x00\x40\x1f\x00\x00\x00\x10"
                     "\x00\x00\x00\x01\x04\x00\x20\x00"
                     "\xf4\x01\x07\x00\x00\x01\x00\x00"
                     "\x00\x02\x00\xff\x00\x00\x00\x00"
                     "\xc0\x00\x40\x00\xf0\x00\x00\x00"
                     "\xcc\x01\x30\xff\x88\x01\x18\xff"
                     "\x00\x00\x80\x00\x01\x20\x40\xb3"
                     "\x80\x00\x02\x20\xc0\xb3\x80\x00"
                     "\x03\x20\x20\xb5\x00\x53\x4c\x28"
                     "\x02\x00\x00\x00\x00\x00\xa0\x00"
                     "\x00\x00\xa0\x00\x04\x00\x10\x00"
                     "\x00\x00\x00\x00\x70\x00\x01\x00"
                     "\x40\x1f\x00\x00\x58\x02\x00\x00"
                     "\x0c\x00\x10\x00\x00\x00\x00\x00"
                     "\x80\x00\x04\x20\x20\xb5\x00\x53"
                     "\x4c\x28\x02\x00\x00\x00\x00\x00"
                     "\xa0\x00\x00\x00\xa0\x00\x04\x00"
                     "\x10\x00\x00\x00\x00\x00\x71\x00"
                     "\x01\x00\x40\x1f\x00\x00\x3a\x07"
                     "\x00\x00\x25\x00\x10\x00\x00\x00"
                     "\x00\x00\x80\x00\x05\x20\x20\xb5"
                     "\x00\x53\x4c\x28\x02\x00\x00\x00"
                     "\x00\x00\x80\x00\x00\x00\x80\x00"
                     "\x05\x00\x14\x00\x00\x00\x00\x00"
                     "\x72\x00\x01\x00\x40\x1f\x00\x00"
                     "\x08\x09\x00\x00\x25\x00\x10\x00"
                     "\x00\x00\x00\x00\x80\x00\x06\x20"
                     "\x20\xb5\x00\x53\x4c\x28\x02\x00"
                     "\x00\x00\x00\x00\x80\x00\x00\x00"
                     "\x80\x00\x05\x00\x14\x00\x00\x00"
                     "\x00\x00\x73\x00\x01\x00\x40\x1f"
                     "\x00\x00\x7f\x0a\x00\x00\x2b\x00"
                     "\x10\x00\x00\x00\x00\x00\x80\x00"
                     "\x07\x22\x00\x0b\x40\x00\x09\x09"
                     "\xa0\x01\x20\x39\x0c\x00\x0a\x09"
                     "\x90\x01\x20\x39\x0c\x00\x0b\x09"
                     "\x88\x01\x20\x39\x0c\x00\x0c\x08"
                     "\xa2\x20\x39\x40\x00\x0d\x08\x92"
                     "\x20\x39\x00\x04\x80\x06\x02\x07"
                     "\x00\x07\x00\x06\x00\x04\x00\x05"
                     "\x00\x02\x00\x01\x00\x00\x00\x03"
                     "\x00\x00\x0a\x00\x00\x0e\x80\x07"
                     "\x02\x07\x00\x07\x00\x06\x00\x04"
                     "\x00\x05\x00\x02\x00\x01\x00\x00"
                     "\x00\x03\x00\x00\x09\x00\x00\x0e"
                     "\x80\x08\x02\x07\x00\x07\x00\x06"
                     "\x00\x04\x00\x05\x00\x02\x00\x01"
                     "\x00\x00\x00\x03\x00\x00\x0c\x00"
                     "\x00\x0e\x80\x09\x02\x07\x00\x07"
                     "\x00\x06\x00\x04\x00\x05\x00\x02"
                     "\x00\x01\x00\x00\x00\x03\x00\x00"
                     "\x0b\x00\x00\x0e\x80\x0a\x02\x07"
                     "\x00\x07\x00\x06\x00\x04\x00\x05"
                     "\x00\x02\x00\x01\x00\x00\x00\x03"
                     "\x00\x00\x0d\x00\x00\x0e";

    MULTIMEDIA_SYSTEM_CONTROL::MultimediaSystemControlMessage msg;

    PERDecoder decoder(tm, sizeof(tm));
  //!! The GCC 2.95.3-5 in Cygwin has a mysterious bug. It doesn't work if
  // using decoder(tm, tm+sizeof(tm)-1) instead.

    if (msg.accept(decoder))
        printf("MultimediaSystemControlMessage decoder Sucess!\n");
    else
    {
        printf("MultimediaSystemControlMessage decoder Error!");
        getchar();
    }
}
