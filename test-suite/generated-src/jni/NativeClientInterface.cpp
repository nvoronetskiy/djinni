// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from client_interface.djinni

#include "NativeClientInterface.hpp"  // my header
#include "Marshal.hpp"
#include "NativeClientReturnedRecord.hpp"

namespace djinni_generated {

NativeClientInterface::NativeClientInterface() : ::djinni::JniInterface<::ClientInterface, NativeClientInterface>() {}

NativeClientInterface::~NativeClientInterface() = default;

NativeClientInterface::JavaProxy::JavaProxy(JniType j) : JavaProxyCacheEntry(j) { }

NativeClientInterface::JavaProxy::~JavaProxy() = default;

::ClientReturnedRecord NativeClientInterface::JavaProxy::get_record(int64_t record_id, const std::string & utf8string, const std::experimental::optional<std::string> & misc) {
    auto jniEnv = ::djinni::jniGetThreadEnv();
    ::djinni::JniLocalScope jscope(jniEnv, 10);
    const auto& data = ::djinni::JniClass<::djinni_generated::NativeClientInterface>::get();
    auto jret = jniEnv->CallObjectMethod(getGlobalRef(), data.method_getRecord,
                                         ::djinni::get(::djinni::I64::fromCpp(jniEnv, record_id)),
                                         ::djinni::get(::djinni::String::fromCpp(jniEnv, utf8string)),
                                         ::djinni::get(::djinni::Optional<std::experimental::optional, ::djinni::String>::fromCpp(jniEnv, misc)));
    ::djinni::jniExceptionCheck(jniEnv);
    return ::djinni_generated::NativeClientReturnedRecord::toCpp(jniEnv, jret);
}
std::string NativeClientInterface::JavaProxy::return_str() {
    auto jniEnv = ::djinni::jniGetThreadEnv();
    ::djinni::JniLocalScope jscope(jniEnv, 10);
    const auto& data = ::djinni::JniClass<::djinni_generated::NativeClientInterface>::get();
    auto jret = (jstring)jniEnv->CallObjectMethod(getGlobalRef(), data.method_returnStr);
    ::djinni::jniExceptionCheck(jniEnv);
    return ::djinni::String::toCpp(jniEnv, jret);
}

}  // namespace djinni_generated
