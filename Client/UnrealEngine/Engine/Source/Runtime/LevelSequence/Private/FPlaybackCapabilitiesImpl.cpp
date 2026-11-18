// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LevelSequence
// Functions: 10

// AddCapability<UE::MovieScene::FCameraCutPlaybackCapability_*,UE::MovieScene::FCameraCutPlaybackCapability,UE::MovieScene::FCameraCutPlaybackCapability_*> @ 146c48b50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

FPlaybackCapabilityPtr * __thiscall
UE::MovieScene::FPlaybackCapabilitiesImpl::
AddCapability<UE::MovieScene::FCameraCutPlaybackCapability_*,UE::MovieScene::FCameraCutPlaybackCapability,UE::MovieScene::FCameraCutPlaybackCapability_*>
          (FPlaybackCapabilitiesImpl *this,FPlaybackCapabilityPtr *__return_storage_ptr__,
          uint param_1,FCameraCutPlaybackCapability **param_2)

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
  FCameraCutPlaybackCapability **ppFVar25;
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
  FCameraCutPlaybackCapability **local_b0;
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
  uVar14 = (uVar14 >> 2 & 0x3333333333333333) + (uVar14 & 0x3333333333333333);
  local_98 = ((uVar14 >> 4) + uVar14 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
  local_c0 = 8;
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
  uVar15 = uVar15 + 8;
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
  uVar17 = uVar23 - 1;
  *(FCameraCutPlaybackCapability **)
   (this->Memory + *(ushort *)((longlong)FVar13 + (longlong)(int)uVar23 * 2)) = *local_b0;
  if (-1 < (int)uVar17) {
    lVar28 = (longlong)(int)uVar17;
    puVar27 = (ushort *)(local_d0 + lVar28 * 0x10 + 10);
    lVar21 = lVar28 * 2;
    do {
      uVar23 = uVar9;
      if ((int)uVar17 < local_78.ArrayNum) {
        uVar23 = ~uVar17 >> 0x1f;
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
      puVar24 = puVar20;
      if (puVar27[-1] != 0xffff) {
        puVar24 = puVar26 + puVar27[-1];
      }
      memmove(this->Memory + *(ushort *)(lVar21 + (longlong)FVar13),puVar24,(ulonglong)*puVar27);
      lVar28 = lVar28 + -1;
      lVar21 = lVar21 + -2;
      puVar27 = puVar27 + -8;
      uVar17 = uVar17 - 1;
      uVar14 = local_a8;
    } while (-1 < (int)uVar17);
  }
  local_b8 = (FPlaybackCapabilitiesImpl *)this->Memory;
  lVar21 = (ulonglong)this->Num - 1;
  uVar23 = this->Num - 1;
  if ((longlong)uVar14 < lVar21) {
    puVar27 = (ushort *)((longlong)local_b8 + lVar21 * 0x10 + 8);
    local_b0 = (FCameraCutPlaybackCapability **)((longlong)local_d0 - (longlong)local_b8);
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
  ppFVar25 = (FCameraCutPlaybackCapability **)((longlong)local_b8 + lVar21 * 0x10);
  uVar17 = uVar19;
  if ((int)uVar23 < local_78.ArrayNum) {
    uVar17 = ~uVar23 >> 0x1f;
  }
  local_b0 = ppFVar25;
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
  *(uchar *)((longlong)ppFVar25 + 0xf) = '\0';
  *(uchar *)((longlong)ppFVar25 + 0) = '\0';
  *(uchar *)((longlong)ppFVar25 + 1) = '\0';
  *(uchar *)((longlong)ppFVar25 + 2) = '\0';
  *(uchar *)((longlong)ppFVar25 + 3) = '\0';
  *(uchar *)((longlong)ppFVar25 + 4) = '\0';
  *(uchar *)((longlong)ppFVar25 + 5) = '\0';
  *(uchar *)((longlong)ppFVar25 + 6) = '\0';
  *(uchar *)((longlong)ppFVar25 + 7) = '\0';
  ((TRelativePtr<void,unsigned_short> *)((longlong)ppFVar25 + 8))->Offset = 0xffff;
  *(uchar *)((longlong)ppFVar25 + 10) = '\0';
  *(uchar *)((longlong)ppFVar25 + 0xb) = '\0';
  *(uchar *)((longlong)ppFVar25 + 0xc) = '\0';
  *(uchar *)((longlong)ppFVar25 + 0xd) = '\0';
  *(uchar *)((longlong)ppFVar25 + 0xe) = '\0';
  TRelativePtr<void,unsigned_short>::Reset
            ((TRelativePtr<void,unsigned_short> *)((longlong)ppFVar25 + 8),this->Memory,
             puVar26 + uVar16);
  *(uchar *)((longlong)ppFVar25 + 10) = '\b';
  *(uchar *)((longlong)ppFVar25 + 0xb) = '\0';
  *(uchar *)((longlong)ppFVar25 + 0xc) = '\b';
  *(uchar *)((longlong)ppFVar25 + 0xd) = '\0';
  *(uchar *)((longlong)ppFVar25 + 0xe) = '\x01';
  puVar11 = ::operator_new(0x10);
  puVar24 = puVar20;
  if (puVar11 != (uchar *)0x0) {
    *(uchar **)(puVar11 + 8) = puVar26 + uVar16;
    *(undefined ***)puVar11 =
         &
         ___7__TPlaybackCapabilityDebuggingTypedPtr_PEAUFCameraCutPlaybackCapability_MovieScene_UE___MovieScene_UE__6B_
    ;
    puVar24 = puVar11;
  }
  uVar23 = uVar23 - 1;
  *ppFVar25 = (FCameraCutPlaybackCapability *)puVar24;
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
      ppFVar25 = local_b0;
      local_c0 = uVar14;
    } while (-1 < (int)uVar23);
  }
  if ((local_d8 != '\0') && (local_c8 != (uchar *)0x0)) {
    FMemory::Free(local_c8);
  }
  local_88.InterfaceCast =
       TPlaybackCapabilityInterfaceCast<UE::MovieScene::FCameraCutPlaybackCapability_*>::
       InterfaceCast;
  local_88.Destructor =
       TPlaybackCapabilityDestructor<UE::MovieScene::FCameraCutPlaybackCapability_*>::Destroy;
  TArray<UE::MovieScene::FPlaybackCapabilityHelpers,TSizedDefaultAllocator<32>_>::Insert
            (&this->Helpers,&local_88,(int)local_98);
  pFVar10 = local_90;
  if (*(ushort *)((longlong)ppFVar25 + 8) != 0xffff) {
    puVar20 = this->Memory + *(ushort *)((longlong)ppFVar25 + 8);
  }
  local_90->Ptr = puVar20 + *(byte *)((longlong)ppFVar25 + 0xd);
  local_90->StorageMode = *(EPlaybackCapabilityStorageMode *)((longlong)ppFVar25 + 0xe);
  if (local_78.AllocatorInstance.SecondaryData != (ForElementType<unsigned_short>)0x0) {
    FMemory::Free((void *)local_78.AllocatorInstance.SecondaryData);
  }
  return pFVar10;
}

