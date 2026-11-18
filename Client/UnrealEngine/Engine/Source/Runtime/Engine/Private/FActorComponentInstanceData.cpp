// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 7

// StaticStruct @ 14773c130

UScriptStruct * __cdecl FActorComponentInstanceData::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FActorComponentInstanceData.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FActorComponentInstanceData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FActorComponentInstanceData,(UObject *)pUVar1,
                         L"ActorComponentInstanceData");
  }
  return Z_Registration_Info_UScriptStruct_FActorComponentInstanceData.OuterSingleton;
}

// FActorComponentInstanceData @ 1477ea9a0

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

FActorComponentInstanceData * __thiscall
FActorComponentInstanceData::FActorComponentInstanceData
          (FActorComponentInstanceData *this,UActorComponent *param_1)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  int iVar4;
  bool bVar5;
  FActorComponentInstanceData *pFVar6;
  UObject *pUVar7;
  UClass *this_00;
  FStructuredArchiveFromArchive *this_01;
  FStructuredArchiveSlot FVar8;
  undefined1 auStackY_5a8 [32];
  FInstanceCacheDataBase local_578;
  undefined8 local_520;
  undefined1 local_518;
  undefined4 local_514;
  FDataCachePropertyWriter local_4f8;
  undefined1 local_368 [232];
  void *local_280;
  undefined4 local_278;
  FUObjectAnnotationSparse<FDuplicatedObject,0> local_268;
  FStructuredArchiveFromArchive local_1d8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_5a8;
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
  this->_padding_ = (longlong)&___7FActorComponentInstanceData__6B_;
  (this->SourceComponentTemplate).field0_0x0.DebugPtr = (UObject *)0x0;
  if (param_1 == (UActorComponent *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("SourceComponent",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ComponentInstanceDataCache.cpp"
                       ,0x1e5,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FActorComponentInstanceData *)(*pcVar3)();
      return pFVar6;
    }
  }
  pUVar7 = UObject::GetArchetype((UObject *)param_1);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar7);
  }
  (this->SourceComponentTemplate).field0_0x0.DebugPtr = pUVar7;
  this->SourceComponentCreationMethod = param_1->CreationMethod;
  this->SourceComponentTypeSerializedIndex = param_1->UCSSerializationIndex;
  if ((param_1->bEditableWhenInherited != '\0') &&
     (param_1->CreationMethod != UserConstructionScript)) {
    FComponentPropertyWriter::FComponentPropertyWriter
              ((FComponentPropertyWriter *)local_368,param_1,this);
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x9d4c) < ::_TSS0) {
      _Init_thread_header(&::_TSS0);
      if (::_TSS0 == -1) {
        this_00 = UActorComponent::StaticClass();
        if ((this_00->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
          UClass::InternalCreateDefaultObjectWrapper(this_00);
        }
        pUVar7 = (this_00->ClassDefaultObject).field0_0x0.DebugPtr;
        local_578._padding_ = (longlong)&___7FActorComponentInstanceData__6B_;
        local_578.SavedProperties.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_578.SavedProperties.ArrayNum = 0;
        local_578.SavedProperties.ArrayMax = 0;
        local_578.UniqueTransientPackage.DuplicatedObject = (UObject *)0x0;
        local_578.UniqueTransientPackage.ObjectPathDepth = 0;
        local_578.DuplicatedObjects.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_578.DuplicatedObjects.ArrayNum = 0;
        local_578.DuplicatedObjects.ArrayMax = 0;
        local_578.ReferencedObjects.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_578.ReferencedObjects.ArrayNum = 0;
        local_578.ReferencedObjects.ArrayMax = 0;
        local_578.ReferencedNames.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_578.ReferencedNames.ArrayNum = 0;
        local_578.ReferencedNames.ArrayMax = 0;
        local_520 = 0;
        local_518 = 0;
        local_514 = 0xffffffff;
        FDataCachePropertyWriter::FDataCachePropertyWriter(&local_4f8,(UObject *)0x0,&local_578);
        local_4f8._padding_ = (longlong)&___7FComponentPropertyWriter__6B_;
        plVar2 = *(longlong **)&pUVar7->field_0x10;
        pcVar3 = *(code **)(*plVar2 + 0x2e0);
        this_01 = FStructuredArchiveFromArchive::FStructuredArchiveFromArchive
                            (&local_1d8,(FArchive *)&local_4f8);
        FVar8 = FStructuredArchiveFromArchive::GetSlot(this_01);
        (*pcVar3)(plVar2,*(undefined8 *)FVar8,pUVar7,plVar2);
        FStructuredArchiveFromArchive::~FStructuredArchiveFromArchive(&local_1d8);
        if ((local_578.DuplicatedObjects.ArrayNum != 0) ||
           (local_578.ReferencedObjects.ArrayNum != 0)) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("DummyInstanceData.GetDuplicatedObjects().Num() == 0 && DummyInstanceData.GetReferencedObjects().Num() == 0"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\ComponentInstanceDataCache.cpp"
                             ,0x1f9,L"");
          if (bVar5) {
            pcVar3 = (code *)swi(3);
            pFVar6 = (FActorComponentInstanceData *)(*pcVar3)();
            return pFVar6;
          }
        }
        iVar4 = local_578.SavedProperties.ArrayNum;
        local_4f8._padding_ = (longlong)&___7FDataCachePropertyWriter__6B_;
        FUObjectAnnotationSparse<FDuplicatedObject,0>::RemoveAllAnnotations
                  (&local_4f8.DuplicatedObjectAnnotation);
        FUObjectAnnotationSparse<FDuplicatedObject,0>::
        ~FUObjectAnnotationSparse<FDuplicatedObject,0>(&local_4f8.DuplicatedObjectAnnotation);
        local_4f8.PropertiesToSkip.HashSize = 0;
        if (local_4f8.PropertiesToSkip.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
          FMemory::Free((void *)local_4f8.PropertiesToSkip.Hash.SecondaryData);
        }
        TSparseArray<TSparseSetElement<FProperty_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<FProperty_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  (&local_4f8.PropertiesToSkip.Elements);
        FArchive::~FArchive((FArchive *)&local_4f8);
        local_578._padding_ = (longlong)&___7FInstanceCacheDataBase__6B_;
        if (local_578.ReferencedNames.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_578.ReferencedNames.AllocatorInstance.Data);
        }
        if (local_578.ReferencedObjects.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_578.ReferencedObjects.AllocatorInstance.Data);
        }
        if (local_578.DuplicatedObjects.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_578.DuplicatedObjects.AllocatorInstance.Data);
        }
        if (local_578.SavedProperties.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_578.SavedProperties.AllocatorInstance.Data);
        }
        SizeOfEmptyArchive = iVar4;
        _Init_thread_footer(&::_TSS0);
      }
    }
    if (((int)this->_padding_ == SizeOfEmptyArchive) &&
       (*(undefined4 *)&this->_padding_ = 0, *piVar1 != 0)) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,0,(ForAnyElementType *)&this->_padding_,0,piVar1);
    }
    local_368._0_8_ = &___7FDataCachePropertyWriter__6B_;
    FUObjectAnnotationSparse<FDuplicatedObject,0>::RemoveAllAnnotations(&local_268);
    FUObjectAnnotationSparse<FDuplicatedObject,0>::~FUObjectAnnotationSparse<FDuplicatedObject,0>
              (&local_268);
    local_278 = 0;
    if (local_280 != (void *)0x0) {
      FMemory::Free(local_280);
    }
    TSparseArray<TSparseSetElement<FProperty_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<FProperty_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<FProperty_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)(local_368 + 0xa8));
    FArchive::~FArchive((FArchive *)local_368);
  }
  return this;
}

