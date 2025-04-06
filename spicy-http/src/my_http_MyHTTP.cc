// Begin of MyHTTP (from "my_http.spicy")
// Compiled by HILTI version 1.8.4

#include <hilti/rt/compiler-setup.h>

#include <hilti/rt/libhilti.h>
#include <spicy/rt/libspicy.h>

namespace __hlt_my_http::MyHTTP {
    struct FieldLine;
    struct HTTPRequest;
    struct RequestLine;
    struct Version;
}

namespace __hlt_my_http::type_info { namespace {
    extern const ::hilti::rt::TypeInfo __ti_MyHTTP_FieldLine;
    extern const ::hilti::rt::TypeInfo __ti_MyHTTP_HTTPRequest;
    extern const ::hilti::rt::TypeInfo __ti_MyHTTP_RequestLine;
    extern const ::hilti::rt::TypeInfo __ti_MyHTTP_Version;
    extern const ::hilti::rt::TypeInfo __ti_hilti_RecoverableFailure;
    extern const ::hilti::rt::TypeInfo __ti_optionalx30hilti_RecoverableFailure;
    extern const ::hilti::rt::TypeInfo __ti_value_refx30MyHTTP_RequestLine;
    extern const ::hilti::rt::TypeInfo __ti_value_refx30MyHTTP_Version;
    extern const ::hilti::rt::TypeInfo __ti_vectorx30MyHTTP_FieldLine;
} }

extern const char* __hlt_my_http_hlto_scope;

namespace __hlt_my_http::MyHTTP {
    struct Version : ::hilti::rt::trait::isStruct, ::hilti::rt::Controllable<Version> {
        inline auto __self() { return ::hilti::rt::ValueReference<Version>::self(this); }
        std::optional<::hilti::rt::Bytes> number{};
        auto __parse_stage1(::hilti::rt::ValueReference<::hilti::rt::Stream>& __data, std::optional<::hilti::rt::stream::SafeConstIterator> __begin, ::hilti::rt::stream::View __cur, ::hilti::rt::Bool __trim, ::hilti::rt::integer::safe<int64_t> __lah, ::hilti::rt::stream::SafeConstIterator __lahe, std::optional<::hilti::rt::RecoverableFailure> __error) -> std::tuple<::hilti::rt::stream::View, ::hilti::rt::integer::safe<int64_t>, ::hilti::rt::stream::SafeConstIterator, std::optional<::hilti::rt::RecoverableFailure>>;
        auto __parse_MyHTTP_Version_stage2(::hilti::rt::ValueReference<::hilti::rt::Stream>& __data, std::optional<::hilti::rt::stream::SafeConstIterator> __begin, ::hilti::rt::stream::View __cur, ::hilti::rt::Bool __trim, ::hilti::rt::integer::safe<int64_t> __lah, ::hilti::rt::stream::SafeConstIterator __lahe, std::optional<::hilti::rt::RecoverableFailure> __error) -> std::tuple<::hilti::rt::stream::View, ::hilti::rt::integer::safe<int64_t>, ::hilti::rt::stream::SafeConstIterator, std::optional<::hilti::rt::RecoverableFailure>>;
        std::optional<::hilti::rt::RecoverableFailure> __error{};
        inline Version();
        Version(const Version&) = default;
        Version(Version&&) = default;
        Version& operator=(const Version&) = default;
        Version& operator=(Version&&) = default;
        inline Version(std::optional<std::optional<::hilti::rt::Bytes>> number);
        template<typename F> void __visit(F _) const { _("number", number); }
    };

    struct RequestLine : ::hilti::rt::trait::isStruct, ::hilti::rt::Controllable<RequestLine> {
        inline auto __self() { return ::hilti::rt::ValueReference<RequestLine>::self(this); }
        std::optional<::hilti::rt::Bytes> method{};
        std::optional<::hilti::rt::Bytes> uri{};
        std::optional<::hilti::rt::ValueReference<Version>> version{};
        auto __parse_stage1(::hilti::rt::ValueReference<::hilti::rt::Stream>& __data, std::optional<::hilti::rt::stream::SafeConstIterator> __begin, ::hilti::rt::stream::View __cur, ::hilti::rt::Bool __trim, ::hilti::rt::integer::safe<int64_t> __lah, ::hilti::rt::stream::SafeConstIterator __lahe, std::optional<::hilti::rt::RecoverableFailure> __error) -> std::tuple<::hilti::rt::stream::View, ::hilti::rt::integer::safe<int64_t>, ::hilti::rt::stream::SafeConstIterator, std::optional<::hilti::rt::RecoverableFailure>>;
        auto __parse_MyHTTP_RequestLine_stage2(::hilti::rt::ValueReference<::hilti::rt::Stream>& __data, std::optional<::hilti::rt::stream::SafeConstIterator> __begin, ::hilti::rt::stream::View __cur, ::hilti::rt::Bool __trim, ::hilti::rt::integer::safe<int64_t> __lah, ::hilti::rt::stream::SafeConstIterator __lahe, std::optional<::hilti::rt::RecoverableFailure> __error) -> std::tuple<::hilti::rt::stream::View, ::hilti::rt::integer::safe<int64_t>, ::hilti::rt::stream::SafeConstIterator, std::optional<::hilti::rt::RecoverableFailure>>;
        std::optional<::hilti::rt::RecoverableFailure> __error{};
        inline RequestLine();
        RequestLine(const RequestLine&) = default;
        RequestLine(RequestLine&&) = default;
        RequestLine& operator=(const RequestLine&) = default;
        RequestLine& operator=(RequestLine&&) = default;
        inline RequestLine(std::optional<std::optional<::hilti::rt::Bytes>> method, std::optional<std::optional<::hilti::rt::Bytes>> uri, std::optional<std::optional<::hilti::rt::ValueReference<Version>>> version);
        template<typename F> void __visit(F _) const { _("method", method); _("uri", uri); _("version", version); }
    };

    struct FieldLine : ::hilti::rt::trait::isStruct, ::hilti::rt::Controllable<FieldLine> {
        inline auto __self() { return ::hilti::rt::ValueReference<FieldLine>::self(this); }
        std::optional<::hilti::rt::Bytes> field_name{};
        std::optional<::hilti::rt::Bytes> field_value{};
        auto __parse_stage1(::hilti::rt::ValueReference<::hilti::rt::Stream>& __data, std::optional<::hilti::rt::stream::SafeConstIterator> __begin, ::hilti::rt::stream::View __cur, ::hilti::rt::Bool __trim, ::hilti::rt::integer::safe<int64_t> __lah, ::hilti::rt::stream::SafeConstIterator __lahe, std::optional<::hilti::rt::RecoverableFailure> __error) -> std::tuple<::hilti::rt::stream::View, ::hilti::rt::integer::safe<int64_t>, ::hilti::rt::stream::SafeConstIterator, std::optional<::hilti::rt::RecoverableFailure>>;
        auto __parse_MyHTTP_FieldLine_stage2(::hilti::rt::ValueReference<::hilti::rt::Stream>& __data, std::optional<::hilti::rt::stream::SafeConstIterator> __begin, ::hilti::rt::stream::View __cur, ::hilti::rt::Bool __trim, ::hilti::rt::integer::safe<int64_t> __lah, ::hilti::rt::stream::SafeConstIterator __lahe, std::optional<::hilti::rt::RecoverableFailure> __error) -> std::tuple<::hilti::rt::stream::View, ::hilti::rt::integer::safe<int64_t>, ::hilti::rt::stream::SafeConstIterator, std::optional<::hilti::rt::RecoverableFailure>>;
        std::optional<::hilti::rt::RecoverableFailure> __error{};
        inline FieldLine();
        FieldLine(const FieldLine&) = default;
        FieldLine(FieldLine&&) = default;
        FieldLine& operator=(const FieldLine&) = default;
        FieldLine& operator=(FieldLine&&) = default;
        inline FieldLine(std::optional<std::optional<::hilti::rt::Bytes>> field_name, std::optional<std::optional<::hilti::rt::Bytes>> field_value);
        template<typename F> void __visit(F _) const { _("field_name", field_name); _("field_value", field_value); }
    };

    struct HTTPRequest : ::hilti::rt::trait::isStruct, ::hilti::rt::Controllable<HTTPRequest> {
        inline auto __self() { return ::hilti::rt::ValueReference<HTTPRequest>::self(this); }
        std::optional<::hilti::rt::ValueReference<RequestLine>> start_line{};
        std::optional<::hilti::rt::Vector<FieldLine>> headers{};
        void __on_headers_foreach(const ::hilti::rt::ValueReference<FieldLine>& __dd, ::hilti::rt::Bool& __stop);
        ::hilti::rt::integer::safe<uint64_t> clength;
        std::optional<::hilti::rt::Bytes> body{};
        void __on_0x25_done();
        inline static ::spicy::rt::Parser __parser{};
        auto __parse_stage1(::hilti::rt::ValueReference<::hilti::rt::Stream>& __data, std::optional<::hilti::rt::stream::SafeConstIterator> __begin, ::hilti::rt::stream::View __cur, ::hilti::rt::Bool __trim, ::hilti::rt::integer::safe<int64_t> __lah, ::hilti::rt::stream::SafeConstIterator __lahe, std::optional<::hilti::rt::RecoverableFailure> __error) -> std::tuple<::hilti::rt::stream::View, ::hilti::rt::integer::safe<int64_t>, ::hilti::rt::stream::SafeConstIterator, std::optional<::hilti::rt::RecoverableFailure>>;
        static auto parse1(::hilti::rt::ValueReference<::hilti::rt::Stream>& data, const std::optional<::hilti::rt::stream::View>& cur, const std::optional<::spicy::rt::UnitContext>& context) -> ::hilti::rt::stream::View;
        static auto parse2(::hilti::rt::ValueReference<HTTPRequest>& unit, ::hilti::rt::ValueReference<::hilti::rt::Stream>& data, const std::optional<::hilti::rt::stream::View>& cur, const std::optional<::spicy::rt::UnitContext>& context) -> ::hilti::rt::stream::View;
        static auto parse3(::hilti::rt::ValueReference<::spicy::rt::ParsedUnit>& gunit, ::hilti::rt::ValueReference<::hilti::rt::Stream>& data, const std::optional<::hilti::rt::stream::View>& cur, const std::optional<::spicy::rt::UnitContext>& context) -> ::hilti::rt::stream::View;
        auto __parse_headers_stage1(::hilti::rt::ValueReference<::hilti::rt::Stream>& __data, std::optional<::hilti::rt::stream::SafeConstIterator> __begin, ::hilti::rt::stream::View __cur, ::hilti::rt::Bool __trim, ::hilti::rt::integer::safe<int64_t> __lah, ::hilti::rt::stream::SafeConstIterator __lahe, std::optional<::hilti::rt::RecoverableFailure> __error, ::hilti::rt::Vector<FieldLine>& __dst) -> std::tuple<::hilti::rt::stream::View, ::hilti::rt::integer::safe<int64_t>, ::hilti::rt::stream::SafeConstIterator, std::optional<::hilti::rt::RecoverableFailure>>;
        auto __parse_MyHTTP_HTTPRequest_stage2(::hilti::rt::ValueReference<::hilti::rt::Stream>& __data, std::optional<::hilti::rt::stream::SafeConstIterator> __begin, ::hilti::rt::stream::View __cur, ::hilti::rt::Bool __trim, ::hilti::rt::integer::safe<int64_t> __lah, ::hilti::rt::stream::SafeConstIterator __lahe, std::optional<::hilti::rt::RecoverableFailure> __error) -> std::tuple<::hilti::rt::stream::View, ::hilti::rt::integer::safe<int64_t>, ::hilti::rt::stream::SafeConstIterator, std::optional<::hilti::rt::RecoverableFailure>>;
        std::optional<::hilti::rt::RecoverableFailure> __error{};
        inline HTTPRequest();
        HTTPRequest(const HTTPRequest&) = default;
        HTTPRequest(HTTPRequest&&) = default;
        HTTPRequest& operator=(const HTTPRequest&) = default;
        HTTPRequest& operator=(HTTPRequest&&) = default;
        inline HTTPRequest(std::optional<std::optional<::hilti::rt::ValueReference<RequestLine>>> start_line, std::optional<std::optional<::hilti::rt::Vector<FieldLine>>> headers, std::optional<::hilti::rt::integer::safe<uint64_t>> clength, std::optional<std::optional<::hilti::rt::Bytes>> body);
        template<typename F> void __visit(F _) const { _("start_line", start_line); _("headers", headers); _("clength", clength); _("body", body); }
    };

