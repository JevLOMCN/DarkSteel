// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioGameplay
// Functions: 13

// StaticClass @ 14d982bd0

UClass * __cdecl UAudioAssetUserData::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAudioAssetUserData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AudioGameplay",L"AudioAssetUserData",
               &Z_Registration_Info_UClass_UAudioAssetUserData.InnerSingleton,
               StaticRegisterNativesUAudioAssetUserData,0x48,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UAudioAssetUserData>,
               InternalVTableHelperCtorCaller<UAudioAssetUserData>,local_res8,
               UAssetUserData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAudioAssetUserData.InnerSingleton;
}

// UAudioAssetUserData @ 14d9876e0

UAudioAssetUserData * __thiscall
UAudioAssetUserData::UAudioAssetUserData(UAudioAssetUserData *this,FVTableHelper *param_1)

{
  UAssetUserData::UAssetUserData((UAssetUserData *)this,param_1);
  this->_padding_ = (longlong)&___7UAudioAssetUserData__6B_;
  (this->MetadataTags).GameplayTags.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MetadataTags).GameplayTags.ArrayNum = 0;
  (this->MetadataTags).GameplayTags.ArrayMax = 0;
  (this->MetadataTags).ParentTags.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MetadataTags).ParentTags.ArrayNum = 0;
  (this->MetadataTags).ParentTags.ArrayMax = 0;
  return this;
}

// UAudioAssetUserData @ 14d987720

UAudioAssetUserData * __thiscall
UAudioAssetUserData::UAudioAssetUserData(UAudioAssetUserData *this,FObjectInitializer *param_1)

{
  UAssetUserData::UAssetUserData((UAssetUserData *)this,param_1);
  this->_padding_ = (longlong)&___7UAudioAssetUserData__6B_;
  (this->MetadataTags).GameplayTags.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MetadataTags).GameplayTags.ArrayNum = 0;
  (this->MetadataTags).GameplayTags.ArrayMax = 0;
  (this->MetadataTags).ParentTags.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MetadataTags).ParentTags.ArrayNum = 0;
  (this->MetadataTags).ParentTags.ArrayMax = 0;
  return this;
}

// ~UAudioAssetUserData @ 14d988560

void __thiscall UAudioAssetUserData::~UAudioAssetUserData(UAudioAssetUserData *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UAudioAssetUserData__6B_;
  pFVar1 = (this->MetadataTags).ParentTags.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->MetadataTags).GameplayTags.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UAssetUserData::~UAssetUserData((UAssetUserData *)this);
  return;
}

// Get @ 14d98d040

UAudioAssetUserData * __cdecl UAudioAssetUserData::Get(UObject *param_1)

{
  int iVar1;
  code *pcVar2;
  UClass *pUVar3;
  longlong *plVar4;
  UAudioAssetUserData *pUVar5;
  UClass *local_res8;
  
  if (param_1 == (UObject *)0x0) {
    return (UAudioAssetUserData *)0x0;
  }
  pUVar3 = Z_Construct_UClass_UInterface_AssetUserData_NoRegister();
  plVar4 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)param_1,pUVar3);
  if (plVar4 != (longlong *)0x0) {
    pcVar2 = *(code **)(*plVar4 + 0x18);
    local_res8 = StaticClass();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res8);
    }
    pUVar5 = (UAudioAssetUserData *)(*pcVar2)(plVar4,&local_res8);
    if (pUVar5 != (UAudioAssetUserData *)0x0) {
      pUVar3 = StaticClass();
      iVar1 = (int)pUVar3->_padding_;
      if ((iVar1 <= *(int *)(pUVar5->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar5->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar3->_padding_)) {
        return pUVar5;
      }
    }
    return (UAudioAssetUserData *)0x0;
  }
  return (UAudioAssetUserData *)0x0;
}

// GetAllTags @ 14d98d430

FGameplayTagContainer * __cdecl
UAudioAssetUserData::GetAllTags(FGameplayTagContainer *__return_storage_ptr__,USoundBase *param_1)

