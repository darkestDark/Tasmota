// Certificates and credentials from demo

#include <stddef.h>
#include <stdint.h>

const uint8_t kDevelopmentPAI_Cert_FFF1[463] = {
    0x30, 0x82, 0x01, 0xcb, 0x30, 0x82, 0x01, 0x71, 0xa0, 0x03, 0x02, 0x01, 0x02, 0x02, 0x08, 0x56, 0xad, 0x82, 0x22, 0xad, 0x94,
    0x5b, 0x64, 0x30, 0x0a, 0x06, 0x08, 0x2a, 0x86, 0x48, 0xce, 0x3d, 0x04, 0x03, 0x02, 0x30, 0x30, 0x31, 0x18, 0x30, 0x16, 0x06,
    0x03, 0x55, 0x04, 0x03, 0x0c, 0x0f, 0x4d, 0x61, 0x74, 0x74, 0x65, 0x72, 0x20, 0x54, 0x65, 0x73, 0x74, 0x20, 0x50, 0x41, 0x41,
    0x31, 0x14, 0x30, 0x12, 0x06, 0x0a, 0x2b, 0x06, 0x01, 0x04, 0x01, 0x82, 0xa2, 0x7c, 0x02, 0x01, 0x0c, 0x04, 0x46, 0x46, 0x46,
    0x31, 0x30, 0x20, 0x17, 0x0d, 0x32, 0x32, 0x30, 0x32, 0x30, 0x35, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x5a, 0x18, 0x0f, 0x39,
    0x39, 0x39, 0x39, 0x31, 0x32, 0x33, 0x31, 0x32, 0x33, 0x35, 0x39, 0x35, 0x39, 0x5a, 0x30, 0x3d, 0x31, 0x25, 0x30, 0x23, 0x06,
    0x03, 0x55, 0x04, 0x03, 0x0c, 0x1c, 0x4d, 0x61, 0x74, 0x74, 0x65, 0x72, 0x20, 0x44, 0x65, 0x76, 0x20, 0x50, 0x41, 0x49, 0x20,
    0x30, 0x78, 0x46, 0x46, 0x46, 0x31, 0x20, 0x6e, 0x6f, 0x20, 0x50, 0x49, 0x44, 0x31, 0x14, 0x30, 0x12, 0x06, 0x0a, 0x2b, 0x06,
    0x01, 0x04, 0x01, 0x82, 0xa2, 0x7c, 0x02, 0x01, 0x0c, 0x04, 0x46, 0x46, 0x46, 0x31, 0x30, 0x59, 0x30, 0x13, 0x06, 0x07, 0x2a,
    0x86, 0x48, 0xce, 0x3d, 0x02, 0x01, 0x06, 0x08, 0x2a, 0x86, 0x48, 0xce, 0x3d, 0x03, 0x01, 0x07, 0x03, 0x42, 0x00, 0x04, 0x41,
    0x9a, 0x93, 0x15, 0xc2, 0x17, 0x3e, 0x0c, 0x8c, 0x87, 0x6d, 0x03, 0xcc, 0xfc, 0x94, 0x48, 0x52, 0x64, 0x7f, 0x7f, 0xec, 0x5e,
    0x50, 0x82, 0xf4, 0x05, 0x99, 0x28, 0xec, 0xa8, 0x94, 0xc5, 0x94, 0x15, 0x13, 0x09, 0xac, 0x63, 0x1e, 0x4c, 0xb0, 0x33, 0x92,
    0xaf, 0x68, 0x4b, 0x0b, 0xaf, 0xb7, 0xe6, 0x5b, 0x3b, 0x81, 0x62, 0xc2, 0xf5, 0x2b, 0xf9, 0x31, 0xb8, 0xe7, 0x7a, 0xaa, 0x82,
    0xa3, 0x66, 0x30, 0x64, 0x30, 0x12, 0x06, 0x03, 0x55, 0x1d, 0x13, 0x01, 0x01, 0xff, 0x04, 0x08, 0x30, 0x06, 0x01, 0x01, 0xff,
    0x02, 0x01, 0x00, 0x30, 0x0e, 0x06, 0x03, 0x55, 0x1d, 0x0f, 0x01, 0x01, 0xff, 0x04, 0x04, 0x03, 0x02, 0x01, 0x06, 0x30, 0x1d,
    0x06, 0x03, 0x55, 0x1d, 0x0e, 0x04, 0x16, 0x04, 0x14, 0x63, 0x54, 0x0e, 0x47, 0xf6, 0x4b, 0x1c, 0x38, 0xd1, 0x38, 0x84, 0xa4,
    0x62, 0xd1, 0x6c, 0x19, 0x5d, 0x8f, 0xfb, 0x3c, 0x30, 0x1f, 0x06, 0x03, 0x55, 0x1d, 0x23, 0x04, 0x18, 0x30, 0x16, 0x80, 0x14,
    0x6a, 0xfd, 0x22, 0x77, 0x1f, 0x51, 0x1f, 0xec, 0xbf, 0x16, 0x41, 0x97, 0x67, 0x10, 0xdc, 0xdc, 0x31, 0xa1, 0x71, 0x7e, 0x30,
    0x0a, 0x06, 0x08, 0x2a, 0x86, 0x48, 0xce, 0x3d, 0x04, 0x03, 0x02, 0x03, 0x48, 0x00, 0x30, 0x45, 0x02, 0x21, 0x00, 0xb2, 0xef,
    0x27, 0xf4, 0x9a, 0xe9, 0xb5, 0x0f, 0xb9, 0x1e, 0xea, 0xc9, 0x4c, 0x4d, 0x0b, 0xdb, 0xb8, 0xd7, 0x92, 0x9c, 0x6c, 0xb8, 0x8f,
    0xac, 0xe5, 0x29, 0x36, 0x8d, 0x12, 0x05, 0x4c, 0x0c, 0x02, 0x20, 0x65, 0x5d, 0xc9, 0x2b, 0x86, 0xbd, 0x90, 0x98, 0x82, 0xa6,
    0xc6, 0x21, 0x77, 0xb8, 0x25, 0xd7, 0xd0, 0x5e, 0xdb, 0xe7, 0xc2, 0x2f, 0x9f, 0xea, 0x71, 0x22, 0x0e, 0x7e, 0xa7, 0x03, 0xf8,
    0x91,
};