    const ::hilti::rt::RegExp NewLine = ::hilti::rt::RegExp(std::string{"\\r?\\n"}, {});
    const ::hilti::rt::RegExp OWS = ::hilti::rt::RegExp(std::string{"[ \\t]*"}, {});
    const ::hilti::rt::RegExp Token = ::hilti::rt::RegExp(std::string{"[^ \\t\\r\\n]+"}, {});
    const ::hilti::rt::RegExp WhiteSpace = ::hilti::rt::RegExp(std::string{"[ \\t]+"}, {});
    const ::hilti::rt::Bool __feat0x25MyHTTP__FieldLine0x25is_filter = ::hilti::rt::Bool(false);
    const ::hilti::rt::Bool __feat0x25MyHTTP__FieldLine0x25supports_filters = ::hilti::rt::Bool(false);
    const ::hilti::rt::Bool __feat0x25MyHTTP__FieldLine0x25supports_sinks = ::hilti::rt::Bool(false);
    const ::hilti::rt::Bool __feat0x25MyHTTP__FieldLine0x25synchronization = ::hilti::rt::Bool(false);
    const ::hilti::rt::Bool __feat0x25MyHTTP__FieldLine0x25uses_random_access = ::hilti::rt::Bool(false);
    const ::hilti::rt::Bool __feat0x25MyHTTP__HTTPRequest0x25is_filter = ::hilti::rt::Bool(false);
    const ::hilti::rt::Bool __feat0x25MyHTTP__HTTPRequest0x25supports_filters = ::hilti::rt::Bool(false);
    const ::hilti::rt::Bool __feat0x25MyHTTP__HTTPRequest0x25supports_sinks = ::hilti::rt::Bool(false);
    const ::hilti::rt::Bool __feat0x25MyHTTP__HTTPRequest0x25synchronization = ::hilti::rt::Bool(false);
    const ::hilti::rt::Bool __feat0x25MyHTTP__HTTPRequest0x25uses_random_access = ::hilti::rt::Bool(false);
    const ::hilti::rt::Bool __feat0x25MyHTTP__RequestLine0x25is_filter = ::hilti::rt::Bool(false);
    const ::hilti::rt::Bool __feat0x25MyHTTP__RequestLine0x25supports_filters = ::hilti::rt::Bool(false);
    const ::hilti::rt::Bool __feat0x25MyHTTP__RequestLine0x25supports_sinks = ::hilti::rt::Bool(false);
    const ::hilti::rt::Bool __feat0x25MyHTTP__RequestLine0x25synchronization = ::hilti::rt::Bool(false);
    const ::hilti::rt::Bool __feat0x25MyHTTP__RequestLine0x25uses_random_access = ::hilti::rt::Bool(false);
    const ::hilti::rt::Bool __feat0x25MyHTTP__Version0x25is_filter = ::hilti::rt::Bool(false);
    const ::hilti::rt::Bool __feat0x25MyHTTP__Version0x25supports_filters = ::hilti::rt::Bool(false);
    const ::hilti::rt::Bool __feat0x25MyHTTP__Version0x25supports_sinks = ::hilti::rt::Bool(false);
    const ::hilti::rt::Bool __feat0x25MyHTTP__Version0x25synchronization = ::hilti::rt::Bool(false);
    const ::hilti::rt::Bool __feat0x25MyHTTP__Version0x25uses_random_access = ::hilti::rt::Bool(false);
    const ::hilti::rt::RegExp __re_1 = ::hilti::rt::RegExp(std::string{"HTTP/"}, {});
    const ::hilti::rt::RegExp __re_2 = ::hilti::rt::RegExp(std::string{"[0-9]+\\.[0-9]+"}, {});
    const ::hilti::rt::RegExp __re_3 = ::hilti::rt::RegExp(std::string{"[^ \\t\\r\\n]+"}, {});
    const ::hilti::rt::RegExp __re_4 = ::hilti::rt::RegExp(std::string{"[ \\t]+"}, {});
    const ::hilti::rt::RegExp __re_5 = ::hilti::rt::RegExp(std::string{"\\r?\\n"}, {});
    const ::hilti::rt::RegExp __re_6 = ::hilti::rt::RegExp(std::string{"[!#$%&'*+\\-.^_`|~0-9A-Za-z]+"}, {});
    const ::hilti::rt::RegExp __re_7 = ::hilti::rt::RegExp(std::string{":"}, {});
    const ::hilti::rt::RegExp __re_8 = ::hilti::rt::RegExp(std::string{"[ \\t]*"}, {});
    const ::hilti::rt::RegExp __re_9 = ::hilti::rt::RegExp(std::string{"([\\x21-\\x7E\\x80-\\xFF]([ \\t\\x21-\\x7E\\x80-\\xFF]+[\\x21-\\x7E\\x80-\\xFF])?)*"}, {});
    const ::hilti::rt::RegExp __re_headers_l1 = ::hilti::rt::RegExp(std::vector<std::string>{"\\r?\\n{#5}", "[!#$%&'*+\\-.^_`|~0-9A-Za-z]+{#6}"}, {.no_sub = true});
    const ::hilti::rt::RegExp delim = ::hilti::rt::RegExp(std::string{":"}, {});
    const ::hilti::rt::RegExp field_value = ::hilti::rt::RegExp(std::string{"([\\x21-\\x7E\\x80-\\xFF]([ \\t\\x21-\\x7E\\x80-\\xFF]+[\\x21-\\x7E\\x80-\\xFF])?)*"}, {});
    const ::hilti::rt::RegExp token = ::hilti::rt::RegExp(std::string{"[!#$%&'*+\\-.^_`|~0-9A-Za-z]+"}, {});
    extern void __hook_HTTPRequest___on_0x25_done(::hilti::rt::ValueReference<HTTPRequest>& __self);
    extern void __hook_HTTPRequest___on_0x25_done(::hilti::rt::ValueReference<__hlt_my_http::MyHTTP::HTTPRequest>& __self);
    extern void __hook_HTTPRequest___on_0x25_done_6199(::hilti::rt::ValueReference<HTTPRequest>& __self);
    extern void __hook_HTTPRequest___on_headers_foreach(const ::hilti::rt::ValueReference<__hlt_my_http::MyHTTP::FieldLine>& __dd, ::hilti::rt::Bool& __stop, ::hilti::rt::ValueReference<HTTPRequest>& __self);
    extern void __hook_HTTPRequest___on_headers_foreach(const ::hilti::rt::ValueReference<__hlt_my_http::MyHTTP::FieldLine>& __dd, ::hilti::rt::Bool& __stop, ::hilti::rt::ValueReference<__hlt_my_http::MyHTTP::HTTPRequest>& __self);
    extern void __hook_HTTPRequest___on_headers_foreach_41a2(const ::hilti::rt::ValueReference<__hlt_my_http::MyHTTP::FieldLine>& __dd, ::hilti::rt::Bool& __stop, ::hilti::rt::ValueReference<HTTPRequest>& __self);
    extern void __init_module();
    extern void __register_MyHTTP_FieldLine();
    extern void __register_MyHTTP_HTTPRequest();
    extern void __register_MyHTTP_RequestLine();
    extern void __register_MyHTTP_Version();
    extern void __register_module();
    static auto operator<<(std::ostream& o, const __hlt_my_http::MyHTTP::Version& x) -> std::ostream&;
    static auto operator<<(std::ostream& o, const __hlt_my_http::MyHTTP::FieldLine& x) -> std::ostream&;
    static auto operator<<(std::ostream& o, const __hlt_my_http::MyHTTP::RequestLine& x) -> std::ostream&;
    static auto operator<<(std::ostream& o, const __hlt_my_http::MyHTTP::HTTPRequest& x) -> std::ostream&;
}

namespace hlt_my_http::MyHTTP::HTTPRequest {
    extern auto parse1(::hilti::rt::ValueReference<::hilti::rt::Stream>& data, const std::optional<::hilti::rt::stream::View>& cur, const std::optional<::spicy::rt::UnitContext>& context) -> ::hilti::rt::Resumable;
    extern auto parse2(::hilti::rt::ValueReference<__hlt_my_http::MyHTTP::HTTPRequest>& unit, ::hilti::rt::ValueReference<::hilti::rt::Stream>& data, const std::optional<::hilti::rt::stream::View>& cur, const std::optional<::spicy::rt::UnitContext>& context) -> ::hilti::rt::Resumable;
    extern auto parse3(::hilti::rt::ValueReference<::spicy::rt::ParsedUnit>& gunit, ::hilti::rt::ValueReference<::hilti::rt::Stream>& data, const std::optional<::hilti::rt::stream::View>& cur, const std::optional<::spicy::rt::UnitContext>& context) -> ::hilti::rt::Resumable;
}

namespace __hlt_my_http::type_info { namespace {
    const ::hilti::rt::TypeInfo __ti_MyHTTP_FieldLine = { "MyHTTP::FieldLine", "MyHTTP::FieldLine", new ::hilti::rt::type_info::Struct(std::vector<::hilti::rt::type_info::struct_::Field>({::hilti::rt::type_info::struct_::Field{ "field_name", &::hilti::rt::type_info::bytes, offsetof(MyHTTP::FieldLine, field_name), false, ::hilti::rt::type_info::struct_::Field::accessor_optional<::hilti::rt::Bytes>() }, ::hilti::rt::type_info::struct_::Field{ "field_value", &::hilti::rt::type_info::bytes, offsetof(MyHTTP::FieldLine, field_value), false, ::hilti::rt::type_info::struct_::Field::accessor_optional<::hilti::rt::Bytes>() }, ::hilti::rt::type_info::struct_::Field{ "__error", &type_info::__ti_optionalx30hilti_RecoverableFailure, offsetof(MyHTTP::FieldLine, __error), true }})) };
    const ::hilti::rt::TypeInfo __ti_MyHTTP_HTTPRequest = { "MyHTTP::HTTPRequest", "MyHTTP::HTTPRequest", new ::hilti::rt::type_info::Struct(std::vector<::hilti::rt::type_info::struct_::Field>({::hilti::rt::type_info::struct_::Field{ "start_line", &type_info::__ti_value_refx30MyHTTP_RequestLine, offsetof(MyHTTP::HTTPRequest, start_line), false, ::hilti::rt::type_info::struct_::Field::accessor_optional<::hilti::rt::ValueReference<__hlt_my_http::MyHTTP::RequestLine>>() }, ::hilti::rt::type_info::struct_::Field{ "headers", &type_info::__ti_vectorx30MyHTTP_FieldLine, offsetof(MyHTTP::HTTPRequest, headers), false, ::hilti::rt::type_info::struct_::Field::accessor_optional<::hilti::rt::Vector<__hlt_my_http::MyHTTP::FieldLine>>() }, ::hilti::rt::type_info::struct_::Field{ "clength", &::hilti::rt::type_info::uint64, offsetof(MyHTTP::HTTPRequest, clength), false }, ::hilti::rt::type_info::struct_::Field{ "body", &::hilti::rt::type_info::bytes, offsetof(MyHTTP::HTTPRequest, body), false, ::hilti::rt::type_info::struct_::Field::accessor_optional<::hilti::rt::Bytes>() }, ::hilti::rt::type_info::struct_::Field{ "__error", &type_info::__ti_optionalx30hilti_RecoverableFailure, offsetof(MyHTTP::HTTPRequest, __error), true }})) };
    const ::hilti::rt::TypeInfo __ti_MyHTTP_RequestLine = { "MyHTTP::RequestLine", "MyHTTP::RequestLine", new ::hilti::rt::type_info::Struct(std::vector<::hilti::rt::type_info::struct_::Field>({::hilti::rt::type_info::struct_::Field{ "method", &::hilti::rt::type_info::bytes, offsetof(MyHTTP::RequestLine, method), false, ::hilti::rt::type_info::struct_::Field::accessor_optional<::hilti::rt::Bytes>() }, ::hilti::rt::type_info::struct_::Field{ "uri", &::hilti::rt::type_info::bytes, offsetof(MyHTTP::RequestLine, uri), false, ::hilti::rt::type_info::struct_::Field::accessor_optional<::hilti::rt::Bytes>() }, ::hilti::rt::type_info::struct_::Field{ "version", &type_info::__ti_value_refx30MyHTTP_Version, offsetof(MyHTTP::RequestLine, version), false, ::hilti::rt::type_info::struct_::Field::accessor_optional<::hilti::rt::ValueReference<__hlt_my_http::MyHTTP::Version>>() }, ::hilti::rt::type_info::struct_::Field{ "__error", &type_info::__ti_optionalx30hilti_RecoverableFailure, offsetof(MyHTTP::RequestLine, __error), true }})) };
    const ::hilti::rt::TypeInfo __ti_MyHTTP_Version = { "MyHTTP::Version", "MyHTTP::Version", new ::hilti::rt::type_info::Struct(std::vector<::hilti::rt::type_info::struct_::Field>({::hilti::rt::type_info::struct_::Field{ "number", &::hilti::rt::type_info::bytes, offsetof(MyHTTP::Version, number), false, ::hilti::rt::type_info::struct_::Field::accessor_optional<::hilti::rt::Bytes>() }, ::hilti::rt::type_info::struct_::Field{ "__error", &type_info::__ti_optionalx30hilti_RecoverableFailure, offsetof(MyHTTP::Version, __error), true }})) };
    const ::hilti::rt::TypeInfo __ti_hilti_RecoverableFailure = { "hilti::RecoverableFailure", "hilti::RecoverableFailure", new ::hilti::rt::type_info::Exception() };
    const ::hilti::rt::TypeInfo __ti_optionalx30hilti_RecoverableFailure = { {}, "optional<hilti::RecoverableFailure>", new ::hilti::rt::type_info::Optional(&type_info::__ti_hilti_RecoverableFailure, ::hilti::rt::type_info::Optional::accessor<::hilti::rt::RecoverableFailure>()) };
    const ::hilti::rt::TypeInfo __ti_value_refx30MyHTTP_RequestLine = { {}, "value_ref<MyHTTP::RequestLine>", new ::hilti::rt::type_info::ValueReference(&type_info::__ti_MyHTTP_RequestLine, ::hilti::rt::type_info::ValueReference::accessor<__hlt_my_http::MyHTTP::RequestLine>()) };
    const ::hilti::rt::TypeInfo __ti_value_refx30MyHTTP_Version = { {}, "value_ref<MyHTTP::Version>", new ::hilti::rt::type_info::ValueReference(&type_info::__ti_MyHTTP_Version, ::hilti::rt::type_info::ValueReference::accessor<__hlt_my_http::MyHTTP::Version>()) };
    const ::hilti::rt::TypeInfo __ti_vectorx30MyHTTP_FieldLine = { {}, "vector<MyHTTP::FieldLine>", new ::hilti::rt::type_info::Vector(&type_info::__ti_MyHTTP_FieldLine, ::hilti::rt::type_info::Vector::accessor<__hlt_my_http::MyHTTP::FieldLine>()) };
} }

