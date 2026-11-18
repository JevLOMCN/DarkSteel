// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 30

// StaticClass @ 1467ccfe0

UClass * __cdecl UMovieScenePropertyInstantiatorSystem::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieScenePropertyInstantiatorSystem.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieScenePropertyInstantiatorSystem",
               &Z_Registration_Info_UClass_UMovieScenePropertyInstantiatorSystem.InnerSingleton,
               StaticRegisterNativesUMovieScenePropertyInstantiatorSystem,0x1f0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieScenePropertyInstantiatorSystem>,
               InternalVTableHelperCtorCaller<UMovieScenePropertyInstantiatorSystem>,local_res8,
               UMovieSceneEntityInstantiatorSystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieScenePropertyInstantiatorSystem.InnerSingleton;
}

// UMovieScenePropertyInstantiatorSystem @ 14680afd0

UMovieScenePropertyInstantiatorSystem * __thiscall
UMovieScenePropertyInstantiatorSystem::UMovieScenePropertyInstantiatorSystem
          (UMovieScenePropertyInstantiatorSystem *this,FVTableHelper *param_1)

{
  UMovieSceneEntityInstantiatorSystem::UMovieSceneEntityInstantiatorSystem
            ((UMovieSceneEntityInstantiatorSystem *)this,param_1);
  this->_padding_ = (longlong)&___7UMovieScenePropertyInstantiatorSystem__6B_;
  *(undefined8 *)&this->ResolvedProperties = 0;
  *(undefined8 *)&(this->ResolvedProperties).field_0x8 = 0;
  *(undefined8 *)&(this->ResolvedProperties).field_0x20 = 0;
  (this->PropertyGroupingKey).Index = -1;
  *(undefined4 *)&(this->ResolvedProperties).field_0x28 = 0;
  *(undefined4 *)&(this->ResolvedProperties).field_0x2c = 0x80;
  *(undefined4 *)&(this->ResolvedProperties).field_0x34 = 0;
  *(undefined4 *)&(this->ResolvedProperties).field_0x30 = 0xffffffff;
  *(undefined8 *)&this->Contributors = 0;
  *(undefined8 *)&(this->Contributors).field_0x8 = 0;
  *(undefined8 *)&(this->Contributors).field_0x20 = 0;
  *(undefined4 *)&(this->Contributors).field_0x28 = 0;
  *(undefined4 *)&(this->Contributors).field_0x2c = 0x80;
  *(undefined4 *)&(this->Contributors).field_0x34 = 0;
  *(undefined4 *)&(this->Contributors).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->Contributors).field_0x40 = 0;
  *(undefined4 *)&(this->Contributors).field_0x48 = 0;
  *(undefined8 *)&this->NewContributors = 0;
  *(undefined8 *)&(this->NewContributors).field_0x8 = 0;
  *(undefined8 *)&(this->NewContributors).field_0x20 = 0;
  *(undefined4 *)&(this->NewContributors).field_0x28 = 0;
  *(undefined4 *)&(this->NewContributors).field_0x2c = 0x80;
  *(undefined4 *)&(this->NewContributors).field_0x34 = 0;
  *(undefined4 *)&(this->NewContributors).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->NewContributors).field_0x40 = 0;
  *(undefined4 *)&(this->NewContributors).field_0x48 = 0;
  (this->PropertyStats).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PropertyStats).ArrayNum = 0;
  (this->PropertyStats).ArrayMax = 0;
  (this->CleanFastPathMask).Bits.NumBits = 0;
  (this->PendingInvalidatedProperties).AllocatorInstance.SecondaryData =
       (ForElementType<unsigned_int>)0x0;
  (this->CleanFastPathMask).Bits.MaxBits = 0x180;
  (this->PendingInvalidatedProperties).NumBits = 0;
  (this->PendingInvalidatedProperties).MaxBits = 0x80;
  (this->InitializePropertyMetaDataTasks).AllocatorInstance.SecondaryData =
       (ForElementType<unsigned_int>)0x0;
  (this->InitializePropertyMetaDataTasks).NumBits = 0;
  (this->InitializePropertyMetaDataTasks).MaxBits = 0x80;
  (this->SaveGlobalStateTasks).AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  (this->SaveGlobalStateTasks).NumBits = 0;
  (this->SaveGlobalStateTasks).MaxBits = 0x80;
  *(undefined8 *)&(this->RecomposerImpl).OnGetPropertyInfo = 0;
  *(undefined8 *)&(this->RecomposerImpl).OnGetPropertyInfo.field_0x8 = 0;
  *(undefined4 *)&(this->RecomposerImpl).OnGetPropertyInfo.field_0x10 = 0;
  return this;
}

// UMovieScenePropertyInstantiatorSystem @ 14680b130

UMovieScenePropertyInstantiatorSystem * __thiscall
UMovieScenePropertyInstantiatorSystem::UMovieScenePropertyInstantiatorSystem
          (UMovieScenePropertyInstantiatorSystem *this,FObjectInitializer *param_1)

{
  FComponentTypeID FVar1;
  void *pvVar2;
  ForElementType<TAlignedBytes<16,16>_> FVar3;
  int iVar4;
  EEntitySystemCategory EVar5;
  FBuiltInComponentTypes *pFVar6;
  undefined8 *puVar7;
  ulong64 uVar8;
  UClass *local_res8;
  UObject *local_res18;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_68;
  FDelegateAllocation local_60;
  FDestructionSentinel local_50;
  FDelegateAllocation *local_38;
  
  UMovieSceneEntityInstantiatorSystem::UMovieSceneEntityInstantiatorSystem
            ((UMovieSceneEntityInstantiatorSystem *)this,param_1);
  this->_padding_ = (longlong)&___7UMovieScenePropertyInstantiatorSystem__6B_;
  (this->PropertyGroupingKey).Index = -1;
  *(undefined8 *)&this->ResolvedProperties = 0;
  *(undefined8 *)&(this->ResolvedProperties).field_0x8 = 0;
  *(undefined8 *)&(this->ResolvedProperties).field_0x20 = 0;
  *(undefined4 *)&(this->ResolvedProperties).field_0x28 = 0;
  *(undefined4 *)&(this->ResolvedProperties).field_0x2c = 0x80;
  *(undefined4 *)&(this->ResolvedProperties).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ResolvedProperties).field_0x34 = 0;
  *(undefined8 *)&this->Contributors = 0;
  *(undefined8 *)&(this->Contributors).field_0x8 = 0;
  *(undefined8 *)&(this->Contributors).field_0x20 = 0;
  *(undefined4 *)&(this->Contributors).field_0x28 = 0;
  *(undefined4 *)&(this->Contributors).field_0x2c = 0x80;
  *(undefined4 *)&(this->Contributors).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Contributors).field_0x34 = 0;
  *(undefined8 *)&(this->Contributors).field_0x40 = 0;
  *(undefined4 *)&(this->Contributors).field_0x48 = 0;
  *(undefined8 *)&this->NewContributors = 0;
  *(undefined8 *)&(this->NewContributors).field_0x8 = 0;
  *(undefined8 *)&(this->NewContributors).field_0x20 = 0;
  *(undefined4 *)&(this->NewContributors).field_0x28 = 0;
  *(undefined4 *)&(this->NewContributors).field_0x2c = 0x80;
  *(undefined4 *)&(this->NewContributors).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->NewContributors).field_0x34 = 0;
  *(undefined8 *)&(this->NewContributors).field_0x40 = 0;
  *(undefined4 *)&(this->NewContributors).field_0x48 = 0;
  (this->PropertyStats).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PropertyStats).ArrayNum = 0;
  (this->PropertyStats).ArrayMax = 0;
  (this->CleanFastPathMask).Bits.NumBits = 0;
  (this->CleanFastPathMask).Bits.MaxBits = 0x180;
  (this->PendingInvalidatedProperties).AllocatorInstance.SecondaryData =
       (ForElementType<unsigned_int>)0x0;
  (this->PendingInvalidatedProperties).NumBits = 0;
  (this->PendingInvalidatedProperties).MaxBits = 0x80;
  (this->InitializePropertyMetaDataTasks).AllocatorInstance.SecondaryData =
       (ForElementType<unsigned_int>)0x0;
  (this->InitializePropertyMetaDataTasks).NumBits = 0;
  (this->InitializePropertyMetaDataTasks).MaxBits = 0x80;
  (this->SaveGlobalStateTasks).AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  (this->SaveGlobalStateTasks).NumBits = 0;
  (this->SaveGlobalStateTasks).MaxBits = 0x80;
  *(undefined8 *)&(this->RecomposerImpl).OnGetPropertyInfo = 0;
  *(undefined8 *)&(this->RecomposerImpl).OnGetPropertyInfo.field_0x8 = 0;
  *(undefined4 *)&(this->RecomposerImpl).OnGetPropertyInfo.field_0x10 = 0;
  pFVar6 = UE::MovieScene::FBuiltInComponentTypes::Get();
  this->BuiltInComponents = pFVar6;
  local_68.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_60.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_68,(FWriteAccessScope *)&local_50);
  local_38 = &local_60;
  puVar7 = UE::Core::Private::DelegateAllocate(0x28,&local_60);
  if (puVar7 != (undefined8 *)0x0) {
    *puVar7 = &
              ___7__TCommonDelegateInstanceState___A6A_AUFPropertyRecomposerPropertyInfo_MovieScene_UE__UFMovieSceneEntityID_23_PEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar8 = FDelegateHandle::GenerateNewID();
    puVar7[2] = uVar8;
    *puVar7 = &
              ___7__TBaseUObjectMethodDelegateInstance__00__CBVUMovieScenePropertyInstantiatorSystem____A6A_AUFPropertyRecomposerPropertyInfo_MovieScene_UE__UFMovieSceneEntityID_34_PEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar7[3] = 0;
    local_res8 = (UClass *)this;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar7 + 3),(FObjectPtr)&local_res8);
    puVar7[4] = FindPropertyFromSource;
  }
  if (local_50.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_68,(FWriteAccessScope *)&local_50);
  iVar4 = local_60.DelegateSize;
  FVar3 = local_60.DelegateAllocator;
  local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_60.DelegateSize = 0;
  if (local_50.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->RecomposerImpl,
             (FWriteAccessScope *)&local_50);
  if ((*(int *)&(this->RecomposerImpl).OnGetPropertyInfo.field_0x10 != 0) &&
     (puVar7 = *(undefined8 **)&(this->RecomposerImpl).OnGetPropertyInfo.field_0x8,
     puVar7 != (undefined8 *)0x0)) {
    (**(code **)*puVar7)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&(this->RecomposerImpl).OnGetPropertyInfo.field_0x8,0,0,0x10);
    *(undefined4 *)&(this->RecomposerImpl).OnGetPropertyInfo.field_0x10 = 0;
  }
  pvVar2 = *(void **)&(this->RecomposerImpl).OnGetPropertyInfo.field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  *(ForElementType<TAlignedBytes<16,16>_> *)&(this->RecomposerImpl).OnGetPropertyInfo.field_0x8 =
       FVar3;
  *(int *)&(this->RecomposerImpl).OnGetPropertyInfo.field_0x10 = iVar4;
  if (local_50.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_68,(FWriteAccessScope *)&local_50);
  if ((local_60.DelegateSize != 0) &&
     (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_60.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_60,0,0,0x10);
    local_60.DelegateSize = 0;
  }
  if (local_50.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
  }
  if (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_60.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_68.AccessDetector);
  EVar5 = UE::MovieScene::FSystemInterrogator::GetExcludedFromInterrogationCategory();
  *(EEntitySystemCategory *)&this->_padding_ = EVar5;
  *(TComponentTypeID<FMovieScenePropertyBinding> *)&this->_padding_ =
       this->BuiltInComponents->PropertyBinding;
  if ((this->_padding_ & 0x10) != 0) {
    local_res8 = (UClass *)this->_padding_;
    FVar1.Value = *(ushort *)&this->BuiltInComponents->BoundObject;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res8);
    }
    UMovieSceneEntitySystem::DefineComponentConsumer
              ((TSubclassOf<UMovieSceneEntitySystem>)&local_res8,FVar1);
    local_res8 = (UClass *)this->_padding_;
    FVar1.Value = *(ushort *)&this->BuiltInComponents->Group;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res8);
    }
    UMovieSceneEntitySystem::DefineComponentConsumer
              ((TSubclassOf<UMovieSceneEntitySystem>)&local_res8,FVar1);
    local_res8 = (UClass *)this->_padding_;
    FVar1.Value = *(ushort *)&this->BuiltInComponents->HierarchicalBlendTarget;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res8);
    }
    UMovieSceneEntitySystem::DefineComponentConsumer
              ((TSubclassOf<UMovieSceneEntitySystem>)&local_res8,FVar1);
    local_res8 = (UClass *)this->_padding_;
    FVar1.Value = (this->BuiltInComponents->Tags).Ignored.Value;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res8);
    }
    UMovieSceneEntitySystem::DefineComponentConsumer
              ((TSubclassOf<UMovieSceneEntitySystem>)&local_res8,FVar1);
    local_res8 = (UClass *)this->_padding_;
    FVar1.Value = *(ushort *)&this->BuiltInComponents->BlendChannelInput;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res8);
    }
    UMovieSceneEntitySystem::DefineComponentProducer
              ((TSubclassOf<UMovieSceneEntitySystem>)&local_res8,FVar1);
    local_res8 = (UClass *)this->_padding_;
    FVar1.Value = (this->BuiltInComponents->SymbolicTags).CreatesEntities.Value;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res8);
    }
    UMovieSceneEntitySystem::DefineComponentProducer
              ((TSubclassOf<UMovieSceneEntitySystem>)&local_res8,FVar1);
    local_res8 = Z_Construct_UClass_UMovieSceneInitialValueSystem_NoRegister();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res8);
    }
    local_res18 = (UObject *)this->_padding_;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res18 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_res18);
    }
    UMovieSceneEntitySystem::DefineImplicitPrerequisite
              ((TSubclassOf<UMovieSceneEntitySystem>)&local_res18,
               (TSubclassOf<UMovieSceneEntitySystem>)&local_res8);
  }
  return this;
}

// ~UMovieScenePropertyInstantiatorSystem @ 14680fb80

void __thiscall
UMovieScenePropertyInstantiatorSystem::~UMovieScenePropertyInstantiatorSystem
          (UMovieScenePropertyInstantiatorSystem *this)

{
  ForElementType<unsigned_int> FVar1;
  FScriptContainerElement *pFVar2;
  void *pvVar3;
  
  this->_padding_ = (longlong)&___7UMovieScenePropertyInstantiatorSystem__6B_;
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->RecomposerImpl);
  FVar1 = (this->SaveGlobalStateTasks).AllocatorInstance.SecondaryData;
  if (FVar1 != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  FVar1 = (this->InitializePropertyMetaDataTasks).AllocatorInstance.SecondaryData;
  if (FVar1 != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  FVar1 = (this->PendingInvalidatedProperties).AllocatorInstance.SecondaryData;
  if (FVar1 != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  pFVar2 = (this->PropertyStats).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  *(undefined4 *)&(this->NewContributors).field_0x48 = 0;
  pvVar3 = *(void **)&(this->NewContributors).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<UMovieScenePropertyInstantiatorSystem::FContributorKey,UE::MovieScene::FMovieSceneEntityID>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UMovieScenePropertyInstantiatorSystem::FContributorKey,UE::MovieScene::FMovieSceneEntityID>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UMovieScenePropertyInstantiatorSystem::FContributorKey,UE::MovieScene::FMovieSceneEntityID>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->NewContributors);
  *(undefined4 *)&(this->Contributors).field_0x48 = 0;
  pvVar3 = *(void **)&(this->Contributors).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<UMovieScenePropertyInstantiatorSystem::FContributorKey,UE::MovieScene::FMovieSceneEntityID>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UMovieScenePropertyInstantiatorSystem::FContributorKey,UE::MovieScene::FMovieSceneEntityID>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UMovieScenePropertyInstantiatorSystem::FContributorKey,UE::MovieScene::FMovieSceneEntityID>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->Contributors);
  TSparseArray<UMovieScenePropertyInstantiatorSystem::FObjectPropertyInfo,FDefaultSparseArrayAllocator>
  ::
  ~TSparseArray<UMovieScenePropertyInstantiatorSystem::FObjectPropertyInfo,FDefaultSparseArrayAllocator>
            (&this->ResolvedProperties);
  UMovieSceneEntityInstantiatorSystem::~UMovieSceneEntityInstantiatorSystem
            ((UMovieSceneEntityInstantiatorSystem *)this);
  return;
}

