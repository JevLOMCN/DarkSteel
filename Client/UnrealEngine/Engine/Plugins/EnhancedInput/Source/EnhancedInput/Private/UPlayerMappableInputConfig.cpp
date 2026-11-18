// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: EnhancedInput
// Functions: 22

// StaticClass @ 14a6b7090

UClass * __cdecl UPlayerMappableInputConfig::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPlayerMappableInputConfig.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/EnhancedInput",L"PlayerMappableInputConfig",
               &Z_Registration_Info_UClass_UPlayerMappableInputConfig.InnerSingleton,
               StaticRegisterNativesUPlayerMappableInputConfig,0xa8,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UPlayerMappableInputConfig>,
               InternalVTableHelperCtorCaller<UPlayerMappableInputConfig>,local_res8,
               UPrimaryDataAsset::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPlayerMappableInputConfig.InnerSingleton;
}

// UPlayerMappableInputConfig @ 14a6cdc20

UPlayerMappableInputConfig * __thiscall
UPlayerMappableInputConfig::UPlayerMappableInputConfig
          (UPlayerMappableInputConfig *this,FObjectInitializer *param_1)

{
  undefined4 uVar1;
  
  UPrimaryDataAsset::UPrimaryDataAsset((UPrimaryDataAsset *)this,param_1);
  this->_padding_ = (longlong)&___7UPlayerMappableInputConfig__6B_;
  uVar1 = *(undefined4 *)((longlong)&this->_padding_ + 4);
  (this->ConfigName).ComparisonIndex = (FNameEntryId)*(undefined4 *)&this->_padding_;
  (this->ConfigName).Number = uVar1;
  FText::FText(&this->ConfigDisplayName);
  this->bIsDeprecated = false;
  (this->Metadata).field0_0x0.DebugPtr = (UObject *)0x0;
  *(undefined8 *)&this->Contexts = 0;
  *(undefined8 *)&(this->Contexts).field_0x8 = 0;
  *(undefined8 *)&(this->Contexts).field_0x20 = 0;
  *(undefined4 *)&(this->Contexts).field_0x28 = 0;
  *(undefined4 *)&(this->Contexts).field_0x2c = 0x80;
  *(undefined4 *)&(this->Contexts).field_0x34 = 0;
  *(undefined4 *)&(this->Contexts).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->Contexts).field_0x40 = 0;
  *(undefined4 *)&(this->Contexts).field_0x48 = 0;
  return this;
}

// UPlayerMappableInputConfig @ 14a6cdca0

UPlayerMappableInputConfig * __thiscall
UPlayerMappableInputConfig::UPlayerMappableInputConfig
          (UPlayerMappableInputConfig *this,FVTableHelper *param_1)

{
  UPrimaryDataAsset::UPrimaryDataAsset((UPrimaryDataAsset *)this,param_1);
  this->_padding_ = (longlong)&___7UPlayerMappableInputConfig__6B_;
  (this->ConfigName).ComparisonIndex = 0;
  (this->ConfigName).Number = 0;
  FText::FText(&this->ConfigDisplayName);
  this->bIsDeprecated = false;
  (this->Metadata).field0_0x0.DebugPtr = (UObject *)0x0;
  *(undefined8 *)&this->Contexts = 0;
  *(undefined8 *)&(this->Contexts).field_0x8 = 0;
  *(undefined8 *)&(this->Contexts).field_0x20 = 0;
  *(undefined4 *)&(this->Contexts).field_0x28 = 0;
  *(undefined4 *)&(this->Contexts).field_0x2c = 0x80;
  *(undefined4 *)&(this->Contexts).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Contexts).field_0x34 = 0;
  *(undefined8 *)&(this->Contexts).field_0x40 = 0;
  *(undefined4 *)&(this->Contexts).field_0x48 = 0;
  return this;
}

// ~UPlayerMappableInputConfig @ 14a6cfc30

void __thiscall
UPlayerMappableInputConfig::~UPlayerMappableInputConfig(UPlayerMappableInputConfig *this)

{
  void *pvVar1;
  ITextData *pIVar2;
  
  this->_padding_ = (longlong)&___7UPlayerMappableInputConfig__6B_;
  *(undefined4 *)&(this->Contexts).field_0x48 = 0;
  pvVar1 = *(void **)&(this->Contexts).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UInputMappingContext>,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UInputMappingContext>,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UInputMappingContext>,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->Contexts);
  pIVar2 = (this->ConfigDisplayName).TextData.Reference;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 0x10))();
  }
  UPrimaryDataAsset::~UPrimaryDataAsset((UPrimaryDataAsset *)this);
  return;
}