namespace __hlt_my_http::MyHTTP {
    inline FieldLine::FieldLine() {
    }

    inline FieldLine::FieldLine(std::optional<std::optional<::hilti::rt::Bytes>> field_name, std::optional<std::optional<::hilti::rt::Bytes>> field_value) : FieldLine() {
        if ( field_name ) this->field_name = std::move(*field_name);
        if ( field_value ) this->field_value = std::move(*field_value);
    }

    
    inline HTTPRequest::HTTPRequest() {
        clength = ::hilti::rt::integer::safe<std::uint64_t>{0U};
    }

    inline HTTPRequest::HTTPRequest(std::optional<std::optional<::hilti::rt::ValueReference<__hlt_my_http::MyHTTP::RequestLine>>> start_line, std::optional<std::optional<::hilti::rt::Vector<__hlt_my_http::MyHTTP::FieldLine>>> headers, std::optional<::hilti::rt::integer::safe<uint64_t>> clength, std::optional<std::optional<::hilti::rt::Bytes>> body) : HTTPRequest() {
        if ( start_line ) this->start_line = std::move(*start_line);
        if ( headers ) this->headers = std::move(*headers);
        if ( clength ) this->clength = std::move(*clength);
        if ( body ) this->body = std::move(*body);
    }

    
    inline RequestLine::RequestLine() {
    }

    inline RequestLine::RequestLine(std::optional<std::optional<::hilti::rt::Bytes>> method, std::optional<std::optional<::hilti::rt::Bytes>> uri, std::optional<std::optional<::hilti::rt::ValueReference<__hlt_my_http::MyHTTP::Version>>> version) : RequestLine() {
        if ( method ) this->method = std::move(*method);
        if ( uri ) this->uri = std::move(*uri);
        if ( version ) this->version = std::move(*version);
    }

    
    inline Version::Version() {
    }

    inline Version::Version(std::optional<std::optional<::hilti::rt::Bytes>> number) : Version() {
        if ( number ) this->number = std::move(*number);
    }

    
}

HILTI_PRE_INIT(__hlt_my_http::MyHTTP::__register_module)

auto __hlt_my_http::MyHTTP::FieldLine::__parse_MyHTTP_FieldLine_stage2(::hilti::rt::ValueReference<::hilti::rt::Stream>& __data, std::optional<::hilti::rt::stream::SafeConstIterator> __begin, ::hilti::rt::stream::View __cur, ::hilti::rt::Bool __trim, ::hilti::rt::integer::safe<int64_t> __lah, ::hilti::rt::stream::SafeConstIterator __lahe, std::optional<::hilti::rt::RecoverableFailure> __error) -> std::tuple<::hilti::rt::stream::View, ::hilti::rt::integer::safe<int64_t>, ::hilti::rt::stream::SafeConstIterator, std::optional<::hilti::rt::RecoverableFailure>> {
    auto __self = FieldLine::__self();
    ::hilti::rt::detail::checkStack();
    __location__("my_http.spicy:31:18-38:2");
    std::tuple<::hilti::rt::stream::View, ::hilti::rt::integer::safe<int64_t>, ::hilti::rt::stream::SafeConstIterator, std::optional<::hilti::rt::RecoverableFailure>> __result;
    __location__("my_http.spicy:9:15");
    ::hilti::rt::Vector<::hilti::rt::Bytes> __captures;

    // Begin parsing production: Ctor: field_name -> /[!#$%&'*+\-.^_`|~0-9A-Za-z]+/ (regexp);
    if ( ::hilti::rt::Bool(static_cast<bool>(__lah)) ) {
        if ( __lah != ::hilti::rt::integer::safe<std::int64_t>{6} ) {
              __location__("my_http.spicy:9:15");
            throw ::spicy::rt::ParseError(std::string("unexpected token to consume"), "my_http.spicy:9:15");
        }

        ::hilti::rt::optional::valueOrInit((*__self).field_name) = __cur.sub(__lahe).data();
        __lah = ::hilti::rt::integer::safe<std::int64_t>{0};
        __cur = __cur.advance(__lahe);
        if ( __trim ) {
            (*__data).trim(__cur.begin());
        }
    }
    else {
        ::hilti::rt::stream::View ncur = __cur;
        for ( ::hilti::rt::regexp::MatchState ms = __hlt_my_http::MyHTTP::__re_6.tokenMatcher(); ::hilti::rt::Bool(true);  ) {
            ::hilti::rt::integer::safe<int32_t> rc;
              __location__("my_http.spicy:9:15");
            std::tie(rc, ncur) = ms.advance(ncur);
            if ( ::hilti::rt::integer::safe<int32_t> __x = rc; __x == ::hilti::rt::integer::safe<std::int32_t>{-1} ) {
                ::hilti::rt::StrongReference<::spicy::rt::filter::detail::Filters> __lhs_8;
                // NOLINTNEXTLINE(clang-analyzer-deadcode.DeadStores);
                ::hilti::rt::Bool more_data = ::spicy::rt::detail::waitForInputOrEod(__data, ncur, (__lhs_8=(::hilti::rt::StrongReference<::spicy::rt::filter::detail::Filters>())));
                continue;
            }

            else if ( __x == ::hilti::rt::integer::safe<std::int32_t>{0} ) {
                  __location__("my_http.spicy:9:15");
                throw ::spicy::rt::ParseError(std::string("failed to match regular expression"), "my_http.spicy:9:15");
            }

            else  {
                __captures = ms.captures((*__data));
                ::hilti::rt::optional::valueOrInit((*__self).field_name) = __cur.sub(ncur.begin()).data();
                __cur = ncur;
                break;
            }
        }
    }

    if ( __trim ) {
        (*__data).trim(__cur.begin());
    }

    // End parsing production: Ctor: field_name -> /[!#$%&'*+\-.^_`|~0-9A-Za-z]+/ (regexp);

    (*__self).__error = __error;
      __location__("my_http.spicy:32:2");
    (void());
    __error = (*__self).__error;
    ::hilti::rt::Bytes __transient_anon_5;
    __location__("my_http.spicy:15:15");
    ::hilti::rt::Vector<::hilti::rt::Bytes> __captures_2;

    // Begin parsing production: Ctor: anon_5 -> /:/ (regexp);
    if ( ::hilti::rt::Bool(static_cast<bool>(__lah)) ) {
        if ( __lah != ::hilti::rt::integer::safe<std::int64_t>{7} ) {
              __location__("my_http.spicy:15:15");
            throw ::spicy::rt::ParseError(std::string("unexpected token to consume"), "my_http.spicy:15:15");
        }

        __transient_anon_5 = __cur.sub(__lahe).data();
        __lah = ::hilti::rt::integer::safe<std::int64_t>{0};
        __cur = __cur.advance(__lahe);
        if ( __trim ) {
            (*__data).trim(__cur.begin());
        }
    }
    else {
        ::hilti::rt::stream::View ncur = __cur;
        for ( ::hilti::rt::regexp::MatchState ms = __hlt_my_http::MyHTTP::__re_7.tokenMatcher(); ::hilti::rt::Bool(true);  ) {
            ::hilti::rt::integer::safe<int32_t> rc;
              __location__("my_http.spicy:15:15");
            std::tie(rc, ncur) = ms.advance(ncur);
            if ( ::hilti::rt::integer::safe<int32_t> __x = rc; __x == ::hilti::rt::integer::safe<std::int32_t>{-1} ) {
                ::hilti::rt::StrongReference<::spicy::rt::filter::detail::Filters> __lhs_9;
                // NOLINTNEXTLINE(clang-analyzer-deadcode.DeadStores);
                ::hilti::rt::Bool more_data = ::spicy::rt::detail::waitForInputOrEod(__data, ncur, (__lhs_9=(::hilti::rt::StrongReference<::spicy::rt::filter::detail::Filters>())));
                continue;
            }

            else if ( __x == ::hilti::rt::integer::safe<std::int32_t>{0} ) {
                  __location__("my_http.spicy:15:15");
                throw ::spicy::rt::ParseError(std::string("failed to match regular expression"), "my_http.spicy:15:15");
            }

            else  {
                __captures_2 = ms.captures((*__data));
                __transient_anon_5 = __cur.sub(ncur.begin()).data();
                __cur = ncur;
                break;
            }
        }
    }

    if ( __trim ) {
        (*__data).trim(__cur.begin());
    }

    // End parsing production: Ctor: anon_5 -> /:/ (regexp);

    ::hilti::rt::Bytes __transient_anon_6;
    __location__("my_http.spicy:10:13");
    ::hilti::rt::Vector<::hilti::rt::Bytes> __captures_3;

    // Begin parsing production: Ctor: anon_6 -> /[ \t]*/ (regexp);
    if ( ::hilti::rt::Bool(static_cast<bool>(__lah)) ) {
        if ( __lah != ::hilti::rt::integer::safe<std::int64_t>{8} ) {
              __location__("my_http.spicy:10:13");
            throw ::spicy::rt::ParseError(std::string("unexpected token to consume"), "my_http.spicy:10:13");
        }

        __transient_anon_6 = __cur.sub(__lahe).data();
        __lah = ::hilti::rt::integer::safe<std::int64_t>{0};
        __cur = __cur.advance(__lahe);
        if ( __trim ) {
            (*__data).trim(__cur.begin());
        }
    }
    else {
        ::hilti::rt::stream::View ncur = __cur;
        for ( ::hilti::rt::regexp::MatchState ms = __hlt_my_http::MyHTTP::__re_8.tokenMatcher(); ::hilti::rt::Bool(true);  ) {
            ::hilti::rt::integer::safe<int32_t> rc;
              __location__("my_http.spicy:10:13");
            std::tie(rc, ncur) = ms.advance(ncur);
            if ( ::hilti::rt::integer::safe<int32_t> __x = rc; __x == ::hilti::rt::integer::safe<std::int32_t>{-1} ) {
                ::hilti::rt::StrongReference<::spicy::rt::filter::detail::Filters> __lhs_10;
                // NOLINTNEXTLINE(clang-analyzer-deadcode.DeadStores);
                ::hilti::rt::Bool more_data = ::spicy::rt::detail::waitForInputOrEod(__data, ncur, (__lhs_10=(::hilti::rt::StrongReference<::spicy::rt::filter::detail::Filters>())));
                continue;
            }

            else if ( __x == ::hilti::rt::integer::safe<std::int32_t>{0} ) {
                  __location__("my_http.spicy:10:13");
                throw ::spicy::rt::ParseError(std::string("failed to match regular expression"), "my_http.spicy:10:13");
            }

            else  {
                __captures_3 = ms.captures((*__data));
                __transient_anon_6 = __cur.sub(ncur.begin()).data();
                __cur = ncur;
                break;
            }
        }
    }

    if ( __trim ) {
        (*__data).trim(__cur.begin());
    }

    // End parsing production: Ctor: anon_6 -> /[ \t]*/ (regexp);

    __location__("my_http.spicy:14:21");
    ::hilti::rt::Vector<::hilti::rt::Bytes> __captures_4;

    // Begin parsing production: Ctor: field_value -> /([\x21-\x7E\x80-\xFF]([ \t\x21-\x7E\x80-\xFF]+[\x21-\x7E\x80-\xFF])?)*/ (regexp);
    if ( ::hilti::rt::Bool(static_cast<bool>(__lah)) ) {
        if ( __lah != ::hilti::rt::integer::safe<std::int64_t>{9} ) {
              __location__("my_http.spicy:14:21");
            throw ::spicy::rt::ParseError(std::string("unexpected token to consume"), "my_http.spicy:14:21");
        }

        ::hilti::rt::optional::valueOrInit((*__self).field_value) = __cur.sub(__lahe).data();
        __lah = ::hilti::rt::integer::safe<std::int64_t>{0};
        __cur = __cur.advance(__lahe);
        if ( __trim ) {
            (*__data).trim(__cur.begin());
        }
    }
    else {
        ::hilti::rt::stream::View ncur = __cur;
        for ( ::hilti::rt::regexp::MatchState ms = __hlt_my_http::MyHTTP::__re_9.tokenMatcher(); ::hilti::rt::Bool(true);  ) {
            ::hilti::rt::integer::safe<int32_t> rc;
              __location__("my_http.spicy:14:21");
            std::tie(rc, ncur) = ms.advance(ncur);
            if ( ::hilti::rt::integer::safe<int32_t> __x = rc; __x == ::hilti::rt::integer::safe<std::int32_t>{-1} ) {
                ::hilti::rt::StrongReference<::spicy::rt::filter::detail::Filters> __lhs_11;
                // NOLINTNEXTLINE(clang-analyzer-deadcode.DeadStores);
                ::hilti::rt::Bool more_data = ::spicy::rt::detail::waitForInputOrEod(__data, ncur, (__lhs_11=(::hilti::rt::StrongReference<::spicy::rt::filter::detail::Filters>())));
                continue;
            }

            else if ( __x == ::hilti::rt::integer::safe<std::int32_t>{0} ) {
                  __location__("my_http.spicy:14:21");
                throw ::spicy::rt::ParseError(std::string("failed to match regular expression"), "my_http.spicy:14:21");
            }

            else  {
                __captures_4 = ms.captures((*__data));
                ::hilti::rt::optional::valueOrInit((*__self).field_value) = __cur.sub(ncur.begin()).data();
                __cur = ncur;
                break;
            }
        }
    }

    if ( __trim ) {
        (*__data).trim(__cur.begin());
    }

    // End parsing production: Ctor: field_value -> /([\x21-\x7E\x80-\xFF]([ \t\x21-\x7E\x80-\xFF]+[\x21-\x7E\x80-\xFF])?)*/ (regexp);

    (*__self).__error = __error;
      __location__("my_http.spicy:35:2");
    (void());
    __error = (*__self).__error;
    ::hilti::rt::Bytes __transient_anon_7;
    __location__("my_http.spicy:10:13");
    ::hilti::rt::Vector<::hilti::rt::Bytes> __captures_5;

    // Begin parsing production: Ctor: anon_7 -> /[ \t]*/ (regexp);
    if ( ::hilti::rt::Bool(static_cast<bool>(__lah)) ) {
        if ( __lah != ::hilti::rt::integer::safe<std::int64_t>{8} ) {
              __location__("my_http.spicy:10:13");
            throw ::spicy::rt::ParseError(std::string("unexpected token to consume"), "my_http.spicy:10:13");
        }

        __transient_anon_7 = __cur.sub(__lahe).data();
        __lah = ::hilti::rt::integer::safe<std::int64_t>{0};
        __cur = __cur.advance(__lahe);
        if ( __trim ) {
            (*__data).trim(__cur.begin());
        }
    }
    else {
        ::hilti::rt::stream::View ncur = __cur;
        for ( ::hilti::rt::regexp::MatchState ms = __hlt_my_http::MyHTTP::__re_8.tokenMatcher(); ::hilti::rt::Bool(true);  ) {
            ::hilti::rt::integer::safe<int32_t> rc;
              __location__("my_http.spicy:10:13");
            std::tie(rc, ncur) = ms.advance(ncur);
            if ( ::hilti::rt::integer::safe<int32_t> __x = rc; __x == ::hilti::rt::integer::safe<std::int32_t>{-1} ) {
                ::hilti::rt::StrongReference<::spicy::rt::filter::detail::Filters> __lhs_12;
                // NOLINTNEXTLINE(clang-analyzer-deadcode.DeadStores);
                ::hilti::rt::Bool more_data = ::spicy::rt::detail::waitForInputOrEod(__data, ncur, (__lhs_12=(::hilti::rt::StrongReference<::spicy::rt::filter::detail::Filters>())));
                continue;
            }

            else if ( __x == ::hilti::rt::integer::safe<std::int32_t>{0} ) {
                  __location__("my_http.spicy:10:13");
                throw ::spicy::rt::ParseError(std::string("failed to match regular expression"), "my_http.spicy:10:13");
            }

            else  {
                __captures_5 = ms.captures((*__data));
                __transient_anon_7 = __cur.sub(ncur.begin()).data();
                __cur = ncur;
                break;
            }
        }
    }

    if ( __trim ) {
        (*__data).trim(__cur.begin());
    }

    // End parsing production: Ctor: anon_7 -> /[ \t]*/ (regexp);

    ::hilti::rt::Bytes __transient_anon_8;
    __location__("my_http.spicy:5:20");
    ::hilti::rt::Vector<::hilti::rt::Bytes> __captures_6;

    // Begin parsing production: Ctor: anon_8 -> /\r?\n/ (regexp);
    if ( ::hilti::rt::Bool(static_cast<bool>(__lah)) ) {
        if ( __lah != ::hilti::rt::integer::safe<std::int64_t>{5} ) {
              __location__("my_http.spicy:5:20");
            throw ::spicy::rt::ParseError(std::string("unexpected token to consume"), "my_http.spicy:5:20");
        }

        __transient_anon_8 = __cur.sub(__lahe).data();
        __lah = ::hilti::rt::integer::safe<std::int64_t>{0};
        __cur = __cur.advance(__lahe);
        if ( __trim ) {
            (*__data).trim(__cur.begin());
        }
    }
    else {
        ::hilti::rt::stream::View ncur = __cur;
        for ( ::hilti::rt::regexp::MatchState ms = __hlt_my_http::MyHTTP::__re_5.tokenMatcher(); ::hilti::rt::Bool(true);  ) {
            ::hilti::rt::integer::safe<int32_t> rc;
              __location__("my_http.spicy:5:20");
            std::tie(rc, ncur) = ms.advance(ncur);
            if ( ::hilti::rt::integer::safe<int32_t> __x = rc; __x == ::hilti::rt::integer::safe<std::int32_t>{-1} ) {
                ::hilti::rt::StrongReference<::spicy::rt::filter::detail::Filters> __lhs_13;
                // NOLINTNEXTLINE(clang-analyzer-deadcode.DeadStores);
                ::hilti::rt::Bool more_data = ::spicy::rt::detail::waitForInputOrEod(__data, ncur, (__lhs_13=(::hilti::rt::StrongReference<::spicy::rt::filter::detail::Filters>())));
                continue;
            }

            else if ( __x == ::hilti::rt::integer::safe<std::int32_t>{0} ) {
                  __location__("my_http.spicy:5:20");
                throw ::spicy::rt::ParseError(std::string("failed to match regular expression"), "my_http.spicy:5:20");
            }

            else  {
                __captures_6 = ms.captures((*__data));
                __transient_anon_8 = __cur.sub(ncur.begin()).data();
                __cur = ncur;
                break;
            }
        }
    }

    if ( __trim ) {
        (*__data).trim(__cur.begin());
    }

    // End parsing production: Ctor: anon_8 -> /\r?\n/ (regexp);

    (*__self).__error = __error;
      __location__("my_http.spicy:31:18-38:2");
    (void());
    __error = (*__self).__error;
    ::hilti::rt::debug::dedent(std::string("spicy"));
    __result = std::make_tuple(__cur, __lah, __lahe, __error);
    return __result;
}

