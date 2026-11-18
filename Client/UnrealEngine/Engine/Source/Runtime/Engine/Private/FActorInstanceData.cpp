// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 4

// StaticStruct @ 14773c1c0

UScriptStruct * __cdecl FActorInstanceData::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FActorInstanceData.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FActorInstanceData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FActorInstanceData,(UObject *)pUVar1,
                         L"ActorInstanceData");
  }
  return Z_Registration_Info_UScriptStruct_FActorInstanceData.OuterSingleton;
}

// FActorInstanceData @ 1477eaec0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FActorInstanceData * __thiscall
FActorInstanceData::FActorInstanceData(FActorInstanceData *this,AActor *param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  UObject *pUVar5;
  bool bVar6;
  FStructuredArchiveFromArchive *pFVar7;
  FStructuredArchiveSlot FVar8;
  UClass *pUVar9;
  FActorInstanceData *pFVar10;
  undefined1 auStackY_738 [32];
  FIdentityFunctor local_708 [16];
  FInstanceCacheDataBase local_6f8;
  undefined8 local_6a0;
  FDataCachePropertyWriter local_688;
  FDataCachePropertyWriter local_4f8;
  FStructuredArchiveFromArchive local_368;
  FStructuredArchiveFromArchive local_1d8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_738;
  piVar1 = (int *)((longlong)&this->_padding_ + 4);
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  *piVar1 = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FActorInstanceData__6B_;
  pUVar9 = (UClass *)param_1->_padding_;
  (this->ActorClass).Class.field0_0x0.DebugPtr = pUVar9;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar9 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar9);
  }
  FDataCachePropertyWriter::FDataCachePropertyWriter
            (&local_688,(UObject *)param_1,(FInstanceCacheDataBase *)this);
  local_688._padding_ = (longlong)&___7FActorPropertyWriter__6B_;
  if (local_688.CacheObject != (UObject *)0x0) {
    plVar3 = *(longlong **)&(local_688.CacheObject)->field_0x10;
    UObject::GetArchetype(local_688.CacheObject);
    pcVar4 = *(code **)(*plVar3 + 0x2e0);
    pFVar7 = FStructuredArchiveFromArchive::FStructuredArchiveFromArchive
                       (&local_368,(FArchive *)&local_688);
    FVar8 = FStructuredArchiveFromArchive::GetSlot(pFVar7);
    (*pcVar4)(plVar3,*(undefined8 *)FVar8,local_688.CacheObject,plVar3);
    FStructuredArchiveFromArchive::~FStructuredArchiveFromArchive(&local_368);
    iVar2 = ((local_688.InstanceData)->DuplicatedObjects).ArrayNum;
    if (0 < iVar2) {
      AlgoImpl::
      StableSortInternal<FDataCacheDuplicatedObjectData,FIdentityFunctor,TDereferenceWrapper<FDataCacheDuplicatedObjectData,_FDataCachePropertyWriter::SerializeProperties_::__l8::<lambda_1>_>_>
                ((FDataCacheDuplicatedObjectData *)
                 ((local_688.InstanceData)->DuplicatedObjects).AllocatorInstance.Data,iVar2,
                 local_708[0],(<lambda_1> *)local_708);
    }
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    pUVar9 = Z_Construct_UClass_AActor_NoRegister();
    if ((pUVar9->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
      UClass::InternalCreateDefaultObjectWrapper(pUVar9);
    }
    pUVar5 = (pUVar9->ClassDefaultObject).field0_0x0.DebugPtr;
    local_6f8.SavedProperties.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_6f8.SavedProperties.ArrayNum = 0;
    local_6f8.SavedProperties.ArrayMax = 0;
    local_6f8.UniqueTransientPackage.DuplicatedObject = (UObject *)0x0;
    local_6f8.UniqueTransientPackage.ObjectPathDepth = 0;
    local_6f8.DuplicatedObjects.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_6f8.DuplicatedObjects.ArrayNum = 0;
    local_6f8.DuplicatedObjects.ArrayMax = 0;
    local_6f8.ReferencedObjects.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_6f8.ReferencedObjects.ArrayNum = 0;
    local_6f8.ReferencedObjects.ArrayMax = 0;
    local_6f8.ReferencedNames.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_6f8.ReferencedNames.ArrayNum = 0;
    local_6f8.ReferencedNames.ArrayMax = 0;
    local_6f8._padding_ = (longlong)&___7FActorInstanceData__6B_;
    local_6a0 = 0;
    FDataCachePropertyWriter::FDataCachePropertyWriter(&local_4f8,(UObject *)0x0,&local_6f8);
    plVar3 = *(longlong **)&pUVar5->field_0x10;
    pcVar4 = *(code **)(*plVar3 + 0x2e0);
    pFVar7 = FStructuredArchiveFromArchive::FStructuredArchiveFromArchive
                       (&local_1d8,(FArchive *)&local_4f8);
    FVar8 = FStructuredArchiveFromArchive::GetSlot(pFVar7);
    (*pcVar4)(plVar3,*(undefined8 *)FVar8,pUVar5,plVar3);
    FStructuredArchiveFromArchive::~FStructuredArchiveFromArchive(&local_1d8);
    if (((local_6f8.DuplicatedObjects.ArrayNum != 0) || (local_6f8.ReferencedObjects.ArrayNum != 0))
       && (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                             ("DummyInstanceData.GetDuplicatedObjects().Num() == 0 && DummyInstanceData.GetReferencedObjects().Num() == 0"
                              ,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ComponentInstanceDataCache.cpp"
                              ,0x193,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      pFVar10 = (FActorInstanceData *)(*pcVar4)();
      return pFVar10;
    }
    iVar2 = local_6f8.SavedProperties.ArrayNum;
    local_4f8._padding_ = (longlong)&___7FDataCachePropertyWriter__6B_;
    FUObjectAnnotationSparse<FDuplicatedObject,0>::RemoveAllAnnotations
              (&local_4f8.DuplicatedObjectAnnotation);
    FUObjectAnnotationSparse<FDuplicatedObject,0>::~FUObjectAnnotationSparse<FDuplicatedObject,0>
              (&local_4f8.DuplicatedObjectAnnotation);
    local_4f8.PropertiesToSkip.HashSize = 0;
    if (local_4f8.PropertiesToSkip.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_4f8.PropertiesToSkip.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<FProperty_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<FProperty_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_4f8.PropertiesToSkip.Elements);
    FArchive::~FArchive((FArchive *)&local_4f8);
    local_6f8._padding_ = (longlong)&___7FInstanceCacheDataBase__6B_;
    if (local_6f8.ReferencedNames.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_6f8.ReferencedNames.AllocatorInstance.Data);
    }
    if (local_6f8.ReferencedObjects.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_6f8.ReferencedObjects.AllocatorInstance.Data);
    }
    if (local_6f8.DuplicatedObjects.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_6f8.DuplicatedObjects.AllocatorInstance.Data);
    }
    if (local_6f8.SavedProperties.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_6f8.SavedProperties.AllocatorInstance.Data);
    }
    SizeOfEmptyArchive = iVar2;
    _Init_thread_footer(&::_TSS0);
  }
  if (((int)this->_padding_ == SizeOfEmptyArchive) &&
     (iVar2 = *piVar1, *(undefined4 *)&this->_padding_ = 0, iVar2 != 0)) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,0,(ForAnyElementType *)&this->_padding_,0,piVar1);
  }
  local_688._padding_ = (longlong)&___7FDataCachePropertyWriter__6B_;
  FUObjectAnnotationSparse<FDuplicatedObject,0>::RemoveAllAnnotations
            (&local_688.DuplicatedObjectAnnotation);
  FUObjectAnnotationSparse<FDuplicatedObject,0>::~FUObjectAnnotationSparse<FDuplicatedObject,0>
            (&local_688.DuplicatedObjectAnnotation);
  local_688.PropertiesToSkip.HashSize = 0;
  if (local_688.PropertiesToSkip.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_688.PropertiesToSkip.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<FProperty_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FProperty_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_688.PropertiesToSkip.Elements);
  FArchive::~FArchive((FArchive *)&local_688);
  return this;
}

