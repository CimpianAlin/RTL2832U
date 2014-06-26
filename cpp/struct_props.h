/*
 * This file is protected by Copyright. Please refer to the COPYRIGHT file
 * distributed with this source distribution.
 *
 * This file is part of RTL2832U Device.
 *
 * RTL2832U Device is free software: you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the
 * Free Software Foundation, either version 3 of the License, or (at your
 * option) any later version.
 *
 * RTL2832U Device is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
 * for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see http://www.gnu.org/licenses/.
 */

#ifndef STRUCTPROPS_H
#define STRUCTPROPS_H

/*******************************************************************************************

    AUTO-GENERATED CODE. DO NOT MODIFY

*******************************************************************************************/

#include <ossie/CorbaUtils.h>

#include <frontend/fe_tuner_struct_props.h>

struct target_device_struct {
    target_device_struct ()
    {
        name = "";
        serial = "";
        index = -1;
        vendor = "";
        product = "";
    };

    static std::string getId() {
        return std::string("target_device");
    };

    std::string name;
    std::string serial;
    short index;
    std::string vendor;
    std::string product;
};

inline bool operator>>= (const CORBA::Any& a, target_device_struct& s) {
    CF::Properties* temp;
    if (!(a >>= temp)) return false;
    CF::Properties& props = *temp;
    for (unsigned int idx = 0; idx < props.length(); idx++) {
        if (!strcmp("target::name", props[idx].id)) {
            if (!(props[idx].value >>= s.name)) return false;
        }
        else if (!strcmp("target::serial", props[idx].id)) {
            if (!(props[idx].value >>= s.serial)) return false;
        }
        else if (!strcmp("target::index", props[idx].id)) {
            if (!(props[idx].value >>= s.index)) return false;
        }
        else if (!strcmp("target::vendor", props[idx].id)) {
            if (!(props[idx].value >>= s.vendor)) return false;
        }
        else if (!strcmp("target::product", props[idx].id)) {
            if (!(props[idx].value >>= s.product)) return false;
        }
    }
    return true;
};

inline void operator<<= (CORBA::Any& a, const target_device_struct& s) {
    CF::Properties props;
    props.length(5);
    props[0].id = CORBA::string_dup("target::name");
    props[0].value <<= s.name;
    props[1].id = CORBA::string_dup("target::serial");
    props[1].value <<= s.serial;
    props[2].id = CORBA::string_dup("target::index");
    props[2].value <<= s.index;
    props[3].id = CORBA::string_dup("target::vendor");
    props[3].value <<= s.vendor;
    props[4].id = CORBA::string_dup("target::product");
    props[4].value <<= s.product;
    a <<= props;
};

inline bool operator== (const target_device_struct& s1, const target_device_struct& s2) {
    if (s1.name!=s2.name)
        return false;
    if (s1.serial!=s2.serial)
        return false;
    if (s1.index!=s2.index)
        return false;
    if (s1.vendor!=s2.vendor)
        return false;
    if (s1.product!=s2.product)
        return false;
    return true;
};

inline bool operator!= (const target_device_struct& s1, const target_device_struct& s2) {
    return !(s1==s2);
};

struct current_device_struct {
    current_device_struct ()
    {
    };

    static std::string getId() {
        return std::string("current_device");
    };

    std::string name;
    std::string vendor;
    std::string product;
    std::string serial;
    unsigned short index;
};

inline bool operator>>= (const CORBA::Any& a, current_device_struct& s) {
    CF::Properties* temp;
    if (!(a >>= temp)) return false;
    CF::Properties& props = *temp;
    for (unsigned int idx = 0; idx < props.length(); idx++) {
        if (!strcmp("current::rtl::name", props[idx].id)) {
            if (!(props[idx].value >>= s.name)) return false;
        }
        else if (!strcmp("current::rtl::vendor", props[idx].id)) {
            if (!(props[idx].value >>= s.vendor)) return false;
        }
        else if (!strcmp("current::rtl::product", props[idx].id)) {
            if (!(props[idx].value >>= s.product)) return false;
        }
        else if (!strcmp("current::rtl::serial", props[idx].id)) {
            if (!(props[idx].value >>= s.serial)) return false;
        }
        else if (!strcmp("current::rtl::index", props[idx].id)) {
            if (!(props[idx].value >>= s.index)) return false;
        }
    }
    return true;
};

inline void operator<<= (CORBA::Any& a, const current_device_struct& s) {
    CF::Properties props;
    props.length(5);
    props[0].id = CORBA::string_dup("current::rtl::name");
    props[0].value <<= s.name;
    props[1].id = CORBA::string_dup("current::rtl::vendor");
    props[1].value <<= s.vendor;
    props[2].id = CORBA::string_dup("current::rtl::product");
    props[2].value <<= s.product;
    props[3].id = CORBA::string_dup("current::rtl::serial");
    props[3].value <<= s.serial;
    props[4].id = CORBA::string_dup("current::rtl::index");
    props[4].value <<= s.index;
    a <<= props;
};