auto __hlt_my_http::MyHTTP::FieldLine::__parse_stage1(::hilti::rt::ValueReference<::hilti::rt::Stream>& __data, std::optional<::hilti::rt::stream::SafeConstIterator> __begin, ::hilti::rt::stream::View __cur, ::hilti::rt::Bool __trim, ::hilti::rt::integer::safe<int64_t> __lah, ::hilti::rt::stream::SafeConstIterator __lahe, std::optional<::hilti::rt::RecoverableFailure> __error) -> std::tuple<::hilti::rt::stream::View, ::hilti::rt::integer::safe<int64_t>, ::hilti::rt::stream::SafeConstIterator, std::optional<::hilti::rt::RecoverableFailure>> {
    auto __self = FieldLine::__self();
    ::hilti::rt::detail::checkStack();
    __location__("my_http.spicy:31:18-38:2");
    std::tuple<::hilti::rt::stream::View, ::hilti::rt::integer::safe<int64_t>, ::hilti::rt::stream::SafeConstIterator, std::optional<::hilti::rt::RecoverableFailure>> __result;
    try {
        ::hilti::rt::debug::indent(std::string("spicy"));
        std::optional<::hilti::rt::stream::SafeConstIterator> __begin = std::make_optional(__cur.begin());
        (*__self).__error = __error;
          __location__("my_http.spicy:31:18-38:2");
        (void());
        __error = (*__self).__error;
        ::hilti::rt::StrongReference<::hilti::rt::Stream> filtered = ::hilti::rt::StrongReference<::hilti::rt::Stream>();
        if ( ! (::hilti::rt::Bool(static_cast<bool>(filtered))) ) {
            __result = (*__self).__parse_MyHTTP_FieldLine_stage2(__data, __begin, __cur, __trim, __lah, __lahe, __error);
        }
    }
    catch ( const ::std::exception& __except ) {
          __location__("my_http.spicy:31:18-38:2");
        (void());
        (*__self).__error = __error;
          __location__("my_http.spicy:31:18-38:2");
        (void());
        __error = (*__self).__error;
        throw;
    }

    (*__self).__error = __error;
      __location__("my_http.spicy:31:18-38:2");
    (void());
    __error = (*__self).__error;
    return __result;
}

inline void __hlt_my_http::MyHTTP::HTTPRequest::__on_0x25_done() {
    auto __self = MyHTTP::HTTPRequest::__self();
    return __hlt_my_http::MyHTTP::__hook_HTTPRequest___on_0x25_done(__self);
}

inline void __hlt_my_http::MyHTTP::HTTPRequest::__on_headers_foreach(const ::hilti::rt::ValueReference<__hlt_my_http::MyHTTP::FieldLine>& __dd, ::hilti::rt::Bool& __stop) {
    auto __self = MyHTTP::HTTPRequest::__self();
    return __hlt_my_http::MyHTTP::__hook_HTTPRequest___on_headers_foreach(__dd, __stop, __self);
}

auto __hlt_my_http::MyHTTP::HTTPRequest::__parse_MyHTTP_HTTPRequest_stage2(::hilti::rt::ValueReference<::hilti::rt::Stream>& __data, std::optional<::hilti::rt::stream::SafeConstIterator> __begin, ::hilti::rt::stream::View __cur, ::hilti::rt::Bool __trim, ::hilti::rt::integer::safe<int64_t> __lah, ::hilti::rt::stream::SafeConstIterator __lahe, std::optional<::hilti::rt::RecoverableFailure> __error) -> std::tuple<::hilti::rt::stream::View, ::hilti::rt::integer::safe<int64_t>, ::hilti::rt::stream::SafeConstIterator, std::optional<::hilti::rt::RecoverableFailure>> {
    ::hilti::rt::StrongReference<::spicy::rt::filter::detail::Filters> __lhs_19;
    auto __self = HTTPRequest::__self();
    ::hilti::rt::detail::checkStack();
    __location__("my_http.spicy:40:27-66:2");
    std::tuple<::hilti::rt::stream::View, ::hilti::rt::integer::safe<int64_t>, ::hilti::rt::stream::SafeConstIterator, std::optional<::hilti::rt::RecoverableFailure>> __result;
    __location__("my_http.spicy:22:20-29:2");

    // Begin parsing production: Unit: MyHTTP_RequestLine_2 -> method_2 anon_2_2 uri_2 anon_3_2 MyHTTP_Version_3 anon_4_3;
    ::hilti::rt::optional::valueOrInit((*__self).start_line) = (__hlt_my_http::MyHTTP::RequestLine());
    std::tie(__cur, __lah, __lahe, __error) = (*::hilti::rt::optional::value((*__self).start_line)).__parse_stage1(__data, __begin, __cur, __trim, __lah, __lahe, __error);
    // End parsing production: Unit: MyHTTP_RequestLine_2 -> method_2 anon_2_2 uri_2 anon_3_2 MyHTTP_Version_3 anon_4_3;

    (*__self).__error = __error;
      __location__("my_http.spicy:41:2");
    (void());
    __error = (*__self).__error;
    __location__("my_http.spicy:42:2");
    std::optional<::hilti::rt::stream::SafeConstIterator> __pre_container_offset = std::optional<::hilti::rt::stream::SafeConstIterator>();

    // Begin parsing production: While: headers -> while(<look-ahead-found>): MyHTTP_FieldLine_2;
    std::tie(__cur, __lah, __lahe, __error) = (*__self).__parse_headers_stage1(__data, __begin, __cur, __trim, __lah, __lahe, __error, ::hilti::rt::optional::valueOrInit((*__self).headers));
    // End parsing production: While: headers -> while(<look-ahead-found>): MyHTTP_FieldLine_2;

    std::optional<::hilti::rt::stream::SafeConstIterator> __prev = std::optional<::hilti::rt::stream::SafeConstIterator>();
    (*__self).__error = __error;
      __location__("my_http.spicy:42:2");
    (void());
    __error = (*__self).__error;
    ::hilti::rt::Bytes __transient_anon_9;
    __location__("my_http.spicy:5:20");
    ::hilti::rt::Vector<::hilti::rt::Bytes> __captures;

    // Begin parsing production: Ctor: anon_9_2 -> /\r?\n/ (regexp);
    if ( ::hilti::rt::Bool(static_cast<bool>(__lah)) ) {
        if ( __lah != ::hilti::rt::integer::safe<std::int64_t>{5} ) {
              __location__("my_http.spicy:5:20");
            throw ::spicy::rt::ParseError(std::string("unexpected token to consume"), "my_http.spicy:5:20");
        }

        __transient_anon_9 = __cur.sub(__lahe).data();
        __lah = ::hilti::rt::integer::safe<std::int64_t>{0};
        __cur = __cur.advance(__lahe);
        if ( __trim ) {
            (*__data).trim(__cur.begin());
        }
    }
    else {
        ::hilti::rt::stream::View ncur = __cur;
        for ( ::hilti::rt::regexp::MatchState ms = __hlt_my_http::MyHTTP::__re_5.tokenMatcher(); ::hilti::rt::Bool(true);  ) {
            ::hilti::rt::integer::safe<int32_t> rc;
              __location__("my_http.spicy:5:20");
            std::tie(rc, ncur) = ms.advance(ncur);
            if ( ::hilti::rt::integer::safe<int32_t> __x = rc; __x == ::hilti::rt::integer::safe<std::int32_t>{-1} ) {
                ::hilti::rt::StrongReference<::spicy::rt::filter::detail::Filters> __lhs_18;
                // NOLINTNEXTLINE(clang-analyzer-deadcode.DeadStores);
                ::hilti::rt::Bool more_data = ::spicy::rt::detail::waitForInputOrEod(__data, ncur, (__lhs_18=(::hilti::rt::StrongReference<::spicy::rt::filter::detail::Filters>())));
                continue;
            }

            else if ( __x == ::hilti::rt::integer::safe<std::int32_t>{0} ) {
                  __location__("my_http.spicy:5:20");
                throw ::spicy::rt::ParseError(std::string("failed to match regular expression"), "my_http.spicy:5:20");
            }

            else  {
                __captures = ms.captures((*__data));
                __transient_anon_9 = __cur.sub(ncur.begin()).data();
                __cur = ncur;
                break;
            }
        }
    }

    if ( __trim ) {
        (*__data).trim(__cur.begin());
    }

    // End parsing production: Ctor: anon_9_2 -> /\r?\n/ (regexp);

    __location__("my_http.spicy:51:8");
    ::hilti::rt::stream::View __limited_ = __cur.limit((*__self).clength);
    ::hilti::rt::stream::View __ncur = __cur.advance((*__self).clength);

    // Begin parsing production: Variable: body -> bytes;
    ::spicy::rt::detail::waitForEod(__data, __limited_, (__lhs_19=(::hilti::rt::StrongReference<::spicy::rt::filter::detail::Filters>())));
    ::hilti::rt::optional::valueOrInit((*__self).body) = __limited_.data();
    __limited_ = __limited_.advance(__limited_.size());
    if ( __trim ) {
        (*__data).trim(__limited_.begin());
    }

    // End parsing production: Variable: body -> bytes;

    if ( __limited_.offset() < __ncur.offset() ) {
        (*__self).body.reset();
          __location__("my_http.spicy:51:14");
        throw ::spicy::rt::ParseError(std::string("&size amount not consumed"), "my_http.spicy:51:14");
    }

    __cur = __ncur;
    (*__self).__error = __error;
      __location__("my_http.spicy:51:2");
    (void());
    __error = (*__self).__error;
    (*__self).__error = __error;
      __location__("my_http.spicy:40:27-66:2");
    (*__self).__on_0x25_done();
    __error = (*__self).__error;
    ::hilti::rt::debug::dedent(std::string("spicy"));
    __result = std::make_tuple(__cur, __lah, __lahe, __error);
    return __result;
}

