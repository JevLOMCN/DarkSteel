// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: EnhancedInput
// Functions: 41

// StaticClass @ 14a6b3470

UClass * __cdecl UEnhancedPlayerMappableKeyProfile::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEnhancedPlayerMappableKeyProfile.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/EnhancedInput",L"EnhancedPlayerMappableKeyProfile",
               &Z_Registration_Info_UClass_UEnhancedPlayerMappableKeyProfile.InnerSingleton,
               StaticRegisterNativesUEnhancedPlayerMappableKeyProfile,0xa8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UEnhancedPlayerMappableKeyProfile>,
               InternalVTableHelperCtorCaller<UEnhancedPlayerMappableKeyProfile>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEnhancedPlayerMappableKeyProfile.InnerSingleton;
}

// UEnhancedPlayerMappableKeyProfile @ 14a6cc710

UEnhancedPlayerMappableKeyProfile * __thiscall
UEnhancedPlayerMappableKeyProfile::UEnhancedPlayerMappableKeyProfile
          (UEnhancedPlayerMappableKeyProfile *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UEnhancedPlayerMappableKeyProfile__6B_;
  (this->ProfileIdentifier).TagName = (FName)0x0;
  (this->ProfileIdentifierString).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ProfileIdentifierString).Data.ArrayNum = 0;
  (this->ProfileIdentifierString).Data.ArrayMax = 0;
  (this->OwningUserId).InternalId = -1;
  FText::FText(&this->DisplayName);
  *(undefined8 *)&this->PlayerMappedKeys = 0;
  *(undefined8 *)&(this->PlayerMappedKeys).field_0x8 = 0;
  *(undefined8 *)&(this->PlayerMappedKeys).field_0x20 = 0;
  *(undefined4 *)&(this->PlayerMappedKeys).field_0x28 = 0;
  *(undefined4 *)&(this->PlayerMappedKeys).field_0x2c = 0x80;
  *(undefined4 *)&(this->PlayerMappedKeys).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->PlayerMappedKeys).field_0x34 = 0;
  *(undefined8 *)&(this->PlayerMappedKeys).field_0x40 = 0;
  *(undefined4 *)&(this->PlayerMappedKeys).field_0x48 = 0;
  return this;
}

// UEnhancedPlayerMappableKeyProfile @ 14a6cc7a0

UEnhancedPlayerMappableKeyProfile * __thiscall
UEnhancedPlayerMappableKeyProfile::UEnhancedPlayerMappableKeyProfile
          (UEnhancedPlayerMappableKeyProfile *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UEnhancedPlayerMappableKeyProfile__6B_;
  (this->ProfileIdentifier).TagName = (FName)0x0;
  (this->ProfileIdentifierString).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ProfileIdentifierString).Data.ArrayNum = 0;
  (this->ProfileIdentifierString).Data.ArrayMax = 0;
  (this->OwningUserId).InternalId = -1;
  FText::FText(&this->DisplayName);
  *(undefined8 *)&this->PlayerMappedKeys = 0;
  *(undefined8 *)&(this->PlayerMappedKeys).field_0x8 = 0;
  *(undefined8 *)&(this->PlayerMappedKeys).field_0x20 = 0;
  *(undefined4 *)&(this->PlayerMappedKeys).field_0x28 = 0;
  *(undefined4 *)&(this->PlayerMappedKeys).field_0x2c = 0x80;
  *(undefined4 *)&(this->PlayerMappedKeys).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->PlayerMappedKeys).field_0x34 = 0;
  *(undefined8 *)&(this->PlayerMappedKeys).field_0x40 = 0;
  *(undefined4 *)&(this->PlayerMappedKeys).field_0x48 = 0;
  return this;
}

// ~UEnhancedPlayerMappableKeyProfile @ 14a6cf6f0

void __thiscall
UEnhancedPlayerMappableKeyProfile::~UEnhancedPlayerMappableKeyProfile
          (UEnhancedPlayerMappableKeyProfile *this)

{
  void *pvVar1;
  ITextData *pIVar2;
  FScriptContainerElement *pFVar3;
  
  this->_padding_ = (longlong)&___7UEnhancedPlayerMappableKeyProfile__6B_;
  *(undefined4 *)&(this->PlayerMappedKeys).field_0x48 = 0;
  pvVar1 = *(void **)&(this->PlayerMappedKeys).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FKeyMappingRow>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FKeyMappingRow>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FKeyMappingRow>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->PlayerMappedKeys);
  pIVar2 = (this->DisplayName).TextData.Reference;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 0x10))();
  }
  pFVar3 = (this->ProfileIdentifierString).Data.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// DoesMappingPassQueryOptions @ 14a6d8fb0

bool __thiscall
UEnhancedPlayerMappableKeyProfile::DoesMappingPassQueryOptions
          (UEnhancedPlayerMappableKeyProfile *this,FPlayerKeyMapping *param_1,
          FPlayerMappableKeyQueryOptions *param_2)

{
  bool bVar1;
  bool bVar2;
  longlong lVar3;
  FKey *this_00;
  
  bVar1 = FKey::IsValid(&param_2->KeyToMatch);
  if (bVar1) {
    lVar3 = 0x48;
    if ((param_1->CurrentKey).KeyName == (param_1->DefaultKey).KeyName) {
      lVar3 = 0x30;
    }
    this_00 = (FKey *)((longlong)&(param_1->MappingName).ComparisonIndex.Value + lVar3);
    if (param_2->bMatchBasicKeyTypes != 0) {
      bVar1 = FKey::IsGamepadKey(this_00);
      bVar2 = FKey::IsGamepadKey(&param_2->KeyToMatch);
      if (bVar2 != bVar1) {
        return false;
      }
      bVar1 = FKey::IsTouch(this_00);
      bVar2 = FKey::IsTouch(&param_2->KeyToMatch);
      if (bVar2 != bVar1) {
        return false;
      }
      bVar1 = FKey::IsGesture(this_00);
      bVar2 = FKey::IsGesture(&param_2->KeyToMatch);
      if (bVar2 != bVar1) {
        return false;
      }
    }
    if (param_2->bMatchKeyAxisType != '\0') {
      bVar1 = FKey::IsAxis1D(this_00);
      bVar2 = FKey::IsAxis1D(&param_2->KeyToMatch);
      if (bVar2 != bVar1) {
        return false;
      }
      bVar1 = FKey::IsAxis2D(this_00);
      bVar2 = FKey::IsAxis2D(&param_2->KeyToMatch);
      if (bVar2 != bVar1) {
        return false;
      }
      bVar1 = FKey::IsAxis3D(this_00);
      bVar2 = FKey::IsAxis3D(&param_2->KeyToMatch);
      if (bVar2 != bVar1) {
        return false;
      }
    }
  }
  if ((param_2->SlotToMatch == Unspecified) || (param_2->SlotToMatch == param_1->Slot)) {
    if ((param_2->RequiredDeviceType == Unspecified) ||
       (param_2->RequiredDeviceType == (param_1->HardwareDeviceId).PrimaryDeviceType)) {
      if (param_2->RequiredDeviceFlags == Unspecified) {
        return true;
      }
      bVar1 = FHardwareDeviceIdentifier::HasAllSupportedFeatures
                        (&param_1->HardwareDeviceId,param_2->RequiredDeviceFlags);
      return bVar1;
    }
  }
  return false;
}

// DumpProfileToLog @ 14a6d91d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UEnhancedPlayerMappableKeyProfile::DumpProfileToLog(UEnhancedPlayerMappableKeyProfile *this)

{
  void *local_18 [3];
  
  if (4 < (byte)LogEnhancedInput._0_1_) {
    (**(code **)(this->_padding_ + 0x2c0))(this,local_18);
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogEnhancedInput);
    if (local_18[0] != (void *)0x0) {
      FMemory::Free(local_18[0]);
    }
  }
  return;
}

// EquipProfile @ 14a6d9ea0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UEnhancedPlayerMappableKeyProfile::EquipProfile(UEnhancedPlayerMappableKeyProfile *this)

{
  if (5 < (byte)LogEnhancedInput._0_1_) {
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogEnhancedInput);
    return;
  }
  return;
}

// FindKeyMapping @ 14a6dd470

FPlayerKeyMapping * __thiscall
UEnhancedPlayerMappableKeyProfile::FindKeyMapping
          (UEnhancedPlayerMappableKeyProfile *this,FMapPlayerKeyArgs *param_1)

{
  TSet<FPlayerKeyMapping,DefaultKeyFuncs<FPlayerKeyMapping,0>,FDefaultSetAllocator> *pTVar1;
  FPlayerKeyMapping *pFVar2;
  
  pTVar1 = &TMapBase<FName,FKeyMappingRow,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FKeyMappingRow,0>_>
            ::Find((TMapBase<FName,FKeyMappingRow,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FKeyMappingRow,0>_>
                    *)&this->PlayerMappedKeys,param_1->MappingName)->Mappings;
  if (pTVar1 != (TSet<FPlayerKeyMapping,DefaultKeyFuncs<FPlayerKeyMapping,0>,FDefaultSetAllocator> *
                )0x0) {
    pFVar2 = AlgoImpl::
             FindByPredicate<TSet<FPlayerKeyMapping,DefaultKeyFuncs<FPlayerKeyMapping,0>,FDefaultSetAllocator>_const_&,_UEnhancedPlayerMappableKeyProfile::FindKeyMapping_::__l5::<lambda_1>_>
                       (pTVar1,(<lambda_1>)param_1);
    return pFVar2;
  }
  return (FPlayerKeyMapping *)0x0;
}

// FindKeyMappingRow @ 14a6dd4b0

FKeyMappingRow * __thiscall
UEnhancedPlayerMappableKeyProfile::FindKeyMappingRow
          (UEnhancedPlayerMappableKeyProfile *this,FName param_1)

{
  FKeyMappingRow *pFVar1;
  
  pFVar1 = TMapBase<FName,FKeyMappingRow,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FKeyMappingRow,0>_>
           ::Find((TMapBase<FName,FKeyMappingRow,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FKeyMappingRow,0>_>
                   *)&this->PlayerMappedKeys,param_1);
  return pFVar1;
}

// FindKeyMappingRowMutable @ 14a6dd4c0

FKeyMappingRow * __thiscall
UEnhancedPlayerMappableKeyProfile::FindKeyMappingRowMutable
          (UEnhancedPlayerMappableKeyProfile *this,FName param_1)

{
  FKeyMappingRow *pFVar1;
  
  pFVar1 = TMapBase<FName,FKeyMappingRow,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FKeyMappingRow,0>_>
           ::Find((TMapBase<FName,FKeyMappingRow,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FKeyMappingRow,0>_>
                   *)&this->PlayerMappedKeys,param_1);
  return pFVar1;
}

// GetMappedKeysInRow @ 14a6df6c0