{
  UAudioAssetUserData *pUVar1;
  UObject *pUVar2;
  
  (__return_storage_ptr__->GameplayTags).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->GameplayTags).ArrayNum = 0;
  (__return_storage_ptr__->GameplayTags).ArrayMax = 0;
  (__return_storage_ptr__->ParentTags).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->ParentTags).ArrayNum = 0;
  (__return_storage_ptr__->ParentTags).ArrayMax = 0;
  if (param_1 != (USoundBase *)0x0) {
    pUVar1 = Get((UObject *)param_1);
    if (pUVar1 != (UAudioAssetUserData *)0x0) {
      FGameplayTagContainer::AppendTags(__return_storage_ptr__,&pUVar1->MetadataTags);
    }
    pUVar2 = (UObject *)(**(code **)(param_1->_padding_ + 0x330))(param_1);
    pUVar1 = Get(pUVar2);
    if (pUVar1 != (UAudioAssetUserData *)0x0) {
      FGameplayTagContainer::AppendTags(__return_storage_ptr__,&pUVar1->MetadataTags);
    }
  }
  return __return_storage_ptr__;
}

// GetFilteredTags @ 14d98d6d0

FGameplayTagContainer * __cdecl
UAudioAssetUserData::GetFilteredTags
          (FGameplayTagContainer *__return_storage_ptr__,USoundBase *param_1,FGameplayTag param_2)

{
  UAudioAssetUserData *pUVar1;
  UObject *pUVar2;
  FName local_res18;
  FGameplayTagContainer local_48;
  FGameplayTagContainer local_28;
  
  local_48.GameplayTags.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.GameplayTags.ArrayNum = 0;
  local_48.GameplayTags.ArrayMax = 0;
  local_48.ParentTags.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.ParentTags.ArrayNum = 0;
  local_48.ParentTags.ArrayMax = 0;
  local_res18 = param_2.TagName;
  if (param_1 != (USoundBase *)0x0) {
    pUVar1 = Get((UObject *)param_1);
    if (pUVar1 != (UAudioAssetUserData *)0x0) {
      FGameplayTagContainer::AppendTags(&local_48,&pUVar1->MetadataTags);
    }
    pUVar2 = (UObject *)(**(code **)(param_1->_padding_ + 0x330))(param_1);
    pUVar1 = Get(pUVar2);
    if (pUVar1 != (UAudioAssetUserData *)0x0) {
      FGameplayTagContainer::AppendTags(&local_48,&pUVar1->MetadataTags);
    }
  }
  local_28.GameplayTags.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.GameplayTags.ArrayNum = 0;
  local_28.GameplayTags.ArrayMax = 0;
  local_28.ParentTags.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.ParentTags.ArrayNum = 0;
  local_28.ParentTags.ArrayMax = 0;
  FGameplayTagContainer::AddTag(&local_28,(FGameplayTag *)&local_res18);
  FGameplayTagContainer::Filter(&local_48,__return_storage_ptr__,&local_28);
  if (local_28.ParentTags.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.ParentTags.AllocatorInstance.Data);
  }
  if (local_28.GameplayTags.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.GameplayTags.AllocatorInstance.Data);
  }
  if (local_48.ParentTags.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.ParentTags.AllocatorInstance.Data);
  }
  if (local_48.GameplayTags.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.GameplayTags.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 14d98dae0

UClass * __cdecl UAudioAssetUserData::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAudioAssetUserData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AudioGameplay",L"AudioAssetUserData",
               &Z_Registration_Info_UClass_UAudioAssetUserData.InnerSingleton,
               StaticRegisterNativesUAudioAssetUserData,0x48,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UAudioAssetUserData>,
               InternalVTableHelperCtorCaller<UAudioAssetUserData>,local_res8,
               UAssetUserData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAudioAssetUserData.InnerSingleton;
}

// HasTag @ 14d98e2e0

bool __cdecl UAudioAssetUserData::HasTag(USoundBase *param_1,FGameplayTag param_2,bool param_3)