auto __hlt_my_http::MyHTTP::HTTPRequest::__parse_headers_stage1(::hilti::rt::ValueReference<::hilti::rt::Stream>& __data, std::optional<::hilti::rt::stream::SafeConstIterator> __begin, ::hilti::rt::stream::View __cur, ::hilti::rt::Bool __trim, ::hilti::rt::integer::safe<int64_t> __lah, ::hilti::rt::stream::SafeConstIterator __lahe, std::optional<::hilti::rt::RecoverableFailure> __error, ::hilti::rt::Vector<__hlt_my_http::MyHTTP::FieldLine>& __dst) -> std::tuple<::hilti::rt::stream::View, ::hilti::rt::integer::safe<int64_t>, ::hilti::rt::stream::SafeConstIterator, std::optional<::hilti::rt::RecoverableFailure>> {
    auto __self = HTTPRequest::__self();
    ::hilti::rt::detail::checkStack();
    __location__("my_http.spicy:42:2");
    std::tuple<::hilti::rt::stream::View, ::hilti::rt::integer::safe<int64_t>, ::hilti::rt::stream::SafeConstIterator, std::optional<::hilti::rt::RecoverableFailure>> __result;
    while ( ::hilti::rt::Bool(true) ) {
        ::hilti::rt::StrongReference<::spicy::rt::filter::detail::Filters> __lhs_14;
        ::spicy::rt::detail::waitForInputOrEod(__data, __cur, ::hilti::rt::integer::safe<std::uint64_t>{1U}, (__lhs_14=(::hilti::rt::StrongReference<::spicy::rt::filter::detail::Filters>())));
        if ( ! (::hilti::rt::Bool(static_cast<bool>(__lah))) ) {
            ::hilti::rt::StrongReference<::spicy::rt::filter::detail::Filters> __lhs_15;
            if ( ::spicy::rt::detail::atEod(__data, __cur, (__lhs_15=(::hilti::rt::StrongReference<::spicy::rt::filter::detail::Filters>()))) ) {
                __lah = ::hilti::rt::integer::safe<std::int64_t>{-1};
            }
            else {
                ::hilti::rt::stream::View ncur = __cur;
                for ( ::hilti::rt::regexp::MatchState ms = __hlt_my_http::MyHTTP::__re_headers_l1.tokenMatcher(); ::hilti::rt::Bool(true);  ) {
                    ::hilti::rt::integer::safe<int32_t> rc;
                      __location__("my_http.spicy:42:2");
                    std::tie(rc, ncur) = ms.advance(ncur);
                    if ( ::hilti::rt::integer::safe<int32_t> __x = rc; __x == ::hilti::rt::integer::safe<std::int32_t>{-1} ) {
                        ::hilti::rt::StrongReference<::spicy::rt::filter::detail::Filters> __lhs_16;
                        if ( ::spicy::rt::detail::waitForInputOrEod(__data, __cur, (__lhs_16=(::hilti::rt::StrongReference<::spicy::rt::filter::detail::Filters>()))) ) {
                            continue;
                        }

                        __lah = ::hilti::rt::integer::safe<std::int64_t>{-1};
                        __lahe = __cur.begin();
                        break;
                    }

                    else if ( __x == ::hilti::rt::integer::safe<std::int32_t>{0} ) {
                        ::spicy::rt::detail::printParserState(std::string("MyHTTP::HTTPRequest"), __data, __begin, __cur, __lah, __lahe, std::string("default"), __trim, __error);
                        __lah = ::hilti::rt::integer::safe<std::int64_t>{0};
                        __lahe = __cur.begin();
                        break;
                    }

                    else  {
                        __lah = ::hilti::rt::integer::safe<int64_t>(rc);
                        __lahe = ncur.begin();
                        break;
                    }
                }

                ::spicy::rt::detail::printParserState(std::string("MyHTTP::HTTPRequest"), __data, __begin, __cur, __lah, __lahe, std::string("default"), __trim, __error);
            }
        }

        if ( ::hilti::rt::integer::safe<int64_t> __x = __lah; __x == ::hilti::rt::integer::safe<std::int64_t>{5} ) {
            break;
        }

        else if ( __x == ::hilti::rt::integer::safe<std::int64_t>{6} ) {
            ::hilti::rt::StrongReference<::spicy::rt::filter::detail::Filters> __lhs_17;
            ::hilti::rt::stream::SafeConstIterator __old_begin = __cur.begin();
            ::hilti::rt::ValueReference<__hlt_my_http::MyHTTP::FieldLine> __elem;
            __location__("my_http.spicy:31:18-38:2");

            // Begin parsing production: Unit: MyHTTP_FieldLine_2 -> field_name_2 anon_5_2 anon_6_2 field_value_2 anon_7_2 anon_8_2;
            __elem = (__hlt_my_http::MyHTTP::FieldLine());
            std::tie(__cur, __lah, __lahe, __error) = (*__elem).__parse_stage1(__data, __begin, __cur, __trim, __lah, __lahe, __error);
            // End parsing production: Unit: MyHTTP_FieldLine_2 -> field_name_2 anon_5_2 anon_6_2 field_value_2 anon_7_2 anon_8_2;

            ::hilti::rt::Bool __stop = ::hilti::rt::Bool(false);
            if ( ! (__stop) ) {
                (*__self).__error = __error;
                  __location__("my_http.spicy:42:2");
                (*__self).__on_headers_foreach(__elem, __stop);
                __error = (*__self).__error;
            }

            if ( ! (__stop) ) {
                __dst.emplace_back((*__elem));
            }

            if ( __stop ) {
                break;
            }

            if ( (__cur.begin() == __old_begin) && (! (::spicy::rt::detail::atEod(__data, __cur, (__lhs_17=(::hilti::rt::StrongReference<::spicy::rt::filter::detail::Filters>()))))) ) {
                  __location__("my_http.spicy:42:2");
                throw ::spicy::rt::ParseError(std::string("loop body did not change input position, possible infinite loop"), "my_http.spicy:42:2");
            }
        }

        else if ( __x == ::hilti::rt::integer::safe<std::int64_t>{-1} ) {
              __location__("my_http.spicy:42:2");
            throw ::spicy::rt::ParseError(std::string("expected look-ahead token, but reached end-of-data"), "my_http.spicy:42:2");
        }

        else  {
              __location__("my_http.spicy:42:2");
            throw ::spicy::rt::ParseError(std::string("no expected look-ahead token found"), "my_http.spicy:42:2");
        }
    }

    __result = std::make_tuple(__cur, __lah, __lahe, __error);
    return __result;
}

auto __hlt_my_http::MyHTTP::HTTPRequest::__parse_stage1(::hilti::rt::ValueReference<::hilti::rt::Stream>& __data, std::optional<::hilti::rt::stream::SafeConstIterator> __begin, ::hilti::rt::stream::View __cur, ::hilti::rt::Bool __trim, ::hilti::rt::integer::safe<int64_t> __lah, ::hilti::rt::stream::SafeConstIterator __lahe, std::optional<::hilti::rt::RecoverableFailure> __error) -> std::tuple<::hilti::rt::stream::View, ::hilti::rt::integer::safe<int64_t>, ::hilti::rt::stream::SafeConstIterator, std::optional<::hilti::rt::RecoverableFailure>> {
    auto __self = HTTPRequest::__self();
    ::hilti::rt::detail::checkStack();
    __location__("my_http.spicy:40:27-66:2");
    std::tuple<::hilti::rt::stream::View, ::hilti::rt::integer::safe<int64_t>, ::hilti::rt::stream::SafeConstIterator, std::optional<::hilti::rt::RecoverableFailure>> __result;
    try {
        ::hilti::rt::debug::indent(std::string("spicy"));
        std::optional<::hilti::rt::stream::SafeConstIterator> __begin = std::make_optional(__cur.begin());
        (*__self).__error = __error;
          __location__("my_http.spicy:40:27-66:2");
        (void());
        __error = (*__self).__error;
        ::hilti::rt::StrongReference<::hilti::rt::Stream> filtered = ::hilti::rt::StrongReference<::hilti::rt::Stream>();
        if ( ! (::hilti::rt::Bool(static_cast<bool>(filtered))) ) {
            __result = (*__self).__parse_MyHTTP_HTTPRequest_stage2(__data, __begin, __cur, __trim, __lah, __lahe, __error);
        }
    }
    catch ( const ::std::exception& __except ) {
          __location__("my_http.spicy:40:27-66:2");
        (void());
        (*__self).__error = __error;
          __location__("my_http.spicy:40:27-66:2");
        (void());
        __error = (*__self).__error;
        throw;
    }

    (*__self).__error = __error;
      __location__("my_http.spicy:40:27-66:2");
    (void());
    __error = (*__self).__error;
    return __result;
}

extern auto __hlt_my_http::MyHTTP::HTTPRequest::parse1(::hilti::rt::ValueReference<::hilti::rt::Stream>& data, const std::optional<::hilti::rt::stream::View>& cur, const std::optional<::spicy::rt::UnitContext>& context) -> ::hilti::rt::stream::View {
    ::hilti::rt::detail::checkStack();
    __location__("my_http.spicy:40:27-66:2");
    ::hilti::rt::ValueReference<__hlt_my_http::MyHTTP::HTTPRequest> unit = ::hilti::rt::reference::make_value<__hlt_my_http::MyHTTP::HTTPRequest>((__hlt_my_http::MyHTTP::HTTPRequest()));
    ::hilti::rt::stream::View ncur = (cur ? ::hilti::rt::optional::value(cur) : (*data).view());
    ::hilti::rt::integer::safe<int64_t> lahead = ::hilti::rt::integer::safe<std::int64_t>{0};
    ::hilti::rt::stream::SafeConstIterator lahead_end;
    std::optional<::hilti::rt::RecoverableFailure> error = std::optional<::hilti::rt::RecoverableFailure>();
    __location__("my_http.spicy:40:27-66:2");

    // Begin parsing production: Unit: MyHTTP_HTTPRequest -> MyHTTP_RequestLine_2 headers anon_9_2 body;
    std::tie(ncur, lahead, lahead_end, error) = (*unit).__parse_stage1(data, std::optional<::hilti::rt::stream::SafeConstIterator>(), ncur, ::hilti::rt::Bool(true), lahead, lahead_end, error);
    // End parsing production: Unit: MyHTTP_HTTPRequest -> MyHTTP_RequestLine_2 headers anon_9_2 body;

    if ( error.has_value() ) {
        throw ::spicy::rt::ParseError(::hilti::rt::fmt(std::string("successful synchronization never confirmed: %s"), ::hilti::rt::optional::value(error)), "");
    }

    return ncur;
}

