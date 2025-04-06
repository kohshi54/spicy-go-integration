// Begin of MyHTTP (from "my_http.spicy")
// Compiled by HILTI version 1.8.4

#include <hilti/rt/compiler-setup.h>

#include <hilti/rt/libhilti.h>
#include <spicy/rt/libspicy.h>

namespace __hlt_my_http::MyHTTP {
    struct RequestLine;
    struct Version;
}

namespace __hlt_my_http::type_info { namespace {
    extern const ::hilti::rt::TypeInfo __ti_MyHTTP_RequestLine;
    extern const ::hilti::rt::TypeInfo __ti_MyHTTP_Version;
    extern const ::hilti::rt::TypeInfo __ti_hilti_RecoverableFailure;
    extern const ::hilti::rt::TypeInfo __ti_optionalx30hilti_RecoverableFailure;
    extern const ::hilti::rt::TypeInfo __ti_value_refx30MyHTTP_Version;
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
        void __on_0x25_done();
        inline static ::spicy::rt::Parser __parser{};
        auto __parse_stage1(::hilti::rt::ValueReference<::hilti::rt::Stream>& __data, std::optional<::hilti::rt::stream::SafeConstIterator> __begin, ::hilti::rt::stream::View __cur, ::hilti::rt::Bool __trim, ::hilti::rt::integer::safe<int64_t> __lah, ::hilti::rt::stream::SafeConstIterator __lahe, std::optional<::hilti::rt::RecoverableFailure> __error) -> std::tuple<::hilti::rt::stream::View, ::hilti::rt::integer::safe<int64_t>, ::hilti::rt::stream::SafeConstIterator, std::optional<::hilti::rt::RecoverableFailure>>;
        static auto parse1(::hilti::rt::ValueReference<::hilti::rt::Stream>& data, const std::optional<::hilti::rt::stream::View>& cur, const std::optional<::spicy::rt::UnitContext>& context) -> ::hilti::rt::stream::View;
        static auto parse2(::hilti::rt::ValueReference<RequestLine>& unit, ::hilti::rt::ValueReference<::hilti::rt::Stream>& data, const std::optional<::hilti::rt::stream::View>& cur, const std::optional<::spicy::rt::UnitContext>& context) -> ::hilti::rt::stream::View;
        static auto parse3(::hilti::rt::ValueReference<::spicy::rt::ParsedUnit>& gunit, ::hilti::rt::ValueReference<::hilti::rt::Stream>& data, const std::optional<::hilti::rt::stream::View>& cur, const std::optional<::spicy::rt::UnitContext>& context) -> ::hilti::rt::stream::View;
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

