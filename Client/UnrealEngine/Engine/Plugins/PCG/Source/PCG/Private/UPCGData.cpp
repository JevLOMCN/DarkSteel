// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 45

// CanBeSerialized @ 1497266d0

bool __thiscall UPCGData::CanBeSerialized(UPCGData *this)

{
  return true;
}

// ConstMetadata @ 149726730

UPCGMetadata * __thiscall UPCGData::ConstMetadata(UPCGData *this)

{
  return (this->Metadata).field0_0x0.DebugPtr;
}

// GetAllSupportedMetadataDomainIDs @ 149726cf0

TArray<FPCGMetadataDomainID,TSizedDefaultAllocator<32>_> * __thiscall
UPCGData::GetAllSupportedMetadataDomainIDs
          (UPCGData *this,
          TArray<FPCGMetadataDomainID,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  FPCGMetadataDomainID FVar2;
  undefined8 local_28;
  FName FStack_20;
  
  FVar2 = PCGMetadataDomainID::Data;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,4,1,0,&__return_storage_ptr__->AllocatorInstance,1,
             &__return_storage_ptr__->ArrayMax);
  pFVar1 = (__return_storage_ptr__->AllocatorInstance).Data;
  local_28 = FVar2._0_8_;
  FStack_20 = FVar2.DebugName;
  *(undefined8 *)pFVar1 = local_28;
  *(FName *)(pFVar1 + 8) = FStack_20;
  return __return_storage_ptr__;
}

// GetCachedLastSelector @ 149726d60

FPCGAttributePropertyInputSelector * __thiscall
UPCGData::GetCachedLastSelector
          (UPCGData *this,FPCGAttributePropertyInputSelector *__return_storage_ptr__)

{
  FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetDefaultMetadataDomainID @ 149726e30

FPCGMetadataDomainID * __thiscall
UPCGData::GetDefaultMetadataDomainID(UPCGData *this,FPCGMetadataDomainID *__return_storage_ptr__)

{
  *__return_storage_ptr__ = PCGMetadataDomainID::Data;
  return __return_storage_ptr__;
}

// GetUnderlyingDataType @ 1497278d0

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

EPCGDataType __thiscall UPCGData::GetUnderlyingDataType(UPCGData *this)

{
  EPCGDataType EVar1;
  FPCGDataTypeBaseId *this_00;
  undefined1 local_res8 [32];
  
  this_00 = (FPCGDataTypeBaseId *)(**(code **)(this->_padding_ + 0x2f0))(this,local_res8);
  EVar1 = FPCGDataTypeBaseId::AsLegacyType(this_00);
  return EVar1;
}

// GetUnderlyingDataTypeId @ 149727900

FPCGDataTypeBaseId __thiscall UPCGData::GetUnderlyingDataTypeId(UPCGData *this)

{
  UObject *pUVar1;
  undefined8 *puVar2;
  TObjectPtr<UScriptStruct_const_> in_RDX;
  
  puVar2 = (undefined8 *)(**(code **)(this->_padding_ + 0x2b8))();
  pUVar1 = (UObject *)*puVar2;
  *(UObject **)in_RDX.field0_0x0 = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar1);
  }
  return (FPCGDataTypeBaseId)in_RDX.field0_0x0;
}

// HasCachedLastSelector @ 149727960

bool __thiscall UPCGData::HasCachedLastSelector(UPCGData *this)

{
  return false;
}

// HoldsTransientResources @ 1497279d0

bool __thiscall UPCGData::HoldsTransientResources(UPCGData *this)

{
  return false;
}

// IsCacheable @ 149727a10

bool __thiscall UPCGData::IsCacheable(UPCGData *this)

{
  return true;
}

// MutableMetadata @ 149727cc0

UPCGMetadata * __thiscall UPCGData::MutableMetadata(UPCGData *this)

{
  return (this->Metadata).field0_0x0.DebugPtr;
}

// PostDuplicate @ 149727e90

void __thiscall UPCGData::PostDuplicate(UPCGData *this,bool param_1)

{
  ulong64 uVar1;
  
  LOCK();
  UNLOCK();
  uVar1 = (longlong)UIDCounter + 1;
  UIDCounter = (atomic<unsigned___int64>)((longlong)UIDCounter + 1);
  this->UID = uVar1;
  return;
}

