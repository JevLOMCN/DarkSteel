// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: EnhancedInput
// Functions: 27

// StaticClass @ 14a6b3560

UClass * __cdecl UInputMappingContext::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInputMappingContext.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/EnhancedInput",L"InputMappingContext",
               &Z_Registration_Info_UClass_UInputMappingContext.InnerSingleton,
               StaticRegisterNativesUInputMappingContext,0x108,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Input",InternalConstructor<UInputMappingContext>,
               InternalVTableHelperCtorCaller<UInputMappingContext>,local_res8,
               UDataAsset::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInputMappingContext.InnerSingleton;
}

// UInputMappingContext @ 14a6cc9d0

UInputMappingContext * __thiscall
UInputMappingContext::UInputMappingContext(UInputMappingContext *this,FVTableHelper *param_1)

{
  UDataAsset::UDataAsset((UDataAsset *)this,param_1);
  this->_padding_ = (longlong)&___7UInputMappingContext__6B_;
  (this->Mappings).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Mappings).ArrayNum = 0;
  (this->Mappings).ArrayMax = 0;
  (this->DefaultKeyMappings).Mappings.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DefaultKeyMappings).Mappings.ArrayNum = 0;
  (this->DefaultKeyMappings).Mappings.ArrayMax = 0;
  *(undefined8 *)&this->MappingProfileOverrides = 0;
  *(undefined8 *)&(this->MappingProfileOverrides).field_0x8 = 0;
  *(undefined8 *)&(this->MappingProfileOverrides).field_0x20 = 0;
  *(undefined4 *)&(this->MappingProfileOverrides).field_0x28 = 0;
  *(undefined4 *)&(this->MappingProfileOverrides).field_0x2c = 0x80;
  *(undefined4 *)&(this->MappingProfileOverrides).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->MappingProfileOverrides).field_0x34 = 0;
  *(undefined8 *)&(this->MappingProfileOverrides).field_0x40 = 0;
  *(undefined4 *)&(this->MappingProfileOverrides).field_0x48 = 0;
  this->InputModeFilterOptions = UseProjectDefaultQuery;
  FGameplayTagQuery::FGameplayTagQuery(&this->InputModeQueryOverride);
  this->RegistrationTrackingMode = Untracked;
  FText::FText(&this->ContextDescription);
  return this;
}

// UInputMappingContext @ 14a6cca70

UInputMappingContext * __thiscall
UInputMappingContext::UInputMappingContext(UInputMappingContext *this,FObjectInitializer *param_1)

{
  UDataAsset::UDataAsset((UDataAsset *)this,param_1);
  this->_padding_ = (longlong)&___7UInputMappingContext__6B_;
  (this->Mappings).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Mappings).ArrayNum = 0;
  (this->Mappings).ArrayMax = 0;
  (this->DefaultKeyMappings).Mappings.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DefaultKeyMappings).Mappings.ArrayNum = 0;
  (this->DefaultKeyMappings).Mappings.ArrayMax = 0;
  *(undefined8 *)&this->MappingProfileOverrides = 0;
  *(undefined8 *)&(this->MappingProfileOverrides).field_0x8 = 0;
  *(undefined8 *)&(this->MappingProfileOverrides).field_0x20 = 0;
  *(undefined4 *)&(this->MappingProfileOverrides).field_0x28 = 0;
  *(undefined4 *)&(this->MappingProfileOverrides).field_0x2c = 0x80;
  *(undefined4 *)&(this->MappingProfileOverrides).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->MappingProfileOverrides).field_0x34 = 0;
  *(undefined8 *)&(this->MappingProfileOverrides).field_0x40 = 0;
  *(undefined4 *)&(this->MappingProfileOverrides).field_0x48 = 0;
  this->InputModeFilterOptions = UseProjectDefaultQuery;
  FGameplayTagQuery::FGameplayTagQuery(&this->InputModeQueryOverride);
  this->RegistrationTrackingMode = Untracked;
  FText::FText(&this->ContextDescription);
  return this;
}

// ~UInputMappingContext @ 14a6cf800

void __thiscall UInputMappingContext::~UInputMappingContext(UInputMappingContext *this)

{
  ITextData *pIVar1;
  FScriptContainerElement *pFVar2;
  void *pvVar3;
  
  this->_padding_ = (longlong)&___7UInputMappingContext__6B_;
  pIVar1 = (this->ContextDescription).TextData.Reference;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x10))();
  }
  pFVar2 = (this->InputModeQueryOverride).AutoDescription.Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->InputModeQueryOverride).UserDescription.Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->InputModeQueryOverride).QueryTokenStream.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->InputModeQueryOverride).TagDictionary.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  *(undefined4 *)&(this->MappingProfileOverrides).field_0x48 = 0;
  pvVar3 = *(void **)&(this->MappingProfileOverrides).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FInputMappingContextMappingData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FInputMappingContextMappingData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,FInputMappingContextMappingData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->MappingProfileOverrides);
  DestructItems<FEnhancedActionKeyMapping,int>
            ((FEnhancedActionKeyMapping *)(this->DefaultKeyMappings).Mappings.AllocatorInstance.Data
             ,(this->DefaultKeyMappings).Mappings.ArrayNum);
  pFVar2 = (this->DefaultKeyMappings).Mappings.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<FEnhancedActionKeyMapping,int>
            ((FEnhancedActionKeyMapping *)(this->Mappings).AllocatorInstance.Data,
             (this->Mappings).ArrayNum);
  pFVar2 = (this->Mappings).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  UDataAsset::~UDataAsset((UDataAsset *)this);
  return;
}

