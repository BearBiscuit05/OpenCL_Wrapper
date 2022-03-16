#ifndef OPENCL_WRAPPER_OCLUTILS_H
#define OPENCL_WRAPPER_OCLUTILS_H
#ifdef __APPLE__
#include <OpenCL/opencl.h>
#else
#include <CL/cl.h>
#endif
#include <iostream>
#include <vector>
#include <fstream>
#include <unordered_map>
//                  -> args
// device -> kernels

class OclDevice {
public:
    void GetDeviceInfo(std::string Dname = "");
    
    std::string DeviceName;
    cl_device_id DeviceId;
    std::vector<cl_kernel> kernels;
    std::vector<std::vector<cl_mem>> clMem;
    std::unordered_map<std::string, int> nameMapKernel;
};

class OclUtils {
public:
    // TODO : init platform detect
    OclUtils(std::string Pname = "");

    void GetPlatfromInfo(std::string Pname = "");
    cl_ulong getStartEndTime(cl_event event);


    cl_platform_id platform = nullptr;
};


#endif //OPENCL_WRAPPER_OCLUTILS_H