const uint8_t kDevelopmentPAI_PublicKey_FFF1[65] = {
    0x04, 0x41, 0x9a, 0x93, 0x15, 0xc2, 0x17, 0x3e, 0x0c, 0x8c, 0x87, 0x6d, 0x03, 0xcc, 0xfc, 0x94, 0x48,
    0x52, 0x64, 0x7f, 0x7f, 0xec, 0x5e, 0x50, 0x82, 0xf4, 0x05, 0x99, 0x28, 0xec, 0xa8, 0x94, 0xc5, 0x94,
    0x15, 0x13, 0x09, 0xac, 0x63, 0x1e, 0x4c, 0xb0, 0x33, 0x92, 0xaf, 0x68, 0x4b, 0x0b, 0xaf, 0xb7, 0xe6,
    0x5b, 0x3b, 0x81, 0x62, 0xc2, 0xf5, 0x2b, 0xf9, 0x31, 0xb8, 0xe7, 0x7a, 0xaa, 0x82,
};
const uint8_t kDevelopmentPAI_PrivateKey_FFF1[32] = {
    0xc1, 0xab, 0x5f, 0xe2, 0x84, 0xb4, 0xc1, 0x89, 0x40, 0xa5, 0x31, 0x61, 0xf8, 0x06, 0x94, 0x40,
    0x50, 0xa1, 0x69, 0x7b, 0x71, 0x76, 0x1d, 0x38, 0x53, 0x37, 0xa8, 0xa3, 0xcd, 0x09, 0x5c, 0x34,
};

/*
Certificate:
    Data:
        Version: 3 (0x2)
        Serial Number:
            56:ad:82:22:ad:94:5b:64
        Signature Algorithm: ecdsa-with-SHA256
        Issuer: CN = Matter Test PAA, 1.3.6.1.4.1.37244.2.1 = FFF1
        Validity
            Not Before: Feb  5 00:00:00 2022 GMT
            Not After : Dec 31 23:59:59 9999 GMT
        Subject: CN = Matter Dev PAI 0xFFF1 no PID, 1.3.6.1.4.1.37244.2.1 = FFF1
        Subject Public Key Info:
            Public Key Algorithm: id-ecPublicKey
                Public-Key: (256 bit)
                pub:
                    04:41:9a:93:15:c2:17:3e:0c:8c:87:6d:03:cc:fc:
                    94:48:52:64:7f:7f:ec:5e:50:82:f4:05:99:28:ec:
                    a8:94:c5:94:15:13:09:ac:63:1e:4c:b0:33:92:af:
                    68:4b:0b:af:b7:e6:5b:3b:81:62:c2:f5:2b:f9:31:
                    b8:e7:7a:aa:82
                ASN1 OID: prime256v1
                NIST CURVE: P-256
        X509v3 extensions:
            X509v3 Basic Constraints: critical
                CA:TRUE, pathlen:0
            X509v3 Key Usage: critical
                Certificate Sign, CRL Sign
            X509v3 Subject Key Identifier:
                63:54:0E:47:F6:4B:1C:38:D1:38:84:A4:62:D1:6C:19:5D:8F:FB:3C
            X509v3 Authority Key Identifier:
                keyid:6A:FD:22:77:1F:51:1F:EC:BF:16:41:97:67:10:DC:DC:31:A1:71:7E

    Signature Algorithm: ecdsa-with-SHA256
         30:45:02:21:00:b2:ef:27:f4:9a:e9:b5:0f:b9:1e:ea:c9:4c:
         4d:0b:db:b8:d7:92:9c:6c:b8:8f:ac:e5:29:36:8d:12:05:4c:
         0c:02:20:65:5d:c9:2b:86:bd:90:98:82:a6:c6:21:77:b8:25:
         d7:d0:5e:db:e7:c2:2f:9f:ea:71:22:0e:7e:a7:03:f8:91
*/

