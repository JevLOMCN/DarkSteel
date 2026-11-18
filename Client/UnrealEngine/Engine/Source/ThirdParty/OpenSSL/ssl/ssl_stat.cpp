// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 3

// SSL_alert_desc_string_long @ 1501b5fa0

char * SSL_alert_desc_string_long(undefined1 param_1)

{
  switch(param_1) {
  case 0:
    return "close notify";
  default:
    return "unknown";
  case 10:
    return "unexpected_message";
  case 0x14:
    return "bad record mac";
  case 0x15:
    return "decryption failed";
  case 0x16:
    return "record overflow";
  case 0x1e:
    return "decompression failure";
  case 0x28:
    return "handshake failure";
  case 0x29:
    return "no certificate";
  case 0x2a:
    return "bad certificate";
  case 0x2b:
    return "unsupported certificate";
  case 0x2c:
    return "certificate revoked";
  case 0x2d:
    return "certificate expired";
  case 0x2e:
    return "certificate unknown";
  case 0x2f:
    return "illegal parameter";
  case 0x30:
    return "unknown CA";
  case 0x31:
    return "access denied";
  case 0x32:
    return "decode error";
  case 0x33:
    return "decrypt error";
  case 0x3c:
    return "export restriction";
  case 0x46:
    return "protocol version";
  case 0x47:
    return "insufficient security";
  case 0x50:
    return "internal error";
  case 0x5a:
    return "user canceled";
  case 100:
    return "no renegotiation";
  case 0x6e:
    return "unsupported extension";
  case 0x6f:
    return "certificate unobtainable";
  case 0x70:
    return "unrecognized name";
  case 0x71:
    return "bad certificate status response";
  case 0x72:
    return "bad certificate hash value";
  case 0x73:
    return "unknown PSK identity";
  case 0x78:
    return "no application protocol";
  }
}

// SSL_state_string @ 1501b6230

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

char * SSL_state_string(undefined8 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = ossl_statem_in_error();
  if (iVar1 == 0) {
    uVar2 = SSL_get_state(param_1);
    switch(uVar2) {
    case 0:
      return "PINIT ";
    case 1:
      return "SSLOK ";
    case 2:
      return "DRCHV";
    case 3:
      return "TRSH";
    case 4:
      return "TRSC";
    case 5:
      return "TRCS";
    case 6:
      return "TRSKE";
    case 7:
      return "TRCR";
    case 8:
      return "TRSD";
    case 9:
      return "TRST";
    case 10:
    case 0x1f:
      return "TRCCS";
    case 0xb:
    case 0x20:
      return "TRFIN";
    case 0xc:
      return "TWCH";
    case 0xd:
      return "TWCC";
    case 0xe:
      return "TWCKE";
    case 0xf:
      return "TWCV";
    case 0x10:
    case 0x23:
      return "TWCCS";
    case 0x11:
      return "TWNP";
    case 0x12:
    case 0x24:
      return "TWFIN";
    case 0x13:
      return "TWHR";
    case 0x14:
      return "TRCH";
    case 0x15:
      return "DWCHV";
    case 0x16:
      return "TWSH";
    case 0x17:
      return "TWSC";
    case 0x18:
      return "TWSKE";
    case 0x19:
      return "TWCR";
    case 0x1a:
      return "TWSD";
    case 0x1b:
      return "TRCC";
    case 0x1c:
      return "TRCKE";
    case 0x1d:
      return "TRCV";
    case 0x1e:
      return "TRNP";
    case 0x21:
      return "TWST";
    case 0x22:
      return "TWCS";
    case 0x25:
      return "TWEE";
    case 0x26:
      return "TREE";
    case 0x27:
    case 0x28:
      return "TRSCV";
    case 0x29:
      return "TRHR";
    case 0x2a:
      return "TWSKU";
    case 0x2b:
      return "TWCKU";
    case 0x2c:
      return "TRCKU";
    case 0x2d:
      return "TRSKU";
    case 0x2e:
      return "TED";
    case 0x2f:
      return "TPEDE";
    case 0x30:
    case 0x31:
      return "TWEOED";
    default:
      return "UNKWN ";
    }
  }
  return "SSLERR";
}

// SSL_state_string_long @ 1501b65a0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

char * SSL_state_string_long(undefined8 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = ossl_statem_in_error();
  if (iVar1 == 0) {
    uVar2 = SSL_get_state(param_1);
    switch(uVar2) {
    case 0:
      return "before SSL initialization";
    case 1:
      return "SSL negotiation finished successfully";
    case 2:
      return "DTLS1 read hello verify request";
    case 3:
      return "SSLv3/TLS read server hello";
    case 4:
      return "SSLv3/TLS read server certificate";
    case 5:
      return "SSLv3/TLS read certificate status";
    case 6:
      return "SSLv3/TLS read server key exchange";
    case 7:
      return "SSLv3/TLS read server certificate request";
    case 8:
      return "SSLv3/TLS read server done";
    case 9:
      return "SSLv3/TLS read server session ticket";
    case 10:
    case 0x1f:
      return "SSLv3/TLS read change cipher spec";
    case 0xb:
    case 0x20:
      return "SSLv3/TLS read finished";
    case 0xc:
      return "SSLv3/TLS write client hello";
    case 0xd:
      return "SSLv3/TLS write client certificate";
    case 0xe:
      return "SSLv3/TLS write client key exchange";
    case 0xf:
      return "SSLv3/TLS write certificate verify";
    case 0x10:
    case 0x23:
      return "SSLv3/TLS write change cipher spec";
    case 0x11:
      return "SSLv3/TLS write next proto";
    case 0x12:
    case 0x24:
      return "SSLv3/TLS write finished";
    case 0x13:
      return "SSLv3/TLS write hello request";
    case 0x14:
      return "SSLv3/TLS read client hello";
    case 0x15:
      return "DTLS1 write hello verify request";
    case 0x16:
      return "SSLv3/TLS write server hello";
    case 0x17:
      return "SSLv3/TLS write certificate";
    case 0x18:
      return "SSLv3/TLS write key exchange";
    case 0x19:
      return "SSLv3/TLS write certificate request";
    case 0x1a:
      return "SSLv3/TLS write server done";
    case 0x1b:
      return "SSLv3/TLS read client certificate";
    case 0x1c:
      return "SSLv3/TLS read client key exchange";
    case 0x1d:
      return "SSLv3/TLS read certificate verify";
    case 0x1e:
      return "SSLv3/TLS read next proto";
    case 0x21:
      return "SSLv3/TLS write session ticket";
    case 0x22:
      return "SSLv3/TLS write certificate status";
    case 0x25:
      return "TLSv1.3 write encrypted extensions";
    case 0x26:
      return "TLSv1.3 read encrypted extensions";
    case 0x27:
      return "TLSv1.3 read server certificate verify";
    case 0x28:
      return "TLSv1.3 write server certificate verify";
    case 0x29:
      return "SSLv3/TLS read hello request";
    case 0x2a:
      return "TLSv1.3 write server key update";
    case 0x2b:
      return "TLSv1.3 write client key update";
    case 0x2c:
      return "TLSv1.3 read client key update";
    case 0x2d:
      return "TLSv1.3 read server key update";
    case 0x2e:
      return "TLSv1.3 early data";
    case 0x2f:
      return "TLSv1.3 pending early data end";
    case 0x30:
      return "TLSv1.3 write end of early data";
    case 0x31:
      return "TLSv1.3 read end of early data";
    default:
      return "unknown state";
    }
  }
  return "error";
}

