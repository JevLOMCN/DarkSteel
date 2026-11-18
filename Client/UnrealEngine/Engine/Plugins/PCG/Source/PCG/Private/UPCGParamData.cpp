// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 28

// StaticClass @ 149f1fce0

UClass * __cdecl UPCGParamData::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGParamData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGParamData",
               &Z_Registration_Info_UClass_UPCGParamData.InnerSingleton,
               StaticRegisterNativesUPCGParamData,0xe0,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UPCGParamData>,InternalVTableHelperCtorCaller<UPCGParamData>,
               local_res8,UPCGData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGParamData.InnerSingleton;
}

// UPCGParamData @ 149f32dc0

UPCGParamData * __thiscall UPCGParamData::UPCGParamData(UPCGParamData *this,FVTableHelper *param_1)

{
  UPCGData::UPCGData((UPCGData *)this,param_1);
  this->_padding_ = (longlong)&___7UPCGParamData__6B_;
  *(undefined8 *)&this->NameMap = 0;
  *(undefined8 *)&(this->NameMap).field_0x8 = 0;
  *(undefined8 *)&(this->NameMap).field_0x20 = 0;
  *(undefined4 *)&(this->NameMap).field_0x28 = 0;
  *(undefined4 *)&(this->NameMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->NameMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->NameMap).field_0x34 = 0;
  *(undefined8 *)&(this->NameMap).field_0x40 = 0;
  *(undefined4 *)&(this->NameMap).field_0x48 = 0;
  this->bHasCachedLastSelector = false;
  FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector(&this->CachedLastSelector);
  return this;
}

// UPCGParamData @ 149f32e30

UPCGParamData * __thiscall
UPCGParamData::UPCGParamData(UPCGParamData *this,FObjectInitializer *param_1)

