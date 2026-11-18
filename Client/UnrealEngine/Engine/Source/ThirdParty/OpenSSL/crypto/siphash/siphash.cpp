// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 5

// SipHash_Final @ 14f7a8160

undefined8 SipHash_Final(longlong *param_1,undefined1 *param_2,longlong param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  uVar8 = param_1[1];
  uVar7 = param_1[2];
  uVar5 = param_1[3];
  uVar6 = *param_1 << 0x38;
  if (param_3 == *(int *)((longlong)param_1 + 0x2c)) {
    switch((int)param_1[5]) {
    case 7:
      uVar6 = uVar6 | (ulonglong)*(byte *)((longlong)param_1 + 0x3e) << 0x30;
    case 6:
      uVar6 = uVar6 | (ulonglong)*(byte *)((longlong)param_1 + 0x3d) << 0x28;
    case 5:
      uVar6 = uVar6 | (ulonglong)*(byte *)((longlong)param_1 + 0x3c) << 0x20;
    case 4:
      uVar6 = uVar6 | (ulonglong)*(byte *)((longlong)param_1 + 0x3b) << 0x18;
    case 3:
      uVar6 = uVar6 | (ulonglong)*(byte *)((longlong)param_1 + 0x3a) << 0x10;
    case 2:
      uVar6 = uVar6 | (ulonglong)*(byte *)((longlong)param_1 + 0x39) << 8;
    case 1:
      uVar6 = uVar6 | *(byte *)(param_1 + 7);
    default:
      uVar1 = param_1[4] ^ uVar6;
      if (0 < (int)*(uint *)(param_1 + 6)) {
        uVar4 = (ulonglong)*(uint *)(param_1 + 6);
        do {
          uVar8 = uVar8 + uVar7;
          uVar7 = (uVar7 << 0xd | uVar7 >> 0x33) ^ uVar8;
          uVar2 = (uVar1 << 0x10 | uVar1 >> 0x30) ^ uVar5 + uVar1;
          uVar5 = uVar5 + uVar1 + uVar7;
          uVar8 = (uVar8 << 0x20 | uVar8 >> 0x20) + uVar2;
          uVar7 = (uVar7 << 0x11 | uVar7 >> 0x2f) ^ uVar5;
          uVar1 = (uVar2 << 0x15 | uVar2 >> 0x2b) ^ uVar8;
          uVar5 = uVar5 << 0x20 | uVar5 >> 0x20;
          uVar4 = uVar4 - 1;
        } while (uVar4 != 0);
      }
      uVar8 = uVar8 ^ uVar6;
      uVar6 = 0xff;
      if (*(int *)((longlong)param_1 + 0x2c) == 0x10) {
        uVar6 = 0xee;
      }
      uVar5 = uVar5 ^ uVar6;
      if (0 < (int)*(uint *)((longlong)param_1 + 0x34)) {
        uVar6 = (ulonglong)*(uint *)((longlong)param_1 + 0x34);
        do {
          uVar8 = uVar8 + uVar7;
          uVar7 = (uVar7 << 0xd | uVar7 >> 0x33) ^ uVar8;
          uVar4 = (uVar1 << 0x10 | uVar1 >> 0x30) ^ uVar5 + uVar1;
          uVar5 = uVar5 + uVar1 + uVar7;
          uVar8 = (uVar8 << 0x20 | uVar8 >> 0x20) + uVar4;
          uVar7 = (uVar7 << 0x11 | uVar7 >> 0x2f) ^ uVar5;
          uVar1 = (uVar4 << 0x15 | uVar4 >> 0x2b) ^ uVar8;
          uVar5 = uVar5 << 0x20 | uVar5 >> 0x20;
          uVar6 = uVar6 - 1;
        } while (uVar6 != 0);
      }
      uVar6 = uVar1 ^ uVar5 ^ uVar7 ^ uVar8;
      *param_2 = (char)uVar6;
      param_2[1] = (char)(uVar6 >> 8);
      param_2[2] = (char)(uVar6 >> 0x10);
      param_2[3] = (char)(uVar6 >> 0x18);
      param_2[5] = (char)(uVar6 >> 0x28);
      param_2[4] = (char)(uVar6 >> 0x20);
      param_2[6] = (char)(uVar6 >> 0x30);
      param_2[7] = (char)(uVar6 >> 0x38);
      if (*(int *)((longlong)param_1 + 0x2c) != 8) {
        uVar6 = (ulonglong)*(uint *)((longlong)param_1 + 0x34);
        uVar7 = uVar7 ^ 0xdd;
        if (0 < (int)*(uint *)((longlong)param_1 + 0x34)) {
          do {
            uVar8 = uVar8 + uVar7;
            uVar7 = (uVar7 << 0xd | uVar7 >> 0x33) ^ uVar8;
            uVar4 = (uVar1 << 0x10 | uVar1 >> 0x30) ^ uVar5 + uVar1;
            uVar5 = uVar5 + uVar1 + uVar7;
            uVar8 = (uVar8 << 0x20 | uVar8 >> 0x20) + uVar4;
            uVar7 = (uVar7 << 0x11 | uVar7 >> 0x2f) ^ uVar5;
            uVar1 = (uVar4 << 0x15 | uVar4 >> 0x2b) ^ uVar8;
            uVar5 = uVar5 << 0x20 | uVar5 >> 0x20;
            uVar6 = uVar6 - 1;
          } while (uVar6 != 0);
        }
        uVar8 = uVar1 ^ uVar5 ^ uVar7 ^ uVar8;
        param_2[8] = (char)uVar8;
        param_2[9] = (char)(uVar8 >> 8);
        param_2[10] = (char)(uVar8 >> 0x10);
        param_2[0xb] = (char)(uVar8 >> 0x18);
        param_2[0xd] = (char)(uVar8 >> 0x28);
        param_2[0xc] = (char)(uVar8 >> 0x20);
        param_2[0xf] = (char)(uVar8 >> 0x38);
        param_2[0xe] = (char)(uVar8 >> 0x30);
      }
      uVar3 = 1;
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}

// SipHash_Init @ 14f7a83e0

undefined8 SipHash_Init(undefined8 *param_1,ulonglong *param_2,int param_3,int param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = *(int *)((longlong)param_1 + 0x2c);
  uVar1 = *param_2;
  uVar2 = param_2[1];
  if (iVar4 == 0) {
    iVar4 = 0x10;
  }
  *(int *)((longlong)param_1 + 0x2c) = iVar4;
  iVar3 = 2;
  if (param_3 != 0) {
    iVar3 = param_3;
  }
  *(int *)(param_1 + 6) = iVar3;
  iVar3 = 4;
  if (param_4 != 0) {
    iVar3 = param_4;
  }
  *(int *)((longlong)param_1 + 0x34) = iVar3;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = 0;
  param_1[1] = uVar1 ^ 0x736f6d6570736575;
  param_1[2] = uVar2 ^ 0x646f72616e646f6d;
  param_1[3] = uVar1 ^ 0x6c7967656e657261;
  param_1[4] = uVar2 ^ 0x7465646279746573;
  if (iVar4 == 0x10) {
    param_1[2] = uVar2 ^ 0x646f72616e646f83;
  }
  return 1;
}

// SipHash_Update @ 14f7a8540

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void SipHash_Update(longlong *param_1,undefined2 *param_2,ulonglong param_3)

{
  undefined2 *puVar1;
  ulonglong uVar2;
  void *_Dst;
  undefined2 *_Src;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined2 *puVar9;
  uint uVar10;
  
  *param_1 = *param_1 + param_3;
  uVar7 = param_1[1];
  uVar8 = param_1[2];
  uVar6 = param_1[3];
  uVar3 = param_1[4];
  uVar10 = *(uint *)(param_1 + 5);
  if (uVar10 != 0) {
    uVar2 = (ulonglong)(8 - uVar10);
    _Dst = (void *)((longlong)param_1 + (ulonglong)uVar10 + 0x38);
    if (param_3 < uVar2) {
      memcpy(_Dst,param_2,param_3);
      *(int *)(param_1 + 5) = (int)param_1[5] + (int)param_3;
      return;
    }
    memcpy(_Dst,param_2,uVar2);
    param_3 = param_3 - uVar2;
    param_2 = (undefined2 *)((longlong)param_2 + uVar2);
    uVar2 = (ulonglong)*(uint *)(param_1 + 6);
    uVar3 = uVar3 ^ param_1[7];
    if (0 < (int)*(uint *)(param_1 + 6)) {
      do {
        uVar7 = uVar7 + uVar8;
        uVar8 = (uVar8 << 0xd | uVar8 >> 0x33) ^ uVar7;
        uVar4 = (uVar3 << 0x10 | uVar3 >> 0x30) ^ uVar6 + uVar3;
        uVar6 = uVar6 + uVar3 + uVar8;
        uVar7 = (uVar7 << 0x20 | uVar7 >> 0x20) + uVar4;
        uVar8 = (uVar8 << 0x11 | uVar8 >> 0x2f) ^ uVar6;
        uVar3 = (uVar4 << 0x15 | uVar4 >> 0x2b) ^ uVar7;
        uVar6 = uVar6 << 0x20 | uVar6 >> 0x20;
        uVar2 = uVar2 - 1;
      } while (uVar2 != 0);
    }
    uVar7 = uVar7 ^ param_1[7];
  }
  uVar10 = (uint)param_3 & 7;
  _Src = (undefined2 *)((longlong)param_2 + (param_3 - uVar10));
  if (param_2 != _Src) {
    puVar9 = param_2 + 3;
    do {
      uVar4 = CONCAT71(CONCAT61(CONCAT51(CONCAT41(CONCAT31(CONCAT21(*puVar9,*(undefined1 *)
                                                                             ((longlong)puVar9 + -1)
                                                                   ),*(undefined1 *)(puVar9 + -1)),
                                                  *(undefined1 *)((longlong)puVar9 + -3)),
                                         *(undefined1 *)(puVar9 + -2)),
                                *(undefined1 *)((longlong)puVar9 + -5)),*(undefined1 *)(puVar9 + -3)
                      );
      uVar3 = uVar3 ^ uVar4;
      uVar2 = (ulonglong)*(uint *)(param_1 + 6);
      if (0 < (int)*(uint *)(param_1 + 6)) {
        do {
          uVar7 = uVar7 + uVar8;
          uVar8 = (uVar8 << 0xd | uVar8 >> 0x33) ^ uVar7;
          uVar5 = (uVar3 << 0x10 | uVar3 >> 0x30) ^ uVar6 + uVar3;
          uVar6 = uVar6 + uVar3 + uVar8;
          uVar7 = (uVar7 << 0x20 | uVar7 >> 0x20) + uVar5;
          uVar8 = (uVar8 << 0x11 | uVar8 >> 0x2f) ^ uVar6;
          uVar3 = (uVar5 << 0x15 | uVar5 >> 0x2b) ^ uVar7;
          uVar6 = uVar6 << 0x20 | uVar6 >> 0x20;
          uVar2 = uVar2 - 1;
        } while (uVar2 != 0);
      }
      uVar7 = uVar7 ^ uVar4;
      puVar1 = puVar9 + 1;
      puVar9 = puVar9 + 4;
    } while (puVar1 != _Src);
  }
  if ((param_3 & 7) != 0) {
    memcpy(param_1 + 7,_Src,(longlong)(int)uVar10);
  }
  *(uint *)(param_1 + 5) = uVar10;
  param_1[1] = uVar7;
  param_1[2] = uVar8;
  param_1[3] = uVar6;
  param_1[4] = uVar3;
  return;
}

// SipHash_hash_size @ 14f7a8790

longlong SipHash_hash_size(longlong param_1)

{
  return (longlong)*(int *)(param_1 + 0x2c);
}

// SipHash_set_hash_size @ 14f7a87a0

undefined8 SipHash_set_hash_size(longlong param_1,longlong param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    param_2 = 0x10;
  }
  else if ((param_2 - 8U & 0xfffffffffffffff7) != 0) {
    return 0;
  }
  iVar1 = *(int *)(param_1 + 0x2c);
  if (iVar1 == 0) {
    iVar1 = 0x10;
  }
  *(int *)(param_1 + 0x2c) = iVar1;
  if (iVar1 != param_2) {
    *(ulonglong *)(param_1 + 0x10) = *(ulonglong *)(param_1 + 0x10) ^ 0xee;
    *(int *)(param_1 + 0x2c) = (int)param_2;
  }
  return 1;
}

