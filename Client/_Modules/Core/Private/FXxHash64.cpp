// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 5

// HashBuffer @ 1416fd550

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FXxHash64 __cdecl FXxHash64::HashBuffer(FCompositeBuffer *param_1)

{
  int iVar1;
  ForElementType<FSharedBuffer> FVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  FXxHash64 FVar6;
  void *pvVar7;
  ulong64 uVar8;
  undefined1 auStack_2b8 [56];
  XXH_INLINE_XXH3_state_s local_280;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_2b8;
  iVar1 = (param_1->Segments).ArrayNum;
  local_280.totalLen = 0;
  local_280.seed = 0;
  local_280.acc[0] = 0xc2b2ae3d;
  local_280.secretLimit = 0x80;
  local_280.acc[1] = 0x9e3779b185ebca87;
  local_280.acc[2] = 0xc2b2ae3d27d4eb4f;
  local_280.acc[3] = 0x165667b19e3779f9;
  local_280.acc[4] = 0x85ebca77c2b2ae63;
  local_280.acc[5] = 0x85ebca77;
  local_280.acc[6] = 0x27d4eb2f165667c5;
  local_280.acc[7] = 0x9e3779b1;
  local_280.extSecret = XXH3_kSecret;
  FVar2 = (param_1->Segments).AllocatorInstance.SecondaryData;
  local_280.nbStripesPerBlock = 0x10;
  local_280.bufferedSize = 0;
  local_280.reserved32 = 0;
  local_280.nbStripesSoFar = 0;
  if (FVar2 != (ForElementType<FSharedBuffer>)0x0) {
    param_1 = (FCompositeBuffer *)FVar2;
  }
  if ((iVar1 < 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    FVar6.Hash = (*pcVar4)();
    return (FXxHash64)FVar6.Hash;
  }
  FVar2 = (ForElementType<FSharedBuffer>)((longlong)param_1 + (longlong)iVar1 * 8);
  for (; (ForElementType<FSharedBuffer>)param_1 != FVar2;
      param_1 = (FCompositeBuffer *)((longlong)param_1 + 8)) {
    plVar3 = *(longlong **)param_1;
    if (plVar3 == (longlong *)0x0) {
      uVar8 = 0;
    }
    else {
      if (((ulonglong)plVar3[3] >> 0x3c & 4) == 0) {
        (**(code **)(*plVar3 + 8))(plVar3);
      }
      uVar8 = plVar3[2];
    }
    plVar3 = *(longlong **)param_1;
    if (plVar3 == (longlong *)0x0) {
      pvVar7 = (void *)0x0;
    }
    else {
      if (((ulonglong)plVar3[3] >> 0x3c & 4) == 0) {
        (**(code **)(*plVar3 + 8))(plVar3);
      }
      pvVar7 = (void *)plVar3[1];
    }
    XXH_INLINE_XXH3_64bits_update(&local_280,pvVar7,uVar8);
  }
  FVar6.Hash = XXH_INLINE_XXH3_64bits_digest(&local_280);
  return (FXxHash64)FVar6.Hash;
}

// HashBuffer @ 1416fd710

FXxHash64 __cdecl FXxHash64::HashBuffer(void *param_1,ulong64 param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  FXxHash64 FVar19;
  ulonglong uVar20;
  longlong lVar21;
  ulonglong uVar22;
  
  if (0x10 < param_2) {
    if (param_2 < 0x81) {
      lVar21 = param_2 * -0x61c8864e7a143579;
      if (0x20 < param_2) {
        if (0x40 < param_2) {
          if (0x60 < param_2) {
            auVar2._8_8_ = 0;
            auVar2._0_8_ = XXH3_kSecret._104_8_ ^ *(ulonglong *)((longlong)param_1 + 0x38);
            auVar11._8_8_ = 0;
            auVar11._0_8_ = XXH3_kSecret._96_8_ ^ *(ulonglong *)((longlong)param_1 + 0x30);
            auVar3._8_8_ = 0;
            auVar3._0_8_ = XXH3_kSecret._120_8_ ^
                           *(ulonglong *)((longlong)param_1 + (param_2 - 0x38));
            auVar12._8_8_ = 0;
            auVar12._0_8_ =
                 XXH3_kSecret._112_8_ ^ *(ulonglong *)((longlong)param_1 + (param_2 - 0x40));
            lVar21 = lVar21 + (SUB168(auVar2 * auVar11,0) ^ SUB168(auVar2 * auVar11,8)) +
                     (SUB168(auVar3 * auVar12,0) ^ SUB168(auVar3 * auVar12,8));
          }
          auVar4._8_8_ = 0;
          auVar4._0_8_ = XXH3_kSecret._72_8_ ^ *(ulonglong *)((longlong)param_1 + 0x28);
          auVar13._8_8_ = 0;
          auVar13._0_8_ = XXH3_kSecret._64_8_ ^ *(ulonglong *)((longlong)param_1 + 0x20);
          auVar5._8_8_ = 0;
          auVar5._0_8_ = XXH3_kSecret._88_8_ ^ *(ulonglong *)((longlong)param_1 + (param_2 - 0x28));
          auVar14._8_8_ = 0;
          auVar14._0_8_ = XXH3_kSecret._80_8_ ^ *(ulonglong *)((longlong)param_1 + (param_2 - 0x30))
          ;
          lVar21 = lVar21 + (SUB168(auVar5 * auVar14,0) ^ SUB168(auVar5 * auVar14,8)) +
                   (SUB168(auVar4 * auVar13,0) ^ SUB168(auVar4 * auVar13,8));
        }
        auVar6._8_8_ = 0;
        auVar6._0_8_ = XXH3_kSecret._40_8_ ^ *(ulonglong *)((longlong)param_1 + 0x18);
        auVar15._8_8_ = 0;
        auVar15._0_8_ = XXH3_kSecret._32_8_ ^ *(ulonglong *)((longlong)param_1 + 0x10);
        auVar7._8_8_ = 0;
        auVar7._0_8_ = XXH3_kSecret._56_8_ ^ *(ulonglong *)((longlong)param_1 + (param_2 - 0x18));
        auVar16._8_8_ = 0;
        auVar16._0_8_ = XXH3_kSecret._48_8_ ^ *(ulonglong *)((longlong)param_1 + (param_2 - 0x20));
        lVar21 = lVar21 + (SUB168(auVar6 * auVar15,0) ^ SUB168(auVar6 * auVar15,8)) +
                 (SUB168(auVar7 * auVar16,0) ^ SUB168(auVar7 * auVar16,8));
      }
      auVar8._8_8_ = 0;
      auVar8._0_8_ = XXH3_kSecret._8_8_ ^ *(ulonglong *)((longlong)param_1 + 8);
      auVar17._8_8_ = 0;
      auVar17._0_8_ = CONCAT44(XXH3_kSecret._4_4_,XXH3_kSecret._0_4_) ^ *(ulonglong *)param_1;
      auVar9._8_8_ = 0;
      auVar9._0_8_ = XXH3_kSecret._24_8_ ^ *(ulonglong *)((longlong)param_1 + (param_2 - 8));
      auVar18._8_8_ = 0;
      auVar18._0_8_ = XXH3_kSecret._16_8_ ^ *(ulonglong *)((longlong)param_1 + (param_2 - 0x10));
      uVar20 = lVar21 + (SUB168(auVar9 * auVar18,0) ^ SUB168(auVar9 * auVar18,8)) +
               (SUB168(auVar8 * auVar17,0) ^ SUB168(auVar8 * auVar17,8));
      uVar20 = (uVar20 >> 0x25 ^ uVar20) * 0x165667919e3779f9;
      return (FXxHash64)(uVar20 >> 0x20 ^ uVar20);
    }
    if (0xf0 < param_2) {
      FVar19.Hash = XXH3_hashLong_64b_default(param_1,param_2,0,XXH3_kSecret,0xc0);
      return (FXxHash64)FVar19.Hash;
    }
    FVar19.Hash = XXH3_len_129to240_64b(param_1,param_2,XXH3_kSecret,0xc0,0);
    return (FXxHash64)FVar19.Hash;
  }
  if (8 < param_2) {
    uVar22 = XXH3_kSecret._32_8_ ^ *(ulonglong *)param_1 ^ XXH3_kSecret._24_8_;
    uVar20 = XXH3_kSecret._48_8_ ^ *(ulonglong *)((longlong)param_1 + (param_2 - 8)) ^
             XXH3_kSecret._40_8_;
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uVar20;
    auVar10._8_8_ = 0;
    auVar10._0_8_ = uVar22;
    uVar20 = (SUB168(auVar1 * auVar10,0) ^ SUB168(auVar1 * auVar10,8)) +
             uVar20 + (uVar22 >> 0x38 | (uVar22 & 0xff000000000000) >> 0x28 |
                       (uVar22 & 0xff0000000000) >> 0x18 | (uVar22 & 0xff00000000) >> 8 |
                       (uVar22 & 0xff000000) << 8 | (uVar22 & 0xff0000) << 0x18 |
                       (uVar22 & 0xff00) << 0x28 | uVar22 << 0x38) + param_2;
    uVar20 = (uVar20 >> 0x25 ^ uVar20) * 0x165667919e3779f9;
    return (FXxHash64)(uVar20 >> 0x20 ^ uVar20);
  }
  if (param_2 < 4) {
    if (param_2 == 0) {
      uVar20 = ((ulonglong)(XXH3_kSecret._64_8_ ^ XXH3_kSecret._56_8_) >> 0x21 ^
               XXH3_kSecret._64_8_ ^ XXH3_kSecret._56_8_) * -0x3d4d51c2d82b14b1;
      uVar20 = (uVar20 >> 0x1d ^ uVar20) * 0x165667b19e3779f9;
      return (FXxHash64)(uVar20 >> 0x20 ^ uVar20);
    }
    uVar20 = (((ulonglong)
               (((uint)CONCAT11(*(undefined1 *)((param_2 >> 1) + (longlong)param_1),
                                *(undefined1 *)param_1) << 8 | (uint)param_2) << 8) |
              (ulonglong)*(byte *)((longlong)param_1 + (param_2 - 1))) ^
              (ulonglong)(uint)XXH3_kSecret._4_4_ ^ (ulonglong)(uint)XXH3_kSecret._0_4_) *
             -0x3d4d51c2d82b14b1;
    uVar20 = (uVar20 >> 0x1d ^ uVar20) * 0x165667b19e3779f9;
    return (FXxHash64)(uVar20 >> 0x20 ^ uVar20);
  }
  uVar20 = CONCAT44(*(undefined4 *)param_1,*(undefined4 *)((longlong)param_1 + (param_2 - 4))) ^
           XXH3_kSecret._16_8_ ^ XXH3_kSecret._8_8_;
  uVar20 = ((uVar20 << 0x31 | uVar20 >> 0xf) ^ (uVar20 << 0x18 | uVar20 >> 0x28) ^ uVar20) *
           -0x604de39ae16720db;
  uVar20 = ((uVar20 >> 0x23) + param_2 ^ uVar20) * -0x604de39ae16720db;
  return (FXxHash64)(uVar20 >> 0x1c ^ uVar20);
}

// HashBuffer @ 1416fd720

FXxHash64 __cdecl FXxHash64::HashBuffer(TMemoryView<void_const_> *param_1)

{
  FXxHash64 FVar1;
  
  FVar1.Hash = XXH_INLINE_XXH3_64bits(param_1->Data,param_1->Size);
  return (FXxHash64)FVar1.Hash;
}

// HashBufferChunked @ 1416fd7a0

FXxHash64 __cdecl FXxHash64::HashBufferChunked(void *param_1,ulong64 param_2,ulong64 param_3)

{
  FXxHash64 FVar1;
  TMemoryView<void_const_> local_18;
  
  local_18.Data = param_1;
  local_18.Size = param_2;
  FVar1 = PrivateHashBufferChunked<FXxHash64>(&local_18,param_3);
  return (FXxHash64)FVar1.Hash;
}

// HashBufferChunked @ 1416fd7d0

FXxHash64 __cdecl FXxHash64::HashBufferChunked(TMemoryView<void_const_> *param_1,ulong64 param_2)

{
  FXxHash64 FVar1;
  TMemoryView<void_const_> local_18;
  
  local_18.Data = param_1->Data;
  local_18.Size = param_1->Size;
  FVar1 = PrivateHashBufferChunked<FXxHash64>(&local_18,param_2);
  return (FXxHash64)FVar1.Hash;
}

