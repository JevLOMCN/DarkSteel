// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 8

// Finalize @ 1416ee2d0

FBlake3Hash * __thiscall FBlake3::Finalize(FBlake3 *this,FBlake3Hash *__return_storage_ptr__)

{
  __return_storage_ptr__->Hash[0] = '\0';
  __return_storage_ptr__->Hash[1] = '\0';
  __return_storage_ptr__->Hash[2] = '\0';
  __return_storage_ptr__->Hash[3] = '\0';
  __return_storage_ptr__->Hash[4] = '\0';
  __return_storage_ptr__->Hash[5] = '\0';
  __return_storage_ptr__->Hash[6] = '\0';
  __return_storage_ptr__->Hash[7] = '\0';
  __return_storage_ptr__->Hash[8] = '\0';
  __return_storage_ptr__->Hash[9] = '\0';
  __return_storage_ptr__->Hash[10] = '\0';
  __return_storage_ptr__->Hash[0xb] = '\0';
  __return_storage_ptr__->Hash[0xc] = '\0';
  __return_storage_ptr__->Hash[0xd] = '\0';
  __return_storage_ptr__->Hash[0xe] = '\0';
  __return_storage_ptr__->Hash[0xf] = '\0';
  __return_storage_ptr__->Hash[0x10] = '\0';
  __return_storage_ptr__->Hash[0x11] = '\0';
  __return_storage_ptr__->Hash[0x12] = '\0';
  __return_storage_ptr__->Hash[0x13] = '\0';
  __return_storage_ptr__->Hash[0x14] = '\0';
  __return_storage_ptr__->Hash[0x15] = '\0';
  __return_storage_ptr__->Hash[0x16] = '\0';
  __return_storage_ptr__->Hash[0x17] = '\0';
  __return_storage_ptr__->Hash[0x18] = '\0';
  __return_storage_ptr__->Hash[0x19] = '\0';
  __return_storage_ptr__->Hash[0x1a] = '\0';
  __return_storage_ptr__->Hash[0x1b] = '\0';
  __return_storage_ptr__->Hash[0x1c] = '\0';
  __return_storage_ptr__->Hash[0x1d] = '\0';
  __return_storage_ptr__->Hash[0x1e] = '\0';
  __return_storage_ptr__->Hash[0x1f] = '\0';
  blake3_hasher_finalize(0,__return_storage_ptr__,0x20);
  return __return_storage_ptr__;
}

// HashBuffer @ 1416fd0a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FBlake3Hash * __cdecl
FBlake3::HashBuffer(FBlake3Hash *__return_storage_ptr__,FCompositeBuffer *param_1)

{
  int iVar1;
  ForElementType<FSharedBuffer> FVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  FBlake3Hash *pFVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_7b8 [32];
  undefined1 local_798 [1912];
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_7b8;
  blake3_hasher_init(local_798);
  FVar2 = (param_1->Segments).AllocatorInstance.SecondaryData;
  iVar1 = (param_1->Segments).ArrayNum;
  if (FVar2 != (ForElementType<FSharedBuffer>)0x0) {
    param_1 = (FCompositeBuffer *)FVar2;
  }
  if ((iVar1 < 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pFVar6 = (FBlake3Hash *)(*pcVar4)();
    return pFVar6;
  }
  FVar2 = (ForElementType<FSharedBuffer>)((longlong)param_1 + (longlong)iVar1 * 8);
  for (; (ForElementType<FSharedBuffer>)param_1 != FVar2;
      param_1 = (FCompositeBuffer *)((longlong)param_1 + 8)) {
    plVar3 = *(longlong **)param_1;
    if (plVar3 == (longlong *)0x0) {
      lVar8 = 0;
    }
    else {
      if (((ulonglong)plVar3[3] >> 0x3c & 4) == 0) {
        (**(code **)(*plVar3 + 8))(plVar3);
      }
      lVar8 = plVar3[2];
    }
    plVar3 = *(longlong **)param_1;
    if (plVar3 == (longlong *)0x0) {
      lVar7 = 0;
    }
    else {
      if (((ulonglong)plVar3[3] >> 0x3c & 4) == 0) {
        (**(code **)(*plVar3 + 8))(plVar3);
      }
      lVar7 = plVar3[1];
    }
    blake3_hasher_update(local_798,lVar7,lVar8);
  }
  __return_storage_ptr__->Hash[0] = '\0';
  __return_storage_ptr__->Hash[1] = '\0';
  __return_storage_ptr__->Hash[2] = '\0';
  __return_storage_ptr__->Hash[3] = '\0';
  __return_storage_ptr__->Hash[4] = '\0';
  __return_storage_ptr__->Hash[5] = '\0';
  __return_storage_ptr__->Hash[6] = '\0';
  __return_storage_ptr__->Hash[7] = '\0';
  __return_storage_ptr__->Hash[8] = '\0';
  __return_storage_ptr__->Hash[9] = '\0';
  __return_storage_ptr__->Hash[10] = '\0';
  __return_storage_ptr__->Hash[0xb] = '\0';
  __return_storage_ptr__->Hash[0xc] = '\0';
  __return_storage_ptr__->Hash[0xd] = '\0';
  __return_storage_ptr__->Hash[0xe] = '\0';
  __return_storage_ptr__->Hash[0xf] = '\0';
  __return_storage_ptr__->Hash[0x10] = '\0';
  __return_storage_ptr__->Hash[0x11] = '\0';
  __return_storage_ptr__->Hash[0x12] = '\0';
  __return_storage_ptr__->Hash[0x13] = '\0';
  __return_storage_ptr__->Hash[0x14] = '\0';
  __return_storage_ptr__->Hash[0x15] = '\0';
  __return_storage_ptr__->Hash[0x16] = '\0';
  __return_storage_ptr__->Hash[0x17] = '\0';
  __return_storage_ptr__->Hash[0x18] = '\0';
  __return_storage_ptr__->Hash[0x19] = '\0';
  __return_storage_ptr__->Hash[0x1a] = '\0';
  __return_storage_ptr__->Hash[0x1b] = '\0';
  __return_storage_ptr__->Hash[0x1c] = '\0';
  __return_storage_ptr__->Hash[0x1d] = '\0';
  __return_storage_ptr__->Hash[0x1e] = '\0';
  __return_storage_ptr__->Hash[0x1f] = '\0';
  blake3_hasher_finalize(local_798,__return_storage_ptr__,0x20);
  return __return_storage_ptr__;
}

// HashBuffer @ 1416fd1e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FBlake3Hash * __cdecl
FBlake3::HashBuffer(FBlake3Hash *__return_storage_ptr__,void *param_1,ulong64 param_2)

{
  undefined1 auStack_7b8 [32];
  undefined1 local_798 [1912];
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_7b8;
  blake3_hasher_init(local_798);
  blake3_hasher_update(local_798,param_1,param_2);
  __return_storage_ptr__->Hash[0] = '\0';
  __return_storage_ptr__->Hash[1] = '\0';
  __return_storage_ptr__->Hash[2] = '\0';
  __return_storage_ptr__->Hash[3] = '\0';
  __return_storage_ptr__->Hash[4] = '\0';
  __return_storage_ptr__->Hash[5] = '\0';
  __return_storage_ptr__->Hash[6] = '\0';
  __return_storage_ptr__->Hash[7] = '\0';
  __return_storage_ptr__->Hash[8] = '\0';
  __return_storage_ptr__->Hash[9] = '\0';
  __return_storage_ptr__->Hash[10] = '\0';
  __return_storage_ptr__->Hash[0xb] = '\0';
  __return_storage_ptr__->Hash[0xc] = '\0';
  __return_storage_ptr__->Hash[0xd] = '\0';
  __return_storage_ptr__->Hash[0xe] = '\0';
  __return_storage_ptr__->Hash[0xf] = '\0';
  __return_storage_ptr__->Hash[0x10] = '\0';
  __return_storage_ptr__->Hash[0x11] = '\0';
  __return_storage_ptr__->Hash[0x12] = '\0';
  __return_storage_ptr__->Hash[0x13] = '\0';
  __return_storage_ptr__->Hash[0x14] = '\0';
  __return_storage_ptr__->Hash[0x15] = '\0';
  __return_storage_ptr__->Hash[0x16] = '\0';
  __return_storage_ptr__->Hash[0x17] = '\0';
  __return_storage_ptr__->Hash[0x18] = '\0';
  __return_storage_ptr__->Hash[0x19] = '\0';
  __return_storage_ptr__->Hash[0x1a] = '\0';
  __return_storage_ptr__->Hash[0x1b] = '\0';
  __return_storage_ptr__->Hash[0x1c] = '\0';
  __return_storage_ptr__->Hash[0x1d] = '\0';
  __return_storage_ptr__->Hash[0x1e] = '\0';
  __return_storage_ptr__->Hash[0x1f] = '\0';
  blake3_hasher_finalize(local_798,__return_storage_ptr__,0x20);
  return __return_storage_ptr__;
}

// HashBuffer @ 1416fd270

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FBlake3Hash * __cdecl
FBlake3::HashBuffer(FBlake3Hash *__return_storage_ptr__,TMemoryView<void_const_> *param_1)

{
  undefined1 auStack_7a8 [32];
  undefined1 local_788 [1912];
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_7a8;
  blake3_hasher_init(local_788);
  blake3_hasher_update(local_788,param_1->Data,param_1->Size);
  __return_storage_ptr__->Hash[0] = '\0';
  __return_storage_ptr__->Hash[1] = '\0';
  __return_storage_ptr__->Hash[2] = '\0';
  __return_storage_ptr__->Hash[3] = '\0';
  __return_storage_ptr__->Hash[4] = '\0';
  __return_storage_ptr__->Hash[5] = '\0';
  __return_storage_ptr__->Hash[6] = '\0';
  __return_storage_ptr__->Hash[7] = '\0';
  __return_storage_ptr__->Hash[8] = '\0';
  __return_storage_ptr__->Hash[9] = '\0';
  __return_storage_ptr__->Hash[10] = '\0';
  __return_storage_ptr__->Hash[0xb] = '\0';
  __return_storage_ptr__->Hash[0xc] = '\0';
  __return_storage_ptr__->Hash[0xd] = '\0';
  __return_storage_ptr__->Hash[0xe] = '\0';
  __return_storage_ptr__->Hash[0xf] = '\0';
  __return_storage_ptr__->Hash[0x10] = '\0';
  __return_storage_ptr__->Hash[0x11] = '\0';
  __return_storage_ptr__->Hash[0x12] = '\0';
  __return_storage_ptr__->Hash[0x13] = '\0';
  __return_storage_ptr__->Hash[0x14] = '\0';
  __return_storage_ptr__->Hash[0x15] = '\0';
  __return_storage_ptr__->Hash[0x16] = '\0';
  __return_storage_ptr__->Hash[0x17] = '\0';
  __return_storage_ptr__->Hash[0x18] = '\0';
  __return_storage_ptr__->Hash[0x19] = '\0';
  __return_storage_ptr__->Hash[0x1a] = '\0';
  __return_storage_ptr__->Hash[0x1b] = '\0';
  __return_storage_ptr__->Hash[0x1c] = '\0';
  __return_storage_ptr__->Hash[0x1d] = '\0';
  __return_storage_ptr__->Hash[0x1e] = '\0';
  __return_storage_ptr__->Hash[0x1f] = '\0';
  blake3_hasher_finalize(local_788,__return_storage_ptr__,0x20);
  return __return_storage_ptr__;
}

// Reset @ 14170da40

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FBlake3::Reset(FBlake3 *this)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = _UNK_1531d7300;
  *(undefined8 *)(this->HasherBytes).Pad = _DAT_1531d72f8;
  *(undefined8 *)((this->HasherBytes).Pad + 8) = uVar1;
  uVar1 = _UNK_1531d7310;
  *(undefined8 *)((this->HasherBytes).Pad + 0x10) = _DAT_1531d7308;
  *(undefined8 *)((this->HasherBytes).Pad + 0x18) = uVar1;
  uVar1 = _UNK_1531d7300;
  *(undefined8 *)((this->HasherBytes).Pad + 0x20) = _DAT_1531d72f8;
  *(undefined8 *)((this->HasherBytes).Pad + 0x28) = uVar1;
  uVar2 = _UNK_1531d7310;
  uVar1 = _DAT_1531d7308;
  (this->HasherBytes).Pad[0x40] = '\0';
  (this->HasherBytes).Pad[0x41] = '\0';
  (this->HasherBytes).Pad[0x42] = '\0';
  (this->HasherBytes).Pad[0x43] = '\0';
  (this->HasherBytes).Pad[0x44] = '\0';
  (this->HasherBytes).Pad[0x45] = '\0';
  (this->HasherBytes).Pad[0x46] = '\0';
  (this->HasherBytes).Pad[0x47] = '\0';
  *(undefined8 *)((this->HasherBytes).Pad + 0x30) = uVar1;
  *(undefined8 *)((this->HasherBytes).Pad + 0x38) = uVar2;
  (this->HasherBytes).Pad[0x48] = '\0';
  (this->HasherBytes).Pad[0x49] = '\0';
  (this->HasherBytes).Pad[0x4a] = '\0';
  (this->HasherBytes).Pad[0x4b] = '\0';
  (this->HasherBytes).Pad[0x4c] = '\0';
  (this->HasherBytes).Pad[0x4d] = '\0';
  (this->HasherBytes).Pad[0x4e] = '\0';
  (this->HasherBytes).Pad[0x4f] = '\0';
  (this->HasherBytes).Pad[0x50] = '\0';
  (this->HasherBytes).Pad[0x51] = '\0';
  (this->HasherBytes).Pad[0x52] = '\0';
  (this->HasherBytes).Pad[0x53] = '\0';
  (this->HasherBytes).Pad[0x54] = '\0';
  (this->HasherBytes).Pad[0x55] = '\0';
  (this->HasherBytes).Pad[0x56] = '\0';
  (this->HasherBytes).Pad[0x57] = '\0';
  (this->HasherBytes).Pad[0x58] = '\0';
  (this->HasherBytes).Pad[0x59] = '\0';
  (this->HasherBytes).Pad[0x5a] = '\0';
  (this->HasherBytes).Pad[0x5b] = '\0';
  (this->HasherBytes).Pad[0x5c] = '\0';
  (this->HasherBytes).Pad[0x5d] = '\0';
  (this->HasherBytes).Pad[0x5e] = '\0';
  (this->HasherBytes).Pad[0x5f] = '\0';
  (this->HasherBytes).Pad[0x60] = '\0';
  (this->HasherBytes).Pad[0x61] = '\0';
  (this->HasherBytes).Pad[0x62] = '\0';
  (this->HasherBytes).Pad[99] = '\0';
  (this->HasherBytes).Pad[100] = '\0';
  (this->HasherBytes).Pad[0x65] = '\0';
  (this->HasherBytes).Pad[0x66] = '\0';
  (this->HasherBytes).Pad[0x67] = '\0';
  (this->HasherBytes).Pad[0x68] = '\0';
  (this->HasherBytes).Pad[0x69] = '\0';
  (this->HasherBytes).Pad[0x6a] = '\0';
  (this->HasherBytes).Pad[0x6b] = '\0';
  (this->HasherBytes).Pad[0x6c] = '\0';
  (this->HasherBytes).Pad[0x6d] = '\0';
  (this->HasherBytes).Pad[0x6e] = '\0';
  (this->HasherBytes).Pad[0x6f] = '\0';
  (this->HasherBytes).Pad[0x70] = '\0';
  (this->HasherBytes).Pad[0x71] = '\0';
  (this->HasherBytes).Pad[0x72] = '\0';
  (this->HasherBytes).Pad[0x73] = '\0';
  (this->HasherBytes).Pad[0x74] = '\0';
  (this->HasherBytes).Pad[0x75] = '\0';
  (this->HasherBytes).Pad[0x76] = '\0';
  (this->HasherBytes).Pad[0x77] = '\0';
  (this->HasherBytes).Pad[0x78] = '\0';
  (this->HasherBytes).Pad[0x79] = '\0';
  (this->HasherBytes).Pad[0x7a] = '\0';
  (this->HasherBytes).Pad[0x7b] = '\0';
  (this->HasherBytes).Pad[0x7c] = '\0';
  (this->HasherBytes).Pad[0x7d] = '\0';
  (this->HasherBytes).Pad[0x7e] = '\0';
  (this->HasherBytes).Pad[0x7f] = '\0';
  (this->HasherBytes).Pad[0x80] = '\0';
  (this->HasherBytes).Pad[0x81] = '\0';
  (this->HasherBytes).Pad[0x82] = '\0';
  (this->HasherBytes).Pad[0x83] = '\0';
  (this->HasherBytes).Pad[0x84] = '\0';
  (this->HasherBytes).Pad[0x85] = '\0';
  (this->HasherBytes).Pad[0x86] = '\0';
  (this->HasherBytes).Pad[0x87] = '\0';
  (this->HasherBytes).Pad[0x88] = '\0';
  (this->HasherBytes).Pad[0x89] = '\0';
  (this->HasherBytes).Pad[0x8a] = '\0';
  (this->HasherBytes).Pad[0x90] = '\0';
  return;
}