/*
ASN.1

SEQUENCE (3 elem)
  SEQUENCE (8 elem)
    [0] (1 elem)
      INTEGER 2
    INTEGER (63 bit) 6245791343685426020
    SEQUENCE (1 elem)
      OBJECT IDENTIFIER 1.2.840.10045.4.3.2 ecdsaWithSHA256 (ANSI X9.62 ECDSA algorithm with SHA256)
    SEQUENCE (2 elem)
      SET (1 elem)
        SEQUENCE (2 elem)
          OBJECT IDENTIFIER 2.5.4.3 commonName (X.520 DN component)
          UTF8String Matter Test PAA
      SET (1 elem)
        SEQUENCE (2 elem)
          OBJECT IDENTIFIER 1.3.6.1.4.1.37244.2.1
          UTF8String FFF1
    SEQUENCE (2 elem)
      UTCTime 2022-02-05 00:00:00 UTC
      GeneralizedTime 9999-12-31 23:59:59 UTC
    SEQUENCE (2 elem)
      SET (1 elem)
        SEQUENCE (2 elem)
          OBJECT IDENTIFIER 2.5.4.3 commonName (X.520 DN component)
          UTF8String Matter Dev PAI 0xFFF1 no PID
      SET (1 elem)
        SEQUENCE (2 elem)
          OBJECT IDENTIFIER 1.3.6.1.4.1.37244.2.1
          UTF8String FFF1
    SEQUENCE (2 elem)
      SEQUENCE (2 elem)
        OBJECT IDENTIFIER 1.2.840.10045.2.1 ecPublicKey (ANSI X9.62 public key type)
        OBJECT IDENTIFIER 1.2.840.10045.3.1.7 prime256v1 (ANSI X9.62 named elliptic curve)
      BIT STRING (520 bit) 0000010001000001100110101001001100010101110000100001011100111110000011…
    [3] (1 elem)
      SEQUENCE (4 elem)
        SEQUENCE (3 elem)
          OBJECT IDENTIFIER 2.5.29.19 basicConstraints (X.509 extension)
          BOOLEAN true
          OCTET STRING (8 byte) 30060101FF020100
            SEQUENCE (2 elem)
              BOOLEAN true
              INTEGER 0
        SEQUENCE (3 elem)
          OBJECT IDENTIFIER 2.5.29.15 keyUsage (X.509 extension)
          BOOLEAN true
          OCTET STRING (4 byte) 03020106
            BIT STRING (7 bit) 0000011
        SEQUENCE (2 elem)
          OBJECT IDENTIFIER 2.5.29.14 subjectKeyIdentifier (X.509 extension)
          OCTET STRING (22 byte) 041463540E47F64B1C38D13884A462D16C195D8FFB3C
            OCTET STRING (20 byte) 63540E47F64B1C38D13884A462D16C195D8FFB3C
        SEQUENCE (2 elem)
          OBJECT IDENTIFIER 2.5.29.35 authorityKeyIdentifier (X.509 extension)
          OCTET STRING (24 byte) 301680146AFD22771F511FECBF1641976710DCDC31A1717E
            SEQUENCE (1 elem)
              [0] (20 byte) 6AFD22771F511FECBF1641976710DCDC31A1717E
  SEQUENCE (1 elem)
Offset: 377
Length: 2+10
(constructed)
Value:
(1 elem)
    OBJECT IDENTIFIER 1.2.840.10045.4.3.2 ecdsaWithSHA256 (ANSI X9.62 ECDSA algorithm with SHA256)
  BIT STRING (568 bit) 0011000001000101000000100010000100000000101100101110111100100111111101…
    SEQUENCE (2 elem)
      INTEGER (256 bit) 8093423925895219711386938045632983408737245943652937189339272815747009…
      INTEGER (255 bit) 4584930290841753608947726397552150715869097421278636946745345682393985…
*/