// operator() @ 146813170

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`UMovieScenePropertyInstantiatorSystem::DiscoverNewProperties'::__l2::<lambda_1>::operator()
          (void *this,FEntityAllocationProxy *param_1,FMovieSceneEntityID *param_2,UObject **param_3
          ,FMovieScenePropertyBinding *param_4,FEntityGroupID *param_5)

{
  uint *puVar1;
  ushort uVar2;
  ICustomPropertyRegistration *pIVar3;
  TBitArray<FDefaultBitArrayAllocator> *pTVar4;
  code *pcVar5;
  uchar *puVar6;
  undefined8 uVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  FEntityAllocation *pFVar11;
  FComponentMask *pFVar12;
  FComponentHeader *pFVar13;
  FPropertyDefinition *pFVar14;
  undefined8 *puVar15;
  longlong lVar16;
  int iVar17;
  int iVar18;
  ulonglong uVar19;
  uint uVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  ushort *puVar23;
  int *piVar24;
  int iVar25;
  int local_res8 [2];
  FContributorKey local_b8;
  undefined1 local_b4 [12];
  FEntityAllocation *local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  int *local_90;
  FMovieSceneEntityID *local_88;
  int *local_80;
  FMovieSceneEntityID *local_78;
  FCustomAccessorView local_68;
  undefined1 local_58 [32];
  
  pFVar11 = UE::MovieScene::FEntityAllocationProxy::GetAllocation(param_1);
  local_a8 = pFVar11;
  pFVar12 = UE::MovieScene::FEntityAllocationProxy::GetAllocationType(param_1);
  uVar21 = 0;
  if (0 < (longlong)*(int *)((longlong)this + 0x10)) {
    puVar23 = (ushort *)(*(longlong *)((longlong)this + 8) + 0x28);
    uVar19 = uVar21;
    uVar22 = uVar21;
    do {
      iVar17 = (int)uVar19;
      for (pFVar13 = pFVar11->ComponentHeaders;
          pFVar13 != pFVar11->ComponentHeaders + pFVar11->NumComponents; pFVar13 = pFVar13 + 1) {
        if ((pFVar13->ComponentType).Value == *puVar23) {
          if (iVar17 == -1) {
            return;
          }
          pFVar14 = TArrayView<UE::MovieScene::FPropertyDefinition_const_,int>::operator[]
                              ((TArrayView<UE::MovieScene::FPropertyDefinition_const_,int> *)
                               ((longlong)this + 8),iVar17);
          pIVar3 = pFVar14->CustomPropertyRegistration;
          if (pIVar3 == (ICustomPropertyRegistration *)0x0) {
            local_a0 = 0;
            puVar15 = &local_a0;
            uStack_98 = 0;
          }
          else {
            puVar15 = (undefined8 *)(**(code **)((longlong)*pIVar3 + 8))(pIVar3,local_58);
          }
          puVar6 = (uchar *)*puVar15;
          uVar7 = puVar15[1];
          uVar2 = *(ushort *)(*(longlong *)(*(longlong *)this + 0x1d0) + 0x148);
          if (((uVar2 != 0xffff) && ((int)(uint)uVar2 < (pFVar12->Bits).NumBits)) &&
             ((*(uint *)(pFVar12->Bits).AllocatorInstance.InlineData[uVar2 >> 5].Pad >>
               (uVar2 & 0x1f) & 1) != 0)) {
            if (pFVar11->Size == 0) {
              return;
            }
            piVar24 = &param_5->GroupIndex;
            do {
              iVar17 = *piVar24;
              if (iVar17 != -1) {
                pTVar4 = *(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x18);
                iVar18 = (iVar17 - pTVar4->NumBits) + 1;
                if (0 < iVar18) {
                  iVar9 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized(pTVar4,iVar18);
                  TBitArray<FDefaultBitArrayAllocator>::SetRange(pTVar4,iVar9,iVar18,false);
                }
                lVar16 = *(longlong *)((longlong)this + 0x18);
                if (((iVar17 < 0) || (*(int *)(lVar16 + 0x18) <= iVar17)) &&
                   (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Index>=0 && Index<NumBits",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                       ,0x5be,L""), bVar8)) {
                  pcVar5 = (code *)swi(3);
                  (*pcVar5)();
                  return;
                }
                if (*(longlong *)(lVar16 + 0x10) != 0) {
                  lVar16 = *(longlong *)(lVar16 + 0x10);
                }
                iVar18 = iVar17;
                if (iVar17 < 0) {
                  iVar18 = iVar17 + 0x1f;
                }
                puVar1 = (uint *)(lVar16 + (longlong)(iVar18 >> 5) * 4);
                *puVar1 = *puVar1 | 1 << ((byte)iVar17 & 0x1f);
                local_b8.PropertyIndex = iVar17;
                TMultiMap<UMovieScenePropertyInstantiatorSystem::FContributorKey,UE::MovieScene::FMovieSceneEntityID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UMovieScenePropertyInstantiatorSystem::FContributorKey,UE::MovieScene::FMovieSceneEntityID,1>_>
                ::Remove((TMultiMap<UMovieScenePropertyInstantiatorSystem::FContributorKey,UE::MovieScene::FMovieSceneEntityID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UMovieScenePropertyInstantiatorSystem::FContributorKey,UE::MovieScene::FMovieSceneEntityID,1>_>
                          *)(*(longlong *)this + 0x88),&local_b8,param_2 + (int)uVar21);
              }
              uVar20 = (int)uVar21 + 1;
              uVar21 = (ulonglong)uVar20;
              piVar24 = piVar24 + 3;
              if ((int)(uint)pFVar11->Size <= (int)uVar20) {
                return;
              }
            } while( true );
          }
          if (pFVar11->Size == 0) {
            return;
          }
          piVar24 = &param_5->GroupIndex;
          do {
            iVar18 = (int)uVar21;
            local_68.Base = puVar6;
            local_68._8_8_ = uVar7;
            bVar8 = UMovieScenePropertyInstantiatorSystem::ResolveProperty
                              (*(UMovieScenePropertyInstantiatorSystem **)this,&local_68,*param_3,
                               param_4 + iVar18,param_5 + iVar18,iVar17);
            if (bVar8) {
              local_90 = local_res8;
              iVar9 = *piVar24;
              local_res8[0] = iVar9;
              local_88 = param_2 + iVar18;
              TSet<TTuple<UMovieScenePropertyInstantiatorSystem::FContributorKey,UE::MovieScene::FMovieSceneEntityID>,TDefaultMapHashableKeyFuncs<UMovieScenePropertyInstantiatorSystem::FContributorKey,UE::MovieScene::FMovieSceneEntityID,1>,FDefaultSetAllocator>
              ::
              Emplace<TPairInitializer<UMovieScenePropertyInstantiatorSystem::FContributorKey_const_&,UE::MovieScene::FMovieSceneEntityID_const_&>_>
                        ((TSet<TTuple<UMovieScenePropertyInstantiatorSystem::FContributorKey,UE::MovieScene::FMovieSceneEntityID>,TDefaultMapHashableKeyFuncs<UMovieScenePropertyInstantiatorSystem::FContributorKey,UE::MovieScene::FMovieSceneEntityID,1>,FDefaultSetAllocator>
                          *)(*(longlong *)this + 0x88),
                         (TPairInitializer<UMovieScenePropertyInstantiatorSystem::FContributorKey_const_&,UE::MovieScene::FMovieSceneEntityID_const_&>
                          *)local_b4,(bool *)&local_90);
              local_80 = local_res8;
              local_78 = param_2 + iVar18;
              TSet<TTuple<UMovieScenePropertyInstantiatorSystem::FContributorKey,UE::MovieScene::FMovieSceneEntityID>,TDefaultMapHashableKeyFuncs<UMovieScenePropertyInstantiatorSystem::FContributorKey,UE::MovieScene::FMovieSceneEntityID,1>,FDefaultSetAllocator>
              ::
              Emplace<TPairInitializer<UMovieScenePropertyInstantiatorSystem::FContributorKey_const_&,UE::MovieScene::FMovieSceneEntityID_const_&>_>
                        ((TSet<TTuple<UMovieScenePropertyInstantiatorSystem::FContributorKey,UE::MovieScene::FMovieSceneEntityID>,TDefaultMapHashableKeyFuncs<UMovieScenePropertyInstantiatorSystem::FContributorKey,UE::MovieScene::FMovieSceneEntityID,1>,FDefaultSetAllocator>
                          *)(*(longlong *)this + 0xd8),
                         (TPairInitializer<UMovieScenePropertyInstantiatorSystem::FContributorKey_const_&,UE::MovieScene::FMovieSceneEntityID_const_&>
                          *)(local_b4 + 4),(bool *)&local_80);
              pTVar4 = *(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x18);
              iVar25 = (iVar9 - pTVar4->NumBits) + 1;
              if (0 < iVar25) {
                iVar10 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized(pTVar4,iVar25);
                TBitArray<FDefaultBitArrayAllocator>::SetRange(pTVar4,iVar10,iVar25,false);
              }
              lVar16 = *(longlong *)((longlong)this + 0x18);
              if (((iVar9 < 0) || (*(int *)(lVar16 + 0x18) <= iVar9)) &&
                 (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Index>=0 && Index<NumBits",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                     ,0x5be,L""), bVar8)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              if (*(longlong *)(lVar16 + 0x10) != 0) {
                lVar16 = *(longlong *)(lVar16 + 0x10);
              }
              iVar25 = iVar9;
              if (iVar9 < 0) {
                iVar25 = iVar9 + 0x1f;
              }
              puVar1 = (uint *)(lVar16 + (longlong)(iVar25 >> 5) * 4);
              *puVar1 = *puVar1 | 1 << ((byte)iVar9 & 0x1f);
            }
            uVar21 = (ulonglong)(iVar18 + 1U);
            param_3 = param_3 + 1;
            piVar24 = piVar24 + 3;
            if ((int)(uint)local_a8->Size <= (int)(iVar18 + 1U)) {
              return;
            }
          } while( true );
        }
      }
      uVar19 = (ulonglong)(iVar17 + 1);
      uVar22 = uVar22 + 1;
      puVar23 = puVar23 + 0x38;
    } while ((longlong)uVar22 < (longlong)*(int *)((longlong)this + 0x10));
  }
  return;
}

// DestroyStaleProperty @ 146825a50

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMovieScenePropertyInstantiatorSystem::DestroyStaleProperty
          (UMovieScenePropertyInstantiatorSystem *this,int param_1)

{
  FScriptContainerElement *pFVar1;
  uint uVar2;
  code *pcVar3;
  FMovieSceneBlenderSystemID FVar4;
  bool bVar5;
  uint uVar6;
  UMovieSceneBlenderSystem *this_00;
  undefined7 extraout_var;
  longlong lVar7;
  FMovieSceneBlendChannelID local_res8;
  
  lVar7 = (longlong)param_1 * 0x60 + *(longlong *)&this->ResolvedProperties;
  if (*(short *)(lVar7 + 0x4c) != -1) {
    this_00 = (UMovieSceneBlenderSystem *)FWeakObjectPtr::Get((FWeakObjectPtr *)(lVar7 + 0x18));
    if (this_00 != (UMovieSceneBlenderSystem *)0x0) {
      local_res8.ChannelID = *(undefined2 *)(lVar7 + 0x4c);
      FVar4 = UMovieSceneBlenderSystem::GetBlenderSystemID(this_00);
      local_res8.SystemID.Value = *(uchar *)CONCAT71(extraout_var,FVar4.Value);
      UMovieSceneBlenderSystem::ReleaseBlendChannel(this_00,local_res8);
    }
    UE::MovieScene::FEntityManager::AddComponents
              ((FEntityManager *)(this->_padding_ + 0x28),
               (FMovieSceneEntityID)*(ushort *)(lVar7 + 0x48),&this->BuiltInComponents->FinishedMask
              );
  }
  if ((*(byte *)(lVar7 + 0x5e) & 0x10) != 0) {
    uVar2 = *(uint *)(lVar7 + 0x50);
    uVar6 = 0;
    if ((int)uVar2 < (this->PropertyStats).ArrayNum) {
      uVar6 = ~uVar2 >> 0x1f;
    }
    if (uVar6 == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pFVar1 = (this->PropertyStats).AllocatorInstance.Data + (longlong)(int)uVar2 * 8 + 4;
    *(int *)pFVar1 = *(int *)pFVar1 + -1;
  }
  uVar2 = *(uint *)(lVar7 + 0x50);
  uVar6 = 0;
  if ((int)uVar2 < (this->PropertyStats).ArrayNum) {
    uVar6 = ~uVar2 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar1 = (this->PropertyStats).AllocatorInstance.Data + (longlong)(int)uVar2 * 8;
  *(int *)pFVar1 = *(int *)pFVar1 + -1;
  TSparseArray<UMovieScenePropertyInstantiatorSystem::FObjectPropertyInfo,FDefaultSparseArrayAllocator>
  ::RemoveAt(&this->ResolvedProperties,param_1,1);
  return;
}

// DiscoverExpiredProperties @ 146826cc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMovieScenePropertyInstantiatorSystem::DiscoverExpiredProperties
          (UMovieScenePropertyInstantiatorSystem *this,TBitArray<FDefaultBitArrayAllocator> *param_1
          )

{
  FBuiltInComponentTypes *pFVar1;
  undefined1 auStack_1e8 [32];
  FComponentTypeID local_1c8;
  FComponentTypeID local_1c6 [7];
  initializer_list<UE::MovieScene::FComponentTypeID> local_1b8;
  undefined8 local_1a0;
  TStatIdData *pTStack_198;
  byte local_190;
  undefined7 uStack_18f;
  undefined4 uStack_188;
  uint uStack_184;
  <lambda_1> local_180;
  undefined2 local_170;
  TComponentTypeID<UE::MovieScene::FEntityGroupID> TStack_16e;
  undefined4 uStack_16c;
  undefined8 uStack_168;
  TStatIdData *pTStack_160;
  ulonglong uStack_158;
  undefined8 uStack_150;
  FComponentTypeID local_148;
  TComponentTypeID<FMovieScenePropertyBinding> local_146;
  ushort local_144;
  FComponentTypeID local_142 [5];
  undefined1 local_138 [8];
  wchar_t *pwStack_130;
  TStatIdData *local_128;
  ulonglong uStack_120;
  undefined8 local_118;
  FEntityComponentFilter local_110;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_1e8;
  pTStack_198 = &TStatId::TStatId_NAME_None;
  local_1a0 = 0;
  TStack_16e = this->BuiltInComponents->Group;
  uStack_184 = uStack_184 & 0xffffff00;
  local_1c8.Value = *(ushort *)&this->BuiltInComponents->BlendChannelOutput;
  uStack_168 = 0;
  pTStack_160 = &TStatId::TStatId_NAME_None;
  local_110.AllMask.Bits.NumBits = 0;
  local_138._2_2_ = TStack_16e;
  local_138._0_2_ = local_170;
  local_138._4_4_ = uStack_16c;
  local_110.NoneMask.Bits.NumBits = 0;
  local_110.ComplexMasks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_110.ComplexMasks.ArrayNum = 0;
  local_110.ComplexMasks.ArrayMax = 0;
  local_60 = 0;
  local_28 = 0;
  uStack_188 = 0x6ff;
  uStack_158 = CONCAT71(uStack_18f,local_190) & 0xffffffffffffffe0;
  uStack_150._4_4_ = uStack_184;
  uStack_150._0_4_ = AnyHiPriThreadHiPriTask;
  pwStack_130 = (wchar_t *)0x0;
  local_110.AllMask.Bits.MaxBits = 0x180;
  local_110.NoneMask.Bits.MaxBits = 0x180;
  local_128 = &TStatId::TStatId_NAME_None;
  local_5c = 0x180;
  local_24 = 0x180;
  local_190 = local_190 & 0xe0;
  local_180.__this = this;
  local_180.OutInvalidatedProperties = param_1;
  uStack_120 = uStack_158;
  local_118 = uStack_150;
  UE::MovieScene::AddAccessorToFilter((FComponentAccess *)(local_138 + 2),&local_110);
  local_1b8._First = &local_1c8;
  local_1b8._Last = local_1c6;
  UE::MovieScene::FComponentMask::SetAll(&local_110.NoneMask,&local_1b8);
  pFVar1 = this->BuiltInComponents;
  local_148.Value = *(ushort *)&pFVar1->BoundObject;
  local_146 = pFVar1->PropertyBinding;
  local_144 = (pFVar1->Tags).NeedsUnlink.Value;
  local_1b8._First = &local_148;
  local_1b8._Last = local_142;
  UE::MovieScene::FComponentMask::SetAll(&local_110.AllMask,&local_1b8);
  UE::MovieScene::
  TEntityTaskComponentsImpl<TIntegerSequence<int,0,1>,UE::MovieScene::FEntityIDAccess,UE::MovieScene::TReadAccess<UE::MovieScene::FEntityGroupID>_>
  ::
  Iterate_PerEntityImpl<_UMovieScenePropertyInstantiatorSystem::DiscoverExpiredProperties_::__l2::<lambda_1>_&>
            ((TEntityTaskComponentsImpl<TIntegerSequence<int,0,1>,UE::MovieScene::FEntityIDAccess,UE::MovieScene::TReadAccess<UE::MovieScene::FEntityGroupID>_>
              *)local_138,(FEntityManager *)(this->_padding_ + 0x28),&local_110,&local_180);
  if (local_110.ComplexMasks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_110.ComplexMasks.AllocatorInstance.Data);
  }
  return;
}

// DiscoverInvalidatedProperties @ 146826e60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMovieScenePropertyInstantiatorSystem::DiscoverInvalidatedProperties
          (UMovieScenePropertyInstantiatorSystem *this,TBitArray<FDefaultBitArrayAllocator> *param_1
          )

{
  int *piVar1;
  TArray<UE::MovieScene::FPropertyStats,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *_Dst;
  uint uVar3;
  FPropertyDefinition *pFVar4;
  FBuiltInComponentTypes *pFVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  undefined1 auStackY_248 [32];
  FComponentTypeID local_208;
  FComponentTypeID local_206;
  FComponentTypeID local_204;
  FComponentTypeID local_202 [5];
  initializer_list<UE::MovieScene::FComponentTypeID> local_1f8;
  undefined8 local_1e0;
  TStatIdData *pTStack_1d8;
  byte local_1d0;
  undefined7 uStack_1cf;
  undefined4 uStack_1c8;
  uint uStack_1c4;
  initializer_list<UE::MovieScene::FComponentTypeID> local_1b8;
  <lambda_1> local_1a8;
  undefined2 local_188;
  TComponentTypeID<UObject_*> TStack_186;
  TComponentTypeID<FMovieScenePropertyBinding> TStack_184;
  TComponentTypeID<UE::MovieScene::FEntityGroupID> TStack_182;
  undefined8 uStack_180;
  TStatIdData *pTStack_178;
  ulonglong uStack_170;
  undefined8 uStack_168;
  undefined1 local_158 [4];
  FComponentAccess FStack_154;
  FComponentAccess FStack_152;
  wchar_t *pwStack_150;
  TStatIdData *local_148;
  ulonglong uStack_140;
  undefined8 local_138;
  FEntityComponentFilter local_130;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_48;
  undefined4 local_44;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_248;
  uVar3 = (this->BuiltInComponents->PropertyRegistry).Properties.ArrayNum;
  if ((int)uVar3 < 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  pTVar2 = &this->PropertyStats;
  iVar9 = (this->PropertyStats).ArrayNum;
  piVar1 = &(this->PropertyStats).ArrayNum;
  if (iVar9 < (int)uVar3) {
    iVar8 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,4,uVar3 - iVar9,&pTVar2->AllocatorInstance,piVar1,
                       &(this->PropertyStats).ArrayMax);
    DefaultConstructItems<UE::MovieScene::FPropertyStats,int>
              ((pTVar2->AllocatorInstance).Data + (longlong)iVar8 * 8,uVar3 - iVar9);
  }
  else {
    if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar3);
    }
    if ((int)uVar3 < iVar9) {
      uVar10 = iVar9 - uVar3;
      if ((int)(uVar10 | uVar3) < 0) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          );
        if (bVar7) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      if (uVar10 != 0) {
        _Dst = (pTVar2->AllocatorInstance).Data + (longlong)(int)uVar3 * 8;
        iVar9 = (*piVar1 - uVar10) - uVar3;
        if (iVar9 != 0) {
          memmove(_Dst,_Dst + (longlong)(int)uVar10 * 8,(longlong)iVar9 << 3);
        }
        *piVar1 = *piVar1 - uVar10;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,4,&pTVar2->AllocatorInstance,*piVar1,&(this->PropertyStats).ArrayMax);
      }
    }
  }
  iVar9 = (this->BuiltInComponents->PropertyRegistry).Properties.ArrayNum;
  pFVar4 = (FPropertyDefinition *)
           (this->BuiltInComponents->PropertyRegistry).Properties.AllocatorInstance.Data;
  if (iVar9 < 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  pFVar5 = this->BuiltInComponents;
  local_1a8.Properties._12_4_ = local_1f8._Last._4_4_;
  pTStack_1d8 = &TStatId::TStatId_NAME_None;
  TStack_186 = pFVar5->BoundObject;
  TStack_184 = pFVar5->PropertyBinding;
  TStack_182 = pFVar5->Group;
  local_1e0 = 0;
  uStack_1c4 = uStack_1c4 & 0xffffff00;
  local_208.Value = *(ushort *)&pFVar5->BlendChannelOutput;
  uStack_180 = 0;
  pTStack_178 = &TStatId::TStatId_NAME_None;
  local_130.AllMask.Bits.NumBits = 0;
  local_158._2_2_ = TStack_186;
  local_158._0_2_ = local_188;
  unique0x100002f1 = TStack_184;
  unique0x100002f3 = TStack_182;
  local_130.NoneMask.Bits.NumBits = 0;
  local_130.ComplexMasks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_130.ComplexMasks.ArrayNum = 0;
  local_130.ComplexMasks.ArrayMax = 0;
  local_80 = 0;
  local_48 = 0;
  uStack_1c8 = 0x6ff;
  uStack_170 = CONCAT71(uStack_1cf,local_1d0) & 0xffffffffffffffe0;
  uStack_168._4_4_ = uStack_1c4;
  uStack_168._0_4_ = AnyHiPriThreadHiPriTask;
  pwStack_150 = (wchar_t *)0x0;
  local_148 = &TStatId::TStatId_NAME_None;
  local_130.AllMask.Bits.MaxBits = 0x180;
  local_130.NoneMask.Bits.MaxBits = 0x180;
  local_7c = 0x180;
  local_44 = 0x180;
  local_1d0 = local_1d0 & 0xe0;
  local_1a8.__this = this;
  local_1a8.Properties.DataPtr = pFVar4;
  local_1a8.Properties.ArrayNum = iVar9;
  local_1a8.OutInvalidatedProperties = param_1;
  uStack_140 = uStack_170;
  local_138 = uStack_168;
  UE::MovieScene::AddAccessorToFilter((FComponentAccess *)(local_158 + 2),&local_130);
  UE::MovieScene::AddAccessorToFilter((FComponentAccess *)(local_158 + 4),&local_130);
  UE::MovieScene::AddAccessorToFilter((FComponentAccess *)(local_158 + 6),&local_130);
  local_1b8._First = &local_208;
  local_1b8._Last = &local_206;
  UE::MovieScene::FComponentMask::SetAll(&local_130.NoneMask,&local_1b8);
  local_204.Value = (this->BuiltInComponents->Tags).NeedsLink.Value;
  local_1f8._First = &local_204;
  local_1f8._Last = local_202;
  UE::MovieScene::FComponentMask::SetAll(&local_130.AllMask,&local_1f8);
  UE::MovieScene::
  TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3>,UE::MovieScene::FEntityIDAccess,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadAccess<FMovieScenePropertyBinding>,UE::MovieScene::TReadAccess<UE::MovieScene::FEntityGroupID>_>
  ::
  Iterate_PerAllocationImpl<_UMovieScenePropertyInstantiatorSystem::DiscoverNewProperties_::__l2::<lambda_1>_&>
            ((TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3>,UE::MovieScene::FEntityIDAccess,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadAccess<FMovieScenePropertyBinding>,UE::MovieScene::TReadAccess<UE::MovieScene::FEntityGroupID>_>
              *)local_158,(FEntityManager *)(this->_padding_ + 0x28),&local_130,&local_1a8);
  if (local_130.ComplexMasks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_130.ComplexMasks.AllocatorInstance.Data);
  }
  DiscoverExpiredProperties(this,param_1);
  return;
}

// DiscoverNewProperties @ 1468271c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMovieScenePropertyInstantiatorSystem::DiscoverNewProperties
          (UMovieScenePropertyInstantiatorSystem *this,TBitArray<FDefaultBitArrayAllocator> *param_1
          )

{
  int iVar1;
  FPropertyDefinition *pFVar2;
  FBuiltInComponentTypes *pFVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 auStack_218 [32];
  FComponentTypeID local_1f8;
  FComponentTypeID local_1f6;
  FComponentTypeID local_1f4;
  FComponentTypeID local_1f2 [5];
  initializer_list<UE::MovieScene::FComponentTypeID> local_1e8;
  undefined8 local_1d0;
  TStatIdData *pTStack_1c8;
  byte local_1c0;
  undefined7 uStack_1bf;
  undefined4 uStack_1b8;
  uint uStack_1b4;
  initializer_list<UE::MovieScene::FComponentTypeID> local_1a8;
  <lambda_1> local_198;
  undefined2 local_178;
  TComponentTypeID<UObject_*> TStack_176;
  TComponentTypeID<FMovieScenePropertyBinding> TStack_174;
  TComponentTypeID<UE::MovieScene::FEntityGroupID> TStack_172;
  undefined8 uStack_170;
  TStatIdData *pTStack_168;
  ulonglong uStack_160;
  undefined8 uStack_158;
  undefined1 local_148 [4];
  FComponentAccess FStack_144;
  FComponentAccess FStack_142;
  wchar_t *pwStack_140;
  TStatIdData *local_138;
  ulonglong uStack_130;
  undefined8 local_128;
  FEntityComponentFilter local_120;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_218;
  iVar1 = (this->BuiltInComponents->PropertyRegistry).Properties.ArrayNum;
  pFVar2 = (FPropertyDefinition *)
           (this->BuiltInComponents->PropertyRegistry).Properties.AllocatorInstance.Data;
  if (iVar1 < 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pFVar3 = this->BuiltInComponents;
  local_198.Properties._12_4_ = local_1e8._Last._4_4_;
  pTStack_1c8 = &TStatId::TStatId_NAME_None;
  TStack_176 = pFVar3->BoundObject;
  TStack_174 = pFVar3->PropertyBinding;
  TStack_172 = pFVar3->Group;
  local_1d0 = 0;
  uStack_1b4 = uStack_1b4 & 0xffffff00;
  local_1f8.Value = *(ushort *)&pFVar3->BlendChannelOutput;
  uStack_170 = 0;
  pTStack_168 = &TStatId::TStatId_NAME_None;
  local_120.AllMask.Bits.NumBits = 0;
  local_148._2_2_ = TStack_176;
  local_148._0_2_ = local_178;
  unique0x1000020d = TStack_174;
  unique0x1000020f = TStack_172;
  local_120.NoneMask.Bits.NumBits = 0;
  local_120.ComplexMasks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_120.ComplexMasks.ArrayNum = 0;
  local_120.ComplexMasks.ArrayMax = 0;
  local_70 = 0;
  local_38 = 0;
  uStack_1b8 = 0x6ff;
  uStack_160 = CONCAT71(uStack_1bf,local_1c0) & 0xffffffffffffffe0;
  uStack_158._4_4_ = uStack_1b4;
  uStack_158._0_4_ = AnyHiPriThreadHiPriTask;
  pwStack_140 = (wchar_t *)0x0;
  local_138 = &TStatId::TStatId_NAME_None;
  local_120.AllMask.Bits.MaxBits = 0x180;
  local_120.NoneMask.Bits.MaxBits = 0x180;
  local_6c = 0x180;
  local_34 = 0x180;
  local_1c0 = local_1c0 & 0xe0;
  local_198.__this = this;
  local_198.Properties.DataPtr = pFVar2;
  local_198.Properties.ArrayNum = iVar1;
  local_198.OutInvalidatedProperties = param_1;
  uStack_130 = uStack_160;
  local_128 = uStack_158;
  UE::MovieScene::AddAccessorToFilter((FComponentAccess *)(local_148 + 2),&local_120);
  UE::MovieScene::AddAccessorToFilter((FComponentAccess *)(local_148 + 4),&local_120);
  UE::MovieScene::AddAccessorToFilter((FComponentAccess *)(local_148 + 6),&local_120);
  local_1a8._First = &local_1f8;
  local_1a8._Last = &local_1f6;
  UE::MovieScene::FComponentMask::SetAll(&local_120.NoneMask,&local_1a8);
  local_1f4.Value = (this->BuiltInComponents->Tags).NeedsLink.Value;
  local_1e8._First = &local_1f4;
  local_1e8._Last = local_1f2;
  UE::MovieScene::FComponentMask::SetAll(&local_120.AllMask,&local_1e8);
  UE::MovieScene::
  TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3>,UE::MovieScene::FEntityIDAccess,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadAccess<FMovieScenePropertyBinding>,UE::MovieScene::TReadAccess<UE::MovieScene::FEntityGroupID>_>
  ::
  Iterate_PerAllocationImpl<_UMovieScenePropertyInstantiatorSystem::DiscoverNewProperties_::__l2::<lambda_1>_&>
            ((TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3>,UE::MovieScene::FEntityIDAccess,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadAccess<FMovieScenePropertyBinding>,UE::MovieScene::TReadAccess<UE::MovieScene::FEntityGroupID>_>
              *)local_148,(FEntityManager *)(this->_padding_ + 0x28),&local_120,&local_198);
  if (local_120.ComplexMasks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_120.ComplexMasks.AllocatorInstance.Data);
  }
  return;
}

// FindPropertyFromSource @ 14682dde0

/* WARNING: Enum "Type": Some values do not have unique names */

FPropertyRecomposerPropertyInfo * __thiscall
UMovieScenePropertyInstantiatorSystem::FindPropertyFromSource
          (UMovieScenePropertyInstantiatorSystem *this,
          FPropertyRecomposerPropertyInfo *__return_storage_ptr__,FMovieSceneEntityID param_1,
          UObject *param_2)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  FPropertyRecomposerPropertyInfo *pFVar4;
  UMovieSceneBlenderSystem *pUVar5;
  longlong lVar6;
  undefined1 *puVar7;
  undefined4 uVar8;
  TComponentLock<UE::MovieScene::TReadOptional<UE::MovieScene::FEntityGroupID>_> local_98;
  TComponentLock<UE::MovieScene::TReadOptional<FMovieScenePropertyBinding>_> local_80;
  undefined2 local_68;
  undefined6 uStack_66;
  undefined8 uStack_60;
  undefined2 local_58;
  undefined6 uStack_56;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined8 uStack_48;
  undefined2 local_40;
  undefined6 uStack_3e;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined8 uStack_30;
  undefined2 local_28;
  undefined6 uStack_26;
  <lambda_1> local_20;
  
  UE::MovieScene::FEntityManager::ReadComponent<FMovieScenePropertyBinding>
            ((FEntityManager *)(this->_padding_ + 0x28),&local_80,param_1,
             this->BuiltInComponents->PropertyBinding);
  if (local_80._16_8_ == 0) {
    uStack_60 = 0;
    local_68 = 0xffff;
    local_58 = 0xffff;
    *(ulonglong *)__return_storage_ptr__ = CONCAT62(uStack_66,0xffff);
    __return_storage_ptr__->BlenderSystem = (UMovieSceneBlenderSystem *)0x0;
    *(ulonglong *)&__return_storage_ptr__->PropertyEntityID = CONCAT62(uStack_56,0xffff);
    goto LAB_14682dfe9;
  }
  UE::MovieScene::FEntityManager::ReadComponent<UE::MovieScene::FEntityGroupID>
            ((FEntityManager *)(this->_padding_ + 0x28),&local_98,param_1,
             this->BuiltInComponents->Group);
  if (local_98._16_8_ == 0) {
    local_20.GroupID = &local_98;
    local_20.__this = this;
    local_20.Object = param_2;
    UE::MovieScene::FEntityManager::
    IterateImmediateChildren<_UMovieScenePropertyInstantiatorSystem::FindPropertyFromSource_::__l8::<lambda_1>_>
              ((FEntityManager *)(this->_padding_ + 0x28),param_1,&local_20);
    if (local_98._16_8_ != 0) goto LAB_14682ded7;
    uStack_48 = 0;
    local_50 = CONCAT22(local_50._2_2_,0xffff);
    local_40 = 0xffff;
    uVar8 = local_50;
LAB_14682dfc0:
    *(undefined4 *)__return_storage_ptr__ = uVar8;
    *(undefined4 *)&__return_storage_ptr__->field_0x4 = uStack_4c;
    *(undefined4 *)&__return_storage_ptr__->BlenderSystem = 0;
    *(undefined4 *)((longlong)&__return_storage_ptr__->BlenderSystem + 4) = 0;
    *(ulonglong *)&__return_storage_ptr__->PropertyEntityID = CONCAT62(uStack_3e,0xffff);
  }
  else {
LAB_14682ded7:
    uVar1 = *(uint *)(local_98._16_8_ + 4);
    if (uVar1 == 0xffffffff) {
LAB_14682dfa2:
      uStack_30 = 0;
      local_38 = CONCAT22(local_38._2_2_,0xffff);
      local_28 = 0xffff;
      uVar8 = local_38;
      uStack_4c = uStack_34;
      uStack_3e = uStack_26;
      goto LAB_14682dfc0;
    }
    if (((int)uVar1 < 0) || (*(int *)&(this->ResolvedProperties).field_0x28 <= (int)uVar1)) {
LAB_14682df75:
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6422358202226050184>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieSceneTracks\\Private\\Systems\\MovieScenePropertyInstantiator.cpp"
                         ,0x488,"ResolvedProperties.IsValidIndex(PropertyIndex)");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar4 = (FPropertyRecomposerPropertyInfo *)(*pcVar2)();
        return pFVar4;
      }
      goto LAB_14682dfa2;
    }
    if (*(int *)&(this->ResolvedProperties).field_0x28 <= (int)uVar1) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5c6,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar4 = (FPropertyRecomposerPropertyInfo *)(*pcVar2)();
        return pFVar4;
      }
    }
    puVar7 = *(undefined1 **)&(this->ResolvedProperties).field_0x20;
    if (puVar7 == (undefined1 *)0x0) {
      puVar7 = &(this->ResolvedProperties).field_0x10;
    }
    if ((*(uint *)(puVar7 + (longlong)((int)(uVar1 + ((int)uVar1 >> 0x1f & 0x1fU)) >> 5) * 4) >>
         (uVar1 & 0x1f) & 1) == 0) goto LAB_14682df75;
    lVar6 = (longlong)(int)uVar1 * 0x60 + *(longlong *)&this->ResolvedProperties;
    __return_storage_ptr__->BlendChannel = *(ushort *)(lVar6 + 0x4c);
    pUVar5 = (UMovieSceneBlenderSystem *)FWeakObjectPtr::Get((FWeakObjectPtr *)(lVar6 + 0x18));
    __return_storage_ptr__->BlenderSystem = pUVar5;
    (__return_storage_ptr__->PropertyEntityID).Value = *(ushort *)(lVar6 + 0x48);
  }
  if (local_98._0_8_ != 0) {
    LOCK();
    *(int *)(local_98._0_8_ + 0x30) = *(int *)(local_98._0_8_ + 0x30) + -1;
    UNLOCK();
    if (local_98._8_4_ == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(local_98._0_8_ + 0x20));
    }
  }
LAB_14682dfe9:
  if (local_80._0_8_ != 0) {
    LOCK();
    *(int *)(local_80._0_8_ + 0x30) = *(int *)(local_80._0_8_ + 0x30) + -1;
    UNLOCK();
    if (local_80._8_4_ == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(local_80._0_8_ + 0x20));
    }
  }
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 146836a20

UClass * __cdecl UMovieScenePropertyInstantiatorSystem::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieScenePropertyInstantiatorSystem.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieScenePropertyInstantiatorSystem",
               &Z_Registration_Info_UClass_UMovieScenePropertyInstantiatorSystem.InnerSingleton,
               StaticRegisterNativesUMovieScenePropertyInstantiatorSystem,0x1f0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieScenePropertyInstantiatorSystem>,
               InternalVTableHelperCtorCaller<UMovieScenePropertyInstantiatorSystem>,local_res8,
               UMovieSceneEntityInstantiatorSystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieScenePropertyInstantiatorSystem.InnerSingleton;
}

// GetStatsForProperty @ 146837aa0

FPropertyStats __thiscall
UMovieScenePropertyInstantiatorSystem::GetStatsForProperty
          (UMovieScenePropertyInstantiatorSystem *this,FCompositePropertyTypeID param_1)

{
  code *pcVar1;
  bool bVar2;
  FPropertyStats FVar3;
  uint uVar4;
  int in_register_00000014;
  uint in_R8D;
  
  FVar3.NumPartialProperties = in_register_00000014;
  FVar3.NumProperties = param_1.TypeIndex;
  if ((-1 < (int)in_R8D) && ((int)in_R8D < (this->PropertyStats).ArrayNum)) {
    uVar4 = 0;
    if ((int)in_R8D < (this->PropertyStats).ArrayNum) {
      uVar4 = ~in_R8D >> 0x1f;
    }
    if (uVar4 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        FVar3 = (FPropertyStats)(*pcVar1)();
        return FVar3;
      }
    }
    *(undefined8 *)FVar3 =
         *(undefined8 *)((this->PropertyStats).AllocatorInstance.Data + (longlong)(int)in_R8D * 8);
    return FVar3;
  }
  *(undefined8 *)FVar3 = 0;
  return FVar3;
}

// InitializeBlendPath @ 14683b880

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMovieScenePropertyInstantiatorSystem::InitializeBlendPath
          (UMovieScenePropertyInstantiatorSystem *this,FPropertyParameters *param_1)

{
  FComponentTypeID *pFVar1;
  uint *puVar2;
  TTypeCompatibleBytes<unsigned_int> *pTVar3;
  byte bVar4;
  ushort uVar5;
  FComponentTypeID FVar6;
  FObjectPropertyInfo *pFVar7;
  UMovieSceneEntitySystemLinker *this_00;
  ForElementType<unsigned_int> FVar8;
  FBuiltInComponentTypes *pFVar9;
  longlong lVar10;
  code *pcVar11;
  FName FVar12;
  undefined8 uVar13;
  UMovieSceneBlenderSystem *this_01;
  FMovieSceneBlendChannelID FVar14;
  FComponentTypeID FVar15;
  bool bVar16;
  FMovieSceneBlenderSystemID FVar17;
  FMovieSceneEntityID FVar18;
  UMovieSceneBlenderSystem *pUVar19;
  undefined7 extraout_var;
  UClass *pUVar20;
  undefined7 extraout_var_00;
  TSharedPtr<FTrackInstancePropertyBindings,1> *pTVar21;
  TEntityBuilder<UE::MovieScene::TAdd<FMovieSceneBlendChannelID>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAdd<UObject_*>,UE::MovieScene::FAddConditional,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAdd<TSharedPtr<FTrackInstancePropertyBindings,1>_>_>
  *this_02;
  undefined6 extraout_var_01;
  undefined6 extraout_var_02;
  undefined6 extraout_var_03;
  TBitArray<TFixedAllocator<12>_> *pTVar22;
  FString *pFVar23;
  undefined1 *puVar24;
  ForElementType<unsigned_int> FVar25;
  wchar_t *pwVar26;
  uint uVar27;
  uint uVar28;
  FComponentTypeID *pFVar29;
  int iVar30;
  wchar_t *pwVar31;
  FEntityManager *this_03;
  int iVar32;
  TTypeCompatibleBytes<unsigned_int> TVar33;
  TTypeCompatibleBytes<unsigned_int> TVar34;
  undefined1 auStack_738 [32];
  FMovieSceneBlendChannelID local_718;
  ushort local_714;
  ushort local_712;
  TComponentTypeID<UObject_*> local_710;
  FComponentTypeID local_70c;
  FComponentTypeID local_70a;
  TComponentTypeID<FMovieSceneBlendChannelID> local_708;
  TComponentTypeID<FMovieScenePropertyBinding> local_706;
  FMovieSceneBlendChannelID local_704;
  FObjectPropertyInfo *local_6f8;
  int local_6e4;
  FMovieSceneBlendChannelID local_6e0;
  FMovieSceneBlendChannelID local_6dc;
  undefined4 local_6d8;
  UObject *local_6d0;
  UMovieSceneBlenderSystem *local_6c8;
  undefined1 local_6b8 [10];
  FMovieSceneBlendChannelID local_6ae;
  undefined1 local_6aa;
  TComponentTypeID<FMovieScenePropertyBinding> local_6a8;
  FName local_6a4;
  undefined8 uStack_69c;
  undefined4 local_694;
  undefined1 local_690;
  TComponentTypeID<UObject_*> local_688;
  UObject *local_680;
  undefined1 local_678;
  FMovieSceneBlendChannelID local_670;
  ushort local_66c;
  ushort local_66a;
  bool local_668;
  undefined1 local_658 [4];
  undefined1 local_654 [20];
  undefined1 local_640 [10];
  FMovieSceneBlendChannelID local_636;
  undefined1 local_632;
  uint3 local_630;
  undefined5 uStack_62d;
  undefined **local_628;
  TAdd<FMovieSceneBlendChannelID> local_620;
  ushort local_618;
  uchar local_616;
  undefined1 local_610 [10];
  FMovieSceneBlendChannelID local_606;
  undefined1 local_602;
  ushort local_600;
  bool local_5fe;
  FSetupBlenderSystemResult local_5f8;
  FObjectPropertyInfo *local_5d8;
  uint uStack_5d0;
  undefined4 uStack_5cc;
  FEntityRange local_5c8;
  UClass *local_5b8;
  UMovieSceneBlenderSystem *local_5b0;
  uchar local_5a8 [4];
  uchar auStack_5a4 [4];
  uchar local_598 [4];
  UMovieSceneBlenderSystem *local_590;
  FEntityAllocationWriteContext local_588;
  FEntityInfo local_580;
  FEntityBuilderImplBase local_568;
  TComponentTypeID<FMovieSceneBlendChannelID> local_560;
  FMovieSceneBlendChannelID local_55e;
  undefined1 local_55a;
  TComponentTypeID<FMovieScenePropertyBinding> local_558;
  FName local_554;
  undefined8 uStack_54c;
  undefined4 local_544;
  undefined1 local_540;
  TComponentTypeID<UObject_*> local_538;
  UObject *local_530;
  undefined1 local_528;
  FMovieSceneBlendChannelID local_520;
  ushort local_51c;
  ushort local_51a;
  TComponentTypeID<UE::MovieScene::FCustomPropertyIndex> local_518;
  undefined2 local_516;
  undefined1 local_514;
  undefined1 local_510;
  FEntityBuilderImplBase local_508;
  TComponentTypeID<FMovieSceneBlendChannelID> local_500;
  FMovieSceneBlendChannelID local_4fe;
  undefined1 local_4fa;
  TComponentTypeID<FMovieScenePropertyBinding> local_4f8;
  FName local_4f4;
  undefined8 uStack_4ec;
  undefined4 local_4e4;
  undefined1 local_4e0;
  TComponentTypeID<UObject_*> local_4d8;
  UObject *local_4d0;
  undefined1 local_4c8;
  FMovieSceneBlendChannelID local_4c0;
  ushort local_4bc;
  ushort local_4ba;
  TComponentTypeID<unsigned_short> local_4b8;
  undefined2 local_4b6;
  undefined1 local_4b4;
  uchar local_4b0;
  FComponentTypeID *local_4a8;
  FComponentTypeID *pFStack_4a0;
  TArrayView<UE::MovieScene::FPropertyCompositeDefinition_const_,int> local_498;
  TArrayView<UE::MovieScene::FPropertyCompositeDefinition_const_,int> local_488;
  initializer_list<UE::MovieScene::FComponentTypeID> local_478;
  TTypeCompatibleBytes<unsigned_int> local_468;
  TTypeCompatibleBytes<unsigned_int> TStack_464;
  undefined8 local_458;
  TTypeCompatibleBytes<unsigned_int> local_450;
  TTypeCompatibleBytes<unsigned_int> TStack_44c;
  undefined8 local_440;
  undefined1 local_438 [48];
  ForAnyElementType local_408;
  undefined1 local_400 [48];
  bool *local_3d0;
  TBitArray<TFixedAllocator<12>_> local_3c8;
  FString local_390;
  FString local_380;
  FString local_370;
  undefined **local_360 [11];
  longlong local_308;
  TReferenceControllerBase<1> *local_300;
  TBitArray<TFixedAllocator<12>_> local_2f0;
  TBitArray<TFixedAllocator<12>_> local_2b8;
  FMutualComponentInitializers local_280;
  FTypelessMutation local_260;
  FTypelessMutation local_1ec;
  TBitArray<TFixedAllocator<12>_> local_178;
  TBitArray<TFixedAllocator<12>_> local_140;
  FTypelessMutation local_108;
  FComponentMask local_94;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_738;
  local_718 = (FMovieSceneBlendChannelID)(uint)param_1->PropertyDefinition->CompositeSize;
  local_6f8 = (FObjectPropertyInfo *)
              ((this->BuiltInComponents->PropertyRegistry).CompositeDefinitions.AllocatorInstance.
               Data + (ulonglong)param_1->PropertyDefinition->VariableSizeCompositeOffset * 4);
  local_654._12_8_ = param_1;
  local_5d8 = local_6f8;
  uStack_5d0 = (uint)local_718;
  SetupBlenderSystem(this,&local_5f8,param_1);
  if (local_5f8.CurrentInfo.BlenderSystemClass == (UClass *)0x0) {
    InitializeFastPath(this,param_1);
  }
  else {
    pFVar7 = param_1->PropertyInfo;
    if (((pFVar7->FinalBlendOutputID).Value == 0xffff) ||
       (local_5f8.CurrentInfo.BlenderSystemClass != local_5f8.PreviousInfo.BlenderSystemClass)) {
      local_6c8 = (UMovieSceneBlenderSystem *)FWeakObjectPtr::Get(&(pFVar7->Blender).WeakPtr);
      this_00 = (UMovieSceneEntitySystemLinker *)this->_padding_;
      local_5b8 = local_5f8.CurrentInfo.BlenderSystemClass;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)local_5f8.CurrentInfo.BlenderSystemClass);
      }
      pUVar19 = (UMovieSceneBlenderSystem *)
                UMovieSceneEntitySystemLinker::LinkSystem
                          (this_00,(TSubclassOf<UMovieSceneEntitySystem>)&local_5b8);
      if (pUVar19 == (UMovieSceneBlenderSystem *)0x0) {
        pFVar23 = GetTypeName<UMovieSceneBlenderSystem>(&local_380);
        if ((pFVar23->Data).ArrayNum == 0) {
          pwVar31 = L"";
        }
        else {
          pwVar31 = (wchar_t *)(pFVar23->Data).AllocatorInstance.Data;
        }
                    /* WARNING: Subroutine does not return */
        CastLogError(L"nullptr",pwVar31);
      }
      pUVar20 = Z_Construct_UClass_UMovieSceneBlenderSystem_NoRegister();
      iVar30 = (int)pUVar20->_padding_;
      if ((*(int *)(pUVar19->_padding_ + 0x38) < iVar30) ||
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar19->_padding_ + 0x30) + (longlong)iVar30 * 8) !=
          &pUVar20->_padding_)) {
        pFVar23 = GetTypeName<UMovieSceneBlenderSystem>(&local_370);
        pwVar31 = L"";
        if ((pFVar23->Data).ArrayNum == 0) {
          pwVar26 = L"";
        }
        else {
          pwVar26 = (wchar_t *)(pFVar23->Data).AllocatorInstance.Data;
        }
        pFVar23 = GetFullNameForCastLogError<UMovieSceneEntitySystem>
                            (&local_390,(UMovieSceneEntitySystem *)pUVar19);
        if ((pFVar23->Data).ArrayNum != 0) {
          pwVar31 = (wchar_t *)(pFVar23->Data).AllocatorInstance.Data;
        }
                    /* WARNING: Subroutine does not return */
        CastLogError(pwVar31,pwVar26);
      }
      UMovieSceneBlenderSystem::AllocateBlendChannel(pUVar19);
      local_260.AddMask.Bits.MaxBits = 0x180;
      local_260.AddMask.Bits.NumBits = 0;
      local_260.RemoveMask.Bits.NumBits = 0;
      local_260.bRemoveAll = false;
      local_260.RemoveMask.Bits.MaxBits = 0x180;
      if (&local_260.RemoveMask != &this->CleanFastPathMask) {
        TBitArray<TFixedAllocator<12>_>::Assign<TFixedAllocator<12>_>
                  (&local_260.RemoveMask.Bits,&(this->CleanFastPathMask).Bits);
      }
      UE::MovieScene::FComponentMask::Set
                (&local_260.RemoveMask,
                 (FComponentTypeID)(param_1->PropertyDefinition->InitialValueType).Value);
      UE::MovieScene::FComponentMask::Set
                (&local_260.RemoveMask,
                 (FComponentTypeID)(this->BuiltInComponents->Tags).HasAssignedInitialValue.Value);
      pFVar29 = (param_1->PropertyDefinition->MetaDataTypes).DataPtr;
      pFVar1 = pFVar29 + (param_1->PropertyDefinition->MetaDataTypes).ArrayNum;
      this_01 = local_6c8;
      for (; local_6c8 = this_01, pFVar29 != pFVar1; pFVar29 = pFVar29 + 1) {
        uVar5 = pFVar29->Value;
        iVar30 = ((uint)uVar5 - local_260.RemoveMask.Bits.NumBits) + 1;
        if (0 < iVar30) {
          TBitArray<TFixedAllocator<12>_>::Add(&local_260.RemoveMask.Bits,false,iVar30);
        }
        if ((local_260.RemoveMask.Bits.NumBits <= (int)(uint)uVar5) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("Index>=0 && Index<NumBits",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                ,0x5be,L""), bVar16)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        pTVar3 = local_260.RemoveMask.Bits.AllocatorInstance.InlineData + (uVar5 >> 5);
        *&pTVar3->Pad = *&pTVar3->Pad | 1 << ((byte)uVar5 & 0x1f);
        this_01 = local_6c8;
      }
      pFVar7 = param_1->PropertyInfo;
      if (this_01 == (UMovieSceneBlenderSystem *)0x0) {
        local_590 = pUVar19;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)pUVar19);
        }
        FWeakObjectPtr::operator=(&(pFVar7->Blender).WeakPtr,(FObjectPtr)&local_590);
        local_2f0.NumBits = 0;
        local_2f0.MaxBits = 0x180;
        param_1->PropertyInfo->BlendChannel = local_704.ChannelID;
        UE::MovieScene::FComponentMask::Set
                  ((FComponentMask *)&local_2f0,
                   (FComponentTypeID)(param_1->PropertyDefinition->InitialValueType).Value);
        if (0 < (param_1->PropertyDefinition->MetaDataTypes).ArrayNum) {
          iVar30 = (param_1->PropertyInfo->PropertyDefinitionIndex -
                   (this->InitializePropertyMetaDataTasks).NumBits) + 1;
          if (0 < iVar30) {
            TBitArray<FDefaultBitArrayAllocator>::Add
                      (&this->InitializePropertyMetaDataTasks,false,iVar30);
          }
          iVar30 = param_1->PropertyInfo->PropertyDefinitionIndex;
          if (((iVar30 < 0) || ((this->InitializePropertyMetaDataTasks).NumBits <= iVar30)) &&
             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Index>=0 && Index<NumBits",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                  ,0x5be,L""), bVar16)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          FVar8 = (this->InitializePropertyMetaDataTasks).AllocatorInstance.SecondaryData;
          FVar25 = (ForElementType<unsigned_int>)&this->InitializePropertyMetaDataTasks;
          if (FVar8 != (ForElementType<unsigned_int>)0x0) {
            FVar25 = FVar8;
          }
          puVar2 = (uint *)((longlong)FVar25 +
                           (longlong)((int)(iVar30 + (iVar30 >> 0x1f & 0x1fU)) >> 5) * 4);
          *puVar2 = *puVar2 | 1 << ((byte)iVar30 & 0x1f);
          pFVar29 = (param_1->PropertyDefinition->MetaDataTypes).DataPtr;
          pFVar1 = pFVar29 + (param_1->PropertyDefinition->MetaDataTypes).ArrayNum;
          for (; pFVar29 != pFVar1; pFVar29 = pFVar29 + 1) {
            uVar5 = pFVar29->Value;
            iVar30 = ((uint)uVar5 - local_2f0.NumBits) + 1;
            if (0 < iVar30) {
              TBitArray<TFixedAllocator<12>_>::Add(&local_2f0,false,iVar30);
            }
            if ((local_2f0.NumBits <= (int)(uint)uVar5) &&
               (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Index>=0 && Index<NumBits",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                    ,0x5be,L""), bVar16)) {
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
            pTVar3 = local_2f0.AllocatorInstance.InlineData + (uVar5 >> 5);
            *(uint *)pTVar3->Pad = *(uint *)pTVar3->Pad | 1 << ((byte)uVar5 & 0x1f);
          }
        }
        uVar28 = 0;
        if (local_718 != (FMovieSceneBlendChannelID)0x0) {
          uVar27 = 1;
          do {
            pFVar7 = param_1->PropertyInfo;
            if (((pFVar7->EmptyChannels).NumBits <= (int)uVar28) &&
               (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Index>=0 && Index<NumBits",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                    ,0x5be,L""), bVar16)) {
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
            if ((*(uint *)(&(pFVar7->EmptyChannels).AllocatorInstance)[uVar28 >> 5].InlineData[0].
                          Pad & uVar27) == 0) {
              uVar5 = (ushort)(local_6f8->Property)._padding_;
              iVar30 = ((uint)uVar5 - local_2f0.NumBits) + 1;
              if (0 < iVar30) {
                TBitArray<TFixedAllocator<12>_>::Add(&local_2f0,false,iVar30);
              }
              if ((local_2f0.NumBits <= (int)(uint)uVar5) &&
                 (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Index>=0 && Index<NumBits",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                      ,0x5be,L""), bVar16)) {
                pcVar11 = (code *)swi(3);
                (*pcVar11)();
                return;
              }
              pTVar3 = local_2f0.AllocatorInstance.InlineData + (uVar5 >> 5);
              *(uint *)pTVar3->Pad = *(uint *)pTVar3->Pad | 1 << ((byte)uVar5 & 0x1f);
            }
            local_6f8 = (FObjectPropertyInfo *)((longlong)&(local_6f8->Property)._padding_ + 4);
            uVar28 = uVar28 + 1;
            uVar27 = uVar27 << 1 | (uint)((int)uVar27 < 0);
          } while ((int)uVar28 < (int)local_718);
        }
        uVar5 = (param_1->PropertyDefinition->PropertyType).Value;
        iVar30 = ((uint)uVar5 - local_2f0.NumBits) + 1;
        if (0 < iVar30) {
          TBitArray<TFixedAllocator<12>_>::Add(&local_2f0,false,iVar30);
        }
        if ((local_2f0.NumBits <= (int)(uint)uVar5) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("Index>=0 && Index<NumBits",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                ,0x5be,L""), bVar16)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        local_6aa = 1;
        pTVar3 = local_2f0.AllocatorInstance.InlineData + (uVar5 >> 5);
        local_690 = 1;
        local_678 = 1;
        local_668 = true;
        FVar18.Value = 0xffff;
        *(uint *)pTVar3->Pad = *(uint *)pTVar3->Pad | 1 << ((byte)uVar5 & 0x1f);
        pFVar9 = this->BuiltInComponents;
        local_6f8 = param_1->PropertyInfo;
        local_708 = pFVar9->BlendChannelOutput;
        local_706 = pFVar9->PropertyBinding;
        local_710 = pFVar9->BoundObject;
        FVar12 = (local_6f8->PropertyBinding).PropertyName;
        uVar13._0_4_ = (local_6f8->PropertyBinding).PropertyPath.ComparisonIndex;
        uVar13._4_4_ = (local_6f8->PropertyBinding).PropertyPath.Number;
        local_6d8._0_1_ = (local_6f8->PropertyBinding).bCanUseClassLookup;
        local_6d8._1_3_ = *(undefined3 *)&(local_6f8->PropertyBinding).field_0x11;
        local_6e0 = (FMovieSceneBlendChannelID)
                    (CONCAT13(local_6e0.ChannelID._1_1_,
                              CONCAT12(local_6f8->field_0x5e,(pFVar9->Tags).RestoreState.Value)) &
                    0xff01ffff);
        local_6d0 = local_6f8->BoundObject;
        local_718 = local_6e0;
        local_670 = local_6e0;
        local_714 = local_5f8.CurrentInfo.BlenderTypeTag.Value;
        local_66c = local_5f8.CurrentInfo.BlenderTypeTag.Value;
        local_712 = (pFVar9->Tags).NeedsLink.Value;
        local_6b8._0_8_ =
             &
             ___7__TEntityBuilder_U__TAdd_UFMovieSceneBlendChannelID___MovieScene_UE__U__TAdd_UFMovieScenePropertyBinding___23_U__TAdd_PEAVUObject___23_UFAddConditional_23_UFAdd_23_U723__MovieScene_UE__6B_
        ;
        bVar4 = (local_6f8->Property).TypeIndex;
        local_6c8 = (UMovieSceneBlenderSystem *)(ulonglong)bVar4;
        local_6dc = local_704;
        local_6ae = local_704;
        local_6b8._8_2_ = local_708;
        local_6a8 = local_706;
        local_6a4 = FVar12;
        uStack_69c = uVar13;
        local_694 = local_6d8;
        local_688 = local_710;
        local_680 = local_6d0;
        local_66a = local_712;
        if (local_6c8 == (UMovieSceneBlenderSystem *)0x0) {
          if ((bVar4 != 0) &&
             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Index == TypeIndex",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                                  ,0x97,L""), bVar16)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          local_4b8 = this->BuiltInComponents->FastPropertyOffset;
          local_4b6 = *(undefined2 *)&(local_6f8->Property)._padding_;
          local_4fa = 1;
          local_4e0 = 1;
          local_4c8 = 1;
          local_4d0 = local_6d0;
          local_4c0 = local_718;
          local_4bc = local_714;
          local_4b0 = local_668;
          local_4ba = local_712;
          local_4b4 = 1;
          local_508 = (FEntityBuilderImplBase)
                      &
                      ___7__TEntityBuilder_U__TAdd_UFMovieSceneBlendChannelID___MovieScene_UE__U__TAdd_UFMovieScenePropertyBinding___23_U__TAdd_PEAVUObject___23_UFAddConditional_23_UFAdd_23_U723_U__TAdd_G_23__MovieScene_UE__6B_
          ;
          local_408.Data = (FScriptContainerElement *)0x0;
          local_500 = local_708;
          local_4fe = local_6dc;
          local_4f8 = local_706;
          local_4f4 = FVar12;
          uStack_4ec = uVar13;
          local_4e4 = local_6d8;
          local_4d8 = local_710;
          TBitArray<TFixedAllocator<12>_>::Assign<TFixedAllocator<12>_>
                    ((TBitArray<TFixedAllocator<12>_> *)local_438,&local_2f0);
          FVar18 = UE::MovieScene::FEntityBuilderImplBase::CreateEntity
                             (&local_508,(FEntityManager *)local_654,
                              (FComponentMask *)(this->_padding_ + 0x28));
          FVar18.Value = *(ushort *)CONCAT62(extraout_var_03,FVar18.Value);
          local_508 = (FEntityBuilderImplBase)&___7IEntityBuilder_MovieScene_UE__6B_;
        }
        else if (local_6c8 == (UMovieSceneBlenderSystem *)&DAT_00000001) {
          if ((bVar4 != 1) &&
             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Index == TypeIndex",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                                  ,0x97,L""), bVar16)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          local_518 = this->BuiltInComponents->CustomPropertyIndex;
          local_516 = *(undefined2 *)&(local_6f8->Property)._padding_;
          local_55a = 1;
          local_540 = 1;
          local_528 = 1;
          local_530 = local_6d0;
          local_520 = local_718;
          local_51c = local_714;
          local_510 = local_668;
          local_51a = local_712;
          local_514 = 1;
          local_568 = (FEntityBuilderImplBase)
                      &
                      ___7__TEntityBuilder_U__TAdd_UFMovieSceneBlendChannelID___MovieScene_UE__U__TAdd_UFMovieScenePropertyBinding___23_U__TAdd_PEAVUObject___23_UFAddConditional_23_UFAdd_23_U723_U__TAdd_UFCustomPropertyIndex_MovieScene_UE___23__MovieScene_UE__6B_
          ;
          local_3c8.NumBits = 0;
          local_3c8.MaxBits = 0;
          local_560 = local_708;
          local_55e = local_6dc;
          local_558 = local_706;
          local_554 = FVar12;
          uStack_54c = uVar13;
          local_544 = local_6d8;
          local_538 = local_710;
          TBitArray<TFixedAllocator<12>_>::Assign<TFixedAllocator<12>_>(&local_3c8,&local_2f0);
          FVar18 = UE::MovieScene::FEntityBuilderImplBase::CreateEntity
                             (&local_568,(FEntityManager *)(local_658 + 2),
                              (FComponentMask *)(this->_padding_ + 0x28));
          FVar18.Value = *(ushort *)CONCAT62(extraout_var_02,FVar18.Value);
          local_568 = (FEntityBuilderImplBase)&___7IEntityBuilder_MovieScene_UE__6B_;
        }
        else if (local_6c8 == (UMovieSceneBlenderSystem *)&DAT_00000002) {
          pTVar21 = TVariant<unsigned_short,UE::MovieScene::FCustomPropertyIndex,TSharedPtr<FTrackInstancePropertyBindings,1>_>
                    ::Get<TSharedPtr<FTrackInstancePropertyBindings,1>_>(&local_6f8->Property);
          this_02 = UE::MovieScene::
                    TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5>,UE::MovieScene::TAdd<FMovieSceneBlendChannelID>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAdd<UObject_*>,UE::MovieScene::FAddConditional,UE::MovieScene::FAdd,UE::MovieScene::FAdd>
                    ::
                    Add<TSharedPtr<FTrackInstancePropertyBindings,1>,TSharedPtr<FTrackInstancePropertyBindings,1>_&>
                              ((TEntityBuilderImpl<TIntegerSequence<int,0,1,2,3,4,5>,UE::MovieScene::TAdd<FMovieSceneBlendChannelID>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAdd<UObject_*>,UE::MovieScene::FAddConditional,UE::MovieScene::FAdd,UE::MovieScene::FAdd>
                                *)local_6b8,
                               (TEntityBuilder<UE::MovieScene::TAdd<FMovieSceneBlendChannelID>,UE::MovieScene::TAdd<FMovieScenePropertyBinding>,UE::MovieScene::TAdd<UObject_*>,UE::MovieScene::FAddConditional,UE::MovieScene::FAdd,UE::MovieScene::FAdd,UE::MovieScene::TAdd<TSharedPtr<FTrackInstancePropertyBindings,1>_>_>
                                *)local_360,this->BuiltInComponents->SlowProperty,pTVar21);
          local_3d0 = (bool *)0x0;
          TBitArray<TFixedAllocator<12>_>::Assign<TFixedAllocator<12>_>
                    ((TBitArray<TFixedAllocator<12>_> *)local_400,&local_2f0);
          FVar18 = UE::MovieScene::FEntityBuilderImplBase::CreateEntity
                             ((FEntityBuilderImplBase *)this_02,(FEntityManager *)local_658,
                              (FComponentMask *)(this->_padding_ + 0x28));
          FVar18.Value = *(ushort *)CONCAT62(extraout_var_01,FVar18.Value);
          if (local_308 != -1) {
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_300);
          }
          local_360[0] = &___7IEntityBuilder_MovieScene_UE__6B_;
        }
        if ((param_1->PropertyInfo->PreviousFastPathID).Value != 0xffff) {
          local_2b8.NumBits = 0;
          local_2b8.MaxBits = 0;
          TBitArray<TFixedAllocator<12>_>::Assign<TFixedAllocator<12>_>
                    (&local_2b8,
                     (TBitArray<TFixedAllocator<12>_> *)
                     (*(longlong *)(this->_padding_ + 0x288) + 0x230));
          uVar5 = (param_1->PropertyDefinition->InitialValueType).Value;
          iVar30 = ((uint)uVar5 - local_2b8.NumBits) + 1;
          if (0 < iVar30) {
            TBitArray<TFixedAllocator<12>_>::Add(&local_2b8,false,iVar30);
          }
          if ((local_2b8.NumBits <= (int)(uint)uVar5) &&
             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Index>=0 && Index<NumBits",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                  ,0x5be,L""), bVar16)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          pTVar3 = local_2b8.AllocatorInstance.InlineData + (uVar5 >> 5);
          *(uint *)pTVar3->Pad = *(uint *)pTVar3->Pad | 1 << ((byte)uVar5 & 0x1f);
          uVar5 = (this->BuiltInComponents->Tags).HasAssignedInitialValue.Value;
          iVar30 = ((uint)uVar5 - local_2b8.NumBits) + 1;
          if (0 < iVar30) {
            TBitArray<TFixedAllocator<12>_>::Add(&local_2b8,false,iVar30);
          }
          if ((local_2b8.NumBits <= (int)(uint)uVar5) &&
             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Index>=0 && Index<NumBits",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                  ,0x5be,L""), bVar16)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          pTVar3 = local_2b8.AllocatorInstance.InlineData + (uVar5 >> 5);
          *(uint *)pTVar3->Pad = *(uint *)pTVar3->Pad | 1 << ((byte)uVar5 & 0x1f);
          pFVar29 = (param_1->PropertyDefinition->MetaDataTypes).DataPtr;
          pFVar1 = pFVar29 + (param_1->PropertyDefinition->MetaDataTypes).ArrayNum;
          for (; pFVar29 != pFVar1; pFVar29 = pFVar29 + 1) {
            uVar5 = pFVar29->Value;
            iVar30 = ((uint)uVar5 - local_2b8.NumBits) + 1;
            if (0 < iVar30) {
              TBitArray<TFixedAllocator<12>_>::Add(&local_2b8,false,iVar30);
            }
            if ((local_2b8.NumBits <= (int)(uint)uVar5) &&
               (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Index>=0 && Index<NumBits",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                    ,0x5be,L""), bVar16)) {
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
            pTVar3 = local_2b8.AllocatorInstance.InlineData + (uVar5 >> 5);
            *(uint *)pTVar3->Pad = *(uint *)pTVar3->Pad | 1 << ((byte)uVar5 & 0x1f);
          }
          UE::MovieScene::FEntityManager::CopyComponents
                    ((FEntityManager *)(this->_padding_ + 0x28),
                     (FMovieSceneEntityID)(param_1->PropertyInfo->PreviousFastPathID).Value,FVar18,
                     (FComponentMask *)&local_2b8);
        }
        (param_1->PropertyInfo->FinalBlendOutputID).Value = FVar18.Value;
        (param_1->PropertyInfo->PreviousFastPathID).Value = 0xffff;
        bVar16 = UE::MovieScene::FEntityManager::HasComponent
                           ((FEntityManager *)(this->_padding_ + 0x28),
                            (FMovieSceneEntityID)(param_1->PropertyInfo->FinalBlendOutputID).Value,
                            (FComponentTypeID)*(ushort *)&this->BuiltInComponents->BlendChannelInput
                           );
        if ((bVar16) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("!Linker->EntityManager.HasComponent(Params.PropertyInfo->FinalBlendOutputID, BuiltInComponents->BlendChannelInput)"
                                ,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieSceneTracks\\Private\\Systems\\MovieScenePropertyInstantiator.cpp"
                                ,0x435,L""), bVar16)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        local_6b8._0_8_ = &___7IEntityBuilder_MovieScene_UE__6B_;
      }
      else {
        uVar5 = pFVar7->BlendChannel;
        FVar17 = UMovieSceneBlenderSystem::GetBlenderSystemID(this_01);
        local_718.ChannelID = uVar5;
        local_718.SystemID.Value = *(uchar *)CONCAT71(extraout_var_00,FVar17.Value);
        UMovieSceneBlenderSystem::ReleaseBlendChannel(this_01,local_718);
        pFVar7 = param_1->PropertyInfo;
        local_5b0 = pUVar19;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)pUVar19);
        }
        FWeakObjectPtr::operator=(&(pFVar7->Blender).WeakPtr,(FObjectPtr)&local_5b0);
        local_488._12_4_ = uStack_5cc;
        local_488.ArrayNum = uStack_5d0;
        local_108.AddMask.Bits.NumBits = 0;
        param_1->PropertyInfo->BlendChannel = local_704.ChannelID;
        local_108.AddMask.Bits.MaxBits = 0x180;
        local_108.RemoveMask.Bits.NumBits = 0;
        local_108.RemoveMask.Bits.MaxBits = 0x180;
        local_108.bRemoveAll = true;
        local_488.DataPtr = (FPropertyCompositeDefinition *)local_5d8;
        FPropertyParameters::MakeOutputComponentType
                  (param_1,(FEntityManager *)(this->_padding_ + 0x28),&local_488,&local_108.AddMask)
        ;
        if (local_108.AddMask.Bits.NumBits != (uint)local_5f8.PreviousInfo.BlenderTypeTag.Value &&
            (int)(uint)local_5f8.PreviousInfo.BlenderTypeTag.Value <= local_108.AddMask.Bits.NumBits
           ) {
          pTVar3 = local_108.AddMask.Bits.AllocatorInstance.InlineData +
                   (local_5f8.PreviousInfo.BlenderTypeTag.Value >> 5);
          *(uint *)pTVar3->Pad =
               *(uint *)pTVar3->Pad &
               ~(1 << ((byte)local_5f8.PreviousInfo.BlenderTypeTag.Value & 0x1f));
        }
        local_602 = 1;
        local_610._8_2_ = this->BuiltInComponents->BlendChannelOutput;
        local_606 = local_704;
        local_600 = local_5f8.CurrentInfo.BlenderTypeTag.Value;
        local_610._0_8_ =
             &
             ___7__TEntityBuilder_U__TAdd_UFMovieSceneBlendChannelID___MovieScene_UE__UFAdd_23__MovieScene_UE__6B_
        ;
        local_5fe = false;
        UE::MovieScene::
        TEntityBuilderImpl<TIntegerSequence<int,0,1>,UE::MovieScene::TAdd<FMovieSceneBlendChannelID>,UE::MovieScene::FAdd>
        ::MutateExisting((TEntityBuilderImpl<TIntegerSequence<int,0,1>,UE::MovieScene::TAdd<FMovieSceneBlendChannelID>,UE::MovieScene::FAdd>
                          *)local_610,(FEntityManager *)(this->_padding_ + 0x28),
                         (FMovieSceneEntityID)(param_1->PropertyInfo->FinalBlendOutputID).Value,
                         &local_108);
        local_70c.Value = local_5f8.PreviousInfo.BlenderTypeTag.Value;
        local_610._0_8_ = &___7IEntityBuilder_MovieScene_UE__6B_;
        local_4a8 = &local_70c;
        pFStack_4a0 = &local_70a;
        local_478._First = local_4a8;
        local_478._Last = pFStack_4a0;
        UE::MovieScene::FComponentMask::SetAll(&local_260.RemoveMask,&local_478);
      }
      local_654._4_4_ = param_1->PropertyInfoIndex;
      iVar30 = *(int *)&(this->Contributors).field_0x48;
      if (iVar30 != 0) {
        puVar24 = *(undefined1 **)&(this->Contributors).field_0x40;
        if (puVar24 == (undefined1 *)0x0) {
          puVar24 = &(this->Contributors).field_0x38;
        }
        iVar30 = *(int *)(puVar24 + ((longlong)iVar30 - 1U & (longlong)(int)local_654._4_4_) * 4);
        iVar32 = iVar30;
        if (iVar30 != -1) {
          do {
            iVar30 = *(int *)(*(longlong *)&this->Contributors + 8 + (longlong)iVar32 * 0x10);
            if (*(int *)(*(longlong *)&this->Contributors + (longlong)iVar32 * 0x10) ==
                local_654._4_4_) break;
            iVar32 = iVar30;
          } while (iVar30 != -1);
        }
        if (iVar32 != -1) {
          while( true ) {
            FVar15.Value = local_5f8.CurrentInfo.BlenderTypeTag.Value;
            lVar10 = this->_padding_;
            this_03 = (FEntityManager *)(lVar10 + 0x28);
            FVar6.Value = *(ushort *)&this->BuiltInComponents->BlendChannelInput;
            local_620.Payload.bIsSet = true;
            local_618 = local_5f8.CurrentInfo.BlenderTypeTag.Value;
            FVar18.Value = *(ushort *)
                            (*(longlong *)&this->Contributors + 4 + (longlong)iVar32 * 0x10);
            local_620.Payload.TypedValue = local_704;
            local_628 = &
                        ___7__TEntityBuilder_U__TAdd_UFMovieSceneBlendChannelID___MovieScene_UE__UFAdd_23__MovieScene_UE__6B_
            ;
            local_616 = '\0';
            local_620._padding_ = FVar6.Value;
            pTVar22 = &UE::MovieScene::FEntityManager::GetEntityType(this_03,FVar18)->Bits;
            local_140.NumBits = 0;
            local_140.MaxBits = 0;
            TBitArray<TFixedAllocator<12>_>::Assign<TFixedAllocator<12>_>(&local_140,pTVar22);
            UE::MovieScene::FTypelessMutation::MutateType
                      (&local_260,(FComponentMask *)&local_178,(FComponentMask *)&local_140);
            UE::MovieScene::FComponentMask::Set((FComponentMask *)&local_178,FVar6);
            UE::MovieScene::FComponentMask::Set((FComponentMask *)&local_178,FVar15);
            local_280.Initializers.ArrayMax = 2;
            local_280.Initializers.AllocatorInstance.SecondaryData =
                 (ForElementType<UE::MovieScene::IMutualComponentInitializer_*>)0x0;
            local_280.Initializers.ArrayNum = 0;
            UE::MovieScene::FEntityAllocationWriteContext::FEntityAllocationWriteContext
                      (&local_588,this_03);
            UE::MovieScene::FEntityFactories::ComputeMutuallyInclusiveComponents
                      (*(FEntityFactories **)(lVar10 + 0x288),Mandatory,(FComponentMask *)&local_178
                       ,&local_280);
            bVar16 = TBitArray<TFixedAllocator<12>_>::CompareSetBits<TFixedAllocator<12>_>
                               (&local_178,&local_140,false);
            if (!bVar16) {
              UE::MovieScene::FEntityManager::ChangeEntityType
                        (this_03,FVar18,(FComponentMask *)&local_178);
            }
            UE::MovieScene::FEntityManager::GetEntity(this_03,&local_580,FVar18);
            if (local_580.Data.Allocation != (FEntityAllocation *)0x0) {
              UE::MovieScene::TAdd<FMovieSceneBlendChannelID>::Apply
                        (&local_620,local_580.Data.Allocation,local_580.Data.ComponentOffset);
              local_5c8.Allocation = local_580.Data.Allocation;
              local_5c8.ComponentStartOffset = local_580.Data.ComponentOffset;
              local_5c8.Num = 1;
              UE::MovieScene::FMutualComponentInitializers::Execute
                        (&local_280,&local_5c8,&local_588);
            }
            if (local_280.Initializers.AllocatorInstance.SecondaryData !=
                (ForElementType<UE::MovieScene::IMutualComponentInitializer_*>)0x0) {
              FMemory::Free((void *)local_280.Initializers.AllocatorInstance.SecondaryData);
            }
            local_628 = &___7IEntityBuilder_MovieScene_UE__6B_;
            param_1 = (FPropertyParameters *)local_654._12_8_;
            if (iVar30 == -1) break;
            iVar32 = iVar30;
            while (iVar30 = *(int *)(*(longlong *)&this->Contributors + 8 + (longlong)iVar32 * 0x10)
                  , *(int *)(*(longlong *)&this->Contributors + (longlong)iVar32 * 0x10) !=
                    local_654._4_4_) {
              iVar32 = iVar30;
              if (iVar30 == -1) goto LAB_14683cb4f;
            }
          }
        }
      }
LAB_14683cb4f:
      bVar16 = UE::MovieScene::FEntityManager::HasComponent
                         ((FEntityManager *)(this->_padding_ + 0x28),
                          (FMovieSceneEntityID)(param_1->PropertyInfo->FinalBlendOutputID).Value,
                          (FComponentTypeID)*(ushort *)&this->BuiltInComponents->BlendChannelInput);
      if ((bVar16) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("!Linker->EntityManager.HasComponent(Params.PropertyInfo->FinalBlendOutputID, BuiltInComponents->BlendChannelInput)"
                              ,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieSceneTracks\\Private\\Systems\\MovieScenePropertyInstantiator.cpp"
                              ,0x446,L""), bVar16)) goto code_r0x00014683cba5;
    }
    else {
      pUVar19 = (UMovieSceneBlenderSystem *)FWeakObjectPtr::Get(&(pFVar7->Blender).WeakPtr);
      if ((pUVar19 == (UMovieSceneBlenderSystem *)0x0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("Blender",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieSceneTracks\\Private\\Systems\\MovieScenePropertyInstantiator.cpp"
                              ,0x395,L""), bVar16)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      local_498._12_4_ = uStack_5cc;
      local_498.ArrayNum = uStack_5d0;
      local_94.Bits.MaxBits = 0x180;
      local_94.Bits.NumBits = 0;
      local_498.DataPtr = (FPropertyCompositeDefinition *)local_5d8;
      FPropertyParameters::MakeOutputComponentType
                (param_1,(FEntityManager *)(this->_padding_ + 0x28),&local_498,&local_94);
      UE::MovieScene::FEntityManager::ChangeEntityType
                ((FEntityManager *)(this->_padding_ + 0x28),
                 (FMovieSceneEntityID)(param_1->PropertyInfo->FinalBlendOutputID).Value,&local_94);
      uVar5 = param_1->PropertyInfo->BlendChannel;
      FVar17 = UMovieSceneBlenderSystem::GetBlenderSystemID(pUVar19);
      local_718.ChannelID = uVar5;
      local_6e4 = param_1->PropertyInfoIndex;
      local_718.SystemID.Value = *(uchar *)CONCAT71(extraout_var,FVar17.Value);
      if (param_1->PropertyInfo->bMaxHBiasHasChanged == '\0') {
        TSet<TTuple<UMovieScenePropertyInstantiatorSystem::FContributorKey,UE::MovieScene::FMovieSceneEntityID>,TDefaultMapHashableKeyFuncs<UMovieScenePropertyInstantiatorSystem::FContributorKey,UE::MovieScene::FMovieSceneEntityID,1>,FDefaultSetAllocator>
        ::TBaseKeyIterator<1>::TBaseKeyIterator<1>
                  ((TBaseKeyIterator<1> *)&local_450,
                   (TSet<TTuple<UMovieScenePropertyInstantiatorSystem::FContributorKey,UE::MovieScene::FMovieSceneEntityID>,TDefaultMapHashableKeyFuncs<UMovieScenePropertyInstantiatorSystem::FContributorKey,UE::MovieScene::FMovieSceneEntityID,1>,FDefaultSetAllocator>
                    *)&this->NewContributors,(FContributorKey *)&local_6e4);
        TVar33.Pad = SUB84(local_440,0);
        TVar34.Pad = SUB84(local_440,4);
        local_468.Pad = local_450.Pad;
        TStack_464.Pad = TStack_44c.Pad;
      }
      else {
        TSet<TTuple<UMovieScenePropertyInstantiatorSystem::FContributorKey,UE::MovieScene::FMovieSceneEntityID>,TDefaultMapHashableKeyFuncs<UMovieScenePropertyInstantiatorSystem::FContributorKey,UE::MovieScene::FMovieSceneEntityID,1>,FDefaultSetAllocator>
        ::TBaseKeyIterator<1>::TBaseKeyIterator<1>
                  ((TBaseKeyIterator<1> *)&local_468,
                   (TSet<TTuple<UMovieScenePropertyInstantiatorSystem::FContributorKey,UE::MovieScene::FMovieSceneEntityID>,TDefaultMapHashableKeyFuncs<UMovieScenePropertyInstantiatorSystem::FContributorKey,UE::MovieScene::FMovieSceneEntityID,1>,FDefaultSetAllocator>
                    *)&this->Contributors,(FContributorKey *)&local_6e4);
        TVar33.Pad = SUB84(local_458,0);
        TVar34.Pad = SUB84(local_458,4);
      }
      FVar14 = local_718;
      unique0x1000036d = TVar34.Pad[0];
      unique0x1000036e = TVar34.Pad[1];
      unique0x1000036f = TVar34.Pad[2];
      unique0x10000370 = TVar34.Pad[3];
      local_630._0_1_ = TVar33.Pad[0];
      local_630._1_1_ = TVar33.Pad[1];
      local_630._2_1_ = (bool)TVar33.Pad[2];
      unique0x1000036c = TVar33.Pad[3];
      unique0x10000375 = TVar34.Pad[0];
      unique0x10000376 = TVar34.Pad[1];
      unique0x10000377 = TVar34.Pad[2];
      unique0x10000378 = TVar34.Pad[3];
      local_598[0] = TVar33.Pad[0];
      local_598[1] = TVar33.Pad[1];
      local_598[2] = TVar33.Pad[2];
      local_598[3] = TVar33.Pad[3];
      local_5a8 = local_468.Pad;
      auStack_5a4 = TStack_464.Pad;
      while (TVar33.Pad != (uchar  [4])0xffffffff) {
        local_632 = 1;
        local_640._8_2_ = this->BuiltInComponents->BlendChannelInput;
        local_1ec.RemoveMask.Bits.AllocatorInstance.InlineData[10].Pad[0] = '\0';
        local_1ec.RemoveMask.Bits.AllocatorInstance.InlineData[10].Pad[1] = '\0';
        local_1ec.RemoveMask.Bits.AllocatorInstance.InlineData[10].Pad[2] = '\0';
        local_1ec.RemoveMask.Bits.AllocatorInstance.InlineData[10].Pad[3] = '\0';
        local_1ec.RemoveMask.Bits.AllocatorInstance.InlineData[0xb].Pad[0] = '\0';
        local_1ec.RemoveMask.Bits.AllocatorInstance.InlineData[0xb].Pad[1] = '\0';
        local_1ec.RemoveMask.Bits.AllocatorInstance.InlineData[0xb].Pad[2] = '\0';
        local_1ec.RemoveMask.Bits.AllocatorInstance.InlineData[0xb].Pad[3] = '\0';
        local_1ec.RemoveMask.Bits.MaxBits = 0x180;
        local_1ec.RemoveMask.Bits.AllocatorInstance.InlineData[0].Pad[0] = '\0';
        local_1ec.RemoveMask.Bits.AllocatorInstance.InlineData[0].Pad[1] = '\0';
        local_1ec.RemoveMask.Bits.AllocatorInstance.InlineData[0].Pad[2] = '\0';
        local_1ec.RemoveMask.Bits.AllocatorInstance.InlineData[0].Pad[3] = '\0';
        local_1ec.RemoveMask.Bits.AllocatorInstance.InlineData[1].Pad[0] = '\0';
        local_1ec.RemoveMask.Bits.AllocatorInstance.InlineData[1].Pad[1] = '\0';
        local_1ec.RemoveMask.Bits.AllocatorInstance.InlineData[1].Pad[2] = '\0';
        local_1ec.RemoveMask.Bits.AllocatorInstance.InlineData[1].Pad[3] = '\0';
        local_1ec.AddMask.Bits.NumBits = 0;
        local_1ec.AddMask.Bits.MaxBits = 0x180;
        local_1ec.AddMask.Bits.AllocatorInstance.InlineData[0].Pad[0] = '\0';
        local_1ec.AddMask.Bits.AllocatorInstance.InlineData[0].Pad[1] = '\0';
        local_1ec.AddMask.Bits.AllocatorInstance.InlineData[0].Pad[2] = '\0';
        local_1ec.AddMask.Bits.AllocatorInstance.InlineData[0].Pad[3] = '\0';
        local_1ec.AddMask.Bits.AllocatorInstance.InlineData[1].Pad[0] = '\0';
        local_1ec.AddMask.Bits.AllocatorInstance.InlineData[1].Pad[1] = '\0';
        local_1ec.AddMask.Bits.AllocatorInstance.InlineData[1].Pad[2] = '\0';
        local_1ec.AddMask.Bits.AllocatorInstance.InlineData[1].Pad[3] = '\0';
        local_1ec.AddMask.Bits.AllocatorInstance.InlineData[2].Pad[0] = '\0';
        local_1ec.AddMask.Bits.AllocatorInstance.InlineData[2].Pad[1] = '\0';
        local_1ec.AddMask.Bits.AllocatorInstance.InlineData[2].Pad[2] = '\0';
        local_1ec.AddMask.Bits.AllocatorInstance.InlineData[2].Pad[3] = '\0';
        local_1ec.AddMask.Bits.AllocatorInstance.InlineData[3].Pad[0] = '\0';
        local_1ec.AddMask.Bits.AllocatorInstance.InlineData[3].Pad[1] = '\0';
        local_1ec.AddMask.Bits.AllocatorInstance.InlineData[3].Pad[2] = '\0';
        local_1ec.AddMask.Bits.AllocatorInstance.InlineData[3].Pad[3] = '\0';
        local_1ec.RemoveMask.Bits.NumBits = 0;
        local_1ec.AddMask.Bits.AllocatorInstance.InlineData[4].Pad[0] = '\0';
        local_1ec.AddMask.Bits.AllocatorInstance.InlineData[4].Pad[1] = '\0';
        local_1ec.AddMask.Bits.AllocatorInstance.InlineData[4].Pad[2] = '\0';
        local_1ec.AddMask.Bits.AllocatorInstance.InlineData[4].Pad[3] = '\0';
        local_1ec.AddMask.Bits.AllocatorInstance.InlineData[5].Pad[0] = '\0';
        local_1ec.AddMask.Bits.AllocatorInstance.InlineData[5].Pad[1] = '\0';
        local_1ec.AddMask.Bits.AllocatorInstance.InlineData[5].Pad[2] = '\0';
        local_1ec.AddMask.Bits.AllocatorInstance.InlineData[5].Pad[3] = '\0';
        local_1ec.AddMask.Bits.AllocatorInstance.InlineData[6].Pad[0] = '\0';
        local_1ec.AddMask.Bits.AllocatorInstance.InlineData[6].Pad[1] = '\0';
        local_1ec.AddMask.Bits.AllocatorInstance.InlineData[6].Pad[2] = '\0';
        local_1ec.AddMask.Bits.AllocatorInstance.InlineData[6].Pad[3] = '\0';
        local_1ec.AddMask.Bits.AllocatorInstance.InlineData[7].Pad[0] = '\0';
        local_1ec.AddMask.Bits.AllocatorInstance.InlineData[7].Pad[1] = '\0';
        local_1ec.AddMask.Bits.AllocatorInstance.InlineData[7].Pad[2] = '\0';
        local_1ec.AddMask.Bits.AllocatorInstance.InlineData[7].Pad[3] = '\0';
        local_1ec.bRemoveAll = false;
        local_1ec._113_3_ = 0;
        local_1ec.AddMask.Bits.AllocatorInstance.InlineData[8].Pad[0] = '\0';
        local_1ec.AddMask.Bits.AllocatorInstance.InlineData[8].Pad[1] = '\0';
        local_1ec.AddMask.Bits.AllocatorInstance.InlineData[8].Pad[2] = '\0';
        local_1ec.AddMask.Bits.AllocatorInstance.InlineData[8].Pad[3] = '\0';
        local_1ec.AddMask.Bits.AllocatorInstance.InlineData[9].Pad[0] = '\0';
        local_1ec.AddMask.Bits.AllocatorInstance.InlineData[9].Pad[1] = '\0';
        local_1ec.AddMask.Bits.AllocatorInstance.InlineData[9].Pad[2] = '\0';
        local_1ec.AddMask.Bits.AllocatorInstance.InlineData[9].Pad[3] = '\0';
        local_1ec.AddMask.Bits.AllocatorInstance.InlineData[10].Pad[0] = '\0';
        local_1ec.AddMask.Bits.AllocatorInstance.InlineData[10].Pad[1] = '\0';
        local_1ec.AddMask.Bits.AllocatorInstance.InlineData[10].Pad[2] = '\0';
        local_1ec.AddMask.Bits.AllocatorInstance.InlineData[10].Pad[3] = '\0';
        local_1ec.AddMask.Bits.AllocatorInstance.InlineData[0xb].Pad[0] = '\0';
        local_1ec.AddMask.Bits.AllocatorInstance.InlineData[0xb].Pad[1] = '\0';
        local_1ec.AddMask.Bits.AllocatorInstance.InlineData[0xb].Pad[2] = '\0';
        local_1ec.AddMask.Bits.AllocatorInstance.InlineData[0xb].Pad[3] = '\0';
        local_1ec.RemoveMask.Bits.AllocatorInstance.InlineData[2].Pad[0] = '\0';
        local_1ec.RemoveMask.Bits.AllocatorInstance.InlineData[2].Pad[1] = '\0';
        local_1ec.RemoveMask.Bits.AllocatorInstance.InlineData[2].Pad[2] = '\0';
        local_1ec.RemoveMask.Bits.AllocatorInstance.InlineData[2].Pad[3] = '\0';
        local_1ec.RemoveMask.Bits.AllocatorInstance.InlineData[3].Pad[0] = '\0';
        local_1ec.RemoveMask.Bits.AllocatorInstance.InlineData[3].Pad[1] = '\0';
        local_1ec.RemoveMask.Bits.AllocatorInstance.InlineData[3].Pad[2] = '\0';
        local_1ec.RemoveMask.Bits.AllocatorInstance.InlineData[3].Pad[3] = '\0';
        local_1ec.RemoveMask.Bits.AllocatorInstance.InlineData[4].Pad[0] = '\0';
        local_1ec.RemoveMask.Bits.AllocatorInstance.InlineData[4].Pad[1] = '\0';
        local_1ec.RemoveMask.Bits.AllocatorInstance.InlineData[4].Pad[2] = '\0';
        local_1ec.RemoveMask.Bits.AllocatorInstance.InlineData[4].Pad[3] = '\0';
        local_1ec.RemoveMask.Bits.AllocatorInstance.InlineData[5].Pad[0] = '\0';
        local_1ec.RemoveMask.Bits.AllocatorInstance.InlineData[5].Pad[1] = '\0';
        local_1ec.RemoveMask.Bits.AllocatorInstance.InlineData[5].Pad[2] = '\0';
        local_1ec.RemoveMask.Bits.AllocatorInstance.InlineData[5].Pad[3] = '\0';
        local_636 = FVar14;
        local_1ec.RemoveMask.Bits.AllocatorInstance.InlineData[6].Pad[0] = '\0';
        local_1ec.RemoveMask.Bits.AllocatorInstance.InlineData[6].Pad[1] = '\0';
        local_1ec.RemoveMask.Bits.AllocatorInstance.InlineData[6].Pad[2] = '\0';
        local_1ec.RemoveMask.Bits.AllocatorInstance.InlineData[6].Pad[3] = '\0';
        local_1ec.RemoveMask.Bits.AllocatorInstance.InlineData[7].Pad[0] = '\0';
        local_1ec.RemoveMask.Bits.AllocatorInstance.InlineData[7].Pad[1] = '\0';
        local_1ec.RemoveMask.Bits.AllocatorInstance.InlineData[7].Pad[2] = '\0';
        local_1ec.RemoveMask.Bits.AllocatorInstance.InlineData[7].Pad[3] = '\0';
        local_1ec.RemoveMask.Bits.AllocatorInstance.InlineData[8].Pad[0] = '\0';
        local_1ec.RemoveMask.Bits.AllocatorInstance.InlineData[8].Pad[1] = '\0';
        local_1ec.RemoveMask.Bits.AllocatorInstance.InlineData[8].Pad[2] = '\0';
        local_1ec.RemoveMask.Bits.AllocatorInstance.InlineData[8].Pad[3] = '\0';
        local_1ec.RemoveMask.Bits.AllocatorInstance.InlineData[9].Pad[0] = '\0';
        local_1ec.RemoveMask.Bits.AllocatorInstance.InlineData[9].Pad[1] = '\0';
        local_1ec.RemoveMask.Bits.AllocatorInstance.InlineData[9].Pad[2] = '\0';
        local_1ec.RemoveMask.Bits.AllocatorInstance.InlineData[9].Pad[3] = '\0';
        local_630._2_1_ = false;
        local_630._0_2_ = local_5f8.CurrentInfo.BlenderTypeTag.Value;
        local_640._0_8_ =
             &
             ___7__TEntityBuilder_U__TAdd_UFMovieSceneBlendChannelID___MovieScene_UE__UFAdd_23__MovieScene_UE__6B_
        ;
        UE::MovieScene::
        TEntityBuilderImpl<TIntegerSequence<int,0,1>,UE::MovieScene::TAdd<FMovieSceneBlendChannelID>,UE::MovieScene::FAdd>
        ::MutateExisting((TEntityBuilderImpl<TIntegerSequence<int,0,1>,UE::MovieScene::TAdd<FMovieSceneBlendChannelID>,UE::MovieScene::FAdd>
                          *)local_640,(FEntityManager *)(this->_padding_ + 0x28),
                         (FMovieSceneEntityID)
                         *(ushort *)
                          (*(longlong *)CONCAT44(auStack_5a4,local_5a8) + 4 +
                          (longlong)(int)TVar33.Pad * 0x10),&local_1ec);
        TSet<TTuple<UMovieScenePropertyInstantiatorSystem::FContributorKey,UE::MovieScene::FMovieSceneEntityID>,TDefaultMapHashableKeyFuncs<UMovieScenePropertyInstantiatorSystem::FContributorKey,UE::MovieScene::FMovieSceneEntityID,1>,FDefaultSetAllocator>
        ::TBaseKeyIterator<1>::operator++((TBaseKeyIterator<1> *)local_5a8);
        param_1 = (FPropertyParameters *)local_654._12_8_;
        TVar33.Pad = local_598;
      }
      bVar16 = UE::MovieScene::FEntityManager::HasComponent
                         ((FEntityManager *)(this->_padding_ + 0x28),
                          (FMovieSceneEntityID)(param_1->PropertyInfo->FinalBlendOutputID).Value,
                          (FComponentTypeID)*(ushort *)&this->BuiltInComponents->BlendChannelInput);
      if ((bVar16) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("!Linker->EntityManager.HasComponent(Params.PropertyInfo->FinalBlendOutputID, BuiltInComponents->BlendChannelInput)"
                              ,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieSceneTracks\\Private\\Systems\\MovieScenePropertyInstantiator.cpp"
                              ,0x3ad,L""), bVar16)) {
code_r0x00014683cba5:
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
    }
  }
  return;
}

// InitializeFastPath @ 14683ce10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014683d7c9) */
/* WARNING: Removing unreachable block (ram,0x00014683d7ee) */
/* WARNING: Removing unreachable block (ram,0x00014683d950) */
/* WARNING: Removing unreachable block (ram,0x00014683d975) */
/* WARNING: Removing unreachable block (ram,0x00014683d20c) */
/* WARNING: Removing unreachable block (ram,0x00014683d231) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMovieScenePropertyInstantiatorSystem::InitializeFastPath
          (UMovieScenePropertyInstantiatorSystem *this,FPropertyParameters *param_1)

{
  uint *puVar1;
  FComponentTypeID *pFVar2;
  TTypeCompatibleBytes<unsigned_int> *pTVar3;
  uchar uVar4;
  FMovieSceneEntityID FVar5;
  TComponentTypeID<FMovieSceneBlendChannelID> TVar6;
  ushort uVar7;
  FComponentTypeID FVar8;
  FMovieSceneEntityID FVar9;
  ForElementType<unsigned_int> FVar10;
  FObjectPropertyInfo *pFVar11;
  code *pcVar12;
  FTrackInstancePropertyBindings *pFVar13;
  FSharedReferencer<1> FVar14;
  FPropertyDefinition **ppFVar15;
  bool bVar16;
  FMovieSceneBlenderSystemID FVar17;
  int iVar18;
  TBitArray<TFixedAllocator<12>_> *pTVar19;
  UMovieSceneBlenderSystem *this_00;
  undefined7 extraout_var;
  int iVar20;
  FSharedReferencer<1> FVar21;
  int iVar22;
  undefined1 *puVar23;
  longlong lVar24;
  TComponentTypeID<FMovieSceneBlendChannelID> *pTVar25;
  ForElementType<unsigned_int> this_01;
  FComponentTypeID *pFVar26;
  undefined8 uVar27;
  int iVar28;
  undefined8 uVar29;
  FEntityManager *pFVar30;
  FPropertyDefinition **ppFVar31;
  undefined1 auStack_408 [36];
  TComponentTypeID<FMovieSceneBlendChannelID> local_3e4;
  TComponentTypeID<UE::MovieScene::FHierarchicalBlendTarget> local_3e2;
  undefined8 local_3e0;
  int local_3d8;
  FWeakObjectPtr local_3d4;
  TMultiMap<UMovieScenePropertyInstantiatorSystem::FContributorKey,UE::MovieScene::FMovieSceneEntityID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UMovieScenePropertyInstantiatorSystem::FContributorKey,UE::MovieScene::FMovieSceneEntityID,1>_>
  *local_3c8;
  int *piStack_3c0;
  int local_3b8;
  int iStack_3b4;
  undefined **local_3b0;
  TAdd<TSharedPtr<FTrackInstancePropertyBindings,1>_> local_3a8;
  undefined1 local_390;
  undefined **local_388;
  TAdd<UE::MovieScene::FCustomPropertyIndex> local_380;
  undefined1 local_37a;
  undefined **local_378;
  TAdd<unsigned_short> local_370;
  undefined1 local_36a;
  TMultiMap<UMovieScenePropertyInstantiatorSystem::FContributorKey,UE::MovieScene::FMovieSceneEntityID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UMovieScenePropertyInstantiatorSystem::FContributorKey,UE::MovieScene::FMovieSceneEntityID,1>_>
  *local_368;
  int *piStack_360;
  undefined8 local_358;
  FEntityAllocationWriteContext local_350;
  FEntityAllocationWriteContext local_348;
  FEntityAllocationWriteContext local_340;
  FPropertyDefinition **local_338;
  undefined8 local_330;
  FEntityRange local_328;
  FEntityRange local_318;
  FEntityRange local_308;
  FEntityInfo local_2f8;
  FEntityInfo local_2e0;
  FEntityInfo local_2c8;
  TBitArray<TFixedAllocator<12>_> local_2b0;
  FMutualComponentInitializers local_278;
  FMutualComponentInitializers local_258;
  FMutualComponentInitializers local_238;
  FTypelessMutation local_218;
  TBitArray<TFixedAllocator<12>_> local_1a4;
  TBitArray<TFixedAllocator<12>_> local_16c;
  TBitArray<TFixedAllocator<12>_> local_134;
  TBitArray<TFixedAllocator<12>_> local_fc;
  TBitArray<TFixedAllocator<12>_> local_c4;
  TBitArray<TFixedAllocator<12>_> local_8c;
  ulonglong local_50;
  
  FVar14.ReferenceController = _UNK_15076adc8;
  pFVar13 = ___xmm_0000000000000000ffffffffffffffff;
  local_50 = __security_cookie.value ^ (ulonglong)auStack_408;
  local_3d8 = param_1->PropertyInfoIndex;
  local_3c8 = &this->Contributors;
  piStack_3c0 = &local_3d8;
  iVar28 = *(int *)&(this->Contributors).field_0x48;
  local_3b8 = -1;
  if (iVar28 == 0) {
    iStack_3b4 = -1;
  }
  else {
    puVar23 = *(undefined1 **)&(this->Contributors).field_0x40;
    if (puVar23 == (undefined1 *)0x0) {
      puVar23 = &(this->Contributors).field_0x38;
    }
    iStack_3b4 = *(int *)(puVar23 + ((longlong)iVar28 - 1U & (longlong)local_3d8) * 4);
    local_3b8 = iStack_3b4;
    if (iStack_3b4 != -1) {
      do {
        iStack_3b4 = *(int *)(*(longlong *)local_3c8 + 8 + (longlong)local_3b8 * 0x10);
        if (*(int *)(*(longlong *)local_3c8 + (longlong)local_3b8 * 0x10) == local_3d8) break;
        local_3b8 = iStack_3b4;
      } while (iStack_3b4 != -1);
    }
  }
  local_358 = CONCAT44(iStack_3b4,local_3b8);
  local_368 = local_3c8;
  piStack_360 = piStack_3c0;
  if (local_3b8 != -1) {
    local_3e0 = &param_1->PropertyDefinition;
    iVar28 = local_3b8;
    local_338 = local_3e0;
    do {
      ppFVar15 = local_338;
      ppFVar31 = local_3e0;
      FVar5.Value = *(ushort *)(*(longlong *)local_368 + 4 + (longlong)iVar28 * 0x10);
      local_218.AddMask.Bits.NumBits = 0;
      pTVar25 = &local_3e4;
      local_218.AddMask.Bits.MaxBits = 0x180;
      local_218.RemoveMask.Bits.NumBits = 0;
      local_218.RemoveMask.Bits.MaxBits = 0x180;
      local_218.bRemoveAll = false;
      local_3e4 = this->BuiltInComponents->BlendChannelInput;
      local_3e2 = this->BuiltInComponents->HierarchicalBlendTarget;
      do {
        TVar6 = *pTVar25;
        iVar28 = ((uint)(ushort)TVar6 - local_218.RemoveMask.Bits.NumBits) + 1;
        if (0 < iVar28) {
          TBitArray<TFixedAllocator<12>_>::Add(&local_218.RemoveMask.Bits,false,iVar28);
        }
        if ((local_218.RemoveMask.Bits.NumBits <= (int)(uint)(ushort)TVar6) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("Index>=0 && Index<NumBits",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                ,0x5be,L""), bVar16)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        pTVar3 = local_218.RemoveMask.Bits.AllocatorInstance.InlineData + ((ushort)TVar6 >> 5);
        pTVar25 = pTVar25 + 1;
        *&pTVar3->Pad = *&pTVar3->Pad | 1 << (TVar6._0_1_ & 0x1f);
      } while (pTVar25 != (TComponentTypeID<FMovieSceneBlendChannelID> *)&local_3e0);
      if (param_1->PropertyInfo->bNeedsInitialValue != '\0') {
        uVar7 = ((*ppFVar15)->InitialValueType).Value;
        iVar28 = ((uint)uVar7 - local_218.AddMask.Bits.NumBits) + 1;
        if (0 < iVar28) {
          TBitArray<TFixedAllocator<12>_>::Add
                    ((TBitArray<TFixedAllocator<12>_> *)&local_218,false,iVar28);
        }
        if ((local_218.AddMask.Bits.NumBits <= (int)(uint)uVar7) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("Index>=0 && Index<NumBits",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                ,0x5be,L""), bVar16)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        pTVar3 = local_218.AddMask.Bits.AllocatorInstance.InlineData + (uVar7 >> 5);
        *(uint *)pTVar3->Pad = *(uint *)pTVar3->Pad | 1 << ((byte)uVar7 & 0x1f);
        ppFVar31 = ppFVar15;
        local_3e0 = ppFVar15;
      }
      if (0 < ((*ppFVar31)->MetaDataTypes).ArrayNum) {
        this_01 = (ForElementType<unsigned_int>)&this->InitializePropertyMetaDataTasks;
        iVar28 = (param_1->PropertyInfo->PropertyDefinitionIndex -
                 (this->InitializePropertyMetaDataTasks).NumBits) + 1;
        if (0 < iVar28) {
          iVar18 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized
                             ((TBitArray<FDefaultBitArrayAllocator> *)this_01,iVar28);
          TBitArray<FDefaultBitArrayAllocator>::SetRange
                    ((TBitArray<FDefaultBitArrayAllocator> *)this_01,iVar18,iVar28,false);
        }
        iVar28 = param_1->PropertyInfo->PropertyDefinitionIndex;
        if (((iVar28 < 0) || ((this->InitializePropertyMetaDataTasks).NumBits <= iVar28)) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("Index>=0 && Index<NumBits",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                ,0x5be,L""), bVar16)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        FVar10 = (this->InitializePropertyMetaDataTasks).AllocatorInstance.SecondaryData;
        if (FVar10 != (ForElementType<unsigned_int>)0x0) {
          this_01 = FVar10;
        }
        iVar18 = iVar28;
        if (iVar28 < 0) {
          iVar18 = iVar28 + 0x1f;
        }
        puVar1 = (uint *)((longlong)this_01 + (longlong)(iVar18 >> 5) * 4);
        *puVar1 = *puVar1 | 1 << ((byte)iVar28 & 0x1f);
        pFVar26 = ((*ppFVar31)->MetaDataTypes).DataPtr;
        pFVar2 = pFVar26 + ((*ppFVar31)->MetaDataTypes).ArrayNum;
        for (; pFVar26 != pFVar2; pFVar26 = pFVar26 + 1) {
          uVar7 = pFVar26->Value;
          iVar28 = ((uint)uVar7 - local_218.AddMask.Bits.NumBits) + 1;
          if (0 < iVar28) {
            TBitArray<TFixedAllocator<12>_>::Add
                      ((TBitArray<TFixedAllocator<12>_> *)&local_218,false,iVar28);
          }
          if ((local_218.AddMask.Bits.NumBits <= (int)(uint)uVar7) &&
             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Index>=0 && Index<NumBits",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                  ,0x5be,L""), bVar16)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          pTVar3 = local_218.AddMask.Bits.AllocatorInstance.InlineData + (uVar7 >> 5);
          *(uint *)pTVar3->Pad = *(uint *)pTVar3->Pad | 1 << ((byte)uVar7 & 0x1f);
        }
      }
      pFVar11 = param_1->PropertyInfo;
      uVar4 = (pFVar11->Property).TypeIndex;
      if (uVar4 == '\0') {
        local_370.Payload.bIsSet = true;
        local_36a = 0;
        FVar8.Value = *(ushort *)&this->BuiltInComponents->FastPropertyOffset;
        local_370.Payload.TypedValue = (ushort)(pFVar11->Property)._padding_;
        lVar24 = this->_padding_;
        pFVar30 = (FEntityManager *)(lVar24 + 0x28);
        local_378 = &___7__TEntityBuilder_U__TAdd_G_MovieScene_UE___MovieScene_UE__6B_;
        local_370._padding_ = FVar8.Value;
        pTVar19 = &UE::MovieScene::FEntityManager::GetEntityType(pFVar30,FVar5)->Bits;
        local_c4.NumBits = 0;
        local_c4.MaxBits = 0;
        TBitArray<TFixedAllocator<12>_>::Assign<TFixedAllocator<12>_>(&local_c4,pTVar19);
        UE::MovieScene::FTypelessMutation::MutateType
                  (&local_218,(FComponentMask *)&local_8c,(FComponentMask *)&local_c4);
        UE::MovieScene::FComponentMask::Set((FComponentMask *)&local_8c,FVar8);
        local_238.Initializers.AllocatorInstance.SecondaryData =
             (ForElementType<UE::MovieScene::IMutualComponentInitializer_*>)0x0;
        local_238.Initializers.ArrayNum = 0;
        local_238.Initializers.ArrayMax = 2;
        UE::MovieScene::FEntityAllocationWriteContext::FEntityAllocationWriteContext
                  (&local_340,pFVar30);
        UE::MovieScene::FEntityFactories::ComputeMutuallyInclusiveComponents
                  (*(FEntityFactories **)(lVar24 + 0x288),Mandatory,(FComponentMask *)&local_8c,
                   &local_238);
        bVar16 = TBitArray<TFixedAllocator<12>_>::CompareSetBits<TFixedAllocator<12>_>
                           (&local_8c,&local_c4,false);
        if (!bVar16) {
          UE::MovieScene::FEntityManager::ChangeEntityType
                    (pFVar30,FVar5,(FComponentMask *)&local_8c);
        }
        UE::MovieScene::FEntityManager::GetEntity(pFVar30,&local_2c8,FVar5);
        if (local_2c8.Data.Allocation != (FEntityAllocation *)0x0) {
          UE::MovieScene::TAdd<unsigned_short>::Apply
                    (&local_370,local_2c8.Data.Allocation,local_2c8.Data.ComponentOffset);
          local_308.Allocation = local_2c8.Data.Allocation;
          local_308.ComponentStartOffset = local_2c8.Data.ComponentOffset;
          local_308.Num = 1;
          UE::MovieScene::FMutualComponentInitializers::Execute(&local_238,&local_308,&local_340);
        }
        if (local_238.Initializers.AllocatorInstance.SecondaryData !=
            (ForElementType<UE::MovieScene::IMutualComponentInitializer_*>)0x0) {
          FMemory::Free((void *)local_238.Initializers.AllocatorInstance.SecondaryData);
        }
        local_378 = &___7IEntityBuilder_MovieScene_UE__6B_;
      }
      else if (uVar4 == '\x01') {
        local_380.Payload.bIsSet = true;
        local_37a = 0;
        FVar8.Value = *(ushort *)&this->BuiltInComponents->CustomPropertyIndex;
        local_380.Payload.TypedValue.Value = (ushort)(pFVar11->Property)._padding_;
        lVar24 = this->_padding_;
        pFVar30 = (FEntityManager *)(lVar24 + 0x28);
        local_388 = &
                    ___7__TEntityBuilder_U__TAdd_UFCustomPropertyIndex_MovieScene_UE___MovieScene_UE___MovieScene_UE__6B_
        ;
        local_380._padding_ = FVar8.Value;
        pTVar19 = &UE::MovieScene::FEntityManager::GetEntityType(pFVar30,FVar5)->Bits;
        local_134.NumBits = 0;
        local_134.MaxBits = 0;
        TBitArray<TFixedAllocator<12>_>::Assign<TFixedAllocator<12>_>(&local_134,pTVar19);
        UE::MovieScene::FTypelessMutation::MutateType
                  (&local_218,(FComponentMask *)&local_fc,(FComponentMask *)&local_134);
        UE::MovieScene::FComponentMask::Set((FComponentMask *)&local_fc,FVar8);
        local_258.Initializers.AllocatorInstance.SecondaryData =
             (ForElementType<UE::MovieScene::IMutualComponentInitializer_*>)0x0;
        local_258.Initializers.ArrayNum = 0;
        local_258.Initializers.ArrayMax = 2;
        UE::MovieScene::FEntityAllocationWriteContext::FEntityAllocationWriteContext
                  (&local_348,pFVar30);
        UE::MovieScene::FEntityFactories::ComputeMutuallyInclusiveComponents
                  (*(FEntityFactories **)(lVar24 + 0x288),Mandatory,(FComponentMask *)&local_fc,
                   &local_258);
        bVar16 = TBitArray<TFixedAllocator<12>_>::CompareSetBits<TFixedAllocator<12>_>
                           (&local_fc,&local_134,false);
        if (!bVar16) {
          UE::MovieScene::FEntityManager::ChangeEntityType
                    (pFVar30,FVar5,(FComponentMask *)&local_fc);
        }
        UE::MovieScene::FEntityManager::GetEntity(pFVar30,&local_2e0,FVar5);
        if (local_2e0.Data.Allocation != (FEntityAllocation *)0x0) {
          UE::MovieScene::TAdd<UE::MovieScene::FCustomPropertyIndex>::Apply
                    (&local_380,local_2e0.Data.Allocation,local_2e0.Data.ComponentOffset);
          local_318.Allocation = local_2e0.Data.Allocation;
          local_318.ComponentStartOffset = local_2e0.Data.ComponentOffset;
          local_318.Num = 1;
          UE::MovieScene::FMutualComponentInitializers::Execute(&local_258,&local_318,&local_348);
        }
        if (local_258.Initializers.AllocatorInstance.SecondaryData !=
            (ForElementType<UE::MovieScene::IMutualComponentInitializer_*>)0x0) {
          FMemory::Free((void *)local_258.Initializers.AllocatorInstance.SecondaryData);
        }
        local_388 = &___7IEntityBuilder_MovieScene_UE__6B_;
      }
      else if (uVar4 == '\x02') {
        uVar29 = (pFVar11->Property)._padding_;
        uVar27 = (pFVar11->Property)._padding_;
        FVar8.Value = *(ushort *)&this->BuiltInComponents->SlowProperty;
        if ((TReferenceControllerBase<1> *)uVar27 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          ((TReferenceControllerBase<1> *)uVar27)->SharedReferenceCount =
               (atomic<int>)((int)((TReferenceControllerBase<1> *)uVar27)->SharedReferenceCount + 1)
          ;
          UNLOCK();
        }
        if (((FTrackInstancePropertyBindings *)uVar29 ==
             (FTrackInstancePropertyBindings *)0xffffffffffffffff) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsSet()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                ,0xbd,
                                L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                               ), bVar16)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        local_3a8.Payload.field0_0x0.TypedValue.Object = pFVar13;
        local_3a8.Payload.field0_0x0.TypedValue.SharedReferenceCount.ReferenceController =
             (FSharedReferencer<1>)(FSharedReferencer<1>)FVar14.ReferenceController;
        local_3a8._padding_._0_2_ = FVar8.Value;
        if ((FTrackInstancePropertyBindings *)uVar29 ==
            (FTrackInstancePropertyBindings *)0xffffffffffffffff) {
          local_390 = 0;
          local_3b0 = &
                      ___7__TEntityBuilder_U__TAdd_V__TSharedPtr_VFTrackInstancePropertyBindings___00___MovieScene_UE___MovieScene_UE__6B_
          ;
          uVar27 = FVar14;
          uVar29 = pFVar13;
        }
        else {
          local_390 = 0;
          FVar21.ReferenceController = (TReferenceControllerBase<1> *)0x0;
          if ((FTrackInstancePropertyBindings *)uVar29 ==
              (FTrackInstancePropertyBindings *)0xffffffffffffffff) {
            FVar21.ReferenceController = (TReferenceControllerBase<1> *)uVar27;
          }
          local_3b0 = &
                      ___7__TEntityBuilder_U__TAdd_V__TSharedPtr_VFTrackInstancePropertyBindings___00___MovieScene_UE___MovieScene_UE__6B_
          ;
          local_3a8.Payload.field0_0x0.TypedValue.Object = (FTrackInstancePropertyBindings *)uVar29;
          local_3a8.Payload.field0_0x0.TypedValue.SharedReferenceCount.ReferenceController =
               (FSharedReferencer<1>)uVar27;
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (FVar21.ReferenceController);
        }
        lVar24 = this->_padding_;
        pFVar30 = (FEntityManager *)(lVar24 + 0x28);
        pTVar19 = &UE::MovieScene::FEntityManager::GetEntityType(pFVar30,FVar5)->Bits;
        local_1a4.NumBits = 0;
        local_1a4.MaxBits = 0;
        TBitArray<TFixedAllocator<12>_>::Assign<TFixedAllocator<12>_>(&local_1a4,pTVar19);
        UE::MovieScene::FTypelessMutation::MutateType
                  (&local_218,(FComponentMask *)&local_16c,(FComponentMask *)&local_1a4);
        UE::MovieScene::FComponentMask::Set((FComponentMask *)&local_16c,FVar8);
        local_278.Initializers.ArrayMax = 2;
        local_278.Initializers.AllocatorInstance.SecondaryData =
             (ForElementType<UE::MovieScene::IMutualComponentInitializer_*>)0x0;
        local_278.Initializers.ArrayNum = 0;
        UE::MovieScene::FEntityAllocationWriteContext::FEntityAllocationWriteContext
                  (&local_350,pFVar30);
        UE::MovieScene::FEntityFactories::ComputeMutuallyInclusiveComponents
                  (*(FEntityFactories **)(lVar24 + 0x288),Mandatory,(FComponentMask *)&local_16c,
                   &local_278);
        bVar16 = TBitArray<TFixedAllocator<12>_>::CompareSetBits<TFixedAllocator<12>_>
                           (&local_16c,&local_1a4,false);
        if (!bVar16) {
          UE::MovieScene::FEntityManager::ChangeEntityType
                    (pFVar30,FVar5,(FComponentMask *)&local_16c);
        }
        UE::MovieScene::FEntityManager::GetEntity(pFVar30,&local_2f8,FVar5);
        if (local_2f8.Data.Allocation != (FEntityAllocation *)0x0) {
          UE::MovieScene::TAdd<TSharedPtr<FTrackInstancePropertyBindings,1>_>::Apply
                    (&local_3a8,local_2f8.Data.Allocation,local_2f8.Data.ComponentOffset);
          local_328.Allocation = local_2f8.Data.Allocation;
          local_328.ComponentStartOffset = local_2f8.Data.ComponentOffset;
          local_328.Num = 1;
          UE::MovieScene::FMutualComponentInitializers::Execute(&local_278,&local_328,&local_350);
          uVar27 = local_3a8.Payload.field0_0x0.TypedValue.SharedReferenceCount.ReferenceController;
          uVar29 = local_3a8.Payload.field0_0x0.TypedValue.Object;
        }
        if (local_278.Initializers.AllocatorInstance.SecondaryData !=
            (ForElementType<UE::MovieScene::IMutualComponentInitializer_*>)0x0) {
          FMemory::Free((void *)local_278.Initializers.AllocatorInstance.SecondaryData);
        }
        if ((FTrackInstancePropertyBindings *)uVar29 !=
            (FTrackInstancePropertyBindings *)0xffffffffffffffff) {
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((TReferenceControllerBase<1> *)uVar27);
        }
        local_3b0 = &___7IEntityBuilder_MovieScene_UE__6B_;
        ppFVar31 = local_3e0;
      }
      lVar24 = 0x48;
      if ((param_1->PropertyInfo->PreviousFastPathID).Value != 0xffff) {
        lVar24 = 0x4a;
      }
      FVar9.Value = *(ushort *)
                     ((longlong)
                      &(((FObjectPropertyInfo *)(&param_1->PropertyInfo->EmptyChannels + -5))->
                       Property)._padding_ + lVar24);
      if (FVar9.Value != 0xffff) {
        local_2b0.NumBits = 0;
        local_2b0.MaxBits = 0x180;
        uVar7 = ((*ppFVar31)->InitialValueType).Value;
        TBitArray<TFixedAllocator<12>_>::Add(&local_2b0,false,uVar7 + 1);
        if ((local_2b0.NumBits <= (int)(uint)uVar7) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("Index>=0 && Index<NumBits",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                ,0x5be,L""), bVar16)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        pTVar3 = local_2b0.AllocatorInstance.InlineData + (uVar7 >> 5);
        *(uint *)pTVar3->Pad = *(uint *)pTVar3->Pad | 1 << ((byte)uVar7 & 0x1f);
        uVar7 = (this->BuiltInComponents->Tags).HasAssignedInitialValue.Value;
        iVar28 = ((uint)uVar7 - local_2b0.NumBits) + 1;
        if (0 < iVar28) {
          TBitArray<TFixedAllocator<12>_>::Add(&local_2b0,false,iVar28);
        }
        if ((local_2b0.NumBits <= (int)(uint)uVar7) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("Index>=0 && Index<NumBits",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                ,0x5be,L""), bVar16)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        pTVar3 = local_2b0.AllocatorInstance.InlineData + (uVar7 >> 5);
        *(uint *)pTVar3->Pad = *(uint *)pTVar3->Pad | 1 << ((byte)uVar7 & 0x1f);
        pFVar26 = ((*ppFVar31)->MetaDataTypes).DataPtr;
        pFVar2 = pFVar26 + ((*ppFVar31)->MetaDataTypes).ArrayNum;
        for (; pFVar26 != pFVar2; pFVar26 = pFVar26 + 1) {
          uVar7 = pFVar26->Value;
          iVar28 = ((uint)uVar7 - local_2b0.NumBits) + 1;
          if (0 < iVar28) {
            TBitArray<TFixedAllocator<12>_>::Add(&local_2b0,false,iVar28);
          }
          if ((local_2b0.NumBits <= (int)(uint)uVar7) &&
             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Index>=0 && Index<NumBits",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                  ,0x5be,L""), bVar16)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          pTVar3 = local_2b0.AllocatorInstance.InlineData + (uVar7 >> 5);
          *(uint *)pTVar3->Pad = *(uint *)pTVar3->Pad | 1 << ((byte)uVar7 & 0x1f);
        }
        UE::MovieScene::FEntityManager::CopyComponents
                  ((FEntityManager *)(this->_padding_ + 0x28),FVar9,FVar5,
                   (FComponentMask *)&local_2b0);
      }
      local_358 = CONCAT44(local_358._4_4_,local_358._4_4_);
      (param_1->PropertyInfo->PreviousFastPathID).Value = FVar5.Value;
      if (local_358._4_4_ == -1) break;
      do {
        iVar20 = local_358._4_4_;
        iVar18 = *(int *)(*(longlong *)local_368 + (longlong)iVar20 * 0x10);
        local_358._4_4_ = *(int *)(*(longlong *)local_368 + 8 + (longlong)iVar20 * 0x10);
        iVar28 = iVar20;
        if (iVar18 == *piStack_360) break;
        iVar28 = local_358._4_4_;
      } while (local_358._4_4_ != -1);
      iVar22 = local_358._4_4_;
      if (iVar18 == *piStack_360) {
        iVar22 = iVar20;
      }
      local_358 = CONCAT44(local_358._4_4_,iVar28);
    } while (iVar22 != -1);
  }
  FVar5.Value = (param_1->PropertyInfo->FinalBlendOutputID).Value;
  if (FVar5.Value != 0xffff) {
    bVar16 = UE::MovieScene::FEntityManager::HasComponent
                       ((FEntityManager *)(this->_padding_ + 0x28),FVar5,
                        (FComponentTypeID)*(ushort *)&this->BuiltInComponents->BlendChannelInput);
    if ((bVar16) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("!Linker->EntityManager.HasComponent(Params.PropertyInfo->FinalBlendOutputID, BuiltInComponents->BlendChannelInput)"
                            ,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieSceneTracks\\Private\\Systems\\MovieScenePropertyInstantiator.cpp"
                            ,799,L""), bVar16)) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
    this_00 = (UMovieSceneBlenderSystem *)
              FWeakObjectPtr::Get(&(param_1->PropertyInfo->Blender).WeakPtr);
    if ((this_00 != (UMovieSceneBlenderSystem *)0x0) &&
       (uVar7 = param_1->PropertyInfo->BlendChannel, uVar7 != 0xffff)) {
      FVar17 = UMovieSceneBlenderSystem::GetBlenderSystemID(this_00);
      local_3e0._0_4_ = (FMovieSceneBlendChannelID)CONCAT22(uVar7,local_3e0._0_2_);
      local_3e0 = (FPropertyDefinition **)
                  CONCAT71(local_3e0._1_7_,*(undefined1 *)CONCAT71(extraout_var,FVar17.Value));
      UMovieSceneBlenderSystem::ReleaseBlendChannel(this_00,local_3e0._0_4_);
      local_3d4.ObjectIndex = 0;
      local_3d4.ObjectSerialNumber = 0;
      local_330 = 0;
      param_1->PropertyInfo->BlendChannel = 0xffff;
      FWeakObjectPtr::operator=(&local_3d4,(FObjectPtr)&local_330);
      (param_1->PropertyInfo->Blender).WeakPtr = local_3d4;
    }
    UE::MovieScene::FEntityManager::AddComponent
              ((FEntityManager *)(this->_padding_ + 0x28),
               (FMovieSceneEntityID)(param_1->PropertyInfo->FinalBlendOutputID).Value,
               (FComponentTypeID)(this->BuiltInComponents->Tags).NeedsUnlink.Value);
    (param_1->PropertyInfo->FinalBlendOutputID).Value = 0xffff;
  }
  return;
}

// InitializePropertyMetaData @ 14683e150

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMovieScenePropertyInstantiatorSystem::InitializePropertyMetaData
          (UMovieScenePropertyInstantiatorSystem *this,FSystemTaskPrerequisites *param_1,
          FSystemSubsequentTasks *param_2)

{
  TBitArray<FDefaultBitArrayAllocator> *this_00;
  ulonglong uVar1;
  int iVar2;
  FBuiltInComponentTypes *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  int iVar9;
  uint uVar10;
  FScriptContainerElement *pFVar11;
  int iVar12;
  ForElementType<unsigned_int> FVar13;
  ForElementType<unsigned_int> FVar14;
  FScriptContainerElement *pFVar15;
  uint uVar16;
  
  this_00 = &this->InitializePropertyMetaDataTasks;
  iVar2 = (this->InitializePropertyMetaDataTasks).NumBits;
  iVar9 = 0;
  iVar12 = 0;
  if (iVar2 != 0) {
    FVar13 = (this->InitializePropertyMetaDataTasks).AllocatorInstance.SecondaryData;
    if (FVar13 == (ForElementType<unsigned_int>)0x0) {
      FVar13 = (ForElementType<unsigned_int>)this_00;
    }
    uVar6 = *(uint *)FVar13;
    while (uVar6 == 0) {
      lVar8 = (longlong)iVar9;
      iVar12 = iVar12 + 0x20;
      iVar9 = iVar9 + 1;
      if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar9) goto LAB_14683e36c;
      uVar6 = *(uint *)((uchar *)((longlong)FVar13 + 4) + lVar8 * 4);
    }
    uVar6 = -uVar6 & uVar6;
    uVar1 = (ulonglong)uVar6 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar10 = (int)lVar8 + -1 + iVar12;
    if ((int)uVar10 < iVar2) {
      uVar16 = 0xffffffff;
      do {
        pFVar3 = this->BuiltInComponents;
        uVar7 = 0;
        if ((int)uVar10 < (pFVar3->PropertyRegistry).Properties.ArrayNum) {
          uVar7 = ~uVar10 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar15 = (pFVar3->PropertyRegistry).Properties.AllocatorInstance.Data +
                  (longlong)(int)uVar10 * 0x70;
        pFVar11 = pFVar15 + 0x48;
        if ((((byte)pFVar15[0x68] & 1) == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("bIsValid",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                               ,0x97,
                               L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                              ), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if (((byte)pFVar15[0x68] & 2) == 0) {
          pFVar11 = *(FScriptContainerElement **)pFVar11;
        }
        (**(code **)(*(longlong *)pFVar11 + 0x30))(pFVar11,pFVar15,param_1,param_2,this->_padding_);
        FVar13 = (this->InitializePropertyMetaDataTasks).AllocatorInstance.SecondaryData;
        iVar2 = (this->InitializePropertyMetaDataTasks).NumBits;
        uVar16 = ~uVar6 & uVar16;
        FVar14 = (ForElementType<unsigned_int>)this_00;
        if (FVar13 != (ForElementType<unsigned_int>)0x0) {
          FVar14 = FVar13;
        }
        uVar6 = uVar16 & *(uint *)((longlong)FVar14 + (longlong)iVar9 * 4);
        while (uVar6 == 0) {
          lVar8 = (longlong)iVar9;
          iVar12 = iVar12 + 0x20;
          iVar9 = iVar9 + 1;
          if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar9) goto LAB_14683e36c;
          uVar16 = 0xffffffff;
          uVar6 = *(uint *)((uchar *)((longlong)FVar14 + 4) + lVar8 * 4);
        }
        uVar6 = -uVar6 & uVar6;
        uVar1 = (ulonglong)uVar6 * 2 + 1;
        lVar8 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar8 == 0; lVar8 = lVar8 + -1) {
          }
        }
        uVar10 = (int)lVar8 + -1 + iVar12;
      } while (((int)uVar10 <= iVar2) && ((int)uVar10 < iVar2));
    }
  }
LAB_14683e36c:
  iVar2 = (this->InitializePropertyMetaDataTasks).MaxBits;
  (this->InitializePropertyMetaDataTasks).NumBits = 0;
  if ((-1 < iVar2) && (iVar2 < 0x81)) {
    return;
  }
  (this->InitializePropertyMetaDataTasks).MaxBits = 0x80;
  TBitArray<FDefaultBitArrayAllocator>::Realloc(this_00,0);
  return;
}

// OnCleanTaggedGarbage @ 146841c90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMovieScenePropertyInstantiatorSystem::OnCleanTaggedGarbage
          (UMovieScenePropertyInstantiatorSystem *this)

{
  TMultiMap<UMovieScenePropertyInstantiatorSystem::FContributorKey,UE::MovieScene::FMovieSceneEntityID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UMovieScenePropertyInstantiatorSystem::FContributorKey,UE::MovieScene::FMovieSceneEntityID,1>_>
  *pTVar1;
  TTypeCompatibleBytes<unsigned_int> *pTVar2;
  ushort *puVar3;
  uint *puVar4;
  FMovieSceneEntityID FVar5;
  ushort uVar6;
  undefined1 *puVar7;
  ForElementType<unsigned_int> FVar8;
  code *pcVar9;
  FScriptContainerElement *pFVar10;
  bool bVar11;
  uint uVar12;
  undefined1 *puVar13;
  ForElementType<unsigned_int> FVar14;
  uint uVar15;
  ushort *puVar16;
  longlong lVar17;
  int iVar18;
  int iVar19;
  longlong lVar20;
  uint uVar21;
  undefined1 auStack_128 [32];
  longlong local_108;
  longlong local_100;
  char local_f8;
  undefined1 local_f7 [7];
  longlong local_f0;
  uint local_e8;
  uint local_e4;
  int local_e0;
  TMultiMap<UMovieScenePropertyInstantiatorSystem::FContributorKey,UE::MovieScene::FMovieSceneEntityID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UMovieScenePropertyInstantiatorSystem::FContributorKey,UE::MovieScene::FMovieSceneEntityID,1>_>
  *local_d8;
  uint *puStack_d0;
  int local_c8;
  int iStack_c4;
  TMultiMap<UMovieScenePropertyInstantiatorSystem::FContributorKey,UE::MovieScene::FMovieSceneEntityID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UMovieScenePropertyInstantiatorSystem::FContributorKey,UE::MovieScene::FMovieSceneEntityID,1>_>
  *local_c0;
  uint *puStack_b8;
  int local_b0;
  int iStack_ac;
  TMultiMap<UMovieScenePropertyInstantiatorSystem::FContributorKey,UE::MovieScene::FMovieSceneEntityID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UMovieScenePropertyInstantiatorSystem::FContributorKey,UE::MovieScene::FMovieSceneEntityID,1>_>
  *local_a8;
  uint *puStack_a0;
  int local_98;
  int iStack_94;
  FScriptContainerElement *local_90;
  TMultiMap<UMovieScenePropertyInstantiatorSystem::FContributorKey,UE::MovieScene::FMovieSceneEntityID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UMovieScenePropertyInstantiatorSystem::FContributorKey,UE::MovieScene::FMovieSceneEntityID,1>_>
  *local_88;
  uint *puStack_80;
  undefined8 local_78;
  TBitArray<TFixedAllocator<12>_> local_70;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_128;
  DiscoverExpiredProperties(this,&this->PendingInvalidatedProperties);
  local_90 = (this->BuiltInComponents->PropertyRegistry).Properties.AllocatorInstance.Data;
  local_e0 = (this->BuiltInComponents->PropertyRegistry).Properties.ArrayNum;
  if ((local_e0 < 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L""), bVar11)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  uVar21 = 0;
  local_f8 = '\0';
  if (*(int *)&(this->ResolvedProperties).field_0x8 < 1) {
    return;
  }
  local_e4 = 1;
  local_f0 = 0;
LAB_146841d50:
  uVar15 = local_e4;
  if ((((int)uVar21 < 0) || (*(int *)&(this->ResolvedProperties).field_0x28 <= (int)uVar21)) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("Index>=0 && Index<NumBits",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x5c6,L""), bVar11)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  puVar7 = *(undefined1 **)&(this->ResolvedProperties).field_0x20;
  puVar13 = &(this->ResolvedProperties).field_0x10;
  if (puVar7 != (undefined1 *)0x0) {
    puVar13 = puVar7;
  }
  uVar12 = uVar21;
  if ((int)uVar21 < 0) {
    uVar12 = uVar21 + 0x1f;
  }
  if ((*(uint *)(puVar13 + (longlong)((int)uVar12 >> 5) * 4) & uVar15) != 0) {
    lVar20 = *(longlong *)&this->ResolvedProperties + local_f0;
    local_e8 = uVar21;
    if ((*(ushort *)(lVar20 + 0x4a) != 0xffff) &&
       (bVar11 = UE::MovieScene::FEntityManager::HasComponent
                           ((FEntityManager *)(this->_padding_ + 0x28),
                            (FMovieSceneEntityID)*(ushort *)(lVar20 + 0x4a),
                            (FComponentTypeID)(this->BuiltInComponents->Tags).NeedsUnlink.Value),
       bVar11)) {
      pTVar1 = &this->Contributors;
      iVar18 = *(int *)&(this->Contributors).field_0x48;
      puStack_d0 = &local_e8;
      local_c8 = -1;
      if (iVar18 == 0) {
        iStack_c4 = -1;
      }
      else {
        puVar7 = *(undefined1 **)&(this->Contributors).field_0x40;
        puVar13 = &(this->Contributors).field_0x38;
        if (puVar7 != (undefined1 *)0x0) {
          puVar13 = puVar7;
        }
        iStack_c4 = *(int *)(puVar13 + ((longlong)iVar18 - 1U & (longlong)(int)local_e8) * 4);
        local_c8 = iStack_c4;
        if (iStack_c4 != -1) {
          do {
            iStack_c4 = *(int *)(*(longlong *)pTVar1 + 8 + (longlong)local_c8 * 0x10);
            if (*(uint *)(*(longlong *)pTVar1 + (longlong)local_c8 * 0x10) == local_e8) break;
            local_c8 = iStack_c4;
          } while (iStack_c4 != -1);
        }
      }
      local_78 = CONCAT44(iStack_c4,local_c8);
      local_d8 = pTVar1;
      local_88 = pTVar1;
      puStack_80 = puStack_d0;
      if (local_c8 != -1) {
        lVar17 = *(longlong *)pTVar1;
        iVar18 = iStack_c4;
        iVar19 = local_c8;
        do {
          UE::MovieScene::FEntityManager::AddComponent
                    ((FEntityManager *)(this->_padding_ + 0x28),
                     (FMovieSceneEntityID)*(ushort *)(lVar17 + 4 + (longlong)iVar19 * 0x10),
                     (FComponentTypeID)(this->BuiltInComponents->Tags).NeedsLink.Value);
          lVar17 = *(longlong *)pTVar1;
          FVar5.Value = *(ushort *)(lVar17 + 4 + (longlong)iVar19 * 0x10);
          do {
            iVar19 = iVar18;
            iVar18 = iVar19;
            if (iVar19 == -1) break;
            iVar18 = *(int *)(lVar17 + 8 + (longlong)iVar19 * 0x10);
          } while (*(uint *)(lVar17 + (longlong)iVar19 * 0x10) != local_e8);
          local_78 = CONCAT44(local_78._4_4_,iVar19);
        } while (iVar19 != -1);
        uVar15 = local_e4;
        if (FVar5.Value != 0xffff) {
          uVar15 = *(uint *)(lVar20 + 0x50);
          lVar17 = (longlong)(int)uVar15;
          uVar12 = 0;
          if ((int)uVar15 < local_e0) {
            uVar12 = ~uVar15 >> 0x1f;
          }
          if ((uVar12 == 0) &&
             (local_108 = lVar17, local_100 = (longlong)local_e0,
             bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld"),
             bVar11)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          pFVar10 = local_90;
          local_70.NumBits = 0;
          local_70.MaxBits = 0x180;
          uVar6 = *(ushort *)(local_90 + lVar17 * 0x70 + 0x2a);
          TBitArray<TFixedAllocator<12>_>::Add(&local_70,false,uVar6 + 1);
          if ((local_70.NumBits <= (int)(uint)uVar6) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Index>=0 && Index<NumBits",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                  ,0x5be,L""), bVar11)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          pTVar2 = local_70.AllocatorInstance.InlineData + (uVar6 >> 5);
          *(uint *)pTVar2->Pad = *(uint *)pTVar2->Pad | 1 << ((byte)uVar6 & 0x1f);
          uVar6 = (this->BuiltInComponents->Tags).HasAssignedInitialValue.Value;
          iVar18 = ((uint)uVar6 - local_70.NumBits) + 1;
          if (0 < iVar18) {
            TBitArray<TFixedAllocator<12>_>::Add(&local_70,false,iVar18);
          }
          if ((local_70.NumBits <= (int)(uint)uVar6) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Index>=0 && Index<NumBits",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                  ,0x5be,L""), bVar11)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          pTVar2 = local_70.AllocatorInstance.InlineData + (uVar6 >> 5);
          *(uint *)pTVar2->Pad = *(uint *)pTVar2->Pad | 1 << ((byte)uVar6 & 0x1f);
          puVar16 = *(ushort **)(pFVar10 + lVar17 * 0x70 + 0x30);
          puVar3 = puVar16 + *(int *)(pFVar10 + lVar17 * 0x70 + 0x38);
          for (; puVar16 != puVar3; puVar16 = puVar16 + 1) {
            uVar6 = *puVar16;
            iVar18 = ((uint)uVar6 - local_70.NumBits) + 1;
            if (0 < iVar18) {
              TBitArray<TFixedAllocator<12>_>::Add(&local_70,false,iVar18);
            }
            if ((local_70.NumBits <= (int)(uint)uVar6) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Index>=0 && Index<NumBits",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                    ,0x5be,L""), bVar11)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            pTVar2 = local_70.AllocatorInstance.InlineData + (uVar6 >> 5);
            *(uint *)pTVar2->Pad = *(uint *)pTVar2->Pad | 1 << ((byte)uVar6 & 0x1f);
          }
          UE::MovieScene::FEntityManager::CopyComponents
                    ((FEntityManager *)(this->_padding_ + 0x28),
                     (FMovieSceneEntityID)*(ushort *)(lVar20 + 0x4a),FVar5,
                     (FComponentMask *)&local_70);
          *(ushort *)(lVar20 + 0x4a) = FVar5.Value;
          uVar15 = local_e4;
          goto LAB_146842117;
        }
      }
      DestroyStaleProperty(this,uVar21);
      local_f8 = '\x01';
      if ((-1 < (int)uVar21) && ((int)uVar21 < (this->PendingInvalidatedProperties).NumBits)) {
        if (((this->PendingInvalidatedProperties).NumBits <= (int)uVar21) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("Index>=0 && Index<NumBits",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                ,0x5be,L""), bVar11)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        FVar8 = (this->PendingInvalidatedProperties).AllocatorInstance.SecondaryData;
        FVar14 = (ForElementType<unsigned_int>)&this->PendingInvalidatedProperties;
        if (FVar8 != (ForElementType<unsigned_int>)0x0) {
          FVar14 = FVar8;
        }
        if ((*(uint *)((longlong)FVar14 + (longlong)((int)uVar12 >> 5) * 4) & uVar15) != 0) {
          if (((this->PendingInvalidatedProperties).NumBits <= (int)uVar21) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Index>=0 && Index<NumBits",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                  ,0x5be,L""), bVar11)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          FVar8 = (this->PendingInvalidatedProperties).AllocatorInstance.SecondaryData;
          FVar14 = (ForElementType<unsigned_int>)&this->PendingInvalidatedProperties;
          if (FVar8 != (ForElementType<unsigned_int>)0x0) {
            FVar14 = FVar8;
          }
          uVar12 = uVar21;
          if ((int)uVar21 < 0) {
            uVar12 = uVar21 + 0x1f;
          }
          puVar4 = (uint *)((longlong)FVar14 + (longlong)((int)uVar12 >> 5) * 4);
          *puVar4 = *puVar4 & ~uVar15;
        }
      }
      goto LAB_146842117;
    }
    if ((*(ushort *)(lVar20 + 0x48) == 0xffff) ||
       (bVar11 = UE::MovieScene::FEntityManager::HasComponent
                           ((FEntityManager *)(this->_padding_ + 0x28),
                            (FMovieSceneEntityID)*(ushort *)(lVar20 + 0x48),
                            (FComponentTypeID)(this->BuiltInComponents->Tags).NeedsUnlink.Value),
       !bVar11)) goto LAB_146842117;
    if (*(int *)&(this->Contributors).field_0x8 != *(int *)&(this->Contributors).field_0x34) {
      puVar7 = *(undefined1 **)&(this->Contributors).field_0x40;
      puVar13 = &(this->Contributors).field_0x38;
      if (puVar7 != (undefined1 *)0x0) {
        puVar13 = puVar7;
      }
      iVar18 = *(int *)(puVar13 +
                       (ulonglong)(*(int *)&(this->Contributors).field_0x48 - 1U & local_e8) * 4);
      if (iVar18 != -1) {
        do {
          if (*(uint *)(*(longlong *)&this->Contributors + (longlong)iVar18 * 0x10) == local_e8) {
            local_f7[0] = 0;
            bVar11 = `UMovieScenePropertyInstantiatorSystem::OnCleanTaggedGarbage'::__l29::
                     <lambda_1>::operator()(local_f7);
            if (!bVar11) {
              local_c0 = &this->Contributors;
              iVar18 = *(int *)&(this->Contributors).field_0x48;
              puStack_b8 = &local_e8;
              local_b0 = -1;
              if (iVar18 == 0) {
                iStack_ac = -1;
                goto LAB_146842399;
              }
              puVar7 = *(undefined1 **)&(this->Contributors).field_0x40;
              puVar13 = &(this->Contributors).field_0x38;
              if (puVar7 != (undefined1 *)0x0) {
                puVar13 = puVar7;
              }
              iStack_ac = *(int *)(puVar13 + ((longlong)iVar18 - 1U & (longlong)(int)local_e8) * 4);
              local_b0 = iStack_ac;
              if (iStack_ac == -1) goto LAB_146842399;
              goto LAB_146842370;
            }
            break;
          }
          iVar18 = *(int *)(*(longlong *)&this->Contributors + 8 + (longlong)iVar18 * 0x10);
        } while (iVar18 != -1);
      }
    }
    goto LAB_146842433;
  }
  goto LAB_146842117;
  while (local_b0 = iStack_ac, iStack_ac != -1) {
LAB_146842370:
    iStack_ac = *(int *)(*(longlong *)local_c0 + 8 + (longlong)local_b0 * 0x10);
    if (*(uint *)(*(longlong *)local_c0 + (longlong)local_b0 * 0x10) == local_e8) break;
  }
