// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 50

// AddCapability<UE::MovieScene::FPlayerIndexPlaybackCapability,UE::MovieScene::FPlayerIndexPlaybackCapability,unsigned_short> @ 146102240

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

FPlaybackCapabilityPtr * __thiscall
UE::MovieScene::FPlaybackCapabilitiesImpl::
AddCapability<UE::MovieScene::FPlayerIndexPlaybackCapability,UE::MovieScene::FPlayerIndexPlaybackCapability,unsigned_short>
          (FPlaybackCapabilitiesImpl *this,FPlaybackCapabilityPtr *__return_storage_ptr__,
          uint param_1,ushort *param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  byte bVar3;
  ushort uVar4;
  code *pcVar5;
  undefined8 uVar6;
  bool bVar7;
  byte bVar8;
  uint uVar9;
  int iVar10;
  FPlaybackCapabilityPtr *pFVar11;
  uchar *puVar12;
  byte *pbVar13;
  ForElementType<unsigned_short> FVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  FScriptContainerElement *pFVar17;
  ushort uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uchar *puVar22;
  longlong lVar23;
  ulonglong uVar24;
  uint uVar25;
  uchar *puVar26;
  uchar *puVar27;
  ushort *puVar28;
  code **ppcVar29;
  undefined1 auStack_128 [32];
  code **local_108;
  FScriptContainerElement *local_100;
  longlong local_f8;
  longlong local_f0;
  undefined8 local_e8;
  char local_d8;
  uchar *local_d0;
  uchar *local_c8;
  ulonglong local_c0;
  FPlaybackCapabilitiesImpl *local_b8;
  ushort *local_b0;
  ulonglong local_a8;
  ushort local_a0;
  ushort local_9e;
  ulonglong local_98;
  code *local_90;
  code *pcStack_88;
  FPlaybackCapabilityPtr *local_80;
  TArray<unsigned_short,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> local_78;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_128;
  local_b8 = this;
  local_b0 = param_2;
  local_80 = __return_storage_ptr__;
  if (((this->AllCapabilities & param_1) != 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(AllCapabilities & CapabilityBit) == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\MovieScenePlaybackCapabilities.h"
                         ,0x117,L"Capability already exists!"), bVar7)) {
    pcVar5 = (code *)swi(3);
    pFVar11 = (FPlaybackCapabilityPtr *)(*pcVar5)();
    return pFVar11;
  }
  this->AllCapabilities = this->AllCapabilities | param_1;
  bVar8 = this->Num;
  uVar16 = (ulonglong)bVar8;
  uVar25 = param_1 - 1 & this->AllCapabilities;
  puVar27 = this->Memory;
  uVar15 = (ulonglong)uVar25 - ((ulonglong)(uVar25 >> 1) & 0x5555555555555555);
  local_c0 = 8;
  uVar15 = (uVar15 >> 2 & 0x3333333333333333) + (uVar15 & 0x3333333333333333);
  local_98 = ((uVar15 >> 4) + uVar15 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
  if (bVar8 != 0) {
    pbVar13 = puVar27 + 0xc;
    uVar15 = 8;
    do {
      bVar3 = *pbVar13;
      pbVar13 = pbVar13 + 0x10;
      local_c0 = (ulonglong)bVar3;
      if (bVar3 < uVar15) {
        local_c0 = uVar15;
      }
      uVar16 = uVar16 - 1;
      uVar15 = local_c0;
    } while (uVar16 != 0);
  }
  uVar15 = local_c0;
  puVar22 = (uchar *)0x0;
  uVar21 = 0;
  local_78.ArrayMax = 0x10;
  uVar25 = bVar8 + 1;
  local_78.AllocatorInstance.SecondaryData = (ForElementType<unsigned_short>)0x0;
  local_78.ArrayNum = 0;
  local_c8 = (uchar *)CONCAT44(local_c8._4_4_,uVar25);
  local_d0 = puVar27;
  TArray<unsigned_short,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>::SetNum
            (&local_78,uVar25,Default);
  local_a8 = local_98 & 0xffffffff;
  lVar23 = (ulonglong)uVar25 << 4;
  uVar9 = 0;
  uVar19 = uVar21;
  if (local_a8 != 0) {
    puVar28 = (ushort *)(puVar27 + 10);
    uVar16 = local_98 & 0xffffffff;
    puVar27 = puVar22;
    puVar26 = puVar22;
    do {
      uVar19 = (uint)puVar27;
      uVar24 = lVar23 + -1 + (ulonglong)(byte)puVar28[1] & ~((ulonglong)(byte)puVar28[1] - 1);
      uVar25 = uVar9;
      if ((int)uVar19 < local_78.ArrayNum) {
        uVar25 = ~uVar19 >> 0x1f;
      }
      if (uVar25 == 0) {
        local_108 = (code **)(longlong)(int)uVar19;
        local_100 = (FScriptContainerElement *)(longlong)local_78.ArrayNum;
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar7) {
          pcVar5 = (code *)swi(3);
          pFVar11 = (FPlaybackCapabilityPtr *)(*pcVar5)();
          return pFVar11;
        }
      }
      FVar14 = (ForElementType<unsigned_short>)&local_78;
      if (local_78.AllocatorInstance.SecondaryData != (ForElementType<unsigned_short>)0x0) {
        FVar14 = local_78.AllocatorInstance.SecondaryData;
      }
      uVar19 = uVar19 + 1;
      puVar27 = (uchar *)(ulonglong)uVar19;
      *(short *)((longlong)FVar14 + (longlong)puVar26 * 2) = (short)uVar24;
      puVar26 = puVar26 + 1;
      uVar18 = *puVar28;
      puVar28 = puVar28 + 8;
      lVar23 = uVar24 + uVar18;
    } while ((longlong)puVar26 < (longlong)uVar16);
    this = local_b8;
    uVar25 = (uint)local_c8;
  }
  uVar16 = lVar23 + 1U & 0xfffffffffffffffe;
  uVar20 = uVar9;
  if ((int)uVar19 < local_78.ArrayNum) {
    uVar20 = ~uVar19 >> 0x1f;
  }
  if (uVar20 == 0) {
    local_108 = (code **)(longlong)(int)uVar19;
    local_100 = (FScriptContainerElement *)(longlong)local_78.ArrayNum;
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      pFVar11 = (FPlaybackCapabilityPtr *)(*pcVar5)();
      return pFVar11;
    }
  }
  FVar14 = (ForElementType<unsigned_short>)&local_78;
  if (local_78.AllocatorInstance.SecondaryData != (ForElementType<unsigned_short>)0x0) {
    FVar14 = local_78.AllocatorInstance.SecondaryData;
  }
  uVar20 = uVar19 + 1;
  *(short *)((longlong)FVar14 + (longlong)(int)uVar19 * 2) = (short)uVar16;
  uVar16 = uVar16 + 2;
  if ((int)uVar20 < (int)uVar25) {
    iVar10 = (uint)local_c8;
    ppcVar29 = (code **)(longlong)(int)uVar20;
    puVar28 = (ushort *)(local_d0 + (longlong)ppcVar29 * 0x10 + -6);
    lVar23 = (longlong)ppcVar29 * 2;
    do {
      uVar16 = (uVar16 - 1) + (ulonglong)(byte)puVar28[1] & ~((ulonglong)(byte)puVar28[1] - 1);
      uVar25 = 0;
      if ((int)uVar20 < local_78.ArrayNum) {
        uVar25 = ~uVar20 >> 0x1f;
      }
      if ((uVar25 == 0) &&
         (local_108 = ppcVar29, local_100 = (FScriptContainerElement *)(longlong)local_78.ArrayNum,
         bVar7 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        pFVar11 = (FPlaybackCapabilityPtr *)(*pcVar5)();
        return pFVar11;
      }
      FVar14 = (ForElementType<unsigned_short>)&local_78;
      if (local_78.AllocatorInstance.SecondaryData != (ForElementType<unsigned_short>)0x0) {
        FVar14 = local_78.AllocatorInstance.SecondaryData;
      }
      uVar20 = uVar20 + 1;
      ppcVar29 = (code **)((longlong)ppcVar29 + 1);
      *(short *)((longlong)FVar14 + lVar23) = (short)uVar16;
      lVar23 = lVar23 + 2;
      uVar18 = *puVar28;
      puVar28 = puVar28 + 8;
      uVar16 = uVar16 + uVar18;
      uVar15 = local_c0;
      this = local_b8;
    } while ((int)uVar20 < iVar10);
  }
  if ((0xff < uVar15) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("RequiredAlignment <= 0XFF",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\MovieScenePlaybackCapabilities.h"
                         ,0x155,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    pFVar11 = (FPlaybackCapabilityPtr *)(*pcVar5)();
    return pFVar11;
  }
  puVar27 = this->Memory;
  local_c8 = puVar27;
  if ((this->Alignment < uVar15) || (this->Capacity < uVar16)) {
    uVar24 = (ulonglong)this->Capacity * 2;
    local_d8 = '\x01';
    if (uVar24 < uVar16) {
      uVar24 = uVar16 & 0xffff;
    }
    this->Capacity = (ushort)uVar24;
    puVar26 = FMemory::Malloc(uVar24 & 0xffff,(uint)uVar15);
    this->Memory = puVar26;
  }
  else {
    local_d8 = '\0';
  }
  uVar15 = local_a8;
  bVar8 = this->Num + 1;
  this->Num = bVar8;
  lVar23 = (ulonglong)bVar8 - 1;
  uVar25 = bVar8 - 1;
  if ((longlong)local_a8 < lVar23) {
    puVar28 = (ushort *)(local_d0 + lVar23 * 0x10 + -6);
    do {
      uVar19 = uVar9;
      if ((int)uVar25 < local_78.ArrayNum) {
        uVar19 = ~uVar25 >> 0x1f;
      }
      if (uVar19 == 0) {
        local_108 = (code **)(longlong)(int)uVar25;
        local_100 = (FScriptContainerElement *)(longlong)local_78.ArrayNum;
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar7) {
          pcVar5 = (code *)swi(3);
          pFVar11 = (FPlaybackCapabilityPtr *)(*pcVar5)();
          return pFVar11;
        }
      }
      FVar14 = (ForElementType<unsigned_short>)&local_78;
      if (local_78.AllocatorInstance.SecondaryData != (ForElementType<unsigned_short>)0x0) {
        FVar14 = local_78.AllocatorInstance.SecondaryData;
      }
      puVar26 = puVar22;
      if (puVar28[-1] != 0xffff) {
        puVar26 = puVar27 + puVar28[-1];
      }
      memmove(this->Memory + *(ushort *)((longlong)FVar14 + lVar23 * 2),puVar26,(ulonglong)*puVar28)
      ;
      uVar25 = uVar25 - 1;
      lVar23 = lVar23 + -1;
      puVar28 = puVar28 + -8;
    } while ((longlong)uVar15 < lVar23);
  }
  uVar19 = uVar9;
  if ((int)uVar25 < local_78.ArrayNum) {
    uVar19 = ~uVar25 >> 0x1f;
  }
  if (uVar19 == 0) {
    local_108 = (code **)(longlong)(int)uVar25;
    local_100 = (FScriptContainerElement *)(longlong)local_78.ArrayNum;
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      pFVar11 = (FPlaybackCapabilityPtr *)(*pcVar5)();
      return pFVar11;
    }
  }
  puVar27 = local_c8;
  FVar14 = (ForElementType<unsigned_short>)&local_78;
  if (local_78.AllocatorInstance.SecondaryData != (ForElementType<unsigned_short>)0x0) {
    FVar14 = local_78.AllocatorInstance.SecondaryData;
  }
  uVar19 = uVar25 - 1;
  *(ushort *)(this->Memory + *(ushort *)((longlong)FVar14 + (longlong)(int)uVar25 * 2)) = *local_b0;
  if (-1 < (int)uVar19) {
    ppcVar29 = (code **)(longlong)(int)uVar19;
    puVar28 = (ushort *)(local_d0 + (longlong)ppcVar29 * 0x10 + 10);
    lVar23 = (longlong)ppcVar29 * 2;
    do {
      uVar25 = uVar9;
      if ((int)uVar19 < local_78.ArrayNum) {
        uVar25 = ~uVar19 >> 0x1f;
      }
      if ((uVar25 == 0) &&
         (local_108 = ppcVar29, local_100 = (FScriptContainerElement *)(longlong)local_78.ArrayNum,
         bVar7 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        pFVar11 = (FPlaybackCapabilityPtr *)(*pcVar5)();
        return pFVar11;
      }
      FVar14 = (ForElementType<unsigned_short>)&local_78;
      if (local_78.AllocatorInstance.SecondaryData != (ForElementType<unsigned_short>)0x0) {
        FVar14 = local_78.AllocatorInstance.SecondaryData;
      }
      puVar26 = puVar22;
      if (puVar28[-1] != 0xffff) {
        puVar26 = puVar27 + puVar28[-1];
      }
      memmove(this->Memory + *(ushort *)(lVar23 + (longlong)FVar14),puVar26,(ulonglong)*puVar28);
      ppcVar29 = (code **)((longlong)ppcVar29 + -1);
      lVar23 = lVar23 + -2;
      puVar28 = puVar28 + -8;
      uVar19 = uVar19 - 1;
      uVar15 = local_a8;
    } while (-1 < (int)uVar19);
  }
  local_b8 = (FPlaybackCapabilitiesImpl *)this->Memory;
  ppcVar29 = (code **)((ulonglong)this->Num - 1);
  uVar25 = this->Num - 1;
  if ((longlong)uVar15 < (longlong)ppcVar29) {
    puVar28 = (ushort *)((longlong)local_b8 + (longlong)ppcVar29 * 0x10 + 8);
    local_b0 = (ushort *)((longlong)local_d0 - (longlong)local_b8);
    uVar18 = local_a0;
    do {
      puVar2 = (undefined8 *)((longlong)puVar28 + (longlong)local_b0 + -0x18);
      uVar6 = puVar2[1];
      *(undefined8 *)(puVar28 + -4) = *puVar2;
      *(undefined8 *)puVar28 = uVar6;
      uVar19 = uVar21;
      if ((int)uVar25 < local_78.ArrayNum) {
        uVar19 = ~uVar25 >> 0x1f;
      }
      if ((uVar19 == 0) &&
         (local_108 = ppcVar29, local_100 = (FScriptContainerElement *)(longlong)local_78.ArrayNum,
         bVar7 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        pFVar11 = (FPlaybackCapabilityPtr *)(*pcVar5)();
        return pFVar11;
      }
      FVar14 = (ForElementType<unsigned_short>)&local_78;
      if (local_78.AllocatorInstance.SecondaryData != (ForElementType<unsigned_short>)0x0) {
        FVar14 = local_78.AllocatorInstance.SecondaryData;
      }
      uVar4 = *(ushort *)((longlong)FVar14 + (longlong)ppcVar29 * 2);
      if (this->Memory + uVar4 < this->Memory) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("false",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\RelativePtr.h"
                           ,0x46,
                           L"Attempting to assign a negative offset to an unsigned relative pointer!!"
                          );
        if (bVar7) {
          pcVar5 = (code *)swi(3);
          pFVar11 = (FPlaybackCapabilityPtr *)(*pcVar5)();
          return pFVar11;
        }
      }
      else {
        uVar18 = uVar4;
        if ((uVar4 == 0xffff) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("OffsetPtr >= 0 && OffsetPtr < std::numeric_limits<OffsetType>::max()"
                               ,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\RelativePtr.h"
                               ,0x3a,
                               L"Attempting to create a relative pointer outside the bounds of its capacity."
                              ), bVar7)) {
          pcVar5 = (code *)swi(3);
          pFVar11 = (FPlaybackCapabilityPtr *)(*pcVar5)();
          return pFVar11;
        }
      }
      uVar25 = uVar25 - 1;
      *puVar28 = uVar18;
      ppcVar29 = (code **)((longlong)ppcVar29 + -1);
      puVar28 = puVar28 + -8;
    } while ((longlong)local_a8 < (longlong)ppcVar29);
  }
  ppcVar29 = (code **)(longlong)(int)uVar25;
  puVar28 = (ushort *)((longlong)local_b8 + (longlong)ppcVar29 * 0x10);
  uVar19 = uVar21;
  if ((int)uVar25 < local_78.ArrayNum) {
    uVar19 = ~uVar25 >> 0x1f;
  }
  local_b0 = puVar28;
  if ((uVar19 == 0) &&
     (local_108 = ppcVar29, local_100 = (FScriptContainerElement *)(longlong)local_78.ArrayNum,
     bVar7 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld"), bVar7
     )) {
    pcVar5 = (code *)swi(3);
    pFVar11 = (FPlaybackCapabilityPtr *)(*pcVar5)();
    return pFVar11;
  }
  FVar14 = (ForElementType<unsigned_short>)&local_78;
  if (local_78.AllocatorInstance.SecondaryData != (ForElementType<unsigned_short>)0x0) {
    FVar14 = local_78.AllocatorInstance.SecondaryData;
  }
  uVar18 = *(ushort *)((longlong)FVar14 + (longlong)ppcVar29 * 2);
  puVar27 = this->Memory;
  *(uchar *)((longlong)puVar28 + 0xf) = '\0';
  *(uchar *)((longlong)puVar28 + 0) = '\0';
  *(uchar *)((longlong)puVar28 + 1) = '\0';
  *(uchar *)((longlong)puVar28 + 2) = '\0';
  *(uchar *)((longlong)puVar28 + 3) = '\0';
  *(uchar *)((longlong)puVar28 + 4) = '\0';
  *(uchar *)((longlong)puVar28 + 5) = '\0';
  *(uchar *)((longlong)puVar28 + 6) = '\0';
  *(uchar *)((longlong)puVar28 + 7) = '\0';
  ((TRelativePtr<void,unsigned_short> *)((longlong)puVar28 + 8))->Offset = 0xffff;
  *(uchar *)((longlong)puVar28 + 10) = '\0';
  *(uchar *)((longlong)puVar28 + 0xb) = '\0';
  *(uchar *)((longlong)puVar28 + 0xc) = '\0';
  *(uchar *)((longlong)puVar28 + 0xd) = '\0';
  *(uchar *)((longlong)puVar28 + 0xe) = '\0';
  TRelativePtr<void,unsigned_short>::Reset
            ((TRelativePtr<void,unsigned_short> *)((longlong)puVar28 + 8),this->Memory,
             puVar27 + uVar18);
  *(uchar *)((longlong)puVar28 + 10) = '\x02';
  *(uchar *)((longlong)puVar28 + 0xb) = '\0';
  *(uchar *)((longlong)puVar28 + 0xc) = '\x02';
  *(uchar *)((longlong)puVar28 + 0xd) = '\0';
  *(uchar *)((longlong)puVar28 + 0xe) = '\0';
  puVar12 = ::operator_new(0x10);
  puVar26 = puVar22;
  if (puVar12 != (uchar *)0x0) {
    *(uchar **)(puVar12 + 8) = puVar27 + uVar18;
    *(undefined ***)puVar12 =
         &
         ___7__TPlaybackCapabilityDebuggingTypedPtr_UFPlayerIndexPlaybackCapability_MovieScene_UE___MovieScene_UE__6B_
    ;
    puVar26 = puVar12;
  }
  uVar25 = uVar25 - 1;
  *(uchar **)puVar28 = puVar26;
  if (-1 < (int)uVar25) {
    ppcVar29 = (code **)(longlong)(int)uVar25;
    puVar27 = (uchar *)((longlong)local_b8 + (longlong)ppcVar29 * 0x10);
    local_d0 = local_d0 + -(longlong)local_b8;
    uVar15 = (longlong)ppcVar29 * 2;
    uVar18 = local_9e;
    do {
      uVar6 = *(undefined8 *)(puVar27 + (longlong)local_d0 + 8);
      *(undefined8 *)puVar27 = *(undefined8 *)(puVar27 + (longlong)local_d0);
      *(undefined8 *)(puVar27 + 8) = uVar6;
      uVar19 = uVar21;
      if ((int)uVar25 < local_78.ArrayNum) {
        uVar19 = ~uVar25 >> 0x1f;
      }
      local_c0 = uVar15;
      if ((uVar19 == 0) &&
         (local_108 = ppcVar29, local_100 = (FScriptContainerElement *)(longlong)local_78.ArrayNum,
         bVar7 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        pFVar11 = (FPlaybackCapabilityPtr *)(*pcVar5)();
        return pFVar11;
      }
      FVar14 = (ForElementType<unsigned_short>)&local_78;
      if (local_78.AllocatorInstance.SecondaryData != (ForElementType<unsigned_short>)0x0) {
        FVar14 = local_78.AllocatorInstance.SecondaryData;
      }
      uVar4 = *(ushort *)(uVar15 + (longlong)FVar14);
      if (this->Memory + uVar4 < this->Memory) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("false",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\RelativePtr.h"
                           ,0x46,
                           L"Attempting to assign a negative offset to an unsigned relative pointer!!"
                          );
        if (bVar7) {
          pcVar5 = (code *)swi(3);
          pFVar11 = (FPlaybackCapabilityPtr *)(*pcVar5)();
          return pFVar11;
        }
      }
      else {
        uVar18 = uVar4;
        if ((uVar4 == 0xffff) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("OffsetPtr >= 0 && OffsetPtr < std::numeric_limits<OffsetType>::max()"
                               ,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\RelativePtr.h"
                               ,0x3a,
                               L"Attempting to create a relative pointer outside the bounds of its capacity."
                              ), bVar7)) {
          pcVar5 = (code *)swi(3);
          pFVar11 = (FPlaybackCapabilityPtr *)(*pcVar5)();
          return pFVar11;
        }
      }
      ppcVar29 = (code **)((longlong)ppcVar29 + -1);
      uVar15 = local_c0 - 2;
      *(ushort *)(puVar27 + 8) = uVar18;
      puVar27 = puVar27 + -0x10;
      uVar25 = uVar25 - 1;
      puVar28 = local_b0;
      local_c0 = uVar15;
    } while (-1 < (int)uVar25);
  }
  if ((local_d8 != '\0') && (local_c8 != (uchar *)0x0)) {
    FMemory::Free(local_c8);
  }
  pFVar17 = (this->Helpers).AllocatorInstance.Data;
  local_90 = TPlaybackCapabilityInterfaceCast<UE::MovieScene::FPlayerIndexPlaybackCapability>::
             InterfaceCast;
  pcStack_88 = TPlaybackCapabilityDestructor<UE::MovieScene::FPlayerIndexPlaybackCapability>::
               Destroy;
  if ((pFVar17 <= (FScriptContainerElement *)&local_90) &&
     (lVar23 = (longlong)(this->Helpers).ArrayMax,
     (FScriptContainerElement *)&local_90 < pFVar17 + lVar23 * 0x10)) {
    local_f0 = (longlong)(this->Helpers).ArrayNum;
    local_e8 = 0x10;
    local_108 = &local_90;
    local_100 = pFVar17;
    local_f8 = lVar23;
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      pFVar11 = (FPlaybackCapabilityPtr *)(*pcVar5)();
      return pFVar11;
    }
  }
  iVar10 = (this->Helpers).ArrayNum;
  piVar1 = &(this->Helpers).ArrayMax;
  if (iVar10 == *piVar1) {
    iVar10 = Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x810,&(this->Helpers).AllocatorInstance,piVar1);
  }
  pFVar17 = (this->Helpers).AllocatorInstance.Data;
  (this->Helpers).ArrayNum = iVar10 + 1;
  lVar23 = (local_98 & 0xffffffff) * 0x10;
  pFVar17 = pFVar17 + lVar23;
  memmove(pFVar17 + 0x10,pFVar17,(longlong)(iVar10 - (int)local_98) << 4);
  pFVar11 = local_80;
  pFVar17 = (this->Helpers).AllocatorInstance.Data + lVar23;
  *(code **)pFVar17 = local_90;
  *(code **)(pFVar17 + 8) = pcStack_88;
  if (*(ushort *)((longlong)puVar28 + 8) != 0xffff) {
    puVar22 = this->Memory + *(ushort *)((longlong)puVar28 + 8);
  }
  local_80->Ptr = puVar22 + *(byte *)((longlong)puVar28 + 0xd);
  local_80->StorageMode = *(EPlaybackCapabilityStorageMode *)((longlong)puVar28 + 0xe);
  if (local_78.AllocatorInstance.SecondaryData != (ForElementType<unsigned_short>)0x0) {
    FMemory::Free((void *)local_78.AllocatorInstance.SecondaryData);
  }
  return pFVar11;
}

// OverwriteCapability<UE::MovieScene::FPlayerIndexPlaybackCapability,UE::MovieScene::FPlayerIndexPlaybackCapability,unsigned_short> @ 146114f80

bool __thiscall
UE::MovieScene::FPlaybackCapabilitiesImpl::
OverwriteCapability<UE::MovieScene::FPlayerIndexPlaybackCapability,UE::MovieScene::FPlayerIndexPlaybackCapability,unsigned_short>
          (FPlaybackCapabilitiesImpl *this,uint param_1,ushort *param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  uint uVar6;
  undefined8 *puVar7;
  longlong lVar8;
  ushort *puVar9;
  longlong *plVar10;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined1 local_res20 [8];
  
  if ((this->AllCapabilities & param_1) == 0) {
    local_res10[0] = 0;
    bVar3 = `UE::MovieScene::FPlaybackCapabilitiesImpl::
            OverwriteCapability<UE::MovieScene::FPlayerIndexPlaybackCapability,UE::MovieScene::FPlayerIndexPlaybackCapability,unsigned_short>'
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
  if (*(char *)((longlong)plVar10 + 0xe) != '\0') {
    local_res8[0] = 0;
    bVar3 = `UE::MovieScene::FPlaybackCapabilitiesImpl::
            OverwriteCapability<UE::MovieScene::FPlayerIndexPlaybackCapability,UE::MovieScene::FPlayerIndexPlaybackCapability,unsigned_short>'
            ::__l6::<lambda_2>::operator()(local_res8);
    if (!bVar3) {
      return false;
    }
  }
  if ((*(short *)((longlong)plVar10 + 10) != 2) || (*(char *)((longlong)plVar10 + 0xc) != '\x02')) {
    local_res20[0] = 0;
    bVar3 = `UE::MovieScene::FPlaybackCapabilitiesImpl::
            OverwriteCapability<UE::MovieScene::FPlayerIndexPlaybackCapability,UE::MovieScene::FPlayerIndexPlaybackCapability,unsigned_short>'
            ::__l9::<lambda_3>::operator()(local_res20);
    if (!bVar3) {
      return false;
    }
  }
  if (*(ushort *)(plVar10 + 1) == 0xffff) {
    puVar9 = (ushort *)0x0;
  }
  else {
    puVar9 = (ushort *)(this->Memory + *(ushort *)(plVar10 + 1));
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
  *puVar9 = *param_2;
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
       TPlaybackCapabilityInterfaceCast<UE::MovieScene::FPlayerIndexPlaybackCapability>::
       InterfaceCast;
  *(code **)(pFVar1 + lVar8 * 0x10 + 8) =
       TPlaybackCapabilityDestructor<UE::MovieScene::FPlayerIndexPlaybackCapability>::Destroy;
  puVar7 = (undefined8 *)*plVar10;
  if (puVar7 != (undefined8 *)0x0) {
    (**(code **)*puVar7)(puVar7,1);
  }
  puVar7 = ::operator_new(0x10);
  if (puVar7 != (undefined8 *)0x0) {
    puVar7[1] = puVar9;
    *puVar7 = &
              ___7__TPlaybackCapabilityDebuggingTypedPtr_UFPlayerIndexPlaybackCapability_MovieScene_UE___MovieScene_UE__6B_
    ;
  }
  *plVar10 = (longlong)puVar7;
  return true;
}

// FindCapability @ 146130fe0

FPlaybackCapabilityPtr * __thiscall
UE::MovieScene::FPlaybackCapabilitiesImpl::FindCapability
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
  
  if ((this->AllCapabilities & param_1) == 0) {
    *(undefined8 *)&__return_storage_ptr__->StorageMode = 0;
    __return_storage_ptr__->Ptr = (void *)0x0;
    return __return_storage_ptr__;
  }
  uVar4 = GetCapabilityIndex(this,param_1);
  if (((int)uVar4 < 0) || (0xfe < (int)uVar4)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index >= 0 && Index < 255",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\MovieScenePlaybackCapabilities.h"
                       ,0xfd,L"");
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

// GetCapabilityIndex @ 14613a2a0

int __thiscall
UE::MovieScene::FPlaybackCapabilitiesImpl::GetCapabilityIndex
          (FPlaybackCapabilitiesImpl *this,uint param_1)

{
  uint uVar1;
  ulonglong uVar2;
  
  if ((param_1 & this->AllCapabilities) == 0) {
    return -1;
  }
  uVar1 = param_1 - 1 & this->AllCapabilities;
  uVar2 = (ulonglong)uVar1 - ((ulonglong)(uVar1 >> 1) & 0x5555555555555555);
  uVar2 = (uVar2 & 0x3333333333333333) + (uVar2 >> 2 & 0x3333333333333333);
  return (int)(byte)(((uVar2 >> 4) + uVar2 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38);
}

// OverwriteCapability<IMovieScenePlaybackClient_*,IMovieScenePlaybackClient,IMovieScenePlaybackClient_*> @ 1461797a0

bool __thiscall
UE::MovieScene::FPlaybackCapabilitiesImpl::
OverwriteCapability<IMovieScenePlaybackClient_*,IMovieScenePlaybackClient,IMovieScenePlaybackClient_*>
          (FPlaybackCapabilitiesImpl *this,uint param_1,IMovieScenePlaybackClient **param_2)

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
            OverwriteCapability<IMovieScenePlaybackClient_*,IMovieScenePlaybackClient,IMovieScenePlaybackClient_*>'
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
            OverwriteCapability<IMovieScenePlaybackClient_*,IMovieScenePlaybackClient,IMovieScenePlaybackClient_*>'
            ::__l6::<lambda_2>::operator()(local_res8);
    if (!bVar3) {
      return false;
    }
  }
  if ((*(short *)((longlong)plVar10 + 10) != 8) || (*(char *)((longlong)plVar10 + 0xc) != '\b')) {
    local_res20[0] = 0;
    bVar3 = `UE::MovieScene::FPlaybackCapabilitiesImpl::
            OverwriteCapability<IMovieScenePlaybackClient_*,IMovieScenePlaybackClient,IMovieScenePlaybackClient_*>'
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
  *(IMovieScenePlaybackClient **)puVar9 = *param_2;
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
       TPlaybackCapabilityInterfaceCast<IMovieScenePlaybackClient_*>::InterfaceCast;
  *(code **)(pFVar1 + lVar8 * 0x10 + 8) =
       TPlaybackCapabilityDestructor<IMovieScenePlaybackClient_*>::Destroy;
  puVar7 = (undefined8 *)*plVar10;
  if (puVar7 != (undefined8 *)0x0) {
    (**(code **)*puVar7)(puVar7,1);
  }
  puVar7 = ::operator_new(0x10);
  if (puVar7 != (undefined8 *)0x0) {
    puVar7[1] = puVar9;
    *puVar7 = &
              ___7__TPlaybackCapabilityDebuggingTypedPtr_PEAVIMovieScenePlaybackClient___MovieScene_UE__6B_
    ;
  }
  *plVar10 = (longlong)puVar7;
  return true;
}

// AddCapability<FMovieSceneEvaluationState_*,FMovieSceneEvaluationState,FMovieSceneEvaluationState_*> @ 1461eb290

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

FPlaybackCapabilityPtr * __thiscall
UE::MovieScene::FPlaybackCapabilitiesImpl::
AddCapability<FMovieSceneEvaluationState_*,FMovieSceneEvaluationState,FMovieSceneEvaluationState_*>
          (FPlaybackCapabilitiesImpl *this,FPlaybackCapabilityPtr *__return_storage_ptr__,
          uint param_1,FMovieSceneEvaluationState **param_2)

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
  FMovieSceneEvaluationState **ppFVar25;
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
  FMovieSceneEvaluationState **local_b0;
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
  *(FMovieSceneEvaluationState **)
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
    local_b0 = (FMovieSceneEvaluationState **)((longlong)local_d0 - (longlong)local_b8);
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
  ppFVar25 = (FMovieSceneEvaluationState **)((longlong)local_b8 + lVar21 * 0x10);
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
         ___7__TPlaybackCapabilityDebuggingTypedPtr_PEAUFMovieSceneEvaluationState___MovieScene_UE__6B_
    ;
    puVar24 = puVar11;
  }
  uVar23 = uVar23 - 1;
  *ppFVar25 = (FMovieSceneEvaluationState *)puVar24;
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
       TPlaybackCapabilityInterfaceCast<FMovieSceneEvaluationState_*>::InterfaceCast;
  local_88.Destructor = TPlaybackCapabilityDestructor<FMovieSceneEvaluationState_*>::Destroy;
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

