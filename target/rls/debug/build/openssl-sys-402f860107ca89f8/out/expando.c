#include <openssl/opensslv.h>
#include <openssl/opensslconf.h>

#if LIBRESSL_VERSION_NUMBER >= 0x20800000
RUST_LIBRESSL_NEW
#elif LIBRESSL_VERSION_NUMBER >= 0x20700000
RUST_LIBRESSL_27X
#elif LIBRESSL_VERSION_NUMBER >= 0x20603000
RUST_LIBRESSL_26X
#elif LIBRESSL_VERSION_NUMBER >= 0x20602000
RUST_LIBRESSL_262
#elif LIBRESSL_VERSION_NUMBER >= 0x20601000
RUST_LIBRESSL_261
#elif LIBRESSL_VERSION_NUMBER >= 0x20600000
RUST_LIBRESSL_260
#elif LIBRESSL_VERSION_NUMBER >= 0x20503000
RUST_LIBRESSL_25X
#elif LIBRESSL_VERSION_NUMBER >= 0x20502000
RUST_LIBRESSL_252
#elif LIBRESSL_VERSION_NUMBER >= 0x20501000
RUST_LIBRESSL_251
#elif LIBRESSL_VERSION_NUMBER >= 0x20500000
RUST_LIBRESSL_250
#elif defined (LIBRESSL_VERSION_NUMBER) && LIBRESSL_VERSION_NUMBER < 0x20500000
RUST_LIBRESSL_OLD
#elif OPENSSL_VERSION_NUMBER >= 0x10102000
RUST_OPENSSL_NEW
#elif OPENSSL_VERSION_NUMBER >= 0x10101000
RUST_OPENSSL_111
#elif OPENSSL_VERSION_NUMBER >= 0x10100060
RUST_OPENSSL_110F
#elif OPENSSL_VERSION_NUMBER >= 0x10100000
RUST_OPENSSL_110
#elif OPENSSL_VERSION_NUMBER >= 0x10002000
RUST_OPENSSL_102
#elif OPENSSL_VERSION_NUMBER >= 0x10001000
RUST_OPENSSL_101
#else
RUST_OPENSSL_OLD
#endif
#ifdef OPENSSL_NO_BUF_FREELISTS
RUST_OPENSSL_NO_BUF_FREELISTS_RUST
#endif
#ifdef OPENSSL_NO_COMP
RUST_OPENSSL_NO_COMP_RUST
#endif
#ifdef OPENSSL_NO_EC
RUST_OPENSSL_NO_EC_RUST
#endif
#ifdef OPENSSL_NO_EC2M
RUST_OPENSSL_NO_EC2M_RUST
#endif
#ifdef OPENSSL_NO_ENGINE
RUST_OPENSSL_NO_ENGINE_RUST
#endif
#ifdef OPENSSL_NO_KRB5
RUST_OPENSSL_NO_KRB5_RUST
#endif
#ifdef OPENSSL_NO_NEXTPROTONEG
RUST_OPENSSL_NO_NEXTPROTONEG_RUST
#endif
#ifdef OPENSSL_NO_PSK
RUST_OPENSSL_NO_PSK_RUST
#endif
#ifdef OPENSSL_NO_RFC3779
RUST_OPENSSL_NO_RFC3779_RUST
#endif
#ifdef OPENSSL_NO_SHA
RUST_OPENSSL_NO_SHA_RUST
#endif
#ifdef OPENSSL_NO_SRP
RUST_OPENSSL_NO_SRP_RUST
#endif
#ifdef OPENSSL_NO_SSL3_METHOD
RUST_OPENSSL_NO_SSL3_METHOD_RUST
#endif
#ifdef OPENSSL_NO_TLSEXT
RUST_OPENSSL_NO_TLSEXT_RUST
#endif