{
  int iVar1;
  UAudioAssetUserData *pUVar2;
  UObject *pUVar3;
  ForAnyElementType FVar4;
  bool bVar5;
  FGameplayTagContainer local_28;
  
  local_28.GameplayTags.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.GameplayTags.ArrayNum = 0;
  local_28.GameplayTags.ArrayMax = 0;
  local_28.ParentTags.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.ParentTags.ArrayNum = 0;
  local_28.ParentTags.ArrayMax = 0;
  iVar1 = 0;
  if (param_1 != (USoundBase *)0x0) {
    pUVar2 = Get((UObject *)param_1);
    if (pUVar2 != (UAudioAssetUserData *)0x0) {
      FGameplayTagContainer::AppendTags(&local_28,&pUVar2->MetadataTags);
    }
    pUVar3 = (UObject *)(**(code **)(param_1->_padding_ + 0x330))(param_1);
    pUVar2 = Get(pUVar3);
    if (pUVar2 != (UAudioAssetUserData *)0x0) {
      FGameplayTagContainer::AppendTags(&local_28,&pUVar2->MetadataTags);
    }
    iVar1 = local_28.GameplayTags.ArrayNum;
  }
  if (param_3) {
    if (param_2.TagName != (FName)0x0) {
      for (FVar4.Data = local_28.GameplayTags.AllocatorInstance.Data;
          (FName *)FVar4.Data !=
          (FName *)(local_28.GameplayTags.AllocatorInstance.Data + (longlong)iVar1 * 8);
          FVar4.Data = FVar4.Data + 8) {
        if (*(FName *)FVar4.Data == param_2.TagName) goto LAB_14d98e404;
      }
    }
  }
  else if (param_2.TagName != (FName)0x0) {
    for (FVar4.Data = local_28.GameplayTags.AllocatorInstance.Data;
        (FName *)FVar4.Data !=
        (FName *)(local_28.GameplayTags.AllocatorInstance.Data + (longlong)iVar1 * 8);
        FVar4.Data = FVar4.Data + 8) {
      if (*(FName *)FVar4.Data == param_2.TagName) goto LAB_14d98e404;
    }
    for (FVar4.Data = local_28.ParentTags.AllocatorInstance.Data;
        (FName *)FVar4.Data !=
        (FName *)(local_28.ParentTags.AllocatorInstance.Data +
                 (longlong)local_28.ParentTags.ArrayNum * 8); FVar4.Data = FVar4.Data + 8) {
      if (*(FName *)FVar4.Data == param_2.TagName) goto LAB_14d98e404;
    }
  }
  bVar5 = false;
LAB_14d98e390:
  if ((FName *)local_28.ParentTags.AllocatorInstance.Data != (FName *)0x0) {
    FMemory::Free(local_28.ParentTags.AllocatorInstance.Data);
  }
  if ((FName *)local_28.GameplayTags.AllocatorInstance.Data != (FName *)0x0) {
    FMemory::Free(local_28.GameplayTags.AllocatorInstance.Data);
  }
  return bVar5;
LAB_14d98e404:
  bVar5 = true;
  goto LAB_14d98e390;
}

// StaticRegisterNativesUAudioAssetUserData @ 14d9935f0

void __cdecl UAudioAssetUserData::StaticRegisterNativesUAudioAssetUserData(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 3;
  local_18.DataPtr = Z_Construct_UClass_UAudioAssetUserData_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execGetAllTags @ 14d996a80

void __cdecl UAudioAssetUserData::execGetAllTags(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  FProperty *pFVar2;
  code *pcVar3;
  UObjectBaseUtility *this;
  UClass *pUVar4;
  longlong *plVar5;
  longlong lVar6;
  UObject *pUVar7;
  UAudioAssetUserData *pUVar8;
  UObjectBaseUtility *local_res10;
  UClass *local_res20;
  FGameplayTagContainer local_38;
  
  local_res10 = (UObjectBaseUtility *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  this = local_res10;
  local_38.GameplayTags.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.GameplayTags.ArrayNum = 0;
  local_38.GameplayTags.ArrayMax = 0;
  local_38.ParentTags.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_38.ParentTags.ArrayNum = 0;
  local_38.ParentTags.ArrayMax = 0;
  if (local_res10 == (UObjectBaseUtility *)0x0) goto LAB_14d996bd1;
  pUVar4 = Z_Construct_UClass_UInterface_AssetUserData_NoRegister();
  plVar5 = UObjectBaseUtility::GetInterfaceAddress(this,pUVar4);
  if (plVar5 != (longlong *)0x0) {
    pcVar3 = *(code **)(*plVar5 + 0x18);
    local_res20 = StaticClass();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res20 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res20);
    }
    lVar6 = (*pcVar3)(plVar5,&local_res20);
    if (lVar6 == 0) {
LAB_14d996b94:
      lVar6 = 0;
    }
    else {
      pUVar4 = StaticClass();
      iVar1 = (int)pUVar4->_padding_;
      if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x38) < iVar1) ||
         ((longlong *)
          *(undefined1 **)(*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) + (longlong)iVar1 * 8)
          != &pUVar4->_padding_)) goto LAB_14d996b94;
    }
    if (lVar6 != 0) {
      FGameplayTagContainer::AppendTags(&local_38,(FGameplayTagContainer *)(lVar6 + 0x28));
    }
  }
  pUVar7 = (UObject *)(**(code **)(*(longlong *)this + 0x330))(this);
  pUVar8 = Get(pUVar7);
  if (pUVar8 != (UAudioAssetUserData *)0x0) {
    FGameplayTagContainer::AppendTags(&local_38,&pUVar8->MetadataTags);
  }