// AddCapability<UE::MovieScene::IObjectBindingNotifyPlaybackCapability_*,UE::MovieScene::IObjectBindingNotifyPlaybackCapability,UE::MovieScene::IObjectBindingNotifyPlaybackCapability_*> @ 1461ebc00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

FPlaybackCapabilityPtr * __thiscall
UE::MovieScene::FPlaybackCapabilitiesImpl::
AddCapability<UE::MovieScene::IObjectBindingNotifyPlaybackCapability_*,UE::MovieScene::IObjectBindingNotifyPlaybackCapability,UE::MovieScene::IObjectBindingNotifyPlaybackCapability_*>
          (FPlaybackCapabilitiesImpl *this,FPlaybackCapabilityPtr *__return_storage_ptr__,
          uint param_1,IObjectBindingNotifyPlaybackCapability **param_2)

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
  IObjectBindingNotifyPlaybackCapability **ppIVar25;
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
  IObjectBindingNotifyPlaybackCapability **local_b0;
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
  *(IObjectBindingNotifyPlaybackCapability **)
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
    local_b0 = (IObjectBindingNotifyPlaybackCapability **)((longlong)local_d0 - (longlong)local_b8);
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
  ppIVar25 = (IObjectBindingNotifyPlaybackCapability **)((longlong)local_b8 + lVar21 * 0x10);
  uVar17 = uVar19;
  if ((int)uVar23 < local_78.ArrayNum) {
    uVar17 = ~uVar23 >> 0x1f;
  }
  local_b0 = ppIVar25;
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
  *(uchar *)((longlong)ppIVar25 + 0xf) = '\0';
  *(uchar *)((longlong)ppIVar25 + 0) = '\0';
  *(uchar *)((longlong)ppIVar25 + 1) = '\0';
  *(uchar *)((longlong)ppIVar25 + 2) = '\0';
  *(uchar *)((longlong)ppIVar25 + 3) = '\0';
  *(uchar *)((longlong)ppIVar25 + 4) = '\0';
  *(uchar *)((longlong)ppIVar25 + 5) = '\0';
  *(uchar *)((longlong)ppIVar25 + 6) = '\0';
  *(uchar *)((longlong)ppIVar25 + 7) = '\0';
  ((TRelativePtr<void,unsigned_short> *)((longlong)ppIVar25 + 8))->Offset = 0xffff;
  *(uchar *)((longlong)ppIVar25 + 10) = '\0';
  *(uchar *)((longlong)ppIVar25 + 0xb) = '\0';
  *(uchar *)((longlong)ppIVar25 + 0xc) = '\0';
  *(uchar *)((longlong)ppIVar25 + 0xd) = '\0';
  *(uchar *)((longlong)ppIVar25 + 0xe) = '\0';
  TRelativePtr<void,unsigned_short>::Reset
            ((TRelativePtr<void,unsigned_short> *)((longlong)ppIVar25 + 8),this->Memory,
             puVar26 + uVar16);
  *(uchar *)((longlong)ppIVar25 + 10) = '\b';
  *(uchar *)((longlong)ppIVar25 + 0xb) = '\0';
  *(uchar *)((longlong)ppIVar25 + 0xc) = '\b';
  *(uchar *)((longlong)ppIVar25 + 0xd) = '\0';
  *(uchar *)((longlong)ppIVar25 + 0xe) = '\x01';
  puVar11 = ::operator_new(0x10);
  puVar24 = puVar20;
  if (puVar11 != (uchar *)0x0) {
    *(uchar **)(puVar11 + 8) = puVar26 + uVar16;
    *(undefined ***)puVar11 =
         &
         ___7__TPlaybackCapabilityDebuggingTypedPtr_PEAUIObjectBindingNotifyPlaybackCapability_MovieScene_UE___MovieScene_UE__6B_
    ;
    puVar24 = puVar11;
  }
  uVar23 = uVar23 - 1;
  *ppIVar25 = (IObjectBindingNotifyPlaybackCapability *)puVar24;
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
      ppIVar25 = local_b0;
      local_c0 = uVar14;
    } while (-1 < (int)uVar23);
  }
  if ((local_d8 != '\0') && (local_c8 != (uchar *)0x0)) {
    FMemory::Free(local_c8);
  }
  local_88.InterfaceCast =
       TPlaybackCapabilityInterfaceCast<UE::MovieScene::IObjectBindingNotifyPlaybackCapability_*>::
       InterfaceCast;
  local_88.Destructor =
       TPlaybackCapabilityDestructor<UE::MovieScene::IObjectBindingNotifyPlaybackCapability_*>::
       Destroy;
  TArray<UE::MovieScene::FPlaybackCapabilityHelpers,TSizedDefaultAllocator<32>_>::Insert
            (&this->Helpers,&local_88,(int)local_98);
  pFVar10 = local_90;
  if (*(ushort *)((longlong)ppIVar25 + 8) != 0xffff) {
    puVar20 = this->Memory + *(ushort *)((longlong)ppIVar25 + 8);
  }
  local_90->Ptr = puVar20 + *(byte *)((longlong)ppIVar25 + 0xd);
  local_90->StorageMode = *(EPlaybackCapabilityStorageMode *)((longlong)ppIVar25 + 0xe);
  if (local_78.AllocatorInstance.SecondaryData != (ForElementType<unsigned_short>)0x0) {
    FMemory::Free((void *)local_78.AllocatorInstance.SecondaryData);
  }
  return pFVar10;
}

// AddCapability<UE::MovieScene::IStaticBindingOverridesPlaybackCapability_*,UE::MovieScene::IStaticBindingOverridesPlaybackCapability,UE::MovieScene::IStaticBindingOverridesPlaybackCapability_*> @ 1461ec570

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

FPlaybackCapabilityPtr * __thiscall
UE::MovieScene::FPlaybackCapabilitiesImpl::
AddCapability<UE::MovieScene::IStaticBindingOverridesPlaybackCapability_*,UE::MovieScene::IStaticBindingOverridesPlaybackCapability,UE::MovieScene::IStaticBindingOverridesPlaybackCapability_*>
          (FPlaybackCapabilitiesImpl *this,FPlaybackCapabilityPtr *__return_storage_ptr__,
          uint param_1,IStaticBindingOverridesPlaybackCapability **param_2)

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
  IStaticBindingOverridesPlaybackCapability **ppIVar25;
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
  IStaticBindingOverridesPlaybackCapability **local_b0;
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
  *(IStaticBindingOverridesPlaybackCapability **)
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
    local_b0 = (IStaticBindingOverridesPlaybackCapability **)
               ((longlong)local_d0 - (longlong)local_b8);
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
  ppIVar25 = (IStaticBindingOverridesPlaybackCapability **)((longlong)local_b8 + lVar21 * 0x10);
  uVar17 = uVar19;
  if ((int)uVar23 < local_78.ArrayNum) {
    uVar17 = ~uVar23 >> 0x1f;
  }
  local_b0 = ppIVar25;
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
  *(uchar *)((longlong)ppIVar25 + 0xf) = '\0';
  *(uchar *)((longlong)ppIVar25 + 0) = '\0';
  *(uchar *)((longlong)ppIVar25 + 1) = '\0';
  *(uchar *)((longlong)ppIVar25 + 2) = '\0';
  *(uchar *)((longlong)ppIVar25 + 3) = '\0';
  *(uchar *)((longlong)ppIVar25 + 4) = '\0';
  *(uchar *)((longlong)ppIVar25 + 5) = '\0';
  *(uchar *)((longlong)ppIVar25 + 6) = '\0';
  *(uchar *)((longlong)ppIVar25 + 7) = '\0';
  ((TRelativePtr<void,unsigned_short> *)((longlong)ppIVar25 + 8))->Offset = 0xffff;
  *(uchar *)((longlong)ppIVar25 + 10) = '\0';
  *(uchar *)((longlong)ppIVar25 + 0xb) = '\0';
  *(uchar *)((longlong)ppIVar25 + 0xc) = '\0';
  *(uchar *)((longlong)ppIVar25 + 0xd) = '\0';
  *(uchar *)((longlong)ppIVar25 + 0xe) = '\0';
  TRelativePtr<void,unsigned_short>::Reset
            ((TRelativePtr<void,unsigned_short> *)((longlong)ppIVar25 + 8),this->Memory,
             puVar26 + uVar16);
  *(uchar *)((longlong)ppIVar25 + 10) = '\b';
  *(uchar *)((longlong)ppIVar25 + 0xb) = '\0';
  *(uchar *)((longlong)ppIVar25 + 0xc) = '\b';
  *(uchar *)((longlong)ppIVar25 + 0xd) = '\0';
  *(uchar *)((longlong)ppIVar25 + 0xe) = '\x01';
  puVar11 = ::operator_new(0x10);
  puVar24 = puVar20;
  if (puVar11 != (uchar *)0x0) {
    *(uchar **)(puVar11 + 8) = puVar26 + uVar16;
    *(undefined ***)puVar11 =
         &
         ___7__TPlaybackCapabilityDebuggingTypedPtr_PEAUIStaticBindingOverridesPlaybackCapability_MovieScene_UE___MovieScene_UE__6B_
    ;
    puVar24 = puVar11;
  }
  uVar23 = uVar23 - 1;
  *ppIVar25 = (IStaticBindingOverridesPlaybackCapability *)puVar24;
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
      ppIVar25 = local_b0;
      local_c0 = uVar14;
    } while (-1 < (int)uVar23);
  }
  if ((local_d8 != '\0') && (local_c8 != (uchar *)0x0)) {
    FMemory::Free(local_c8);
  }
  local_88.InterfaceCast =
       TPlaybackCapabilityInterfaceCast<UE::MovieScene::IStaticBindingOverridesPlaybackCapability_*>
       ::InterfaceCast;
  local_88.Destructor =
       TPlaybackCapabilityDestructor<UE::MovieScene::IStaticBindingOverridesPlaybackCapability_*>::
       Destroy;
  TArray<UE::MovieScene::FPlaybackCapabilityHelpers,TSizedDefaultAllocator<32>_>::Insert
            (&this->Helpers,&local_88,(int)local_98);
  pFVar10 = local_90;
  if (*(ushort *)((longlong)ppIVar25 + 8) != 0xffff) {
    puVar20 = this->Memory + *(ushort *)((longlong)ppIVar25 + 8);
  }
  local_90->Ptr = puVar20 + *(byte *)((longlong)ppIVar25 + 0xd);
  local_90->StorageMode = *(EPlaybackCapabilityStorageMode *)((longlong)ppIVar25 + 0xe);
  if (local_78.AllocatorInstance.SecondaryData != (ForElementType<unsigned_short>)0x0) {
    FMemory::Free((void *)local_78.AllocatorInstance.SecondaryData);
  }
  return pFVar10;
}

// AddCapability<FMovieSceneSpawnRegister_*,FMovieSceneSpawnRegister,FMovieSceneSpawnRegister_*> @ 1461ecee0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

FPlaybackCapabilityPtr * __thiscall
UE::MovieScene::FPlaybackCapabilitiesImpl::
AddCapability<FMovieSceneSpawnRegister_*,FMovieSceneSpawnRegister,FMovieSceneSpawnRegister_*>
          (FPlaybackCapabilitiesImpl *this,FPlaybackCapabilityPtr *__return_storage_ptr__,
          uint param_1,FMovieSceneSpawnRegister **param_2)

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
  FMovieSceneSpawnRegister **ppFVar25;
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
  FMovieSceneSpawnRegister **local_b0;
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
  *(FMovieSceneSpawnRegister **)
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
    local_b0 = (FMovieSceneSpawnRegister **)((longlong)local_d0 - (longlong)local_b8);
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
  ppFVar25 = (FMovieSceneSpawnRegister **)((longlong)local_b8 + lVar21 * 0x10);
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
         ___7__TPlaybackCapabilityDebuggingTypedPtr_PEAVFMovieSceneSpawnRegister___MovieScene_UE__6B_
    ;
    puVar24 = puVar11;
  }
  uVar23 = uVar23 - 1;
  *ppFVar25 = (FMovieSceneSpawnRegister *)puVar24;
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
       TPlaybackCapabilityInterfaceCast<FMovieSceneSpawnRegister_*>::InterfaceCast;
  local_88.Destructor = TPlaybackCapabilityDestructor<FMovieSceneSpawnRegister_*>::Destroy;
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

// AddCapability<IMovieScenePlaybackClient_*,IMovieScenePlaybackClient,IMovieScenePlaybackClient_*> @ 1461ed850

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

FPlaybackCapabilityPtr * __thiscall
UE::MovieScene::FPlaybackCapabilitiesImpl::
AddCapability<IMovieScenePlaybackClient_*,IMovieScenePlaybackClient,IMovieScenePlaybackClient_*>
          (FPlaybackCapabilitiesImpl *this,FPlaybackCapabilityPtr *__return_storage_ptr__,
          uint param_1,IMovieScenePlaybackClient **param_2)

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
  IMovieScenePlaybackClient **ppIVar25;
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
  IMovieScenePlaybackClient **local_b0;
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
  *(IMovieScenePlaybackClient **)
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
    local_b0 = (IMovieScenePlaybackClient **)((longlong)local_d0 - (longlong)local_b8);
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
  ppIVar25 = (IMovieScenePlaybackClient **)((longlong)local_b8 + lVar21 * 0x10);
  uVar17 = uVar19;
  if ((int)uVar23 < local_78.ArrayNum) {
    uVar17 = ~uVar23 >> 0x1f;
  }
  local_b0 = ppIVar25;
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
  *(uchar *)((longlong)ppIVar25 + 0xf) = '\0';
  *(uchar *)((longlong)ppIVar25 + 0) = '\0';
  *(uchar *)((longlong)ppIVar25 + 1) = '\0';
  *(uchar *)((longlong)ppIVar25 + 2) = '\0';
  *(uchar *)((longlong)ppIVar25 + 3) = '\0';
  *(uchar *)((longlong)ppIVar25 + 4) = '\0';
  *(uchar *)((longlong)ppIVar25 + 5) = '\0';
  *(uchar *)((longlong)ppIVar25 + 6) = '\0';
  *(uchar *)((longlong)ppIVar25 + 7) = '\0';
  ((TRelativePtr<void,unsigned_short> *)((longlong)ppIVar25 + 8))->Offset = 0xffff;
  *(uchar *)((longlong)ppIVar25 + 10) = '\0';
  *(uchar *)((longlong)ppIVar25 + 0xb) = '\0';
  *(uchar *)((longlong)ppIVar25 + 0xc) = '\0';
  *(uchar *)((longlong)ppIVar25 + 0xd) = '\0';
  *(uchar *)((longlong)ppIVar25 + 0xe) = '\0';
  TRelativePtr<void,unsigned_short>::Reset
            ((TRelativePtr<void,unsigned_short> *)((longlong)ppIVar25 + 8),this->Memory,
             puVar26 + uVar16);
  *(uchar *)((longlong)ppIVar25 + 10) = '\b';
  *(uchar *)((longlong)ppIVar25 + 0xb) = '\0';
  *(uchar *)((longlong)ppIVar25 + 0xc) = '\b';
  *(uchar *)((longlong)ppIVar25 + 0xd) = '\0';
  *(uchar *)((longlong)ppIVar25 + 0xe) = '\x01';
  puVar11 = ::operator_new(0x10);
  puVar24 = puVar20;
  if (puVar11 != (uchar *)0x0) {
    *(uchar **)(puVar11 + 8) = puVar26 + uVar16;
    *(undefined ***)puVar11 =
         &
         ___7__TPlaybackCapabilityDebuggingTypedPtr_PEAVIMovieScenePlaybackClient___MovieScene_UE__6B_
    ;
    puVar24 = puVar11;
  }
  uVar23 = uVar23 - 1;
  *ppIVar25 = (IMovieScenePlaybackClient *)puVar24;
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
      ppIVar25 = local_b0;
      local_c0 = uVar14;
    } while (-1 < (int)uVar23);
  }
  if ((local_d8 != '\0') && (local_c8 != (uchar *)0x0)) {
    FMemory::Free(local_c8);
  }
  local_88.InterfaceCast =
       TPlaybackCapabilityInterfaceCast<IMovieScenePlaybackClient_*>::InterfaceCast;
  local_88.Destructor = TPlaybackCapabilityDestructor<IMovieScenePlaybackClient_*>::Destroy;
  TArray<UE::MovieScene::FPlaybackCapabilityHelpers,TSizedDefaultAllocator<32>_>::Insert
            (&this->Helpers,&local_88,(int)local_98);
  pFVar10 = local_90;
  if (*(ushort *)((longlong)ppIVar25 + 8) != 0xffff) {
    puVar20 = this->Memory + *(ushort *)((longlong)ppIVar25 + 8);
  }
  local_90->Ptr = puVar20 + *(byte *)((longlong)ppIVar25 + 0xd);
  local_90->StorageMode = *(EPlaybackCapabilityStorageMode *)((longlong)ppIVar25 + 0xe);
  if (local_78.AllocatorInstance.SecondaryData != (ForElementType<unsigned_short>)0x0) {
    FMemory::Free((void *)local_78.AllocatorInstance.SecondaryData);
  }
  return pFVar10;
}

// AddCapability<UE::MovieScene::FEventTriggerControlPlaybackCapability,UE::MovieScene::FEventTriggerControlPlaybackCapability> @ 1461ee1c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