// operator() @ 14a6d1260

void __thiscall
`UPlayerMappableInputConfig::GetKeysBoundToAction'::__l2::<lambda_1>::operator()
          (void *this,FEnhancedActionKeyMapping *param_1)

{
  int *piVar1;
  UInputAction *pUVar2;
  ForAnyElementType *pFVar3;
  code *pcVar4;
  int iVar5;
  bool bVar6;
  
  pUVar2 = (param_1->Action).field0_0x0.DebugPtr;
  if (pUVar2 == (UInputAction *)0x0) {
    bVar6 = *(UInputAction **)((longlong)this + 8) == (UInputAction *)0x0;
  }
  else {
    bVar6 = pUVar2 == *(UInputAction **)((longlong)this + 8);
  }
  if (bVar6) {
    pFVar3 = *(ForAnyElementType **)this;
    if (((FEnhancedActionKeyMapping *)pFVar3->Data <= param_1) &&
       (param_1 < (FEnhancedActionKeyMapping *)pFVar3->Data +
                  *(int *)((longlong)&pFVar3[1].Data + 4))) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    iVar5 = *(int *)&pFVar3[1].Data;
    piVar1 = (int *)((longlong)&pFVar3[1].Data + 4);
    if (iVar5 == *piVar1) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x850,pFVar3,piVar1);
    }
    *(int *)&pFVar3[1].Data = iVar5 + 1;
    FEnhancedActionKeyMapping::FEnhancedActionKeyMapping
              ((FEnhancedActionKeyMapping *)(pFVar3->Data + (longlong)iVar5 * 0x50),param_1);
  }
  return;
}

// operator() @ 14a6d1340

void __thiscall
`UPlayerMappableInputConfig::GetPlayerMappableKeys'::__l2::<lambda_1>::operator()
          (void *this,FEnhancedActionKeyMapping *param_1)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  
  pFVar2 = *(ForAnyElementType **)this;
  if (((FEnhancedActionKeyMapping *)pFVar2->Data <= param_1) &&
     (param_1 < (FEnhancedActionKeyMapping *)pFVar2->Data + *(int *)((longlong)&pFVar2[1].Data + 4))
     ) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = *(int *)&pFVar2[1].Data;
  piVar1 = (int *)((longlong)&pFVar2[1].Data + 4);
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x850,pFVar2,piVar1);
  }
  *(int *)&pFVar2[1].Data = iVar5 + 1;
  FEnhancedActionKeyMapping::FEnhancedActionKeyMapping
            ((FEnhancedActionKeyMapping *)(pFVar2->Data + (longlong)iVar5 * 0x50),param_1);
  return;
}

// ForEachDefaultPlayerMappableKey @ 14a6dd6e0

void __thiscall
UPlayerMappableInputConfig::ForEachDefaultPlayerMappableKey
          (UPlayerMappableInputConfig *this,
          TFunctionRef<void___cdecl(FEnhancedActionKeyMapping_const_&)> *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  UPlayerMappableKeySettings *pUVar8;
  longlong lVar9;
  FEnhancedActionKeyMapping *this_00;
  uint uVar10;
  uint uVar11;
  FEnhancedActionKeyMapping *pFVar12;
  int iVar13;
  undefined1 *puVar14;
  int iVar15;
  uint *puVar16;
  undefined1 local_res8 [8];
  undefined1 local_res18 [8];
  int local_res20;
  undefined4 uStack_74;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_68;
  undefined8 uStack_48;
  
  iVar13 = 0;
  puVar1 = &(this->Contexts).field_0x10;
  iVar3 = *(int *)&(this->Contexts).field_0x28;
  uVar6 = 1;
  iVar15 = 0;
  iVar7 = 0;
  if (iVar3 != 0) {
    puVar16 = *(uint **)&(this->Contexts).field_0x20;
    if (puVar16 == (uint *)0x0) {
      puVar16 = (uint *)puVar1;
    }
    uVar11 = *puVar16;
    while (uVar11 == 0) {
      lVar9 = (longlong)iVar13;
      iVar15 = iVar15 + 0x20;
      iVar13 = iVar13 + 1;
      iVar7 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar13) goto LAB_14a6dd78d;
      uVar11 = puVar16[lVar9 + 1];
    }
    uVar6 = -uVar11 & uVar11;
    uVar2 = (ulonglong)uVar6 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_res20 = (int)lVar9;
    iVar7 = iVar15 + -1 + local_res20;
    if (iVar3 < iVar7) {
      iVar7 = iVar3;
    }
  }