LAB_14d996bd1:
  FGameplayTagContainer::operator=(param_3,&local_38);
  if (local_38.ParentTags.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.ParentTags.AllocatorInstance.Data);
  }
  if (local_38.GameplayTags.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.GameplayTags.AllocatorInstance.Data);
  }
  return;
}

// execGetFilteredTags @ 14d996cf0

void __cdecl
UAudioAssetUserData::execGetFilteredTags(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  FProperty *pFVar2;
  code *pcVar3;
  UObjectBaseUtility *this;
  UClass *pUVar4;
  longlong *plVar5;
  longlong lVar6;
  UObject *pUVar7;
  UAudioAssetUserData *pUVar8;
  FName local_res10 [2];
  UObjectBaseUtility *local_res20;
  UClass *local_98;
  FName local_90;
  FGameplayTagContainer local_88;
  FGameplayTagContainer local_68;
  FGameplayTagContainer local_48;
  
  local_res20 = (UObjectBaseUtility *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res10[0].ComparisonIndex.Value = 0;
  local_res10[0].Number = 0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  this = local_res20;
  local_88.GameplayTags.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.GameplayTags.ArrayNum = 0;
  local_88.GameplayTags.ArrayMax = 0;
  local_88.ParentTags.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_90 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_88.ParentTags.ArrayNum = 0;
  local_88.ParentTags.ArrayMax = 0;
  if (local_res20 == (UObjectBaseUtility *)0x0) goto LAB_14d996e6f;
  pUVar4 = Z_Construct_UClass_UInterface_AssetUserData_NoRegister();
  plVar5 = UObjectBaseUtility::GetInterfaceAddress(this,pUVar4);
  if (plVar5 != (longlong *)0x0) {
    pcVar3 = *(code **)(*plVar5 + 0x18);
    local_98 = StaticClass();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_98 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_98);
    }
    lVar6 = (*pcVar3)(plVar5,&local_98);
    if (lVar6 == 0) {
LAB_14d996e34:
      lVar6 = 0;
    }
    else {
      pUVar4 = StaticClass();
      iVar1 = (int)pUVar4->_padding_;
      if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x38) < iVar1) ||
         ((longlong *)
          *(undefined1 **)(*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) + (longlong)iVar1 * 8)
          != &pUVar4->_padding_)) goto LAB_14d996e34;
    }
    if (lVar6 != 0) {
      FGameplayTagContainer::AppendTags(&local_88,(FGameplayTagContainer *)(lVar6 + 0x28));
    }
  }
  pUVar7 = (UObject *)(**(code **)(*(longlong *)this + 0x330))(this);
  pUVar8 = Get(pUVar7);
  if (pUVar8 != (UAudioAssetUserData *)0x0) {
    FGameplayTagContainer::AppendTags(&local_88,&pUVar8->MetadataTags);
  }
LAB_14d996e6f:
  local_68.GameplayTags.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.GameplayTags.ArrayNum = 0;
  local_68.GameplayTags.ArrayMax = 0;
  local_68.ParentTags.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.ParentTags.ArrayNum = 0;
  local_68.ParentTags.ArrayMax = 0;
  FGameplayTagContainer::AddTag(&local_68,(FGameplayTag *)&local_90);
  FGameplayTagContainer::Filter(&local_88,&local_48,&local_68);
  if (local_68.ParentTags.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.ParentTags.AllocatorInstance.Data);
  }
  if (local_68.GameplayTags.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.GameplayTags.AllocatorInstance.Data);
  }
  if (local_88.ParentTags.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.ParentTags.AllocatorInstance.Data);
  }
  if (local_88.GameplayTags.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.GameplayTags.AllocatorInstance.Data);
  }
  FGameplayTagContainer::operator=(param_3,&local_48);
  if (local_48.ParentTags.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.ParentTags.AllocatorInstance.Data);
  }
  if (local_48.GameplayTags.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.GameplayTags.AllocatorInstance.Data);
  }
  return;
}