FPlaybackCapabilityPtr * __thiscall
UE::MovieScene::FPlaybackCapabilitiesImpl::
AddCapability<UE::MovieScene::FEventTriggerControlPlaybackCapability,UE::MovieScene::FEventTriggerControlPlaybackCapability>
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
  byte *pbVar12;
  uchar *puVar13;
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
    pbVar12 = puVar26 + 0xc;
    uVar15 = 8;
    do {
      bVar2 = *pbVar12;
      pbVar12 = pbVar12 + 0x10;
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
  uVar16 = lVar22 + 3U & 0xfffffffffffffffc;
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
  uVar16 = uVar16 + 0xc;
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
      puVar13 = puVar21;
      if (puVar27[-1] != 0xffff) {
        puVar13 = puVar26 + puVar27[-1];
      }
      memmove(this->Memory + *(ushort *)((longlong)FVar14 + lVar22 * 2),puVar13,(ulonglong)*puVar27)
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
  puVar13 = this->Memory + *(ushort *)((longlong)FVar14 + (longlong)(int)uVar24 * 2);
  uVar24 = uVar24 - 1;
  puVar13[0] = '\0';
  puVar13[1] = '\0';
  puVar13[2] = '\0';
  puVar13[3] = '\0';
  puVar13[4] = '\0';
  puVar13[5] = '\0';
  puVar13[6] = '\0';
  puVar13[7] = '\0';
  puVar13[8] = '\0';
  puVar13[9] = '\0';
  puVar13[10] = '\0';
  puVar13[0xb] = '\0';
  if (-1 < (int)uVar24) {
    lVar28 = (longlong)(int)uVar24;
    puVar27 = (ushort *)(local_c0 + lVar28 * 0x10 + 10);
    lVar22 = lVar28 * 2;
    do {
      uVar18 = uVar9;
      if ((int)uVar24 < local_70.ArrayNum) {
        uVar18 = ~uVar24 >> 0x1f;
      }
      if ((uVar18 == 0) &&
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
      memmove(this->Memory + *(ushort *)(lVar22 + (longlong)FVar14),puVar25,(ulonglong)*puVar27);
      lVar28 = lVar28 + -1;
      lVar22 = lVar22 + -2;
      puVar27 = puVar27 + -8;
      uVar24 = uVar24 - 1;
      puVar25 = local_b0;
    } while (-1 < (int)uVar24);
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
  puVar26[10] = '\f';
  puVar26[0xb] = '\0';
  puVar26[0xc] = '\x04';
  puVar26[0xd] = '\0';
  puVar26[0xe] = '\0';
  puVar11 = ::operator_new(0x10);
  puVar13 = puVar21;
  if (puVar11 != (uchar *)0x0) {
    *(uchar **)(puVar11 + 8) = puVar25 + uVar17;
    *(undefined ***)puVar11 =
         &
         ___7__TPlaybackCapabilityDebuggingTypedPtr_UFEventTriggerControlPlaybackCapability_MovieScene_UE___MovieScene_UE__6B_
    ;
    puVar13 = puVar11;
  }
  uVar24 = uVar24 - 1;
  *(uchar **)puVar26 = puVar13;
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
       TPlaybackCapabilityInterfaceCast<UE::MovieScene::FEventTriggerControlPlaybackCapability>::
       InterfaceCast;
  local_80.Destructor =
       TPlaybackCapabilityDestructor<UE::MovieScene::FEventTriggerControlPlaybackCapability>::
       Destroy;
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

// AddCapability<UE::MovieScene::FPlayerIndexPlaybackCapability,UE::MovieScene::FPlayerIndexPlaybackCapability,unsigned_short_&> @ 1461eeb10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

FPlaybackCapabilityPtr * __thiscall
UE::MovieScene::FPlaybackCapabilitiesImpl::
AddCapability<UE::MovieScene::FPlayerIndexPlaybackCapability,UE::MovieScene::FPlayerIndexPlaybackCapability,unsigned_short_&>
          (FPlaybackCapabilitiesImpl *this,FPlaybackCapabilityPtr *__return_storage_ptr__,
          uint param_1,ushort *param_2)

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
  uchar *puVar25;
  ushort *puVar26;
  longlong lVar27;
  undefined1 auStack_108 [32];
  longlong local_e8;
  longlong local_e0;
  char local_d8;
  uchar *local_d0;
  uchar *local_c8;
  ulonglong local_c0;
  FPlaybackCapabilitiesImpl *local_b8;
  ushort *local_b0;
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
  puVar25 = this->Memory;
  uVar14 = (ulonglong)uVar23 - ((ulonglong)(uVar23 >> 1) & 0x5555555555555555);
  local_c0 = 8;
  uVar14 = (uVar14 >> 2 & 0x3333333333333333) + (uVar14 & 0x3333333333333333);
  local_98 = ((uVar14 >> 4) + uVar14 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
  if (bVar8 != 0) {
    pbVar12 = puVar25 + 0xc;
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
  local_d0 = puVar25;
  TArray<unsigned_short,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>::SetNum
            (&local_78,uVar23,Default);
  local_a8 = local_98 & 0xffffffff;
  lVar21 = (ulonglong)uVar23 << 4;
  uVar9 = 0;
  uVar17 = uVar19;
  if (local_a8 != 0) {
    puVar26 = (ushort *)(puVar25 + 10);
    uVar15 = local_98 & 0xffffffff;
    puVar25 = puVar20;
    puVar24 = puVar20;
    do {
      uVar17 = (uint)puVar25;
      uVar22 = lVar21 + -1 + (ulonglong)(byte)puVar26[1] & ~((ulonglong)(byte)puVar26[1] - 1);
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
      puVar25 = (uchar *)(ulonglong)uVar17;
      *(short *)((longlong)FVar13 + (longlong)puVar24 * 2) = (short)uVar22;
      puVar24 = puVar24 + 1;
      uVar16 = *puVar26;
      puVar26 = puVar26 + 8;
      lVar21 = uVar22 + uVar16;
    } while ((longlong)puVar24 < (longlong)uVar15);
    this = local_b8;
    uVar23 = (uint)local_c8;
  }
  uVar15 = lVar21 + 1U & 0xfffffffffffffffe;
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
  uVar15 = uVar15 + 2;
  if ((int)uVar18 < (int)uVar23) {
    iVar6 = (uint)local_c8;
    lVar27 = (longlong)(int)uVar18;
    puVar26 = (ushort *)(local_d0 + lVar27 * 0x10 + -6);
    lVar21 = lVar27 * 2;
    do {
      uVar15 = (uVar15 - 1) + (ulonglong)(byte)puVar26[1] & ~((ulonglong)(byte)puVar26[1] - 1);
      uVar23 = 0;
      if ((int)uVar18 < local_78.ArrayNum) {
        uVar23 = ~uVar18 >> 0x1f;
      }
      if ((uVar23 == 0) &&
         (local_e8 = lVar27, local_e0 = (longlong)local_78.ArrayNum,
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
      lVar27 = lVar27 + 1;
      *(short *)((longlong)FVar13 + lVar21) = (short)uVar15;
      lVar21 = lVar21 + 2;
      uVar16 = *puVar26;
      puVar26 = puVar26 + 8;
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
  puVar25 = this->Memory;
  local_c8 = puVar25;
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
    puVar26 = (ushort *)(local_d0 + lVar21 * 0x10 + -6);
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
      if (puVar26[-1] != 0xffff) {
        puVar24 = puVar25 + puVar26[-1];
      }
      memmove(this->Memory + *(ushort *)((longlong)FVar13 + lVar21 * 2),puVar24,(ulonglong)*puVar26)
      ;
      uVar23 = uVar23 - 1;
      lVar21 = lVar21 + -1;
      puVar26 = puVar26 + -8;
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
  puVar25 = local_c8;
  FVar13 = (ForElementType<unsigned_short>)&local_78;
  if (local_78.AllocatorInstance.SecondaryData != (ForElementType<unsigned_short>)0x0) {
    FVar13 = local_78.AllocatorInstance.SecondaryData;
  }
  uVar17 = uVar23 - 1;
  *(ushort *)(this->Memory + *(ushort *)((longlong)FVar13 + (longlong)(int)uVar23 * 2)) = *local_b0;
  if (-1 < (int)uVar17) {
    lVar27 = (longlong)(int)uVar17;
    puVar26 = (ushort *)(local_d0 + lVar27 * 0x10 + 10);
    lVar21 = lVar27 * 2;
    do {
      uVar23 = uVar9;
      if ((int)uVar17 < local_78.ArrayNum) {
        uVar23 = ~uVar17 >> 0x1f;
      }
      if ((uVar23 == 0) &&
         (local_e8 = lVar27, local_e0 = (longlong)local_78.ArrayNum,
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
      if (puVar26[-1] != 0xffff) {
        puVar24 = puVar25 + puVar26[-1];
      }
      memmove(this->Memory + *(ushort *)(lVar21 + (longlong)FVar13),puVar24,(ulonglong)*puVar26);
      lVar27 = lVar27 + -1;
      lVar21 = lVar21 + -2;
      puVar26 = puVar26 + -8;
      uVar17 = uVar17 - 1;
      uVar14 = local_a8;
    } while (-1 < (int)uVar17);
  }
  local_b8 = (FPlaybackCapabilitiesImpl *)this->Memory;
  lVar21 = (ulonglong)this->Num - 1;
  uVar23 = this->Num - 1;
  if ((longlong)uVar14 < lVar21) {
    puVar26 = (ushort *)((longlong)local_b8 + lVar21 * 0x10 + 8);
    local_b0 = (ushort *)((longlong)local_d0 - (longlong)local_b8);
    uVar16 = local_a0;
    do {
      puVar1 = (undefined8 *)((longlong)local_b0 + -0x18 + (longlong)puVar26);
      uVar5 = puVar1[1];
      *(undefined8 *)(puVar26 + -4) = *puVar1;
      *(undefined8 *)puVar26 = uVar5;
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
      *puVar26 = uVar16;
      lVar21 = lVar21 + -1;
      puVar26 = puVar26 + -8;
    } while ((longlong)local_a8 < lVar21);
  }
  lVar21 = (longlong)(int)uVar23;
  puVar26 = (ushort *)((longlong)local_b8 + lVar21 * 0x10);
  uVar17 = uVar19;
  if ((int)uVar23 < local_78.ArrayNum) {
    uVar17 = ~uVar23 >> 0x1f;
  }
  local_b0 = puVar26;
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
  puVar25 = this->Memory;
  *(uchar *)((longlong)puVar26 + 0xf) = '\0';
  *(uchar *)((longlong)puVar26 + 0) = '\0';
  *(uchar *)((longlong)puVar26 + 1) = '\0';
  *(uchar *)((longlong)puVar26 + 2) = '\0';
  *(uchar *)((longlong)puVar26 + 3) = '\0';
  *(uchar *)((longlong)puVar26 + 4) = '\0';
  *(uchar *)((longlong)puVar26 + 5) = '\0';
  *(uchar *)((longlong)puVar26 + 6) = '\0';
  *(uchar *)((longlong)puVar26 + 7) = '\0';
  ((TRelativePtr<void,unsigned_short> *)((longlong)puVar26 + 8))->Offset = 0xffff;
  *(uchar *)((longlong)puVar26 + 10) = '\0';
  *(uchar *)((longlong)puVar26 + 0xb) = '\0';
  *(uchar *)((longlong)puVar26 + 0xc) = '\0';
  *(uchar *)((longlong)puVar26 + 0xd) = '\0';
  *(uchar *)((longlong)puVar26 + 0xe) = '\0';
  TRelativePtr<void,unsigned_short>::Reset
            ((TRelativePtr<void,unsigned_short> *)((longlong)puVar26 + 8),this->Memory,
             puVar25 + uVar16);
  *(uchar *)((longlong)puVar26 + 10) = '\x02';
  *(uchar *)((longlong)puVar26 + 0xb) = '\0';
  *(uchar *)((longlong)puVar26 + 0xc) = '\x02';
  *(uchar *)((longlong)puVar26 + 0xd) = '\0';
  *(uchar *)((longlong)puVar26 + 0xe) = '\0';
  puVar11 = ::operator_new(0x10);
  puVar24 = puVar20;
  if (puVar11 != (uchar *)0x0) {
    *(uchar **)(puVar11 + 8) = puVar25 + uVar16;
    *(undefined ***)puVar11 =
         &
         ___7__TPlaybackCapabilityDebuggingTypedPtr_UFPlayerIndexPlaybackCapability_MovieScene_UE___MovieScene_UE__6B_
    ;
    puVar24 = puVar11;
  }
  uVar23 = uVar23 - 1;
  *(uchar **)puVar26 = puVar24;
  if (-1 < (int)uVar23) {
    lVar21 = (longlong)(int)uVar23;
    puVar25 = (uchar *)((longlong)local_b8 + lVar21 * 0x10);
    local_d0 = local_d0 + -(longlong)local_b8;
    uVar14 = lVar21 * 2;
    uVar16 = local_9e;
    do {
      uVar5 = *(undefined8 *)(puVar25 + (longlong)local_d0 + 8);
      *(undefined8 *)puVar25 = *(undefined8 *)(puVar25 + (longlong)local_d0);
      *(undefined8 *)(puVar25 + 8) = uVar5;
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
      *(ushort *)(puVar25 + 8) = uVar16;
      puVar25 = puVar25 + -0x10;
      uVar23 = uVar23 - 1;
      puVar26 = local_b0;
      local_c0 = uVar14;
    } while (-1 < (int)uVar23);
  }
  if ((local_d8 != '\0') && (local_c8 != (uchar *)0x0)) {
    FMemory::Free(local_c8);
  }
  local_88.InterfaceCast =
       TPlaybackCapabilityInterfaceCast<UE::MovieScene::FPlayerIndexPlaybackCapability>::
       InterfaceCast;
  local_88.Destructor =
       TPlaybackCapabilityDestructor<UE::MovieScene::FPlayerIndexPlaybackCapability>::Destroy;
  TArray<UE::MovieScene::FPlaybackCapabilityHelpers,TSizedDefaultAllocator<32>_>::Insert
            (&this->Helpers,&local_88,(int)local_98);
  pFVar10 = local_90;
  if (*(ushort *)((longlong)puVar26 + 8) != 0xffff) {
    puVar20 = this->Memory + *(ushort *)((longlong)puVar26 + 8);
  }
  local_90->Ptr = puVar20 + *(byte *)((longlong)puVar26 + 0xd);
  local_90->StorageMode = *(EPlaybackCapabilityStorageMode *)((longlong)puVar26 + 0xe);
  if (local_78.AllocatorInstance.SecondaryData != (ForElementType<unsigned_short>)0x0) {
    FMemory::Free((void *)local_78.AllocatorInstance.SecondaryData);
  }
  return pFVar10;
}

// AddCapability<UE::MovieScene::FSequenceDirectorPlaybackCapability,UE::MovieScene::FSequenceDirectorPlaybackCapability> @ 1461ef480

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

FPlaybackCapabilityPtr * __thiscall
UE::MovieScene::FPlaybackCapabilitiesImpl::
AddCapability<UE::MovieScene::FSequenceDirectorPlaybackCapability,UE::MovieScene::FSequenceDirectorPlaybackCapability>
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
  uVar16 = uVar16 + 0x28;
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
  *(undefined ***)(puVar11 + uVar15) = &___7FSequenceDirectorPlaybackCapability_MovieScene_UE__6B_;
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
  puVar12 = puVar11 + uVar15 + 0x18;
  puVar12[0] = '\0';
  puVar12[1] = '\0';
  puVar12[2] = '\0';
  puVar12[3] = '\0';
  puVar12[4] = '\0';
  puVar12[5] = '\0';
  puVar12[6] = '\0';
  puVar12[7] = '\0';
  puVar11[uVar15 + 0x20] = '\x01';
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
      memmove(this->Memory + *(ushort *)(lVar22 + (longlong)FVar14),puVar25,(ulonglong)*puVar27);
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
  puVar26[10] = '(';
  puVar26[0xb] = '\0';
  puVar26[0xc] = '\b';
  puVar26[0xd] = '\0';
  puVar26[0xe] = '\0';
  puVar11 = ::operator_new(0x10);
  puVar12 = puVar21;
  if (puVar11 != (uchar *)0x0) {
    *(uchar **)(puVar11 + 8) = puVar25 + uVar17;
    *(undefined ***)puVar11 =
         &
         ___7__TPlaybackCapabilityDebuggingTypedPtr_UFSequenceDirectorPlaybackCapability_MovieScene_UE___MovieScene_UE__6B_
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
       TPlaybackCapabilityInterfaceCast<UE::MovieScene::FSequenceDirectorPlaybackCapability>::
       InterfaceCast;
  local_80.Destructor =
       TPlaybackCapabilityDestructor<UE::MovieScene::FSequenceDirectorPlaybackCapability>::Destroy;
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

// AddCapability<TSharedPtr<FMovieSceneEvaluationState,1>,FMovieSceneEvaluationState,TSharedRef<FMovieSceneEvaluationState,1>_> @ 1461efdf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

FPlaybackCapabilityPtr * __thiscall
UE::MovieScene::FPlaybackCapabilitiesImpl::
AddCapability<TSharedPtr<FMovieSceneEvaluationState,1>,FMovieSceneEvaluationState,TSharedRef<FMovieSceneEvaluationState,1>_>
          (FPlaybackCapabilitiesImpl *this,FPlaybackCapabilityPtr *__return_storage_ptr__,
          uint param_1,TSharedRef<FMovieSceneEvaluationState,1> *param_2)

{
  undefined8 *puVar1;
  byte bVar2;
  ushort uVar3;
  TReferenceControllerBase<1> *pTVar4;
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
  TSharedRef<FMovieSceneEvaluationState,1> *pTVar26;
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
  TSharedRef<FMovieSceneEvaluationState,1> *local_b0;
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
  puVar27 = local_c8;
  FVar14 = (ForElementType<unsigned_short>)&local_78;
  if (local_78.AllocatorInstance.SecondaryData != (ForElementType<unsigned_short>)0x0) {
    FVar14 = local_78.AllocatorInstance.SecondaryData;
  }
  uVar17 = *(ushort *)((longlong)FVar14 + (longlong)(int)uVar24 * 2);
  puVar25 = this->Memory;
  *(FMovieSceneEvaluationState **)(puVar25 + uVar17) = local_b0->Object;
  pTVar4 = (local_b0->SharedReferenceCount).ReferenceController;
  *(TReferenceControllerBase<1> **)(puVar25 + uVar17 + 8) = pTVar4;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
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
    local_b0 = (TSharedRef<FMovieSceneEvaluationState,1> *)((longlong)local_d0 - (longlong)local_b8)
    ;
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
  pTVar26 = (TSharedRef<FMovieSceneEvaluationState,1> *)((longlong)local_b8 + lVar22 * 0x10);
  uVar18 = uVar20;
  if ((int)uVar24 < local_78.ArrayNum) {
    uVar18 = ~uVar24 >> 0x1f;
  }
  local_b0 = pTVar26;
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
  *(uchar *)((longlong)pTVar26 + 0xf) = '\0';
  *(uchar *)((longlong)pTVar26 + 0) = '\0';
  *(uchar *)((longlong)pTVar26 + 1) = '\0';
  *(uchar *)((longlong)pTVar26 + 2) = '\0';
  *(uchar *)((longlong)pTVar26 + 3) = '\0';
  *(uchar *)((longlong)pTVar26 + 4) = '\0';
  *(uchar *)((longlong)pTVar26 + 5) = '\0';
  *(uchar *)((longlong)pTVar26 + 6) = '\0';
  *(uchar *)((longlong)pTVar26 + 7) = '\0';
  ((TRelativePtr<void,unsigned_short> *)((longlong)pTVar26 + 8))->Offset = 0xffff;
  *(uchar *)((longlong)pTVar26 + 10) = '\0';
  *(uchar *)((longlong)pTVar26 + 0xb) = '\0';
  *(uchar *)((longlong)pTVar26 + 0xc) = '\0';
  *(uchar *)((longlong)pTVar26 + 0xd) = '\0';
  *(uchar *)((longlong)pTVar26 + 0xe) = '\0';
  TRelativePtr<void,unsigned_short>::Reset
            ((TRelativePtr<void,unsigned_short> *)((longlong)pTVar26 + 8),this->Memory,
             puVar27 + uVar17);
  *(uchar *)((longlong)pTVar26 + 10) = '\x10';
  *(uchar *)((longlong)pTVar26 + 0xb) = '\0';
  *(uchar *)((longlong)pTVar26 + 0xc) = '\b';
  *(uchar *)((longlong)pTVar26 + 0xd) = '\0';
  *(uchar *)((longlong)pTVar26 + 0xe) = '\x02';
  puVar12 = ::operator_new(0x10);
  puVar25 = puVar21;
  if (puVar12 != (uchar *)0x0) {
    *(uchar **)(puVar12 + 8) = puVar27 + uVar17;
    *(undefined ***)puVar12 =
         &
         ___7__TPlaybackCapabilityDebuggingTypedPtr_V__TSharedPtr_UFMovieSceneEvaluationState___00___MovieScene_UE__6B_
    ;
    puVar25 = puVar12;
  }
  uVar24 = uVar24 - 1;
  *(uchar **)pTVar26 = puVar25;
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
      pTVar26 = local_b0;
      local_c0 = uVar15;
    } while (-1 < (int)uVar24);
  }
  if ((local_d8 != '\0') && (local_c8 != (uchar *)0x0)) {
    FMemory::Free(local_c8);
  }
  local_88.InterfaceCast =
       TPlaybackCapabilityInterfaceCast<TSharedPtr<FMovieSceneEvaluationState,1>_>::InterfaceCast;
  local_88.Destructor =
       TPlaybackCapabilityDestructor<TSharedPtr<FMovieSceneEvaluationState,1>_>::Destroy;
  TArray<UE::MovieScene::FPlaybackCapabilityHelpers,TSizedDefaultAllocator<32>_>::Insert
            (&this->Helpers,&local_88,(int)local_98);
  pFVar11 = local_90;
  if (*(ushort *)((longlong)pTVar26 + 8) != 0xffff) {
    puVar21 = this->Memory + *(ushort *)((longlong)pTVar26 + 8);
  }
  local_90->Ptr = puVar21 + *(byte *)((longlong)pTVar26 + 0xd);
  local_90->StorageMode = *(EPlaybackCapabilityStorageMode *)((longlong)pTVar26 + 0xe);
  if (local_78.AllocatorInstance.SecondaryData != (ForElementType<unsigned_short>)0x0) {
    FMemory::Free((void *)local_78.AllocatorInstance.SecondaryData);
  }
  return pFVar11;
}

// OverwriteCapability<UE::MovieScene::FEventTriggerControlPlaybackCapability,UE::MovieScene::FEventTriggerControlPlaybackCapability> @ 1461fad40

bool __thiscall
UE::MovieScene::FPlaybackCapabilitiesImpl::
OverwriteCapability<UE::MovieScene::FEventTriggerControlPlaybackCapability,UE::MovieScene::FEventTriggerControlPlaybackCapability>
          (FPlaybackCapabilitiesImpl *this,uint param_1)

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
  undefined1 local_res18 [16];
  
  if ((this->AllCapabilities & param_1) == 0) {
    local_res10[0] = 0;
    bVar3 = `UE::MovieScene::FPlaybackCapabilitiesImpl::
            OverwriteCapability<UE::MovieScene::FEventTriggerControlPlaybackCapability,UE::MovieScene::FEventTriggerControlPlaybackCapability>'
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
  if (*(char *)((longlong)plVar10 + 0xe) != '\0') {
    local_res8[0] = 0;
    bVar3 = `UE::MovieScene::FPlaybackCapabilitiesImpl::
            OverwriteCapability<UE::MovieScene::FEventTriggerControlPlaybackCapability,UE::MovieScene::FEventTriggerControlPlaybackCapability>'
            ::__l6::<lambda_2>::operator()(local_res8);
    if (!bVar3) {
      return false;
    }
  }
  if ((*(short *)((longlong)plVar10 + 10) != 0xc) || (*(char *)((longlong)plVar10 + 0xc) != '\x04'))
  {
    local_res18[0] = 0;
    bVar3 = `UE::MovieScene::FPlaybackCapabilitiesImpl::
            OverwriteCapability<UE::MovieScene::FEventTriggerControlPlaybackCapability,UE::MovieScene::FEventTriggerControlPlaybackCapability>'
            ::__l9::<lambda_3>::operator()(local_res18);
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
  puVar9[0] = '\0';
  puVar9[1] = '\0';
  puVar9[2] = '\0';
  puVar9[3] = '\0';
  puVar9[4] = '\0';
  puVar9[5] = '\0';
  puVar9[6] = '\0';
  puVar9[7] = '\0';
  puVar9[8] = '\0';
  puVar9[9] = '\0';
  puVar9[10] = '\0';
  puVar9[0xb] = '\0';
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
       TPlaybackCapabilityInterfaceCast<UE::MovieScene::FEventTriggerControlPlaybackCapability>::
       InterfaceCast;
  *(code **)(pFVar1 + lVar8 * 0x10 + 8) =
       TPlaybackCapabilityDestructor<UE::MovieScene::FEventTriggerControlPlaybackCapability>::
       Destroy;
  puVar7 = (undefined8 *)*plVar10;
  if (puVar7 != (undefined8 *)0x0) {
    (**(code **)*puVar7)(puVar7,1);
  }
  puVar7 = ::operator_new(0x10);
  if (puVar7 != (undefined8 *)0x0) {
    puVar7[1] = puVar9;
    *puVar7 = &
              ___7__TPlaybackCapabilityDebuggingTypedPtr_UFEventTriggerControlPlaybackCapability_MovieScene_UE___MovieScene_UE__6B_
    ;
  }
  *plVar10 = (longlong)puVar7;
  return true;
}

// AddCapability<UE::MovieScene::Tests::FTestCapabilityBase_*,UE::MovieScene::Tests::FTestCapabilityBase,UE::MovieScene::Tests::FTestCapabilityBase_*> @ 146273c30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

FPlaybackCapabilityPtr * __thiscall
UE::MovieScene::FPlaybackCapabilitiesImpl::
AddCapability<UE::MovieScene::Tests::FTestCapabilityBase_*,UE::MovieScene::Tests::FTestCapabilityBase,UE::MovieScene::Tests::FTestCapabilityBase_*>
          (FPlaybackCapabilitiesImpl *this,FPlaybackCapabilityPtr *__return_storage_ptr__,
          uint param_1,FTestCapabilityBase **param_2)

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
  FTestCapabilityBase **ppFVar25;
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
  FTestCapabilityBase **local_b0;
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
  *(FTestCapabilityBase **)
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
    local_b0 = (FTestCapabilityBase **)((longlong)local_d0 - (longlong)local_b8);
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
  ppFVar25 = (FTestCapabilityBase **)((longlong)local_b8 + lVar21 * 0x10);
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
         ___7__TPlaybackCapabilityDebuggingTypedPtr_PEAUFTestCapabilityBase_Tests_MovieScene_UE___MovieScene_UE__6B_
    ;
    puVar24 = puVar11;
  }
  uVar23 = uVar23 - 1;
  *ppFVar25 = (FTestCapabilityBase *)puVar24;
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
       TPlaybackCapabilityInterfaceCast<UE::MovieScene::Tests::FTestCapabilityBase_*>::InterfaceCast
  ;
  local_88.Destructor =
       TPlaybackCapabilityDestructor<UE::MovieScene::Tests::FTestCapabilityBase_*>::Destroy;
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

// AddCapability<UE::MovieScene::Tests::FTestInvalidatableCapability_*,UE::MovieScene::Tests::FTestInvalidatableCapability,UE::MovieScene::Tests::FTestInvalidatableCapability_*> @ 1462745a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

FPlaybackCapabilityPtr * __thiscall
UE::MovieScene::FPlaybackCapabilitiesImpl::
AddCapability<UE::MovieScene::Tests::FTestInvalidatableCapability_*,UE::MovieScene::Tests::FTestInvalidatableCapability,UE::MovieScene::Tests::FTestInvalidatableCapability_*>
          (FPlaybackCapabilitiesImpl *this,FPlaybackCapabilityPtr *__return_storage_ptr__,
          uint param_1,FTestInvalidatableCapability **param_2)

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
  FTestInvalidatableCapability **ppFVar25;
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
  FTestInvalidatableCapability **local_b0;
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
  *(FTestInvalidatableCapability **)
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
    local_b0 = (FTestInvalidatableCapability **)((longlong)local_d0 - (longlong)local_b8);
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
  ppFVar25 = (FTestInvalidatableCapability **)((longlong)local_b8 + lVar21 * 0x10);
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
         ___7__TPlaybackCapabilityDebuggingTypedPtr_PEAUFTestInvalidatableCapability_Tests_MovieScene_UE___MovieScene_UE__6B_
    ;
    puVar24 = puVar11;
  }
  uVar23 = uVar23 - 1;
  *ppFVar25 = (FTestInvalidatableCapability *)puVar24;
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
       TPlaybackCapabilityInterfaceCast<UE::MovieScene::Tests::FTestInvalidatableCapability_*>::
       InterfaceCast;
  local_88.Destructor =
       TPlaybackCapabilityDestructor<UE::MovieScene::Tests::FTestInvalidatableCapability_*>::Destroy
  ;
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

// AddCapability<UE::MovieScene::Tests::FTestOtherSimpleCapability_*,UE::MovieScene::Tests::FTestOtherSimpleCapability,UE::MovieScene::Tests::FTestOtherSimpleCapability_*> @ 146274f10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

FPlaybackCapabilityPtr * __thiscall
UE::MovieScene::FPlaybackCapabilitiesImpl::
AddCapability<UE::MovieScene::Tests::FTestOtherSimpleCapability_*,UE::MovieScene::Tests::FTestOtherSimpleCapability,UE::MovieScene::Tests::FTestOtherSimpleCapability_*>
          (FPlaybackCapabilitiesImpl *this,FPlaybackCapabilityPtr *__return_storage_ptr__,
          uint param_1,FTestOtherSimpleCapability **param_2)

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
  FTestOtherSimpleCapability **ppFVar25;
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
  FTestOtherSimpleCapability **local_b0;
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
  *(FTestOtherSimpleCapability **)
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
    local_b0 = (FTestOtherSimpleCapability **)((longlong)local_d0 - (longlong)local_b8);
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
  ppFVar25 = (FTestOtherSimpleCapability **)((longlong)local_b8 + lVar21 * 0x10);
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
         ___7__TPlaybackCapabilityDebuggingTypedPtr_PEAUFTestOtherSimpleCapability_Tests_MovieScene_UE___MovieScene_UE__6B_
    ;
    puVar24 = puVar11;
  }
  uVar23 = uVar23 - 1;
  *ppFVar25 = (FTestOtherSimpleCapability *)puVar24;
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
       TPlaybackCapabilityInterfaceCast<UE::MovieScene::Tests::FTestOtherSimpleCapability_*>::
       InterfaceCast;
  local_88.Destructor =
       TPlaybackCapabilityDestructor<UE::MovieScene::Tests::FTestOtherSimpleCapability_*>::Destroy;
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

// AddCapability<UE::MovieScene::Tests::FTestSimpleCapability_*,UE::MovieScene::Tests::FTestSimpleCapability,UE::MovieScene::Tests::FTestSimpleCapability_*> @ 146275880

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

FPlaybackCapabilityPtr * __thiscall
UE::MovieScene::FPlaybackCapabilitiesImpl::
AddCapability<UE::MovieScene::Tests::FTestSimpleCapability_*,UE::MovieScene::Tests::FTestSimpleCapability,UE::MovieScene::Tests::FTestSimpleCapability_*>
          (FPlaybackCapabilitiesImpl *this,FPlaybackCapabilityPtr *__return_storage_ptr__,
          uint param_1,FTestSimpleCapability **param_2)

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
  FTestSimpleCapability **ppFVar25;
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
  FTestSimpleCapability **local_b0;
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
  *(FTestSimpleCapability **)
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
    local_b0 = (FTestSimpleCapability **)((longlong)local_d0 - (longlong)local_b8);
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
  ppFVar25 = (FTestSimpleCapability **)((longlong)local_b8 + lVar21 * 0x10);
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
         ___7__TPlaybackCapabilityDebuggingTypedPtr_PEAUFTestSimpleCapability_Tests_MovieScene_UE___MovieScene_UE__6B_
    ;
    puVar24 = puVar11;
  }
  uVar23 = uVar23 - 1;
  *ppFVar25 = (FTestSimpleCapability *)puVar24;
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
       TPlaybackCapabilityInterfaceCast<UE::MovieScene::Tests::FTestSimpleCapability_*>::
       InterfaceCast;
  local_88.Destructor =
       TPlaybackCapabilityDestructor<UE::MovieScene::Tests::FTestSimpleCapability_*>::Destroy;
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

// AddCapability<UE::MovieScene::Tests::FTestCapabilityDerived,UE::MovieScene::Tests::FTestCapabilityBase,int,wchar_t_const_(&)[28]> @ 1462761f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

FPlaybackCapabilityPtr * __thiscall
UE::MovieScene::FPlaybackCapabilitiesImpl::
AddCapability<UE::MovieScene::Tests::FTestCapabilityDerived,UE::MovieScene::Tests::FTestCapabilityBase,int,wchar_t_const_(&)[28]>
          (FPlaybackCapabilitiesImpl *this,FPlaybackCapabilityPtr *__return_storage_ptr__,
          uint param_1,int *param_2,wchar_t (*param_3) [28])

{
  int *piVar1;
  byte bVar2;
  ushort uVar3;
  uchar *puVar4;
  uchar *puVar5;
  code *pcVar6;
  undefined8 uVar7;
  ForAnyElementType _Src;
  bool bVar8;
  byte bVar9;
  bool bVar10;
  uint uVar11;
  FPlaybackCapabilityPtr *pFVar12;
  ulonglong uVar13;
  uchar *puVar14;
  ulonglong uVar15;
  byte *pbVar16;
  ForElementType<unsigned_short> FVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar23;
  uint uVar24;
  uchar *puVar25;
  uchar *puVar26;
  longlong lVar27;
  longlong lVar28;
  uint uVar29;
  uchar *puVar30;
  ushort *puVar31;
  ForAnyElementType *pFVar32;
  undefined1 auStackY_128 [32];
  ushort local_b0;
  ushort local_ae;
  uint local_a8;
  FString local_90;
  FPlaybackCapabilityHelpers local_80;
  TArray<unsigned_short,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> local_70;
  ulonglong local_40;
  uchar *puVar22;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_128;
  if (((this->AllCapabilities & param_1) != 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(AllCapabilities & CapabilityBit) == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\MovieScenePlaybackCapabilities.h"
                         ,0x117,L"Capability already exists!"), bVar8)) {
    pcVar6 = (code *)swi(3);
    pFVar12 = (FPlaybackCapabilityPtr *)(*pcVar6)();
    return pFVar12;
  }
  this->AllCapabilities = this->AllCapabilities | param_1;
  bVar9 = this->Num;
  uVar19 = (ulonglong)bVar9;
  uVar24 = param_1 - 1 & this->AllCapabilities;
  puVar4 = this->Memory;
  uVar18 = (ulonglong)uVar24 - ((ulonglong)(uVar24 >> 1) & 0x5555555555555555);
  uVar24 = 8;
  uVar18 = (uVar18 >> 2 & 0x3333333333333333) + (uVar18 & 0x3333333333333333);
  uVar18 = ((uVar18 >> 4) + uVar18 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
  uVar15 = uVar18 >> 0x38;
  if (bVar9 != 0) {
    pbVar16 = puVar4 + 0xc;
    uVar20 = 8;
    do {
      bVar2 = *pbVar16;
      pbVar16 = pbVar16 + 0x10;
      uVar24 = (uint)bVar2;
      if (bVar2 < uVar20) {
        uVar24 = uVar20;
      }
      uVar19 = uVar19 - 1;
      uVar20 = uVar24;
    } while (uVar19 != 0);
  }
  puVar30 = (uchar *)0x0;
  uVar29 = 0;
  local_70.ArrayMax = 0x10;
  uVar23 = bVar9 + 1;
  local_70.AllocatorInstance.SecondaryData = (ForElementType<unsigned_short>)0x0;
  local_70.ArrayNum = 0;
  TArray<unsigned_short,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>::SetNum
            (&local_70,uVar23,Default);
  lVar27 = (ulonglong)uVar23 << 4;
  uVar11 = 0;
  uVar20 = uVar29;
  if (uVar15 != 0) {
    puVar31 = (ushort *)(puVar4 + 10);
    puVar22 = puVar30;
    puVar25 = puVar30;
    do {
      uVar20 = (uint)puVar22;
      uVar19 = lVar27 + -1 + (ulonglong)(byte)puVar31[1] & ~((ulonglong)(byte)puVar31[1] - 1);
      uVar21 = uVar11;
      if ((int)uVar20 < local_70.ArrayNum) {
        uVar21 = ~uVar20 >> 0x1f;
      }
      if ((uVar21 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        pFVar12 = (FPlaybackCapabilityPtr *)(*pcVar6)();
        return pFVar12;
      }
      FVar17 = (ForElementType<unsigned_short>)&local_70;
      if (local_70.AllocatorInstance.SecondaryData != (ForElementType<unsigned_short>)0x0) {
        FVar17 = local_70.AllocatorInstance.SecondaryData;
      }
      uVar20 = uVar20 + 1;
      puVar22 = (uchar *)(ulonglong)uVar20;
      *(short *)((longlong)FVar17 + (longlong)puVar25 * 2) = (short)uVar19;
      puVar25 = puVar25 + 1;
      uVar3 = *puVar31;
      puVar31 = puVar31 + 8;
      lVar27 = uVar19 + uVar3;
    } while ((longlong)puVar25 < (longlong)(uVar18 >> 0x38));
  }
  uVar19 = lVar27 + 7U & 0xfffffffffffffff8;
  uVar21 = uVar11;
  if ((int)uVar20 < local_70.ArrayNum) {
    uVar21 = ~uVar20 >> 0x1f;
  }
  if ((uVar21 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar6 = (code *)swi(3);
    pFVar12 = (FPlaybackCapabilityPtr *)(*pcVar6)();
    return pFVar12;
  }
  FVar17 = (ForElementType<unsigned_short>)&local_70;
  if (local_70.AllocatorInstance.SecondaryData != (ForElementType<unsigned_short>)0x0) {
    FVar17 = local_70.AllocatorInstance.SecondaryData;
  }
  uVar21 = uVar20 + 1;
  *(short *)((longlong)FVar17 + (longlong)(int)uVar20 * 2) = (short)uVar19;
  uVar19 = uVar19 + 0x28;
  if ((int)uVar21 < (int)uVar23) {
    puVar31 = (ushort *)(puVar4 + (longlong)(int)uVar21 * 0x10 + -6);
    lVar27 = (longlong)(int)uVar21 * 2;
    do {
      uVar19 = (uVar19 - 1) + (ulonglong)(byte)puVar31[1] & ~((ulonglong)(byte)puVar31[1] - 1);
      uVar20 = 0;
      if ((int)uVar21 < local_70.ArrayNum) {
        uVar20 = ~uVar21 >> 0x1f;
      }
      if ((uVar20 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        pFVar12 = (FPlaybackCapabilityPtr *)(*pcVar6)();
        return pFVar12;
      }
      FVar17 = (ForElementType<unsigned_short>)&local_70;
      if (local_70.AllocatorInstance.SecondaryData != (ForElementType<unsigned_short>)0x0) {
        FVar17 = local_70.AllocatorInstance.SecondaryData;
      }
      uVar21 = uVar21 + 1;
      *(short *)((longlong)FVar17 + lVar27) = (short)uVar19;
      lVar27 = lVar27 + 2;
      uVar3 = *puVar31;
      puVar31 = puVar31 + 8;
      uVar19 = uVar19 + uVar3;
    } while ((int)uVar21 < (int)uVar23);
  }
  if ((0xff < uVar24) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("RequiredAlignment <= 0XFF",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\MovieScenePlaybackCapabilities.h"
                         ,0x155,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    pFVar12 = (FPlaybackCapabilityPtr *)(*pcVar6)();
    return pFVar12;
  }
  puVar22 = this->Memory;
  if ((this->Alignment < uVar24) || (this->Capacity < uVar19)) {
    uVar13 = (ulonglong)this->Capacity * 2;
    bVar8 = true;
    if (uVar13 < uVar19) {
      uVar13 = uVar19 & 0xffff;
    }
    this->Capacity = (ushort)uVar13;
    puVar25 = FMemory::Malloc(uVar13 & 0xffff,uVar24);
    this->Memory = puVar25;
  }
  else {
    bVar8 = false;
  }
  bVar9 = this->Num + 1;
  this->Num = bVar9;
  lVar27 = (ulonglong)bVar9 - 1;
  uVar24 = bVar9 - 1;
  if ((longlong)uVar15 < lVar27) {
    puVar31 = (ushort *)(puVar4 + lVar27 * 0x10 + -6);
    do {
      uVar20 = uVar11;
      if ((int)uVar24 < local_70.ArrayNum) {
        uVar20 = ~uVar24 >> 0x1f;
      }
      if ((uVar20 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar6 = (code *)swi(3);
        pFVar12 = (FPlaybackCapabilityPtr *)(*pcVar6)();
        return pFVar12;
      }
      FVar17 = (ForElementType<unsigned_short>)&local_70;
      if (local_70.AllocatorInstance.SecondaryData != (ForElementType<unsigned_short>)0x0) {
        FVar17 = local_70.AllocatorInstance.SecondaryData;
      }
      puVar25 = puVar30;
      if (puVar31[-1] != 0xffff) {
        puVar25 = puVar22 + puVar31[-1];
      }
      memmove(this->Memory + *(ushort *)((longlong)FVar17 + lVar27 * 2),puVar25,(ulonglong)*puVar31)
      ;
      uVar24 = uVar24 - 1;
      lVar27 = lVar27 + -1;
      puVar31 = puVar31 + -8;
    } while ((longlong)uVar15 < lVar27);
  }
  uVar20 = uVar11;
  if ((int)uVar24 < local_70.ArrayNum) {
    uVar20 = ~uVar24 >> 0x1f;
  }
  if ((uVar20 == 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar10)) {
    pcVar6 = (code *)swi(3);
    pFVar12 = (FPlaybackCapabilityPtr *)(*pcVar6)();
    return pFVar12;
  }
  puVar25 = this->Memory;
  FVar17 = (ForElementType<unsigned_short>)&local_70;
  if (local_70.AllocatorInstance.SecondaryData != (ForElementType<unsigned_short>)0x0) {
    FVar17 = local_70.AllocatorInstance.SecondaryData;
  }
  uVar19 = (ulonglong)*(ushort *)((longlong)FVar17 + (longlong)(int)uVar24 * 2);
  ::FString::FString(&local_90,*param_3);
  _Src.Data = local_90.Data.AllocatorInstance.Data;
  pFVar32 = (ForAnyElementType *)(puVar25 + uVar19 + 0x18);
  *(int *)(puVar25 + uVar19 + 0x10) = *param_2;
  piVar1 = (int *)((longlong)&pFVar32[1].Data + 4);
  *(undefined ***)(puVar25 + uVar19) = &___7FTestCapabilityDerived_Tests_MovieScene_UE__6B_;
  puVar25 = puVar25 + uVar19 + 8;
  puVar25[0] = '\0';
  puVar25[1] = '\0';
  puVar25[2] = '\0';
  puVar25[3] = '\0';
  pFVar32->Data = (FScriptContainerElement *)0x0;
  *(int *)&pFVar32[1].Data = local_90.Data.ArrayNum;
  if (local_90.Data.ArrayNum == 0) {
    *piVar1 = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_90.Data.ArrayNum,0,pFVar32,local_90.Data.ArrayNum,piVar1);
    memcpy(pFVar32->Data,_Src.Data,(longlong)local_90.Data.ArrayNum * 2);
  }
  if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_90.Data.AllocatorInstance.Data);
  }
  uVar24 = uVar24 - 1;
  if (-1 < (int)uVar24) {
    puVar31 = (ushort *)(puVar4 + (longlong)(int)uVar24 * 0x10 + 10);
    lVar27 = (longlong)(int)uVar24 * 2;
    do {
      uVar20 = uVar11;
      if ((int)uVar24 < local_70.ArrayNum) {
        uVar20 = ~uVar24 >> 0x1f;
      }
      if ((uVar20 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar6 = (code *)swi(3);
        pFVar12 = (FPlaybackCapabilityPtr *)(*pcVar6)();
        return pFVar12;
      }
      FVar17 = (ForElementType<unsigned_short>)&local_70;
      if (local_70.AllocatorInstance.SecondaryData != (ForElementType<unsigned_short>)0x0) {
        FVar17 = local_70.AllocatorInstance.SecondaryData;
      }
      puVar25 = puVar30;
      if (puVar31[-1] != 0xffff) {
        puVar25 = puVar22 + puVar31[-1];
      }
      memmove(this->Memory + *(ushort *)(lVar27 + (longlong)FVar17),puVar25,(ulonglong)*puVar31);
      lVar27 = lVar27 + -2;
      puVar31 = puVar31 + -8;
      uVar24 = uVar24 - 1;
    } while (-1 < (int)uVar24);
  }
  puVar25 = this->Memory;
  lVar27 = (ulonglong)this->Num - 1;
  uVar24 = this->Num - 1;
  if ((longlong)uVar15 < lVar27) {
    puVar31 = (ushort *)(puVar25 + lVar27 * 0x10 + 8);
    do {
      uVar7 = *(undefined8 *)(puVar4 + (-0x18 - (longlong)puVar25) + (longlong)puVar31 + 8);
      *(undefined8 *)(puVar31 + -4) =
           *(undefined8 *)(puVar4 + (-0x18 - (longlong)puVar25) + (longlong)puVar31);
      *(undefined8 *)puVar31 = uVar7;
      uVar20 = uVar29;
      if ((int)uVar24 < local_70.ArrayNum) {
        uVar20 = ~uVar24 >> 0x1f;
      }
      if ((uVar20 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar6 = (code *)swi(3);
        pFVar12 = (FPlaybackCapabilityPtr *)(*pcVar6)();
        return pFVar12;
      }
      FVar17 = (ForElementType<unsigned_short>)&local_70;
      if (local_70.AllocatorInstance.SecondaryData != (ForElementType<unsigned_short>)0x0) {
        FVar17 = local_70.AllocatorInstance.SecondaryData;
      }
      uVar3 = *(ushort *)((longlong)FVar17 + lVar27 * 2);
      if (this->Memory + uVar3 < this->Memory) {
        bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("false",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\RelativePtr.h"
                            ,0x46,
                            L"Attempting to assign a negative offset to an unsigned relative pointer!!"
                           );
        if (bVar10) {
          pcVar6 = (code *)swi(3);
          pFVar12 = (FPlaybackCapabilityPtr *)(*pcVar6)();
          return pFVar12;
        }
      }
      else {
        local_b0 = uVar3;
        if ((uVar3 == 0xffff) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("OffsetPtr >= 0 && OffsetPtr < std::numeric_limits<OffsetType>::max()"
                                ,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\RelativePtr.h"
                                ,0x3a,
                                L"Attempting to create a relative pointer outside the bounds of its capacity."
                               ), bVar10)) {
          pcVar6 = (code *)swi(3);
          pFVar12 = (FPlaybackCapabilityPtr *)(*pcVar6)();
          return pFVar12;
        }
      }
      uVar24 = uVar24 - 1;
      *puVar31 = local_b0;
      lVar27 = lVar27 + -1;
      puVar31 = puVar31 + -8;
    } while ((longlong)uVar15 < lVar27);
  }
  lVar27 = (longlong)(int)uVar24 * 0x10;
  uVar20 = uVar29;
  if ((int)uVar24 < local_70.ArrayNum) {
    uVar20 = ~uVar24 >> 0x1f;
  }
  if ((uVar20 == 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar10)) {
    pcVar6 = (code *)swi(3);
    pFVar12 = (FPlaybackCapabilityPtr *)(*pcVar6)();
    return pFVar12;
  }
  FVar17 = (ForElementType<unsigned_short>)&local_70;
  if (local_70.AllocatorInstance.SecondaryData != (ForElementType<unsigned_short>)0x0) {
    FVar17 = local_70.AllocatorInstance.SecondaryData;
  }
  uVar3 = *(ushort *)((longlong)FVar17 + (longlong)(int)uVar24 * 2);
  puVar5 = this->Memory;
  puVar25[lVar27 + 0xf] = '\0';
  puVar26 = puVar25 + lVar27;
  puVar26[0] = '\0';
  puVar26[1] = '\0';
  puVar26[2] = '\0';
  puVar26[3] = '\0';
  puVar26[4] = '\0';
  puVar26[5] = '\0';
  puVar26[6] = '\0';
  puVar26[7] = '\0';
  ((TRelativePtr<void,unsigned_short> *)(puVar25 + lVar27 + 8))->Offset = 0xffff;
  puVar26 = puVar25 + lVar27 + 10;
  puVar26[0] = '\0';
  puVar26[1] = '\0';
  puVar26[2] = '\0';
  puVar26[3] = '\0';
  puVar25[lVar27 + 0xe] = '\0';
  TRelativePtr<void,unsigned_short>::Reset
            ((TRelativePtr<void,unsigned_short> *)(puVar25 + lVar27 + 8),this->Memory,puVar5 + uVar3
            );
  puVar26 = puVar25 + lVar27 + 10;
  puVar26[0] = '(';
  puVar26[1] = '\0';
  puVar26[2] = '\b';
  puVar26[3] = '\0';
  puVar25[lVar27 + 0xe] = '\0';
  puVar14 = ::operator_new(0x10);
  puVar26 = puVar30;
  if (puVar14 != (uchar *)0x0) {
    *(uchar **)(puVar14 + 8) = puVar5 + uVar3;
    *(undefined ***)puVar14 =
         &
         ___7__TPlaybackCapabilityDebuggingTypedPtr_UFTestCapabilityDerived_Tests_MovieScene_UE___MovieScene_UE__6B_
    ;
    puVar26 = puVar14;
  }
  uVar24 = uVar24 - 1;
  *(uchar **)(puVar25 + lVar27) = puVar26;
  if (-1 < (int)uVar24) {
    puVar26 = puVar25 + (longlong)(int)uVar24 * 0x10;
    lVar28 = (longlong)(int)uVar24 * 2;
    do {
      uVar7 = *(undefined8 *)(puVar26 + ((longlong)puVar4 - (longlong)puVar25) + 8);
      *(undefined8 *)puVar26 = *(undefined8 *)(puVar26 + ((longlong)puVar4 - (longlong)puVar25));
      *(undefined8 *)(puVar26 + 8) = uVar7;
      uVar20 = uVar29;
      if ((int)uVar24 < local_70.ArrayNum) {
        uVar20 = ~uVar24 >> 0x1f;
      }
      if ((uVar20 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar6 = (code *)swi(3);
        pFVar12 = (FPlaybackCapabilityPtr *)(*pcVar6)();
        return pFVar12;
      }
      FVar17 = (ForElementType<unsigned_short>)&local_70;
      if (local_70.AllocatorInstance.SecondaryData != (ForElementType<unsigned_short>)0x0) {
        FVar17 = local_70.AllocatorInstance.SecondaryData;
      }
      uVar3 = *(ushort *)((longlong)FVar17 + lVar28);
      if (this->Memory + uVar3 < this->Memory) {
        bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("false",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\RelativePtr.h"
                            ,0x46,
                            L"Attempting to assign a negative offset to an unsigned relative pointer!!"
                           );
        if (bVar10) {
          pcVar6 = (code *)swi(3);
          pFVar12 = (FPlaybackCapabilityPtr *)(*pcVar6)();
          return pFVar12;
        }
      }
      else {
        local_ae = uVar3;
        if ((uVar3 == 0xffff) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("OffsetPtr >= 0 && OffsetPtr < std::numeric_limits<OffsetType>::max()"
                                ,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\RelativePtr.h"
                                ,0x3a,
                                L"Attempting to create a relative pointer outside the bounds of its capacity."
                               ), bVar10)) {
          pcVar6 = (code *)swi(3);
          pFVar12 = (FPlaybackCapabilityPtr *)(*pcVar6)();
          return pFVar12;
        }
      }
      *(ushort *)(puVar26 + 8) = local_ae;
      lVar28 = lVar28 + -2;
      puVar26 = puVar26 + -0x10;
      uVar24 = uVar24 - 1;
    } while (-1 < (int)uVar24);
  }
  if ((bVar8) && (puVar22 != (uchar *)0x0)) {
    FMemory::Free(puVar22);
  }
  local_a8 = (uint)(byte)(uVar18 >> 0x38);
  local_80.InterfaceCast =
       TPlaybackCapabilityInterfaceCast<UE::MovieScene::Tests::FTestCapabilityDerived>::
       InterfaceCast;
  local_80.Destructor =
       TPlaybackCapabilityDestructor<UE::MovieScene::Tests::FTestCapabilityDerived>::Destroy;
  TArray<UE::MovieScene::FPlaybackCapabilityHelpers,TSizedDefaultAllocator<32>_>::Insert
            (&this->Helpers,&local_80,local_a8);
  if (*(ushort *)(puVar25 + lVar27 + 8) != 0xffff) {
    puVar30 = this->Memory + *(ushort *)(puVar25 + lVar27 + 8);
  }
  __return_storage_ptr__->Ptr = puVar30 + puVar25[lVar27 + 0xd];
  __return_storage_ptr__->StorageMode = puVar25[lVar27 + 0xe];
  if (local_70.AllocatorInstance.SecondaryData != (ForElementType<unsigned_short>)0x0) {
    FMemory::Free((void *)local_70.AllocatorInstance.SecondaryData);
  }
  return __return_storage_ptr__;
}

// AddCapability<UE::MovieScene::Tests::FTestCapabilityDerived,UE::MovieScene::Tests::FTestCapabilityBase,int,wchar_t_const_(&)[12]> @ 146276bf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

FPlaybackCapabilityPtr * __thiscall
UE::MovieScene::FPlaybackCapabilitiesImpl::
AddCapability<UE::MovieScene::Tests::FTestCapabilityDerived,UE::MovieScene::Tests::FTestCapabilityBase,int,wchar_t_const_(&)[12]>
          (FPlaybackCapabilitiesImpl *this,FPlaybackCapabilityPtr *__return_storage_ptr__,
          uint param_1,int *param_2,wchar_t (*param_3) [12])

{
  int *piVar1;
  byte bVar2;
  ushort uVar3;
  uchar *puVar4;
  uchar *puVar5;
  code *pcVar6;
  undefined8 uVar7;
  ForAnyElementType _Src;
  bool bVar8;
  byte bVar9;
  bool bVar10;
  uint uVar11;
  FPlaybackCapabilityPtr *pFVar12;
  ulonglong uVar13;
  uchar *puVar14;
  ulonglong uVar15;
  byte *pbVar16;
  ForElementType<unsigned_short> FVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar23;
  uint uVar24;
  uchar *puVar25;
  uchar *puVar26;
  longlong lVar27;
  longlong lVar28;
  uint uVar29;
  uchar *puVar30;
  ushort *puVar31;
  ForAnyElementType *pFVar32;
  undefined1 auStackY_128 [32];
  ushort local_b0;
  ushort local_ae;
  uint local_a8;
  FString local_90;
  FPlaybackCapabilityHelpers local_80;
  TArray<unsigned_short,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> local_70;
  ulonglong local_40;
  uchar *puVar22;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_128;
  if (((this->AllCapabilities & param_1) != 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(AllCapabilities & CapabilityBit) == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\MovieScenePlaybackCapabilities.h"
                         ,0x117,L"Capability already exists!"), bVar8)) {
    pcVar6 = (code *)swi(3);
    pFVar12 = (FPlaybackCapabilityPtr *)(*pcVar6)();
    return pFVar12;
  }
  this->AllCapabilities = this->AllCapabilities | param_1;
  bVar9 = this->Num;
  uVar19 = (ulonglong)bVar9;
  uVar24 = param_1 - 1 & this->AllCapabilities;
  puVar4 = this->Memory;
  uVar18 = (ulonglong)uVar24 - ((ulonglong)(uVar24 >> 1) & 0x5555555555555555);
  uVar24 = 8;
  uVar18 = (uVar18 >> 2 & 0x3333333333333333) + (uVar18 & 0x3333333333333333);
  uVar18 = ((uVar18 >> 4) + uVar18 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
  uVar15 = uVar18 >> 0x38;
  if (bVar9 != 0) {
    pbVar16 = puVar4 + 0xc;
    uVar20 = 8;
    do {
      bVar2 = *pbVar16;
      pbVar16 = pbVar16 + 0x10;
      uVar24 = (uint)bVar2;
      if (bVar2 < uVar20) {
        uVar24 = uVar20;
      }
      uVar19 = uVar19 - 1;
      uVar20 = uVar24;
    } while (uVar19 != 0);
  }
  puVar30 = (uchar *)0x0;
  uVar29 = 0;
  local_70.ArrayMax = 0x10;
  uVar23 = bVar9 + 1;
  local_70.AllocatorInstance.SecondaryData = (ForElementType<unsigned_short>)0x0;
  local_70.ArrayNum = 0;
  TArray<unsigned_short,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>::SetNum
            (&local_70,uVar23,Default);
  lVar27 = (ulonglong)uVar23 << 4;
  uVar11 = 0;
  uVar20 = uVar29;
  if (uVar15 != 0) {
    puVar31 = (ushort *)(puVar4 + 10);
    puVar22 = puVar30;
    puVar25 = puVar30;
    do {
      uVar20 = (uint)puVar22;
      uVar19 = lVar27 + -1 + (ulonglong)(byte)puVar31[1] & ~((ulonglong)(byte)puVar31[1] - 1);
      uVar21 = uVar11;
      if ((int)uVar20 < local_70.ArrayNum) {
        uVar21 = ~uVar20 >> 0x1f;
      }
      if ((uVar21 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        pFVar12 = (FPlaybackCapabilityPtr *)(*pcVar6)();
        return pFVar12;
      }
      FVar17 = (ForElementType<unsigned_short>)&local_70;
      if (local_70.AllocatorInstance.SecondaryData != (ForElementType<unsigned_short>)0x0) {
        FVar17 = local_70.AllocatorInstance.SecondaryData;
      }
      uVar20 = uVar20 + 1;
      puVar22 = (uchar *)(ulonglong)uVar20;
      *(short *)((longlong)FVar17 + (longlong)puVar25 * 2) = (short)uVar19;
      puVar25 = puVar25 + 1;
      uVar3 = *puVar31;
      puVar31 = puVar31 + 8;
      lVar27 = uVar19 + uVar3;
    } while ((longlong)puVar25 < (longlong)(uVar18 >> 0x38));
  }
  uVar19 = lVar27 + 7U & 0xfffffffffffffff8;
  uVar21 = uVar11;
  if ((int)uVar20 < local_70.ArrayNum) {
    uVar21 = ~uVar20 >> 0x1f;
  }
  if ((uVar21 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar6 = (code *)swi(3);
    pFVar12 = (FPlaybackCapabilityPtr *)(*pcVar6)();
    return pFVar12;
  }
  FVar17 = (ForElementType<unsigned_short>)&local_70;
  if (local_70.AllocatorInstance.SecondaryData != (ForElementType<unsigned_short>)0x0) {
    FVar17 = local_70.AllocatorInstance.SecondaryData;
  }
  uVar21 = uVar20 + 1;
  *(short *)((longlong)FVar17 + (longlong)(int)uVar20 * 2) = (short)uVar19;
  uVar19 = uVar19 + 0x28;
  if ((int)uVar21 < (int)uVar23) {
    puVar31 = (ushort *)(puVar4 + (longlong)(int)uVar21 * 0x10 + -6);
    lVar27 = (longlong)(int)uVar21 * 2;
    do {
      uVar19 = (uVar19 - 1) + (ulonglong)(byte)puVar31[1] & ~((ulonglong)(byte)puVar31[1] - 1);
      uVar20 = 0;
      if ((int)uVar21 < local_70.ArrayNum) {
        uVar20 = ~uVar21 >> 0x1f;
      }
      if ((uVar20 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        pFVar12 = (FPlaybackCapabilityPtr *)(*pcVar6)();
        return pFVar12;
      }
      FVar17 = (ForElementType<unsigned_short>)&local_70;
      if (local_70.AllocatorInstance.SecondaryData != (ForElementType<unsigned_short>)0x0) {
        FVar17 = local_70.AllocatorInstance.SecondaryData;
      }
      uVar21 = uVar21 + 1;
      *(short *)((longlong)FVar17 + lVar27) = (short)uVar19;
      lVar27 = lVar27 + 2;
      uVar3 = *puVar31;
      puVar31 = puVar31 + 8;
      uVar19 = uVar19 + uVar3;
    } while ((int)uVar21 < (int)uVar23);
  }
  if ((0xff < uVar24) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("RequiredAlignment <= 0XFF",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\MovieScenePlaybackCapabilities.h"
                         ,0x155,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    pFVar12 = (FPlaybackCapabilityPtr *)(*pcVar6)();
    return pFVar12;
  }
  puVar22 = this->Memory;
  if ((this->Alignment < uVar24) || (this->Capacity < uVar19)) {
    uVar13 = (ulonglong)this->Capacity * 2;
    bVar8 = true;
    if (uVar13 < uVar19) {
      uVar13 = uVar19 & 0xffff;
    }
    this->Capacity = (ushort)uVar13;
    puVar25 = FMemory::Malloc(uVar13 & 0xffff,uVar24);
    this->Memory = puVar25;
  }
  else {
    bVar8 = false;
  }
  bVar9 = this->Num + 1;
  this->Num = bVar9;
  lVar27 = (ulonglong)bVar9 - 1;
  uVar24 = bVar9 - 1;
  if ((longlong)uVar15 < lVar27) {
    puVar31 = (ushort *)(puVar4 + lVar27 * 0x10 + -6);
    do {
      uVar20 = uVar11;
      if ((int)uVar24 < local_70.ArrayNum) {
        uVar20 = ~uVar24 >> 0x1f;
      }
      if ((uVar20 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar6 = (code *)swi(3);
        pFVar12 = (FPlaybackCapabilityPtr *)(*pcVar6)();
        return pFVar12;
      }
      FVar17 = (ForElementType<unsigned_short>)&local_70;
      if (local_70.AllocatorInstance.SecondaryData != (ForElementType<unsigned_short>)0x0) {
        FVar17 = local_70.AllocatorInstance.SecondaryData;
      }
      puVar25 = puVar30;
      if (puVar31[-1] != 0xffff) {
        puVar25 = puVar22 + puVar31[-1];
      }
      memmove(this->Memory + *(ushort *)((longlong)FVar17 + lVar27 * 2),puVar25,(ulonglong)*puVar31)
      ;
      uVar24 = uVar24 - 1;
      lVar27 = lVar27 + -1;
      puVar31 = puVar31 + -8;
    } while ((longlong)uVar15 < lVar27);
  }
  uVar20 = uVar11;
  if ((int)uVar24 < local_70.ArrayNum) {
    uVar20 = ~uVar24 >> 0x1f;
  }
  if ((uVar20 == 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar10)) {
    pcVar6 = (code *)swi(3);
    pFVar12 = (FPlaybackCapabilityPtr *)(*pcVar6)();
    return pFVar12;
  }
  puVar25 = this->Memory;
  FVar17 = (ForElementType<unsigned_short>)&local_70;
  if (local_70.AllocatorInstance.SecondaryData != (ForElementType<unsigned_short>)0x0) {
    FVar17 = local_70.AllocatorInstance.SecondaryData;
  }
  uVar19 = (ulonglong)*(ushort *)((longlong)FVar17 + (longlong)(int)uVar24 * 2);
  ::FString::FString(&local_90,*param_3);
  _Src.Data = local_90.Data.AllocatorInstance.Data;
  pFVar32 = (ForAnyElementType *)(puVar25 + uVar19 + 0x18);
  *(int *)(puVar25 + uVar19 + 0x10) = *param_2;
  piVar1 = (int *)((longlong)&pFVar32[1].Data + 4);
  *(undefined ***)(puVar25 + uVar19) = &___7FTestCapabilityDerived_Tests_MovieScene_UE__6B_;
  puVar25 = puVar25 + uVar19 + 8;
  puVar25[0] = '\0';
  puVar25[1] = '\0';
  puVar25[2] = '\0';
  puVar25[3] = '\0';
  pFVar32->Data = (FScriptContainerElement *)0x0;
  *(int *)&pFVar32[1].Data = local_90.Data.ArrayNum;
  if (local_90.Data.ArrayNum == 0) {
    *piVar1 = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_90.Data.ArrayNum,0,pFVar32,local_90.Data.ArrayNum,piVar1);
    memcpy(pFVar32->Data,_Src.Data,(longlong)local_90.Data.ArrayNum * 2);
  }
  if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_90.Data.AllocatorInstance.Data);
  }
  uVar24 = uVar24 - 1;
  if (-1 < (int)uVar24) {
    puVar31 = (ushort *)(puVar4 + (longlong)(int)uVar24 * 0x10 + 10);
    lVar27 = (longlong)(int)uVar24 * 2;
    do {
      uVar20 = uVar11;
      if ((int)uVar24 < local_70.ArrayNum) {
        uVar20 = ~uVar24 >> 0x1f;
      }
      if ((uVar20 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar6 = (code *)swi(3);
        pFVar12 = (FPlaybackCapabilityPtr *)(*pcVar6)();
        return pFVar12;
      }
      FVar17 = (ForElementType<unsigned_short>)&local_70;
      if (local_70.AllocatorInstance.SecondaryData != (ForElementType<unsigned_short>)0x0) {
        FVar17 = local_70.AllocatorInstance.SecondaryData;
      }
      puVar25 = puVar30;
      if (puVar31[-1] != 0xffff) {
        puVar25 = puVar22 + puVar31[-1];
      }
      memmove(this->Memory + *(ushort *)(lVar27 + (longlong)FVar17),puVar25,(ulonglong)*puVar31);
      lVar27 = lVar27 + -2;
      puVar31 = puVar31 + -8;
      uVar24 = uVar24 - 1;
    } while (-1 < (int)uVar24);
  }
  puVar25 = this->Memory;
  lVar27 = (ulonglong)this->Num - 1;
  uVar24 = this->Num - 1;
  if ((longlong)uVar15 < lVar27) {
    puVar31 = (ushort *)(puVar25 + lVar27 * 0x10 + 8);
    do {
      uVar7 = *(undefined8 *)(puVar4 + (-0x18 - (longlong)puVar25) + (longlong)puVar31 + 8);
      *(undefined8 *)(puVar31 + -4) =
           *(undefined8 *)(puVar4 + (-0x18 - (longlong)puVar25) + (longlong)puVar31);
      *(undefined8 *)puVar31 = uVar7;
      uVar20 = uVar29;
      if ((int)uVar24 < local_70.ArrayNum) {
        uVar20 = ~uVar24 >> 0x1f;
      }
      if ((uVar20 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar6 = (code *)swi(3);
        pFVar12 = (FPlaybackCapabilityPtr *)(*pcVar6)();
        return pFVar12;
      }
      FVar17 = (ForElementType<unsigned_short>)&local_70;
      if (local_70.AllocatorInstance.SecondaryData != (ForElementType<unsigned_short>)0x0) {
        FVar17 = local_70.AllocatorInstance.SecondaryData;
      }
      uVar3 = *(ushort *)((longlong)FVar17 + lVar27 * 2);
      if (this->Memory + uVar3 < this->Memory) {
        bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("false",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\RelativePtr.h"
                            ,0x46,
                            L"Attempting to assign a negative offset to an unsigned relative pointer!!"
                           );
        if (bVar10) {
          pcVar6 = (code *)swi(3);
          pFVar12 = (FPlaybackCapabilityPtr *)(*pcVar6)();
          return pFVar12;
        }
      }
      else {
        local_b0 = uVar3;
        if ((uVar3 == 0xffff) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("OffsetPtr >= 0 && OffsetPtr < std::numeric_limits<OffsetType>::max()"
                                ,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\RelativePtr.h"
                                ,0x3a,
                                L"Attempting to create a relative pointer outside the bounds of its capacity."
                               ), bVar10)) {
          pcVar6 = (code *)swi(3);
          pFVar12 = (FPlaybackCapabilityPtr *)(*pcVar6)();
          return pFVar12;
        }
      }
      uVar24 = uVar24 - 1;
      *puVar31 = local_b0;
      lVar27 = lVar27 + -1;
      puVar31 = puVar31 + -8;
    } while ((longlong)uVar15 < lVar27);
  }
  lVar27 = (longlong)(int)uVar24 * 0x10;
  uVar20 = uVar29;
  if ((int)uVar24 < local_70.ArrayNum) {
    uVar20 = ~uVar24 >> 0x1f;
  }
  if ((uVar20 == 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar10)) {
    pcVar6 = (code *)swi(3);
    pFVar12 = (FPlaybackCapabilityPtr *)(*pcVar6)();
    return pFVar12;
  }
  FVar17 = (ForElementType<unsigned_short>)&local_70;
  if (local_70.AllocatorInstance.SecondaryData != (ForElementType<unsigned_short>)0x0) {
    FVar17 = local_70.AllocatorInstance.SecondaryData;
  }
  uVar3 = *(ushort *)((longlong)FVar17 + (longlong)(int)uVar24 * 2);
  puVar5 = this->Memory;
  puVar25[lVar27 + 0xf] = '\0';
  puVar26 = puVar25 + lVar27;
  puVar26[0] = '\0';
  puVar26[1] = '\0';
  puVar26[2] = '\0';
  puVar26[3] = '\0';
  puVar26[4] = '\0';
  puVar26[5] = '\0';
  puVar26[6] = '\0';
  puVar26[7] = '\0';
  ((TRelativePtr<void,unsigned_short> *)(puVar25 + lVar27 + 8))->Offset = 0xffff;
  puVar26 = puVar25 + lVar27 + 10;
  puVar26[0] = '\0';
  puVar26[1] = '\0';
  puVar26[2] = '\0';
  puVar26[3] = '\0';
  puVar25[lVar27 + 0xe] = '\0';
  TRelativePtr<void,unsigned_short>::Reset
            ((TRelativePtr<void,unsigned_short> *)(puVar25 + lVar27 + 8),this->Memory,puVar5 + uVar3
            );
  puVar26 = puVar25 + lVar27 + 10;
  puVar26[0] = '(';
  puVar26[1] = '\0';
  puVar26[2] = '\b';
  puVar26[3] = '\0';
  puVar25[lVar27 + 0xe] = '\0';
  puVar14 = ::operator_new(0x10);
  puVar26 = puVar30;
  if (puVar14 != (uchar *)0x0) {
    *(uchar **)(puVar14 + 8) = puVar5 + uVar3;
    *(undefined ***)puVar14 =
         &
         ___7__TPlaybackCapabilityDebuggingTypedPtr_UFTestCapabilityDerived_Tests_MovieScene_UE___MovieScene_UE__6B_
    ;
    puVar26 = puVar14;
  }
  uVar24 = uVar24 - 1;
  *(uchar **)(puVar25 + lVar27) = puVar26;
  if (-1 < (int)uVar24) {
    puVar26 = puVar25 + (longlong)(int)uVar24 * 0x10;
    lVar28 = (longlong)(int)uVar24 * 2;
    do {
      uVar7 = *(undefined8 *)(puVar26 + ((longlong)puVar4 - (longlong)puVar25) + 8);
      *(undefined8 *)puVar26 = *(undefined8 *)(puVar26 + ((longlong)puVar4 - (longlong)puVar25));
      *(undefined8 *)(puVar26 + 8) = uVar7;
      uVar20 = uVar29;
      if ((int)uVar24 < local_70.ArrayNum) {
        uVar20 = ~uVar24 >> 0x1f;
      }
      if ((uVar20 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar6 = (code *)swi(3);
        pFVar12 = (FPlaybackCapabilityPtr *)(*pcVar6)();
        return pFVar12;
      }
      FVar17 = (ForElementType<unsigned_short>)&local_70;
      if (local_70.AllocatorInstance.SecondaryData != (ForElementType<unsigned_short>)0x0) {
        FVar17 = local_70.AllocatorInstance.SecondaryData;
      }
      uVar3 = *(ushort *)((longlong)FVar17 + lVar28);
      if (this->Memory + uVar3 < this->Memory) {
        bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("false",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\RelativePtr.h"
                            ,0x46,
                            L"Attempting to assign a negative offset to an unsigned relative pointer!!"
                           );
        if (bVar10) {
          pcVar6 = (code *)swi(3);
          pFVar12 = (FPlaybackCapabilityPtr *)(*pcVar6)();
          return pFVar12;
        }
      }
      else {
        local_ae = uVar3;
        if ((uVar3 == 0xffff) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("OffsetPtr >= 0 && OffsetPtr < std::numeric_limits<OffsetType>::max()"
                                ,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\RelativePtr.h"
                                ,0x3a,
                                L"Attempting to create a relative pointer outside the bounds of its capacity."
                               ), bVar10)) {
          pcVar6 = (code *)swi(3);
          pFVar12 = (FPlaybackCapabilityPtr *)(*pcVar6)();
          return pFVar12;
        }
      }
      *(ushort *)(puVar26 + 8) = local_ae;
      lVar28 = lVar28 + -2;
      puVar26 = puVar26 + -0x10;
      uVar24 = uVar24 - 1;
    } while (-1 < (int)uVar24);
  }
  if ((bVar8) && (puVar22 != (uchar *)0x0)) {
    FMemory::Free(puVar22);
  }
  local_a8 = (uint)(byte)(uVar18 >> 0x38);
  local_80.InterfaceCast =
       TPlaybackCapabilityInterfaceCast<UE::MovieScene::Tests::FTestCapabilityDerived>::
       InterfaceCast;
  local_80.Destructor =
       TPlaybackCapabilityDestructor<UE::MovieScene::Tests::FTestCapabilityDerived>::Destroy;
  TArray<UE::MovieScene::FPlaybackCapabilityHelpers,TSizedDefaultAllocator<32>_>::Insert
            (&this->Helpers,&local_80,local_a8);
  if (*(ushort *)(puVar25 + lVar27 + 8) != 0xffff) {
    puVar30 = this->Memory + *(ushort *)(puVar25 + lVar27 + 8);
  }
  __return_storage_ptr__->Ptr = puVar30 + puVar25[lVar27 + 0xd];
  __return_storage_ptr__->StorageMode = puVar25[lVar27 + 0xe];
  if (local_70.AllocatorInstance.SecondaryData != (ForElementType<unsigned_short>)0x0) {
    FMemory::Free((void *)local_70.AllocatorInstance.SecondaryData);
  }
  return __return_storage_ptr__;
}

// AddCapability<UE::MovieScene::Tests::FTestInvalidatableCapability,UE::MovieScene::Tests::FTestInvalidatableCapability> @ 1462775f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

FPlaybackCapabilityPtr * __thiscall
UE::MovieScene::FPlaybackCapabilitiesImpl::
AddCapability<UE::MovieScene::Tests::FTestInvalidatableCapability,UE::MovieScene::Tests::FTestInvalidatableCapability>
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
  uVar24 = bVar8 + 1;
  local_70.AllocatorInstance.SecondaryData = (ForElementType<unsigned_short>)0x0;
  local_70.ArrayNum = 0;
  local_70.ArrayMax = 0x10;
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
  uVar16 = uVar16 + 0x10;
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
  puVar12 = puVar11 + uVar15 + 8;
  puVar12[0] = '\0';
  puVar12[1] = '\0';
  puVar12[2] = '\0';
  puVar12[3] = '\0';
  puVar12[4] = '\0';
  puVar12[5] = '\0';
  puVar12[6] = '\0';
  puVar12[7] = '\0';
  *(undefined ***)(puVar11 + uVar15) = &___7FTestInvalidatableCapability_Tests_MovieScene_UE__6B_;
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
      memmove(this->Memory + *(ushort *)(lVar22 + (longlong)FVar14),puVar25,(ulonglong)*puVar27);
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
  puVar26[10] = '\x10';
  puVar26[0xb] = '\0';
  puVar26[0xc] = '\b';
  puVar26[0xd] = '\0';
  puVar26[0xe] = '\0';
  puVar11 = ::operator_new(0x10);
  puVar12 = puVar21;
  if (puVar11 != (uchar *)0x0) {
    *(uchar **)(puVar11 + 8) = puVar25 + uVar17;
    *(undefined ***)puVar11 =
         &
         ___7__TPlaybackCapabilityDebuggingTypedPtr_UFTestInvalidatableCapability_Tests_MovieScene_UE___MovieScene_UE__6B_
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
       TPlaybackCapabilityInterfaceCast<UE::MovieScene::Tests::FTestInvalidatableCapability>::
       InterfaceCast;
  local_80.Destructor =
       TPlaybackCapabilityDestructor<UE::MovieScene::Tests::FTestInvalidatableCapability>::Destroy;
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

// AddCapability<UE::MovieScene::Tests::FTestSimpleCapability,UE::MovieScene::Tests::FTestSimpleCapability,int,wchar_t_const_(&)[5]> @ 146277f50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

FPlaybackCapabilityPtr * __thiscall
UE::MovieScene::FPlaybackCapabilitiesImpl::
AddCapability<UE::MovieScene::Tests::FTestSimpleCapability,UE::MovieScene::Tests::FTestSimpleCapability,int,wchar_t_const_(&)[5]>
          (FPlaybackCapabilitiesImpl *this,FPlaybackCapabilityPtr *__return_storage_ptr__,
          uint param_1,int *param_2,wchar_t (*param_3) [5])

{
  ForAnyElementType *pFVar1;
  byte bVar2;
  ushort uVar3;
  uchar *puVar4;
  code *pcVar5;
  undefined8 uVar6;
  ForAnyElementType _Src;
  bool bVar7;
  byte bVar8;
  bool bVar9;
  uint uVar10;
  FPlaybackCapabilityPtr *pFVar11;
  ulonglong uVar12;
  uchar *puVar13;
  uchar *puVar14;
  ulonglong uVar15;
  byte *pbVar16;
  ForElementType<unsigned_short> FVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  uint uVar20;
  uint uVar21;
  int *piVar23;
  uint uVar24;
  uchar *puVar25;
  uint uVar26;
  longlong lVar27;
  uint uVar28;
  uchar *puVar29;
  uchar *puVar30;
  uchar *puVar31;
  ushort *puVar32;
  undefined1 auStackY_128 [32];
  ushort local_b0;
  ushort local_ae;
  uint local_a0;
  FString local_90;
  FPlaybackCapabilityHelpers local_80;
  TArray<unsigned_short,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> local_70;
  ulonglong local_40;
  uchar *puVar22;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_128;
  if (((this->AllCapabilities & param_1) != 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(AllCapabilities & CapabilityBit) == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\MovieScenePlaybackCapabilities.h"
                         ,0x117,L"Capability already exists!"), bVar7)) {
    pcVar5 = (code *)swi(3);
    pFVar11 = (FPlaybackCapabilityPtr *)(*pcVar5)();
    return pFVar11;
  }
  this->AllCapabilities = this->AllCapabilities | param_1;
  bVar8 = this->Num;
  uVar19 = (ulonglong)bVar8;
  uVar26 = param_1 - 1 & this->AllCapabilities;
  puVar4 = this->Memory;
  uVar18 = (ulonglong)uVar26 - ((ulonglong)(uVar26 >> 1) & 0x5555555555555555);
  uVar26 = 8;
  uVar18 = (uVar18 >> 2 & 0x3333333333333333) + (uVar18 & 0x3333333333333333);
  uVar18 = ((uVar18 >> 4) + uVar18 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
  uVar15 = uVar18 >> 0x38;
  if (bVar8 != 0) {
    pbVar16 = puVar4 + 0xc;
    uVar20 = 8;
    do {
      bVar2 = *pbVar16;
      pbVar16 = pbVar16 + 0x10;
      uVar26 = (uint)bVar2;
      if (bVar2 < uVar20) {
        uVar26 = uVar20;
      }
      uVar19 = uVar19 - 1;
      uVar20 = uVar26;
    } while (uVar19 != 0);
  }
  puVar25 = (uchar *)0x0;
  uVar24 = 0;
  local_70.ArrayMax = 0x10;
  uVar28 = bVar8 + 1;
  local_70.AllocatorInstance.SecondaryData = (ForElementType<unsigned_short>)0x0;
  local_70.ArrayNum = 0;
  TArray<unsigned_short,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>::SetNum
            (&local_70,uVar28,Default);
  lVar27 = (ulonglong)uVar28 << 4;
  uVar10 = 0;
  uVar20 = uVar24;
  if (uVar15 != 0) {
    puVar32 = (ushort *)(puVar4 + 10);
    puVar22 = puVar25;
    puVar29 = puVar25;
    do {
      uVar20 = (uint)puVar22;
      uVar19 = lVar27 + -1 + (ulonglong)(byte)puVar32[1] & ~((ulonglong)(byte)puVar32[1] - 1);
      uVar21 = uVar10;
      if ((int)uVar20 < local_70.ArrayNum) {
        uVar21 = ~uVar20 >> 0x1f;
      }
      if ((uVar21 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        pFVar11 = (FPlaybackCapabilityPtr *)(*pcVar5)();
        return pFVar11;
      }
      FVar17 = (ForElementType<unsigned_short>)&local_70;
      if (local_70.AllocatorInstance.SecondaryData != (ForElementType<unsigned_short>)0x0) {
        FVar17 = local_70.AllocatorInstance.SecondaryData;
      }
      uVar20 = uVar20 + 1;
      puVar22 = (uchar *)(ulonglong)uVar20;
      *(short *)((longlong)FVar17 + (longlong)puVar29 * 2) = (short)uVar19;
      puVar29 = puVar29 + 1;
      uVar3 = *puVar32;
      puVar32 = puVar32 + 8;
      lVar27 = uVar19 + uVar3;
    } while ((longlong)puVar29 < (longlong)(uVar18 >> 0x38));
  }
  uVar19 = lVar27 + 7U & 0xfffffffffffffff8;
  uVar21 = uVar10;
  if ((int)uVar20 < local_70.ArrayNum) {
    uVar21 = ~uVar20 >> 0x1f;
  }
  if ((uVar21 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar5 = (code *)swi(3);
    pFVar11 = (FPlaybackCapabilityPtr *)(*pcVar5)();
    return pFVar11;
  }
  FVar17 = (ForElementType<unsigned_short>)&local_70;
  if (local_70.AllocatorInstance.SecondaryData != (ForElementType<unsigned_short>)0x0) {
    FVar17 = local_70.AllocatorInstance.SecondaryData;
  }
  uVar21 = uVar20 + 1;
  *(short *)((longlong)FVar17 + (longlong)(int)uVar20 * 2) = (short)uVar19;
  uVar19 = uVar19 + 0x18;
  if ((int)uVar21 < (int)uVar28) {
    puVar32 = (ushort *)(puVar4 + (longlong)(int)uVar21 * 0x10 + -6);
    lVar27 = (longlong)(int)uVar21 * 2;
    do {
      uVar19 = (uVar19 - 1) + (ulonglong)(byte)puVar32[1] & ~((ulonglong)(byte)puVar32[1] - 1);
      uVar20 = 0;
      if ((int)uVar21 < local_70.ArrayNum) {
        uVar20 = ~uVar21 >> 0x1f;
      }
      if ((uVar20 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        pFVar11 = (FPlaybackCapabilityPtr *)(*pcVar5)();
        return pFVar11;
      }
      FVar17 = (ForElementType<unsigned_short>)&local_70;
      if (local_70.AllocatorInstance.SecondaryData != (ForElementType<unsigned_short>)0x0) {
        FVar17 = local_70.AllocatorInstance.SecondaryData;
      }
      uVar21 = uVar21 + 1;
      *(short *)((longlong)FVar17 + lVar27) = (short)uVar19;
      lVar27 = lVar27 + 2;
      uVar3 = *puVar32;
      puVar32 = puVar32 + 8;
      uVar19 = uVar19 + uVar3;
    } while ((int)uVar21 < (int)uVar28);
  }
  if ((0xff < uVar26) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("RequiredAlignment <= 0XFF",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\MovieScenePlaybackCapabilities.h"
                         ,0x155,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    pFVar11 = (FPlaybackCapabilityPtr *)(*pcVar5)();
    return pFVar11;
  }
  puVar22 = this->Memory;
  if ((this->Alignment < uVar26) || (this->Capacity < uVar19)) {
    uVar12 = (ulonglong)this->Capacity * 2;
    bVar7 = true;
    if (uVar12 < uVar19) {
      uVar12 = uVar19 & 0xffff;
    }
    this->Capacity = (ushort)uVar12;
    puVar29 = FMemory::Malloc(uVar12 & 0xffff,uVar26);
    this->Memory = puVar29;
  }
  else {
    bVar7 = false;
  }
  bVar8 = this->Num + 1;
  this->Num = bVar8;
  lVar27 = (ulonglong)bVar8 - 1;
  uVar26 = bVar8 - 1;
  if ((longlong)uVar15 < lVar27) {
    puVar32 = (ushort *)(puVar4 + lVar27 * 0x10 + -6);
    do {
      uVar20 = uVar10;
      if ((int)uVar26 < local_70.ArrayNum) {
        uVar20 = ~uVar26 >> 0x1f;
      }
      if ((uVar20 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar5 = (code *)swi(3);
        pFVar11 = (FPlaybackCapabilityPtr *)(*pcVar5)();
        return pFVar11;
      }
      FVar17 = (ForElementType<unsigned_short>)&local_70;
      if (local_70.AllocatorInstance.SecondaryData != (ForElementType<unsigned_short>)0x0) {
        FVar17 = local_70.AllocatorInstance.SecondaryData;
      }
      puVar29 = puVar25;
      if (puVar32[-1] != 0xffff) {
        puVar29 = puVar22 + puVar32[-1];
      }
      memmove(this->Memory + *(ushort *)((longlong)FVar17 + lVar27 * 2),puVar29,(ulonglong)*puVar32)
      ;
      uVar26 = uVar26 - 1;
      lVar27 = lVar27 + -1;
      puVar32 = puVar32 + -8;
    } while ((longlong)uVar15 < lVar27);
  }
  uVar20 = uVar10;
  if ((int)uVar26 < local_70.ArrayNum) {
    uVar20 = ~uVar26 >> 0x1f;
  }
  if ((uVar20 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar5 = (code *)swi(3);
    pFVar11 = (FPlaybackCapabilityPtr *)(*pcVar5)();
    return pFVar11;
  }
  FVar17 = (ForElementType<unsigned_short>)&local_70;
  if (local_70.AllocatorInstance.SecondaryData != (ForElementType<unsigned_short>)0x0) {
    FVar17 = local_70.AllocatorInstance.SecondaryData;
  }
  piVar23 = (int *)(this->Memory + *(ushort *)((longlong)FVar17 + (longlong)(int)uVar26 * 2));
  ::FString::FString(&local_90,*param_3);
  _Src.Data = local_90.Data.AllocatorInstance.Data;
  pFVar1 = (ForAnyElementType *)(piVar23 + 2);
  *piVar23 = *param_2;
  pFVar1->Data = (FScriptContainerElement *)0x0;
  piVar23[4] = local_90.Data.ArrayNum;
  if (local_90.Data.ArrayNum == 0) {
    piVar23[5] = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_90.Data.ArrayNum,0,pFVar1,local_90.Data.ArrayNum,piVar23 + 5);
    memcpy(pFVar1->Data,_Src.Data,(longlong)local_90.Data.ArrayNum * 2);
  }
  if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_90.Data.AllocatorInstance.Data);
  }
  uVar26 = uVar26 - 1;
  if (-1 < (int)uVar26) {
    puVar32 = (ushort *)(puVar4 + (longlong)(int)uVar26 * 0x10 + 10);
    lVar27 = (longlong)(int)uVar26 * 2;
    do {
      uVar20 = uVar10;
      if ((int)uVar26 < local_70.ArrayNum) {
        uVar20 = ~uVar26 >> 0x1f;
      }
      if ((uVar20 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar5 = (code *)swi(3);
        pFVar11 = (FPlaybackCapabilityPtr *)(*pcVar5)();
        return pFVar11;
      }
      FVar17 = (ForElementType<unsigned_short>)&local_70;
      if (local_70.AllocatorInstance.SecondaryData != (ForElementType<unsigned_short>)0x0) {
        FVar17 = local_70.AllocatorInstance.SecondaryData;
      }
      puVar29 = puVar25;
      if (puVar32[-1] != 0xffff) {
        puVar29 = puVar22 + puVar32[-1];
      }
      memmove(this->Memory + *(ushort *)(lVar27 + (longlong)FVar17),puVar29,(ulonglong)*puVar32);
      lVar27 = lVar27 + -2;
      puVar32 = puVar32 + -8;
      uVar26 = uVar26 - 1;
    } while (-1 < (int)uVar26);
  }
  puVar29 = this->Memory;
  lVar27 = (ulonglong)this->Num - 1;
  uVar26 = this->Num - 1;
  if ((longlong)uVar15 < lVar27) {
    puVar32 = (ushort *)(puVar29 + lVar27 * 0x10 + 8);
    do {
      uVar6 = *(undefined8 *)(puVar4 + (-0x18 - (longlong)puVar29) + (longlong)puVar32 + 8);
      *(undefined8 *)(puVar32 + -4) =
           *(undefined8 *)(puVar4 + (-0x18 - (longlong)puVar29) + (longlong)puVar32);
      *(undefined8 *)puVar32 = uVar6;
      uVar20 = uVar24;
      if ((int)uVar26 < local_70.ArrayNum) {
        uVar20 = ~uVar26 >> 0x1f;
      }
      if ((uVar20 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar5 = (code *)swi(3);
        pFVar11 = (FPlaybackCapabilityPtr *)(*pcVar5)();
        return pFVar11;
      }
      FVar17 = (ForElementType<unsigned_short>)&local_70;
      if (local_70.AllocatorInstance.SecondaryData != (ForElementType<unsigned_short>)0x0) {
        FVar17 = local_70.AllocatorInstance.SecondaryData;
      }
      uVar3 = *(ushort *)((longlong)FVar17 + lVar27 * 2);
      if (this->Memory + uVar3 < this->Memory) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("false",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\RelativePtr.h"
                           ,0x46,
                           L"Attempting to assign a negative offset to an unsigned relative pointer!!"
                          );
        if (bVar9) {
          pcVar5 = (code *)swi(3);
          pFVar11 = (FPlaybackCapabilityPtr *)(*pcVar5)();
          return pFVar11;
        }
      }
      else {
        local_b0 = uVar3;
        if ((uVar3 == 0xffff) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("OffsetPtr >= 0 && OffsetPtr < std::numeric_limits<OffsetType>::max()"
                               ,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\RelativePtr.h"
                               ,0x3a,
                               L"Attempting to create a relative pointer outside the bounds of its capacity."
                              ), bVar9)) {
          pcVar5 = (code *)swi(3);
          pFVar11 = (FPlaybackCapabilityPtr *)(*pcVar5)();
          return pFVar11;
        }
      }
      uVar26 = uVar26 - 1;
      *puVar32 = local_b0;
      lVar27 = lVar27 + -1;
      puVar32 = puVar32 + -8;
    } while ((longlong)uVar15 < lVar27);
  }
  puVar30 = puVar29 + (longlong)(int)uVar26 * 0x10;
  uVar20 = uVar24;
  if ((int)uVar26 < local_70.ArrayNum) {
    uVar20 = ~uVar26 >> 0x1f;
  }
  if ((uVar20 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar5 = (code *)swi(3);
    pFVar11 = (FPlaybackCapabilityPtr *)(*pcVar5)();
    return pFVar11;
  }
  FVar17 = (ForElementType<unsigned_short>)&local_70;
  if (local_70.AllocatorInstance.SecondaryData != (ForElementType<unsigned_short>)0x0) {
    FVar17 = local_70.AllocatorInstance.SecondaryData;
  }
  uVar3 = *(ushort *)((longlong)FVar17 + (longlong)(int)uVar26 * 2);
  puVar31 = this->Memory;
  puVar30[0xf] = '\0';
  puVar30[0] = '\0';
  puVar30[1] = '\0';
  puVar30[2] = '\0';
  puVar30[3] = '\0';
  puVar30[4] = '\0';
  puVar30[5] = '\0';
  puVar30[6] = '\0';
  puVar30[7] = '\0';
  ((TRelativePtr<void,unsigned_short> *)(puVar30 + 8))->Offset = 0xffff;
  puVar30[10] = '\0';
  puVar30[0xb] = '\0';
  puVar30[0xc] = '\0';
  puVar30[0xd] = '\0';
  puVar30[0xe] = '\0';
  TRelativePtr<void,unsigned_short>::Reset
            ((TRelativePtr<void,unsigned_short> *)(puVar30 + 8),this->Memory,puVar31 + uVar3);
  puVar30[10] = '\x18';
  puVar30[0xb] = '\0';
  puVar30[0xc] = '\b';
  puVar30[0xd] = '\0';
  puVar30[0xe] = '\0';
  puVar13 = ::operator_new(0x10);
  puVar14 = puVar25;
  if (puVar13 != (uchar *)0x0) {
    *(uchar **)(puVar13 + 8) = puVar31 + uVar3;
    *(undefined ***)puVar13 =
         &
         ___7__TPlaybackCapabilityDebuggingTypedPtr_UFTestSimpleCapability_Tests_MovieScene_UE___MovieScene_UE__6B_
    ;
    puVar14 = puVar13;
  }
  uVar26 = uVar26 - 1;
  *(uchar **)puVar30 = puVar14;
  if (-1 < (int)uVar26) {
    puVar31 = puVar29 + (longlong)(int)uVar26 * 0x10;
    lVar27 = (longlong)(int)uVar26 * 2;
    do {
      uVar6 = *(undefined8 *)(puVar31 + ((longlong)puVar4 - (longlong)puVar29) + 8);
      *(undefined8 *)puVar31 = *(undefined8 *)(puVar31 + ((longlong)puVar4 - (longlong)puVar29));
      *(undefined8 *)(puVar31 + 8) = uVar6;
      uVar20 = uVar24;
      if ((int)uVar26 < local_70.ArrayNum) {
        uVar20 = ~uVar26 >> 0x1f;
      }
      if ((uVar20 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar5 = (code *)swi(3);
        pFVar11 = (FPlaybackCapabilityPtr *)(*pcVar5)();
        return pFVar11;
      }
      FVar17 = (ForElementType<unsigned_short>)&local_70;
      if (local_70.AllocatorInstance.SecondaryData != (ForElementType<unsigned_short>)0x0) {
        FVar17 = local_70.AllocatorInstance.SecondaryData;
      }
      uVar3 = *(ushort *)((longlong)FVar17 + lVar27);
      if (this->Memory + uVar3 < this->Memory) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("false",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\RelativePtr.h"
                           ,0x46,
                           L"Attempting to assign a negative offset to an unsigned relative pointer!!"
                          );
        if (bVar9) {
          pcVar5 = (code *)swi(3);
          pFVar11 = (FPlaybackCapabilityPtr *)(*pcVar5)();
          return pFVar11;
        }
      }
      else {
        local_ae = uVar3;
        if ((uVar3 == 0xffff) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("OffsetPtr >= 0 && OffsetPtr < std::numeric_limits<OffsetType>::max()"
                               ,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\RelativePtr.h"
                               ,0x3a,
                               L"Attempting to create a relative pointer outside the bounds of its capacity."
                              ), bVar9)) {
          pcVar5 = (code *)swi(3);
          pFVar11 = (FPlaybackCapabilityPtr *)(*pcVar5)();
          return pFVar11;
        }
      }
      *(ushort *)(puVar31 + 8) = local_ae;
      lVar27 = lVar27 + -2;
      puVar31 = puVar31 + -0x10;
      uVar26 = uVar26 - 1;
    } while (-1 < (int)uVar26);
  }
  if ((bVar7) && (puVar22 != (uchar *)0x0)) {
    FMemory::Free(puVar22);
  }
  local_a0 = (uint)(byte)(uVar18 >> 0x38);
  local_80.InterfaceCast =
       TPlaybackCapabilityInterfaceCast<UE::MovieScene::Tests::FTestSimpleCapability>::InterfaceCast
  ;
  local_80.Destructor =
       TPlaybackCapabilityDestructor<UE::MovieScene::Tests::FTestSimpleCapability>::Destroy;
  TArray<UE::MovieScene::FPlaybackCapabilityHelpers,TSizedDefaultAllocator<32>_>::Insert
            (&this->Helpers,&local_80,local_a0);
  if (*(ushort *)(puVar30 + 8) != 0xffff) {
    puVar25 = this->Memory + *(ushort *)(puVar30 + 8);
  }
  __return_storage_ptr__->Ptr = puVar25 + puVar30[0xd];
  __return_storage_ptr__->StorageMode = puVar30[0xe];
  if (local_70.AllocatorInstance.SecondaryData != (ForElementType<unsigned_short>)0x0) {
    FMemory::Free((void *)local_70.AllocatorInstance.SecondaryData);
  }
  return __return_storage_ptr__;
}

// AddCapability<UE::MovieScene::Tests::FTestSimpleCapability,UE::MovieScene::Tests::FTestSimpleCapability,int,wchar_t_const_(&)[18]> @ 146278940

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

FPlaybackCapabilityPtr * __thiscall
UE::MovieScene::FPlaybackCapabilitiesImpl::
AddCapability<UE::MovieScene::Tests::FTestSimpleCapability,UE::MovieScene::Tests::FTestSimpleCapability,int,wchar_t_const_(&)[18]>
          (FPlaybackCapabilitiesImpl *this,FPlaybackCapabilityPtr *__return_storage_ptr__,
          uint param_1,int *param_2,wchar_t (*param_3) [18])

{
  ForAnyElementType *pFVar1;
  byte bVar2;
  ushort uVar3;
  uchar *puVar4;
  code *pcVar5;
  undefined8 uVar6;
  ForAnyElementType _Src;
  bool bVar7;
  byte bVar8;
  bool bVar9;
  uint uVar10;
  FPlaybackCapabilityPtr *pFVar11;
  ulonglong uVar12;
  uchar *puVar13;
  uchar *puVar14;
  ulonglong uVar15;
  byte *pbVar16;
  ForElementType<unsigned_short> FVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  uint uVar20;
  uint uVar21;
  int *piVar23;
  uint uVar24;
  uchar *puVar25;
  uint uVar26;
  longlong lVar27;
  uint uVar28;
  uchar *puVar29;
  uchar *puVar30;
  uchar *puVar31;
  ushort *puVar32;
  undefined1 auStackY_128 [32];
  ushort local_b0;
  ushort local_ae;
  uint local_a0;
  FString local_90;
  FPlaybackCapabilityHelpers local_80;
  TArray<unsigned_short,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> local_70;
  ulonglong local_40;
  uchar *puVar22;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_128;
  if (((this->AllCapabilities & param_1) != 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(AllCapabilities & CapabilityBit) == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\MovieScenePlaybackCapabilities.h"
                         ,0x117,L"Capability already exists!"), bVar7)) {
    pcVar5 = (code *)swi(3);
    pFVar11 = (FPlaybackCapabilityPtr *)(*pcVar5)();
    return pFVar11;
  }
  this->AllCapabilities = this->AllCapabilities | param_1;
  bVar8 = this->Num;
  uVar19 = (ulonglong)bVar8;
  uVar26 = param_1 - 1 & this->AllCapabilities;
  puVar4 = this->Memory;
  uVar18 = (ulonglong)uVar26 - ((ulonglong)(uVar26 >> 1) & 0x5555555555555555);
  uVar26 = 8;
  uVar18 = (uVar18 >> 2 & 0x3333333333333333) + (uVar18 & 0x3333333333333333);
  uVar18 = ((uVar18 >> 4) + uVar18 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
  uVar15 = uVar18 >> 0x38;
  if (bVar8 != 0) {
    pbVar16 = puVar4 + 0xc;
    uVar20 = 8;
    do {
      bVar2 = *pbVar16;
      pbVar16 = pbVar16 + 0x10;
      uVar26 = (uint)bVar2;
      if (bVar2 < uVar20) {
        uVar26 = uVar20;
      }
      uVar19 = uVar19 - 1;
      uVar20 = uVar26;
    } while (uVar19 != 0);
  }
  puVar25 = (uchar *)0x0;
  uVar24 = 0;
  local_70.ArrayMax = 0x10;
  uVar28 = bVar8 + 1;
  local_70.AllocatorInstance.SecondaryData = (ForElementType<unsigned_short>)0x0;
  local_70.ArrayNum = 0;
  TArray<unsigned_short,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>::SetNum
            (&local_70,uVar28,Default);
  lVar27 = (ulonglong)uVar28 << 4;
  uVar10 = 0;
  uVar20 = uVar24;
  if (uVar15 != 0) {
    puVar32 = (ushort *)(puVar4 + 10);
    puVar22 = puVar25;
    puVar29 = puVar25;
    do {
      uVar20 = (uint)puVar22;
      uVar19 = lVar27 + -1 + (ulonglong)(byte)puVar32[1] & ~((ulonglong)(byte)puVar32[1] - 1);
      uVar21 = uVar10;
      if ((int)uVar20 < local_70.ArrayNum) {
        uVar21 = ~uVar20 >> 0x1f;
      }
      if ((uVar21 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        pFVar11 = (FPlaybackCapabilityPtr *)(*pcVar5)();
        return pFVar11;
      }
      FVar17 = (ForElementType<unsigned_short>)&local_70;
      if (local_70.AllocatorInstance.SecondaryData != (ForElementType<unsigned_short>)0x0) {
        FVar17 = local_70.AllocatorInstance.SecondaryData;
      }
      uVar20 = uVar20 + 1;
      puVar22 = (uchar *)(ulonglong)uVar20;
      *(short *)((longlong)FVar17 + (longlong)puVar29 * 2) = (short)uVar19;
      puVar29 = puVar29 + 1;
      uVar3 = *puVar32;
      puVar32 = puVar32 + 8;
      lVar27 = uVar19 + uVar3;
    } while ((longlong)puVar29 < (longlong)(uVar18 >> 0x38));
  }
  uVar19 = lVar27 + 7U & 0xfffffffffffffff8;
  uVar21 = uVar10;
  if ((int)uVar20 < local_70.ArrayNum) {
    uVar21 = ~uVar20 >> 0x1f;
  }
  if ((uVar21 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar5 = (code *)swi(3);
    pFVar11 = (FPlaybackCapabilityPtr *)(*pcVar5)();
    return pFVar11;
  }
  FVar17 = (ForElementType<unsigned_short>)&local_70;
  if (local_70.AllocatorInstance.SecondaryData != (ForElementType<unsigned_short>)0x0) {
    FVar17 = local_70.AllocatorInstance.SecondaryData;
  }
  uVar21 = uVar20 + 1;
  *(short *)((longlong)FVar17 + (longlong)(int)uVar20 * 2) = (short)uVar19;
  uVar19 = uVar19 + 0x18;
  if ((int)uVar21 < (int)uVar28) {
    puVar32 = (ushort *)(puVar4 + (longlong)(int)uVar21 * 0x10 + -6);
    lVar27 = (longlong)(int)uVar21 * 2;
    do {
      uVar19 = (uVar19 - 1) + (ulonglong)(byte)puVar32[1] & ~((ulonglong)(byte)puVar32[1] - 1);
      uVar20 = 0;
      if ((int)uVar21 < local_70.ArrayNum) {
        uVar20 = ~uVar21 >> 0x1f;
      }
      if ((uVar20 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        pFVar11 = (FPlaybackCapabilityPtr *)(*pcVar5)();
        return pFVar11;
      }
      FVar17 = (ForElementType<unsigned_short>)&local_70;
      if (local_70.AllocatorInstance.SecondaryData != (ForElementType<unsigned_short>)0x0) {
        FVar17 = local_70.AllocatorInstance.SecondaryData;
      }
      uVar21 = uVar21 + 1;
      *(short *)((longlong)FVar17 + lVar27) = (short)uVar19;
      lVar27 = lVar27 + 2;
      uVar3 = *puVar32;
      puVar32 = puVar32 + 8;
      uVar19 = uVar19 + uVar3;
    } while ((int)uVar21 < (int)uVar28);
  }
  if ((0xff < uVar26) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("RequiredAlignment <= 0XFF",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\MovieScenePlaybackCapabilities.h"
                         ,0x155,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    pFVar11 = (FPlaybackCapabilityPtr *)(*pcVar5)();
    return pFVar11;
  }
  puVar22 = this->Memory;
  if ((this->Alignment < uVar26) || (this->Capacity < uVar19)) {
    uVar12 = (ulonglong)this->Capacity * 2;
    bVar7 = true;
    if (uVar12 < uVar19) {
      uVar12 = uVar19 & 0xffff;
    }
    this->Capacity = (ushort)uVar12;
    puVar29 = FMemory::Malloc(uVar12 & 0xffff,uVar26);
    this->Memory = puVar29;
  }
  else {
    bVar7 = false;
  }
  bVar8 = this->Num + 1;
  this->Num = bVar8;
  lVar27 = (ulonglong)bVar8 - 1;
  uVar26 = bVar8 - 1;
  if ((longlong)uVar15 < lVar27) {
    puVar32 = (ushort *)(puVar4 + lVar27 * 0x10 + -6);
    do {
      uVar20 = uVar10;
      if ((int)uVar26 < local_70.ArrayNum) {
        uVar20 = ~uVar26 >> 0x1f;
      }
      if ((uVar20 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar5 = (code *)swi(3);
        pFVar11 = (FPlaybackCapabilityPtr *)(*pcVar5)();
        return pFVar11;
      }
      FVar17 = (ForElementType<unsigned_short>)&local_70;
      if (local_70.AllocatorInstance.SecondaryData != (ForElementType<unsigned_short>)0x0) {
        FVar17 = local_70.AllocatorInstance.SecondaryData;
      }
      puVar29 = puVar25;
      if (puVar32[-1] != 0xffff) {
        puVar29 = puVar22 + puVar32[-1];
      }
      memmove(this->Memory + *(ushort *)((longlong)FVar17 + lVar27 * 2),puVar29,(ulonglong)*puVar32)
      ;
      uVar26 = uVar26 - 1;
      lVar27 = lVar27 + -1;
      puVar32 = puVar32 + -8;
    } while ((longlong)uVar15 < lVar27);
  }
  uVar20 = uVar10;
  if ((int)uVar26 < local_70.ArrayNum) {
    uVar20 = ~uVar26 >> 0x1f;
  }
  if ((uVar20 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar5 = (code *)swi(3);
    pFVar11 = (FPlaybackCapabilityPtr *)(*pcVar5)();
    return pFVar11;
  }
  FVar17 = (ForElementType<unsigned_short>)&local_70;
  if (local_70.AllocatorInstance.SecondaryData != (ForElementType<unsigned_short>)0x0) {
    FVar17 = local_70.AllocatorInstance.SecondaryData;
  }
  piVar23 = (int *)(this->Memory + *(ushort *)((longlong)FVar17 + (longlong)(int)uVar26 * 2));
  ::FString::FString(&local_90,*param_3);
  _Src.Data = local_90.Data.AllocatorInstance.Data;
  pFVar1 = (ForAnyElementType *)(piVar23 + 2);
  *piVar23 = *param_2;
  pFVar1->Data = (FScriptContainerElement *)0x0;
  piVar23[4] = local_90.Data.ArrayNum;
  if (local_90.Data.ArrayNum == 0) {
    piVar23[5] = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_90.Data.ArrayNum,0,pFVar1,local_90.Data.ArrayNum,piVar23 + 5);
    memcpy(pFVar1->Data,_Src.Data,(longlong)local_90.Data.ArrayNum * 2);
  }
  if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_90.Data.AllocatorInstance.Data);
  }
  uVar26 = uVar26 - 1;
  if (-1 < (int)uVar26) {
    puVar32 = (ushort *)(puVar4 + (longlong)(int)uVar26 * 0x10 + 10);
    lVar27 = (longlong)(int)uVar26 * 2;
    do {
      uVar20 = uVar10;
      if ((int)uVar26 < local_70.ArrayNum) {
        uVar20 = ~uVar26 >> 0x1f;
      }
      if ((uVar20 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar5 = (code *)swi(3);
        pFVar11 = (FPlaybackCapabilityPtr *)(*pcVar5)();
        return pFVar11;
      }
      FVar17 = (ForElementType<unsigned_short>)&local_70;
      if (local_70.AllocatorInstance.SecondaryData != (ForElementType<unsigned_short>)0x0) {
        FVar17 = local_70.AllocatorInstance.SecondaryData;
      }
      puVar29 = puVar25;
      if (puVar32[-1] != 0xffff) {
        puVar29 = puVar22 + puVar32[-1];
      }
      memmove(this->Memory + *(ushort *)(lVar27 + (longlong)FVar17),puVar29,(ulonglong)*puVar32);
      lVar27 = lVar27 + -2;
      puVar32 = puVar32 + -8;
      uVar26 = uVar26 - 1;
    } while (-1 < (int)uVar26);
  }
  puVar29 = this->Memory;
  lVar27 = (ulonglong)this->Num - 1;
  uVar26 = this->Num - 1;
  if ((longlong)uVar15 < lVar27) {
    puVar32 = (ushort *)(puVar29 + lVar27 * 0x10 + 8);
    do {
      uVar6 = *(undefined8 *)(puVar4 + (-0x18 - (longlong)puVar29) + (longlong)puVar32 + 8);
      *(undefined8 *)(puVar32 + -4) =
           *(undefined8 *)(puVar4 + (-0x18 - (longlong)puVar29) + (longlong)puVar32);
      *(undefined8 *)puVar32 = uVar6;
      uVar20 = uVar24;
      if ((int)uVar26 < local_70.ArrayNum) {
        uVar20 = ~uVar26 >> 0x1f;
      }
      if ((uVar20 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar5 = (code *)swi(3);
        pFVar11 = (FPlaybackCapabilityPtr *)(*pcVar5)();
        return pFVar11;
      }
      FVar17 = (ForElementType<unsigned_short>)&local_70;
      if (local_70.AllocatorInstance.SecondaryData != (ForElementType<unsigned_short>)0x0) {
        FVar17 = local_70.AllocatorInstance.SecondaryData;
      }
      uVar3 = *(ushort *)((longlong)FVar17 + lVar27 * 2);
      if (this->Memory + uVar3 < this->Memory) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("false",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\RelativePtr.h"
                           ,0x46,
                           L"Attempting to assign a negative offset to an unsigned relative pointer!!"
                          );
        if (bVar9) {
          pcVar5 = (code *)swi(3);
          pFVar11 = (FPlaybackCapabilityPtr *)(*pcVar5)();
          return pFVar11;
        }
      }
      else {
        local_b0 = uVar3;
        if ((uVar3 == 0xffff) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("OffsetPtr >= 0 && OffsetPtr < std::numeric_limits<OffsetType>::max()"
                               ,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\RelativePtr.h"
                               ,0x3a,
                               L"Attempting to create a relative pointer outside the bounds of its capacity."
                              ), bVar9)) {
          pcVar5 = (code *)swi(3);
          pFVar11 = (FPlaybackCapabilityPtr *)(*pcVar5)();
          return pFVar11;
        }
      }
      uVar26 = uVar26 - 1;
      *puVar32 = local_b0;
      lVar27 = lVar27 + -1;
      puVar32 = puVar32 + -8;
    } while ((longlong)uVar15 < lVar27);
  }
  puVar30 = puVar29 + (longlong)(int)uVar26 * 0x10;
  uVar20 = uVar24;
  if ((int)uVar26 < local_70.ArrayNum) {
    uVar20 = ~uVar26 >> 0x1f;
  }
  if ((uVar20 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar5 = (code *)swi(3);
    pFVar11 = (FPlaybackCapabilityPtr *)(*pcVar5)();
    return pFVar11;
  }
  FVar17 = (ForElementType<unsigned_short>)&local_70;
  if (local_70.AllocatorInstance.SecondaryData != (ForElementType<unsigned_short>)0x0) {
    FVar17 = local_70.AllocatorInstance.SecondaryData;
  }
  uVar3 = *(ushort *)((longlong)FVar17 + (longlong)(int)uVar26 * 2);
  puVar31 = this->Memory;
  puVar30[0xf] = '\0';
  puVar30[0] = '\0';
  puVar30[1] = '\0';
  puVar30[2] = '\0';
  puVar30[3] = '\0';
  puVar30[4] = '\0';
  puVar30[5] = '\0';
  puVar30[6] = '\0';
  puVar30[7] = '\0';
  ((TRelativePtr<void,unsigned_short> *)(puVar30 + 8))->Offset = 0xffff;
  puVar30[10] = '\0';
  puVar30[0xb] = '\0';
  puVar30[0xc] = '\0';
  puVar30[0xd] = '\0';
  puVar30[0xe] = '\0';
  TRelativePtr<void,unsigned_short>::Reset
            ((TRelativePtr<void,unsigned_short> *)(puVar30 + 8),this->Memory,puVar31 + uVar3);
  puVar30[10] = '\x18';
  puVar30[0xb] = '\0';
  puVar30[0xc] = '\b';
  puVar30[0xd] = '\0';
  puVar30[0xe] = '\0';
  puVar13 = ::operator_new(0x10);
  puVar14 = puVar25;
  if (puVar13 != (uchar *)0x0) {
    *(uchar **)(puVar13 + 8) = puVar31 + uVar3;
    *(undefined ***)puVar13 =
         &
         ___7__TPlaybackCapabilityDebuggingTypedPtr_UFTestSimpleCapability_Tests_MovieScene_UE___MovieScene_UE__6B_
    ;
    puVar14 = puVar13;
  }
  uVar26 = uVar26 - 1;
  *(uchar **)puVar30 = puVar14;
  if (-1 < (int)uVar26) {
    puVar31 = puVar29 + (longlong)(int)uVar26 * 0x10;
    lVar27 = (longlong)(int)uVar26 * 2;
    do {
      uVar6 = *(undefined8 *)(puVar31 + ((longlong)puVar4 - (longlong)puVar29) + 8);
      *(undefined8 *)puVar31 = *(undefined8 *)(puVar31 + ((longlong)puVar4 - (longlong)puVar29));
      *(undefined8 *)(puVar31 + 8) = uVar6;
      uVar20 = uVar24;
      if ((int)uVar26 < local_70.ArrayNum) {
        uVar20 = ~uVar26 >> 0x1f;
      }
      if ((uVar20 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar5 = (code *)swi(3);
        pFVar11 = (FPlaybackCapabilityPtr *)(*pcVar5)();
        return pFVar11;
      }
      FVar17 = (ForElementType<unsigned_short>)&local_70;
      if (local_70.AllocatorInstance.SecondaryData != (ForElementType<unsigned_short>)0x0) {
        FVar17 = local_70.AllocatorInstance.SecondaryData;
      }
      uVar3 = *(ushort *)((longlong)FVar17 + lVar27);
      if (this->Memory + uVar3 < this->Memory) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("false",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\RelativePtr.h"
                           ,0x46,
                           L"Attempting to assign a negative offset to an unsigned relative pointer!!"
                          );
        if (bVar9) {
          pcVar5 = (code *)swi(3);
          pFVar11 = (FPlaybackCapabilityPtr *)(*pcVar5)();
          return pFVar11;
        }
      }
      else {
        local_ae = uVar3;
        if ((uVar3 == 0xffff) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("OffsetPtr >= 0 && OffsetPtr < std::numeric_limits<OffsetType>::max()"
                               ,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\RelativePtr.h"
                               ,0x3a,
                               L"Attempting to create a relative pointer outside the bounds of its capacity."
                              ), bVar9)) {
          pcVar5 = (code *)swi(3);
          pFVar11 = (FPlaybackCapabilityPtr *)(*pcVar5)();
          return pFVar11;
        }
      }
      *(ushort *)(puVar31 + 8) = local_ae;
      lVar27 = lVar27 + -2;
      puVar31 = puVar31 + -0x10;
      uVar26 = uVar26 - 1;
    } while (-1 < (int)uVar26);
  }
  if ((bVar7) && (puVar22 != (uchar *)0x0)) {
    FMemory::Free(puVar22);
  }
  local_a0 = (uint)(byte)(uVar18 >> 0x38);
  local_80.InterfaceCast =
       TPlaybackCapabilityInterfaceCast<UE::MovieScene::Tests::FTestSimpleCapability>::InterfaceCast
  ;
  local_80.Destructor =
       TPlaybackCapabilityDestructor<UE::MovieScene::Tests::FTestSimpleCapability>::Destroy;
  TArray<UE::MovieScene::FPlaybackCapabilityHelpers,TSizedDefaultAllocator<32>_>::Insert
            (&this->Helpers,&local_80,local_a0);
  if (*(ushort *)(puVar30 + 8) != 0xffff) {
    puVar25 = this->Memory + *(ushort *)(puVar30 + 8);
  }
  __return_storage_ptr__->Ptr = puVar25 + puVar30[0xd];
  __return_storage_ptr__->StorageMode = puVar30[0xe];
  if (local_70.AllocatorInstance.SecondaryData != (ForElementType<unsigned_short>)0x0) {
    FMemory::Free((void *)local_70.AllocatorInstance.SecondaryData);
  }
  return __return_storage_ptr__;
}

// AddCapability<UE::MovieScene::Tests::FTestSimpleCapability,UE::MovieScene::Tests::FTestSimpleCapability,int,wchar_t_const_(&)[12]> @ 146279330

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

FPlaybackCapabilityPtr * __thiscall
UE::MovieScene::FPlaybackCapabilitiesImpl::
AddCapability<UE::MovieScene::Tests::FTestSimpleCapability,UE::MovieScene::Tests::FTestSimpleCapability,int,wchar_t_const_(&)[12]>
          (FPlaybackCapabilitiesImpl *this,FPlaybackCapabilityPtr *__return_storage_ptr__,
          uint param_1,int *param_2,wchar_t (*param_3) [12])

{
  ForAnyElementType *pFVar1;
  byte bVar2;
  ushort uVar3;
  uchar *puVar4;
  code *pcVar5;
  undefined8 uVar6;
  ForAnyElementType _Src;
  bool bVar7;
  byte bVar8;
  bool bVar9;
  uint uVar10;
  FPlaybackCapabilityPtr *pFVar11;
  ulonglong uVar12;
  uchar *puVar13;
  uchar *puVar14;
  ulonglong uVar15;
  byte *pbVar16;
  ForElementType<unsigned_short> FVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  uint uVar20;
  uint uVar21;
  int *piVar23;
  uint uVar24;
  uchar *puVar25;
  uint uVar26;
  longlong lVar27;
  uint uVar28;
  uchar *puVar29;
  uchar *puVar30;
  uchar *puVar31;
  ushort *puVar32;
  undefined1 auStackY_128 [32];
  ushort local_b0;
  ushort local_ae;
  uint local_a0;
  FString local_90;
  FPlaybackCapabilityHelpers local_80;
  TArray<unsigned_short,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> local_70;
  ulonglong local_40;
  uchar *puVar22;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_128;
  if (((this->AllCapabilities & param_1) != 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(AllCapabilities & CapabilityBit) == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\MovieScenePlaybackCapabilities.h"
                         ,0x117,L"Capability already exists!"), bVar7)) {
    pcVar5 = (code *)swi(3);
    pFVar11 = (FPlaybackCapabilityPtr *)(*pcVar5)();
    return pFVar11;
  }
  this->AllCapabilities = this->AllCapabilities | param_1;
  bVar8 = this->Num;
  uVar19 = (ulonglong)bVar8;
  uVar26 = param_1 - 1 & this->AllCapabilities;
  puVar4 = this->Memory;
  uVar18 = (ulonglong)uVar26 - ((ulonglong)(uVar26 >> 1) & 0x5555555555555555);
  uVar26 = 8;
  uVar18 = (uVar18 >> 2 & 0x3333333333333333) + (uVar18 & 0x3333333333333333);
  uVar18 = ((uVar18 >> 4) + uVar18 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
  uVar15 = uVar18 >> 0x38;
  if (bVar8 != 0) {
    pbVar16 = puVar4 + 0xc;
    uVar20 = 8;
    do {
      bVar2 = *pbVar16;
      pbVar16 = pbVar16 + 0x10;
      uVar26 = (uint)bVar2;
      if (bVar2 < uVar20) {
        uVar26 = uVar20;
      }
      uVar19 = uVar19 - 1;
      uVar20 = uVar26;
    } while (uVar19 != 0);
  }
  puVar25 = (uchar *)0x0;
  uVar24 = 0;
  local_70.ArrayMax = 0x10;
  uVar28 = bVar8 + 1;
  local_70.AllocatorInstance.SecondaryData = (ForElementType<unsigned_short>)0x0;
  local_70.ArrayNum = 0;
  TArray<unsigned_short,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>::SetNum
            (&local_70,uVar28,Default);
  lVar27 = (ulonglong)uVar28 << 4;
  uVar10 = 0;
  uVar20 = uVar24;
  if (uVar15 != 0) {
    puVar32 = (ushort *)(puVar4 + 10);
    puVar22 = puVar25;
    puVar29 = puVar25;
    do {
      uVar20 = (uint)puVar22;
      uVar19 = lVar27 + -1 + (ulonglong)(byte)puVar32[1] & ~((ulonglong)(byte)puVar32[1] - 1);
      uVar21 = uVar10;
      if ((int)uVar20 < local_70.ArrayNum) {
        uVar21 = ~uVar20 >> 0x1f;
      }
      if ((uVar21 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        pFVar11 = (FPlaybackCapabilityPtr *)(*pcVar5)();
        return pFVar11;
      }
      FVar17 = (ForElementType<unsigned_short>)&local_70;
      if (local_70.AllocatorInstance.SecondaryData != (ForElementType<unsigned_short>)0x0) {
        FVar17 = local_70.AllocatorInstance.SecondaryData;
      }
      uVar20 = uVar20 + 1;
      puVar22 = (uchar *)(ulonglong)uVar20;
      *(short *)((longlong)FVar17 + (longlong)puVar29 * 2) = (short)uVar19;
      puVar29 = puVar29 + 1;
      uVar3 = *puVar32;
      puVar32 = puVar32 + 8;
      lVar27 = uVar19 + uVar3;
    } while ((longlong)puVar29 < (longlong)(uVar18 >> 0x38));
  }
  uVar19 = lVar27 + 7U & 0xfffffffffffffff8;
  uVar21 = uVar10;
  if ((int)uVar20 < local_70.ArrayNum) {
    uVar21 = ~uVar20 >> 0x1f;
  }
  if ((uVar21 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar5 = (code *)swi(3);
    pFVar11 = (FPlaybackCapabilityPtr *)(*pcVar5)();
    return pFVar11;
  }
  FVar17 = (ForElementType<unsigned_short>)&local_70;
  if (local_70.AllocatorInstance.SecondaryData != (ForElementType<unsigned_short>)0x0) {
    FVar17 = local_70.AllocatorInstance.SecondaryData;
  }
  uVar21 = uVar20 + 1;
  *(short *)((longlong)FVar17 + (longlong)(int)uVar20 * 2) = (short)uVar19;
  uVar19 = uVar19 + 0x18;
  if ((int)uVar21 < (int)uVar28) {
    puVar32 = (ushort *)(puVar4 + (longlong)(int)uVar21 * 0x10 + -6);
    lVar27 = (longlong)(int)uVar21 * 2;
    do {
      uVar19 = (uVar19 - 1) + (ulonglong)(byte)puVar32[1] & ~((ulonglong)(byte)puVar32[1] - 1);
      uVar20 = 0;
      if ((int)uVar21 < local_70.ArrayNum) {
        uVar20 = ~uVar21 >> 0x1f;
      }
      if ((uVar20 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        pFVar11 = (FPlaybackCapabilityPtr *)(*pcVar5)();
        return pFVar11;
      }
      FVar17 = (ForElementType<unsigned_short>)&local_70;
      if (local_70.AllocatorInstance.SecondaryData != (ForElementType<unsigned_short>)0x0) {
        FVar17 = local_70.AllocatorInstance.SecondaryData;
      }
      uVar21 = uVar21 + 1;
      *(short *)((longlong)FVar17 + lVar27) = (short)uVar19;
      lVar27 = lVar27 + 2;
      uVar3 = *puVar32;
      puVar32 = puVar32 + 8;
      uVar19 = uVar19 + uVar3;
    } while ((int)uVar21 < (int)uVar28);
  }
  if ((0xff < uVar26) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("RequiredAlignment <= 0XFF",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\MovieScenePlaybackCapabilities.h"
                         ,0x155,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    pFVar11 = (FPlaybackCapabilityPtr *)(*pcVar5)();
    return pFVar11;
  }
  puVar22 = this->Memory;
  if ((this->Alignment < uVar26) || (this->Capacity < uVar19)) {
    uVar12 = (ulonglong)this->Capacity * 2;
    bVar7 = true;
    if (uVar12 < uVar19) {
      uVar12 = uVar19 & 0xffff;
    }
    this->Capacity = (ushort)uVar12;
    puVar29 = FMemory::Malloc(uVar12 & 0xffff,uVar26);
    this->Memory = puVar29;
  }
  else {
    bVar7 = false;
  }
  bVar8 = this->Num + 1;
  this->Num = bVar8;
  lVar27 = (ulonglong)bVar8 - 1;
  uVar26 = bVar8 - 1;
  if ((longlong)uVar15 < lVar27) {
    puVar32 = (ushort *)(puVar4 + lVar27 * 0x10 + -6);
    do {
      uVar20 = uVar10;
      if ((int)uVar26 < local_70.ArrayNum) {
        uVar20 = ~uVar26 >> 0x1f;
      }
      if ((uVar20 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar5 = (code *)swi(3);
        pFVar11 = (FPlaybackCapabilityPtr *)(*pcVar5)();
        return pFVar11;
      }
      FVar17 = (ForElementType<unsigned_short>)&local_70;
      if (local_70.AllocatorInstance.SecondaryData != (ForElementType<unsigned_short>)0x0) {
        FVar17 = local_70.AllocatorInstance.SecondaryData;
      }
      puVar29 = puVar25;
      if (puVar32[-1] != 0xffff) {
        puVar29 = puVar22 + puVar32[-1];
      }
      memmove(this->Memory + *(ushort *)((longlong)FVar17 + lVar27 * 2),puVar29,(ulonglong)*puVar32)
      ;
      uVar26 = uVar26 - 1;
      lVar27 = lVar27 + -1;
      puVar32 = puVar32 + -8;
    } while ((longlong)uVar15 < lVar27);
  }
  uVar20 = uVar10;
  if ((int)uVar26 < local_70.ArrayNum) {
    uVar20 = ~uVar26 >> 0x1f;
  }
  if ((uVar20 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar5 = (code *)swi(3);
    pFVar11 = (FPlaybackCapabilityPtr *)(*pcVar5)();
    return pFVar11;
  }
  FVar17 = (ForElementType<unsigned_short>)&local_70;
  if (local_70.AllocatorInstance.SecondaryData != (ForElementType<unsigned_short>)0x0) {
    FVar17 = local_70.AllocatorInstance.SecondaryData;
  }
  piVar23 = (int *)(this->Memory + *(ushort *)((longlong)FVar17 + (longlong)(int)uVar26 * 2));
  ::FString::FString(&local_90,*param_3);
  _Src.Data = local_90.Data.AllocatorInstance.Data;
  pFVar1 = (ForAnyElementType *)(piVar23 + 2);
  *piVar23 = *param_2;
  pFVar1->Data = (FScriptContainerElement *)0x0;
  piVar23[4] = local_90.Data.ArrayNum;
  if (local_90.Data.ArrayNum == 0) {
    piVar23[5] = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_90.Data.ArrayNum,0,pFVar1,local_90.Data.ArrayNum,piVar23 + 5);
    memcpy(pFVar1->Data,_Src.Data,(longlong)local_90.Data.ArrayNum * 2);
  }
  if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_90.Data.AllocatorInstance.Data);
  }
  uVar26 = uVar26 - 1;
  if (-1 < (int)uVar26) {
    puVar32 = (ushort *)(puVar4 + (longlong)(int)uVar26 * 0x10 + 10);
    lVar27 = (longlong)(int)uVar26 * 2;
    do {
      uVar20 = uVar10;
      if ((int)uVar26 < local_70.ArrayNum) {
        uVar20 = ~uVar26 >> 0x1f;
      }
      if ((uVar20 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar5 = (code *)swi(3);
        pFVar11 = (FPlaybackCapabilityPtr *)(*pcVar5)();
        return pFVar11;
      }
      FVar17 = (ForElementType<unsigned_short>)&local_70;
      if (local_70.AllocatorInstance.SecondaryData != (ForElementType<unsigned_short>)0x0) {
        FVar17 = local_70.AllocatorInstance.SecondaryData;
      }
      puVar29 = puVar25;
      if (puVar32[-1] != 0xffff) {
        puVar29 = puVar22 + puVar32[-1];
      }
      memmove(this->Memory + *(ushort *)(lVar27 + (longlong)FVar17),puVar29,(ulonglong)*puVar32);
      lVar27 = lVar27 + -2;
      puVar32 = puVar32 + -8;
      uVar26 = uVar26 - 1;
    } while (-1 < (int)uVar26);
  }
  puVar29 = this->Memory;
  lVar27 = (ulonglong)this->Num - 1;
  uVar26 = this->Num - 1;
  if ((longlong)uVar15 < lVar27) {
    puVar32 = (ushort *)(puVar29 + lVar27 * 0x10 + 8);
    do {
      uVar6 = *(undefined8 *)(puVar4 + (-0x18 - (longlong)puVar29) + (longlong)puVar32 + 8);
      *(undefined8 *)(puVar32 + -4) =
           *(undefined8 *)(puVar4 + (-0x18 - (longlong)puVar29) + (longlong)puVar32);
      *(undefined8 *)puVar32 = uVar6;
      uVar20 = uVar24;
      if ((int)uVar26 < local_70.ArrayNum) {
        uVar20 = ~uVar26 >> 0x1f;
      }
      if ((uVar20 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar5 = (code *)swi(3);
        pFVar11 = (FPlaybackCapabilityPtr *)(*pcVar5)();
        return pFVar11;
      }
      FVar17 = (ForElementType<unsigned_short>)&local_70;
      if (local_70.AllocatorInstance.SecondaryData != (ForElementType<unsigned_short>)0x0) {
        FVar17 = local_70.AllocatorInstance.SecondaryData;
      }
      uVar3 = *(ushort *)((longlong)FVar17 + lVar27 * 2);
      if (this->Memory + uVar3 < this->Memory) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("false",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\RelativePtr.h"
                           ,0x46,
                           L"Attempting to assign a negative offset to an unsigned relative pointer!!"
                          );
        if (bVar9) {
          pcVar5 = (code *)swi(3);
          pFVar11 = (FPlaybackCapabilityPtr *)(*pcVar5)();
          return pFVar11;
        }
      }
      else {
        local_b0 = uVar3;
        if ((uVar3 == 0xffff) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("OffsetPtr >= 0 && OffsetPtr < std::numeric_limits<OffsetType>::max()"
                               ,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\RelativePtr.h"
                               ,0x3a,
                               L"Attempting to create a relative pointer outside the bounds of its capacity."
                              ), bVar9)) {
          pcVar5 = (code *)swi(3);
          pFVar11 = (FPlaybackCapabilityPtr *)(*pcVar5)();
          return pFVar11;
        }
      }
      uVar26 = uVar26 - 1;
      *puVar32 = local_b0;
      lVar27 = lVar27 + -1;
      puVar32 = puVar32 + -8;
    } while ((longlong)uVar15 < lVar27);
  }
  puVar30 = puVar29 + (longlong)(int)uVar26 * 0x10;
  uVar20 = uVar24;
  if ((int)uVar26 < local_70.ArrayNum) {
    uVar20 = ~uVar26 >> 0x1f;
  }
  if ((uVar20 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar5 = (code *)swi(3);
    pFVar11 = (FPlaybackCapabilityPtr *)(*pcVar5)();
    return pFVar11;
  }
  FVar17 = (ForElementType<unsigned_short>)&local_70;
  if (local_70.AllocatorInstance.SecondaryData != (ForElementType<unsigned_short>)0x0) {
    FVar17 = local_70.AllocatorInstance.SecondaryData;
  }
  uVar3 = *(ushort *)((longlong)FVar17 + (longlong)(int)uVar26 * 2);
  puVar31 = this->Memory;
  puVar30[0xf] = '\0';
  puVar30[0] = '\0';
  puVar30[1] = '\0';
  puVar30[2] = '\0';
  puVar30[3] = '\0';
  puVar30[4] = '\0';
  puVar30[5] = '\0';
  puVar30[6] = '\0';
  puVar30[7] = '\0';
  ((TRelativePtr<void,unsigned_short> *)(puVar30 + 8))->Offset = 0xffff;
  puVar30[10] = '\0';
  puVar30[0xb] = '\0';
  puVar30[0xc] = '\0';
  puVar30[0xd] = '\0';
  puVar30[0xe] = '\0';
  TRelativePtr<void,unsigned_short>::Reset
            ((TRelativePtr<void,unsigned_short> *)(puVar30 + 8),this->Memory,puVar31 + uVar3);
  puVar30[10] = '\x18';
  puVar30[0xb] = '\0';
  puVar30[0xc] = '\b';
  puVar30[0xd] = '\0';
  puVar30[0xe] = '\0';
  puVar13 = ::operator_new(0x10);
  puVar14 = puVar25;
  if (puVar13 != (uchar *)0x0) {
    *(uchar **)(puVar13 + 8) = puVar31 + uVar3;
    *(undefined ***)puVar13 =
         &
         ___7__TPlaybackCapabilityDebuggingTypedPtr_UFTestSimpleCapability_Tests_MovieScene_UE___MovieScene_UE__6B_
    ;
    puVar14 = puVar13;
  }
  uVar26 = uVar26 - 1;
  *(uchar **)puVar30 = puVar14;
  if (-1 < (int)uVar26) {
    puVar31 = puVar29 + (longlong)(int)uVar26 * 0x10;
    lVar27 = (longlong)(int)uVar26 * 2;
    do {
      uVar6 = *(undefined8 *)(puVar31 + ((longlong)puVar4 - (longlong)puVar29) + 8);
      *(undefined8 *)puVar31 = *(undefined8 *)(puVar31 + ((longlong)puVar4 - (longlong)puVar29));
      *(undefined8 *)(puVar31 + 8) = uVar6;
      uVar20 = uVar24;
      if ((int)uVar26 < local_70.ArrayNum) {
        uVar20 = ~uVar26 >> 0x1f;
      }
      if ((uVar20 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar5 = (code *)swi(3);
        pFVar11 = (FPlaybackCapabilityPtr *)(*pcVar5)();
        return pFVar11;
      }
      FVar17 = (ForElementType<unsigned_short>)&local_70;
      if (local_70.AllocatorInstance.SecondaryData != (ForElementType<unsigned_short>)0x0) {
        FVar17 = local_70.AllocatorInstance.SecondaryData;
      }
      uVar3 = *(ushort *)((longlong)FVar17 + lVar27);
      if (this->Memory + uVar3 < this->Memory) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("false",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\RelativePtr.h"
                           ,0x46,
                           L"Attempting to assign a negative offset to an unsigned relative pointer!!"
                          );
        if (bVar9) {
          pcVar5 = (code *)swi(3);
          pFVar11 = (FPlaybackCapabilityPtr *)(*pcVar5)();
          return pFVar11;
        }
      }
      else {
        local_ae = uVar3;
        if ((uVar3 == 0xffff) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("OffsetPtr >= 0 && OffsetPtr < std::numeric_limits<OffsetType>::max()"
                               ,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\RelativePtr.h"
                               ,0x3a,
                               L"Attempting to create a relative pointer outside the bounds of its capacity."
                              ), bVar9)) {
          pcVar5 = (code *)swi(3);
          pFVar11 = (FPlaybackCapabilityPtr *)(*pcVar5)();
          return pFVar11;
        }
      }
      *(ushort *)(puVar31 + 8) = local_ae;
      lVar27 = lVar27 + -2;
      puVar31 = puVar31 + -0x10;
      uVar26 = uVar26 - 1;
    } while (-1 < (int)uVar26);
  }
  if ((bVar7) && (puVar22 != (uchar *)0x0)) {
    FMemory::Free(puVar22);
  }
  local_a0 = (uint)(byte)(uVar18 >> 0x38);
  local_80.InterfaceCast =
       TPlaybackCapabilityInterfaceCast<UE::MovieScene::Tests::FTestSimpleCapability>::InterfaceCast
  ;
  local_80.Destructor =
       TPlaybackCapabilityDestructor<UE::MovieScene::Tests::FTestSimpleCapability>::Destroy;
  TArray<UE::MovieScene::FPlaybackCapabilityHelpers,TSizedDefaultAllocator<32>_>::Insert
            (&this->Helpers,&local_80,local_a0);
  if (*(ushort *)(puVar30 + 8) != 0xffff) {
    puVar25 = this->Memory + *(ushort *)(puVar30 + 8);
  }
  __return_storage_ptr__->Ptr = puVar25 + puVar30[0xd];
  __return_storage_ptr__->StorageMode = puVar30[0xe];
  if (local_70.AllocatorInstance.SecondaryData != (ForElementType<unsigned_short>)0x0) {
    FMemory::Free((void *)local_70.AllocatorInstance.SecondaryData);
  }
  return __return_storage_ptr__;
}

// AddCapability<UE::MovieScene::Tests::FTestSimpleCapabilityDerived,UE::MovieScene::Tests::FTestSimpleCapability,int,wchar_t_const_(&)[8]> @ 146279d20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

FPlaybackCapabilityPtr * __thiscall
UE::MovieScene::FPlaybackCapabilitiesImpl::
AddCapability<UE::MovieScene::Tests::FTestSimpleCapabilityDerived,UE::MovieScene::Tests::FTestSimpleCapability,int,wchar_t_const_(&)[8]>
          (FPlaybackCapabilitiesImpl *this,FPlaybackCapabilityPtr *__return_storage_ptr__,
          uint param_1,int *param_2,wchar_t (*param_3) [8])

{
  ForAnyElementType *pFVar1;
  byte bVar2;
  ushort uVar3;
  uchar *puVar4;
  code *pcVar5;
  undefined8 uVar6;
  ForAnyElementType _Src;
  bool bVar7;
  byte bVar8;
  bool bVar9;
  uint uVar10;
  FPlaybackCapabilityPtr *pFVar11;
  ulonglong uVar12;
  uchar *puVar13;
  uchar *puVar14;
  ulonglong uVar15;
  byte *pbVar16;
  ForElementType<unsigned_short> FVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  uint uVar20;
  uint uVar21;
  int *piVar23;
  uint uVar24;
  uchar *puVar25;
  uint uVar26;
  longlong lVar27;
  uint uVar28;
  uchar *puVar29;
  uchar *puVar30;
  uchar *puVar31;
  ushort *puVar32;
  undefined1 auStackY_128 [32];
  ushort local_b0;
  ushort local_ae;
  uint local_a0;
  FString local_90;
  FPlaybackCapabilityHelpers local_80;
  TArray<unsigned_short,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> local_70;
  ulonglong local_40;
  uchar *puVar22;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_128;
  if (((this->AllCapabilities & param_1) != 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(AllCapabilities & CapabilityBit) == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\MovieScenePlaybackCapabilities.h"
                         ,0x117,L"Capability already exists!"), bVar7)) {
    pcVar5 = (code *)swi(3);
    pFVar11 = (FPlaybackCapabilityPtr *)(*pcVar5)();
    return pFVar11;
  }
  this->AllCapabilities = this->AllCapabilities | param_1;
  bVar8 = this->Num;
  uVar19 = (ulonglong)bVar8;
  uVar26 = param_1 - 1 & this->AllCapabilities;
  puVar4 = this->Memory;
  uVar18 = (ulonglong)uVar26 - ((ulonglong)(uVar26 >> 1) & 0x5555555555555555);
  uVar26 = 8;
  uVar18 = (uVar18 >> 2 & 0x3333333333333333) + (uVar18 & 0x3333333333333333);
  uVar18 = ((uVar18 >> 4) + uVar18 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
  uVar15 = uVar18 >> 0x38;
  if (bVar8 != 0) {
    pbVar16 = puVar4 + 0xc;
    uVar20 = 8;
    do {
      bVar2 = *pbVar16;
      pbVar16 = pbVar16 + 0x10;
      uVar26 = (uint)bVar2;
      if (bVar2 < uVar20) {
        uVar26 = uVar20;
      }
      uVar19 = uVar19 - 1;
      uVar20 = uVar26;
    } while (uVar19 != 0);
  }
  puVar25 = (uchar *)0x0;
  uVar24 = 0;
  local_70.ArrayMax = 0x10;
  uVar28 = bVar8 + 1;
  local_70.AllocatorInstance.SecondaryData = (ForElementType<unsigned_short>)0x0;
  local_70.ArrayNum = 0;
  TArray<unsigned_short,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>::SetNum
            (&local_70,uVar28,Default);
  lVar27 = (ulonglong)uVar28 << 4;
  uVar10 = 0;
  uVar20 = uVar24;
  if (uVar15 != 0) {
    puVar32 = (ushort *)(puVar4 + 10);
    puVar22 = puVar25;
    puVar29 = puVar25;
    do {
      uVar20 = (uint)puVar22;
      uVar19 = lVar27 + -1 + (ulonglong)(byte)puVar32[1] & ~((ulonglong)(byte)puVar32[1] - 1);
      uVar21 = uVar10;
      if ((int)uVar20 < local_70.ArrayNum) {
        uVar21 = ~uVar20 >> 0x1f;
      }
      if ((uVar21 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        pFVar11 = (FPlaybackCapabilityPtr *)(*pcVar5)();
        return pFVar11;
      }
      FVar17 = (ForElementType<unsigned_short>)&local_70;
      if (local_70.AllocatorInstance.SecondaryData != (ForElementType<unsigned_short>)0x0) {
        FVar17 = local_70.AllocatorInstance.SecondaryData;
      }
      uVar20 = uVar20 + 1;
      puVar22 = (uchar *)(ulonglong)uVar20;
      *(short *)((longlong)FVar17 + (longlong)puVar29 * 2) = (short)uVar19;
      puVar29 = puVar29 + 1;
      uVar3 = *puVar32;
      puVar32 = puVar32 + 8;
      lVar27 = uVar19 + uVar3;
    } while ((longlong)puVar29 < (longlong)(uVar18 >> 0x38));
  }
  uVar19 = lVar27 + 7U & 0xfffffffffffffff8;
  uVar21 = uVar10;
  if ((int)uVar20 < local_70.ArrayNum) {
    uVar21 = ~uVar20 >> 0x1f;
  }
  if ((uVar21 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar5 = (code *)swi(3);
    pFVar11 = (FPlaybackCapabilityPtr *)(*pcVar5)();
    return pFVar11;
  }
  FVar17 = (ForElementType<unsigned_short>)&local_70;
  if (local_70.AllocatorInstance.SecondaryData != (ForElementType<unsigned_short>)0x0) {
    FVar17 = local_70.AllocatorInstance.SecondaryData;
  }
  uVar21 = uVar20 + 1;
  *(short *)((longlong)FVar17 + (longlong)(int)uVar20 * 2) = (short)uVar19;
  uVar19 = uVar19 + 0x18;
  if ((int)uVar21 < (int)uVar28) {
    puVar32 = (ushort *)(puVar4 + (longlong)(int)uVar21 * 0x10 + -6);
    lVar27 = (longlong)(int)uVar21 * 2;
    do {
      uVar19 = (uVar19 - 1) + (ulonglong)(byte)puVar32[1] & ~((ulonglong)(byte)puVar32[1] - 1);
      uVar20 = 0;
      if ((int)uVar21 < local_70.ArrayNum) {
        uVar20 = ~uVar21 >> 0x1f;
      }
      if ((uVar20 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        pFVar11 = (FPlaybackCapabilityPtr *)(*pcVar5)();
        return pFVar11;
      }
      FVar17 = (ForElementType<unsigned_short>)&local_70;
      if (local_70.AllocatorInstance.SecondaryData != (ForElementType<unsigned_short>)0x0) {
        FVar17 = local_70.AllocatorInstance.SecondaryData;
      }
      uVar21 = uVar21 + 1;
      *(short *)((longlong)FVar17 + lVar27) = (short)uVar19;
      lVar27 = lVar27 + 2;
      uVar3 = *puVar32;
      puVar32 = puVar32 + 8;
      uVar19 = uVar19 + uVar3;
    } while ((int)uVar21 < (int)uVar28);
  }
  if ((0xff < uVar26) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("RequiredAlignment <= 0XFF",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\MovieScenePlaybackCapabilities.h"
                         ,0x155,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    pFVar11 = (FPlaybackCapabilityPtr *)(*pcVar5)();
    return pFVar11;
  }
  puVar22 = this->Memory;
  if ((this->Alignment < uVar26) || (this->Capacity < uVar19)) {
    uVar12 = (ulonglong)this->Capacity * 2;
    bVar7 = true;
    if (uVar12 < uVar19) {
      uVar12 = uVar19 & 0xffff;
    }
    this->Capacity = (ushort)uVar12;
    puVar29 = FMemory::Malloc(uVar12 & 0xffff,uVar26);
    this->Memory = puVar29;
  }
  else {
    bVar7 = false;
  }
  bVar8 = this->Num + 1;
  this->Num = bVar8;
  lVar27 = (ulonglong)bVar8 - 1;
  uVar26 = bVar8 - 1;
  if ((longlong)uVar15 < lVar27) {
    puVar32 = (ushort *)(puVar4 + lVar27 * 0x10 + -6);
    do {
      uVar20 = uVar10;
      if ((int)uVar26 < local_70.ArrayNum) {
        uVar20 = ~uVar26 >> 0x1f;
      }
      if ((uVar20 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar5 = (code *)swi(3);
        pFVar11 = (FPlaybackCapabilityPtr *)(*pcVar5)();
        return pFVar11;
      }
      FVar17 = (ForElementType<unsigned_short>)&local_70;
      if (local_70.AllocatorInstance.SecondaryData != (ForElementType<unsigned_short>)0x0) {
        FVar17 = local_70.AllocatorInstance.SecondaryData;
      }
      puVar29 = puVar25;
      if (puVar32[-1] != 0xffff) {
        puVar29 = puVar22 + puVar32[-1];
      }
      memmove(this->Memory + *(ushort *)((longlong)FVar17 + lVar27 * 2),puVar29,(ulonglong)*puVar32)
      ;
      uVar26 = uVar26 - 1;
      lVar27 = lVar27 + -1;
      puVar32 = puVar32 + -8;
    } while ((longlong)uVar15 < lVar27);
  }
  uVar20 = uVar10;
  if ((int)uVar26 < local_70.ArrayNum) {
    uVar20 = ~uVar26 >> 0x1f;
  }
  if ((uVar20 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar5 = (code *)swi(3);
    pFVar11 = (FPlaybackCapabilityPtr *)(*pcVar5)();
    return pFVar11;
  }
  FVar17 = (ForElementType<unsigned_short>)&local_70;
  if (local_70.AllocatorInstance.SecondaryData != (ForElementType<unsigned_short>)0x0) {
    FVar17 = local_70.AllocatorInstance.SecondaryData;
  }
  piVar23 = (int *)(this->Memory + *(ushort *)((longlong)FVar17 + (longlong)(int)uVar26 * 2));
  ::FString::FString(&local_90,*param_3);
  _Src.Data = local_90.Data.AllocatorInstance.Data;
  pFVar1 = (ForAnyElementType *)(piVar23 + 2);
  *piVar23 = *param_2;
  pFVar1->Data = (FScriptContainerElement *)0x0;
  piVar23[4] = local_90.Data.ArrayNum;
  if (local_90.Data.ArrayNum == 0) {
    piVar23[5] = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_90.Data.ArrayNum,0,pFVar1,local_90.Data.ArrayNum,piVar23 + 5);
    memcpy(pFVar1->Data,_Src.Data,(longlong)local_90.Data.ArrayNum * 2);
  }
  if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_90.Data.AllocatorInstance.Data);
  }
  uVar26 = uVar26 - 1;
  if (-1 < (int)uVar26) {
    puVar32 = (ushort *)(puVar4 + (longlong)(int)uVar26 * 0x10 + 10);
    lVar27 = (longlong)(int)uVar26 * 2;
    do {
      uVar20 = uVar10;
      if ((int)uVar26 < local_70.ArrayNum) {
        uVar20 = ~uVar26 >> 0x1f;
      }
      if ((uVar20 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar5 = (code *)swi(3);
        pFVar11 = (FPlaybackCapabilityPtr *)(*pcVar5)();
        return pFVar11;
      }
      FVar17 = (ForElementType<unsigned_short>)&local_70;
      if (local_70.AllocatorInstance.SecondaryData != (ForElementType<unsigned_short>)0x0) {
        FVar17 = local_70.AllocatorInstance.SecondaryData;
      }
      puVar29 = puVar25;
      if (puVar32[-1] != 0xffff) {
        puVar29 = puVar22 + puVar32[-1];
      }
      memmove(this->Memory + *(ushort *)(lVar27 + (longlong)FVar17),puVar29,(ulonglong)*puVar32);
      lVar27 = lVar27 + -2;
      puVar32 = puVar32 + -8;
      uVar26 = uVar26 - 1;
    } while (-1 < (int)uVar26);
  }
  puVar29 = this->Memory;
  lVar27 = (ulonglong)this->Num - 1;
  uVar26 = this->Num - 1;
  if ((longlong)uVar15 < lVar27) {
    puVar32 = (ushort *)(puVar29 + lVar27 * 0x10 + 8);
    do {
      uVar6 = *(undefined8 *)(puVar4 + (-0x18 - (longlong)puVar29) + (longlong)puVar32 + 8);
      *(undefined8 *)(puVar32 + -4) =
           *(undefined8 *)(puVar4 + (-0x18 - (longlong)puVar29) + (longlong)puVar32);
      *(undefined8 *)puVar32 = uVar6;
      uVar20 = uVar24;
      if ((int)uVar26 < local_70.ArrayNum) {
        uVar20 = ~uVar26 >> 0x1f;
      }
      if ((uVar20 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar5 = (code *)swi(3);
        pFVar11 = (FPlaybackCapabilityPtr *)(*pcVar5)();
        return pFVar11;
      }
      FVar17 = (ForElementType<unsigned_short>)&local_70;
      if (local_70.AllocatorInstance.SecondaryData != (ForElementType<unsigned_short>)0x0) {
        FVar17 = local_70.AllocatorInstance.SecondaryData;
      }
      uVar3 = *(ushort *)((longlong)FVar17 + lVar27 * 2);
      if (this->Memory + uVar3 < this->Memory) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("false",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\RelativePtr.h"
                           ,0x46,
                           L"Attempting to assign a negative offset to an unsigned relative pointer!!"
                          );
        if (bVar9) {
          pcVar5 = (code *)swi(3);
          pFVar11 = (FPlaybackCapabilityPtr *)(*pcVar5)();
          return pFVar11;
        }
      }
      else {
        local_b0 = uVar3;
        if ((uVar3 == 0xffff) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("OffsetPtr >= 0 && OffsetPtr < std::numeric_limits<OffsetType>::max()"
                               ,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\RelativePtr.h"
                               ,0x3a,
                               L"Attempting to create a relative pointer outside the bounds of its capacity."
                              ), bVar9)) {
          pcVar5 = (code *)swi(3);
          pFVar11 = (FPlaybackCapabilityPtr *)(*pcVar5)();
          return pFVar11;
        }
      }
      uVar26 = uVar26 - 1;
      *puVar32 = local_b0;
      lVar27 = lVar27 + -1;
      puVar32 = puVar32 + -8;
    } while ((longlong)uVar15 < lVar27);
  }
  puVar30 = puVar29 + (longlong)(int)uVar26 * 0x10;
  uVar20 = uVar24;
  if ((int)uVar26 < local_70.ArrayNum) {
    uVar20 = ~uVar26 >> 0x1f;
  }
  if ((uVar20 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar5 = (code *)swi(3);
    pFVar11 = (FPlaybackCapabilityPtr *)(*pcVar5)();
    return pFVar11;
  }
  FVar17 = (ForElementType<unsigned_short>)&local_70;
  if (local_70.AllocatorInstance.SecondaryData != (ForElementType<unsigned_short>)0x0) {
    FVar17 = local_70.AllocatorInstance.SecondaryData;
  }
  uVar3 = *(ushort *)((longlong)FVar17 + (longlong)(int)uVar26 * 2);
  puVar31 = this->Memory;
  puVar30[0xf] = '\0';
  puVar30[0] = '\0';
  puVar30[1] = '\0';
  puVar30[2] = '\0';
  puVar30[3] = '\0';
  puVar30[4] = '\0';
  puVar30[5] = '\0';
  puVar30[6] = '\0';
  puVar30[7] = '\0';
  ((TRelativePtr<void,unsigned_short> *)(puVar30 + 8))->Offset = 0xffff;
  puVar30[10] = '\0';
  puVar30[0xb] = '\0';
  puVar30[0xc] = '\0';
  puVar30[0xd] = '\0';
  puVar30[0xe] = '\0';
  TRelativePtr<void,unsigned_short>::Reset
            ((TRelativePtr<void,unsigned_short> *)(puVar30 + 8),this->Memory,puVar31 + uVar3);
  puVar30[10] = '\x18';
  puVar30[0xb] = '\0';
  puVar30[0xc] = '\b';
  puVar30[0xd] = '\0';
  puVar30[0xe] = '\0';
  puVar13 = ::operator_new(0x10);
  puVar14 = puVar25;
  if (puVar13 != (uchar *)0x0) {
    *(uchar **)(puVar13 + 8) = puVar31 + uVar3;
    *(undefined ***)puVar13 =
         &
         ___7__TPlaybackCapabilityDebuggingTypedPtr_UFTestSimpleCapabilityDerived_Tests_MovieScene_UE___MovieScene_UE__6B_
    ;
    puVar14 = puVar13;
  }
  uVar26 = uVar26 - 1;
  *(uchar **)puVar30 = puVar14;
  if (-1 < (int)uVar26) {
    puVar31 = puVar29 + (longlong)(int)uVar26 * 0x10;
    lVar27 = (longlong)(int)uVar26 * 2;
    do {
      uVar6 = *(undefined8 *)(puVar31 + ((longlong)puVar4 - (longlong)puVar29) + 8);
      *(undefined8 *)puVar31 = *(undefined8 *)(puVar31 + ((longlong)puVar4 - (longlong)puVar29));
      *(undefined8 *)(puVar31 + 8) = uVar6;
      uVar20 = uVar24;
      if ((int)uVar26 < local_70.ArrayNum) {
        uVar20 = ~uVar26 >> 0x1f;
      }
      if ((uVar20 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar5 = (code *)swi(3);
        pFVar11 = (FPlaybackCapabilityPtr *)(*pcVar5)();
        return pFVar11;
      }
      FVar17 = (ForElementType<unsigned_short>)&local_70;
      if (local_70.AllocatorInstance.SecondaryData != (ForElementType<unsigned_short>)0x0) {
        FVar17 = local_70.AllocatorInstance.SecondaryData;
      }
      uVar3 = *(ushort *)((longlong)FVar17 + lVar27);
      if (this->Memory + uVar3 < this->Memory) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("false",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\RelativePtr.h"
                           ,0x46,
                           L"Attempting to assign a negative offset to an unsigned relative pointer!!"
                          );
        if (bVar9) {
          pcVar5 = (code *)swi(3);
          pFVar11 = (FPlaybackCapabilityPtr *)(*pcVar5)();
          return pFVar11;
        }
      }
      else {
        local_ae = uVar3;
        if ((uVar3 == 0xffff) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("OffsetPtr >= 0 && OffsetPtr < std::numeric_limits<OffsetType>::max()"
                               ,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\RelativePtr.h"
                               ,0x3a,
                               L"Attempting to create a relative pointer outside the bounds of its capacity."
                              ), bVar9)) {
          pcVar5 = (code *)swi(3);
          pFVar11 = (FPlaybackCapabilityPtr *)(*pcVar5)();
          return pFVar11;
        }
      }
      *(ushort *)(puVar31 + 8) = local_ae;
      lVar27 = lVar27 + -2;
      puVar31 = puVar31 + -0x10;
      uVar26 = uVar26 - 1;
    } while (-1 < (int)uVar26);
  }
  if ((bVar7) && (puVar22 != (uchar *)0x0)) {
    FMemory::Free(puVar22);
  }
  local_a0 = (uint)(byte)(uVar18 >> 0x38);
  local_80.InterfaceCast =
       TPlaybackCapabilityInterfaceCast<UE::MovieScene::Tests::FTestSimpleCapabilityDerived>::
       InterfaceCast;
  local_80.Destructor =
       TPlaybackCapabilityDestructor<UE::MovieScene::Tests::FTestSimpleCapabilityDerived>::Destroy;
  TArray<UE::MovieScene::FPlaybackCapabilityHelpers,TSizedDefaultAllocator<32>_>::Insert
            (&this->Helpers,&local_80,local_a0);
  if (*(ushort *)(puVar30 + 8) != 0xffff) {
    puVar25 = this->Memory + *(ushort *)(puVar30 + 8);
  }
  __return_storage_ptr__->Ptr = puVar25 + puVar30[0xd];
  __return_storage_ptr__->StorageMode = puVar30[0xe];
  if (local_70.AllocatorInstance.SecondaryData != (ForElementType<unsigned_short>)0x0) {
    FMemory::Free((void *)local_70.AllocatorInstance.SecondaryData);
  }
  return __return_storage_ptr__;
}

// AddCapability<UE::MovieScene::Tests::FTestSimpleCapabilityDerivedWithInterface,UE::MovieScene::Tests::FTestSimpleCapability> @ 14627a710

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

FPlaybackCapabilityPtr * __thiscall
UE::MovieScene::FPlaybackCapabilitiesImpl::
AddCapability<UE::MovieScene::Tests::FTestSimpleCapabilityDerivedWithInterface,UE::MovieScene::Tests::FTestSimpleCapability>
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
  byte *pbVar12;
  ForElementType<unsigned_short> FVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ushort uVar16;
  uint uVar17;
  uint uVar18;
  uchar *puVar19;
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
  uVar15 = (ulonglong)bVar8;
  uVar24 = param_1 - 1 & this->AllCapabilities;
  puVar26 = this->Memory;
  uVar14 = (ulonglong)uVar24 - ((ulonglong)(uVar24 >> 1) & 0x5555555555555555);
  local_b8 = 8;
  uVar14 = (uVar14 >> 2 & 0x3333333333333333) + (uVar14 & 0x3333333333333333);
  local_90 = ((uVar14 >> 4) + uVar14 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
  if (bVar8 != 0) {
    pbVar12 = puVar26 + 0xc;
    uVar14 = 8;
    do {
      bVar2 = *pbVar12;
      pbVar12 = pbVar12 + 0x10;
      local_b8 = (ulonglong)bVar2;
      if (bVar2 < uVar14) {
        local_b8 = uVar14;
      }
      uVar15 = uVar15 - 1;
      uVar14 = local_b8;
    } while (uVar15 != 0);
  }
  uVar14 = local_b8;
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
  uVar17 = uVar20;
  if (local_b0 != (uchar *)0x0) {
    puVar27 = (ushort *)(puVar26 + 10);
    uVar15 = local_90 & 0xffffffff;
    puVar26 = puVar21;
    puVar25 = puVar21;
    do {
      uVar17 = (uint)puVar26;
      uVar23 = lVar22 + -1 + (ulonglong)(byte)puVar27[1] & ~((ulonglong)(byte)puVar27[1] - 1);
      uVar24 = uVar9;
      if ((int)uVar17 < local_70.ArrayNum) {
        uVar24 = ~uVar17 >> 0x1f;
      }
      if (uVar24 == 0) {
        local_d8 = (longlong)(int)uVar17;
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
      FVar13 = (ForElementType<unsigned_short>)&local_70;
      if (local_70.AllocatorInstance.SecondaryData != (ForElementType<unsigned_short>)0x0) {
        FVar13 = local_70.AllocatorInstance.SecondaryData;
      }
      uVar17 = uVar17 + 1;
      puVar26 = (uchar *)(ulonglong)uVar17;
      *(short *)((longlong)FVar13 + (longlong)puVar25 * 2) = (short)uVar23;
      puVar25 = puVar25 + 1;
      uVar16 = *puVar27;
      puVar27 = puVar27 + 8;
      lVar22 = uVar23 + uVar16;
    } while ((longlong)puVar25 < (longlong)uVar15);
    this = local_a0;
    uVar24 = (uint)local_a8;
  }
  uVar15 = lVar22 + 7U & 0xfffffffffffffff8;
  uVar18 = uVar9;
  if ((int)uVar17 < local_70.ArrayNum) {
    uVar18 = ~uVar17 >> 0x1f;
  }
  if (uVar18 == 0) {
    local_d8 = (longlong)(int)uVar17;
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
  FVar13 = (ForElementType<unsigned_short>)&local_70;
  if (local_70.AllocatorInstance.SecondaryData != (ForElementType<unsigned_short>)0x0) {
    FVar13 = local_70.AllocatorInstance.SecondaryData;
  }
  uVar18 = uVar17 + 1;
  *(short *)((longlong)FVar13 + (longlong)(int)uVar17 * 2) = (short)uVar15;
  uVar15 = uVar15 + 0x28;
  if ((int)uVar18 < (int)uVar24) {
    iVar6 = (uint)local_a8;
    lVar28 = (longlong)(int)uVar18;
    puVar27 = (ushort *)(local_c0 + lVar28 * 0x10 + -6);
    lVar22 = lVar28 * 2;
    do {
      uVar15 = (uVar15 - 1) + (ulonglong)(byte)puVar27[1] & ~((ulonglong)(byte)puVar27[1] - 1);
      uVar24 = 0;
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
      FVar13 = (ForElementType<unsigned_short>)&local_70;
      if (local_70.AllocatorInstance.SecondaryData != (ForElementType<unsigned_short>)0x0) {
        FVar13 = local_70.AllocatorInstance.SecondaryData;
      }
      uVar18 = uVar18 + 1;
      lVar28 = lVar28 + 1;
      *(short *)((longlong)FVar13 + lVar22) = (short)uVar15;
      lVar22 = lVar22 + 2;
      uVar16 = *puVar27;
      puVar27 = puVar27 + 8;
      uVar15 = uVar15 + uVar16;
      uVar14 = local_b8;
      this = local_a0;
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
  local_a8 = puVar26;
  if ((this->Alignment < uVar14) || (this->Capacity < uVar15)) {
    uVar23 = (ulonglong)this->Capacity * 2;
    local_c8 = '\x01';
    if (uVar23 < uVar15) {
      uVar23 = uVar15 & 0xffff;
    }
    this->Capacity = (ushort)uVar23;
    puVar25 = FMemory::Malloc(uVar23 & 0xffff,(uint)uVar14);
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
      uVar17 = uVar9;
      if ((int)uVar24 < local_70.ArrayNum) {
        uVar17 = ~uVar24 >> 0x1f;
      }
      if (uVar17 == 0) {
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
      FVar13 = (ForElementType<unsigned_short>)&local_70;
      if (local_70.AllocatorInstance.SecondaryData != (ForElementType<unsigned_short>)0x0) {
        FVar13 = local_70.AllocatorInstance.SecondaryData;
      }
      puVar11 = puVar21;
      if (puVar27[-1] != 0xffff) {
        puVar11 = puVar26 + puVar27[-1];
      }
      memmove(this->Memory + *(ushort *)((longlong)FVar13 + lVar22 * 2),puVar11,(ulonglong)*puVar27)
      ;
      uVar24 = uVar24 - 1;
      lVar22 = lVar22 + -1;
      puVar27 = puVar27 + -8;
    } while ((longlong)puVar25 < lVar22);
  }
  uVar17 = uVar9;
  if ((int)uVar24 < local_70.ArrayNum) {
    uVar17 = ~uVar24 >> 0x1f;
  }
  if (uVar17 == 0) {
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
  FVar13 = (ForElementType<unsigned_short>)&local_70;
  if (local_70.AllocatorInstance.SecondaryData != (ForElementType<unsigned_short>)0x0) {
    FVar13 = local_70.AllocatorInstance.SecondaryData;
  }
  uVar17 = uVar24 - 1;
  uVar14 = (ulonglong)*(ushort *)((longlong)FVar13 + (longlong)(int)uVar24 * 2);
  puVar19 = this->Memory;
  puVar11 = puVar19 + uVar14 + 8;
  puVar11[0] = '\0';
  puVar11[1] = '\0';
  puVar11[2] = '\0';
  puVar11[3] = '\0';
  puVar11[4] = '\0';
  puVar11[5] = '\0';
  puVar11[6] = '\0';
  puVar11[7] = '\0';
  puVar11 = puVar19 + uVar14 + 0x20;
  puVar11[0] = '\0';
  puVar11[1] = '\0';
  puVar11[2] = '\0';
  puVar11[3] = '\0';
  puVar11[4] = '\0';
  puVar11[5] = '\0';
  puVar11[6] = '\0';
  puVar11[7] = '\0';
  puVar11 = puVar19 + uVar14 + 0x10;
  puVar11[0] = '\0';
  puVar11[1] = '\0';
  puVar11[2] = '\0';
  puVar11[3] = '\0';
  puVar11[4] = '\0';
  puVar11[5] = '\0';
  puVar11[6] = '\0';
  puVar11[7] = '\0';
  puVar11 = puVar19 + uVar14 + 0x18;
  puVar11[0] = '\0';
  puVar11[1] = '\0';
  puVar11[2] = '\0';
  puVar11[3] = '\0';
  puVar11[4] = '\0';
  puVar11[5] = '\0';
  puVar11[6] = '\0';
  puVar11[7] = '\0';
  *(undefined ***)(puVar19 + uVar14) =
       &___7FTestSimpleCapabilityDerivedWithInterface_Tests_MovieScene_UE__6B_;
  if (-1 < (int)uVar17) {
    lVar28 = (longlong)(int)uVar17;
    puVar27 = (ushort *)(local_c0 + lVar28 * 0x10 + 10);
    lVar22 = lVar28 * 2;
    do {
      uVar24 = uVar9;
      if ((int)uVar17 < local_70.ArrayNum) {
        uVar24 = ~uVar17 >> 0x1f;
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
      FVar13 = (ForElementType<unsigned_short>)&local_70;
      if (local_70.AllocatorInstance.SecondaryData != (ForElementType<unsigned_short>)0x0) {
        FVar13 = local_70.AllocatorInstance.SecondaryData;
      }
      puVar25 = puVar21;
      if (puVar27[-1] != 0xffff) {
        puVar25 = puVar26 + puVar27[-1];
      }
      memmove(this->Memory + *(ushort *)(lVar22 + (longlong)FVar13),puVar25,(ulonglong)*puVar27);
      lVar28 = lVar28 + -1;
      lVar22 = lVar22 + -2;
      puVar27 = puVar27 + -8;
      uVar17 = uVar17 - 1;
      puVar25 = local_b0;
    } while (-1 < (int)uVar17);
  }
  local_a0 = (FPlaybackCapabilitiesImpl *)this->Memory;
  lVar22 = (ulonglong)this->Num - 1;
  uVar24 = this->Num - 1;
  if ((longlong)puVar25 < lVar22) {
    puVar27 = (ushort *)((longlong)local_a0 + lVar22 * 0x10 + 8);
    local_b8 = (longlong)local_c0 - (longlong)local_a0;
    uVar16 = local_98;
    do {
      puVar1 = (undefined8 *)((local_b8 - 0x18) + (longlong)puVar27);
      uVar5 = puVar1[1];
      *(undefined8 *)(puVar27 + -4) = *puVar1;
      *(undefined8 *)puVar27 = uVar5;
      uVar17 = uVar20;
      if ((int)uVar24 < local_70.ArrayNum) {
        uVar17 = ~uVar24 >> 0x1f;
      }
      if ((uVar17 == 0) &&
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
      FVar13 = (ForElementType<unsigned_short>)&local_70;
      if (local_70.AllocatorInstance.SecondaryData != (ForElementType<unsigned_short>)0x0) {
        FVar13 = local_70.AllocatorInstance.SecondaryData;
      }
      uVar3 = *(ushort *)((longlong)FVar13 + lVar22 * 2);
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
      uVar24 = uVar24 - 1;
      *puVar27 = uVar16;
      lVar22 = lVar22 + -1;
      puVar27 = puVar27 + -8;
    } while ((longlong)local_b0 < lVar22);
  }
  lVar22 = (longlong)(int)uVar24;
  puVar26 = (uchar *)((longlong)local_a0 + lVar22 * 0x10);
  uVar17 = uVar20;
  if ((int)uVar24 < local_70.ArrayNum) {
    uVar17 = ~uVar24 >> 0x1f;
  }
  local_b0 = puVar26;
  if ((uVar17 == 0) &&
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
  FVar13 = (ForElementType<unsigned_short>)&local_70;
  if (local_70.AllocatorInstance.SecondaryData != (ForElementType<unsigned_short>)0x0) {
    FVar13 = local_70.AllocatorInstance.SecondaryData;
  }
  puVar19 = this->Memory + *(ushort *)((longlong)FVar13 + lVar22 * 2);
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
            ((TRelativePtr<void,unsigned_short> *)(puVar26 + 8),this->Memory,puVar19);
  puVar26[10] = '(';
  puVar26[0xb] = '\0';
  puVar26[0xc] = '\b';
  puVar26[0xe] = '\0';
  puVar26[0xd] = -(puVar19 != (uchar *)0x0) & 8;
  puVar11 = ::operator_new(0x10);
  puVar25 = puVar21;
  if (puVar11 != (uchar *)0x0) {
    *(uchar **)(puVar11 + 8) = puVar19;
    *(undefined ***)puVar11 =
         &
         ___7__TPlaybackCapabilityDebuggingTypedPtr_UFTestSimpleCapabilityDerivedWithInterface_Tests_MovieScene_UE___MovieScene_UE__6B_
    ;
    puVar25 = puVar11;
  }
  uVar24 = uVar24 - 1;
  *(uchar **)puVar26 = puVar25;
  if (-1 < (int)uVar24) {
    lVar22 = (longlong)(int)uVar24;
    puVar25 = (uchar *)((longlong)local_a0 + lVar22 * 0x10);
    local_c0 = local_c0 + -(longlong)local_a0;
    uVar14 = lVar22 * 2;
    uVar16 = local_96;
    do {
      uVar5 = *(undefined8 *)(puVar25 + (longlong)local_c0 + 8);
      *(undefined8 *)puVar25 = *(undefined8 *)(puVar25 + (longlong)local_c0);
      *(undefined8 *)(puVar25 + 8) = uVar5;
      uVar17 = uVar20;
      if ((int)uVar24 < local_70.ArrayNum) {
        uVar17 = ~uVar24 >> 0x1f;
      }
      local_b8 = uVar14;
      if ((uVar17 == 0) &&
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
      FVar13 = (ForElementType<unsigned_short>)&local_70;
      if (local_70.AllocatorInstance.SecondaryData != (ForElementType<unsigned_short>)0x0) {
        FVar13 = local_70.AllocatorInstance.SecondaryData;
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
      lVar22 = lVar22 + -1;
      uVar14 = local_b8 - 2;
      *(ushort *)(puVar25 + 8) = uVar16;
      puVar25 = puVar25 + -0x10;
      uVar24 = uVar24 - 1;
      puVar26 = local_b0;
      local_b8 = uVar14;
    } while (-1 < (int)uVar24);
  }
  if ((local_c8 != '\0') && (local_a8 != (uchar *)0x0)) {
    FMemory::Free(local_a8);
  }
  local_80.InterfaceCast =
       TPlaybackCapabilityInterfaceCast<UE::MovieScene::Tests::FTestSimpleCapabilityDerivedWithInterface>
       ::InterfaceCast;
  local_80.Destructor =
       TPlaybackCapabilityDestructor<UE::MovieScene::Tests::FTestSimpleCapabilityDerivedWithInterface>
       ::Destroy;
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

// AddCapability<TSharedPtr<UE::MovieScene::Tests::FTestInvalidatableCapability,1>,UE::MovieScene::Tests::FTestInvalidatableCapability,TSharedRef<UE::MovieScene::Tests::FTestInvalidatableCapability,1>_> @ 14627b090

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

FPlaybackCapabilityPtr * __thiscall
UE::MovieScene::FPlaybackCapabilitiesImpl::
AddCapability<TSharedPtr<UE::MovieScene::Tests::FTestInvalidatableCapability,1>,UE::MovieScene::Tests::FTestInvalidatableCapability,TSharedRef<UE::MovieScene::Tests::FTestInvalidatableCapability,1>_>
          (FPlaybackCapabilitiesImpl *this,FPlaybackCapabilityPtr *__return_storage_ptr__,
          uint param_1,TSharedRef<UE::MovieScene::Tests::FTestInvalidatableCapability,1> *param_2)

{
  undefined8 *puVar1;
  byte bVar2;
  ushort uVar3;
  TReferenceControllerBase<1> *pTVar4;
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
  TSharedRef<UE::MovieScene::Tests::FTestInvalidatableCapability,1> *pTVar26;
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
  TSharedRef<UE::MovieScene::Tests::FTestInvalidatableCapability,1> *local_b0;
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
  puVar27 = local_c8;
  FVar14 = (ForElementType<unsigned_short>)&local_78;
  if (local_78.AllocatorInstance.SecondaryData != (ForElementType<unsigned_short>)0x0) {
    FVar14 = local_78.AllocatorInstance.SecondaryData;
  }
  uVar17 = *(ushort *)((longlong)FVar14 + (longlong)(int)uVar24 * 2);
  puVar25 = this->Memory;
  *(FTestInvalidatableCapability **)(puVar25 + uVar17) = local_b0->Object;
  pTVar4 = (local_b0->SharedReferenceCount).ReferenceController;
  *(TReferenceControllerBase<1> **)(puVar25 + uVar17 + 8) = pTVar4;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
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
    local_b0 = (TSharedRef<UE::MovieScene::Tests::FTestInvalidatableCapability,1> *)
               ((longlong)local_d0 - (longlong)local_b8);
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
  pTVar26 = (TSharedRef<UE::MovieScene::Tests::FTestInvalidatableCapability,1> *)
            ((longlong)local_b8 + lVar22 * 0x10);
  uVar18 = uVar20;
  if ((int)uVar24 < local_78.ArrayNum) {
    uVar18 = ~uVar24 >> 0x1f;
  }
  local_b0 = pTVar26;
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
  *(uchar *)((longlong)pTVar26 + 0xf) = '\0';
  *(uchar *)((longlong)pTVar26 + 0) = '\0';
  *(uchar *)((longlong)pTVar26 + 1) = '\0';
  *(uchar *)((longlong)pTVar26 + 2) = '\0';
  *(uchar *)((longlong)pTVar26 + 3) = '\0';
  *(uchar *)((longlong)pTVar26 + 4) = '\0';
  *(uchar *)((longlong)pTVar26 + 5) = '\0';
  *(uchar *)((longlong)pTVar26 + 6) = '\0';
  *(uchar *)((longlong)pTVar26 + 7) = '\0';
  ((TRelativePtr<void,unsigned_short> *)((longlong)pTVar26 + 8))->Offset = 0xffff;
  *(uchar *)((longlong)pTVar26 + 10) = '\0';
  *(uchar *)((longlong)pTVar26 + 0xb) = '\0';
  *(uchar *)((longlong)pTVar26 + 0xc) = '\0';
  *(uchar *)((longlong)pTVar26 + 0xd) = '\0';
  *(uchar *)((longlong)pTVar26 + 0xe) = '\0';
  TRelativePtr<void,unsigned_short>::Reset
            ((TRelativePtr<void,unsigned_short> *)((longlong)pTVar26 + 8),this->Memory,
             puVar27 + uVar17);
  *(uchar *)((longlong)pTVar26 + 10) = '\x10';
  *(uchar *)((longlong)pTVar26 + 0xb) = '\0';
  *(uchar *)((longlong)pTVar26 + 0xc) = '\b';
  *(uchar *)((longlong)pTVar26 + 0xd) = '\0';
  *(uchar *)((longlong)pTVar26 + 0xe) = '\x02';
  puVar12 = ::operator_new(0x10);
  puVar25 = puVar21;
  if (puVar12 != (uchar *)0x0) {
    *(uchar **)(puVar12 + 8) = puVar27 + uVar17;
    *(undefined ***)puVar12 =
         &
         ___7__TPlaybackCapabilityDebuggingTypedPtr_V__TSharedPtr_UFTestInvalidatableCapability_Tests_MovieScene_UE___00___MovieScene_UE__6B_
    ;
    puVar25 = puVar12;
  }
  uVar24 = uVar24 - 1;
  *(uchar **)pTVar26 = puVar25;
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
      pTVar26 = local_b0;
      local_c0 = uVar15;
    } while (-1 < (int)uVar24);
  }
  if ((local_d8 != '\0') && (local_c8 != (uchar *)0x0)) {
    FMemory::Free(local_c8);
  }
  local_88.InterfaceCast =
       TPlaybackCapabilityInterfaceCast<TSharedPtr<UE::MovieScene::Tests::FTestInvalidatableCapability,1>_>
       ::InterfaceCast;
  local_88.Destructor =
       TPlaybackCapabilityDestructor<TSharedPtr<UE::MovieScene::Tests::FTestInvalidatableCapability,1>_>
       ::Destroy;
  TArray<UE::MovieScene::FPlaybackCapabilityHelpers,TSizedDefaultAllocator<32>_>::Insert
            (&this->Helpers,&local_88,(int)local_98);
  pFVar11 = local_90;
  if (*(ushort *)((longlong)pTVar26 + 8) != 0xffff) {
    puVar21 = this->Memory + *(ushort *)((longlong)pTVar26 + 8);
  }
  local_90->Ptr = puVar21 + *(byte *)((longlong)pTVar26 + 0xd);
  local_90->StorageMode = *(EPlaybackCapabilityStorageMode *)((longlong)pTVar26 + 0xe);
  if (local_78.AllocatorInstance.SecondaryData != (ForElementType<unsigned_short>)0x0) {
    FMemory::Free((void *)local_78.AllocatorInstance.SecondaryData);
  }
  return pFVar11;
}

// AddCapability<TSharedPtr<UE::MovieScene::Tests::FTestSimpleCapability,1>,UE::MovieScene::Tests::FTestSimpleCapability,TSharedRef<UE::MovieScene::Tests::FTestSimpleCapability,1>_> @ 14627ba10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

FPlaybackCapabilityPtr * __thiscall
UE::MovieScene::FPlaybackCapabilitiesImpl::
AddCapability<TSharedPtr<UE::MovieScene::Tests::FTestSimpleCapability,1>,UE::MovieScene::Tests::FTestSimpleCapability,TSharedRef<UE::MovieScene::Tests::FTestSimpleCapability,1>_>
          (FPlaybackCapabilitiesImpl *this,FPlaybackCapabilityPtr *__return_storage_ptr__,
          uint param_1,TSharedRef<UE::MovieScene::Tests::FTestSimpleCapability,1> *param_2)

{
  undefined8 *puVar1;
  byte bVar2;
  ushort uVar3;
  TReferenceControllerBase<1> *pTVar4;
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
  TSharedRef<UE::MovieScene::Tests::FTestSimpleCapability,1> *pTVar26;
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
  TSharedRef<UE::MovieScene::Tests::FTestSimpleCapability,1> *local_b0;
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
  puVar27 = local_c8;
  FVar14 = (ForElementType<unsigned_short>)&local_78;
  if (local_78.AllocatorInstance.SecondaryData != (ForElementType<unsigned_short>)0x0) {
    FVar14 = local_78.AllocatorInstance.SecondaryData;
  }
  uVar17 = *(ushort *)((longlong)FVar14 + (longlong)(int)uVar24 * 2);
  puVar25 = this->Memory;
  *(FTestSimpleCapability **)(puVar25 + uVar17) = local_b0->Object;
  pTVar4 = (local_b0->SharedReferenceCount).ReferenceController;
  *(TReferenceControllerBase<1> **)(puVar25 + uVar17 + 8) = pTVar4;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
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
    local_b0 = (TSharedRef<UE::MovieScene::Tests::FTestSimpleCapability,1> *)
               ((longlong)local_d0 - (longlong)local_b8);
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
  pTVar26 = (TSharedRef<UE::MovieScene::Tests::FTestSimpleCapability,1> *)
            ((longlong)local_b8 + lVar22 * 0x10);
  uVar18 = uVar20;
  if ((int)uVar24 < local_78.ArrayNum) {
    uVar18 = ~uVar24 >> 0x1f;
  }
  local_b0 = pTVar26;
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
  *(uchar *)((longlong)pTVar26 + 0xf) = '\0';
  *(uchar *)((longlong)pTVar26 + 0) = '\0';
  *(uchar *)((longlong)pTVar26 + 1) = '\0';
  *(uchar *)((longlong)pTVar26 + 2) = '\0';
  *(uchar *)((longlong)pTVar26 + 3) = '\0';
  *(uchar *)((longlong)pTVar26 + 4) = '\0';
  *(uchar *)((longlong)pTVar26 + 5) = '\0';
  *(uchar *)((longlong)pTVar26 + 6) = '\0';
  *(uchar *)((longlong)pTVar26 + 7) = '\0';
  ((TRelativePtr<void,unsigned_short> *)((longlong)pTVar26 + 8))->Offset = 0xffff;
  *(uchar *)((longlong)pTVar26 + 10) = '\0';
  *(uchar *)((longlong)pTVar26 + 0xb) = '\0';
  *(uchar *)((longlong)pTVar26 + 0xc) = '\0';
  *(uchar *)((longlong)pTVar26 + 0xd) = '\0';
  *(uchar *)((longlong)pTVar26 + 0xe) = '\0';
  TRelativePtr<void,unsigned_short>::Reset
            ((TRelativePtr<void,unsigned_short> *)((longlong)pTVar26 + 8),this->Memory,
             puVar27 + uVar17);
  *(uchar *)((longlong)pTVar26 + 10) = '\x10';
  *(uchar *)((longlong)pTVar26 + 0xb) = '\0';
  *(uchar *)((longlong)pTVar26 + 0xc) = '\b';
  *(uchar *)((longlong)pTVar26 + 0xd) = '\0';
  *(uchar *)((longlong)pTVar26 + 0xe) = '\x02';
  puVar12 = ::operator_new(0x10);
  puVar25 = puVar21;
  if (puVar12 != (uchar *)0x0) {
    *(uchar **)(puVar12 + 8) = puVar27 + uVar17;
    *(undefined ***)puVar12 =
         &
         ___7__TPlaybackCapabilityDebuggingTypedPtr_V__TSharedPtr_UFTestSimpleCapability_Tests_MovieScene_UE___00___MovieScene_UE__6B_
    ;
    puVar25 = puVar12;
  }
  uVar24 = uVar24 - 1;
  *(uchar **)pTVar26 = puVar25;
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
      pTVar26 = local_b0;
      local_c0 = uVar15;
    } while (-1 < (int)uVar24);
  }
  if ((local_d8 != '\0') && (local_c8 != (uchar *)0x0)) {
    FMemory::Free(local_c8);
  }
  local_88.InterfaceCast =
       TPlaybackCapabilityInterfaceCast<TSharedPtr<UE::MovieScene::Tests::FTestSimpleCapability,1>_>
       ::InterfaceCast;
  local_88.Destructor =
       TPlaybackCapabilityDestructor<TSharedPtr<UE::MovieScene::Tests::FTestSimpleCapability,1>_>::
       Destroy;
  TArray<UE::MovieScene::FPlaybackCapabilityHelpers,TSizedDefaultAllocator<32>_>::Insert
            (&this->Helpers,&local_88,(int)local_98);
  pFVar11 = local_90;
  if (*(ushort *)((longlong)pTVar26 + 8) != 0xffff) {
    puVar21 = this->Memory + *(ushort *)((longlong)pTVar26 + 8);
  }
  local_90->Ptr = puVar21 + *(byte *)((longlong)pTVar26 + 0xd);
  local_90->StorageMode = *(EPlaybackCapabilityStorageMode *)((longlong)pTVar26 + 0xe);
  if (local_78.AllocatorInstance.SecondaryData != (ForElementType<unsigned_short>)0x0) {
    FMemory::Free((void *)local_78.AllocatorInstance.SecondaryData);
  }
  return pFVar11;
}

// OverwriteCapability<UE::MovieScene::Tests::FTestSimpleCapability_*,UE::MovieScene::Tests::FTestSimpleCapability,UE::MovieScene::Tests::FTestSimpleCapability_*> @ 146286810

bool __thiscall
UE::MovieScene::FPlaybackCapabilitiesImpl::
OverwriteCapability<UE::MovieScene::Tests::FTestSimpleCapability_*,UE::MovieScene::Tests::FTestSimpleCapability,UE::MovieScene::Tests::FTestSimpleCapability_*>
          (FPlaybackCapabilitiesImpl *this,uint param_1,FTestSimpleCapability **param_2)

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
            OverwriteCapability<UE::MovieScene::Tests::FTestSimpleCapability_*,UE::MovieScene::Tests::FTestSimpleCapability,UE::MovieScene::Tests::FTestSimpleCapability_*>'
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
            OverwriteCapability<UE::MovieScene::Tests::FTestSimpleCapability_*,UE::MovieScene::Tests::FTestSimpleCapability,UE::MovieScene::Tests::FTestSimpleCapability_*>'
            ::__l6::<lambda_2>::operator()(local_res8);
    if (!bVar3) {
      return false;
    }
  }
  if ((*(short *)((longlong)plVar10 + 10) != 8) || (*(char *)((longlong)plVar10 + 0xc) != '\b')) {
    local_res20[0] = 0;
    bVar3 = `UE::MovieScene::FPlaybackCapabilitiesImpl::
            OverwriteCapability<UE::MovieScene::Tests::FTestSimpleCapability_*,UE::MovieScene::Tests::FTestSimpleCapability,UE::MovieScene::Tests::FTestSimpleCapability_*>'
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
  *(FTestSimpleCapability **)puVar9 = *param_2;
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
       TPlaybackCapabilityInterfaceCast<UE::MovieScene::Tests::FTestSimpleCapability_*>::
       InterfaceCast;
  *(code **)(pFVar1 + lVar8 * 0x10 + 8) =
       TPlaybackCapabilityDestructor<UE::MovieScene::Tests::FTestSimpleCapability_*>::Destroy;
  puVar7 = (undefined8 *)*plVar10;
  if (puVar7 != (undefined8 *)0x0) {
    (**(code **)*puVar7)(puVar7,1);
  }
  puVar7 = ::operator_new(0x10);
  if (puVar7 != (undefined8 *)0x0) {
    puVar7[1] = puVar9;
    *puVar7 = &
              ___7__TPlaybackCapabilityDebuggingTypedPtr_PEAUFTestSimpleCapability_Tests_MovieScene_UE___MovieScene_UE__6B_
    ;
  }
  *plVar10 = (longlong)puVar7;
  return true;
}

// OverwriteCapability<UE::MovieScene::Tests::FTestSimpleCapability,UE::MovieScene::Tests::FTestSimpleCapability,int,wchar_t_const_(&)[5]> @ 146286a20

bool __thiscall
UE::MovieScene::FPlaybackCapabilitiesImpl::
OverwriteCapability<UE::MovieScene::Tests::FTestSimpleCapability,UE::MovieScene::Tests::FTestSimpleCapability,int,wchar_t_const_(&)[5]>
          (FPlaybackCapabilitiesImpl *this,uint param_1,int *param_2,wchar_t (*param_3) [5])

{
  ForAnyElementType *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  ForAnyElementType _Src;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  undefined8 *puVar7;
  uint uVar8;
  longlong *plVar9;
  int *piVar10;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined1 local_58 [8];
  longlong local_50;
  FString local_48;
  
  if ((this->AllCapabilities & param_1) == 0) {
    local_res10[0] = 0;
    bVar4 = `UE::MovieScene::FPlaybackCapabilitiesImpl::
            OverwriteCapability<UE::MovieScene::Tests::FTestSimpleCapability,UE::MovieScene::Tests::FTestSimpleCapability,int,wchar_t_const_(&)[5]>'
            ::__l3::<lambda_1>::operator()(local_res10);
    if (!bVar4) {
      return false;
    }
  }
  uVar6 = GetCapabilityIndex(this,param_1);
  if ((this->Num <= (byte)uVar6) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index < Num",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\MovieScenePlaybackCapabilities.h"
                         ,0x221,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  plVar9 = (longlong *)(this->Memory + (ulonglong)(uVar6 & 0xff) * 0x10);
  if (*(char *)((longlong)plVar9 + 0xe) != '\0') {
    local_res8[0] = 0;
    bVar4 = `UE::MovieScene::FPlaybackCapabilitiesImpl::
            OverwriteCapability<UE::MovieScene::Tests::FTestSimpleCapability,UE::MovieScene::Tests::FTestSimpleCapability,int,wchar_t_const_(&)[5]>'
            ::__l6::<lambda_2>::operator()(local_res8);
    if (!bVar4) {
      return false;
    }
  }
  if ((*(short *)((longlong)plVar9 + 10) != 0x18) || (*(char *)((longlong)plVar9 + 0xc) != '\b')) {
    local_58[0] = 0;
    bVar4 = `UE::MovieScene::FPlaybackCapabilitiesImpl::
            OverwriteCapability<UE::MovieScene::Tests::FTestSimpleCapability,UE::MovieScene::Tests::FTestSimpleCapability,int,wchar_t_const_(&)[5]>'
            ::__l9::<lambda_3>::operator()(local_58);
    if (!bVar4) {
      return false;
    }
  }
  if (*(ushort *)(plVar9 + 1) == 0xffff) {
    piVar10 = (int *)0x0;
  }
  else {
    piVar10 = (int *)(this->Memory + *(ushort *)(plVar9 + 1));
  }
  uVar8 = 0;
  if ((int)uVar6 < (this->Helpers).ArrayNum) {
    uVar8 = ~uVar6 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  local_50 = (longlong)(int)uVar6 * 0x10;
  (**(code **)((this->Helpers).AllocatorInstance.Data + local_50 + 8))(piVar10);
  ::FString::FString(&local_48,*param_3);
  _Src.Data = local_48.Data.AllocatorInstance.Data;
  pFVar1 = (ForAnyElementType *)(piVar10 + 2);
  *piVar10 = *param_2;
  pFVar1->Data = (FScriptContainerElement *)0x0;
  piVar10[4] = local_48.Data.ArrayNum;
  if (local_48.Data.ArrayNum == 0) {
    piVar10[5] = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_48.Data.ArrayNum,0,pFVar1,local_48.Data.ArrayNum,piVar10 + 5);
    memcpy(pFVar1->Data,_Src.Data,(longlong)local_48.Data.ArrayNum * 2);
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  uVar8 = 0;
  if ((int)uVar6 < (this->Helpers).ArrayNum) {
    uVar8 = ~uVar6 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  pFVar2 = (this->Helpers).AllocatorInstance.Data;
  *(code **)(pFVar2 + local_50) =
       TPlaybackCapabilityInterfaceCast<UE::MovieScene::Tests::FTestSimpleCapability>::InterfaceCast
  ;
  *(code **)(pFVar2 + local_50 + 8) =
       TPlaybackCapabilityDestructor<UE::MovieScene::Tests::FTestSimpleCapability>::Destroy;
  puVar7 = (undefined8 *)*plVar9;
  if (puVar7 != (undefined8 *)0x0) {
    (**(code **)*puVar7)(puVar7,1);
  }
  puVar7 = ::operator_new(0x10);
  if (puVar7 != (undefined8 *)0x0) {
    puVar7[1] = piVar10;
    *puVar7 = &
              ___7__TPlaybackCapabilityDebuggingTypedPtr_UFTestSimpleCapability_Tests_MovieScene_UE___MovieScene_UE__6B_
    ;
  }
  *plVar9 = (longlong)puVar7;
  return true;
}

// OverwriteCapability<UE::MovieScene::Tests::FTestSimpleCapabilityDerived,UE::MovieScene::Tests::FTestSimpleCapability,int,wchar_t_const_(&)[8]> @ 146286cd0

bool __thiscall
UE::MovieScene::FPlaybackCapabilitiesImpl::
OverwriteCapability<UE::MovieScene::Tests::FTestSimpleCapabilityDerived,UE::MovieScene::Tests::FTestSimpleCapability,int,wchar_t_const_(&)[8]>
          (FPlaybackCapabilitiesImpl *this,uint param_1,int *param_2,wchar_t (*param_3) [8])

{
  ForAnyElementType *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  ForAnyElementType _Src;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  undefined8 *puVar7;
  uint uVar8;
  longlong *plVar9;
  int *piVar10;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined1 local_58 [8];
  longlong local_50;
  FString local_48;
  
  if ((this->AllCapabilities & param_1) == 0) {
    local_res10[0] = 0;
    bVar4 = `UE::MovieScene::FPlaybackCapabilitiesImpl::
            OverwriteCapability<UE::MovieScene::Tests::FTestSimpleCapabilityDerived,UE::MovieScene::Tests::FTestSimpleCapability,int,wchar_t_const_(&)[8]>'
            ::__l3::<lambda_1>::operator()(local_res10);
    if (!bVar4) {
      return false;
    }
  }
  uVar6 = GetCapabilityIndex(this,param_1);
  if ((this->Num <= (byte)uVar6) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index < Num",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\MovieScenePlaybackCapabilities.h"
                         ,0x221,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  plVar9 = (longlong *)(this->Memory + (ulonglong)(uVar6 & 0xff) * 0x10);
  if (*(char *)((longlong)plVar9 + 0xe) != '\0') {
    local_res8[0] = 0;
    bVar4 = `UE::MovieScene::FPlaybackCapabilitiesImpl::
            OverwriteCapability<UE::MovieScene::Tests::FTestSimpleCapabilityDerived,UE::MovieScene::Tests::FTestSimpleCapability,int,wchar_t_const_(&)[8]>'
            ::__l6::<lambda_2>::operator()(local_res8);
    if (!bVar4) {
      return false;
    }
  }
  if ((*(short *)((longlong)plVar9 + 10) != 0x18) || (*(char *)((longlong)plVar9 + 0xc) != '\b')) {
    local_58[0] = 0;
    bVar4 = `UE::MovieScene::FPlaybackCapabilitiesImpl::
            OverwriteCapability<UE::MovieScene::Tests::FTestSimpleCapabilityDerived,UE::MovieScene::Tests::FTestSimpleCapability,int,wchar_t_const_(&)[8]>'
            ::__l9::<lambda_3>::operator()(local_58);
    if (!bVar4) {
      return false;
    }
  }
  if (*(ushort *)(plVar9 + 1) == 0xffff) {
    piVar10 = (int *)0x0;
  }
  else {
    piVar10 = (int *)(this->Memory + *(ushort *)(plVar9 + 1));
  }
  uVar8 = 0;
  if ((int)uVar6 < (this->Helpers).ArrayNum) {
    uVar8 = ~uVar6 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  local_50 = (longlong)(int)uVar6 * 0x10;
  (**(code **)((this->Helpers).AllocatorInstance.Data + local_50 + 8))(piVar10);
  ::FString::FString(&local_48,*param_3);
  _Src.Data = local_48.Data.AllocatorInstance.Data;
  pFVar1 = (ForAnyElementType *)(piVar10 + 2);
  *piVar10 = *param_2;
  pFVar1->Data = (FScriptContainerElement *)0x0;
  piVar10[4] = local_48.Data.ArrayNum;
  if (local_48.Data.ArrayNum == 0) {
    piVar10[5] = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_48.Data.ArrayNum,0,pFVar1,local_48.Data.ArrayNum,piVar10 + 5);
    memcpy(pFVar1->Data,_Src.Data,(longlong)local_48.Data.ArrayNum * 2);
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  uVar8 = 0;
  if ((int)uVar6 < (this->Helpers).ArrayNum) {
    uVar8 = ~uVar6 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  pFVar2 = (this->Helpers).AllocatorInstance.Data;
  *(code **)(pFVar2 + local_50) =
       TPlaybackCapabilityInterfaceCast<UE::MovieScene::Tests::FTestSimpleCapabilityDerived>::
       InterfaceCast;
  *(code **)(pFVar2 + local_50 + 8) =
       TPlaybackCapabilityDestructor<UE::MovieScene::Tests::FTestSimpleCapabilityDerived>::Destroy;
  puVar7 = (undefined8 *)*plVar9;
  if (puVar7 != (undefined8 *)0x0) {
    (**(code **)*puVar7)(puVar7,1);
  }
  puVar7 = ::operator_new(0x10);
  if (puVar7 != (undefined8 *)0x0) {
    puVar7[1] = piVar10;
    *puVar7 = &
              ___7__TPlaybackCapabilityDebuggingTypedPtr_UFTestSimpleCapabilityDerived_Tests_MovieScene_UE___MovieScene_UE__6B_
    ;
  }
  *plVar9 = (longlong)puVar7;
  return true;
}

// operator() @ 1504e3ee0

bool __thiscall
`UE::MovieScene::FPlaybackCapabilitiesImpl::
OverwriteCapability<UE::MovieScene::FPlayerIndexPlaybackCapability,UE::MovieScene::FPlayerIndexPlaybackCapability,unsigned_short>'
::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_1133317147859090973>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_1133317147859090973>,
                       &`public:___cdecl_`protected:_bool___cdecl_UE::MovieScene::FPlaybackCapabilitiesImpl::OverwriteCapability<UE::MovieScene::FPlayerIndexPlaybackCapability,UE::MovieScene::FPlayerIndexPlaybackCapability,unsigned_short>(unsigned_int,unsigned_short&&___ptr64)___ptr64'::`3'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504e4a00

bool __thiscall
`UE::MovieScene::FPlaybackCapabilitiesImpl::
OverwriteCapability<UE::MovieScene::FPlayerIndexPlaybackCapability,UE::MovieScene::FPlayerIndexPlaybackCapability,unsigned_short>'
::__l6::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_1133317147859090961>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_1133317147859090961>,
                       &`public:___cdecl_`protected:_bool___cdecl_UE::MovieScene::FPlaybackCapabilitiesImpl::OverwriteCapability<UE::MovieScene::FPlayerIndexPlaybackCapability,UE::MovieScene::FPlayerIndexPlaybackCapability,unsigned_short>(unsigned_int,unsigned_short&&___ptr64)___ptr64'::`6'::<lambda_2>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504e4ba0

bool __thiscall
`UE::MovieScene::FPlaybackCapabilitiesImpl::
OverwriteCapability<UE::MovieScene::FPlayerIndexPlaybackCapability,UE::MovieScene::FPlayerIndexPlaybackCapability,unsigned_short>'
::__l9::<lambda_3>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_1133317147859090951>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_1133317147859090951>,
                       &`public:___cdecl_`protected:_bool___cdecl_UE::MovieScene::FPlaybackCapabilitiesImpl::OverwriteCapability<UE::MovieScene::FPlayerIndexPlaybackCapability,UE::MovieScene::FPlayerIndexPlaybackCapability,unsigned_short>(unsigned_int,unsigned_short&&___ptr64)___ptr64'::`9'::<lambda_3>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504e61a0

bool __thiscall
`UE::MovieScene::FPlaybackCapabilitiesImpl::
OverwriteCapability<IMovieScenePlaybackClient_*,IMovieScenePlaybackClient,IMovieScenePlaybackClient_*>'
::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_1133317147859090973>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_1133317147859090973>,
                       &`public:___cdecl_`protected:_bool___cdecl_UE::MovieScene::FPlaybackCapabilitiesImpl::OverwriteCapability<IMovieScenePlaybackClient*___ptr64,IMovieScenePlaybackClient,IMovieScenePlaybackClient*___ptr64>(unsigned_int,IMovieScenePlaybackClient*___ptr64&&___ptr64)___ptr64'::`3'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504e63f0

bool __thiscall
`UE::MovieScene::FPlaybackCapabilitiesImpl::
OverwriteCapability<IMovieScenePlaybackClient_*,IMovieScenePlaybackClient,IMovieScenePlaybackClient_*>'
::__l6::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_1133317147859090961>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_1133317147859090961>,
                       &`public:___cdecl_`protected:_bool___cdecl_UE::MovieScene::FPlaybackCapabilitiesImpl::OverwriteCapability<IMovieScenePlaybackClient*___ptr64,IMovieScenePlaybackClient,IMovieScenePlaybackClient*___ptr64>(unsigned_int,IMovieScenePlaybackClient*___ptr64&&___ptr64)___ptr64'::`6'::<lambda_2>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504e64f0

bool __thiscall
`UE::MovieScene::FPlaybackCapabilitiesImpl::
OverwriteCapability<IMovieScenePlaybackClient_*,IMovieScenePlaybackClient,IMovieScenePlaybackClient_*>'
::__l9::<lambda_3>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_1133317147859090951>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_1133317147859090951>,
                       &`public:___cdecl_`protected:_bool___cdecl_UE::MovieScene::FPlaybackCapabilitiesImpl::OverwriteCapability<IMovieScenePlaybackClient*___ptr64,IMovieScenePlaybackClient,IMovieScenePlaybackClient*___ptr64>(unsigned_int,IMovieScenePlaybackClient*___ptr64&&___ptr64)___ptr64'::`9'::<lambda_3>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504e7070

bool __thiscall
`UE::MovieScene::FPlaybackCapabilitiesImpl::
OverwriteCapability<UE::MovieScene::FEventTriggerControlPlaybackCapability,UE::MovieScene::FEventTriggerControlPlaybackCapability>'
::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_1133317147859090973>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_1133317147859090973>,
                       &`public:___cdecl_`protected:_bool___cdecl_UE::MovieScene::FPlaybackCapabilitiesImpl::OverwriteCapability<UE::MovieScene::FEventTriggerControlPlaybackCapability,UE::MovieScene::FEventTriggerControlPlaybackCapability>(unsigned_int)___ptr64'::`3'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504e7520

bool __thiscall
`UE::MovieScene::FPlaybackCapabilitiesImpl::
OverwriteCapability<UE::MovieScene::FEventTriggerControlPlaybackCapability,UE::MovieScene::FEventTriggerControlPlaybackCapability>'
::__l6::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_1133317147859090961>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_1133317147859090961>,
                       &`public:___cdecl_`protected:_bool___cdecl_UE::MovieScene::FPlaybackCapabilitiesImpl::OverwriteCapability<UE::MovieScene::FEventTriggerControlPlaybackCapability,UE::MovieScene::FEventTriggerControlPlaybackCapability>(unsigned_int)___ptr64'::`6'::<lambda_2>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504e7660

bool __thiscall
`UE::MovieScene::FPlaybackCapabilitiesImpl::
OverwriteCapability<UE::MovieScene::FEventTriggerControlPlaybackCapability,UE::MovieScene::FEventTriggerControlPlaybackCapability>'
::__l9::<lambda_3>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_1133317147859090951>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_1133317147859090951>,
                       &`public:___cdecl_`protected:_bool___cdecl_UE::MovieScene::FPlaybackCapabilitiesImpl::OverwriteCapability<UE::MovieScene::FEventTriggerControlPlaybackCapability,UE::MovieScene::FEventTriggerControlPlaybackCapability>(unsigned_int)___ptr64'::`9'::<lambda_3>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504e7ed0

bool __thiscall
`UE::MovieScene::FPlaybackCapabilitiesImpl::
OverwriteCapability<UE::MovieScene::Tests::FTestSimpleCapability_*,UE::MovieScene::Tests::FTestSimpleCapability,UE::MovieScene::Tests::FTestSimpleCapability_*>'
::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_1133317147859090973>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_1133317147859090973>,
                       &`public:___cdecl_`protected:_bool___cdecl_UE::MovieScene::FPlaybackCapabilitiesImpl::OverwriteCapability<UE::MovieScene::Tests::FTestSimpleCapability*___ptr64,UE::MovieScene::Tests::FTestSimpleCapability,UE::MovieScene::Tests::FTestSimpleCapability*___ptr64>(unsigned_int,UE::MovieScene::Tests::FTestSimpleCapability*___ptr64&&___ptr64)___ptr64'::`3'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504e7f10

bool __thiscall
`UE::MovieScene::FPlaybackCapabilitiesImpl::
OverwriteCapability<UE::MovieScene::Tests::FTestSimpleCapability,UE::MovieScene::Tests::FTestSimpleCapability,int,wchar_t_const_(&)[5]>'
::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_1133317147859090973>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_1133317147859090973>,
                       &`public:___cdecl_`protected:_bool___cdecl_UE::MovieScene::FPlaybackCapabilitiesImpl::OverwriteCapability<UE::MovieScene::Tests::FTestSimpleCapability,UE::MovieScene::Tests::FTestSimpleCapability,int,wchar_t_const_(&___ptr64)[5]>(unsigned_int,int&&___ptr64,wchar_t_const_(&___ptr64)[5])___ptr64'::`3'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504e7f50

bool __thiscall
`UE::MovieScene::FPlaybackCapabilitiesImpl::
OverwriteCapability<UE::MovieScene::Tests::FTestSimpleCapabilityDerived,UE::MovieScene::Tests::FTestSimpleCapability,int,wchar_t_const_(&)[8]>'
::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_1133317147859090973>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_1133317147859090973>,
                       &`public:___cdecl_`protected:_bool___cdecl_UE::MovieScene::FPlaybackCapabilitiesImpl::OverwriteCapability<UE::MovieScene::Tests::FTestSimpleCapabilityDerived,UE::MovieScene::Tests::FTestSimpleCapability,int,wchar_t_const_(&___ptr64)[8]>(unsigned_int,int&&___ptr64,wchar_t_const_(&___ptr64)[8])___ptr64'::`3'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504e8880

bool __thiscall
`UE::MovieScene::FPlaybackCapabilitiesImpl::
OverwriteCapability<UE::MovieScene::Tests::FTestSimpleCapability_*,UE::MovieScene::Tests::FTestSimpleCapability,UE::MovieScene::Tests::FTestSimpleCapability_*>'
::__l6::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_1133317147859090961>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_1133317147859090961>,
                       &`public:___cdecl_`protected:_bool___cdecl_UE::MovieScene::FPlaybackCapabilitiesImpl::OverwriteCapability<UE::MovieScene::Tests::FTestSimpleCapability*___ptr64,UE::MovieScene::Tests::FTestSimpleCapability,UE::MovieScene::Tests::FTestSimpleCapability*___ptr64>(unsigned_int,UE::MovieScene::Tests::FTestSimpleCapability*___ptr64&&___ptr64)___ptr64'::`6'::<lambda_2>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504e88c0

bool __thiscall
`UE::MovieScene::FPlaybackCapabilitiesImpl::
OverwriteCapability<UE::MovieScene::Tests::FTestSimpleCapability,UE::MovieScene::Tests::FTestSimpleCapability,int,wchar_t_const_(&)[5]>'
::__l6::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_1133317147859090961>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_1133317147859090961>,
                       &`public:___cdecl_`protected:_bool___cdecl_UE::MovieScene::FPlaybackCapabilitiesImpl::OverwriteCapability<UE::MovieScene::Tests::FTestSimpleCapability,UE::MovieScene::Tests::FTestSimpleCapability,int,wchar_t_const_(&___ptr64)[5]>(unsigned_int,int&&___ptr64,wchar_t_const_(&___ptr64)[5])___ptr64'::`6'::<lambda_2>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504e8900

bool __thiscall
`UE::MovieScene::FPlaybackCapabilitiesImpl::
OverwriteCapability<UE::MovieScene::Tests::FTestSimpleCapabilityDerived,UE::MovieScene::Tests::FTestSimpleCapability,int,wchar_t_const_(&)[8]>'
::__l6::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_1133317147859090961>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_1133317147859090961>,
                       &`public:___cdecl_`protected:_bool___cdecl_UE::MovieScene::FPlaybackCapabilitiesImpl::OverwriteCapability<UE::MovieScene::Tests::FTestSimpleCapabilityDerived,UE::MovieScene::Tests::FTestSimpleCapability,int,wchar_t_const_(&___ptr64)[8]>(unsigned_int,int&&___ptr64,wchar_t_const_(&___ptr64)[8])___ptr64'::`6'::<lambda_2>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504e8940

bool __thiscall
`UE::MovieScene::FPlaybackCapabilitiesImpl::
OverwriteCapability<UE::MovieScene::Tests::FTestSimpleCapability_*,UE::MovieScene::Tests::FTestSimpleCapability,UE::MovieScene::Tests::FTestSimpleCapability_*>'
::__l9::<lambda_3>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_1133317147859090951>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_1133317147859090951>,
                       &`public:___cdecl_`protected:_bool___cdecl_UE::MovieScene::FPlaybackCapabilitiesImpl::OverwriteCapability<UE::MovieScene::Tests::FTestSimpleCapability*___ptr64,UE::MovieScene::Tests::FTestSimpleCapability,UE::MovieScene::Tests::FTestSimpleCapability*___ptr64>(unsigned_int,UE::MovieScene::Tests::FTestSimpleCapability*___ptr64&&___ptr64)___ptr64'::`9'::<lambda_3>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504e8980

bool __thiscall
`UE::MovieScene::FPlaybackCapabilitiesImpl::
OverwriteCapability<UE::MovieScene::Tests::FTestSimpleCapability,UE::MovieScene::Tests::FTestSimpleCapability,int,wchar_t_const_(&)[5]>'
::__l9::<lambda_3>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_1133317147859090951>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_1133317147859090951>,
                       &`public:___cdecl_`protected:_bool___cdecl_UE::MovieScene::FPlaybackCapabilitiesImpl::OverwriteCapability<UE::MovieScene::Tests::FTestSimpleCapability,UE::MovieScene::Tests::FTestSimpleCapability,int,wchar_t_const_(&___ptr64)[5]>(unsigned_int,int&&___ptr64,wchar_t_const_(&___ptr64)[5])___ptr64'::`9'::<lambda_3>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504e89c0

bool __thiscall
`UE::MovieScene::FPlaybackCapabilitiesImpl::
OverwriteCapability<UE::MovieScene::Tests::FTestSimpleCapabilityDerived,UE::MovieScene::Tests::FTestSimpleCapability,int,wchar_t_const_(&)[8]>'
::__l9::<lambda_3>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_1133317147859090951>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_1133317147859090951>,
                       &`public:___cdecl_`protected:_bool___cdecl_UE::MovieScene::FPlaybackCapabilitiesImpl::OverwriteCapability<UE::MovieScene::Tests::FTestSimpleCapabilityDerived,UE::MovieScene::Tests::FTestSimpleCapability,int,wchar_t_const_(&___ptr64)[8]>(unsigned_int,int&&___ptr64,wchar_t_const_(&___ptr64)[8])___ptr64'::`9'::<lambda_3>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

