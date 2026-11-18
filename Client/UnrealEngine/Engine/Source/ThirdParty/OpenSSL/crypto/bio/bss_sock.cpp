// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 8

// FUN_14f6c7d90 @ 14f6c7d90

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int FUN_14f6c7d90(longlong param_1,char *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  WSASetLastError(0);
  iVar1 = send((longlong)*(int *)(param_1 + 0x30),param_2,param_3,0);
  BIO_clear_flags(param_1,0xf);
  if (iVar1 < 1) {
    iVar2 = BIO_sock_should_retry(iVar1);
    if (iVar2 != 0) {
      BIO_set_flags(param_1,10);
    }
  }
  return iVar1;
}

// FUN_14f6c7e10 @ 14f6c7e10

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int FUN_14f6c7e10(longlong param_1,char *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  if (param_2 == (char *)0x0) {
    return 0;
  }
  WSASetLastError(0);
  iVar1 = recv((longlong)*(int *)(param_1 + 0x30),param_2,param_3,0);
  BIO_clear_flags(param_1,0xf);
  if (iVar1 < 1) {
    iVar2 = BIO_sock_should_retry(iVar1);
    if (iVar2 == 0) {
      if (iVar1 != 0) {
        return iVar1;
      }
      *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 0x800;
      return 0;
    }
    BIO_set_flags(param_1,9);
  }
  return iVar1;
}

// FUN_14f6c7ed0 @ 14f6c7ed0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6c7ed0(undefined8 param_1,char *param_2)

{
  char cVar1;
  char *pcVar2;
  uint uVar3;
  
  cVar1 = *param_2;
  pcVar2 = param_2;
  for (uVar3 = 0; (cVar1 != '\0' && (uVar3 < 0x80000000)); uVar3 = uVar3 + 1) {
    pcVar2 = pcVar2 + 1;
    cVar1 = *pcVar2;
  }
  FUN_14f6c7d90(param_1,param_2,uVar3 & 0x7fffffff);
  return;
}

// FUN_14f6c7f20 @ 14f6c7f20

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

uint FUN_14f6c7f20(longlong param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  switch(param_2) {
  case 2:
    return *(uint *)(param_1 + 0x28) >> 0xb & 1;
  default:
    return 0;
  case 8:
    return *(uint *)(param_1 + 0x24);
  case 9:
    *(undefined4 *)(param_1 + 0x24) = param_3;
    return 1;
  case 0xb:
  case 0xc:
    return 1;
  case 0x68:
    FUN_14f6c80d0(param_1);
    *(undefined4 *)(param_1 + 0x30) = *param_4;
    *(undefined4 *)(param_1 + 0x24) = param_3;
    *(undefined4 *)(param_1 + 0x20) = 1;
    return 1;
  case 0x69:
    break;
  }
  if (*(int *)(param_1 + 0x20) == 0) {
    return 0xffffffff;
  }
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = *(undefined4 *)(param_1 + 0x30);
  }
  return *(uint *)(param_1 + 0x30);
}

// FUN_14f6c80d0 @ 14f6c80d0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f6c80d0(longlong param_1)

{
  if (param_1 == 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x24) != 0) {
    if (*(int *)(param_1 + 0x20) != 0) {
      BIO_closesocket(*(undefined4 *)(param_1 + 0x30));
    }
    *(undefined4 *)(param_1 + 0x20) = 0;
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  return 1;
}

// BIO_new_socket @ 14f6c8120

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong BIO_new_socket(undefined4 param_1,undefined4 param_2)

{
  longlong lVar1;
  
  lVar1 = BIO_new(&DAT_15348d010);
  if (lVar1 == 0) {
    return 0;
  }
  BIO_int_ctrl(lVar1,0x68,param_2,param_1);
  return lVar1;
}

// BIO_s_socket @ 14f6c8190

undefined * BIO_s_socket(void)

{
  return &DAT_15348d010;
}

// BIO_sock_should_retry @ 14f6c81f0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 BIO_sock_should_retry(int param_1)

{
  int iVar1;
  bool bVar2;
  
  if (param_1 + 1U < 2) {
    iVar1 = WSAGetLastError();
    if (iVar1 < 0x7f) {
      if ((iVar1 - 0x67U < 0x18) && ((0x800201U >> (iVar1 - 0x67U & 0x1f) & 1) != 0)) {
        return 1;
      }
      if (iVar1 == 4) {
        return 1;
      }
      bVar2 = iVar1 == 0xb;
    }
    else {
      if (iVar1 == 0x86) {
        return 1;
      }
      if (iVar1 == 0x8c) {
        return 1;
      }
      bVar2 = iVar1 == 0x2733;
    }
    if (bVar2) {
      return 1;
    }
  }
  return 0;
}