inline bool operator== (const current_device_struct& s1, const current_device_struct& s2) {
    if (s1.name!=s2.name)
        return false;
    if (s1.vendor!=s2.vendor)
        return false;
    if (s1.product!=s2.product)
        return false;
    if (s1.serial!=s2.serial)
        return false;
    if (s1.index!=s2.index)
        return false;
    return true;
};

inline bool operator!= (const current_device_struct& s1, const current_device_struct& s2) {
    return !(s1==s2);
};

struct frontend_tuner_status_struct_struct : public frontend::default_frontend_tuner_status_struct_struct {
    frontend_tuner_status_struct_struct () : frontend::default_frontend_tuner_status_struct_struct()
    {
    };

    static std::string getId() {
        return std::string("FRONTEND::tuner_status_struct");
    };

    bool agc;
    std::string available_frequency;
    std::string available_gain;
    std::string available_sample_rate;
    bool complex;
    double gain;
    short tuner_number;
    std::string stream_id;
};

inline bool operator>>= (const CORBA::Any& a, frontend_tuner_status_struct_struct& s) {
    CF::Properties* temp;
    if (!(a >>= temp)) return false;
    CF::Properties& props = *temp;
    for (unsigned int idx = 0; idx < props.length(); idx++) {
        if (!strcmp("FRONTEND::tuner_status::agc", props[idx].id)) {
            if (!(props[idx].value >>= s.agc)) return false;
        }
        else if (!strcmp("FRONTEND::tuner_status::allocation_id_csv", props[idx].id)) {
            if (!(props[idx].value >>= s.allocation_id_csv)) return false;
        }
        else if (!strcmp("FRONTEND::tuner_status::available_frequency", props[idx].id)) {
            if (!(props[idx].value >>= s.available_frequency)) return false;
        }
        else if (!strcmp("FRONTEND::tuner_status::available_gain", props[idx].id)) {
            if (!(props[idx].value >>= s.available_gain)) return false;
        }
        else if (!strcmp("FRONTEND::tuner_status::available_sample_rate", props[idx].id)) {
            if (!(props[idx].value >>= s.available_sample_rate)) return false;
        }
        else if (!strcmp("FRONTEND::tuner_status::bandwidth", props[idx].id)) {
            if (!(props[idx].value >>= s.bandwidth)) return false;
        }
        else if (!strcmp("FRONTEND::tuner_status::center_frequency", props[idx].id)) {
            if (!(props[idx].value >>= s.center_frequency)) return false;
        }
        else if (!strcmp("FRONTEND::tuner_status::complex", props[idx].id)) {
            if (!(props[idx].value >>= s.complex)) return false;
        }
        else if (!strcmp("FRONTEND::tuner_status::enabled", props[idx].id)) {
            if (!(props[idx].value >>= s.enabled)) return false;
        }
        else if (!strcmp("FRONTEND::tuner_status::gain", props[idx].id)) {
            if (!(props[idx].value >>= s.gain)) return false;
        }
        else if (!strcmp("FRONTEND::tuner_status::group_id", props[idx].id)) {
            if (!(props[idx].value >>= s.group_id)) return false;
        }
        else if (!strcmp("FRONTEND::tuner_status::rf_flow_id", props[idx].id)) {
            if (!(props[idx].value >>= s.rf_flow_id)) return false;
        }
        else if (!strcmp("FRONTEND::tuner_status::sample_rate", props[idx].id)) {
            if (!(props[idx].value >>= s.sample_rate)) return false;
        }
        else if (!strcmp("FRONTEND::tuner_status::tuner_number", props[idx].id)) {
            if (!(props[idx].value >>= s.tuner_number)) return false;
        }
        else if (!strcmp("FRONTEND::tuner_status::tuner_type", props[idx].id)) {
            if (!(props[idx].value >>= s.tuner_type)) return false;
        }
        else if (!strcmp("FRONTEND::tuner_status::stream_id", props[idx].id)) {
            if (!(props[idx].value >>= s.stream_id)) return false;
        }
    }
    return true;
};

inline void operator<<= (CORBA::Any& a, const frontend_tuner_status_struct_struct& s) {
    CF::Properties props;
    props.length(16);
    props[0].id = CORBA::string_dup("FRONTEND::tuner_status::agc");
    props[0].value <<= s.agc;
    props[1].id = CORBA::string_dup("FRONTEND::tuner_status::allocation_id_csv");
    props[1].value <<= s.allocation_id_csv;
    props[2].id = CORBA::string_dup("FRONTEND::tuner_status::available_frequency");
    props[2].value <<= s.available_frequency;
    props[3].id = CORBA::string_dup("FRONTEND::tuner_status::available_gain");
    props[3].value <<= s.available_gain;
    props[4].id = CORBA::string_dup("FRONTEND::tuner_status::available_sample_rate");
    props[4].value <<= s.available_sample_rate;
    props[5].id = CORBA::string_dup("FRONTEND::tuner_status::bandwidth");
    props[5].value <<= s.bandwidth;
    props[6].id = CORBA::string_dup("FRONTEND::tuner_status::center_frequency");
    props[6].value <<= s.center_frequency;
    props[7].id = CORBA::string_dup("FRONTEND::tuner_status::complex");
    props[7].value <<= s.complex;
    props[8].id = CORBA::string_dup("FRONTEND::tuner_status::enabled");
    props[8].value <<= s.enabled;
    props[9].id = CORBA::string_dup("FRONTEND::tuner_status::gain");
    props[9].value <<= s.gain;
    props[10].id = CORBA::string_dup("FRONTEND::tuner_status::group_id");
    props[10].value <<= s.group_id;
    props[11].id = CORBA::string_dup("FRONTEND::tuner_status::rf_flow_id");
    props[11].value <<= s.rf_flow_id;
    props[12].id = CORBA::string_dup("FRONTEND::tuner_status::sample_rate");
    props[12].value <<= s.sample_rate;
    props[13].id = CORBA::string_dup("FRONTEND::tuner_status::tuner_number");
    props[13].value <<= s.tuner_number;
    props[14].id = CORBA::string_dup("FRONTEND::tuner_status::tuner_type");
    props[14].value <<= s.tuner_type;
    props[15].id = CORBA::string_dup("FRONTEND::tuner_status::stream_id");
    props[15].value <<= s.stream_id;
    a <<= props;
};