LAB_146842399:
  iStack_94 = iStack_ac;
  local_98 = local_b0;
  local_a8 = local_c0;
  puStack_a0 = puStack_b8;
  iVar18 = local_b0;
  while (iVar18 != -1) {
    UE::MovieScene::FEntityManager::AddComponent
              ((FEntityManager *)(this->_padding_ + 0x28),
               (FMovieSceneEntityID)*(ushort *)(*(longlong *)local_a8 + 4 + (longlong)iVar18 * 0x10)
               ,(FComponentTypeID)(this->BuiltInComponents->Tags).NeedsLink.Value);
    TSet<TTuple<UMovieScenePropertyInstantiatorSystem::FContributorKey,UE::MovieScene::FMovieSceneEntityID>,TDefaultMapHashableKeyFuncs<UMovieScenePropertyInstantiatorSystem::FContributorKey,UE::MovieScene::FMovieSceneEntityID,1>,FDefaultSetAllocator>
    ::TKeyIterator::RemoveCurrent((TKeyIterator *)&local_a8);
    local_98 = iStack_94;
    if (iStack_94 == -1) break;
    do {
      iVar19 = *(int *)(*(longlong *)local_a8 + 8 + (longlong)iStack_94 * 0x10);
      iVar18 = iStack_94;
      if (*(uint *)(*(longlong *)local_a8 + (longlong)iStack_94 * 0x10) == *puStack_a0) break;
      iVar18 = iVar19;
      iStack_94 = iVar19;
    } while (iVar19 != -1);
    iStack_94 = iVar19;
    local_98 = iVar18;
  }