// ForEachKeyMapping @ 14a6ddb50

void __thiscall
UInputMappingContext::ForEachKeyMapping
          (UInputMappingContext *this,
          TFunctionRef<void___cdecl(FEnhancedActionKeyMapping_const_&)> *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  FScriptContainerElement *pFVar9;
  longlong lVar10;
  uint uVar11;
  FScriptContainerElement *pFVar12;
  longlong lVar13;
  int iVar14;
  undefined1 *puVar15;
  int iVar16;
  uint *puVar17;
  uint uVar18;
  undefined1 local_res8 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar3 = (this->DefaultKeyMappings).Mappings.ArrayNum;
  pFVar9 = (this->DefaultKeyMappings).Mappings.AllocatorInstance.Data;
  pFVar12 = pFVar9 + (longlong)iVar3 * 0x50;
  while( true ) {
    if ((this->DefaultKeyMappings).Mappings.ArrayNum != iVar3) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FEnhancedActionKeyMapping_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar9 == pFVar12) break;
    (**(code **)param_1)(*(undefined8 *)&param_1->field_0x8,pFVar9);
    pFVar9 = pFVar9 + 0x50;
  }
  iVar3 = *(int *)&(this->MappingProfileOverrides).field_0x28;
  puVar1 = &(this->MappingProfileOverrides).field_0x10;
  iVar14 = 0;
  uVar6 = 1;
  iVar16 = 0;
  iVar7 = 0;
  if (iVar3 != 0) {
    puVar17 = *(uint **)&(this->MappingProfileOverrides).field_0x20;
    if (puVar17 == (uint *)0x0) {
      puVar17 = (uint *)puVar1;
    }
    uVar11 = *puVar17;
    while (uVar11 == 0) {
      lVar8 = (longlong)iVar14;
      iVar16 = iVar16 + 0x20;
      iVar14 = iVar14 + 1;
      iVar7 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_14a6ddc3d;
      uVar11 = puVar17[lVar8 + 1];
    }
    uVar6 = -uVar11 & uVar11;
    uVar2 = (ulonglong)uVar6 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    iVar7 = iVar16 + -1 + (int)lVar8;
    if (iVar3 < iVar7) {
      iVar7 = iVar3;
    }
  }