inline bool operator== (const frontend_tuner_status_struct_struct& s1, const frontend_tuner_status_struct_struct& s2) {
    if (s1.agc!=s2.agc)
        return false;
    if (s1.allocation_id_csv!=s2.allocation_id_csv)
        return false;
    if (s1.available_frequency!=s2.available_frequency)
        return false;
    if (s1.available_gain!=s2.available_gain)
        return false;
    if (s1.available_sample_rate!=s2.available_sample_rate)
        return false;
    if (s1.bandwidth!=s2.bandwidth)
        return false;
    if (s1.center_frequency!=s2.center_frequency)
        return false;
    if (s1.complex!=s2.complex)
        return false;
    if (s1.enabled!=s2.enabled)
        return false;
    if (s1.gain!=s2.gain)
        return false;
    if (s1.group_id!=s2.group_id)
        return false;
    if (s1.rf_flow_id!=s2.rf_flow_id)
        return false;
    if (s1.sample_rate!=s2.sample_rate)
        return false;
    if (s1.tuner_number!=s2.tuner_number)
        return false;
    if (s1.tuner_type!=s2.tuner_type)
        return false;
    if (s1.stream_id!=s2.stream_id)
        return false;
    return true;
};

inline bool operator!= (const frontend_tuner_status_struct_struct& s1, const frontend_tuner_status_struct_struct& s2) {
    return !(s1==s2);
};

struct rtl_device_struct_struct {
    rtl_device_struct_struct ()
    {
    };

    static std::string getId() {
        return std::string("available_devices::rtl_device_struct");
    };

    std::string name;
    std::string vendor;
    std::string product;
    std::string serial;
    unsigned short index;
};

inline bool operator>>= (const CORBA::Any& a, rtl_device_struct_struct& s) {
    CF::Properties* temp;
    if (!(a >>= temp)) return false;
    CF::Properties& props = *temp;
    for (unsigned int idx = 0; idx < props.length(); idx++) {
        if (!strcmp("available_devices::rtl::name", props[idx].id)) {
            if (!(props[idx].value >>= s.name)) return false;
        }
        else if (!strcmp("available_devices::rtl::vendor", props[idx].id)) {
            if (!(props[idx].value >>= s.vendor)) return false;
        }
        else if (!strcmp("available_devices::rtl::product", props[idx].id)) {
            if (!(props[idx].value >>= s.product)) return false;
        }
        else if (!strcmp("available_devices::rtl::serial", props[idx].id)) {
            if (!(props[idx].value >>= s.serial)) return false;
        }
        else if (!strcmp("available_devices::rtl::index", props[idx].id)) {
            if (!(props[idx].value >>= s.index)) return false;
        }
    }
    return true;
};

inline void operator<<= (CORBA::Any& a, const rtl_device_struct_struct& s) {
    CF::Properties props;
    props.length(5);
    props[0].id = CORBA::string_dup("available_devices::rtl::name");
    props[0].value <<= s.name;
    props[1].id = CORBA::string_dup("available_devices::rtl::vendor");
    props[1].value <<= s.vendor;
    props[2].id = CORBA::string_dup("available_devices::rtl::product");
    props[2].value <<= s.product;
    props[3].id = CORBA::string_dup("available_devices::rtl::serial");
    props[3].value <<= s.serial;
    props[4].id = CORBA::string_dup("available_devices::rtl::index");
    props[4].value <<= s.index;
    a <<= props;
};

inline bool operator== (const rtl_device_struct_struct& s1, const rtl_device_struct_struct& s2) {
    if (s1.name!=s2.name)
        return false;
    if (s1.vendor!=s2.vendor)
        return false;
    if (s1.product!=s2.product)
        return false;
    if (s1.serial!=s2.serial)
        return false;
    if (s1.index!=s2.index)
        return false;
    return true;
};

inline bool operator!= (const rtl_device_struct_struct& s1, const rtl_device_struct_struct& s2) {
    return !(s1==s2);
};

#endif // STRUCTPROPS_H