LAB_146842433:
  DestroyStaleProperty(this,uVar21);
  local_f8 = '\x01';
  if ((-1 < (int)uVar21) && ((int)uVar21 < (this->PendingInvalidatedProperties).NumBits)) {
    if (((this->PendingInvalidatedProperties).NumBits <= (int)uVar21) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("Index>=0 && Index<NumBits",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x5be,L""), bVar11)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    FVar8 = (this->PendingInvalidatedProperties).AllocatorInstance.SecondaryData;
    FVar14 = (ForElementType<unsigned_int>)&this->PendingInvalidatedProperties;
    if (FVar8 != (ForElementType<unsigned_int>)0x0) {
      FVar14 = FVar8;
    }
    uVar12 = uVar21;
    if ((int)uVar21 < 0) {
      uVar12 = uVar21 + 0x1f;
    }
    if ((*(uint *)((longlong)FVar14 + (longlong)((int)uVar12 >> 5) * 4) & uVar15) != 0) {
      if (((this->PendingInvalidatedProperties).NumBits <= (int)uVar21) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("Index>=0 && Index<NumBits",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x5be,L""), bVar11)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      FVar8 = (this->PendingInvalidatedProperties).AllocatorInstance.SecondaryData;
      FVar14 = (ForElementType<unsigned_int>)&this->PendingInvalidatedProperties;
      if (FVar8 != (ForElementType<unsigned_int>)0x0) {
        FVar14 = FVar8;
      }
      uVar12 = uVar21;
      if ((int)uVar21 < 0) {
        uVar12 = uVar21 + 0x1f;
      }
      puVar4 = (uint *)((longlong)FVar14 + (longlong)((int)uVar12 >> 5) * 4);
      *puVar4 = *puVar4 & ~uVar15;
    }
  }
