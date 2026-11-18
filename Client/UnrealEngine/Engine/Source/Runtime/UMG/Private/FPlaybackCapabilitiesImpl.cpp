// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UMG
// Functions: 3

// AddCapability<FMovieSceneEvaluationState,FMovieSceneEvaluationState> @ 1468e05e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

FPlaybackCapabilityPtr * __thiscall
UE::MovieScene::FPlaybackCapabilitiesImpl::
AddCapability<FMovieSceneEvaluationState,FMovieSceneEvaluationState>
          (FPlaybackCapabilitiesImpl *this,FPlaybackCapabilityPtr *__return_storage_ptr__,
          uint param_1)

{
  undefined8 *puVar1;
  byte bVar2;
  ushort uVar3;
  code *pcVar4;
  undefined8 uVar5;
  int iVar6;
  bool bVar7;
  byte bVar8;
  uint uVar9;
  FPlaybackCapabilityPtr *pFVar10;
  uchar *puVar11;
  uchar *puVar12;
  byte *pbVar13;
  ForElementType<unsigned_short> FVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  ushort uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uchar *puVar21;
  longlong lVar22;
  ulonglong uVar23;
  uint uVar24;
  uchar *puVar25;
  uchar *puVar26;
  ushort *puVar27;
  longlong lVar28;
  undefined1 auStack_f8 [32];
  longlong local_d8;
  longlong local_d0;
  char local_c8;
  uchar *local_c0;
  ulonglong local_b8;
  uchar *local_b0;
  uchar *local_a8;
  FPlaybackCapabilitiesImpl *local_a0;
  ushort local_98;
  ushort local_96;
  ulonglong local_90;
  FPlaybackCapabilityPtr *local_88;
  FPlaybackCapabilityHelpers local_80;
  TArray<unsigned_short,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> local_70;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_f8;
  local_a0 = this;
  local_88 = __return_storage_ptr__;
  if (((this->AllCapabilities & param_1) != 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(AllCapabilities & CapabilityBit) == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\MovieScenePlaybackCapabilities.h"
                         ,0x117,L"Capability already exists!"), bVar7)) {
    pcVar4 = (code *)swi(3);
    pFVar10 = (FPlaybackCapabilityPtr *)(*pcVar4)();
    return pFVar10;
  }
  this->AllCapabilities = this->AllCapabilities | param_1;
  bVar8 = this->Num;
  uVar16 = (ulonglong)bVar8;
  uVar24 = param_1 - 1 & this->AllCapabilities;
  puVar26 = this->Memory;
  uVar15 = (ulonglong)uVar24 - ((ulonglong)(uVar24 >> 1) & 0x5555555555555555);
  local_b8 = 8;
  uVar15 = (uVar15 >> 2 & 0x3333333333333333) + (uVar15 & 0x3333333333333333);
  local_90 = ((uVar15 >> 4) + uVar15 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
  if (bVar8 != 0) {
    pbVar13 = puVar26 + 0xc;
    uVar15 = 8;
    do {
      bVar2 = *pbVar13;
      pbVar13 = pbVar13 + 0x10;
      local_b8 = (ulonglong)bVar2;
      if (bVar2 < uVar15) {
        local_b8 = uVar15;
      }
      uVar16 = uVar16 - 1;
      uVar15 = local_b8;
    } while (uVar16 != 0);
  }
  uVar15 = local_b8;
  puVar21 = (uchar *)0x0;
  uVar20 = 0;
  local_70.ArrayMax = 0x10;
  uVar24 = bVar8 + 1;
  local_70.AllocatorInstance.SecondaryData = (ForElementType<unsigned_short>)0x0;
  local_70.ArrayNum = 0;
  local_a8 = (uchar *)CONCAT44(local_a8._4_4_,uVar24);
  local_c0 = puVar26;
  TArray<unsigned_short,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>::SetNum
            (&local_70,uVar24,Default);
  local_b0 = (uchar *)(local_90 & 0xffffffff);
  lVar22 = (ulonglong)uVar24 << 4;
  uVar9 = 0;
  uVar18 = uVar20;
  if (local_b0 != (uchar *)0x0) {
    puVar27 = (ushort *)(puVar26 + 10);
    uVar16 = local_90 & 0xffffffff;
    puVar26 = puVar21;
    puVar25 = puVar21;
    do {
      uVar18 = (uint)puVar26;
      uVar23 = lVar22 + -1 + (ulonglong)(byte)puVar27[1] & ~((ulonglong)(byte)puVar27[1] - 1);
      uVar24 = uVar9;
      if ((int)uVar18 < local_70.ArrayNum) {
        uVar24 = ~uVar18 >> 0x1f;
      }
      if (uVar24 == 0) {
        local_d8 = (longlong)(int)uVar18;
        local_d0 = (longlong)local_70.ArrayNum;
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar7) {
          pcVar4 = (code *)swi(3);
          pFVar10 = (FPlaybackCapabilityPtr *)(*pcVar4)();
          return pFVar10;
        }
      }
      FVar14 = (ForElementType<unsigned_short>)&local_70;
      if (local_70.AllocatorInstance.SecondaryData != (ForElementType<unsigned_short>)0x0) {
        FVar14 = local_70.AllocatorInstance.SecondaryData;
      }
      uVar18 = uVar18 + 1;
      puVar26 = (uchar *)(ulonglong)uVar18;
      *(short *)((longlong)FVar14 + (longlong)puVar25 * 2) = (short)uVar23;
      puVar25 = puVar25 + 1;
      uVar17 = *puVar27;
      puVar27 = puVar27 + 8;
      lVar22 = uVar23 + uVar17;
    } while ((longlong)puVar25 < (longlong)uVar16);
    this = local_a0;
    uVar24 = (uint)local_a8;
  }
  uVar16 = lVar22 + 7U & 0xfffffffffffffff8;
  uVar19 = uVar9;
  if ((int)uVar18 < local_70.ArrayNum) {
    uVar19 = ~uVar18 >> 0x1f;
  }
  if (uVar19 == 0) {
    local_d8 = (longlong)(int)uVar18;
    local_d0 = (longlong)local_70.ArrayNum;
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar4 = (code *)swi(3);
      pFVar10 = (FPlaybackCapabilityPtr *)(*pcVar4)();
      return pFVar10;
    }
  }
  FVar14 = (ForElementType<unsigned_short>)&local_70;
  if (local_70.AllocatorInstance.SecondaryData != (ForElementType<unsigned_short>)0x0) {
    FVar14 = local_70.AllocatorInstance.SecondaryData;
  }
  uVar19 = uVar18 + 1;
  *(short *)((longlong)FVar14 + (longlong)(int)uVar18 * 2) = (short)uVar16;
  uVar16 = uVar16 + 0x100;
  if ((int)uVar19 < (int)uVar24) {
    iVar6 = (uint)local_a8;
    lVar28 = (longlong)(int)uVar19;
    puVar27 = (ushort *)(local_c0 + lVar28 * 0x10 + -6);
    lVar22 = lVar28 * 2;
    do {
      uVar16 = (uVar16 - 1) + (ulonglong)(byte)puVar27[1] & ~((ulonglong)(byte)puVar27[1] - 1);
      uVar24 = 0;
      if ((int)uVar19 < local_70.ArrayNum) {
        uVar24 = ~uVar19 >> 0x1f;
      }
      if ((uVar24 == 0) &&
         (local_d8 = lVar28, local_d0 = (longlong)local_70.ArrayNum,
         bVar7 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar4 = (code *)swi(3);
        pFVar10 = (FPlaybackCapabilityPtr *)(*pcVar4)();
        return pFVar10;
      }
      FVar14 = (ForElementType<unsigned_short>)&local_70;
      if (local_70.AllocatorInstance.SecondaryData != (ForElementType<unsigned_short>)0x0) {
        FVar14 = local_70.AllocatorInstance.SecondaryData;
      }
      uVar19 = uVar19 + 1;
      lVar28 = lVar28 + 1;
      *(short *)((longlong)FVar14 + lVar22) = (short)uVar16;
      lVar22 = lVar22 + 2;
      uVar17 = *puVar27;
      puVar27 = puVar27 + 8;
      uVar16 = uVar16 + uVar17;
      uVar15 = local_b8;
      this = local_a0;
    } while ((int)uVar19 < iVar6);
  }
  if ((0xff < uVar15) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("RequiredAlignment <= 0XFF",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\MovieScenePlaybackCapabilities.h"
                         ,0x155,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    pFVar10 = (FPlaybackCapabilityPtr *)(*pcVar4)();
    return pFVar10;
  }
  puVar26 = this->Memory;
  local_a8 = puVar26;
  if ((this->Alignment < uVar15) || (this->Capacity < uVar16)) {
    uVar23 = (ulonglong)this->Capacity * 2;
    local_c8 = '\x01';
    if (uVar23 < uVar16) {
      uVar23 = uVar16 & 0xffff;
    }
    this->Capacity = (ushort)uVar23;
    puVar25 = FMemory::Malloc(uVar23 & 0xffff,(uint)uVar15);
    this->Memory = puVar25;
  }
  else {
    local_c8 = '\0';
  }
  puVar25 = local_b0;
  bVar8 = this->Num + 1;
  this->Num = bVar8;
  lVar22 = (ulonglong)bVar8 - 1;
  uVar24 = bVar8 - 1;
  if ((longlong)local_b0 < lVar22) {
    puVar27 = (ushort *)(local_c0 + lVar22 * 0x10 + -6);
    do {
      uVar18 = uVar9;
      if ((int)uVar24 < local_70.ArrayNum) {
        uVar18 = ~uVar24 >> 0x1f;
      }
      if (uVar18 == 0) {
        local_d8 = (longlong)(int)uVar24;
        local_d0 = (longlong)local_70.ArrayNum;
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar7) {
          pcVar4 = (code *)swi(3);
          pFVar10 = (FPlaybackCapabilityPtr *)(*pcVar4)();
          return pFVar10;
        }
      }
      FVar14 = (ForElementType<unsigned_short>)&local_70;
      if (local_70.AllocatorInstance.SecondaryData != (ForElementType<unsigned_short>)0x0) {
        FVar14 = local_70.AllocatorInstance.SecondaryData;
      }
      puVar12 = puVar21;
      if (puVar27[-1] != 0xffff) {
        puVar12 = puVar26 + puVar27[-1];
      }
      memmove(this->Memory + *(ushort *)((longlong)FVar14 + lVar22 * 2),puVar12,(ulonglong)*puVar27)
      ;
      uVar24 = uVar24 - 1;
      lVar22 = lVar22 + -1;
      puVar27 = puVar27 + -8;
    } while ((longlong)puVar25 < lVar22);
  }
  uVar18 = uVar9;
  if ((int)uVar24 < local_70.ArrayNum) {
    uVar18 = ~uVar24 >> 0x1f;
  }
  if (uVar18 == 0) {
    local_d8 = (longlong)(int)uVar24;
    local_d0 = (longlong)local_70.ArrayNum;
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar4 = (code *)swi(3);
      pFVar10 = (FPlaybackCapabilityPtr *)(*pcVar4)();
      return pFVar10;
    }
  }
  puVar26 = local_a8;
  FVar14 = (ForElementType<unsigned_short>)&local_70;
  if (local_70.AllocatorInstance.SecondaryData != (ForElementType<unsigned_short>)0x0) {
    FVar14 = local_70.AllocatorInstance.SecondaryData;
  }
  uVar18 = uVar24 - 1;
  uVar15 = (ulonglong)*(ushort *)((longlong)FVar14 + (longlong)(int)uVar24 * 2);
  puVar11 = this->Memory;
  puVar12 = puVar11 + uVar15 + 0x18;
  puVar12[0] = '\0';
  puVar12[1] = '\0';
  puVar12[2] = '\0';
  puVar12[3] = '\0';
  puVar12[4] = '\0';
  puVar12[5] = '\0';
  puVar12[6] = '\0';
  puVar12[7] = '\0';
  puVar12[8] = '\0';
  puVar12[9] = '\0';
  puVar12[10] = '\0';
  puVar12[0xb] = '\0';
  puVar12[0xc] = '\0';
  puVar12[0xd] = '\0';
  puVar12[0xe] = '\0';
  puVar12[0xf] = '\0';
  puVar12 = puVar11 + uVar15 + 0x40;
  puVar12[0] = '\0';
  puVar12[1] = '\0';
  puVar12[2] = '\0';
  puVar12[3] = '\0';
  puVar12[4] = '\0';
  puVar12[5] = '\0';
  puVar12[6] = '\0';
  puVar12[7] = '\0';
  puVar12 = puVar11 + uVar15 + 0x50;
  puVar12[0] = '\0';
  puVar12[1] = '\0';
  puVar12[2] = '\0';
  puVar12[3] = '\0';
  puVar12[4] = '\0';
  puVar12[5] = '\0';
  puVar12[6] = '\0';
  puVar12[7] = '\0';
  puVar12 = puVar11 + uVar15 + 0x68;
  puVar12[0] = '\0';
  puVar12[1] = '\0';
  puVar12[2] = '\0';
  puVar12[3] = '\0';
  puVar12[4] = '\0';
  puVar12[5] = '\0';
  puVar12[6] = '\0';
  puVar12[7] = '\0';
  puVar12[8] = '\0';
  puVar12[9] = '\0';
  puVar12[10] = '\0';
  puVar12[0xb] = '\0';
  puVar12[0xc] = '\0';
  puVar12[0xd] = '\0';
  puVar12[0xe] = '\0';
  puVar12[0xf] = '\0';
  puVar12 = puVar11 + uVar15 + 0x90;
  puVar12[0] = '\0';
  puVar12[1] = '\0';
  puVar12[2] = '\0';
  puVar12[3] = '\0';
  puVar12[4] = '\0';
  puVar12[5] = '\0';
  puVar12[6] = '\0';
  puVar12[7] = '\0';
  puVar12 = puVar11 + uVar15 + 0xa0;
  puVar12[0] = '\0';
  puVar12[1] = '\0';
  puVar12[2] = '\0';
  puVar12[3] = '\0';
  puVar12[4] = '\0';
  puVar12[5] = '\0';
  puVar12[6] = '\0';
  puVar12[7] = '\0';
  puVar12 = puVar11 + uVar15 + 0xb8;
  puVar12[0] = '\0';
  puVar12[1] = '\0';
  puVar12[2] = '\0';
  puVar12[3] = '\0';
  puVar12[4] = '\0';
  puVar12[5] = '\0';
  puVar12[6] = '\0';
  puVar12[7] = '\0';
  puVar12[8] = '\0';
  puVar12[9] = '\0';
  puVar12[10] = '\0';
  puVar12[0xb] = '\0';
  puVar12[0xc] = '\0';
  puVar12[0xd] = '\0';
  puVar12[0xe] = '\0';
  puVar12[0xf] = '\0';
  puVar12 = puVar11 + uVar15 + 0xe0;
  puVar12[0] = '\0';
  puVar12[1] = '\0';
  puVar12[2] = '\0';
  puVar12[3] = '\0';
  puVar12[4] = '\0';
  puVar12[5] = '\0';
  puVar12[6] = '\0';
  puVar12[7] = '\0';
  puVar12 = puVar11 + uVar15 + 0xf0;
  puVar12[0] = '\0';
  puVar12[1] = '\0';
  puVar12[2] = '\0';
  puVar12[3] = '\0';
  puVar12[4] = '\0';
  puVar12[5] = '\0';
  puVar12[6] = '\0';
  puVar12[7] = '\0';
  puVar12 = puVar11 + uVar15 + 0xf8;
  puVar12[0] = '\0';
  puVar12[1] = '\0';
  puVar12[2] = '\0';
  puVar12[3] = '\0';
  puVar12[4] = '\0';
  puVar12[5] = '\0';
  puVar12[6] = '\0';
  puVar12[7] = '\0';
  *(undefined ***)(puVar11 + uVar15) = &___7FMovieSceneEvaluationState__6B_;
  puVar12 = puVar11 + uVar15 + 8;
  puVar12[0] = '\0';
  puVar12[1] = '\0';
  puVar12[2] = '\0';
  puVar12[3] = '\0';
  puVar12[4] = '\0';
  puVar12[5] = '\0';
  puVar12[6] = '\0';
  puVar12[7] = '\0';
  puVar12 = puVar11 + uVar15 + 0x10;
  puVar12[0] = '\0';
  puVar12[1] = '\0';
  puVar12[2] = '\0';
  puVar12[3] = '\0';
  puVar12[4] = '\0';
  puVar12[5] = '\0';
  puVar12[6] = '\0';
  puVar12[7] = '\0';
  puVar12 = puVar11 + uVar15 + 0x28;
  puVar12[0] = '\0';
  puVar12[1] = '\0';
  puVar12[2] = '\0';
  puVar12[3] = '\0';
  puVar12[4] = '\0';
  puVar12[5] = '\0';
  puVar12[6] = '\0';
  puVar12[7] = '\0';
  puVar12 = puVar11 + uVar15 + 0x30;
  puVar12[0] = '\0';
  puVar12[1] = '\0';
  puVar12[2] = '\0';
  puVar12[3] = '\0';
  puVar12 = puVar11 + uVar15 + 0x34;
  puVar12[0] = 0x80;
  puVar12[1] = '\0';
  puVar12[2] = '\0';
  puVar12[3] = '\0';
  puVar12 = puVar11 + uVar15 + 0x38;
  puVar12[0] = 0xff;
  puVar12[1] = 0xff;
  puVar12[2] = 0xff;
  puVar12[3] = 0xff;
  puVar12 = puVar11 + uVar15 + 0x3c;
  puVar12[0] = '\0';
  puVar12[1] = '\0';
  puVar12[2] = '\0';
  puVar12[3] = '\0';
  puVar12 = puVar11 + uVar15 + 0x48;
  puVar12[0] = '\0';
  puVar12[1] = '\0';
  puVar12[2] = '\0';
  puVar12[3] = '\0';
  puVar12[4] = '\0';
  puVar12[5] = '\0';
  puVar12[6] = '\0';
  puVar12[7] = '\0';
  puVar12 = puVar11 + uVar15 + 0x58;
  puVar12[0] = '\0';
  puVar12[1] = '\0';
  puVar12[2] = '\0';
  puVar12[3] = '\0';
  puVar12[4] = '\0';
  puVar12[5] = '\0';
  puVar12[6] = '\0';
  puVar12[7] = '\0';
  puVar12 = puVar11 + uVar15 + 0x60;
  puVar12[0] = '\0';
  puVar12[1] = '\0';
  puVar12[2] = '\0';
  puVar12[3] = '\0';
  puVar12[4] = '\0';
  puVar12[5] = '\0';
  puVar12[6] = '\0';
  puVar12[7] = '\0';
  puVar12 = puVar11 + uVar15 + 0x78;
  puVar12[0] = '\0';
  puVar12[1] = '\0';
  puVar12[2] = '\0';
  puVar12[3] = '\0';
  puVar12[4] = '\0';
  puVar12[5] = '\0';
  puVar12[6] = '\0';
  puVar12[7] = '\0';
  puVar12 = puVar11 + uVar15 + 0x80;
  puVar12[0] = '\0';
  puVar12[1] = '\0';
  puVar12[2] = '\0';
  puVar12[3] = '\0';
  puVar12 = puVar11 + uVar15 + 0x84;
  puVar12[0] = 0x80;
  puVar12[1] = '\0';
  puVar12[2] = '\0';
  puVar12[3] = '\0';
  puVar12 = puVar11 + uVar15 + 0x88;
  puVar12[0] = 0xff;
  puVar12[1] = 0xff;
  puVar12[2] = 0xff;
  puVar12[3] = 0xff;
  puVar12 = puVar11 + uVar15 + 0x8c;
  puVar12[0] = '\0';
  puVar12[1] = '\0';
  puVar12[2] = '\0';
  puVar12[3] = '\0';
  puVar12 = puVar11 + uVar15 + 0x98;
  puVar12[0] = '\0';
  puVar12[1] = '\0';
  puVar12[2] = '\0';
  puVar12[3] = '\0';
  puVar12[4] = '\0';
  puVar12[5] = '\0';
  puVar12[6] = '\0';
  puVar12[7] = '\0';
  puVar12 = puVar11 + uVar15 + 0xa8;
  puVar12[0] = '\0';
  puVar12[1] = '\0';
  puVar12[2] = '\0';
  puVar12[3] = '\0';
  puVar12[4] = '\0';
  puVar12[5] = '\0';
  puVar12[6] = '\0';
  puVar12[7] = '\0';
  puVar12 = puVar11 + uVar15 + 0xb0;
  puVar12[0] = '\0';
  puVar12[1] = '\0';
  puVar12[2] = '\0';
  puVar12[3] = '\0';
  puVar12[4] = '\0';
  puVar12[5] = '\0';
  puVar12[6] = '\0';
  puVar12[7] = '\0';
  puVar12 = puVar11 + uVar15 + 200;
  puVar12[0] = '\0';
  puVar12[1] = '\0';
  puVar12[2] = '\0';
  puVar12[3] = '\0';
  puVar12[4] = '\0';
  puVar12[5] = '\0';
  puVar12[6] = '\0';
  puVar12[7] = '\0';
  puVar12 = puVar11 + uVar15 + 0xd0;
  puVar12[0] = '\0';
  puVar12[1] = '\0';
  puVar12[2] = '\0';
  puVar12[3] = '\0';
  puVar12 = puVar11 + uVar15 + 0xd4;
  puVar12[0] = 0x80;
  puVar12[1] = '\0';
  puVar12[2] = '\0';
  puVar12[3] = '\0';
  puVar12 = puVar11 + uVar15 + 0xd8;
  puVar12[0] = 0xff;
  puVar12[1] = 0xff;
  puVar12[2] = 0xff;
  puVar12[3] = 0xff;
  puVar12 = puVar11 + uVar15 + 0xdc;
  puVar12[0] = '\0';
  puVar12[1] = '\0';
  puVar12[2] = '\0';
  puVar12[3] = '\0';
  puVar11 = puVar11 + uVar15 + 0xe8;
  puVar11[0] = '\0';
  puVar11[1] = '\0';
  puVar11[2] = '\0';
  puVar11[3] = '\0';
  puVar11[4] = '\0';
  puVar11[5] = '\0';
  puVar11[6] = '\0';
  puVar11[7] = '\0';
  if (-1 < (int)uVar18) {
    lVar28 = (longlong)(int)uVar18;
    puVar27 = (ushort *)(local_c0 + lVar28 * 0x10 + 10);
    lVar22 = lVar28 * 2;
    do {
      uVar24 = uVar9;
      if ((int)uVar18 < local_70.ArrayNum) {
        uVar24 = ~uVar18 >> 0x1f;
      }
      if ((uVar24 == 0) &&
         (local_d8 = lVar28, local_d0 = (longlong)local_70.ArrayNum,
         bVar7 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar4 = (code *)swi(3);
        pFVar10 = (FPlaybackCapabilityPtr *)(*pcVar4)();
        return pFVar10;
      }
      FVar14 = (ForElementType<unsigned_short>)&local_70;
      if (local_70.AllocatorInstance.SecondaryData != (ForElementType<unsigned_short>)0x0) {
        FVar14 = local_70.AllocatorInstance.SecondaryData;
      }
      puVar25 = puVar21;
      if (puVar27[-1] != 0xffff) {
        puVar25 = puVar26 + puVar27[-1];
      }
      memmove(this->Memory + *(ushort *)((longlong)FVar14 + lVar22),puVar25,(ulonglong)*puVar27);
      lVar28 = lVar28 + -1;
      lVar22 = lVar22 + -2;
      puVar27 = puVar27 + -8;
      uVar18 = uVar18 - 1;
      puVar25 = local_b0;
    } while (-1 < (int)uVar18);
  }
  local_a0 = (FPlaybackCapabilitiesImpl *)this->Memory;
  lVar22 = (ulonglong)this->Num - 1;
  uVar24 = this->Num - 1;
  if ((longlong)puVar25 < lVar22) {
    puVar27 = (ushort *)((longlong)local_a0 + lVar22 * 0x10 + 8);
    local_b8 = (longlong)local_c0 - (longlong)local_a0;
    uVar17 = local_98;
    do {
      puVar1 = (undefined8 *)((local_b8 - 0x18) + (longlong)puVar27);
      uVar5 = puVar1[1];
      *(undefined8 *)(puVar27 + -4) = *puVar1;
      *(undefined8 *)puVar27 = uVar5;
      uVar18 = uVar20;
      if ((int)uVar24 < local_70.ArrayNum) {
        uVar18 = ~uVar24 >> 0x1f;
      }
      if ((uVar18 == 0) &&
         (local_d8 = lVar22, local_d0 = (longlong)local_70.ArrayNum,
         bVar7 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar4 = (code *)swi(3);
        pFVar10 = (FPlaybackCapabilityPtr *)(*pcVar4)();
        return pFVar10;
      }
      FVar14 = (ForElementType<unsigned_short>)&local_70;
      if (local_70.AllocatorInstance.SecondaryData != (ForElementType<unsigned_short>)0x0) {
        FVar14 = local_70.AllocatorInstance.SecondaryData;
      }
      uVar3 = *(ushort *)((longlong)FVar14 + lVar22 * 2);
      if (this->Memory + uVar3 < this->Memory) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("false",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\RelativePtr.h"
                           ,0x46,
                           L"Attempting to assign a negative offset to an unsigned relative pointer!!"
                          );
        if (bVar7) {
          pcVar4 = (code *)swi(3);
          pFVar10 = (FPlaybackCapabilityPtr *)(*pcVar4)();
          return pFVar10;
        }
      }
      else {
        uVar17 = uVar3;
        if ((uVar3 == 0xffff) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("OffsetPtr >= 0 && OffsetPtr < std::numeric_limits<OffsetType>::max()"
                               ,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\RelativePtr.h"
                               ,0x3a,
                               L"Attempting to create a relative pointer outside the bounds of its capacity."
                              ), bVar7)) {
          pcVar4 = (code *)swi(3);
          pFVar10 = (FPlaybackCapabilityPtr *)(*pcVar4)();
          return pFVar10;
        }
      }
      uVar24 = uVar24 - 1;
      *puVar27 = uVar17;
      lVar22 = lVar22 + -1;
      puVar27 = puVar27 + -8;
    } while ((longlong)local_b0 < lVar22);
  }
  lVar22 = (longlong)(int)uVar24;
  puVar26 = (uchar *)((longlong)local_a0 + lVar22 * 0x10);
  uVar18 = uVar20;
  if ((int)uVar24 < local_70.ArrayNum) {
    uVar18 = ~uVar24 >> 0x1f;
  }
  local_b0 = puVar26;
  if ((uVar18 == 0) &&
     (local_d8 = lVar22, local_d0 = (longlong)local_70.ArrayNum,
     bVar7 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld"), bVar7
     )) {
    pcVar4 = (code *)swi(3);
    pFVar10 = (FPlaybackCapabilityPtr *)(*pcVar4)();
    return pFVar10;
  }
  FVar14 = (ForElementType<unsigned_short>)&local_70;
  if (local_70.AllocatorInstance.SecondaryData != (ForElementType<unsigned_short>)0x0) {
    FVar14 = local_70.AllocatorInstance.SecondaryData;
  }
  uVar17 = *(ushort *)((longlong)FVar14 + lVar22 * 2);
  puVar25 = this->Memory;
  puVar26[0xf] = '\0';
  puVar26[0] = '\0';
  puVar26[1] = '\0';
  puVar26[2] = '\0';
  puVar26[3] = '\0';
  puVar26[4] = '\0';
  puVar26[5] = '\0';
  puVar26[6] = '\0';
  puVar26[7] = '\0';
  ((TRelativePtr<void,unsigned_short> *)(puVar26 + 8))->Offset = 0xffff;
  puVar26[10] = '\0';
  puVar26[0xb] = '\0';
  puVar26[0xc] = '\0';
  puVar26[0xd] = '\0';
  puVar26[0xe] = '\0';
  TRelativePtr<void,unsigned_short>::Reset
            ((TRelativePtr<void,unsigned_short> *)(puVar26 + 8),this->Memory,puVar25 + uVar17);
  puVar26[10] = '\0';
  puVar26[0xb] = '\x01';
  puVar26[0xc] = '\b';
  puVar26[0xd] = '\0';
  puVar26[0xe] = '\0';
  puVar11 = ::operator_new(0x10);
  puVar12 = puVar21;
  if (puVar11 != (uchar *)0x0) {
    *(uchar **)(puVar11 + 8) = puVar25 + uVar17;
    *(undefined ***)puVar11 =
         &
         ___7__TPlaybackCapabilityDebuggingTypedPtr_UFMovieSceneEvaluationState___MovieScene_UE__6B_
    ;
    puVar12 = puVar11;
  }
  uVar24 = uVar24 - 1;
  *(uchar **)puVar26 = puVar12;
  if (-1 < (int)uVar24) {
    lVar22 = (longlong)(int)uVar24;
    puVar25 = (uchar *)((longlong)local_a0 + lVar22 * 0x10);
    local_c0 = local_c0 + -(longlong)local_a0;
    uVar15 = lVar22 * 2;
    uVar17 = local_96;
    do {
      uVar5 = *(undefined8 *)(puVar25 + (longlong)local_c0 + 8);
      *(undefined8 *)puVar25 = *(undefined8 *)(puVar25 + (longlong)local_c0);
      *(undefined8 *)(puVar25 + 8) = uVar5;
      uVar18 = uVar20;
      if ((int)uVar24 < local_70.ArrayNum) {
        uVar18 = ~uVar24 >> 0x1f;
      }
      local_b8 = uVar15;
      if ((uVar18 == 0) &&
         (local_d8 = lVar22, local_d0 = (longlong)local_70.ArrayNum,
         bVar7 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar4 = (code *)swi(3);
        pFVar10 = (FPlaybackCapabilityPtr *)(*pcVar4)();
        return pFVar10;
      }
      FVar14 = (ForElementType<unsigned_short>)&local_70;
      if (local_70.AllocatorInstance.SecondaryData != (ForElementType<unsigned_short>)0x0) {
        FVar14 = local_70.AllocatorInstance.SecondaryData;
      }
      uVar3 = *(ushort *)(uVar15 + (longlong)FVar14);
      if (this->Memory + uVar3 < this->Memory) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("false",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\RelativePtr.h"
                           ,0x46,
                           L"Attempting to assign a negative offset to an unsigned relative pointer!!"
                          );
        if (bVar7) {
          pcVar4 = (code *)swi(3);
          pFVar10 = (FPlaybackCapabilityPtr *)(*pcVar4)();
          return pFVar10;
        }
      }
      else {
        uVar17 = uVar3;
        if ((uVar3 == 0xffff) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("OffsetPtr >= 0 && OffsetPtr < std::numeric_limits<OffsetType>::max()"
                               ,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\RelativePtr.h"
                               ,0x3a,
                               L"Attempting to create a relative pointer outside the bounds of its capacity."
                              ), bVar7)) {
          pcVar4 = (code *)swi(3);
          pFVar10 = (FPlaybackCapabilityPtr *)(*pcVar4)();
          return pFVar10;
        }
      }
      lVar22 = lVar22 + -1;
      uVar15 = local_b8 - 2;
      *(ushort *)(puVar25 + 8) = uVar17;
      puVar25 = puVar25 + -0x10;
      uVar24 = uVar24 - 1;
      puVar26 = local_b0;
      local_b8 = uVar15;
    } while (-1 < (int)uVar24);
  }
  if ((local_c8 != '\0') && (local_a8 != (uchar *)0x0)) {
    FMemory::Free(local_a8);
  }
  local_80.InterfaceCast =
       TPlaybackCapabilityInterfaceCast<FMovieSceneEvaluationState>::InterfaceCast;
  local_80.Destructor = TPlaybackCapabilityDestructor<FMovieSceneEvaluationState>::Destroy;
  TArray<UE::MovieScene::FPlaybackCapabilityHelpers,TSizedDefaultAllocator<32>_>::Insert
            (&this->Helpers,&local_80,(int)local_90);
  pFVar10 = local_88;
  if (*(ushort *)(puVar26 + 8) != 0xffff) {
    puVar21 = this->Memory + *(ushort *)(puVar26 + 8);
  }
  local_88->Ptr = puVar21 + puVar26[0xd];
  local_88->StorageMode = puVar26[0xe];
  if (local_70.AllocatorInstance.SecondaryData != (ForElementType<unsigned_short>)0x0) {
    FMemory::Free((void *)local_70.AllocatorInstance.SecondaryData);
  }
  return pFVar10;
}

