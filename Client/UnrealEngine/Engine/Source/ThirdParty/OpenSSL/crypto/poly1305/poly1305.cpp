// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 4

// Poly1305_Final @ 14f7412c0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void Poly1305_Final(longlong param_1,undefined8 param_2)

{
  code *pcVar1;
  code *pcVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined1 *puVar5;
  
  lVar4 = *(longlong *)(param_1 + 0xe0);
  pcVar1 = *(code **)(param_1 + 0xe8);
  pcVar2 = *(code **)(param_1 + 0xf0);
  if (lVar4 != 0) {
    *(undefined1 *)(lVar4 + 0xd0 + param_1) = 1;
    uVar3 = lVar4 + 1;
    if (uVar3 < 0x10) {
      puVar5 = (undefined1 *)(param_1 + 0xd0 + uVar3);
      for (lVar4 = 0x10 - uVar3; lVar4 != 0; lVar4 = lVar4 + -1) {
        *puVar5 = 0;
        puVar5 = puVar5 + 1;
      }
    }
    (*pcVar1)(param_1,param_1 + 0xd0,0x10);
  }
  (*pcVar2)(param_1,param_2,param_1 + 0xc0);
  OPENSSL_cleanse(param_1,0xf8);
  return;
}

// Poly1305_Init @ 14f741370

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void Poly1305_Init(longlong param_1,longlong param_2)

{
  int iVar1;
  
  *(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0xc4) = *(undefined4 *)(param_2 + 0x14);
  *(undefined4 *)(param_1 + 200) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0xcc) = *(undefined4 *)(param_2 + 0x1c);
  iVar1 = poly1305_init(param_1,param_2,param_1 + 0xe8);
  *(undefined8 *)(param_1 + 0xe0) = 0;
  if (iVar1 == 0) {
    *(code **)(param_1 + 0xe8) = poly1305_blocks;
    *(code **)(param_1 + 0xf0) = poly1305_emit;
  }
  return;
}

// Poly1305_Update @ 14f741470

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void Poly1305_Update(longlong param_1,void *param_2,size_t param_3)

{
  longlong lVar1;
  code *pcVar2;
  void *_Dst;
  ulonglong uVar3;
  ulonglong _Size;
  size_t _Size_00;
  
  lVar1 = *(longlong *)(param_1 + 0xe0);
  pcVar2 = *(code **)(param_1 + 0xe8);
  if (lVar1 != 0) {
    _Size_00 = 0x10 - lVar1;
    _Dst = (void *)(param_1 + 0xd0 + lVar1);
    if (param_3 < _Size_00) {
      memcpy(_Dst,param_2,param_3);
      *(size_t *)(param_1 + 0xe0) = lVar1 + param_3;
      return;
    }
    memcpy(_Dst,param_2,_Size_00);
    (*pcVar2)(param_1,param_1 + 0xd0,0x10);
    param_2 = (void *)((longlong)param_2 + _Size_00);
    param_3 = param_3 - _Size_00;
  }
  _Size = (ulonglong)((uint)param_3 & 0xf);
  uVar3 = param_3 - _Size;
  if (0xf < uVar3) {
    (*pcVar2)(param_1,param_2,uVar3,1);
    param_2 = (void *)((longlong)param_2 + uVar3);
  }
  if (_Size != 0) {
    memcpy((void *)(param_1 + 0xd0),param_2,_Size);
  }
  *(ulonglong *)(param_1 + 0xe0) = _Size;
  return;
}

// Poly1305_ctx_size @ 14f741570

undefined8 Poly1305_ctx_size(void)

{
  return 0xf8;
}