// ReleaseTransientResources @ 149727eb0

void __thiscall UPCGData::ReleaseTransientResources(UPCGData *this,wchar_t *param_1)

{
  return;
}

// SetLastSelector @ 149727ed0

void __thiscall UPCGData::SetLastSelector(UPCGData *this,FPCGAttributePropertySelector *param_1)

{
  return;
}

// SupportsFullDataCrc @ 149728060

bool __thiscall UPCGData::SupportsFullDataCrc(UPCGData *this)

{
  return false;
}

// GetDataTypeId @ 149754ac0

FPCGDataTypeBaseId * __thiscall UPCGData::GetDataTypeId(UPCGData *this)

{
  UScriptStruct *pUVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_struct_FPCGDataTypeBaseId_const&___ptr64___cdecl_FPCGDataTypeInfo::AsId(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_struct_FPCGDataTypeBaseId_const&___ptr64___cdecl_FPCGDataTypeInfo::AsId(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_struct_FPCGDataTypeBaseId_const&___ptr64___cdecl_FPCGDataTypeInfo::AsId(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pUVar1 = FPCGDataTypeInfo::StaticStruct();
      FPCGDataTypeBaseId::FPCGDataTypeBaseId
                (&`public:_static_struct_FPCGDataTypeBaseId_const&___ptr64___cdecl_FPCGDataTypeInfo::AsId(void)'
                  ::__l2::Id,pUVar1);
      _Init_thread_footer(&`public:_static_struct_FPCGDataTypeBaseId_const&___ptr64___cdecl_FPCGDataTypeInfo::AsId(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_struct_FPCGDataTypeBaseId_const&___ptr64___cdecl_FPCGDataTypeInfo::AsId(void)'
              ::__l2::Id;
    }
  }
  return &`public:_static_struct_FPCGDataTypeBaseId_const&___ptr64___cdecl_FPCGDataTypeInfo::AsId(void)'
          ::__l2::Id;
}

// StaticClass @ 149778560

UClass * __cdecl UPCGData::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UPCGData.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGData",&Z_Registration_Info_UClass_UPCGData.InnerSingleton,
               StaticRegisterNativesUPCGData,0x48,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UPCGData>,InternalVTableHelperCtorCaller<UPCGData>,aFStackX_8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGData.InnerSingleton;
}

// GetDataType @ 149812d10

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

EPCGDataType __thiscall UPCGData::GetDataType(UPCGData *this)

{
  return Any;
}

// UPCGData @ 149eee160

UPCGData * __thiscall UPCGData::UPCGData(UPCGData *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UPCGData__6B_;
  this->UID = 0;
  (this->Crc).Value = 0;
  (this->Crc).bValid = false;
  (this->Metadata).field0_0x0.DebugPtr = (UPCGMetadata *)0x0;
  this->bIsFullDataCrc = false;
  this->Usage = (atomic<unsigned_char>)0x0;
  this->CollectionRefCount = (atomic<int>)0x0;
  return this;
}

// UPCGData @ 149eee1a0

UPCGData * __thiscall UPCGData::UPCGData(UPCGData *this,FObjectInitializer *param_1)

{
  ulong64 uVar1;
  
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UPCGData__6B_;
  this->UID = 0;
  (this->Crc).Value = 0;
  (this->Crc).bValid = false;
  (this->Metadata).field0_0x0.DebugPtr = (UPCGMetadata *)0x0;
  this->CollectionRefCount = (atomic<int>)0x0;
  this->bIsFullDataCrc = false;
  this->Usage = (atomic<unsigned_char>)0x0;
  if ((this->_padding_ & 0x10) == 0) {
    LOCK();
    UNLOCK();
    uVar1 = (longlong)UIDCounter + 1;
    UIDCounter = (atomic<unsigned___int64>)((longlong)UIDCounter + 1);
    this->UID = uVar1;
  }
  return this;
}

// ~UPCGData @ 149eefc70

void __thiscall UPCGData::~UPCGData(UPCGData *this)

{
  this->_padding_ = (longlong)&___7UPCGData__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// AddToCrc @ 149ef4d60

void __thiscall UPCGData::AddToCrc(UPCGData *this,FArchiveCrc32 *param_1,bool param_2)

{
  FPCGAttributePropertySelector local_48;
  
  (**(code **)(this->_padding_ + 0x300))(this,&local_48);
  FPCGAttributePropertySelector::AddToCrc(&local_48,param_1);
  DestructItems<FString,int>
            ((FString *)local_48.ExtraNames.AllocatorInstance.Data,local_48.ExtraNames.ArrayNum);
  if (local_48.ExtraNames.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.ExtraNames.AllocatorInstance.Data);
  }
  return;
}

// AddUIDToCrc @ 149ef5070

void __thiscall UPCGData::AddUIDToCrc(UPCGData *this,FArchiveCrc32 *param_1)

{
  longlong *plVar1;
  ulong64 local_res8 [4];
  
  local_res8[0] = this->UID;
  plVar1 = (longlong *)param_1->_padding_;
  if (*plVar1 + 8U <= (ulonglong)plVar1[1]) {
    *plVar1 = *plVar1 + 8;
    return;
  }
  if ((param_1->_padding_ & 0x10000) == 0) {
    (**(code **)(param_1->_padding_ + 0x188))(param_1,local_res8,8);
    return;
  }
  FArchive::SerializeByteOrderSwapped((FArchive *)param_1,local_res8);
  return;
}

// ClearUsage @ 149ef88d0

void __thiscall UPCGData::ClearUsage(UPCGData *this,EPCGDataUsage param_1)

{
  atomic<unsigned_char> *paVar1;
  TConsoleVariableData<bool> *pTVar2;
  bool bVar3;
  longlong lVar4;
  undefined1 local_res10 [24];
  code *local_18;
  undefined1 *local_10;
  
  LOCK();
  paVar1 = &this->Usage;
  *paVar1 = (atomic<unsigned_char>)((byte)*paVar1 & ~param_1);
  pTVar2 = PCGSystemSwitches::CVarReleaseTransientResourcesEarly.Ref;
  UNLOCK();
  if (*paVar1 == (atomic<unsigned_char>)0x0) {
    bVar3 = IsInParallelGameThread();
    if ((bVar3) || (bVar3 = IsInGameThread(), bVar3)) {
      lVar4 = 0;
    }
    else {
      lVar4 = 1;
    }
    if ((pTVar2->ShadowedValue[lVar4] == false) || (this->CollectionRefCount == (atomic<int>)0x0)) {
      local_10 = local_res10;
      local_18 = UE::Core::Private::Function::
                 TFunctionRefCaller<`UPCGData::ClearUsage'::__l5::<lambda_1>,void,UPCGData_const_*>
                 ::Call;
      (**(code **)(this->_padding_ + 0x2c0))(this,&local_18);
    }
    return;
  }
  return;
}

// ComputeCrc @ 149ef8c90

FPCGCrc __thiscall UPCGData::ComputeCrc(UPCGData *this,bool param_1)

{
  undefined7 in_register_00000011;
  FPCGCrc FVar1;
  undefined1 in_R8B;
  FArchiveCrc32 local_a8;
  
  FVar1._1_7_ = in_register_00000011;
  FVar1.Value._0_1_ = param_1;
  FArchiveCrc32::FArchiveCrc32(&local_a8,0,(UObject *)0x0);
  (**(code **)(this->_padding_ + 0x370))(this,&local_a8,in_R8B);
  *(uint *)FVar1 = local_a8.CRC;
  *(undefined1 *)((longlong)FVar1 + 4) = 1;
  FArchive::~FArchive((FArchive *)&local_a8);
  return FVar1;
}

// DecCollectionRefCount @ 149efb370

void __thiscall UPCGData::DecCollectionRefCount(UPCGData *this)

{
  code *pcVar1;
  TConsoleVariableData<bool> *pTVar2;
  bool bVar3;
  longlong lVar4;
  undefined1 local_res8 [8];
  code *local_18;
  undefined1 *local_10;
  
  LOCK();
  this->CollectionRefCount = (atomic<int>)((int)this->CollectionRefCount + -1);
  pTVar2 = PCGSystemSwitches::CVarReleaseTransientResourcesEarly.Ref;
  UNLOCK();
  bVar3 = IsInParallelGameThread();
  if (!bVar3) {
    bVar3 = IsInGameThread();
    if (!bVar3) {
      lVar4 = 1;
      goto LAB_149efb3a3;
    }
  }
  lVar4 = 0;
LAB_149efb3a3:
  if (pTVar2->ShadowedValue[lVar4] != false) {
    if ((int)this->CollectionRefCount < 0) {
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_3894552481450950535>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\PCGData.cpp"
                         ,0x79,"CollectionRefCount >= 0");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    if ((this->Usage == (atomic<unsigned_char>)0x0) &&
       (this->CollectionRefCount == (atomic<int>)0x0)) {
      local_10 = local_res8;
      local_18 = UE::Core::Private::Function::
                 TFunctionRefCaller<`UPCGData::DecCollectionRefCount'::__l8::<lambda_1>,void,UPCGData_const_*>
                 ::Call;
      (**(code **)(this->_padding_ + 0x2c0))(this,&local_18);
    }
  }
  return;
}

// DuplicateData @ 149efc020

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UPCGData * __thiscall UPCGData::DuplicateData(UPCGData *this,FPCGContext *param_1,bool param_2)

{
  UPCGData *pUVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000149efc027. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pUVar1 = (UPCGData *)(**(code **)(this->_padding_ + 0x318))(this,param_2);
  return pUVar1;
}

// DuplicateData @ 149efc040

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UPCGData * __thiscall UPCGData::DuplicateData(UPCGData *this,bool param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UPCGData *pUVar4;
  UPackage *pUVar5;
  UClass *pUVar6;
  
  bVar3 = IsInGameThread();
  if ((!bVar3) &&
     (bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_3894552481450950416>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\PCGData.cpp"
                         ,0xf0,"IsInGameThread()"), bVar3)) {
    pcVar2 = (code *)swi(3);
    pUVar4 = (UPCGData *)(*pcVar2)();
    return pUVar4;
  }
  pUVar5 = GetTransientPackage();
  pUVar4 = (UPCGData *)
           StaticDuplicateObject
                     ((UObject *)this,(UObject *)pUVar5,(FName)0x0,
                      RF_AllocatedInSharedPage|RF_MirroredGarbage|RF_MigratingAsset|
                      RF_HasExternalPackage|RF_WillBeLoaded|RF_ImmutableDefaultObject|
                      RF_NonPIEDuplicateTransient|RF_StrongRefOnFrame|RF_DuplicateTransient|
                      RF_InheritableComponentTemplate|RF_LoadCompleted|RF_TextExportTransient|
                      RF_WasLoaded|RF_DefaultSubObject|RF_BeingRegenerated|RF_FinishDestroyed|
                      RF_BeginDestroyed|RF_NewerVersionExists|RF_NeedPostLoadSubobjects|
                      RF_NeedPostLoad|RF_KeepForCooker|RF_NeedLoad|RF_NeedInitialization|
                      RF_TagGarbageTemp|RF_MarkAsRootSet|RF_Transient|RF_ArchetypeObject|
                      RF_ClassDefaultObject|RF_Transactional|RF_MarkAsNative|RF_Standalone|RF_Public
                      ,(UClass *)0x0,Normal,
                      PendingConstruction|RootSet|Unreachable|AsyncLoadingPhase2|Async|Native|
                      ClusterRoot|ReachableInCluster|AsyncLoadingPhase1|Garbage|LoaderImport|
                      AutoRTFMConstructionAborted|ReachabilityFlag2|ReachabilityFlag1|
                      ReachabilityFlag0);
  if (pUVar4 != (UPCGData *)0x0) {
    pUVar6 = StaticClass();
    iVar1 = (int)pUVar6->_padding_;
    if ((iVar1 <= *(int *)(pUVar4->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar4->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar6->_padding_)) {
      return pUVar4;
    }
  }
  return (UPCGData *)0x0;
}

// Flatten @ 149efd640

void __thiscall UPCGData::Flatten(UPCGData *this)

{
  UPCGMetadata *this_00;
  
  this_00 = (UPCGMetadata *)(**(code **)(this->_padding_ + 0x328))();
  if (this_00 != (UPCGMetadata *)0x0) {
    UPCGMetadata::FlattenImpl(this_00);
    return;
  }
  return;
}

// GetMetadataDomainIDFromSelector @ 149f023a0

FPCGMetadataDomainID * __thiscall
UPCGData::GetMetadataDomainIDFromSelector
          (UPCGData *this,FPCGMetadataDomainID *__return_storage_ptr__,
          FPCGAttributePropertySelector *param_1)

{
  FName FVar1;
  
  FVar1 = param_1->DomainName;
  if ((FVar1 != (FName)0x0) && (FVar1 != PCGDataConstants::DefaultDomainName)) {
    if (FVar1 == PCGDataConstants::DataDomainName) {
      *__return_storage_ptr__ = PCGMetadataDomainID::Data;
      return __return_storage_ptr__;
    }
    __return_storage_ptr__->Flag = Invalid;
    (__return_storage_ptr__->DebugName).ComparisonIndex = 0;
    (__return_storage_ptr__->DebugName).Number = 0;
    __return_storage_ptr__->CustomFlag = -1;
    return __return_storage_ptr__;
  }
  *__return_storage_ptr__ = PCGMetadataDomainID::Default;
  return __return_storage_ptr__;
}

// GetOrComputeCrc @ 149f02510

FPCGCrc __thiscall UPCGData::GetOrComputeCrc(UPCGData *this,bool param_1)

{
  FPCGCrc FVar1;
  char cVar2;
  FPCGCrc *pFVar3;
  undefined7 in_register_00000011;
  FPCGCrc FVar4;
  bool bVar5;
  char in_R8B;
  undefined1 local_res8 [8];
  
  FVar4._1_7_ = in_register_00000011;
  FVar4.Value._0_1_ = param_1;
  if (in_R8B != '\0') {
    cVar2 = (**(code **)(this->_padding_ + 0x378))();
    if (cVar2 != '\0') {
      bVar5 = true;
      goto LAB_149f0253f;
    }
  }
  bVar5 = false;
LAB_149f0253f:
  if (((this->Crc).bValid != false) && ((this->bIsFullDataCrc != false || (bVar5 == false)))) {
    *(FPCGCrc *)FVar4 = this->Crc;
    return FVar4;
  }
  pFVar3 = (FPCGCrc *)(**(code **)(this->_padding_ + 0x368))(this,local_res8,bVar5);
  FVar1 = *pFVar3;
  this->Crc = FVar1;
  *(FPCGCrc *)FVar4 = FVar1;
  this->bIsFullDataCrc = bVar5;
  return FVar4;
}

// GetPrivateStaticClass @ 149f04040

UClass * __cdecl UPCGData::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGData",&Z_Registration_Info_UClass_UPCGData.InnerSingleton,
               StaticRegisterNativesUPCGData,0x48,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UPCGData>,InternalVTableHelperCtorCaller<UPCGData>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGData.InnerSingleton;
}

// HasUsage @ 149f06900

bool __thiscall UPCGData::HasUsage(UPCGData *this,EPCGDataUsage param_1)

{
  return (param_1 & (byte)this->Usage) != None;
}

// IncCollectionRefCount @ 149f06920

void __thiscall UPCGData::IncCollectionRefCount(UPCGData *this)

{
  LOCK();
  this->CollectionRefCount = (atomic<int>)((int)this->CollectionRefCount + 1);
  UNLOCK();
  return;
}

// InitUID @ 149f06a00

void __thiscall UPCGData::InitUID(UPCGData *this)

{
  ulong64 uVar1;
  
  LOCK();
  UNLOCK();
  uVar1 = (longlong)UIDCounter + 1;
  UIDCounter = (atomic<unsigned___int64>)((longlong)UIDCounter + 1);
  this->UID = uVar1;
  return;
}

// IsSupportedMetadataDomainID @ 149f084a0

bool __thiscall UPCGData::IsSupportedMetadataDomainID(UPCGData *this,FPCGMetadataDomainID *param_1)

{
  undefined8 *puVar1;
  EPCGMetadataDomainFlag *pEVar2;
  EPCGMetadataDomainFlag *pEVar3;
  bool bVar4;
  bool bVar5;
  void *local_18 [2];
  
  bVar5 = false;
  if ((param_1->Flag == PCGMetadataDomainID::Default.Flag) &&
     (param_1->CustomFlag == PCGMetadataDomainID::Default.CustomFlag)) {
LAB_149f0852b:
    bVar4 = true;
    if (!bVar5) {
      return true;
    }
  }
  else {
    puVar1 = (undefined8 *)(**(code **)(this->_padding_ + 0x340))(this,local_18);
    pEVar2 = (EPCGMetadataDomainFlag *)*puVar1;
    pEVar3 = pEVar2 + (longlong)*(int *)(puVar1 + 1) * 0x10;
    if (pEVar2 != pEVar3) {
      do {
        if ((*pEVar2 == param_1->Flag) && (*(undefined4 *)(pEVar2 + 4) == param_1->CustomFlag)) {
          bVar5 = true;
          goto LAB_149f0852b;
        }
        pEVar2 = pEVar2 + 0x10;
      } while (pEVar2 != pEVar3);
    }
    bVar4 = false;
  }
  if (local_18[0] != (void *)0x0) {
    FMemory::Free(local_18[0]);
  }
  return bVar4;
}

// MarkUsage @ 149f08770

void __thiscall UPCGData::MarkUsage(UPCGData *this,EPCGDataUsage param_1)

{
  LOCK();
  this->Usage = (atomic<unsigned_char>)((byte)this->Usage | param_1);
  UNLOCK();
  return;
}

// MetadataDomainSupportsMultiEntries @ 149f08780

bool __thiscall
UPCGData::MetadataDomainSupportsMultiEntries(UPCGData *this,FPCGMetadataDomainID *param_1)

{
  if ((param_1->Flag != Invalid) &&
     ((param_1->Flag != PCGMetadataDomainID::Data.Flag ||
      (param_1->CustomFlag != PCGMetadataDomainID::Data.CustomFlag)))) {
    return true;
  }
  return false;
}

// MetadataDomainSupportsParenting @ 149f087b0

bool __thiscall
UPCGData::MetadataDomainSupportsParenting(UPCGData *this,FPCGMetadataDomainID *param_1)

{
  return true;
}

// PostEditImport @ 149f0b0b0

void __thiscall UPCGData::PostEditImport(UPCGData *this)

{
  ulong64 uVar1;
  
  LOCK();
  UNLOCK();
  uVar1 = (longlong)UIDCounter + 1;
  UIDCounter = (atomic<unsigned___int64>)((longlong)UIDCounter + 1);
  this->UID = uVar1;
  return;
}

// SetDomainFromDomainID @ 149f11d00

bool __thiscall
UPCGData::SetDomainFromDomainID
          (UPCGData *this,FPCGMetadataDomainID *param_1,FPCGAttributePropertySelector *param_2)

{
  if ((param_1->Flag == PCGMetadataDomainID::Data.Flag) &&
     (param_1->CustomFlag == PCGMetadataDomainID::Data.CustomFlag)) {
    FPCGAttributePropertySelector::SetDomainName(param_2,PCGDataConstants::DataDomainName,false);
    return true;
  }
  if ((param_1->Flag == PCGMetadataDomainID::Default.Flag) &&
     (param_1->CustomFlag == PCGMetadataDomainID::Default.CustomFlag)) {
    FPCGAttributePropertySelector::SetDomainName(param_2,(FName)0x0,false);
    return true;
  }
  return false;
}

// StaticRegisterNativesUPCGData @ 149f13f20

void __cdecl UPCGData::StaticRegisterNativesUPCGData(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 2;
  local_18.DataPtr = Z_Construct_UClass_UPCGData_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// VisitDataNetwork @ 149f155c0

void __thiscall
UPCGData::VisitDataNetwork(UPCGData *this,TFunctionRef<void___cdecl(UPCGData_const_*)> *param_1)

{
  UPCGData *local_res8 [4];
  
  local_res8[0] = this;
  (**(code **)param_1)(*(undefined8 *)&param_1->field_0x8,local_res8);
  return;
}

// execConstMetadata @ 149f17cc0

void __cdecl UPCGData::execConstMetadata(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined8 uVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar1 = (**(code **)(*(longlong *)param_1 + 800))();
  *(undefined8 *)param_3 = uVar1;
  return;
}

// execMutableMetadata @ 149f19e50

void __cdecl UPCGData::execMutableMetadata(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined8 uVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar1 = (**(code **)(*(longlong *)param_1 + 0x328))();
  *(undefined8 *)param_3 = uVar1;
  return;
}