    const ::hilti::rt::RegExp NewLine = ::hilti::rt::RegExp(std::string{"\\r?\\n"}, {});
    const ::hilti::rt::RegExp Token = ::hilti::rt::RegExp(std::string{"[^ \\t\\r\\n]+"}, {});
    const ::hilti::rt::RegExp WhiteSpace = ::hilti::rt::RegExp(std::string{"[ \\t]+"}, {});
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
    extern void __hook_RequestLine___on_0x25_done(::hilti::rt::ValueReference<RequestLine>& __self);
    extern void __hook_RequestLine___on_0x25_done(::hilti::rt::ValueReference<__hlt_my_http::MyHTTP::RequestLine>& __self);
    extern void __hook_RequestLine___on_0x25_done_f644(::hilti::rt::ValueReference<RequestLine>& __self);
    extern void __init_module();
    extern void __register_MyHTTP_RequestLine();
    extern void __register_MyHTTP_Version();
    extern void __register_module();
    static auto operator<<(std::ostream& o, const __hlt_my_http::MyHTTP::Version& x) -> std::ostream&;
    static auto operator<<(std::ostream& o, const __hlt_my_http::MyHTTP::RequestLine& x) -> std::ostream&;
}

namespace hlt_my_http::MyHTTP::RequestLine {
    extern auto parse1(::hilti::rt::ValueReference<::hilti::rt::Stream>& data, const std::optional<::hilti::rt::stream::View>& cur, const std::optional<::spicy::rt::UnitContext>& context) -> ::hilti::rt::Resumable;
    extern auto parse2(::hilti::rt::ValueReference<__hlt_my_http::MyHTTP::RequestLine>& unit, ::hilti::rt::ValueReference<::hilti::rt::Stream>& data, const std::optional<::hilti::rt::stream::View>& cur, const std::optional<::spicy::rt::UnitContext>& context) -> ::hilti::rt::Resumable;
    extern auto parse3(::hilti::rt::ValueReference<::spicy::rt::ParsedUnit>& gunit, ::hilti::rt::ValueReference<::hilti::rt::Stream>& data, const std::optional<::hilti::rt::stream::View>& cur, const std::optional<::spicy::rt::UnitContext>& context) -> ::hilti::rt::Resumable;
}

namespace __hlt_my_http::type_info { namespace {
    const ::hilti::rt::TypeInfo __ti_MyHTTP_RequestLine = { "MyHTTP::RequestLine", "MyHTTP::RequestLine", new ::hilti::rt::type_info::Struct(std::vector<::hilti::rt::type_info::struct_::Field>({::hilti::rt::type_info::struct_::Field{ "method", &::hilti::rt::type_info::bytes, offsetof(MyHTTP::RequestLine, method), false, ::hilti::rt::type_info::struct_::Field::accessor_optional<::hilti::rt::Bytes>() }, ::hilti::rt::type_info::struct_::Field{ "uri", &::hilti::rt::type_info::bytes, offsetof(MyHTTP::RequestLine, uri), false, ::hilti::rt::type_info::struct_::Field::accessor_optional<::hilti::rt::Bytes>() }, ::hilti::rt::type_info::struct_::Field{ "version", &type_info::__ti_value_refx30MyHTTP_Version, offsetof(MyHTTP::RequestLine, version), false, ::hilti::rt::type_info::struct_::Field::accessor_optional<::hilti::rt::ValueReference<__hlt_my_http::MyHTTP::Version>>() }, ::hilti::rt::type_info::struct_::Field{ "__error", &type_info::__ti_optionalx30hilti_RecoverableFailure, offsetof(MyHTTP::RequestLine, __error), true }})) };
    const ::hilti::rt::TypeInfo __ti_MyHTTP_Version = { "MyHTTP::Version", "MyHTTP::Version", new ::hilti::rt::type_info::Struct(std::vector<::hilti::rt::type_info::struct_::Field>({::hilti::rt::type_info::struct_::Field{ "number", &::hilti::rt::type_info::bytes, offsetof(MyHTTP::Version, number), false, ::hilti::rt::type_info::struct_::Field::accessor_optional<::hilti::rt::Bytes>() }, ::hilti::rt::type_info::struct_::Field{ "__error", &type_info::__ti_optionalx30hilti_RecoverableFailure, offsetof(MyHTTP::Version, __error), true }})) };
    const ::hilti::rt::TypeInfo __ti_hilti_RecoverableFailure = { "hilti::RecoverableFailure", "hilti::RecoverableFailure", new ::hilti::rt::type_info::Exception() };
    const ::hilti::rt::TypeInfo __ti_optionalx30hilti_RecoverableFailure = { {}, "optional<hilti::RecoverableFailure>", new ::hilti::rt::type_info::Optional(&type_info::__ti_hilti_RecoverableFailure, ::hilti::rt::type_info::Optional::accessor<::hilti::rt::RecoverableFailure>()) };
    const ::hilti::rt::TypeInfo __ti_value_refx30MyHTTP_Version = { {}, "value_ref<MyHTTP::Version>", new ::hilti::rt::type_info::ValueReference(&type_info::__ti_MyHTTP_Version, ::hilti::rt::type_info::ValueReference::accessor<__hlt_my_http::MyHTTP::Version>()) };
} }

namespace __hlt_my_http::MyHTTP {
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

inline void __hlt_my_http::MyHTTP::RequestLine::__on_0x25_done() {
    auto __self = MyHTTP::RequestLine::__self();
    return __hlt_my_http::MyHTTP::__hook_RequestLine___on_0x25_done(__self);
}

auto __hlt_my_http::MyHTTP::RequestLine::__parse_MyHTTP_RequestLine_stage2(::hilti::rt::ValueReference<::hilti::rt::Stream>& __data, std::optional<::hilti::rt::stream::SafeConstIterator> __begin, ::hilti::rt::stream::View __cur, ::hilti::rt::Bool __trim, ::hilti::rt::integer::safe<int64_t> __lah, ::hilti::rt::stream::SafeConstIterator __lahe, std::optional<::hilti::rt::RecoverableFailure> __error) -> std::tuple<::hilti::rt::stream::View, ::hilti::rt::integer::safe<int64_t>, ::hilti::rt::stream::SafeConstIterator, std::optional<::hilti::rt::RecoverableFailure>> {
    auto __self = RequestLine::__self();
    ::hilti::rt::detail::checkStack();
    __location__("my_http.spicy:12:27-23:2");
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
      __location__("my_http.spicy:13:5");
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
      __location__("my_http.spicy:15:5");
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

    __location__("my_http.spicy:7:16-10:2");

    // Begin parsing production: Unit: MyHTTP_Version_2 -> anon_4 number_2;
    ::hilti::rt::optional::valueOrInit((*__self).version) = (__hlt_my_http::MyHTTP::Version());
    std::tie(__cur, __lah, __lahe, __error) = (*::hilti::rt::optional::value((*__self).version)).__parse_stage1(__data, __begin, __cur, __trim, __lah, __lahe, __error);
    // End parsing production: Unit: MyHTTP_Version_2 -> anon_4 number_2;

    (*__self).__error = __error;
      __location__("my_http.spicy:17:5");
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
      __location__("my_http.spicy:12:27-23:2");
    (*__self).__on_0x25_done();
    __error = (*__self).__error;
    ::hilti::rt::debug::dedent(std::string("spicy"));
    __result = std::make_tuple(__cur, __lah, __lahe, __error);
    return __result;
}

auto __hlt_my_http::MyHTTP::RequestLine::__parse_stage1(::hilti::rt::ValueReference<::hilti::rt::Stream>& __data, std::optional<::hilti::rt::stream::SafeConstIterator> __begin, ::hilti::rt::stream::View __cur, ::hilti::rt::Bool __trim, ::hilti::rt::integer::safe<int64_t> __lah, ::hilti::rt::stream::SafeConstIterator __lahe, std::optional<::hilti::rt::RecoverableFailure> __error) -> std::tuple<::hilti::rt::stream::View, ::hilti::rt::integer::safe<int64_t>, ::hilti::rt::stream::SafeConstIterator, std::optional<::hilti::rt::RecoverableFailure>> {
    auto __self = RequestLine::__self();
    ::hilti::rt::detail::checkStack();
    __location__("my_http.spicy:12:27-23:2");
    std::tuple<::hilti::rt::stream::View, ::hilti::rt::integer::safe<int64_t>, ::hilti::rt::stream::SafeConstIterator, std::optional<::hilti::rt::RecoverableFailure>> __result;
    try {
        ::hilti::rt::debug::indent(std::string("spicy"));
        std::optional<::hilti::rt::stream::SafeConstIterator> __begin = std::make_optional(__cur.begin());
        (*__self).__error = __error;
          __location__("my_http.spicy:12:27-23:2");
        (void());
        __error = (*__self).__error;
        ::hilti::rt::StrongReference<::hilti::rt::Stream> filtered = ::hilti::rt::StrongReference<::hilti::rt::Stream>();
        if ( ! (::hilti::rt::Bool(static_cast<bool>(filtered))) ) {
            __result = (*__self).__parse_MyHTTP_RequestLine_stage2(__data, __begin, __cur, __trim, __lah, __lahe, __error);
        }
    }
    catch ( const ::std::exception& __except ) {
          __location__("my_http.spicy:12:27-23:2");
        (void());
        (*__self).__error = __error;
          __location__("my_http.spicy:12:27-23:2");
        (void());
        __error = (*__self).__error;
        throw;
    }

    (*__self).__error = __error;
      __location__("my_http.spicy:12:27-23:2");
    (void());
    __error = (*__self).__error;
    return __result;
}

extern auto __hlt_my_http::MyHTTP::RequestLine::parse1(::hilti::rt::ValueReference<::hilti::rt::Stream>& data, const std::optional<::hilti::rt::stream::View>& cur, const std::optional<::spicy::rt::UnitContext>& context) -> ::hilti::rt::stream::View {
    ::hilti::rt::detail::checkStack();
    __location__("my_http.spicy:12:27-23:2");
    ::hilti::rt::ValueReference<__hlt_my_http::MyHTTP::RequestLine> unit = ::hilti::rt::reference::make_value<__hlt_my_http::MyHTTP::RequestLine>((__hlt_my_http::MyHTTP::RequestLine()));
    ::hilti::rt::stream::View ncur = (cur ? ::hilti::rt::optional::value(cur) : (*data).view());
    ::hilti::rt::integer::safe<int64_t> lahead = ::hilti::rt::integer::safe<std::int64_t>{0};
    ::hilti::rt::stream::SafeConstIterator lahead_end;
    std::optional<::hilti::rt::RecoverableFailure> error = std::optional<::hilti::rt::RecoverableFailure>();
    __location__("my_http.spicy:12:27-23:2");

    // Begin parsing production: Unit: MyHTTP_RequestLine -> method anon_2 uri anon_3 MyHTTP_Version_2 anon_4_2;
    std::tie(ncur, lahead, lahead_end, error) = (*unit).__parse_stage1(data, std::optional<::hilti::rt::stream::SafeConstIterator>(), ncur, ::hilti::rt::Bool(true), lahead, lahead_end, error);
    // End parsing production: Unit: MyHTTP_RequestLine -> method anon_2 uri anon_3 MyHTTP_Version_2 anon_4_2;

    if ( error.has_value() ) {
        throw ::spicy::rt::ParseError(::hilti::rt::fmt(std::string("successful synchronization never confirmed: %s"), ::hilti::rt::optional::value(error)), "");
    }

    return ncur;
}

extern auto __hlt_my_http::MyHTTP::RequestLine::parse2(::hilti::rt::ValueReference<__hlt_my_http::MyHTTP::RequestLine>& unit, ::hilti::rt::ValueReference<::hilti::rt::Stream>& data, const std::optional<::hilti::rt::stream::View>& cur, const std::optional<::spicy::rt::UnitContext>& context) -> ::hilti::rt::stream::View {
    ::hilti::rt::detail::checkStack();
    __location__("my_http.spicy:12:27-23:2");
    ::hilti::rt::stream::View ncur = (cur ? ::hilti::rt::optional::value(cur) : (*data).view());
    ::hilti::rt::integer::safe<int64_t> lahead = ::hilti::rt::integer::safe<std::int64_t>{0};
    ::hilti::rt::stream::SafeConstIterator lahead_end;
    std::optional<::hilti::rt::RecoverableFailure> error = std::optional<::hilti::rt::RecoverableFailure>();
    __location__("my_http.spicy:12:27-23:2");

    // Begin parsing production: Unit: MyHTTP_RequestLine -> method anon_2 uri anon_3 MyHTTP_Version_2 anon_4_2;
    std::tie(ncur, lahead, lahead_end, error) = (*unit).__parse_stage1(data, std::optional<::hilti::rt::stream::SafeConstIterator>(), ncur, ::hilti::rt::Bool(true), lahead, lahead_end, error);
    // End parsing production: Unit: MyHTTP_RequestLine -> method anon_2 uri anon_3 MyHTTP_Version_2 anon_4_2;

    if ( error.has_value() ) {
        throw ::spicy::rt::ParseError(::hilti::rt::fmt(std::string("successful synchronization never confirmed: %s"), ::hilti::rt::optional::value(error)), "");
    }

    return ncur;
}

extern auto __hlt_my_http::MyHTTP::RequestLine::parse3(::hilti::rt::ValueReference<::spicy::rt::ParsedUnit>& gunit, ::hilti::rt::ValueReference<::hilti::rt::Stream>& data, const std::optional<::hilti::rt::stream::View>& cur, const std::optional<::spicy::rt::UnitContext>& context) -> ::hilti::rt::stream::View {
    ::hilti::rt::detail::checkStack();
    __location__("my_http.spicy:12:27-23:2");
    ::hilti::rt::ValueReference<__hlt_my_http::MyHTTP::RequestLine> unit = ::hilti::rt::reference::make_value<__hlt_my_http::MyHTTP::RequestLine>((__hlt_my_http::MyHTTP::RequestLine()));
    ::spicy::rt::ParsedUnit::initialize((*gunit), unit, &type_info::__ti_MyHTTP_RequestLine);
    ::hilti::rt::stream::View ncur = (cur ? ::hilti::rt::optional::value(cur) : (*data).view());
    ::hilti::rt::integer::safe<int64_t> lahead = ::hilti::rt::integer::safe<std::int64_t>{0};
    ::hilti::rt::stream::SafeConstIterator lahead_end;
    std::optional<::hilti::rt::RecoverableFailure> error = std::optional<::hilti::rt::RecoverableFailure>();
    __location__("my_http.spicy:12:27-23:2");

    // Begin parsing production: Unit: MyHTTP_RequestLine -> method anon_2 uri anon_3 MyHTTP_Version_2 anon_4_2;
    std::tie(ncur, lahead, lahead_end, error) = (*unit).__parse_stage1(data, std::optional<::hilti::rt::stream::SafeConstIterator>(), ncur, ::hilti::rt::Bool(true), lahead, lahead_end, error);
    // End parsing production: Unit: MyHTTP_RequestLine -> method anon_2 uri anon_3 MyHTTP_Version_2 anon_4_2;

    if ( error.has_value() ) {
        throw ::spicy::rt::ParseError(::hilti::rt::fmt(std::string("successful synchronization never confirmed: %s"), ::hilti::rt::optional::value(error)), "");
    }

    return ncur;
}

auto __hlt_my_http::MyHTTP::Version::__parse_MyHTTP_Version_stage2(::hilti::rt::ValueReference<::hilti::rt::Stream>& __data, std::optional<::hilti::rt::stream::SafeConstIterator> __begin, ::hilti::rt::stream::View __cur, ::hilti::rt::Bool __trim, ::hilti::rt::integer::safe<int64_t> __lah, ::hilti::rt::stream::SafeConstIterator __lahe, std::optional<::hilti::rt::RecoverableFailure> __error) -> std::tuple<::hilti::rt::stream::View, ::hilti::rt::integer::safe<int64_t>, ::hilti::rt::stream::SafeConstIterator, std::optional<::hilti::rt::RecoverableFailure>> {
    auto __self = Version::__self();
    ::hilti::rt::detail::checkStack();
    __location__("my_http.spicy:7:16-10:2");
    std::tuple<::hilti::rt::stream::View, ::hilti::rt::integer::safe<int64_t>, ::hilti::rt::stream::SafeConstIterator, std::optional<::hilti::rt::RecoverableFailure>> __result;
    ::hilti::rt::Bytes __transient_anon;
    __location__("my_http.spicy:8:13");
    ::hilti::rt::Vector<::hilti::rt::Bytes> __captures;

    // Begin parsing production: Ctor: anon -> /HTTP// (regexp);
    if ( ::hilti::rt::Bool(static_cast<bool>(__lah)) ) {
        if ( __lah != ::hilti::rt::integer::safe<std::int64_t>{1} ) {
              __location__("my_http.spicy:8:13");
            throw ::spicy::rt::ParseError(std::string("unexpected token to consume"), "my_http.spicy:8:13");
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
              __location__("my_http.spicy:8:13");
            std::tie(rc, ncur) = ms.advance(ncur);
            if ( ::hilti::rt::integer::safe<int32_t> __x = rc; __x == ::hilti::rt::integer::safe<std::int32_t>{-1} ) {
                ::hilti::rt::StrongReference<::spicy::rt::filter::detail::Filters> __lhs_1;
                // NOLINTNEXTLINE(clang-analyzer-deadcode.DeadStores);
                ::hilti::rt::Bool more_data = ::spicy::rt::detail::waitForInputOrEod(__data, ncur, (__lhs_1=(::hilti::rt::StrongReference<::spicy::rt::filter::detail::Filters>())));
                continue;
            }

            else if ( __x == ::hilti::rt::integer::safe<std::int32_t>{0} ) {
                  __location__("my_http.spicy:8:13");
                throw ::spicy::rt::ParseError(std::string("failed to match regular expression"), "my_http.spicy:8:13");
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

    __location__("my_http.spicy:9:13");
    ::hilti::rt::Vector<::hilti::rt::Bytes> __captures_2;

    // Begin parsing production: Ctor: number -> /[0-9]+\.[0-9]+/ (regexp);
    if ( ::hilti::rt::Bool(static_cast<bool>(__lah)) ) {
        if ( __lah != ::hilti::rt::integer::safe<std::int64_t>{2} ) {
              __location__("my_http.spicy:9:13");
            throw ::spicy::rt::ParseError(std::string("unexpected token to consume"), "my_http.spicy:9:13");
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
              __location__("my_http.spicy:9:13");
            std::tie(rc, ncur) = ms.advance(ncur);
            if ( ::hilti::rt::integer::safe<int32_t> __x = rc; __x == ::hilti::rt::integer::safe<std::int32_t>{-1} ) {
                ::hilti::rt::StrongReference<::spicy::rt::filter::detail::Filters> __lhs_2;
                // NOLINTNEXTLINE(clang-analyzer-deadcode.DeadStores);
                ::hilti::rt::Bool more_data = ::spicy::rt::detail::waitForInputOrEod(__data, ncur, (__lhs_2=(::hilti::rt::StrongReference<::spicy::rt::filter::detail::Filters>())));
                continue;
            }

            else if ( __x == ::hilti::rt::integer::safe<std::int32_t>{0} ) {
                  __location__("my_http.spicy:9:13");
                throw ::spicy::rt::ParseError(std::string("failed to match regular expression"), "my_http.spicy:9:13");
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
      __location__("my_http.spicy:9:5");
    (void());
    __error = (*__self).__error;
    (*__self).__error = __error;
      __location__("my_http.spicy:7:16-10:2");
    (void());
    __error = (*__self).__error;
    ::hilti::rt::debug::dedent(std::string("spicy"));
    __result = std::make_tuple(__cur, __lah, __lahe, __error);
    return __result;
}

auto __hlt_my_http::MyHTTP::Version::__parse_stage1(::hilti::rt::ValueReference<::hilti::rt::Stream>& __data, std::optional<::hilti::rt::stream::SafeConstIterator> __begin, ::hilti::rt::stream::View __cur, ::hilti::rt::Bool __trim, ::hilti::rt::integer::safe<int64_t> __lah, ::hilti::rt::stream::SafeConstIterator __lahe, std::optional<::hilti::rt::RecoverableFailure> __error) -> std::tuple<::hilti::rt::stream::View, ::hilti::rt::integer::safe<int64_t>, ::hilti::rt::stream::SafeConstIterator, std::optional<::hilti::rt::RecoverableFailure>> {
    auto __self = Version::__self();
    ::hilti::rt::detail::checkStack();
    __location__("my_http.spicy:7:16-10:2");
    std::tuple<::hilti::rt::stream::View, ::hilti::rt::integer::safe<int64_t>, ::hilti::rt::stream::SafeConstIterator, std::optional<::hilti::rt::RecoverableFailure>> __result;
    try {
        ::hilti::rt::debug::indent(std::string("spicy"));
        std::optional<::hilti::rt::stream::SafeConstIterator> __begin = std::make_optional(__cur.begin());
        (*__self).__error = __error;
          __location__("my_http.spicy:7:16-10:2");
        (void());
        __error = (*__self).__error;
        ::hilti::rt::StrongReference<::hilti::rt::Stream> filtered = ::hilti::rt::StrongReference<::hilti::rt::Stream>();
        if ( ! (::hilti::rt::Bool(static_cast<bool>(filtered))) ) {
            __result = (*__self).__parse_MyHTTP_Version_stage2(__data, __begin, __cur, __trim, __lah, __lahe, __error);
        }
    }
    catch ( const ::std::exception& __except ) {
          __location__("my_http.spicy:7:16-10:2");
        (void());
        (*__self).__error = __error;
          __location__("my_http.spicy:7:16-10:2");
        (void());
        __error = (*__self).__error;
        throw;
    }

    (*__self).__error = __error;
      __location__("my_http.spicy:7:16-10:2");
    (void());
    __error = (*__self).__error;
    return __result;
}

extern void __hlt_my_http::MyHTTP::__hook_RequestLine___on_0x25_done_f644(::hilti::rt::ValueReference<RequestLine>& __self) {
    ::hilti::rt::detail::checkStack();
      __location__("my_http.spicy:21:3");
    ::hilti::rt::printValues(std::make_tuple(::hilti::rt::optional::value((*__self).method), ::hilti::rt::optional::value((*__self).uri), ::hilti::rt::optional::value((*::hilti::rt::optional::value((*__self).version)).number)), ::hilti::rt::Bool(true));
}

extern void __hlt_my_http::MyHTTP::__init_module() {
    __hlt_my_http::MyHTTP::__register_MyHTTP_Version();
    __hlt_my_http::MyHTTP::__register_MyHTTP_RequestLine();
}

extern void __hlt_my_http::MyHTTP::__register_MyHTTP_RequestLine() {
    ::hilti::rt::detail::checkStack();
    MyHTTP::RequestLine::__parser = ::spicy::rt::Parser(std::string("MyHTTP::RequestLine"), ::hilti::rt::Bool(true), hlt_my_http::MyHTTP::RequestLine::parse1, hlt_my_http::MyHTTP::RequestLine::parse2, hlt_my_http::MyHTTP::RequestLine::parse3, ::hilti::rt::Null(), &type_info::__ti_MyHTTP_RequestLine, std::string(""), ::hilti::rt::Vector<::spicy::rt::MIMEType>({}), ::hilti::rt::Vector<::spicy::rt::ParserPort>({}));
    ::spicy::rt::detail::registerParser(MyHTTP::RequestLine::__parser, std::string(__hlt_my_http_hlto_scope), ::hilti::rt::StrongReference<__hlt_my_http::MyHTTP::RequestLine>());
}

extern void __hlt_my_http::MyHTTP::__register_MyHTTP_Version() { ::hilti::rt::detail::checkStack(); }

extern void __hlt_my_http::MyHTTP::__register_module() { ::hilti::rt::detail::registerModule({ "MyHTTP", __hlt_my_http_hlto_scope, &__init_module, nullptr, nullptr, nullptr}); }

static auto __hlt_my_http::MyHTTP::operator<<(std::ostream& o, const __hlt_my_http::MyHTTP::Version& x) -> std::ostream& { o << ::hilti::rt::to_string(x); return o; }

static auto __hlt_my_http::MyHTTP::operator<<(std::ostream& o, const __hlt_my_http::MyHTTP::RequestLine& x) -> std::ostream& { o << ::hilti::rt::to_string(x); return o; }

extern auto hlt_my_http::MyHTTP::RequestLine::parse1(::hilti::rt::ValueReference<::hilti::rt::Stream>& data, const std::optional<::hilti::rt::stream::View>& cur, const std::optional<::spicy::rt::UnitContext>& context) -> ::hilti::rt::Resumable {
    auto args = std::make_tuple(::hilti::rt::resumable::detail::copyArg(data), ::hilti::rt::resumable::detail::copyArg(cur), ::hilti::rt::resumable::detail::copyArg(context));
    auto args_on_heap = std::make_shared<decltype(args)>(std::move(args));
    auto cb = [args_on_heap](hilti::rt::resumable::Handle* r) -> hilti::rt::any {
        return __hlt_my_http::MyHTTP::RequestLine::parse1(std::get<0>(*args_on_heap), std::get<1>(*args_on_heap), std::get<2>(*args_on_heap));
    };

    auto r = std::make_unique<hilti::rt::Resumable>(std::move(cb));
    r->run();
    return std::move(*r);
}

extern auto hlt_my_http::MyHTTP::RequestLine::parse2(::hilti::rt::ValueReference<__hlt_my_http::MyHTTP::RequestLine>& unit, ::hilti::rt::ValueReference<::hilti::rt::Stream>& data, const std::optional<::hilti::rt::stream::View>& cur, const std::optional<::spicy::rt::UnitContext>& context) -> ::hilti::rt::Resumable {
    auto args = std::make_tuple(::hilti::rt::resumable::detail::copyArg(unit), ::hilti::rt::resumable::detail::copyArg(data), ::hilti::rt::resumable::detail::copyArg(cur), ::hilti::rt::resumable::detail::copyArg(context));
    auto args_on_heap = std::make_shared<decltype(args)>(std::move(args));
    auto cb = [args_on_heap](hilti::rt::resumable::Handle* r) -> hilti::rt::any {
        return __hlt_my_http::MyHTTP::RequestLine::parse2(std::get<0>(*args_on_heap), std::get<1>(*args_on_heap), std::get<2>(*args_on_heap), std::get<3>(*args_on_heap));
    };

    auto r = std::make_unique<hilti::rt::Resumable>(std::move(cb));
    r->run();
    return std::move(*r);
}

extern auto hlt_my_http::MyHTTP::RequestLine::parse3(::hilti::rt::ValueReference<::spicy::rt::ParsedUnit>& gunit, ::hilti::rt::ValueReference<::hilti::rt::Stream>& data, const std::optional<::hilti::rt::stream::View>& cur, const std::optional<::spicy::rt::UnitContext>& context) -> ::hilti::rt::Resumable {
    auto args = std::make_tuple(::hilti::rt::resumable::detail::copyArg(gunit), ::hilti::rt::resumable::detail::copyArg(data), ::hilti::rt::resumable::detail::copyArg(cur), ::hilti::rt::resumable::detail::copyArg(context));
    auto args_on_heap = std::make_shared<decltype(args)>(std::move(args));
    auto cb = [args_on_heap](hilti::rt::resumable::Handle* r) -> hilti::rt::any {
        return __hlt_my_http::MyHTTP::RequestLine::parse3(std::get<0>(*args_on_heap), std::get<1>(*args_on_heap), std::get<2>(*args_on_heap), std::get<3>(*args_on_heap));
    };

    auto r = std::make_unique<hilti::rt::Resumable>(std::move(cb));
    r->run();
    return std::move(*r);
}

/* __HILTI_LINKER_V1__
{"joins":{"__hlt_my_http::MyHTTP::__hook_RequestLine___on_0x25_done":[{"aux_types":[{"forward_decl":true,"forward_decl_prio":false,"id":"__hlt_my_http::MyHTTP::RequestLine","type":"struct RequestLine"}],"callee":{"args":[{"id":"__self","type":"::hilti::rt::ValueReference<RequestLine>&"}],"attribute":"","const":false,"id":"__hlt_my_http::MyHTTP::__hook_RequestLine___on_0x25_done_f644","linkage":"extern","result":"void"},"declare_only":false,"id":"__hlt_my_http::MyHTTP::__hook_RequestLine___on_0x25_done","priority":0},{"aux_types":[{"forward_decl":true,"forward_decl_prio":false,"id":"__hlt_my_http::MyHTTP::RequestLine","type":"struct RequestLine"}],"callee":{"args":[{"id":"__self","type":"::hilti::rt::ValueReference<__hlt_my_http::MyHTTP::RequestLine>&"}],"attribute":"","const":false,"id":"__hlt_my_http::MyHTTP::__on_0x25_done","linkage":"","result":"void"},"declare_only":true,"id":"__hlt_my_http::MyHTTP::__hook_RequestLine___on_0x25_done","priority":0}]},"module":"MyHTTP","namespace":"__hlt_my_http::MyHTTP","path":"/home/kohshi54/spicy-go-integration/spicy-http/my_http.spicy","version":1}
*/