LAB_14a6dd78d:
  uVar11 = *(uint *)&(this->Contexts).field_0x28;
  uVar10 = uVar11 & 0xffffffe0;
  TStack_68._padding_ = CONCAT44(uVar6,iVar13);
  TStack_68.CurrentBitIndex = iVar7;
  TStack_68.UnvisitedBitMask = 0xffffffff;
  iVar13 = (int)uVar11 >> 5;
  TStack_68._28_4_ = iVar7;
  TStack_68.BaseBitIndex = iVar15;
  uStack_48 = CONCAT44(uStack_74,
                       *(int *)&(this->Contexts).field_0x8 - *(int *)&(this->Contexts).field_0x34);
  TStack_68.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar11 < 0) || (iVar3 < (int)uVar11)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar6 = *(uint *)&(this->Contexts).field_0x28;
  if (uVar11 != uVar6) {
    puVar14 = *(undefined1 **)&(this->Contexts).field_0x20;
    if (puVar14 == (undefined1 *)0x0) {
      puVar14 = puVar1;
    }
    uVar11 = -1 << ((byte)uVar11 & 0x1f) & *(uint *)(puVar14 + (longlong)iVar13 * 4);
    while (uVar11 == 0) {
      lVar9 = (longlong)iVar13;
      uVar10 = uVar10 + 0x20;
      iVar13 = iVar13 + 1;
      uVar11 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13) goto LAB_14a6dd890;
      uVar11 = *(uint *)(puVar14 + lVar9 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    uVar11 = (int)lVar9 + -1 + uVar10;
    if ((int)uVar6 < (int)uVar11) {
      uVar11 = uVar6;
    }
  }
LAB_14a6dd890:
  while( true ) {
    if (*(int *)&(this->Contexts).field_0x8 - *(int *)&(this->Contexts).field_0x34 != (int)uStack_48
       ) {
      `TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UInputMappingContext>,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_68.CurrentBitIndex == uVar11) &&
       (TStack_68.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    lVar9 = *(longlong *)(*(longlong *)&this->Contexts + (longlong)TStack_68.CurrentBitIndex * 0x18)
    ;
    if (lVar9 != 0) {
      iVar3 = *(int *)(lVar9 + 0x48);
      this_00 = *(FEnhancedActionKeyMapping **)(lVar9 + 0x40);
      pFVar12 = this_00 + iVar3;
      while( true ) {
        if (*(int *)(lVar9 + 0x48) != iVar3) {
          `TCheckedPointerIterator<FEnhancedActionKeyMapping_const_,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_res18);
        }
        if (this_00 == pFVar12) break;
        pUVar8 = FEnhancedActionKeyMapping::GetPlayerMappableKeySettings(this_00);
        if (pUVar8 != (UPlayerMappableKeySettings *)0x0) {
          (**(code **)param_1)(*(undefined8 *)&param_1->field_0x8,this_00);
        }
        this_00 = this_00 + 1;
      }
    }
    TStack_68.UnvisitedBitMask = TStack_68.UnvisitedBitMask & ~TStack_68._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_68);
  }
  return;
}

// GetKeysBoundToAction @ 14a6df590

TArray<FEnhancedActionKeyMapping,TSizedDefaultAllocator<32>_> * __thiscall
UPlayerMappableInputConfig::GetKeysBoundToAction
          (UPlayerMappableInputConfig *this,
          TArray<FEnhancedActionKeyMapping,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          UInputAction *param_1)

