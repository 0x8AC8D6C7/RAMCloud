CMAKE_MINIMUM_REQUIRED(VERSION 3.10)

PROJECT(LX-RDMA-RPC)

set(CMAKE_CXX_STANDARD 11)

add_definitions(-DTESTING=1)

# 添加gtest的源码目录
add_subdirectory(/usr/src/gtest ${CMAKE_BINARY_DIR}/gtest)

# 包括gtest的头文件
include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})
include_directories(src)
# find_package(Boost 1.53.0 REQUIRED COMPONENTS system thread)

# if(Boost_FOUND)
#     include_directories(${Boost_INCLUDE_DIRS})
# endif()

find_package(PkgConfig REQUIRED)
pkg_check_modules(PCRECPP REQUIRED libpcrecpp)
include_directories(${PCRECPP_INCLUDE_DIRS})

include_directories(src/protoGen)

add_library(RAMCloud
    src/protoGen/MetricList.pb.cc
    src/protoGen/SpinLockStatistics.pb.cc
    src/protoGen/TableConfig.pb.cc
    src/BasicTransport.cc
    src/Buffer.cc
    src/CacheTrace.cc
    src/ClientException.cc
    src/CodeLocation.cc
    src/Common.cc
    src/Context.cc
    src/CoordinatorClient.cc
    src/CoordinatorRpcWrapper.cc
    src/CoordinatorSession.cc
    src/Crc32C.cc
    src/Cycles.cc
    src/Dispatch.cc
    src/DispatchExec.cc
    src/Driver.cc
    src/ExternalStorage.cc
    src/FailSession.cc
    src/HomaTransport.cc
    src/IpAddress.cc
    src/IndexKey.cc
    src/Key.cc
    src/Logger.cc
    src/LogProtector.cc
    src/Memory.cc
    src/MurmurHash3.cc
    src/Object.cc
    src/ObjectFinder.cc
    src/PerfCounter.cc
    src/PerfStats.cc
    src/PortAlarm.cc
    src/RawMetrics.cc
    src/RpcLevel.cc
    src/RpcWrapper.cc
    src/Service.cc
    src/ServiceLocator.cc
    src/SessionAlarm.cc
    src/SpinLock.cc
    src/Status.cc
    src/StringUtil.cc
    src/TcpTransport.cc
    src/ThreadId.cc
    src/TimeTrace.cc
    src/Transport.cc
    src/TransportManager.cc
    src/UdpDriver.cc
    src/Util.cc
    src/WorkerManager.cc
    src/WorkerSession.cc
    src/WorkerTimer.cc
    src/WireFormat.cc)



# target_link_libraries(server profiler ibverbs ${PCRECPP_LIBRARIES} Boost::system Boost::thread )


add_executable(TcpTransportTest 
    src/TcpTransportTest.cc
    src/TestUtil.cc
    src/TestLog.cc)

target_link_libraries(TcpTransportTest PRIVATE  gtest gtest_main  RAMCloud protobuf ${PCRECPP_LIBRARIES} )