LAB_146842117:
  local_e4 = uVar15 << 1 | (uint)((int)uVar15 < 0);
  local_f0 = local_f0 + 0x60;
  uVar21 = uVar21 + 1;
  if (*(int *)&(this->ResolvedProperties).field_0x8 <= (int)uVar21) {
    if (local_f8 == '\0') {
      return;
    }
    TSparseArrayBase<96,8,FDefaultSparseArrayAllocator>::Shrink
              ((TSparseArrayBase<96,8,FDefaultSparseArrayAllocator> *)&this->ResolvedProperties);
    return;
  }
  goto LAB_146841d50;
}

// OnLink @ 146842f00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMovieScenePropertyInstantiatorSystem::OnLink(UMovieScenePropertyInstantiatorSystem *this)

{
  TComponentTypeID<FMovieScenePropertyBinding> TVar1;
  TComponentTypeID<UObject_*> TVar2;
  FBuiltInComponentTypes *pFVar3;
  int iVar4;
  UMovieSceneEntityGroupingSystem *pUVar5;
  TInlineValue<UE::MovieScene::IEntityGroupingHandler,256,8> *this_00;
  undefined1 auStack_f8 [32];
  <lambda_1> local_d8 [8];
  TComponentTypeID<FMovieScenePropertyBinding> local_d0 [4];
  initializer_list<UE::MovieScene::FComponentTypeID> local_c8;
  FComponentTypeID local_b8;
  TComponentTypeID<TSharedPtr<FTrackInstancePropertyBindings,1>_> local_b6;
  FComponentTypeID local_b4;
  FComponentTypeID local_b2 [5];
  FEntityComponentFilter local_a8;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_f8;
  pFVar3 = this->BuiltInComponents;
  (this->CleanFastPathMask).Bits.NumBits = 0;
  local_b8.Value = *(ushort *)&pFVar3->FastPropertyOffset;
  local_b6 = pFVar3->SlowProperty;
  local_b4.Value = *(ushort *)&pFVar3->CustomPropertyIndex;
  local_c8._First = &local_b8;
  local_c8._Last = local_b2;
  UE::MovieScene::FComponentMask::SetAll(&this->CleanFastPathMask,&local_c8);
  UE::Core::Private::
  BitwiseOperatorImpl<TFixedAllocator<12>,TFixedAllocator<12>,_TBitArray<TFixedAllocator<12>_>::CombineWithBitwiseOR<TFixedAllocator<12>_>_::__l2::<lambda_1>_>
            ((TBitArray<TFixedAllocator<12>_> *)(*(longlong *)(this->_padding_ + 0x288) + 0x1f8),
             &(this->CleanFastPathMask).Bits,MaxSize,local_d8);
  pUVar5 = UMovieSceneEntitySystemLinker::LinkSystem<UMovieSceneEntityGroupingSystem>
                     ((UMovieSceneEntitySystemLinker *)this->_padding_);
  local_a8.NoneMask.Bits.AllocatorInstance.InlineData[10].Pad[0] = '\0';
  local_a8.NoneMask.Bits.AllocatorInstance.InlineData[10].Pad[1] = '\0';
  local_a8.NoneMask.Bits.AllocatorInstance.InlineData[10].Pad[2] = '\0';
  local_a8.NoneMask.Bits.AllocatorInstance.InlineData[10].Pad[3] = '\0';
  local_a8.NoneMask.Bits.AllocatorInstance.InlineData[0xb].Pad[0] = '\0';
  local_a8.NoneMask.Bits.AllocatorInstance.InlineData[0xb].Pad[1] = '\0';
  local_a8.NoneMask.Bits.AllocatorInstance.InlineData[0xb].Pad[2] = '\0';
  local_a8.NoneMask.Bits.AllocatorInstance.InlineData[0xb].Pad[3] = '\0';
  local_a8.ComplexMasks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.NoneMask.Bits.AllocatorInstance.InlineData[0].Pad[0] = '\0';
  local_a8.NoneMask.Bits.AllocatorInstance.InlineData[0].Pad[1] = '\0';
  local_a8.NoneMask.Bits.AllocatorInstance.InlineData[0].Pad[2] = '\0';
  local_a8.NoneMask.Bits.AllocatorInstance.InlineData[0].Pad[3] = '\0';
  local_a8.NoneMask.Bits.AllocatorInstance.InlineData[1].Pad[0] = '\0';
  local_a8.NoneMask.Bits.AllocatorInstance.InlineData[1].Pad[1] = '\0';
  local_a8.NoneMask.Bits.AllocatorInstance.InlineData[1].Pad[2] = '\0';
  local_a8.NoneMask.Bits.AllocatorInstance.InlineData[1].Pad[3] = '\0';
  local_a8.ComplexMasks.ArrayNum = 0;
  local_a8.ComplexMasks.ArrayMax = 0;
  TVar1 = this->BuiltInComponents->PropertyBinding;
  TVar2 = this->BuiltInComponents->BoundObject;
  local_a8.AllMask.Bits.AllocatorInstance.InlineData[0].Pad[0] = '\0';
  local_a8.AllMask.Bits.AllocatorInstance.InlineData[0].Pad[1] = '\0';
  local_a8.AllMask.Bits.AllocatorInstance.InlineData[0].Pad[2] = '\0';
  local_a8.AllMask.Bits.AllocatorInstance.InlineData[0].Pad[3] = '\0';
  local_a8.AllMask.Bits.AllocatorInstance.InlineData[1].Pad[0] = '\0';
  local_a8.AllMask.Bits.AllocatorInstance.InlineData[1].Pad[1] = '\0';
  local_a8.AllMask.Bits.AllocatorInstance.InlineData[1].Pad[2] = '\0';
  local_a8.AllMask.Bits.AllocatorInstance.InlineData[1].Pad[3] = '\0';
  local_a8.AllMask.Bits.AllocatorInstance.InlineData[2].Pad[0] = '\0';
  local_a8.AllMask.Bits.AllocatorInstance.InlineData[2].Pad[1] = '\0';
  local_a8.AllMask.Bits.AllocatorInstance.InlineData[2].Pad[2] = '\0';
  local_a8.AllMask.Bits.AllocatorInstance.InlineData[2].Pad[3] = '\0';
  local_a8.AllMask.Bits.AllocatorInstance.InlineData[3].Pad[0] = '\0';
  local_a8.AllMask.Bits.AllocatorInstance.InlineData[3].Pad[1] = '\0';
  local_a8.AllMask.Bits.AllocatorInstance.InlineData[3].Pad[2] = '\0';
  local_a8.AllMask.Bits.AllocatorInstance.InlineData[3].Pad[3] = '\0';
  local_a8.AllMask.Bits.NumBits = 0;
  local_a8.AllMask.Bits.MaxBits = 0x180;
  local_a8.AllMask.Bits.AllocatorInstance.InlineData[4].Pad[0] = '\0';
  local_a8.AllMask.Bits.AllocatorInstance.InlineData[4].Pad[1] = '\0';
  local_a8.AllMask.Bits.AllocatorInstance.InlineData[4].Pad[2] = '\0';
  local_a8.AllMask.Bits.AllocatorInstance.InlineData[4].Pad[3] = '\0';
  local_a8.AllMask.Bits.AllocatorInstance.InlineData[5].Pad[0] = '\0';
  local_a8.AllMask.Bits.AllocatorInstance.InlineData[5].Pad[1] = '\0';
  local_a8.AllMask.Bits.AllocatorInstance.InlineData[5].Pad[2] = '\0';
  local_a8.AllMask.Bits.AllocatorInstance.InlineData[5].Pad[3] = '\0';
  local_a8.AllMask.Bits.AllocatorInstance.InlineData[6].Pad[0] = '\0';
  local_a8.AllMask.Bits.AllocatorInstance.InlineData[6].Pad[1] = '\0';
  local_a8.AllMask.Bits.AllocatorInstance.InlineData[6].Pad[2] = '\0';
  local_a8.AllMask.Bits.AllocatorInstance.InlineData[6].Pad[3] = '\0';
  local_a8.AllMask.Bits.AllocatorInstance.InlineData[7].Pad[0] = '\0';
  local_a8.AllMask.Bits.AllocatorInstance.InlineData[7].Pad[1] = '\0';
  local_a8.AllMask.Bits.AllocatorInstance.InlineData[7].Pad[2] = '\0';
  local_a8.AllMask.Bits.AllocatorInstance.InlineData[7].Pad[3] = '\0';
  local_a8.NoneMask.Bits.NumBits = 0;
  local_a8.NoneMask.Bits.MaxBits = 0x180;
  local_a8.AllMask.Bits.AllocatorInstance.InlineData[8].Pad[0] = '\0';
  local_a8.AllMask.Bits.AllocatorInstance.InlineData[8].Pad[1] = '\0';
  local_a8.AllMask.Bits.AllocatorInstance.InlineData[8].Pad[2] = '\0';
  local_a8.AllMask.Bits.AllocatorInstance.InlineData[8].Pad[3] = '\0';
  local_a8.AllMask.Bits.AllocatorInstance.InlineData[9].Pad[0] = '\0';
  local_a8.AllMask.Bits.AllocatorInstance.InlineData[9].Pad[1] = '\0';
  local_a8.AllMask.Bits.AllocatorInstance.InlineData[9].Pad[2] = '\0';
  local_a8.AllMask.Bits.AllocatorInstance.InlineData[9].Pad[3] = '\0';
  local_a8.AllMask.Bits.AllocatorInstance.InlineData[10].Pad[0] = '\0';
  local_a8.AllMask.Bits.AllocatorInstance.InlineData[10].Pad[1] = '\0';
  local_a8.AllMask.Bits.AllocatorInstance.InlineData[10].Pad[2] = '\0';
  local_a8.AllMask.Bits.AllocatorInstance.InlineData[10].Pad[3] = '\0';
  local_a8.AllMask.Bits.AllocatorInstance.InlineData[0xb].Pad[0] = '\0';
  local_a8.AllMask.Bits.AllocatorInstance.InlineData[0xb].Pad[1] = '\0';
  local_a8.AllMask.Bits.AllocatorInstance.InlineData[0xb].Pad[2] = '\0';
  local_a8.AllMask.Bits.AllocatorInstance.InlineData[0xb].Pad[3] = '\0';
  local_a8.NoneMask.Bits.AllocatorInstance.InlineData[2].Pad[0] = '\0';
  local_a8.NoneMask.Bits.AllocatorInstance.InlineData[2].Pad[1] = '\0';
  local_a8.NoneMask.Bits.AllocatorInstance.InlineData[2].Pad[2] = '\0';
  local_a8.NoneMask.Bits.AllocatorInstance.InlineData[2].Pad[3] = '\0';
  local_a8.NoneMask.Bits.AllocatorInstance.InlineData[3].Pad[0] = '\0';
  local_a8.NoneMask.Bits.AllocatorInstance.InlineData[3].Pad[1] = '\0';
  local_a8.NoneMask.Bits.AllocatorInstance.InlineData[3].Pad[2] = '\0';
  local_a8.NoneMask.Bits.AllocatorInstance.InlineData[3].Pad[3] = '\0';
  local_a8.NoneMask.Bits.AllocatorInstance.InlineData[4].Pad[0] = '\0';
  local_a8.NoneMask.Bits.AllocatorInstance.InlineData[4].Pad[1] = '\0';
  local_a8.NoneMask.Bits.AllocatorInstance.InlineData[4].Pad[2] = '\0';
  local_a8.NoneMask.Bits.AllocatorInstance.InlineData[4].Pad[3] = '\0';
  local_a8.NoneMask.Bits.AllocatorInstance.InlineData[5].Pad[0] = '\0';
  local_a8.NoneMask.Bits.AllocatorInstance.InlineData[5].Pad[1] = '\0';
  local_a8.NoneMask.Bits.AllocatorInstance.InlineData[5].Pad[2] = '\0';
  local_a8.NoneMask.Bits.AllocatorInstance.InlineData[5].Pad[3] = '\0';
  local_a8.NoneMask.Bits.AllocatorInstance.InlineData[6].Pad[0] = '\0';
  local_a8.NoneMask.Bits.AllocatorInstance.InlineData[6].Pad[1] = '\0';
  local_a8.NoneMask.Bits.AllocatorInstance.InlineData[6].Pad[2] = '\0';
  local_a8.NoneMask.Bits.AllocatorInstance.InlineData[6].Pad[3] = '\0';
  local_a8.NoneMask.Bits.AllocatorInstance.InlineData[7].Pad[0] = '\0';
  local_a8.NoneMask.Bits.AllocatorInstance.InlineData[7].Pad[1] = '\0';
  local_a8.NoneMask.Bits.AllocatorInstance.InlineData[7].Pad[2] = '\0';
  local_a8.NoneMask.Bits.AllocatorInstance.InlineData[7].Pad[3] = '\0';
  local_a8.NoneMask.Bits.AllocatorInstance.InlineData[8].Pad[0] = '\0';
  local_a8.NoneMask.Bits.AllocatorInstance.InlineData[8].Pad[1] = '\0';
  local_a8.NoneMask.Bits.AllocatorInstance.InlineData[8].Pad[2] = '\0';
  local_a8.NoneMask.Bits.AllocatorInstance.InlineData[8].Pad[3] = '\0';
  local_a8.NoneMask.Bits.AllocatorInstance.InlineData[9].Pad[0] = '\0';
  local_a8.NoneMask.Bits.AllocatorInstance.InlineData[9].Pad[1] = '\0';
  local_a8.NoneMask.Bits.AllocatorInstance.InlineData[9].Pad[2] = '\0';
  local_a8.NoneMask.Bits.AllocatorInstance.InlineData[9].Pad[3] = '\0';
  local_d0[0] = TVar1;
  local_b8.Value = (ushort)TVar2;
  iVar4 = TSparseArray<UMovieSceneEntityGroupingSystem::FEntityGroupingHandlerInfo,FDefaultSparseArrayAllocator>
          ::Emplace<>(&pUVar5->GroupHandlers);
  this_00 = (TInlineValue<UE::MovieScene::IEntityGroupingHandler,256,8> *)
            (*(longlong *)&pUVar5->GroupHandlers + (longlong)iVar4 * 0x188);
  TInlineValue<UE::MovieScene::IEntityGroupingHandler,256,8>::
  Emplace<UE::MovieScene::TEntityGroupingHandler<UE::MovieScene::FPropertyInstantiatorGroupingPolicy,UObject_*,FMovieScenePropertyBinding>,UE::MovieScene::FPropertyInstantiatorGroupingPolicy,UE::MovieScene::TComponentTypeID<UObject_*>_&,UE::MovieScene::TComponentTypeID<FMovieScenePropertyBinding>_&>
            (this_00,(FPropertyInstantiatorGroupingPolicy *)local_d8,
             (TComponentTypeID<UObject_*> *)&local_b8,local_d0);
  UE::MovieScene::FEntityComponentFilter::operator=
            ((FEntityComponentFilter *)(this_00 + 1),&local_a8);
  local_c8._First = &local_b8;
  local_c8._Last = &local_b4;
  local_b8.Value = (ushort)TVar2;
  local_b6 = (TComponentTypeID<TSharedPtr<FTrackInstancePropertyBindings,1>_>)TVar1;
  UE::MovieScene::FComponentMask::SetAll((FComponentMask *)(this_00 + 1),&local_c8);
  if (local_a8.ComplexMasks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.ComplexMasks.AllocatorInstance.Data);
  }
  (this->PropertyGroupingKey).Index = iVar4;
  return;
}