// OverwriteCapability<UE::MovieScene::FCameraCutPlaybackCapability_*,UE::MovieScene::FCameraCutPlaybackCapability,UE::MovieScene::FCameraCutPlaybackCapability_*> @ 146c4c9f0

bool __thiscall
UE::MovieScene::FPlaybackCapabilitiesImpl::
OverwriteCapability<UE::MovieScene::FCameraCutPlaybackCapability_*,UE::MovieScene::FCameraCutPlaybackCapability,UE::MovieScene::FCameraCutPlaybackCapability_*>
          (FPlaybackCapabilitiesImpl *this,uint param_1,FCameraCutPlaybackCapability **param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  uint uVar6;
  undefined8 *puVar7;
  longlong lVar8;
  uchar *puVar9;
  longlong *plVar10;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined1 local_res20 [8];
  
  if ((this->AllCapabilities & param_1) == 0) {
    local_res10[0] = 0;
    bVar3 = `UE::MovieScene::FPlaybackCapabilitiesImpl::
            OverwriteCapability<UE::MovieScene::FCameraCutPlaybackCapability_*,UE::MovieScene::FCameraCutPlaybackCapability,UE::MovieScene::FCameraCutPlaybackCapability_*>'
            ::__l3::<lambda_1>::operator()(local_res10);
    if (!bVar3) {
      return false;
    }
  }
  uVar5 = GetCapabilityIndex(this,param_1);
  lVar8 = (longlong)(int)uVar5;
  if ((this->Num <= (byte)uVar5) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index < Num",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\MovieScenePlaybackCapabilities.h"
                         ,0x221,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  plVar10 = (longlong *)(this->Memory + (ulonglong)(uVar5 & 0xff) * 0x10);
  if (*(char *)((longlong)plVar10 + 0xe) != '\x01') {
    local_res8[0] = 0;
    bVar3 = `UE::MovieScene::FPlaybackCapabilitiesImpl::
            OverwriteCapability<UE::MovieScene::FCameraCutPlaybackCapability_*,UE::MovieScene::FCameraCutPlaybackCapability,UE::MovieScene::FCameraCutPlaybackCapability_*>'
            ::__l6::<lambda_2>::operator()(local_res8);
    if (!bVar3) {
      return false;
    }
  }
  if ((*(short *)((longlong)plVar10 + 10) != 8) || (*(char *)((longlong)plVar10 + 0xc) != '\b')) {
    local_res20[0] = 0;
    bVar3 = `UE::MovieScene::FPlaybackCapabilitiesImpl::
            OverwriteCapability<UE::MovieScene::FCameraCutPlaybackCapability_*,UE::MovieScene::FCameraCutPlaybackCapability,UE::MovieScene::FCameraCutPlaybackCapability_*>'
            ::__l9::<lambda_3>::operator()(local_res20);
    if (!bVar3) {
      return false;
    }
  }
  if (*(ushort *)(plVar10 + 1) == 0xffff) {
    puVar9 = (uchar *)0x0;
  }
  else {
    puVar9 = this->Memory + *(ushort *)(plVar10 + 1);
  }
  uVar6 = 0;
  if ((int)uVar5 < (this->Helpers).ArrayNum) {
    uVar6 = ~uVar5 >> 0x1f;
  }
  if ((uVar6 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  (**(code **)((this->Helpers).AllocatorInstance.Data + lVar8 * 0x10 + 8))(puVar9);
  *(FCameraCutPlaybackCapability **)puVar9 = *param_2;
  uVar6 = 0;
  if ((int)uVar5 < (this->Helpers).ArrayNum) {
    uVar6 = ~uVar5 >> 0x1f;
  }
  if ((uVar6 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  pFVar1 = (this->Helpers).AllocatorInstance.Data;
  *(code **)(pFVar1 + lVar8 * 0x10) =
       TPlaybackCapabilityInterfaceCast<UE::MovieScene::FCameraCutPlaybackCapability_*>::
       InterfaceCast;
  *(code **)(pFVar1 + lVar8 * 0x10 + 8) =
       TPlaybackCapabilityDestructor<UE::MovieScene::FCameraCutPlaybackCapability_*>::Destroy;
  puVar7 = (undefined8 *)*plVar10;
  if (puVar7 != (undefined8 *)0x0) {
    (**(code **)*puVar7)(puVar7,1);
  }
  puVar7 = ::operator_new(0x10);
  if (puVar7 != (undefined8 *)0x0) {
    puVar7[1] = puVar9;
    *puVar7 = &
              ___7__TPlaybackCapabilityDebuggingTypedPtr_PEAUFCameraCutPlaybackCapability_MovieScene_UE___MovieScene_UE__6B_
    ;
  }
  *plVar10 = (longlong)puVar7;
  return true;
}

// OverwriteCapability<FMovieSceneSpawnRegister_*,FMovieSceneSpawnRegister,FMovieSceneSpawnRegister_*> @ 146c4cc00

bool __thiscall
UE::MovieScene::FPlaybackCapabilitiesImpl::
OverwriteCapability<FMovieSceneSpawnRegister_*,FMovieSceneSpawnRegister,FMovieSceneSpawnRegister_*>
          (FPlaybackCapabilitiesImpl *this,uint param_1,FMovieSceneSpawnRegister **param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  uint uVar6;
  undefined8 *puVar7;
  longlong lVar8;
  uchar *puVar9;
  longlong *plVar10;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined1 local_res20 [8];
  
  if ((this->AllCapabilities & param_1) == 0) {
    local_res10[0] = 0;
    bVar3 = `UE::MovieScene::FPlaybackCapabilitiesImpl::
            OverwriteCapability<FMovieSceneSpawnRegister_*,FMovieSceneSpawnRegister,FMovieSceneSpawnRegister_*>'
            ::__l3::<lambda_1>::operator()(local_res10);
    if (!bVar3) {
      return false;
    }
  }
  uVar5 = GetCapabilityIndex(this,param_1);
  lVar8 = (longlong)(int)uVar5;
  if ((this->Num <= (byte)uVar5) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index < Num",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\MovieScenePlaybackCapabilities.h"
                         ,0x221,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  plVar10 = (longlong *)(this->Memory + (ulonglong)(uVar5 & 0xff) * 0x10);
  if (*(char *)((longlong)plVar10 + 0xe) != '\x01') {
    local_res8[0] = 0;
    bVar3 = `UE::MovieScene::FPlaybackCapabilitiesImpl::
            OverwriteCapability<FMovieSceneSpawnRegister_*,FMovieSceneSpawnRegister,FMovieSceneSpawnRegister_*>'
            ::__l6::<lambda_2>::operator()(local_res8);
    if (!bVar3) {
      return false;
    }
  }
  if ((*(short *)((longlong)plVar10 + 10) != 8) || (*(char *)((longlong)plVar10 + 0xc) != '\b')) {
    local_res20[0] = 0;
    bVar3 = `UE::MovieScene::FPlaybackCapabilitiesImpl::
            OverwriteCapability<FMovieSceneSpawnRegister_*,FMovieSceneSpawnRegister,FMovieSceneSpawnRegister_*>'
            ::__l9::<lambda_3>::operator()(local_res20);
    if (!bVar3) {
      return false;
    }
  }
  if (*(ushort *)(plVar10 + 1) == 0xffff) {
    puVar9 = (uchar *)0x0;
  }
  else {
    puVar9 = this->Memory + *(ushort *)(plVar10 + 1);
  }
  uVar6 = 0;
  if ((int)uVar5 < (this->Helpers).ArrayNum) {
    uVar6 = ~uVar5 >> 0x1f;
  }
  if ((uVar6 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  (**(code **)((this->Helpers).AllocatorInstance.Data + lVar8 * 0x10 + 8))(puVar9);
  *(FMovieSceneSpawnRegister **)puVar9 = *param_2;
  uVar6 = 0;
  if ((int)uVar5 < (this->Helpers).ArrayNum) {
    uVar6 = ~uVar5 >> 0x1f;
  }
  if ((uVar6 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  pFVar1 = (this->Helpers).AllocatorInstance.Data;
  *(code **)(pFVar1 + lVar8 * 0x10) =
       TPlaybackCapabilityInterfaceCast<FMovieSceneSpawnRegister_*>::InterfaceCast;
  *(code **)(pFVar1 + lVar8 * 0x10 + 8) =
       TPlaybackCapabilityDestructor<FMovieSceneSpawnRegister_*>::Destroy;
  puVar7 = (undefined8 *)*plVar10;
  if (puVar7 != (undefined8 *)0x0) {
    (**(code **)*puVar7)(puVar7,1);
  }
  puVar7 = ::operator_new(0x10);
  if (puVar7 != (undefined8 *)0x0) {
    puVar7[1] = puVar9;
    *puVar7 = &
              ___7__TPlaybackCapabilityDebuggingTypedPtr_PEAVFMovieSceneSpawnRegister___MovieScene_UE__6B_
    ;
  }
  *plVar10 = (longlong)puVar7;
  return true;
}

// GetCapabilityChecked @ 146c53fb0

FPlaybackCapabilityPtr * __thiscall
UE::MovieScene::FPlaybackCapabilitiesImpl::GetCapabilityChecked
          (FPlaybackCapabilitiesImpl *this,FPlaybackCapabilityPtr *__return_storage_ptr__,
          uint param_1)

{
  uchar *puVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FPlaybackCapabilityPtr *pFVar5;
  uchar *puVar6;
  ulonglong uVar7;
  
  uVar4 = GetCapabilityIndex(this,param_1);
  if (((int)uVar4 < 0) || (0xfe < (int)uVar4)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index >= 0 && Index < 255",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\MovieScenePlaybackCapabilities.h"
                       ,0x107,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FPlaybackCapabilityPtr *)(*pcVar2)();
      return pFVar5;
    }
  }
  if (this->Num <= (byte)uVar4) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index < Num",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\MovieScenePlaybackCapabilities.h"
                       ,0x21b,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FPlaybackCapabilityPtr *)(*pcVar2)();
      return pFVar5;
    }
  }
  puVar1 = this->Memory;
  uVar7 = (ulonglong)(uVar4 & 0xff);
  if (*(ushort *)(puVar1 + uVar7 * 0x10 + 8) == 0xffff) {
    puVar6 = (uchar *)0x0;
  }
  else {
    puVar6 = puVar1 + *(ushort *)(puVar1 + uVar7 * 0x10 + 8);
  }
  __return_storage_ptr__->Ptr = puVar6 + puVar1[uVar7 * 0x10 + 0xd];
  __return_storage_ptr__->StorageMode = puVar1[uVar7 * 0x10 + 0xe];
  return __return_storage_ptr__;
}

