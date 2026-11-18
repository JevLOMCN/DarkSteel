// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LevelSequence
// Functions: 3

// StaticStruct @ 146c47980

UScriptStruct * __cdecl FUpgradedLevelSequenceBindingReferences::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FUpgradedLevelSequenceBindingReferences.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_LevelSequence();
    Z_Registration_Info_UScriptStruct_FUpgradedLevelSequenceBindingReferences.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FUpgradedLevelSequenceBindingReferences,
                         (UObject *)pUVar1,L"UpgradedLevelSequenceBindingReferences");
  }
  return Z_Registration_Info_UScriptStruct_FUpgradedLevelSequenceBindingReferences.OuterSingleton;
}

// AddBinding @ 146c50a70

void __thiscall
FUpgradedLevelSequenceBindingReferences::AddBinding
          (FUpgradedLevelSequenceBindingReferences *this,FGuid *param_1,UObject *param_2,
          UObject *param_3)

{
  FUniversalObjectLocator local_18;
  
  FUniversalObjectLocator::FUniversalObjectLocator(&local_18,param_2,param_3,(UObject *)0x0);
  if (local_18.Fragments.ArrayNum != 0) {
    FMovieSceneBindingReferences::AddBinding((FMovieSceneBindingReferences *)this,param_1,&local_18)
    ;
  }
  DestructItems<FUniversalObjectLocatorFragment,int>
            ((FUniversalObjectLocatorFragment *)local_18.Fragments.AllocatorInstance.Data,
             local_18.Fragments.ArrayNum);
  if ((FUniversalObjectLocatorFragment *)local_18.Fragments.AllocatorInstance.Data !=
      (FUniversalObjectLocatorFragment *)0x0) {
    FMemory::Free(local_18.Fragments.AllocatorInstance.Data);
  }
  return;
}

// SerializeFromMismatchedTag @ 146c5a2d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
FUpgradedLevelSequenceBindingReferences::SerializeFromMismatchedTag
          (FUpgradedLevelSequenceBindingReferences *this,FPropertyTag *param_1,
          FStructuredArchiveSlot param_2)