const uint8_t kDevelopmentDAC_Cert_FFF1_8000[493] = {
    0x30, 0x82, 0x01, 0xe9, 0x30, 0x82, 0x01, 0x8e, 0xa0, 0x03, 0x02, 0x01, 0x02, 0x02, 0x08, 0x23, 0x8a, 0x64, 0x7b, 0xbc, 0x4c,
    0x30, 0xdd, 0x30, 0x0a, 0x06, 0x08, 0x2a, 0x86, 0x48, 0xce, 0x3d, 0x04, 0x03, 0x02, 0x30, 0x3d, 0x31, 0x25, 0x30, 0x23, 0x06,
    0x03, 0x55, 0x04, 0x03, 0x0c, 0x1c, 0x4d, 0x61, 0x74, 0x74, 0x65, 0x72, 0x20, 0x44, 0x65, 0x76, 0x20, 0x50, 0x41, 0x49, 0x20,
    0x30, 0x78, 0x46, 0x46, 0x46, 0x31, 0x20, 0x6e, 0x6f, 0x20, 0x50, 0x49, 0x44, 0x31, 0x14, 0x30, 0x12, 0x06, 0x0a, 0x2b, 0x06,
    0x01, 0x04, 0x01, 0x82, 0xa2, 0x7c, 0x02, 0x01, 0x0c, 0x04, 0x46, 0x46, 0x46, 0x31, 0x30, 0x20, 0x17, 0x0d, 0x32, 0x32, 0x30,
    0x32, 0x30, 0x35, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x5a, 0x18, 0x0f, 0x39, 0x39, 0x39, 0x39, 0x31, 0x32, 0x33, 0x31, 0x32,
    0x33, 0x35, 0x39, 0x35, 0x39, 0x5a, 0x30, 0x53, 0x31, 0x25, 0x30, 0x23, 0x06, 0x03, 0x55, 0x04, 0x03, 0x0c, 0x1c, 0x4d, 0x61,
    0x74, 0x74, 0x65, 0x72, 0x20, 0x44, 0x65, 0x76, 0x20, 0x44, 0x41, 0x43, 0x20, 0x30, 0x78, 0x46, 0x46, 0x46, 0x31, 0x2f, 0x30,
    0x78, 0x38, 0x30, 0x30, 0x30, 0x31, 0x14, 0x30, 0x12, 0x06, 0x0a, 0x2b, 0x06, 0x01, 0x04, 0x01, 0x82, 0xa2, 0x7c, 0x02, 0x01,
    0x0c, 0x04, 0x46, 0x46, 0x46, 0x31, 0x31, 0x14, 0x30, 0x12, 0x06, 0x0a, 0x2b, 0x06, 0x01, 0x04, 0x01, 0x82, 0xa2, 0x7c, 0x02,
    0x02, 0x0c, 0x04, 0x38, 0x30, 0x30, 0x30, 0x30, 0x59, 0x30, 0x13, 0x06, 0x07, 0x2a, 0x86, 0x48, 0xce, 0x3d, 0x02, 0x01, 0x06,
    0x08, 0x2a, 0x86, 0x48, 0xce, 0x3d, 0x03, 0x01, 0x07, 0x03, 0x42, 0x00, 0x04, 0x62, 0xdb, 0x16, 0xba, 0xde, 0xa3, 0x26, 0xa6,
    0xdb, 0x84, 0x81, 0x4a, 0x06, 0x3f, 0xc6, 0xc7, 0xe9, 0xe2, 0xb1, 0x01, 0xb7, 0x21, 0x64, 0x8e, 0xba, 0x4e, 0x5a, 0xc8, 0x40,
    0xf5, 0xda, 0x30, 0x1e, 0xe6, 0x18, 0x12, 0x4e, 0xb4, 0x18, 0x0e, 0x2f, 0xc3, 0xa2, 0x04, 0x7a, 0x56, 0x4b, 0xa9, 0xbc, 0xfa,
    0x0b, 0xf7, 0x1f, 0x60, 0xce, 0x89, 0x30, 0xf1, 0xe7, 0xf6, 0x6e, 0xc8, 0xd7, 0x28, 0xa3, 0x60, 0x30, 0x5e, 0x30, 0x0c, 0x06,
    0x03, 0x55, 0x1d, 0x13, 0x01, 0x01, 0xff, 0x04, 0x02, 0x30, 0x00, 0x30, 0x0e, 0x06, 0x03, 0x55, 0x1d, 0x0f, 0x01, 0x01, 0xff,
    0x04, 0x04, 0x03, 0x02, 0x07, 0x80, 0x30, 0x1d, 0x06, 0x03, 0x55, 0x1d, 0x0e, 0x04, 0x16, 0x04, 0x14, 0xbc, 0xf7, 0xb0, 0x07,
    0x49, 0x70, 0x63, 0x60, 0x6a, 0x26, 0xbe, 0x4e, 0x08, 0x7c, 0x59, 0x56, 0x87, 0x74, 0x5a, 0x5a, 0x30, 0x1f, 0x06, 0x03, 0x55,
    0x1d, 0x23, 0x04, 0x18, 0x30, 0x16, 0x80, 0x14, 0x63, 0x54, 0x0e, 0x47, 0xf6, 0x4b, 0x1c, 0x38, 0xd1, 0x38, 0x84, 0xa4, 0x62,
    0xd1, 0x6c, 0x19, 0x5d, 0x8f, 0xfb, 0x3c, 0x30, 0x0a, 0x06, 0x08, 0x2a, 0x86, 0x48, 0xce, 0x3d, 0x04, 0x03, 0x02, 0x03, 0x49,
    0x00, 0x30, 0x46, 0x02, 0x21, 0x00, 0x97, 0x97, 0x11, 0xec, 0x9e, 0x76, 0x18, 0xce, 0x41, 0x80, 0x11, 0x32, 0xc2, 0x50, 0xdb,
    0x70, 0x76, 0x74, 0x63, 0x0c, 0xd5, 0x8c, 0x12, 0xc6, 0xe2, 0x31, 0x5f, 0x08, 0xd0, 0x1e, 0xe1, 0x78, 0x02, 0x21, 0x00, 0xec,
    0xfc, 0x13, 0x06, 0xbd, 0x2a, 0x13, 0x3d, 0x12, 0x2a, 0x27, 0x86, 0x10, 0xea, 0x3d, 0xca, 0x47, 0xf0, 0x5c, 0x7a, 0x8b, 0x80,
    0x5f, 0xa7, 0x1c, 0x6f, 0xf4, 0x15, 0x38, 0xa8, 0x64, 0xc8,
};