{
  TArray<FEnhancedActionKeyMapping,TSizedDefaultAllocator<32>_> *local_28;
  UInputAction *local_20;
  code *local_18;
  TArray<FEnhancedActionKeyMapping,TSizedDefaultAllocator<32>_> **local_10;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  local_10 = &local_28;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`UPlayerMappableInputConfig::GetKeysBoundToAction'::__l2::<lambda_1>,void,FEnhancedActionKeyMapping_const_&>
             ::Call;
  local_28 = __return_storage_ptr__;
  local_20 = param_1;
  ForEachDefaultPlayerMappableKey
            (this,(TFunctionRef<void___cdecl(FEnhancedActionKeyMapping_const_&)> *)&local_18);
  return __return_storage_ptr__;
}

// GetMappingByName @ 14a6dfa80

FEnhancedActionKeyMapping * __thiscall
UPlayerMappableInputConfig::GetMappingByName
          (UPlayerMappableInputConfig *this,FEnhancedActionKeyMapping *__return_storage_ptr__,
          FName param_1)

{
  undefined1 *puVar1;
  FName FVar2;
  FKeyDetails *pFVar3;
  FSharedReferencer<1> FVar4;
  atomic<int> *paVar5;
  UPlayerMappableKeySettings *pUVar6;
  FEnhancedActionKeyMapping *pFVar7;
  FEnhancedActionKeyMapping *this_00;
  FName local_res10;
  FEnhancedActionKeyMapping *local_38;
  undefined8 local_30;
  code *local_28;
  FName *local_20;
  
  FVar4.ReferenceController = EKeys::Invalid.KeyDetails.SharedReferenceCount.ReferenceController;
  pFVar3 = EKeys::Invalid.KeyDetails.Object;
  FVar2 = EKeys::Invalid.KeyName;
  if (EKeys::Invalid.KeyDetails.SharedReferenceCount.ReferenceController ==
      (TReferenceControllerBase<1> *)0x0) {
    paVar5 = (atomic<int> *)&DAT_00000008;
  }
  else {
    paVar5 = &(EKeys::Invalid.KeyDetails.SharedReferenceCount.ReferenceController)->
              SharedReferenceCount;
    LOCK();
    *paVar5 = (atomic<int>)((int)*paVar5 + 1);
    UNLOCK();
  }
  (__return_storage_ptr__->Triggers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Triggers).ArrayNum = 0;
  (__return_storage_ptr__->Triggers).ArrayMax = 0;
  (__return_storage_ptr__->Modifiers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Modifiers).ArrayNum = 0;
  (__return_storage_ptr__->Modifiers).ArrayMax = 0;
  (__return_storage_ptr__->Action).field0_0x0.DebugPtr = (UInputAction *)0x0;
  (__return_storage_ptr__->Key).KeyName = FVar2;
  (__return_storage_ptr__->Key).KeyDetails.Object = pFVar3;
  (__return_storage_ptr__->Key).KeyDetails.SharedReferenceCount.ReferenceController =
       FVar4.ReferenceController;
  if (FVar4.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    *paVar5 = (atomic<int>)((int)*paVar5 + 1);
    UNLOCK();
  }
  __return_storage_ptr__->bShouldBeIgnored = '\0';
  __return_storage_ptr__->bHasAlwaysTickTrigger = '\0';
  __return_storage_ptr__->SettingBehavior = InheritSettingsFromAction;
  (__return_storage_ptr__->PlayerMappableKeySettings).field0_0x0.DebugPtr =
       (UPlayerMappableKeySettings *)0x0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar4.ReferenceController);
  local_res10 = (FName)&local_38;
  local_38 = (FEnhancedActionKeyMapping *)0x0;
  local_20 = &local_res10;
  local_30 = 0;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`UPlayerMappableInputConfig::GetPlayerMappableKeys'::__l2::<lambda_1>,void,FEnhancedActionKeyMapping_const_&>
             ::Call;
  ForEachDefaultPlayerMappableKey
            (this,(TFunctionRef<void___cdecl(FEnhancedActionKeyMapping_const_&)> *)&local_28);
  pFVar7 = local_38 + (int)local_30;
  this_00 = local_38;
  do {
    if (this_00 == pFVar7) {
LAB_14a6dfbab:
      DestructItems<FEnhancedActionKeyMapping,int>(local_38,(int)local_30);
      if (local_38 != (FEnhancedActionKeyMapping *)0x0) {
        FMemory::Free(local_38);
      }
      return __return_storage_ptr__;
    }
    pUVar6 = FEnhancedActionKeyMapping::GetPlayerMappableKeySettings(this_00);
    if ((pUVar6 == (UPlayerMappableKeySettings *)0x0) ||
       (pUVar6 = FEnhancedActionKeyMapping::GetPlayerMappableKeySettings(this_00),
       pUVar6 == (UPlayerMappableKeySettings *)0x0)) {
      local_res10.ComparisonIndex.Value = 0;
      local_res10.Number = 0;
    }
    else {
      (**(code **)(pUVar6->_padding_ + 0x2b0))(pUVar6,&local_res10,this_00);
    }
    if (local_res10 == param_1) {
      if (this_00 != (FEnhancedActionKeyMapping *)0x0) {
        FEnhancedActionKeyMapping::operator=(__return_storage_ptr__,this_00);
      }
      goto LAB_14a6dfbab;
    }
    this_00 = this_00 + 1;
  } while( true );
}