// AddCapability<UE::MovieScene::FSequenceDirectorPlaybackCapability,UE::MovieScene::FSequenceDirectorPlaybackCapability,bool_const_&> @ 1468e1030

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

FPlaybackCapabilityPtr * __thiscall
UE::MovieScene::FPlaybackCapabilitiesImpl::
AddCapability<UE::MovieScene::FSequenceDirectorPlaybackCapability,UE::MovieScene::FSequenceDirectorPlaybackCapability,bool_const_&>
          (FPlaybackCapabilitiesImpl *this,FPlaybackCapabilityPtr *__return_storage_ptr__,
          uint param_1,bool *param_2)

{
  undefined8 *puVar1;
  byte bVar2;
  ushort uVar3;
  code *pcVar4;
  undefined8 uVar5;
  int iVar6;
  bool bVar7;
  byte bVar8;
  uint uVar9;
  FPlaybackCapabilityPtr *pFVar10;
  uchar *puVar11;
  byte *pbVar12;
  ForElementType<unsigned_short> FVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ushort uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uchar *puVar20;
  longlong lVar21;
  ulonglong uVar22;
  uint uVar23;
  uchar *puVar24;
  bool *pbVar25;
  uchar *puVar26;
  ushort *puVar27;
  longlong lVar28;
  undefined1 auStack_108 [32];
  longlong local_e8;
  longlong local_e0;
  char local_d8;
  uchar *local_d0;
  uchar *local_c8;
  ulonglong local_c0;
  FPlaybackCapabilitiesImpl *local_b8;
  bool *local_b0;
  ulonglong local_a8;
  ushort local_a0;
  ushort local_9e;
  ulonglong local_98;
  FPlaybackCapabilityPtr *local_90;
  FPlaybackCapabilityHelpers local_88;
  TArray<unsigned_short,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> local_78;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_108;
  local_b8 = this;
  local_b0 = param_2;
  local_90 = __return_storage_ptr__;
  if (((this->AllCapabilities & param_1) != 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(AllCapabilities & CapabilityBit) == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\MovieScenePlaybackCapabilities.h"
                         ,0x117,L"Capability already exists!"), bVar7)) {
    pcVar4 = (code *)swi(3);
    pFVar10 = (FPlaybackCapabilityPtr *)(*pcVar4)();
    return pFVar10;
  }
  this->AllCapabilities = this->AllCapabilities | param_1;
  bVar8 = this->Num;
  uVar15 = (ulonglong)bVar8;
  uVar23 = param_1 - 1 & this->AllCapabilities;
  puVar26 = this->Memory;
  uVar14 = (ulonglong)uVar23 - ((ulonglong)(uVar23 >> 1) & 0x5555555555555555);
  local_c0 = 8;
  uVar14 = (uVar14 >> 2 & 0x3333333333333333) + (uVar14 & 0x3333333333333333);
  local_98 = ((uVar14 >> 4) + uVar14 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
  if (bVar8 != 0) {
    pbVar12 = puVar26 + 0xc;
    uVar14 = 8;
    do {
      bVar2 = *pbVar12;
      pbVar12 = pbVar12 + 0x10;
      local_c0 = (ulonglong)bVar2;
      if (bVar2 < uVar14) {
        local_c0 = uVar14;
      }
      uVar15 = uVar15 - 1;
      uVar14 = local_c0;
    } while (uVar15 != 0);
  }
  uVar14 = local_c0;
  puVar20 = (uchar *)0x0;
  uVar19 = 0;
  local_78.ArrayMax = 0x10;
  uVar23 = bVar8 + 1;
  local_78.AllocatorInstance.SecondaryData = (ForElementType<unsigned_short>)0x0;
  local_78.ArrayNum = 0;
  local_c8 = (uchar *)CONCAT44(local_c8._4_4_,uVar23);
  local_d0 = puVar26;
  TArray<unsigned_short,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>::SetNum
            (&local_78,uVar23,Default);
  local_a8 = local_98 & 0xffffffff;
  lVar21 = (ulonglong)uVar23 << 4;
  uVar9 = 0;
  uVar17 = uVar19;
  if (local_a8 != 0) {
    puVar27 = (ushort *)(puVar26 + 10);
    uVar15 = local_98 & 0xffffffff;
    puVar26 = puVar20;
    puVar24 = puVar20;
    do {
      uVar17 = (uint)puVar26;
      uVar22 = lVar21 + -1 + (ulonglong)(byte)puVar27[1] & ~((ulonglong)(byte)puVar27[1] - 1);
      uVar23 = uVar9;
      if ((int)uVar17 < local_78.ArrayNum) {
        uVar23 = ~uVar17 >> 0x1f;
      }
      if (uVar23 == 0) {
        local_e8 = (longlong)(int)uVar17;
        local_e0 = (longlong)local_78.ArrayNum;
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar7) {
          pcVar4 = (code *)swi(3);
          pFVar10 = (FPlaybackCapabilityPtr *)(*pcVar4)();
          return pFVar10;
        }
      }
      FVar13 = (ForElementType<unsigned_short>)&local_78;
      if (local_78.AllocatorInstance.SecondaryData != (ForElementType<unsigned_short>)0x0) {
        FVar13 = local_78.AllocatorInstance.SecondaryData;
      }
      uVar17 = uVar17 + 1;
      puVar26 = (uchar *)(ulonglong)uVar17;
      *(short *)((longlong)FVar13 + (longlong)puVar24 * 2) = (short)uVar22;
      puVar24 = puVar24 + 1;
      uVar16 = *puVar27;
      puVar27 = puVar27 + 8;
      lVar21 = uVar22 + uVar16;
    } while ((longlong)puVar24 < (longlong)uVar15);
    this = local_b8;
    uVar23 = (uint)local_c8;
  }
  uVar15 = lVar21 + 7U & 0xfffffffffffffff8;
  uVar18 = uVar9;
  if ((int)uVar17 < local_78.ArrayNum) {
    uVar18 = ~uVar17 >> 0x1f;
  }
  if (uVar18 == 0) {
    local_e8 = (longlong)(int)uVar17;
    local_e0 = (longlong)local_78.ArrayNum;
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar4 = (code *)swi(3);
      pFVar10 = (FPlaybackCapabilityPtr *)(*pcVar4)();
      return pFVar10;
    }
  }
  FVar13 = (ForElementType<unsigned_short>)&local_78;
  if (local_78.AllocatorInstance.SecondaryData != (ForElementType<unsigned_short>)0x0) {
    FVar13 = local_78.AllocatorInstance.SecondaryData;
  }
  uVar18 = uVar17 + 1;
  *(short *)((longlong)FVar13 + (longlong)(int)uVar17 * 2) = (short)uVar15;
  uVar15 = uVar15 + 0x28;
  if ((int)uVar18 < (int)uVar23) {
    iVar6 = (uint)local_c8;
    lVar28 = (longlong)(int)uVar18;
    puVar27 = (ushort *)(local_d0 + lVar28 * 0x10 + -6);
    lVar21 = lVar28 * 2;
    do {
      uVar15 = (uVar15 - 1) + (ulonglong)(byte)puVar27[1] & ~((ulonglong)(byte)puVar27[1] - 1);
      uVar23 = 0;
      if ((int)uVar18 < local_78.ArrayNum) {
        uVar23 = ~uVar18 >> 0x1f;
      }
      if ((uVar23 == 0) &&
         (local_e8 = lVar28, local_e0 = (longlong)local_78.ArrayNum,
         bVar7 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar4 = (code *)swi(3);
        pFVar10 = (FPlaybackCapabilityPtr *)(*pcVar4)();
        return pFVar10;
      }
      FVar13 = (ForElementType<unsigned_short>)&local_78;
      if (local_78.AllocatorInstance.SecondaryData != (ForElementType<unsigned_short>)0x0) {
        FVar13 = local_78.AllocatorInstance.SecondaryData;
      }
      uVar18 = uVar18 + 1;
      lVar28 = lVar28 + 1;
      *(short *)((longlong)FVar13 + lVar21) = (short)uVar15;
      lVar21 = lVar21 + 2;
      uVar16 = *puVar27;
      puVar27 = puVar27 + 8;
      uVar15 = uVar15 + uVar16;
      uVar14 = local_c0;
      this = local_b8;
    } while ((int)uVar18 < iVar6);
  }
  if ((0xff < uVar14) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("RequiredAlignment <= 0XFF",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\MovieScenePlaybackCapabilities.h"
                         ,0x155,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    pFVar10 = (FPlaybackCapabilityPtr *)(*pcVar4)();
    return pFVar10;
  }
  puVar26 = this->Memory;
  local_c8 = puVar26;
  if ((this->Alignment < uVar14) || (this->Capacity < uVar15)) {
    uVar22 = (ulonglong)this->Capacity * 2;
    local_d8 = '\x01';
    if (uVar22 < uVar15) {
      uVar22 = uVar15 & 0xffff;
    }
    this->Capacity = (ushort)uVar22;
    puVar24 = FMemory::Malloc(uVar22 & 0xffff,(uint)uVar14);
    this->Memory = puVar24;
  }
  else {
    local_d8 = '\0';
  }
  uVar14 = local_a8;
  bVar8 = this->Num + 1;
  this->Num = bVar8;
  lVar21 = (ulonglong)bVar8 - 1;
  uVar23 = bVar8 - 1;
  if ((longlong)local_a8 < lVar21) {
    puVar27 = (ushort *)(local_d0 + lVar21 * 0x10 + -6);
    do {
      uVar17 = uVar9;
      if ((int)uVar23 < local_78.ArrayNum) {
        uVar17 = ~uVar23 >> 0x1f;
      }
      if (uVar17 == 0) {
        local_e8 = (longlong)(int)uVar23;
        local_e0 = (longlong)local_78.ArrayNum;
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar7) {
          pcVar4 = (code *)swi(3);
          pFVar10 = (FPlaybackCapabilityPtr *)(*pcVar4)();
          return pFVar10;
        }
      }
      FVar13 = (ForElementType<unsigned_short>)&local_78;
      if (local_78.AllocatorInstance.SecondaryData != (ForElementType<unsigned_short>)0x0) {
        FVar13 = local_78.AllocatorInstance.SecondaryData;
      }
      puVar24 = puVar20;
      if (puVar27[-1] != 0xffff) {
        puVar24 = puVar26 + puVar27[-1];
      }
      memmove(this->Memory + *(ushort *)((longlong)FVar13 + lVar21 * 2),puVar24,(ulonglong)*puVar27)
      ;
      uVar23 = uVar23 - 1;
      lVar21 = lVar21 + -1;
      puVar27 = puVar27 + -8;
    } while ((longlong)uVar14 < lVar21);
  }
  uVar17 = uVar9;
  if ((int)uVar23 < local_78.ArrayNum) {
    uVar17 = ~uVar23 >> 0x1f;
  }
  if (uVar17 == 0) {
    local_e8 = (longlong)(int)uVar23;
    local_e0 = (longlong)local_78.ArrayNum;
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar4 = (code *)swi(3);
      pFVar10 = (FPlaybackCapabilityPtr *)(*pcVar4)();
      return pFVar10;
    }
  }
  puVar26 = local_c8;
  FVar13 = (ForElementType<unsigned_short>)&local_78;
  if (local_78.AllocatorInstance.SecondaryData != (ForElementType<unsigned_short>)0x0) {
    FVar13 = local_78.AllocatorInstance.SecondaryData;
  }
  puVar24 = this->Memory + *(ushort *)((longlong)FVar13 + (longlong)(int)uVar23 * 2);
  uVar23 = uVar23 - 1;
  puVar24[0x20] = *local_b0;
  *(undefined ***)puVar24 = &___7FSequenceDirectorPlaybackCapability_MovieScene_UE__6B_;
  puVar24[8] = '\0';
  puVar24[9] = '\0';
  puVar24[10] = '\0';
  puVar24[0xb] = '\0';
  puVar24[0xc] = '\0';
  puVar24[0xd] = '\0';
  puVar24[0xe] = '\0';
  puVar24[0xf] = '\0';
  puVar24[0x10] = '\0';
  puVar24[0x11] = '\0';
  puVar24[0x12] = '\0';
  puVar24[0x13] = '\0';
  puVar24[0x14] = '\0';
  puVar24[0x15] = '\0';
  puVar24[0x16] = '\0';
  puVar24[0x17] = '\0';
  puVar24[0x18] = '\0';
  puVar24[0x19] = '\0';
  puVar24[0x1a] = '\0';
  puVar24[0x1b] = '\0';
  puVar24[0x1c] = '\0';
  puVar24[0x1d] = '\0';
  puVar24[0x1e] = '\0';
  puVar24[0x1f] = '\0';
  if (-1 < (int)uVar23) {
    lVar28 = (longlong)(int)uVar23;
    puVar27 = (ushort *)(local_d0 + lVar28 * 0x10 + 10);
    lVar21 = lVar28 * 2;
    do {
      uVar17 = uVar9;
      if ((int)uVar23 < local_78.ArrayNum) {
        uVar17 = ~uVar23 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (local_e8 = lVar28, local_e0 = (longlong)local_78.ArrayNum,
         bVar7 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar4 = (code *)swi(3);
        pFVar10 = (FPlaybackCapabilityPtr *)(*pcVar4)();
        return pFVar10;
      }
      FVar13 = (ForElementType<unsigned_short>)&local_78;
      if (local_78.AllocatorInstance.SecondaryData != (ForElementType<unsigned_short>)0x0) {
        FVar13 = local_78.AllocatorInstance.SecondaryData;
      }
      puVar24 = puVar20;
      if (puVar27[-1] != 0xffff) {
        puVar24 = puVar26 + puVar27[-1];
      }
      memmove(this->Memory + *(ushort *)(lVar21 + (longlong)FVar13),puVar24,(ulonglong)*puVar27);
      lVar28 = lVar28 + -1;
      lVar21 = lVar21 + -2;
      puVar27 = puVar27 + -8;
      uVar23 = uVar23 - 1;
      uVar14 = local_a8;
    } while (-1 < (int)uVar23);
  }
  local_b8 = (FPlaybackCapabilitiesImpl *)this->Memory;
  lVar21 = (ulonglong)this->Num - 1;
  uVar23 = this->Num - 1;
  if ((longlong)uVar14 < lVar21) {
    puVar27 = (ushort *)((longlong)local_b8 + lVar21 * 0x10 + 8);
    local_b0 = (bool *)((longlong)local_d0 - (longlong)local_b8);
    uVar16 = local_a0;
    do {
      puVar1 = (undefined8 *)((longlong)local_b0 + -0x18 + (longlong)puVar27);
      uVar5 = puVar1[1];
      *(undefined8 *)(puVar27 + -4) = *puVar1;
      *(undefined8 *)puVar27 = uVar5;
      uVar17 = uVar19;
      if ((int)uVar23 < local_78.ArrayNum) {
        uVar17 = ~uVar23 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (local_e8 = lVar21, local_e0 = (longlong)local_78.ArrayNum,
         bVar7 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar4 = (code *)swi(3);
        pFVar10 = (FPlaybackCapabilityPtr *)(*pcVar4)();
        return pFVar10;
      }
      FVar13 = (ForElementType<unsigned_short>)&local_78;
      if (local_78.AllocatorInstance.SecondaryData != (ForElementType<unsigned_short>)0x0) {
        FVar13 = local_78.AllocatorInstance.SecondaryData;
      }
      uVar3 = *(ushort *)((longlong)FVar13 + lVar21 * 2);
      if (this->Memory + uVar3 < this->Memory) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("false",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\RelativePtr.h"
                           ,0x46,
                           L"Attempting to assign a negative offset to an unsigned relative pointer!!"
                          );
        if (bVar7) {
          pcVar4 = (code *)swi(3);
          pFVar10 = (FPlaybackCapabilityPtr *)(*pcVar4)();
          return pFVar10;
        }
      }
      else {
        uVar16 = uVar3;
        if ((uVar3 == 0xffff) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("OffsetPtr >= 0 && OffsetPtr < std::numeric_limits<OffsetType>::max()"
                               ,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\RelativePtr.h"
                               ,0x3a,
                               L"Attempting to create a relative pointer outside the bounds of its capacity."
                              ), bVar7)) {
          pcVar4 = (code *)swi(3);
          pFVar10 = (FPlaybackCapabilityPtr *)(*pcVar4)();
          return pFVar10;
        }
      }
      uVar23 = uVar23 - 1;
      *puVar27 = uVar16;
      lVar21 = lVar21 + -1;
      puVar27 = puVar27 + -8;
    } while ((longlong)local_a8 < lVar21);
  }
  lVar21 = (longlong)(int)uVar23;
  pbVar25 = (bool *)((longlong)local_b8 + lVar21 * 0x10);
  uVar17 = uVar19;
  if ((int)uVar23 < local_78.ArrayNum) {
    uVar17 = ~uVar23 >> 0x1f;
  }
  local_b0 = pbVar25;
  if ((uVar17 == 0) &&
     (local_e8 = lVar21, local_e0 = (longlong)local_78.ArrayNum,
     bVar7 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld"), bVar7
     )) {
    pcVar4 = (code *)swi(3);
    pFVar10 = (FPlaybackCapabilityPtr *)(*pcVar4)();
    return pFVar10;
  }
  FVar13 = (ForElementType<unsigned_short>)&local_78;
  if (local_78.AllocatorInstance.SecondaryData != (ForElementType<unsigned_short>)0x0) {
    FVar13 = local_78.AllocatorInstance.SecondaryData;
  }
  uVar16 = *(ushort *)((longlong)FVar13 + lVar21 * 2);
  puVar26 = this->Memory;
  pbVar25[0xf] = false;
  pbVar25[0] = false;
  pbVar25[1] = false;
  pbVar25[2] = false;
  pbVar25[3] = false;
  pbVar25[4] = false;
  pbVar25[5] = false;
  pbVar25[6] = false;
  pbVar25[7] = false;
  ((TRelativePtr<void,unsigned_short> *)(pbVar25 + 8))->Offset = 0xffff;
  pbVar25[10] = false;
  pbVar25[0xb] = false;
  pbVar25[0xc] = false;
  pbVar25[0xd] = false;
  pbVar25[0xe] = false;
  TRelativePtr<void,unsigned_short>::Reset
            ((TRelativePtr<void,unsigned_short> *)(pbVar25 + 8),this->Memory,puVar26 + uVar16);
  pbVar25[10] = true;
  pbVar25[0xb] = false;
  pbVar25[0xc] = true;
  pbVar25[0xd] = false;
  pbVar25[0xe] = false;
  puVar11 = ::operator_new(0x10);
  puVar24 = puVar20;
  if (puVar11 != (uchar *)0x0) {
    *(uchar **)(puVar11 + 8) = puVar26 + uVar16;
    *(undefined ***)puVar11 =
         &
         ___7__TPlaybackCapabilityDebuggingTypedPtr_UFSequenceDirectorPlaybackCapability_MovieScene_UE___MovieScene_UE__6B_
    ;
    puVar24 = puVar11;
  }
  uVar23 = uVar23 - 1;
  *(uchar **)pbVar25 = puVar24;
  if (-1 < (int)uVar23) {
    lVar21 = (longlong)(int)uVar23;
    puVar26 = (uchar *)((longlong)local_b8 + lVar21 * 0x10);
    local_d0 = local_d0 + -(longlong)local_b8;
    uVar14 = lVar21 * 2;
    uVar16 = local_9e;
    do {
      uVar5 = *(undefined8 *)(puVar26 + (longlong)local_d0 + 8);
      *(undefined8 *)puVar26 = *(undefined8 *)(puVar26 + (longlong)local_d0);
      *(undefined8 *)(puVar26 + 8) = uVar5;
      uVar17 = uVar19;
      if ((int)uVar23 < local_78.ArrayNum) {
        uVar17 = ~uVar23 >> 0x1f;
      }
      local_c0 = uVar14;
      if ((uVar17 == 0) &&
         (local_e8 = lVar21, local_e0 = (longlong)local_78.ArrayNum,
         bVar7 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar4 = (code *)swi(3);
        pFVar10 = (FPlaybackCapabilityPtr *)(*pcVar4)();
        return pFVar10;
      }
      FVar13 = (ForElementType<unsigned_short>)&local_78;
      if (local_78.AllocatorInstance.SecondaryData != (ForElementType<unsigned_short>)0x0) {
        FVar13 = local_78.AllocatorInstance.SecondaryData;
      }
      uVar3 = *(ushort *)(uVar14 + (longlong)FVar13);
      if (this->Memory + uVar3 < this->Memory) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("false",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\RelativePtr.h"
                           ,0x46,
                           L"Attempting to assign a negative offset to an unsigned relative pointer!!"
                          );
        if (bVar7) {
          pcVar4 = (code *)swi(3);
          pFVar10 = (FPlaybackCapabilityPtr *)(*pcVar4)();
          return pFVar10;
        }
      }
      else {
        uVar16 = uVar3;
        if ((uVar3 == 0xffff) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("OffsetPtr >= 0 && OffsetPtr < std::numeric_limits<OffsetType>::max()"
                               ,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\RelativePtr.h"
                               ,0x3a,
                               L"Attempting to create a relative pointer outside the bounds of its capacity."
                              ), bVar7)) {
          pcVar4 = (code *)swi(3);
          pFVar10 = (FPlaybackCapabilityPtr *)(*pcVar4)();
          return pFVar10;
        }
      }
      lVar21 = lVar21 + -1;
      uVar14 = local_c0 - 2;
      *(ushort *)(puVar26 + 8) = uVar16;
      puVar26 = puVar26 + -0x10;
      uVar23 = uVar23 - 1;
      pbVar25 = local_b0;
      local_c0 = uVar14;
    } while (-1 < (int)uVar23);
  }
  if ((local_d8 != '\0') && (local_c8 != (uchar *)0x0)) {
    FMemory::Free(local_c8);
  }
  local_88.InterfaceCast =
       TPlaybackCapabilityInterfaceCast<UE::MovieScene::FSequenceDirectorPlaybackCapability>::
       InterfaceCast;
  local_88.Destructor =
       TPlaybackCapabilityDestructor<UE::MovieScene::FSequenceDirectorPlaybackCapability>::Destroy;
  TArray<UE::MovieScene::FPlaybackCapabilityHelpers,TSizedDefaultAllocator<32>_>::Insert
            (&this->Helpers,&local_88,(int)local_98);
  pFVar10 = local_90;
  if (*(ushort *)(pbVar25 + 8) != 0xffff) {
    puVar20 = this->Memory + *(ushort *)(pbVar25 + 8);
  }
  local_90->Ptr = puVar20 + pbVar25[0xd];
  local_90->StorageMode = pbVar25[0xe];
  if (local_78.AllocatorInstance.SecondaryData != (ForElementType<unsigned_short>)0x0) {
    FMemory::Free((void *)local_78.AllocatorInstance.SecondaryData);
  }
  return pFVar10;
}