extern auto __hlt_my_http::MyHTTP::HTTPRequest::parse2(::hilti::rt::ValueReference<__hlt_my_http::MyHTTP::HTTPRequest>& unit, ::hilti::rt::ValueReference<::hilti::rt::Stream>& data, const std::optional<::hilti::rt::stream::View>& cur, const std::optional<::spicy::rt::UnitContext>& context) -> ::hilti::rt::stream::View {
    ::hilti::rt::detail::checkStack();
    __location__("my_http.spicy:40:27-66:2");
    ::hilti::rt::stream::View ncur = (cur ? ::hilti::rt::optional::value(cur) : (*data).view());
    ::hilti::rt::integer::safe<int64_t> lahead = ::hilti::rt::integer::safe<std::int64_t>{0};
    ::hilti::rt::stream::SafeConstIterator lahead_end;
    std::optional<::hilti::rt::RecoverableFailure> error = std::optional<::hilti::rt::RecoverableFailure>();
    __location__("my_http.spicy:40:27-66:2");

    // Begin parsing production: Unit: MyHTTP_HTTPRequest -> MyHTTP_RequestLine_2 headers anon_9_2 body;
    std::tie(ncur, lahead, lahead_end, error) = (*unit).__parse_stage1(data, std::optional<::hilti::rt::stream::SafeConstIterator>(), ncur, ::hilti::rt::Bool(true), lahead, lahead_end, error);
    // End parsing production: Unit: MyHTTP_HTTPRequest -> MyHTTP_RequestLine_2 headers anon_9_2 body;

    if ( error.has_value() ) {
        throw ::spicy::rt::ParseError(::hilti::rt::fmt(std::string("successful synchronization never confirmed: %s"), ::hilti::rt::optional::value(error)), "");
    }

    return ncur;
}

extern auto __hlt_my_http::MyHTTP::HTTPRequest::parse3(::hilti::rt::ValueReference<::spicy::rt::ParsedUnit>& gunit, ::hilti::rt::ValueReference<::hilti::rt::Stream>& data, const std::optional<::hilti::rt::stream::View>& cur, const std::optional<::spicy::rt::UnitContext>& context) -> ::hilti::rt::stream::View {
    ::hilti::rt::detail::checkStack();
    __location__("my_http.spicy:40:27-66:2");
    ::hilti::rt::ValueReference<__hlt_my_http::MyHTTP::HTTPRequest> unit = ::hilti::rt::reference::make_value<__hlt_my_http::MyHTTP::HTTPRequest>((__hlt_my_http::MyHTTP::HTTPRequest()));
    ::spicy::rt::ParsedUnit::initialize((*gunit), unit, &type_info::__ti_MyHTTP_HTTPRequest);
    ::hilti::rt::stream::View ncur = (cur ? ::hilti::rt::optional::value(cur) : (*data).view());
    ::hilti::rt::integer::safe<int64_t> lahead = ::hilti::rt::integer::safe<std::int64_t>{0};
    ::hilti::rt::stream::SafeConstIterator lahead_end;
    std::optional<::hilti::rt::RecoverableFailure> error = std::optional<::hilti::rt::RecoverableFailure>();
    __location__("my_http.spicy:40:27-66:2");

    // Begin parsing production: Unit: MyHTTP_HTTPRequest -> MyHTTP_RequestLine_2 headers anon_9_2 body;
    std::tie(ncur, lahead, lahead_end, error) = (*unit).__parse_stage1(data, std::optional<::hilti::rt::stream::SafeConstIterator>(), ncur, ::hilti::rt::Bool(true), lahead, lahead_end, error);
    // End parsing production: Unit: MyHTTP_HTTPRequest -> MyHTTP_RequestLine_2 headers anon_9_2 body;

    if ( error.has_value() ) {
        throw ::spicy::rt::ParseError(::hilti::rt::fmt(std::string("successful synchronization never confirmed: %s"), ::hilti::rt::optional::value(error)), "");
    }

    return ncur;
}

auto __hlt_my_http::MyHTTP::RequestLine::__parse_MyHTTP_RequestLine_stage2(::hilti::rt::ValueReference<::hilti::rt::Stream>& __data, std::optional<::hilti::rt::stream::SafeConstIterator> __begin, ::hilti::rt::stream::View __cur, ::hilti::rt::Bool __trim, ::hilti::rt::integer::safe<int64_t> __lah, ::hilti::rt::stream::SafeConstIterator __lahe, std::optional<::hilti::rt::RecoverableFailure> __error) -> std::tuple<::hilti::rt::stream::View, ::hilti::rt::integer::safe<int64_t>, ::hilti::rt::stream::SafeConstIterator, std::optional<::hilti::rt::RecoverableFailure>> {
    auto __self = RequestLine::__self();
    ::hilti::rt::detail::checkStack();
    __location__("my_http.spicy:22:20-29:2");
    std::tuple<::hilti::rt::stream::View, ::hilti::rt::integer::safe<int64_t>, ::hilti::rt::stream::SafeConstIterator, std::optional<::hilti::rt::RecoverableFailure>> __result;
    __location__("my_http.spicy:3:20");
    ::hilti::rt::Vector<::hilti::rt::Bytes> __captures;

    // Begin parsing production: Ctor: method -> /[^ \t\r\n]+/ (regexp);
    if ( ::hilti::rt::Bool(static_cast<bool>(__lah)) ) {
        if ( __lah != ::hilti::rt::integer::safe<std::int64_t>{3} ) {
              __location__("my_http.spicy:3:20");
            throw ::spicy::rt::ParseError(std::string("unexpected token to consume"), "my_http.spicy:3:20");
        }

        ::hilti::rt::optional::valueOrInit((*__self).method) = __cur.sub(__lahe).data();
        __lah = ::hilti::rt::integer::safe<std::int64_t>{0};
        __cur = __cur.advance(__lahe);
        if ( __trim ) {
            (*__data).trim(__cur.begin());
        }
    }
    else {
        ::hilti::rt::stream::View ncur = __cur;
        for ( ::hilti::rt::regexp::MatchState ms = __hlt_my_http::MyHTTP::__re_3.tokenMatcher(); ::hilti::rt::Bool(true);  ) {
            ::hilti::rt::integer::safe<int32_t> rc;
              __location__("my_http.spicy:3:20");
            std::tie(rc, ncur) = ms.advance(ncur);
            if ( ::hilti::rt::integer::safe<int32_t> __x = rc; __x == ::hilti::rt::integer::safe<std::int32_t>{-1} ) {
                ::hilti::rt::StrongReference<::spicy::rt::filter::detail::Filters> __lhs_3;
                // NOLINTNEXTLINE(clang-analyzer-deadcode.DeadStores);
                ::hilti::rt::Bool more_data = ::spicy::rt::detail::waitForInputOrEod(__data, ncur, (__lhs_3=(::hilti::rt::StrongReference<::spicy::rt::filter::detail::Filters>())));
                continue;
            }

            else if ( __x == ::hilti::rt::integer::safe<std::int32_t>{0} ) {
                  __location__("my_http.spicy:3:20");
                throw ::spicy::rt::ParseError(std::string("failed to match regular expression"), "my_http.spicy:3:20");
            }

            else  {
                __captures = ms.captures((*__data));
                ::hilti::rt::optional::valueOrInit((*__self).method) = __cur.sub(ncur.begin()).data();
                __cur = ncur;
                break;
            }
        }
    }

    if ( __trim ) {
        (*__data).trim(__cur.begin());
    }

    // End parsing production: Ctor: method -> /[^ \t\r\n]+/ (regexp);

    (*__self).__error = __error;
      __location__("my_http.spicy:23:5");
    (void());
    __error = (*__self).__error;
    ::hilti::rt::Bytes __transient_anon_2;
    __location__("my_http.spicy:4:20");
    ::hilti::rt::Vector<::hilti::rt::Bytes> __captures_2;

    // Begin parsing production: Ctor: anon_2 -> /[ \t]+/ (regexp);
    if ( ::hilti::rt::Bool(static_cast<bool>(__lah)) ) {
        if ( __lah != ::hilti::rt::integer::safe<std::int64_t>{4} ) {
              __location__("my_http.spicy:4:20");
            throw ::spicy::rt::ParseError(std::string("unexpected token to consume"), "my_http.spicy:4:20");
        }

        __transient_anon_2 = __cur.sub(__lahe).data();
        __lah = ::hilti::rt::integer::safe<std::int64_t>{0};
        __cur = __cur.advance(__lahe);
        if ( __trim ) {
            (*__data).trim(__cur.begin());
        }
    }
    else {
        ::hilti::rt::stream::View ncur = __cur;
        for ( ::hilti::rt::regexp::MatchState ms = __hlt_my_http::MyHTTP::__re_4.tokenMatcher(); ::hilti::rt::Bool(true);  ) {
            ::hilti::rt::integer::safe<int32_t> rc;
              __location__("my_http.spicy:4:20");
            std::tie(rc, ncur) = ms.advance(ncur);
            if ( ::hilti::rt::integer::safe<int32_t> __x = rc; __x == ::hilti::rt::integer::safe<std::int32_t>{-1} ) {
                ::hilti::rt::StrongReference<::spicy::rt::filter::detail::Filters> __lhs_4;
                // NOLINTNEXTLINE(clang-analyzer-deadcode.DeadStores);
                ::hilti::rt::Bool more_data = ::spicy::rt::detail::waitForInputOrEod(__data, ncur, (__lhs_4=(::hilti::rt::StrongReference<::spicy::rt::filter::detail::Filters>())));
                continue;
            }

            else if ( __x == ::hilti::rt::integer::safe<std::int32_t>{0} ) {
                  __location__("my_http.spicy:4:20");
                throw ::spicy::rt::ParseError(std::string("failed to match regular expression"), "my_http.spicy:4:20");
            }

            else  {
                __captures_2 = ms.captures((*__data));
                __transient_anon_2 = __cur.sub(ncur.begin()).data();
                __cur = ncur;
                break;
            }
        }
    }

    if ( __trim ) {
        (*__data).trim(__cur.begin());
    }

    // End parsing production: Ctor: anon_2 -> /[ \t]+/ (regexp);

    __location__("my_http.spicy:3:20");
    ::hilti::rt::Vector<::hilti::rt::Bytes> __captures_3;

    // Begin parsing production: Ctor: uri -> /[^ \t\r\n]+/ (regexp);
    if ( ::hilti::rt::Bool(static_cast<bool>(__lah)) ) {
        if ( __lah != ::hilti::rt::integer::safe<std::int64_t>{3} ) {
              __location__("my_http.spicy:3:20");
            throw ::spicy::rt::ParseError(std::string("unexpected token to consume"), "my_http.spicy:3:20");
        }

        ::hilti::rt::optional::valueOrInit((*__self).uri) = __cur.sub(__lahe).data();
        __lah = ::hilti::rt::integer::safe<std::int64_t>{0};
        __cur = __cur.advance(__lahe);
        if ( __trim ) {
            (*__data).trim(__cur.begin());
        }
    }
    else {
        ::hilti::rt::stream::View ncur = __cur;
        for ( ::hilti::rt::regexp::MatchState ms = __hlt_my_http::MyHTTP::__re_3.tokenMatcher(); ::hilti::rt::Bool(true);  ) {
            ::hilti::rt::integer::safe<int32_t> rc;
              __location__("my_http.spicy:3:20");
            std::tie(rc, ncur) = ms.advance(ncur);
            if ( ::hilti::rt::integer::safe<int32_t> __x = rc; __x == ::hilti::rt::integer::safe<std::int32_t>{-1} ) {
                ::hilti::rt::StrongReference<::spicy::rt::filter::detail::Filters> __lhs_5;
                // NOLINTNEXTLINE(clang-analyzer-deadcode.DeadStores);
                ::hilti::rt::Bool more_data = ::spicy::rt::detail::waitForInputOrEod(__data, ncur, (__lhs_5=(::hilti::rt::StrongReference<::spicy::rt::filter::detail::Filters>())));
                continue;
            }

            else if ( __x == ::hilti::rt::integer::safe<std::int32_t>{0} ) {
                  __location__("my_http.spicy:3:20");
                throw ::spicy::rt::ParseError(std::string("failed to match regular expression"), "my_http.spicy:3:20");
            }

            else  {
                __captures_3 = ms.captures((*__data));
                ::hilti::rt::optional::valueOrInit((*__self).uri) = __cur.sub(ncur.begin()).data();
                __cur = ncur;
                break;
            }
        }
    }

    if ( __trim ) {
        (*__data).trim(__cur.begin());
    }

    // End parsing production: Ctor: uri -> /[^ \t\r\n]+/ (regexp);

    (*__self).__error = __error;
      __location__("my_http.spicy:25:5");
    (void());
    __error = (*__self).__error;
    ::hilti::rt::Bytes __transient_anon_3;
    __location__("my_http.spicy:4:20");
    ::hilti::rt::Vector<::hilti::rt::Bytes> __captures_4;

    // Begin parsing production: Ctor: anon_3 -> /[ \t]+/ (regexp);
    if ( ::hilti::rt::Bool(static_cast<bool>(__lah)) ) {
        if ( __lah != ::hilti::rt::integer::safe<std::int64_t>{4} ) {
              __location__("my_http.spicy:4:20");
            throw ::spicy::rt::ParseError(std::string("unexpected token to consume"), "my_http.spicy:4:20");
        }

        __transient_anon_3 = __cur.sub(__lahe).data();
        __lah = ::hilti::rt::integer::safe<std::int64_t>{0};
        __cur = __cur.advance(__lahe);
        if ( __trim ) {
            (*__data).trim(__cur.begin());
        }
    }
    else {
        ::hilti::rt::stream::View ncur = __cur;
        for ( ::hilti::rt::regexp::MatchState ms = __hlt_my_http::MyHTTP::__re_4.tokenMatcher(); ::hilti::rt::Bool(true);  ) {
            ::hilti::rt::integer::safe<int32_t> rc;
              __location__("my_http.spicy:4:20");
            std::tie(rc, ncur) = ms.advance(ncur);
            if ( ::hilti::rt::integer::safe<int32_t> __x = rc; __x == ::hilti::rt::integer::safe<std::int32_t>{-1} ) {
                ::hilti::rt::StrongReference<::spicy::rt::filter::detail::Filters> __lhs_6;
                // NOLINTNEXTLINE(clang-analyzer-deadcode.DeadStores);
                ::hilti::rt::Bool more_data = ::spicy::rt::detail::waitForInputOrEod(__data, ncur, (__lhs_6=(::hilti::rt::StrongReference<::spicy::rt::filter::detail::Filters>())));
                continue;
            }

            else if ( __x == ::hilti::rt::integer::safe<std::int32_t>{0} ) {
                  __location__("my_http.spicy:4:20");
                throw ::spicy::rt::ParseError(std::string("failed to match regular expression"), "my_http.spicy:4:20");
            }

            else  {
                __captures_4 = ms.captures((*__data));
                __transient_anon_3 = __cur.sub(ncur.begin()).data();
                __cur = ncur;
                break;
            }
        }
    }

    if ( __trim ) {
        (*__data).trim(__cur.begin());
    }

    // End parsing production: Ctor: anon_3 -> /[ \t]+/ (regexp);

    __location__("my_http.spicy:17:16-20:2");

    // Begin parsing production: Unit: MyHTTP_Version_2 -> anon_4 number_2;
    ::hilti::rt::optional::valueOrInit((*__self).version) = (__hlt_my_http::MyHTTP::Version());
    std::tie(__cur, __lah, __lahe, __error) = (*::hilti::rt::optional::value((*__self).version)).__parse_stage1(__data, __begin, __cur, __trim, __lah, __lahe, __error);
    // End parsing production: Unit: MyHTTP_Version_2 -> anon_4 number_2;

    (*__self).__error = __error;
      __location__("my_http.spicy:27:5");
    (void());
    __error = (*__self).__error;
    ::hilti::rt::Bytes __transient_anon_4;
    __location__("my_http.spicy:5:20");
    ::hilti::rt::Vector<::hilti::rt::Bytes> __captures_5;

    // Begin parsing production: Ctor: anon_4_2 -> /\r?\n/ (regexp);
    if ( ::hilti::rt::Bool(static_cast<bool>(__lah)) ) {
        if ( __lah != ::hilti::rt::integer::safe<std::int64_t>{5} ) {
              __location__("my_http.spicy:5:20");
            throw ::spicy::rt::ParseError(std::string("unexpected token to consume"), "my_http.spicy:5:20");
        }

        __transient_anon_4 = __cur.sub(__lahe).data();
        __lah = ::hilti::rt::integer::safe<std::int64_t>{0};
        __cur = __cur.advance(__lahe);
        if ( __trim ) {
            (*__data).trim(__cur.begin());
        }
    }
    else {
        ::hilti::rt::stream::View ncur = __cur;
        for ( ::hilti::rt::regexp::MatchState ms = __hlt_my_http::MyHTTP::__re_5.tokenMatcher(); ::hilti::rt::Bool(true);  ) {
            ::hilti::rt::integer::safe<int32_t> rc;
              __location__("my_http.spicy:5:20");
            std::tie(rc, ncur) = ms.advance(ncur);
            if ( ::hilti::rt::integer::safe<int32_t> __x = rc; __x == ::hilti::rt::integer::safe<std::int32_t>{-1} ) {
                ::hilti::rt::StrongReference<::spicy::rt::filter::detail::Filters> __lhs_7;
                // NOLINTNEXTLINE(clang-analyzer-deadcode.DeadStores);
                ::hilti::rt::Bool more_data = ::spicy::rt::detail::waitForInputOrEod(__data, ncur, (__lhs_7=(::hilti::rt::StrongReference<::spicy::rt::filter::detail::Filters>())));
                continue;
            }

            else if ( __x == ::hilti::rt::integer::safe<std::int32_t>{0} ) {
                  __location__("my_http.spicy:5:20");
                throw ::spicy::rt::ParseError(std::string("failed to match regular expression"), "my_http.spicy:5:20");
            }

            else  {
                __captures_5 = ms.captures((*__data));
                __transient_anon_4 = __cur.sub(ncur.begin()).data();
                __cur = ncur;
                break;
            }
        }
    }

    if ( __trim ) {
        (*__data).trim(__cur.begin());
    }

    // End parsing production: Ctor: anon_4_2 -> /\r?\n/ (regexp);

    (*__self).__error = __error;
      __location__("my_http.spicy:22:20-29:2");
    (void());
    __error = (*__self).__error;
    ::hilti::rt::debug::dedent(std::string("spicy"));
    __result = std::make_tuple(__cur, __lah, __lahe, __error);
    return __result;
}

