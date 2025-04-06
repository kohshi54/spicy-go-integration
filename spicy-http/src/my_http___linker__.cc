// Begin of __linker__
// Compiled by HILTI version 1.8.4

#include <hilti/rt/compiler-setup.h>

// 
// Linker code generated for modules:
//   - MyHTTP (/home/kohshi54/spicy-go-integration/spicy-http/my_http.spicy)

#include <hilti/rt/libhilti.h>
#include <spicy/rt/libspicy.h>

namespace __hlt_my_http::MyHTTP {
    struct FieldLine;
    struct HTTPRequest;
    extern void __hook_HTTPRequest___on_0x25_done(::hilti::rt::ValueReference<HTTPRequest>& __self);
    extern void __hook_HTTPRequest___on_0x25_done_6199(::hilti::rt::ValueReference<HTTPRequest>& __self);
    extern void __hook_HTTPRequest___on_headers_foreach(const ::hilti::rt::ValueReference<__hlt_my_http::MyHTTP::FieldLine>& __dd, ::hilti::rt::Bool& __stop, ::hilti::rt::ValueReference<HTTPRequest>& __self);
    extern void __hook_HTTPRequest___on_headers_foreach_41a2(const ::hilti::rt::ValueReference<__hlt_my_http::MyHTTP::FieldLine>& __dd, ::hilti::rt::Bool& __stop, ::hilti::rt::ValueReference<HTTPRequest>& __self);
}

const char HILTI_EXPORT HILTI_WEAK * __hlt_my_http_hlto_library_version = R"({"debug":false,"hilti_version":10804,"magic":"v1"})";
const char HILTI_EXPORT HILTI_WEAK * __hlt_my_http_hlto_bind_to_version = spicy_version_1_8_4();
const char HILTI_WEAK * __hlt_my_http_hlto_scope = "f3c2a0d637b03df4";

extern void __hlt_my_http::MyHTTP::__hook_HTTPRequest___on_0x25_done(::hilti::rt::ValueReference<HTTPRequest>& __self) { __hlt_my_http::MyHTTP::__hook_HTTPRequest___on_0x25_done_6199(__self); }

extern void __hlt_my_http::MyHTTP::__hook_HTTPRequest___on_headers_foreach(const ::hilti::rt::ValueReference<__hlt_my_http::MyHTTP::FieldLine>& __dd, ::hilti::rt::Bool& __stop, ::hilti::rt::ValueReference<HTTPRequest>& __self) { __hlt_my_http::MyHTTP::__hook_HTTPRequest___on_headers_foreach_41a2(__dd, __stop, __self); }
