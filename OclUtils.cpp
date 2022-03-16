//
// Created by 向向泳安 on 2022/3/15.
//

#include "OclUtils.h"

void PrintError(cl_int error);


void OclDevice::GetDeviceInfo(std::string Dname) {

}

OclUtils::OclUtils() {

}



cl_ulong OclUtils::getStartEndTime(cl_event event) {
    cl_int status;
    cl_ulong start, end;
    status = clGetEventProfilingInfo(event, CL_PROFILING_COMMAND_START, sizeof(start), &start, NULL);
    CheckError(status, "Failed to query event start time");
    status = clGetEventProfilingInfo(event, CL_PROFILING_COMMAND_END, sizeof(end), &end, NULL);
    CheckError(status, "Failed to query event end time");
    return end - start;
}

void OclUtils::CheckError(cl_int iStatus, std::string errMsg) {

}

void OclUtils::noPtrCheck(void *ptr, std::string errMsg) {

}


void PrintError(cl_int error) {
    switch(error)
    {
        case -1:
            printf("CL_DEVICE_NOT_FOUND ");
            break;
        case -2:
            printf("CL_DEVICE_NOT_AVAILABLE ");
            break;
        case -3:
            printf("CL_COMPILER_NOT_AVAILABLE ");
            break;
        case -4:
            printf("CL_MEM_OBJECT_ALLOCATION_FAILURE ");
            break;
        case -5:
            printf("CL_OUT_OF_RESOURCES ");
            break;
        case -6:
            printf("CL_OUT_OF_HOST_MEMORY ");
            break;
        case -7:
            printf("CL_PROFILING_INFO_NOT_AVAILABLE ");
            break;
        case -8:
            printf("CL_MEM_COPY_OVERLAP ");
            break;
        case -9:
            printf("CL_IMAGE_FORMAT_MISMATCH ");
            break;
        case -10:
            printf("CL_IMAGE_FORMAT_NOT_SUPPORTED ");
            break;
        case -11:
            printf("CL_BUILD_PROGRAM_FAILURE ");
            break;
        case -12:
            printf("CL_MAP_FAILURE ");
            break;
        case -13:
            printf("CL_MISALIGNED_SUB_BUFFER_OFFSET ");
            break;
        case -14:
            printf("CL_EXEC_STATUS_ERROR_FOR_EVENTS_IN_WAIT_LIST ");
            break;

        case -30:
            printf("CL_INVALID_VALUE ");
            break;
        case -31:
            printf("CL_INVALID_DEVICE_TYPE ");
            break;
        case -32:
            printf("CL_INVALID_PLATFORM ");
            break;
        case -33:
            printf("CL_INVALID_DEVICE ");
            break;
        case -34:
            printf("CL_INVALID_CONTEXT ");
            break;
        case -35:
            printf("CL_INVALID_QUEUE_PROPERTIES ");
            break;
        case -36:
            printf("CL_INVALID_COMMAND_QUEUE ");
            break;
        case -37:
            printf("CL_INVALID_HOST_PTR ");
            break;
        case -38:
            printf("CL_INVALID_MEM_OBJECT ");
            break;
        case -39:
            printf("CL_INVALID_IMAGE_FORMAT_DESCRIPTOR ");
            break;
        case -40:
            printf("CL_INVALID_IMAGE_SIZE ");
            break;
        case -41:
            printf("CL_INVALID_SAMPLER ");
            break;
        case -42:
            printf("CL_INVALID_BINARY ");
            break;
        case -43:
            printf("CL_INVALID_BUILD_OPTIONS ");
            break;
        case -44:
            printf("CL_INVALID_PROGRAM ");
            break;
        case -45:
            printf("CL_INVALID_PROGRAM_EXECUTABLE ");
            break;
        case -46:
            printf("CL_INVALID_KERNEL_NAME ");
            break;
        case -47:
            printf("CL_INVALID_KERNEL_DEFINITION ");
            break;
        case -48:
            printf("CL_INVALID_KERNEL ");
            break;
        case -49:
            printf("CL_INVALID_ARG_INDEX ");
            break;
        case -50:
            printf("CL_INVALID_ARG_VALUE ");
            break;
        case -51:
            printf("CL_INVALID_ARG_SIZE ");
            break;
        case -52:
            printf("CL_INVALID_KERNEL_ARGS ");
            break;
        case -53:
            printf("CL_INVALID_WORK_DIMENSION ");
            break;
        case -54:
            printf("CL_INVALID_WORK_GROUP_SIZE ");
            break;
        case -55:
            printf("CL_INVALID_WORK_ITEM_SIZE ");
            break;
        case -56:
            printf("CL_INVALID_GLOBAL_OFFSET ");
            break;
        case -57:
            printf("CL_INVALID_EVENT_WAIT_LIST ");
            break;
        case -58:
            printf("CL_INVALID_EVENT ");
            break;
        case -59:
            printf("CL_INVALID_OPERATION ");
            break;
        case -60:
            printf("CL_INVALID_GL_OBJECT ");
            break;
        case -61:
            printf("CL_INVALID_BUFFER_SIZE ");
            break;
        case -62:
            printf("CL_INVALID_MIP_LEVEL ");
            break;
        case -63:
            printf("CL_INVALID_GLOBAL_WORK_SIZE ");
            break;
        default:
            printf("UNRECOGNIZED ERROR CODE (%d)", error);
    }

}