// ApplyToActor @ 1478091d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FActorInstanceData::ApplyToActor(FActorInstanceData *this,AActor *param_1,ECacheApplyPhase param_2)

{
  longlong *plVar1;
  code *pcVar2;
  UObject *pUVar3;
  FStructuredArchiveFromArchive *this_00;
  FStructuredArchiveSlot FVar4;
  undefined1 auStack_2f8 [32];
  UObject *local_2d8;
  undefined8 local_2d0;
  FDataCachePropertyReader local_2b8;
  FStructuredArchiveFromArchive local_1b8;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_2f8;
  if ((param_2 - PostUserConstructionScript < 2) && (0 < (int)this->_padding_)) {
    FDataCachePropertyReader::FDataCachePropertyReader(&local_2b8,(FInstanceCacheDataBase *)this);
    plVar1 = (longlong *)param_1->_padding_;
    local_2b8._padding_ = (longlong)&___7FActorPropertyReader__6B_;
    pUVar3 = UObject::GetArchetype((UObject *)param_1);
    pcVar2 = *(code **)(*plVar1 + 0x2e0);
    this_00 = FStructuredArchiveFromArchive::FStructuredArchiveFromArchive
                        (&local_1b8,(FArchive *)&local_2b8);
    FVar4 = FStructuredArchiveFromArchive::GetSlot(this_00);
    local_2d0 = 0;
    local_2d8 = pUVar3;
    (*pcVar2)(plVar1,*(undefined8 *)FVar4,param_1,plVar1);
    FStructuredArchiveFromArchive::~FStructuredArchiveFromArchive(&local_1b8);
    local_2b8.PropertiesToSkip.HashSize = 0;
    if (local_2b8.PropertiesToSkip.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_2b8.PropertiesToSkip.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<FProperty_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<FProperty_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_2b8.PropertiesToSkip.Elements);
    FArchive::~FArchive((FArchive *)&local_2b8);
  }
  return;
}

// GetActorClass @ 1478346f0

UClass * __thiscall FActorInstanceData::GetActorClass(FActorInstanceData *this)

{
  int iVar1;
  UClass *pUVar2;
  bool bVar3;
  UClass *pUVar4;
  
  pUVar2 = (this->ActorClass).Class.field0_0x0.DebugPtr;
  if (pUVar2 != (UClass *)0x0) {
    pUVar4 = Z_Construct_UClass_AActor_NoRegister();
    if (pUVar4 != (UClass *)0x0) {
      iVar1 = (int)pUVar4->_padding_;
      if (((int)pUVar2->_padding_ < iVar1) ||
         ((longlong *)*(undefined1 **)(pUVar2->_padding_ + (longlong)iVar1 * 8) !=
          &pUVar4->_padding_)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        return (this->ActorClass).Class.field0_0x0.DebugPtr;
      }
    }
  }
  return (UClass *)0x0;
}