LAB_14a6ddc3d:
  uVar11 = *(uint *)&(this->MappingProfileOverrides).field_0x28;
  uVar18 = uVar11 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar6,iVar14);
  TStack_60.CurrentBitIndex = iVar7;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar14 = (int)uVar11 >> 5;
  TStack_60._28_4_ = iVar7;
  TStack_60.BaseBitIndex = iVar16;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->MappingProfileOverrides).field_0x8 -
                       *(int *)&(this->MappingProfileOverrides).field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar11 < 0) || (iVar3 < (int)uVar11)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar6 = *(uint *)&(this->MappingProfileOverrides).field_0x28;
  if (uVar11 != uVar6) {
    puVar15 = *(undefined1 **)&(this->MappingProfileOverrides).field_0x20;
    if (puVar15 == (undefined1 *)0x0) {
      puVar15 = puVar1;
    }
    uVar11 = -1 << ((byte)uVar11 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar14 * 4);
    while (uVar11 == 0) {
      lVar8 = (longlong)iVar14;
      uVar18 = uVar18 + 0x20;
      iVar14 = iVar14 + 1;
      uVar11 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_14a6ddd40;
      uVar11 = *(uint *)(puVar15 + lVar8 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar11 = (int)lVar8 + -1 + uVar18;
    if ((int)uVar6 < (int)uVar11) {
      uVar11 = uVar6;
    }
  }
LAB_14a6ddd40:
  while( true ) {
    if (*(int *)&(this->MappingProfileOverrides).field_0x8 -
        *(int *)&(this->MappingProfileOverrides).field_0x34 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<FString,FInputMappingContextMappingData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if ((TStack_60.CurrentBitIndex == uVar11) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    iVar3 = *(int *)(*(longlong *)&this->MappingProfileOverrides + 0x18 +
                    (longlong)TStack_60.CurrentBitIndex * 0x28);
    lVar8 = *(longlong *)&this->MappingProfileOverrides + (longlong)TStack_60.CurrentBitIndex * 0x28
    ;
    lVar10 = *(longlong *)(lVar8 + 0x10);
    lVar13 = (longlong)iVar3 * 0x50 + lVar10;
    while( true ) {
      if (*(int *)(lVar8 + 0x18) != iVar3) {
        `TCheckedPointerIterator<FEnhancedActionKeyMapping_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res20);
      }
      if (lVar10 == lVar13) break;
      (**(code **)param_1)(*(undefined8 *)&param_1->field_0x8,lVar10);
      lVar10 = lVar10 + 0x50;
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// GetInputModeQuery @ 14a6df460

FGameplayTagQuery * __thiscall
UInputMappingContext::GetInputModeQuery
          (UInputMappingContext *this,FGameplayTagQuery *__return_storage_ptr__)

{
  UClass *this_00;
  UInputMappingContext *local_res8;
  
  if (this->InputModeFilterOptions == UseProjectDefaultQuery) {
    this_00 = UEnhancedInputDeveloperSettings::StaticClass();
    if ((this_00->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
      UClass::InternalCreateDefaultObjectWrapper(this_00);
    }
    FGameplayTagQuery::FGameplayTagQuery
              (__return_storage_ptr__,
               (FGameplayTagQuery *)&(this_00->ClassDefaultObject).field0_0x0.DebugPtr[6].field_0x8)
    ;
    return __return_storage_ptr__;
  }
  if (this->InputModeFilterOptions != UseCustomQuery) {
    local_res8 = this;
    `UInputMappingContext::GetInputModeQuery'::__l7::<lambda_1>::operator()(&local_res8);
    FGameplayTagQuery::FGameplayTagQuery(__return_storage_ptr__);
    return __return_storage_ptr__;
  }
  FGameplayTagQuery::FGameplayTagQuery(__return_storage_ptr__,&this->InputModeQueryOverride);
  return __return_storage_ptr__;
}

// GetMappingsForProfile @ 14a6e0240

TArray<FEnhancedActionKeyMapping,TSizedDefaultAllocator<32>_> * __thiscall
UInputMappingContext::GetMappingsForProfile(UInputMappingContext *this,FString *param_1)

{
  TArray<FEnhancedActionKeyMapping,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<FEnhancedActionKeyMapping,TSizedDefaultAllocator<32>_> *pTVar2;
  
  pTVar1 = &TMapBase<FString,FInputMappingContextMappingData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FInputMappingContextMappingData,0>_>
            ::Find((TMapBase<FString,FInputMappingContextMappingData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FInputMappingContextMappingData,0>_>
                    *)&this->MappingProfileOverrides,param_1)->Mappings;
  pTVar2 = &(this->DefaultKeyMappings).Mappings;
  if (pTVar1 != (TArray<FEnhancedActionKeyMapping,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar2 = pTVar1;
  }
  return pTVar2;
}

// GetPrivateStaticClass @ 14a6e10d0

UClass * __cdecl UInputMappingContext::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInputMappingContext.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/EnhancedInput",L"InputMappingContext",
               &Z_Registration_Info_UClass_UInputMappingContext.InnerSingleton,
               StaticRegisterNativesUInputMappingContext,0x108,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Input",InternalConstructor<UInputMappingContext>,
               InternalVTableHelperCtorCaller<UInputMappingContext>,local_res8,
               UDataAsset::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInputMappingContext.InnerSingleton;
}

// GetProfilesWithOverridenMappings @ 14a6e25d0

TArray<FString,TSizedDefaultAllocator<32>_> * __thiscall
UInputMappingContext::GetProfilesWithOverridenMappings
          (UInputMappingContext *this,
          TArray<FString,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  TMapBase<FString,FInputMappingContextMappingData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FInputMappingContextMappingData,0>_>
  ::GetKeys<TSizedDefaultAllocator<32>_>
            ((TMapBase<FString,FInputMappingContextMappingData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FInputMappingContextMappingData,0>_>
              *)&this->MappingProfileOverrides,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// HasMappingForInputAction @ 14a6e3c90

bool __thiscall
UInputMappingContext::HasMappingForInputAction(UInputMappingContext *this,UInputAction *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  FScriptContainerElement *pFVar10;
  longlong lVar11;
  uint uVar12;
  int iVar13;
  FScriptContainerElement *pFVar14;
  undefined1 *puVar15;
  int iVar16;
  uint *puVar17;
  uint uVar18;
  undefined1 local_res10 [8];
  int local_res18;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  if (param_1 != (UInputAction *)0x0) {
    pFVar10 = (this->Mappings).AllocatorInstance.Data;
    pFVar14 = pFVar10 + (longlong)(this->Mappings).ArrayNum * 0x50;
    for (; pFVar10 != pFVar14; pFVar10 = pFVar10 + 0x50) {
      if ((*(UInputAction **)(pFVar10 + 0x20) != (UInputAction *)0x0) &&
         (*(UInputAction **)(pFVar10 + 0x20) == param_1)) {
        return true;
      }
    }
    pFVar10 = (this->DefaultKeyMappings).Mappings.AllocatorInstance.Data;
    pFVar14 = pFVar10 + (longlong)(this->DefaultKeyMappings).Mappings.ArrayNum * 0x50;
    for (; pFVar10 != pFVar14; pFVar10 = pFVar10 + 0x50) {
      if ((*(UInputAction **)(pFVar10 + 0x20) != (UInputAction *)0x0) &&
         (*(UInputAction **)(pFVar10 + 0x20) == param_1)) {
        return true;
      }
    }
    iVar3 = *(int *)&(this->MappingProfileOverrides).field_0x28;
    puVar1 = &(this->MappingProfileOverrides).field_0x10;
    iVar13 = 0;
    uVar7 = 1;
    iVar16 = 0;
    iVar8 = 0;
    if (iVar3 != 0) {
      puVar17 = *(uint **)&(this->MappingProfileOverrides).field_0x20;
      if (puVar17 == (uint *)0x0) {
        puVar17 = (uint *)puVar1;
      }
      uVar12 = *puVar17;
      while (uVar12 == 0) {
        lVar9 = (longlong)iVar13;
        iVar16 = iVar16 + 0x20;
        iVar13 = iVar13 + 1;
        iVar8 = iVar3;
        if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar13) goto LAB_14a6e3dbf;
        uVar12 = puVar17[lVar9 + 1];
      }
      uVar7 = -uVar12 & uVar12;
      uVar2 = (ulonglong)uVar7 * 2 + 1;
      lVar9 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      local_res18 = (int)lVar9;
      iVar8 = iVar16 + -1 + local_res18;
      if (iVar3 < iVar8) {
        iVar8 = iVar3;
      }
    }
LAB_14a6e3dbf:
    uVar12 = *(uint *)&(this->MappingProfileOverrides).field_0x28;
    uVar18 = uVar12 & 0xffffffe0;
    TStack_60._padding_ = CONCAT44(uVar7,iVar13);
    TStack_60.CurrentBitIndex = iVar8;
    TStack_60.UnvisitedBitMask = 0xffffffff;
    iVar13 = (int)uVar12 >> 5;
    TStack_60._28_4_ = iVar8;
    TStack_60.BaseBitIndex = iVar16;
    uStack_40 = CONCAT44(uStack_6c,
                         *(int *)&(this->MappingProfileOverrides).field_0x8 -
                         *(int *)&(this->MappingProfileOverrides).field_0x34);
    TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
    if ((((int)uVar12 < 0) || (iVar3 < (int)uVar12)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
    uVar7 = *(uint *)&(this->MappingProfileOverrides).field_0x28;
    if (uVar12 != uVar7) {
      puVar15 = *(undefined1 **)&(this->MappingProfileOverrides).field_0x20;
      if (puVar15 == (undefined1 *)0x0) {
        puVar15 = puVar1;
      }
      uVar12 = -1 << ((byte)uVar12 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar13 * 4);
      while (uVar12 == 0) {
        lVar9 = (longlong)iVar13;
        uVar18 = uVar18 + 0x20;
        iVar13 = iVar13 + 1;
        uVar12 = uVar7;
        if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13)
        goto LAB_14a6e3ed0;
        uVar12 = *(uint *)(puVar15 + lVar9 * 4 + 4);
      }
      uVar2 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
      lVar9 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      uVar12 = (int)lVar9 + -1 + uVar18;
      if ((int)uVar7 < (int)uVar12) {
        uVar12 = uVar7;
      }
    }
LAB_14a6e3ed0:
    while( true ) {
      if (*(int *)&(this->MappingProfileOverrides).field_0x8 -
          *(int *)&(this->MappingProfileOverrides).field_0x34 != (int)uStack_40) {
        `TSparseArray<TSparseSetElement<TTuple<FString,FInputMappingContextMappingData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
      }
      if ((TStack_60.CurrentBitIndex == uVar12) &&
         (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
      lVar9 = *(longlong *)
               (*(longlong *)&this->MappingProfileOverrides + 0x10 +
               (longlong)TStack_60.CurrentBitIndex * 0x28);
      lVar11 = (longlong)
               *(int *)(*(longlong *)&this->MappingProfileOverrides +
                        (longlong)TStack_60.CurrentBitIndex * 0x28 + 0x18) * 0x50 + lVar9;
      for (; lVar9 != lVar11; lVar9 = lVar9 + 0x50) {
        if ((*(UInputAction **)(lVar9 + 0x20) != (UInputAction *)0x0) &&
           (*(UInputAction **)(lVar9 + 0x20) == param_1)) {
          return true;
        }
      }
      TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
    }
  }
  return false;
}

// HasMappingsForProfile @ 14a6e3f80

bool __thiscall
UInputMappingContext::HasMappingsForProfile(UInputMappingContext *this,FString *param_1)

{
  FInputMappingContextMappingData *pFVar1;
  
  pFVar1 = TMapBase<FString,FInputMappingContextMappingData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FInputMappingContextMappingData,0>_>
           ::Find((TMapBase<FString,FInputMappingContextMappingData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FInputMappingContextMappingData,0>_>
                   *)&this->MappingProfileOverrides,param_1);
  return pFVar1 != (FInputMappingContextMappingData *)0x0;
}

// MapKey @ 14a6e66b0

FEnhancedActionKeyMapping * __thiscall
UInputMappingContext::MapKey(UInputMappingContext *this,UInputAction *param_1,FKey *param_2)

{
  FInputMappingContextMappingData *pFVar1;
  int *piVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  IEnhancedInputModule *pIVar6;
  FEnhancedActionKeyMapping *pFVar7;
  atomic<int> *paVar8;
  UInputMappingContext *local_98;
  undefined1 local_90;
  code *local_88;
  UInputMappingContext **local_80;
  FEnhancedActionKeyMapping local_78;
  
  pIVar6 = IEnhancedInputModule::Get();
  (**(code **)((longlong)*pIVar6 + 0x40))(pIVar6);
  local_80 = &local_98;
  local_90 = 0;
  local_88 = UE::Core::Private::Function::
             TFunctionRefCaller<`UEnhancedInputLibrary::RequestRebuildControlMappingsUsingContext'::__l2::<lambda_1>,void,IEnhancedInputSubsystemInterface_*>
             ::Call;
  local_98 = this;
  UEnhancedInputLibrary::ForEachSubsystem
            ((TFunctionRef<void___cdecl(IEnhancedInputSubsystemInterface_*)> *)&local_88);
  local_78.Key.KeyDetails.SharedReferenceCount.ReferenceController =
       (param_2->KeyDetails).SharedReferenceCount.ReferenceController;
  pFVar1 = &this->DefaultKeyMappings;
  local_78.Key.KeyName = param_2->KeyName;
  local_78.Key.KeyDetails.Object = (param_2->KeyDetails).Object;
  if (local_78.Key.KeyDetails.SharedReferenceCount.ReferenceController ==
      (TReferenceControllerBase<1> *)0x0) {
    paVar8 = (atomic<int> *)&DAT_00000008;
  }
  else {
    paVar8 = &(local_78.Key.KeyDetails.SharedReferenceCount.ReferenceController)->
              SharedReferenceCount;
    LOCK();
    *paVar8 = (atomic<int>)((int)*paVar8 + 1);
    UNLOCK();
  }
  local_78.Triggers.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.Triggers.ArrayNum = 0;
  local_78.Triggers.ArrayMax = 0;
  local_78.Modifiers.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.Modifiers.ArrayNum = 0;
  local_78.Modifiers.ArrayMax = 0;
  local_78.Action.field0_0x0 = (TObjectPtr<UInputAction_const_>_u_0)param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UInputAction *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  if (local_78.Key.KeyDetails.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    *paVar8 = (atomic<int>)((int)*paVar8 + 1);
    UNLOCK();
  }
  local_78.bHasAlwaysTickTrigger = '\0';
  local_78.bShouldBeIgnored = '\0';
  local_78.SettingBehavior = InheritSettingsFromAction;
  local_78.PlayerMappableKeySettings.field0_0x0.DebugPtr =
       (TObjectPtr<UPlayerMappableKeySettings>_u_0)0x0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_78.Key.KeyDetails.SharedReferenceCount.ReferenceController);
  pFVar7 = (FEnhancedActionKeyMapping *)(pFVar1->Mappings).AllocatorInstance.Data;
  if ((pFVar7 <= &local_78) && (&local_78 < pFVar7 + (this->DefaultKeyMappings).Mappings.ArrayMax))
  {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FEnhancedActionKeyMapping *)(*pcVar3)();
      return pFVar7;
    }
  }
  iVar5 = (this->DefaultKeyMappings).Mappings.ArrayNum;
  piVar2 = &(this->DefaultKeyMappings).Mappings.ArrayMax;
  if (iVar5 == *piVar2) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x850,(ForAnyElementType *)pFVar1,piVar2);
  }
  (this->DefaultKeyMappings).Mappings.ArrayNum = iVar5 + 1;
  pFVar7 = FEnhancedActionKeyMapping::FEnhancedActionKeyMapping
                     ((FEnhancedActionKeyMapping *)
                      ((pFVar1->Mappings).AllocatorInstance.Data + (longlong)iVar5 * 0x50),&local_78
                     );
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_78.Key.KeyDetails.SharedReferenceCount.ReferenceController);
  if (local_78.Modifiers.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Modifiers.AllocatorInstance.Data);
  }
  if (local_78.Triggers.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Triggers.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->KeyDetails).SharedReferenceCount.ReferenceController);
  return pFVar7;
}

// PostLoad @ 14a6e9c00

void __thiscall UInputMappingContext::PostLoad(UInputMappingContext *this)

{
  TArray<FEnhancedActionKeyMapping,TSizedDefaultAllocator<32>_> *pTVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  FInputMappingContextMappingData *pFVar4;
  FGuid local_18;
  
  UObject::PostLoad((UObject *)this);
  local_18 = FFortniteSeasonBranchObjectVersion::GUID;
  iVar3 = UObjectBaseUtility::GetLinkerCustomVersion((UObjectBaseUtility *)this,&local_18);
  if (iVar3 < 0xe) {
    pTVar1 = &this->Mappings;
    pFVar4 = &this->DefaultKeyMappings;
    if (&pFVar4->Mappings != pTVar1) {
      DestructItems<FEnhancedActionKeyMapping,int>
                ((FEnhancedActionKeyMapping *)(pFVar4->Mappings).AllocatorInstance.Data,
                 (this->DefaultKeyMappings).Mappings.ArrayNum);
      pFVar2 = (pFVar4->Mappings).AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      (pFVar4->Mappings).AllocatorInstance.Data = (pTVar1->AllocatorInstance).Data;
      (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      (this->DefaultKeyMappings).Mappings.ArrayNum = (this->Mappings).ArrayNum;
      (this->DefaultKeyMappings).Mappings.ArrayMax = (this->Mappings).ArrayMax;
      (this->Mappings).ArrayNum = 0;
      (this->Mappings).ArrayMax = 0;
    }
  }
  return;
}

// Serialize @ 14a6f6020

void __thiscall UInputMappingContext::Serialize(UInputMappingContext *this,FArchive *param_1)

{
  UObject::Serialize((UObject *)this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014a6f6040. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FFortniteSeasonBranchObjectVersion::GUID);
  return;
}

// Serialize @ 14a6f6050

void __thiscall
UInputMappingContext::Serialize(UInputMappingContext *this,FStructuredArchiveRecord param_1)

{
  FArchive *pFVar1;
  FSlotBase local_res10 [3];
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  pFVar1 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  UObject::Serialize((UObject *)this,pFVar1);
  (**(code **)(*(longlong *)pFVar1 + 0x230))(pFVar1,&FFortniteSeasonBranchObjectVersion::GUID);
  return;
}

// ShouldFilterMappingByInputMode @ 14a6f6720

bool __thiscall UInputMappingContext::ShouldFilterMappingByInputMode(UInputMappingContext *this)

{
  return this->InputModeFilterOptions != DoNotFilter;
}

// ShouldShowInputModeQuery @ 14a6f6740

bool __cdecl UInputMappingContext::ShouldShowInputModeQuery(void)

{
  UClass *this;
  
  this = UEnhancedInputDeveloperSettings::StaticClass();
  if ((this->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this);
  }
  return (bool)(*(byte *)((this->ClassDefaultObject).field0_0x0.DebugPtr + 6) >> 4 & 1);
}

// StaticRegisterNativesUInputMappingContext @ 14a6fb5b0

void __cdecl UInputMappingContext::StaticRegisterNativesUInputMappingContext(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 5;
  local_18.DataPtr = Z_Construct_UClass_UInputMappingContext_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// UnmapAll @ 14a6ff830

void __thiscall UInputMappingContext::UnmapAll(UInputMappingContext *this)

{
  int *piVar1;
  int iVar2;
  IEnhancedInputModule *pIVar3;
  UInputMappingContext *local_28;
  undefined1 local_20;
  code *local_18;
  UInputMappingContext **local_10;
  
  iVar2 = (this->DefaultKeyMappings).Mappings.ArrayNum;
  if (iVar2 != 0) {
    DestructItems<FEnhancedActionKeyMapping,int>
              ((FEnhancedActionKeyMapping *)
               (this->DefaultKeyMappings).Mappings.AllocatorInstance.Data,iVar2);
    piVar1 = &(this->DefaultKeyMappings).Mappings.ArrayMax;
    (this->DefaultKeyMappings).Mappings.ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x50,8,0,(ForAnyElementType *)&this->DefaultKeyMappings,0,piVar1);
    }
    pIVar3 = IEnhancedInputModule::Get();
    (**(code **)((longlong)*pIVar3 + 0x40))(pIVar3);
    local_10 = &local_28;
    local_20 = 0;
    local_18 = UE::Core::Private::Function::
               TFunctionRefCaller<`UEnhancedInputLibrary::RequestRebuildControlMappingsUsingContext'::__l2::<lambda_1>,void,IEnhancedInputSubsystemInterface_*>
               ::Call;
    local_28 = this;
    UEnhancedInputLibrary::ForEachSubsystem
              ((TFunctionRef<void___cdecl(IEnhancedInputSubsystemInterface_*)> *)&local_18);
  }
  return;
}

// UnmapAllKeysFromAction @ 14a6ff8d0

void __thiscall
UInputMappingContext::UnmapAllKeysFromAction(UInputMappingContext *this,UInputAction *param_1)

{
  FInputMappingContextMappingData *this_00;
  int iVar1;
  UInputAction *pUVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  uint uVar6;
  IEnhancedInputModule *pIVar7;
  uint uVar8;
  longlong lVar9;
  int iVar10;
  UInputMappingContext *local_48;
  undefined1 local_40;
  code *local_38;
  UInputMappingContext **local_30;
  
  uVar8 = 0;
  this_00 = &this->DefaultKeyMappings;
  iVar1 = (this->DefaultKeyMappings).Mappings.ArrayNum;
  bVar4 = false;
  if (0 < iVar1) {
    lVar9 = 0;
    iVar10 = iVar1;
    do {
      uVar6 = 0;
      if ((int)uVar8 < iVar10) {
        uVar6 = ~uVar8 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pUVar2 = *(UInputAction **)((this_00->Mappings).AllocatorInstance.Data + lVar9 + 0x20);
      if (pUVar2 == (UInputAction *)0x0) {
        bVar5 = param_1 == (UInputAction *)0x0;
      }
      else {
        bVar5 = pUVar2 == param_1;
      }
      if (bVar5) {
        bVar4 = true;
        uVar6 = 0;
        if ((int)uVar8 < (this->DefaultKeyMappings).Mappings.ArrayNum) {
          uVar6 = ~uVar8 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        TArray<FEnhancedActionKeyMapping,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl
                  (&this_00->Mappings,uVar8);
      }
      else {
        uVar8 = uVar8 + 1;
        lVar9 = lVar9 + 0x50;
      }
      iVar10 = (this->DefaultKeyMappings).Mappings.ArrayNum;
    } while ((int)uVar8 < iVar10);
    if (bVar4) {
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x50,8,(ForAnyElementType *)this_00,iVar10,
                 &(this->DefaultKeyMappings).Mappings.ArrayMax);
    }
  }
  if (0 < iVar1 - (this->DefaultKeyMappings).Mappings.ArrayNum) {
    pIVar7 = IEnhancedInputModule::Get();
    (**(code **)((longlong)*pIVar7 + 0x40))(pIVar7);
    local_30 = &local_48;
    local_40 = 0;
    local_38 = UE::Core::Private::Function::
               TFunctionRefCaller<`UEnhancedInputLibrary::RequestRebuildControlMappingsUsingContext'::__l2::<lambda_1>,void,IEnhancedInputSubsystemInterface_*>
               ::Call;
    local_48 = this;
    UEnhancedInputLibrary::ForEachSubsystem
              ((TFunctionRef<void___cdecl(IEnhancedInputSubsystemInterface_*)> *)&local_38);
  }
  return;
}

// UnmapKey @ 14a6ffa90

void __thiscall
UInputMappingContext::UnmapKey(UInputMappingContext *this,UInputAction *param_1,FKey *param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  uint uVar3;
  uint uVar4;
  IEnhancedInputModule *pIVar5;
  FScriptContainerElement *pFVar6;
  bool bVar7;
  UInputMappingContext *local_28;
  undefined1 local_20;
  code *local_18;
  UInputMappingContext **local_10;
  
  pFVar1 = (this->DefaultKeyMappings).Mappings.AllocatorInstance.Data;
  pFVar6 = pFVar1;
  do {
    if (pFVar6 == pFVar1 + (longlong)(this->DefaultKeyMappings).Mappings.ArrayNum * 0x50) {
LAB_14a6ffbd5:
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((param_2->KeyDetails).SharedReferenceCount.ReferenceController);
      return;
    }
    if (*(UInputAction **)(pFVar6 + 0x20) == (UInputAction *)0x0) {
      bVar7 = param_1 == (UInputAction *)0x0;
    }
    else {
      bVar7 = *(UInputAction **)(pFVar6 + 0x20) == param_1;
    }
    if ((bVar7) && (*(FName *)(pFVar6 + 0x28) == param_2->KeyName)) {
      uVar3 = (uint)(((longlong)pFVar6 - (longlong)pFVar1) / 0x50);
      if (uVar3 != 0xffffffff) {
        uVar4 = 0;
        if ((int)uVar3 < (this->DefaultKeyMappings).Mappings.ArrayNum) {
          uVar4 = ~uVar3 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        TArray<FEnhancedActionKeyMapping,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl
                  (&(this->DefaultKeyMappings).Mappings,uVar3);
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x50,8,(ForAnyElementType *)&this->DefaultKeyMappings,
                   (this->DefaultKeyMappings).Mappings.ArrayNum,
                   &(this->DefaultKeyMappings).Mappings.ArrayMax);
        pIVar5 = IEnhancedInputModule::Get();
        (**(code **)((longlong)*pIVar5 + 0x40))(pIVar5);
        local_10 = &local_28;
        local_20 = 0;
        local_18 = UE::Core::Private::Function::
                   TFunctionRefCaller<`UEnhancedInputLibrary::RequestRebuildControlMappingsUsingContext'::__l2::<lambda_1>,void,IEnhancedInputSubsystemInterface_*>
                   ::Call;
        local_28 = this;
        UEnhancedInputLibrary::ForEachSubsystem
                  ((TFunctionRef<void___cdecl(IEnhancedInputSubsystemInterface_*)> *)&local_18);
      }
      goto LAB_14a6ffbd5;
    }
    pFVar6 = pFVar6 + 0x50;
  } while( true );
}

// execMapKey @ 14a706660

void __cdecl UInputMappingContext::execMapKey(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FEnhancedActionKeyMapping *pFVar2;
  UInputAction *local_res10;
  FName local_38;
  FKeyDetails *local_30;
  TReferenceControllerBase<1> *pTStack_28;
  FKey local_20;
  
  local_res10 = (UInputAction *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_38.ComparisonIndex.Value = 0;
  local_38.Number = 0;
  local_30 = (FKeyDetails *)0x0;
  pTStack_28 = (TReferenceControllerBase<1> *)0x0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  local_20.KeyName = local_38;
  local_20.KeyDetails.Object = local_30;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_20.KeyDetails.SharedReferenceCount.ReferenceController = pTStack_28;
  if (pTStack_28 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_28->SharedReferenceCount = (atomic<int>)((int)pTStack_28->SharedReferenceCount + 1);
    UNLOCK();
  }
  pFVar2 = MapKey((UInputMappingContext *)param_1,local_res10,&local_20);
  FEnhancedActionKeyMapping::operator=(param_3,pFVar2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_28);
  return;
}

// execShouldShowInputModeQuery @ 14a7082f0

void __cdecl
UInputMappingContext::execShouldShowInputModeQuery(UObject *param_1,FFrame *param_2,void *param_3)

{
  UClass *this;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  this = UEnhancedInputDeveloperSettings::StaticClass();
  if ((this->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this);
  }
  *(byte *)param_3 = *(byte *)((this->ClassDefaultObject).field0_0x0.DebugPtr + 6) >> 4 & 1;
  return;
}

// execUnmapAll @ 14a708a40

void __cdecl UInputMappingContext::execUnmapAll(UObject *param_1,FFrame *param_2,void *param_3)

{
  IEnhancedInputModule *pIVar1;
  UObject *local_28;
  undefined1 local_20;
  code *local_18;
  UObject **local_10;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(int *)&param_1[1].field_0x20 != 0) {
    DestructItems<FEnhancedActionKeyMapping,int>
              (*(FEnhancedActionKeyMapping **)&param_1[1].field_0x18,*(int *)&param_1[1].field_0x20)
    ;
    *(undefined4 *)&param_1[1].field_0x20 = 0;
    if (*(int *)&param_1[1].field_0x24 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x50,8,0,(ForAnyElementType *)&param_1[1].field_0x18,0,
                 (int *)&param_1[1].field_0x24);
    }
    pIVar1 = IEnhancedInputModule::Get();
    (**(code **)((longlong)*pIVar1 + 0x40))(pIVar1);
    local_10 = &local_28;
    local_20 = 0;
    local_18 = UE::Core::Private::Function::
               TFunctionRefCaller<`UEnhancedInputLibrary::RequestRebuildControlMappingsUsingContext'::__l2::<lambda_1>,void,IEnhancedInputSubsystemInterface_*>
               ::Call;
    local_28 = param_1;
    UEnhancedInputLibrary::ForEachSubsystem
              ((TFunctionRef<void___cdecl(IEnhancedInputSubsystemInterface_*)> *)&local_18);
  }
  return;
}

// execUnmapAllKeysFromAction @ 14a708b00

void __cdecl
UInputMappingContext::execUnmapAllKeysFromAction(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UInputAction *local_res10;
  
  local_res10 = (UInputAction *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  UnmapAllKeysFromAction((UInputMappingContext *)param_1,local_res10);
  return;
}

// execUnmapKey @ 14a708b90

void __cdecl UInputMappingContext::execUnmapKey(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  longlong lVar2;
  code *pcVar3;
  uint uVar4;
  TReferenceControllerBase<1> *pTVar5;
  IEnhancedInputModule *pIVar6;
  longlong lVar7;
  uint uVar8;
  bool bVar9;
  longlong local_res8;
  UObject *local_58;
  undefined1 local_50;
  code *local_48;
  UObject **local_40;
  longlong local_38 [2];
  TReferenceControllerBase<1> *pTStack_28;
  
  local_res8 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  local_38[0] = 0;
  local_38[1] = 0;
  pTStack_28 = (TReferenceControllerBase<1> *)0x0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_38);
  }
  pTVar5 = pTStack_28;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (pTStack_28 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_28->SharedReferenceCount = (atomic<int>)((int)pTStack_28->SharedReferenceCount + 1);
    UNLOCK();
  }
  lVar2 = *(longlong *)&param_1[1].field_0x18;
  lVar7 = lVar2;
  do {
    if (lVar7 == (longlong)*(int *)&param_1[1].field_0x20 * 0x50 + lVar2) {
LAB_14a708d8e:
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pTStack_28);
      return;
    }
    if (*(longlong *)(lVar7 + 0x20) == 0) {
      bVar9 = local_res8 == 0;
    }
    else {
      bVar9 = *(longlong *)(lVar7 + 0x20) == local_res8;
    }
    if ((bVar9) && (*(longlong *)(lVar7 + 0x28) == local_38[0])) {
      uVar4 = (uint)((lVar7 - lVar2) / 0x50);
      if (uVar4 != 0xffffffff) {
        uVar8 = 0;
        if ((int)uVar4 < *(int *)&param_1[1].field_0x20) {
          uVar8 = ~uVar4 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        TArray<FEnhancedActionKeyMapping,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl
                  ((TArray<FEnhancedActionKeyMapping,TSizedDefaultAllocator<32>_> *)
                   &param_1[1].field_0x18,uVar4);
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x50,8,(ForAnyElementType *)&param_1[1].field_0x18,*(int *)&param_1[1].field_0x20
                   ,(int *)&param_1[1].field_0x24);
        pIVar6 = IEnhancedInputModule::Get();
        (**(code **)((longlong)*pIVar6 + 0x40))(pIVar6);
        local_40 = &local_58;
        local_50 = 0;
        local_48 = UE::Core::Private::Function::
                   TFunctionRefCaller<`UEnhancedInputLibrary::RequestRebuildControlMappingsUsingContext'::__l2::<lambda_1>,void,IEnhancedInputSubsystemInterface_*>
                   ::Call;
        local_58 = param_1;
        UEnhancedInputLibrary::ForEachSubsystem
                  ((TFunctionRef<void___cdecl(IEnhancedInputSubsystemInterface_*)> *)&local_48);
      }
      goto LAB_14a708d8e;
    }
    lVar7 = lVar7 + 0x50;
  } while( true );
}

// operator() @ 150552a30

bool __thiscall `UInputMappingContext::GetInputModeQuery'::__l7::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<2307393784465326169>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<2307393784465326169>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