// operator() @ 1504fadd0

bool __thiscall
`UE::MovieScene::FPlaybackCapabilitiesImpl::
OverwriteCapability<UE::MovieScene::FCameraCutPlaybackCapability_*,UE::MovieScene::FCameraCutPlaybackCapability,UE::MovieScene::FCameraCutPlaybackCapability_*>'
::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_1133317147859090973>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_1133317147859090973>,
                       &`public:___cdecl_`protected:_bool___cdecl_UE::MovieScene::FPlaybackCapabilitiesImpl::OverwriteCapability<UE::MovieScene::FCameraCutPlaybackCapability*___ptr64,UE::MovieScene::FCameraCutPlaybackCapability,UE::MovieScene::FCameraCutPlaybackCapability*___ptr64>(unsigned_int,UE::MovieScene::FCameraCutPlaybackCapability*___ptr64&&___ptr64)___ptr64'::`3'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504fae10

bool __thiscall
`UE::MovieScene::FPlaybackCapabilitiesImpl::
OverwriteCapability<FMovieSceneSpawnRegister_*,FMovieSceneSpawnRegister,FMovieSceneSpawnRegister_*>'
::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_1133317147859090973>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_1133317147859090973>,
                       &`public:___cdecl_`protected:_bool___cdecl_UE::MovieScene::FPlaybackCapabilitiesImpl::OverwriteCapability<FMovieSceneSpawnRegister*___ptr64,FMovieSceneSpawnRegister,FMovieSceneSpawnRegister*___ptr64>(unsigned_int,FMovieSceneSpawnRegister*___ptr64&&___ptr64)___ptr64'::`3'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504fae50