// GetPlayerMappableKeys @ 14a6e0400

TArray<FEnhancedActionKeyMapping,TSizedDefaultAllocator<32>_> * __thiscall
UPlayerMappableInputConfig::GetPlayerMappableKeys
          (UPlayerMappableInputConfig *this,
          TArray<FEnhancedActionKeyMapping,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  TArray<FEnhancedActionKeyMapping,TSizedDefaultAllocator<32>_> *local_res10 [3];
  code *local_18;
  TArray<FEnhancedActionKeyMapping,TSizedDefaultAllocator<32>_> **local_10;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  local_10 = local_res10;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`UPlayerMappableInputConfig::GetPlayerMappableKeys'::__l2::<lambda_1>,void,FEnhancedActionKeyMapping_const_&>
             ::Call;
  local_res10[0] = __return_storage_ptr__;
  ForEachDefaultPlayerMappableKey
            (this,(TFunctionRef<void___cdecl(FEnhancedActionKeyMapping_const_&)> *)&local_18);
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 14a6e2430

UClass * __cdecl UPlayerMappableInputConfig::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPlayerMappableInputConfig.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/EnhancedInput",L"PlayerMappableInputConfig",
               &Z_Registration_Info_UClass_UPlayerMappableInputConfig.InnerSingleton,
               StaticRegisterNativesUPlayerMappableInputConfig,0xa8,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UPlayerMappableInputConfig>,
               InternalVTableHelperCtorCaller<UPlayerMappableInputConfig>,local_res8,
               UPrimaryDataAsset::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPlayerMappableInputConfig.InnerSingleton;
}

// ResetToDefault @ 14a6f4b90

void __thiscall UPlayerMappableInputConfig::ResetToDefault(UPlayerMappableInputConfig *this)

{
  return;
}

// StaticRegisterNativesUPlayerMappableInputConfig @ 14a6fb7e0

void __cdecl UPlayerMappableInputConfig::StaticRegisterNativesUPlayerMappableInputConfig(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 9;
  local_18.DataPtr = Z_Construct_UClass_UPlayerMappableInputConfig_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execGetConfigName @ 14a704860

void __cdecl
UPlayerMappableInputConfig::execGetConfigName(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined8 *)param_3 = *(undefined8 *)&param_1[1].field_0x8;
  return;
}

// execGetDisplayName @ 14a704970

void __cdecl
UPlayerMappableInputConfig::execGetDisplayName(UObject *param_1,FFrame *param_2,void *param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined1 local_res8 [8];
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  plVar1 = *(longlong **)&param_1[1].field_0x10;
  plVar2 = *(longlong **)param_3;
  if (plVar2 != plVar1) {
    *(longlong **)param_3 = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))(plVar1,local_res8);
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
    *(undefined4 *)((longlong)param_3 + 8) = *(undefined4 *)&param_1[1].field_0x18;
    return;
  }
  *(undefined4 *)((longlong)param_3 + 8) = *(undefined4 *)&param_1[1].field_0x18;
  return;
}

// execGetKeysBoundToAction @ 14a704b30

void __cdecl
UPlayerMappableInputConfig::execGetKeysBoundToAction(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 local_res10;
  FEnhancedActionKeyMapping *local_48;
  undefined8 local_40;
  FEnhancedActionKeyMapping **local_38;
  undefined8 local_30;
  code *local_28;
  undefined8 **local_20;
  
  local_res10 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_48 = (FEnhancedActionKeyMapping *)0x0;
  local_40 = 0;
  local_38 = &local_48;
  local_30 = local_res10;
  local_20 = &local_38;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`UPlayerMappableInputConfig::GetKeysBoundToAction'::__l2::<lambda_1>,void,FEnhancedActionKeyMapping_const_&>
             ::Call;
  ForEachDefaultPlayerMappableKey
            ((UPlayerMappableInputConfig *)param_1,
             (TFunctionRef<void___cdecl(FEnhancedActionKeyMapping_const_&)> *)&local_28);
  if (param_3 == &local_48) {
  }
  else {
    DestructItems<FEnhancedActionKeyMapping,int>
              (*(FEnhancedActionKeyMapping **)param_3,*(int *)((longlong)param_3 + 8));
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FEnhancedActionKeyMapping **)param_3 = local_48;
    *(int *)((longlong)param_3 + 8) = (int)local_40;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_40._4_4_;
    local_40 = 0;
    local_48 = (FEnhancedActionKeyMapping *)0x0;
    local_40._0_4_ = 0;
  }
  DestructItems<FEnhancedActionKeyMapping,int>(local_48,(int)local_40);
  if (local_48 != (FEnhancedActionKeyMapping *)0x0) {
    FMemory::Free(local_48);
  }
  return;
}