/*
Decoded cert: openssl x509 -inform der -in DAC_Cert_FFF1_8000.der -text -noout

Certificate:
    Data:
        Version: 3 (0x2)
        Serial Number:
            23:8a:64:7b:bc:4c:30:dd
        Signature Algorithm: ecdsa-with-SHA256
        Issuer: CN = Matter Dev PAI 0xFFF1 no PID, 1.3.6.1.4.1.37244.2.1 = FFF1
        Validity
            Not Before: Feb  5 00:00:00 2022 GMT
            Not After : Dec 31 23:59:59 9999 GMT
        Subject: CN = Matter Dev DAC 0xFFF1/0x8000, 1.3.6.1.4.1.37244.2.1 = FFF1, 1.3.6.1.4.1.37244.2.2 = 8000
        Subject Public Key Info:
            Public Key Algorithm: id-ecPublicKey
                Public-Key: (256 bit)
                pub:
                    04:62:db:16:ba:de:a3:26:a6:db:84:81:4a:06:3f:
                    c6:c7:e9:e2:b1:01:b7:21:64:8e:ba:4e:5a:c8:40:
                    f5:da:30:1e:e6:18:12:4e:b4:18:0e:2f:c3:a2:04:
                    7a:56:4b:a9:bc:fa:0b:f7:1f:60:ce:89:30:f1:e7:
                    f6:6e:c8:d7:28
                ASN1 OID: prime256v1
                NIST CURVE: P-256
        X509v3 extensions:
            X509v3 Basic Constraints: critical
                CA:FALSE
            X509v3 Key Usage: critical
                Digital Signature
            X509v3 Subject Key Identifier:
                BC:F7:B0:07:49:70:63:60:6A:26:BE:4E:08:7C:59:56:87:74:5A:5A
            X509v3 Authority Key Identifier:
                keyid:63:54:0E:47:F6:4B:1C:38:D1:38:84:A4:62:D1:6C:19:5D:8F:FB:3C

    Signature Algorithm: ecdsa-with-SHA256
         30:46:02:21:00:97:97:11:ec:9e:76:18:ce:41:80:11:32:c2:
         50:db:70:76:74:63:0c:d5:8c:12:c6:e2:31:5f:08:d0:1e:e1:
         78:02:21:00:ec:fc:13:06:bd:2a:13:3d:12:2a:27:86:10:ea:
         3d:ca:47:f0:5c:7a:8b:80:5f:a7:1c:6f:f4:15:38:a8:64:c8

*/