bool __thiscall
`UE::MovieScene::FPlaybackCapabilitiesImpl::
OverwriteCapability<UE::MovieScene::FCameraCutPlaybackCapability_*,UE::MovieScene::FCameraCutPlaybackCapability,UE::MovieScene::FCameraCutPlaybackCapability_*>'
::__l6::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_1133317147859090961>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_1133317147859090961>,
                       &`public:___cdecl_`protected:_bool___cdecl_UE::MovieScene::FPlaybackCapabilitiesImpl::OverwriteCapability<UE::MovieScene::FCameraCutPlaybackCapability*___ptr64,UE::MovieScene::FCameraCutPlaybackCapability,UE::MovieScene::FCameraCutPlaybackCapability*___ptr64>(unsigned_int,UE::MovieScene::FCameraCutPlaybackCapability*___ptr64&&___ptr64)___ptr64'::`6'::<lambda_2>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504fae90

bool __thiscall
`UE::MovieScene::FPlaybackCapabilitiesImpl::
OverwriteCapability<FMovieSceneSpawnRegister_*,FMovieSceneSpawnRegister,FMovieSceneSpawnRegister_*>'
::__l6::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_1133317147859090961>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_1133317147859090961>,
                       &`public:___cdecl_`protected:_bool___cdecl_UE::MovieScene::FPlaybackCapabilitiesImpl::OverwriteCapability<FMovieSceneSpawnRegister*___ptr64,FMovieSceneSpawnRegister,FMovieSceneSpawnRegister*___ptr64>(unsigned_int,FMovieSceneSpawnRegister*___ptr64&&___ptr64)___ptr64'::`6'::<lambda_2>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504faed0