{
  FGuid *pFVar1;
  ulonglong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  FUpgradedLevelSequenceBindingReferences *pFVar5;
  longlong *plVar6;
  bool bVar7;
  bool bVar8;
  undefined1 uVar9;
  UPackage *pUVar10;
  byte bVar11;
  longlong lVar12;
  ForAnyElementType FVar13;
  int iVar14;
  undefined4 *puVar15;
  uint uVar16;
  longlong lVar17;
  uint uVar18;
  uint *puVar19;
  uint uVar20;
  undefined1 auStack_3b8 [32];
  undefined1 local_398;
  undefined1 local_397;
  undefined1 local_396;
  undefined1 local_395;
  uint local_394;
  FPropertyTypeName local_390 [2];
  longlong *local_388;
  uint uStack_380;
  uint uStack_37c;
  TBitArray<FDefaultBitArrayAllocator> *local_378;
  undefined4 uStack_370;
  uint uStack_36c;
  uint local_368;
  uint uStack_364;
  int iStack_360;
  undefined4 uStack_35c;
  FUpgradedLevelSequenceBindingReferences *local_358;
  FUniversalObjectLocator local_350;
  FUniversalObjectLocator local_340;
  FUniversalObjectLocator local_330;
  FUniversalObjectLocator local_320;
  longlong *local_310;
  uint uStack_308;
  uint uStack_304;
  TBitArray<FDefaultBitArrayAllocator> *local_300;
  undefined4 uStack_2f8;
  uint uStack_2f4;
  uint local_2f0;
  undefined4 uStack_2ec;
  int iStack_2e8;
  undefined4 uStack_2e4;
  int local_2e0;
  int local_2dc;
  int local_2d8;
  int local_2d4;
  int local_2d0;
  int local_2cc;
  longlong *local_2c8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_2c0;
  undefined8 uStack_2a0;
  longlong *local_298;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_290;
  undefined8 uStack_270;
  longlong *local_268;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_260;
  undefined8 uStack_240;
  FAllocatedPayload local_238;
  FAllocatedPayload local_228;
  FAllocatedPayload local_218;
  FAllocatedPayload local_208 [2];
  undefined4 local_1dc;
  undefined4 local_1bc;
  undefined1 local_1b8 [32];
  uint *local_198;
  uint local_190;
  undefined4 local_18c;
  undefined4 local_188;
  int local_184;
  void *local_178;
  undefined4 local_170;
  undefined1 local_168 [32];
  uint *local_148;
  uint local_140;
  undefined4 local_13c;
  undefined4 local_138;
  int local_134;
  void *local_128;
  undefined4 local_120;
  undefined1 local_118 [32];
  uint *local_f8;
  uint local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  int local_e4;
  void *local_d8;
  undefined4 local_d0;
  FUniversalObjectLocatorFragment local_c8;
  FUniversalObjectLocatorFragment local_a8;
  FUniversalObjectLocatorFragment local_88;
  FUniversalObjectLocatorFragment local_68;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_3b8;
  local_390[0].Index = (param_1->TypeName).Index;
  local_358 = this;
  if (Z_Registration_Info_UScriptStruct_FLevelSequenceBindingReferences.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar10 = Z_Construct_UPackage__Script_LevelSequence();
    Z_Registration_Info_UScriptStruct_FLevelSequenceBindingReferences.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FLevelSequenceBindingReferences,
                         (UObject *)pUVar10,L"LevelSequenceBindingReferences");
  }
  bVar7 = UE::FPropertyTypeName::IsStruct
                    (local_390,
                     (FName)(Z_Registration_Info_UScriptStruct_FLevelSequenceBindingReferences.
                            OuterSingleton)->_padding_);
  bVar8 = false;
  if (bVar7) {
    local_1b8._0_8_ = 0;
    local_1b8._8_8_ = 0;
    local_198 = (uint *)0x0;
    uVar18 = 0;
    local_190 = 0;
    local_18c = 0x80;
    local_188 = 0xffffffff;
    local_184 = 0;
    local_178 = (void *)0x0;
    local_170 = 0;
    local_168._0_8_ = 0;
    local_168._8_8_ = 0;
    local_148 = (uint *)0x0;
    local_140 = 0;
    local_13c = 0x80;
    local_138 = 0xffffffff;
    local_134 = 0;
    local_128 = (void *)0x0;
    local_120 = 0;
    local_118._0_8_ = 0;
    local_118._8_8_ = 0;
    local_f8 = (uint *)0x0;
    local_f0 = 0;
    local_ec = 0x80;
    local_e8 = 0xffffffff;
    local_e4 = 0;
    local_d8 = (void *)0x0;
    local_d0 = 0;
    if (Z_Registration_Info_UScriptStruct_FLevelSequenceBindingReferences.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar10 = Z_Construct_UPackage__Script_LevelSequence();
      Z_Registration_Info_UScriptStruct_FLevelSequenceBindingReferences.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FLevelSequenceBindingReferences,
                           (UObject *)pUVar10,L"LevelSequenceBindingReferences");
    }
    UScriptStruct::SerializeItem
              (Z_Registration_Info_UScriptStruct_FLevelSequenceBindingReferences.OuterSingleton,
               param_2,local_1b8,(void *)0x0);
    uVar20 = local_190;
    uStack_304 = 1;
    local_2f0 = 0;
    uStack_2f4 = local_2f0;
    if (local_190 != 0) {
      puVar19 = (uint *)(local_1b8 + 0x10);
      if (local_198 != (uint *)0x0) {
        puVar19 = local_198;
      }
      uVar16 = *puVar19;
      local_2f0 = 0;
      uVar18 = 0;
      while (uVar16 == 0) {
        lVar12 = (longlong)(int)uVar18;
        local_2f0 = local_2f0 + 0x20;
        uVar18 = uVar18 + 1;
        uStack_2f4 = local_190;
        if ((int)((local_190 - 1) + ((int)(local_190 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar18)
        goto LAB_146c5a510;
        uVar16 = puVar19[lVar12 + 1];
      }
      uStack_304 = -uVar16 & uVar16;
      uVar2 = (ulonglong)uStack_304 * 2 + 1;
      lVar12 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      local_2e0 = (int)lVar12;
      uStack_2f4 = local_2e0 + -1 + local_2f0;
      if ((int)local_190 < (int)uStack_2f4) {
        uStack_2f4 = local_190;
      }
    }
LAB_146c5a510:
    local_310 = (longlong *)local_1b8;
    uStack_2ec = local_1dc;
    local_300 = (TBitArray<FDefaultBitArrayAllocator> *)(local_1b8 + 0x10);
    iStack_2e8 = local_1b8._8_4_ - local_184;
    uVar16 = local_190 & 0xffffffe0;
    TStack_2c0._padding_ = CONCAT44(uStack_304,uVar18);
    uStack_2f8 = 0xffffffff;
    TStack_2c0.CurrentBitIndex = uStack_2f4;
    TStack_2c0.UnvisitedBitMask = 0xffffffff;
    iVar14 = (int)local_190 >> 5;
    TStack_2c0._28_4_ = local_1dc;
    TStack_2c0.BaseBitIndex = local_2f0;
    uStack_2a0 = CONCAT44(uStack_2e4,iStack_2e8);
    bVar11 = (byte)local_190;
    local_394 = local_190;
    uStack_308 = uVar18;
    local_2c8 = local_310;
    TStack_2c0.Array = local_300;
    if (((int)local_190 < 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar8)) {
      pcVar3 = (code *)swi(3);
      uVar9 = (*pcVar3)();
      return (bool)uVar9;
    }
    pFVar5 = local_358;
    if (uVar20 != local_190) {
      puVar19 = (uint *)(local_1b8 + 0x10);
      if (local_198 != (uint *)0x0) {
        puVar19 = local_198;
      }
      uVar18 = -1 << (bVar11 & 0x1f) & puVar19[iVar14];
      while (uVar18 == 0) {
        lVar12 = (longlong)iVar14;
        uVar16 = uVar16 + 0x20;
        iVar14 = iVar14 + 1;
        if ((int)((local_190 - 1) + ((int)(local_190 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14) {
          local_394 = local_190;
          uVar20 = local_190;
          goto LAB_146c5a640;
        }
        uVar18 = puVar19[lVar12 + 1];
      }
      uVar2 = (ulonglong)(-uVar18 & uVar18) * 2 + 1;
      lVar12 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      local_2dc = (int)lVar12;
      uVar20 = (uVar16 - 1) + local_2dc;
      local_394 = uVar20;
      if ((int)local_190 < (int)uVar20) {
        uVar20 = local_190;
        local_394 = local_190;
      }
    }
LAB_146c5a640:
    while( true ) {
      plVar6 = local_2c8;
      if ((int)local_2c8[1] - *(int *)((longlong)local_2c8 + 0x34) != (int)uStack_2a0) {
        local_398 = 0;
        `TSparseArray<TSparseSetElement<TTuple<FGuid,FLevelSequenceBindingReferenceArray>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_398);
      }
      uVar18 = local_140;
      if (((TStack_2c0.CurrentBitIndex == uVar20) &&
          (TStack_2c0.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_1b8 + 0x10))) &&
         (plVar6 == (longlong *)local_1b8)) break;
      lVar12 = *plVar6;
      lVar17 = *(longlong *)(lVar12 + 0x10 + (longlong)TStack_2c0.CurrentBitIndex * 0x28);
      pFVar1 = (FGuid *)(lVar12 + (longlong)TStack_2c0.CurrentBitIndex * 0x28);
      uVar18 = pFVar1[1].C;
      lVar12 = (longlong)(int)uVar18 * 0x40 + lVar17;
      puVar15 = (undefined4 *)(lVar17 + 0x3c);
      while( true ) {
        if (pFVar1[1].C != uVar18) {
          local_397 = 0;
          `TCheckedPointerIterator<FLevelSequenceBindingReference,int,0>::operator!='::__l2::
          <lambda_1>::operator()(&local_397);
        }
        if (lVar17 == lVar12) break;
        if (*(longlong *)(puVar15 + -0xb) == 0) {
          FUniversalObjectLocator::FUniversalObjectLocator(&local_350);
          local_c8.FragmentType.Handle = (uchar)FSubObjectLocator::FragmentType;
          local_c8.DebugHeaderSizeLog2 = '\0';
          local_c8.bIsInitialized = '\0';
          if ((FSubObjectLocator::FragmentType == (TFragmentTypeHandle<FSubObjectLocator>)0xff) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("InHandle",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UniversalObjectLocator\\Public\\UniversalObjectLocatorFragment.h"
                                 ,0x17c,
                                 L"Attempting to construct a new fragment from an invalid fragment type handle - was it registered?"
                                ), bVar8)) {
            pcVar3 = (code *)swi(3);
            uVar9 = (*pcVar3)();
            return (bool)uVar9;
          }
          FUniversalObjectLocatorFragment::AllocatePayload(&local_c8,&local_238,0x10,8);
          *(undefined ***)local_238.DebugVFTablePtr =
               &___7__TFragmentPayload_UFSubObjectLocator___UniversalObjectLocator_UE__6B_;
          *(undefined8 *)local_238.Payload = 0;
          *(undefined8 *)local_238.Payload = *(undefined8 *)(puVar15 + -3);
          *(undefined8 *)(puVar15 + -3) = 0;
          *(undefined4 *)((longlong)local_238.Payload + 8) = puVar15[-1];
          *(undefined4 *)((longlong)local_238.Payload + 0xc) = *puVar15;
          *(undefined8 *)(puVar15 + -1) = 0;
          FUniversalObjectLocator::AddFragment(&local_350,&local_c8);
          FUniversalObjectLocatorFragment::~FUniversalObjectLocatorFragment(&local_c8);
          FMovieSceneBindingReferences::AddBinding
                    ((FMovieSceneBindingReferences *)pFVar5,pFVar1,&local_350);
          DestructItems<FUniversalObjectLocatorFragment,int>
                    ((FUniversalObjectLocatorFragment *)local_350.Fragments.AllocatorInstance.Data,
                     local_350.Fragments.ArrayNum);
          FVar13.Data = local_350.Fragments.AllocatorInstance.Data;
        }
        else {
          FUniversalObjectLocator::FUniversalObjectLocator(&local_340);
          local_a8.FragmentType.Handle = (uchar)FActorLocatorFragment::FragmentType;
          local_a8.DebugHeaderSizeLog2 = '\0';
          local_a8.bIsInitialized = '\0';
          if ((FActorLocatorFragment::FragmentType ==
               (TFragmentTypeHandle<FActorLocatorFragment>)0xff) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("InHandle",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UniversalObjectLocator\\Public\\UniversalObjectLocatorFragment.h"
                                 ,0x17c,
                                 L"Attempting to construct a new fragment from an invalid fragment type handle - was it registered?"
                                ), bVar8)) {
            pcVar3 = (code *)swi(3);
            uVar9 = (*pcVar3)();
            return (bool)uVar9;
          }
          FUniversalObjectLocatorFragment::AllocatePayload(&local_a8,&local_228,0x20,8);
          *(undefined ***)local_228.DebugVFTablePtr =
               &___7__TFragmentPayload_UFActorLocatorFragment___UniversalObjectLocator_UE__6B_;
          uVar4 = *(undefined8 *)(puVar15 + -9);
          *(undefined8 *)local_228.Payload = *(undefined8 *)(puVar15 + -0xb);
          *(undefined8 *)((longlong)local_228.Payload + 8) = uVar4;
          *(undefined8 *)((longlong)local_228.Payload + 0x10) = 0;
          *(undefined8 *)((longlong)local_228.Payload + 0x10) = *(undefined8 *)(puVar15 + -7);
          *(undefined8 *)(puVar15 + -7) = 0;
          *(undefined4 *)((longlong)local_228.Payload + 0x18) = puVar15[-5];
          *(undefined4 *)((longlong)local_228.Payload + 0x1c) = puVar15[-4];
          *(undefined8 *)(puVar15 + -5) = 0;
          FUniversalObjectLocator::AddFragment(&local_340,&local_a8);
          FUniversalObjectLocatorFragment::~FUniversalObjectLocatorFragment(&local_a8);
          FMovieSceneBindingReferences::AddBinding
                    ((FMovieSceneBindingReferences *)pFVar5,pFVar1,&local_340);
          DestructItems<FUniversalObjectLocatorFragment,int>
                    ((FUniversalObjectLocatorFragment *)local_340.Fragments.AllocatorInstance.Data,
                     local_340.Fragments.ArrayNum);
          FVar13.Data = local_340.Fragments.AllocatorInstance.Data;
        }
        if ((FUniversalObjectLocatorFragment *)FVar13.Data != (FUniversalObjectLocatorFragment *)0x0
           ) {
          FMemory::Free(FVar13.Data);
        }
        lVar17 = lVar17 + 0x40;
        puVar15 = puVar15 + 0x10;
      }
      TStack_2c0.UnvisitedBitMask = TStack_2c0.UnvisitedBitMask & ~TStack_2c0._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_2c0);
      uVar20 = local_394;
    }
    uVar20 = 0;
    uStack_37c = 1;
    uStack_380 = uVar20;
    uStack_36c = uVar20;
    local_368 = uVar20;
    if (local_140 != 0) {
      puVar19 = (uint *)(local_168 + 0x10);
      if (local_148 != (uint *)0x0) {
        puVar19 = local_148;
      }
      uVar16 = *puVar19;
      while (uVar16 == 0) {
        lVar12 = (longlong)(int)uStack_380;
        local_368 = local_368 + 0x20;
        uStack_380 = uStack_380 + 1;
        uStack_36c = local_140;
        if ((int)((local_140 - 1) + ((int)(local_140 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uStack_380)
        goto LAB_146c5a970;
        uVar16 = puVar19[lVar12 + 1];
      }
      uStack_37c = -uVar16 & uVar16;
      uVar2 = (ulonglong)uStack_37c * 2 + 1;
      lVar12 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      local_2d8 = (int)lVar12;
      uStack_36c = (local_368 - 1) + local_2d8;
      if ((int)local_140 < (int)uStack_36c) {
        uStack_36c = local_140;
      }
    }
LAB_146c5a970:
    local_388 = (longlong *)local_168;
    uStack_364 = local_1bc;
    local_378 = (TBitArray<FDefaultBitArrayAllocator> *)(local_168 + 0x10);
    uVar16 = local_140 & 0xffffffe0;
    iStack_360 = local_168._8_4_ - local_134;
    TStack_290._padding_ = CONCAT44(uStack_37c,uStack_380);
    uStack_370 = 0xffffffff;
    TStack_290.CurrentBitIndex = uStack_36c;
    TStack_290.UnvisitedBitMask = 0xffffffff;
    iVar14 = (int)local_140 >> 5;
    TStack_290._28_4_ = local_1bc;
    TStack_290.BaseBitIndex = local_368;
    uStack_270 = CONCAT44(uStack_35c,iStack_360);
    bVar11 = (byte)local_140;
    local_298 = local_388;
    TStack_290.Array = local_378;
    if (((int)local_140 < 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar8)) {
      pcVar3 = (code *)swi(3);
      uVar9 = (*pcVar3)();
      return (bool)uVar9;
    }
    pFVar5 = local_358;
    if (uVar18 != local_140) {
      puVar19 = (uint *)(local_168 + 0x10);
      if (local_148 != (uint *)0x0) {
        puVar19 = local_148;
      }
      uVar18 = -1 << (bVar11 & 0x1f) & puVar19[iVar14];
      while (uVar18 == 0) {
        lVar12 = (longlong)iVar14;
        uVar16 = uVar16 + 0x20;
        iVar14 = iVar14 + 1;
        uVar18 = local_140;
        if ((int)((local_140 - 1) + ((int)(local_140 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14)
        goto LAB_146c5aa90;
        uVar18 = puVar19[lVar12 + 1];
      }
      uVar2 = (ulonglong)(-uVar18 & uVar18) * 2 + 1;
      lVar12 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      local_2d4 = (int)lVar12;
      uVar18 = (uVar16 - 1) + local_2d4;
      if ((int)local_140 < (int)uVar18) {
        uVar18 = local_140;
      }
    }
LAB_146c5aa90:
    while( true ) {
      plVar6 = local_298;
      if ((int)local_298[1] - *(int *)((longlong)local_298 + 0x34) != (int)uStack_270) {
        local_396 = 0;
        `TSparseArray<TSparseSetElement<FGuid>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_396);
      }
      uVar16 = local_f0;
      lVar12 = (longlong)TStack_290.CurrentBitIndex;
      if (((TStack_290.CurrentBitIndex == uVar18) &&
          (TStack_290.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_168 + 0x10))) &&
         (plVar6 == (longlong *)local_168)) break;
      lVar17 = *plVar6;
      FUniversalObjectLocator::FUniversalObjectLocator(&local_330);
      local_88.FragmentType.Handle = (uchar)FAnimInstanceLocatorFragment::FragmentType;
      local_88.DebugHeaderSizeLog2 = '\0';
      local_88.bIsInitialized = '\0';
      if ((FAnimInstanceLocatorFragment::FragmentType ==
           (TFragmentTypeHandle<FAnimInstanceLocatorFragment>)0xff) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("InHandle",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UniversalObjectLocator\\Public\\UniversalObjectLocatorFragment.h"
                             ,0x17c,
                             L"Attempting to construct a new fragment from an invalid fragment type handle - was it registered?"
                            ), bVar8)) {
        pcVar3 = (code *)swi(3);
        uVar9 = (*pcVar3)();
        return (bool)uVar9;
      }
      FUniversalObjectLocatorFragment::AllocatePayload(&local_88,&local_218,4,4);
      *(undefined ***)local_218.DebugVFTablePtr =
           &___7__TFragmentPayload_UFAnimInstanceLocatorFragment___UniversalObjectLocator_UE__6B_;
      *(undefined4 *)local_218.Payload = 0;
      FUniversalObjectLocator::AddFragment(&local_330,&local_88);
      FUniversalObjectLocatorFragment::~FUniversalObjectLocatorFragment(&local_88);
      FMovieSceneBindingReferences::AddBinding
                ((FMovieSceneBindingReferences *)pFVar5,(FGuid *)(lVar17 + lVar12 * 0x18),&local_330
                );
      DestructItems<FUniversalObjectLocatorFragment,int>
                ((FUniversalObjectLocatorFragment *)local_330.Fragments.AllocatorInstance.Data,
                 local_330.Fragments.ArrayNum);
      if ((FUniversalObjectLocatorFragment *)local_330.Fragments.AllocatorInstance.Data !=
          (FUniversalObjectLocatorFragment *)0x0) {
        FMemory::Free(local_330.Fragments.AllocatorInstance.Data);
      }
      TStack_290.UnvisitedBitMask = TStack_290.UnvisitedBitMask & ~TStack_290._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_290);
    }
    uStack_37c = 1;
    uStack_36c = uVar20;
    local_368 = uVar20;
    if (local_f0 != 0) {
      puVar19 = (uint *)(local_118 + 0x10);
      if (local_f8 != (uint *)0x0) {
        puVar19 = local_f8;
      }
      uVar18 = *puVar19;
      while (uVar18 == 0) {
        lVar12 = (longlong)(int)uVar20;
        local_368 = local_368 + 0x20;
        uVar20 = uVar20 + 1;
        uStack_36c = local_f0;
        if ((int)((local_f0 - 1) + ((int)(local_f0 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar20)
        goto LAB_146c5ac60;
        uVar18 = puVar19[lVar12 + 1];
      }
      uStack_37c = -uVar18 & uVar18;
      uVar2 = (ulonglong)uStack_37c * 2 + 1;
      lVar12 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      local_2d0 = (int)lVar12;
      uStack_36c = local_2d0 + -1 + local_368;
      if ((int)local_f0 < (int)uStack_36c) {
        uStack_36c = local_f0;
      }
    }
LAB_146c5ac60:
    local_388 = (longlong *)local_118;
    uVar18 = local_f0 & 0xffffffe0;
    uStack_364 = uStack_2f4;
    local_378 = (TBitArray<FDefaultBitArrayAllocator> *)(local_118 + 0x10);
    iStack_360 = local_118._8_4_ - local_e4;
    uStack_370 = 0xffffffff;
    TStack_260.CurrentBitIndex = uStack_36c;
    TStack_260.UnvisitedBitMask = 0xffffffff;
    TStack_260._padding_ = CONCAT44(uStack_37c,uVar20);
    iVar14 = (int)local_f0 >> 5;
    TStack_260._28_4_ = uStack_2f4;
    TStack_260.BaseBitIndex = local_368;
    uStack_240 = CONCAT44(uStack_35c,iStack_360);
    bVar11 = (byte)local_f0;
    uStack_380 = uVar20;
    local_268 = local_388;
    TStack_260.Array = local_378;
    if (((int)local_f0 < 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar8)) {
      pcVar3 = (code *)swi(3);
      uVar9 = (*pcVar3)();
      return (bool)uVar9;
    }
    if (uVar16 != local_f0) {
      puVar19 = (uint *)(local_118 + 0x10);
      if (local_f8 != (uint *)0x0) {
        puVar19 = local_f8;
      }
      uVar20 = -1 << (bVar11 & 0x1f) & puVar19[iVar14];
      while (uVar20 == 0) {
        lVar12 = (longlong)iVar14;
        uVar18 = uVar18 + 0x20;
        iVar14 = iVar14 + 1;
        uVar16 = local_f0;
        if ((int)((local_f0 - 1) + ((int)(local_f0 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14)
        goto LAB_146c5ad81;
        uVar20 = puVar19[lVar12 + 1];
      }
      uVar2 = (ulonglong)(-uVar20 & uVar20) * 2 + 1;
      lVar12 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      local_2cc = (int)lVar12;
      uVar16 = local_2cc + -1 + uVar18;
      if ((int)local_f0 < (int)uVar16) {
        uVar16 = local_f0;
      }
    }
LAB_146c5ad81:
    while( true ) {
      plVar6 = local_268;
      if ((int)local_268[1] - *(int *)((longlong)local_268 + 0x34) != (int)uStack_240) {
        local_395 = 0;
        `TSparseArray<TSparseSetElement<FGuid>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_395);
      }
      lVar12 = (longlong)TStack_260.CurrentBitIndex;
      if (((TStack_260.CurrentBitIndex == uVar16) &&
          (TStack_260.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_118 + 0x10))) &&
         (plVar6 == (longlong *)local_118)) break;
      lVar17 = *plVar6;
      FUniversalObjectLocator::FUniversalObjectLocator(&local_320);
      local_68.FragmentType.Handle = (uchar)FAnimInstanceLocatorFragment::FragmentType;
      local_68.DebugHeaderSizeLog2 = '\0';
      local_68.bIsInitialized = '\0';
      if ((FAnimInstanceLocatorFragment::FragmentType ==
           (TFragmentTypeHandle<FAnimInstanceLocatorFragment>)0xff) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("InHandle",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UniversalObjectLocator\\Public\\UniversalObjectLocatorFragment.h"
                             ,0x17c,
                             L"Attempting to construct a new fragment from an invalid fragment type handle - was it registered?"
                            ), bVar8)) {
        pcVar3 = (code *)swi(3);
        uVar9 = (*pcVar3)();
        return (bool)uVar9;
      }
      FUniversalObjectLocatorFragment::AllocatePayload(&local_68,local_208,4,4);
      *(undefined ***)local_208[0].DebugVFTablePtr =
           &___7__TFragmentPayload_UFAnimInstanceLocatorFragment___UniversalObjectLocator_UE__6B_;
      *(undefined4 *)local_208[0].Payload = 1;
      FUniversalObjectLocator::AddFragment(&local_320,&local_68);
      FUniversalObjectLocatorFragment::~FUniversalObjectLocatorFragment(&local_68);
      FMovieSceneBindingReferences::AddBinding
                ((FMovieSceneBindingReferences *)pFVar5,(FGuid *)(lVar17 + lVar12 * 0x18),&local_320
                );
      DestructItems<FUniversalObjectLocatorFragment,int>
                ((FUniversalObjectLocatorFragment *)local_320.Fragments.AllocatorInstance.Data,
                 local_320.Fragments.ArrayNum);
      if ((FUniversalObjectLocatorFragment *)local_320.Fragments.AllocatorInstance.Data !=
          (FUniversalObjectLocatorFragment *)0x0) {
        FMemory::Free(local_320.Fragments.AllocatorInstance.Data);
      }
      TStack_260.UnvisitedBitMask = TStack_260.UnvisitedBitMask & ~TStack_260._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_260);
    }
    local_d0 = 0;
    if (local_d8 != (void *)0x0) {
      FMemory::Free(local_d8);
    }
    TSparseArray<TSparseSetElement<FGuid>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<FGuid>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<FGuid>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)local_118);
    local_120 = 0;
    if (local_128 != (void *)0x0) {
      FMemory::Free(local_128);
    }
    TSparseArray<TSparseSetElement<FGuid>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<FGuid>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<FGuid>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)local_168);
    local_170 = 0;
    if (local_178 != (void *)0x0) {
      FMemory::Free(local_178);
    }
    TSparseArray<TSparseSetElement<TTuple<FGuid,FLevelSequenceBindingReferenceArray>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FGuid,FLevelSequenceBindingReferenceArray>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<FGuid,FLevelSequenceBindingReferenceArray>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)local_1b8);
    bVar8 = true;
  }
  return bVar8;
}