// FActorComponentInstanceData @ 1477ead80

FActorComponentInstanceData * __thiscall
FActorComponentInstanceData::FActorComponentInstanceData(FActorComponentInstanceData *this)

{
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FActorComponentInstanceData__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->SourceComponentTemplate).field0_0x0.DebugPtr = (UObject *)0x0;
  this->SourceComponentCreationMethod = Native;
  this->SourceComponentTypeSerializedIndex = -1;
  return this;
}

// AddReferencedObjects @ 147804f00

void __thiscall
FActorComponentInstanceData::AddReferencedObjects
          (FActorComponentInstanceData *this,FReferenceCollector *param_1)

{
  (**(code **)(param_1->_padding_ + 0x90))(param_1,this->_padding_,(int)this->_padding_,0,0);
                    /* WARNING: Could not recover jumptable at 0x000147804f4a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1->_padding_ + 0x88))(param_1,&this->SourceComponentTemplate,0,0);
  return;
}

// ApplyToComponent @ 147809b70

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
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
FActorComponentInstanceData::ApplyToComponent
          (FActorComponentInstanceData *this,UActorComponent *param_1,ECacheApplyPhase param_2)

{
  int iVar1;
  code *pcVar2;
  UObject *pUVar3;
  UPackage *pUVar4;
  FStructuredArchiveFromArchive *this_00;
  FStructuredArchiveSlot FVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined1 auStackY_318 [32];
  undefined1 local_2e8 [16];
  FDataCachePropertyReader local_2d8;
  FStructuredArchiveFromArchive local_1d8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_318;
  if ((param_2 - PostUserConstructionScript < 2) && (0 < (int)this->_padding_)) {
    if (param_2 == PostUserConstructionScript) {
      UActorComponent::DetermineUCSModifiedProperties(param_1);
    }
    else if (param_2 == NonConstructionScript) {
      UActorComponent::ClearUCSModifiedProperties(param_1);
    }
    iVar1 = (int)this->_padding_;
    plVar6 = (longlong *)this->_padding_;
    plVar7 = plVar6 + (longlong)iVar1 * 2;
    while( true ) {
      if ((int)this->_padding_ != iVar1) {
        `TCheckedPointerIterator<FDataCacheDuplicatedObjectData_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_2e8);
      }
      if (plVar6 == plVar7) break;
      if (*plVar6 != 0) {
        pUVar3 = StaticFindObjectFast
                           ((UClass *)0x0,(UObject *)param_1,*(FName *)(*plVar6 + 0x18),None,
                            RF_NoFlags,Borrowed);
        if (pUVar3 != (UObject *)0x0) {
          pcVar2 = *(code **)(*(longlong *)pUVar3 + 0x170);
          pUVar4 = GetTransientPackage();
          (*pcVar2)(pUVar3,0,pUVar4,0x10);
        }
        (**(code **)(*(longlong *)*plVar6 + 0x170))((longlong *)*plVar6,0,param_1);
      }
      plVar6 = plVar6 + 2;
    }
    FDataCachePropertyReader::FDataCachePropertyReader(&local_2d8,(FInstanceCacheDataBase *)this);
    local_2d8._padding_ = (longlong)&___7FComponentPropertyReader__6B_;
    UActorComponent::GetUCSModifiedProperties(param_1,&local_2d8.PropertiesToSkip);
    plVar6 = (longlong *)param_1->_padding_;
    UObject::GetArchetype((UObject *)param_1);
    pcVar2 = *(code **)(*plVar6 + 0x2e0);
    this_00 = FStructuredArchiveFromArchive::FStructuredArchiveFromArchive
                        (&local_1d8,(FArchive *)&local_2d8);
    FVar5 = FStructuredArchiveFromArchive::GetSlot(this_00);
    (*pcVar2)(plVar6,*(undefined8 *)FVar5,param_1,plVar6);
    FStructuredArchiveFromArchive::~FStructuredArchiveFromArchive(&local_1d8);
    (**(code **)(param_1->_padding_ + 0x490))(param_1);
    local_2d8.PropertiesToSkip.HashSize = 0;
    if (local_2d8.PropertiesToSkip.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_2d8.PropertiesToSkip.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<FProperty_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<FProperty_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_2d8.PropertiesToSkip.Elements);
    FArchive::~FArchive((FArchive *)&local_2d8);
  }
  return;
}

// ContainsData @ 147818440

bool __thiscall FActorComponentInstanceData::ContainsData(FActorComponentInstanceData *this)

{
  return 0 < (int)this->_padding_;
}

// MatchesComponent @ 147842cb0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
FActorComponentInstanceData::MatchesComponent
          (FActorComponentInstanceData *this,UActorComponent *param_1,UObject *param_2)

{
  EComponentCreationMethod EVar1;
  int iVar2;
  UObject *pUVar3;
  
  pUVar3 = (this->SourceComponentTemplate).field0_0x0.DebugPtr;
  iVar2 = this->SourceComponentTypeSerializedIndex;
  EVar1 = this->SourceComponentCreationMethod;
  if (pUVar3 != (UObject *)0x0) {
    if ((UE::GC::GIsIncrementalReachabilityPending) &&
       (UE::GC::MarkAsReachable(pUVar3), UE::GC::GIsIncrementalReachabilityPending != false)) {
      UE::GC::MarkAsReachable(pUVar3);
    }
    if ((*(longlong *)&pUVar3->field_0x10 == *(longlong *)&param_2->field_0x10) &&
       (((pUVar3 == param_2 ||
         ((GIsReinstancing != (atomic<bool>)0x0 &&
          (*(longlong *)&pUVar3->field_0x18 == *(longlong *)&param_2->field_0x18)))) &&
        (EVar1 == param_1->CreationMethod)))) {
      if (EVar1 != UserConstructionScript) {
        return true;
      }
      if (-1 < iVar2) {
        return iVar2 == param_1->UCSSerializationIndex;
      }
    }
  }
  return false;
}