// OnObjectsReplaced @ 1468442d0

void __thiscall
UMovieScenePropertyInstantiatorSystem::OnObjectsReplaced
          (UMovieScenePropertyInstantiatorSystem *this,
          TMap<UObject_*,UObject_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,UObject_*,0>_>
          *param_1)

{
  return;
}

// OnRun @ 14684a350

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMovieScenePropertyInstantiatorSystem::OnRun
          (UMovieScenePropertyInstantiatorSystem *this,FSystemTaskPrerequisites *param_1,
          FSystemSubsequentTasks *param_2)

{
  uint uVar1;
  TBitArray<FDefaultBitArrayAllocator> *this_00;
  uint *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  ForElementType<unsigned_int> FVar6;
  ForElementType<unsigned_int> FVar7;
  uint uVar8;
  ulonglong uVar9;
  bool bVar10;
  
  this_00 = &this->PendingInvalidatedProperties;
  DiscoverInvalidatedProperties(this,this_00);
  uVar9 = 0;
  if ((this->PendingInvalidatedProperties).NumBits != 0) {
    UpgradeFloatToDoubleProperties(this,this_00);
    ProcessInvalidatedProperties(this,this_00);
    iVar3 = (this->PendingInvalidatedProperties).MaxBits;
    (this->PendingInvalidatedProperties).NumBits = 0;
    if ((iVar3 < 0) || (0x80 < iVar3)) {
      (this->PendingInvalidatedProperties).MaxBits = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc(this_00,0);
    }
  }
  FVar7 = (this->InitializePropertyMetaDataTasks).AllocatorInstance.SecondaryData;
  iVar3 = (this->InitializePropertyMetaDataTasks).NumBits;
  if (FVar7 == (ForElementType<unsigned_int>)0x0) {
    FVar7 = (ForElementType<unsigned_int>)&this->InitializePropertyMetaDataTasks;
  }
  uVar1 = iVar3 + 0x1f;
  FVar6 = FVar7;
  if (uVar1 >> 5 != 0) {
    do {
      if (*(int *)FVar6 != 0) {
        puVar2 = (uint *)((longlong)FVar7 + uVar9 * 4);
        iVar4 = 0;
        bVar10 = *puVar2 != 0;
        if (bVar10) {
          for (; (*puVar2 >> iVar4 & 1) == 0; iVar4 = iVar4 + 1) {
          }
        }
        iVar5 = 0x20;
        if (bVar10) {
          iVar5 = iVar4;
        }
        iVar5 = iVar5 + (int)uVar9 * 0x20;
        if (iVar3 <= iVar5) {
          return;
        }
        if (iVar5 == -1) {
          return;
        }
        InitializePropertyMetaData(this,param_1,param_2);
        return;
      }
      uVar8 = (int)uVar9 + 1;
      uVar9 = (ulonglong)uVar8;
      FVar6 = (ForElementType<unsigned_int>)((longlong)FVar6 + 4);
    } while ((int)uVar8 < (int)(uVar1 >> 5));
  }
  return;
}

// OnUnlink @ 146851a70

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMovieScenePropertyInstantiatorSystem::OnUnlink(UMovieScenePropertyInstantiatorSystem *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  UMovieSceneEntityGroupingSystem *this_00;
  FScriptContainerElement *pFVar6;
  undefined1 local_res8 [8];
  
  if (((*(int *)&(this->ResolvedProperties).field_0x8 !=
        *(int *)&(this->ResolvedProperties).field_0x34) ||
      (*(int *)&(this->Contributors).field_0x8 != *(int *)&(this->Contributors).field_0x34)) ||
     (*(int *)&(this->NewContributors).field_0x8 != *(int *)&(this->NewContributors).field_0x34)) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<6422358202226049146>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieSceneTracks\\Private\\Systems\\MovieScenePropertyInstantiator.cpp"
                       ,0x7a,"bAllPropertiesClean");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    TSparseArray<UMovieScenePropertyInstantiatorSystem::FObjectPropertyInfo,FDefaultSparseArrayAllocator>
    ::DestroyElements(&this->ResolvedProperties,0,*(int *)&(this->ResolvedProperties).field_0x8);
    *(undefined4 *)&(this->ResolvedProperties).field_0x8 = 0;
    if (*(int *)&(this->ResolvedProperties).field_0xc < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x60,8,0,(ForAnyElementType *)&this->ResolvedProperties,0,
                 (int *)&(this->ResolvedProperties).field_0xc);
    }
    *(undefined4 *)&(this->ResolvedProperties).field_0x30 = 0xffffffff;
    *(undefined4 *)&(this->ResolvedProperties).field_0x34 = 0;
    *(undefined4 *)&(this->ResolvedProperties).field_0x28 = 0;
    TSet<TTuple<UMovieScenePropertyInstantiatorSystem::FContributorKey,UE::MovieScene::FMovieSceneEntityID>,TDefaultMapHashableKeyFuncs<UMovieScenePropertyInstantiatorSystem::FContributorKey,UE::MovieScene::FMovieSceneEntityID,1>,FDefaultSetAllocator>
    ::Reset((TSet<TTuple<UMovieScenePropertyInstantiatorSystem::FContributorKey,UE::MovieScene::FMovieSceneEntityID>,TDefaultMapHashableKeyFuncs<UMovieScenePropertyInstantiatorSystem::FContributorKey,UE::MovieScene::FMovieSceneEntityID,1>,FDefaultSetAllocator>
             *)&this->Contributors);
    TSet<TTuple<UMovieScenePropertyInstantiatorSystem::FContributorKey,UE::MovieScene::FMovieSceneEntityID>,TDefaultMapHashableKeyFuncs<UMovieScenePropertyInstantiatorSystem::FContributorKey,UE::MovieScene::FMovieSceneEntityID,1>,FDefaultSetAllocator>
    ::Reset((TSet<TTuple<UMovieScenePropertyInstantiatorSystem::FContributorKey,UE::MovieScene::FMovieSceneEntityID>,TDefaultMapHashableKeyFuncs<UMovieScenePropertyInstantiatorSystem::FContributorKey,UE::MovieScene::FMovieSceneEntityID,1>,FDefaultSetAllocator>
             *)&this->NewContributors);
    (this->PropertyStats).ArrayNum = 0;
    if ((this->PropertyStats).ArrayMax < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,0,&(this->PropertyStats).AllocatorInstance,0,&(this->PropertyStats).ArrayMax);
    }
  }
  pFVar6 = (this->PropertyStats).AllocatorInstance.Data;
  iVar3 = (this->PropertyStats).ArrayNum;
  pFVar2 = pFVar6 + (longlong)iVar3 * 8;
  while( true ) {
    if ((this->PropertyStats).ArrayNum != iVar3) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<UE::MovieScene::FPropertyStats_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar6 == pFVar2) goto LAB_146851c1b;
    if ((*(int *)pFVar6 != 0) || (*(int *)(pFVar6 + 4) != 0)) break;
    pFVar6 = pFVar6 + 8;
  }
  bVar5 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<6422358202226049159>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieSceneTracks\\Private\\Systems\\MovieScenePropertyInstantiator.cpp"
                     ,0x87,"bAllPropertiesGone");
  if (bVar5) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  (this->PropertyStats).ArrayNum = 0;
  if ((this->PropertyStats).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,0,&(this->PropertyStats).AllocatorInstance,0,&(this->PropertyStats).ArrayMax);
  }
LAB_146851c1b:
  piVar1 = &(this->SaveGlobalStateTasks).NumBits;
  if (((this->InitializePropertyMetaDataTasks).NumBits != 0) || (*piVar1 != 0)) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<6422358202226049167>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieSceneTracks\\Private\\Systems\\MovieScenePropertyInstantiator.cpp"
                       ,0x8f,"bAllTasksDone");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    (this->InitializePropertyMetaDataTasks).NumBits = 0;
    *piVar1 = 0;
  }
  this_00 = UMovieSceneEntitySystemLinker::FindSystem<UMovieSceneEntityGroupingSystem>
                      ((UMovieSceneEntitySystemLinker *)this->_padding_);
  if (this_00 == (UMovieSceneEntityGroupingSystem *)0x0) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<6422358202226049174>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieSceneTracks\\Private\\Systems\\MovieScenePropertyInstantiator.cpp"
                       ,0x96,"GroupingSystem");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else {
    UMovieSceneEntityGroupingSystem::RemoveGrouping
              (this_00,(FEntityGroupingPolicyKey)(this->PropertyGroupingKey).Index);
  }
  (this->PropertyGroupingKey).Index = -1;
  return;
}

// PostDestroyStaleProperties @ 146853220

void __thiscall
UMovieScenePropertyInstantiatorSystem::PostDestroyStaleProperties
          (UMovieScenePropertyInstantiatorSystem *this)

{
  TSparseArrayBase<96,8,FDefaultSparseArrayAllocator>::Shrink
            ((TSparseArrayBase<96,8,FDefaultSparseArrayAllocator> *)&this->ResolvedProperties);
  return;
}

// ProcessInvalidatedProperties @ 146858930

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UMovieScenePropertyInstantiatorSystem::ProcessInvalidatedProperties
          (UMovieScenePropertyInstantiatorSystem *this,TBitArray<FDefaultBitArrayAllocator> *param_1
          )

{
  TMultiMap<UMovieScenePropertyInstantiatorSystem::FContributorKey,UE::MovieScene::FMovieSceneEntityID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UMovieScenePropertyInstantiatorSystem::FContributorKey,UE::MovieScene::FMovieSceneEntityID,1>_>
  *this_00;
  uint *puVar1;
  ulonglong uVar2;
  int iVar3;
  undefined1 *puVar4;
  longlong lVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  ulonglong uVar11;
  ForElementType<unsigned_int> FVar12;
  ulonglong uVar13;
  ForElementType<unsigned_int> FVar14;
  undefined1 *puVar15;
  ulonglong uVar16;
  uint uVar17;
  uint uVar19;
  uint uVar20;
  int iVar21;
  undefined1 auStackY_c8 [32];
  FPropertyParameters local_88;
  int local_70;
  int local_6c;
  FScriptContainerElement *local_68;
  longlong local_60;
  ForElementType<unsigned_int> local_58;
  TBitArray<FDefaultBitArrayAllocator> local_50;
  ulonglong local_30;
  ulonglong uVar18;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStackY_c8;
  uVar18 = 0;
  local_50.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_50.NumBits = 0;
  local_50.MaxBits = 0x80;
  iVar3 = (this->BuiltInComponents->PropertyRegistry).Properties.ArrayNum;
  local_68 = (this->BuiltInComponents->PropertyRegistry).Properties.AllocatorInstance.Data;
  uVar13 = uVar18;
  local_58 = (ForElementType<unsigned_int>)param_1;
  if (iVar3 < 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    uVar13 = (ulonglong)(uint)local_50.NumBits;
  }
  iVar21 = param_1->NumBits;
  if (iVar21 != 0) {
    FVar14 = (param_1->AllocatorInstance).SecondaryData;
    if (FVar14 != (ForElementType<unsigned_int>)0x0) {
      param_1 = (TBitArray<FDefaultBitArrayAllocator> *)FVar14;
    }
    uVar16 = uVar18;
    for (uVar17 = *(uint *)param_1; uVar17 == 0;
        uVar17 = *(uint *)((longlong)param_1 + (longlong)(int)uVar17 * 4)) {
      uVar17 = (int)uVar18 + 1;
      uVar18 = (ulonglong)uVar17;
      uVar16 = (ulonglong)((int)uVar16 + 0x20);
      if ((int)(iVar21 + -1 + (iVar21 + -1 >> 0x1f & 0x1fU)) >> 5 < (int)uVar17) goto LAB_146858c9c;
    }
    uVar11 = (ulonglong)(~(uVar17 - 1) & uVar17);
    uVar2 = uVar11 * 2 + 1;
    lVar5 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar5 == 0; lVar5 = lVar5 + -1) {
      }
    }
    local_70 = (int)lVar5;
    uVar17 = (int)uVar16 + -1 + local_70;
    if ((int)uVar17 < iVar21) {
      uVar19 = 0xffffffff;
      do {
        if ((-1 < (int)uVar17) && ((int)uVar17 < *(int *)&(this->ResolvedProperties).field_0x28)) {
          puVar4 = *(undefined1 **)&(this->ResolvedProperties).field_0x20;
          puVar15 = &(this->ResolvedProperties).field_0x10;
          if (puVar4 != (undefined1 *)0x0) {
            puVar15 = puVar4;
          }
          uVar8 = uVar17;
          if ((int)uVar17 < 0) {
            uVar8 = uVar17 + 0x1f;
          }
          uVar20 = 1 << ((byte)uVar17 & 0x1f);
          local_60 = (longlong)((int)uVar8 >> 5) * 4;
          if ((*(uint *)(puVar15 + local_60) & uVar20) != 0) {
            local_88.PropertyInfo =
                 (FObjectPropertyInfo *)
                 ((longlong)(int)uVar17 * 0x60 + *(longlong *)&this->ResolvedProperties);
            uVar8 = (local_88.PropertyInfo)->PropertyDefinitionIndex;
            uVar9 = 0;
            if ((int)uVar8 < iVar3) {
              uVar9 = ~uVar8 >> 0x1f;
            }
            if ((uVar9 == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                   ,0x14f,
                                   L"Array index out of bounds: %lld from an array of size %lld"),
               bVar7)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            local_88.PropertyDefinition =
                 (FPropertyDefinition *)(local_68 + (longlong)(int)uVar8 * 0x70);
            local_88.PropertyInfoIndex = uVar17;
            UpdatePropertyInfo(this,&local_88);
            if (*(int *)&(this->Contributors).field_0x8 != *(int *)&(this->Contributors).field_0x34)
            {
              puVar4 = *(undefined1 **)&(this->Contributors).field_0x40;
              puVar15 = &(this->Contributors).field_0x38;
              if (puVar4 != (undefined1 *)0x0) {
                puVar15 = puVar4;
              }
              iVar21 = *(int *)(puVar15 +
                               (ulonglong)(*(int *)&(this->Contributors).field_0x48 - 1U & uVar17) *
                               4);
              if (iVar21 != -1) {
                do {
                  if (*(uint *)(*(longlong *)&this->Contributors + (longlong)iVar21 * 0x10) ==
                      uVar17) {
                    if ((local_88.PropertyInfo)->bSupportsFastPath == '\0') {
                      InitializeBlendPath(this,&local_88);
                    }
                    else {
                      InitializeFastPath(this,&local_88);
                    }
                    goto LAB_146858bf9;
                  }
                  iVar21 = *(int *)(*(longlong *)&this->Contributors + 8 + (longlong)iVar21 * 0x10);
                } while (iVar21 != -1);
              }
            }
            iVar21 = (uVar17 - local_50.NumBits) + 1;
            if (0 < iVar21) {
              iVar10 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized(&local_50,iVar21);
              TBitArray<FDefaultBitArrayAllocator>::SetRange(&local_50,iVar10,iVar21,false);
            }
            if ((local_50.NumBits <= (int)uVar17) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Index>=0 && Index<NumBits",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                   ,0x5be,L""), bVar7)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            FVar14 = (ForElementType<unsigned_int>)&local_50;
            if (local_50.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
              FVar14 = local_50.AllocatorInstance.SecondaryData;
            }
            *(uint *)(local_60 + (longlong)FVar14) = *(uint *)(local_60 + (longlong)FVar14) | uVar20
            ;
LAB_146858bf9:
            uVar13 = (ulonglong)(uint)local_50.NumBits;
          }
        }
        uVar19 = uVar19 & ~(uint)uVar11;
        iVar21 = *(int *)((longlong)local_58 + 0x18);
        FVar14 = local_58;
        if (*(ForElementType<unsigned_int> *)((longlong)local_58 + 0x10) !=
            (ForElementType<unsigned_int>)0x0) {
          FVar14 = *(ForElementType<unsigned_int> *)((longlong)local_58 + 0x10);
        }
        uVar8 = uVar19 & *(uint *)((longlong)FVar14 + (longlong)(int)uVar18 * 4);
        while (uVar8 == 0) {
          uVar17 = (int)uVar18 + 1;
          uVar18 = (ulonglong)uVar17;
          uVar16 = (ulonglong)((int)uVar16 + 0x20);
          if ((int)((iVar21 + -1 >> 0x1f & 0x1fU) + iVar21 + -1) >> 5 < (int)uVar17)
          goto LAB_146858c9c;
          uVar19 = 0xffffffff;
          uVar8 = *(uint *)((longlong)FVar14 + (longlong)(int)uVar17 * 4);
        }
        uVar8 = ~(uVar8 - 1) & uVar8;
        uVar2 = (ulonglong)uVar8 * 2 + 1;
        lVar5 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar5 == 0; lVar5 = lVar5 + -1) {
          }
        }
        local_6c = (int)lVar5;
        uVar17 = local_6c + -1 + (int)uVar16;
      } while (((int)uVar17 <= iVar21) && (uVar11 = (ulonglong)uVar8, (int)uVar17 < iVar21));
    }
  }