auto __hlt_my_http::MyHTTP::RequestLine::__parse_stage1(::hilti::rt::ValueReference<::hilti::rt::Stream>& __data, std::optional<::hilti::rt::stream::SafeConstIterator> __begin, ::hilti::rt::stream::View __cur, ::hilti::rt::Bool __trim, ::hilti::rt::integer::safe<int64_t> __lah, ::hilti::rt::stream::SafeConstIterator __lahe, std::optional<::hilti::rt::RecoverableFailure> __error) -> std::tuple<::hilti::rt::stream::View, ::hilti::rt::integer::safe<int64_t>, ::hilti::rt::stream::SafeConstIterator, std::optional<::hilti::rt::RecoverableFailure>> {
    auto __self = RequestLine::__self();
    ::hilti::rt::detail::checkStack();
    __location__("my_http.spicy:22:20-29:2");
    std::tuple<::hilti::rt::stream::View, ::hilti::rt::integer::safe<int64_t>, ::hilti::rt::stream::SafeConstIterator, std::optional<::hilti::rt::RecoverableFailure>> __result;
    try {
        ::hilti::rt::debug::indent(std::string("spicy"));
        std::optional<::hilti::rt::stream::SafeConstIterator> __begin = std::make_optional(__cur.begin());
        (*__self).__error = __error;
          __location__("my_http.spicy:22:20-29:2");
        (void());
        __error = (*__self).__error;
        ::hilti::rt::StrongReference<::hilti::rt::Stream> filtered = ::hilti::rt::StrongReference<::hilti::rt::Stream>();
        if ( ! (::hilti::rt::Bool(static_cast<bool>(filtered))) ) {
            __result = (*__self).__parse_MyHTTP_RequestLine_stage2(__data, __begin, __cur, __trim, __lah, __lahe, __error);
        }
    }
    catch ( const ::std::exception& __except ) {
          __location__("my_http.spicy:22:20-29:2");
        (void());
        (*__self).__error = __error;
          __location__("my_http.spicy:22:20-29:2");
        (void());
        __error = (*__self).__error;
        throw;
    }

    (*__self).__error = __error;
      __location__("my_http.spicy:22:20-29:2");
    (void());
    __error = (*__self).__error;
    return __result;
}

auto __hlt_my_http::MyHTTP::Version::__parse_MyHTTP_Version_stage2(::hilti::rt::ValueReference<::hilti::rt::Stream>& __data, std::optional<::hilti::rt::stream::SafeConstIterator> __begin, ::hilti::rt::stream::View __cur, ::hilti::rt::Bool __trim, ::hilti::rt::integer::safe<int64_t> __lah, ::hilti::rt::stream::SafeConstIterator __lahe, std::optional<::hilti::rt::RecoverableFailure> __error) -> std::tuple<::hilti::rt::stream::View, ::hilti::rt::integer::safe<int64_t>, ::hilti::rt::stream::SafeConstIterator, std::optional<::hilti::rt::RecoverableFailure>> {
    auto __self = Version::__self();
    ::hilti::rt::detail::checkStack();
    __location__("my_http.spicy:17:16-20:2");
    std::tuple<::hilti::rt::stream::View, ::hilti::rt::integer::safe<int64_t>, ::hilti::rt::stream::SafeConstIterator, std::optional<::hilti::rt::RecoverableFailure>> __result;
    ::hilti::rt::Bytes __transient_anon;
    __location__("my_http.spicy:18:13");
    ::hilti::rt::Vector<::hilti::rt::Bytes> __captures;

    // Begin parsing production: Ctor: anon -> /HTTP// (regexp);
    if ( ::hilti::rt::Bool(static_cast<bool>(__lah)) ) {
        if ( __lah != ::hilti::rt::integer::safe<std::int64_t>{1} ) {
              __location__("my_http.spicy:18:13");
            throw ::spicy::rt::ParseError(std::string("unexpected token to consume"), "my_http.spicy:18:13");
        }

        __transient_anon = __cur.sub(__lahe).data();
        __lah = ::hilti::rt::integer::safe<std::int64_t>{0};
        __cur = __cur.advance(__lahe);
        if ( __trim ) {
            (*__data).trim(__cur.begin());
        }
    }
    else {
        ::hilti::rt::stream::View ncur = __cur;
        for ( ::hilti::rt::regexp::MatchState ms = __hlt_my_http::MyHTTP::__re_1.tokenMatcher(); ::hilti::rt::Bool(true);  ) {
            ::hilti::rt::integer::safe<int32_t> rc;
              __location__("my_http.spicy:18:13");
            std::tie(rc, ncur) = ms.advance(ncur);
            if ( ::hilti::rt::integer::safe<int32_t> __x = rc; __x == ::hilti::rt::integer::safe<std::int32_t>{-1} ) {
                ::hilti::rt::StrongReference<::spicy::rt::filter::detail::Filters> __lhs_1;
                // NOLINTNEXTLINE(clang-analyzer-deadcode.DeadStores);
                ::hilti::rt::Bool more_data = ::spicy::rt::detail::waitForInputOrEod(__data, ncur, (__lhs_1=(::hilti::rt::StrongReference<::spicy::rt::filter::detail::Filters>())));
                continue;
            }

            else if ( __x == ::hilti::rt::integer::safe<std::int32_t>{0} ) {
                  __location__("my_http.spicy:18:13");
                throw ::spicy::rt::ParseError(std::string("failed to match regular expression"), "my_http.spicy:18:13");
            }

            else  {
                __captures = ms.captures((*__data));
                __transient_anon = __cur.sub(ncur.begin()).data();
                __cur = ncur;
                break;
            }
        }
    }

    if ( __trim ) {
        (*__data).trim(__cur.begin());
    }

    // End parsing production: Ctor: anon -> /HTTP// (regexp);

    __location__("my_http.spicy:19:13");
    ::hilti::rt::Vector<::hilti::rt::Bytes> __captures_2;

    // Begin parsing production: Ctor: number -> /[0-9]+\.[0-9]+/ (regexp);
    if ( ::hilti::rt::Bool(static_cast<bool>(__lah)) ) {
        if ( __lah != ::hilti::rt::integer::safe<std::int64_t>{2} ) {
              __location__("my_http.spicy:19:13");
            throw ::spicy::rt::ParseError(std::string("unexpected token to consume"), "my_http.spicy:19:13");
        }

        ::hilti::rt::optional::valueOrInit((*__self).number) = __cur.sub(__lahe).data();
        __lah = ::hilti::rt::integer::safe<std::int64_t>{0};
        __cur = __cur.advance(__lahe);
        if ( __trim ) {
            (*__data).trim(__cur.begin());
        }
    }
    else {
        ::hilti::rt::stream::View ncur = __cur;
        for ( ::hilti::rt::regexp::MatchState ms = __hlt_my_http::MyHTTP::__re_2.tokenMatcher(); ::hilti::rt::Bool(true);  ) {
            ::hilti::rt::integer::safe<int32_t> rc;
              __location__("my_http.spicy:19:13");
            std::tie(rc, ncur) = ms.advance(ncur);
            if ( ::hilti::rt::integer::safe<int32_t> __x = rc; __x == ::hilti::rt::integer::safe<std::int32_t>{-1} ) {
                ::hilti::rt::StrongReference<::spicy::rt::filter::detail::Filters> __lhs_2;
                // NOLINTNEXTLINE(clang-analyzer-deadcode.DeadStores);
                ::hilti::rt::Bool more_data = ::spicy::rt::detail::waitForInputOrEod(__data, ncur, (__lhs_2=(::hilti::rt::StrongReference<::spicy::rt::filter::detail::Filters>())));
                continue;
            }

            else if ( __x == ::hilti::rt::integer::safe<std::int32_t>{0} ) {
                  __location__("my_http.spicy:19:13");
                throw ::spicy::rt::ParseError(std::string("failed to match regular expression"), "my_http.spicy:19:13");
            }

            else  {
                __captures_2 = ms.captures((*__data));
                ::hilti::rt::optional::valueOrInit((*__self).number) = __cur.sub(ncur.begin()).data();
                __cur = ncur;
                break;
            }
        }
    }

    if ( __trim ) {
        (*__data).trim(__cur.begin());
    }

    // End parsing production: Ctor: number -> /[0-9]+\.[0-9]+/ (regexp);

    (*__self).__error = __error;
      __location__("my_http.spicy:19:5");
    (void());
    __error = (*__self).__error;
    (*__self).__error = __error;
      __location__("my_http.spicy:17:16-20:2");
    (void());
    __error = (*__self).__error;
    ::hilti::rt::debug::dedent(std::string("spicy"));
    __result = std::make_tuple(__cur, __lah, __lahe, __error);
    return __result;
}