bool __thiscall
`UE::MovieScene::FPlaybackCapabilitiesImpl::
OverwriteCapability<UE::MovieScene::FCameraCutPlaybackCapability_*,UE::MovieScene::FCameraCutPlaybackCapability,UE::MovieScene::FCameraCutPlaybackCapability_*>'
::__l9::<lambda_3>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_1133317147859090951>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_1133317147859090951>,
                       &`public:___cdecl_`protected:_bool___cdecl_UE::MovieScene::FPlaybackCapabilitiesImpl::OverwriteCapability<UE::MovieScene::FCameraCutPlaybackCapability*___ptr64,UE::MovieScene::FCameraCutPlaybackCapability,UE::MovieScene::FCameraCutPlaybackCapability*___ptr64>(unsigned_int,UE::MovieScene::FCameraCutPlaybackCapability*___ptr64&&___ptr64)___ptr64'::`9'::<lambda_3>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504faf10

bool __thiscall
`UE::MovieScene::FPlaybackCapabilitiesImpl::
OverwriteCapability<FMovieSceneSpawnRegister_*,FMovieSceneSpawnRegister,FMovieSceneSpawnRegister_*>'
::__l9::<lambda_3>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_1133317147859090951>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_1133317147859090951>,
                       &`public:___cdecl_`protected:_bool___cdecl_UE::MovieScene::FPlaybackCapabilitiesImpl::OverwriteCapability<FMovieSceneSpawnRegister*___ptr64,FMovieSceneSpawnRegister,FMovieSceneSpawnRegister*___ptr64>(unsigned_int,FMovieSceneSpawnRegister*___ptr64&&___ptr64)___ptr64'::`9'::<lambda_3>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