LAB_146858c9c:
  uVar18 = 0;
  FVar14 = (ForElementType<unsigned_int>)&local_50;
  if (local_50.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FVar14 = local_50.AllocatorInstance.SecondaryData;
  }
  iVar3 = (int)uVar13;
  FVar12 = FVar14;
  uVar16 = uVar18;
  if (iVar3 + 0x1fU >> 5 != 0) {
    do {
      if (*(uint *)FVar12 != 0) {
        puVar1 = (uint *)((longlong)FVar14 + uVar16 * 4);
        iVar21 = 0;
        bVar7 = *puVar1 != 0;
        if (bVar7) {
          for (; (*puVar1 >> iVar21 & 1) == 0; iVar21 = iVar21 + 1) {
          }
        }
        iVar10 = 0x20;
        if (bVar7) {
          iVar10 = iVar21;
        }
        iVar10 = iVar10 + (int)uVar16 * 0x20;
        if ((iVar3 <= iVar10) || (iVar10 == -1)) break;
        uVar17 = 0xffffffff;
        uVar19 = 1;
        uVar2 = uVar18;
        uVar16 = uVar18;
        if (iVar3 == 0) {
LAB_146858d96:
          uVar13 = uVar2;
          uVar8 = (uint)uVar13;
          iVar21 = uVar8 - iVar3;
        }
        else {
          FVar14 = (ForElementType<unsigned_int>)&local_50;
          if (local_50.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
            FVar14 = local_50.AllocatorInstance.SecondaryData;
          }
          for (uVar8 = *(uint *)FVar14; uVar2 = uVar13, uVar8 == 0;
              uVar8 = *(uint *)((longlong)FVar14 + (longlong)(int)uVar8 * 4)) {
            uVar8 = (int)uVar18 + 1;
            uVar18 = (ulonglong)uVar8;
            uVar16 = (ulonglong)((int)uVar16 + 0x20);
            if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < (int)uVar8)
            goto LAB_146858d96;
          }
          uVar19 = -uVar8 & uVar8;
          uVar13 = (ulonglong)uVar19 * 2 + 1;
          lVar5 = 0x3f;
          if (uVar13 != 0) {
            for (; uVar13 >> lVar5 == 0; lVar5 = lVar5 + -1) {
            }
          }
          uVar8 = (int)uVar16 + -1 + (int)lVar5;
          uVar13 = (ulonglong)uVar8;
          iVar21 = uVar8 - iVar3;
          if (iVar3 < (int)uVar8) goto LAB_146858d96;
        }
        if (SBORROW4(uVar8,iVar3) != iVar21 < 0) {
          do {
            DestroyStaleProperty(this,(int)uVar13);
            uVar17 = uVar17 & ~uVar19;
            FVar14 = (ForElementType<unsigned_int>)&local_50;
            if (local_50.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
              FVar14 = local_50.AllocatorInstance.SecondaryData;
            }
            for (uVar8 = uVar17 & *(uint *)((longlong)FVar14 + (longlong)(int)uVar18 * 4);
                uVar8 == 0; uVar8 = *(uint *)((longlong)FVar14 + (longlong)(int)uVar8 * 4)) {
              uVar8 = (int)uVar18 + 1;
              uVar18 = (ulonglong)uVar8;
              uVar16 = (ulonglong)((int)uVar16 + 0x20);
              if ((int)(((int)(local_50.NumBits - 1U) >> 0x1f & 0x1fU) + (local_50.NumBits - 1U)) >>
                  5 < (int)uVar8) {
                uVar13 = (ulonglong)(uint)local_50.NumBits;
                goto LAB_146858e1a;
              }
              uVar17 = 0xffffffff;
            }
            uVar19 = -uVar8 & uVar8;
            uVar13 = (ulonglong)uVar19 * 2 + 1;
            lVar5 = 0x3f;
            if (uVar13 != 0) {
              for (; uVar13 >> lVar5 == 0; lVar5 = lVar5 + -1) {
              }
            }
            uVar8 = (int)lVar5 + -1 + (int)uVar16;
            uVar13 = (ulonglong)uVar8;
            if (local_50.NumBits < (int)uVar8) {
              uVar13 = (ulonglong)(uint)local_50.NumBits;
            }
LAB_146858e1a:
          } while ((int)uVar13 < local_50.NumBits);
        }
        TSparseArrayBase<96,8,FDefaultSparseArrayAllocator>::Shrink
                  ((TSparseArrayBase<96,8,FDefaultSparseArrayAllocator> *)&this->ResolvedProperties)
        ;
        break;
      }
      uVar17 = (int)uVar16 + 1;
      FVar12 = (ForElementType<unsigned_int>)((longlong)FVar12 + 4);
      uVar16 = (ulonglong)uVar17;
    } while ((int)uVar17 < (int)(iVar3 + 0x1fU >> 5));
  }
  this_00 = &this->NewContributors;
  bVar7 = 1 < *(int *)&(this->NewContributors).field_0x48;
  if (!bVar7) {
    TSet<TTuple<UMovieScenePropertyInstantiatorSystem::FContributorKey,UE::MovieScene::FMovieSceneEntityID>,TDefaultMapHashableKeyFuncs<UMovieScenePropertyInstantiatorSystem::FContributorKey,UE::MovieScene::FMovieSceneEntityID,1>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<UMovieScenePropertyInstantiatorSystem::FContributorKey,UE::MovieScene::FMovieSceneEntityID>,TDefaultMapHashableKeyFuncs<UMovieScenePropertyInstantiatorSystem::FContributorKey,UE::MovieScene::FMovieSceneEntityID,1>,FDefaultSetAllocator>
                      *)this_00);
  }
  *(undefined4 *)&(this->NewContributors).field_0x8 = 0;
  if (*(int *)&(this->NewContributors).field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,0,(ForAnyElementType *)this_00,0,(int *)&(this->NewContributors).field_0xc);
  }
  *(undefined4 *)&(this->NewContributors).field_0x34 = 0;
  *(undefined4 *)&(this->NewContributors).field_0x30 = 0xffffffff;
  iVar3 = *(int *)&(this->NewContributors).field_0x2c;
  *(undefined4 *)&(this->NewContributors).field_0x28 = 0;
  if ((iVar3 < 0) || (0x80 < iVar3)) {
    *(undefined4 *)&(this->NewContributors).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->NewContributors).field_0x10,0);
  }
  if (bVar7) {
    *(undefined4 *)&(this->NewContributors).field_0x48 = 1;
    TSet<TTuple<UMovieScenePropertyInstantiatorSystem::FContributorKey,UE::MovieScene::FMovieSceneEntityID>,TDefaultMapHashableKeyFuncs<UMovieScenePropertyInstantiatorSystem::FContributorKey,UE::MovieScene::FMovieSceneEntityID,1>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<UMovieScenePropertyInstantiatorSystem::FContributorKey,UE::MovieScene::FMovieSceneEntityID>,TDefaultMapHashableKeyFuncs<UMovieScenePropertyInstantiatorSystem::FContributorKey,UE::MovieScene::FMovieSceneEntityID,1>,FDefaultSetAllocator>
              *)this_00);
  }
  if (local_50.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_50.AllocatorInstance.SecondaryData);
  }
  return;
}

// ResolveProperty @ 1468609d0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UMovieScenePropertyInstantiatorSystem::ResolveProperty
          (UMovieScenePropertyInstantiatorSystem *this,FCustomAccessorView *param_1,UObject *param_2
          ,FMovieScenePropertyBinding *param_3,FEntityGroupID *param_4,int param_5)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  FName FVar3;
  FEntityGroupID *pFVar4;
  bool bVar5;
  undefined1 uVar6;
  bool bVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 *puVar11;
  FName local_res8;
  FString local_88;
  FString local_78;
  FCustomAccessorView local_68;
  FString local_58;
  TOptional<TVariant<unsigned_short,UE::MovieScene::FCustomPropertyIndex,TSharedPtr<FTrackInstancePropertyBindings,1>_>_>
  local_48;
  
  pFVar4 = param_4;
  uVar8 = param_4->GroupIndex;
  if ((-1 < (int)uVar8) && ((int)uVar8 < *(int *)&(this->ResolvedProperties).field_0x28)) {
    if ((*(int *)&(this->ResolvedProperties).field_0x28 <= (int)uVar8) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5c6,L""), bVar5)) {
      pcVar2 = (code *)swi(3);
      uVar6 = (*pcVar2)();
      return (bool)uVar6;
    }
    puVar11 = *(undefined1 **)&(this->ResolvedProperties).field_0x20;
    if (puVar11 == (undefined1 *)0x0) {
      puVar11 = &(this->ResolvedProperties).field_0x10;
    }
    if ((*(uint *)(puVar11 + (longlong)((int)(uVar8 + ((int)uVar8 >> 0x1f & 0x1fU)) >> 5) * 4) >>
         (uVar8 & 0x1f) & 1) != 0) {
      lVar9 = (longlong)pFVar4->GroupIndex * 0x60 + *(longlong *)&this->ResolvedProperties;
      if ((*(UObject **)(lVar9 + 0x20) != param_2) &&
         (bVar5 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<6422358202226050129>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieSceneTracks\\Private\\Systems\\MovieScenePropertyInstantiator.cpp"
                             ,0x451,"ResolvedProperty.BoundObject == Object"), bVar5)) {
        pcVar2 = (code *)swi(3);
        uVar6 = (*pcVar2)();
        return (bool)uVar6;
      }
      if ((*(FName *)(lVar9 + 0x30) != param_3->PropertyPath) &&
         (bVar5 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<6422358202226050130>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieSceneTracks\\Private\\Systems\\MovieScenePropertyInstantiator.cpp"
                             ,0x452,
                             "ResolvedProperty.PropertyBinding.PropertyPath == PropertyBinding.PropertyPath"
                            ), bVar5)) {
        pcVar2 = (code *)swi(3);
        uVar6 = (*pcVar2)();
        return (bool)uVar6;
      }
      return true;
    }
  }
  local_68.Base = param_1->Base;
  local_68.ViewNum = param_1->ViewNum;
  local_68.Stride = param_1->Stride;
  UE::MovieScene::FPropertyRegistry::ResolveProperty(&local_48,param_2,param_3,&local_68);
  if (local_48.bIsSet == false) {
    if (2 < (byte)LogMovieScene._0_1_) {
      param_4 = *(FEntityGroupID **)&param_2->field_0x18;
      ::FName::ToString((FName *)&param_4,&local_78);
      local_res8 = *(FName *)(*(longlong *)&param_2->field_0x10 + 0x18);
      ::FName::ToString(&local_res8,&local_88);
      ::FName::ToString(&param_3->PropertyPath,&local_58);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMovieScene);
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
      if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88.Data.AllocatorInstance.Data);
      }
      if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.Data.AllocatorInstance.Data);
      }
    }
    bVar5 = false;
  }
  else {
    TSparseArray<UMovieScenePropertyInstantiatorSystem::FObjectPropertyInfo,FDefaultSparseArrayAllocator>
    ::
    EmplaceAt<TVariant<unsigned_short,UE::MovieScene::FCustomPropertyIndex,TSharedPtr<FTrackInstancePropertyBindings,1>_>_>
              (&this->ResolvedProperties,pFVar4->GroupIndex,&local_48.TypedValue);
    lVar10 = (longlong)param_5;
    lVar9 = (longlong)pFVar4->GroupIndex * 0x60 + *(longlong *)&this->ResolvedProperties;
    *(UObject **)(lVar9 + 0x20) = param_2;
    FVar3 = param_3->PropertyPath;
    *(FName *)(lVar9 + 0x28) = param_3->PropertyName;
    *(FName *)(lVar9 + 0x30) = FVar3;
    *(undefined4 *)(lVar9 + 0x38) = *(undefined4 *)&param_3->bCanUseClassLookup;
    *(int *)(lVar9 + 0x50) = param_5;
    uVar8 = 0;
    if (param_5 < (this->PropertyStats).ArrayNum) {
      uVar8 = (uint)~param_5 >> 0x1f;
    }
    if ((uVar8 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar2 = (code *)swi(3);
      uVar6 = (*pcVar2)();
      return (bool)uVar6;
    }
    pFVar1 = (this->PropertyStats).AllocatorInstance.Data + lVar10 * 8;
    *(int *)pFVar1 = *(int *)pFVar1 + 1;
    bVar5 = true;
  }
  if (local_48.bIsSet != false) {
    if ((2 < local_48.TypedValue.TypeIndex) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar7)) {
      pcVar2 = (code *)swi(3);
      uVar6 = (*pcVar2)();
      return (bool)uVar6;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<unsigned_short,UE::MovieScene::FCustomPropertyIndex,TSharedPtr<FTrackInstancePropertyBindings,1>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[local_48.TypedValue.TypeIndex])(&local_48);
  }
  return bVar5;
}

// SetupBlenderSystem @ 14686c330

/* WARNING: Enum "Type": Some values do not have unique names */

FSetupBlenderSystemResult * __thiscall
UMovieScenePropertyInstantiatorSystem::SetupBlenderSystem
          (UMovieScenePropertyInstantiatorSystem *this,
          FSetupBlenderSystemResult *__return_storage_ptr__,FPropertyParameters *param_1)