/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
UEnhancedPlayerMappableKeyProfile::GetMappedKeysInRow
          (UEnhancedPlayerMappableKeyProfile *this,FName param_1,
          TArray<FKey,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  undefined1 *puVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  FKey *pFVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  FKeyMappingRow *pFVar9;
  bool bVar10;
  FKeyMappingRow *pFVar11;
  longlong lVar12;
  FScriptContainerElement *pFVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  FScriptContainerElement *pFVar17;
  undefined1 *puVar18;
  uint *puVar19;
  uint uVar20;
  undefined1 local_res8 [8];
  FName local_res10;
  int local_res18;
  int local_res20;
  FString local_c0;
  FKeyMappingRow *local_b0;
  int iStack_a8;
  uint uStack_a4;
  undefined1 *local_a0;
  undefined4 uStack_98;
  int iStack_94;
  int local_90;
  int iStack_8c;
  int iStack_88;
  undefined4 uStack_84;
  FKeyMappingRow *local_80;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_78;
  undefined8 uStack_58;
  
  piVar1 = &param_2->ArrayMax;
  pFVar6 = (FKey *)(param_2->AllocatorInstance).Data;
  local_res10 = param_1;
  if (param_2->ArrayMax < 0) {
    DestructItems<FKey,int>(pFVar6,param_2->ArrayNum);
    param_2->ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,0,&param_2->AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<FKey,int>(pFVar6,param_2->ArrayNum);
    param_2->ArrayNum = 0;
  }
  iVar15 = 0;
  pFVar11 = TMapBase<FName,FKeyMappingRow,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FKeyMappingRow,0>_>
            ::Find((TMapBase<FName,FKeyMappingRow,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FKeyMappingRow,0>_>
                    *)&this->PlayerMappedKeys,local_res10);
  if (pFVar11 == (FKeyMappingRow *)0x0) {
    if (5 < (byte)LogEnhancedInput._0_1_) {
      ::FName::ToString(&local_res10,&local_c0);
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogEnhancedInput);
      if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_c0.Data.AllocatorInstance.Data);
      }
    }
  }
  else {
    iVar4 = *(int *)&(pFVar11->Mappings).Elements.field_0x28;
    uStack_a4 = 1;
    puVar2 = &(pFVar11->Mappings).Elements.field_0x10;
    local_90 = 0;
    iStack_94 = 0;
    if (iVar4 != 0) {
      puVar19 = *(uint **)&(pFVar11->Mappings).Elements.field_0x20;
      if (puVar19 == (uint *)0x0) {
        puVar19 = (uint *)puVar2;
      }
      uVar14 = *puVar19;
      local_90 = 0;
      while (uVar14 == 0) {
        lVar12 = (longlong)iVar15;
        local_90 = local_90 + 0x20;
        iVar15 = iVar15 + 1;
        iStack_94 = iVar4;
        if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar15) goto LAB_14a6df7ce;
        uVar14 = puVar19[lVar12 + 1];
      }
      uStack_a4 = -uVar14 & uVar14;
      uVar3 = (ulonglong)uStack_a4 * 2 + 1;
      lVar12 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      local_res18 = (int)lVar12;
      iStack_94 = local_90 + -1 + local_res18;
      if (iVar4 < iStack_94) {
        iStack_94 = iVar4;
      }
    }
LAB_14a6df7ce:
    uVar14 = *(uint *)&(pFVar11->Mappings).Elements.field_0x28;
    TStack_78._padding_ = CONCAT44(uStack_a4,iVar15);
    iStack_88 = *(int *)&(pFVar11->Mappings).Elements.field_0x8 -
                *(int *)&(pFVar11->Mappings).Elements.field_0x34;
    uStack_98 = 0xffffffff;
    uVar20 = uVar14 & 0xffffffe0;
    TStack_78.CurrentBitIndex = iStack_94;
    TStack_78.UnvisitedBitMask = 0xffffffff;
    iVar16 = (int)uVar14 >> 5;
    TStack_78._28_4_ = iStack_94;
    TStack_78.BaseBitIndex = local_90;
    uStack_58 = CONCAT44(uStack_84,iStack_88);
    local_b0 = pFVar11;
    iStack_a8 = iVar15;
    local_a0 = puVar2;
    iStack_8c = iStack_94;
    local_80 = pFVar11;
    TStack_78.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
    if ((((int)uVar14 < 0) || (iVar4 < (int)uVar14)) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("StartIndex >= 0 && StartIndex <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x7af,L""), bVar10)) {
      pcVar8 = (code *)swi(3);
      iVar15 = (*pcVar8)();
      return iVar15;
    }
    uVar5 = *(uint *)&(pFVar11->Mappings).Elements.field_0x28;
    if (uVar14 != uVar5) {
      puVar18 = *(undefined1 **)&(pFVar11->Mappings).Elements.field_0x20;
      if (puVar18 == (undefined1 *)0x0) {
        puVar18 = puVar2;
      }
      uVar14 = -1 << ((byte)uVar14 & 0x1f) & *(uint *)(puVar18 + (longlong)iVar16 * 4);
      while (uVar14 == 0) {
        lVar12 = (longlong)iVar16;
        uVar20 = uVar20 + 0x20;
        iVar16 = iVar16 + 1;
        uVar14 = uVar5;
        if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar16)
        goto LAB_14a6df8e0;
        uVar14 = *(uint *)(puVar18 + lVar12 * 4 + 4);
      }
      uVar3 = (ulonglong)(-uVar14 & uVar14) * 2 + 1;
      lVar12 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      local_res20 = (int)lVar12;
      uVar14 = local_res20 + -1 + uVar20;
      if ((int)uVar5 < (int)uVar14) {
        uVar14 = uVar5;
      }
    }