// Update @ 1417197c0

void __thiscall FBlake3::Update(FBlake3 *this,FCompositeBuffer *param_1)

{
  int iVar1;
  ForElementType<FSharedBuffer> FVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  longlong lVar6;
  longlong lVar7;
  
  FVar2 = (param_1->Segments).AllocatorInstance.SecondaryData;
  iVar1 = (param_1->Segments).ArrayNum;
  if (FVar2 != (ForElementType<FSharedBuffer>)0x0) {
    param_1 = (FCompositeBuffer *)FVar2;
  }
  if ((iVar1 < 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  FVar2 = (ForElementType<FSharedBuffer>)((longlong)param_1 + (longlong)iVar1 * 8);
  for (; (ForElementType<FSharedBuffer>)param_1 != FVar2;
      param_1 = (FCompositeBuffer *)((longlong)param_1 + 8)) {
    plVar3 = *(longlong **)param_1;
    if (plVar3 == (longlong *)0x0) {
      lVar7 = 0;
    }
    else {
      if (((ulonglong)plVar3[3] >> 0x3c & 4) == 0) {
        (**(code **)(*plVar3 + 8))(plVar3);
      }
      lVar7 = plVar3[2];
    }
    plVar3 = *(longlong **)param_1;
    if (plVar3 == (longlong *)0x0) {
      lVar6 = 0;
    }
    else {
      if (((ulonglong)plVar3[3] >> 0x3c & 4) == 0) {
        (**(code **)(*plVar3 + 8))(plVar3);
      }
      lVar6 = plVar3[1];
    }
    blake3_hasher_update(this,lVar6,lVar7);
  }
  return;
}

// Update @ 1417198b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FBlake3::Update(FBlake3 *this,void *param_1,ulong64 param_2)

{
  uchar *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  byte bVar5;
  ulonglong uVar6;
  uchar uVar7;
  ulonglong uVar8;
  uint uVar9;
  undefined8 *puVar10;
  longlong lVar11;
  uchar *puVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  void *pvVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined1 auStack_618 [32];
  ulonglong uStack_5f8;
  undefined8 *puStack_5f0;
  byte bStack_5e8;
  undefined1 uStack_5e0;
  undefined1 uStack_5d8;
  undefined8 *puStack_5d0;
  void *pvStack_5c8;
  ulonglong uStack_5c0;
  undefined4 uStack_5b8;
  undefined4 uStack_5b4;
  undefined4 uStack_5b0;
  undefined4 uStack_5ac;
  undefined4 uStack_5a8;
  undefined4 uStack_5a4;
  undefined4 uStack_5a0;
  undefined4 uStack_59c;
  ulonglong uStack_598;
  undefined8 uStack_590;
  undefined8 uStack_588;
  undefined8 uStack_580;
  undefined8 uStack_578;
  undefined8 uStack_570;
  undefined8 uStack_568;
  undefined8 uStack_560;
  undefined8 uStack_558;
  uchar uStack_550;
  byte bStack_54f;
  undefined2 uStack_54e;
  undefined4 uStack_54c;
  undefined8 uStack_548;
  undefined8 uStack_540;
  undefined8 uStack_538;
  undefined8 uStack_530;
  ulonglong uStack_528;
  undefined8 uStack_520;
  undefined8 uStack_518;
  undefined8 uStack_510;
  undefined8 uStack_508;
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  byte bStack_4e0;
  byte bStack_4df;
  byte bStack_4de;
  undefined1 uStack_4dd;
  undefined4 uStack_4dc;
  undefined4 uStack_4d8;
  undefined4 uStack_4d4;
  undefined4 uStack_4d0;
  undefined4 uStack_4cc;
  undefined4 uStack_4c8;
  undefined4 uStack_4c4;
  undefined4 uStack_4c0;
  undefined4 uStack_4bc;
  ulonglong uStack_4b8;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  ulonglong uStack_470;
  undefined4 uStack_468;
  undefined4 uStack_464;
  undefined4 uStack_460;
  undefined4 uStack_45c;
  undefined4 uStack_458;
  undefined4 uStack_454;
  undefined4 uStack_450;
  undefined4 uStack_44c;
  undefined4 uStack_448;
  undefined4 uStack_444;
  undefined4 uStack_440;
  undefined4 uStack_43c;
  undefined4 uStack_438;
  undefined4 uStack_434;
  undefined4 uStack_430;
  undefined4 uStack_42c;
  undefined4 uStack_428;
  undefined4 uStack_424;
  undefined4 uStack_420;
  undefined4 uStack_41c;
  undefined4 uStack_418;
  undefined4 uStack_414;
  undefined4 uStack_410;
  undefined4 uStack_40c;
  undefined4 uStack_408;
  undefined4 uStack_404;
  undefined4 uStack_400;
  undefined4 uStack_3fc;
  undefined4 uStack_3f8;
  undefined4 uStack_3f4;
  undefined4 uStack_3f0;
  undefined4 uStack_3ec;
  undefined8 uStack_3e8;
  undefined4 uStack_3e0;
  undefined4 uStack_3dc;
  undefined4 uStack_3d8;
  undefined4 uStack_3d4;
  undefined4 uStack_3d0;
  undefined4 uStack_3cc;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  ulonglong uStack_380;
  undefined1 uStack_368;
  undefined1 uStack_367;
  undefined1 uStack_366;
  undefined1 uStack_365;
  undefined1 uStack_364;
  undefined1 uStack_363;
  undefined1 uStack_362;
  undefined1 uStack_361;
  undefined1 uStack_360;
  undefined1 uStack_35f;
  undefined1 uStack_35e;
  undefined1 uStack_35d;
  undefined1 uStack_35c;
  undefined1 uStack_35b;
  undefined1 uStack_35a;
  undefined1 uStack_359;
  undefined1 uStack_358;
  undefined1 uStack_357;
  undefined1 uStack_356;
  undefined1 uStack_355;
  undefined1 uStack_354;
  undefined1 uStack_353;
  undefined1 uStack_352;
  undefined1 uStack_351;
  undefined1 uStack_350;
  undefined1 uStack_34f;
  undefined1 uStack_34e;
  undefined1 uStack_34d;
  undefined1 uStack_34c;
  undefined1 uStack_34b;
  undefined1 uStack_34a;
  undefined1 uStack_349;
  undefined8 auStack_348 [4];
  undefined4 uStack_328;
  undefined4 uStack_324;
  undefined4 uStack_320;
  undefined4 uStack_31c;
  undefined4 uStack_318;
  undefined4 uStack_314;
  undefined4 uStack_310;
  undefined4 uStack_30c;
  undefined8 auStack_148 [32];
  ulonglong uStack_48;
  
  if (param_2 != 0) {
    uStack_48 = __security_cookie.value ^ (ulonglong)auStack_618;
    uVar14 = (ulonglong)(this->HasherBytes).Pad[0x89];
    bVar5 = (this->HasherBytes).Pad[0x88];
    uVar6 = (ulonglong)bVar5;
    pvStack_5c8 = param_1;
    if (uVar14 * 0x40 + uVar6 != 0) {
      uVar14 = (0x10 - uVar14) * 0x40 - uVar6;
      if (param_2 < uVar14) {
        uVar14 = param_2;
      }
      uVar13 = uVar14;
      pvVar15 = param_1;
      if (bVar5 != 0) {
        if (0x40 - uVar6 <= uVar14) {
          uVar13 = 0x40 - uVar6;
        }
        memcpy((this->HasherBytes).Pad + uVar6 + 0x48,param_1,uVar13);
        puVar12 = (this->HasherBytes).Pad + 0x88;
        *puVar12 = *puVar12 + (char)uVar13;
        pvVar15 = (void *)((longlong)param_1 + uVar13);
        uVar13 = uVar14 - uVar13;
        if (uVar13 != 0) {
          uStack_5f8 = CONCAT71(uStack_5f8._1_7_,
                                (this->HasherBytes).Pad[0x89] == '\0' |
                                (this->HasherBytes).Pad[0x8a]);
          blake3_compress_in_place
                    ((this->HasherBytes).Pad + 0x20,(this->HasherBytes).Pad + 0x48,0x40,
                     *(undefined8 *)((this->HasherBytes).Pad + 0x40));
          puVar12 = (this->HasherBytes).Pad + 0x89;
          *puVar12 = *puVar12 + '\x01';
          (this->HasherBytes).Pad[0x88] = '\0';
          (this->HasherBytes).Pad[0x48] = '\0';
          (this->HasherBytes).Pad[0x49] = '\0';
          (this->HasherBytes).Pad[0x4a] = '\0';
          (this->HasherBytes).Pad[0x4b] = '\0';
          (this->HasherBytes).Pad[0x4c] = '\0';
          (this->HasherBytes).Pad[0x4d] = '\0';
          (this->HasherBytes).Pad[0x4e] = '\0';
          (this->HasherBytes).Pad[0x4f] = '\0';
          (this->HasherBytes).Pad[0x50] = '\0';
          (this->HasherBytes).Pad[0x51] = '\0';
          (this->HasherBytes).Pad[0x52] = '\0';
          (this->HasherBytes).Pad[0x53] = '\0';
          (this->HasherBytes).Pad[0x54] = '\0';
          (this->HasherBytes).Pad[0x55] = '\0';
          (this->HasherBytes).Pad[0x56] = '\0';
          (this->HasherBytes).Pad[0x57] = '\0';
          (this->HasherBytes).Pad[0x58] = '\0';
          (this->HasherBytes).Pad[0x59] = '\0';
          (this->HasherBytes).Pad[0x5a] = '\0';
          (this->HasherBytes).Pad[0x5b] = '\0';
          (this->HasherBytes).Pad[0x5c] = '\0';
          (this->HasherBytes).Pad[0x5d] = '\0';
          (this->HasherBytes).Pad[0x5e] = '\0';
          (this->HasherBytes).Pad[0x5f] = '\0';
          (this->HasherBytes).Pad[0x60] = '\0';
          (this->HasherBytes).Pad[0x61] = '\0';
          (this->HasherBytes).Pad[0x62] = '\0';
          (this->HasherBytes).Pad[99] = '\0';
          (this->HasherBytes).Pad[100] = '\0';
          (this->HasherBytes).Pad[0x65] = '\0';
          (this->HasherBytes).Pad[0x66] = '\0';
          (this->HasherBytes).Pad[0x67] = '\0';
          (this->HasherBytes).Pad[0x68] = '\0';
          (this->HasherBytes).Pad[0x69] = '\0';
          (this->HasherBytes).Pad[0x6a] = '\0';
          (this->HasherBytes).Pad[0x6b] = '\0';
          (this->HasherBytes).Pad[0x6c] = '\0';
          (this->HasherBytes).Pad[0x6d] = '\0';
          (this->HasherBytes).Pad[0x6e] = '\0';
          (this->HasherBytes).Pad[0x6f] = '\0';
          (this->HasherBytes).Pad[0x70] = '\0';
          (this->HasherBytes).Pad[0x71] = '\0';
          (this->HasherBytes).Pad[0x72] = '\0';
          (this->HasherBytes).Pad[0x73] = '\0';
          (this->HasherBytes).Pad[0x74] = '\0';
          (this->HasherBytes).Pad[0x75] = '\0';
          (this->HasherBytes).Pad[0x76] = '\0';
          (this->HasherBytes).Pad[0x77] = '\0';
          (this->HasherBytes).Pad[0x78] = '\0';
          (this->HasherBytes).Pad[0x79] = '\0';
          (this->HasherBytes).Pad[0x7a] = '\0';
          (this->HasherBytes).Pad[0x7b] = '\0';
          (this->HasherBytes).Pad[0x7c] = '\0';
          (this->HasherBytes).Pad[0x7d] = '\0';
          (this->HasherBytes).Pad[0x7e] = '\0';
          (this->HasherBytes).Pad[0x7f] = '\0';
          (this->HasherBytes).Pad[0x80] = '\0';
          (this->HasherBytes).Pad[0x81] = '\0';
          (this->HasherBytes).Pad[0x82] = '\0';
          (this->HasherBytes).Pad[0x83] = '\0';
          (this->HasherBytes).Pad[0x84] = '\0';
          (this->HasherBytes).Pad[0x85] = '\0';
          (this->HasherBytes).Pad[0x86] = '\0';
          (this->HasherBytes).Pad[0x87] = '\0';
        }
      }
      if (0x40 < uVar13) {
        uVar7 = (this->HasherBytes).Pad[0x89];
        lVar11 = (uVar13 - 0x41 >> 6) + 1;
        uVar13 = uVar13 + lVar11 * -0x40;
        do {
          uStack_5f8 = CONCAT71(uStack_5f8._1_7_,uVar7 == '\0' | (this->HasherBytes).Pad[0x8a]);
          blake3_compress_in_place
                    ((this->HasherBytes).Pad + 0x20,pvVar15,0x40,
                     *(undefined8 *)((this->HasherBytes).Pad + 0x40));
          puVar12 = (this->HasherBytes).Pad + 0x89;
          *puVar12 = *puVar12 + '\x01';
          pvVar15 = (void *)((longlong)pvVar15 + 0x40);
          uVar7 = (this->HasherBytes).Pad[0x89];
          lVar11 = lVar11 + -1;
        } while (lVar11 != 0);
      }
      uVar8 = (ulonglong)(this->HasherBytes).Pad[0x88];
      uVar6 = 0x40 - uVar8;
      if (uVar6 <= uVar13) {
        uVar13 = uVar6;
      }
      memcpy((this->HasherBytes).Pad + uVar8 + 0x48,pvVar15,uVar13);
      uStack_550 = (char)uVar13 + (this->HasherBytes).Pad[0x88];
      param_1 = (void *)((longlong)param_1 + uVar14);
      (this->HasherBytes).Pad[0x88] = uStack_550;
      param_2 = param_2 - uVar14;
      if (param_2 == 0) {
        return;
      }
      uStack_590 = *(undefined8 *)((this->HasherBytes).Pad + 0x48);
      uStack_588 = *(undefined8 *)((this->HasherBytes).Pad + 0x50);
      uStack_598 = *(ulonglong *)((this->HasherBytes).Pad + 0x40);
      uStack_580 = *(undefined8 *)((this->HasherBytes).Pad + 0x58);
      uStack_578 = *(undefined8 *)((this->HasherBytes).Pad + 0x60);
      uStack_5b8 = *(undefined4 *)((this->HasherBytes).Pad + 0x20);
      uStack_5b4 = *(undefined4 *)((this->HasherBytes).Pad + 0x24);
      uStack_5b0 = *(undefined4 *)((this->HasherBytes).Pad + 0x28);
      uStack_5ac = *(undefined4 *)((this->HasherBytes).Pad + 0x2c);
      uStack_5a8 = *(undefined4 *)((this->HasherBytes).Pad + 0x30);
      uStack_5a4 = *(undefined4 *)((this->HasherBytes).Pad + 0x34);
      uStack_5a0 = *(undefined4 *)((this->HasherBytes).Pad + 0x38);
      uStack_59c = *(undefined4 *)((this->HasherBytes).Pad + 0x3c);
      bStack_54f = ((this->HasherBytes).Pad[0x89] == '\0') + 2U | (this->HasherBytes).Pad[0x8a];
      uStack_570 = *(undefined8 *)((this->HasherBytes).Pad + 0x68);
      uStack_568 = *(undefined8 *)((this->HasherBytes).Pad + 0x70);
      uStack_5f8 = CONCAT71(uStack_5f8._1_7_,bStack_54f);
      uStack_560 = *(undefined8 *)((this->HasherBytes).Pad + 0x78);
      uStack_558 = *(undefined8 *)((this->HasherBytes).Pad + 0x80);
      uStack_54e = CONCAT11(uStack_4dd,bStack_4de);
      uStack_54c = uStack_4dc;
      pvStack_5c8 = param_1;
      uStack_528 = uStack_598;
      uStack_520 = uStack_590;
      uStack_518 = uStack_588;
      uStack_510 = uStack_580;
      uStack_508 = uStack_578;
      uStack_500 = uStack_570;
      uStack_4f8 = uStack_568;
      uStack_4f0 = uStack_560;
      uStack_4e8 = uStack_558;
      bStack_4e0 = uStack_550;
      bStack_4df = bStack_54f;
      uStack_468 = uStack_5b8;
      uStack_464 = uStack_5b4;
      uStack_460 = uStack_5b0;
      uStack_45c = uStack_5ac;
      uStack_458 = uStack_5a8;
      uStack_454 = uStack_5a4;
      uStack_450 = uStack_5a0;
      uStack_44c = uStack_59c;
      blake3_compress_in_place(&uStack_468,&uStack_590,uStack_550);
      uStack_367 = (undefined1)((uint)uStack_468 >> 8);
      uStack_366 = (undefined1)((uint)uStack_468 >> 0x10);
      uStack_368 = (undefined1)uStack_468;
      uStack_365 = (undefined1)((uint)uStack_468 >> 0x18);
      uStack_363 = (undefined1)((uint)uStack_464 >> 8);
      uStack_362 = (undefined1)((uint)uStack_464 >> 0x10);
      uStack_364 = (undefined1)uStack_464;
      uStack_361 = (undefined1)((uint)uStack_464 >> 0x18);
      uStack_35f = (undefined1)((uint)uStack_460 >> 8);
      uStack_35e = (undefined1)((uint)uStack_460 >> 0x10);
      uStack_360 = (undefined1)uStack_460;
      uStack_35d = (undefined1)((uint)uStack_460 >> 0x18);
      uStack_35b = (undefined1)((uint)uStack_45c >> 8);
      uStack_35c = (undefined1)uStack_45c;
      uStack_35a = (undefined1)((uint)uStack_45c >> 0x10);
      uStack_359 = (undefined1)((uint)uStack_45c >> 0x18);
      uStack_358 = (undefined1)uStack_458;
      uStack_357 = (undefined1)((uint)uStack_458 >> 8);
      uVar9 = 0;
      uStack_356 = (undefined1)((uint)uStack_458 >> 0x10);
      uStack_355 = (undefined1)((uint)uStack_458 >> 0x18);
      uStack_353 = (undefined1)((uint)uStack_454 >> 8);
      uStack_352 = (undefined1)((uint)uStack_454 >> 0x10);
      uStack_354 = (undefined1)uStack_454;
      uStack_351 = (undefined1)((uint)uStack_454 >> 0x18);
      uStack_34f = (undefined1)((uint)uStack_450 >> 8);
      uStack_350 = (undefined1)uStack_450;
      uStack_34e = (undefined1)((uint)uStack_450 >> 0x10);
      uStack_34d = (undefined1)((uint)uStack_450 >> 0x18);
      uStack_34b = (undefined1)((uint)uStack_44c >> 8);
      uStack_34c = (undefined1)uStack_44c;
      uStack_349 = (undefined1)((uint)uStack_44c >> 0x18);
      uStack_34a = (undefined1)((uint)uStack_44c >> 0x10);
      for (uVar6 = *(ulonglong *)((this->HasherBytes).Pad + 0x40); uVar6 != 0;
          uVar6 = uVar6 & uVar6 - 1) {
        uVar9 = uVar9 + 1;
      }
      bVar5 = (this->HasherBytes).Pad[0x90];
      while ((ulonglong)uVar9 < (ulonglong)bVar5) {
        uStack_4d8 = *(undefined4 *)(this->HasherBytes).Pad;
        uStack_4d4 = *(undefined4 *)((this->HasherBytes).Pad + 4);
        uStack_4d0 = *(undefined4 *)((this->HasherBytes).Pad + 8);
        uStack_4cc = *(undefined4 *)((this->HasherBytes).Pad + 0xc);
        uStack_528 = 0;
        uStack_4c8 = *(undefined4 *)((this->HasherBytes).Pad + 0x10);
        uStack_4c4 = *(undefined4 *)((this->HasherBytes).Pad + 0x14);
        uStack_4c0 = *(undefined4 *)((this->HasherBytes).Pad + 0x18);
        uStack_4bc = *(undefined4 *)((this->HasherBytes).Pad + 0x1c);
        puVar12 = (this->HasherBytes).Pad +
                  (longlong)(int)(((this->HasherBytes).Pad[0x90] - 2) * 0x20) + 0x91;
        bStack_4e0 = '@';
        bVar5 = (this->HasherBytes).Pad[0x8a];
        bStack_4df = bVar5 | 4;
        uStack_520 = *(undefined8 *)puVar12;
        uStack_518 = *(undefined8 *)(puVar12 + 8);
        uStack_5f8._1_7_ = (undefined7)(uStack_5f8 >> 8);
        uStack_5f8 = CONCAT71(uStack_5f8._1_7_,bVar5) | 4;
        uStack_510 = *(undefined8 *)(puVar12 + 0x10);
        uStack_508 = *(undefined8 *)(puVar12 + 0x18);
        uStack_500 = *(undefined8 *)(puVar12 + 0x20);
        uStack_4f8 = *(undefined8 *)(puVar12 + 0x28);
        uStack_4f0 = *(undefined8 *)(puVar12 + 0x30);
        uStack_4e8 = *(undefined8 *)(puVar12 + 0x38);
        uStack_4b8 = 0;
        uStack_470 = CONCAT44(uStack_4dc,
                              CONCAT13(uStack_4dd,CONCAT12(bStack_4de,CONCAT11(bVar5,0x40)))) |
                     0x400;
        uStack_4b0 = uStack_520;
        uStack_4a8 = uStack_518;
        uStack_4a0 = uStack_510;
        uStack_498 = uStack_508;
        uStack_490 = uStack_500;
        uStack_488 = uStack_4f8;
        uStack_480 = uStack_4f0;
        uStack_478 = uStack_4e8;
        uStack_468 = uStack_4d8;
        uStack_464 = uStack_4d4;
        uStack_460 = uStack_4d0;
        uStack_45c = uStack_4cc;
        uStack_458 = uStack_4c8;
        uStack_454 = uStack_4c4;
        uStack_450 = uStack_4c0;
        uStack_44c = uStack_4bc;
        blake3_compress_in_place(&uStack_468,&uStack_4b0,0x40,0);
        puVar12[1] = (uchar)((uint)uStack_468 >> 8);
        puVar12[2] = (uchar)((uint)uStack_468 >> 0x10);
        *puVar12 = (uchar)uStack_468;
        puVar12[3] = (uchar)((uint)uStack_468 >> 0x18);
        puVar12[5] = (uchar)((uint)uStack_464 >> 8);
        puVar12[6] = (uchar)((uint)uStack_464 >> 0x10);
        puVar12[4] = (uchar)uStack_464;
        puVar12[7] = (uchar)((uint)uStack_464 >> 0x18);
        puVar12[9] = (uchar)((uint)uStack_460 >> 8);
        puVar12[10] = (uchar)((uint)uStack_460 >> 0x10);
        puVar12[8] = (uchar)uStack_460;
        puVar12[0xb] = (uchar)((uint)uStack_460 >> 0x18);
        puVar12[0xd] = (uchar)((uint)uStack_45c >> 8);
        puVar12[0xe] = (uchar)((uint)uStack_45c >> 0x10);
        puVar12[0xc] = (uchar)uStack_45c;
        puVar12[0xf] = (uchar)((uint)uStack_45c >> 0x18);
        puVar12[0x11] = (uchar)((uint)uStack_458 >> 8);
        puVar12[0x12] = (uchar)((uint)uStack_458 >> 0x10);
        puVar12[0x10] = (uchar)uStack_458;
        puVar12[0x13] = (uchar)((uint)uStack_458 >> 0x18);
        puVar12[0x15] = (uchar)((uint)uStack_454 >> 8);
        puVar12[0x16] = (uchar)((uint)uStack_454 >> 0x10);
        puVar12[0x14] = (uchar)uStack_454;
        puVar12[0x17] = (uchar)((uint)uStack_454 >> 0x18);
        puVar12[0x19] = (uchar)((uint)uStack_450 >> 8);
        puVar12[0x1a] = (uchar)((uint)uStack_450 >> 0x10);
        puVar12[0x18] = (uchar)uStack_450;
        puVar12[0x1b] = (uchar)((uint)uStack_450 >> 0x18);
        puVar12[0x1d] = (uchar)((uint)uStack_44c >> 8);
        puVar12[0x1e] = (uchar)((uint)uStack_44c >> 0x10);
        puVar12[0x1c] = (uchar)uStack_44c;
        puVar12[0x1f] = (uchar)((uint)uStack_44c >> 0x18);
        bVar5 = (this->HasherBytes).Pad[0x90] - 1;
        (this->HasherBytes).Pad[0x90] = bVar5;
      }
      lVar11 = (ulonglong)bVar5 * 0x20;
      puVar12 = (this->HasherBytes).Pad + lVar11 + 0x91;
      *(ulonglong *)puVar12 =
           CONCAT17(uStack_361,
                    CONCAT16(uStack_362,
                             CONCAT15(uStack_363,
                                      CONCAT14(uStack_364,
                                               CONCAT13(uStack_365,
                                                        CONCAT12(uStack_366,
                                                                 CONCAT11(uStack_367,uStack_368)))))
                            ));
      *(ulonglong *)(puVar12 + 8) =
           CONCAT17(uStack_359,
                    CONCAT16(uStack_35a,
                             CONCAT15(uStack_35b,
                                      CONCAT14(uStack_35c,
                                               CONCAT13(uStack_35d,
                                                        CONCAT12(uStack_35e,
                                                                 CONCAT11(uStack_35f,uStack_360)))))
                            ));
      puVar12 = (this->HasherBytes).Pad + lVar11 + 0xa1;
      *(ulonglong *)puVar12 =
           CONCAT17(uStack_351,
                    CONCAT16(uStack_352,
                             CONCAT15(uStack_353,
                                      CONCAT14(uStack_354,
                                               CONCAT13(uStack_355,
                                                        CONCAT12(uStack_356,
                                                                 CONCAT11(uStack_357,uStack_358)))))
                            ));
      *(ulonglong *)(puVar12 + 8) =
           CONCAT17(uStack_349,
                    CONCAT16(uStack_34a,
                             CONCAT15(uStack_34b,
                                      CONCAT14(uStack_34c,
                                               CONCAT13(uStack_34d,
                                                        CONCAT12(uStack_34e,
                                                                 CONCAT11(uStack_34f,uStack_350)))))
                            ));
      puVar12 = (this->HasherBytes).Pad + 0x90;
      *puVar12 = *puVar12 + '\x01';
      uVar2 = *(undefined8 *)((this->HasherBytes).Pad + 8);
      lVar11 = *(longlong *)((this->HasherBytes).Pad + 0x40);
      *(undefined8 *)((this->HasherBytes).Pad + 0x20) = *(undefined8 *)(this->HasherBytes).Pad;
      *(undefined8 *)((this->HasherBytes).Pad + 0x28) = uVar2;
      uVar2 = *(undefined8 *)((this->HasherBytes).Pad + 0x10);
      uVar3 = *(undefined8 *)((this->HasherBytes).Pad + 0x18);
      *(longlong *)((this->HasherBytes).Pad + 0x40) = lVar11 + 1;
      (this->HasherBytes).Pad[0x88] = '\0';
      (this->HasherBytes).Pad[0x89] = '\0';
      *(undefined8 *)((this->HasherBytes).Pad + 0x30) = uVar2;
      *(undefined8 *)((this->HasherBytes).Pad + 0x38) = uVar3;
      (this->HasherBytes).Pad[0x48] = '\0';
      (this->HasherBytes).Pad[0x49] = '\0';
      (this->HasherBytes).Pad[0x4a] = '\0';
      (this->HasherBytes).Pad[0x4b] = '\0';
      (this->HasherBytes).Pad[0x4c] = '\0';
      (this->HasherBytes).Pad[0x4d] = '\0';
      (this->HasherBytes).Pad[0x4e] = '\0';
      (this->HasherBytes).Pad[0x4f] = '\0';
      (this->HasherBytes).Pad[0x50] = '\0';
      (this->HasherBytes).Pad[0x51] = '\0';
      (this->HasherBytes).Pad[0x52] = '\0';
      (this->HasherBytes).Pad[0x53] = '\0';
      (this->HasherBytes).Pad[0x54] = '\0';
      (this->HasherBytes).Pad[0x55] = '\0';
      (this->HasherBytes).Pad[0x56] = '\0';
      (this->HasherBytes).Pad[0x57] = '\0';
      (this->HasherBytes).Pad[0x58] = '\0';
      (this->HasherBytes).Pad[0x59] = '\0';
      (this->HasherBytes).Pad[0x5a] = '\0';
      (this->HasherBytes).Pad[0x5b] = '\0';
      (this->HasherBytes).Pad[0x5c] = '\0';
      (this->HasherBytes).Pad[0x5d] = '\0';
      (this->HasherBytes).Pad[0x5e] = '\0';
      (this->HasherBytes).Pad[0x5f] = '\0';
      (this->HasherBytes).Pad[0x60] = '\0';
      (this->HasherBytes).Pad[0x61] = '\0';
      (this->HasherBytes).Pad[0x62] = '\0';
      (this->HasherBytes).Pad[99] = '\0';
      (this->HasherBytes).Pad[100] = '\0';
      (this->HasherBytes).Pad[0x65] = '\0';
      (this->HasherBytes).Pad[0x66] = '\0';
      (this->HasherBytes).Pad[0x67] = '\0';
      (this->HasherBytes).Pad[0x68] = '\0';
      (this->HasherBytes).Pad[0x69] = '\0';
      (this->HasherBytes).Pad[0x6a] = '\0';
      (this->HasherBytes).Pad[0x6b] = '\0';
      (this->HasherBytes).Pad[0x6c] = '\0';
      (this->HasherBytes).Pad[0x6d] = '\0';
      (this->HasherBytes).Pad[0x6e] = '\0';
      (this->HasherBytes).Pad[0x6f] = '\0';
      (this->HasherBytes).Pad[0x70] = '\0';
      (this->HasherBytes).Pad[0x71] = '\0';
      (this->HasherBytes).Pad[0x72] = '\0';
      (this->HasherBytes).Pad[0x73] = '\0';
      (this->HasherBytes).Pad[0x74] = '\0';
      (this->HasherBytes).Pad[0x75] = '\0';
      (this->HasherBytes).Pad[0x76] = '\0';
      (this->HasherBytes).Pad[0x77] = '\0';
      (this->HasherBytes).Pad[0x78] = '\0';
      (this->HasherBytes).Pad[0x79] = '\0';
      (this->HasherBytes).Pad[0x7a] = '\0';
      (this->HasherBytes).Pad[0x7b] = '\0';
      (this->HasherBytes).Pad[0x7c] = '\0';
      (this->HasherBytes).Pad[0x7d] = '\0';
      (this->HasherBytes).Pad[0x7e] = '\0';
      (this->HasherBytes).Pad[0x7f] = '\0';
      (this->HasherBytes).Pad[0x80] = '\0';
      (this->HasherBytes).Pad[0x81] = '\0';
      (this->HasherBytes).Pad[0x82] = '\0';
      (this->HasherBytes).Pad[0x83] = '\0';
      (this->HasherBytes).Pad[0x84] = '\0';
      (this->HasherBytes).Pad[0x85] = '\0';
      (this->HasherBytes).Pad[0x86] = '\0';
      (this->HasherBytes).Pad[0x87] = '\0';
    }
    if (0x400 < param_2) {
      uVar6 = *(ulonglong *)((this->HasherBytes).Pad + 0x40);
      do {
        lVar11 = 0x3f;
        if ((param_2 | 1) != 0) {
          for (; (param_2 | 1) >> lVar11 == 0; lVar11 = lVar11 + -1) {
          }
        }
        uVar14 = 1L << ((byte)lVar11 & 0x3f);
        if ((uVar6 << 10 & uVar14 - 1) != 0) {
          do {
            uVar14 = uVar14 >> 1;
          } while ((uVar6 << 10 & uVar14 - 1) != 0);
          uVar6 = *(ulonglong *)((this->HasherBytes).Pad + 0x40);
        }
        bVar5 = (this->HasherBytes).Pad[0x8a];
        uStack_5c0 = uVar14 >> 10;
        if (uVar14 < 0x401) {
          uStack_548 = *(undefined8 *)(this->HasherBytes).Pad;
          uStack_540 = *(undefined8 *)((this->HasherBytes).Pad + 8);
          uStack_538 = *(undefined8 *)((this->HasherBytes).Pad + 0x10);
          uStack_530 = *(undefined8 *)((this->HasherBytes).Pad + 0x18);
          bStack_4e0 = 0;
          bStack_4df = 0;
          uStack_520 = 0;
          uStack_518 = 0;
          uStack_510 = 0;
          uStack_508 = 0;
          uStack_500 = 0;
          uStack_4f8 = 0;
          uStack_4f0 = 0;
          uStack_4e8 = 0;
          pvVar15 = pvStack_5c8;
          uVar13 = uVar14;
          uStack_528 = uVar6;
          bStack_4de = bVar5;
          if (0x40 < uVar14) {
            lVar11 = (uVar14 - 0x41 >> 6) + 1;
            uVar13 = lVar11 * -0x40 + uVar14;
            do {
              uStack_5f8 = CONCAT71(uStack_5f8._1_7_,bStack_4df == 0 | bStack_4de);
              blake3_compress_in_place(&uStack_548,pvVar15,0x40,uStack_528);
              pvVar15 = (void *)((longlong)pvVar15 + 0x40);
              bStack_4df = bStack_4df + 1;
              lVar11 = lVar11 + -1;
            } while (lVar11 != 0);
          }
          uVar6 = 0x40 - (ulonglong)bStack_4e0;
          if (uVar6 <= uVar13) {
            uVar13 = uVar6;
          }
          memcpy((void *)((longlong)&uStack_520 + (ulonglong)bStack_4e0),pvVar15,uVar13);
          uStack_550 = bStack_4e0 + (char)uVar13;
          uStack_590 = uStack_520;
          uStack_588 = uStack_518;
          uStack_598 = uStack_528;
          bVar5 = bStack_4df == 0 | bStack_4de;
          uStack_580 = uStack_510;
          uStack_578 = uStack_508;
          bStack_54f = bVar5 | 2;
          uStack_570 = uStack_500;
          uStack_568 = uStack_4f8;
          uStack_5f8 = CONCAT71(uStack_5f8._1_7_,bVar5) | 2;
          uStack_560 = uStack_4f0;
          uStack_558 = uStack_4e8;
          uStack_4b8 = uStack_528;
          uStack_4b0 = uStack_520;
          uStack_4a8 = uStack_518;
          uStack_4a0 = uStack_510;
          uStack_498 = uStack_508;
          uStack_490 = uStack_500;
          uStack_4d8 = (undefined4)uStack_548;
          uStack_4d4 = uStack_548._4_4_;
          uStack_4d0 = (undefined4)uStack_540;
          uStack_4cc = uStack_540._4_4_;
          uStack_478 = uStack_4e8;
          uStack_470 = CONCAT44(uStack_54c,CONCAT22(uStack_54e,CONCAT11(bVar5,uStack_550))) | 0x200;
          uStack_4c8 = (undefined4)uStack_538;
          uStack_4c4 = uStack_538._4_4_;
          uStack_4c0 = (undefined4)uStack_530;
          uStack_4bc = uStack_530._4_4_;
          uStack_488 = uStack_4f8;
          uStack_480 = uStack_4f0;
          uStack_468 = (undefined4)uStack_548;
          uStack_464 = uStack_548._4_4_;
          uStack_460 = (undefined4)uStack_540;
          uStack_45c = uStack_540._4_4_;
          uStack_458 = (undefined4)uStack_538;
          uStack_454 = uStack_538._4_4_;
          uStack_450 = (undefined4)uStack_530;
          uStack_44c = uStack_530._4_4_;
          bStack_4e0 = uStack_550;
          blake3_compress_in_place(&uStack_468);
          uStack_367 = (undefined1)((uint)uStack_468 >> 8);
          uStack_366 = (undefined1)((uint)uStack_468 >> 0x10);
          uStack_368 = (undefined1)uStack_468;
          uStack_365 = (undefined1)((uint)uStack_468 >> 0x18);
          uStack_363 = (undefined1)((uint)uStack_464 >> 8);
          uStack_364 = (undefined1)uStack_464;
          uStack_362 = (undefined1)((uint)uStack_464 >> 0x10);
          uStack_361 = (undefined1)((uint)uStack_464 >> 0x18);
          uStack_35f = (undefined1)((uint)uStack_460 >> 8);
          uStack_360 = (undefined1)uStack_460;
          uStack_35d = (undefined1)((uint)uStack_460 >> 0x18);
          uStack_35c = (undefined1)uStack_45c;
          uStack_35e = (undefined1)((uint)uStack_460 >> 0x10);
          uVar9 = 0;
          uStack_35b = (undefined1)((uint)uStack_45c >> 8);
          uStack_35a = (undefined1)((uint)uStack_45c >> 0x10);
          uStack_359 = (undefined1)((uint)uStack_45c >> 0x18);
          uStack_357 = (undefined1)((uint)uStack_458 >> 8);
          uStack_356 = (undefined1)((uint)uStack_458 >> 0x10);
          uStack_358 = (undefined1)uStack_458;
          uStack_355 = (undefined1)((uint)uStack_458 >> 0x18);
          uStack_353 = (undefined1)((uint)uStack_454 >> 8);
          uStack_352 = (undefined1)((uint)uStack_454 >> 0x10);
          uStack_354 = (undefined1)uStack_454;
          uStack_351 = (undefined1)((uint)uStack_454 >> 0x18);
          uStack_34f = (undefined1)((uint)uStack_450 >> 8);
          uStack_350 = (undefined1)uStack_450;
          uStack_34e = (undefined1)((uint)uStack_450 >> 0x10);
          uStack_34d = (undefined1)((uint)uStack_450 >> 0x18);
          uStack_34b = (undefined1)((uint)uStack_44c >> 8);
          uStack_34c = (undefined1)uStack_44c;
          uStack_349 = (undefined1)((uint)uStack_44c >> 0x18);
          uStack_34a = (undefined1)((uint)uStack_44c >> 0x10);
          for (uVar6 = uStack_528; uVar6 != 0; uVar6 = uVar6 & uVar6 - 1) {
            uVar9 = uVar9 + 1;
          }
          bVar5 = (this->HasherBytes).Pad[0x90];
          param_1 = pvStack_5c8;
          uVar6 = uStack_5c0;
          while (uVar13 = (ulonglong)bVar5, uStack_5c0 = uVar6, uVar9 < uVar13) {
            uStack_428 = *(undefined4 *)(this->HasherBytes).Pad;
            uStack_424 = *(undefined4 *)((this->HasherBytes).Pad + 4);
            uStack_420 = *(undefined4 *)((this->HasherBytes).Pad + 8);
            uStack_41c = *(undefined4 *)((this->HasherBytes).Pad + 0xc);
            uStack_598 = 0;
            uStack_418 = *(undefined4 *)((this->HasherBytes).Pad + 0x10);
            uStack_414 = *(undefined4 *)((this->HasherBytes).Pad + 0x14);
            uStack_410 = *(undefined4 *)((this->HasherBytes).Pad + 0x18);
            uStack_40c = *(undefined4 *)((this->HasherBytes).Pad + 0x1c);
            puVar12 = (this->HasherBytes).Pad +
                      (longlong)(int)(((this->HasherBytes).Pad[0x90] - 2) * 0x20) + 0x91;
            uStack_550 = '@';
            bVar5 = (this->HasherBytes).Pad[0x8a];
            bStack_54f = bVar5 | 4;
            uStack_590 = *(undefined8 *)puVar12;
            uStack_588 = *(undefined8 *)(puVar12 + 8);
            uStack_5f8._1_7_ = (undefined7)(uStack_5f8 >> 8);
            uStack_5f8 = CONCAT71(uStack_5f8._1_7_,bVar5) | 4;
            uStack_580 = *(undefined8 *)(puVar12 + 0x10);
            uStack_578 = *(undefined8 *)(puVar12 + 0x18);
            uStack_570 = *(undefined8 *)(puVar12 + 0x20);
            uStack_568 = *(undefined8 *)(puVar12 + 0x28);
            uStack_560 = *(undefined8 *)(puVar12 + 0x30);
            uStack_558 = *(undefined8 *)(puVar12 + 0x38);
            uStack_3c8 = 0;
            uStack_380 = CONCAT44(uStack_54c,CONCAT22(uStack_54e,CONCAT11(bVar5,0x40))) | 0x400;
            pvStack_5c8 = param_1;
            uStack_3e8._0_4_ = uStack_428;
            uStack_3e8._4_4_ = uStack_424;
            uStack_3e0 = uStack_420;
            uStack_3dc = uStack_41c;
            uStack_3d8 = uStack_418;
            uStack_3d4 = uStack_414;
            uStack_3d0 = uStack_410;
            uStack_3cc = uStack_40c;
            uStack_3c0 = uStack_590;
            uStack_3b8 = uStack_588;
            uStack_3b0 = uStack_580;
            uStack_3a8 = uStack_578;
            uStack_3a0 = uStack_570;
            uStack_398 = uStack_568;
            uStack_390 = uStack_560;
            uStack_388 = uStack_558;
            blake3_compress_in_place(&uStack_428,&uStack_3c0,0x40,0);
            puVar12[1] = (uchar)((uint)uStack_428 >> 8);
            puVar12[2] = (uchar)((uint)uStack_428 >> 0x10);
            *puVar12 = (uchar)uStack_428;
            puVar12[3] = (uchar)((uint)uStack_428 >> 0x18);
            puVar12[5] = (uchar)((uint)uStack_424 >> 8);
            puVar12[6] = (uchar)((uint)uStack_424 >> 0x10);
            puVar12[4] = (uchar)uStack_424;
            puVar12[7] = (uchar)((uint)uStack_424 >> 0x18);
            puVar12[9] = (uchar)((uint)uStack_420 >> 8);
            puVar12[10] = (uchar)((uint)uStack_420 >> 0x10);
            puVar12[8] = (uchar)uStack_420;
            puVar12[0xb] = (uchar)((uint)uStack_420 >> 0x18);
            puVar12[0xd] = (uchar)((uint)uStack_41c >> 8);
            puVar12[0xe] = (uchar)((uint)uStack_41c >> 0x10);
            puVar12[0xc] = (uchar)uStack_41c;
            puVar12[0xf] = (uchar)((uint)uStack_41c >> 0x18);
            puVar12[0x11] = (uchar)((uint)uStack_418 >> 8);
            puVar12[0x12] = (uchar)((uint)uStack_418 >> 0x10);
            puVar12[0x10] = (uchar)uStack_418;
            puVar12[0x13] = (uchar)((uint)uStack_418 >> 0x18);
            puVar12[0x15] = (uchar)((uint)uStack_414 >> 8);
            puVar12[0x16] = (uchar)((uint)uStack_414 >> 0x10);
            puVar12[0x14] = (uchar)uStack_414;
            puVar12[0x17] = (uchar)((uint)uStack_414 >> 0x18);
            puVar12[0x19] = (uchar)((uint)uStack_410 >> 8);
            puVar12[0x1a] = (uchar)((uint)uStack_410 >> 0x10);
            puVar12[0x18] = (uchar)uStack_410;
            puVar12[0x1b] = (uchar)((uint)uStack_410 >> 0x18);
            puVar12[0x1d] = (uchar)((uint)uStack_40c >> 8);
            puVar12[0x1e] = (uchar)((uint)uStack_40c >> 0x10);
            puVar12[0x1c] = (uchar)uStack_40c;
            puVar12[0x1f] = (uchar)((uint)uStack_40c >> 0x18);
            bVar5 = (this->HasherBytes).Pad[0x90] - 1;
            (this->HasherBytes).Pad[0x90] = bVar5;
            param_1 = pvStack_5c8;
            uVar6 = uStack_5c0;
          }
          uVar16 = CONCAT13(uStack_365,CONCAT12(uStack_366,CONCAT11(uStack_367,uStack_368)));
          uVar17 = CONCAT13(uStack_361,CONCAT12(uStack_362,CONCAT11(uStack_363,uStack_364)));
          uVar18 = CONCAT13(uStack_35d,CONCAT12(uStack_35e,CONCAT11(uStack_35f,uStack_360)));
          uVar19 = CONCAT13(uStack_359,CONCAT12(uStack_35a,CONCAT11(uStack_35b,uStack_35c)));
          uVar20 = CONCAT13(uStack_355,CONCAT12(uStack_356,CONCAT11(uStack_357,uStack_358)));
          uVar21 = CONCAT13(uStack_351,CONCAT12(uStack_352,CONCAT11(uStack_353,uStack_354)));
          uVar22 = CONCAT13(uStack_34d,CONCAT12(uStack_34e,CONCAT11(uStack_34f,uStack_350)));
          uVar23 = CONCAT13(uStack_349,CONCAT12(uStack_34a,CONCAT11(uStack_34b,uStack_34c)));
        }
        else {
          puStack_5f0 = auStack_348;
          uStack_5f8 = CONCAT71(uStack_5f8._1_7_,bVar5);
          uVar6 = FUN_14f316100(param_1,uVar14,this);
          while ((2 < uVar6 && (uVar6 < 0x11))) {
            uVar13 = 0;
            if (1 < uVar6) {
              lVar11 = 0;
              puVar10 = auStack_348;
              do {
                lVar11 = lVar11 + 2;
                (&uStack_3e8)[uVar13] = puVar10;
                uVar13 = uVar13 + 1;
                puVar10 = puVar10 + 8;
              } while (1 < uVar6 - lVar11);
            }
            puStack_5d0 = auStack_148;
            bStack_5e8 = bVar5 | 4;
            uStack_5d8 = 0;
            uStack_5e0 = 0;
            puStack_5f0 = (undefined8 *)((ulonglong)puStack_5f0 & 0xffffffffffffff00);
            uStack_5f8 = 0;
            blake3_hash_many(&uStack_3e8,uVar13,1,this);
            if (uVar13 * 2 < uVar6) {
              uVar2 = auStack_348[uVar13 * 8 + 1];
              uVar3 = auStack_348[uVar13 * 8 + 2];
              uVar4 = auStack_348[uVar13 * 8 + 3];
              auStack_148[uVar13 * 4] = auStack_348[uVar13 * 8];
              auStack_148[uVar13 * 4 + 1] = uVar2;
              auStack_148[uVar13 * 4 + 2] = uVar3;
              auStack_148[uVar13 * 4 + 3] = uVar4;
              uVar13 = uVar13 + 1;
            }
            memcpy(auStack_348,auStack_148,uVar13 << 5);
            uVar6 = uVar13;
          }
          uVar9 = 0;
          for (uVar6 = *(ulonglong *)((this->HasherBytes).Pad + 0x40); uVar6 != 0;
              uVar6 = uVar6 & uVar6 - 1) {
            uVar9 = uVar9 + 1;
          }
          bVar5 = (this->HasherBytes).Pad[0x90];
          uVar6 = uStack_5c0;
          while (uStack_5c0 = uVar6, (ulonglong)uVar9 < (ulonglong)bVar5) {
            uStack_408 = *(undefined4 *)(this->HasherBytes).Pad;
            uStack_404 = *(undefined4 *)((this->HasherBytes).Pad + 4);
            uStack_400 = *(undefined4 *)((this->HasherBytes).Pad + 8);
            uStack_3fc = *(undefined4 *)((this->HasherBytes).Pad + 0xc);
            uStack_598 = 0;
            uStack_3f8 = *(undefined4 *)((this->HasherBytes).Pad + 0x10);
            uStack_3f4 = *(undefined4 *)((this->HasherBytes).Pad + 0x14);
            uStack_3f0 = *(undefined4 *)((this->HasherBytes).Pad + 0x18);
            uStack_3ec = *(undefined4 *)((this->HasherBytes).Pad + 0x1c);
            puVar12 = (this->HasherBytes).Pad +
                      (longlong)(int)(((this->HasherBytes).Pad[0x90] - 2) * 0x20) + 0x91;
            uStack_550 = '@';
            bVar5 = (this->HasherBytes).Pad[0x8a];
            bStack_54f = bVar5 | 4;
            uStack_590 = *(undefined8 *)puVar12;
            uStack_588 = *(undefined8 *)(puVar12 + 8);
            uStack_5f8._1_7_ = (undefined7)(uStack_5f8 >> 8);
            uStack_5f8 = CONCAT71(uStack_5f8._1_7_,bVar5) | 4;
            uStack_580 = *(undefined8 *)(puVar12 + 0x10);
            uStack_578 = *(undefined8 *)(puVar12 + 0x18);
            uStack_570 = *(undefined8 *)(puVar12 + 0x20);
            uStack_568 = *(undefined8 *)(puVar12 + 0x28);
            uStack_560 = *(undefined8 *)(puVar12 + 0x30);
            uStack_558 = *(undefined8 *)(puVar12 + 0x38);
            uStack_3c8 = 0;
            uStack_380 = CONCAT44(uStack_54c,CONCAT22(uStack_54e,CONCAT11(bVar5,0x40))) | 0x400;
            uStack_3e8._0_4_ = uStack_408;
            uStack_3e8._4_4_ = uStack_404;
            uStack_3e0 = uStack_400;
            uStack_3dc = uStack_3fc;
            uStack_3d8 = uStack_3f8;
            uStack_3d4 = uStack_3f4;
            uStack_3d0 = uStack_3f0;
            uStack_3cc = uStack_3ec;
            uStack_3c0 = uStack_590;
            uStack_3b8 = uStack_588;
            uStack_3b0 = uStack_580;
            uStack_3a8 = uStack_578;
            uStack_3a0 = uStack_570;
            uStack_398 = uStack_568;
            uStack_390 = uStack_560;
            uStack_388 = uStack_558;
            blake3_compress_in_place(&uStack_408,&uStack_3c0,0x40,0);
            puVar12[1] = (uchar)((uint)uStack_408 >> 8);
            puVar12[2] = (uchar)((uint)uStack_408 >> 0x10);
            *puVar12 = (uchar)uStack_408;
            puVar12[3] = (uchar)((uint)uStack_408 >> 0x18);
            puVar12[5] = (uchar)((uint)uStack_404 >> 8);
            puVar12[6] = (uchar)((uint)uStack_404 >> 0x10);
            puVar12[4] = (uchar)uStack_404;
            puVar12[7] = (uchar)((uint)uStack_404 >> 0x18);
            puVar12[9] = (uchar)((uint)uStack_400 >> 8);
            puVar12[10] = (uchar)((uint)uStack_400 >> 0x10);
            puVar12[8] = (uchar)uStack_400;
            puVar12[0xb] = (uchar)((uint)uStack_400 >> 0x18);
            puVar12[0xd] = (uchar)((uint)uStack_3fc >> 8);
            puVar12[0xe] = (uchar)((uint)uStack_3fc >> 0x10);
            puVar12[0xc] = (uchar)uStack_3fc;
            puVar12[0xf] = (uchar)((uint)uStack_3fc >> 0x18);
            puVar12[0x11] = (uchar)((uint)uStack_3f8 >> 8);
            puVar12[0x12] = (uchar)((uint)uStack_3f8 >> 0x10);
            puVar12[0x10] = (uchar)uStack_3f8;
            puVar12[0x13] = (uchar)((uint)uStack_3f8 >> 0x18);
            puVar12[0x15] = (uchar)((uint)uStack_3f4 >> 8);
            puVar12[0x16] = (uchar)((uint)uStack_3f4 >> 0x10);
            puVar12[0x14] = (uchar)uStack_3f4;
            puVar12[0x17] = (uchar)((uint)uStack_3f4 >> 0x18);
            puVar12[0x19] = (uchar)((uint)uStack_3f0 >> 8);
            puVar12[0x1a] = (uchar)((uint)uStack_3f0 >> 0x10);
            puVar12[0x18] = (uchar)uStack_3f0;
            puVar12[0x1b] = (uchar)((uint)uStack_3f0 >> 0x18);
            puVar12[0x1d] = (uchar)((uint)uStack_3ec >> 8);
            puVar12[0x1e] = (uchar)((uint)uStack_3ec >> 0x10);
            puVar12[0x1c] = (uchar)uStack_3ec;
            puVar12[0x1f] = (uchar)((uint)uStack_3ec >> 0x18);
            bVar5 = (this->HasherBytes).Pad[0x90] - 1;
            (this->HasherBytes).Pad[0x90] = bVar5;
            uVar6 = uStack_5c0;
          }
          uVar9 = 0;
          lVar11 = (ulonglong)bVar5 * 0x20;
          puVar12 = (this->HasherBytes).Pad + lVar11 + 0x91;
          *(undefined8 *)puVar12 = auStack_348[0];
          *(undefined8 *)(puVar12 + 8) = auStack_348[1];
          puVar12 = (this->HasherBytes).Pad + lVar11 + 0xa1;
          *(undefined8 *)puVar12 = auStack_348[2];
          *(undefined8 *)(puVar12 + 8) = auStack_348[3];
          puVar12 = (this->HasherBytes).Pad + 0x90;
          *puVar12 = *puVar12 + '\x01';
          bVar5 = (this->HasherBytes).Pad[0x90];
          uVar13 = (uVar6 >> 1) + *(longlong *)((this->HasherBytes).Pad + 0x40);
          if (uVar13 != 0) {
            do {
              uVar9 = uVar9 + 1;
              uVar13 = uVar13 & uVar13 - 1;
            } while (uVar13 != 0);
            bVar5 = (this->HasherBytes).Pad[0x90];
          }
          uVar16 = uStack_328;
          uVar17 = uStack_324;
          uVar18 = uStack_320;
          uVar19 = uStack_31c;
          uVar20 = uStack_318;
          uVar21 = uStack_314;
          uVar22 = uStack_310;
          uVar23 = uStack_30c;
          while (uVar13 = (ulonglong)bVar5, uStack_328 = uVar16, uStack_324 = uVar17,
                uStack_320 = uVar18, uStack_31c = uVar19, uStack_318 = uVar20, uStack_314 = uVar21,
                uStack_310 = uVar22, uStack_30c = uVar23, uVar9 < uVar13) {
            uStack_448 = *(undefined4 *)(this->HasherBytes).Pad;
            uStack_444 = *(undefined4 *)((this->HasherBytes).Pad + 4);
            uStack_440 = *(undefined4 *)((this->HasherBytes).Pad + 8);
            uStack_43c = *(undefined4 *)((this->HasherBytes).Pad + 0xc);
            uStack_598 = 0;
            uStack_438 = *(undefined4 *)((this->HasherBytes).Pad + 0x10);
            uStack_434 = *(undefined4 *)((this->HasherBytes).Pad + 0x14);
            uStack_430 = *(undefined4 *)((this->HasherBytes).Pad + 0x18);
            uStack_42c = *(undefined4 *)((this->HasherBytes).Pad + 0x1c);
            puVar12 = (this->HasherBytes).Pad +
                      (longlong)(int)(((this->HasherBytes).Pad[0x90] - 2) * 0x20) + 0x91;
            uStack_550 = '@';
            bVar5 = (this->HasherBytes).Pad[0x8a];
            bStack_54f = bVar5 | 4;
            uStack_590 = *(undefined8 *)puVar12;
            uStack_588 = *(undefined8 *)(puVar12 + 8);
            uStack_5f8._1_7_ = (undefined7)(uStack_5f8 >> 8);
            uStack_5f8 = CONCAT71(uStack_5f8._1_7_,bVar5) | 4;
            uStack_580 = *(undefined8 *)(puVar12 + 0x10);
            uStack_578 = *(undefined8 *)(puVar12 + 0x18);
            uStack_570 = *(undefined8 *)(puVar12 + 0x20);
            uStack_568 = *(undefined8 *)(puVar12 + 0x28);
            uStack_560 = *(undefined8 *)(puVar12 + 0x30);
            uStack_558 = *(undefined8 *)(puVar12 + 0x38);
            uStack_3c8 = 0;
            uStack_380 = CONCAT44(uStack_54c,CONCAT22(uStack_54e,CONCAT11(bVar5,0x40))) | 0x400;
            uStack_3e8._0_4_ = uStack_448;
            uStack_3e8._4_4_ = uStack_444;
            uStack_3e0 = uStack_440;
            uStack_3dc = uStack_43c;
            uStack_3d8 = uStack_438;
            uStack_3d4 = uStack_434;
            uStack_3d0 = uStack_430;
            uStack_3cc = uStack_42c;
            uStack_3c0 = uStack_590;
            uStack_3b8 = uStack_588;
            uStack_3b0 = uStack_580;
            uStack_3a8 = uStack_578;
            uStack_3a0 = uStack_570;
            uStack_398 = uStack_568;
            uStack_390 = uStack_560;
            uStack_388 = uStack_558;
            blake3_compress_in_place(&uStack_448,&uStack_3c0,0x40,0);
            puVar12[1] = (uchar)((uint)uStack_448 >> 8);
            puVar12[2] = (uchar)((uint)uStack_448 >> 0x10);
            *puVar12 = (uchar)uStack_448;
            puVar12[3] = (uchar)((uint)uStack_448 >> 0x18);
            puVar12[5] = (uchar)((uint)uStack_444 >> 8);
            puVar12[6] = (uchar)((uint)uStack_444 >> 0x10);
            puVar12[4] = (uchar)uStack_444;
            puVar12[7] = (uchar)((uint)uStack_444 >> 0x18);
            puVar12[9] = (uchar)((uint)uStack_440 >> 8);
            puVar12[10] = (uchar)((uint)uStack_440 >> 0x10);
            puVar12[8] = (uchar)uStack_440;
            puVar12[0xb] = (uchar)((uint)uStack_440 >> 0x18);
            puVar12[0xd] = (uchar)((uint)uStack_43c >> 8);
            puVar12[0xe] = (uchar)((uint)uStack_43c >> 0x10);
            puVar12[0xc] = (uchar)uStack_43c;
            puVar12[0xf] = (uchar)((uint)uStack_43c >> 0x18);
            puVar12[0x11] = (uchar)((uint)uStack_438 >> 8);
            puVar12[0x12] = (uchar)((uint)uStack_438 >> 0x10);
            puVar12[0x10] = (uchar)uStack_438;
            puVar12[0x13] = (uchar)((uint)uStack_438 >> 0x18);
            puVar12[0x15] = (uchar)((uint)uStack_434 >> 8);
            puVar12[0x16] = (uchar)((uint)uStack_434 >> 0x10);
            puVar12[0x14] = (uchar)uStack_434;
            puVar12[0x17] = (uchar)((uint)uStack_434 >> 0x18);
            puVar12[0x19] = (uchar)((uint)uStack_430 >> 8);
            puVar12[0x1a] = (uchar)((uint)uStack_430 >> 0x10);
            puVar12[0x18] = (uchar)uStack_430;
            puVar12[0x1b] = (uchar)((uint)uStack_430 >> 0x18);
            puVar12[0x1d] = (uchar)((uint)uStack_42c >> 8);
            puVar12[0x1c] = (uchar)uStack_42c;
            puVar12[0x1e] = (uchar)((uint)uStack_42c >> 0x10);
            puVar12[0x1f] = (uchar)((uint)uStack_42c >> 0x18);
            bVar5 = (this->HasherBytes).Pad[0x90] - 1;
            (this->HasherBytes).Pad[0x90] = bVar5;
            uVar16 = uStack_328;
            uVar17 = uStack_324;
            uVar18 = uStack_320;
            uVar19 = uStack_31c;
            uVar20 = uStack_318;
            uVar21 = uStack_314;
            uVar22 = uStack_310;
            uVar23 = uStack_30c;
          }
        }
        param_1 = (void *)((longlong)param_1 + uVar14);
        param_2 = param_2 - uVar14;
        puVar12 = (this->HasherBytes).Pad + uVar13 * 0x20 + 0x91;
        *(undefined4 *)puVar12 = uVar16;
        *(undefined4 *)(puVar12 + 4) = uVar17;
        *(undefined4 *)(puVar12 + 8) = uVar18;
        *(undefined4 *)(puVar12 + 0xc) = uVar19;
        puVar12 = (this->HasherBytes).Pad + uVar13 * 0x20 + 0xa1;
        *(undefined4 *)puVar12 = uVar20;
        *(undefined4 *)(puVar12 + 4) = uVar21;
        *(undefined4 *)(puVar12 + 8) = uVar22;
        *(undefined4 *)(puVar12 + 0xc) = uVar23;
        puVar12 = (this->HasherBytes).Pad + 0x40;
        *(ulonglong *)puVar12 = *(longlong *)puVar12 + uVar6;
        puVar12 = (this->HasherBytes).Pad + 0x90;
        *puVar12 = *puVar12 + '\x01';
        uVar6 = *(ulonglong *)((this->HasherBytes).Pad + 0x40);
        pvStack_5c8 = param_1;
      } while (0x400 < param_2);
    }
    if (param_2 != 0) {
      bVar5 = (this->HasherBytes).Pad[0x88];
      if (bVar5 != 0) {
        puVar12 = (this->HasherBytes).Pad + 0x48;
        uVar6 = 0x40 - (ulonglong)bVar5;
        if (param_2 < uVar6) {
          uVar6 = param_2;
        }
        memcpy(puVar12 + bVar5,param_1,uVar6);
        puVar1 = (this->HasherBytes).Pad + 0x88;
        *puVar1 = *puVar1 + (char)uVar6;
        param_1 = (void *)((longlong)param_1 + uVar6);
        param_2 = param_2 - uVar6;
        if (param_2 != 0) {
          uStack_5f8 = CONCAT71(uStack_5f8._1_7_,
                                (this->HasherBytes).Pad[0x89] == '\0' |
                                (this->HasherBytes).Pad[0x8a]);
          blake3_compress_in_place
                    ((this->HasherBytes).Pad + 0x20,puVar12,0x40,
                     *(undefined8 *)((this->HasherBytes).Pad + 0x40));
          puVar1 = (this->HasherBytes).Pad + 0x89;
          *puVar1 = *puVar1 + '\x01';
          (this->HasherBytes).Pad[0x88] = '\0';
          puVar12[0] = '\0';
          puVar12[1] = '\0';
          puVar12[2] = '\0';
          puVar12[3] = '\0';
          puVar12[4] = '\0';
          puVar12[5] = '\0';
          puVar12[6] = '\0';
          puVar12[7] = '\0';
          (this->HasherBytes).Pad[0x50] = '\0';
          (this->HasherBytes).Pad[0x51] = '\0';
          (this->HasherBytes).Pad[0x52] = '\0';
          (this->HasherBytes).Pad[0x53] = '\0';
          (this->HasherBytes).Pad[0x54] = '\0';
          (this->HasherBytes).Pad[0x55] = '\0';
          (this->HasherBytes).Pad[0x56] = '\0';
          (this->HasherBytes).Pad[0x57] = '\0';
          (this->HasherBytes).Pad[0x58] = '\0';
          (this->HasherBytes).Pad[0x59] = '\0';
          (this->HasherBytes).Pad[0x5a] = '\0';
          (this->HasherBytes).Pad[0x5b] = '\0';
          (this->HasherBytes).Pad[0x5c] = '\0';
          (this->HasherBytes).Pad[0x5d] = '\0';
          (this->HasherBytes).Pad[0x5e] = '\0';
          (this->HasherBytes).Pad[0x5f] = '\0';
          (this->HasherBytes).Pad[0x60] = '\0';
          (this->HasherBytes).Pad[0x61] = '\0';
          (this->HasherBytes).Pad[0x62] = '\0';
          (this->HasherBytes).Pad[99] = '\0';
          (this->HasherBytes).Pad[100] = '\0';
          (this->HasherBytes).Pad[0x65] = '\0';
          (this->HasherBytes).Pad[0x66] = '\0';
          (this->HasherBytes).Pad[0x67] = '\0';
          (this->HasherBytes).Pad[0x68] = '\0';
          (this->HasherBytes).Pad[0x69] = '\0';
          (this->HasherBytes).Pad[0x6a] = '\0';
          (this->HasherBytes).Pad[0x6b] = '\0';
          (this->HasherBytes).Pad[0x6c] = '\0';
          (this->HasherBytes).Pad[0x6d] = '\0';
          (this->HasherBytes).Pad[0x6e] = '\0';
          (this->HasherBytes).Pad[0x6f] = '\0';
          (this->HasherBytes).Pad[0x70] = '\0';
          (this->HasherBytes).Pad[0x71] = '\0';
          (this->HasherBytes).Pad[0x72] = '\0';
          (this->HasherBytes).Pad[0x73] = '\0';
          (this->HasherBytes).Pad[0x74] = '\0';
          (this->HasherBytes).Pad[0x75] = '\0';
          (this->HasherBytes).Pad[0x76] = '\0';
          (this->HasherBytes).Pad[0x77] = '\0';
          (this->HasherBytes).Pad[0x78] = '\0';
          (this->HasherBytes).Pad[0x79] = '\0';
          (this->HasherBytes).Pad[0x7a] = '\0';
          (this->HasherBytes).Pad[0x7b] = '\0';
          (this->HasherBytes).Pad[0x7c] = '\0';
          (this->HasherBytes).Pad[0x7d] = '\0';
          (this->HasherBytes).Pad[0x7e] = '\0';
          (this->HasherBytes).Pad[0x7f] = '\0';
          (this->HasherBytes).Pad[0x80] = '\0';
          (this->HasherBytes).Pad[0x81] = '\0';
          (this->HasherBytes).Pad[0x82] = '\0';
          (this->HasherBytes).Pad[0x83] = '\0';
          (this->HasherBytes).Pad[0x84] = '\0';
          (this->HasherBytes).Pad[0x85] = '\0';
          (this->HasherBytes).Pad[0x86] = '\0';
          (this->HasherBytes).Pad[0x87] = '\0';
        }
      }
      if (0x40 < param_2) {
        uVar7 = (this->HasherBytes).Pad[0x89];
        lVar11 = (param_2 - 0x41 >> 6) + 1;
        param_2 = param_2 + lVar11 * -0x40;
        do {
          uStack_5f8 = CONCAT71(uStack_5f8._1_7_,uVar7 == '\0' | (this->HasherBytes).Pad[0x8a]);
          blake3_compress_in_place
                    ((this->HasherBytes).Pad + 0x20,param_1,0x40,
                     *(undefined8 *)((this->HasherBytes).Pad + 0x40));
          puVar12 = (this->HasherBytes).Pad + 0x89;
          *puVar12 = *puVar12 + '\x01';
          param_1 = (void *)((longlong)param_1 + 0x40);
          uVar7 = (this->HasherBytes).Pad[0x89];
          lVar11 = lVar11 + -1;
        } while (lVar11 != 0);
      }
      uVar6 = (ulonglong)(this->HasherBytes).Pad[0x88];
      uVar14 = 0x40 - uVar6;
      if (uVar14 <= param_2) {
        param_2 = uVar14;
      }
      memcpy((this->HasherBytes).Pad + uVar6 + 0x48,param_1,param_2);
      puVar12 = (this->HasherBytes).Pad + 0x88;
      *puVar12 = *puVar12 + (char)param_2;
      uVar9 = 0;
      for (uVar6 = *(ulonglong *)((this->HasherBytes).Pad + 0x40); uVar6 != 0;
          uVar6 = uVar6 & uVar6 - 1) {
        uVar9 = uVar9 + 1;
      }
      bVar5 = (this->HasherBytes).Pad[0x90];
      while (uVar9 < bVar5) {
        uStack_448 = *(undefined4 *)(this->HasherBytes).Pad;
        uStack_444 = *(undefined4 *)((this->HasherBytes).Pad + 4);
        uStack_440 = *(undefined4 *)((this->HasherBytes).Pad + 8);
        uStack_43c = *(undefined4 *)((this->HasherBytes).Pad + 0xc);
        uStack_598 = 0;
        uStack_438 = *(undefined4 *)((this->HasherBytes).Pad + 0x10);
        uStack_434 = *(undefined4 *)((this->HasherBytes).Pad + 0x14);
        uStack_430 = *(undefined4 *)((this->HasherBytes).Pad + 0x18);
        uStack_42c = *(undefined4 *)((this->HasherBytes).Pad + 0x1c);
        puVar12 = (this->HasherBytes).Pad +
                  (longlong)(int)(((this->HasherBytes).Pad[0x90] - 2) * 0x20) + 0x91;
        uStack_550 = 0x40;
        bVar5 = (this->HasherBytes).Pad[0x8a];
        bStack_54f = bVar5 | 4;
        uStack_590 = *(undefined8 *)puVar12;
        uStack_588 = *(undefined8 *)(puVar12 + 8);
        uStack_5f8._1_7_ = (undefined7)(uStack_5f8 >> 8);
        uStack_5f8 = CONCAT71(uStack_5f8._1_7_,bVar5) | 4;
        uStack_580 = *(undefined8 *)(puVar12 + 0x10);
        uStack_578 = *(undefined8 *)(puVar12 + 0x18);
        uStack_570 = *(undefined8 *)(puVar12 + 0x20);
        uStack_568 = *(undefined8 *)(puVar12 + 0x28);
        uStack_560 = *(undefined8 *)(puVar12 + 0x30);
        uStack_558 = *(undefined8 *)(puVar12 + 0x38);
        uStack_3c8 = 0;
        uStack_380 = CONCAT44(uStack_54c,CONCAT22(uStack_54e,CONCAT11(bVar5,0x40))) | 0x400;
        uStack_3e8._0_4_ = uStack_448;
        uStack_3e8._4_4_ = uStack_444;
        uStack_3e0 = uStack_440;
        uStack_3dc = uStack_43c;
        uStack_3d8 = uStack_438;
        uStack_3d4 = uStack_434;
        uStack_3d0 = uStack_430;
        uStack_3cc = uStack_42c;
        uStack_3c0 = uStack_590;
        uStack_3b8 = uStack_588;
        uStack_3b0 = uStack_580;
        uStack_3a8 = uStack_578;
        uStack_3a0 = uStack_570;
        uStack_398 = uStack_568;
        uStack_390 = uStack_560;
        uStack_388 = uStack_558;
        blake3_compress_in_place(&uStack_448,&uStack_3c0,0x40,0);
        puVar12[1] = (uchar)((uint)uStack_448 >> 8);
        puVar12[2] = (uchar)((uint)uStack_448 >> 0x10);
        *puVar12 = (uchar)uStack_448;
        puVar12[3] = (uchar)((uint)uStack_448 >> 0x18);
        puVar12[5] = (uchar)((uint)uStack_444 >> 8);
        puVar12[6] = (uchar)((uint)uStack_444 >> 0x10);
        puVar12[4] = (uchar)uStack_444;
        puVar12[7] = (uchar)((uint)uStack_444 >> 0x18);
        puVar12[9] = (uchar)((uint)uStack_440 >> 8);
        puVar12[10] = (uchar)((uint)uStack_440 >> 0x10);
        puVar12[8] = (uchar)uStack_440;
        puVar12[0xb] = (uchar)((uint)uStack_440 >> 0x18);
        puVar12[0xd] = (uchar)((uint)uStack_43c >> 8);
        puVar12[0xe] = (uchar)((uint)uStack_43c >> 0x10);
        puVar12[0xc] = (uchar)uStack_43c;
        puVar12[0xf] = (uchar)((uint)uStack_43c >> 0x18);
        puVar12[0x11] = (uchar)((uint)uStack_438 >> 8);
        puVar12[0x12] = (uchar)((uint)uStack_438 >> 0x10);
        puVar12[0x10] = (uchar)uStack_438;
        puVar12[0x13] = (uchar)((uint)uStack_438 >> 0x18);
        puVar12[0x15] = (uchar)((uint)uStack_434 >> 8);
        puVar12[0x16] = (uchar)((uint)uStack_434 >> 0x10);
        puVar12[0x14] = (uchar)uStack_434;
        puVar12[0x17] = (uchar)((uint)uStack_434 >> 0x18);
        puVar12[0x19] = (uchar)((uint)uStack_430 >> 8);
        puVar12[0x1a] = (uchar)((uint)uStack_430 >> 0x10);
        puVar12[0x18] = (uchar)uStack_430;
        puVar12[0x1b] = (uchar)((uint)uStack_430 >> 0x18);
        puVar12[0x1d] = (uchar)((uint)uStack_42c >> 8);
        puVar12[0x1c] = (uchar)uStack_42c;
        puVar12[0x1e] = (uchar)((uint)uStack_42c >> 0x10);
        puVar12[0x1f] = (uchar)((uint)uStack_42c >> 0x18);
        puVar12 = (this->HasherBytes).Pad + 0x90;
        *puVar12 = *puVar12 + 0xff;
        bVar5 = (this->HasherBytes).Pad[0x90];
      }
    }
  }
  return;
}

// Update @ 1417198c0

void __thiscall FBlake3::Update(FBlake3 *this,TMemoryView<void_const_> *param_1)

{
  blake3_hasher_update(this,param_1->Data,param_1->Size);
  return;
}