/* Decoded ASN.1

SEQUENCE (3 elem)
  SEQUENCE (8 elem)
    [0] (1 elem)
      INTEGER 2
    INTEGER (62 bit) 2560969820716413149
    SEQUENCE (1 elem)
      OBJECT IDENTIFIER 1.2.840.10045.4.3.2 ecdsaWithSHA256 (ANSI X9.62 ECDSA algorithm with SHA256)
    SEQUENCE (2 elem)
      SET (1 elem)
        SEQUENCE (2 elem)
          OBJECT IDENTIFIER 2.5.4.3 commonName (X.520 DN component)
          UTF8String Matter Dev PAI 0xFFF1 no PID
      SET (1 elem)
        SEQUENCE (2 elem)
          OBJECT IDENTIFIER 1.3.6.1.4.1.37244.2.1
          UTF8String FFF1
    SEQUENCE (2 elem)
      UTCTime 2022-02-05 00:00:00 UTC
      GeneralizedTime 9999-12-31 23:59:59 UTC
    SEQUENCE (3 elem)
      SET (1 elem)
        SEQUENCE (2 elem)
          OBJECT IDENTIFIER 2.5.4.3 commonName (X.520 DN component)
          UTF8String Matter Dev DAC 0xFFF1/0x8000
      SET (1 elem)
        SEQUENCE (2 elem)
          OBJECT IDENTIFIER 1.3.6.1.4.1.37244.2.1
          UTF8String FFF1
      SET (1 elem)
        SEQUENCE (2 elem)
          OBJECT IDENTIFIER 1.3.6.1.4.1.37244.2.2
          UTF8String 8000
    SEQUENCE (2 elem)
      SEQUENCE (2 elem)
        OBJECT IDENTIFIER 1.2.840.10045.2.1 ecPublicKey (ANSI X9.62 public key type)
        OBJECT IDENTIFIER 1.2.840.10045.3.1.7 prime256v1 (ANSI X9.62 named elliptic curve)
      BIT STRING (520 bit) 0000010001100010110110110001011010111010110111101010001100100110101001…
    [3] (1 elem)
      SEQUENCE (4 elem)
        SEQUENCE (3 elem)
          OBJECT IDENTIFIER 2.5.29.19 basicConstraints (X.509 extension)
          BOOLEAN true
          OCTET STRING (2 byte) 3000
            SEQUENCE (0 elem)
        SEQUENCE (3 elem)
          OBJECT IDENTIFIER 2.5.29.15 keyUsage (X.509 extension)
          BOOLEAN true
          OCTET STRING (4 byte) 03020780
            BIT STRING (1 bit) 1
        SEQUENCE (2 elem)
          OBJECT IDENTIFIER 2.5.29.14 subjectKeyIdentifier (X.509 extension)
          OCTET STRING (22 byte) 0414BCF7B007497063606A26BE4E087C595687745A5A
            OCTET STRING (20 byte) BCF7B007497063606A26BE4E087C595687745A5A
        SEQUENCE (2 elem)
          OBJECT IDENTIFIER 2.5.29.35 authorityKeyIdentifier (X.509 extension)
          OCTET STRING (24 byte) 3016801463540E47F64B1C38D13884A462D16C195D8FFB3C
            SEQUENCE (1 elem)
              [0] (20 byte) 63540E47F64B1C38D13884A462D16C195D8FFB3C
  SEQUENCE (1 elem)
    OBJECT IDENTIFIER 1.2.840.10045.4.3.2 ecdsaWithSHA256 (ANSI X9.62 ECDSA algorithm with SHA256)
  BIT STRING (576 bit) 0011000001000110000000100010000100000000100101111001011100010001111011…
    SEQUENCE (2 elem)
      INTEGER (256 bit) 6856615775177799389454949658700013485116050405241433595512074226650010…
      INTEGER (256 bit) 1071912090408366213691559168363210336766445086127676108978024779974417…
*/

const uint8_t kDevelopmentDAC_PublicKey_FFF1_8000[65] = {
    0x04, 0x62, 0xdb, 0x16, 0xba, 0xde, 0xa3, 0x26, 0xa6, 0xdb, 0x84, 0x81, 0x4a, 0x06, 0x3f, 0xc6, 0xc7,
    0xe9, 0xe2, 0xb1, 0x01, 0xb7, 0x21, 0x64, 0x8e, 0xba, 0x4e, 0x5a, 0xc8, 0x40, 0xf5, 0xda, 0x30, 0x1e,
    0xe6, 0x18, 0x12, 0x4e, 0xb4, 0x18, 0x0e, 0x2f, 0xc3, 0xa2, 0x04, 0x7a, 0x56, 0x4b, 0xa9, 0xbc, 0xfa,
    0x0b, 0xf7, 0x1f, 0x60, 0xce, 0x89, 0x30, 0xf1, 0xe7, 0xf6, 0x6e, 0xc8, 0xd7, 0x28,
};