auto __hlt_my_http::MyHTTP::Version::__parse_stage1(::hilti::rt::ValueReference<::hilti::rt::Stream>& __data, std::optional<::hilti::rt::stream::SafeConstIterator> __begin, ::hilti::rt::stream::View __cur, ::hilti::rt::Bool __trim, ::hilti::rt::integer::safe<int64_t> __lah, ::hilti::rt::stream::SafeConstIterator __lahe, std::optional<::hilti::rt::RecoverableFailure> __error) -> std::tuple<::hilti::rt::stream::View, ::hilti::rt::integer::safe<int64_t>, ::hilti::rt::stream::SafeConstIterator, std::optional<::hilti::rt::RecoverableFailure>> {
    auto __self = Version::__self();
    ::hilti::rt::detail::checkStack();
    __location__("my_http.spicy:17:16-20:2");
    std::tuple<::hilti::rt::stream::View, ::hilti::rt::integer::safe<int64_t>, ::hilti::rt::stream::SafeConstIterator, std::optional<::hilti::rt::RecoverableFailure>> __result;
    try {
        ::hilti::rt::debug::indent(std::string("spicy"));
        std::optional<::hilti::rt::stream::SafeConstIterator> __begin = std::make_optional(__cur.begin());
        (*__self).__error = __error;
          __location__("my_http.spicy:17:16-20:2");
        (void());
        __error = (*__self).__error;
        ::hilti::rt::StrongReference<::hilti::rt::Stream> filtered = ::hilti::rt::StrongReference<::hilti::rt::Stream>();
        if ( ! (::hilti::rt::Bool(static_cast<bool>(filtered))) ) {
            __result = (*__self).__parse_MyHTTP_Version_stage2(__data, __begin, __cur, __trim, __lah, __lahe, __error);
        }
    }
    catch ( const ::std::exception& __except ) {
          __location__("my_http.spicy:17:16-20:2");
        (void());
        (*__self).__error = __error;
          __location__("my_http.spicy:17:16-20:2");
        (void());
        __error = (*__self).__error;
        throw;
    }

    (*__self).__error = __error;
      __location__("my_http.spicy:17:16-20:2");
    (void());
    __error = (*__self).__error;
    return __result;
}

extern void __hlt_my_http::MyHTTP::__hook_HTTPRequest___on_0x25_done_6199(::hilti::rt::ValueReference<HTTPRequest>& __self) {
    ::hilti::rt::detail::checkStack();
      __location__("my_http.spicy:58:3");
    ::hilti::rt::print(::hilti::rt::fmt(std::string("%s, %s, %s"), ::hilti::rt::optional::value((*::hilti::rt::optional::value((*__self).start_line)).method), ::hilti::rt::optional::value((*::hilti::rt::optional::value((*__self).start_line)).uri), ::hilti::rt::optional::value((*::hilti::rt::optional::value((*::hilti::rt::optional::value((*__self).start_line)).version)).number)), ::hilti::rt::Bool(true));
      __location__("my_http.spicy:59:3-61:4");

    {
        auto __seq = ::hilti::rt::optional::value((*__self).headers);
        for ( const auto& h : ::hilti::rt::range(__seq) ) {
              __location__("my_http.spicy:60:4");
            ::hilti::rt::print(::hilti::rt::fmt(std::string("%s:%s"), ::hilti::rt::optional::value(h.field_name), ::hilti::rt::optional::value(h.field_value)), ::hilti::rt::Bool(true));
        }
    }

      __location__("my_http.spicy:62:3-64:4");
    if ( ::hilti::rt::optional::value((*__self).body) != ""_b ) {
          __location__("my_http.spicy:63:4");
        ::hilti::rt::print(::hilti::rt::fmt(std::string("%s"), ::hilti::rt::optional::value((*__self).body)), ::hilti::rt::Bool(true));
    }
}

extern void __hlt_my_http::MyHTTP::__hook_HTTPRequest___on_headers_foreach_41a2(const ::hilti::rt::ValueReference<__hlt_my_http::MyHTTP::FieldLine>& __dd, ::hilti::rt::Bool& __stop, ::hilti::rt::ValueReference<HTTPRequest>& __self) {
    ::hilti::rt::detail::checkStack();
      __location__("my_http.spicy:47:3-49:4");
    if ( ::hilti::rt::optional::value((*__dd).field_name) == "Content-Length"_b ) {
          __location__("my_http.spicy:47:46-48:43");
        (*__self).clength = ::hilti::rt::optional::value((*__dd).field_value).toUInt();
    }
}

extern void __hlt_my_http::MyHTTP::__init_module() {
    __hlt_my_http::MyHTTP::__register_MyHTTP_Version();
    __hlt_my_http::MyHTTP::__register_MyHTTP_RequestLine();
    __hlt_my_http::MyHTTP::__register_MyHTTP_FieldLine();
    __hlt_my_http::MyHTTP::__register_MyHTTP_HTTPRequest();
}

extern void __hlt_my_http::MyHTTP::__register_MyHTTP_FieldLine() { ::hilti::rt::detail::checkStack(); }

extern void __hlt_my_http::MyHTTP::__register_MyHTTP_HTTPRequest() {
    ::hilti::rt::detail::checkStack();
    MyHTTP::HTTPRequest::__parser = ::spicy::rt::Parser(std::string("MyHTTP::HTTPRequest"), ::hilti::rt::Bool(true), hlt_my_http::MyHTTP::HTTPRequest::parse1, hlt_my_http::MyHTTP::HTTPRequest::parse2, hlt_my_http::MyHTTP::HTTPRequest::parse3, ::hilti::rt::Null(), &type_info::__ti_MyHTTP_HTTPRequest, std::string(""), ::hilti::rt::Vector<::spicy::rt::MIMEType>({}), ::hilti::rt::Vector<::spicy::rt::ParserPort>({}));
    ::spicy::rt::detail::registerParser(MyHTTP::HTTPRequest::__parser, std::string(__hlt_my_http_hlto_scope), ::hilti::rt::StrongReference<__hlt_my_http::MyHTTP::HTTPRequest>());
}

extern void __hlt_my_http::MyHTTP::__register_MyHTTP_RequestLine() { ::hilti::rt::detail::checkStack(); }

extern void __hlt_my_http::MyHTTP::__register_MyHTTP_Version() { ::hilti::rt::detail::checkStack(); }

extern void __hlt_my_http::MyHTTP::__register_module() { ::hilti::rt::detail::registerModule({ "MyHTTP", __hlt_my_http_hlto_scope, &__init_module, nullptr, nullptr, nullptr}); }

static auto __hlt_my_http::MyHTTP::operator<<(std::ostream& o, const __hlt_my_http::MyHTTP::Version& x) -> std::ostream& { o << ::hilti::rt::to_string(x); return o; }

static auto __hlt_my_http::MyHTTP::operator<<(std::ostream& o, const __hlt_my_http::MyHTTP::FieldLine& x) -> std::ostream& { o << ::hilti::rt::to_string(x); return o; }

static auto __hlt_my_http::MyHTTP::operator<<(std::ostream& o, const __hlt_my_http::MyHTTP::RequestLine& x) -> std::ostream& { o << ::hilti::rt::to_string(x); return o; }

static auto __hlt_my_http::MyHTTP::operator<<(std::ostream& o, const __hlt_my_http::MyHTTP::HTTPRequest& x) -> std::ostream& { o << ::hilti::rt::to_string(x); return o; }

extern auto hlt_my_http::MyHTTP::HTTPRequest::parse1(::hilti::rt::ValueReference<::hilti::rt::Stream>& data, const std::optional<::hilti::rt::stream::View>& cur, const std::optional<::spicy::rt::UnitContext>& context) -> ::hilti::rt::Resumable {
    auto args = std::make_tuple(::hilti::rt::resumable::detail::copyArg(data), ::hilti::rt::resumable::detail::copyArg(cur), ::hilti::rt::resumable::detail::copyArg(context));
    auto args_on_heap = std::make_shared<decltype(args)>(std::move(args));
    auto cb = [args_on_heap](hilti::rt::resumable::Handle* r) -> hilti::rt::any {
        return __hlt_my_http::MyHTTP::HTTPRequest::parse1(std::get<0>(*args_on_heap), std::get<1>(*args_on_heap), std::get<2>(*args_on_heap));
    };

    auto r = std::make_unique<hilti::rt::Resumable>(std::move(cb));
    r->run();
    return std::move(*r);
}

extern auto hlt_my_http::MyHTTP::HTTPRequest::parse2(::hilti::rt::ValueReference<__hlt_my_http::MyHTTP::HTTPRequest>& unit, ::hilti::rt::ValueReference<::hilti::rt::Stream>& data, const std::optional<::hilti::rt::stream::View>& cur, const std::optional<::spicy::rt::UnitContext>& context) -> ::hilti::rt::Resumable {
    auto args = std::make_tuple(::hilti::rt::resumable::detail::copyArg(unit), ::hilti::rt::resumable::detail::copyArg(data), ::hilti::rt::resumable::detail::copyArg(cur), ::hilti::rt::resumable::detail::copyArg(context));
    auto args_on_heap = std::make_shared<decltype(args)>(std::move(args));
    auto cb = [args_on_heap](hilti::rt::resumable::Handle* r) -> hilti::rt::any {
        return __hlt_my_http::MyHTTP::HTTPRequest::parse2(std::get<0>(*args_on_heap), std::get<1>(*args_on_heap), std::get<2>(*args_on_heap), std::get<3>(*args_on_heap));
    };

    auto r = std::make_unique<hilti::rt::Resumable>(std::move(cb));
    r->run();
    return std::move(*r);
}

extern auto hlt_my_http::MyHTTP::HTTPRequest::parse3(::hilti::rt::ValueReference<::spicy::rt::ParsedUnit>& gunit, ::hilti::rt::ValueReference<::hilti::rt::Stream>& data, const std::optional<::hilti::rt::stream::View>& cur, const std::optional<::spicy::rt::UnitContext>& context) -> ::hilti::rt::Resumable {
    auto args = std::make_tuple(::hilti::rt::resumable::detail::copyArg(gunit), ::hilti::rt::resumable::detail::copyArg(data), ::hilti::rt::resumable::detail::copyArg(cur), ::hilti::rt::resumable::detail::copyArg(context));
    auto args_on_heap = std::make_shared<decltype(args)>(std::move(args));
    auto cb = [args_on_heap](hilti::rt::resumable::Handle* r) -> hilti::rt::any {
        return __hlt_my_http::MyHTTP::HTTPRequest::parse3(std::get<0>(*args_on_heap), std::get<1>(*args_on_heap), std::get<2>(*args_on_heap), std::get<3>(*args_on_heap));
    };

    auto r = std::make_unique<hilti::rt::Resumable>(std::move(cb));
    r->run();
    return std::move(*r);
}

/* __HILTI_LINKER_V1__
{"joins":{"__hlt_my_http::MyHTTP::__hook_HTTPRequest___on_0x25_done":[{"aux_types":[{"forward_decl":true,"forward_decl_prio":false,"id":"__hlt_my_http::MyHTTP::HTTPRequest","type":"struct HTTPRequest"}],"callee":{"args":[{"id":"__self","type":"::hilti::rt::ValueReference<HTTPRequest>&"}],"attribute":"","const":false,"id":"__hlt_my_http::MyHTTP::__hook_HTTPRequest___on_0x25_done_6199","linkage":"extern","result":"void"},"declare_only":false,"id":"__hlt_my_http::MyHTTP::__hook_HTTPRequest___on_0x25_done","priority":0},{"aux_types":[{"forward_decl":true,"forward_decl_prio":false,"id":"__hlt_my_http::MyHTTP::HTTPRequest","type":"struct HTTPRequest"}],"callee":{"args":[{"id":"__self","type":"::hilti::rt::ValueReference<__hlt_my_http::MyHTTP::HTTPRequest>&"}],"attribute":"","const":false,"id":"__hlt_my_http::MyHTTP::__on_0x25_done","linkage":"","result":"void"},"declare_only":true,"id":"__hlt_my_http::MyHTTP::__hook_HTTPRequest___on_0x25_done","priority":0}],"__hlt_my_http::MyHTTP::__hook_HTTPRequest___on_headers_foreach":[{"aux_types":[{"forward_decl":true,"forward_decl_prio":false,"id":"__hlt_my_http::MyHTTP::HTTPRequest","type":"struct HTTPRequest"},{"forward_decl":true,"forward_decl_prio":false,"id":"__hlt_my_http::MyHTTP::FieldLine","type":"struct FieldLine"}],"callee":{"args":[{"id":"__dd","type":"const ::hilti::rt::ValueReference<__hlt_my_http::MyHTTP::FieldLine>&"},{"id":"__stop","type":"::hilti::rt::Bool&"},{"id":"__self","type":"::hilti::rt::ValueReference<HTTPRequest>&"}],"attribute":"","const":false,"id":"__hlt_my_http::MyHTTP::__hook_HTTPRequest___on_headers_foreach_41a2","linkage":"extern","result":"void"},"declare_only":false,"id":"__hlt_my_http::MyHTTP::__hook_HTTPRequest___on_headers_foreach","priority":0},{"aux_types":[{"forward_decl":true,"forward_decl_prio":false,"id":"__hlt_my_http::MyHTTP::HTTPRequest","type":"struct HTTPRequest"}],"callee":{"args":[{"id":"__dd","type":"const ::hilti::rt::ValueReference<__hlt_my_http::MyHTTP::FieldLine>&"},{"id":"__stop","type":"::hilti::rt::Bool&"},{"id":"__self","type":"::hilti::rt::ValueReference<__hlt_my_http::MyHTTP::HTTPRequest>&"}],"attribute":"","const":false,"id":"__hlt_my_http::MyHTTP::__on_headers_foreach","linkage":"","result":"void"},"declare_only":true,"id":"__hlt_my_http::MyHTTP::__hook_HTTPRequest___on_headers_foreach","priority":0}]},"module":"MyHTTP","namespace":"__hlt_my_http::MyHTTP","path":"/home/kohshi54/spicy-go-integration/spicy-http/my_http.spicy","version":1}
*/