{
  FName FVar1;
  uint uVar2;
  FName *pFVar3;
  UClass *pUVar4;
  UObject *pUVar5;
  ulonglong uVar6;
  ForAnyElementType FVar7;
  FPCGMetadataDomainID *pFVar8;
  bool bVar9;
  FName local_res8;
  ForAnyElementType local_48;
  uint local_40;
  int local_3c;
  FPCGMetadataDomainID local_38 [2];
  EPCGMetadataDomainFlag local_18;
  undefined2 uStack_17;
  undefined1 uStack_15;
  int iStack_14;
  FName FStack_10;
  
  UPCGData::UPCGData((UPCGData *)this,param_1);
  this->_padding_ = (longlong)&___7UPCGParamData__6B_;
  *(undefined8 *)&this->NameMap = 0;
  *(undefined8 *)&(this->NameMap).field_0x8 = 0;
  *(undefined8 *)&(this->NameMap).field_0x20 = 0;
  *(undefined4 *)&(this->NameMap).field_0x28 = 0;
  *(undefined4 *)&(this->NameMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->NameMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->NameMap).field_0x34 = 0;
  *(undefined8 *)&(this->NameMap).field_0x40 = 0;
  *(undefined4 *)&(this->NameMap).field_0x48 = 0;
  this->bHasCachedLastSelector = false;
  FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector(&this->CachedLastSelector);
  pFVar3 = ::FName::FName(&local_res8,L"Metadata");
  FVar1 = *pFVar3;
  pUVar4 = Z_Construct_UClass_UPCGMetadata_NoRegister();
  pUVar5 = FObjectInitializer::CreateDefaultSubobject
                     (param_1,(UObject *)this,FVar1,pUVar4,pUVar4,true,false);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar5);
  }
  this->_padding_ = (longlong)pUVar5;
  local_18 = PCGMetadataDomainID::Elements.Flag;
  uStack_17 = PCGMetadataDomainID::Elements._1_2_;
  uStack_15 = PCGMetadataDomainID::Elements._3_1_;
  iStack_14 = PCGMetadataDomainID::Elements.CustomFlag;
  FStack_10 = PCGMetadataDomainID::Elements.DebugName;
  local_38[0] = PCGMetadataDomainID::Data;
  local_48.Data = (FScriptContainerElement *)0x0;
  local_40 = 2;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,4,2,0,&local_48,2,&local_3c);
  uVar2 = local_40;
  *(undefined8 *)local_48.Data = local_38[0]._0_8_;
  *(FName *)(local_48.Data + 8) = local_38[0].DebugName;
  local_48.Data[0x10] = (FScriptContainerElement)local_18;
  *(int3 *)(local_48.Data + 0x11) = (int3)(CONCAT13(uStack_15,CONCAT21(uStack_17,local_18)) >> 8);
  *(int *)(local_48.Data + 0x14) = iStack_14;
  *(FName *)(local_48.Data + 0x18) = FStack_10;
  uVar6 = (ulonglong)(int)local_40;
  pFVar8 = (FPCGMetadataDomainID *)(local_48.Data + uVar6 * 0x10);
  FVar7.Data = local_48.Data;
  while( true ) {
    if ((uint)uVar6 != uVar2) {
      `TCheckedPointerIterator<FPCGMetadataDomainID,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_res8);
    }
    if ((FPCGMetadataDomainID *)FVar7.Data == pFVar8) break;
    if ((((FPCGMetadataDomainID *)FVar7.Data)->Flag == PCGMetadataDomainID::Elements.Flag) &&
       (((FPCGMetadataDomainID *)FVar7.Data)->CustomFlag == PCGMetadataDomainID::Elements.CustomFlag
       )) {
      bVar9 = true;
    }
    else {
      bVar9 = false;
    }
    local_38[0] = *(FPCGMetadataDomainID *)FVar7.Data;
    UPCGMetadata::SetupDomain((UPCGMetadata *)this->_padding_,local_38,bVar9);
    uVar6 = (ulonglong)local_40;
    FVar7.Data = FVar7.Data + 0x10;
  }
  if ((FPCGMetadataDomainID *)local_48.Data != (FPCGMetadataDomainID *)0x0) {
    FMemory::Free(local_48.Data);
  }
  return this;
}

// ~UPCGParamData @ 149f34b30

void __thiscall UPCGParamData::~UPCGParamData(UPCGParamData *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UPCGParamData__6B_;
  DestructItems<FString,int>
            (*(FString **)&(this->CachedLastSelector).field_0x28,
             *(int *)&(this->CachedLastSelector).field_0x30);
  pvVar1 = *(void **)&(this->CachedLastSelector).field_0x28;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  *(undefined4 *)&(this->NameMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->NameMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,__int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,__int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,__int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->NameMap);
  UPCGData::~UPCGData((UPCGData *)this);
  return;
}

// AddToCrc @ 149f3c120

void __thiscall UPCGParamData::AddToCrc(UPCGParamData *this,FArchiveCrc32 *param_1,bool param_2)

{
  UClass *this_00;
  FString local_18;
  
  UPCGData::AddToCrc((UPCGData *)this,param_1,param_2);
  this_00 = StaticClass();
  UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this_00,&local_18,(UObject *)0x0);
  ::operator<<((FArchive *)param_1,&local_18);
  if ((UPCGMetadata *)this->_padding_ != (UPCGMetadata *)0x0) {
    UPCGMetadata::AddToCrc((UPCGMetadata *)this->_padding_,param_1,param_2);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// DuplicateData @ 149f41f00

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UPCGParamData * __thiscall
UPCGParamData::DuplicateData(UPCGParamData *this,FPCGContext *param_1,bool param_2)

{
  code *pcVar1;
  bool bVar2;
  UPCGParamData *pUVar3;
  FPCGMetadataInitializeParams local_38;
  
  pUVar3 = FPCGContext::NewObject_AnyThread<UPCGParamData>(param_1);
  if (param_2) {
    if (((pUVar3 == (UPCGParamData *)0x0) || (pUVar3->_padding_ == 0)) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("NewParamData && NewParamData->Metadata",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\PCGParamData.cpp"
                           ,0xdb,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pUVar3 = (UPCGParamData *)(*pcVar1)();
      return pUVar3;
    }
    local_38.Parent = (UPCGMetadata *)this->_padding_;
    local_38.DomainMapping.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_38.DomainMapping.ArrayNum = 0;
    local_38.DomainMapping.ArrayMax = 0;
    local_38.DomainInitializeParams.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_38.DomainInitializeParams.ArrayNum = 0;
    local_38.DomainInitializeParams.ArrayMax = 0;
    UPCGMetadata::InitializeAsCopy((UPCGMetadata *)pUVar3->_padding_,&local_38);
    DestructItems<TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams>,int>
              ((TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams> *)
               local_38.DomainInitializeParams.AllocatorInstance.Data,
               local_38.DomainInitializeParams.ArrayNum);
    if ((TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams> *)
        local_38.DomainInitializeParams.AllocatorInstance.Data !=
        (TTuple<FPCGMetadataDomainID,FPCGMetadataDomainInitializeParams> *)0x0) {
      FMemory::Free(local_38.DomainInitializeParams.AllocatorInstance.Data);
    }
    if (local_38.DomainMapping.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.DomainMapping.AllocatorInstance.Data);
    }
  }
  return pUVar3;
}

// FilterParamsByKey @ 149f44680

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UPCGParamData * __thiscall
UPCGParamData::FilterParamsByKey(UPCGParamData *this,FPCGContext *param_1,long64 param_2)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  UPCGParamData *pUVar4;
  long64 local_res8;
  
  pUVar4 = FPCGContext::NewObject_AnyThread<UPCGParamData>(param_1);
  plVar1 = &pUVar4->_padding_;
  if (((pUVar4 == (UPCGParamData *)0x0) || (*plVar1 == 0)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("NewParams && NewParams->Metadata",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\PCGParamData.cpp"
                         ,0xa2,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pUVar4 = (UPCGParamData *)(*pcVar2)();
    return pUVar4;
  }
  UPCGMetadata::AddAttributes((UPCGMetadata *)*plVar1,(UPCGMetadata *)this->_padding_);
  if (param_2 != -1) {
    local_res8 = -1;
    UPCGMetadata::SetAttributes
              ((UPCGMetadata *)*plVar1,param_2,(UPCGMetadata *)this->_padding_,&local_res8);
  }
  return pUVar4;
}

// FilterParamsByName @ 149f44730

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UPCGParamData * __thiscall
UPCGParamData::FilterParamsByName(UPCGParamData *this,FPCGContext *param_1,FName *param_2)

{
  longlong lVar1;
  long64 *plVar2;
  UPCGParamData *pUVar3;
  undefined8 local_res18 [2];
  FName *local_28;
  undefined8 *local_20;
  
  plVar2 = TMapBase<FName,__int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,__int64,0>_>
           ::Find((TMapBase<FName,__int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,__int64,0>_>
                   *)&this->NameMap,*param_2);
  if (plVar2 == (long64 *)0x0) {
    pUVar3 = FilterParamsByKey(this,param_1,-1);
  }
  else {
    lVar1 = *plVar2;
    pUVar3 = FilterParamsByKey(this,param_1,lVar1);
    if (lVar1 != -1) {
      local_20 = local_res18;
      local_res18[0] = 0;
      local_28 = param_2;
      TSet<TTuple<FName,__int64>,TDefaultMapHashableKeyFuncs<FName,__int64,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<FName_const_&,__int64_&&>_>
                ((TSet<TTuple<FName,__int64>,TDefaultMapHashableKeyFuncs<FName,__int64,0>,FDefaultSetAllocator>
                  *)&pUVar3->NameMap,(TPairInitializer<FName_const_&,__int64_&&> *)&stack0x00000008,
                 (bool *)&local_28);
      return pUVar3;
    }
  }
  return pUVar3;
}

// FindMetadataKey @ 149f44cb0

long64 __thiscall UPCGParamData::FindMetadataKey(UPCGParamData *this,FName *param_1)

{
  long64 *plVar1;
  
  plVar1 = TMapBase<FName,__int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,__int64,0>_>
           ::Find((TMapBase<FName,__int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,__int64,0>_>
                   *)&this->NameMap,*param_1);
  if (plVar1 != (long64 *)0x0) {
    return *plVar1;
  }
  return -1;
}

// FindOrAddMetadataKey @ 149f44ce0

long64 __thiscall UPCGParamData::FindOrAddMetadataKey(UPCGParamData *this,FName *param_1)

{
  code *pcVar1;
  bool bVar2;
  long64 *plVar3;
  long64 lVar4;
  long64 local_res18;
  FName *local_18;
  long64 *local_10;
  
  plVar3 = TMapBase<FName,__int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,__int64,0>_>
           ::Find((TMapBase<FName,__int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,__int64,0>_>
                   *)&this->NameMap,*param_1);
  if (plVar3 != (long64 *)0x0) {
    return *plVar3;
  }
  if (this->_padding_ == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Metadata",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\PCGParamData.cpp"
                       ,0x7d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      lVar4 = (*pcVar1)();
      return lVar4;
    }
  }
  local_res18 = UPCGMetadata::AddEntry((UPCGMetadata *)this->_padding_,-1);
  local_10 = &local_res18;
  local_18 = param_1;
  TSet<TTuple<FName,__int64>,TDefaultMapHashableKeyFuncs<FName,__int64,0>,FDefaultSetAllocator>::
  Emplace<TPairInitializer<FName_const_&,__int64_const_&>_>
            ((TSet<TTuple<FName,__int64>,TDefaultMapHashableKeyFuncs<FName,__int64,0>,FDefaultSetAllocator>
              *)&this->NameMap,(TPairInitializer<FName_const_&,__int64_const_&> *)&stack0x00000008,
             (bool *)&local_18);
  return local_res18;
}

// GetAllSupportedMetadataDomainIDs @ 149f47bf0

TArray<FPCGMetadataDomainID,TSizedDefaultAllocator<32>_> * __thiscall
UPCGParamData::GetAllSupportedMetadataDomainIDs
          (UPCGParamData *this,
          TArray<FPCGMetadataDomainID,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  FPCGMetadataDomainID FVar2;
  FPCGMetadataDomainID FVar3;
  undefined8 local_48;
  FName FStack_40;
  undefined8 local_38;
  FName FStack_30;
  
  FVar3 = PCGMetadataDomainID::Data;
  FVar2 = PCGMetadataDomainID::Elements;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 2;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,4,2,0,&__return_storage_ptr__->AllocatorInstance,2,
             &__return_storage_ptr__->ArrayMax);
  pFVar1 = (__return_storage_ptr__->AllocatorInstance).Data;
  local_48 = FVar3._0_8_;
  FStack_40 = FVar3.DebugName;
  *(undefined8 *)pFVar1 = local_48;
  *(FName *)(pFVar1 + 8) = FStack_40;
  local_38 = FVar2._0_8_;
  FStack_30 = FVar2.DebugName;
  *(undefined8 *)(pFVar1 + 0x10) = local_38;
  *(FName *)(pFVar1 + 0x18) = FStack_30;
  return __return_storage_ptr__;
}

// GetCachedLastSelector @ 149f48070

FPCGAttributePropertyInputSelector * __thiscall
UPCGParamData::GetCachedLastSelector
          (UPCGParamData *this,FPCGAttributePropertyInputSelector *__return_storage_ptr__)

{
  int iVar1;
  FName FVar2;
  FPCGAttributePropertySelector local_48;
  
  if (this->bHasCachedLastSelector != false) {
    FPCGAttributePropertySelector::FPCGAttributePropertySelector
              ((FPCGAttributePropertySelector *)__return_storage_ptr__,
               (FPCGAttributePropertySelector *)&this->CachedLastSelector);
    *(undefined ***)__return_storage_ptr__ = &___7FPCGAttributePropertyInputSelector__6B_;
    return __return_storage_ptr__;
  }
  FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector
            ((FPCGAttributePropertyInputSelector *)&local_48);
  if ((UPCGMetadata *)this->_padding_ != (UPCGMetadata *)0x0) {
    iVar1 = UPCGMetadata::GetAttributeCount((UPCGMetadata *)this->_padding_);
    if (0 < iVar1) {
      FVar2 = UPCGMetadata::GetLatestAttributeNameOrNone((UPCGMetadata *)this->_padding_);
      FPCGAttributePropertySelector::SetAttributeName(&local_48,*(FName *)FVar2,true);
    }
  }
  FPCGAttributePropertySelector::FPCGAttributePropertySelector
            ((FPCGAttributePropertySelector *)__return_storage_ptr__,&local_48);
  *(undefined ***)__return_storage_ptr__ = &___7FPCGAttributePropertyInputSelector__6B_;
  DestructItems<FString,int>
            ((FString *)local_48.ExtraNames.AllocatorInstance.Data,local_48.ExtraNames.ArrayNum);
  if (local_48.ExtraNames.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.ExtraNames.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetDataType @ 149f49630

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

EPCGDataType __thiscall UPCGParamData::GetDataType(UPCGParamData *this)

{
  return Param;
}

// GetDataTypeId @ 149f49640

FPCGDataTypeBaseId * __thiscall UPCGParamData::GetDataTypeId(UPCGParamData *this)

{
  UPackage *pUVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_FPCGDataTypeBaseId_const&___ptr64___cdecl_FPCGDataTypeInfoParam::AsId(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_FPCGDataTypeBaseId_const&___ptr64___cdecl_FPCGDataTypeInfoParam::AsId(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_FPCGDataTypeBaseId_const&___ptr64___cdecl_FPCGDataTypeInfoParam::AsId(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      if (Z_Registration_Info_UScriptStruct_FPCGDataTypeInfoParam.OuterSingleton ==
          (UScriptStruct *)0x0) {
        pUVar1 = Z_Construct_UPackage__Script_PCG();
        Z_Registration_Info_UScriptStruct_FPCGDataTypeInfoParam.OuterSingleton =
             GetStaticStruct(Z_Construct_UScriptStruct_FPCGDataTypeInfoParam,(UObject *)pUVar1,
                             L"PCGDataTypeInfoParam");
      }
      FPCGDataTypeBaseId::FPCGDataTypeBaseId
                (&`public:_static_struct_FPCGDataTypeBaseId_const&___ptr64___cdecl_FPCGDataTypeInfoParam::AsId(void)'
                  ::__l2::Id,Z_Registration_Info_UScriptStruct_FPCGDataTypeInfoParam.OuterSingleton)
      ;
      _Init_thread_footer(&`public:_static_struct_FPCGDataTypeBaseId_const&___ptr64___cdecl_FPCGDataTypeInfoParam::AsId(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_FPCGDataTypeBaseId_const&___ptr64___cdecl_FPCGDataTypeInfoParam::AsId(void)'
              ::__l2::Id;
    }
  }
  return &`public:_static_struct_FPCGDataTypeBaseId_const&___ptr64___cdecl_FPCGDataTypeInfoParam::AsId(void)'
          ::__l2::Id;
}

// GetDefaultMetadataDomainID @ 149f49650

FPCGMetadataDomainID * __thiscall
UPCGParamData::GetDefaultMetadataDomainID
          (UPCGParamData *this,FPCGMetadataDomainID *__return_storage_ptr__)

{
  *__return_storage_ptr__ = PCGMetadataDomainID::Elements;
  return __return_storage_ptr__;
}

// GetMetadataDomainIDFromSelector @ 149f4b110

FPCGMetadataDomainID * __thiscall
UPCGParamData::GetMetadataDomainIDFromSelector
          (UPCGParamData *this,FPCGMetadataDomainID *__return_storage_ptr__,
          FPCGAttributePropertySelector *param_1)

{
  if (param_1->DomainName == PCGParamDataConstants::ElementsDomainName) {
    *__return_storage_ptr__ = PCGMetadataDomainID::Elements;
    return __return_storage_ptr__;
  }
  UPCGData::GetMetadataDomainIDFromSelector((UPCGData *)this,__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 149f4dba0

UClass * __cdecl UPCGParamData::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGParamData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGParamData",
               &Z_Registration_Info_UClass_UPCGParamData.InnerSingleton,
               StaticRegisterNativesUPCGParamData,0xe0,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UPCGParamData>,InternalVTableHelperCtorCaller<UPCGParamData>,
               local_res8,UPCGData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGParamData.InnerSingleton;
}

// HasCachedLastSelector @ 149f502e0

bool __thiscall UPCGParamData::HasCachedLastSelector(UPCGParamData *this)

{
  int iVar1;
  
  if (this->bHasCachedLastSelector != false) {
    return true;
  }
  if (((UPCGMetadata *)this->_padding_ != (UPCGMetadata *)0x0) &&
     (iVar1 = UPCGMetadata::GetAttributeCount((UPCGMetadata *)this->_padding_), 0 < iVar1)) {
    return true;
  }
  return false;
}

// K2_FilterParamsByKey @ 149f52ce0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UPCGParamData * __thiscall UPCGParamData::K2_FilterParamsByKey(UPCGParamData *this,long64 param_1)

{
  FPCGContext *pFVar1;
  UPCGParamData *pUVar2;
  
  pFVar1 = UPCGBlueprintBaseElement::ResolveContext();
  pUVar2 = FilterParamsByKey(this,pFVar1,param_1);
  return pUVar2;
}

// K2_FilterParamsByName @ 149f52d20

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UPCGParamData * __thiscall UPCGParamData::K2_FilterParamsByName(UPCGParamData *this,FName *param_1)

{
  longlong lVar1;
  FPCGContext *pFVar2;
  long64 *plVar3;
  UPCGParamData *pUVar4;
  TPairInitializer<FName_const_&,__int64_&&> local_res8;
  FName *local_28;
  long64 **local_20;
  
  pFVar2 = UPCGBlueprintBaseElement::ResolveContext();
  plVar3 = TMapBase<FName,__int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,__int64,0>_>
           ::Find((TMapBase<FName,__int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,__int64,0>_>
                   *)&this->NameMap,*param_1);
  if (plVar3 == (long64 *)0x0) {
    pUVar4 = FilterParamsByKey(this,pFVar2,-1);
  }
  else {
    lVar1 = *plVar3;
    pUVar4 = FilterParamsByKey(this,pFVar2,lVar1);
    if (lVar1 != -1) {
      local_20 = &local_res8.Value;
      local_res8.Value = (long64 *)0x0;
      local_28 = param_1;
      TSet<TTuple<FName,__int64>,TDefaultMapHashableKeyFuncs<FName,__int64,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<FName_const_&,__int64_&&>_>
                ((TSet<TTuple<FName,__int64>,TDefaultMapHashableKeyFuncs<FName,__int64,0>,FDefaultSetAllocator>
                  *)&pUVar4->NameMap,&local_res8,(bool *)&local_28);
      return pUVar4;
    }
  }
  return pUVar4;
}

// MetadataDomainSupportsParenting @ 149f55590

bool __thiscall
UPCGParamData::MetadataDomainSupportsParenting(UPCGParamData *this,FPCGMetadataDomainID *param_1)

{
  return false;
}

// SetDomainFromDomainID @ 149f60a10

bool __thiscall
UPCGParamData::SetDomainFromDomainID
          (UPCGParamData *this,FPCGMetadataDomainID *param_1,FPCGAttributePropertySelector *param_2)

{
  bool bVar1;
  
  if ((param_1->Flag == PCGMetadataDomainID::Elements.Flag) &&
     (param_1->CustomFlag == PCGMetadataDomainID::Elements.CustomFlag)) {
    FPCGAttributePropertySelector::SetDomainName
              (param_2,PCGParamDataConstants::ElementsDomainName,false);
    return true;
  }
  bVar1 = UPCGData::SetDomainFromDomainID((UPCGData *)this,param_1,param_2);
  return bVar1;
}

// SetLastSelector @ 149f60c70

void __thiscall
UPCGParamData::SetLastSelector(UPCGParamData *this,FPCGAttributePropertySelector *param_1)

{
  FName FVar1;
  
  if ((((param_1->Selection == Attribute) &&
       (FVar1 = param_1->AttributeName, FVar1 != PCGMetadataAttributeConstants::LastAttributeName))
      && (FVar1 != PCGMetadataAttributeConstants::LastCreatedAttributeName)) &&
     ((FVar1 != PCGMetadataAttributeConstants::SourceAttributeName &&
      (FVar1 != PCGMetadataAttributeConstants::SourceNameAttributeName)))) {
    this->bHasCachedLastSelector = true;
    FPCGAttributePropertySelector::ImportFromOtherSelector
              ((FPCGAttributePropertySelector *)&this->CachedLastSelector,param_1);
    return;
  }
  return;
}

// StaticRegisterNativesUPCGParamData @ 149f63af0

void __cdecl UPCGParamData::StaticRegisterNativesUPCGParamData(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 4;
  local_18.DataPtr = Z_Construct_UClass_UPCGParamData_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execFindMetadataKey @ 149f6fc70

void __cdecl UPCGParamData::execFindMetadataKey(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  long64 *plVar2;
  FName *pFVar3;
  FName local_res8;
  
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  pFVar3 = &local_res8;
  if ((FName *)param_2->MostRecentPropertyAddress != (FName *)0x0) {
    pFVar3 = (FName *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  plVar2 = TMapBase<FName,__int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,__int64,0>_>
           ::Find((TMapBase<FName,__int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,__int64,0>_>
                   *)&param_1[1].field_0x20,*pFVar3);
  if (plVar2 == (long64 *)0x0) {
    *(undefined8 *)param_3 = 0xffffffffffffffff;
  }
  else {
    *(long64 *)param_3 = *plVar2;
  }
  return;
}

// execFindOrAddMetadataKey @ 149f6fd30

void __cdecl UPCGParamData::execFindOrAddMetadataKey(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  bool bVar3;
  long64 *plVar4;
  FName *pFVar5;
  TPairInitializer<FName_const_&,__int64_const_&> local_res8;
  long64 local_res18 [2];
  FName *local_38;
  long64 *local_30;
  
  local_res8.Value = (long64 *)0x0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8.Value,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8.Value);
  }
  pFVar5 = (FName *)&local_res8.Value;
  if ((FName *)param_2->MostRecentPropertyAddress != (FName *)0x0) {
    pFVar5 = (FName *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  plVar4 = TMapBase<FName,__int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,__int64,0>_>
           ::Find((TMapBase<FName,__int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,__int64,0>_>
                   *)&param_1[1].field_0x20,*pFVar5);
  if (plVar4 != (long64 *)0x0) {
    *(long64 *)param_3 = *plVar4;
    return;
  }
  if (*(longlong *)&param_1[1].field_0x10 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Metadata",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\PCGParamData.cpp"
                       ,0x7d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  local_res18[0] = UPCGMetadata::AddEntry(*(UPCGMetadata **)&param_1[1].field_0x10,-1);
  local_30 = local_res18;
  local_38 = pFVar5;
  TSet<TTuple<FName,__int64>,TDefaultMapHashableKeyFuncs<FName,__int64,0>,FDefaultSetAllocator>::
  Emplace<TPairInitializer<FName_const_&,__int64_const_&>_>
            ((TSet<TTuple<FName,__int64>,TDefaultMapHashableKeyFuncs<FName,__int64,0>,FDefaultSetAllocator>
              *)&param_1[1].field_0x20,&local_res8,(bool *)&local_38);
  *(long64 *)param_3 = local_res18[0];
  return;
}

// execK2_FilterParamsByKey @ 149f71dd0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl UPCGParamData::execK2_FilterParamsByKey(UObject *param_1,FFrame *param_2,void *param_3)

{
  longlong *plVar1;
  FProperty *pFVar2;
  code *pcVar3;
  longlong lVar4;
  bool bVar5;
  FPCGContext *pFVar6;
  UPCGParamData *pUVar7;
  longlong local_res8;
  long64 local_res10;
  
  local_res8 = 0;
  FInt64Property::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  lVar4 = local_res8;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar6 = UPCGBlueprintBaseElement::ResolveContext();
  pUVar7 = FPCGContext::NewObject_AnyThread<UPCGParamData>(pFVar6);
  plVar1 = &pUVar7->_padding_;
  if (((pUVar7 == (UPCGParamData *)0x0) || (*plVar1 == 0)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("NewParams && NewParams->Metadata",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\PCGParamData.cpp"
                         ,0xa2,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  UPCGMetadata::AddAttributes((UPCGMetadata *)*plVar1,*(UPCGMetadata **)&param_1[1].field_0x10);
  if (lVar4 != -1) {
    local_res10 = -1;
    UPCGMetadata::SetAttributes
              ((UPCGMetadata *)*plVar1,lVar4,*(UPCGMetadata **)&param_1[1].field_0x10,&local_res10);
  }
  *(UPCGParamData **)param_3 = pUVar7;
  return;
}

// execK2_FilterParamsByName @ 149f71ed0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UPCGParamData::execK2_FilterParamsByName(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  longlong lVar2;
  FPCGContext *pFVar3;
  long64 *plVar4;
  UPCGParamData *pUVar5;
  FName *pFVar6;
  TPairInitializer<FName_const_&,__int64_&&> local_res8;
  undefined8 local_res18;
  FName *local_38;
  undefined8 *local_30;
  
  local_res8.Value = (long64 *)0x0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8.Value,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8.Value);
  }
  pFVar6 = (FName *)&local_res8.Value;
  if ((FName *)param_2->MostRecentPropertyAddress != (FName *)0x0) {
    pFVar6 = (FName *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar3 = UPCGBlueprintBaseElement::ResolveContext();
  plVar4 = TMapBase<FName,__int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,__int64,0>_>
           ::Find((TMapBase<FName,__int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,__int64,0>_>
                   *)&param_1[1].field_0x20,*pFVar6);
  if (plVar4 != (long64 *)0x0) {
    lVar2 = *plVar4;
    pUVar5 = FilterParamsByKey((UPCGParamData *)param_1,pFVar3,lVar2);
    if (lVar2 != -1) {
      local_30 = &local_res18;
      local_res18 = 0;
      local_38 = pFVar6;
      TSet<TTuple<FName,__int64>,TDefaultMapHashableKeyFuncs<FName,__int64,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<FName_const_&,__int64_&&>_>
                ((TSet<TTuple<FName,__int64>,TDefaultMapHashableKeyFuncs<FName,__int64,0>,FDefaultSetAllocator>
                  *)&pUVar5->NameMap,&local_res8,(bool *)&local_38);
    }
    *(UPCGParamData **)param_3 = pUVar5;
    return;
  }
  pUVar5 = FilterParamsByKey((UPCGParamData *)param_1,pFVar3,-1);
  *(UPCGParamData **)param_3 = pUVar5;
  return;
}