const uint8_t kDevelopmentDAC_PrivateKey_FFF1_8000[32] = {
    0xcc, 0xcf, 0x9d, 0xc7, 0x05, 0x0e, 0xf5, 0xd9, 0x0b, 0xe4, 0x57, 0x07, 0xb9, 0x0e, 0x1f, 0x87,
    0x5d, 0x59, 0xbe, 0x1f, 0xa9, 0x42, 0xe8, 0xed, 0x2e, 0x42, 0x72, 0x03, 0xf6, 0xc2, 0xee, 0x3d,
};

/* CertificationDeclaration */
//-> format_version = 1
//-> vendor_id = 0xFFF1
//-> product_id_array = [ 0x8000, 0x8001, 0x8002, 0x8003, 0x8004, 0x8005, 0x8006, 0x8007, 0x8008, 0x8009, 0x800A, 0x800B,
// 0x800C, 0x800D, 0x800E, 0x800F, 0x8010, 0x8011, 0x8012, 0x8013, 0x8014, 0x8015, 0x8016, 0x8017, 0x8018, 0x8019, 0x801A,
// 0x801B, 0x801C, 0x801D, 0x801E, 0x801F, 0x8020, 0x8021, 0x8022, 0x8023, 0x8024, 0x8025, 0x8026, 0x8027, 0x8028, 0x8029,
// 0x802A, 0x802B, 0x802C, 0x802D, 0x802E, 0x802F, 0x8030, 0x8031, 0x8032, 0x8033, 0x8034, 0x8035, 0x8036, 0x8037, 0x8038,
// 0x8039, 0x803A, 0x803B, 0x803C, 0x803D, 0x803E, 0x803F, 0x8040, 0x8041, 0x8042, 0x8043, 0x8044, 0x8045, 0x8046, 0x8047,
// 0x8048, 0x8049, 0x804A, 0x804B, 0x804C, 0x804D, 0x804E, 0x804F, 0x8050, 0x8051, 0x8052, 0x8053, 0x8054, 0x8055, 0x8056,
// 0x8057, 0x8058, 0x8059, 0x805A, 0x805B, 0x805C, 0x805D, 0x805E, 0x805F, 0x8060, 0x8061, 0x8062, 0x8063 ]
//-> device_type_id = 0x0016
//-> certificate_id = "CSA00000SWC00000-00"
//-> security_level = 0
//-> security_information = 0
//-> version_number = 1
//-> certification_type = 0
//-> dac_origin_vendor_id is not present
//-> dac_origin_product_id is not present
const uint8_t kCdForAllExamples[539] = {
    0x30, 0x82, 0x02, 0x17, 0x06, 0x09, 0x2a, 0x86, 0x48, 0x86, 0xf7, 0x0d, 0x01, 0x07, 0x02, 0xa0, 0x82, 0x02, 0x08, 0x30,
    0x82, 0x02, 0x04, 0x02, 0x01, 0x03, 0x31, 0x0d, 0x30, 0x0b, 0x06, 0x09, 0x60, 0x86, 0x48, 0x01, 0x65, 0x03, 0x04, 0x02,
    0x01, 0x30, 0x82, 0x01, 0x70, 0x06, 0x09, 0x2a, 0x86, 0x48, 0x86, 0xf7, 0x0d, 0x01, 0x07, 0x01, 0xa0, 0x82, 0x01, 0x61,
    0x04, 0x82, 0x01, 0x5d, 0x15, 0x24, 0x00, 0x01, 0x25, 0x01, 0xf1, 0xff, 0x36, 0x02, 0x05, 0x00, 0x80, 0x05, 0x01, 0x80,
    0x05, 0x02, 0x80, 0x05, 0x03, 0x80, 0x05, 0x04, 0x80, 0x05, 0x05, 0x80, 0x05, 0x06, 0x80, 0x05, 0x07, 0x80, 0x05, 0x08,
    0x80, 0x05, 0x09, 0x80, 0x05, 0x0a, 0x80, 0x05, 0x0b, 0x80, 0x05, 0x0c, 0x80, 0x05, 0x0d, 0x80, 0x05, 0x0e, 0x80, 0x05,
    0x0f, 0x80, 0x05, 0x10, 0x80, 0x05, 0x11, 0x80, 0x05, 0x12, 0x80, 0x05, 0x13, 0x80, 0x05, 0x14, 0x80, 0x05, 0x15, 0x80,
    0x05, 0x16, 0x80, 0x05, 0x17, 0x80, 0x05, 0x18, 0x80, 0x05, 0x19, 0x80, 0x05, 0x1a, 0x80, 0x05, 0x1b, 0x80, 0x05, 0x1c,
    0x80, 0x05, 0x1d, 0x80, 0x05, 0x1e, 0x80, 0x05, 0x1f, 0x80, 0x05, 0x20, 0x80, 0x05, 0x21, 0x80, 0x05, 0x22, 0x80, 0x05,
    0x23, 0x80, 0x05, 0x24, 0x80, 0x05, 0x25, 0x80, 0x05, 0x26, 0x80, 0x05, 0x27, 0x80, 0x05, 0x28, 0x80, 0x05, 0x29, 0x80,
    0x05, 0x2a, 0x80, 0x05, 0x2b, 0x80, 0x05, 0x2c, 0x80, 0x05, 0x2d, 0x80, 0x05, 0x2e, 0x80, 0x05, 0x2f, 0x80, 0x05, 0x30,
    0x80, 0x05, 0x31, 0x80, 0x05, 0x32, 0x80, 0x05, 0x33, 0x80, 0x05, 0x34, 0x80, 0x05, 0x35, 0x80, 0x05, 0x36, 0x80, 0x05,
    0x37, 0x80, 0x05, 0x38, 0x80, 0x05, 0x39, 0x80, 0x05, 0x3a, 0x80, 0x05, 0x3b, 0x80, 0x05, 0x3c, 0x80, 0x05, 0x3d, 0x80,
    0x05, 0x3e, 0x80, 0x05, 0x3f, 0x80, 0x05, 0x40, 0x80, 0x05, 0x41, 0x80, 0x05, 0x42, 0x80, 0x05, 0x43, 0x80, 0x05, 0x44,
    0x80, 0x05, 0x45, 0x80, 0x05, 0x46, 0x80, 0x05, 0x47, 0x80, 0x05, 0x48, 0x80, 0x05, 0x49, 0x80, 0x05, 0x4a, 0x80, 0x05,
    0x4b, 0x80, 0x05, 0x4c, 0x80, 0x05, 0x4d, 0x80, 0x05, 0x4e, 0x80, 0x05, 0x4f, 0x80, 0x05, 0x50, 0x80, 0x05, 0x51, 0x80,
    0x05, 0x52, 0x80, 0x05, 0x53, 0x80, 0x05, 0x54, 0x80, 0x05, 0x55, 0x80, 0x05, 0x56, 0x80, 0x05, 0x57, 0x80, 0x05, 0x58,
    0x80, 0x05, 0x59, 0x80, 0x05, 0x5a, 0x80, 0x05, 0x5b, 0x80, 0x05, 0x5c, 0x80, 0x05, 0x5d, 0x80, 0x05, 0x5e, 0x80, 0x05,
    0x5f, 0x80, 0x05, 0x60, 0x80, 0x05, 0x61, 0x80, 0x05, 0x62, 0x80, 0x05, 0x63, 0x80, 0x18, 0x24, 0x03, 0x16, 0x2c, 0x04,
    0x13, 0x43, 0x53, 0x41, 0x30, 0x30, 0x30, 0x30, 0x30, 0x53, 0x57, 0x43, 0x30, 0x30, 0x30, 0x30, 0x30, 0x2d, 0x30, 0x30,
    0x24, 0x05, 0x00, 0x24, 0x06, 0x00, 0x24, 0x07, 0x01, 0x24, 0x08, 0x00, 0x18, 0x31, 0x7c, 0x30, 0x7a, 0x02, 0x01, 0x03,
    0x80, 0x14, 0xfe, 0x34, 0x3f, 0x95, 0x99, 0x47, 0x76, 0x3b, 0x61, 0xee, 0x45, 0x39, 0x13, 0x13, 0x38, 0x49, 0x4f, 0xe6,
    0x7d, 0x8e, 0x30, 0x0b, 0x06, 0x09, 0x60, 0x86, 0x48, 0x01, 0x65, 0x03, 0x04, 0x02, 0x01, 0x30, 0x0a, 0x06, 0x08, 0x2a,
    0x86, 0x48, 0xce, 0x3d, 0x04, 0x03, 0x02, 0x04, 0x46, 0x30, 0x44, 0x02, 0x20, 0x4a, 0x12, 0xf8, 0xd4, 0x2f, 0x90, 0x23,
    0x5c, 0x05, 0xa7, 0x71, 0x21, 0xcb, 0xeb, 0xae, 0x15, 0xd5, 0x90, 0x14, 0x65, 0x58, 0xe9, 0xc9, 0xb4, 0x7a, 0x1a, 0x38,
    0xf7, 0xa3, 0x6a, 0x7d, 0xc5, 0x02, 0x20, 0x20, 0xa4, 0x74, 0x28, 0x97, 0xc3, 0x0a, 0xed, 0xa0, 0xa5, 0x6b, 0x36, 0xe1,
    0x4e, 0xbb, 0xc8, 0x5b, 0xbd, 0xb7, 0x44, 0x93, 0xf9, 0x93, 0x58, 0x1e, 0xb0, 0x44, 0x4e, 0xd6, 0xca, 0x94, 0x0b
};