// AddCapability<UE::UMG::FUMGLegacyPlayerProvider,UE::MovieScene::ILegacyPlayerProviderPlaybackCapability,FWidgetAnimationState_*> @ 1468e19b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

FPlaybackCapabilityPtr * __thiscall
UE::MovieScene::FPlaybackCapabilitiesImpl::
AddCapability<UE::UMG::FUMGLegacyPlayerProvider,UE::MovieScene::ILegacyPlayerProviderPlaybackCapability,FWidgetAnimationState_*>
          (FPlaybackCapabilitiesImpl *this,FPlaybackCapabilityPtr *__return_storage_ptr__,
          uint param_1,FWidgetAnimationState **param_2)

{
  undefined8 *puVar1;
  byte bVar2;
  ushort uVar3;
  FWidgetAnimationState *pFVar4;
  code *pcVar5;
  undefined8 uVar6;
  int iVar7;
  bool bVar8;
  byte bVar9;
  uint uVar10;
  FPlaybackCapabilityPtr *pFVar11;
  uchar *puVar12;
  byte *pbVar13;
  ForElementType<unsigned_short> FVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  ushort uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uchar *puVar21;
  longlong lVar22;
  ulonglong uVar23;
  uint uVar24;
  uchar *puVar25;
  FWidgetAnimationState **ppFVar26;
  uchar *puVar27;
  ushort *puVar28;
  longlong lVar29;
  undefined1 auStack_108 [32];
  longlong local_e8;
  longlong local_e0;
  char local_d8;
  uchar *local_d0;
  uchar *local_c8;
  ulonglong local_c0;
  FPlaybackCapabilitiesImpl *local_b8;
  FWidgetAnimationState **local_b0;
  ulonglong local_a8;
  ushort local_a0;
  ushort local_9e;
  ulonglong local_98;
  FPlaybackCapabilityPtr *local_90;
  FPlaybackCapabilityHelpers local_88;
  TArray<unsigned_short,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> local_78;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_108;
  local_b8 = this;
  local_b0 = param_2;
  local_90 = __return_storage_ptr__;
  if (((this->AllCapabilities & param_1) != 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(AllCapabilities & CapabilityBit) == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\MovieScenePlaybackCapabilities.h"
                         ,0x117,L"Capability already exists!"), bVar8)) {
    pcVar5 = (code *)swi(3);
    pFVar11 = (FPlaybackCapabilityPtr *)(*pcVar5)();
    return pFVar11;
  }
  this->AllCapabilities = this->AllCapabilities | param_1;
  bVar9 = this->Num;
  uVar16 = (ulonglong)bVar9;
  uVar24 = param_1 - 1 & this->AllCapabilities;
  puVar27 = this->Memory;
  uVar15 = (ulonglong)uVar24 - ((ulonglong)(uVar24 >> 1) & 0x5555555555555555);
  local_c0 = 8;
  uVar15 = (uVar15 >> 2 & 0x3333333333333333) + (uVar15 & 0x3333333333333333);
  local_98 = ((uVar15 >> 4) + uVar15 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
  if (bVar9 != 0) {
    pbVar13 = puVar27 + 0xc;
    uVar15 = 8;
    do {
      bVar2 = *pbVar13;
      pbVar13 = pbVar13 + 0x10;
      local_c0 = (ulonglong)bVar2;
      if (bVar2 < uVar15) {
        local_c0 = uVar15;
      }
      uVar16 = uVar16 - 1;
      uVar15 = local_c0;
    } while (uVar16 != 0);
  }
  uVar15 = local_c0;
  puVar21 = (uchar *)0x0;
  uVar20 = 0;
  uVar24 = bVar9 + 1;
  local_78.AllocatorInstance.SecondaryData = (ForElementType<unsigned_short>)0x0;
  local_78.ArrayNum = 0;
  local_78.ArrayMax = 0x10;
  local_c8 = (uchar *)CONCAT44(local_c8._4_4_,uVar24);
  local_d0 = puVar27;
  TArray<unsigned_short,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>::SetNum
            (&local_78,uVar24,Default);
  local_a8 = local_98 & 0xffffffff;
  lVar22 = (ulonglong)uVar24 << 4;
  uVar10 = 0;
  uVar18 = uVar20;
  if (local_a8 != 0) {
    puVar28 = (ushort *)(puVar27 + 10);
    uVar16 = local_98 & 0xffffffff;
    puVar27 = puVar21;
    puVar25 = puVar21;
    do {
      uVar18 = (uint)puVar27;
      uVar23 = lVar22 + -1 + (ulonglong)(byte)puVar28[1] & ~((ulonglong)(byte)puVar28[1] - 1);
      uVar24 = uVar10;
      if ((int)uVar18 < local_78.ArrayNum) {
        uVar24 = ~uVar18 >> 0x1f;
      }
      if (uVar24 == 0) {
        local_e8 = (longlong)(int)uVar18;
        local_e0 = (longlong)local_78.ArrayNum;
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar8) {
          pcVar5 = (code *)swi(3);
          pFVar11 = (FPlaybackCapabilityPtr *)(*pcVar5)();
          return pFVar11;
        }
      }
      FVar14 = (ForElementType<unsigned_short>)&local_78;
      if (local_78.AllocatorInstance.SecondaryData != (ForElementType<unsigned_short>)0x0) {
        FVar14 = local_78.AllocatorInstance.SecondaryData;
      }
      uVar18 = uVar18 + 1;
      puVar27 = (uchar *)(ulonglong)uVar18;
      *(short *)((longlong)FVar14 + (longlong)puVar25 * 2) = (short)uVar23;
      puVar25 = puVar25 + 1;
      uVar17 = *puVar28;
      puVar28 = puVar28 + 8;
      lVar22 = uVar23 + uVar17;
    } while ((longlong)puVar25 < (longlong)uVar16);
    this = local_b8;
    uVar24 = (uint)local_c8;
  }
  uVar16 = lVar22 + 7U & 0xfffffffffffffff8;
  uVar19 = uVar10;
  if ((int)uVar18 < local_78.ArrayNum) {
    uVar19 = ~uVar18 >> 0x1f;
  }
  if (uVar19 == 0) {
    local_e8 = (longlong)(int)uVar18;
    local_e0 = (longlong)local_78.ArrayNum;
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar8) {
      pcVar5 = (code *)swi(3);
      pFVar11 = (FPlaybackCapabilityPtr *)(*pcVar5)();
      return pFVar11;
    }
  }
  FVar14 = (ForElementType<unsigned_short>)&local_78;
  if (local_78.AllocatorInstance.SecondaryData != (ForElementType<unsigned_short>)0x0) {
    FVar14 = local_78.AllocatorInstance.SecondaryData;
  }
  uVar19 = uVar18 + 1;
  *(short *)((longlong)FVar14 + (longlong)(int)uVar18 * 2) = (short)uVar16;
  uVar16 = uVar16 + 0x10;
  if ((int)uVar19 < (int)uVar24) {
    iVar7 = (uint)local_c8;
    lVar29 = (longlong)(int)uVar19;
    puVar28 = (ushort *)(local_d0 + lVar29 * 0x10 + -6);
    lVar22 = lVar29 * 2;
    do {
      uVar16 = (uVar16 - 1) + (ulonglong)(byte)puVar28[1] & ~((ulonglong)(byte)puVar28[1] - 1);
      uVar24 = 0;
      if ((int)uVar19 < local_78.ArrayNum) {
        uVar24 = ~uVar19 >> 0x1f;
      }
      if ((uVar24 == 0) &&
         (local_e8 = lVar29, local_e0 = (longlong)local_78.ArrayNum,
         bVar8 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        pFVar11 = (FPlaybackCapabilityPtr *)(*pcVar5)();
        return pFVar11;
      }
      FVar14 = (ForElementType<unsigned_short>)&local_78;
      if (local_78.AllocatorInstance.SecondaryData != (ForElementType<unsigned_short>)0x0) {
        FVar14 = local_78.AllocatorInstance.SecondaryData;
      }
      uVar19 = uVar19 + 1;
      lVar29 = lVar29 + 1;
      *(short *)((longlong)FVar14 + lVar22) = (short)uVar16;
      lVar22 = lVar22 + 2;
      uVar17 = *puVar28;
      puVar28 = puVar28 + 8;
      uVar16 = uVar16 + uVar17;
      uVar15 = local_c0;
      this = local_b8;
    } while ((int)uVar19 < iVar7);
  }
  if ((0xff < uVar15) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("RequiredAlignment <= 0XFF",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\MovieScenePlaybackCapabilities.h"
                         ,0x155,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    pFVar11 = (FPlaybackCapabilityPtr *)(*pcVar5)();
    return pFVar11;
  }
  puVar27 = this->Memory;
  local_c8 = puVar27;
  if ((this->Alignment < uVar15) || (this->Capacity < uVar16)) {
    uVar23 = (ulonglong)this->Capacity * 2;
    local_d8 = '\x01';
    if (uVar23 < uVar16) {
      uVar23 = uVar16 & 0xffff;
    }
    this->Capacity = (ushort)uVar23;
    puVar25 = FMemory::Malloc(uVar23 & 0xffff,(uint)uVar15);
    this->Memory = puVar25;
  }
  else {
    local_d8 = '\0';
  }
  uVar15 = local_a8;
  bVar9 = this->Num + 1;
  this->Num = bVar9;
  lVar22 = (ulonglong)bVar9 - 1;
  uVar24 = bVar9 - 1;
  if ((longlong)local_a8 < lVar22) {
    puVar28 = (ushort *)(local_d0 + lVar22 * 0x10 + -6);
    do {
      uVar18 = uVar10;
      if ((int)uVar24 < local_78.ArrayNum) {
        uVar18 = ~uVar24 >> 0x1f;
      }
      if (uVar18 == 0) {
        local_e8 = (longlong)(int)uVar24;
        local_e0 = (longlong)local_78.ArrayNum;
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar8) {
          pcVar5 = (code *)swi(3);
          pFVar11 = (FPlaybackCapabilityPtr *)(*pcVar5)();
          return pFVar11;
        }
      }
      FVar14 = (ForElementType<unsigned_short>)&local_78;
      if (local_78.AllocatorInstance.SecondaryData != (ForElementType<unsigned_short>)0x0) {
        FVar14 = local_78.AllocatorInstance.SecondaryData;
      }
      puVar25 = puVar21;
      if (puVar28[-1] != 0xffff) {
        puVar25 = puVar27 + puVar28[-1];
      }
      memmove(this->Memory + *(ushort *)((longlong)FVar14 + lVar22 * 2),puVar25,(ulonglong)*puVar28)
      ;
      uVar24 = uVar24 - 1;
      lVar22 = lVar22 + -1;
      puVar28 = puVar28 + -8;
    } while ((longlong)uVar15 < lVar22);
  }
  uVar18 = uVar10;
  if ((int)uVar24 < local_78.ArrayNum) {
    uVar18 = ~uVar24 >> 0x1f;
  }
  if (uVar18 == 0) {
    local_e8 = (longlong)(int)uVar24;
    local_e0 = (longlong)local_78.ArrayNum;
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar8) {
      pcVar5 = (code *)swi(3);
      pFVar11 = (FPlaybackCapabilityPtr *)(*pcVar5)();
      return pFVar11;
    }
  }
  FVar14 = (ForElementType<unsigned_short>)&local_78;
  if (local_78.AllocatorInstance.SecondaryData != (ForElementType<unsigned_short>)0x0) {
    FVar14 = local_78.AllocatorInstance.SecondaryData;
  }
  pFVar4 = *local_b0;
  uVar16 = (ulonglong)*(ushort *)((longlong)FVar14 + (longlong)(int)uVar24 * 2);
  puVar27 = this->Memory;
  *(undefined ***)(puVar27 + uVar16) = &___7FUMGLegacyPlayerProvider_UMG_UE__6B_;
  *(FWidgetAnimationState **)(puVar27 + uVar16 + 8) = pFVar4;
  if ((pFVar4 == (FWidgetAnimationState *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("State",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Private\\Animation\\WidgetAnimationState.cpp"
                         ,0x2f,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    pFVar11 = (FPlaybackCapabilityPtr *)(*pcVar5)();
    return pFVar11;
  }
  puVar27 = local_c8;
  uVar24 = uVar24 - 1;
  if (-1 < (int)uVar24) {
    lVar29 = (longlong)(int)uVar24;
    puVar28 = (ushort *)(local_d0 + lVar29 * 0x10 + 10);
    lVar22 = lVar29 * 2;
    do {
      uVar18 = uVar10;
      if ((int)uVar24 < local_78.ArrayNum) {
        uVar18 = ~uVar24 >> 0x1f;
      }
      if ((uVar18 == 0) &&
         (local_e8 = lVar29, local_e0 = (longlong)local_78.ArrayNum,
         bVar8 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        pFVar11 = (FPlaybackCapabilityPtr *)(*pcVar5)();
        return pFVar11;
      }
      FVar14 = (ForElementType<unsigned_short>)&local_78;
      if (local_78.AllocatorInstance.SecondaryData != (ForElementType<unsigned_short>)0x0) {
        FVar14 = local_78.AllocatorInstance.SecondaryData;
      }
      puVar25 = puVar21;
      if (puVar28[-1] != 0xffff) {
        puVar25 = puVar27 + puVar28[-1];
      }
      memmove(this->Memory + *(ushort *)(lVar22 + (longlong)FVar14),puVar25,(ulonglong)*puVar28);
      lVar29 = lVar29 + -1;
      lVar22 = lVar22 + -2;
      puVar28 = puVar28 + -8;
      uVar24 = uVar24 - 1;
      uVar15 = local_a8;
    } while (-1 < (int)uVar24);
  }
  local_b8 = (FPlaybackCapabilitiesImpl *)this->Memory;
  lVar22 = (ulonglong)this->Num - 1;
  uVar24 = this->Num - 1;
  if ((longlong)uVar15 < lVar22) {
    puVar28 = (ushort *)((longlong)local_b8 + lVar22 * 0x10 + 8);
    local_b0 = (FWidgetAnimationState **)((longlong)local_d0 - (longlong)local_b8);
    uVar17 = local_a0;
    do {
      puVar1 = (undefined8 *)((longlong)local_b0 + -0x18 + (longlong)puVar28);
      uVar6 = puVar1[1];
      *(undefined8 *)(puVar28 + -4) = *puVar1;
      *(undefined8 *)puVar28 = uVar6;
      uVar18 = uVar20;
      if ((int)uVar24 < local_78.ArrayNum) {
        uVar18 = ~uVar24 >> 0x1f;
      }
      if ((uVar18 == 0) &&
         (local_e8 = lVar22, local_e0 = (longlong)local_78.ArrayNum,
         bVar8 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        pFVar11 = (FPlaybackCapabilityPtr *)(*pcVar5)();
        return pFVar11;
      }
      FVar14 = (ForElementType<unsigned_short>)&local_78;
      if (local_78.AllocatorInstance.SecondaryData != (ForElementType<unsigned_short>)0x0) {
        FVar14 = local_78.AllocatorInstance.SecondaryData;
      }
      uVar3 = *(ushort *)((longlong)FVar14 + lVar22 * 2);
      if (this->Memory + uVar3 < this->Memory) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("false",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\RelativePtr.h"
                           ,0x46,
                           L"Attempting to assign a negative offset to an unsigned relative pointer!!"
                          );
        if (bVar8) {
          pcVar5 = (code *)swi(3);
          pFVar11 = (FPlaybackCapabilityPtr *)(*pcVar5)();
          return pFVar11;
        }
      }
      else {
        uVar17 = uVar3;
        if ((uVar3 == 0xffff) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("OffsetPtr >= 0 && OffsetPtr < std::numeric_limits<OffsetType>::max()"
                               ,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\RelativePtr.h"
                               ,0x3a,
                               L"Attempting to create a relative pointer outside the bounds of its capacity."
                              ), bVar8)) {
          pcVar5 = (code *)swi(3);
          pFVar11 = (FPlaybackCapabilityPtr *)(*pcVar5)();
          return pFVar11;
        }
      }
      uVar24 = uVar24 - 1;
      *puVar28 = uVar17;
      lVar22 = lVar22 + -1;
      puVar28 = puVar28 + -8;
    } while ((longlong)local_a8 < lVar22);
  }
  lVar22 = (longlong)(int)uVar24;
  ppFVar26 = (FWidgetAnimationState **)((longlong)local_b8 + lVar22 * 0x10);
  uVar18 = uVar20;
  if ((int)uVar24 < local_78.ArrayNum) {
    uVar18 = ~uVar24 >> 0x1f;
  }
  local_b0 = ppFVar26;
  if ((uVar18 == 0) &&
     (local_e8 = lVar22, local_e0 = (longlong)local_78.ArrayNum,
     bVar8 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld"), bVar8
     )) {
    pcVar5 = (code *)swi(3);
    pFVar11 = (FPlaybackCapabilityPtr *)(*pcVar5)();
    return pFVar11;
  }
  FVar14 = (ForElementType<unsigned_short>)&local_78;
  if (local_78.AllocatorInstance.SecondaryData != (ForElementType<unsigned_short>)0x0) {
    FVar14 = local_78.AllocatorInstance.SecondaryData;
  }
  uVar17 = *(ushort *)((longlong)FVar14 + lVar22 * 2);
  puVar27 = this->Memory;
  *(uchar *)((longlong)ppFVar26 + 0xf) = '\0';
  *(uchar *)((longlong)ppFVar26 + 0) = '\0';
  *(uchar *)((longlong)ppFVar26 + 1) = '\0';
  *(uchar *)((longlong)ppFVar26 + 2) = '\0';
  *(uchar *)((longlong)ppFVar26 + 3) = '\0';
  *(uchar *)((longlong)ppFVar26 + 4) = '\0';
  *(uchar *)((longlong)ppFVar26 + 5) = '\0';
  *(uchar *)((longlong)ppFVar26 + 6) = '\0';
  *(uchar *)((longlong)ppFVar26 + 7) = '\0';
  ((TRelativePtr<void,unsigned_short> *)((longlong)ppFVar26 + 8))->Offset = 0xffff;
  *(uchar *)((longlong)ppFVar26 + 10) = '\0';
  *(uchar *)((longlong)ppFVar26 + 0xb) = '\0';
  *(uchar *)((longlong)ppFVar26 + 0xc) = '\0';
  *(uchar *)((longlong)ppFVar26 + 0xd) = '\0';
  *(uchar *)((longlong)ppFVar26 + 0xe) = '\0';
  TRelativePtr<void,unsigned_short>::Reset
            ((TRelativePtr<void,unsigned_short> *)((longlong)ppFVar26 + 8),this->Memory,
             puVar27 + uVar17);
  *(uchar *)((longlong)ppFVar26 + 10) = '\x10';
  *(uchar *)((longlong)ppFVar26 + 0xb) = '\0';
  *(uchar *)((longlong)ppFVar26 + 0xc) = '\b';
  *(uchar *)((longlong)ppFVar26 + 0xd) = '\0';
  *(uchar *)((longlong)ppFVar26 + 0xe) = '\0';
  puVar12 = ::operator_new(0x10);
  puVar25 = puVar21;
  if (puVar12 != (uchar *)0x0) {
    *(uchar **)(puVar12 + 8) = puVar27 + uVar17;
    *(undefined ***)puVar12 =
         &
         ___7__TPlaybackCapabilityDebuggingTypedPtr_UFUMGLegacyPlayerProvider_UMG_UE___MovieScene_UE__6B_
    ;
    puVar25 = puVar12;
  }
  uVar24 = uVar24 - 1;
  *ppFVar26 = (FWidgetAnimationState *)puVar25;
  if (-1 < (int)uVar24) {
    lVar22 = (longlong)(int)uVar24;
    puVar27 = (uchar *)((longlong)local_b8 + lVar22 * 0x10);
    local_d0 = local_d0 + -(longlong)local_b8;
    uVar15 = lVar22 * 2;
    uVar17 = local_9e;
    do {
      uVar6 = *(undefined8 *)(puVar27 + (longlong)local_d0 + 8);
      *(undefined8 *)puVar27 = *(undefined8 *)(puVar27 + (longlong)local_d0);
      *(undefined8 *)(puVar27 + 8) = uVar6;
      uVar18 = uVar20;
      if ((int)uVar24 < local_78.ArrayNum) {
        uVar18 = ~uVar24 >> 0x1f;
      }
      local_c0 = uVar15;
      if ((uVar18 == 0) &&
         (local_e8 = lVar22, local_e0 = (longlong)local_78.ArrayNum,
         bVar8 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        pFVar11 = (FPlaybackCapabilityPtr *)(*pcVar5)();
        return pFVar11;
      }
      FVar14 = (ForElementType<unsigned_short>)&local_78;
      if (local_78.AllocatorInstance.SecondaryData != (ForElementType<unsigned_short>)0x0) {
        FVar14 = local_78.AllocatorInstance.SecondaryData;
      }
      uVar3 = *(ushort *)(uVar15 + (longlong)FVar14);
      if (this->Memory + uVar3 < this->Memory) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("false",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\RelativePtr.h"
                           ,0x46,
                           L"Attempting to assign a negative offset to an unsigned relative pointer!!"
                          );
        if (bVar8) {
          pcVar5 = (code *)swi(3);
          pFVar11 = (FPlaybackCapabilityPtr *)(*pcVar5)();
          return pFVar11;
        }
      }
      else {
        uVar17 = uVar3;
        if ((uVar3 == 0xffff) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("OffsetPtr >= 0 && OffsetPtr < std::numeric_limits<OffsetType>::max()"
                               ,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\RelativePtr.h"
                               ,0x3a,
                               L"Attempting to create a relative pointer outside the bounds of its capacity."
                              ), bVar8)) {
          pcVar5 = (code *)swi(3);
          pFVar11 = (FPlaybackCapabilityPtr *)(*pcVar5)();
          return pFVar11;
        }
      }
      lVar22 = lVar22 + -1;
      uVar15 = local_c0 - 2;
      *(ushort *)(puVar27 + 8) = uVar17;
      puVar27 = puVar27 + -0x10;
      uVar24 = uVar24 - 1;
      ppFVar26 = local_b0;
      local_c0 = uVar15;
    } while (-1 < (int)uVar24);
  }
  if ((local_d8 != '\0') && (local_c8 != (uchar *)0x0)) {
    FMemory::Free(local_c8);
  }
  local_88.InterfaceCast =
       TPlaybackCapabilityInterfaceCast<UE::UMG::FUMGLegacyPlayerProvider>::InterfaceCast;
  local_88.Destructor = TPlaybackCapabilityDestructor<UE::UMG::FUMGLegacyPlayerProvider>::Destroy;
  TArray<UE::MovieScene::FPlaybackCapabilityHelpers,TSizedDefaultAllocator<32>_>::Insert
            (&this->Helpers,&local_88,(int)local_98);
  pFVar11 = local_90;
  if (*(ushort *)((longlong)ppFVar26 + 8) != 0xffff) {
    puVar21 = this->Memory + *(ushort *)((longlong)ppFVar26 + 8);
  }
  local_90->Ptr = puVar21 + *(byte *)((longlong)ppFVar26 + 0xd);
  local_90->StorageMode = *(EPlaybackCapabilityStorageMode *)((longlong)ppFVar26 + 0xe);
  if (local_78.AllocatorInstance.SecondaryData != (ForElementType<unsigned_short>)0x0) {
    FMemory::Free((void *)local_78.AllocatorInstance.SecondaryData);
  }
  return pFVar11;
}