LAB_14a6df8e0:
    while( true ) {
      pFVar9 = local_80;
      if (*(int *)&(local_80->Mappings).Elements.field_0x8 -
          *(int *)&(local_80->Mappings).Elements.field_0x34 != (int)uStack_58) {
        local_res8[0] = 0;
        `TSparseArray<TSparseSetElement<FPlayerKeyMapping>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if (((TStack_78.CurrentBitIndex == uVar14) &&
          (TStack_78.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) &&
         (pFVar9 == pFVar11)) break;
      pFVar7 = (param_2->AllocatorInstance).Data;
      lVar12 = *(longlong *)&(pFVar9->Mappings).Elements;
      pFVar17 = (FScriptContainerElement *)
                (lVar12 + 0x30 + (longlong)TStack_78.CurrentBitIndex * 0xb0);
      pFVar13 = (FScriptContainerElement *)
                (lVar12 + 0x48 + (longlong)TStack_78.CurrentBitIndex * 0xb0);
      if (*(longlong *)pFVar13 != *(longlong *)pFVar17) {
        pFVar17 = pFVar13;
      }
      if (((pFVar7 <= pFVar17) && (pFVar17 < pFVar7 + (longlong)*piVar1 * 0x18)) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar10)) {
        pcVar8 = (code *)swi(3);
        iVar15 = (*pcVar8)();
        return iVar15;
      }
      iVar15 = param_2->ArrayNum;
      if (iVar15 == *piVar1) {
        iVar15 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x818,&param_2->AllocatorInstance,piVar1);
      }
      param_2->ArrayNum = iVar15 + 1;
      pFVar7 = (param_2->AllocatorInstance).Data + (longlong)iVar15 * 0x18;
      *(longlong *)pFVar7 = *(longlong *)pFVar17;
      *(longlong *)(pFVar7 + 8) = *(longlong *)(pFVar17 + 8);
      lVar12 = *(longlong *)(pFVar17 + 0x10);
      *(longlong *)(pFVar7 + 0x10) = lVar12;
      if (lVar12 != 0) {
        LOCK();
        *(int *)(lVar12 + 8) = *(int *)(lVar12 + 8) + 1;
        UNLOCK();
      }
      TStack_78.UnvisitedBitMask = TStack_78.UnvisitedBitMask & ~TStack_78._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_78);
    }
  }
  return param_2->ArrayNum;
}

// GetMappingNamesForKey @ 14a6dfd00

int __thiscall
UEnhancedPlayerMappableKeyProfile::GetMappingNamesForKey
          (UEnhancedPlayerMappableKeyProfile *this,FKey *param_1,
          TArray<FName,TSizedDefaultAllocator<32>_> *param_2)

{
  undefined1 *puVar1;
  TMap<FName,FKeyMappingRow,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FKeyMappingRow,0>_>
  *pTVar2;
  TBitArray<FDefaultBitArrayAllocator> *pTVar3;
  ulonglong uVar4;
  int *piVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  TMap<FName,FKeyMappingRow,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FKeyMappingRow,0>_>
  *pTVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  longlong lVar13;
  longlong lVar14;
  FName FVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  undefined1 *puVar19;
  TBitArray<FDefaultBitArrayAllocator> *pTVar20;
  int iVar21;
  uint *puVar22;
  FScriptContainerElement *pFVar23;
  undefined1 local_res8 [8];
  FKey *local_res10;
  undefined1 local_res18 [8];
  uint local_res20;
  undefined4 uStack_10c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_e0;
  undefined8 uStack_c0;
  TMap<FName,FKeyMappingRow,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FKeyMappingRow,0>_>
  *local_b8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_b0;
  undefined8 uStack_90;
  undefined4 local_6c;
  undefined4 local_4c;
  
  param_2->ArrayNum = 0;
  local_res10 = param_1;
  if (param_2->ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,0,&param_2->AllocatorInstance,0,&param_2->ArrayMax);
  }
  puVar1 = &(this->PlayerMappedKeys).field_0x10;
  iVar18 = 0;
  iVar12 = *(int *)&(this->PlayerMappedKeys).field_0x28;
  pTVar2 = &this->PlayerMappedKeys;
  iVar21 = 0;
  uVar10 = 1;
  iVar11 = 0;
  if (iVar12 != 0) {
    puVar22 = *(uint **)&(this->PlayerMappedKeys).field_0x20;
    if (puVar22 == (uint *)0x0) {
      puVar22 = (uint *)puVar1;
    }
    uVar17 = *puVar22;
    while (uVar17 == 0) {
      lVar13 = (longlong)iVar18;
      iVar21 = iVar21 + 0x20;
      iVar18 = iVar18 + 1;
      iVar11 = iVar12;
      if ((int)(iVar12 + -1 + (iVar12 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar18) goto LAB_14a6dfddf;
      uVar17 = puVar22[lVar13 + 1];
    }
    uVar10 = -uVar17 & uVar17;
    uVar4 = (ulonglong)uVar10 * 2 + 1;
    lVar13 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    iVar11 = iVar21 + -1 + (int)lVar13;
    if (iVar12 < iVar11) {
      iVar11 = iVar12;
    }
  }
LAB_14a6dfddf:
  uVar17 = *(uint *)&(this->PlayerMappedKeys).field_0x28;
  uVar16 = uVar17 & 0xffffffe0;
  TStack_b0._padding_ = CONCAT44(uVar10,iVar18);
  TStack_b0.CurrentBitIndex = iVar11;
  TStack_b0.UnvisitedBitMask = 0xffffffff;
  iVar18 = (int)uVar17 >> 5;
  TStack_b0._28_4_ = local_6c;
  TStack_b0.BaseBitIndex = iVar21;
  uStack_90 = CONCAT44(uStack_10c,
                       *(int *)&(this->PlayerMappedKeys).field_0x8 -
                       *(int *)&(this->PlayerMappedKeys).field_0x34);
  local_res20 = uVar17;
  local_b8 = pTVar2;
  TStack_b0.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar17 < 0) || (iVar12 < (int)uVar17)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    iVar12 = (*pcVar7)();
    return iVar12;
  }
  uVar10 = *(uint *)&(this->PlayerMappedKeys).field_0x28;
  if (uVar17 != uVar10) {
    puVar19 = *(undefined1 **)&(this->PlayerMappedKeys).field_0x20;
    if (puVar19 == (undefined1 *)0x0) {
      puVar19 = puVar1;
    }
    uVar17 = -1 << ((byte)uVar17 & 0x1f) & *(uint *)(puVar19 + (longlong)iVar18 * 4);
    while (uVar17 == 0) {
      lVar13 = (longlong)iVar18;
      uVar16 = uVar16 + 0x20;
      iVar18 = iVar18 + 1;
      uVar17 = uVar10;
      local_res20 = uVar10;
      if ((int)((uVar10 - 1) + ((int)(uVar10 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar18)
      goto LAB_14a6dff10;
      uVar17 = *(uint *)(puVar19 + lVar13 * 4 + 4);
    }
    uVar4 = (ulonglong)(-uVar17 & uVar17) * 2 + 1;
    lVar13 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    uVar17 = (int)lVar13 + -1 + uVar16;
    local_res20 = uVar17;
    if ((int)uVar10 < (int)uVar17) {
      uVar17 = uVar10;
      local_res20 = uVar10;
    }
  }
LAB_14a6dff10:
  pTVar8 = local_b8;
  if (*(int *)&local_b8->field_0x8 - *(int *)&local_b8->field_0x34 != (int)uStack_90) {
    local_res8[0] = 0;
    `TSparseArray<TSparseSetElement<TTuple<FName,FKeyMappingRow>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
  }
  if (((TStack_b0.CurrentBitIndex == uVar17) &&
      (TStack_b0.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar8 == pTVar2)) {
    return param_2->ArrayNum;
  }
  iVar18 = 0;
  iVar21 = 0;
  pFVar23 = (FScriptContainerElement *)
            ((longlong)TStack_b0.CurrentBitIndex * 0x60 + *(longlong *)pTVar8);
  uVar10 = 1;
  iVar12 = *(int *)(pFVar23 + 0x30);
  pTVar3 = (TBitArray<FDefaultBitArrayAllocator> *)(pFVar23 + 0x18);
  iVar11 = 0;
  if (iVar12 != 0) {
    pTVar20 = pTVar3;
    if (*(TBitArray<FDefaultBitArrayAllocator> **)(pFVar23 + 0x28) !=
        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar20 = *(TBitArray<FDefaultBitArrayAllocator> **)(pFVar23 + 0x28);
    }
    uVar17 = *(uint *)(pTVar20->AllocatorInstance).InlineData;
    while (uVar17 == 0) {
      lVar13 = (longlong)iVar18;
      iVar21 = iVar21 + 0x20;
      iVar18 = iVar18 + 1;
      iVar11 = iVar12;
      if ((int)(iVar12 + -1 + (iVar12 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar18) goto LAB_14a6dffdd;
      uVar17 = *(uint *)((pTVar20->AllocatorInstance).InlineData + lVar13 * 4 + 4);
    }
    uVar10 = -uVar17 & uVar17;
    uVar4 = (ulonglong)uVar10 * 2 + 1;
    lVar13 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    iVar11 = iVar21 + -1 + (int)lVar13;
    if (iVar12 < iVar11) {
      iVar11 = iVar12;
    }
  }
LAB_14a6dffdd:
  uVar17 = *(uint *)(pFVar23 + 0x30);
  uVar16 = uVar17 & 0xffffffe0;
  TStack_e0._padding_ = CONCAT44(uVar10,iVar18);
  TStack_e0.CurrentBitIndex = iVar11;
  TStack_e0.UnvisitedBitMask = 0xffffffff;
  iVar18 = (int)uVar17 >> 5;
  TStack_e0._28_4_ = local_4c;
  TStack_e0.BaseBitIndex = iVar21;
  uStack_c0 = CONCAT44(uStack_10c,*(int *)(pFVar23 + 0x10) - *(int *)(pFVar23 + 0x3c));
  TStack_e0.Array = pTVar3;
  if ((((int)uVar17 < 0) || (iVar12 < (int)uVar17)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    iVar12 = (*pcVar7)();
    return iVar12;
  }
  uVar10 = *(uint *)(pFVar23 + 0x30);
  if (uVar17 != uVar10) {
    pTVar20 = pTVar3;
    if (*(TBitArray<FDefaultBitArrayAllocator> **)(pFVar23 + 0x28) !=
        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar20 = *(TBitArray<FDefaultBitArrayAllocator> **)(pFVar23 + 0x28);
    }
    uVar17 = -1 << ((byte)uVar17 & 0x1f) &
             *(uint *)((pTVar20->AllocatorInstance).InlineData + (longlong)iVar18 * 4);
    while (uVar17 == 0) {
      lVar13 = (longlong)iVar18;
      uVar16 = uVar16 + 0x20;
      iVar18 = iVar18 + 1;
      uVar17 = uVar10;
      if ((int)((uVar10 - 1) + ((int)(uVar10 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar18)
      goto LAB_14a6e00f1;
      uVar17 = *(uint *)((pTVar20->AllocatorInstance).InlineData + lVar13 * 4 + 4);
    }
    uVar4 = (ulonglong)(-uVar17 & uVar17) * 2 + 1;
    lVar13 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    uVar17 = (int)lVar13 + -1 + uVar16;
    if ((int)uVar10 < (int)uVar17) {
      uVar17 = uVar10;
    }
  }
LAB_14a6e00f1:
  do {
    if (*(int *)(pFVar23 + 0x10) - *(int *)(pFVar23 + 0x3c) != (int)uStack_c0) {
      local_res18[0] = 0;
      `TSparseArray<TSparseSetElement<FPlayerKeyMapping>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if ((TStack_e0.CurrentBitIndex == uVar17) && (TStack_e0.Array == pTVar3)) goto LAB_14a6e01f7;
    lVar14 = (longlong)TStack_e0.CurrentBitIndex * 0xb0;
    lVar13 = *(longlong *)(pFVar23 + 8);
    FVar15 = *(FName *)(lVar14 + 0x48 + lVar13);
    if (FVar15 == *(FName *)(lVar14 + 0x30 + lVar13)) {
      FVar15 = *(FName *)(lVar14 + 0x30 + lVar13);
    }
    if (FVar15 == local_res10->KeyName) break;
    TStack_e0.UnvisitedBitMask = TStack_e0.UnvisitedBitMask & ~TStack_e0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_e0);
  } while( true );
  pFVar6 = (param_2->AllocatorInstance).Data;
  piVar5 = &param_2->ArrayMax;
  if (((pFVar6 <= pFVar23) && (pFVar23 < pFVar6 + (longlong)*piVar5 * 8)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar9)) {
    pcVar7 = (code *)swi(3);
    iVar12 = (*pcVar7)();
    return iVar12;
  }
  iVar12 = param_2->ArrayNum;
  if (iVar12 == *piVar5) {
    iVar12 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x408,&param_2->AllocatorInstance,piVar5);
  }
  param_2->ArrayNum = iVar12 + 1;
  *(undefined8 *)((param_2->AllocatorInstance).Data + (longlong)iVar12 * 8) = *(undefined8 *)pFVar23
  ;
LAB_14a6e01f7:
  TStack_b0.UnvisitedBitMask = TStack_b0.UnvisitedBitMask & ~TStack_b0._padding_._4_4_;
  TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_b0);
  uVar17 = local_res20;
  goto LAB_14a6dff10;
}

// GetPlayerMappedKeysForRebuildControlMappings @ 14a6e0450

int __thiscall
UEnhancedPlayerMappableKeyProfile::GetPlayerMappedKeysForRebuildControlMappings
          (UEnhancedPlayerMappableKeyProfile *this,FEnhancedActionKeyMapping *param_1,
          TArray<FKey,TSizedDefaultAllocator<32>_> *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  int iVar2;
  UPlayerMappableKeySettings *pUVar3;
  undefined8 local_res20;
  undefined8 local_38;
  FName local_30;
  FKeyDetails *local_28;
  TReferenceControllerBase<1> *pTStack_20;
  undefined1 local_18;
  byte local_17;
  undefined1 local_16;
  undefined4 local_14;
  
  pUVar3 = FEnhancedActionKeyMapping::GetPlayerMappableKeySettings(param_1);
  if (pUVar3 == (UPlayerMappableKeySettings *)0x0) {
    return 0;
  }
  local_28 = EKeys::Invalid.KeyDetails.Object;
  pTStack_20 = EKeys::Invalid.KeyDetails.SharedReferenceCount.ReferenceController;
  if (EKeys::Invalid.KeyDetails.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (EKeys::Invalid.KeyDetails.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(EKeys::Invalid.KeyDetails.SharedReferenceCount.ReferenceController)->
               SharedReferenceCount + 1);
    UNLOCK();
  }
  local_18 = 7;
  local_17 = local_17 & 0xfd | 1;
  local_16 = 0;
  local_14 = 0;
  pUVar3 = FEnhancedActionKeyMapping::GetPlayerMappableKeySettings(param_1);
  if (pUVar3 != (UPlayerMappableKeySettings *)0x0) {
    pUVar3 = FEnhancedActionKeyMapping::GetPlayerMappableKeySettings(param_1);
    if (pUVar3 != (UPlayerMappableKeySettings *)0x0) {
      (**(code **)(pUVar3->_padding_ + 0x2b0))(pUVar3,&local_res20,param_1);
      goto LAB_14a6e0502;
    }
  }
  local_res20 = 0;
LAB_14a6e0502:
  pTVar1 = pTStack_20;
  local_28 = (param_1->Key).KeyDetails.Object;
  local_38 = local_res20;
  local_30 = (param_1->Key).KeyName;
  pTStack_20 = (param_1->Key).KeyDetails.SharedReferenceCount.ReferenceController;
  if (pTStack_20 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_20->SharedReferenceCount = (atomic<int>)((int)pTStack_20->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  local_17 = local_17 & 0xfd | 1;
  iVar2 = (**(code **)(this->_padding_ + 0x2d8))(this,&local_38,param_2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_20);
  return iVar2;
}

// GetPlayerMappingRows @ 14a6e0590

TMap<FName,FKeyMappingRow,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FKeyMappingRow,0>_>
* __thiscall
UEnhancedPlayerMappableKeyProfile::GetPlayerMappingRows(UEnhancedPlayerMappableKeyProfile *this)

{
  return &this->PlayerMappedKeys;
}

// GetPrivateStaticClass @ 14a6e0ea0

UClass * __cdecl UEnhancedPlayerMappableKeyProfile::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEnhancedPlayerMappableKeyProfile.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/EnhancedInput",L"EnhancedPlayerMappableKeyProfile",
               &Z_Registration_Info_UClass_UEnhancedPlayerMappableKeyProfile.InnerSingleton,
               StaticRegisterNativesUEnhancedPlayerMappableKeyProfile,0xa8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UEnhancedPlayerMappableKeyProfile>,
               InternalVTableHelperCtorCaller<UEnhancedPlayerMappableKeyProfile>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEnhancedPlayerMappableKeyProfile.InnerSingleton;
}

// GetProfileDisplayName @ 14a6e25a0

FText * __thiscall
UEnhancedPlayerMappableKeyProfile::GetProfileDisplayName(UEnhancedPlayerMappableKeyProfile *this)

{
  return &this->DisplayName;
}

// GetProfileIdString @ 14a6e25b0

FString * __thiscall
UEnhancedPlayerMappableKeyProfile::GetProfileIdString(UEnhancedPlayerMappableKeyProfile *this)

{
  return &this->ProfileIdentifierString;
}

// GetProfileIdentifer @ 14a6e25c0

FGameplayTag * __thiscall
UEnhancedPlayerMappableKeyProfile::GetProfileIdentifer(UEnhancedPlayerMappableKeyProfile *this)

{
  return &this->ProfileIdentifier;
}

// K2_FindKeyMapping @ 14a6e5d10

void __thiscall
UEnhancedPlayerMappableKeyProfile::K2_FindKeyMapping
          (UEnhancedPlayerMappableKeyProfile *this,FPlayerKeyMapping *param_1,
          FMapPlayerKeyArgs *param_2)

{
  FPlayerKeyMapping *pFVar1;
  FPlayerKeyMapping *pFVar2;
  
  pFVar1 = (FPlayerKeyMapping *)(**(code **)(this->_padding_ + 0x2e8))(this,param_2);
  pFVar2 = &FPlayerKeyMapping::InvalidMapping;
  if (pFVar1 != (FPlayerKeyMapping *)0x0) {
    pFVar2 = pFVar1;
  }
  FPlayerKeyMapping::operator=(param_1,pFVar2);
  return;
}

// QueryPlayerMappedKeys @ 14a6eca80

/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
UEnhancedPlayerMappableKeyProfile::QueryPlayerMappedKeys
          (UEnhancedPlayerMappableKeyProfile *this,FPlayerMappableKeyQueryOptions *param_1,
          TArray<FKey,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  undefined1 *puVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  FKey *pFVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  bool bVar9;
  char cVar10;
  uint uVar11;
  int iVar12;
  FKeyMappingRow *pFVar13;
  longlong lVar14;
  int iVar15;
  FScriptContainerElement *pFVar16;
  uint uVar17;
  int iVar18;
  undefined1 *puVar19;
  uint *puVar20;
  undefined1 local_res8 [8];
  FPlayerMappableKeyQueryOptions *local_res10;
  int local_res18;
  int local_res20;
  undefined4 uStack_94;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_80;
  undefined8 uStack_60;
  FString local_58;
  
  piVar1 = &param_2->ArrayMax;
  pFVar6 = (FKey *)(param_2->AllocatorInstance).Data;
  local_res10 = param_1;
  if (param_2->ArrayMax < 0) {
    DestructItems<FKey,int>(pFVar6,param_2->ArrayNum);
    param_2->ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,0,&param_2->AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<FKey,int>(pFVar6,param_2->ArrayNum);
    param_2->ArrayNum = 0;
  }
  iVar15 = 0;
  pFVar13 = TMapBase<FName,FKeyMappingRow,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FKeyMappingRow,0>_>
            ::Find((TMapBase<FName,FKeyMappingRow,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FKeyMappingRow,0>_>
                    *)&this->PlayerMappedKeys,param_1->MappingName);
  if (pFVar13 == (FKeyMappingRow *)0x0) {
    if (5 < (byte)LogEnhancedInput._0_1_) {
      ::FName::ToString(&param_1->MappingName,&local_58);
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogEnhancedInput);
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
    }
  }
  else {
    iVar4 = *(int *)&(pFVar13->Mappings).Elements.field_0x28;
    uVar11 = 1;
    puVar2 = &(pFVar13->Mappings).Elements.field_0x10;
    iVar18 = 0;
    iVar12 = 0;
    if (iVar4 != 0) {
      puVar20 = *(uint **)&(pFVar13->Mappings).Elements.field_0x20;
      if (puVar20 == (uint *)0x0) {
        puVar20 = (uint *)puVar2;
      }
      uVar17 = *puVar20;
      iVar18 = 0;
      while (uVar17 == 0) {
        lVar14 = (longlong)iVar15;
        iVar18 = iVar18 + 0x20;
        iVar15 = iVar15 + 1;
        iVar12 = iVar4;
        if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar15) goto LAB_14a6ecb8e;
        uVar17 = puVar20[lVar14 + 1];
      }
      uVar11 = -uVar17 & uVar17;
      uVar3 = (ulonglong)uVar11 * 2 + 1;
      lVar14 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar14 == 0; lVar14 = lVar14 + -1) {
        }
      }
      local_res18 = (int)lVar14;
      iVar12 = iVar18 + -1 + local_res18;
      if (iVar4 < iVar12) {
        iVar12 = iVar4;
      }
    }
LAB_14a6ecb8e:
    uVar17 = *(uint *)&(pFVar13->Mappings).Elements.field_0x28;
    TStack_80._padding_ = CONCAT44(uVar11,iVar15);
    TStack_80.CurrentBitIndex = iVar12;
    TStack_80.UnvisitedBitMask = 0xffffffff;
    uVar11 = uVar17 & 0xffffffe0;
    iVar15 = (int)uVar17 >> 5;
    TStack_80._28_4_ = iVar12;
    TStack_80.BaseBitIndex = iVar18;
    uStack_60 = CONCAT44(uStack_94,
                         *(int *)&(pFVar13->Mappings).Elements.field_0x8 -
                         *(int *)&(pFVar13->Mappings).Elements.field_0x34);
    TStack_80.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
    if ((((int)uVar17 < 0) || (iVar4 < (int)uVar17)) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar9)) {
      pcVar8 = (code *)swi(3);
      iVar15 = (*pcVar8)();
      return iVar15;
    }
    uVar5 = *(uint *)&(pFVar13->Mappings).Elements.field_0x28;
    if (uVar17 != uVar5) {
      puVar19 = *(undefined1 **)&(pFVar13->Mappings).Elements.field_0x20;
      if (puVar19 == (undefined1 *)0x0) {
        puVar19 = puVar2;
      }
      uVar17 = -1 << ((byte)uVar17 & 0x1f) & *(uint *)(puVar19 + (longlong)iVar15 * 4);
      while (uVar17 == 0) {
        lVar14 = (longlong)iVar15;
        uVar11 = uVar11 + 0x20;
        iVar15 = iVar15 + 1;
        uVar17 = uVar5;
        if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar15)
        goto LAB_14a6ecca0;
        uVar17 = *(uint *)(puVar19 + lVar14 * 4 + 4);
      }
      uVar3 = (ulonglong)(-uVar17 & uVar17) * 2 + 1;
      lVar14 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar14 == 0; lVar14 = lVar14 + -1) {
        }
      }
      local_res20 = (int)lVar14;
      uVar17 = local_res20 + -1 + uVar11;
      if ((int)uVar5 < (int)uVar17) {
        uVar17 = uVar5;
      }
    }
LAB_14a6ecca0:
    while( true ) {
      if (*(int *)&(pFVar13->Mappings).Elements.field_0x8 -
          *(int *)&(pFVar13->Mappings).Elements.field_0x34 != (int)uStack_60) {
        local_res8[0] = 0;
        `TSparseArray<TSparseSetElement<FPlayerKeyMapping>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if ((TStack_80.CurrentBitIndex == uVar17) &&
         (TStack_80.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) break;
      lVar14 = (longlong)TStack_80.CurrentBitIndex * 0xb0 +
               *(longlong *)&(pFVar13->Mappings).Elements;
      cVar10 = (**(code **)(this->_padding_ + 0x2f8))(this,lVar14,local_res10);
      if (cVar10 != '\0') {
        pFVar7 = (param_2->AllocatorInstance).Data;
        pFVar16 = (FScriptContainerElement *)(lVar14 + 0x30);
        if (*(longlong *)(lVar14 + 0x48) != *(longlong *)(lVar14 + 0x30)) {
          pFVar16 = (FScriptContainerElement *)(lVar14 + 0x48);
        }
        if (((pFVar7 <= pFVar16) && (pFVar16 < pFVar7 + (longlong)*piVar1 * 0x18)) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar9)) {
          pcVar8 = (code *)swi(3);
          iVar15 = (*pcVar8)();
          return iVar15;
        }
        iVar15 = param_2->ArrayNum;
        if (iVar15 == *piVar1) {
          iVar15 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x818,&param_2->AllocatorInstance,piVar1);
        }
        param_2->ArrayNum = iVar15 + 1;
        pFVar7 = (param_2->AllocatorInstance).Data + (longlong)iVar15 * 0x18;
        *(undefined8 *)pFVar7 = *(undefined8 *)pFVar16;
        *(undefined8 *)(pFVar7 + 8) = *(undefined8 *)(pFVar16 + 8);
        lVar14 = *(longlong *)(pFVar16 + 0x10);
        *(longlong *)(pFVar7 + 0x10) = lVar14;
        if (lVar14 != 0) {
          LOCK();
          *(int *)(lVar14 + 8) = *(int *)(lVar14 + 8) + 1;
          UNLOCK();
        }
      }
      TStack_80.UnvisitedBitMask = TStack_80.UnvisitedBitMask & ~TStack_80._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_80);
    }
  }
  return param_2->ArrayNum;
}

// ResetMappingToDefault @ 14a6f43f0

void __thiscall
UEnhancedPlayerMappableKeyProfile::ResetMappingToDefault
          (UEnhancedPlayerMappableKeyProfile *this,FName param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  byte *pbVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  code *pcVar7;
  TReferenceControllerBase<1> *pTVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  FKeyMappingRow *pFVar12;
  longlong lVar13;
  longlong lVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  undefined1 *puVar18;
  int iVar19;
  uint *puVar20;
  undefined1 local_res8 [8];
  undefined4 uStack_5c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_50;
  undefined8 uStack_30;
  
  pFVar12 = TMapBase<FName,FKeyMappingRow,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FKeyMappingRow,0>_>
            ::Find((TMapBase<FName,FKeyMappingRow,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FKeyMappingRow,0>_>
                    *)&this->PlayerMappedKeys,param_1);
  if (pFVar12 != (FKeyMappingRow *)0x0) {
    iVar4 = *(int *)&(pFVar12->Mappings).Elements.field_0x28;
    iVar17 = 0;
    iVar19 = 0;
    uVar10 = 1;
    puVar1 = &(pFVar12->Mappings).Elements.field_0x10;
    iVar11 = 0;
    if (iVar4 != 0) {
      puVar20 = *(uint **)&(pFVar12->Mappings).Elements.field_0x20;
      if (puVar20 == (uint *)0x0) {
        puVar20 = (uint *)puVar1;
      }
      uVar16 = *puVar20;
      while (uVar16 == 0) {
        lVar13 = (longlong)iVar17;
        iVar19 = iVar19 + 0x20;
        iVar17 = iVar17 + 1;
        iVar11 = iVar4;
        if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar17) goto LAB_14a6f44bd;
        uVar16 = puVar20[lVar13 + 1];
      }
      uVar10 = -uVar16 & uVar16;
      uVar2 = (ulonglong)uVar10 * 2 + 1;
      lVar13 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      iVar11 = (int)lVar13 + -1 + iVar19;
      if (iVar4 < iVar11) {
        iVar11 = iVar4;
      }
    }
LAB_14a6f44bd:
    uVar16 = *(uint *)&(pFVar12->Mappings).Elements.field_0x28;
    uVar15 = uVar16 & 0xffffffe0;
    TStack_50._padding_ = CONCAT44(uVar10,iVar17);
    TStack_50.CurrentBitIndex = iVar11;
    TStack_50.UnvisitedBitMask = 0xffffffff;
    iVar17 = (int)uVar16 >> 5;
    TStack_50._28_4_ = iVar11;
    TStack_50.BaseBitIndex = iVar19;
    uStack_30 = CONCAT44(uStack_5c,
                         *(int *)&(pFVar12->Mappings).Elements.field_0x8 -
                         *(int *)&(pFVar12->Mappings).Elements.field_0x34);
    TStack_50.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
    if ((((int)uVar16 < 0) || (iVar4 < (int)uVar16)) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar9)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    uVar10 = *(uint *)&(pFVar12->Mappings).Elements.field_0x28;
    if (uVar16 != uVar10) {
      puVar18 = *(undefined1 **)&(pFVar12->Mappings).Elements.field_0x20;
      if (puVar18 == (undefined1 *)0x0) {
        puVar18 = puVar1;
      }
      uVar16 = -1 << ((byte)uVar16 & 0x1f) & *(uint *)(puVar18 + (longlong)iVar17 * 4);
      while (uVar16 == 0) {
        lVar13 = (longlong)iVar17;
        uVar15 = uVar15 + 0x20;
        iVar17 = iVar17 + 1;
        uVar16 = uVar10;
        if ((int)((uVar10 - 1) + ((int)(uVar10 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar17)
        goto LAB_14a6f45d0;
        uVar16 = *(uint *)(puVar18 + lVar13 * 4 + 4);
      }
      uVar2 = (ulonglong)(-uVar16 & uVar16) * 2 + 1;
      lVar13 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      uVar16 = (int)lVar13 + -1 + uVar15;
      if ((int)uVar10 < (int)uVar16) {
        uVar16 = uVar10;
      }
    }
LAB_14a6f45d0:
    while( true ) {
      if (*(int *)&(pFVar12->Mappings).Elements.field_0x8 -
          *(int *)&(pFVar12->Mappings).Elements.field_0x34 != (int)uStack_30) {
        `TSparseArray<TSparseSetElement<FPlayerKeyMapping>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if ((TStack_50.CurrentBitIndex == uVar16) &&
         (TStack_50.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
      lVar14 = (longlong)TStack_50.CurrentBitIndex * 0xb0;
      lVar13 = *(longlong *)&(pFVar12->Mappings).Elements;
      lVar5 = *(longlong *)(lVar14 + 0x30 + lVar13);
      if (*(longlong *)(lVar14 + 0x48 + lVar13) != lVar5) {
        pbVar3 = (byte *)(lVar14 + 0x29 + lVar13);
        *pbVar3 = *pbVar3 | 1;
      }
      *(longlong *)(lVar14 + 0x48 + lVar13) = lVar5;
      lVar5 = *(longlong *)(lVar14 + 0x40 + lVar13);
      uVar6 = *(undefined8 *)(lVar14 + 0x38 + lVar13);
      if (lVar5 != 0) {
        LOCK();
        *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
        UNLOCK();
      }
      pTVar8 = *(TReferenceControllerBase<1> **)(lVar14 + lVar13 + 0x58);
      *(undefined8 *)(lVar14 + 0x50 + lVar13) = uVar6;
      *(longlong *)(lVar14 + 0x58 + lVar13) = lVar5;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
      TStack_50.UnvisitedBitMask = TStack_50.UnvisitedBitMask & ~TStack_50._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_50);
    }
  }
  return;
}

// ResetToDefault @ 14a6f46e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UEnhancedPlayerMappableKeyProfile::ResetToDefault(UEnhancedPlayerMappableKeyProfile *this)

{
  undefined1 *puVar1;
  TMap<FName,FKeyMappingRow,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FKeyMappingRow,0>_>
  *pTVar2;
  TBitArray<FDefaultBitArrayAllocator> *pTVar3;
  ulonglong uVar4;
  byte *pbVar5;
  undefined8 *puVar6;
  int iVar7;
  longlong lVar8;
  undefined8 uVar9;
  code *pcVar10;
  TMap<FName,FKeyMappingRow,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FKeyMappingRow,0>_>
  *pTVar11;
  bool bVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  int iVar22;
  undefined1 *puVar23;
  TBitArray<FDefaultBitArrayAllocator> *pTVar24;
  int iVar25;
  uint *puVar26;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  int local_res20;
  undefined4 uStack_12c;
  undefined4 uStack_dc;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_d0;
  undefined8 uStack_b0;
  TMap<FName,FKeyMappingRow,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FKeyMappingRow,0>_>
  *local_a8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_a0;
  undefined8 uStack_80;
  undefined8 local_78;
  TReferenceControllerBase<1> *pTStack_70;
  undefined4 local_4c;
  
  puVar1 = &(this->PlayerMappedKeys).field_0x10;
  iVar22 = 0;
  iVar7 = *(int *)&(this->PlayerMappedKeys).field_0x28;
  pTVar2 = &this->PlayerMappedKeys;
  iVar25 = 0;
  uVar13 = 1;
  iVar14 = 0;
  if (iVar7 != 0) {
    puVar26 = *(uint **)&(this->PlayerMappedKeys).field_0x20;
    if (puVar26 == (uint *)0x0) {
      puVar26 = (uint *)puVar1;
    }
    uVar21 = *puVar26;
    while (uVar21 == 0) {
      lVar16 = (longlong)iVar22;
      iVar25 = iVar25 + 0x20;
      iVar22 = iVar22 + 1;
      iVar14 = iVar7;
      if ((int)(iVar7 + -1 + (iVar7 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar22) goto LAB_14a6f4790;
      uVar21 = puVar26[lVar16 + 1];
    }
    uVar13 = -uVar21 & uVar21;
    uVar4 = (ulonglong)uVar13 * 2 + 1;
    lVar16 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar16 == 0; lVar16 = lVar16 + -1) {
      }
    }
    local_res20 = (int)lVar16;
    iVar14 = local_res20 + -1 + iVar25;
    if (iVar7 < iVar14) {
      iVar14 = iVar7;
    }
  }
LAB_14a6f4790:
  uVar21 = *(uint *)&(this->PlayerMappedKeys).field_0x28;
  uVar19 = uVar21 & 0xffffffe0;
  TStack_a0._padding_ = CONCAT44(uVar13,iVar22);
  TStack_a0.CurrentBitIndex = iVar14;
  TStack_a0.UnvisitedBitMask = 0xffffffff;
  iVar22 = (int)uVar21 >> 5;
  TStack_a0._28_4_ = local_4c;
  TStack_a0.BaseBitIndex = iVar25;
  uStack_80 = CONCAT44(uStack_12c,
                       *(int *)&(this->PlayerMappedKeys).field_0x8 -
                       *(int *)&(this->PlayerMappedKeys).field_0x34);
  local_a8 = pTVar2;
  TStack_a0.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar21 < 0) || (iVar7 < (int)uVar21)) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar12)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  uVar13 = *(uint *)&(this->PlayerMappedKeys).field_0x28;
  if (uVar21 != uVar13) {
    puVar23 = *(undefined1 **)&(this->PlayerMappedKeys).field_0x20;
    if (puVar23 == (undefined1 *)0x0) {
      puVar23 = puVar1;
    }
    uVar21 = -1 << ((byte)uVar21 & 0x1f) & *(uint *)(puVar23 + (longlong)iVar22 * 4);
    while (uVar21 == 0) {
      lVar16 = (longlong)iVar22;
      uVar19 = uVar19 + 0x20;
      iVar22 = iVar22 + 1;
      uVar21 = uVar13;
      if ((int)((uVar13 - 1) + ((int)(uVar13 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar22)
      goto LAB_14a6f48b0;
      uVar21 = *(uint *)(puVar23 + lVar16 * 4 + 4);
    }
    uVar4 = (ulonglong)(-uVar21 & uVar21) * 2 + 1;
    lVar16 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar16 == 0; lVar16 = lVar16 + -1) {
      }
    }
    uVar21 = (int)lVar16 + -1 + uVar19;
    if ((int)uVar13 < (int)uVar21) {
      uVar21 = uVar13;
    }
  }
LAB_14a6f48b0:
  do {
    pTVar11 = local_a8;
    if (*(int *)&local_a8->field_0x8 - *(int *)&local_a8->field_0x34 != (int)uStack_80) {
      local_res10[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FName,FKeyMappingRow>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (((TStack_a0.CurrentBitIndex == uVar21) &&
        (TStack_a0.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar11 == pTVar2))
    {
      if (5 < (byte)LogEnhancedInput._0_1_) {
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogEnhancedInput);
      }
      return;
    }
    iVar22 = 0;
    iVar25 = 0;
    lVar16 = (longlong)TStack_a0.CurrentBitIndex * 0x60 + *(longlong *)pTVar11;
    uVar13 = 1;
    iVar7 = *(int *)(lVar16 + 0x30);
    pTVar3 = (TBitArray<FDefaultBitArrayAllocator> *)(lVar16 + 0x18);
    iVar15 = 0;
    if (iVar7 != 0) {
      pTVar24 = pTVar3;
      if (*(TBitArray<FDefaultBitArrayAllocator> **)(lVar16 + 0x28) !=
          (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
        pTVar24 = *(TBitArray<FDefaultBitArrayAllocator> **)(lVar16 + 0x28);
      }
      uVar19 = *(uint *)(pTVar24->AllocatorInstance).InlineData;
      while (uVar19 == 0) {
        lVar17 = (longlong)iVar22;
        iVar25 = iVar25 + 0x20;
        iVar22 = iVar22 + 1;
        iVar15 = iVar7;
        if ((int)(iVar7 + -1 + (iVar7 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar22) goto LAB_14a6f497e;
        uVar19 = *(uint *)((pTVar24->AllocatorInstance).InlineData + lVar17 * 4 + 4);
      }
      uVar13 = -uVar19 & uVar19;
      uVar4 = (ulonglong)uVar13 * 2 + 1;
      lVar17 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar17 == 0; lVar17 = lVar17 + -1) {
        }
      }
      iVar15 = iVar25 + -1 + (int)lVar17;
      if (iVar7 < iVar15) {
        iVar15 = iVar7;
      }
    }
LAB_14a6f497e:
    uVar19 = *(uint *)(lVar16 + 0x30);
    uVar20 = uVar19 & 0xffffffe0;
    TStack_d0._padding_ = CONCAT44(uVar13,iVar22);
    TStack_d0.CurrentBitIndex = iVar15;
    TStack_d0.UnvisitedBitMask = 0xffffffff;
    iVar22 = (int)uVar19 >> 5;
    TStack_d0._28_4_ = iVar14;
    TStack_d0.BaseBitIndex = iVar25;
    uStack_b0 = CONCAT44(uStack_dc,*(int *)(lVar16 + 0x10) - *(int *)(lVar16 + 0x3c));
    TStack_d0.Array = pTVar3;
    if ((((int)uVar19 < 0) || (iVar7 < (int)uVar19)) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("StartIndex >= 0 && StartIndex <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x7af,L""), bVar12)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    uVar13 = *(uint *)(lVar16 + 0x30);
    if (uVar19 != uVar13) {
      pTVar24 = pTVar3;
      if (*(TBitArray<FDefaultBitArrayAllocator> **)(lVar16 + 0x28) !=
          (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
        pTVar24 = *(TBitArray<FDefaultBitArrayAllocator> **)(lVar16 + 0x28);
      }
      uVar19 = -1 << ((byte)uVar19 & 0x1f) &
               *(uint *)((pTVar24->AllocatorInstance).InlineData + (longlong)iVar22 * 4);
      while (uVar19 == 0) {
        lVar17 = (longlong)iVar22;
        uVar20 = uVar20 + 0x20;
        iVar22 = iVar22 + 1;
        uVar19 = uVar13;
        if ((int)((uVar13 - 1) + ((int)(uVar13 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar22)
        goto LAB_14a6f4a81;
        uVar19 = *(uint *)((pTVar24->AllocatorInstance).InlineData + lVar17 * 4 + 4);
      }
      uVar4 = (ulonglong)(-uVar19 & uVar19) * 2 + 1;
      lVar17 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar17 == 0; lVar17 = lVar17 + -1) {
        }
      }
      uVar19 = (int)lVar17 + -1 + uVar20;
      if ((int)uVar13 < (int)uVar19) {
        uVar19 = uVar13;
      }
    }
LAB_14a6f4a81:
    while( true ) {
      if (*(int *)(lVar16 + 0x10) - *(int *)(lVar16 + 0x3c) != (int)uStack_b0) {
        local_res18[0] = 0;
        `TSparseArray<TSparseSetElement<FPlayerKeyMapping>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
      }
      if ((TStack_d0.CurrentBitIndex == uVar19) && (TStack_d0.Array == pTVar3)) break;
      lVar18 = (longlong)TStack_d0.CurrentBitIndex * 0xb0;
      lVar17 = *(longlong *)(lVar16 + 8);
      lVar8 = *(longlong *)(lVar18 + 0x30 + lVar17);
      if (*(longlong *)(lVar18 + 0x48 + lVar17) != lVar8) {
        pbVar5 = (byte *)(lVar18 + 0x29 + lVar17);
        *pbVar5 = *pbVar5 | 1;
      }
      *(longlong *)(lVar18 + 0x48 + lVar17) = lVar8;
      lVar8 = *(longlong *)(lVar18 + 0x40 + lVar17);
      uVar9 = *(undefined8 *)(lVar18 + 0x38 + lVar17);
      if (lVar8 != 0) {
        LOCK();
        *(int *)(lVar8 + 8) = *(int *)(lVar8 + 8) + 1;
        UNLOCK();
      }
      puVar6 = (undefined8 *)(lVar18 + 0x50 + lVar17);
      local_78 = *puVar6;
      pTStack_70 = (TReferenceControllerBase<1> *)puVar6[1];
      *(undefined8 *)(lVar18 + 0x50 + lVar17) = uVar9;
      *(longlong *)(lVar18 + 0x58 + lVar17) = lVar8;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pTStack_70);
      TStack_d0.UnvisitedBitMask = TStack_d0.UnvisitedBitMask & ~TStack_d0._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_d0);
    }
    TStack_a0.UnvisitedBitMask = TStack_a0.UnvisitedBitMask & ~TStack_a0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_a0);
  } while( true );
}

// Serialize @ 14a6f5fe0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UEnhancedPlayerMappableKeyProfile::Serialize
          (UEnhancedPlayerMappableKeyProfile *this,FArchive *param_1)

{
  FStructuredArchiveFromArchive *this_00;
  FStructuredArchiveSlot FVar1;
  undefined1 auStack_1c8 [40];
  FStructuredArchiveFromArchive FStack_1a0;
  ulonglong uStack_10;
  
  uStack_10 = __security_cookie.value ^ (ulonglong)auStack_1c8;
  this_00 = FStructuredArchiveFromArchive::FStructuredArchiveFromArchive(&FStack_1a0,param_1);
  FVar1 = FStructuredArchiveFromArchive::GetSlot(this_00);
  UObject::Serialize((UObject *)this,*(FStructuredArchiveRecord *)FVar1);
  FStructuredArchiveFromArchive::~FStructuredArchiveFromArchive(&FStack_1a0);
  return;
}

// Serialize @ 14a6f5ff0

void __thiscall
UEnhancedPlayerMappableKeyProfile::Serialize
          (UEnhancedPlayerMappableKeyProfile *this,FStructuredArchiveRecord param_1)

{
  FArchive *pFVar1;
  FSlotBase local_res10 [3];
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  pFVar1 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  UObject::Serialize((UObject *)this,pFVar1);
  return;
}

// SetDisplayName @ 14a6f63c0

void __thiscall
UEnhancedPlayerMappableKeyProfile::SetDisplayName
          (UEnhancedPlayerMappableKeyProfile *this,FText *param_1)

{
  ITextData *pIVar1;
  ITextData *pIVar2;
  undefined1 local_res8 [8];
  
  pIVar1 = (param_1->TextData).Reference;
  pIVar2 = (this->DisplayName).TextData.Reference;
  if (pIVar2 != pIVar1) {
    (this->DisplayName).TextData.Reference = pIVar1;
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
    }
    if (pIVar2 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
    }
    (this->DisplayName).Flags = param_1->Flags;
    return;
  }
  (this->DisplayName).Flags = param_1->Flags;
  return;
}

// StaticRegisterNativesUEnhancedPlayerMappableKeyProfile @ 14a6fb550

void __cdecl
UEnhancedPlayerMappableKeyProfile::StaticRegisterNativesUEnhancedPlayerMappableKeyProfile(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0xd;
  local_18.DataPtr = Z_Construct_UClass_UEnhancedPlayerMappableKeyProfile_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// ToString @ 14a6fcb70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FString * __thiscall
UEnhancedPlayerMappableKeyProfile::ToString
          (UEnhancedPlayerMappableKeyProfile *this,FString *__return_storage_ptr__)

{
  FName FVar1;
  FName *pFVar2;
  ulonglong uVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  TMap<FName,FKeyMappingRow,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FKeyMappingRow,0>_>
  *pTVar6;
  bool bVar7;
  longlong lVar8;
  FString *pFVar9;
  void *pvVar10;
  undefined1 *puVar11;
  FName FVar12;
  ulong64 uVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint *puVar19;
  TBitArray<FDefaultBitArrayAllocator> *pTVar20;
  FName *pFVar21;
  TMap<FName,FKeyMappingRow,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FKeyMappingRow,0>_>
  *pTVar22;
  undefined1 auStack_9b8 [32];
  undefined1 local_998;
  undefined1 local_997 [3];
  uint local_994;
  TMap<FName,FKeyMappingRow,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FKeyMappingRow,0>_>
  *local_990;
  int iStack_988;
  uint uStack_984;
  undefined1 *local_980;
  undefined4 uStack_978;
  int iStack_974;
  int local_970;
  undefined4 uStack_96c;
  int iStack_968;
  undefined4 uStack_964;
  int local_960;
  int local_95c;
  int local_958;
  int local_954;
  TBitArray<FDefaultBitArrayAllocator> *local_950;
  TMap<FName,FKeyMappingRow,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FKeyMappingRow,0>_>
  *local_948;
  FString *local_940;
  FName *local_938;
  int iStack_930;
  uint uStack_92c;
  FName local_928;
  undefined4 uStack_920;
  uint uStack_91c;
  int local_918;
  int iStack_914;
  int iStack_910;
  undefined4 uStack_90c;
  FName *local_908;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_900;
  undefined8 uStack_8e0;
  TMap<FName,FKeyMappingRow,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FKeyMappingRow,0>_>
  *local_8d8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_8d0;
  undefined8 uStack_8b0;
  FString local_8a8;
  FString local_898 [2];
  undefined4 local_86c;
  TStringBuilderBase<wchar_t> local_868;
  wchar_t local_848 [1024];
  ulonglong local_48 [2];
  
  local_48[0] = __security_cookie.value ^ (ulonglong)auStack_9b8;
  local_868.Base = local_848;
  local_868.CurPos = local_848;
  local_868.End = (wchar_t *)local_48;
  local_868.bIsDynamic = false;
  local_868.bIsExternal = false;
  local_940 = __return_storage_ptr__;
  TStringBuilderBase<wchar_t>::AppendfImpl(&local_868,L"Key Profile \'%s\' has %d key mappings\n");
  pTVar20 = (TBitArray<FDefaultBitArrayAllocator> *)&(this->PlayerMappedKeys).field_0x10;
  iVar15 = *(int *)&(this->PlayerMappedKeys).field_0x28;
  pTVar22 = &this->PlayerMappedKeys;
  iStack_988 = 0;
  uStack_984 = 1;
  local_970 = 0;
  iStack_974 = 0;
  if (iVar15 != 0) {
    puVar19 = *(uint **)&(this->PlayerMappedKeys).field_0x20;
    if (puVar19 == (uint *)0x0) {
      puVar19 = (uint *)pTVar20;
    }
    uVar18 = *puVar19;
    local_970 = 0;
    while (uVar18 == 0) {
      lVar8 = (longlong)iStack_988;
      local_970 = local_970 + 0x20;
      iStack_988 = iStack_988 + 1;
      iStack_974 = iVar15;
      if ((int)((iVar15 + -1 >> 0x1f & 0x1fU) + iVar15 + -1) >> 5 < iStack_988) goto LAB_14a6fcc8f;
      uVar18 = puVar19[lVar8 + 1];
    }
    uStack_984 = -uVar18 & uVar18;
    uVar3 = (ulonglong)uStack_984 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_960 = (int)lVar8;
    iStack_974 = local_970 + -1 + local_960;
    if (iVar15 < iStack_974) {
      iStack_974 = iVar15;
    }
  }
LAB_14a6fcc8f:
  uVar18 = *(uint *)&(this->PlayerMappedKeys).field_0x28;
  uStack_96c = local_86c;
  iStack_968 = *(int *)&(this->PlayerMappedKeys).field_0x8 -
               *(int *)&(this->PlayerMappedKeys).field_0x34;
  uVar16 = uVar18 & 0xffffffe0;
  TStack_8d0._padding_ = CONCAT44(uStack_984,iStack_988);
  uStack_978 = 0xffffffff;
  TStack_8d0.CurrentBitIndex = iStack_974;
  TStack_8d0.UnvisitedBitMask = 0xffffffff;
  iVar14 = (int)uVar18 >> 5;
  TStack_8d0._28_4_ = local_86c;
  TStack_8d0.BaseBitIndex = local_970;
  uStack_8b0 = CONCAT44(uStack_964,iStack_968);
  local_994 = uVar18;
  local_990 = pTVar22;
  local_980 = (undefined1 *)pTVar20;
  local_950 = pTVar20;
  local_948 = pTVar22;
  local_8d8 = pTVar22;
  TStack_8d0.Array = pTVar20;
  if ((((int)uVar18 < 0) || (iVar15 < (int)uVar18)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    pFVar9 = (FString *)(*pcVar5)();
    return pFVar9;
  }
  uVar17 = *(uint *)&(this->PlayerMappedKeys).field_0x28;
  if (uVar18 != uVar17) {
    puVar11 = *(undefined1 **)&(this->PlayerMappedKeys).field_0x20;
    if (puVar11 == (undefined1 *)0x0) {
      puVar11 = (undefined1 *)pTVar20;
    }
    uVar18 = -1 << ((byte)uVar18 & 0x1f) & *(uint *)(puVar11 + (longlong)iVar14 * 4);
    while (uVar18 == 0) {
      lVar8 = (longlong)iVar14;
      uVar16 = uVar16 + 0x20;
      iVar14 = iVar14 + 1;
      uVar18 = uVar17;
      local_994 = uVar17;
      if ((int)(((int)(uVar17 - 1) >> 0x1f & 0x1fU) + (uVar17 - 1)) >> 5 < iVar14)
      goto LAB_14a6fcdb1;
      uVar18 = *(uint *)(puVar11 + lVar8 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar18 & uVar18) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_95c = (int)lVar8;
    uVar18 = local_95c + -1 + uVar16;
    local_994 = uVar18;
    if ((int)uVar17 < (int)uVar18) {
      uVar18 = uVar17;
      local_994 = uVar17;
    }
  }
LAB_14a6fcdb1:
  do {
    pTVar6 = local_8d8;
    if (*(int *)&local_8d8->field_0x8 - *(int *)&local_8d8->field_0x34 != (int)uStack_8b0) {
      local_998 = 0;
      `TSparseArray<TSparseSetElement<TTuple<FName,FKeyMappingRow>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_998);
    }
    if (((TStack_8d0.CurrentBitIndex == uVar18) && (TStack_8d0.Array == pTVar20)) &&
       (pTVar6 == pTVar22)) {
      if (local_868.End < local_868.CurPos + 1) {
        TStringBuilderBase<wchar_t>::Extend(&local_868,1);
      }
      *local_868.CurPos = L'\0';
      ::FString::FString(local_940,local_868.Base);
      TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_868);
      return local_940;
    }
    pFVar21 = (FName *)((longlong)TStack_8d0.CurrentBitIndex * 0x60 + *(longlong *)pTVar6);
    pFVar9 = ::FName::ToString(pFVar21,&local_8a8);
    iVar14 = (pFVar9->Data).ArrayNum;
    pFVar4 = (pFVar9->Data).AllocatorInstance.Data;
    iVar15 = iVar14 + -1;
    if (iVar14 == 0) {
      iVar15 = 0;
    }
    uVar13 = (ulong64)iVar15;
    if (local_868.End < local_868.CurPos + uVar13) {
      TStringBuilderBase<wchar_t>::Extend(&local_868,uVar13);
    }
    if (iVar15 != 0) {
      pvVar10 = FGenericPlatformString::Memcpy(local_868.CurPos,pFVar4,uVar13 * 2);
      local_868.CurPos = (wchar_t *)((longlong)pvVar10 + uVar13 * 2);
    }
    if (local_8a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_8a8.Data.AllocatorInstance.Data);
    }
    uVar18 = pFVar21[6].ComparisonIndex.Value;
    FVar1 = (FName)(pFVar21 + 3);
    pFVar2 = pFVar21 + 1;
    iStack_930 = 0;
    uStack_92c = 1;
    local_918 = 0;
    uStack_91c = 0;
    if (uVar18 != 0) {
      FVar12 = FVar1;
      if (pFVar21[5] != (FName)0x0) {
        FVar12 = pFVar21[5];
      }
      uVar16 = *(uint *)FVar12;
      local_918 = 0;
      while (uVar16 == 0) {
        lVar8 = (longlong)iStack_930;
        local_918 = local_918 + 0x20;
        iStack_930 = iStack_930 + 1;
        uStack_91c = uVar18;
        if ((int)(((int)(uVar18 - 1) >> 0x1f & 0x1fU) + (uVar18 - 1)) >> 5 < iStack_930)
        goto LAB_14a6fcede;
        uVar16 = ((uint *)((longlong)FVar12 + 4))[lVar8];
      }
      uStack_92c = -uVar16 & uVar16;
      uVar3 = (ulonglong)uStack_92c * 2 + 1;
      lVar8 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      local_958 = (int)lVar8;
      uStack_91c = local_918 + -1 + local_958;
      if ((int)uVar18 < (int)uStack_91c) {
        uStack_91c = uVar18;
      }
    }
LAB_14a6fcede:
    iStack_914 = iStack_974;
    iStack_910 = pFVar21[2].ComparisonIndex.Value - pFVar21[7].Number;
    uVar16 = pFVar21[6].ComparisonIndex.Value;
    uVar17 = uVar16 & 0xffffffe0;
    TStack_900._padding_ = CONCAT44(uStack_92c,iStack_930);
    uStack_920 = 0xffffffff;
    TStack_900.CurrentBitIndex = uStack_91c;
    TStack_900.UnvisitedBitMask = 0xffffffff;
    iVar15 = (int)uVar16 >> 5;
    TStack_900._28_4_ = iStack_974;
    TStack_900.BaseBitIndex = local_918;
    uStack_8e0 = CONCAT44(uStack_90c,iStack_910);
    local_938 = pFVar2;
    local_928 = FVar1;
    local_908 = pFVar2;
    TStack_900.Array = (TBitArray<FDefaultBitArrayAllocator> *)FVar1;
    if ((((int)uVar16 < 0) || ((int)uVar18 < (int)uVar16)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      pFVar9 = (FString *)(*pcVar5)();
      return pFVar9;
    }
    uVar18 = pFVar21[6].ComparisonIndex.Value;
    if (uVar16 != uVar18) {
      FVar12 = FVar1;
      if (pFVar21[5] != (FName)0x0) {
        FVar12 = pFVar21[5];
      }
      uVar16 = -1 << ((byte)uVar16 & 0x1f) & *(uint *)((longlong)FVar12 + (longlong)iVar15 * 4);
      while (uVar16 == 0) {
        lVar8 = (longlong)iVar15;
        uVar17 = uVar17 + 0x20;
        iVar15 = iVar15 + 1;
        uVar16 = uVar18;
        if ((int)(((int)(uVar18 - 1) >> 0x1f & 0x1fU) + (uVar18 - 1)) >> 5 < iVar15)
        goto LAB_14a6fcfe0;
        uVar16 = ((uint *)((longlong)FVar12 + 4))[lVar8];
      }
      uVar3 = (ulonglong)(-uVar16 & uVar16) * 2 + 1;
      lVar8 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      local_954 = (int)lVar8;
      uVar16 = local_954 + -1 + uVar17;
      if ((int)uVar18 < (int)uVar16) {
        uVar16 = uVar18;
      }
    }
LAB_14a6fcfe0:
    while( true ) {
      pFVar21 = local_908;
      if (local_908[1].ComparisonIndex.Value - local_908[6].Number != (int)uStack_8e0) {
        local_997[0] = 0;
        `TSparseArray<TSparseSetElement<FPlayerKeyMapping>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_997);
      }
      if (((TStack_900.CurrentBitIndex == uVar16) && ((FName)TStack_900.Array == FVar1)) &&
         (pFVar21 == pFVar2)) break;
      pFVar9 = FPlayerKeyMapping::ToString
                         ((FPlayerKeyMapping *)
                          ((longlong)TStack_900.CurrentBitIndex * 0xb0 + (longlong)*pFVar21),
                          local_898);
      iVar14 = (pFVar9->Data).ArrayNum;
      pFVar4 = (pFVar9->Data).AllocatorInstance.Data;
      iVar15 = iVar14 + -1;
      if (iVar14 == 0) {
        iVar15 = 0;
      }
      uVar13 = (ulong64)iVar15;
      if (local_868.End < local_868.CurPos + uVar13) {
        TStringBuilderBase<wchar_t>::Extend(&local_868,uVar13);
      }
      if (iVar15 != 0) {
        pvVar10 = FGenericPlatformString::Memcpy(local_868.CurPos,pFVar4,uVar13 * 2);
        local_868.CurPos = (wchar_t *)((longlong)pvVar10 + uVar13 * 2);
      }
      if (local_898[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_898[0].Data.AllocatorInstance.Data);
      }
      if (local_868.End < local_868.CurPos + 2) {
        TStringBuilderBase<wchar_t>::Extend(&local_868,2);
      }
      local_868.CurPos = FGenericPlatformString::Convert<char,wchar_t>(local_868.CurPos,2,"\n\t",2);
      TStack_900.UnvisitedBitMask = TStack_900.UnvisitedBitMask & ~TStack_900._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_900);
    }
    TStack_8d0.UnvisitedBitMask = TStack_8d0.UnvisitedBitMask & ~TStack_8d0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_8d0);
    pTVar20 = local_950;
    pTVar22 = local_948;
    uVar18 = local_994;
  } while( true );
}

// UnEquipProfile @ 14a6fd8b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UEnhancedPlayerMappableKeyProfile::UnEquipProfile(UEnhancedPlayerMappableKeyProfile *this)

{
  if (5 < (byte)LogEnhancedInput._0_1_) {
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogEnhancedInput);
    return;
  }
  return;
}

// execDoesMappingPassQueryOptions @ 14a7040a0

void __cdecl
UEnhancedPlayerMappableKeyProfile::execDoesMappingPassQueryOptions
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 uVar2;
  uchar *puVar3;
  uchar *puVar4;
  uchar local_e8 [8];
  FName local_e0;
  FKeyDetails *local_d8;
  TReferenceControllerBase<1> *local_d0;
  undefined1 local_c8;
  byte local_c7;
  undefined1 local_c6;
  undefined4 local_c4;
  undefined1 local_b8 [176];
  
  FPlayerKeyMapping::FPlayerKeyMapping((FPlayerKeyMapping *)local_b8);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_b8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_b8);
  }
  local_e8[0] = '\0';
  local_e8[1] = '\0';
  local_e8[2] = '\0';
  local_e8[3] = '\0';
  local_e8[4] = '\0';
  local_e8[5] = '\0';
  local_e8[6] = '\0';
  local_e8[7] = '\0';
  puVar3 = local_b8;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar3 = param_2->MostRecentPropertyAddress;
  }
  local_e0 = EKeys::Invalid.KeyName;
  local_d8 = EKeys::Invalid.KeyDetails.Object;
  local_d0 = EKeys::Invalid.KeyDetails.SharedReferenceCount.ReferenceController;
  if (EKeys::Invalid.KeyDetails.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (EKeys::Invalid.KeyDetails.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(EKeys::Invalid.KeyDetails.SharedReferenceCount.ReferenceController)->
               SharedReferenceCount + 1);
    UNLOCK();
  }
  local_c8 = 7;
  local_c7 = local_c7 & 0xfd | 1;
  local_c6 = 0;
  local_c4 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_e8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_e8);
  }
  puVar4 = local_e8;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar4 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar2 = (**(code **)(*(longlong *)param_1 + 0x2f8))(param_1,puVar3,puVar4);
  *(undefined1 *)param_3 = uVar2;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_d0);
  if ((void *)local_b8._152_8_ != (void *)0x0) {
    FMemory::Free((void *)local_b8._152_8_);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_b8._88_8_);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_b8._64_8_);
  if ((ITextData *)local_b8._24_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_b8._24_8_ + 0x10))();
  }
  if ((ITextData *)local_b8._8_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_b8._8_8_ + 0x10))();
  }
  return;
}