{
  longlong *plVar1;
  TComponentTypeID<TSubclassOf<UMovieSceneBlenderSystem>_> TVar2;
  ushort uVar3;
  int iVar4;
  uint uVar5;
  code *pcVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  bool bVar11;
  EEntityThreadingModel EVar12;
  FSetupBlenderSystemResult *pFVar13;
  UClass *pUVar14;
  UClass *pUVar15;
  UMovieSceneBlenderSystem *pUVar16;
  UObject *pUVar17;
  undefined1 *puVar18;
  longlong lVar19;
  longlong lVar20;
  int iVar21;
  int iVar22;
  int local_98;
  ushort uStack_8e;
  UClass *local_88;
  UClass *local_80;
  UClass **local_78 [2];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  
  iVar4 = param_1->PropertyInfoIndex;
  local_88 = (UClass *)0x0;
  iVar22 = *(int *)&(this->Contributors).field_0x48;
  local_98 = -0x80000000;
  if (iVar22 != 0) {
    puVar18 = *(undefined1 **)&(this->Contributors).field_0x40;
    if (puVar18 == (undefined1 *)0x0) {
      puVar18 = &(this->Contributors).field_0x38;
    }
    iVar22 = *(int *)(puVar18 + ((longlong)iVar22 - 1U & (longlong)iVar4) * 4);
    iVar21 = iVar22;
    if (iVar22 != -1) {
      do {
        iVar22 = *(int *)(*(longlong *)&this->Contributors + 8 + (longlong)iVar21 * 0x10);
        if (*(int *)(*(longlong *)&this->Contributors + (longlong)iVar21 * 0x10) == iVar4) break;
        iVar21 = iVar22;
      } while (iVar22 != -1);
    }
    if (iVar21 != -1) {
      do {
        lVar19 = this->_padding_;
        TVar2 = this->BuiltInComponents->BlenderType;
        uVar3 = *(ushort *)(*(longlong *)&this->Contributors + 4 + (longlong)iVar21 * 0x10);
        if ((uVar3 == 0xffff) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("Entity",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntityManager.h"
                                ,0x1a8,L""), bVar11)) {
          pcVar6 = (code *)swi(3);
          pFVar13 = (FSetupBlenderSystemResult *)(*pcVar6)();
          return pFVar13;
        }
        if ((TVar2 != (TComponentTypeID<TSubclassOf<UMovieSceneBlenderSystem>_>)0xffff) &&
           (uVar5 = *(uint *)(*(longlong *)(lVar19 + 0xc0) + (ulonglong)uVar3 * 8),
           (short)uVar5 != -1)) {
          lVar20 = (ulonglong)(uVar5 & 0xffff) * 0x38 + *(longlong *)(lVar19 + 0x30);
          if (((int)(uint)(ushort)TVar2 < *(int *)(lVar20 + 0x30)) &&
             ((*(uint *)(lVar20 + (ulonglong)((ushort)TVar2 >> 5) * 4) >> ((ushort)TVar2 & 0x1f) & 1
              ) != 0)) {
            uStack_8e = (ushort)(uVar5 >> 0x10);
            lVar20 = *(longlong *)(*(longlong *)(lVar19 + 0x88) + (ulonglong)(uVar5 & 0xffff) * 8);
            EVar12 = UE::MovieScene::FEntityManager::GetThreadingModel
                               ((FEntityManager *)(lVar19 + 0x28));
            lVar19 = *(longlong *)(lVar20 + 0x28);
            lVar20 = (ulonglong)*(ushort *)(lVar20 + 0xc) * 0x38 + lVar19;
            for (; lVar19 != lVar20; lVar19 = lVar19 + 0x38) {
              if (*(TComponentTypeID<TSubclassOf<UMovieSceneBlenderSystem>_> *)(lVar19 + 0x36) ==
                  TVar2) {
                if (EVar12 != NoThreading) {
                  AcquireSRWLockShared((PSRWLOCK)(lVar19 + 0x20));
                }
                LOCK();
                *(int *)(lVar19 + 0x30) = *(int *)(lVar19 + 0x30) + 1;
                UNLOCK();
                plVar1 = (longlong *)(*(longlong *)(lVar19 + 0x18) + (ulonglong)uStack_8e * 8);
                if (plVar1 == (longlong *)0x0) {
LAB_14686c50a:
                  LOCK();
                  *(int *)(lVar19 + 0x30) = *(int *)(lVar19 + 0x30) + -1;
                  UNLOCK();
                }
                else {
                  lVar20 = *plVar1;
                  if ((lVar20 == 0) ||
                     (pUVar14 = Z_Construct_UClass_UMovieSceneBlenderSystem_NoRegister(),
                     pUVar14 == (UClass *)0x0)) {
LAB_14686c557:
                    pUVar14 = (UClass *)0x0;
                  }
                  else {
                    iVar21 = (int)pUVar14->_padding_;
                    if ((*(int *)(lVar20 + 0x38) < iVar21) ||
                       ((longlong *)
                        *(undefined1 **)(*(longlong *)(lVar20 + 0x30) + (longlong)iVar21 * 8) !=
                        &pUVar14->_padding_)) {
                      bVar11 = false;
                    }
                    else {
                      bVar11 = true;
                    }
                    if (!bVar11) goto LAB_14686c557;
                    pUVar14 = (UClass *)*plVar1;
                  }
                  local_80 = pUVar14;
                  if (local_88 == pUVar14) goto LAB_14686c50a;
                  if ((pUVar14->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
                    UClass::InternalCreateDefaultObjectWrapper(pUVar14);
                  }
                  pUVar17 = (pUVar14->ClassDefaultObject).field0_0x0.DebugPtr;
                  pUVar15 = Z_Construct_UClass_UMovieSceneBlenderSystem_NoRegister();
                  lVar20 = *(longlong *)&pUVar17->field_0x10;
                  iVar21 = (int)pUVar15->_padding_;
                  if (((*(int *)(lVar20 + 0x38) < iVar21) ||
                      ((longlong *)
                       *(undefined1 **)(*(longlong *)(lVar20 + 0x30) + (longlong)iVar21 * 8) !=
                       &pUVar15->_padding_)) &&
                     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                         ("Class->GetDefaultObject()->IsA(T::StaticClass())",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                                          ,0x1469,L""), bVar11)) {
                    pcVar6 = (code *)swi(3);
                    pFVar13 = (FSetupBlenderSystemResult *)(*pcVar6)();
                    return pFVar13;
                  }
                  if ((pUVar14->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
                    UClass::InternalCreateDefaultObjectWrapper(pUVar14);
                  }
                  pUVar17 = (pUVar14->ClassDefaultObject).field0_0x0.DebugPtr;
                  if ((local_88 == (UClass *)0x0) ||
                     (iVar21 = *(int *)&pUVar17[2].field_0x18, local_98 < iVar21)) {
                    local_88 = local_80;
                    local_98 = *(int *)&pUVar17[2].field_0x18;
                  }
                  else if (iVar21 == local_98) {
                    local_68 = (UClass *)&local_80;
                    uStack_60 = &local_88;
                    `UMovieScenePropertyInstantiatorSystem::SetupBlenderSystem'::__l15::<lambda_1>::
                    operator()(&local_68);
                  }
                  if (lVar19 == 0) break;
                  LOCK();
                  *(int *)(lVar19 + 0x30) = *(int *)(lVar19 + 0x30) + -1;
                  UNLOCK();
                }
                if (EVar12 != NoThreading) {
                  ReleaseSRWLockShared((PSRWLOCK)(lVar19 + 0x20));
                }
                break;
              }
            }
          }
        }
        if (iVar22 == -1) goto LAB_14686c677;
        iVar21 = iVar22;
        while (iVar22 = *(int *)(*(longlong *)&this->Contributors + 8 + (longlong)iVar21 * 0x10),
              *(int *)(*(longlong *)&this->Contributors + (longlong)iVar21 * 0x10) != iVar4) {
          iVar21 = iVar22;
          if (iVar22 == -1) goto LAB_14686c677;
        }
      } while( true );
    }
  }
LAB_14686c693:
  local_88 = param_1->PropertyDefinition->BlenderSystemClass;
  if (local_88 == (UClass *)0x0) {
    (__return_storage_ptr__->CurrentInfo).BlenderSystemClass = (UClass *)0x0;
    *(undefined8 *)&(__return_storage_ptr__->CurrentInfo).BlenderTypeTag = 0;
    (__return_storage_ptr__->PreviousInfo).BlenderSystemClass = (UClass *)0x0;
    *(undefined8 *)&(__return_storage_ptr__->PreviousInfo).BlenderTypeTag = 0;
    (__return_storage_ptr__->CurrentInfo).BlenderTypeTag.Value = 0xffff;
    (__return_storage_ptr__->PreviousInfo).BlenderTypeTag.Value = 0xffff;
    return __return_storage_ptr__;
  }
LAB_14686c6cb:
  pUVar16 = GetDefault<UMovieSceneBlenderSystem>(local_88);
  uVar3 = (pUVar16->BlenderTypeTag).Value;
  if (uVar3 == 0xffff) {
    local_78[0] = &local_88;
    `UMovieScenePropertyInstantiatorSystem::SetupBlenderSystem'::__l2::<lambda_2>::operator()
              (local_78);
  }
  local_68 = local_88;
  uStack_60 = (UClass **)CONCAT62(uStack_60._2_6_,uVar3);
  local_58 = 0;
  uStack_50 = CONCAT22(uStack_50._2_2_,0xffff);
  pUVar17 = FWeakObjectPtr::Get(&(param_1->PropertyInfo->Blender).WeakPtr);
  uVar7 = (undefined4)local_68;
  uVar8 = local_68._4_4_;
  uVar9 = (undefined4)uStack_60;
  uVar10 = uStack_60._4_4_;
  if (pUVar17 == (UObject *)0x0) {
    local_68._0_4_ = (undefined4)local_58;
    local_68._4_4_ = local_58._4_4_;
    uStack_60._0_4_ = uStack_50;
  }
  else {
    pUVar14 = *(UClass **)&pUVar17->field_0x10;
    uStack_4c = uVar10;
    if (pUVar14 != local_88) {
      uStack_60 = (UClass **)CONCAT62(uStack_60._2_6_,*(undefined2 *)&pUVar17[2].field_0x1e);
      local_68._0_4_ = SUB84(pUVar14,0);
      local_68._4_4_ = (undefined4)((ulonglong)pUVar14 >> 0x20);
    }
  }
  *(undefined4 *)&(__return_storage_ptr__->CurrentInfo).BlenderSystemClass = uVar7;
  *(undefined4 *)((longlong)&(__return_storage_ptr__->CurrentInfo).BlenderSystemClass + 4) = uVar8;
  *(undefined4 *)&(__return_storage_ptr__->CurrentInfo).BlenderTypeTag = uVar9;
  *(undefined4 *)&(__return_storage_ptr__->CurrentInfo).field_0xc = uVar10;
  *(undefined4 *)&(__return_storage_ptr__->PreviousInfo).BlenderSystemClass = (undefined4)local_68;
  *(undefined4 *)((longlong)&(__return_storage_ptr__->PreviousInfo).BlenderSystemClass + 4) =
       local_68._4_4_;
  *(undefined4 *)&(__return_storage_ptr__->PreviousInfo).BlenderTypeTag = (undefined4)uStack_60;
  *(undefined4 *)&(__return_storage_ptr__->PreviousInfo).field_0xc = uStack_4c;
  return __return_storage_ptr__;
LAB_14686c677:
  if (local_88 != (UClass *)0x0) goto LAB_14686c6cb;
  goto LAB_14686c693;
}

// StaticRegisterNativesUMovieScenePropertyInstantiatorSystem @ 14686cbf0

void __cdecl
UMovieScenePropertyInstantiatorSystem::StaticRegisterNativesUMovieScenePropertyInstantiatorSystem
          (void)

{
  return;
}

// UpdatePropertyInfo @ 1468714c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMovieScenePropertyInstantiatorSystem::UpdatePropertyInfo
          (UMovieScenePropertyInstantiatorSystem *this,FPropertyParameters *param_1)

{
  ForElementType<unsigned_int> *pFVar1;
  ushort uVar2;
  FMovieSceneEntityID FVar3;
  TComponentTypeID<short> TVar4;
  TComponentTypeID<double> TVar5;
  FObjectPropertyInfo *pFVar6;
  code *pcVar7;
  byte bVar8;
  char cVar9;
  undefined8 uVar10;
  bool bVar11;
  uint uVar12;
  FComponentMask *pFVar13;
  TBitArray<TFixedAllocator<1>_> *pTVar14;
  int iVar15;
  ulonglong uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  int iVar20;
  uint uVar21;
  int iVar22;
  char cVar23;
  uint unaff_EDI;
  undefined1 *puVar24;
  FScriptContainerElement *pFVar25;
  undefined1 auStack_c8 [32];
  longlong local_a8;
  ulonglong local_a0;
  char local_98;
  char local_97;
  short local_96;
  int local_94;
  uint local_90;
  uint local_8c;
  int local_88;
  uint local_84;
  int local_80;
  int local_7c;
  FScriptContainerElement *local_78;
  UMovieScenePropertyInstantiatorSystem *local_70;
  undefined1 local_68 [24];
  TBitArray<TFixedAllocator<1>_> local_50;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_c8;
  local_50.MaxBits = 0x20;
  local_84 = (uint)param_1->PropertyDefinition->CompositeSize;
  local_78 = (this->BuiltInComponents->PropertyRegistry).CompositeDefinitions.AllocatorInstance.Data
             + (ulonglong)param_1->PropertyDefinition->VariableSizeCompositeOffset * 4;
  uVar2 = param_1->PropertyDefinition->CompositeSize;
  local_50.NumBits = (int)uVar2;
  uVar17 = uVar2 + 0x1f;
  uVar18 = uVar17 >> 5;
  local_70 = this;
  if (uVar17 >> 5 != 0) {
    if (1 < uVar18) {
      bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("NewMax >= 0 && NewMax <= NumInlineElements",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ContainerAllocationPolicies.h"
                          ,0x524,L"");
      if (bVar11) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      local_50.MaxBits = uVar18 << 5;
    }
    unaff_EDI = 0xffffffff;
    if (uVar18 < 9) {
      iVar15 = -1;
    }
    else {
      iVar15 = 0xff;
    }
    memset(&local_50,iVar15,(ulonglong)uVar18 << 2);
    uVar17 = local_50.NumBits & 0x8000001f;
    if ((int)uVar17 < 0) {
      uVar17 = (uVar17 - 1 | 0xffffffe0) + 1;
    }
    if (uVar17 != 0) {
      unaff_EDI = 0xffffffff >> (-(char)uVar17 & 0x1fU);
      *(uint *)(&local_50.AllocatorInstance)
               [(int)(local_50.NumBits + (local_50.NumBits >> 0x1f & 0x1fU)) >> 5].InlineData[0].Pad
           = *(uint *)(&local_50.AllocatorInstance)
                      [(int)(local_50.NumBits + (local_50.NumBits >> 0x1f & 0x1fU)) >> 5].InlineData
                      [0].Pad & unaff_EDI;
    }
  }
  local_80 = param_1->PropertyInfoIndex;
  local_90 = unaff_EDI & 0xffffff00;
  iVar15 = *(int *)&(this->Contributors).field_0x48;
  local_88 = 0;
  local_96 = 0;
  local_98 = '\x01';
  local_8c = local_8c & 0xffffff00;
  local_97 = '\0';
  uVar17 = local_90;
  if (iVar15 != 0) {
    puVar24 = *(undefined1 **)&(this->Contributors).field_0x40;
    if (puVar24 == (undefined1 *)0x0) {
      puVar24 = &(this->Contributors).field_0x38;
    }
    local_94 = *(int *)(puVar24 + ((longlong)iVar15 - 1U & (longlong)local_80) * 4);
    iVar15 = local_94;
    if (local_94 != -1) {
      do {
        local_94 = *(int *)(*(longlong *)&this->Contributors + 8 + (longlong)iVar15 * 0x10);
        if (*(int *)(*(longlong *)&this->Contributors + (longlong)iVar15 * 0x10) == local_80) break;
        iVar15 = local_94;
      } while (local_94 != -1);
    }
    if (iVar15 != -1) {
      while( true ) {
        iVar22 = local_88;
        iVar20 = local_94;
        FVar3.Value = *(ushort *)(*(longlong *)&this->Contributors + 4 + (longlong)iVar15 * 0x10);
        pFVar13 = UE::MovieScene::FEntityManager::GetEntityType
                            ((FEntityManager *)(this->_padding_ + 0x28),FVar3);
        TVar4 = this->BuiltInComponents->HierarchicalBias;
        if (((TVar4 != (TComponentTypeID<short>)0xffff) &&
            ((int)(uint)(ushort)TVar4 < (pFVar13->Bits).NumBits)) &&
           ((*(uint *)(pFVar13->Bits).AllocatorInstance.InlineData[(ushort)TVar4 >> 5].Pad >>
             ((ushort)TVar4 & 0x1f) & 1) != 0)) {
          UE::MovieScene::FEntityManager::ReadComponent<short>
                    ((FEntityManager *)(this->_padding_ + 0x28),
                     (TComponentLock<UE::MovieScene::TReadOptional<short>_> *)local_68,FVar3,
                     this->BuiltInComponents->HierarchicalBias);
          uVar10 = local_68._16_8_;
          if (((short *)local_68._16_8_ == (short *)0x0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Value",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntityManager.h"
                                  ,0x1d4,L""), bVar11)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          local_96 = *(short *)uVar10;
          if (local_68._0_8_ != 0) {
            LOCK();
            *(int *)(local_68._0_8_ + 0x30) = *(int *)(local_68._0_8_ + 0x30) + -1;
            UNLOCK();
            if (local_68._8_4_ == 1) {
              ReleaseSRWLockShared((PSRWLOCK)(local_68._0_8_ + 0x20));
            }
          }
        }
        uVar18 = local_84;
        uVar19 = 0;
        if (param_1->PropertyDefinition->CompositeSize != 0) {
          uVar21 = 1;
          pFVar25 = local_78;
          do {
            if ((((int)uVar19 < 0) || (local_50.NumBits <= (int)uVar19)) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Index>=0 && Index<NumBits",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                    ,0x5be,L""), bVar11)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            uVar17 = uVar19;
            if ((int)uVar19 < 0) {
              uVar17 = uVar19 + 0x1f;
            }
            if ((*(uint *)(&local_50.AllocatorInstance)[(int)uVar17 >> 5].InlineData[0].Pad & uVar21
                ) != 0) {
              uVar12 = 0;
              if ((int)uVar19 < (int)uVar18) {
                uVar12 = ~uVar19 >> 0x1f;
              }
              if (uVar12 == 0) {
                local_a0 = (ulonglong)(uVar18 & 0xffff);
                local_a8 = (longlong)(int)uVar19;
                bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                    ,0x14f,
                                    L"Array index out of bounds: %lld from an array of size %lld");
                if (bVar11) {
                  pcVar7 = (code *)swi(3);
                  (*pcVar7)();
                  return;
                }
              }
              uVar2 = *(ushort *)pFVar25;
              if (((uVar2 != 0xffff) && ((int)(uint)uVar2 < (pFVar13->Bits).NumBits)) &&
                 ((*(uint *)(pFVar13->Bits).AllocatorInstance.InlineData[uVar2 >> 5].Pad >>
                   (uVar2 & 0x1f) & 1) != 0)) {
                if ((((int)uVar19 < 0) || (local_50.NumBits <= (int)uVar19)) &&
                   (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Index>=0 && Index<NumBits",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                        ,0x5be,L""), bVar11)) {
                  pcVar7 = (code *)swi(3);
                  (*pcVar7)();
                  return;
                }
                *(uint *)(&local_50.AllocatorInstance)[(int)uVar17 >> 5].InlineData[0].Pad =
                     *(uint *)(&local_50.AllocatorInstance)[(int)uVar17 >> 5].InlineData[0].Pad &
                     ~uVar21;
              }
            }
            uVar19 = uVar19 + 1;
            uVar21 = uVar21 << 1 | (uint)((int)uVar21 < 0);
            pFVar25 = pFVar25 + 4;
            this = local_70;
            iVar22 = local_88;
            iVar20 = local_94;
            uVar17 = local_90;
          } while ((int)uVar19 < (int)(uint)param_1->PropertyDefinition->CompositeSize);
        }
        local_88 = iVar22 + 1;
        if ((((char)local_8c == '\0') &&
            (uVar2 = (this->BuiltInComponents->Tags).RestoreState.Value, uVar2 != 0xffff)) &&
           (((int)(uint)uVar2 < (pFVar13->Bits).NumBits &&
            (local_8c = local_8c & 0xff,
            (*(uint *)(pFVar13->Bits).AllocatorInstance.InlineData[uVar2 >> 5].Pad >> (uVar2 & 0x1f)
            & 1) != 0)))) {
          local_8c = 1;
        }
        if (((((char)uVar17 == '\0') &&
             (uVar2 = (this->BuiltInComponents->Tags).AlwaysCacheInitialValue.Value, uVar2 != 0xffff
             )) && ((int)(uint)uVar2 < (pFVar13->Bits).NumBits)) &&
           (local_90 = uVar17 & 0xff, uVar17 = local_90,
           (*(uint *)(pFVar13->Bits).AllocatorInstance.InlineData[uVar2 >> 5].Pad >> (uVar2 & 0x1f)
           & 1) != 0)) {
          local_90 = 1;
          uVar17 = local_90;
        }
        if (((local_97 == '\0') &&
            (uVar2 = (this->BuiltInComponents->Tags).BlendHierarchicalBias.Value, uVar2 != 0xffff))
           && (((int)(uint)uVar2 < (pFVar13->Bits).NumBits &&
               ((*(uint *)(pFVar13->Bits).AllocatorInstance.InlineData[uVar2 >> 5].Pad >>
                 (uVar2 & 0x1f) & 1) != 0)))) {
          local_97 = '\x01';
          local_98 = '\0';
        }
        else if (local_98 != '\0') {
          if (local_88 < 2) {
            uVar2 = (this->BuiltInComponents->Tags).RelativeBlend.Value;
            if ((((uVar2 != 0xffff) && ((int)(uint)uVar2 < (pFVar13->Bits).NumBits)) &&
                ((*(uint *)(pFVar13->Bits).AllocatorInstance.InlineData[uVar2 >> 5].Pad >>
                  (uVar2 & 0x1f) & 1) != 0)) ||
               ((((((uVar2 = (this->BuiltInComponents->Tags).AdditiveBlend.Value, uVar2 != 0xffff &&
                    ((int)(uint)uVar2 < (pFVar13->Bits).NumBits)) &&
                   ((*(uint *)(pFVar13->Bits).AllocatorInstance.InlineData[uVar2 >> 5].Pad >>
                     (uVar2 & 0x1f) & 1) != 0)) ||
                  (((uVar2 = (this->BuiltInComponents->Tags).OverrideBlend.Value, uVar2 != 0xffff &&
                    ((int)(uint)uVar2 < (pFVar13->Bits).NumBits)) &&
                   ((*(uint *)(pFVar13->Bits).AllocatorInstance.InlineData[uVar2 >> 5].Pad >>
                     (uVar2 & 0x1f) & 1) != 0)))) ||
                 (((uVar2 = (this->BuiltInComponents->Tags).AdditiveFromBaseBlend.Value,
                   uVar2 != 0xffff && ((int)(uint)uVar2 < (pFVar13->Bits).NumBits)) &&
                  ((*(uint *)(pFVar13->Bits).AllocatorInstance.InlineData[uVar2 >> 5].Pad >>
                    (uVar2 & 0x1f) & 1) != 0)))) ||
                (((TVar5 = this->BuiltInComponents->WeightAndEasingResult,
                  TVar5 != (TComponentTypeID<double>)0xffff &&
                  ((int)(uint)(ushort)TVar5 < (pFVar13->Bits).NumBits)) &&
                 ((*(uint *)(pFVar13->Bits).AllocatorInstance.InlineData[(ushort)TVar5 >> 5].Pad >>
                   ((ushort)TVar5 & 0x1f) & 1) != 0)))))) {
              local_98 = '\0';
            }
          }
          else {
            local_98 = '\0';
          }
        }
        if (iVar20 == -1) break;
        iVar15 = iVar20;
        while (local_94 = *(int *)(*(longlong *)&this->Contributors + 8 + (longlong)iVar15 * 0x10),
              *(int *)(*(longlong *)&this->Contributors + (longlong)iVar15 * 0x10) != local_80) {
          iVar15 = local_94;
          if (local_94 == -1) goto LAB_146871acb;
        }
      }
    }
  }
LAB_146871acb:
  cVar9 = local_98;
  cVar23 = (char)uVar17;
  pTVar14 = &param_1->PropertyInfo->EmptyChannels;
  if (pTVar14 != &local_50) {
    TBitArray<TFixedAllocator<1>_>::Assign<TFixedAllocator<1>_>(pTVar14,&local_50);
  }
  pFVar6 = param_1->PropertyInfo;
  uVar16 = 0;
  iVar15 = (pFVar6->EmptyChannels).NumBits;
  uVar17 = iVar15 + 0x1f;
  pTVar14 = &pFVar6->EmptyChannels;
  if (uVar17 >> 5 == 0) {
LAB_146871b40:
    iVar20 = -1;
LAB_146871b42:
    if (pFVar6->bIsPartiallyAnimated != (iVar20 != -1)) {
      iVar15 = (this->PropertyStats).ArrayNum;
      local_a0 = (ulonglong)iVar15;
      uVar17 = param_1->PropertyInfo->PropertyDefinitionIndex;
      uVar18 = 0;
      if ((int)uVar17 < iVar15) {
        uVar18 = ~uVar17 >> 0x1f;
      }
      if ((uVar18 == 0) &&
         (local_a8 = (longlong)(int)uVar17,
         bVar11 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      iVar15 = -1;
      if (iVar20 != -1) {
        iVar15 = 1;
      }
      pFVar25 = (this->PropertyStats).AllocatorInstance.Data + (longlong)(int)uVar17 * 8 + 4;
      *(int *)pFVar25 = *(int *)pFVar25 + iVar15;
      cVar23 = (char)local_90;
    }
    param_1->PropertyInfo->bIsPartiallyAnimated = iVar20 != -1;
    pFVar6 = param_1->PropertyInfo;
    bVar8 = 0;
    if (pFVar6->HBias != local_96) {
      bVar8 = 8;
    }
    pFVar6->bMaxHBiasHasChanged = bVar8 >> 3;
    param_1->PropertyInfo->HBias = local_96;
    puVar24 = &param_1->PropertyInfo->field_0x5e;
    *puVar24 = *puVar24 ^ (cVar9 * '\x02' ^ param_1->PropertyInfo->field_0x5e) & 2U;
    puVar24 = &param_1->PropertyInfo->field_0x5e;
    *puVar24 = *puVar24 ^ ((byte)local_8c ^ param_1->PropertyInfo->bWantsRestoreState) & 1;
    puVar24 = &param_1->PropertyInfo->field_0x5e;
    *puVar24 = *puVar24 ^ (cVar23 << 2 ^ param_1->PropertyInfo->field_0x5e) & 4U;
    return;
  }
LAB_146871b16:
  if (*(int *)(pTVar14->AllocatorInstance).InlineData[0].Pad == 0) goto code_r0x000146871b1b;
  pFVar1 = &(pFVar6->EmptyChannels).AllocatorInstance + uVar16;
  local_7c = 0;
  bVar11 = *(int *)pFVar1->InlineData[0].Pad != 0;
  if (bVar11) {
    for (; (*(uint *)pFVar1->InlineData[0].Pad >> local_7c & 1) == 0; local_7c = local_7c + 1) {
    }
  }
  iVar20 = 0x20;
  if (bVar11) {
    iVar20 = local_7c;
  }
  iVar20 = (int)uVar16 * 0x20 + iVar20;
  if (iVar20 < iVar15) goto LAB_146871b42;
  goto LAB_146871b40;
code_r0x000146871b1b:
  uVar18 = (int)uVar16 + 1;
  uVar16 = (ulonglong)uVar18;
  pTVar14 = (TBitArray<TFixedAllocator<1>_> *)&pTVar14->NumBits;
  if ((int)(uVar17 >> 5) <= (int)uVar18) goto LAB_146871b40;
  goto LAB_146871b16;
}

// UpgradeFloatToDoubleProperties @ 1468721f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMovieScenePropertyInstantiatorSystem::UpgradeFloatToDoubleProperties
          (UMovieScenePropertyInstantiatorSystem *this,TBitArray<FDefaultBitArrayAllocator> *param_1
          )

{
  TTypeCompatibleBytes<unsigned_int> *pTVar1;
  TTypeCompatibleBytes<unsigned_int> *pTVar2;
  ulonglong uVar3;
  int *piVar4;
  int *piVar5;
  char cVar6;
  ushort uVar7;
  FMovieSceneEntityID FVar8;
  int iVar9;
  int iVar10;
  FScriptContainerElement *pFVar11;
  ForElementType<unsigned_int> FVar12;
  undefined1 *puVar13;
  UScriptStruct *pUVar14;
  code *pcVar15;
  bool bVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  FMovieSceneTracksComponentTypes *pFVar20;
  FString *pFVar21;
  FProperty *pFVar22;
  FProperty *pFVar23;
  UScriptStruct *pUVar24;
  TBitArray<TFixedAllocator<12>_> *pTVar25;
  longlong lVar26;
  FScriptContainerElement *pFVar27;
  int iVar28;
  int iVar29;
  undefined1 *puVar30;
  ushort uVar31;
  ForElementType<unsigned_int> FVar32;
  uint uVar33;
  int iVar34;
  undefined1 auStackY_1b8 [32];
  int local_188;
  int local_170;
  uint local_16c;
  uint local_150 [2];
  TMultiMap<UMovieScenePropertyInstantiatorSystem::FContributorKey,UE::MovieScene::FMovieSceneEntityID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UMovieScenePropertyInstantiatorSystem::FContributorKey,UE::MovieScene::FMovieSceneEntityID,1>_>
  *local_148;
  uint *puStack_140;
  int local_138;
  int iStack_134;
  TMultiMap<UMovieScenePropertyInstantiatorSystem::FContributorKey,UE::MovieScene::FMovieSceneEntityID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UMovieScenePropertyInstantiatorSystem::FContributorKey,UE::MovieScene::FMovieSceneEntityID,1>_>
  *local_130;
  uint *puStack_128;
  undefined8 local_120;
  ulonglong local_118;
  int local_110;
  undefined4 local_10c;
  int local_108;
  int local_104;
  longlong local_100;
  FString local_f8;
  TBitArray<TFixedAllocator<12>_> local_e8;
  undefined1 local_a8 [72];
  undefined4 local_60;
  ForAnyElementType local_58;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  pFVar20 = UE::MovieScene::FMovieSceneTracksComponentTypes::Get();
  iVar9 = (this->BuiltInComponents->PropertyRegistry).Properties.ArrayNum;
  pFVar11 = (this->BuiltInComponents->PropertyRegistry).Properties.AllocatorInstance.Data;
  if ((iVar9 < 0) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L""), bVar16)) {
    pcVar15 = (code *)swi(3);
    (*pcVar15)();
    return;
  }
  iVar34 = 0;
  iVar28 = 0;
  iVar29 = param_1->NumBits;
  if (iVar29 != 0) {
    FVar12 = (param_1->AllocatorInstance).SecondaryData;
    FVar32 = (ForElementType<unsigned_int>)param_1;
    if (FVar12 != (ForElementType<unsigned_int>)0x0) {
      FVar32 = FVar12;
    }
    uVar33 = *(uint *)FVar32;
    while (uVar33 == 0) {
      iVar28 = iVar28 + 0x20;
      lVar26 = (longlong)iVar34;
      iVar34 = iVar34 + 1;
      if ((int)(iVar29 + -1 + (iVar29 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar34) {
        return;
      }
      uVar33 = *(uint *)((uchar *)((longlong)FVar32 + 4) + lVar26 * 4);
    }
    local_118 = (ulonglong)(-uVar33 & uVar33);
    uVar3 = (ulonglong)(-uVar33 & uVar33) * 2 + 1;
    lVar26 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar26 == 0; lVar26 = lVar26 + -1) {
      }
    }
    local_110 = (int)lVar26;
    uVar33 = local_110 + -1 + iVar28;
    if ((int)uVar33 < iVar29) {
      local_16c = 0xffffffff;
      local_188 = iVar28;
      local_170 = iVar34;
      do {
        if ((-1 < (int)uVar33) && ((int)uVar33 < *(int *)&(this->ResolvedProperties).field_0x28)) {
          if ((*(int *)&(this->ResolvedProperties).field_0x28 <= (int)uVar33) &&
             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Index>=0 && Index<NumBits",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                  ,0x5c6,L""), bVar16)) {
            pcVar15 = (code *)swi(3);
            (*pcVar15)();
            return;
          }
          puVar13 = *(undefined1 **)&(this->ResolvedProperties).field_0x20;
          puVar30 = &(this->ResolvedProperties).field_0x10;
          if (puVar13 != (undefined1 *)0x0) {
            puVar30 = puVar13;
          }
          uVar17 = uVar33;
          if ((int)uVar33 < 0) {
            uVar17 = uVar33 + 0x1f;
          }
          iVar28 = local_188;
          if ((*(uint *)(puVar30 + (longlong)((int)uVar17 >> 5) * 4) >> (uVar33 & 0x1f) & 1) != 0) {
            lVar26 = (longlong)(int)uVar33 * 0x60 + *(longlong *)&this->ResolvedProperties;
            cVar6 = *(char *)(lVar26 + 0x58);
            local_100 = lVar26;
            if (cVar6 == '\0') {
              uVar17 = *(uint *)(lVar26 + 0x50);
              piVar4 = (int *)(lVar26 + 0x50);
              uVar18 = 0;
              if ((int)uVar17 < iVar9) {
                uVar18 = ~uVar17 >> 0x1f;
              }
              if ((uVar18 == 0) &&
                 (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                      ,0x14f,
                                      L"Array index out of bounds: %lld from an array of size %lld")
                 , bVar16)) {
                pcVar15 = (code *)swi(3);
                (*pcVar15)();
                return;
              }
              if ((*(ushort *)(pFVar11 + (longlong)(int)uVar17 * 0x70 + 0x28) ==
                   (pFVar20->Float).PropertyTag.Value) ||
                 (*(ushort *)(pFVar11 + (longlong)(int)uVar17 * 0x70 + 0x28) ==
                  (pFVar20->FloatVector).PropertyTag.Value)) {
                pFVar21 = ::FName::ToString((FName *)(lVar26 + 0x30),&local_f8);
                FTrackInstancePropertyBindings::FTrackInstancePropertyBindings
                          ((FTrackInstancePropertyBindings *)local_a8,*(FName *)(lVar26 + 0x28),
                           pFVar21);
                if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_f8.Data.AllocatorInstance.Data);
                }
                pFVar22 = FTrackInstancePropertyBindings::GetProperty
                                    ((FTrackInstancePropertyBindings *)local_a8,
                                     *(UObject **)(lVar26 + 0x20));
                if (pFVar22 != (FProperty *)0x0) {
                  piVar5 = (int *)(lVar26 + 0x54);
                  if (&local_108 != piVar5) {
                    *piVar5 = -1;
                    *(undefined1 *)(lVar26 + 0x58) = 1;
                  }
                  if (*(ushort *)(pFVar11 + (longlong)(int)uVar17 * 0x70 + 0x28) ==
                      (pFVar20->Float).PropertyTag.Value) {
                    if ((*(ulonglong *)(pFVar22->_padding_ + 0x18) & 0x100000000) != 0) {
                      if (pFVar11 != pFVar11 + (longlong)iVar9 * 0x70) {
                        pFVar27 = pFVar11;
                        do {
                          if (*(ushort *)(pFVar27 + 0x28) == (pFVar20->Double).PropertyTag.Value) {
                            iVar29 = (int)(((longlong)pFVar27 - (longlong)pFVar11) / 0x70);
                            if (iVar29 != -1) goto LAB_146872576;
                            goto LAB_146872549;
                          }
                          pFVar27 = pFVar27 + 0x70;
                        } while (pFVar27 != pFVar11 + (longlong)iVar9 * 0x70);
                      }
                      iVar29 = -1;
LAB_146872549:
                      bVar16 = UE::Assert::Private::ExecCheckImplInternal
                                         (&bGEnsureHasExecuted<6422358202226049467>,false,
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieSceneTracks\\Private\\Systems\\MovieScenePropertyInstantiator.cpp"
                                          ,0x1bb,"DoublePropertyDefinitionIndex != INDEX_NONE");
                      if (bVar16) {
                        pcVar15 = (code *)swi(3);
                        (*pcVar15)();
                        return;
                      }
LAB_146872576:
                      if (piVar4 != piVar5) {
                        *piVar5 = *piVar4;
                        *(undefined1 *)(lVar26 + 0x58) = 1;
                      }
                      *piVar4 = iVar29;
                    }
                  }
                  else if (*(ushort *)(pFVar11 + (longlong)(int)uVar17 * 0x70 + 0x28) ==
                           (pFVar20->FloatVector).PropertyTag.Value) {
                    pFVar23 = (FProperty *)0x0;
                    if ((*(uint *)(pFVar22->_padding_ + 0x18) >> 0x14 & 1) != 0) {
                      pFVar23 = pFVar22;
                    }
                    pUVar14 = (UScriptStruct *)pFVar23[1]._padding_;
                    pUVar24 = TBaseStructure<UE::Math::TVector2<double>_>::Get();
                    if ((((pUVar14 == pUVar24) ||
                         (pUVar24 = TBaseStructure<UE::Math::TVector<double>_>::Get(),
                         pUVar14 == pUVar24)) ||
                        (pUVar24 = TVariantStructure<UE::Math::TVector<double>_>::Get(),
                        pUVar14 == pUVar24)) ||
                       ((pUVar24 = TBaseStructure<UE::Math::TVector4<double>_>::Get(),
                        pUVar14 == pUVar24 ||
                        (pUVar24 = TVariantStructure<UE::Math::TVector4<double>_>::Get(),
                        pUVar14 == pUVar24)))) {
                      if (pFVar11 != pFVar11 + (longlong)iVar9 * 0x70) {
                        pFVar27 = pFVar11;
                        do {
                          if (*(ushort *)(pFVar27 + 0x28) ==
                              (pFVar20->DoubleVector).PropertyTag.Value) {
                            iVar29 = (int)(((longlong)pFVar27 - (longlong)pFVar11) / 0x70);
                            if (iVar29 != -1) goto LAB_146872673;
                            goto LAB_146872646;
                          }
                          pFVar27 = pFVar27 + 0x70;
                        } while (pFVar27 != pFVar11 + (longlong)iVar9 * 0x70);
                      }
                      iVar29 = -1;
LAB_146872646:
                      bVar16 = UE::Assert::Private::ExecCheckImplInternal
                                         (&bGEnsureHasExecuted<6422358202226049490>,false,
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieSceneTracks\\Private\\Systems\\MovieScenePropertyInstantiator.cpp"
                                          ,0x1d2,"DoublePropertyDefinitionIndex != INDEX_NONE");
                      if (bVar16) {
                        pcVar15 = (code *)swi(3);
                        (*pcVar15)();
                        return;
                      }
LAB_146872673:
                      if ((undefined4 *)(lVar26 + 0x50) != (undefined4 *)(lVar26 + 0x54)) {
                        *(undefined4 *)(lVar26 + 0x54) = *(undefined4 *)(lVar26 + 0x50);
                        *(undefined1 *)(lVar26 + 0x58) = 1;
                      }
                      *(int *)(lVar26 + 0x50) = iVar29;
                    }
                  }
                  else {
                    bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                       ("false",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieSceneTracks\\Private\\Systems\\MovieScenePropertyInstantiator.cpp"
                                        ,0x1d9,L"");
                    if (bVar16) {
                      pcVar15 = (code *)swi(3);
                      (*pcVar15)();
                      return;
                    }
                  }
                  if (local_58.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_58.Data);
                  }
                  local_60 = 0;
                  if ((void *)local_a8._64_8_ != (void *)0x0) {
                    FMemory::Free((void *)local_a8._64_8_);
                  }
                  TSparseArray<TSparseSetElement<TTuple<FObjectKey,FTrackInstancePropertyBindings::FResolvedPropertyAndFunction>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  ::
                  ~TSparseArray<TSparseSetElement<TTuple<FObjectKey,FTrackInstancePropertyBindings::FResolvedPropertyAndFunction>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                            ((TSparseArray<TSparseSetElement<TTuple<FObjectKey,FTrackInstancePropertyBindings::FResolvedPropertyAndFunction>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                              *)local_a8);
                  goto LAB_146872715;
                }
                if (local_58.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_58.Data);
                }
                local_60 = 0;
                if ((void *)local_a8._64_8_ != (void *)0x0) {
                  FMemory::Free((void *)local_a8._64_8_);
                }
                TSparseArray<TSparseSetElement<TTuple<FObjectKey,FTrackInstancePropertyBindings::FResolvedPropertyAndFunction>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ::
                ~TSparseArray<TSparseSetElement<TTuple<FObjectKey,FTrackInstancePropertyBindings::FResolvedPropertyAndFunction>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                          ((TSparseArray<TSparseSetElement<TTuple<FObjectKey,FTrackInstancePropertyBindings::FResolvedPropertyAndFunction>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                            *)local_a8);
              }
              else if (&local_10c != (undefined4 *)(lVar26 + 0x54)) {
                *(undefined4 *)(lVar26 + 0x54) = 0xffffffff;
                *(undefined1 *)(lVar26 + 0x58) = 1;
              }
            }
            else {
LAB_146872715:
              if ((*(char *)(lVar26 + 0x58) != '\0') &&
                 (uVar17 = *(uint *)(lVar26 + 0x54), uVar17 != 0xffffffff)) {
                uVar18 = *(uint *)(lVar26 + 0x50);
                uVar19 = 0;
                if ((int)uVar18 < iVar9) {
                  uVar19 = ~uVar18 >> 0x1f;
                }
                if ((uVar19 == 0) &&
                   (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                        ,0x14f,
                                        L"Array index out of bounds: %lld from an array of size %lld"
                                       ), bVar16)) {
                  pcVar15 = (code *)swi(3);
                  (*pcVar15)();
                  return;
                }
                uVar7 = (pFVar20->Double).PropertyTag.Value;
                if (*(ushort *)(pFVar11 + (longlong)(int)uVar18 * 0x70 + 0x28) == uVar7) {
                  uVar31 = (pFVar20->Float).PropertyTag.Value;
LAB_1468727b8:
                  if ((uVar31 != 0xffff) && (uVar7 != 0xffff)) {
                    local_148 = &this->NewContributors;
                    iVar29 = *(int *)&(this->NewContributors).field_0x48;
                    puStack_140 = local_150;
                    local_138 = -1;
                    if (iVar29 == 0) {
                      iStack_134 = -1;
                    }
                    else {
                      puVar13 = *(undefined1 **)&(this->NewContributors).field_0x40;
                      puVar30 = &(this->NewContributors).field_0x38;
                      if (puVar13 != (undefined1 *)0x0) {
                        puVar30 = puVar13;
                      }
                      iStack_134 = *(int *)(puVar30 +
                                           ((longlong)iVar29 - 1U & (longlong)(int)uVar33) * 4);
                      local_138 = iStack_134;
                      if (iStack_134 != -1) {
                        do {
                          iStack_134 = *(int *)(*(longlong *)local_148 + 8 +
                                               (longlong)local_138 * 0x10);
                          if (*(uint *)(*(longlong *)local_148 + (longlong)local_138 * 0x10) ==
                              uVar33) break;
                          local_138 = iStack_134;
                        } while (iStack_134 != -1);
                      }
                    }
                    local_120 = CONCAT44(iStack_134,local_138);
                    local_150[0] = uVar33;
                    local_130 = local_148;
                    puStack_128 = puStack_140;
                    if (local_138 != -1) {
                      pTVar1 = local_e8.AllocatorInstance.InlineData + (uVar7 >> 5);
                      iVar29 = local_138;
                      do {
                        FVar8.Value = *(ushort *)
                                       (*(longlong *)local_130 + 4 + (longlong)iVar29 * 0x10);
                        pTVar25 = &UE::MovieScene::FEntityManager::GetEntityType
                                             ((FEntityManager *)(this->_padding_ + 0x28),FVar8)->
                                   Bits;
                        local_e8.NumBits = 0;
                        local_e8.MaxBits = 0;
                        TBitArray<TFixedAllocator<12>_>::Assign<TFixedAllocator<12>_>
                                  (&local_e8,pTVar25);
                        if ((int)(uint)uVar31 < local_e8.NumBits) {
                          pTVar2 = local_e8.AllocatorInstance.InlineData + (uVar31 >> 5);
                          *(uint *)pTVar2->Pad =
                               *(uint *)pTVar2->Pad & ~(1 << ((byte)uVar31 & 0x1f));
                        }
                        iVar34 = ((uint)uVar7 - local_e8.NumBits) + 1;
                        iVar29 = local_e8.NumBits;
                        if (0 < iVar34) {
                          TBitArray<TFixedAllocator<12>_>::Add(&local_e8,false,iVar34);
                          iVar29 = local_e8.NumBits;
                        }
                        if ((iVar29 <= (int)(uint)uVar7) &&
                           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                               ("Index>=0 && Index<NumBits",
                                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                                ,0x5be,L""), bVar16)) {
                          pcVar15 = (code *)swi(3);
                          (*pcVar15)();
                          return;
                        }
                        *(uint *)pTVar1->Pad = *(uint *)pTVar1->Pad | 1 << ((byte)uVar7 & 0x1f);
                        UE::MovieScene::FEntityManager::ChangeEntityType
                                  ((FEntityManager *)(this->_padding_ + 0x28),FVar8,
                                   (FComponentMask *)&local_e8);
                        local_120 = CONCAT44(local_120._4_4_,local_120._4_4_);
                        lVar26 = local_100;
                        iVar34 = local_170;
                        if (local_120._4_4_ == -1) break;
                        do {
                          iVar10 = *(int *)(*(longlong *)local_130 + 8 +
                                           (longlong)local_120._4_4_ * 0x10);
                          iVar29 = local_120._4_4_;
                          if (*(uint *)(*(longlong *)local_130 + (longlong)local_120._4_4_ * 0x10)
                              == *puStack_128) break;
                          iVar29 = iVar10;
                          local_120._4_4_ = iVar10;
                        } while (iVar10 != -1);
                        local_120 = CONCAT44(iVar10,iVar29);
                      } while (iVar29 != -1);
                    }
                    if (cVar6 == '\0') {
                      uVar33 = 0;
                      if ((int)uVar17 < (this->PropertyStats).ArrayNum) {
                        uVar33 = ~uVar17 >> 0x1f;
                      }
                      if ((uVar33 == 0) &&
                         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Index >= 0) & (Index < ArrayNum)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x447,
                                              L"Array index out of bounds: %lld into an array of size %lld"
                                             ), bVar16)) {
                        pcVar15 = (code *)swi(3);
                        (*pcVar15)();
                        return;
                      }
                      pFVar27 = (this->PropertyStats).AllocatorInstance.Data +
                                (longlong)(int)uVar17 * 8;
                      *(int *)pFVar27 = *(int *)pFVar27 + -1;
                      uVar33 = *(uint *)(lVar26 + 0x50);
                      uVar17 = 0;
                      if ((int)uVar33 < (this->PropertyStats).ArrayNum) {
                        uVar17 = ~uVar33 >> 0x1f;
                      }
                      if ((uVar17 == 0) &&
                         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Index >= 0) & (Index < ArrayNum)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x447,
                                              L"Array index out of bounds: %lld into an array of size %lld"
                                             ), bVar16)) {
                        pcVar15 = (code *)swi(3);
                        (*pcVar15)();
                        return;
                      }
                      pFVar27 = (this->PropertyStats).AllocatorInstance.Data +
                                (longlong)(int)uVar33 * 8;
                      *(int *)pFVar27 = *(int *)pFVar27 + 1;
                    }
                    goto LAB_146872aa7;
                  }
                }
                else {
                  uVar7 = (pFVar20->DoubleVector).PropertyTag.Value;
                  if (*(ushort *)(pFVar11 + (longlong)(int)uVar18 * 0x70 + 0x28) == uVar7) {
                    uVar31 = (pFVar20->FloatVector).PropertyTag.Value;
                    goto LAB_1468727b8;
                  }
                }
                bVar16 = UE::Assert::Private::ExecCheckImplInternal
                                   (&bGEnsureHasExecuted<6422358202226049522>,false,
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieSceneTracks\\Private\\Systems\\MovieScenePropertyInstantiator.cpp"
                                    ,0x1f2,"OldPropertyTag && NewPropertyTag");
                if (bVar16) {
                  pcVar15 = (code *)swi(3);
                  (*pcVar15)();
                  return;
                }
              }
            }
          }
        }
LAB_146872aa7:
        FVar12 = (param_1->AllocatorInstance).SecondaryData;
        uVar17 = param_1->NumBits;
        local_16c = ~(uint)local_118 & local_16c;
        FVar32 = (ForElementType<unsigned_int>)param_1;
        if (FVar12 != (ForElementType<unsigned_int>)0x0) {
          FVar32 = FVar12;
        }
        uVar33 = local_16c & *(uint *)((longlong)FVar32 + (longlong)iVar34 * 4);
        while (uVar33 == 0) {
          iVar28 = iVar28 + 0x20;
          lVar26 = (longlong)iVar34;
          iVar34 = iVar34 + 1;
          uVar33 = uVar17;
          local_188 = iVar28;
          local_170 = iVar34;
          if ((int)((uVar17 - 1) + ((int)(uVar17 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar34)
          goto LAB_146872b32;
          uVar33 = *(uint *)((uchar *)((longlong)FVar32 + 4) + lVar26 * 4);
          local_16c = 0xffffffff;
        }
        local_118 = CONCAT44(local_118._4_4_,-uVar33 & uVar33);
        uVar3 = (ulonglong)(-uVar33 & uVar33) * 2 + 1;
        lVar26 = 0x3f;
        if (uVar3 != 0) {
          for (; uVar3 >> lVar26 == 0; lVar26 = lVar26 + -1) {
          }
        }
        local_104 = (int)lVar26;
        uVar33 = local_104 + -1 + iVar28;
        if ((int)uVar17 < (int)uVar33) {
          uVar33 = uVar17;
        }
LAB_146872b32:
      } while ((int)uVar33 < param_1->NumBits);
    }
  }
  return;
}

// operator() @ 1504f4b10

bool __thiscall
`UMovieScenePropertyInstantiatorSystem::OnCleanTaggedGarbage'::__l29::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<6422358202226049251>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<6422358202226049251>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504f4d10

bool __thiscall
`UMovieScenePropertyInstantiatorSystem::SetupBlenderSystem'::__l15::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  FName local_res10;
  FName local_res18 [2];
  FString local_38;
  FString local_28;
  
  bVar3 = false;
  bVar2 = false;
  local_res10 = (FName)((ulonglong)local_res10 & 0xffffffff00000000);
  bVar4 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<6422358202226049877>);
  if (bVar4) {
    local_res10 = *(FName *)(**(longlong **)((longlong)this + 8) + 0x18);
    ::FName::ToString(&local_res10,&local_28);
    local_res18[0] = *(FName *)(**(longlong **)this + 0x18);
    ::FName::ToString(local_res18,&local_38);
    bVar3 = true;
    bVar2 = true;
    bVar4 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<6422358202226049877>,&::ENSURE_Static);
    if (bVar4) {
      bVar4 = true;
      goto LAB_1504f4dcf;
    }
  }
  bVar4 = false;
LAB_1504f4dcf:
  if ((bVar2) && (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if ((bVar3) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (bVar4) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  return false;
}

// operator() @ 1504f4e20

bool __thiscall
`UMovieScenePropertyInstantiatorSystem::SetupBlenderSystem'::__l2::<lambda_2>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FName local_res10 [3];
  FString local_18;
  
  bVar4 = false;
  local_res10[0] = (FName)((ulonglong)local_res10[0] & 0xffffffff00000000);
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<6422358202226049893>);
  if (bVar2) {
    local_res10[0] = *(FName *)(**(longlong **)this + 0x18);
    ::FName::ToString(local_res10,&local_18);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<6422358202226049893>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_1504f4e98;
    }
  }
  bVar2 = false;
LAB_1504f4e98:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