// execHasTag @ 14d9971a0

void __cdecl UAudioAssetUserData::execHasTag(UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  int iVar2;
  FProperty *pFVar3;
  code *pcVar4;
  longlong lVar5;
  UObjectBaseUtility *this;
  UClass *pUVar6;
  longlong *plVar7;
  longlong lVar8;
  UObject *pUVar9;
  UAudioAssetUserData *pUVar10;
  ForAnyElementType FVar11;
  undefined1 uVar12;
  bool bVar13;
  int local_res10 [2];
  longlong local_res18;
  UObjectBaseUtility *local_res20;
  UClass *local_68;
  FGameplayTagContainer local_60;
  
  local_res20 = (UObjectBaseUtility *)0x0;
  FObjectPropertyBase::StaticClass();
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res18 = 0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  this = local_res20;
  lVar5 = local_res18;
  bVar13 = local_res10[0] == 0;
  local_60.GameplayTags.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_60.GameplayTags.ArrayMax = 0;
  local_60.ParentTags.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_60.ParentTags.ArrayNum = 0;
  local_60.ParentTags.ArrayMax = 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_60.GameplayTags.ArrayNum = 0;
  if (local_res20 != (UObjectBaseUtility *)0x0) {
    pUVar6 = Z_Construct_UClass_UInterface_AssetUserData_NoRegister();
    plVar7 = UObjectBaseUtility::GetInterfaceAddress(this,pUVar6);
    if (plVar7 != (longlong *)0x0) {
      pcVar4 = *(code **)(*plVar7 + 0x18);
      local_68 = StaticClass();
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_68 != (UClass *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)local_68);
      }
      lVar8 = (*pcVar4)(plVar7,&local_68);
      if (lVar8 == 0) {
LAB_14d997332:
        lVar8 = 0;
      }
      else {
        pUVar6 = StaticClass();
        iVar2 = (int)pUVar6->_padding_;
        if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x38) < iVar2) ||
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x30) + (longlong)iVar2 * 8) !=
            &pUVar6->_padding_)) goto LAB_14d997332;
      }
      if (lVar8 != 0) {
        FGameplayTagContainer::AppendTags(&local_60,(FGameplayTagContainer *)(lVar8 + 0x28));
      }
    }
    pUVar9 = (UObject *)(**(code **)(*(longlong *)this + 0x330))(this);
    pUVar10 = Get(pUVar9);
    if (pUVar10 != (UAudioAssetUserData *)0x0) {
      FGameplayTagContainer::AppendTags(&local_60,&pUVar10->MetadataTags);
    }
  }
  local_68 = (UClass *)0x0;
  if (bVar13) {
    if (lVar5 != 0) {
      for (FVar11.Data = local_60.GameplayTags.AllocatorInstance.Data;
          FVar11.Data !=
          local_60.GameplayTags.AllocatorInstance.Data +
          (longlong)local_60.GameplayTags.ArrayNum * 8; FVar11.Data = FVar11.Data + 8) {
        if (*(longlong *)FVar11.Data == lVar5) goto LAB_14d997425;
      }
      for (FVar11.Data = local_60.ParentTags.AllocatorInstance.Data;
          FVar11.Data !=
          local_60.ParentTags.AllocatorInstance.Data + (longlong)local_60.ParentTags.ArrayNum * 8;
          FVar11.Data = FVar11.Data + 8) {
        if (*(longlong *)FVar11.Data == lVar5) goto LAB_14d997425;
      }
    }
  }
  else if (lVar5 != 0) {
    for (FVar11.Data = local_60.GameplayTags.AllocatorInstance.Data;
        FVar11.Data !=
        local_60.GameplayTags.AllocatorInstance.Data + (longlong)local_60.GameplayTags.ArrayNum * 8;
        FVar11.Data = FVar11.Data + 8) {
      if (*(longlong *)FVar11.Data == lVar5) goto LAB_14d997425;
    }
  }
  uVar12 = 0;
LAB_14d9973b6:
  if (local_60.ParentTags.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_60.ParentTags.AllocatorInstance.Data);
  }
  if (local_60.GameplayTags.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_60.GameplayTags.AllocatorInstance.Data);
  }
  *(undefined1 *)param_3 = uVar12;
  return;
LAB_14d997425:
  uVar12 = 1;
  goto LAB_14d9973b6;
}