// execDumpProfileToLog @ 14a704260

void __cdecl
UEnhancedPlayerMappableKeyProfile::execDumpProfileToLog
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
                    /* WARNING: Could not recover jumptable at 0x00014a704278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x2b8))();
  return;
}

// execGetMappedKeysInRow @ 14a704c50

void __cdecl
UEnhancedPlayerMappableKeyProfile::execGetMappedKeysInRow
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 uVar2;
  FKey **ppFVar3;
  undefined8 local_res8;
  FKey *local_18;
  undefined8 local_10;
  
  local_res8 = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  local_18 = (FKey *)0x0;
  local_10 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  ppFVar3 = &local_18;
  if ((FKey **)param_2->MostRecentPropertyAddress != (FKey **)0x0) {
    ppFVar3 = (FKey **)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar2 = (**(code **)(*(longlong *)param_1 + 0x2c8))(param_1,local_res8,ppFVar3);
  *(undefined4 *)param_3 = uVar2;
  DestructItems<FKey,int>(local_18,(int)local_10);
  if (local_18 != (FKey *)0x0) {
    FMemory::Free(local_18);
  }
  return;
}

// execGetMappingNamesForKey @ 14a705120

void __cdecl
UEnhancedPlayerMappableKeyProfile::execGetMappingNamesForKey
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 uVar2;
  uchar *puVar3;
  void **ppvVar4;
  void *local_38;
  undefined8 local_30;
  uchar local_28 [16];
  TReferenceControllerBase<1> *pTStack_18;
  
  local_28[0] = '\0';
  local_28[1] = '\0';
  local_28[2] = '\0';
  local_28[3] = '\0';
  local_28[4] = '\0';
  local_28[5] = '\0';
  local_28[6] = '\0';
  local_28[7] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  local_28[8] = '\0';
  local_28[9] = '\0';
  local_28[10] = '\0';
  local_28[0xb] = '\0';
  local_28[0xc] = '\0';
  local_28[0xd] = '\0';
  local_28[0xe] = '\0';
  local_28[0xf] = '\0';
  pTStack_18 = (TReferenceControllerBase<1> *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_28);
  }
  local_38 = (void *)0x0;
  local_30 = 0;
  puVar3 = local_28;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar3 = param_2->MostRecentPropertyAddress;
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  ppvVar4 = &local_38;
  if ((void **)param_2->MostRecentPropertyAddress != (void **)0x0) {
    ppvVar4 = (void **)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar2 = (**(code **)(*(longlong *)param_1 + 0x2e0))(param_1,puVar3,ppvVar4);
  *(undefined4 *)param_3 = uVar2;
  if (local_38 != (void *)0x0) {
    FMemory::Free(local_38);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_18);
  return;
}

// execGetPlayerMappingRows @ 14a705490

void __cdecl
UEnhancedPlayerMappableKeyProfile::execGetPlayerMappingRows
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (param_3 != &param_1[2].field_0x8) {
    UE::Core::Private::
    CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
              ((ForElementType<FSetElementId> *)((longlong)param_3 + 0x38),
               (int *)((longlong)param_3 + 0x48),
               (ForElementType<FSetElementId> *)&param_1[3].field_0x18,*(int *)(param_1 + 4));
    TSparseArray<TSparseSetElement<TTuple<FName,FKeyMappingRow>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::operator=(param_3,(TSparseArray<TSparseSetElement<TTuple<FName,FKeyMappingRow>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)&param_1[2].field_0x8);
  }
  return;
}

// execGetProfileDisplayName @ 14a7054f0

void __cdecl
UEnhancedPlayerMappableKeyProfile::execGetProfileDisplayName
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined1 local_res8 [8];
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  plVar1 = *(longlong **)&param_1[1].field_0x20;
  plVar2 = *(longlong **)param_3;
  if (plVar2 != plVar1) {
    *(longlong **)param_3 = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))(plVar1,local_res8);
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
    *(undefined4 *)((longlong)param_3 + 8) = *(undefined4 *)(param_1 + 2);
    return;
  }
  *(undefined4 *)((longlong)param_3 + 8) = *(undefined4 *)(param_1 + 2);
  return;
}

// execGetProfileIdString @ 14a705580

void __cdecl
UEnhancedPlayerMappableKeyProfile::execGetProfileIdString
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  ::FString::operator=(param_3,(FString *)&param_1[1].field_0x8);
  return;
}

// execK2_FindKeyMapping @ 14a7062d0

void __cdecl
UEnhancedPlayerMappableKeyProfile::execK2_FindKeyMapping
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FPlayerKeyMapping *pFVar2;
  uchar *puVar3;
  FPlayerKeyMapping *pFVar4;
  FPlayerKeyMapping *this;
  uchar local_108 [16];
  FName local_f8;
  FKeyDetails *local_f0;
  TReferenceControllerBase<1> *local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  void *local_d0;
  undefined8 local_c8;
  byte local_c0;
  undefined1 local_b8 [176];
  
  FPlayerKeyMapping::FPlayerKeyMapping((FPlayerKeyMapping *)local_b8);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_b8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_b8);
  }
  local_108[0] = '\0';
  local_108[1] = '\0';
  local_108[2] = '\0';
  local_108[3] = '\0';
  local_108[4] = '\0';
  local_108[5] = '\0';
  local_108[6] = '\0';
  local_108[7] = '\0';
  local_108[8] = 7;
  this = (FPlayerKeyMapping *)local_b8;
  if ((FPlayerKeyMapping *)param_2->MostRecentPropertyAddress != (FPlayerKeyMapping *)0x0) {
    this = (FPlayerKeyMapping *)param_2->MostRecentPropertyAddress;
  }
  local_f8 = EKeys::Invalid.KeyName;
  local_f0 = EKeys::Invalid.KeyDetails.Object;
  local_e8 = EKeys::Invalid.KeyDetails.SharedReferenceCount.ReferenceController;
  if (EKeys::Invalid.KeyDetails.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (EKeys::Invalid.KeyDetails.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(EKeys::Invalid.KeyDetails.SharedReferenceCount.ReferenceController)->
               SharedReferenceCount + 1);
    UNLOCK();
  }
  local_e0 = 0;
  local_c0 = local_c0 & 0xfd | 1;
  local_d8 = 0;
  local_d0 = (void *)0x0;
  local_c8 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_108,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_108);
  }
  puVar3 = local_108;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar3 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar2 = (FPlayerKeyMapping *)(**(code **)(*(longlong *)param_1 + 0x2e8))(param_1,puVar3);
  pFVar4 = &FPlayerKeyMapping::InvalidMapping;
  if (pFVar2 != (FPlayerKeyMapping *)0x0) {
    pFVar4 = pFVar2;
  }
  FPlayerKeyMapping::operator=(this,pFVar4);
  if (local_d0 != (void *)0x0) {
    FMemory::Free(local_d0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_e8);
  if ((void *)local_b8._152_8_ != (void *)0x0) {
    FMemory::Free((void *)local_b8._152_8_);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_b8._88_8_);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_b8._64_8_);
  if ((ITextData *)local_b8._24_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_b8._24_8_ + 0x10))();
  }
  if ((ITextData *)local_b8._8_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_b8._8_8_ + 0x10))();
  }
  return;
}

// execQueryPlayerMappedKeys @ 14a707130

void __cdecl
UEnhancedPlayerMappableKeyProfile::execQueryPlayerMappedKeys
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 uVar2;
  uchar *puVar3;
  FKey **ppFVar4;
  FKey *local_48;
  undefined8 local_40;
  uchar local_38 [8];
  FName local_30;
  FKeyDetails *local_28;
  TReferenceControllerBase<1> *local_20;
  undefined1 local_18;
  byte local_17;
  undefined1 local_16;
  undefined4 local_14;
  
  local_30 = EKeys::Invalid.KeyName;
  local_28 = EKeys::Invalid.KeyDetails.Object;
  local_38[0] = '\0';
  local_38[1] = '\0';
  local_38[2] = '\0';
  local_38[3] = '\0';
  local_38[4] = '\0';
  local_38[5] = '\0';
  local_38[6] = '\0';
  local_38[7] = '\0';
  local_20 = EKeys::Invalid.KeyDetails.SharedReferenceCount.ReferenceController;
  if (EKeys::Invalid.KeyDetails.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (EKeys::Invalid.KeyDetails.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(EKeys::Invalid.KeyDetails.SharedReferenceCount.ReferenceController)->
               SharedReferenceCount + 1);
    UNLOCK();
  }
  local_18 = 7;
  local_17 = local_17 & 0xfd | 1;
  local_16 = 0;
  local_14 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_38);
  }
  local_48 = (FKey *)0x0;
  local_40 = 0;
  puVar3 = local_38;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar3 = param_2->MostRecentPropertyAddress;
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  ppFVar4 = &local_48;
  if ((FKey **)param_2->MostRecentPropertyAddress != (FKey **)0x0) {
    ppFVar4 = (FKey **)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar2 = (**(code **)(*(longlong *)param_1 + 0x2d8))(param_1,puVar3,ppFVar4);
  *(undefined4 *)param_3 = uVar2;
  DestructItems<FKey,int>(local_48,(int)local_40);
  if (local_48 != (FKey *)0x0) {
    FMemory::Free(local_48);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_20);
  return;
}

// execResetMappingToDefault @ 14a707f30

void __cdecl
UEnhancedPlayerMappableKeyProfile::execResetMappingToDefault
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FName local_res10;
  
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  ResetMappingToDefault((UEnhancedPlayerMappableKeyProfile *)param_1,local_res10);
  return;
}

// execResetToDefault @ 14a707fc0

void __cdecl
UEnhancedPlayerMappableKeyProfile::execResetToDefault
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
                    /* WARNING: Could not recover jumptable at 0x00014a707fd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x2f0))();
  return;
}

// execSetDisplayName @ 14a708100

void __cdecl
UEnhancedPlayerMappableKeyProfile::execSetDisplayName
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FText *pFVar2;
  FText local_18;
  
  FText::FText(&local_18);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  pFVar2 = &local_18;
  if ((FText *)param_2->MostRecentPropertyAddress != (FText *)0x0) {
    pFVar2 = (FText *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0x2b0))(param_1,pFVar2);
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  return;
}

// execToString @ 14a708820

void __cdecl
UEnhancedPlayerMappableKeyProfile::execToString(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined8 *puVar1;
  void *local_18 [2];
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  puVar1 = (undefined8 *)(**(code **)(*(longlong *)param_1 + 0x2c0))(param_1,local_18);
  if (param_3 != puVar1) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(undefined8 *)param_3 = *puVar1;
    *puVar1 = 0;
    *(undefined4 *)((longlong)param_3 + 8) = *(undefined4 *)(puVar1 + 1);
    *(undefined4 *)((longlong)param_3 + 0xc) = *(undefined4 *)((longlong)puVar1 + 0xc);
    puVar1[1] = 0;
  }
  if (local_18[0] != (void *)0x0) {
    FMemory::Free(local_18[0]);
  }
  return;
}