// execGetMappingByName @ 14a704d70

void __cdecl
UPlayerMappableInputConfig::execGetMappingByName(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FEnhancedActionKeyMapping **ppFVar2;
  atomic<int> *paVar3;
  UPlayerMappableKeySettings *pUVar4;
  FEnhancedActionKeyMapping *this;
  FEnhancedActionKeyMapping *pFVar5;
  FEnhancedActionKeyMapping **local_res10 [2];
  FEnhancedActionKeyMapping **local_res20;
  FEnhancedActionKeyMapping *local_98;
  undefined8 local_90;
  code *local_88;
  FEnhancedActionKeyMapping ***local_80;
  FEnhancedActionKeyMapping local_78;
  
  local_res10[0] = (FEnhancedActionKeyMapping **)0x0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  ppFVar2 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_78.Key.KeyDetails.SharedReferenceCount = EKeys::Invalid.KeyDetails.SharedReferenceCount;
  local_78.Key.KeyDetails.Object = EKeys::Invalid.KeyDetails.Object;
  local_78.Key.KeyName = EKeys::Invalid.KeyName;
  if (EKeys::Invalid.KeyDetails.SharedReferenceCount.ReferenceController ==
      (TReferenceControllerBase<1> *)0x0) {
    paVar3 = (atomic<int> *)&DAT_00000008;
  }
  else {
    paVar3 = &(EKeys::Invalid.KeyDetails.SharedReferenceCount.ReferenceController)->
              SharedReferenceCount;
    LOCK();
    *paVar3 = (atomic<int>)((int)*paVar3 + 1);
    UNLOCK();
  }
  local_78.Triggers.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.Triggers.ArrayNum = 0;
  local_78.Triggers.ArrayMax = 0;
  local_78.Modifiers.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.Modifiers.ArrayNum = 0;
  local_78.Modifiers.ArrayMax = 0;
  local_78.Action.field0_0x0.DebugPtr = (TObjectPtr<UInputAction_const_>_u_0)0x0;
  if (local_78.Key.KeyDetails.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    *paVar3 = (atomic<int>)((int)*paVar3 + 1);
    UNLOCK();
  }
  local_78.bHasAlwaysTickTrigger = '\0';
  local_78.bShouldBeIgnored = '\0';
  local_78.SettingBehavior = InheritSettingsFromAction;
  local_78.PlayerMappableKeySettings.field0_0x0.DebugPtr =
       (TObjectPtr<UPlayerMappableKeySettings>_u_0)0x0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_78.Key.KeyDetails.SharedReferenceCount.ReferenceController);
  local_res20 = &local_98;
  local_98 = (FEnhancedActionKeyMapping *)0x0;
  local_80 = &local_res20;
  local_90 = 0;
  local_88 = UE::Core::Private::Function::
             TFunctionRefCaller<`UPlayerMappableInputConfig::GetPlayerMappableKeys'::__l2::<lambda_1>,void,FEnhancedActionKeyMapping_const_&>
             ::Call;
  ForEachDefaultPlayerMappableKey
            ((UPlayerMappableInputConfig *)param_1,
             (TFunctionRef<void___cdecl(FEnhancedActionKeyMapping_const_&)> *)&local_88);
  pFVar5 = local_98 + (int)local_90;
  this = local_98;
  do {
    if (this == pFVar5) {
LAB_14a704ee9:
      DestructItems<FEnhancedActionKeyMapping,int>(local_98,(int)local_90);
      if (local_98 != (FEnhancedActionKeyMapping *)0x0) {
        FMemory::Free(local_98);
      }
      FEnhancedActionKeyMapping::operator=(param_3,&local_78);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_78.Key.KeyDetails.SharedReferenceCount.ReferenceController);
      if (local_78.Modifiers.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.Modifiers.AllocatorInstance.Data);
      }
      if (local_78.Triggers.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.Triggers.AllocatorInstance.Data);
      }
      return;
    }
    pUVar4 = FEnhancedActionKeyMapping::GetPlayerMappableKeySettings(this);
    if ((pUVar4 == (UPlayerMappableKeySettings *)0x0) ||
       (pUVar4 = FEnhancedActionKeyMapping::GetPlayerMappableKeySettings(this),
       pUVar4 == (UPlayerMappableKeySettings *)0x0)) {
      local_res20 = (FEnhancedActionKeyMapping **)0x0;
    }
    else {
      (**(code **)(pUVar4->_padding_ + 0x2b0))(pUVar4,&local_res20,this);
    }
    if (local_res20 == ppFVar2) {
      if (this != (FEnhancedActionKeyMapping *)0x0) {
        FEnhancedActionKeyMapping::operator=(&local_78,this);
      }
      goto LAB_14a704ee9;
    }
    this = this + 1;
  } while( true );
}

// execGetMappingContexts @ 14a704f60

void __cdecl
UPlayerMappableInputConfig::execGetMappingContexts(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (param_3 != &param_1[2].field_0x8) {
    UE::Core::Private::
    CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
              ((ForElementType<FSetElementId> *)((longlong)param_3 + 0x38),
               (int *)((longlong)param_3 + 0x48),
               (ForElementType<FSetElementId> *)&param_1[3].field_0x18,*(int *)(param_1 + 4));
    TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UInputMappingContext>,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::operator=(param_3,(TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UInputMappingContext>,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)&param_1[2].field_0x8);
  }
  return;
}

// execGetMetadata @ 14a705260

void __cdecl
UPlayerMappableInputConfig::execGetMetadata(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined8 *)param_3 = *(undefined8 *)(param_1 + 2);
  return;
}

// execGetPlayerMappableKeys @ 14a7053c0

void __cdecl
UPlayerMappableInputConfig::execGetPlayerMappableKeys
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FEnhancedActionKeyMapping **local_res10 [3];
  FEnhancedActionKeyMapping *local_28;
  undefined8 local_20;
  code *local_18;
  undefined8 **local_10;
  
  local_28 = (FEnhancedActionKeyMapping *)0x0;
  local_20 = 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_res10[0] = &local_28;
  local_10 = local_res10;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`UPlayerMappableInputConfig::GetPlayerMappableKeys'::__l2::<lambda_1>,void,FEnhancedActionKeyMapping_const_&>
             ::Call;
  ForEachDefaultPlayerMappableKey
            ((UPlayerMappableInputConfig *)param_1,
             (TFunctionRef<void___cdecl(FEnhancedActionKeyMapping_const_&)> *)&local_18);
  if (param_3 == &local_28) {
  }
  else {
    DestructItems<FEnhancedActionKeyMapping,int>
              (*(FEnhancedActionKeyMapping **)param_3,*(int *)((longlong)param_3 + 8));
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FEnhancedActionKeyMapping **)param_3 = local_28;
    *(int *)((longlong)param_3 + 8) = (int)local_20;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_20._4_4_;
    local_20 = 0;
    local_28 = (FEnhancedActionKeyMapping *)0x0;
    local_20._0_4_ = 0;
  }
  DestructItems<FEnhancedActionKeyMapping,int>(local_28,(int)local_20);
  if (local_28 != (FEnhancedActionKeyMapping *)0x0) {
    FMemory::Free(local_28);
  }
  return;
}

// execIsDeprecated @ 14a7061a0

void __cdecl
UPlayerMappableInputConfig::execIsDeprecated(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined1 *)param_3 = param_1[1].field_0x20;
  return;
}

// execResetToDefault @ 14a707ff0

void __cdecl
UPlayerMappableInputConfig::execResetToDefault(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  return;
}

