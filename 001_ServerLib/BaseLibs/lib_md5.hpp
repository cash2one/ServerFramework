#ifndef _H_LIB_MD5_H
#define _H_LIB_MD5_H

#include <stdint.h>

struct MD5Context
{
    uint32_t buf[4];
    uint32_t bits[2];
    uint8_t  in[64];
};

typedef struct MD5Context md5_t;

extern void MD5Init(struct MD5Context *);
extern void MD5Update(struct MD5Context *, unsigned char const *, unsigned);
extern void MD5Final(unsigned char digest[16], struct MD5Context *ctx);
extern void MD5Digest( const unsigned char *msg, int len, unsigned char *digest);
extern void MD5DigestHex( const unsigned char *msg, int len, unsigned char *digest);
extern void MD5HMAC(const unsigned char *password,  unsigned pass_len,
                    const unsigned char *challenge, unsigned chal_len,
                    unsigned char response[16]);
extern void MD5HMAC2(const unsigned char *password,  unsigned pass_len,
                     const unsigned char *challenge, unsigned chal_len,
                     const unsigned char *challenge2, unsigned chal_len2,
                     unsigned char response[16]);
#endif
