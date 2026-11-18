// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 59

// StaticClass @ 146067570

UClass * __cdecl UMovieSceneCompiledDataManager::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneCompiledDataManager.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieScene",L"MovieSceneCompiledDataManager",
               &Z_Registration_Info_UClass_UMovieSceneCompiledDataManager.InnerSingleton,
               StaticRegisterNativesUMovieSceneCompiledDataManager,0x230,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneCompiledDataManager>,
               InternalVTableHelperCtorCaller<UMovieSceneCompiledDataManager>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneCompiledDataManager.InnerSingleton;
}

// UMovieSceneCompiledDataManager @ 146094f60

UMovieSceneCompiledDataManager * __thiscall
UMovieSceneCompiledDataManager::UMovieSceneCompiledDataManager
          (UMovieSceneCompiledDataManager *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UMovieSceneCompiledDataManager__6B_;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->AsyncLoadCriticalSection,4000);
  *(undefined8 *)&this->SequenceToDataIDs = 0;
  *(undefined8 *)&(this->SequenceToDataIDs).field_0x8 = 0;
  *(undefined8 *)&(this->SequenceToDataIDs).field_0x20 = 0;
  *(undefined4 *)&(this->SequenceToDataIDs).field_0x28 = 0;
  *(undefined4 *)&(this->SequenceToDataIDs).field_0x2c = 0x80;
  *(undefined4 *)&(this->SequenceToDataIDs).field_0x34 = 0;
  *(undefined4 *)&(this->SequenceToDataIDs).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->SequenceToDataIDs).field_0x40 = 0;
  *(undefined4 *)&(this->SequenceToDataIDs).field_0x48 = 0;
  *(undefined8 *)&this->CompiledDataEntries = 0;
  *(undefined8 *)&(this->CompiledDataEntries).field_0x8 = 0;
  *(undefined8 *)&(this->CompiledDataEntries).field_0x20 = 0;
  *(undefined4 *)&(this->CompiledDataEntries).field_0x28 = 0;
  *(undefined4 *)&(this->CompiledDataEntries).field_0x2c = 0x80;
  *(undefined4 *)&(this->CompiledDataEntries).field_0x34 = 0;
  *(undefined4 *)&(this->CompiledDataEntries).field_0x30 = 0xffffffff;
  *(undefined8 *)&this->Hierarchies = 0;
  *(undefined8 *)&(this->Hierarchies).field_0x8 = 0;
  *(undefined8 *)&(this->Hierarchies).field_0x20 = 0;
  *(undefined4 *)&(this->Hierarchies).field_0x28 = 0;
  *(undefined4 *)&(this->Hierarchies).field_0x2c = 0x80;
  *(undefined4 *)&(this->Hierarchies).field_0x34 = 0;
  *(undefined4 *)&(this->Hierarchies).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->Hierarchies).field_0x40 = 0;
  *(undefined4 *)&(this->Hierarchies).field_0x48 = 0;
  *(undefined8 *)&this->TrackTemplates = 0;
  *(undefined8 *)&(this->TrackTemplates).field_0x8 = 0;
  *(undefined8 *)&(this->TrackTemplates).field_0x20 = 0;
  *(undefined4 *)&(this->TrackTemplates).field_0x28 = 0;
  *(undefined4 *)&(this->TrackTemplates).field_0x2c = 0x80;
  *(undefined4 *)&(this->TrackTemplates).field_0x34 = 0;
  *(undefined4 *)&(this->TrackTemplates).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->TrackTemplates).field_0x40 = 0;
  *(undefined4 *)&(this->TrackTemplates).field_0x48 = 0;
  *(undefined8 *)&this->TrackTemplateFields = 0;
  *(undefined8 *)&(this->TrackTemplateFields).field_0x8 = 0;
  *(undefined8 *)&(this->TrackTemplateFields).field_0x20 = 0;
  *(undefined4 *)&(this->TrackTemplateFields).field_0x28 = 0;
  *(undefined4 *)&(this->TrackTemplateFields).field_0x2c = 0x80;
  *(undefined4 *)&(this->TrackTemplateFields).field_0x34 = 0;
  *(undefined4 *)&(this->TrackTemplateFields).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->TrackTemplateFields).field_0x40 = 0;
  *(undefined4 *)&(this->TrackTemplateFields).field_0x48 = 0;
  *(undefined8 *)&this->EntityComponentFields = 0;
  *(undefined8 *)&(this->EntityComponentFields).field_0x8 = 0;
  *(undefined8 *)&(this->EntityComponentFields).field_0x20 = 0;
  *(undefined4 *)&(this->EntityComponentFields).field_0x28 = 0;
  *(undefined4 *)&(this->EntityComponentFields).field_0x2c = 0x80;
  *(undefined4 *)&(this->EntityComponentFields).field_0x34 = 0;
  *(undefined4 *)&(this->EntityComponentFields).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->EntityComponentFields).field_0x40 = 0;
  *(undefined4 *)&(this->EntityComponentFields).field_0x48 = 0;
  (this->CompilerVersion).A = 0;
  (this->CompilerVersion).B = 0;
  (this->CompilerVersion).C = 0;
  (this->CompilerVersion).D = 0;
  return this;
}

// UMovieSceneCompiledDataManager @ 146095120

UMovieSceneCompiledDataManager * __thiscall
UMovieSceneCompiledDataManager::UMovieSceneCompiledDataManager(UMovieSceneCompiledDataManager *this)

{
  FGuid *pFVar1;
  code *pcVar2;
  IConsoleManager *pIVar3;
  bool bVar4;
  UMovieSceneCompiledDataManager *pUVar5;
  undefined8 *puVar6;
  ulong64 uVar7;
  undefined1 local_res8;
  UMovieSceneCompiledDataManager *local_res18;
  UMovieSceneCompiledDataManager *local_res20;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_a8;
  FDelegateAllocation local_a0;
  UMovieSceneCompiledDataManager *local_90;
  FDestructionSentinel local_88;
  FDestructionSentinel local_70;
  FDelegateAllocation *local_58;
  undefined1 local_50 [8];
  undefined1 local_48 [16];
  
  UObject::UObject((UObject *)this);
  this->_padding_ = (longlong)&___7UMovieSceneCompiledDataManager__6B_;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->AsyncLoadCriticalSection,4000);
  pFVar1 = &this->CompilerVersion;
  *(undefined8 *)&this->SequenceToDataIDs = 0;
  *(undefined8 *)&(this->SequenceToDataIDs).field_0x8 = 0;
  *(undefined8 *)&(this->SequenceToDataIDs).field_0x20 = 0;
  *(undefined4 *)&(this->SequenceToDataIDs).field_0x28 = 0;
  *(undefined4 *)&(this->SequenceToDataIDs).field_0x2c = 0x80;
  *(undefined4 *)&(this->SequenceToDataIDs).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->SequenceToDataIDs).field_0x34 = 0;
  *(undefined8 *)&(this->SequenceToDataIDs).field_0x40 = 0;
  *(undefined4 *)&(this->SequenceToDataIDs).field_0x48 = 0;
  *(undefined8 *)&this->CompiledDataEntries = 0;
  *(undefined8 *)&(this->CompiledDataEntries).field_0x8 = 0;
  *(undefined8 *)&(this->CompiledDataEntries).field_0x20 = 0;
  *(undefined4 *)&(this->CompiledDataEntries).field_0x28 = 0;
  *(undefined4 *)&(this->CompiledDataEntries).field_0x2c = 0x80;
  *(undefined4 *)&(this->CompiledDataEntries).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->CompiledDataEntries).field_0x34 = 0;
  *(undefined8 *)&this->Hierarchies = 0;
  *(undefined8 *)&(this->Hierarchies).field_0x8 = 0;
  *(undefined8 *)&(this->Hierarchies).field_0x20 = 0;
  *(undefined4 *)&(this->Hierarchies).field_0x28 = 0;
  *(undefined4 *)&(this->Hierarchies).field_0x2c = 0x80;
  *(undefined4 *)&(this->Hierarchies).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Hierarchies).field_0x34 = 0;
  *(undefined8 *)&(this->Hierarchies).field_0x40 = 0;
  *(undefined4 *)&(this->Hierarchies).field_0x48 = 0;
  *(undefined8 *)&this->TrackTemplates = 0;
  *(undefined8 *)&(this->TrackTemplates).field_0x8 = 0;
  *(undefined8 *)&(this->TrackTemplates).field_0x20 = 0;
  *(undefined4 *)&(this->TrackTemplates).field_0x28 = 0;
  *(undefined4 *)&(this->TrackTemplates).field_0x2c = 0x80;
  *(undefined4 *)&(this->TrackTemplates).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->TrackTemplates).field_0x34 = 0;
  *(undefined8 *)&(this->TrackTemplates).field_0x40 = 0;
  *(undefined4 *)&(this->TrackTemplates).field_0x48 = 0;
  *(undefined8 *)&this->TrackTemplateFields = 0;
  *(undefined8 *)&(this->TrackTemplateFields).field_0x8 = 0;
  *(undefined8 *)&(this->TrackTemplateFields).field_0x20 = 0;
  *(undefined4 *)&(this->TrackTemplateFields).field_0x28 = 0;
  *(undefined4 *)&(this->TrackTemplateFields).field_0x2c = 0x80;
  *(undefined4 *)&(this->TrackTemplateFields).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->TrackTemplateFields).field_0x34 = 0;
  *(undefined8 *)&(this->TrackTemplateFields).field_0x40 = 0;
  *(undefined4 *)&(this->TrackTemplateFields).field_0x48 = 0;
  *(undefined8 *)&this->EntityComponentFields = 0;
  *(undefined8 *)&(this->EntityComponentFields).field_0x8 = 0;
  *(undefined8 *)&(this->EntityComponentFields).field_0x20 = 0;
  *(undefined4 *)&(this->EntityComponentFields).field_0x28 = 0;
  *(undefined4 *)&(this->EntityComponentFields).field_0x2c = 0x80;
  *(undefined4 *)&(this->EntityComponentFields).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->EntityComponentFields).field_0x34 = 0;
  *(undefined8 *)&(this->EntityComponentFields).field_0x40 = 0;
  *(undefined4 *)&(this->EntityComponentFields).field_0x48 = 0;
  pFVar1->A = 0;
  pFVar1->B = 0;
  (this->CompilerVersion).C = 0;
  (this->CompilerVersion).D = 0;
  bVar4 = FGuid::Parse(&GMovieSceneCompilerVersion,pFVar1);
  if (!bVar4) {
    local_res8 = 0;
    `UMovieSceneCompiledDataManager::UMovieSceneCompiledDataManager'::__l2::<lambda_1>::operator()
              (&stack0x00000008);
  }
  if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
    IConsoleManager::SetupSingleton();
    if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Singleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x4fb,L"");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        pUVar5 = (UMovieSceneCompiledDataManager *)(*pcVar2)();
        return pUVar5;
      }
    }
  }
  pIVar3 = IConsoleManager::Singleton;
  local_a8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_a0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_a0.DelegateSize = 0;
  pcVar2 = *(code **)((longlong)*IConsoleManager::Singleton + 0x60);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_a8,(FWriteAccessScope *)&local_70);
  local_58 = &local_a0;
  puVar6 = UE::Core::Private::DelegateAllocate(0x28,&local_a0);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar7 = FDelegateHandle::GenerateNewID();
    puVar6[2] = uVar7;
    *puVar6 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUMovieSceneCompiledDataManager____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar6[3] = 0;
    local_res18 = this;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar6 + 3),(FObjectPtr)&local_res18);
    puVar6[4] = ConsoleVariableSink;
  }
  if (local_70.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_70.Accessor,&local_70);
  }
  (*pcVar2)(pIVar3,local_50);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_a8,(FWriteAccessScope *)&local_88);
  if ((local_a0.DelegateSize != 0) &&
     (local_a0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_a0.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_a0,0,0,0x10);
    local_a0.DelegateSize = 0;
  }
  if (local_88.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_88.Accessor,&local_88);
  }
  if (local_a0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_a0.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_a8.AccessDetector);
  this->ReallocationVersion = 0;
  this->NetworkMask = All;
  if ((this->_padding_ & 0x10) == 0) {
    local_res20 = this;
    TMulticastDelegateRegistration<void___cdecl(enum_EPackageReloadPhase,FPackageReloadedEvent_*),FDefaultDelegateUserPolicy>
    ::
    AddWeakLambda<UMovieSceneCompiledDataManager,_UMovieSceneCompiledDataManager::UMovieSceneCompiledDataManager_::__l2::<lambda_2>_&>
              (&FCoreUObjectDelegates::OnPackageReloaded,(UMovieSceneCompiledDataManager *)local_48,
               (<lambda_2> *)this);
    local_90 = this;
    TSet<UMovieSceneCompiledDataManager_*,DefaultKeyFuncs<UMovieSceneCompiledDataManager_*,0>,FDefaultSetAllocator>
    ::Emplace<UMovieSceneCompiledDataManager_*>
              (&ActiveManagers,(UMovieSceneCompiledDataManager **)&stack0x00000010,(bool *)&local_90
              );
  }
  return this;
}

// ~UMovieSceneCompiledDataManager @ 1460983b0

void __thiscall
UMovieSceneCompiledDataManager::~UMovieSceneCompiledDataManager
          (UMovieSceneCompiledDataManager *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UMovieSceneCompiledDataManager__6B_;
  *(undefined4 *)&(this->EntityComponentFields).field_0x48 = 0;
  pvVar1 = *(void **)&(this->EntityComponentFields).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<int,FMovieSceneEntityComponentField>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,FMovieSceneEntityComponentField>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,FMovieSceneEntityComponentField>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->EntityComponentFields);
  *(undefined4 *)&(this->TrackTemplateFields).field_0x48 = 0;
  pvVar1 = *(void **)&(this->TrackTemplateFields).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<int,FMovieSceneEvaluationField>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,FMovieSceneEvaluationField>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,FMovieSceneEvaluationField>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->TrackTemplateFields);
  *(undefined4 *)&(this->TrackTemplates).field_0x48 = 0;
  pvVar1 = *(void **)&(this->TrackTemplates).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<int,FMovieSceneEvaluationTemplate>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,FMovieSceneEvaluationTemplate>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,FMovieSceneEvaluationTemplate>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->TrackTemplates);
  *(undefined4 *)&(this->Hierarchies).field_0x48 = 0;
  pvVar1 = *(void **)&(this->Hierarchies).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<int,FMovieSceneSequenceHierarchy>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,FMovieSceneSequenceHierarchy>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,FMovieSceneSequenceHierarchy>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->Hierarchies);
  TSparseArray<FMovieSceneCompiledDataEntry,FDefaultSparseArrayAllocator>::
  ~TSparseArray<FMovieSceneCompiledDataEntry,FDefaultSparseArrayAllocator>
            (&this->CompiledDataEntries);
  *(undefined4 *)&(this->SequenceToDataIDs).field_0x48 = 0;
  pvVar1 = *(void **)&(this->SequenceToDataIDs).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FObjectKey,FMovieSceneCompiledDataID>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FObjectKey,FMovieSceneCompiledDataID>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FObjectKey,FMovieSceneCompiledDataID>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->SequenceToDataIDs);
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->AsyncLoadCriticalSection);
  UObject::~UObject((UObject *)this);
  return;
}

// operator() @ 14609c170

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

bool __thiscall
`UMovieSceneCompiledDataManager::PopulateSubSequenceTree'::__l22::<lambda_1>::operator()
          (void *this,TRange<FFrameTime> *param_1)

{
  int iVar1;
  FMovieSceneSequenceHierarchy *pFVar2;
  FSubSequencePath *pFVar3;
  code *pcVar4;
  uint uVar5;
  bool bVar6;
  undefined1 uVar7;
  FFrameNumber *pFVar8;
  TRange<FFrameTime> *pTVar9;
  UMovieSceneSequence *pUVar10;
  undefined4 local_res8;
  undefined4 local_res10;
  undefined4 local_res18;
  undefined4 local_res20;
  TRange<FFrameNumber> local_158;
  TRange<FFrameNumber> local_148;
  TRangeBound<FFrameNumber> local_138;
  TRangeBound<FFrameNumber> TStack_130;
  undefined4 local_128;
  int iStack_124;
  uint local_120;
  int iStack_11c;
  FFrameTime local_118;
  FFrameTime local_110;
  undefined8 local_108;
  float local_100;
  undefined8 local_fc;
  TRange<FFrameNumber> local_e8;
  FGatherParameters local_d8;
  TRange<FFrameTime> local_58 [2];
  
  local_148.LowerBound.Type.Value = '\x02';
  local_148.LowerBound = (TRangeBound<FFrameNumber>)((ulonglong)local_148.LowerBound & 0xffffffff);
  local_148.UpperBound.Type.Value = '\x02';
  local_148.UpperBound = (TRangeBound<FFrameNumber>)((ulonglong)local_148.UpperBound & 0xffffffff);
  if ((param_1->LowerBound).Type.Value != '\x02') {
    local_108._0_1_ = (param_1->LowerBound).Type;
    local_108._1_3_ = *(undefined3 *)&(param_1->LowerBound).field_0x1;
    local_108._4_4_ = (param_1->LowerBound).Value.FrameNumber;
    local_118 = (param_1->LowerBound).Value;
    local_100 = (param_1->LowerBound).Value.SubFrame;
    if (((undefined1)local_108 == '\x01') && (local_118.SubFrame == 0.0)) {
      local_res8 = CONCAT31(local_res8._1_3_,1);
      local_148.LowerBound.Value.Value = local_118.FrameNumber.Value.Value;
      local_148.LowerBound._0_4_ = local_res8;
    }
    else {
      local_res10 = CONCAT31(local_res10._1_3_,1);
      local_148.LowerBound.Value.Value = local_118.FrameNumber.Value.Value + 1;
      local_148.LowerBound._0_4_ = local_res10;
    }
  }
  if ((param_1->UpperBound).Type.Value != '\x02') {
    local_148.UpperBound =
         (TRangeBound<FFrameNumber>)
         (CONCAT44((param_1->UpperBound).Value.FrameNumber.Value,local_res18) & 0xffffffffffffff00);
  }
  TRange<FFrameNumber>::Intersection
            (&local_158,(TRange<FFrameNumber> *)(*(longlong *)this + 4),&local_148);
  if ((local_158.LowerBound.Type.Value != '\x02') && (local_158.UpperBound.Type.Value != '\x02')) {
    if ((local_158.LowerBound.Type.Value == '\x02') &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Type != ERangeBoundTypes::Open",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                           ,99,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      uVar7 = (*pcVar4)();
      return (bool)uVar7;
    }
    if (local_158.UpperBound.Value.Value < local_158.LowerBound.Value.Value) {
      return true;
    }
    pFVar8 = TRangeBound<FFrameNumber>::GetValue(&local_158.UpperBound);
    iVar1 = pFVar8->Value;
    pFVar8 = TRangeBound<FFrameNumber>::GetValue(&local_158.LowerBound);
    if (pFVar8->Value == iVar1) {
      if (local_158.LowerBound.Type.Value == '\0') {
        return true;
      }
      if (local_158.UpperBound.Type.Value == '\0') {
        return true;
      }
    }
  }
  FGatherParameters::CreateForSubData
            (*(FGatherParameters **)this,&local_d8,
             *(FMovieSceneSubSequenceData **)((longlong)this + 0x28),
             (FMovieSceneSequenceID)*(uint *)((longlong)this + 0x30));
  pTVar9 = FMovieSceneSequenceTransform::ComputeTraversedHull
                     (&local_d8.RootToSequenceTransform,local_58,&local_e8);
  uVar5 = local_120;
  local_138.Type.Value = 2;
  local_138 = (TRangeBound<FFrameNumber>)((ulonglong)local_138 & 0xffffffff);
  TStack_130.Type.Value = 2;
  TStack_130 = (TRangeBound<FFrameNumber>)((ulonglong)TStack_130 & 0xffffffff);
  if ((pTVar9->LowerBound).Type.Value != '\x02') {
    local_fc._0_1_ = (pTVar9->LowerBound).Type;
    local_fc._1_3_ = *(undefined3 *)&(pTVar9->LowerBound).field_0x1;
    local_fc._4_4_ = (pTVar9->LowerBound).Value.FrameNumber;
    local_110 = (pTVar9->LowerBound).Value;
    if (((undefined1)local_fc == '\x01') && (local_110.SubFrame == 0.0)) {
      local_res20 = CONCAT31(local_res20._1_3_,1);
      local_138.Value.Value = local_110.FrameNumber.Value.Value;
      local_138._0_4_ = local_res20;
    }
    else {
      iStack_124 = local_110.FrameNumber.Value.Value + 1;
      local_128 = CONCAT31(local_128._1_3_,1);
      local_138.Value.Value = iStack_124;
      local_138._0_4_ = local_128;
    }
  }
  if ((pTVar9->UpperBound).Type.Value != '\x02') {
    iStack_11c = (pTVar9->UpperBound).Value.FrameNumber.Value;
    local_120 = local_120 & 0xffffff00;
    TStack_130 = (TRangeBound<FFrameNumber>)(CONCAT44(iStack_11c,uVar5) & 0xffffffffffffff00);
  }
  local_d8.LocalClampRange.LowerBound = local_138;
  local_d8.LocalClampRange.UpperBound = TStack_130;
  local_d8.Flags =
       local_d8.Flags | *(ESectionEvaluationFlags *)(*(longlong *)((longlong)this + 8) + 0x1c);
  local_d8.NetworkMask = *(EMovieSceneServerClientMask *)((longlong)this + 0x20);
  FMovieSceneSequenceHierarchy::AddRange
            (*(FMovieSceneSequenceHierarchy **)((longlong)this + 0x18),&local_158,
             (FMovieSceneSequenceID *)((longlong)this + 0x30),
             *(ESectionEvaluationFlags *)(*(longlong *)this + 0x24) |
             *(ESectionEvaluationFlags *)(*(longlong *)((longlong)this + 8) + 0x1c));
  UE::MovieScene::FSubSequencePath::PushGeneration
            ((FSubSequencePath *)**(undefined8 **)((longlong)this + 0x10),
             (FMovieSceneSequenceID)*(uint *)((longlong)this + 0x30),
             (FMovieSceneSequenceID)*(uint *)(*(longlong *)((longlong)this + 0x28) + 0x68));
  pFVar2 = *(FMovieSceneSequenceHierarchy **)((longlong)this + 0x18);
  pFVar3 = (FSubSequencePath *)**(undefined8 **)((longlong)this + 0x10);
  pUVar10 = FMovieSceneSubSequenceData::GetSequence
                      (*(FMovieSceneSubSequenceData **)((longlong)this + 0x28));
  UMovieSceneCompiledDataManager::PopulateSubSequenceTree(pUVar10,&local_d8,pFVar3,pFVar2);
  UE::MovieScene::FSubSequencePath::PopGenerations
            ((FSubSequencePath *)**(undefined8 **)((longlong)this + 0x10),1);
  if (local_d8.EndTimeBreadcrumbs.Breadcrumbs.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.EndTimeBreadcrumbs.Breadcrumbs.AllocatorInstance.Data);
  }
  if (local_d8.StartTimeBreadcrumbs.Breadcrumbs.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.StartTimeBreadcrumbs.Breadcrumbs.AllocatorInstance.Data);
  }
  DestructItems<FMovieSceneNestedSequenceTransform,int>
            ((FMovieSceneNestedSequenceTransform *)
             local_d8.RootToSequenceTransform.NestedTransforms.AllocatorInstance.Data,
             local_d8.RootToSequenceTransform.NestedTransforms.ArrayNum);
  if ((FMovieSceneNestedSequenceTransform *)
      local_d8.RootToSequenceTransform.NestedTransforms.AllocatorInstance.Data !=
      (FMovieSceneNestedSequenceTransform *)0x0) {
    FMemory::Free(local_d8.RootToSequenceTransform.NestedTransforms.AllocatorInstance.Data);
  }
  return true;
}

// operator() @ 14609c460

bool __thiscall
`UMovieSceneCompiledDataManager::CompileSubSequences'::__l46::<lambda_1>::operator()
          (void *this,FFrameTime param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  ForAnyElementType *pFVar6;
  int local_18;
  uint uStack_14;
  
  lVar1 = *(longlong *)this;
  uStack_14 = uStack_14 & 0xfffffffe;
  pFVar6 = (ForAnyElementType *)(lVar1 + 200);
  local_18 = (int)param_1.FrameNumber.Value;
  if ((pFVar6->Data <= (FScriptContainerElement *)&local_18) &&
     ((FScriptContainerElement *)&local_18 < pFVar6->Data + (longlong)*(int *)(lVar1 + 0xd4) * 8)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  iVar5 = *(int *)(lVar1 + 0xd0);
  if (iVar5 == *(int *)(lVar1 + 0xd4)) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x408,pFVar6,(int *)(lVar1 + 0xd4));
  }
  *(int *)(lVar1 + 0xd0) = iVar5 + 1;
  *(ulonglong *)(pFVar6->Data + (longlong)iVar5 * 8) = CONCAT44(uStack_14,local_18);
  return true;
}

// operator() @ 14609c520

bool __thiscall
`UMovieSceneCompiledDataManager::GatherTrack'::__l55::<lambda_1>::operator()
          (void *this,TRange<FFrameTime> *param_1)

{
  byte bVar1;
  int iVar2;
  UObject *pUVar3;
  longlong *plVar4;
  undefined8 uVar5;
  code *pcVar6;
  bool bVar7;
  undefined1 uVar8;
  FFrameNumber FVar9;
  FFrameNumber *pFVar10;
  uint *puVar11;
  IMovieSceneModule *pIVar12;
  undefined2 *puVar13;
  UObject *pUVar14;
  undefined8 *puVar15;
  longlong *plVar16;
  uint uVar17;
  uint *puVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  uint uVar21;
  uint *puVar22;
  undefined1 local_res8 [8];
  undefined2 local_res10;
  byte bStackX_12;
  undefined1 uStackX_13;
  undefined4 uStackX_14;
  undefined2 local_res18;
  undefined1 uStackX_1a;
  undefined1 uStackX_1b;
  undefined4 uStackX_1c;
  undefined4 local_res20;
  int iStackX_24;
  TRange<FFrameNumber> local_118;
  TRange<FFrameNumber> local_108;
  undefined2 local_f8;
  undefined2 uStack_f6;
  undefined2 uStack_f4;
  undefined2 uStack_f2;
  undefined8 uStack_f0;
  byte local_e8;
  byte bStack_e7;
  undefined2 uStack_e6;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined2 uStack_dc;
  byte bStack_da;
  undefined1 uStack_d9;
  undefined4 uStack_d8;
  undefined4 local_d0;
  int iStack_cc;
  uint local_c8;
  int iStack_c4;
  undefined4 local_c0;
  undefined4 uStack_bc;
  FFrameTime local_b8;
  undefined8 local_b0;
  float local_a8;
  TRange<FFrameNumber> local_98;
  IMovieSceneEvaluationTreeNodeOperator local_88;
  FMovieSceneEvaluationTree *local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  
  uVar17 = local_c8;
  puVar22 = (uint *)0x0;
  local_108.LowerBound.Type.Value = '\x02';
  local_108.LowerBound = (TRangeBound<FFrameNumber>)((ulonglong)local_108.LowerBound & 0xffffffff);
  local_108.UpperBound.Type.Value = '\x02';
  local_108.UpperBound = (TRangeBound<FFrameNumber>)((ulonglong)local_108.UpperBound & 0xffffffff);
  if ((param_1->LowerBound).Type.Value != '\x02') {
    local_b0._0_1_ = (param_1->LowerBound).Type;
    local_b0._1_3_ = *(undefined3 *)&(param_1->LowerBound).field_0x1;
    local_b0._4_4_ = (param_1->LowerBound).Value.FrameNumber;
    local_b8 = (param_1->LowerBound).Value;
    local_a8 = (param_1->LowerBound).Value.SubFrame;
    FVar9 = local_b8.FrameNumber.Value;
    if (((undefined1)local_b0 == '\x01') && (local_b8.SubFrame == 0.0)) {
      local_res20 = CONCAT31(local_res20._1_3_,1);
      local_108.LowerBound.Value.Value = FVar9.Value;
      local_108.LowerBound._0_4_ = local_res20;
      iStackX_24 = FVar9.Value;
    }
    else {
      iStack_cc = FVar9.Value + 1;
      local_d0 = CONCAT31(local_d0._1_3_,1);
      local_108.LowerBound.Value.Value = iStack_cc;
      local_108.LowerBound._0_4_ = local_d0;
    }
  }
  if ((param_1->UpperBound).Type.Value != '\x02') {
    iStack_c4 = (param_1->UpperBound).Value.FrameNumber.Value;
    local_c8 = local_c8 & 0xffffff00;
    local_108.UpperBound =
         (TRangeBound<FFrameNumber>)(CONCAT44(iStack_c4,uVar17) & 0xffffffffffffff00);
  }
  TRange<FFrameNumber>::Intersection
            (&local_118,(TRange<FFrameNumber> *)(*(longlong *)((longlong)this + 0x10) + 4),
             &local_108);
  pUVar3 = (UObject *)**(longlong **)((longlong)this + 8);
  if ((pUVar3 != (UObject *)0x0) &&
     (bVar7 = UMovieSceneTrack::IsRowEvalDisabled
                        (*(UMovieSceneTrack **)((longlong)this + 0x30),*(int *)&pUVar3[5].field_0x8,
                         true), bVar7)) {
    return true;
  }
  if ((local_118.LowerBound.Type.Value != '\x02') && (local_118.UpperBound.Type.Value != '\x02')) {
    if ((local_118.LowerBound.Type.Value == '\x02') &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Type != ERangeBoundTypes::Open",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                           ,99,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      uVar8 = (*pcVar6)();
      return (bool)uVar8;
    }
    if (local_118.UpperBound.Value.Value < local_118.LowerBound.Value.Value) {
      return true;
    }
    pFVar10 = TRangeBound<FFrameNumber>::GetValue(&local_118.UpperBound);
    iVar2 = pFVar10->Value;
    pFVar10 = TRangeBound<FFrameNumber>::GetValue(&local_118.LowerBound);
    if (pFVar10->Value == iVar2) {
      if (local_118.LowerBound.Type.Value == '\0') {
        return true;
      }
      if (local_118.UpperBound.Type.Value == '\0') {
        return true;
      }
    }
  }
  plVar4 = *(longlong **)((longlong)this + 0x28);
  uVar17 = *(uint *)((longlong)this + 0x20);
  if ((int)plVar4[1] != *(int *)((longlong)plVar4 + 0x34)) {
    plVar16 = (longlong *)plVar4[8];
    if ((longlong *)plVar4[8] == (longlong *)0x0) {
      plVar16 = plVar4 + 7;
    }
    uVar21 = *(uint *)((longlong)plVar16 + (ulonglong)((int)plVar4[9] - 1U & uVar17) * 4);
    if (uVar21 != 0xffffffff) {
      do {
        puVar11 = (uint *)((longlong)(int)uVar21 * 0x88 + *plVar4);
        if (*puVar11 == uVar17) {
          if (uVar21 != 0xffffffff) {
            puVar18 = puVar11 + 2;
            if (puVar11 == (uint *)0x0) {
              puVar18 = puVar22;
            }
            if (puVar18 != (uint *)0x0) goto LAB_14609c798;
          }
          break;
        }
        uVar21 = puVar11[0x20];
      } while (uVar21 != 0xffffffff);
    }
  }
  puVar11 = puVar22;
  if ((int)plVar4[0xb] != *(int *)((longlong)plVar4 + 0x84)) {
    plVar16 = (longlong *)plVar4[0x12];
    if ((longlong *)plVar4[0x12] == (longlong *)0x0) {
      plVar16 = plVar4 + 0x11;
    }
    uVar21 = *(uint *)((longlong)plVar16 + (ulonglong)((int)plVar4[0x13] - 1U & uVar17) * 4);
    if (uVar21 != 0xffffffff) {
      do {
        puVar11 = (uint *)((longlong)(int)uVar21 * 0x88 + plVar4[10]);
        if (*puVar11 == uVar17) break;
        uVar21 = puVar11[0x20];
        puVar11 = puVar22;
      } while (uVar21 != 0xffffffff);
    }
  }
  puVar18 = puVar11 + 2;
  if (puVar11 == (uint *)0x0) {
    puVar18 = puVar22;
  }
  if ((puVar18 == (uint *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("EvaluationTrack",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\Compilation\\MovieSceneCompiledDataManager.cpp"
                         ,0x64d,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    uVar8 = (*pcVar6)();
    return (bool)uVar8;
  }
LAB_14609c798:
  uVar5 = *(undefined8 *)(puVar18 + 0x1a);
  uStack_dc = 0xffff;
  bStack_da = 0;
  uStack_d8 = 0x80000000;
  uStack_e4 = **(undefined4 **)((longlong)this + 0x10);
  uStack_e0 = *(undefined4 *)((longlong)this + 0x20);
  uStack_f4 = (undefined2)puVar18[4];
  uStack_f0 = uVar5;
  local_c0 = uStack_e4;
  uStack_bc = uStack_e0;
  pIVar12 = GetMovieSceneModule();
  puVar13 = (undefined2 *)(**(code **)((longlong)*pIVar12 + 0x48))(pIVar12,local_res8,uVar5);
  local_f8 = *puVar13;
  uStack_f6 = *(undefined2 *)(*(longlong *)((longlong)this + 0x10) + 0x78);
  bStack_e7 = (byte)(puVar18[0x1c] >> 2) & 1;
  if (pUVar3 != (UObject *)0x0) {
    uVar17 = puVar18[10];
    puVar20 = *(undefined8 **)(puVar18 + 8);
    if (((int)uVar17 < 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xfe,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      uVar8 = (*pcVar6)();
      return (bool)uVar8;
    }
    for (puVar19 = puVar20; puVar19 != puVar20 + (longlong)(int)uVar17 * 0x11;
        puVar19 = puVar19 + 0x11) {
      if ((*(byte *)(puVar19 + 0x10) & 1) != 0) {
        puVar15 = puVar19;
        if ((*(byte *)(puVar19 + 0x10) & 2) == 0) {
          puVar15 = (undefined8 *)*puVar19;
        }
        pUVar14 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)puVar15 + 0x14));
        if (pUVar14 == pUVar3) {
          uVar17 = (uint)(((longlong)puVar19 - (longlong)puVar20) / 0x88);
          goto LAB_14609c8a5;
        }
      }
    }
    uVar17 = 0xffffffff;
LAB_14609c8a5:
    if (uVar17 != 0xffffffff) {
      if ((0xfffe < uVar17) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("ChildTemplateIndex >= 0 && ChildTemplateIndex < TNumericLimits<uint16>::Max()"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\Compilation\\MovieSceneCompiledDataManager.cpp"
                             ,0x661,L""), bVar7)) {
        pcVar6 = (code *)swi(3);
        uVar8 = (*pcVar6)();
        return (bool)uVar8;
      }
      bStackX_12 = *(byte *)(*(longlong *)((longlong)this + 0x10) + 0x24);
      if (bStackX_12 == 0) {
        bStackX_12 = *(byte *)(*(longlong *)((longlong)this + 8) + 0x1c);
      }
      bVar1 = *(byte *)(*(longlong *)((longlong)this + 0x10) + 0x7a);
      if ((bVar1 & 2) == 0) {
        if ((bVar1 & 1) != 0) {
          bStackX_12 = bStackX_12 | 4;
        }
      }
      else {
        bStackX_12 = bStackX_12 | 8;
      }
      local_res10 = (undefined2)uVar17;
      uStack_f2 = *(undefined2 *)(*(longlong *)((longlong)this + 8) + 0x1e);
      uStackX_14 = *(undefined4 *)(*(longlong *)((longlong)this + 8) + 0x18);
      uStack_d9 = uStackX_13;
      uVar21 = 0;
      if ((int)uVar17 < (int)puVar18[10]) {
        uVar21 = ~uVar17 >> 0x1f;
      }
      uStack_dc = local_res10;
      bStack_da = bStackX_12;
      uStack_d8 = uStackX_14;
      if ((uVar21 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        uVar8 = (*pcVar6)();
        return (bool)uVar8;
      }
      puVar20 = (undefined8 *)((longlong)(int)uVar17 * 0x88 + *(longlong *)(puVar18 + 8));
      if (((*(byte *)(puVar20 + 0x10) & 1) == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("bIsValid",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                             ,0x97,
                             L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                            ), bVar7)) {
        pcVar6 = (code *)swi(3);
        uVar8 = (*pcVar6)();
        return (bool)uVar8;
      }
      if ((*(byte *)(puVar20 + 0x10) & 2) == 0) {
        puVar20 = (undefined8 *)*puVar20;
      }
      local_e8 = *(byte *)(puVar20 + 1) >> 2 & 1;
      goto LAB_14609ca27;
    }
  }
  uStackX_1a = 0;
  local_res18 = 0xffff;
  uStackX_1c = 0x80000000;
  uStack_dc = 0xffff;
  bStack_da = 0;
  uStack_d9 = uStackX_1b;
  uStack_d8 = 0x80000000;
  uStack_f2 = 0;
  local_e8 = 0;
LAB_14609ca27:
  local_78 = CONCAT26(uStack_f2,CONCAT24(uStack_f4,CONCAT22(uStack_f6,local_f8)));
  local_68 = CONCAT44(uStack_e4,CONCAT22(uStack_e6,CONCAT11(bStack_e7,local_e8)));
  uStack_60 = CONCAT17(uStack_d9,CONCAT16(bStack_da,CONCAT24(uStack_dc,uStack_e0)));
  local_80 = (FMovieSceneEvaluationTree *)**(undefined8 **)((longlong)this + 0x18);
  uStack_70 = uStack_f0;
  local_88 = (IMovieSceneEvaluationTreeNodeOperator)
             &___7FAddOperator___TMovieSceneEvaluationTree_UFCompileOnTheFlyData____6B_;
  local_58 = uStack_d8;
  FMovieSceneEvaluationTree::AddTimeRange
            (local_80,&local_98,&local_88,(FMovieSceneEvaluationTreeNodeHandle)0xffffffff,
             (TFunctionRef<bool___cdecl(FMovieSceneEvaluationTreeNodeHandle)> *)0x0);
  return true;
}

// operator() @ 14609d040

void __thiscall
`UMovieSceneCompiledDataManager::UMovieSceneCompiledDataManager'::__l2::<lambda_2>::operator()
          (void *this,EPackageReloadPhase param_1,FPackageReloadedEvent *param_2)

{
  FObjectKey *pFVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  code *pcVar7;
  TMap<UObject_*,UObject_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,UObject_*,0>_>
  *pTVar8;
  bool bVar9;
  TMap<UObject_*,UObject_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,UObject_*,0>_>
  *pTVar10;
  longlong lVar11;
  UClass *pUVar12;
  TTuple<FObjectKey,FMovieSceneCompiledDataID> *pTVar13;
  int iVar14;
  UObject *pUVar15;
  undefined8 *puVar16;
  uint uVar17;
  uint uVar18;
  UObject *pUVar19;
  undefined1 *puVar20;
  uint *puVar21;
  byte bVar22;
  TBitArray<FDefaultBitArrayAllocator> *pTVar23;
  undefined1 local_res10 [16];
  uint local_res20 [2];
  uint local_138 [2];
  uint local_130 [2];
  uint local_128 [2];
  uint local_120 [2];
  FWeakObjectPtr local_118;
  FWeakObjectPtr local_110;
  TMap<UObject_*,UObject_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,UObject_*,0>_>
  *local_108;
  int iStack_100;
  uint uStack_fc;
  undefined1 *local_f8;
  undefined4 uStack_f0;
  int iStack_ec;
  int local_e8;
  int iStack_e4;
  int iStack_e0;
  undefined4 uStack_dc;
  int local_d8;
  undefined1 local_d4 [12];
  FWeakObjectPtr local_c8;
  UObject *local_c0;
  TBitArray<FDefaultBitArrayAllocator> *local_b8;
  TMap<UObject_*,UObject_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,UObject_*,0>_>
  *local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98 [2];
  FObjectKey local_88;
  undefined1 local_7b;
  byte local_79;
  TMap<UObject_*,UObject_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,UObject_*,0>_>
  *local_78;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_70;
  undefined8 uStack_50;
  FObjectKey *local_48;
  uint *local_40;
  
  if (param_1 != OnPackageFixup) {
    return;
  }
  pTVar10 = ObjectPtrDecay<TMap<TObjectPtr<UObject>,TObjectPtr<UObject>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UObject>,TObjectPtr<UObject>,0>_>,UE::Core::Private::TObjectPtrDecayTypeOf<TMap<TObjectPtr<UObject>,TObjectPtr<UObject>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UObject>,TObjectPtr<UObject>,0>_>_>,TMap<UObject_*,UObject_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,UObject_*,0>_>_>
                      (&param_2->RepointedObjects);
  iVar4 = *(int *)&pTVar10->field_0x28;
  iStack_100 = 0;
  local_e8 = 0;
  pTVar23 = (TBitArray<FDefaultBitArrayAllocator> *)&pTVar10->field_0x10;
  uStack_fc = 1;
  iStack_ec = 0;
  if (iVar4 != 0) {
    puVar21 = *(uint **)&pTVar10->field_0x20;
    if (*(uint **)&pTVar10->field_0x20 == (uint *)0x0) {
      puVar21 = (uint *)pTVar23;
    }
    uVar18 = *puVar21;
    while (uVar18 == 0) {
      iStack_100 = iStack_100 + 1;
      local_e8 = local_e8 + 0x20;
      iStack_ec = iVar4;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_100) goto LAB_14609d10c;
      uVar18 = puVar21[iStack_100];
    }
    uStack_fc = ~(uVar18 - 1) & uVar18;
    uVar3 = (ulonglong)uStack_fc * 2 + 1;
    lVar11 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_d8 = (int)lVar11;
    iStack_ec = local_d8 + -1 + local_e8;
    if (iVar4 < iStack_ec) {
      iStack_ec = iVar4;
    }
  }
LAB_14609d10c:
  uVar18 = *(uint *)&pTVar10->field_0x28;
  uVar17 = uVar18 & 0xffffffe0;
  iStack_e0 = *(int *)&pTVar10->field_0x8 - *(int *)&pTVar10->field_0x34;
  TStack_70._padding_ = CONCAT44(uStack_fc,iStack_100);
  uStack_f0 = 0xffffffff;
  TStack_70.CurrentBitIndex = iStack_ec;
  TStack_70.UnvisitedBitMask = 0xffffffff;
  iVar14 = (int)uVar18 >> 5;
  TStack_70._28_4_ = iStack_ec;
  TStack_70.BaseBitIndex = local_e8;
  uStack_50 = CONCAT44(uStack_dc,iStack_e0);
  local_108 = pTVar10;
  local_f8 = (undefined1 *)pTVar23;
  iStack_e4 = iStack_ec;
  local_b8 = pTVar23;
  local_b0 = pTVar10;
  local_78 = pTVar10;
  TStack_70.Array = pTVar23;
  if ((((int)uVar18 < 0) || (iVar4 < (int)uVar18)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  uVar5 = *(uint *)&pTVar10->field_0x28;
  if (uVar18 != uVar5) {
    puVar20 = (undefined1 *)pTVar23;
    if (*(undefined1 **)&pTVar10->field_0x20 != (undefined1 *)0x0) {
      puVar20 = *(undefined1 **)&pTVar10->field_0x20;
    }
    uVar18 = -1 << ((byte)uVar18 & 0x1f) & *(uint *)(puVar20 + (longlong)iVar14 * 4);
    while (uVar18 == 0) {
      iVar14 = iVar14 + 1;
      uVar17 = uVar17 + 0x20;
      uVar18 = uVar5;
      if ((int)(((int)(uVar5 - 1) >> 0x1f & 0x1fU) + (uVar5 - 1)) >> 5 < iVar14) goto LAB_14609d220;
      uVar18 = *(uint *)(puVar20 + (longlong)iVar14 * 4);
    }
    uVar3 = (ulonglong)(~(uVar18 - 1) & uVar18) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    uVar18 = (uVar17 - 1) + (int)lVar11;
    if ((int)uVar5 < (int)uVar18) {
      uVar18 = uVar5;
    }
  }
LAB_14609d220:
  do {
    pTVar8 = local_78;
    if (*(int *)&local_78->field_0x8 - *(int *)&local_78->field_0x34 != (int)uStack_50) {
      `TSparseArray<TSparseSetElement<TTuple<UObject_*,UObject_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    lVar11 = (longlong)TStack_70.CurrentBitIndex;
    if (((TStack_70.CurrentBitIndex == uVar18) && (TStack_70.Array == pTVar23)) &&
       (pTVar8 == pTVar10)) {
      return;
    }
    lVar6 = *(longlong *)pTVar8;
    pUVar15 = *(UObject **)(lVar6 + lVar11 * 0x18);
    if (pUVar15 == (UObject *)0x0) {
LAB_14609d287:
      pUVar15 = (UObject *)0x0;
    }
    else {
      pUVar12 = Z_Construct_UClass_UMovieSceneSequence_NoRegister();
      iVar4 = (int)pUVar12->_padding_;
      if ((*(int *)(*(longlong *)&pUVar15->field_0x10 + 0x38) < iVar4) ||
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&pUVar15->field_0x10 + 0x30) + (longlong)iVar4 * 8) !=
          &pUVar12->_padding_)) goto LAB_14609d287;
    }
    pUVar19 = *(UObject **)(lVar6 + lVar11 * 0x18 + 8);
    if (pUVar19 == (UObject *)0x0) {
LAB_14609d2b5:
      pUVar19 = (UObject *)0x0;
    }
    else {
      pUVar12 = Z_Construct_UClass_UMovieSceneSequence_NoRegister();
      iVar4 = (int)pUVar12->_padding_;
      if ((*(int *)(*(longlong *)&pUVar19->field_0x10 + 0x38) < iVar4) ||
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&pUVar19->field_0x10 + 0x30) + (longlong)iVar4 * 8) !=
          &pUVar12->_padding_)) goto LAB_14609d2b5;
    }
    if ((pUVar15 != (UObject *)0x0) && (pUVar19 != (UObject *)0x0)) {
      lVar11 = *(longlong *)this;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable(pUVar15);
      }
      local_118.ObjectIndex = 0;
      local_118.ObjectSerialNumber = 0;
      local_d4._4_8_ = pUVar15;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable(pUVar15);
      }
      FWeakObjectPtr::operator=(&local_118,(FObjectPtr)((longlong)local_d4 + 4));
      local_c8 = local_118;
      pTVar13 = TSet<TTuple<FObjectKey,FMovieSceneCompiledDataID>,TDefaultMapHashableKeyFuncs<FObjectKey,FMovieSceneCompiledDataID,0>,FDefaultSetAllocator>
                ::Find((TSet<TTuple<FObjectKey,FMovieSceneCompiledDataID>,TDefaultMapHashableKeyFuncs<FObjectKey,FMovieSceneCompiledDataID,0>,FDefaultSetAllocator>
                        *)(lVar11 + 0x50),(FObjectKey *)&local_c8);
      if (pTVar13 == (TTuple<FObjectKey,FMovieSceneCompiledDataID> *)0x0) {
        local_res20[0] = 0xffffffff;
      }
      else {
        local_res20[0] = *(uint *)&pTVar13->field_0x8;
        if (local_res20[0] != 0xffffffff) {
          puVar16 = (undefined8 *)
                    ((longlong)(int)local_res20[0] * 0x30 + *(longlong *)(*(longlong *)this + 0xa0))
          ;
          pFVar1 = (FObjectKey *)(puVar16 + 4);
          TMapBase<FObjectKey,FMovieSceneCompiledDataID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,FMovieSceneCompiledDataID,0>_>
          ::Remove((TMapBase<FObjectKey,FMovieSceneCompiledDataID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,FMovieSceneCompiledDataID,0>_>
                    *)(*(longlong *)this + 0x50),pFVar1);
          puVar2 = puVar16 + 2;
          local_a8 = 0;
          bVar22 = local_79 & 0xfc;
          uStack_a0 = 0;
          local_88.ObjectIndex = 0;
          local_88.ObjectSerialNumber = 0;
          *puVar16 = 0;
          puVar16[1] = 0;
          if (puVar2 != local_98) {
            if ((void *)*puVar2 != (void *)0x0) {
              FMemory::Free((void *)*puVar2);
            }
            *puVar2 = 0;
            puVar16[3] = 0;
          }
          *pFVar1 = local_88;
          *(undefined1 *)((longlong)puVar16 + 0x2d) = local_7b;
          *(undefined4 *)(puVar16 + 5) = 0xffffffff;
          *(undefined1 *)((longlong)puVar16 + 0x2c) = 0;
          *(undefined1 *)((longlong)puVar16 + 0x2e) = 0;
          *(byte *)((longlong)puVar16 + 0x2f) = bVar22;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable(pUVar19);
          }
          local_110.ObjectIndex = 0;
          local_110.ObjectSerialNumber = 0;
          local_c0 = pUVar19;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable(pUVar19);
          }
          FWeakObjectPtr::operator=(&local_110,(FObjectPtr)&local_c0);
          pFVar1->ObjectIndex = local_110.ObjectIndex;
          pFVar1->ObjectSerialNumber = local_110.ObjectSerialNumber;
          *(uint *)(puVar16 + 5) = local_res20[0];
          local_40 = local_res20;
          local_48 = pFVar1;
          TSet<TTuple<FObjectKey,FMovieSceneCompiledDataID>,TDefaultMapHashableKeyFuncs<FObjectKey,FMovieSceneCompiledDataID,0>,FDefaultSetAllocator>
          ::Emplace<TPairInitializer<FObjectKey_const_&,FMovieSceneCompiledDataID_const_&>_>
                    ((TSet<TTuple<FObjectKey,FMovieSceneCompiledDataID>,TDefaultMapHashableKeyFuncs<FObjectKey,FMovieSceneCompiledDataID,0>,FDefaultSetAllocator>
                      *)(*(longlong *)this + 0x50),
                     (TPairInitializer<FObjectKey_const_&,FMovieSceneCompiledDataID_const_&> *)
                     local_d4,(bool *)&local_48);
          lVar11 = *(longlong *)this;
          local_138[0] = local_res20[0];
          if (*(int *)(lVar11 + 0xe0) != *(int *)(lVar11 + 0x10c)) {
            TSet<TTuple<int,FMovieSceneSequenceHierarchy>,TDefaultMapHashableKeyFuncs<int,FMovieSceneSequenceHierarchy,0>,FDefaultSetAllocator>
            ::RemoveImpl<int>((TSet<TTuple<int,FMovieSceneSequenceHierarchy>,TDefaultMapHashableKeyFuncs<int,FMovieSceneSequenceHierarchy,0>,FDefaultSetAllocator>
                               *)(lVar11 + 0xd8),local_res20[0],(int *)local_138);
          }
          lVar11 = *(longlong *)this;
          local_130[0] = local_res20[0];
          if (*(int *)(lVar11 + 0x130) != *(int *)(lVar11 + 0x15c)) {
            TSet<TTuple<int,FMovieSceneEvaluationTemplate>,TDefaultMapHashableKeyFuncs<int,FMovieSceneEvaluationTemplate,0>,FDefaultSetAllocator>
            ::RemoveImpl<int>((TSet<TTuple<int,FMovieSceneEvaluationTemplate>,TDefaultMapHashableKeyFuncs<int,FMovieSceneEvaluationTemplate,0>,FDefaultSetAllocator>
                               *)(lVar11 + 0x128),local_res20[0],(int *)local_130);
          }
          lVar11 = *(longlong *)this;
          local_128[0] = local_res20[0];
          if (*(int *)(lVar11 + 0x180) != *(int *)(lVar11 + 0x1ac)) {
            TSet<TTuple<int,FMovieSceneEvaluationField>,TDefaultMapHashableKeyFuncs<int,FMovieSceneEvaluationField,0>,FDefaultSetAllocator>
            ::RemoveImpl<int>((TSet<TTuple<int,FMovieSceneEvaluationField>,TDefaultMapHashableKeyFuncs<int,FMovieSceneEvaluationField,0>,FDefaultSetAllocator>
                               *)(lVar11 + 0x178),local_res20[0],(int *)local_128);
          }
          lVar11 = *(longlong *)this;
          local_120[0] = local_res20[0];
          if (*(int *)(lVar11 + 0x1d0) != *(int *)(lVar11 + 0x1fc)) {
            TSet<TTuple<int,FMovieSceneEntityComponentField>,TDefaultMapHashableKeyFuncs<int,FMovieSceneEntityComponentField,0>,FDefaultSetAllocator>
            ::RemoveImpl<int>((TSet<TTuple<int,FMovieSceneEntityComponentField>,TDefaultMapHashableKeyFuncs<int,FMovieSceneEntityComponentField,0>,FDefaultSetAllocator>
                               *)(lVar11 + 0x1c8),local_res20[0],(int *)local_120);
          }
          *(int *)(*(longlong *)this + 0x228) = *(int *)(*(longlong *)this + 0x228) + 1;
          pTVar10 = local_b0;
          pTVar23 = local_b8;
        }
      }
    }
    TStack_70.UnvisitedBitMask = TStack_70.UnvisitedBitMask & ~TStack_70._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_70);
  } while( true );
}

// BeginDestroy @ 1460ae280

void __thiscall UMovieSceneCompiledDataManager::BeginDestroy(UMovieSceneCompiledDataManager *this)

{
  TSet<UMovieSceneCompiledDataManager_*,DefaultKeyFuncs<UMovieSceneCompiledDataManager_*,0>,FDefaultSetAllocator>
  ::Remove(&ActiveManagers,this);
  UObject::BeginDestroy((UObject *)this);
  return;
}

// CanMarkSignedObjectAsChangedDuringCook @ 1460b1420

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

bool __thiscall
UMovieSceneCompiledDataManager::CanMarkSignedObjectAsChangedDuringCook
          (UMovieSceneCompiledDataManager *this,UMovieSceneSequence *param_1)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  TTuple<FObjectKey,FMovieSceneCompiledDataID> *pTVar5;
  int *piVar6;
  undefined1 *puVar7;
  FWeakObjectPtr local_res8;
  FObjectKey local_res10;
  UMovieSceneSequence *local_res18 [2];
  
  local_res10.ObjectIndex = 0;
  local_res10.ObjectSerialNumber = 0;
  if (param_1 != (UMovieSceneSequence *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    local_res8.ObjectIndex = 0;
    local_res8.ObjectSerialNumber = 0;
    local_res18[0] = param_1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)local_res18);
    local_res10.ObjectIndex = local_res8.ObjectIndex;
    local_res10.ObjectSerialNumber = local_res8.ObjectSerialNumber;
  }
  pTVar5 = TSet<TTuple<FObjectKey,FMovieSceneCompiledDataID>,TDefaultMapHashableKeyFuncs<FObjectKey,FMovieSceneCompiledDataID,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FObjectKey,FMovieSceneCompiledDataID>,TDefaultMapHashableKeyFuncs<FObjectKey,FMovieSceneCompiledDataID,0>,FDefaultSetAllocator>
                   *)&this->SequenceToDataIDs,&local_res10);
  if (pTVar5 == (TTuple<FObjectKey,FMovieSceneCompiledDataID> *)0x0) {
    return true;
  }
  uVar1 = *(uint *)&pTVar5->field_0x8;
  if (uVar1 == 0xffffffff) {
    return true;
  }
  if ((-1 < (int)uVar1) && ((int)uVar1 < *(int *)&(this->CompiledDataEntries).field_0x28)) {
    if ((*(int *)&(this->CompiledDataEntries).field_0x28 <= (int)uVar1) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5c6,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    puVar7 = *(undefined1 **)&(this->CompiledDataEntries).field_0x20;
    if (puVar7 == (undefined1 *)0x0) {
      puVar7 = &(this->CompiledDataEntries).field_0x10;
    }
    if ((*(uint *)(puVar7 + (longlong)((int)(uVar1 + ((int)uVar1 >> 0x1f & 0x1fU)) >> 5) * 4) >>
         (uVar1 & 0x1f) & 1) != 0) goto LAB_1460b1532;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("CompiledDataEntries.IsValidIndex(DataID.Value)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Compilation\\MovieSceneCompiledDataManager.h"
                     ,0x139,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
LAB_1460b1532:
  piVar6 = (int *)((longlong)(int)uVar1 * 0x30 + *(longlong *)&this->CompiledDataEntries);
  return ((piVar6[3] == 0 && piVar6[2] == 0) && piVar6[1] == 0) && *piVar6 == 0;
}

// Compile @ 1460b22a0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

FMovieSceneCompiledDataID __thiscall
UMovieSceneCompiledDataManager::Compile
          (UMovieSceneCompiledDataManager *this,UMovieSceneSequence *param_1)

{
  UMovieSceneSequence *in_R8;
  
  GetDataID(this,param_1);
  Compile(this,(FMovieSceneCompiledDataID)(int)param_1->_padding_,in_R8,this->NetworkMask);
  return (FMovieSceneCompiledDataID)(int)param_1;
}

// Compile @ 1460b22f0

void __thiscall
UMovieSceneCompiledDataManager::Compile
          (UMovieSceneCompiledDataManager *this,FMovieSceneCompiledDataID param_1)

{
  Compile(this,param_1,this->NetworkMask);
  return;
}

// Compile @ 1460b2310

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __thiscall
UMovieSceneCompiledDataManager::Compile
          (UMovieSceneCompiledDataManager *this,FMovieSceneCompiledDataID param_1,
          UMovieSceneSequence *param_2)

{
  Compile(this,param_1,param_2,this->NetworkMask);
  return;
}

// Compile @ 1460b2330

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __thiscall
UMovieSceneCompiledDataManager::Compile
          (UMovieSceneCompiledDataManager *this,FMovieSceneCompiledDataID param_1,
          UMovieSceneSequence *param_2,EMovieSceneServerClientMask param_3)

{
  TMap<int,FMovieSceneEntityComponentField,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FMovieSceneEntityComponentField,0>_>
  *this_00;
  TMap<int,FMovieSceneSequenceHierarchy,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FMovieSceneSequenceHierarchy,0>_>
  *this_01;
  undefined8 *puVar1;
  FScriptContainerElement FVar2;
  FScriptContainerElement FVar3;
  FMovieSceneDeterminismFence FVar4;
  UObject *pUVar5;
  code *pcVar6;
  UMovieSceneCompiledDataManager *this_02;
  bool bVar7;
  TLess<void> TVar8;
  uint uVar9;
  int iVar10;
  UMovieScene *this_03;
  UClass *pUVar11;
  longlong *plVar12;
  UMovieSceneTrack *pUVar13;
  ulonglong uVar14;
  FMovieSceneEntityComponentField *this_04;
  uint *puVar15;
  FMovieSceneSequenceHierarchy *this_05;
  longlong lVar16;
  FMovieSceneEvaluationTemplate *pFVar17;
  FMovieSceneDeterminismFence *pFVar18;
  FMovieSceneEvaluationTemplate *pFVar19;
  undefined1 *puVar20;
  int iVar21;
  FScriptContainerElement *pFVar22;
  FScriptContainerElement *pFVar23;
  ForAnyElementType FVar24;
  FMovieSceneBinding *pFVar25;
  uint uVar26;
  undefined8 *puVar27;
  int *piVar28;
  longlong lVar29;
  FMovieSceneBinding *pFVar30;
  uint local_res10 [6];
  undefined1 auStackY_568 [32];
  undefined1 local_527;
  undefined1 local_526;
  undefined1 local_525;
  undefined1 local_524 [4];
  FMovieSceneCompiledDataEntry local_520;
  ulonglong local_4f0;
  uint local_4e8 [2];
  uint local_4e0 [2];
  uint local_4d8;
  undefined4 uStack_4d4;
  uint local_4d0;
  undefined4 uStack_4cc;
  uint local_4c8;
  undefined4 uStack_4c4;
  uint local_4c0;
  undefined4 uStack_4bc;
  uint local_4b8;
  undefined4 uStack_4b4;
  uint local_4b0;
  undefined4 uStack_4ac;
  uint local_4a8;
  undefined4 uStack_4a4;
  uint local_4a0;
  undefined4 uStack_49c;
  UMovieSceneCompiledDataManager *local_498;
  FMovieSceneGatheredCompilerData local_488;
  undefined1 local_398 [24];
  FFrameNumber FStack_380;
  uint uStack_37c;
  FFrameNumber FStack_378;
  ESectionEvaluationFlags local_374;
  longlong local_370;
  float local_368;
  ForAnyElementType local_360;
  longlong local_358;
  ForAnyElementType local_350;
  longlong local_348;
  EMovieSceneBreadcrumbMode local_340;
  ForAnyElementType local_338;
  longlong local_330;
  EMovieSceneBreadcrumbMode local_328;
  short local_320;
  EMovieSceneSubSectionFlags local_31e;
  EMovieSceneServerClientMask local_31d;
  undefined **local_318;
  UMovieSceneCompiledDataManager *local_310;
  FMovieSceneCompiledDataEntry *local_308;
  FMovieSceneEvaluationTemplate *local_300;
  UMovieScene *local_2f8;
  UMovieSceneSequence *local_2f0;
  ulonglong local_2e8;
  ulonglong local_2e0;
  FMovieSceneEntityComponentField local_2d8;
  TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> local_1e8;
  FMovieSceneSequenceHierarchy local_198;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_568;
  local_res10[0] = param_1.Value;
  local_498 = this;
  local_2f0 = param_2;
  if (((param_1.Value != -1) && (-1 < param_1.Value)) &&
     (param_1.Value < *(int *)&(this->CompiledDataEntries).field_0x28)) {
    if ((*(int *)&(this->CompiledDataEntries).field_0x28 <= param_1.Value) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5c6,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    puVar20 = *(undefined1 **)&(this->CompiledDataEntries).field_0x20;
    if (puVar20 == (undefined1 *)0x0) {
      puVar20 = &(this->CompiledDataEntries).field_0x10;
    }
    if ((*(uint *)(puVar20 +
                  (longlong)((int)(param_1.Value + (param_1.Value >> 0x1f & 0x1fU)) >> 5) * 4) >>
         (param_1.Value & 0x1fU) & 1) != 0) goto LAB_1460b2400;
  }
  bVar7 = ::FDebug::CheckVerifyFailedImpl2
                    ("DataID.IsValid() && CompiledDataEntries.IsValidIndex(DataID.Value)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\Compilation\\MovieSceneCompiledDataManager.cpp"
                     ,0x38b,L"");
  if (bVar7) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
LAB_1460b2400:
  FMovieSceneCompiledDataEntry::FMovieSceneCompiledDataEntry
            (&local_520,
             (FMovieSceneCompiledDataEntry *)
             ((longlong)(int)local_res10[0] * 0x30 + *(longlong *)&this->CompiledDataEntries));
  bVar7 = IsDirty(this,&local_520);
  if (bVar7) {
    pFVar17 = (FMovieSceneEvaluationTemplate *)0x0;
    uStack_4d4 = 0;
    local_4d8 = CONCAT31(local_4d8._1_3_,2);
    local_488.TrackTemplates._padding_ = (longlong)local_4d8;
    uStack_4cc = 0;
    local_4d0 = CONCAT31(local_4d0._1_3_,2);
    local_488.TrackTemplates._padding_ = (longlong)local_4d0;
    local_488.TrackTemplates._padding_ = -1;
    uStack_4c4 = 0;
    local_4c8 = CONCAT31(local_4c8._1_3_,2);
    local_488.Sequences._padding_ = (longlong)local_4c8;
    uStack_4bc = 0;
    local_4c0 = CONCAT31(local_4c0._1_3_,2);
    local_488.Sequences._padding_ = (longlong)local_4c0;
    local_4f0 = 0xffffffffffffffff;
    local_488.Sequences._padding_ = -1;
    uStack_4b4 = 0;
    local_4b8 = CONCAT31(local_4b8._1_3_,2);
    local_398._8_4_ = 0;
    local_398._4_4_ = local_4b8;
    uStack_4ac = 0;
    local_4b0 = CONCAT31(local_4b0._1_3_,2);
    local_398._16_4_ = 0;
    local_398._12_4_ = local_4b0;
    local_488.EntityField = (FMovieSceneEntityComponentField *)0x0;
    local_488.DeterminismData.Fences.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_488.TrackTemplates._padding_ = -1;
    local_398._20_4_ = local_4b8;
    FStack_380.Value = 0;
    uStack_37c = local_4b0;
    FStack_378.Value = 0;
    local_488.TrackTemplates._padding_ = 0;
    local_488.TrackTemplates._padding_ = 0;
    local_488.TrackTemplates._padding_ = 0;
    local_488.TrackTemplates._padding_ = 0;
    local_488.TrackTemplates.Data.Entries.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_488.TrackTemplates.Data.Entries.ArrayNum = 0;
    local_488.TrackTemplates.Data.Entries.ArrayMax = 0;
    local_488.TrackTemplates.Data.Items.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_488.TrackTemplates.Data.Items.ArrayNum = 0;
    local_488.TrackTemplates.Data.Items.ArrayMax = 0;
    local_488.Sequences._padding_ = -1;
    local_488.Sequences._padding_ = 0;
    local_488.Sequences._padding_ = 0;
    local_488.Sequences._padding_ = 0;
    local_488.Sequences._padding_ = 0;
    local_488.Sequences.Data.Entries.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_488.Sequences.Data.Entries.ArrayNum = 0;
    local_488.Sequences.Data.Entries.ArrayMax = 0;
    local_488.Sequences.Data.Items.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_488.Sequences.Data.Items.ArrayNum = 0;
    local_488.Sequences.Data.Items.ArrayMax = 0;
    local_488.DeterminismData.Fences.ArrayNum = 0;
    local_488.DeterminismData.Fences.ArrayMax = 0;
    local_488.DeterminismData.bParentSequenceRequiresLowerFence = false;
    local_488.DeterminismData.bParentSequenceRequiresUpperFence = false;
    local_488.InheritedFlags = None;
    local_488.AccumulatedMask = None;
    local_398._0_4_ = 0;
    local_374 = None;
    local_370 = 0x3f800000;
    local_368 = 0.0;
    local_360.Data = (FScriptContainerElement *)0x0;
    local_358 = 0;
    local_350.Data = (FScriptContainerElement *)0x0;
    local_348 = 0;
    local_340 = Sparse;
    local_338.Data = (FScriptContainerElement *)0x0;
    local_330 = 0;
    local_328 = Sparse;
    local_320 = 0;
    local_31e = None;
    local_318 = &___7FMovieSceneCompileDataManagerGenerator__6B_;
    local_520.DeterminismFences.ArrayNum = 0;
    local_310 = this;
    if (local_520.DeterminismFences.ArrayMax != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,0,&local_520.DeterminismFences.AllocatorInstance,0,
                 &local_520.DeterminismFences.ArrayMax);
    }
    local_520.AccumulatedFlags = param_2->SequenceFlags;
    local_308 = &local_520;
    pFVar19 = pFVar17;
    if (*(int *)&(local_310->TrackTemplates).field_0x8 !=
        *(int *)&(local_310->TrackTemplates).field_0x34) {
      puVar20 = *(undefined1 **)&(local_310->TrackTemplates).field_0x40;
      if (puVar20 == (undefined1 *)0x0) {
        puVar20 = &(local_310->TrackTemplates).field_0x38;
      }
      iVar10 = *(int *)(puVar20 +
                       (ulonglong)
                       (*(int *)&(local_310->TrackTemplates).field_0x48 - 1U &
                       local_520.DataID.Value) * 4);
      if (iVar10 != -1) {
        do {
          pFVar19 = (FMovieSceneEvaluationTemplate *)
                    ((longlong)iVar10 * 0x170 + *(longlong *)&local_310->TrackTemplates);
          if (*(uint *)&pFVar19->Tracks == local_520.DataID.Value) break;
          iVar10 = *(int *)&pFVar19[1].Tracks.field_0x8;
          pFVar19 = pFVar17;
        } while (iVar10 != -1);
      }
    }
    local_300 = (FMovieSceneEvaluationTemplate *)&(pFVar19->Tracks).field_0x8;
    if (pFVar19 == (FMovieSceneEvaluationTemplate *)0x0) {
      local_300 = pFVar17;
    }
    local_31d = param_3;
    this_03 = (UMovieScene *)(**(code **)(param_2->_padding_ + 0x2f8))(param_2);
    local_2f8 = this_03;
    if (this_03 == (UMovieScene *)0x0) {
      bVar7 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<7571377248008143772>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\Compilation\\MovieSceneCompiledDataManager.cpp"
                         ,0x39c,"MovieScene");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    else {
      iVar10 = (int)this_03->_padding_;
      puVar27 = (undefined8 *)this_03->_padding_;
      if ((iVar10 < 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      puVar1 = puVar27 + iVar10;
      for (; puVar27 != puVar1; puVar27 = puVar27 + 1) {
        pUVar5 = (UObject *)*puVar27;
        if (UE::GC::GIsIncrementalReachabilityPending == false) {
          if (pUVar5 != (UObject *)0x0) goto LAB_1460b2754;
        }
        else if (pUVar5 != (UObject *)0x0) {
          UE::GC::MarkAsReachable(pUVar5);
LAB_1460b2754:
          pUVar11 = Z_Construct_UClass_UMovieSceneDecoration_NoRegister();
          plVar12 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)pUVar5,pUVar11);
          if (plVar12 != (longlong *)0x0) {
            (**(code **)(*plVar12 + 0x20))(plVar12);
          }
        }
      }
      (this_03->GeneratedConditions).ArrayNum = 0;
      if ((this_03->GeneratedConditions).ArrayMax < 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,0,&(this_03->GeneratedConditions).AllocatorInstance,0,
                   &(this_03->GeneratedConditions).ArrayMax);
      }
    }
    FMovieSceneSequenceHierarchy::FMovieSceneSequenceHierarchy(&local_198);
    TVar8 = (TLess<void>)CompileHierarchy(param_2,(FGatherParameters *)local_398,&local_198);
    if ((local_31d == All) && (local_198.AccumulatedNetworkMask != All)) {
      local_520.AccumulatedFlags = local_520.AccumulatedFlags | InheritedFlags;
    }
    pUVar11 = Z_Construct_UClass_UMovieSceneDeterminismSource_NoRegister();
    plVar12 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)param_2,pUVar11);
    if (plVar12 != (longlong *)0x0) {
      uStack_4a4 = 0;
      local_4a8 = CONCAT31(local_4a8._1_3_,2);
      local_2e8 = (ulonglong)local_4a8;
      uStack_49c = 0;
      local_4a0 = CONCAT31(local_4a0._1_3_,2);
      local_2e0 = (ulonglong)local_4a0;
      (**(code **)(*plVar12 + 0x10))(plVar12);
    }
    local_1e8.Elements._0_8_ = 0;
    local_1e8.Elements._8_8_ = 0;
    local_1e8.Elements._32_8_ = 0;
    local_1e8.Elements._40_4_ = 0;
    local_1e8.Elements._44_4_ = 0x80;
    local_1e8.Elements._48_4_ = 0xffffffff;
    local_1e8.Elements._52_4_ = 0;
    local_1e8.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
    local_1e8.HashSize = 0;
    if (this_03 == (UMovieScene *)0x0) {
      bVar7 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<7571377248008143805>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\Compilation\\MovieSceneCompiledDataManager.cpp"
                         ,0x3bd,"MovieScene");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    else {
      iVar10 = (this_03->MarkedFrames).ArrayNum;
      pFVar22 = (this_03->MarkedFrames).AllocatorInstance.Data;
      pFVar23 = pFVar22 + (longlong)iVar10 * 0x20;
      while( true ) {
        if ((this_03->MarkedFrames).ArrayNum != iVar10) {
          local_527 = 0;
          `TCheckedPointerIterator<FMovieSceneMarkedFrame_const_,int,0>::operator!='::__l2::
          <lambda_1>::operator()(&local_527);
        }
        if (pFVar22 == pFVar23) break;
        if (pFVar22[0x18] != (FScriptContainerElement)0x0) {
          iVar21 = local_488.DeterminismData.Fences.ArrayNum;
          if (local_488.DeterminismData.Fences.ArrayNum == local_488.DeterminismData.Fences.ArrayMax
             ) {
            iVar21 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x408,(ForAnyElementType *)&local_488.DeterminismData,
                                &local_488.DeterminismData.Fences.ArrayMax);
          }
          local_488.DeterminismData.Fences.ArrayNum = iVar21 + 1;
          FVar2 = pFVar22[0x19];
          lVar16 = (longlong)iVar21;
          FVar3 = local_488.DeterminismData.Fences.AllocatorInstance.Data[lVar16 * 8 + 4];
          *(undefined4 *)
           &local_488.DeterminismData.Fences.AllocatorInstance.Data[lVar16 * 8].field_0x0 =
               *(undefined4 *)pFVar22;
          local_488.DeterminismData.Fences.AllocatorInstance.Data[lVar16 * 8 + 4] =
               (FScriptContainerElement)
               ((byte)local_488.DeterminismData.Fences.AllocatorInstance.Data[lVar16 * 8 + 4] ^
               ((byte)FVar3 ^ (byte)FVar2) & 1);
        }
        pFVar22 = pFVar22 + 0x20;
      }
      pUVar13 = UMovieScene::GetCameraCutTrack(this_03);
      if (pUVar13 != (UMovieSceneTrack *)0x0) {
        CompileTrack(this,&local_520,(FMovieSceneBinding *)0x0,pUVar13,
                     (FTrackGatherParameters *)local_398,&local_1e8,&local_488);
      }
      pFVar23 = (this_03->Tracks).AllocatorInstance.Data;
      iVar10 = (this_03->Tracks).ArrayNum;
      pFVar22 = pFVar23 + (longlong)iVar10 * 8;
      while( true ) {
        if ((this_03->Tracks).ArrayNum != iVar10) {
          local_526 = 0;
          `TCheckedPointerIterator<UMovieSceneTrack_*_const,int,0>::operator!='::__l2::<lambda_1>::
          operator()(&local_526);
        }
        if (pFVar23 == pFVar22) break;
        CompileTrack(this,&local_520,(FMovieSceneBinding *)0x0,*(UMovieSceneTrack **)pFVar23,
                     (FTrackGatherParameters *)local_398,&local_1e8,&local_488);
        pFVar23 = pFVar23 + 8;
      }
      iVar10 = (this_03->ObjectBindings).ArrayNum;
      uVar14 = (ulonglong)iVar10;
      pFVar25 = (FMovieSceneBinding *)(this_03->ObjectBindings).AllocatorInstance.Data;
      pFVar30 = pFVar25 + uVar14;
      local_4f0 = CONCAT44(local_4f0._4_4_,iVar10);
      piVar28 = &(pFVar25->Tracks).ArrayNum;
      while( true ) {
        if ((this_03->ObjectBindings).ArrayNum != (int)uVar14) {
          local_525 = 0;
          `TCheckedPointerIterator<FMovieSceneBinding_const_,int,0>::operator!='::__l2::<lambda_1>::
          operator()(&local_525);
        }
        this_02 = local_498;
        this = local_498;
        param_2 = local_2f0;
        if (pFVar25 == pFVar30) break;
        pFVar23 = (((TArray<TObjectPtr<UMovieSceneTrack>,TSizedDefaultAllocator<32>_> *)
                   (piVar28 + -2))->AllocatorInstance).Data;
        iVar10 = *piVar28;
        pFVar22 = pFVar23 + (longlong)iVar10 * 8;
        while( true ) {
          if (*piVar28 != iVar10) {
            local_524[0] = 0;
            `TCheckedPointerIterator<UMovieSceneTrack_*_const,int,0>::operator!='::__l2::<lambda_1>
            ::operator()(local_524);
          }
          if (pFVar23 == pFVar22) break;
          CompileTrack(this_02,&local_520,pFVar25,*(UMovieSceneTrack **)pFVar23,
                       (FTrackGatherParameters *)local_398,&local_1e8,&local_488);
          pFVar23 = pFVar23 + 8;
        }
        pFVar25 = pFVar25 + 1;
        uVar14 = local_4f0 & 0xffffffff;
        piVar28 = piVar28 + 0x10;
        this_03 = local_2f8;
      }
    }
    FMovieSceneEntityComponentField::FMovieSceneEntityComponentField(&local_2d8);
    local_488.EntityField = &local_2d8;
    Gather(this,&local_520,param_2,(FTrackGatherParameters *)local_398,&local_488);
    this_00 = &this->EntityComponentFields;
    iVar10 = *(int *)&(this->EntityComponentFields).field_0x8;
    iVar21 = *(int *)&(this->EntityComponentFields).field_0x34;
    local_488.EntityField = (FMovieSceneEntityComponentField *)0x0;
    if (local_2d8.Entities.ArrayNum == 0) {
      local_4e8[0] = local_res10[0];
      if (iVar10 != iVar21) {
        TSet<TTuple<int,FMovieSceneEntityComponentField>,TDefaultMapHashableKeyFuncs<int,FMovieSceneEntityComponentField,0>,FDefaultSetAllocator>
        ::RemoveImpl<int>((TSet<TTuple<int,FMovieSceneEntityComponentField>,TDefaultMapHashableKeyFuncs<int,FMovieSceneEntityComponentField,0>,FDefaultSetAllocator>
                           *)this_00,local_res10[0],(int *)local_4e8);
      }
    }
    else {
      if (iVar10 != iVar21) {
        puVar20 = *(undefined1 **)&(this->EntityComponentFields).field_0x40;
        if (puVar20 == (undefined1 *)0x0) {
          puVar20 = &(this->EntityComponentFields).field_0x38;
        }
        uVar9 = *(uint *)(puVar20 +
                         (ulonglong)
                         (*(int *)&(this->EntityComponentFields).field_0x48 - 1U & local_res10[0]) *
                         4);
        if (uVar9 != 0xffffffff) {
          do {
            puVar15 = (uint *)((longlong)(int)uVar9 * 0x100 + *(longlong *)&this_00->field_0x0);
            if (*puVar15 == local_res10[0]) {
              if (puVar15 != (uint *)0x0) {
                this_04 = (FMovieSceneEntityComponentField *)(puVar15 + 2);
                goto LAB_1460b2bb0;
              }
              break;
            }
            uVar9 = puVar15[0x3e];
          } while (uVar9 != 0xffffffff);
        }
      }
      this_04 = TMapBase<int,FMovieSceneEntityComponentField,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FMovieSceneEntityComponentField,0>_>
                ::EmplaceByHash<int_const_&>
                          ((TMapBase<int,FMovieSceneEntityComponentField,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FMovieSceneEntityComponentField,0>_>
                            *)this_00,local_res10[0],(int *)local_res10);
LAB_1460b2bb0:
      FMovieSceneEntityComponentField::operator=(this_04,&local_2d8);
      local_488._224_2_ = local_488._224_2_ | 0x800;
    }
    if ((bool)TVar8) {
      CompileSubSequences(this,&local_198,(FTrackGatherParameters *)local_398,&local_488);
      local_520.AccumulatedFlags = local_520.AccumulatedFlags | local_488.InheritedFlags;
      local_520.AccumulatedMask = local_520.AccumulatedMask | local_488.AccumulatedMask;
    }
    if (*(int *)&(this->TrackTemplates).field_0x8 != *(int *)&(this->TrackTemplates).field_0x34) {
      puVar20 = *(undefined1 **)&(this->TrackTemplates).field_0x40;
      if (puVar20 == (undefined1 *)0x0) {
        puVar20 = &(this->TrackTemplates).field_0x38;
      }
      uVar9 = *(uint *)(puVar20 +
                       (ulonglong)
                       (*(int *)&(this->TrackTemplates).field_0x48 - 1U & local_520.DataID.Value) *
                       4);
      if (uVar9 != 0xffffffff) {
        do {
          puVar15 = (uint *)((longlong)(int)uVar9 * 0x170 + *(longlong *)&this->TrackTemplates);
          if (*puVar15 == local_520.DataID.Value) {
            pFVar17 = (FMovieSceneEvaluationTemplate *)(puVar15 + 2);
            if (puVar15 == (uint *)0x0) {
              pFVar17 = (FMovieSceneEvaluationTemplate *)0x0;
            }
            if (pFVar17 != (FMovieSceneEvaluationTemplate *)0x0) {
              FMovieSceneEvaluationTemplate::RemoveStaleData(pFVar17,&local_1e8);
            }
            break;
          }
          uVar9 = puVar15[0x5a];
        } while (uVar9 != 0xffffffff);
      }
    }
    CompileTrackTemplateField(this,&local_520,&local_198,&local_488);
    this_01 = &this->Hierarchies;
    iVar10 = *(int *)&(this->Hierarchies).field_0x8;
    iVar21 = *(int *)&(this->Hierarchies).field_0x34;
    if ((bool)TVar8) {
      if (iVar10 != iVar21) {
        puVar20 = *(undefined1 **)&(this->Hierarchies).field_0x40;
        if (puVar20 == (undefined1 *)0x0) {
          puVar20 = &(this->Hierarchies).field_0x38;
        }
        uVar9 = *(uint *)(puVar20 +
                         (ulonglong)(*(int *)&(this->Hierarchies).field_0x48 - 1U & local_res10[0])
                         * 4);
        if (uVar9 != 0xffffffff) {
          do {
            puVar15 = (uint *)((longlong)(int)uVar9 * 0x150 + *(longlong *)&this_01->field_0x0);
            if (*puVar15 == local_res10[0]) {
              if (puVar15 != (uint *)0x0) {
                FMovieSceneSequenceHierarchy::operator=
                          ((FMovieSceneSequenceHierarchy *)(puVar15 + 2),&local_198);
                goto LAB_1460b2d6f;
              }
              break;
            }
            uVar9 = puVar15[0x52];
          } while (uVar9 != 0xffffffff);
        }
      }
      this_05 = TMapBase<int,FMovieSceneSequenceHierarchy,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FMovieSceneSequenceHierarchy,0>_>
                ::EmplaceByHash<int_const_&>
                          ((TMapBase<int,FMovieSceneSequenceHierarchy,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FMovieSceneSequenceHierarchy,0>_>
                            *)this_01,local_res10[0],(int *)local_res10);
      FMovieSceneSequenceHierarchy::operator=(this_05,&local_198);
    }
    else {
      local_4e0[0] = local_res10[0];
      if (iVar10 != iVar21) {
        TSet<TTuple<int,FMovieSceneSequenceHierarchy>,TDefaultMapHashableKeyFuncs<int,FMovieSceneSequenceHierarchy,0>,FDefaultSetAllocator>
        ::RemoveImpl<int>((TSet<TTuple<int,FMovieSceneSequenceHierarchy>,TDefaultMapHashableKeyFuncs<int,FMovieSceneSequenceHierarchy,0>,FDefaultSetAllocator>
                           *)this_01,local_res10[0],(int *)local_4e0);
      }
    }
LAB_1460b2d6f:
    local_520.CompiledSignature._0_8_ = *(undefined8 *)((longlong)&param_2->_padding_ + 4);
    local_520.CompiledSignature._8_8_ = *(undefined8 *)((longlong)&param_2->_padding_ + 4);
    local_520.CompiledFlags.bParentSequenceRequiresUpperFence =
         local_488.DeterminismData.bParentSequenceRequiresUpperFence;
    local_520.CompiledFlags.bParentSequenceRequiresLowerFence = local_488.DeterminismData._16_2_;
    local_520.AccumulatedMask = local_488.AccumulatedMask;
    if ((FMovieSceneDeterminismFence *)local_520.DeterminismFences.AllocatorInstance.Data !=
        (FMovieSceneDeterminismFence *)0x0) {
      FMemory::Free(local_520.DeterminismFences.AllocatorInstance.Data);
    }
    FVar24.Data = local_488.DeterminismData.Fences.AllocatorInstance.Data;
    iVar10 = local_488.DeterminismData.Fences.ArrayNum;
    local_520.DeterminismFences.AllocatorInstance.Data =
         local_488.DeterminismData.Fences.AllocatorInstance.Data;
    local_488.DeterminismData.Fences.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_520.DeterminismFences.ArrayNum = local_488.DeterminismData.Fences.ArrayNum;
    local_520.DeterminismFences.ArrayMax = local_488.DeterminismData.Fences.ArrayMax;
    local_488.DeterminismData.Fences.ArrayNum = 0;
    local_488.DeterminismData.Fences.ArrayMax = 0;
    if (iVar10 != 0) {
      AlgoImpl::
      IntroSortInternal<FMovieSceneDeterminismFence,int,UE::Core::Private::TProjectionMemberData<FFrameNumber_FMovieSceneDeterminismFence::*>,TLess<void>_>
                ((FMovieSceneDeterminismFence *)FVar24.Data,iVar10,
                 (TProjectionMemberData<FFrameNumber_FMovieSceneDeterminismFence::*>)0x0,TVar8);
      uVar9 = local_520.DeterminismFences.ArrayNum;
      if (1 < local_520.DeterminismFences.ArrayNum) {
        FVar24.Data = local_520.DeterminismFences.AllocatorInstance.Data;
        for (pFVar18 = (FMovieSceneDeterminismFence *)
                       (local_520.DeterminismFences.AllocatorInstance.Data + 8);
            pFVar18 !=
            (FMovieSceneDeterminismFence *)
            (local_520.DeterminismFences.AllocatorInstance.Data +
            (longlong)local_520.DeterminismFences.ArrayNum * 8); pFVar18 = pFVar18 + 1) {
          FVar4 = *pFVar18;
          if ((((*(FMovieSceneDeterminismFence *)FVar24.Data).FrameNumber.Value !=
                FVar4.FrameNumber.Value.Value) ||
              (((pFVar18->bInclusive ^ ((FMovieSceneDeterminismFence *)FVar24.Data)->bInclusive) & 1
               ) != 0)) &&
             (FVar24.Data = FVar24.Data + 8, (FMovieSceneDeterminismFence *)FVar24.Data != pFVar18))
          {
            *(FMovieSceneDeterminismFence *)FVar24.Data = FVar4;
          }
        }
        uVar9 = (uint)((longlong)FVar24.Data +
                       (8 - (longlong)local_520.DeterminismFences.AllocatorInstance.Data) >> 3);
      }
      if (uVar9 != local_520.DeterminismFences.ArrayNum) {
        if (local_520.DeterminismFences.ArrayNum < (int)uVar9) {
          iVar21 = uVar9 - local_520.DeterminismFences.ArrayNum;
          iVar10 = UE::Core::Private::
                   ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (8,4,iVar21,&local_520.DeterminismFences.AllocatorInstance,
                              &local_520.DeterminismFences.ArrayNum,
                              &local_520.DeterminismFences.ArrayMax);
          DefaultConstructItems<FMovieSceneDeterminismFence,int>
                    (local_520.DeterminismFences.AllocatorInstance.Data + (longlong)iVar10 * 8,
                     iVar21);
        }
        else {
          if ((int)uVar9 < 0) {
                    /* WARNING: Subroutine does not return */
            UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar9);
          }
          if ((int)uVar9 < local_520.DeterminismFences.ArrayNum) {
            uVar26 = local_520.DeterminismFences.ArrayNum - uVar9;
            if (((int)(uVar9 | uVar26) < 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x458,
                                   L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                  ), bVar7)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            if (uVar26 != 0) {
              iVar10 = (local_520.DeterminismFences.ArrayNum - uVar26) - uVar9;
              if (iVar10 != 0) {
                memmove(local_520.DeterminismFences.AllocatorInstance.Data +
                        (longlong)(int)uVar9 * 8,
                        local_520.DeterminismFences.AllocatorInstance.Data +
                        (longlong)(int)uVar9 * 8 + (longlong)(int)uVar26 * 8,(longlong)iVar10 << 3);
              }
              local_520.DeterminismFences.ArrayNum = local_520.DeterminismFences.ArrayNum - uVar26;
              UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (8,4,&local_520.DeterminismFences.AllocatorInstance,
                         local_520.DeterminismFences.ArrayNum,&local_520.DeterminismFences.ArrayMax)
              ;
            }
          }
        }
      }
    }
    lVar16 = *(longlong *)&this->CompiledDataEntries;
    lVar29 = (longlong)(int)local_res10[0] * 0x30;
    *(undefined8 *)(lVar29 + lVar16) = local_520.CompiledSignature._0_8_;
    ((undefined8 *)(lVar29 + lVar16))[1] = local_520.CompiledSignature._8_8_;
    TArray<FMovieSceneDeterminismFence,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<FMovieSceneDeterminismFence,TSizedDefaultAllocator<32>_> *)
               (lVar29 + 0x10 + lVar16),&local_520.DeterminismFences);
    *(FObjectKey *)(lVar29 + 0x20 + lVar16) = local_520.SequenceKey;
    *(int *)(lVar29 + 0x28 + lVar16) = local_520.DataID.Value;
    *(EMovieSceneSequenceFlags *)(lVar29 + 0x2c + lVar16) = local_520.AccumulatedFlags;
    *(EMovieSceneSequenceCompilerMask *)(lVar29 + 0x2d + lVar16) = local_520.AllocatedMask;
    *(EMovieSceneSequenceCompilerMask *)(lVar29 + 0x2e + lVar16) = local_520.AccumulatedMask;
    *(FMovieSceneCompiledSequenceFlagStruct *)(lVar29 + 0x2f + lVar16) = local_520.CompiledFlags;
    this->ReallocationVersion = this->ReallocationVersion + 1;
    lVar16 = (**(code **)(param_2->_padding_ + 0x2f8))(param_2);
    iVar10 = *(int *)(lVar16 + 0x68);
    puVar27 = *(undefined8 **)(lVar16 + 0x60);
    if ((iVar10 < 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    puVar1 = puVar27 + iVar10;
    for (; puVar27 != puVar1; puVar27 = puVar27 + 1) {
      pUVar5 = (UObject *)*puVar27;
      if (UE::GC::GIsIncrementalReachabilityPending == false) {
        if (pUVar5 != (UObject *)0x0) goto LAB_1460b3044;
      }
      else if (pUVar5 != (UObject *)0x0) {
        UE::GC::MarkAsReachable(pUVar5);
LAB_1460b3044:
        pUVar11 = Z_Construct_UClass_UMovieSceneDecoration_NoRegister();
        plVar12 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)pUVar5,pUVar11);
        if (plVar12 != (longlong *)0x0) {
          (**(code **)(*plVar12 + 0x28))(plVar12);
        }
      }
    }
    FMovieSceneEntityComponentField::~FMovieSceneEntityComponentField(&local_2d8);
    local_1e8.HashSize = 0;
    if (local_1e8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_1e8.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<FGuid>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<FGuid>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_1e8.Elements);
    FMovieSceneSequenceHierarchy::~FMovieSceneSequenceHierarchy(&local_198);
    local_318 = &___7IMovieSceneTemplateGenerator__6B_;
    if (local_338.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_338.Data);
    }
    if (local_350.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_350.Data);
    }
    DestructItems<FMovieSceneNestedSequenceTransform,int>
              ((FMovieSceneNestedSequenceTransform *)local_360.Data,(int)local_358);
    if ((FMovieSceneNestedSequenceTransform *)local_360.Data !=
        (FMovieSceneNestedSequenceTransform *)0x0) {
      FMemory::Free(local_360.Data);
    }
    if (local_488.DeterminismData.Fences.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_488.DeterminismData.Fences.AllocatorInstance.Data);
    }
    if (local_488.Sequences.Data.Items.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_488.Sequences.Data.Items.AllocatorInstance.Data);
    }
    if (local_488.Sequences.Data.Entries.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_488.Sequences.Data.Entries.AllocatorInstance.Data);
    }
    if ((void *)local_488.Sequences._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_488.Sequences._padding_);
    }
    if ((void *)local_488.Sequences._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_488.Sequences._padding_);
    }
    if (local_488.TrackTemplates.Data.Items.AllocatorInstance.Data != (FScriptContainerElement *)0x0
       ) {
      FMemory::Free(local_488.TrackTemplates.Data.Items.AllocatorInstance.Data);
    }
    if (local_488.TrackTemplates.Data.Entries.AllocatorInstance.Data !=
        (FScriptContainerElement *)0x0) {
      FMemory::Free(local_488.TrackTemplates.Data.Entries.AllocatorInstance.Data);
    }
    if ((void *)local_488.TrackTemplates._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_488.TrackTemplates._padding_);
    }
    if ((void *)local_488.TrackTemplates._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_488.TrackTemplates._padding_);
    }
  }
  if ((FMovieSceneDeterminismFence *)local_520.DeterminismFences.AllocatorInstance.Data !=
      (FMovieSceneDeterminismFence *)0x0) {
    FMemory::Free(local_520.DeterminismFences.AllocatorInstance.Data);
  }
  return;
}

// Compile @ 1460b31d0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __thiscall
UMovieSceneCompiledDataManager::Compile
          (UMovieSceneCompiledDataManager *this,FMovieSceneCompiledDataID param_1,
          EMovieSceneServerClientMask param_2)

{
  code *pcVar1;
  bool bVar2;
  UMovieSceneSequence *pUVar3;
  undefined1 *puVar4;
  
  if ((-1 < param_1.Value) && (param_1.Value < *(int *)&(this->CompiledDataEntries).field_0x28)) {
    if (*(int *)&(this->CompiledDataEntries).field_0x28 <= param_1.Value) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5c6,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    puVar4 = *(undefined1 **)&(this->CompiledDataEntries).field_0x20;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(this->CompiledDataEntries).field_0x10;
    }
    if ((*(uint *)(puVar4 + (ulonglong)((uint)param_1.Value >> 5) * 4) >> (param_1.Value & 0x1fU) &
        1) != 0) goto LAB_1460b3271;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("DataID.IsValid() && CompiledDataEntries.IsValidIndex(DataID.Value)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\Compilation\\MovieSceneCompiledDataManager.cpp"
                     ,0x377,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
LAB_1460b3271:
  pUVar3 = FMovieSceneCompiledDataEntry::GetSequence
                     ((FMovieSceneCompiledDataEntry *)
                      ((longlong)param_1.Value * 0x30 + *(longlong *)&this->CompiledDataEntries));
  if (pUVar3 == (UMovieSceneSequence *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Sequence",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\Compilation\\MovieSceneCompiledDataManager.cpp"
                       ,0x379,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  Compile(this,param_1,pUVar3,param_2);
  return;
}

// CompileHierarchy @ 1460b32e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

bool __cdecl
UMovieSceneCompiledDataManager::CompileHierarchy
          (UMovieSceneSequence *param_1,FGatherParameters *param_2,
          FMovieSceneSequenceHierarchy *param_3)

{
  int iVar1;
  UObject *pUVar2;
  bool bVar3;
  double dVar4;
  FFrameTime FVar5;
  uchar uVar6;
  bool bVar7;
  UMovieSceneDecorationContainerObject *this;
  UMovieSceneTimeWarpDecoration *pUVar8;
  FMovieSceneNestedSequenceTransform *pFVar9;
  longlong *plVar10;
  FScriptContainerElement *pFVar11;
  FScriptContainerElement *pFVar12;
  double dVar13;
  undefined1 auStackY_178 [32];
  TLess<void> local_148 [8];
  undefined1 local_140 [24];
  undefined8 local_128;
  undefined8 local_120;
  FMovieSceneSequenceHierarchy *local_118;
  FGatherParameters *local_110;
  FFrameTime local_108;
  undefined8 local_100;
  UMovieSceneSequence *local_f8;
  FMovieSceneNestedSequenceTransform local_f0;
  FMovieSceneNestedSequenceTransform local_d0;
  FSubSequencePath local_a8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_178;
  local_118 = param_3;
  local_110 = param_2;
  local_f8 = param_1;
  UE::MovieScene::FSubSequencePath::FSubSequencePath(&local_a8);
  bVar3 = false;
  if ((param_2->SequenceID).Value == 0) {
    this = (UMovieSceneDecorationContainerObject *)
           (**(code **)(param_1->_padding_ + 0x2f8))(param_1);
    pUVar8 = UMovieSceneDecorationContainerObject::FindDecoration<UMovieSceneTimeWarpDecoration>
                       (this);
    if (pUVar8 != (UMovieSceneTimeWarpDecoration *)0x0) {
      local_140._16_4_ = 0;
      local_140._20_4_ = 0.0;
      local_128._0_4_ = 0;
      local_128._4_4_ = 0;
      local_140[0] = '\0';
      local_140[1] = '\0';
      local_140[2] = 0x80;
      local_140[3] = '?';
      local_140[4] = '\0';
      local_140[5] = '\0';
      local_140[6] = '\0';
      local_140[7] = '\0';
      local_140._8_8_ = (ulonglong)(uint)local_140._12_4_ << 0x20;
      AlgoImpl::
      IntroSortInternal<TScriptInterface<IMovieSceneTimeWarpSource>_const_,int,UE::Core::Private::TProjectionMemberFunction<int_(__cdecl_IMovieSceneTimeWarpSource::*)(void)const_>,TLess<void>_>
                ((TScriptInterface<IMovieSceneTimeWarpSource> *)
                 (pUVar8->Sources).AllocatorInstance.Data,(pUVar8->Sources).ArrayNum,
                 (TProjectionMemberFunction<int_(__cdecl_IMovieSceneTimeWarpSource::*)(void)const>)
                 0x14609da14,local_148[0]);
      dVar4 = __real_3ff0000000000000;
      iVar1 = (pUVar8->Sources).ArrayNum;
      pFVar11 = (pUVar8->Sources).AllocatorInstance.Data;
      pFVar12 = pFVar11 + (longlong)iVar1 * 0x10;
      while( true ) {
        if ((pUVar8->Sources).ArrayNum != iVar1) {
          `TCheckedPointerIterator<TScriptInterface<IMovieSceneTimeWarpSource>_const_,int,0>::
          operator!='::__l2::<lambda_1>::operator()(local_148);
        }
        if (pFVar11 == pFVar12) break;
        pUVar2 = *(UObject **)pFVar11;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar2);
        }
        plVar10 = *(longlong **)(pFVar11 + 8);
        if (pUVar2 == (UObject *)0x0) {
          plVar10 = (longlong *)0x0;
        }
        (**(code **)(*plVar10 + 0x10))(plVar10,&local_d0);
        local_120 = 0;
        local_100 = 0;
        local_108 = local_d0.Offset;
        if ((((local_d0.Offset.FrameNumber.Value.Value != 0) ||
             (local_108.SubFrame = local_d0.Offset.SubFrame, bVar7 = local_108.SubFrame != 0.0,
             bVar7)) ||
            ((((ulonglong)local_d0.TimeScale.Variant.Data & 0xfff8000000000000) ==
              0xfff8000000000000 &&
             (uVar6 = FMovieSceneNumericVariant::GetTypeBits((FMovieSceneNumericVariant *)&local_d0)
             , uVar6 != 0xff)))) ||
           (dVar13 = FMovieSceneTimeWarpVariant::AsFixedPlayRate(&local_d0.TimeScale),
           dVar13 != dVar4)) {
          pFVar9 = FMovieSceneNestedSequenceTransform::FMovieSceneNestedSequenceTransform
                             (&local_f0,&local_d0);
          FMovieSceneSequenceTransform::Add((FMovieSceneSequenceTransform *)local_140,pFVar9);
        }
        FMovieSceneNestedSequenceTransform::~FMovieSceneNestedSequenceTransform(&local_d0);
        pFVar11 = pFVar11 + 0x10;
      }
      bVar7 = FMovieSceneSequenceTransform::IsIdentity((FMovieSceneSequenceTransform *)local_140);
      param_1 = local_f8;
      param_3 = local_118;
      if (!bVar7) {
        local_d0.TimeScale.Variant.WeakCustomGetter.WeakPtr.ObjectIndex = local_140._8_4_;
        local_d0.Offset.FrameNumber.Value = local_140._16_4_;
        local_d0.Offset.SubFrame = (float)local_140._20_4_;
        local_140._16_4_ = 0;
        local_140._20_4_ = 0.0;
        local_d0.Warping.Start.Value = (int)local_128;
        local_d0.TimeScale.Variant.Data[0] = local_140[0];
        local_d0.TimeScale.Variant.Data[1] = local_140[1];
        local_d0.TimeScale.Variant.Data[2] = local_140[2];
        local_d0.TimeScale.Variant.Data[3] = local_140[3];
        local_d0.TimeScale.Variant.Data[4] = local_140[4];
        local_d0.TimeScale.Variant.Data[5] = local_140[5];
        local_d0.TimeScale.Variant.Data[6] = local_140[6];
        local_d0.TimeScale.Variant.Data[7] = local_140[7];
        local_d0.Warping.End.Value = local_128._4_4_;
        local_128._0_4_ = 0;
        local_128._4_4_ = 0;
        FMovieSceneSequenceTransform::operator=
                  (&local_118->RootTransform,(FMovieSceneSequenceTransform *)&local_d0);
        FVar5 = local_d0.Offset;
        DestructItems<FMovieSceneNestedSequenceTransform,int>
                  ((FMovieSceneNestedSequenceTransform *)local_d0.Offset,
                   local_d0.Warping.Start.Value);
        if (FVar5 != (FFrameTime)0x0) {
          FMemory::Free((void *)FVar5);
        }
        bVar3 = true;
      }
      DestructItems<FMovieSceneNestedSequenceTransform,int>
                ((FMovieSceneNestedSequenceTransform *)local_140._16_8_,(int)local_128);
      if ((FFrameTime)local_140._16_8_ != (FFrameTime)0x0) {
        FMemory::Free((void *)local_140._16_8_);
      }
      param_2 = local_110;
    }
  }
  local_140._0_4_ = 0;
  local_140._4_4_ = 0;
  local_140._8_8_ = 0;
  local_140._16_8_ = (ulonglong)(uint)local_140._20_4_ << 0x20;
  bVar7 = GenerateSubSequenceData
                    (param_1,param_2,(FMovieSceneEvaluationOperand *)local_140,&local_a8,param_3);
  PopulateSubSequenceTree(param_1,param_2,&local_a8,param_3);
  if ((bVar7) || (bVar7 = false, bVar3)) {
    bVar7 = true;
  }
  if (local_a8.PathToRoot.AllocatorInstance.SecondaryData !=
      (ForElementType<UE::MovieScene::FSubSequencePath::FSequenceIDPair>)0x0) {
    FMemory::Free((void *)local_a8.PathToRoot.AllocatorInstance.SecondaryData);
  }
  return bVar7;
}

// CompileHierarchy @ 1460b35f0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

bool __cdecl
UMovieSceneCompiledDataManager::CompileHierarchy
          (UMovieSceneSequence *param_1,FMovieSceneSequenceHierarchy *param_2,
          EMovieSceneServerClientMask param_3)

{
  bool bVar1;
  uint local_res20;
  uint local_98;
  FGatherParameters local_88;
  
  local_res20 = CONCAT31(local_res20._1_3_,2);
  local_88.RootClampRange.LowerBound.Value.Value = 0;
  local_88.RootClampRange.LowerBound._0_4_ = local_res20;
  local_98 = CONCAT31(local_98._1_3_,2);
  local_88.RootClampRange.UpperBound.Value.Value = 0;
  local_88.RootClampRange.UpperBound._0_4_ = local_98;
  local_88.SequenceID.Value = 0;
  local_88.Flags = None;
  local_88.RootToSequenceTransform.LinearTransform.TimeScale = 1.0;
  local_88.RootToSequenceTransform.LinearTransform.Offset.FrameNumber.Value = 0;
  local_88.RootToSequenceTransform.LinearTransform.Offset.SubFrame = 0.0;
  local_88.RootToSequenceTransform.NestedTransforms.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  local_88.RootToSequenceTransform.NestedTransforms.ArrayNum = 0;
  local_88.RootToSequenceTransform.NestedTransforms.ArrayMax = 0;
  local_88.StartTimeBreadcrumbs.Breadcrumbs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.StartTimeBreadcrumbs.Breadcrumbs.ArrayNum = 0;
  local_88.StartTimeBreadcrumbs.Breadcrumbs.ArrayMax = 0;
  local_88.StartTimeBreadcrumbs.Mode = Sparse;
  local_88.EndTimeBreadcrumbs.Breadcrumbs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.EndTimeBreadcrumbs.Breadcrumbs.ArrayNum = 0;
  local_88.EndTimeBreadcrumbs.Breadcrumbs.ArrayMax = 0;
  local_88.EndTimeBreadcrumbs.Mode = Sparse;
  local_88.HierarchicalBias = 0;
  local_88.AccumulatedFlags = None;
  local_88.LocalClampRange.LowerBound = local_88.RootClampRange.LowerBound;
  local_88.LocalClampRange.UpperBound = local_88.RootClampRange.UpperBound;
  local_88.NetworkMask = param_3;
  bVar1 = CompileHierarchy(param_1,&local_88,param_2);
  if (local_88.EndTimeBreadcrumbs.Breadcrumbs.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.EndTimeBreadcrumbs.Breadcrumbs.AllocatorInstance.Data);
  }
  if (local_88.StartTimeBreadcrumbs.Breadcrumbs.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.StartTimeBreadcrumbs.Breadcrumbs.AllocatorInstance.Data);
  }
  DestructItems<FMovieSceneNestedSequenceTransform,int>
            ((FMovieSceneNestedSequenceTransform *)
             local_88.RootToSequenceTransform.NestedTransforms.AllocatorInstance.Data,
             local_88.RootToSequenceTransform.NestedTransforms.ArrayNum);
  if ((FMovieSceneNestedSequenceTransform *)
      local_88.RootToSequenceTransform.NestedTransforms.AllocatorInstance.Data !=
      (FMovieSceneNestedSequenceTransform *)0x0) {
    FMemory::Free(local_88.RootToSequenceTransform.NestedTransforms.AllocatorInstance.Data);
  }
  return bVar1;
}

// CompileSubSequences @ 1460b36d0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __thiscall
UMovieSceneCompiledDataManager::CompileSubSequences
          (UMovieSceneCompiledDataManager *this,FMovieSceneSequenceHierarchy *param_1,
          FTrackGatherParameters *param_2,FMovieSceneGatheredCompilerData *param_3)

{
  FMovieSceneTransformBreadcrumbs *pFVar1;
  int *piVar2;
  TObjectPtr<UMovieSceneCompiledData>_u_0 *pTVar3;
  FMovieSceneDeterminismData *pFVar4;
  EMovieSceneSequenceFlags EVar5;
  FMovieSceneSubSequenceTreeEntry *pFVar6;
  undefined1 *puVar7;
  void *_Src;
  FScriptContainerElement *pFVar8;
  FMovieSceneEvaluationTreeNodeHandle FVar9;
  code *pcVar10;
  uint uVar11;
  uint7 uVar12;
  FFrameTime FVar13;
  FFrameTime FVar14;
  TEnumAsByte<ERangeBoundTypes::Type> TVar15;
  UMovieSceneCompiledData *pUVar16;
  bool bVar17;
  int iVar18;
  UMovieSceneSequence *pUVar19;
  TArrayView<FMovieSceneSubSequenceTreeEntry_const_,int> *pTVar20;
  FGatherParameters *pFVar21;
  TRange<FFrameTime> *pTVar22;
  TTuple<FMovieSceneSequenceID,_private:_void___cdecl_UMovieSceneCompiledDataManager::CompileSubSequences(FMovieSceneSequenceHierarchy_const_&,FTrackGatherParameters_const_&,FMovieSceneGatheredCompilerData_*)_::_2_::FSubSequenceItMetaData>
  *pTVar23;
  TArrayView<FMovieSceneEvaluationTreeNode_const_,int> *pTVar24;
  FFrameNumber FVar25;
  longlong lVar26;
  uint *puVar27;
  longlong lVar28;
  int *piVar29;
  FEvaluationTreeEntryHandle FVar30;
  ulonglong uVar31;
  TRange<FFrameNumber> *pTVar32;
  longlong lVar33;
  char *pcVar34;
  uint uVar35;
  TObjectPtr<UMovieSceneCompiledData>_u_0 TVar36;
  char *pcVar37;
  undefined1 *puVar38;
  int iVar39;
  uint uVar40;
  FMovieSceneSubSequenceData *this_00;
  uint uVar41;
  TMovieSceneEvaluationTree<FMovieSceneSubSequenceTreeEntry> *this_01;
  TMovieSceneEvaluationTree<FMovieSceneSubSequenceTreeEntry> *pTVar42;
  undefined1 local_418;
  undefined1 local_417 [3];
  int local_414;
  undefined1 local_410 [4];
  FMovieSceneSequenceID local_40c;
  uint local_408;
  int local_404;
  uint uStack_400;
  undefined4 local_3fc;
  uint uStack_3f8;
  void *local_3f0;
  longlong local_3e8;
  TObjectPtr<UMovieSceneCompiledData>_u_0 local_3e0;
  TObjectPtr<UMovieSceneCompiledData>_u_0 TStack_3d8;
  ForAnyElementType local_3d0;
  int iStack_3c8;
  int iStack_3c4;
  undefined8 local_3c0;
  int iStack_3b8;
  undefined1 uStack_3b4;
  undefined1 uStack_3b3;
  EMovieSceneSequenceCompilerMask EStack_3b2;
  byte bStack_3b1;
  TObjectPtr<UMovieSceneCompiledData>_u_0 local_3b0;
  FMovieSceneCompiledDataID local_3a8;
  TMovieSceneEvaluationTree<FMovieSceneSubSequenceTreeEntry> *local_3a0;
  ulonglong local_398;
  ulonglong uStack_390;
  FMovieSceneEvaluationTreeRangeIterator local_388;
  uint local_368;
  int iStack_364;
  FFrameNumber local_360;
  float fStack_35c;
  uint local_358;
  undefined4 uStack_354;
  uint local_350;
  undefined4 uStack_34c;
  TObjectPtr<UMovieSceneCompiledData>_u_0 local_348;
  EMovieSceneCompletionMode local_340;
  undefined3 uStack_33f;
  int iStack_33c;
  undefined4 local_338;
  int iStack_334;
  undefined8 local_330;
  undefined8 uStack_328;
  uint local_320;
  undefined4 uStack_31c;
  undefined1 local_318 [48];
  undefined4 local_2e8;
  FMovieSceneNestedSequenceTransform *local_2e0;
  longlong local_2d8;
  FScriptContainerElement *local_2d0;
  longlong local_2c8;
  EMovieSceneBreadcrumbMode local_2c0;
  FScriptContainerElement *local_2b8;
  longlong local_2b0;
  EMovieSceneBreadcrumbMode local_2a8;
  short local_2a0;
  EMovieSceneSubSectionFlags local_29e;
  EMovieSceneServerClientMask local_29d;
  undefined **local_298;
  UMovieSceneCompiledDataManager *local_290;
  FMovieSceneCompiledDataEntry *local_288;
  FMovieSceneEvaluationTemplate *pFStack_280;
  undefined8 local_278;
  undefined4 local_270;
  FMovieSceneEvaluationTreeNodeHandle local_268;
  TRange<FFrameNumber> *local_260;
  int local_258;
  undefined8 local_254;
  float local_24c;
  int local_248;
  int local_244;
  FFrameTime local_240;
  undefined8 local_238;
  uchar local_230;
  undefined1 uStack_22f;
  undefined1 uStack_22e;
  undefined1 uStack_22d;
  undefined4 uStack_22c;
  FMovieSceneGatheredCompilerData *local_228;
  UMovieSceneCompiledData *local_220;
  TObjectPtr<UMovieSceneCompiledData>_u_0 TStack_218;
  undefined1 *local_210;
  undefined8 uStack_208;
  longlong local_200;
  undefined8 uStack_1f8;
  code *local_1f0;
  FMovieSceneGatheredCompilerData **local_1e8;
  FScriptContainerElement *local_1d8;
  int iStack_1d0;
  undefined8 local_1c8;
  undefined4 uStack_1c0;
  TMovieSceneEvaluationTreeDataIterator<FMovieSceneSubSequenceTreeEntry> local_1b8;
  TRange<FFrameNumber> local_198;
  int iStack_17c;
  TMovieSceneEvaluationTreeDataIterator<FMovieSceneSubSequenceTreeEntry> local_178;
  uint uStack_15c;
  TRange<FFrameNumber> local_150;
  TArrayView<FMovieSceneSubSequenceTreeEntry_const_,int> local_140;
  TArrayView<FMovieSceneEvaluationTreeNode_const_,int> local_130;
  TArrayView<FMovieSceneEvaluationTreeNode_const_,int> local_120;
  FGatherParameters local_110;
  TRange<FFrameTime> local_90 [2];
  undefined4 local_5c;
  
  param_3->AccumulatedMask = param_3->AccumulatedMask | Hierarchy;
  puVar7 = &(param_1->SubSequences).field_0x10;
  iVar18 = *(int *)&(param_1->SubSequences).field_0x28;
  local_3e0.DebugPtr = (UMovieSceneCompiledData *)&param_1->SubSequences;
  TStack_3d8._0_4_ = 0;
  TStack_3d8._4_4_ = 1;
  iVar39 = 0;
  iStack_3c4 = 0;
  if (iVar18 != 0) {
    puVar27 = *(uint **)&(param_1->SubSequences).field_0x20;
    if (puVar27 == (uint *)0x0) {
      puVar27 = (uint *)puVar7;
    }
    uVar35 = *puVar27;
    iVar39 = 0;
    while (uVar35 == 0) {
      lVar26 = (longlong)(int)TStack_3d8._0_4_;
      iVar39 = iVar39 + 0x20;
      TStack_3d8._0_4_ = TStack_3d8._0_4_ + 1;
      iStack_3c4 = iVar18;
      if ((int)(iVar18 + -1 + (iVar18 + -1 >> 0x1f & 0x1fU)) >> 5 < (int)TStack_3d8._0_4_)
      goto LAB_1460b37a0;
      uVar35 = puVar27[lVar26 + 1];
    }
    TStack_3d8._4_4_ = -uVar35 & uVar35;
    uVar31 = (ulonglong)(uint)TStack_3d8._4_4_ * 2 + 1;
    lVar26 = 0x3f;
    if (uVar31 != 0) {
      for (; uVar31 >> lVar26 == 0; lVar26 = lVar26 + -1) {
      }
    }
    local_258 = (int)lVar26;
    iStack_3c4 = local_258 + -1 + iVar39;
    if (iVar18 < iStack_3c4) {
      iStack_3c4 = iVar18;
    }
  }
LAB_1460b37a0:
  iStack_3b8 = *(int *)&(param_1->SubSequences).field_0x8 -
               *(int *)&(param_1->SubSequences).field_0x34;
  uVar35 = *(uint *)&(param_1->SubSequences).field_0x28;
  iStack_3c8 = -1;
  uVar41 = uVar35 & 0xffffffe0;
  uStack_208 = CONCAT44(iStack_3c4,0xffffffff);
  local_3c0 = CONCAT44(local_5c,iVar39);
  TStack_218 = TStack_3d8;
  iVar39 = (int)uVar35 >> 5;
  uStack_1f8 = CONCAT17(bStack_3b1,
                        CONCAT16(EStack_3b2,CONCAT15(uStack_3b3,CONCAT14(uStack_3b4,iStack_3b8))));
  local_200 = local_3c0;
  local_3d0.Data = (FScriptContainerElement *)puVar7;
  local_3b0 = local_3e0;
  local_220 = (UMovieSceneCompiledData *)local_3e0;
  local_210 = puVar7;
  if ((((int)uVar35 < 0) || (iVar18 < (int)uVar35)) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar17)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  uVar40 = *(uint *)&(param_1->SubSequences).field_0x28;
  if (uVar35 != uVar40) {
    puVar38 = *(undefined1 **)&(param_1->SubSequences).field_0x20;
    if (puVar38 == (undefined1 *)0x0) {
      puVar38 = puVar7;
    }
    uVar35 = -1 << ((byte)uVar35 & 0x1f) & *(uint *)(puVar38 + (longlong)iVar39 * 4);
    while (uVar35 == 0) {
      lVar26 = (longlong)iVar39;
      uVar41 = uVar41 + 0x20;
      iVar39 = iVar39 + 1;
      uVar35 = uVar40;
      if ((int)((uVar40 - 1) + ((int)(uVar40 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar39)
      goto LAB_1460b38b1;
      uVar35 = *(uint *)(puVar38 + lVar26 * 4 + 4);
    }
    uVar31 = (ulonglong)(-uVar35 & uVar35) * 2 + 1;
    lVar26 = 0x3f;
    if (uVar31 != 0) {
      for (; uVar31 >> lVar26 == 0; lVar26 = lVar26 + -1) {
      }
    }
    local_248 = (int)lVar26;
    uVar35 = local_248 + -1 + uVar41;
    if ((int)uVar40 < (int)uVar35) {
      uVar35 = uVar40;
    }
  }
LAB_1460b38b1:
  while( true ) {
    pUVar16 = local_220;
    if ((int)local_220->_padding_ - *(int *)&(local_220->EvaluationTemplate).Tracks.field_0xc !=
        (int)uStack_1f8) {
      local_418 = 0;
      `TSparseArray<TSparseSetElement<TTuple<FMovieSceneSequenceID,FMovieSceneSubSequenceData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_418);
    }
    TVar36 = local_3b0;
    if (((uStack_208._4_4_ == uVar35) && (local_210 == puVar7)) && (pUVar16 == local_3b0.DebugPtr))
    break;
    pUVar19 = FMovieSceneSubSequenceData::GetSequence
                        ((FMovieSceneSubSequenceData *)
                         ((longlong)(int)uStack_208._4_4_ * 0x120 + pUVar16->_padding_ + 8));
    if (pUVar19 != (UMovieSceneSequence *)0x0) {
      GetDataID(this,(UMovieSceneSequence *)&local_3a8);
      Compile(this,local_3a8,pUVar19,this->NetworkMask);
    }
    uStack_208 = CONCAT44(uStack_208._4_4_,(uint)uStack_208 & ~TStack_218._4_4_);
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
              ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)&TStack_218.ObjectPtr);
  }
  iVar18 = 0;
  pTVar32 = (TRange<FFrameNumber> *)((longlong)&param_2->_padding_ + 4);
  local_3f0 = (void *)0x0;
  local_3e8 = 0;
  local_260 = pTVar32;
  FMovieSceneEvaluationTree::IterateFromLowerBound
            ((FMovieSceneEvaluationTree *)&param_1->Tree,&local_388,pTVar32->LowerBound);
  do {
    local_414 = iVar18;
    if (((local_388.CurrentNodeHandle.ChildrenHandle.EntryIndex == -1) &&
        (local_388.CurrentNodeHandle.Index != 0)) ||
       (bVar17 = TRange<FFrameNumber>::Overlaps(&local_150,pTVar32), !bVar17)) {
      if (local_3f0 != (void *)0x0) {
        FMemory::Free(local_3f0);
      }
      return;
    }
    FVar9.Index = local_388.CurrentNodeHandle.Index;
    FVar9.ChildrenHandle.EntryIndex = local_388.CurrentNodeHandle.ChildrenHandle.EntryIndex;
    TMovieSceneEvaluationTreeDataIterator<FMovieSceneSubSequenceTreeEntry>::
    TMovieSceneEvaluationTreeDataIterator<FMovieSceneSubSequenceTreeEntry>
              (&local_178,&(param_1->Tree).Data,FVar9);
    local_320 = local_178.DataIndex;
    uStack_31c = local_178._20_4_;
    local_330 = local_178.Tree;
    uStack_328 = (TMovieSceneEvaluationTree<FMovieSceneSubSequenceTreeEntry> *)local_178.CurrentNode
    ;
    TMovieSceneEvaluationTreeDataIterator<FMovieSceneSubSequenceTreeEntry>::
    TMovieSceneEvaluationTreeDataIterator<FMovieSceneSubSequenceTreeEntry>
              (&local_1b8,local_178.Tree,(FMovieSceneEvaluationTreeNodeHandle)0xffffffffffffffff);
    local_3a0 = local_330;
    local_408 = local_320;
    this_01 = local_330;
    pTVar42 = uStack_328;
    uVar35 = local_320;
LAB_1460b3a20:
    if (((this_01 != local_1b8.Tree) ||
        (pTVar42 !=
         (TMovieSceneEvaluationTree<FMovieSceneSubSequenceTreeEntry> *)local_1b8.CurrentNode)) ||
       (uVar35 != local_1b8.DataIndex)) {
      pTVar20 = TMovieSceneEvaluationTree<FMovieSceneSubSequenceTreeEntry>::GetDataForSingleNode
                          (this_01,&local_140,(FMovieSceneEvaluationTreeNode *)pTVar42);
      uVar41 = 0;
      if ((int)uVar35 < pTVar20->ArrayNum) {
        uVar41 = ~uVar35 >> 0x1f;
      }
      if ((uVar41 == 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar17)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      pFVar6 = pTVar20->DataPtr;
      local_40c.Value = pFVar6[(int)uVar35].SequenceID.Value;
      if ((local_40c.Value != 0) &&
         (*(int *)&(param_1->SubSequences).field_0x8 !=
          *(int *)&((TVar36.DebugPtr)->EvaluationTemplate).Tracks.field_0xc)) {
        puVar7 = *(undefined1 **)&((TVar36.DebugPtr)->EvaluationTemplate).Tracks.field_0x18;
        puVar38 = &((TVar36.DebugPtr)->EvaluationTemplate).Tracks.field_0x10;
        if (puVar7 != (undefined1 *)0x0) {
          puVar38 = puVar7;
        }
        uVar41 = *(uint *)(puVar38 +
                          (ulonglong)
                          (*(int *)&((TVar36.DebugPtr)->EvaluationTemplate).Tracks.field_0x20 - 1U &
                          local_40c.Value) * 4);
        if (uVar41 != 0xffffffff) {
          do {
            puVar27 = (uint *)((longlong)(int)uVar41 * 0x120 + (TVar36.DebugPtr)->_padding_);
            if (*puVar27 == local_40c.Value) {
              this_00 = (FMovieSceneSubSequenceData *)(puVar27 + 2);
              if (puVar27 == (uint *)0x0) {
                this_00 = (FMovieSceneSubSequenceData *)0x0;
              }
              if (this_00 == (FMovieSceneSubSequenceData *)0x0) goto LAB_1460b3b16;
              goto LAB_1460b3b3c;
            }
            uVar41 = puVar27[0x46];
          } while (uVar41 != 0xffffffff);
        }
      }
      this_00 = (FMovieSceneSubSequenceData *)0x0;
LAB_1460b3b16:
      bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("SubData",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\Compilation\\MovieSceneCompiledDataManager.cpp"
                          ,0x48f,
                          L"Sub data could not be found for a sequence that exists in the sub sequence tree - this indicates an error while populating the sub sequence hierarchy tree."
                         );
      if (bVar17) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
LAB_1460b3b3c:
      pUVar19 = FMovieSceneSubSequenceData::GetSequence(this_00);
      if (pUVar19 != (UMovieSceneSequence *)0x0) {
        uStack_34c = 0;
        local_350 = CONCAT31(local_350._1_3_,2);
        local_318._4_8_ = ZEXT48(local_350);
        local_348._4_4_ = 0;
        local_348._0_1_ = 2;
        local_318._12_8_ = ZEXT48((uint)local_348._0_4_);
        local_318._0_4_ = 0;
        local_318[0x24] = 0;
        local_318._40_8_ = 0x3f800000;
        local_288 = (FMovieSceneCompiledDataEntry *)0x0;
        pFStack_280 = (FMovieSceneEvaluationTemplate *)0x0;
        local_2e8 = 0;
        local_2e0 = (FMovieSceneNestedSequenceTransform *)0x0;
        local_2d8 = 0;
        local_2d0 = (FScriptContainerElement *)0x0;
        local_2c8 = 0;
        local_2c0 = 0;
        local_2b8 = (FScriptContainerElement *)0x0;
        local_2b0 = 0;
        local_2a8 = 0;
        local_2a0 = 0;
        local_29e = 0;
        local_298 = &___7FMovieSceneCompileDataManagerGenerator__6B_;
        local_290 = (UMovieSceneCompiledDataManager *)0x0;
        local_318._20_8_ = local_318._4_8_;
        local_318._28_8_ = local_318._12_8_;
        pFVar21 = FGatherParameters::CreateForSubData
                            ((FGatherParameters *)param_2,&local_110,this_00,local_40c);
        local_318._0_4_ = (pFVar21->SequenceID).Value;
        local_318._4_8_ = (pFVar21->RootClampRange).LowerBound;
        local_318._12_8_ = (pFVar21->RootClampRange).UpperBound;
        local_318._20_8_ = (pFVar21->LocalClampRange).LowerBound;
        local_318._28_8_ = (pFVar21->LocalClampRange).UpperBound;
        local_318[0x24] = pFVar21->Flags;
        FMovieSceneSequenceTransform::operator=
                  ((FMovieSceneSequenceTransform *)(local_318 + 0x28),
                   &pFVar21->RootToSequenceTransform);
        pFVar1 = &pFVar21->StartTimeBreadcrumbs;
        if ((FMovieSceneTransformBreadcrumbs *)&local_2d0 != pFVar1) {
          if (local_2d0 != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_2d0);
          }
          local_2d0 = (pFVar1->Breadcrumbs).AllocatorInstance.Data;
          (pFVar1->Breadcrumbs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_2c8._0_4_ = (pFVar21->StartTimeBreadcrumbs).Breadcrumbs.ArrayNum;
          local_2c8._4_4_ = (pFVar21->StartTimeBreadcrumbs).Breadcrumbs.ArrayMax;
          (pFVar21->StartTimeBreadcrumbs).Breadcrumbs.ArrayNum = 0;
          (pFVar21->StartTimeBreadcrumbs).Breadcrumbs.ArrayMax = 0;
        }
        local_2c0 = (pFVar21->StartTimeBreadcrumbs).Mode;
        pFVar1 = &pFVar21->EndTimeBreadcrumbs;
        if ((FMovieSceneTransformBreadcrumbs *)&local_2b8 != pFVar1) {
          if (local_2b8 != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_2b8);
          }
          local_2b8 = (pFVar1->Breadcrumbs).AllocatorInstance.Data;
          (pFVar1->Breadcrumbs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_2b0._0_4_ = (pFVar21->EndTimeBreadcrumbs).Breadcrumbs.ArrayNum;
          local_2b0._4_4_ = (pFVar21->EndTimeBreadcrumbs).Breadcrumbs.ArrayMax;
          (pFVar21->EndTimeBreadcrumbs).Breadcrumbs.ArrayNum = 0;
          (pFVar21->EndTimeBreadcrumbs).Breadcrumbs.ArrayMax = 0;
        }
        local_2a8 = (pFVar21->EndTimeBreadcrumbs).Mode;
        local_2a0 = pFVar21->HierarchicalBias;
        local_29e = pFVar21->AccumulatedFlags;
        local_29d = pFVar21->NetworkMask;
        if (local_110.EndTimeBreadcrumbs.Breadcrumbs.AllocatorInstance.Data !=
            (FScriptContainerElement *)0x0) {
          FMemory::Free(local_110.EndTimeBreadcrumbs.Breadcrumbs.AllocatorInstance.Data);
        }
        if (local_110.StartTimeBreadcrumbs.Breadcrumbs.AllocatorInstance.Data !=
            (FScriptContainerElement *)0x0) {
          FMemory::Free(local_110.StartTimeBreadcrumbs.Breadcrumbs.AllocatorInstance.Data);
        }
        DestructItems<FMovieSceneNestedSequenceTransform,int>
                  ((FMovieSceneNestedSequenceTransform *)
                   local_110.RootToSequenceTransform.NestedTransforms.AllocatorInstance.Data,
                   local_110.RootToSequenceTransform.NestedTransforms.ArrayNum);
        if ((FMovieSceneNestedSequenceTransform *)
            local_110.RootToSequenceTransform.NestedTransforms.AllocatorInstance.Data !=
            (FMovieSceneNestedSequenceTransform *)0x0) {
          FMemory::Free(local_110.RootToSequenceTransform.NestedTransforms.AllocatorInstance.Data);
        }
        local_290 = (param_2->TemplateGenerator).CompiledDataManager;
        local_288 = (param_2->TemplateGenerator).Entry;
        pFStack_280 = (param_2->TemplateGenerator).Template;
        local_318[0x24] = local_318[0x24] | pFVar6[(int)uVar35].Flags;
        pTVar22 = FMovieSceneSequenceTransform::ComputeTraversedHull
                            ((FMovieSceneSequenceTransform *)(local_318 + 0x28),local_90,&local_198)
        ;
        uVar35 = local_368;
        local_398 = CONCAT71(local_398._1_7_,2);
        local_398 = local_398 & 0xffffffff;
        uStack_390 = CONCAT71(uStack_390._1_7_,2);
        uStack_390 = uStack_390 & 0xffffffff;
        if ((pTVar22->LowerBound).Type.Value != '\x02') {
          local_254._0_1_ = (pTVar22->LowerBound).Type;
          local_254._1_3_ = *(undefined3 *)&(pTVar22->LowerBound).field_0x1;
          local_254._4_4_ = (pTVar22->LowerBound).Value.FrameNumber;
          local_240 = (pTVar22->LowerBound).Value;
          local_24c = (pTVar22->LowerBound).Value.SubFrame;
          FVar25 = local_240.FrameNumber.Value;
          if (((undefined1)local_254 == '\x01') && (local_240.SubFrame == 0.0)) {
            local_340 = RestoreState;
            local_398 = CONCAT44(FVar25.Value,_local_340);
            iStack_33c = FVar25.Value;
          }
          else {
            iStack_334 = FVar25.Value + 1;
            local_338 = CONCAT31(local_338._1_3_,1);
            local_398 = CONCAT44(iStack_334,local_338);
          }
        }
        if ((pTVar22->UpperBound).Type.Value != '\x02') {
          iStack_364 = (pTVar22->UpperBound).Value.FrameNumber.Value;
          local_368 = local_368 & 0xffffff00;
          uStack_390 = CONCAT44(iStack_364,uVar35) & 0xffffffffffffff00;
        }
        local_318._20_8_ = local_398;
        local_318._28_8_ = uStack_390;
        GetDataID(this,(UMovieSceneSequence *)local_410);
        if ((local_410 == (undefined1  [4])0xffffffff) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("SubDataID.IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\Compilation\\MovieSceneCompiledDataManager.cpp"
                                ,0x49a,L""), bVar17)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        lVar26 = *(longlong *)&this->CompiledDataEntries;
        lVar28 = (longlong)(int)local_410;
        pTVar3 = (TObjectPtr<UMovieSceneCompiledData>_u_0 *)(lVar26 + lVar28 * 0x30);
        local_3e0 = *pTVar3;
        TStack_3d8 = pTVar3[1];
        local_3d0.Data = (FScriptContainerElement *)0x0;
        iStack_3c8 = *(int *)(lVar26 + 0x18 + lVar28 * 0x30);
        lVar33 = (longlong)iStack_3c8;
        _Src = *(void **)(lVar26 + 0x10 + lVar28 * 0x30);
        if (iStack_3c8 == 0) {
          iStack_3c4 = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,4,iStack_3c8,0,&local_3d0,iStack_3c8,&iStack_3c4);
          memcpy(local_3d0.Data,_Src,lVar33 << 3);
        }
        local_3c0 = *(longlong *)(lVar26 + 0x20 + lVar28 * 0x30);
        iStack_3b8 = *(int *)(lVar26 + 0x28 + lVar28 * 0x30);
        uStack_3b4 = *(undefined1 *)(lVar26 + 0x2c + lVar28 * 0x30);
        uStack_3b3 = *(undefined1 *)(lVar26 + 0x2d + lVar28 * 0x30);
        EStack_3b2 = *(EMovieSceneSequenceCompilerMask *)(lVar26 + 0x2e + lVar28 * 0x30);
        bStack_3b1 = *(byte *)(lVar26 + 0x2f + lVar28 * 0x30);
        if (*(int *)&(this->TrackTemplates).field_0x8 != *(int *)&(this->TrackTemplates).field_0x34)
        {
          puVar7 = *(undefined1 **)&(this->TrackTemplates).field_0x40;
          puVar38 = &(this->TrackTemplates).field_0x38;
          if (puVar7 != (undefined1 *)0x0) {
            puVar38 = puVar7;
          }
          iVar18 = *(int *)(puVar38 +
                           (ulonglong)
                           (*(int *)&(this->TrackTemplates).field_0x48 - 1U & (uint)local_410) * 4);
          if (iVar18 != -1) {
            do {
              if ((undefined1  [4])
                  *(uint *)((longlong)iVar18 * 0x170 + *(longlong *)&this->TrackTemplates) ==
                  local_410) {
                Gather(this,(FMovieSceneCompiledDataEntry *)&local_3e0.ObjectPtr,pUVar19,
                       (FTrackGatherParameters *)local_318,param_3);
                break;
              }
              iVar18 = *(int *)((longlong)iVar18 * 0x170 + 0x168 +
                               *(longlong *)&this->TrackTemplates);
            } while (iVar18 != -1);
          }
        }
        uVar40 = 0;
        EVar5 = *(EMovieSceneSequenceFlags *)
                 (*(longlong *)&this->CompiledDataEntries + 0x2c + (longlong)(int)local_410 * 0x30);
        param_3->AccumulatedMask = param_3->AccumulatedMask | EStack_3b2;
        param_3->InheritedFlags = param_3->InheritedFlags | EVar5 & InheritedFlags;
        uVar35 = (uint)local_3e8;
        uVar41 = 0;
        if (0 < (int)(uint)local_3e8) {
          do {
            iVar18 = (uVar35 >> 1) + uVar41;
            uVar40 = uVar41;
            if (*(uint *)((longlong)local_3f0 + (longlong)iVar18 * 0x10) < local_40c.Value) {
              uVar40 = iVar18 + (uVar35 & 1);
            }
            uVar11 = uVar35 >> 1;
            uVar35 = uVar35 >> 1;
            uVar41 = uVar40;
          } while (uVar11 != 0);
        }
        if ((((int)uVar40 < (int)(uint)local_3e8) &&
            (*(uint *)((longlong)local_3f0 + (longlong)(int)uVar40 * 0x10) <= local_40c.Value)) &&
           (uVar40 != 0xffffffff)) {
          uVar35 = 0;
          if ((int)uVar40 < (int)(uint)local_3e8) {
            uVar35 = ~uVar40 >> 0x1f;
          }
          if ((uVar35 == 0) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar17)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          piVar29 = (int *)((longlong)local_3f0 + (longlong)(int)uVar40 * 0x10 + 4);
          if (piVar29 == (int *)0x0) goto LAB_1460b40df;
          if ((*piVar29 == -1) || (*piVar29 != local_414 + -1)) goto LAB_1460b4123;
          bVar17 = true;
        }
        else {
LAB_1460b40df:
          pTVar23 = TSortedMap<FMovieSceneSequenceID,`UMovieSceneCompiledDataManager::CompileSubSequences'::__l2::FSubSequenceItMetaData,TSizedDefaultAllocator<32>,TLess<FMovieSceneSequenceID_const_&>_>
                    ::AllocateMemoryForEmplace<FMovieSceneSequenceID_const_&>(&local_3f0,&local_40c)
          ;
          piVar29 = (int *)&pTVar23->field_0x4;
          local_270 = 0;
          *(uint *)pTVar23 = local_40c.Value;
          *piVar29 = 0xffffffff;
          pTVar23->field_0xc = 0;
          local_278 = 0xffffffff;
LAB_1460b4123:
          bVar17 = false;
        }
        if (((bStack_3b1 & 1) != 0) && (!bVar17)) {
          local_238 = CONCAT17(local_388.CurrentRange.LowerBound.Value.Value._3_1_,
                               CONCAT16(local_388.CurrentRange.LowerBound.Value.Value._2_1_,
                                        CONCAT15(local_388.CurrentRange.LowerBound.Value.Value._1_1_
                                                 ,CONCAT14((undefined1)
                                                           local_388.CurrentRange.LowerBound.Value.
                                                           Value,CONCAT13(local_388.CurrentRange.
                                                                          LowerBound._3_1_,
                                                                          CONCAT12(local_388.
                                                                                   CurrentRange.
                                                                                   LowerBound._2_1_,
                                                                                   CONCAT11(
                                                  local_388.CurrentRange.LowerBound._1_1_,
                                                  local_388.CurrentRange.LowerBound.Type.Value))))))
                              );
          pFVar4 = &param_3->DeterminismData;
          uVar12 = CONCAT16(local_388.CurrentRange.LowerBound.Value.Value._2_1_,
                            CONCAT15(local_388.CurrentRange.LowerBound.Value.Value._1_1_,
                                     CONCAT14((undefined1)
                                              local_388.CurrentRange.LowerBound.Value.Value,
                                              CONCAT13(local_388.CurrentRange.LowerBound._3_1_,
                                                       CONCAT12(local_388.CurrentRange.LowerBound.
                                                                _2_1_,CONCAT11(local_388.
                                                                               CurrentRange.
                                                                               LowerBound._1_1_,
                                                                               local_388.
                                                                               CurrentRange.
                                                                               LowerBound.Type.Value
                                                                              ))))));
          local_330 = (TMovieSceneEvaluationTree<FMovieSceneSubSequenceTreeEntry> *)
                      CONCAT17(local_388.CurrentRange.LowerBound.Value.Value._3_1_,uVar12);
          uStack_328 = (TMovieSceneEvaluationTree<FMovieSceneSubSequenceTreeEntry> *)
                       CONCAT17(local_388.CurrentRange.UpperBound.Value.Value._3_1_,
                                CONCAT16(local_388.CurrentRange.UpperBound.Value.Value._2_1_,
                                         CONCAT15(local_388.CurrentRange.UpperBound.Value.Value.
                                                  _1_1_,CONCAT14((undefined1)
                                                                 local_388.CurrentRange.UpperBound.
                                                                 Value.Value,
                                                                 CONCAT13(local_388.CurrentRange.
                                                                          UpperBound._3_1_,
                                                                          CONCAT12(local_388.
                                                                                   CurrentRange.
                                                                                   UpperBound._2_1_,
                                                                                   CONCAT11(
                                                  local_388.CurrentRange.UpperBound._1_1_,
                                                  local_388.CurrentRange.UpperBound.Type.Value))))))
                               );
          uVar31 = local_238;
          if (local_388.CurrentRange.LowerBound.Type.Value == '\x02') {
            uVar31 = (ulonglong)uVar12 & 0xff;
            bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("!InLowerBound.IsOpen()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\MovieSceneTimeHelpers.h"
                                ,0x2c,L"");
            if (bVar17) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
          }
          uVar35 = 0;
          if ((char)uVar31 == '\0') {
            uVar35 = 4;
          }
          iVar18 = *(int *)((longlong)
                            &`struct_FFrameNumber___cdecl_UE::MovieScene::DiscreteInclusiveLower(TRangeBound<FFrameNumber>_const&___ptr64)'
                             ::__l2::Offsets + (ulonglong)uVar35);
          if (((char)uVar31 == '\x02') &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Type != ERangeBoundTypes::Open",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                                  ,99,L""), bVar17)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          uStack_400 = uStack_400 & 0xfffffffe;
          local_404 = local_238._4_4_ + iVar18;
          pFVar8 = (pFVar4->Fences).AllocatorInstance.Data;
          if (((pFVar8 <= (FScriptContainerElement *)&local_404) &&
              ((FScriptContainerElement *)&local_404 <
               pFVar8 + (longlong)(param_3->DeterminismData).Fences.ArrayMax * 8)) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar17)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          iVar18 = (param_3->DeterminismData).Fences.ArrayNum;
          piVar2 = &(param_3->DeterminismData).Fences.ArrayMax;
          if (iVar18 == *piVar2) {
            iVar18 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x408,(ForAnyElementType *)pFVar4,piVar2);
          }
          (param_3->DeterminismData).Fences.ArrayNum = iVar18 + 1;
          *(ulonglong *)((pFVar4->Fences).AllocatorInstance.Data + (longlong)iVar18 * 8) =
               CONCAT44(uStack_400,local_404);
        }
        TVar15.Value = local_388.CurrentRange.UpperBound.Type.Value;
        if ((bStack_3b1 & 2) != 0) {
          local_330 = (TMovieSceneEvaluationTree<FMovieSceneSubSequenceTreeEntry> *)
                      CONCAT17(local_388.CurrentRange.LowerBound.Value.Value._3_1_,
                               CONCAT16(local_388.CurrentRange.LowerBound.Value.Value._2_1_,
                                        CONCAT15(local_388.CurrentRange.LowerBound.Value.Value._1_1_
                                                 ,CONCAT14((undefined1)
                                                           local_388.CurrentRange.LowerBound.Value.
                                                           Value,CONCAT13(local_388.CurrentRange.
                                                                          LowerBound._3_1_,
                                                                          CONCAT12(local_388.
                                                                                   CurrentRange.
                                                                                   LowerBound._2_1_,
                                                                                   CONCAT11(
                                                  local_388.CurrentRange.LowerBound._1_1_,
                                                  local_388.CurrentRange.LowerBound.Type.Value))))))
                              );
          uStack_328 = (TMovieSceneEvaluationTree<FMovieSceneSubSequenceTreeEntry> *)
                       CONCAT17(local_388.CurrentRange.UpperBound.Value.Value._3_1_,
                                CONCAT16(local_388.CurrentRange.UpperBound.Value.Value._2_1_,
                                         CONCAT15(local_388.CurrentRange.UpperBound.Value.Value.
                                                  _1_1_,CONCAT14((undefined1)
                                                                 local_388.CurrentRange.UpperBound.
                                                                 Value.Value,
                                                                 CONCAT13(local_388.CurrentRange.
                                                                          UpperBound._3_1_,
                                                                          CONCAT12(local_388.
                                                                                   CurrentRange.
                                                                                   UpperBound._2_1_,
                                                                                   CONCAT11(
                                                  local_388.CurrentRange.UpperBound._1_1_,
                                                  local_388.CurrentRange.UpperBound.Type.Value))))))
                               );
          local_230 = local_388.CurrentRange.UpperBound.Type.Value;
          uStack_22f = local_388.CurrentRange.UpperBound._1_1_;
          uStack_22e = local_388.CurrentRange.UpperBound._2_1_;
          uStack_22d = local_388.CurrentRange.UpperBound._3_1_;
          uStack_22c = CONCAT13(local_388.CurrentRange.UpperBound.Value.Value._3_1_,
                                CONCAT12(local_388.CurrentRange.UpperBound.Value.Value._2_1_,
                                         CONCAT11(local_388.CurrentRange.UpperBound.Value.Value.
                                                  _1_1_,(undefined1)
                                                        local_388.CurrentRange.UpperBound.Value.
                                                        Value)));
          if ((local_388.CurrentRange.UpperBound.Type.Value == '\x02') &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("!InUpperBound.IsOpen()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\MovieSceneTimeHelpers.h"
                                  ,0x44,L""), bVar17)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          uVar35 = 0;
          if (TVar15.Value == '\x01') {
            uVar35 = 4;
          }
          iVar18 = *(int *)((longlong)
                            &`struct_FFrameNumber___cdecl_UE::MovieScene::DiscreteExclusiveUpper(TRangeBound<FFrameNumber>_const&___ptr64)'
                             ::__l2::Offsets + (ulonglong)uVar35);
          if ((TVar15.Value == '\x02') &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Type != ERangeBoundTypes::Open",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                                  ,99,L""), bVar17)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          if (&local_244 != piVar29 + 1) {
            piVar29[1] = uStack_22c + iVar18;
            *(undefined1 *)(piVar29 + 2) = 1;
          }
        }
        if (((this_00->OuterToInnerTransform).NestedTransforms.ArrayNum != 0) &&
           (((bStack_3b1 & 2) != 0 || ((bStack_3b1 & 1) != 0)))) {
          local_1e8 = &local_228;
          iStack_17c = CONCAT13(local_388.CurrentRange.UpperBound.Value.Value._3_1_,
                                CONCAT12(local_388.CurrentRange.UpperBound.Value.Value._2_1_,
                                         CONCAT11(local_388.CurrentRange.UpperBound.Value.Value.
                                                  _1_1_,(undefined1)
                                                        local_388.CurrentRange.UpperBound.Value.
                                                        Value)));
          local_1f0 = UE::Core::Private::Function::
                      TFunctionRefCaller<`UMovieSceneCompiledDataManager::CompileSubSequences'::__l46::<lambda_1>,bool,FFrameTime>
                      ::Call;
          local_228 = param_3;
          if ((local_388.CurrentRange.UpperBound.Type.Value == '\x02') &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Type != ERangeBoundTypes::Open",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                                  ,99,L""), bVar17)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          uStack_15c = CONCAT13(local_388.CurrentRange.LowerBound.Value.Value._3_1_,
                                CONCAT12(local_388.CurrentRange.LowerBound.Value.Value._2_1_,
                                         CONCAT11(local_388.CurrentRange.LowerBound.Value.Value.
                                                  _1_1_,(undefined1)
                                                        local_388.CurrentRange.LowerBound.Value.
                                                        Value)));
          local_360.Value = iStack_17c;
          fStack_35c = 0.0;
          if ((local_388.CurrentRange.LowerBound.Type.Value == '\x02') &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Type != ERangeBoundTypes::Open",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                                  ,99,L""), bVar17)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          FVar13.SubFrame = fStack_35c;
          FVar13.FrameNumber.Value = local_360.Value;
          local_358 = uStack_15c;
          uStack_354 = 0;
          FVar14.SubFrame = 0.0;
          FVar14.FrameNumber.Value = uStack_15c;
          FMovieSceneSequenceTransform::ExtractBoundariesWithinRange
                    (&this_00->OuterToInnerTransform,FVar14,FVar13,
                     (TFunctionRef<bool___cdecl(FFrameTime)> *)&local_1f0);
        }
        *piVar29 = local_414;
        if (local_3d0.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_3d0.Data);
        }
        local_298 = &___7IMovieSceneTemplateGenerator__6B_;
        if (local_2b8 != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_2b8);
        }
        if (local_2d0 != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_2d0);
        }
        DestructItems<FMovieSceneNestedSequenceTransform,int>(local_2e0,(int)local_2d8);
        if (local_2e0 != (FMovieSceneNestedSequenceTransform *)0x0) {
          FMemory::Free(local_2e0);
        }
      }
      local_408 = local_408 + 1;
      while (this_01 = local_3a0, uVar35 = local_408, TVar36 = local_3b0, iVar18 = local_414,
            pTVar42 != (TMovieSceneEvaluationTree<FMovieSceneSubSequenceTreeEntry> *)0x0) {
        uVar41 = ((FEvaluationTreeEntryHandle *)&pTVar42->_padding_)[1].EntryIndex;
        if (uVar41 == 0xffffffff) {
          local_1c8 = 0;
          uStack_1c0 = 0;
          iVar39 = 0;
        }
        else {
          uVar40 = 0;
          if ((int)uVar41 < (local_3a0->Data).Entries.ArrayNum) {
            uVar40 = ~uVar41 >> 0x1f;
          }
          if ((uVar40 == 0) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar17)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          pFVar8 = (this_01->Data).Entries.AllocatorInstance.Data;
          uVar40 = *(uint *)(pFVar8 + (longlong)(int)uVar41 * 0xc);
          iVar39 = *(int *)(pFVar8 + (longlong)(int)uVar41 * 0xc + 4);
          uVar41 = 0;
          if ((int)uVar40 < (this_01->Data).Items.ArrayNum) {
            uVar41 = ~uVar40 >> 0x1f;
          }
          if ((uVar41 == 0) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar17)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          local_1d8 = (this_01->Data).Items.AllocatorInstance.Data + (longlong)(int)uVar40 * 0x30;
          iStack_1d0 = iVar39;
          if ((iVar39 < 0) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("ArrayNum >= 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0xfe,L""), iVar39 = iStack_1d0, bVar17)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
        }
        if ((-1 < (int)uVar35) && (TVar36 = local_3b0, iVar18 = local_414, (int)uVar35 < iVar39))
        break;
        if (((((FMovieSceneEvaluationTreeNodeHandle *)&pTVar42->_padding_)->ChildrenHandle).
             EntryIndex == -1) &&
           (((FMovieSceneEvaluationTreeNodeHandle *)&pTVar42->_padding_)->Index != 0)) {
          local_408 = 0;
          pTVar42 = (TMovieSceneEvaluationTree<FMovieSceneSubSequenceTreeEntry> *)0x0;
        }
        else {
          FVar9 = *(FMovieSceneEvaluationTreeNodeHandle *)&pTVar42->_padding_;
          FVar30 = FVar9.ChildrenHandle.EntryIndex;
          local_268 = FVar9;
          if (FVar30.EntryIndex == -1) {
            bVar17 = FVar9.Index == 0;
          }
          else {
            pTVar24 = TEvaluationTreeEntryContainer<FMovieSceneEvaluationTreeNode>::Get
                                ((TEvaluationTreeEntryContainer<FMovieSceneEvaluationTreeNode> *)
                                 &this_01->_padding_,&local_130,FVar30);
            if (((longlong)FVar9 < 0) || (pTVar24->ArrayNum <= FVar9.Index)) {
              bVar17 = false;
            }
            else {
              bVar17 = true;
            }
          }
          if ((!bVar17) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid(Handle)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\MovieSceneEvaluationTree.h"
                                  ,0x18d,L""), bVar17)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          if (FVar30.EntryIndex == -1) {
            local_408 = 0;
            pTVar42 = this_01;
          }
          else {
            pTVar24 = TEvaluationTreeEntryContainer<FMovieSceneEvaluationTreeNode>::Get
                                ((TEvaluationTreeEntryContainer<FMovieSceneEvaluationTreeNode> *)
                                 &this_01->_padding_,&local_120,FVar30);
            lVar26 = (longlong)local_268.Index;
            uVar35 = 0;
            if (local_268.Index < pTVar24->ArrayNum) {
              uVar35 = (uint)~local_268.Index >> 0x1f;
            }
            if ((uVar35 == 0) &&
               (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                    ,0x14f,
                                    L"Array index out of bounds: %lld from an array of size %lld"),
               bVar17)) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            local_408 = 0;
            pTVar42 = (TMovieSceneEvaluationTree<FMovieSceneSubSequenceTreeEntry> *)
                      (pTVar24->DataPtr + lVar26);
          }
        }
      }
      goto LAB_1460b3a20;
    }
    iVar39 = (uint)local_3e8;
    pcVar34 = (char *)((longlong)(int)(uint)local_3e8 * 0x10 + (longlong)local_3f0);
    pcVar37 = (char *)((longlong)local_3f0 + 0xc);
    while( true ) {
      if ((uint)local_3e8 != iVar39) {
        local_417[0] = 0;
        `TCheckedPointerIterator<TTuple<FMovieSceneSequenceID,`UMovieSceneCompiledDataManager::CompileSubSequences'::__l2::FSubSequenceItMetaData>,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(local_417);
      }
      if (pcVar37 + -0xc == pcVar34) break;
      if ((*(int *)(pcVar37 + -8) == iVar18 + -1) && (*pcVar37 != '\0')) {
        local_3fc = *(undefined4 *)(pcVar37 + -4);
        pFVar4 = &param_3->DeterminismData;
        pFVar8 = (pFVar4->Fences).AllocatorInstance.Data;
        uStack_3f8 = uStack_3f8 & 0xfffffffe;
        if ((pFVar8 <= (FScriptContainerElement *)&local_3fc) &&
           (((FScriptContainerElement *)&local_3fc <
             pFVar8 + (longlong)(param_3->DeterminismData).Fences.ArrayMax * 8 &&
            (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar17)))) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        iVar18 = (param_3->DeterminismData).Fences.ArrayNum;
        piVar29 = &(param_3->DeterminismData).Fences.ArrayMax;
        if (iVar18 == *piVar29) {
          iVar18 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x408,(ForAnyElementType *)pFVar4,piVar29);
        }
        (param_3->DeterminismData).Fences.ArrayNum = iVar18 + 1;
        *(ulonglong *)((pFVar4->Fences).AllocatorInstance.Data + (longlong)iVar18 * 8) =
             CONCAT44(uStack_3f8,local_3fc);
        iVar18 = local_414;
        if (*pcVar37 != '\0') {
          *pcVar37 = '\0';
        }
      }
      pcVar37 = pcVar37 + 0x10;
    }
    FMovieSceneEvaluationTreeRangeIterator::Iter(&local_388,true);
    iVar18 = iVar18 + 1;
    pTVar32 = local_260;
    TVar36 = local_3b0;
  } while( true );
}

// CompileTrack @ 1460b4870

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __thiscall
UMovieSceneCompiledDataManager::CompileTrack
          (UMovieSceneCompiledDataManager *this,FMovieSceneCompiledDataEntry *param_1,
          FMovieSceneBinding *param_2,UMovieSceneTrack *param_3,FTrackGatherParameters *param_4,
          TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> *param_5,
          FMovieSceneGatheredCompilerData *param_6)

{
  int *piVar1;
  FMovieSceneDeterminismData *pFVar2;
  byte bVar3;
  EMovieSceneCompletionMode EVar4;
  int iVar5;
  longlong lVar6;
  FScriptContainerElement *pFVar7;
  UObjectBaseUtility *this_00;
  code *pcVar8;
  TConsoleVariableData<bool> *pTVar9;
  bool bVar10;
  bool bVar11;
  FMovieSceneTrackIdentifier FVar12;
  int iVar13;
  UMovieSceneSequence *pUVar14;
  UClass *pUVar15;
  longlong *plVar16;
  FMovieSceneEvaluationTemplate *pFVar17;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  FMovieSceneTrackEvaluationField *pFVar18;
  FScriptContainerElement *pFVar19;
  FScriptContainerElement *pFVar20;
  undefined1 local_res20 [8];
  undefined4 local_a8;
  uint uStack_a4;
  uint local_a0;
  undefined4 uStack_9c;
  uint local_98;
  undefined4 uStack_94;
  undefined1 local_90 [8];
  FGuid local_88;
  undefined8 uStack_78;
  EMovieSceneCompletionMode local_70;
  UMovieSceneTrack *local_68;
  FMovieSceneCompileDataManagerGenerator *local_60;
  ulonglong local_58;
  ulonglong local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  if ((param_3 == (UMovieSceneTrack *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("Track",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\Compilation\\MovieSceneCompiledDataManager.cpp"
                          ,0x572,L""), bVar10)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  if ((param_5 == (TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("OutCompiledSignatures",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\Compilation\\MovieSceneCompiledDataManager.cpp"
                          ,0x573,L""), bVar10)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  bVar3 = *(byte *)((longlong)&param_4->_padding_ + 4);
  if ((bVar3 != 0) && (((bVar3 & 1) == 0 || ((param_3->EvalOptions).bEvaluateInPreroll == 0)))) {
    if ((bVar3 & 2) == 0) {
      return;
    }
    if ((param_3->EvalOptions).bEvaluateInPostroll == 0) {
      return;
    }
  }
  bVar10 = UMovieSceneTrack::IsEvalDisabled(param_3,true);
  if (bVar10) {
    return;
  }
  pUVar14 = FMovieSceneCompiledDataEntry::GetSequence(param_1);
  if ((pUVar14 == (UMovieSceneSequence *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("Sequence",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\Compilation\\MovieSceneCompiledDataManager.cpp"
                          ,0x584,L""), bVar10)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  if (param_3 == (UMovieSceneTrack *)0x0) goto LAB_1460b4ac5;
  pUVar15 = UMovieSceneTrackTemplateProducer::StaticClass();
  plVar16 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)param_3,pUVar15);
  if (plVar16 != (longlong *)0x0) {
    pFVar17 = TMapBase<int,FMovieSceneEvaluationTemplate,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FMovieSceneEvaluationTemplate,0>_>
              ::FindOrAddImpl<int_const_&>
                        ((TMapBase<int,FMovieSceneEvaluationTemplate,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FMovieSceneEvaluationTemplate,0>_>
                          *)&this->TrackTemplates,(param_1->DataID).Value,&(param_1->DataID).Value);
    if ((pFVar17 == (FMovieSceneEvaluationTemplate *)0x0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("TrackTemplate",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\Compilation\\MovieSceneCompiledDataManager.cpp"
                            ,0x58e,L""), bVar10)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    FVar12 = FMovieSceneTemplateGenerationLedger::FindTrackIdentifier
                       (&pFVar17->TemplateLedger,(FGuid *)local_90);
    if (*(int *)CONCAT44(extraout_var,FVar12.Value) == -1) {
      local_88.C = 0;
      local_88.D = 0;
      uStack_78 = 0;
      local_60 = &param_4->TemplateGenerator;
      local_68 = param_3;
      pUVar15 = Z_Construct_UClass_UMovieSceneSequence_NoRegister();
      UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)param_3,pUVar15);
      if (param_2 != (FMovieSceneBinding *)0x0) {
        local_88.C = (param_2->ObjectGuid).A;
        local_88.D = (param_2->ObjectGuid).B;
        uStack_78._0_4_ = (param_2->ObjectGuid).C;
        uStack_78._4_4_ = (param_2->ObjectGuid).D;
      }
      local_70 = pUVar14->DefaultCompletionMode;
      (**(code **)(*plVar16 + 0x10))(plVar16,&local_88.C);
      FVar12 = FMovieSceneTemplateGenerationLedger::FindTrackIdentifier
                         (&pFVar17->TemplateLedger,(FGuid *)(local_90 + 4));
      if (*(int *)CONCAT44(extraout_var_00,FVar12.Value) != -1) goto LAB_1460b4a54;
    }
    else {
LAB_1460b4a54:
      TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>::Emplace<FGuid_const_&>
                (param_5,&local_88,(bool *)((longlong)&param_3->_padding_ + 4));
    }
    param_6->AccumulatedMask = param_6->AccumulatedMask | EvaluationTemplate;
  }
  pUVar15 = Z_Construct_UClass_UMovieSceneDeterminismSource_NoRegister();
  plVar16 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)param_3,pUVar15);
  if (plVar16 != (longlong *)0x0) {
    local_a0 = CONCAT31(local_a0._1_3_,2);
    uStack_9c = 0;
    uStack_94 = 0;
    local_58 = (ulonglong)local_a0;
    local_98 = CONCAT31(local_98._1_3_,2);
    local_50 = (ulonglong)local_98;
    (**(code **)(*plVar16 + 0x10))(plVar16,&param_6->DeterminismData,&local_58);
  }
LAB_1460b4ac5:
  pFVar18 = UMovieSceneTrack::GetEvaluationField(param_3);
  pTVar9 = CVarAddKeepStateDeterminismFences.Ref;
  EVar4 = pUVar14->DefaultCompletionMode;
  bVar10 = IsInParallelGameThread();
  if (((!bVar10) && (bVar10 = IsInGameThread(), !bVar10)) &&
     (bVar10 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<6409875433831007945>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                          ,0x6c9,"GetShadowIndex() == 0"), bVar10)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  iVar5 = (pFVar18->Entries).ArrayNum;
  bVar10 = pTVar9->ShadowedValue[0];
  pFVar19 = (pFVar18->Entries).AllocatorInstance.Data;
  pFVar20 = pFVar19 + (longlong)iVar5 * 0x20;
  while( true ) {
    if ((pFVar18->Entries).ArrayNum != iVar5) {
      local_res20[0] = 0;
      `TCheckedPointerIterator<FMovieSceneTrackEvaluationFieldEntry_const_,int,0>::operator!='::__l2
      ::<lambda_1>::operator()(local_res20);
    }
    if (pFVar19 == pFVar20) break;
    if ((bVar10 != false) && (lVar6 = *(longlong *)pFVar19, lVar6 != 0)) {
      local_48 = *(undefined4 *)(lVar6 + 0xb0);
      uStack_44 = *(undefined4 *)(lVar6 + 0xb4);
      uStack_40 = *(undefined4 *)(lVar6 + 0xb8);
      uStack_3c = *(undefined4 *)(lVar6 + 0xbc);
      if (((char)*(undefined8 *)(lVar6 + 0xb8) != '\x02') &&
         ((*(char *)(lVar6 + 0x71) == '\0' ||
          ((*(char *)(lVar6 + 0x71) == '\x02' && (EVar4 == KeepState)))))) {
        uStack_a4 = uStack_a4 & 0xfffffffe;
        pFVar2 = &param_6->DeterminismData;
        pFVar7 = (pFVar2->Fences).AllocatorInstance.Data;
        local_a8 = uStack_3c;
        if ((pFVar7 <= (FScriptContainerElement *)&local_a8) &&
           (((FScriptContainerElement *)&local_a8 <
             pFVar7 + (longlong)(param_6->DeterminismData).Fences.ArrayMax * 8 &&
            (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar11)))) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        iVar13 = (param_6->DeterminismData).Fences.ArrayNum;
        piVar1 = &(param_6->DeterminismData).Fences.ArrayMax;
        if (iVar13 == *piVar1) {
          iVar13 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x408,(ForAnyElementType *)pFVar2,piVar1);
        }
        (param_6->DeterminismData).Fences.ArrayNum = iVar13 + 1;
        *(ulonglong *)((pFVar2->Fences).AllocatorInstance.Data + (longlong)iVar13 * 8) =
             CONCAT44(uStack_a4,local_a8);
      }
    }
    this_00 = *(UObjectBaseUtility **)pFVar19;
    if (this_00 != (UObjectBaseUtility *)0x0) {
      pUVar15 = Z_Construct_UClass_UMovieSceneDeterminismSource_NoRegister();
      plVar16 = UObjectBaseUtility::GetInterfaceAddress(this_00,pUVar15);
      if (plVar16 != (longlong *)0x0) {
        (**(code **)(*plVar16 + 0x10))(plVar16,&param_6->DeterminismData,pFVar19 + 8);
      }
    }
    pFVar19 = pFVar19 + 0x20;
  }
  return;
}

// CompileTrackTemplateField @ 1460b4cc0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __thiscall
UMovieSceneCompiledDataManager::CompileTrackTemplateField
          (UMovieSceneCompiledDataManager *this,FMovieSceneCompiledDataEntry *param_1,
          FMovieSceneSequenceHierarchy *param_2,FMovieSceneGatheredCompilerData *param_3)

{
  FCompileOnTheFlyData *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  FName FVar4;
  undefined8 uVar5;
  ForAnyElementType FVar6;
  TMovieSceneEvaluationTree<FCompileOnTheFlyData> *this_00;
  TMovieSceneEvaluationTree<FCompileOnTheFlyData> *pTVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  TArrayView<FCompileOnTheFlyData_const_,int> *pTVar11;
  longlong lVar12;
  TArrayView<FMovieSceneEvaluationTreeNode_const_,int> *pTVar13;
  FMovieSceneEvaluationTreeRangeIterator *pFVar14;
  uint uVar15;
  FEvaluationTreeEntryHandle FVar16;
  TMovieSceneEvaluationTree<FCompileOnTheFlyData> *pTVar17;
  FMovieSceneEvaluationTreeNodeHandle FVar18;
  uint uVar19;
  uint local_res20 [2];
  TArray<FCompileOnTheFlyData,TSizedDefaultAllocator<32>_> local_208;
  FMovieSceneEvaluationMetaData local_1f8;
  FMovieSceneEvaluationField local_1d8;
  FMovieSceneEvaluationGroup local_1a8;
  FMovieSceneEvaluationTreeNodeHandle local_178;
  FMovieSceneEvaluationField *local_170;
  TMovieSceneEvaluationTree<FCompileOnTheFlyData> *local_168;
  TMovieSceneEvaluationTree<FCompileOnTheFlyData> *pTStack_160;
  uint local_158;
  undefined4 uStack_154;
  FScriptContainerElement *local_148;
  int iStack_140;
  undefined8 local_138;
  undefined4 uStack_130;
  TRange<FFrameNumber> local_128;
  FMovieSceneEvaluationTreeRangeIterator local_118;
  TMovieSceneEvaluationTreeDataIterator<FCompileOnTheFlyData> local_f8;
  TMovieSceneEvaluationTreeDataIterator<FCompileOnTheFlyData> local_e0;
  TMovieSceneEvaluationTreeDataIterator<FMovieSceneSubSequenceTreeEntry> local_c8;
  TMovieSceneEvaluationTreeDataIterator<FMovieSceneSubSequenceTreeEntry> local_a8;
  TArrayView<FCompileOnTheFlyData_const_,int> local_88;
  TArrayView<FMovieSceneEvaluationTreeNode_const_,int> local_78;
  TArrayView<FMovieSceneEvaluationTreeNode_const_,int> local_68;
  FMovieSceneEvaluationTreeRangeIterator local_58;
  
  if ((param_3->AccumulatedMask & EvaluationTemplate) == None) {
    local_res20[0] = (param_1->DataID).Value;
    if (*(int *)&(this->TrackTemplateFields).field_0x8 !=
        *(int *)&(this->TrackTemplateFields).field_0x34) {
      TSet<TTuple<int,FMovieSceneEvaluationField>,TDefaultMapHashableKeyFuncs<int,FMovieSceneEvaluationField,0>,FDefaultSetAllocator>
      ::RemoveImpl<int>((TSet<TTuple<int,FMovieSceneEvaluationField>,TDefaultMapHashableKeyFuncs<int,FMovieSceneEvaluationField,0>,FDefaultSetAllocator>
                         *)&this->TrackTemplateFields,local_res20[0],(int *)local_res20);
      return;
    }
  }
  else {
    local_170 = TMapBase<int,FMovieSceneEvaluationField,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FMovieSceneEvaluationField,0>_>
                ::FindOrAddImpl<int_const_&>
                          ((TMapBase<int,FMovieSceneEvaluationField,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FMovieSceneEvaluationField,0>_>
                            *)&this->TrackTemplateFields,(param_1->DataID).Value,
                           &(param_1->DataID).Value);
    local_1d8.Ranges.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1d8.Ranges.ArrayNum = 0;
    local_1d8.Ranges.ArrayMax = 0;
    local_1d8.Groups.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1d8.Groups.ArrayNum = 0;
    local_1d8.Groups.ArrayMax = 0;
    local_1d8.MetaData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1d8.MetaData.ArrayNum = 0;
    local_1d8.MetaData.ArrayMax = 0;
    FMovieSceneEvaluationField::operator=(local_170,&local_1d8);
    FVar6.Data = local_1d8.MetaData.AllocatorInstance.Data;
    DestructItems<FMovieSceneEvaluationMetaData,int>
              ((FMovieSceneEvaluationMetaData *)local_1d8.MetaData.AllocatorInstance.Data,
               local_1d8.MetaData.ArrayNum);
    if ((FMovieSceneEvaluationMetaData *)FVar6.Data != (FMovieSceneEvaluationMetaData *)0x0) {
      FMemory::Free(FVar6.Data);
    }
    FVar6.Data = local_1d8.Groups.AllocatorInstance.Data;
    DestructItems<FMovieSceneEvaluationGroup,int>
              ((FMovieSceneEvaluationGroup *)local_1d8.Groups.AllocatorInstance.Data,
               local_1d8.Groups.ArrayNum);
    if ((FMovieSceneEvaluationGroup *)FVar6.Data != (FMovieSceneEvaluationGroup *)0x0) {
      FMemory::Free(FVar6.Data);
    }
    if (local_1d8.Ranges.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1d8.Ranges.AllocatorInstance.Data);
    }
    param_3->AccumulatedMask = param_3->AccumulatedMask | EvaluationTemplateField;
    local_208.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_208.ArrayNum = 0;
    local_208.ArrayMax = 0;
    FMovieSceneEvaluationTreeRangeIterator::FMovieSceneEvaluationTreeRangeIterator
              (&local_118,(FMovieSceneEvaluationTree *)param_3);
    while ((uVar5 = local_208._8_8_, FVar18.Index = local_118.CurrentNodeHandle.Index,
           FVar18.ChildrenHandle.EntryIndex = local_118.CurrentNodeHandle.ChildrenHandle.EntryIndex,
           local_118.CurrentNodeHandle.ChildrenHandle.EntryIndex != -1 ||
           (local_118.CurrentNodeHandle.Index == 0))) {
      iVar9 = local_208.ArrayMax;
      local_208._8_8_ = (ulonglong)(uint)local_208.ArrayMax << 0x20;
      if (((longlong)uVar5 < 0) && (iVar9 != 0)) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x24,4,0,&local_208.AllocatorInstance,0,&local_208.ArrayMax);
        FVar18.Index = local_118.CurrentNodeHandle.Index;
        FVar18.ChildrenHandle.EntryIndex = local_118.CurrentNodeHandle.ChildrenHandle.EntryIndex;
      }
      local_128.LowerBound = local_118.CurrentRange.LowerBound;
      local_128.UpperBound = local_118.CurrentRange.UpperBound;
      TMovieSceneEvaluationTreeDataIterator<FCompileOnTheFlyData>::
      TMovieSceneEvaluationTreeDataIterator<FCompileOnTheFlyData>
                (&local_e0,&param_3->TrackTemplates,FVar18);
      local_158 = local_e0.DataIndex;
      uStack_154 = local_e0._20_4_;
      local_168 = local_e0.Tree;
      pTStack_160 = (TMovieSceneEvaluationTree<FCompileOnTheFlyData> *)local_e0.CurrentNode;
      TMovieSceneEvaluationTreeDataIterator<FCompileOnTheFlyData>::
      TMovieSceneEvaluationTreeDataIterator<FCompileOnTheFlyData>
                (&local_f8,local_e0.Tree,(FMovieSceneEvaluationTreeNodeHandle)0xffffffffffffffff);
      this_00 = local_168;
      pTVar17 = pTStack_160;
      uVar19 = local_158;
LAB_1460b4ea7:
      if (((this_00 != local_f8.Tree) ||
          (pTVar17 != (TMovieSceneEvaluationTree<FCompileOnTheFlyData> *)local_f8.CurrentNode)) ||
         (uVar19 != local_f8.DataIndex)) {
        pTVar11 = TMovieSceneEvaluationTree<FCompileOnTheFlyData>::GetDataForSingleNode
                            (this_00,&local_88,(FMovieSceneEvaluationTreeNode *)pTVar17);
        uVar15 = 0;
        if ((int)uVar19 < pTVar11->ArrayNum) {
          uVar15 = ~uVar19 >> 0x1f;
        }
        if ((uVar15 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar8)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar1 = pTVar11->DataPtr + (int)uVar19;
        if (((local_208.AllocatorInstance.Data <= pFVar1) &&
            (pFVar1 < (FCompileOnTheFlyData *)
                      (local_208.AllocatorInstance.Data + (longlong)local_208.ArrayMax * 0x24))) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar8)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar9 = local_208.ArrayNum;
        if (local_208.ArrayNum == local_208.ArrayMax) {
          iVar9 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x424,&local_208.AllocatorInstance,&local_208.ArrayMax);
        }
        uVar19 = uVar19 + 1;
        local_208.ArrayNum = iVar9 + 1;
        FVar4 = pFVar1->EvaluationGroup;
        lVar12 = (longlong)iVar9;
        *(undefined8 *)(local_208.AllocatorInstance.Data + lVar12 * 0x24) = *(undefined8 *)pFVar1;
        *(FName *)(local_208.AllocatorInstance.Data + lVar12 * 0x24 + 8) = FVar4;
        uVar5 = *(undefined8 *)&(pFVar1->Track).TrackIdentifier;
        *(undefined8 *)(local_208.AllocatorInstance.Data + lVar12 * 0x24 + 0x10) =
             *(undefined8 *)&pFVar1->bRequiresInit;
        *(undefined8 *)(local_208.AllocatorInstance.Data + lVar12 * 0x24 + 0x10 + 8) = uVar5;
        *(int *)(local_208.AllocatorInstance.Data + lVar12 * 0x24 + 0x20) =
             (pFVar1->Child).ForcedTime.Value;
        pTVar7 = pTVar17;
        while (pTVar17 = pTVar7, pTVar17 != (TMovieSceneEvaluationTree<FCompileOnTheFlyData> *)0x0)
        {
          uVar15 = ((FEvaluationTreeEntryHandle *)&pTVar17->_padding_)[1].EntryIndex;
          if (uVar15 == 0xffffffff) {
            local_138 = 0;
            uStack_130 = 0;
            iVar9 = 0;
          }
          else {
            uVar10 = 0;
            if ((int)uVar15 < (this_00->Data).Entries.ArrayNum) {
              uVar10 = ~uVar15 >> 0x1f;
            }
            if ((uVar10 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            pFVar2 = (this_00->Data).Entries.AllocatorInstance.Data;
            uVar10 = *(uint *)(pFVar2 + (longlong)(int)uVar15 * 0xc);
            iVar9 = *(int *)(pFVar2 + (longlong)(int)uVar15 * 0xc + 4);
            uVar15 = 0;
            if ((int)uVar10 < (this_00->Data).Items.ArrayNum) {
              uVar15 = ~uVar10 >> 0x1f;
            }
            if ((uVar15 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            local_148 = (this_00->Data).Items.AllocatorInstance.Data + (longlong)(int)uVar10 * 0x24;
            iStack_140 = iVar9;
            if ((iVar9 < 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("ArrayNum >= 0",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                   ,0xfe,L""), iVar9 = iStack_140, bVar8)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
          }
          if ((-1 < (int)uVar19) && ((int)uVar19 < iVar9)) break;
          uVar19 = 0;
          if (((((FMovieSceneEvaluationTreeNodeHandle *)&pTVar17->_padding_)->ChildrenHandle).
               EntryIndex != -1) ||
             (pTVar7 = (TMovieSceneEvaluationTree<FCompileOnTheFlyData> *)0x0,
             ((FMovieSceneEvaluationTreeNodeHandle *)&pTVar17->_padding_)->Index == 0)) {
            FVar18 = *(FMovieSceneEvaluationTreeNodeHandle *)&pTVar17->_padding_;
            FVar16 = FVar18.ChildrenHandle.EntryIndex;
            local_178 = FVar18;
            if (FVar16.EntryIndex == -1) {
              bVar8 = FVar18.Index == 0;
            }
            else {
              pTVar13 = TEvaluationTreeEntryContainer<FMovieSceneEvaluationTreeNode>::Get
                                  ((TEvaluationTreeEntryContainer<FMovieSceneEvaluationTreeNode> *)
                                   &this_00->_padding_,&local_78,FVar16);
              if (((longlong)FVar18 < 0) || (pTVar13->ArrayNum <= FVar18.Index)) {
                bVar8 = false;
              }
              else {
                bVar8 = true;
              }
            }
            if ((!bVar8) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid(Handle)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\MovieSceneEvaluationTree.h"
                                   ,0x18d,L""), bVar8)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            pTVar7 = this_00;
            if (FVar16.EntryIndex != -1) {
              pTVar13 = TEvaluationTreeEntryContainer<FMovieSceneEvaluationTreeNode>::Get
                                  ((TEvaluationTreeEntryContainer<FMovieSceneEvaluationTreeNode> *)
                                   &this_00->_padding_,&local_68,FVar16);
              lVar12 = (longlong)local_178.Index;
              uVar15 = uVar19;
              if (local_178.Index < pTVar13->ArrayNum) {
                uVar15 = (uint)~local_178.Index >> 0x1f;
              }
              if ((uVar15 == 0) &&
                 (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                     ,0x14f,
                                     L"Array index out of bounds: %lld from an array of size %lld"),
                 bVar8)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              pTVar7 = (TMovieSceneEvaluationTree<FCompileOnTheFlyData> *)
                       (pTVar13->DataPtr + lVar12);
            }
          }
        }
        goto LAB_1460b4ea7;
      }
      AlgoImpl::
      IntroSortInternal<FCompileOnTheFlyData,int,FIdentityFunctor,TDereferenceWrapper<FCompileOnTheFlyData,bool___cdecl(FCompileOnTheFlyData_const_&,FCompileOnTheFlyData_const_&)>_>
                ((FCompileOnTheFlyData *)local_208.AllocatorInstance.Data,local_208.ArrayNum,
                 local_res20[0]._0_1_,
                 (TDereferenceWrapper<FCompileOnTheFlyData,bool___cdecl(FCompileOnTheFlyData_const_&,FCompileOnTheFlyData_const_&)>
                  )0x1460f9ec0);
      local_1a8.LUTIndices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1a8.LUTIndices.ArrayNum = 0;
      local_1a8.LUTIndices.ArrayMax = 0;
      local_1a8.TrackLUT.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1a8.TrackLUT.ArrayNum = 0;
      local_1a8.TrackLUT.ArrayMax = 0;
      local_1a8.SectionLUT.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1a8.SectionLUT.ArrayNum = 0;
      local_1a8.SectionLUT.ArrayMax = 0;
      PopulateEvaluationGroup(this,&local_208,&local_1a8);
      pFVar14 = FMovieSceneEvaluationTree::IterateFromLowerBound
                          ((FMovieSceneEvaluationTree *)&param_2->Tree,&local_58,
                           local_128.LowerBound);
      TMovieSceneEvaluationTreeDataIterator<FMovieSceneSubSequenceTreeEntry>::
      TMovieSceneEvaluationTreeDataIterator<FMovieSceneSubSequenceTreeEntry>
                (&local_c8,&(param_2->Tree).Data,pFVar14->CurrentNodeHandle);
      local_a8.Tree = local_c8.Tree;
      local_a8.CurrentNode = local_c8.CurrentNode;
      local_1f8.ActiveSequences.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1f8.ActiveSequences.ArrayNum = 0;
      local_1f8.ActiveSequences.ArrayMax = 0;
      local_1f8.ActiveEntities.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1f8.ActiveEntities.ArrayNum = 0;
      local_1f8.ActiveEntities.ArrayMax = 0;
      local_a8.DataIndex = local_c8.DataIndex;
      local_a8._20_4_ = local_c8._20_4_;
      PopulateMetaData(this,param_2,&local_208,&local_a8,&local_1f8);
      FMovieSceneEvaluationField::Add(local_170,&local_128,&local_1a8,&local_1f8);
      if (local_1f8.ActiveEntities.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1f8.ActiveEntities.AllocatorInstance.Data);
      }
      if (local_1f8.ActiveSequences.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1f8.ActiveSequences.AllocatorInstance.Data);
      }
      if (local_1a8.SectionLUT.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1a8.SectionLUT.AllocatorInstance.Data);
      }
      if (local_1a8.TrackLUT.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1a8.TrackLUT.AllocatorInstance.Data);
      }
      if (local_1a8.LUTIndices.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1a8.LUTIndices.AllocatorInstance.Data);
      }
      FMovieSceneEvaluationTreeRangeIterator::Iter(&local_118,true);
    }
    if ((FCompileOnTheFlyData *)local_208.AllocatorInstance.Data != (FCompileOnTheFlyData *)0x0) {
      FMemory::Free(local_208.AllocatorInstance.Data);
    }
  }
  return;
}

// ConsoleVariableSink @ 1460b7160

void __thiscall
UMovieSceneCompiledDataManager::ConsoleVariableSink(UMovieSceneCompiledDataManager *this)

{
  bool bVar1;
  undefined1 local_res8 [32];
  FGuid local_18;
  
  local_18.A = 0;
  local_18.B = 0;
  local_18.C = 0;
  local_18.D = 0;
  bVar1 = FGuid::Parse(&GMovieSceneCompilerVersion,&local_18);
  if (!bVar1) {
    `UMovieSceneCompiledDataManager::ConsoleVariableSink'::__l2::<lambda_1>::operator()(local_res8);
  }
  if (((local_18.D != (this->CompilerVersion).D || local_18.C != (this->CompilerVersion).C) ||
      local_18.B != (this->CompilerVersion).B) || local_18.A != (this->CompilerVersion).A) {
    DestroyAllData(this);
  }
  return;
}

// CopyCompiledData @ 1460b7d50

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __thiscall
UMovieSceneCompiledDataManager::CopyCompiledData
          (UMovieSceneCompiledDataManager *this,UMovieSceneSequence *param_1)

{
  TMap<FMovieSceneTrackIdentifier,FMovieSceneEvaluationTrack,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMovieSceneTrackIdentifier,FMovieSceneEvaluationTrack,0>_>
  *this_00;
  undefined8 uVar1;
  undefined8 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  UMovieSceneCompiledData *this_01;
  FMovieSceneSequenceHierarchy *pFVar6;
  FMovieSceneEvaluationTemplate *pFVar7;
  uint *puVar8;
  undefined1 *puVar9;
  FMovieSceneEntityComponentField *pFVar10;
  FMovieSceneCompiledDataID FVar11;
  longlong lVar12;
  FMovieSceneCompiledDataID local_res8;
  
  this_01 = UMovieSceneSequence::GetOrCreateCompiledData(param_1);
  UMovieSceneCompiledData::Reset(this_01);
  GetDataID(this,(UMovieSceneSequence *)&local_res8);
  Compile(this,local_res8,param_1,this->NetworkMask);
  FVar11.Value = local_res8.Value;
  pFVar6 = FindHierarchy(this,local_res8);
  if (pFVar6 != (FMovieSceneSequenceHierarchy *)0x0) {
    FMovieSceneSequenceHierarchy::operator=(&this_01->Hierarchy,pFVar6);
    this_01->AllocatedMask = this_01->AllocatedMask | Hierarchy;
    FVar11.Value = local_res8.Value;
  }
  pFVar7 = FindTrackTemplate(this,FVar11);
  if (pFVar7 != (FMovieSceneEvaluationTemplate *)0x0) {
    if (&this_01->EvaluationTemplate != pFVar7) {
      UE::Core::Private::
      CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
                ((ForElementType<FSetElementId> *)&(this_01->EvaluationTemplate).Tracks.field_0x38,
                 (int *)&(this_01->EvaluationTemplate).Tracks.field_0x48,
                 (ForElementType<FSetElementId> *)&(pFVar7->Tracks).field_0x38,
                 *(int *)&(pFVar7->Tracks).field_0x48);
      TSparseArray<TSparseSetElement<TTuple<FMovieSceneTrackIdentifier,FMovieSceneEvaluationTrack>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::operator=((TSparseArray<TSparseSetElement<TTuple<FMovieSceneTrackIdentifier,FMovieSceneEvaluationTrack>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)&this_01->EvaluationTemplate,
                  (TSparseArray<TSparseSetElement<TTuple<FMovieSceneTrackIdentifier,FMovieSceneEvaluationTrack>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)pFVar7);
    }
    this_00 = &(this_01->EvaluationTemplate).StaleTracks;
    if (this_00 != &pFVar7->StaleTracks) {
      UE::Core::Private::
      CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
                ((ForElementType<FSetElementId> *)
                 &(this_01->EvaluationTemplate).StaleTracks.field_0x38,
                 (int *)&(this_01->EvaluationTemplate).StaleTracks.field_0x48,
                 (ForElementType<FSetElementId> *)&(pFVar7->StaleTracks).field_0x38,
                 *(int *)&(pFVar7->StaleTracks).field_0x48);
      TSparseArray<TSparseSetElement<TTuple<FMovieSceneTrackIdentifier,FMovieSceneEvaluationTrack>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::operator=((TSparseArray<TSparseSetElement<TTuple<FMovieSceneTrackIdentifier,FMovieSceneEvaluationTrack>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this_00,
                  (TSparseArray<TSparseSetElement<TTuple<FMovieSceneTrackIdentifier,FMovieSceneEvaluationTrack>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)&pFVar7->StaleTracks);
    }
    uVar5 = (pFVar7->SequenceSignature).B;
    uVar3 = (pFVar7->SequenceSignature).C;
    uVar4 = (pFVar7->SequenceSignature).D;
    (this_01->EvaluationTemplate).SequenceSignature.A = (pFVar7->SequenceSignature).A;
    (this_01->EvaluationTemplate).SequenceSignature.B = uVar5;
    (this_01->EvaluationTemplate).SequenceSignature.C = uVar3;
    (this_01->EvaluationTemplate).SequenceSignature.D = uVar4;
    FMovieSceneTemplateGenerationLedger::operator=
              (&(this_01->EvaluationTemplate).TemplateLedger,&pFVar7->TemplateLedger);
    this_01->AllocatedMask = this_01->AllocatedMask | EvaluationTemplate;
    FVar11.Value = local_res8.Value;
  }
  if (*(int *)&(this->TrackTemplateFields).field_0x8 !=
      *(int *)&(this->TrackTemplateFields).field_0x34) {
    puVar9 = *(undefined1 **)&(this->TrackTemplateFields).field_0x40;
    if (puVar9 == (undefined1 *)0x0) {
      puVar9 = &(this->TrackTemplateFields).field_0x38;
    }
    uVar5 = *(uint *)(puVar9 + (ulonglong)
                               (*(int *)&(this->TrackTemplateFields).field_0x48 - 1U & FVar11.Value)
                               * 4);
    if (uVar5 != 0xffffffff) {
      do {
        puVar8 = (uint *)((longlong)(int)uVar5 * 0x40 + *(longlong *)&this->TrackTemplateFields);
        if (*puVar8 == FVar11.Value) {
          pFVar10 = (FMovieSceneEntityComponentField *)(puVar8 + 2);
          if (puVar8 == (uint *)0x0) {
            pFVar10 = (FMovieSceneEntityComponentField *)0x0;
          }
          if ((pFVar10 != (FMovieSceneEntityComponentField *)0x0) &&
             (param_1->bPlayableDirectly != false)) {
            FMovieSceneEvaluationField::operator=
                      (&this_01->TrackTemplateField,(FMovieSceneEvaluationField *)pFVar10);
            this_01->AllocatedMask = this_01->AllocatedMask | EvaluationTemplateField;
            FVar11.Value = local_res8.Value;
          }
          break;
        }
        uVar5 = puVar8[0xe];
      } while (uVar5 != 0xffffffff);
    }
  }
  if (*(int *)&(this->EntityComponentFields).field_0x8 !=
      *(int *)&(this->EntityComponentFields).field_0x34) {
    puVar9 = *(undefined1 **)&(this->EntityComponentFields).field_0x40;
    if (puVar9 == (undefined1 *)0x0) {
      puVar9 = &(this->EntityComponentFields).field_0x38;
    }
    uVar5 = *(uint *)(puVar9 + (ulonglong)
                               (*(int *)&(this->EntityComponentFields).field_0x48 - 1U &
                               FVar11.Value) * 4);
    if (uVar5 != 0xffffffff) {
      do {
        puVar8 = (uint *)((longlong)(int)uVar5 * 0x100 + *(longlong *)&this->EntityComponentFields);
        if (*puVar8 == FVar11.Value) {
          pFVar10 = (FMovieSceneEntityComponentField *)(puVar8 + 2);
          if (puVar8 == (uint *)0x0) {
            pFVar10 = (FMovieSceneEntityComponentField *)0x0;
          }
          if (pFVar10 != (FMovieSceneEntityComponentField *)0x0) {
            FMovieSceneEntityComponentField::operator=(&this_01->EntityComponentField,pFVar10);
            this_01->AllocatedMask = this_01->AllocatedMask | EntityComponentField;
            FVar11.Value = local_res8.Value;
          }
          break;
        }
        uVar5 = puVar8[0x3e];
      } while (uVar5 != 0xffffffff);
    }
  }
  lVar12 = (longlong)FVar11.Value * 0x30 + *(longlong *)&this->CompiledDataEntries;
  TArray<FMovieSceneDeterminismFence,TSizedDefaultAllocator<32>_>::operator=
            (&this_01->DeterminismFences,
             (TArray<FMovieSceneDeterminismFence,TSizedDefaultAllocator<32>_> *)(lVar12 + 0x10));
  uVar1 = *(undefined8 *)((longlong)&param_1->_padding_ + 4);
  uVar2 = *(undefined8 *)((longlong)&param_1->_padding_ + 4);
  (this_01->CompiledSignature).A = (int)uVar1;
  (this_01->CompiledSignature).B = (int)((ulonglong)uVar1 >> 0x20);
  (this_01->CompiledSignature).C = (int)uVar2;
  (this_01->CompiledSignature).D = (int)((ulonglong)uVar2 >> 0x20);
  uVar5 = (this->CompilerVersion).B;
  uVar3 = (this->CompilerVersion).C;
  uVar4 = (this->CompilerVersion).D;
  (this_01->CompilerVersion).A = (this->CompilerVersion).A;
  (this_01->CompilerVersion).B = uVar5;
  (this_01->CompilerVersion).C = uVar3;
  (this_01->CompilerVersion).D = uVar4;
  this_01->AccumulatedMask = *(EMovieSceneSequenceCompilerMask *)(lVar12 + 0x2e);
  this_01->AccumulatedFlags = *(EMovieSceneSequenceFlags *)(lVar12 + 0x2c);
  this_01->CompiledFlags = *(FMovieSceneCompiledSequenceFlagStruct *)(lVar12 + 0x2f);
  return;
}

// DestroyAllData @ 1460bc930

void __thiscall UMovieSceneCompiledDataManager::DestroyAllData(UMovieSceneCompiledDataManager *this)

{
  TMap<int,FMovieSceneSequenceHierarchy,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FMovieSceneSequenceHierarchy,0>_>
  *this_00;
  TMap<int,FMovieSceneEvaluationTemplate,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FMovieSceneEvaluationTemplate,0>_>
  *this_01;
  TMap<int,FMovieSceneEvaluationField,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FMovieSceneEvaluationField,0>_>
  *this_02;
  TMap<int,FMovieSceneEntityComponentField,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FMovieSceneEntityComponentField,0>_>
  *this_03;
  undefined1 *puVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  undefined1 *puVar6;
  int iVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  uint uVar10;
  
  uVar8 = 0;
  if (0 < *(int *)&(this->CompiledDataEntries).field_0x8) {
    uVar10 = 1;
    uVar9 = uVar8;
    do {
      iVar7 = (int)uVar8;
      if (((iVar7 < 0) || (*(int *)&(this->CompiledDataEntries).field_0x28 <= iVar7)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5c6,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      puVar1 = *(undefined1 **)&(this->CompiledDataEntries).field_0x20;
      puVar6 = &(this->CompiledDataEntries).field_0x10;
      if (puVar1 != (undefined1 *)0x0) {
        puVar6 = puVar1;
      }
      iVar5 = iVar7;
      if (iVar7 < 0) {
        iVar5 = iVar7 + 0x1f;
      }
      if ((*(uint *)(puVar6 + (longlong)(iVar5 >> 5) * 4) & uVar10) != 0) {
        lVar2 = *(longlong *)&this->CompiledDataEntries;
        *(undefined1 *)(lVar2 + 0x2c + uVar9) = 0;
        *(undefined1 *)(lVar2 + 0x2e + uVar9) = 0;
        *(undefined8 *)(lVar2 + uVar9) = 0;
        ((undefined8 *)(lVar2 + uVar9))[1] = 0;
      }
      uVar8 = (ulonglong)(iVar7 + 1U);
      uVar10 = uVar10 << 1 | (uint)((int)uVar10 < 0);
      uVar9 = uVar9 + 0x30;
    } while ((int)(iVar7 + 1U) < *(int *)&(this->CompiledDataEntries).field_0x8);
  }
  this_00 = &this->Hierarchies;
  bVar4 = 1 < *(int *)&(this->Hierarchies).field_0x48;
  if (!bVar4) {
    TSet<TTuple<int,FMovieSceneSequenceHierarchy>,TDefaultMapHashableKeyFuncs<int,FMovieSceneSequenceHierarchy,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<int,FMovieSceneSequenceHierarchy>,TDefaultMapHashableKeyFuncs<int,FMovieSceneSequenceHierarchy,0>,FDefaultSetAllocator>
                      *)this_00);
  }
  TSparseArray<TSparseSetElement<TTuple<int,FMovieSceneSequenceHierarchy>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<int,FMovieSceneSequenceHierarchy>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)this_00,0,*(int *)&(this->Hierarchies).field_0x8);
  puVar1 = &(this->Hierarchies).field_0xc;
  *(undefined4 *)&(this->Hierarchies).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x150,8,0,(ForAnyElementType *)this_00,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->Hierarchies).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Hierarchies).field_0x34 = 0;
  iVar7 = *(int *)&(this->Hierarchies).field_0x2c;
  *(undefined4 *)&(this->Hierarchies).field_0x28 = 0;
  if ((iVar7 < 0) || (0x80 < iVar7)) {
    *(undefined4 *)&(this->Hierarchies).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Hierarchies).field_0x10,0);
  }
  if (bVar4) {
    *(undefined4 *)&(this->Hierarchies).field_0x48 = 1;
    TSet<TTuple<int,FMovieSceneSequenceHierarchy>,TDefaultMapHashableKeyFuncs<int,FMovieSceneSequenceHierarchy,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<int,FMovieSceneSequenceHierarchy>,TDefaultMapHashableKeyFuncs<int,FMovieSceneSequenceHierarchy,0>,FDefaultSetAllocator>
              *)this_00);
  }
  this_01 = &this->TrackTemplates;
  bVar4 = 1 < *(int *)&(this->TrackTemplates).field_0x48;
  if (!bVar4) {
    TSet<TTuple<int,FMovieSceneEvaluationTemplate>,TDefaultMapHashableKeyFuncs<int,FMovieSceneEvaluationTemplate,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<int,FMovieSceneEvaluationTemplate>,TDefaultMapHashableKeyFuncs<int,FMovieSceneEvaluationTemplate,0>,FDefaultSetAllocator>
                      *)this_01);
  }
  TSparseArray<TSparseSetElement<TTuple<int,FMovieSceneEvaluationTemplate>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<int,FMovieSceneEvaluationTemplate>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)this_01,0,*(int *)&(this->TrackTemplates).field_0x8);
  puVar1 = &(this->TrackTemplates).field_0xc;
  *(undefined4 *)&(this->TrackTemplates).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x170,8,0,(ForAnyElementType *)this_01,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->TrackTemplates).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->TrackTemplates).field_0x34 = 0;
  iVar7 = *(int *)&(this->TrackTemplates).field_0x2c;
  *(undefined4 *)&(this->TrackTemplates).field_0x28 = 0;
  if ((iVar7 < 0) || (0x80 < iVar7)) {
    *(undefined4 *)&(this->TrackTemplates).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->TrackTemplates).field_0x10,0);
  }
  if (bVar4) {
    *(undefined4 *)&(this->TrackTemplates).field_0x48 = 1;
    TSet<TTuple<int,FMovieSceneEvaluationTemplate>,TDefaultMapHashableKeyFuncs<int,FMovieSceneEvaluationTemplate,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<int,FMovieSceneEvaluationTemplate>,TDefaultMapHashableKeyFuncs<int,FMovieSceneEvaluationTemplate,0>,FDefaultSetAllocator>
              *)this_01);
  }
  this_02 = &this->TrackTemplateFields;
  bVar4 = 1 < *(int *)&(this->TrackTemplateFields).field_0x48;
  if (!bVar4) {
    TSet<TTuple<int,FMovieSceneEvaluationField>,TDefaultMapHashableKeyFuncs<int,FMovieSceneEvaluationField,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<int,FMovieSceneEvaluationField>,TDefaultMapHashableKeyFuncs<int,FMovieSceneEvaluationField,0>,FDefaultSetAllocator>
                      *)this_02);
  }
  TSparseArray<TSparseSetElement<TTuple<int,FMovieSceneEvaluationField>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<int,FMovieSceneEvaluationField>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)this_02,0,*(int *)&(this->TrackTemplateFields).field_0x8);
  puVar1 = &(this->TrackTemplateFields).field_0xc;
  *(undefined4 *)&(this->TrackTemplateFields).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x40,8,0,(ForAnyElementType *)this_02,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->TrackTemplateFields).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->TrackTemplateFields).field_0x34 = 0;
  iVar7 = *(int *)&(this->TrackTemplateFields).field_0x2c;
  *(undefined4 *)&(this->TrackTemplateFields).field_0x28 = 0;
  if ((iVar7 < 0) || (0x80 < iVar7)) {
    *(undefined4 *)&(this->TrackTemplateFields).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->TrackTemplateFields).field_0x10,0);
  }
  if (bVar4) {
    *(undefined4 *)&(this->TrackTemplateFields).field_0x48 = 1;
    TSet<TTuple<int,FMovieSceneEvaluationField>,TDefaultMapHashableKeyFuncs<int,FMovieSceneEvaluationField,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<int,FMovieSceneEvaluationField>,TDefaultMapHashableKeyFuncs<int,FMovieSceneEvaluationField,0>,FDefaultSetAllocator>
              *)this_02);
  }
  this_03 = &this->EntityComponentFields;
  bVar4 = *(int *)&(this->EntityComponentFields).field_0x48 < 2;
  if (bVar4) {
    TSet<TTuple<int,FMovieSceneEntityComponentField>,TDefaultMapHashableKeyFuncs<int,FMovieSceneEntityComponentField,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<int,FMovieSceneEntityComponentField>,TDefaultMapHashableKeyFuncs<int,FMovieSceneEntityComponentField,0>,FDefaultSetAllocator>
                      *)this_03);
  }
  TSparseArray<TSparseSetElement<TTuple<int,FMovieSceneEntityComponentField>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<int,FMovieSceneEntityComponentField>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)this_03,0,*(int *)&(this->EntityComponentFields).field_0x8);
  puVar1 = &(this->EntityComponentFields).field_0xc;
  *(undefined4 *)&(this->EntityComponentFields).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x100,8,0,(ForAnyElementType *)this_03,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->EntityComponentFields).field_0x34 = 0;
  *(undefined4 *)&(this->EntityComponentFields).field_0x30 = 0xffffffff;
  iVar7 = *(int *)&(this->EntityComponentFields).field_0x2c;
  *(undefined4 *)&(this->EntityComponentFields).field_0x28 = 0;
  if ((iVar7 < 0) || (0x80 < iVar7)) {
    *(undefined4 *)&(this->EntityComponentFields).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->EntityComponentFields).field_0x10,0);
  }
  if (bVar4) {
    return;
  }
  *(undefined4 *)&(this->EntityComponentFields).field_0x48 = 1;
  TSet<TTuple<int,FMovieSceneEntityComponentField>,TDefaultMapHashableKeyFuncs<int,FMovieSceneEntityComponentField,0>,FDefaultSetAllocator>
  ::Rehash((TSet<TTuple<int,FMovieSceneEntityComponentField>,TDefaultMapHashableKeyFuncs<int,FMovieSceneEntityComponentField,0>,FDefaultSetAllocator>
            *)this_03);
  return;
}

// DestroyData @ 1460bcca0

void __thiscall
UMovieSceneCompiledDataManager::DestroyData
          (UMovieSceneCompiledDataManager *this,FMovieSceneCompiledDataID param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 *puVar3;
  int local_res8 [2];
  int local_res10 [2];
  int local_res18 [2];
  int local_res20 [2];
  
  if ((-1 < param_1.Value) && (param_1.Value < *(int *)&(this->CompiledDataEntries).field_0x28)) {
    if (*(int *)&(this->CompiledDataEntries).field_0x28 <= param_1.Value) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5c6,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    puVar3 = *(undefined1 **)&(this->CompiledDataEntries).field_0x20;
    if (puVar3 == (undefined1 *)0x0) {
      puVar3 = &(this->CompiledDataEntries).field_0x10;
    }
    if ((*(uint *)(puVar3 + (ulonglong)((uint)param_1.Value >> 5) * 4) >> (param_1.Value & 0x1fU) &
        1) != 0) goto LAB_1460bcd3a;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("DataID.IsValid() && CompiledDataEntries.IsValidIndex(DataID.Value)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\Compilation\\MovieSceneCompiledDataManager.cpp"
                     ,0x310,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
LAB_1460bcd3a:
  local_res10[0] = param_1.Value;
  if (*(int *)&(this->Hierarchies).field_0x8 != *(int *)&(this->Hierarchies).field_0x34) {
    TSet<TTuple<int,FMovieSceneSequenceHierarchy>,TDefaultMapHashableKeyFuncs<int,FMovieSceneSequenceHierarchy,0>,FDefaultSetAllocator>
    ::RemoveImpl<int>((TSet<TTuple<int,FMovieSceneSequenceHierarchy>,TDefaultMapHashableKeyFuncs<int,FMovieSceneSequenceHierarchy,0>,FDefaultSetAllocator>
                       *)&this->Hierarchies,param_1.Value,local_res10);
  }
  local_res8[0] = param_1.Value;
  if (*(int *)&(this->TrackTemplates).field_0x8 != *(int *)&(this->TrackTemplates).field_0x34) {
    TSet<TTuple<int,FMovieSceneEvaluationTemplate>,TDefaultMapHashableKeyFuncs<int,FMovieSceneEvaluationTemplate,0>,FDefaultSetAllocator>
    ::RemoveImpl<int>((TSet<TTuple<int,FMovieSceneEvaluationTemplate>,TDefaultMapHashableKeyFuncs<int,FMovieSceneEvaluationTemplate,0>,FDefaultSetAllocator>
                       *)&this->TrackTemplates,param_1.Value,local_res8);
  }
  local_res18[0] = param_1.Value;
  if (*(int *)&(this->TrackTemplateFields).field_0x8 !=
      *(int *)&(this->TrackTemplateFields).field_0x34) {
    TSet<TTuple<int,FMovieSceneEvaluationField>,TDefaultMapHashableKeyFuncs<int,FMovieSceneEvaluationField,0>,FDefaultSetAllocator>
    ::RemoveImpl<int>((TSet<TTuple<int,FMovieSceneEvaluationField>,TDefaultMapHashableKeyFuncs<int,FMovieSceneEvaluationField,0>,FDefaultSetAllocator>
                       *)&this->TrackTemplateFields,param_1.Value,local_res18);
  }
  local_res20[0] = param_1.Value;
  if (*(int *)&(this->EntityComponentFields).field_0x8 !=
      *(int *)&(this->EntityComponentFields).field_0x34) {
    TSet<TTuple<int,FMovieSceneEntityComponentField>,TDefaultMapHashableKeyFuncs<int,FMovieSceneEntityComponentField,0>,FDefaultSetAllocator>
    ::RemoveImpl<int>((TSet<TTuple<int,FMovieSceneEntityComponentField>,TDefaultMapHashableKeyFuncs<int,FMovieSceneEntityComponentField,0>,FDefaultSetAllocator>
                       *)&this->EntityComponentFields,param_1.Value,local_res20);
  }
  TSparseArray<FMovieSceneCompiledDataEntry,FDefaultSparseArrayAllocator>::RemoveAt
            (&this->CompiledDataEntries,param_1.Value,1);
  return;
}

// DestroyTemplate @ 1460bda20

void __thiscall
UMovieSceneCompiledDataManager::DestroyTemplate
          (UMovieSceneCompiledDataManager *this,FMovieSceneCompiledDataID param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 *puVar3;
  
  if ((-1 < param_1.Value) && (param_1.Value < *(int *)&(this->CompiledDataEntries).field_0x28)) {
    if (*(int *)&(this->CompiledDataEntries).field_0x28 <= param_1.Value) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5c6,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    puVar3 = *(undefined1 **)&(this->CompiledDataEntries).field_0x20;
    if (puVar3 == (undefined1 *)0x0) {
      puVar3 = &(this->CompiledDataEntries).field_0x10;
    }
    if ((*(uint *)(puVar3 + (ulonglong)((uint)param_1.Value >> 5) * 4) >> (param_1.Value & 0x1fU) &
        1) != 0) goto LAB_1460bdabd;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("DataID.IsValid() && CompiledDataEntries.IsValidIndex(DataID.Value)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\Compilation\\MovieSceneCompiledDataManager.cpp"
                     ,0x31c,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
LAB_1460bdabd:
  TMapBase<FObjectKey,FMovieSceneCompiledDataID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,FMovieSceneCompiledDataID,0>_>
  ::Remove((TMapBase<FObjectKey,FMovieSceneCompiledDataID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,FMovieSceneCompiledDataID,0>_>
            *)&this->SequenceToDataIDs,
           (FObjectKey *)
           (*(longlong *)&this->CompiledDataEntries + 0x20 + (longlong)param_1.Value * 0x30));
  DestroyData(this,param_1);
  return;
}

// FindDataID @ 1460c5050

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

FMovieSceneCompiledDataID __thiscall
UMovieSceneCompiledDataManager::FindDataID
          (UMovieSceneCompiledDataManager *this,UMovieSceneSequence *param_1)

{
  TTuple<FObjectKey,FMovieSceneCompiledDataID> *pTVar1;
  UObject *in_R8;
  FWeakObjectPtr local_res8;
  undefined1 local_res10 [8];
  
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  if (in_R8 != (UObject *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending) {
      UE::GC::MarkAsReachable(in_R8);
    }
    local_res8.ObjectIndex = 0;
    local_res8.ObjectSerialNumber = 0;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable(in_R8);
    }
    FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)local_res10);
  }
  pTVar1 = TSet<TTuple<FObjectKey,FMovieSceneCompiledDataID>,TDefaultMapHashableKeyFuncs<FObjectKey,FMovieSceneCompiledDataID,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FObjectKey,FMovieSceneCompiledDataID>,TDefaultMapHashableKeyFuncs<FObjectKey,FMovieSceneCompiledDataID,0>,FDefaultSetAllocator>
                   *)&this->SequenceToDataIDs,(FObjectKey *)&local_res8);
  if (pTVar1 != (TTuple<FObjectKey,FMovieSceneCompiledDataID> *)0x0) {
    *(undefined4 *)&param_1->_padding_ = *(undefined4 *)&pTVar1->field_0x8;
    return (FMovieSceneCompiledDataID)(int)param_1;
  }
  *(undefined4 *)&param_1->_padding_ = 0xffffffff;
  return (FMovieSceneCompiledDataID)(int)param_1;
}

// FindHierarchy @ 1460c52f0

FMovieSceneSequenceHierarchy * __thiscall
UMovieSceneCompiledDataManager::FindHierarchy
          (UMovieSceneCompiledDataManager *this,FMovieSceneCompiledDataID param_1)

{
  int iVar1;
  FMovieSceneSequenceHierarchy *pFVar2;
  FMovieSceneSequenceHierarchy *pFVar3;
  undefined1 *puVar4;
  FMovieSceneSequenceHierarchy *pFVar5;
  
  pFVar5 = (FMovieSceneSequenceHierarchy *)0x0;
  pFVar2 = pFVar5;
  if (*(int *)&(this->Hierarchies).field_0x8 != *(int *)&(this->Hierarchies).field_0x34) {
    puVar4 = *(undefined1 **)&(this->Hierarchies).field_0x40;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(this->Hierarchies).field_0x38;
    }
    iVar1 = *(int *)(puVar4 + (ulonglong)
                              (*(int *)&(this->Hierarchies).field_0x48 - 1U & param_1.Value) * 4);
    if (iVar1 != -1) {
      do {
        pFVar2 = (FMovieSceneSequenceHierarchy *)
                 ((longlong)iVar1 * 0x150 + *(longlong *)&this->Hierarchies);
        if ((pFVar2->RootNode).ParentID.Value == param_1.Value) break;
        iVar1 = *(int *)&pFVar2[1].RootNode.Children.AllocatorInstance.Data;
        pFVar2 = pFVar5;
      } while (iVar1 != -1);
    }
  }
  pFVar3 = (FMovieSceneSequenceHierarchy *)&(pFVar2->RootNode).Children;
  if (pFVar2 == (FMovieSceneSequenceHierarchy *)0x0) {
    pFVar3 = pFVar5;
  }
  return pFVar3;
}

// FindTrackTemplate @ 1460c6580

FMovieSceneEvaluationTemplate * __thiscall
UMovieSceneCompiledDataManager::FindTrackTemplate
          (UMovieSceneCompiledDataManager *this,FMovieSceneCompiledDataID param_1)

{
  int iVar1;
  FMovieSceneEvaluationTemplate *pFVar2;
  FMovieSceneEvaluationTemplate *pFVar3;
  undefined1 *puVar4;
  FMovieSceneEvaluationTemplate *pFVar5;
  
  pFVar5 = (FMovieSceneEvaluationTemplate *)0x0;
  pFVar2 = pFVar5;
  if (*(int *)&(this->TrackTemplates).field_0x8 != *(int *)&(this->TrackTemplates).field_0x34) {
    puVar4 = *(undefined1 **)&(this->TrackTemplates).field_0x40;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(this->TrackTemplates).field_0x38;
    }
    iVar1 = *(int *)(puVar4 + (ulonglong)
                              (*(int *)&(this->TrackTemplates).field_0x48 - 1U & param_1.Value) * 4)
    ;
    if (iVar1 != -1) {
      do {
        pFVar2 = (FMovieSceneEvaluationTemplate *)
                 ((longlong)iVar1 * 0x170 + *(longlong *)&this->TrackTemplates);
        if (*(int *)&pFVar2->Tracks == param_1.Value) break;
        iVar1 = *(int *)&pFVar2[1].Tracks.field_0x8;
        pFVar2 = pFVar5;
      } while (iVar1 != -1);
    }
  }
  pFVar3 = (FMovieSceneEvaluationTemplate *)&(pFVar2->Tracks).field_0x8;
  if (pFVar2 == (FMovieSceneEvaluationTemplate *)0x0) {
    pFVar3 = pFVar5;
  }
  return pFVar3;
}

// Gather @ 1460c7000

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __thiscall
UMovieSceneCompiledDataManager::Gather
          (UMovieSceneCompiledDataManager *this,FMovieSceneCompiledDataEntry *param_1,
          UMovieSceneSequence *param_2,FTrackGatherParameters *param_3,
          FMovieSceneGatheredCompilerData *param_4)

{
  undefined8 *puVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  UObject *this_00;
  code *pcVar4;
  FMovieSceneBinding *pFVar5;
  bool bVar6;
  FMovieSceneEvaluationTemplate *pFVar7;
  UMovieScene *pUVar8;
  UClass *pUVar9;
  longlong *plVar10;
  UMovieSceneTrack *pUVar11;
  ulonglong uVar12;
  FScriptContainerElement *pFVar13;
  FMovieSceneBinding *pFVar14;
  undefined8 *puVar15;
  int *piVar16;
  undefined1 auStackY_238 [32];
  undefined1 local_208;
  undefined1 local_207;
  undefined1 local_206 [6];
  UMovieScene *local_200;
  ulonglong local_1f8;
  FMovieSceneBinding *local_1f0;
  uint local_1e8;
  undefined4 uStack_1e4;
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  FUtf8String local_1c0;
  void *local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined4 local_198;
  undefined1 local_194;
  byte local_193;
  FMovieSceneEvaluationTemplate *local_188;
  FTrackGatherParameters *local_180;
  ulonglong local_178;
  undefined8 local_170;
  FMovieSceneEntityComponentFieldBuilder local_168;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_238;
  local_180 = param_3;
  pFVar7 = FindTrackTemplate(this,(FMovieSceneCompiledDataID)(param_1->DataID).Value);
  local_188 = pFVar7;
  pUVar8 = (UMovieScene *)(**(code **)(param_2->_padding_ + 0x2f8))(param_2);
  local_200 = pUVar8;
  if (pUVar8 == (UMovieScene *)0x0) {
    bVar6 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<7571377248008143942>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\Compilation\\MovieSceneCompiledDataManager.cpp"
                       ,0x446,"MovieScene");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else {
    if (param_4->EntityField != (FMovieSceneEntityComponentField *)0x0) {
      FMovieSceneEntityComponentFieldBuilder::FMovieSceneEntityComponentFieldBuilder
                (&local_168,param_4->EntityField);
      puVar15 = (undefined8 *)pUVar8->_padding_;
      iVar3 = (int)pUVar8->_padding_;
      if ((iVar3 < 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      puVar1 = puVar15 + iVar3;
      for (; puVar15 != puVar1; puVar15 = puVar15 + 1) {
        this_00 = (UObject *)*puVar15;
        if (UE::GC::GIsIncrementalReachabilityPending == false) {
          if (this_00 != (UObject *)0x0) goto LAB_1460c7138;
        }
        else if (this_00 != (UObject *)0x0) {
          UE::GC::MarkAsReachable(this_00);
LAB_1460c7138:
          pUVar9 = Z_Construct_UClass_UMovieSceneEntityProvider_NoRegister();
          plVar10 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)this_00,pUVar9);
          if (plVar10 != (longlong *)0x0) {
            local_1c0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_1c0.Data.ArrayNum = 0;
            local_1c0.Data.ArrayMax = 0;
            local_1d8 = 0;
            local_1f8 = 0;
            local_1c8 = 0;
            local_1d0 = 0;
            FUtf8String::Reset(&local_1c0,0);
            local_193 = local_193 & 0xfc;
            local_1e8 = CONCAT31(local_1e8._1_3_,2);
            uStack_1e4 = 0;
            local_1b0 = (void *)0x0;
            local_1a8 = 0;
            local_1a0 = 0;
            local_194 = 0;
            uVar12 = (ulonglong)local_1f0 >> 8;
            local_178 = (ulonglong)local_1e8;
            local_1f0 = (FMovieSceneBinding *)CONCAT71((uint7)uVar12 & 0xffffff,2);
            local_170 = local_1f0;
            local_198 = 0x80000000;
            (**(code **)(*plVar10 + 0x20))(plVar10,&local_178,&local_1d8,&local_168);
            if (local_1b0 != (void *)0x0) {
              FMemory::Free(local_1b0);
            }
            if (local_1c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_1c0.Data.AllocatorInstance.Data);
            }
          }
        }
      }
      FMovieSceneEntityComponentFieldBuilder::~FMovieSceneEntityComponentFieldBuilder(&local_168);
    }
    pUVar11 = UMovieScene::GetCameraCutTrack(local_200);
    if (pUVar11 != (UMovieSceneTrack *)0x0) {
      GatherTrack(this,(FMovieSceneBinding *)0x0,pUVar11,param_3,pFVar7,param_4);
    }
    pFVar13 = (local_200->Tracks).AllocatorInstance.Data;
    iVar3 = (local_200->Tracks).ArrayNum;
    pFVar2 = pFVar13 + (longlong)iVar3 * 8;
    while( true ) {
      if ((local_200->Tracks).ArrayNum != iVar3) {
        `TCheckedPointerIterator<UMovieSceneTrack_*_const,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_208);
      }
      if (pFVar13 == pFVar2) break;
      GatherTrack(this,(FMovieSceneBinding *)0x0,*(UMovieSceneTrack **)pFVar13,param_3,pFVar7,
                  param_4);
      pFVar13 = pFVar13 + 8;
    }
    iVar3 = (local_200->ObjectBindings).ArrayNum;
    uVar12 = (ulonglong)iVar3;
    pFVar14 = (FMovieSceneBinding *)(local_200->ObjectBindings).AllocatorInstance.Data;
    local_1f0 = pFVar14 + uVar12;
    local_1f8 = CONCAT44(local_1f8._4_4_,iVar3);
    piVar16 = &(pFVar14->Tracks).ArrayNum;
    while( true ) {
      pFVar5 = local_1f0;
      if ((local_200->ObjectBindings).ArrayNum != (int)uVar12) {
        `TCheckedPointerIterator<FMovieSceneBinding_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_207);
      }
      if (pFVar14 == pFVar5) break;
      pFVar13 = (((TArray<TObjectPtr<UMovieSceneTrack>,TSizedDefaultAllocator<32>_> *)(piVar16 + -2)
                 )->AllocatorInstance).Data;
      iVar3 = *piVar16;
      pFVar2 = pFVar13 + (longlong)iVar3 * 8;
      while( true ) {
        if (*piVar16 != iVar3) {
          `TCheckedPointerIterator<UMovieSceneTrack_*_const,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_206);
        }
        if (pFVar13 == pFVar2) break;
        GatherTrack(this,pFVar14,*(UMovieSceneTrack **)pFVar13,local_180,local_188,param_4);
        pFVar13 = pFVar13 + 8;
      }
      pFVar14 = pFVar14 + 1;
      piVar16 = piVar16 + 0x10;
      uVar12 = local_1f8 & 0xffffffff;
    }
  }
  return;
}

// GatherTrack @ 1460c7370

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __thiscall
UMovieSceneCompiledDataManager::GatherTrack
          (UMovieSceneCompiledDataManager *this,FMovieSceneBinding *param_1,
          UMovieSceneTrack *param_2,FTrackGatherParameters *param_3,
          FMovieSceneEvaluationTemplate *param_4,FMovieSceneGatheredCompilerData *param_5)

{
  undefined8 *puVar1;
  byte bVar2;
  UObjectBaseUtility *pUVar3;
  UMovieSceneCondition *pUVar4;
  code *pcVar5;
  FFrameNumber FVar6;
  bool bVar7;
  char cVar8;
  int iVar9;
  int iVar10;
  FMovieSceneTrackIdentifier FVar11;
  FMovieSceneTrackEvaluationField *pFVar12;
  FMovieSceneEvaluationFieldSharedEntityMetaData *pFVar13;
  UClass *pUVar14;
  longlong *plVar15;
  ulonglong uVar16;
  FFrameNumber *pFVar17;
  undefined4 extraout_var;
  FScriptContainerElement *pFVar18;
  undefined8 *puVar19;
  FScriptContainerElement *pFVar20;
  undefined1 auStack_388 [32];
  undefined1 local_368;
  undefined1 local_367 [7];
  TRange<FFrameNumber> local_360;
  uint local_350;
  FMovieSceneEvaluationTemplate *local_348;
  undefined1 local_338 [8];
  FSoftObjectPath local_330;
  FString local_310;
  FName local_300;
  FFrameNumber local_2f8;
  ESectionEvaluationFlags local_2f4;
  byte local_2f3;
  FMovieSceneGatheredCompilerData *local_2e8;
  undefined1 local_2e0 [16];
  UMovieSceneCondition *local_2d0;
  UMovieSceneCondition *local_2c8;
  UMovieSceneCompiledDataManager *local_2c0;
  code *local_2b8;
  UMovieSceneCompiledDataManager **local_2b0;
  undefined1 local_2a8 [24];
  void *local_290;
  FString local_280;
  FName local_270;
  FFrameNumber local_268;
  FScriptContainerElement local_264;
  byte local_263;
  undefined1 local_258 [24];
  void *local_240;
  FString local_230;
  FName local_220;
  int local_218;
  ESectionEvaluationFlags local_214;
  byte local_213;
  undefined1 local_208 [24];
  void *local_1f0;
  FString local_1e0;
  FName local_1d0;
  int local_1c8;
  ESectionEvaluationFlags local_1c4;
  byte local_1c3;
  UMovieSceneCompiledDataManager *local_1b8;
  FScriptContainerElement *local_1b0;
  FTrackGatherParameters *local_1a8;
  FMovieSceneGatheredCompilerData **local_1a0;
  int local_198;
  FMovieSceneEvaluationTemplate *local_190;
  UMovieSceneTrack *local_188;
  undefined8 local_180;
  undefined8 uStack_178;
  FMovieSceneInverseSequenceTransform local_170;
  FMovieSceneEntityComponentFieldBuilder local_150;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_388;
  local_348 = param_4;
  local_2e8 = param_5;
  local_2c0 = this;
  if ((param_2 == (UMovieSceneTrack *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Track",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\Compilation\\MovieSceneCompiledDataManager.cpp"
                         ,0x5d3,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  bVar2 = *(byte *)((longlong)&param_3->_padding_ + 4);
  if ((bVar2 != 0) && (((bVar2 & 1) == 0 || ((param_2->EvalOptions).bEvaluateInPreroll == 0)))) {
    if ((bVar2 & 2) == 0) {
      return;
    }
    if ((param_2->EvalOptions).bEvaluateInPostroll == 0) {
      return;
    }
  }
  bVar7 = UMovieSceneTrack::IsEvalDisabled(param_2,true);
  if (bVar7) {
    return;
  }
  local_330.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_330.SubPathString.Data.ArrayNum = 0;
  local_330.SubPathString.Data.ArrayMax = 0;
  local_338 = (undefined1  [8])0x0;
  local_330.AssetPath.AssetName.ComparisonIndex.Value = 0;
  local_330.AssetPath.AssetName.Number = 0;
  local_330.AssetPath.PackageName.ComparisonIndex.Value = 0;
  local_330.AssetPath.PackageName.Number = 0;
  FUtf8String::Reset(&local_330.SubPathString,0);
  local_2f3 = local_2f3 & 0xfc;
  local_310.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_310.Data.ArrayNum = 0;
  local_310.Data.ArrayMax = 0;
  local_300.ComparisonIndex.Value = 0;
  local_300.Number = 0;
  local_2f8.Value = -0x80000000;
  local_2f4 = None;
  UMovieSceneTrack::PreCompile(param_2,(FMovieSceneTrackPreCompileResult *)local_338);
  pFVar12 = UMovieSceneTrack::GetEvaluationField(param_2);
  if (local_2e8->EntityField == (FMovieSceneEntityComponentField *)0x0) goto LAB_1460c7983;
  FMovieSceneEntityComponentFieldBuilder::FMovieSceneEntityComponentFieldBuilder
            (&local_150,local_2e8->EntityField);
  if (param_1 != (FMovieSceneBinding *)0x0) {
    local_180._0_4_ = (param_1->ObjectGuid).A;
    local_180._4_4_ = (param_1->ObjectGuid).B;
    uStack_178._0_4_ = (param_1->ObjectGuid).C;
    uStack_178._4_4_ = (param_1->ObjectGuid).D;
    pFVar13 = FMovieSceneEntityComponentFieldBuilder::GetSharedMetaData(&local_150);
    (pFVar13->ObjectBindingID).A = (undefined4)local_180;
    (pFVar13->ObjectBindingID).B = local_180._4_4_;
    (pFVar13->ObjectBindingID).C = (undefined4)uStack_178;
    (pFVar13->ObjectBindingID).D = uStack_178._4_4_;
  }
  iVar9 = (int)param_2->_padding_;
  puVar19 = (undefined8 *)param_2->_padding_;
  if ((iVar9 < 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  puVar1 = puVar19 + iVar9;
  for (; puVar19 != puVar1; puVar19 = puVar19 + 1) {
    pUVar3 = (UObjectBaseUtility *)*puVar19;
    if (pUVar3 != (UObjectBaseUtility *)0x0) {
      pUVar14 = Z_Construct_UClass_UMovieSceneEntityProvider_NoRegister();
      plVar15 = UObjectBaseUtility::GetInterfaceAddress(pUVar3,pUVar14);
      if (plVar15 != (longlong *)0x0) {
        local_258._0_8_ = local_338;
        FSoftObjectPath::FSoftObjectPath((FSoftObjectPath *)(local_258 + 8),&local_330);
        ::FString::FString(&local_230,&local_310);
        pUVar4 = (param_2->ConditionContainer).Condition.field0_0x0.DebugPtr;
        local_218 = local_2f8.Value;
        local_214 = local_2f4;
        local_220 = local_300;
        local_213 = (param_2->EvalOptions).bEvaluateInPostroll * '\x02' |
                    (param_2->EvalOptions).bEvaluateInPreroll | local_213 & 0xfc;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (pUVar4 != (UMovieSceneCondition *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)pUVar4);
        }
        local_2e0._8_8_ = pUVar4;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (pUVar4 != (UMovieSceneCondition *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)pUVar4);
        }
        FSoftObjectPtr::operator=((FSoftObjectPtr *)local_258,(FObjectPtr)((longlong)local_2e0 + 8))
        ;
        (**(code **)(*plVar15 + 0x20))
                  (plVar15,(undefined1 *)((longlong)&param_3->_padding_ + 4),local_258,&local_150);
        if (local_230.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_230.Data.AllocatorInstance.Data);
        }
        if (local_240 != (void *)0x0) {
          FMemory::Free(local_240);
        }
      }
    }
    param_4 = local_348;
  }
  if (param_2 == (UMovieSceneTrack *)0x0) {
LAB_1460c7756:
    local_350 = (pFVar12->Entries).ArrayNum;
    uVar16 = (ulonglong)(int)local_350;
    pFVar18 = (pFVar12->Entries).AllocatorInstance.Data;
    pFVar20 = pFVar18 + uVar16 * 0x20;
    while( true ) {
      if ((pFVar12->Entries).ArrayNum != (int)uVar16) {
        local_368 = 0;
        `TCheckedPointerIterator<FMovieSceneTrackEvaluationFieldEntry_const_,int,0>::operator!='::
        __l2::<lambda_1>::operator()(&local_368);
      }
      param_4 = local_348;
      if (pFVar18 == pFVar20) break;
      if (((*(longlong *)pFVar18 == 0) ||
          (bVar7 = UMovieSceneTrack::IsRowEvalDisabled
                             (param_2,*(int *)(*(longlong *)pFVar18 + 0xd0),true), !bVar7)) &&
         (pUVar3 = *(UObjectBaseUtility **)pFVar18, pUVar3 != (UObjectBaseUtility *)0x0)) {
        pUVar14 = Z_Construct_UClass_UMovieSceneEntityProvider_NoRegister();
        plVar15 = UObjectBaseUtility::GetInterfaceAddress(pUVar3,pUVar14);
        if (plVar15 != (longlong *)0x0) {
          TRange<FFrameNumber>::Intersection
                    (&local_360,(TRange<FFrameNumber> *)((longlong)&param_3->_padding_ + 4),
                     (TRange<FFrameNumber> *)(pFVar18 + 8));
          FVar6.Value = local_360.UpperBound.Value.Value;
          if ((local_360.LowerBound.Type.Value == '\x02') ||
             (local_360.UpperBound.Type.Value == '\x02')) {
LAB_1460c7863:
            local_2a8._0_8_ = local_338;
            FSoftObjectPath::FSoftObjectPath((FSoftObjectPath *)(local_2a8 + 8),&local_330);
            ::FString::FString(&local_280,&local_310);
            local_270 = local_300;
            local_268.Value = *(int *)(pFVar18 + 0x18);
            local_264 = pFVar18[0x1c];
            local_263 = (param_2->EvalOptions).bEvaluateInPostroll * '\x02' |
                        (param_2->EvalOptions).bEvaluateInPreroll | local_263 & 0xfc;
            local_2c8 = MovieSceneHelpers::GetSequenceCondition
                                  (param_2,*(UMovieSceneSection **)pFVar18,true);
            if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
               (local_2c8 != (UMovieSceneCondition *)0x0)) {
              UE::GC::MarkAsReachable((UObject *)local_2c8);
            }
            FSoftObjectPtr::operator=((FSoftObjectPtr *)local_2a8,(FObjectPtr)&local_2c8);
            cVar8 = (**(code **)(*plVar15 + 0x20))(plVar15,&local_360,local_2a8,&local_150);
            if (cVar8 == '\0') {
              iVar9 = FMovieSceneEntityComponentFieldBuilder::FindOrAddEntity
                                (&local_150,*(UObject **)pFVar18,0);
              iVar10 = FMovieSceneEntityComponentFieldBuilder::AddMetaData
                                 (&local_150,(FMovieSceneEvaluationFieldEntityMetaData *)local_2a8);
              FMovieSceneEntityComponentFieldBuilder::AddPersistentEntity
                        (&local_150,&local_360,iVar9,iVar10);
            }
            if (local_280.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_280.Data.AllocatorInstance.Data);
            }
            if (local_290 != (void *)0x0) {
              FMemory::Free(local_290);
            }
          }
          else {
            if ((local_360.LowerBound.Type.Value == '\x02') &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Type != ERangeBoundTypes::Open",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                                   ,99,L""), bVar7)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            if (local_360.LowerBound.Value.Value <= FVar6.Value) {
              pFVar17 = TRangeBound<FFrameNumber>::GetValue(&local_360.UpperBound);
              iVar9 = pFVar17->Value;
              pFVar17 = TRangeBound<FFrameNumber>::GetValue(&local_360.LowerBound);
              if ((pFVar17->Value != iVar9) ||
                 ((local_360.LowerBound.Type.Value != '\0' &&
                  (local_360.UpperBound.Type.Value != '\0')))) goto LAB_1460c7863;
            }
          }
        }
      }
      uVar16 = (ulonglong)local_350;
      pFVar18 = pFVar18 + 0x20;
    }
  }
  else {
    pUVar14 = Z_Construct_UClass_UMovieSceneEntityProvider_NoRegister();
    plVar15 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)param_2,pUVar14);
    if (plVar15 == (longlong *)0x0) goto LAB_1460c7756;
    local_208._0_8_ = local_338;
    FSoftObjectPath::FSoftObjectPath((FSoftObjectPath *)(local_208 + 8),&local_330);
    ::FString::FString(&local_1e0,&local_310);
    local_2d0 = (param_2->ConditionContainer).Condition.field0_0x0.DebugPtr;
    local_1c8 = local_2f8.Value;
    local_1c4 = local_2f4;
    local_1d0 = local_300;
    local_1c3 = (param_2->EvalOptions).bEvaluateInPostroll * '\x02' |
                (param_2->EvalOptions).bEvaluateInPreroll | local_1c3 & 0xfc;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_2d0 != (UMovieSceneCondition *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_2d0);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_2d0 != (UMovieSceneCondition *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_2d0);
    }
    FSoftObjectPtr::operator=((FSoftObjectPtr *)local_208,(FObjectPtr)&local_2d0);
    (**(code **)(*plVar15 + 0x20))
              (plVar15,(undefined1 *)((longlong)&param_3->_padding_ + 4),local_208,&local_150);
    if (local_1e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1e0.Data.AllocatorInstance.Data);
    }
    if (local_1f0 != (void *)0x0) {
      FMemory::Free(local_1f0);
    }
  }
  FMovieSceneEntityComponentFieldBuilder::~FMovieSceneEntityComponentFieldBuilder(&local_150);
LAB_1460c7983:
  if (param_4 != (FMovieSceneEvaluationTemplate *)0x0) {
    FVar11 = FMovieSceneTemplateGenerationLedger::FindTrackIdentifier
                       (&param_4->TemplateLedger,(FGuid *)local_2e0);
    iVar9 = *(int *)CONCAT44(extraout_var,FVar11.Value);
    if (iVar9 != -1) {
      iVar10 = (pFVar12->Entries).ArrayNum;
      pFVar18 = (pFVar12->Entries).AllocatorInstance.Data;
      pFVar20 = pFVar18 + (longlong)iVar10 * 0x20;
      while( true ) {
        if ((pFVar12->Entries).ArrayNum != iVar10) {
          `TCheckedPointerIterator<FMovieSceneTrackEvaluationFieldEntry_const_,int,0>::operator!='::
          __l2::<lambda_1>::operator()(local_367);
        }
        if (pFVar18 == pFVar20) break;
        FMovieSceneSequenceTransform::Inverse
                  ((FMovieSceneSequenceTransform *)&param_3->_padding_,&local_170);
        local_1b8 = local_2c0;
        local_1a0 = &local_2e8;
        local_190 = local_348;
        local_2b0 = &local_1b8;
        local_2b8 = UE::Core::Private::Function::
                    TFunctionRefCaller<`UMovieSceneCompiledDataManager::GatherTrack'::__l55::<lambda_1>,bool,TRange<FFrameTime>_>
                    ::Call;
        local_1b0 = pFVar18;
        local_1a8 = param_3;
        local_198 = iVar9;
        local_188 = param_2;
        FGatherParameters::TransformLocalRange
                  ((FGatherParameters *)param_3,(TRange<FFrameNumber> *)(pFVar18 + 8),
                   (TFunctionRef<bool___cdecl(TRange<FFrameTime>)> *)&local_2b8);
        if (local_170.NestedTransforms.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_170.NestedTransforms.AllocatorInstance.Data);
        }
        pFVar18 = pFVar18 + 0x20;
      }
    }
  }
  if (local_310.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_310.Data.AllocatorInstance.Data);
  }
  if (local_330.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_330.SubPathString.Data.AllocatorInstance.Data);
  }
  return;
}

// GenerateSubSequenceData @ 1460c7b10

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

bool __cdecl
UMovieSceneCompiledDataManager::GenerateSubSequenceData
          (UMovieSceneSequence *param_1,FGatherParameters *param_2,
          FMovieSceneEvaluationOperand *param_3,FSubSequencePath *param_4,
          FMovieSceneSequenceHierarchy *param_5)

{
  undefined8 *puVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  code *pcVar5;
  int *piVar6;
  bool bVar7;
  undefined1 uVar8;
  bool bVar9;
  longlong lVar10;
  UClass *pUVar11;
  ulonglong uVar12;
  undefined8 *puVar13;
  UMovieSceneSubTrack *pUVar14;
  int *piVar15;
  longlong *plVar16;
  uint local_res8 [2];
  undefined1 local_68;
  undefined1 local_67 [7];
  longlong local_60;
  int *local_58;
  FMovieSceneEvaluationOperand local_50;
  
  if (param_1 != (UMovieSceneSequence *)0x0) {
    lVar10 = (**(code **)(param_1->_padding_ + 0x2f8))();
    if (lVar10 != 0) {
      local_60 = lVar10;
      if ((param_4 == (FSubSequencePath *)0x0) || (param_5 == (FMovieSceneSequenceHierarchy *)0x0))
      {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("RootPath && InOutHierarchy",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\Compilation\\MovieSceneCompiledDataManager.cpp"
                           ,0x6b6,L"");
        if (bVar7) {
          pcVar5 = (code *)swi(3);
          uVar8 = (*pcVar5)();
          return (bool)uVar8;
        }
      }
      puVar13 = *(undefined8 **)(lVar10 + 0xf8);
      bVar7 = false;
      iVar3 = *(int *)(lVar10 + 0x100);
      puVar1 = puVar13 + iVar3;
      while( true ) {
        if (*(int *)(lVar10 + 0x100) != iVar3) {
          `TCheckedPointerIterator<UMovieSceneTrack_*_const,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_res8);
        }
        if (puVar13 == puVar1) break;
        pUVar14 = (UMovieSceneSubTrack *)*puVar13;
        if (pUVar14 != (UMovieSceneSubTrack *)0x0) {
          pUVar11 = Z_Construct_UClass_UMovieSceneSubTrack_NoRegister();
          iVar4 = (int)pUVar11->_padding_;
          if ((iVar4 <= *(int *)(pUVar14->_padding_ + 0x38)) &&
             ((longlong *)
              *(undefined1 **)(*(longlong *)(pUVar14->_padding_ + 0x30) + (longlong)iVar4 * 8) ==
              &pUVar11->_padding_)) {
            bVar9 = GenerateSubSequenceData(pUVar14,param_2,param_3,param_4,param_5);
            bVar7 = (bool)(bVar7 | bVar9);
          }
        }
        puVar13 = puVar13 + 1;
      }
      local_res8[0] = *(uint *)(lVar10 + 0xa0);
      uVar12 = (ulonglong)(int)local_res8[0];
      local_58 = (int *)(uVar12 * 0x40 + *(longlong *)(lVar10 + 0x98));
      piVar15 = (int *)(*(longlong *)(lVar10 + 0x98) + 0x38);
      do {
        piVar6 = local_58;
        if (*(int *)(lVar10 + 0xa0) != (int)uVar12) {
          `TCheckedPointerIterator<FMovieSceneBinding_const_,int,0>::operator!='::__l2::<lambda_1>::
          operator()(&local_68);
        }
        if (piVar15 + -0xe == piVar6) {
          return bVar7;
        }
        plVar16 = *(longlong **)(piVar15 + -2);
        iVar3 = *piVar15;
        plVar2 = plVar16 + iVar3;
        while( true ) {
          if (*piVar15 != iVar3) {
            `TCheckedPointerIterator<UMovieSceneTrack_*_const,int,0>::operator!='::__l2::<lambda_1>
            ::operator()(local_67);
          }
          if (plVar16 == plVar2) break;
          pUVar14 = (UMovieSceneSubTrack *)*plVar16;
          if (pUVar14 == (UMovieSceneSubTrack *)0x0) {
LAB_1460c7cc1:
            pUVar14 = (UMovieSceneSubTrack *)0x0;
          }
          else {
            pUVar11 = Z_Construct_UClass_UMovieSceneSubTrack_NoRegister();
            iVar4 = (int)pUVar11->_padding_;
            if ((*(int *)(pUVar14->_padding_ + 0x38) < iVar4) ||
               ((longlong *)
                *(undefined1 **)(*(longlong *)(pUVar14->_padding_ + 0x30) + (longlong)iVar4 * 8) !=
                &pUVar11->_padding_)) goto LAB_1460c7cc1;
          }
          if (pUVar14 != (UMovieSceneSubTrack *)0x0) {
            local_50.ObjectBindingID.A = piVar15[-10];
            local_50.ObjectBindingID.B = piVar15[-9];
            local_50.ObjectBindingID.C = piVar15[-8];
            local_50.ObjectBindingID.D = piVar15[-7];
            local_50.SequenceID.Value = (param_2->SequenceID).Value;
            bVar9 = GenerateSubSequenceData(pUVar14,param_2,&local_50,param_4,param_5);
            bVar7 = (bool)(bVar7 | bVar9);
          }
          plVar16 = plVar16 + 1;
        }
        piVar15 = piVar15 + 0x10;
        uVar12 = (ulonglong)local_res8[0];
        lVar10 = local_60;
      } while( true );
    }
  }
  return false;
}

// GenerateSubSequenceData @ 1460c7d60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

bool __cdecl
UMovieSceneCompiledDataManager::GenerateSubSequenceData
          (UMovieSceneSubTrack *param_1,FGatherParameters *param_2,
          FMovieSceneEvaluationOperand *param_3,FSubSequencePath *param_4,
          FMovieSceneSequenceHierarchy *param_5)

{
  TArray<FMovieSceneNestedSequenceTransform,TSizedDefaultAllocator<32>_> *pTVar1;
  int iVar2;
  UMovieSceneSubSection *this;
  code *pcVar3;
  uint uVar4;
  FMovieSceneEvaluationOperand *pFVar5;
  FFrameTime FVar6;
  FMovieSceneSequenceHierarchy *pFVar7;
  undefined8 *puVar8;
  bool bVar9;
  undefined1 uVar10;
  FFrameNumber FVar11;
  UClass *pUVar12;
  UMovieSceneSequence *pUVar13;
  longlong lVar14;
  TRange<FFrameTime> *pTVar15;
  FFrameNumber *pFVar16;
  FMovieSceneSequenceTransform *pFVar17;
  TRangeBound<FFrameNumber> TVar18;
  ulonglong uVar19;
  TRangeBound<FFrameNumber> *pTVar20;
  bool bVar21;
  undefined8 *puVar22;
  undefined4 uVar23;
  undefined1 auStackY_338 [32];
  undefined1 local_308 [4];
  FMovieSceneSequenceID local_304 [3];
  TRangeBound<FFrameNumber> local_2f8;
  TRangeBound<FFrameNumber> TStack_2f0;
  FMovieSceneSequenceID local_2e8;
  uint local_2e4;
  TRangeBound<FFrameNumber> local_2d8;
  TRangeBound<FFrameNumber> TStack_2d0;
  TRangeBound<FFrameNumber> local_2c8;
  TRangeBound<FFrameNumber> TStack_2c0;
  undefined4 local_2b8;
  int iStack_2b4;
  undefined4 local_2b0;
  int iStack_2ac;
  uint local_2a8;
  int iStack_2a4;
  uint local_2a0;
  undefined4 uStack_29c;
  uint local_298;
  undefined4 uStack_294;
  uint local_290;
  undefined4 uStack_28c;
  uint local_288;
  undefined4 uStack_284;
  FMovieSceneEvaluationOperand *local_278;
  FFrameTime local_270;
  FMovieSceneSequenceHierarchy *local_268;
  longlong *local_260;
  undefined8 *local_258;
  undefined8 local_250;
  uint local_240;
  undefined8 local_23c;
  undefined8 uStack_234;
  uint local_22c;
  FMovieSceneSequenceTransform local_228;
  FGatherParameters local_208;
  TRange<FFrameTime> local_188;
  FMovieSceneSubSequenceData local_170;
  ulonglong local_60;
  
  local_60 = __security_cookie.value ^ (ulonglong)auStackY_338;
  bVar21 = false;
  local_268 = param_5;
  local_278 = param_3;
  if (((param_1 == (UMovieSceneSubTrack *)0x0) || (param_4 == (FSubSequencePath *)0x0)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("SubTrack && RootPath",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\Compilation\\MovieSceneCompiledDataManager.cpp"
                         ,0x6d8,L""), bVar9)) {
    pcVar3 = (code *)swi(3);
    uVar10 = (*pcVar3)();
    return (bool)uVar10;
  }
  local_2e8.Value = (param_2->SequenceID).Value;
  local_260 = (longlong *)(**(code **)(param_1->_padding_ + 0x360))(param_1);
  local_2e4 = *(uint *)(local_260 + 1);
  uVar19 = (ulonglong)(int)local_2e4;
  puVar22 = (undefined8 *)*local_260;
  local_258 = puVar22 + uVar19;
  do {
    puVar8 = local_258;
    if ((int)local_260[1] != (int)uVar19) {
      local_308[0] = 0;
      `TCheckedPointerIterator<UMovieSceneSection_*_const,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_308);
    }
    if (puVar22 == puVar8) {
      return bVar21;
    }
    this = (UMovieSceneSubSection *)*puVar22;
    bVar9 = UMovieSceneTrack::IsRowEvalDisabled
                      ((UMovieSceneTrack *)param_1,(int)this->_padding_,true);
    if (!bVar9) {
      pUVar12 = Z_Construct_UClass_UMovieSceneSubSection_NoRegister();
      iVar2 = (int)pUVar12->_padding_;
      if (((iVar2 <= *(int *)(this->_padding_ + 0x38)) &&
          ((longlong *)*(undefined1 **)(*(longlong *)(this->_padding_ + 0x30) + (longlong)iVar2 * 8)
           == &pUVar12->_padding_)) &&
         ((this != (UMovieSceneSubSection *)0x0 &&
          ((pUVar13 = UMovieSceneSubSection::GetSequence(this),
           pUVar13 != (UMovieSceneSequence *)0x0 &&
           (lVar14 = (**(code **)(pUVar13->_padding_ + 0x2f8))(pUVar13), lVar14 != 0)))))) {
        UMovieSceneSubSection::GetSequenceID(this);
        UE::MovieScene::FSubSequencePath::ResolveChildSequenceID
                  (param_4,(FMovieSceneSequenceID)(uint)local_304);
        pFVar5 = local_278;
        local_240 = local_304[0].Value;
        local_22c = (local_278->SequenceID).Value;
        local_23c._0_4_ = (local_278->ObjectBindingID).A;
        local_23c._4_4_ = (local_278->ObjectBindingID).B;
        uStack_234._0_4_ = (local_278->ObjectBindingID).C;
        uStack_234._4_4_ = (local_278->ObjectBindingID).D;
        (**(code **)(this->_padding_ + 0x3a8))(this,&local_170,&local_240);
        if (((param_2->LocalClampRange).LowerBound.Type.Value == '\x02') ||
           ((param_2->LocalClampRange).UpperBound.Type.Value == '\x02')) {
          local_2f8.Type.Value = (param_2->LocalClampRange).LowerBound.Type.Value;
          local_2f8._1_3_ = *(undefined3 *)&(param_2->LocalClampRange).LowerBound.field_0x1;
          local_2f8.Value.Value = (param_2->LocalClampRange).LowerBound.Value.Value;
          uVar23._0_1_ = (param_2->LocalClampRange).UpperBound.Type.Value;
          uVar23._1_3_ = *(undefined3 *)&(param_2->LocalClampRange).UpperBound.field_0x1;
          TStack_2f0.Value.Value = (param_2->LocalClampRange).UpperBound.Value.Value;
        }
        else {
          pTVar15 = FMovieSceneSequenceTransform::ComputeTraversedHull
                              (&local_170.OuterToInnerTransform,&local_188,&param_2->LocalClampRange
                              );
          uVar4 = local_2a8;
          local_2d8.Type.Value = 2;
          TStack_2d0.Type.Value = 2;
          local_2d8 = (TRangeBound<FFrameNumber>)((ulonglong)local_2d8 & 0xffffffff);
          TStack_2d0 = (TRangeBound<FFrameNumber>)((ulonglong)TStack_2d0 & 0xffffffff);
          if ((pTVar15->LowerBound).Type.Value != '\x02') {
            local_270 = (pTVar15->LowerBound).Value;
            local_250._0_1_ = (pTVar15->LowerBound).Type;
            local_250._1_3_ = *(undefined3 *)&(pTVar15->LowerBound).field_0x1;
            local_250._4_4_ = (pTVar15->LowerBound).Value.FrameNumber;
            FVar11 = local_270.FrameNumber.Value;
            FVar6 = local_270;
            if (((undefined1)local_250 == '\x01') && (local_270.SubFrame == 0.0)) {
              local_2b8 = CONCAT31(local_2b8._1_3_,1);
              iStack_2b4 = FVar11.Value;
              uVar19 = CONCAT44(FVar11.Value,local_2b8);
            }
            else {
              local_2b0 = CONCAT31(local_2b0._1_3_,1);
              iStack_2ac = FVar11.Value + 1;
              uVar19 = CONCAT44(FVar11.Value + 1,local_2b0);
            }
            local_2d8.Type.Value = (char)uVar19;
            local_2d8._1_3_ = (int3)(uVar19 >> 8);
            local_2d8.Value.Value = (int)(uVar19 >> 0x20);
            local_270 = FVar6;
          }
          if ((pTVar15->UpperBound).Type.Value != '\x02') {
            iStack_2a4 = (pTVar15->UpperBound).Value.FrameNumber.Value;
            local_2a8 = local_2a8 & 0xffffff00;
            uVar19 = CONCAT44(iStack_2a4,uVar4) & 0xffffffffffffff00;
            TStack_2d0.Type.Value = (char)uVar19;
            TStack_2d0._1_3_ = (int3)(uVar19 >> 8);
            TStack_2d0.Value.Value = (int)(uVar19 >> 0x20);
          }
          local_2f8._0_4_ = local_2d8._0_4_;
          local_2f8.Value.Value = local_2d8.Value.Value;
          uVar23 = TStack_2d0._0_4_;
          TStack_2f0.Value.Value = TStack_2d0.Value.Value;
        }
        TStack_2f0.Type.Value = (uchar)uVar23;
        TStack_2f0._1_3_ = SUB43(uVar23,1);
        if ((local_2f8.Type.Value == '\x02') || ((uchar)uVar23 == '\x02')) {
LAB_1460c802e:
          TVar18.Value.Value = local_2f8.Value.Value;
          TVar18.Type.Value = local_2f8.Type.Value;
          TVar18._1_3_ = local_2f8._1_3_;
LAB_1460c8033:
          if ((local_170.PlayRange.Value.LowerBound.Type.Value == '\x02') ||
             (local_170.PlayRange.Value.UpperBound.Type.Value == '\x02')) {
LAB_1460c808c:
            if (TStack_2f0.Type.Value == '\x02') {
              pTVar20 = &local_170.PlayRange.Value.UpperBound;
            }
            else if (local_170.PlayRange.Value.UpperBound.Type.Value == '\x02') {
              pTVar20 = &TStack_2f0;
            }
            else if (TStack_2f0.Value.Value < local_170.PlayRange.Value.UpperBound.Value.Value) {
              pTVar20 = &TStack_2f0;
            }
            else if (local_170.PlayRange.Value.UpperBound.Value.Value < TStack_2f0.Value.Value) {
              pTVar20 = &local_170.PlayRange.Value.UpperBound;
            }
            else {
              pTVar20 = &TStack_2f0;
              if (TStack_2f0.Type.Value != '\0') {
                pTVar20 = &local_170.PlayRange.Value.UpperBound;
              }
            }
            local_2c8 = local_170.PlayRange.Value.LowerBound;
            if ((((TVar18.Type.Value.Value != '\x02') &&
                 (local_2c8 = TVar18, local_170.PlayRange.Value.LowerBound.Type.Value != '\x02')) &&
                (local_2f8.Value.Value <= local_170.PlayRange.Value.LowerBound.Value.Value)) &&
               ((local_2c8 = local_170.PlayRange.Value.LowerBound,
                local_170.PlayRange.Value.LowerBound.Value.Value <= local_2f8.Value.Value &&
                (TVar18.Type.Value.Value == '\0')))) {
              local_2c8 = TVar18;
            }
            TStack_2c0 = *pTVar20;
          }
          else {
            if (local_170.PlayRange.Value.LowerBound.Value.Value <=
                local_170.PlayRange.Value.UpperBound.Value.Value) {
              pFVar16 = TRangeBound<FFrameNumber>::GetValue(&local_170.PlayRange.Value.UpperBound);
              iVar2 = pFVar16->Value;
              pFVar16 = TRangeBound<FFrameNumber>::GetValue
                                  ((TRangeBound<FFrameNumber> *)&local_170.PlayRange);
              if ((pFVar16->Value != iVar2) ||
                 ((local_170.PlayRange.Value.LowerBound.Type.Value != '\0' &&
                  (local_170.PlayRange.Value.UpperBound.Type.Value != '\0')))) {
                TVar18.Value.Value = local_2f8.Value.Value;
                TVar18.Type.Value = local_2f8.Type.Value;
                TVar18._1_3_ = local_2f8._1_3_;
                goto LAB_1460c808c;
              }
            }
            local_288 = local_288 & 0xffffff00;
            local_290 = local_290 & 0xffffff00;
            uStack_28c = 0;
            uStack_284 = 0;
            local_2c8.Value.Value = 0;
            local_2c8._0_4_ = local_290;
            TStack_2c0.Value.Value = 0;
            TStack_2c0._0_4_ = local_288;
          }
        }
        else {
          if (local_2f8.Value.Value <= TStack_2f0.Value.Value) {
            pFVar16 = TRangeBound<FFrameNumber>::GetValue(&TStack_2f0);
            iVar2 = pFVar16->Value;
            pFVar16 = TRangeBound<FFrameNumber>::GetValue(&local_2f8);
            if (pFVar16->Value != iVar2) goto LAB_1460c802e;
            TVar18.Value.Value = local_2f8.Value.Value;
            TVar18.Type.Value = local_2f8.Type.Value;
            TVar18._1_3_ = local_2f8._1_3_;
            if ((local_2f8.Type.Value == '\0') || (TStack_2f0.Type.Value == '\0'))
            goto LAB_1460c800d;
            goto LAB_1460c8033;
          }
LAB_1460c800d:
          local_298 = local_298 & 0xffffff00;
          local_2a0 = local_2a0 & 0xffffff00;
          uStack_29c = 0;
          uStack_294 = 0;
          local_2c8.Value.Value = 0;
          local_2c8._0_4_ = local_2a0;
          TStack_2c0.Value.Value = 0;
          TStack_2c0._0_4_ = local_298;
        }
        local_170.PlayRange.Value.LowerBound = local_2c8;
        local_170.PlayRange.Value.UpperBound = TStack_2c0;
        pFVar17 = FMovieSceneSequenceTransform::operator*
                            (&local_170.RootToSequenceTransform,&local_228,
                             &param_2->RootToSequenceTransform);
        local_170.RootToSequenceTransform.LinearTransform.TimeScale =
             (pFVar17->LinearTransform).TimeScale;
        local_170.RootToSequenceTransform.LinearTransform.Offset.FrameNumber.Value =
             (pFVar17->LinearTransform).Offset.FrameNumber.Value;
        pTVar1 = &pFVar17->NestedTransforms;
        local_170.RootToSequenceTransform.LinearTransform.Offset.SubFrame =
             (pFVar17->LinearTransform).Offset.SubFrame;
        if (&local_170.RootToSequenceTransform.NestedTransforms != pTVar1) {
          DestructItems<FMovieSceneNestedSequenceTransform,int>
                    ((FMovieSceneNestedSequenceTransform *)
                     local_170.RootToSequenceTransform.NestedTransforms.AllocatorInstance.Data,
                     local_170.RootToSequenceTransform.NestedTransforms.ArrayNum);
          if ((FMovieSceneNestedSequenceTransform *)
              local_170.RootToSequenceTransform.NestedTransforms.AllocatorInstance.Data !=
              (FMovieSceneNestedSequenceTransform *)0x0) {
            FMemory::Free(local_170.RootToSequenceTransform.NestedTransforms.AllocatorInstance.Data)
            ;
          }
          local_170.RootToSequenceTransform.NestedTransforms.AllocatorInstance.Data =
               (pTVar1->AllocatorInstance).Data;
          (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
          local_170.RootToSequenceTransform.NestedTransforms.ArrayNum =
               (pFVar17->NestedTransforms).ArrayNum;
          local_170.RootToSequenceTransform.NestedTransforms.ArrayMax =
               (pFVar17->NestedTransforms).ArrayMax;
          (pFVar17->NestedTransforms).ArrayNum = 0;
          (pFVar17->NestedTransforms).ArrayMax = 0;
        }
        DestructItems<FMovieSceneNestedSequenceTransform,int>
                  ((FMovieSceneNestedSequenceTransform *)
                   local_228.NestedTransforms.AllocatorInstance.Data,
                   local_228.NestedTransforms.ArrayNum);
        if ((FMovieSceneNestedSequenceTransform *)local_228.NestedTransforms.AllocatorInstance.Data
            != (FMovieSceneNestedSequenceTransform *)0x0) {
          FMemory::Free(local_228.NestedTransforms.AllocatorInstance.Data);
        }
        pFVar7 = local_268;
        local_170.HierarchicalBias = local_170.HierarchicalBias + param_2->HierarchicalBias;
        if ((param_2->AccumulatedFlags & AnyRestoreStateOverride) != None) {
          local_170.AccumulatedFlags = local_170.AccumulatedFlags & ~AnyRestoreStateOverride;
        }
        local_170.AccumulatedFlags = local_170.AccumulatedFlags | param_2->AccumulatedFlags;
        FMovieSceneSequenceHierarchy::Add(local_268,&local_170,local_304,&local_2e8);
        FGatherParameters::CreateForSubData(param_2,&local_208,&local_170,local_304[0]);
        local_208.LocalClampRange.LowerBound = local_170.PlayRange.Value.LowerBound;
        local_208.LocalClampRange.UpperBound = local_170.PlayRange.Value.UpperBound;
        UE::MovieScene::FSubSequencePath::PushGeneration
                  (param_4,local_304[0],local_170.DeterministicSequenceID);
        GenerateSubSequenceData(pUVar13,&local_208,pFVar5,param_4,pFVar7);
        UE::MovieScene::FSubSequencePath::PopGenerations(param_4,1);
        bVar21 = true;
        if (local_208.EndTimeBreadcrumbs.Breadcrumbs.AllocatorInstance.Data !=
            (FScriptContainerElement *)0x0) {
          FMemory::Free(local_208.EndTimeBreadcrumbs.Breadcrumbs.AllocatorInstance.Data);
        }
        if (local_208.StartTimeBreadcrumbs.Breadcrumbs.AllocatorInstance.Data !=
            (FScriptContainerElement *)0x0) {
          FMemory::Free(local_208.StartTimeBreadcrumbs.Breadcrumbs.AllocatorInstance.Data);
        }
        DestructItems<FMovieSceneNestedSequenceTransform,int>
                  ((FMovieSceneNestedSequenceTransform *)
                   local_208.RootToSequenceTransform.NestedTransforms.AllocatorInstance.Data,
                   local_208.RootToSequenceTransform.NestedTransforms.ArrayNum);
        if ((FMovieSceneNestedSequenceTransform *)
            local_208.RootToSequenceTransform.NestedTransforms.AllocatorInstance.Data !=
            (FMovieSceneNestedSequenceTransform *)0x0) {
          FMemory::Free(local_208.RootToSequenceTransform.NestedTransforms.AllocatorInstance.Data);
        }
        FMovieSceneSubSequenceData::~FMovieSceneSubSequenceData(&local_170);
      }
    }
    puVar22 = puVar22 + 1;
    uVar19 = (ulonglong)local_2e4;
  } while( true );
}

// GetDataID @ 1460c9f70

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

FMovieSceneCompiledDataID __thiscall
UMovieSceneCompiledDataManager::GetDataID
          (UMovieSceneCompiledDataManager *this,UMovieSceneSequence *param_1)

{
  TSparseArray<FMovieSceneCompiledDataEntry,FDefaultSparseArrayAllocator> *this_00;
  int iVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  FMovieSceneCompiledDataID *pFVar6;
  longlong lVar7;
  UObject *in_R8;
  TPairInitializer<FObjectKey_&&,FMovieSceneCompiledDataID_const_&> local_res10;
  FWeakObjectPtr local_res20;
  UObject *local_a8;
  undefined1 local_a0 [8];
  FWeakObjectPtr local_98;
  FSparseArrayAllocationInfo local_90;
  FWeakObjectPtr *local_80;
  UMovieSceneSequence *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_50;
  undefined1 local_43;
  byte local_41;
  
  if (in_R8 == (UObject *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Sequence",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\Compilation\\MovieSceneCompiledDataManager.cpp"
                       ,0x2be,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      iVar4 = (*pcVar2)();
      return (FMovieSceneCompiledDataID)iVar4;
    }
  }
  FindDataID(this,param_1);
  if ((int)param_1->_padding_ == -1) {
    this_00 = &this->CompiledDataEntries;
    iVar4 = *(int *)&(this->CompiledDataEntries).field_0x34;
    local_70 = 0;
    uStack_68 = 0;
    local_50 = 0;
    if (iVar4 == 0) {
      iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x30,8,1,(ForAnyElementType *)this_00,
                         (int *)&(this->CompiledDataEntries).field_0x8,
                         (int *)&(this->CompiledDataEntries).field_0xc);
      TBitArray<FDefaultBitArrayAllocator>::Add
                ((TBitArray<FDefaultBitArrayAllocator> *)&(this->CompiledDataEntries).field_0x10,
                 false);
    }
    else {
      iVar5 = *(int *)&(this->CompiledDataEntries).field_0x30;
      iVar4 = iVar4 + -1;
      iVar1 = *(int *)(*(longlong *)&this_00->field_0x0 + 4 + (longlong)iVar5 * 0x30);
      *(int *)&(this->CompiledDataEntries).field_0x30 = iVar1;
      *(int *)&(this->CompiledDataEntries).field_0x34 = iVar4;
      if (iVar4 != 0) {
        *(undefined4 *)(*(longlong *)&this_00->field_0x0 + (longlong)iVar1 * 0x30) = 0xffffffff;
      }
    }
    TSparseArrayBase<48,8,FDefaultSparseArrayAllocator>::AllocateIndex
              ((TSparseArrayBase<48,8,FDefaultSparseArrayAllocator> *)this_00,&local_90,iVar5);
    if (local_90.Pointer != (undefined8 *)0x0) {
      *(undefined8 *)local_90.Pointer = local_70;
      *(undefined8 *)((longlong)local_90.Pointer + 8) = uStack_68;
      *(undefined8 *)((longlong)local_90.Pointer + 0x10) = 0;
      *(undefined8 *)((longlong)local_90.Pointer + 0x18) = 0;
      *(undefined8 *)((longlong)local_90.Pointer + 0x20) = local_50;
      *(undefined1 *)((longlong)local_90.Pointer + 0x2d) = local_43;
      *(undefined4 *)((longlong)local_90.Pointer + 0x28) = 0xffffffff;
      *(undefined1 *)((longlong)local_90.Pointer + 0x2c) = 0;
      *(undefined1 *)((longlong)local_90.Pointer + 0x2e) = 0;
      *(byte *)((longlong)local_90.Pointer + 0x2f) = local_41 & 0xfc;
    }
    *(int *)&param_1->_padding_ = local_90.Index;
    local_a8 = (UObject *)0x0;
    lVar7 = (longlong)local_90.Index * 0x30 + *(longlong *)&this_00->field_0x0;
    if (in_R8 == (UObject *)0x0) {
      pFVar6 = (FMovieSceneCompiledDataID *)0x0;
    }
    else {
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable(in_R8);
      }
      local_res10.Value = (FMovieSceneCompiledDataID *)0x0;
      local_a8 = in_R8;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable(in_R8);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)&local_res10.Value,(FObjectPtr)&local_a8);
      pFVar6 = local_res10.Value;
    }
    *(FMovieSceneCompiledDataID **)(lVar7 + 0x20) = pFVar6;
    *(int *)(lVar7 + 0x28) = (int)param_1->_padding_;
    *(undefined1 *)(lVar7 + 0x2c) = in_R8[2].field_0x1b;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable(in_R8);
    }
    local_res20.ObjectIndex = 0;
    local_res20.ObjectSerialNumber = 0;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable(in_R8);
    }
    FWeakObjectPtr::operator=(&local_res20,(FObjectPtr)local_a0);
    local_98 = local_res20;
    local_80 = &local_98;
    local_78 = param_1;
    TSet<TTuple<FObjectKey,FMovieSceneCompiledDataID>,TDefaultMapHashableKeyFuncs<FObjectKey,FMovieSceneCompiledDataID,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FObjectKey_&&,FMovieSceneCompiledDataID_const_&>_>
              ((TSet<TTuple<FObjectKey,FMovieSceneCompiledDataID>,TDefaultMapHashableKeyFuncs<FObjectKey,FMovieSceneCompiledDataID,0>,FDefaultSetAllocator>
                *)&this->SequenceToDataIDs,&local_res10,(bool *)&local_80);
  }
  return (FMovieSceneCompiledDataID)(int)param_1;
}

// GetEntryRef @ 1460ca370

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

FMovieSceneCompiledDataEntry * __thiscall
UMovieSceneCompiledDataManager::GetEntryRef
          (UMovieSceneCompiledDataManager *this,FMovieSceneCompiledDataID param_1)

{
  code *pcVar1;
  bool bVar2;
  FMovieSceneCompiledDataEntry *pFVar3;
  undefined1 *puVar4;
  
  if ((-1 < param_1.Value) && (param_1.Value < *(int *)&(this->CompiledDataEntries).field_0x28)) {
    if (*(int *)&(this->CompiledDataEntries).field_0x28 <= param_1.Value) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5c6,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar3 = (FMovieSceneCompiledDataEntry *)(*pcVar1)();
        return pFVar3;
      }
    }
    puVar4 = *(undefined1 **)&(this->CompiledDataEntries).field_0x20;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(this->CompiledDataEntries).field_0x10;
    }
    if ((*(uint *)(puVar4 + (ulonglong)((uint)param_1.Value >> 5) * 4) >> (param_1.Value & 0x1fU) &
        1) != 0) goto LAB_1460ca40d;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("CompiledDataEntries.IsValidIndex(DataID.Value)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Compilation\\MovieSceneCompiledDataManager.h"
                     ,0xe1,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FMovieSceneCompiledDataEntry *)(*pcVar1)();
    return pFVar3;
  }
LAB_1460ca40d:
  return (FMovieSceneCompiledDataEntry *)
         ((longlong)param_1.Value * 0x30 + *(longlong *)&this->CompiledDataEntries);
}

// GetLoopingSubSectionEndTime @ 1460cdb20

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

TOptional<FFrameNumber> __cdecl
UMovieSceneCompiledDataManager::GetLoopingSubSectionEndTime
          (UMovieSceneSequence *param_1,UMovieSceneSubSection *param_2,FGatherParameters *param_3)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  int iVar4;
  char cVar5;
  bool bVar6;
  longlong lVar7;
  TOptional<FFrameNumber> TVar8;
  
  pFVar2 = param_3[1].RootToSequenceTransform.NestedTransforms.AllocatorInstance.Data;
  cVar5 = (char)pFVar2;
  if (cVar5 != '\x02') {
    lVar7 = 0;
    *(undefined1 *)((longlong)&param_1->_padding_ + 4) = 1;
    if (cVar5 == '\x01') {
      lVar7 = 4;
    }
    *(int *)&param_1->_padding_ =
         *(int *)((longlong)
                  &`struct_FFrameNumber___cdecl_UE::MovieScene::DiscreteExclusiveUpper(TRangeBound<FFrameNumber>_const&___ptr64)'
                   ::__l2::Offsets + lVar7) + (int)((ulonglong)pFVar2 >> 0x20);
    return (TOptional<FFrameNumber>)param_1;
  }
  lVar7 = (**(code **)(param_2->_padding_ + 0x2f8))(param_2);
  if (lVar7 != 0) {
    iVar4 = *(int *)(lVar7 + 0x134);
    cVar5 = (char)*(undefined4 *)(lVar7 + 0x130);
    if (cVar5 != '\x02') {
      lVar7 = 0;
      if (cVar5 == '\x01') {
        lVar7 = 4;
      }
      iVar1 = *(int *)((longlong)
                       &`struct_FFrameNumber___cdecl_UE::MovieScene::DiscreteExclusiveUpper(TRangeBound<FFrameNumber>_const&___ptr64)'
                        ::__l2::Offsets + lVar7);
      if ((cVar5 == '\x02') &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Type != ERangeBoundTypes::Open",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                             ,99,L""), bVar6)) {
        pcVar3 = (code *)swi(3);
        TVar8 = (TOptional<FFrameNumber>)(*pcVar3)();
        return TVar8;
      }
      *(undefined1 *)((longlong)&param_1->_padding_ + 4) = 1;
      *(int *)&param_1->_padding_ = iVar4 + iVar1;
      return (TOptional<FFrameNumber>)param_1;
    }
  }
  *(undefined1 *)((longlong)&param_1->_padding_ + 4) = 0;
  return (TOptional<FFrameNumber>)param_1;
}

// GetPrecompiledData @ 1460cf020

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UMovieSceneCompiledDataManager * __cdecl UMovieSceneCompiledDataManager::GetPrecompiledData(void)

{
  FName FVar1;
  FName *pFVar2;
  UPackage *pUVar3;
  UClass *pUVar4;
  UMovieSceneCompiledDataManager *pUVar5;
  longlong *plVar6;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  FName local_a0;
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_c8;
  if (GExitPurge) {
    `UMovieSceneCompiledDataManager::GetPrecompiledData'::__l2::<lambda_1>::operator()(local_a8);
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      pFVar2 = ::FName::FName(&local_a0,"PrecompiledDataManager");
      FVar1 = *pFVar2;
      pUVar3 = GetTransientPackage();
      if (FVar1 == (FName)0x0) {
        FObjectInitializer::AssertIfInConstructor
                  ((UObject *)pUVar3,
                   L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                  );
      }
      pUVar4 = StaticClass();
      FStaticConstructObjectParameters::FStaticConstructObjectParameters
                ((FStaticConstructObjectParameters *)local_98,pUVar4);
      local_98._48_8_ = (FObjectInstancingGraph *)0x0;
      local_98._56_8_ = (UPackage *)0x0;
      local_98._24_4_ = RF_MarkAsRootSet;
      local_98._40_8_ = (UObject *)0x0;
      local_98[0x20] = false;
      local_98._8_8_ = pUVar3;
      local_98._16_8_ = FVar1;
      pUVar5 = (UMovieSceneCompiledDataManager *)
               StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
      if (local_98._64_8_ != 0) {
        plVar6 = (longlong *)(local_98 + 0x50);
        if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
          plVar6 = (longlong *)local_98._104_8_;
        }
        (**(code **)(*plVar6 + 0x10))();
      }
      GPrecompiledDataManager = pUVar5;
      _Init_thread_footer(&::_TSS0);
    }
  }
  return GPrecompiledDataManager;
}

// GetPrivateStaticClass @ 1460cf540

UClass * __cdecl UMovieSceneCompiledDataManager::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneCompiledDataManager.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieScene",L"MovieSceneCompiledDataManager",
               &Z_Registration_Info_UClass_UMovieSceneCompiledDataManager.InnerSingleton,
               StaticRegisterNativesUMovieSceneCompiledDataManager,0x230,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneCompiledDataManager>,
               InternalVTableHelperCtorCaller<UMovieSceneCompiledDataManager>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneCompiledDataManager.InnerSingleton;
}

// GetSubDataID @ 1460d03a0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

FMovieSceneCompiledDataID __thiscall
UMovieSceneCompiledDataManager::GetSubDataID
          (UMovieSceneCompiledDataManager *this,FMovieSceneCompiledDataID param_1,
          FMovieSceneSequenceID param_2)

{
  uint uVar1;
  FMovieSceneSequenceHierarchy *pFVar2;
  uint *puVar3;
  UMovieSceneSequence *pUVar4;
  FMovieSceneSubSequenceData *this_00;
  undefined4 in_register_00000014;
  UMovieSceneSequence *pUVar5;
  undefined1 *puVar6;
  uint in_R9D;
  
  pUVar5 = (UMovieSceneSequence *)CONCAT44(in_register_00000014,param_1.Value);
  if (in_R9D == 0) {
    *(uint *)&pUVar5->_padding_ = param_2.Value;
    return (FMovieSceneCompiledDataID)param_1.Value;
  }
  pFVar2 = FindHierarchy(this,(FMovieSceneCompiledDataID)param_2.Value);
  if ((pFVar2 != (FMovieSceneSequenceHierarchy *)0x0) &&
     (*(int *)&(pFVar2->SubSequences).field_0x8 != *(int *)&(pFVar2->SubSequences).field_0x34)) {
    puVar6 = *(undefined1 **)&(pFVar2->SubSequences).field_0x40;
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = &(pFVar2->SubSequences).field_0x38;
    }
    uVar1 = *(uint *)(puVar6 + (ulonglong)(*(int *)&(pFVar2->SubSequences).field_0x48 - 1U & in_R9D)
                               * 4);
    if (uVar1 != 0xffffffff) {
      do {
        puVar3 = (uint *)((longlong)(int)uVar1 * 0x120 + *(longlong *)&pFVar2->SubSequences);
        if (*puVar3 == in_R9D) {
          this_00 = (FMovieSceneSubSequenceData *)(puVar3 + 2);
          if (puVar3 == (uint *)0x0) {
            this_00 = (FMovieSceneSubSequenceData *)0x0;
          }
          if (this_00 != (FMovieSceneSubSequenceData *)0x0) {
            pUVar4 = FMovieSceneSubSequenceData::GetSequence(this_00);
            if (pUVar4 != (UMovieSceneSequence *)0x0) {
              GetDataID(this,pUVar5);
              return (FMovieSceneCompiledDataID)param_1.Value;
            }
          }
          break;
        }
        uVar1 = puVar3[0x46];
      } while (uVar1 != 0xffffffff);
    }
  }
  *(undefined4 *)&pUVar5->_padding_ = 0xffffffff;
  return (FMovieSceneCompiledDataID)param_1.Value;
}

// IsDirty @ 1460d8a10

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

bool __thiscall
UMovieSceneCompiledDataManager::IsDirty
          (UMovieSceneCompiledDataManager *this,FMovieSceneCompiledDataEntry *param_1)

{
  undefined1 *puVar1;
  TMap<FMovieSceneSequenceID,FMovieSceneSubSequenceData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMovieSceneSequenceID,FMovieSceneSubSequenceData,0>_>
  *pTVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  code *pcVar6;
  TMap<FMovieSceneSequenceID,FMovieSceneSubSequenceData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMovieSceneSequenceID,FMovieSceneSubSequenceData,0>_>
  *pTVar7;
  bool bVar8;
  undefined1 uVar9;
  UMovieSceneSequence *pUVar10;
  FMovieSceneSequenceHierarchy *pFVar11;
  TTuple<FObjectKey,FMovieSceneCompiledDataID> *pTVar12;
  longlong lVar13;
  int *piVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  undefined1 *puVar18;
  uint *puVar19;
  undefined1 local_res18 [8];
  int local_res20;
  FWeakObjectPtr local_b8;
  TMap<FMovieSceneSequenceID,FMovieSceneSubSequenceData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMovieSceneSequenceID,FMovieSceneSubSequenceData,0>_>
  *local_b0;
  int iStack_a8;
  uint uStack_a4;
  undefined1 *local_a0;
  undefined4 uStack_98;
  int iStack_94;
  int local_90;
  int iStack_8c;
  int iStack_88;
  undefined4 uStack_84;
  UMovieSceneSequence *local_80;
  FWeakObjectPtr local_78;
  TMap<FMovieSceneSequenceID,FMovieSceneSubSequenceData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMovieSceneSequenceID,FMovieSceneSubSequenceData,0>_>
  *local_70;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_68;
  undefined8 uStack_48;
  
  pUVar10 = FMovieSceneCompiledDataEntry::GetSequence(param_1);
  if (pUVar10 != (UMovieSceneSequence *)0x0) {
    pUVar10 = FMovieSceneCompiledDataEntry::GetSequence(param_1);
    if ((((uint)pUVar10->_padding_ != (param_1->CompiledSignature).D ||
         *(uint *)((longlong)&pUVar10->_padding_ + 4) != (param_1->CompiledSignature).C) ||
        (uint)pUVar10->_padding_ != (param_1->CompiledSignature).B) ||
        *(uint *)((longlong)&pUVar10->_padding_ + 4) != (param_1->CompiledSignature).A) {
      return true;
    }
    pFVar11 = FindHierarchy(this,(FMovieSceneCompiledDataID)(param_1->DataID).Value);
    if (pFVar11 != (FMovieSceneSequenceHierarchy *)0x0) {
      puVar1 = &(pFVar11->SubSequences).field_0x10;
      iStack_a8 = 0;
      iVar4 = *(int *)&(pFVar11->SubSequences).field_0x28;
      pTVar2 = &pFVar11->SubSequences;
      local_90 = 0;
      uStack_a4 = 1;
      iStack_94 = 0;
      if (iVar4 != 0) {
        puVar19 = *(uint **)&(pFVar11->SubSequences).field_0x20;
        if (puVar19 == (uint *)0x0) {
          puVar19 = (uint *)puVar1;
        }
        uVar17 = *puVar19;
        while (uVar17 == 0) {
          lVar13 = (longlong)iStack_a8;
          local_90 = local_90 + 0x20;
          iStack_a8 = iStack_a8 + 1;
          iStack_94 = iVar4;
          if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_a8) goto LAB_1460d8b0d;
          uVar17 = puVar19[lVar13 + 1];
        }
        uStack_a4 = -uVar17 & uVar17;
        uVar3 = (ulonglong)uStack_a4 * 2 + 1;
        lVar13 = 0x3f;
        if (uVar3 != 0) {
          for (; uVar3 >> lVar13 == 0; lVar13 = lVar13 + -1) {
          }
        }
        local_res20 = (int)lVar13;
        iStack_94 = local_90 + -1 + local_res20;
        if (iVar4 < iStack_94) {
          iStack_94 = iVar4;
        }
      }
LAB_1460d8b0d:
      iStack_88 = *(int *)&(pFVar11->SubSequences).field_0x8 -
                  *(int *)&(pFVar11->SubSequences).field_0x34;
      uVar17 = *(uint *)&(pFVar11->SubSequences).field_0x28;
      uStack_98 = 0xffffffff;
      uVar16 = uVar17 & 0xffffffe0;
      TStack_68._padding_ = CONCAT44(uStack_a4,iStack_a8);
      TStack_68.CurrentBitIndex = iStack_94;
      TStack_68.UnvisitedBitMask = 0xffffffff;
      iVar15 = (int)uVar17 >> 5;
      TStack_68._28_4_ = iStack_94;
      TStack_68.BaseBitIndex = local_90;
      uStack_48 = CONCAT44(uStack_84,iStack_88);
      local_b0 = pTVar2;
      local_a0 = puVar1;
      iStack_8c = iStack_94;
      local_70 = pTVar2;
      TStack_68.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
      if ((((int)uVar17 < 0) || (iVar4 < (int)uVar17)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("StartIndex >= 0 && StartIndex <= Array.Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x7af,L""), bVar8)) {
        pcVar6 = (code *)swi(3);
        uVar9 = (*pcVar6)();
        return (bool)uVar9;
      }
      uVar5 = *(uint *)&(pFVar11->SubSequences).field_0x28;
      if (uVar17 != uVar5) {
        puVar18 = *(undefined1 **)&(pFVar11->SubSequences).field_0x20;
        if (puVar18 == (undefined1 *)0x0) {
          puVar18 = puVar1;
        }
        uVar17 = -1 << ((byte)uVar17 & 0x1f) & *(uint *)(puVar18 + (longlong)iVar15 * 4);
        while (uVar17 == 0) {
          lVar13 = (longlong)iVar15;
          uVar16 = uVar16 + 0x20;
          iVar15 = iVar15 + 1;
          uVar17 = uVar5;
          if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar15)
          goto LAB_1460d8c10;
          uVar17 = *(uint *)(puVar18 + lVar13 * 4 + 4);
        }
        uVar3 = (ulonglong)(-uVar17 & uVar17) * 2 + 1;
        lVar13 = 0x3f;
        if (uVar3 != 0) {
          for (; uVar3 >> lVar13 == 0; lVar13 = lVar13 + -1) {
          }
        }
        uVar17 = (int)lVar13 + -1 + uVar16;
        if ((int)uVar5 < (int)uVar17) {
          uVar17 = uVar5;
        }
      }
LAB_1460d8c10:
      while( true ) {
        pTVar7 = local_70;
        if (*(int *)&local_70->field_0x8 - *(int *)&local_70->field_0x34 != (int)uStack_48) {
          `TSparseArray<TSparseSetElement<TTuple<FMovieSceneSequenceID,FMovieSceneSubSequenceData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
        }
        if (((TStack_68.CurrentBitIndex == uVar17) &&
            (TStack_68.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
           (pTVar7 == pTVar2)) {
          return false;
        }
        pUVar10 = FMovieSceneSubSequenceData::GetSequence
                            ((FMovieSceneSubSequenceData *)
                             ((longlong)TStack_68.CurrentBitIndex * 0x120 + *(longlong *)pTVar7 + 8)
                            );
        if (pUVar10 == (UMovieSceneSequence *)0x0) {
          return true;
        }
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)pUVar10);
        }
        local_b8.ObjectIndex = 0;
        local_b8.ObjectSerialNumber = 0;
        local_80 = pUVar10;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)pUVar10);
        }
        FWeakObjectPtr::operator=(&local_b8,(FObjectPtr)&local_80);
        local_78 = local_b8;
        pTVar12 = TSet<TTuple<FObjectKey,FMovieSceneCompiledDataID>,TDefaultMapHashableKeyFuncs<FObjectKey,FMovieSceneCompiledDataID,0>,FDefaultSetAllocator>
                  ::Find((TSet<TTuple<FObjectKey,FMovieSceneCompiledDataID>,TDefaultMapHashableKeyFuncs<FObjectKey,FMovieSceneCompiledDataID,0>,FDefaultSetAllocator>
                          *)&this->SequenceToDataIDs,(FObjectKey *)&local_78);
        if (pTVar12 == (TTuple<FObjectKey,FMovieSceneCompiledDataID> *)0x0) break;
        if (*(int *)&pTVar12->field_0x8 == -1) {
          return true;
        }
        piVar14 = (int *)((longlong)*(int *)&pTVar12->field_0x8 * 0x30 +
                         *(longlong *)&this->CompiledDataEntries);
        if (((piVar14[3] != (int)pUVar10->_padding_ ||
             piVar14[2] != *(int *)((longlong)&pUVar10->_padding_ + 4)) ||
            piVar14[1] != (int)pUVar10->_padding_) ||
            *(int *)((longlong)&pUVar10->_padding_ + 4) != *piVar14) {
          return true;
        }
        TStack_68.UnvisitedBitMask = TStack_68.UnvisitedBitMask & ~TStack_68._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_68);
      }
      return true;
    }
  }
  return false;
}

// IsDirty @ 1460d8d30

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

bool __thiscall
UMovieSceneCompiledDataManager::IsDirty
          (UMovieSceneCompiledDataManager *this,UMovieSceneSequence *param_1)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  TTuple<FObjectKey,FMovieSceneCompiledDataID> *pTVar5;
  undefined1 *puVar6;
  FWeakObjectPtr local_res8;
  FObjectKey local_res10;
  UMovieSceneSequence *local_res18 [2];
  FMovieSceneCompiledDataEntry local_48;
  
  local_res10.ObjectIndex = 0;
  local_res10.ObjectSerialNumber = 0;
  if (param_1 != (UMovieSceneSequence *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    local_res8.ObjectIndex = 0;
    local_res8.ObjectSerialNumber = 0;
    local_res18[0] = param_1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)local_res18);
    local_res10.ObjectIndex = local_res8.ObjectIndex;
    local_res10.ObjectSerialNumber = local_res8.ObjectSerialNumber;
  }
  pTVar5 = TSet<TTuple<FObjectKey,FMovieSceneCompiledDataID>,TDefaultMapHashableKeyFuncs<FObjectKey,FMovieSceneCompiledDataID,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FObjectKey,FMovieSceneCompiledDataID>,TDefaultMapHashableKeyFuncs<FObjectKey,FMovieSceneCompiledDataID,0>,FDefaultSetAllocator>
                   *)&this->SequenceToDataIDs,&local_res10);
  if (pTVar5 == (TTuple<FObjectKey,FMovieSceneCompiledDataID> *)0x0) {
    return true;
  }
  uVar1 = *(uint *)&pTVar5->field_0x8;
  if (uVar1 == 0xffffffff) {
    return true;
  }
  if ((-1 < (int)uVar1) && ((int)uVar1 < *(int *)&(this->CompiledDataEntries).field_0x28)) {
    if ((*(int *)&(this->CompiledDataEntries).field_0x28 <= (int)uVar1) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5c6,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    puVar6 = *(undefined1 **)&(this->CompiledDataEntries).field_0x20;
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = &(this->CompiledDataEntries).field_0x10;
    }
    if ((*(uint *)(puVar6 + (longlong)((int)(uVar1 + ((int)uVar1 >> 0x1f & 0x1fU)) >> 5) * 4) >>
         (uVar1 & 0x1f) & 1) != 0) goto LAB_1460d8e48;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("CompiledDataEntries.IsValidIndex(ExistingDataID.Value)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\Compilation\\MovieSceneCompiledDataManager.cpp"
                     ,0x352,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
LAB_1460d8e48:
  FMovieSceneCompiledDataEntry::FMovieSceneCompiledDataEntry
            (&local_48,
             (FMovieSceneCompiledDataEntry *)
             ((longlong)(int)uVar1 * 0x30 + *(longlong *)&this->CompiledDataEntries));
  bVar3 = IsDirty(this,&local_48);
  if (local_48.DeterminismFences.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.DeterminismFences.AllocatorInstance.Data);
  }
  return bVar3;
}

// IsDirty @ 1460d8ea0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

bool __thiscall
UMovieSceneCompiledDataManager::IsDirty
          (UMovieSceneCompiledDataManager *this,FMovieSceneCompiledDataID param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  undefined1 *puVar4;
  
  if ((-1 < param_1.Value) && (param_1.Value < *(int *)&(this->CompiledDataEntries).field_0x28)) {
    if (*(int *)&(this->CompiledDataEntries).field_0x28 <= param_1.Value) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5c6,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
    puVar4 = *(undefined1 **)&(this->CompiledDataEntries).field_0x20;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(this->CompiledDataEntries).field_0x10;
    }
    if ((*(uint *)(puVar4 + (ulonglong)((uint)param_1.Value >> 5) * 4) >> (param_1.Value & 0x1fU) &
        1) != 0) goto LAB_1460d8f3d;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("CompiledDataID.IsValid() && CompiledDataEntries.IsValidIndex(CompiledDataID.Value)"
                     ,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\Compilation\\MovieSceneCompiledDataManager.cpp"
                     ,0x349,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
LAB_1460d8f3d:
  bVar2 = IsDirty(this,(FMovieSceneCompiledDataEntry *)
                       ((longlong)param_1.Value * 0x30 + *(longlong *)&this->CompiledDataEntries));
  return bVar2;
}

// LoadCompiledData @ 1460d9570

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __thiscall
UMovieSceneCompiledDataManager::LoadCompiledData
          (UMovieSceneCompiledDataManager *this,UMovieSceneSequence *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  undefined8 *puVar1;
  TArray<FMovieSceneDeterminismFence,TSizedDefaultAllocator<32>_> *pTVar2;
  byte *pbVar3;
  code *pcVar4;
  undefined8 uVar5;
  bool bVar6;
  UMovieSceneCompiledData *pUVar7;
  undefined8 *puVar8;
  undefined1 *puVar9;
  uint local_res8 [2];
  TPairInitializer<int_const_&,FMovieSceneSequenceHierarchy_&&> local_res18;
  undefined1 local_78 [8];
  FMovieSceneEvaluationField *local_70;
  FMovieSceneSequenceHierarchy *local_68;
  uint *local_60;
  FMovieSceneEvaluationTemplate *local_58;
  uint *local_50;
  FMovieSceneEvaluationField *local_48;
  uint *local_40;
  FMovieSceneEntityComponentField *local_38;
  
  lpCriticalSection = &this->AsyncLoadCriticalSection;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  pUVar7 = UMovieSceneSequence::GetCompiledData(param_1);
  if (pUVar7 == (UMovieSceneCompiledData *)0x0) {
    Reset(this,param_1);
    goto LAB_1460d983b;
  }
  GetDataID(this,(UMovieSceneSequence *)local_res8);
  if ((((pUVar7->CompilerVersion).D != (this->CompilerVersion).D ||
       (pUVar7->CompilerVersion).C != (this->CompilerVersion).C) ||
      (pUVar7->CompilerVersion).B != (this->CompilerVersion).B) ||
      (pUVar7->CompilerVersion).A != (this->CompilerVersion).A) {
    pbVar3 = (byte *)((longlong)(int)local_res8[0] * 0x30 + 0x2c +
                     *(longlong *)&this->CompiledDataEntries);
    *pbVar3 = *pbVar3 | 1;
    goto LAB_1460d983b;
  }
  if ((pUVar7->AllocatedMask & Hierarchy) != None) {
    local_70 = (FMovieSceneEvaluationField *)local_res8;
    local_68 = &pUVar7->Hierarchy;
    TSet<TTuple<int,FMovieSceneSequenceHierarchy>,TDefaultMapHashableKeyFuncs<int,FMovieSceneSequenceHierarchy,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<int_const_&,FMovieSceneSequenceHierarchy_&&>_>
              ((TSet<TTuple<int,FMovieSceneSequenceHierarchy>,TDefaultMapHashableKeyFuncs<int,FMovieSceneSequenceHierarchy,0>,FDefaultSetAllocator>
                *)&this->Hierarchies,&local_res18,(bool *)&local_70);
  }
  if ((pUVar7->AllocatedMask & EvaluationTemplate) != None) {
    local_60 = local_res8;
    local_58 = &pUVar7->EvaluationTemplate;
    TSet<TTuple<int,FMovieSceneEvaluationTemplate>,TDefaultMapHashableKeyFuncs<int,FMovieSceneEvaluationTemplate,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<int_const_&,FMovieSceneEvaluationTemplate_&&>_>
              ((TSet<TTuple<int,FMovieSceneEvaluationTemplate>,TDefaultMapHashableKeyFuncs<int,FMovieSceneEvaluationTemplate,0>,FDefaultSetAllocator>
                *)&this->TrackTemplates,
               (TPairInitializer<int_const_&,FMovieSceneEvaluationTemplate_&&> *)&local_res18.Value,
               (bool *)&local_60);
  }
  if ((pUVar7->AllocatedMask & EvaluationTemplateField) != None) {
    local_50 = local_res8;
    local_48 = &pUVar7->TrackTemplateField;
    TSet<TTuple<int,FMovieSceneEvaluationField>,TDefaultMapHashableKeyFuncs<int,FMovieSceneEvaluationField,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<int_const_&,FMovieSceneEvaluationField_&&>_>
              ((TSet<TTuple<int,FMovieSceneEvaluationField>,TDefaultMapHashableKeyFuncs<int,FMovieSceneEvaluationField,0>,FDefaultSetAllocator>
                *)&this->TrackTemplateFields,
               (TPairInitializer<int_const_&,FMovieSceneEvaluationField_&&> *)local_78,
               (bool *)&local_50);
  }
  if ((pUVar7->AllocatedMask & EntityComponentField) != None) {
    local_40 = local_res8;
    local_38 = &pUVar7->EntityComponentField;
    TSet<TTuple<int,FMovieSceneEntityComponentField>,TDefaultMapHashableKeyFuncs<int,FMovieSceneEntityComponentField,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<int_const_&,FMovieSceneEntityComponentField_&&>_>
              ((TSet<TTuple<int,FMovieSceneEntityComponentField>,TDefaultMapHashableKeyFuncs<int,FMovieSceneEntityComponentField,0>,FDefaultSetAllocator>
                *)&this->EntityComponentFields,
               (TPairInitializer<int_const_&,FMovieSceneEntityComponentField_&&> *)(local_78 + 4),
               (bool *)&local_40);
  }
  if (((int)local_res8[0] < 0) ||
     (*(int *)&(this->CompiledDataEntries).field_0x28 <= (int)local_res8[0])) {
LAB_1460d9786:
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("CompiledDataEntries.IsValidIndex(DataID.Value)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Compilation\\MovieSceneCompiledDataManager.h"
                       ,0x133,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else {
    if (*(int *)&(this->CompiledDataEntries).field_0x28 <= (int)local_res8[0]) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5c6,L"");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    puVar9 = *(undefined1 **)&(this->CompiledDataEntries).field_0x20;
    if (puVar9 == (undefined1 *)0x0) {
      puVar9 = &(this->CompiledDataEntries).field_0x10;
    }
    if ((*(uint *)(puVar9 + (longlong)
                            ((int)(local_res8[0] + ((int)local_res8[0] >> 0x1f & 0x1fU)) >> 5) * 4)
         >> (local_res8[0] & 0x1f) & 1) == 0) goto LAB_1460d9786;
  }
  pTVar2 = &pUVar7->DeterminismFences;
  puVar8 = (undefined8 *)
           ((longlong)(int)local_res8[0] * 0x30 + *(longlong *)&this->CompiledDataEntries);
  puVar1 = puVar8 + 2;
  if ((TArray<FMovieSceneDeterminismFence,TSizedDefaultAllocator<32>_> *)puVar1 != pTVar2) {
    if ((void *)*puVar1 != (void *)0x0) {
      FMemory::Free((void *)*puVar1);
    }
    *puVar1 = (pTVar2->AllocatorInstance).Data;
    (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    *(int *)(puVar8 + 3) = (pUVar7->DeterminismFences).ArrayNum;
    *(int *)((longlong)puVar8 + 0x1c) = (pUVar7->DeterminismFences).ArrayMax;
    (pUVar7->DeterminismFences).ArrayNum = 0;
    (pUVar7->DeterminismFences).ArrayMax = 0;
  }
  uVar5 = *(undefined8 *)&(pUVar7->CompiledSignature).C;
  *puVar8 = *(undefined8 *)&pUVar7->CompiledSignature;
  puVar8[1] = uVar5;
  *(EMovieSceneSequenceCompilerMask *)((longlong)puVar8 + 0x2e) = pUVar7->AccumulatedMask;
  *(EMovieSceneSequenceFlags *)((longlong)puVar8 + 0x2c) = pUVar7->AccumulatedFlags;
  *(FMovieSceneCompiledSequenceFlagStruct *)((longlong)puVar8 + 0x2f) = pUVar7->CompiledFlags;
  this->ReallocationVersion = this->ReallocationVersion + 1;
LAB_1460d983b:
                    /* WARNING: Could not recover jumptable at 0x0001460d984e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
}

// PopulateEvaluationGroup @ 1460dee00

void __thiscall
UMovieSceneCompiledDataManager::PopulateEvaluationGroup
          (UMovieSceneCompiledDataManager *this,
          TArray<FCompileOnTheFlyData,TSizedDefaultAllocator<32>_> *param_1,
          FMovieSceneEvaluationGroup *param_2)

{
  FScriptContainerElement *pFVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  ForAnyElementType FVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  int iVar11;
  int *piVar12;
  longlong lVar13;
  uint uVar14;
  ulonglong uVar15;
  uint uVar16;
  ulonglong uVar17;
  FScriptContainerElement *pFVar18;
  short sVar19;
  longlong lVar20;
  ulonglong local_res10;
  int local_res20;
  undefined8 local_48;
  undefined4 local_40;
  
  if ((param_2 == (FMovieSceneEvaluationGroup *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("OutGroup",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\Compilation\\MovieSceneCompiledDataManager.cpp"
                         ,0x4ff,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (param_1->ArrayNum != 0) {
    piVar12 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x9d4c);
    if ((*piVar12 < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      atexit(`UMovieSceneCompiledDataManager::PopulateEvaluationGroup'::__l2::
             _dynamic_atexit_destructor_for__InitTrackLUT__);
      _Init_thread_footer(&::_TSS0);
    }
    if ((*piVar12 < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
      atexit(`UMovieSceneCompiledDataManager::PopulateEvaluationGroup'::__l2::
             _dynamic_atexit_destructor_for__InitSectionLUT__);
      _Init_thread_footer(&::_TSS1);
    }
    if ((*piVar12 < ::_TSS2) && (_Init_thread_header(&::_TSS2), ::_TSS2 == -1)) {
      atexit(`UMovieSceneCompiledDataManager::PopulateEvaluationGroup'::__l2::
             _dynamic_atexit_destructor_for__EvalTrackLUT__);
      _Init_thread_footer(&::_TSS2);
    }
    if ((*piVar12 < ::_TSS3) && (_Init_thread_header(&::_TSS3), ::_TSS3 == -1)) {
      atexit(`UMovieSceneCompiledDataManager::PopulateEvaluationGroup'::__l2::
             _dynamic_atexit_destructor_for__EvalSectionLUT__);
      _Init_thread_footer(&::_TSS3);
    }
    uVar15 = 0;
    InitTrackLUT.ArrayNum = 0;
    if ((InitTrackLUT.ArrayMax < 0) && (InitTrackLUT.ArrayMax != 0)) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,0,&InitTrackLUT.AllocatorInstance,0,&InitTrackLUT.ArrayMax);
    }
    InitSectionLUT.ArrayNum = 0;
    if (InitSectionLUT.ArrayMax < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,0,&InitSectionLUT.AllocatorInstance,0,&InitSectionLUT.ArrayMax);
    }
    EvalTrackLUT.ArrayNum = 0;
    if (EvalTrackLUT.ArrayMax < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,0,&EvalTrackLUT.AllocatorInstance,0,&EvalTrackLUT.ArrayMax);
    }
    EvalSectionLUT.ArrayNum = 0;
    if (EvalSectionLUT.ArrayMax < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,0,&EvalSectionLUT.AllocatorInstance,0,&EvalSectionLUT.ArrayMax);
    }
    if ((param_1->ArrayNum < 1) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar11 = param_1->ArrayNum;
    lVar13 = *(longlong *)((param_1->AllocatorInstance).Data + 8);
    if (0 < iVar11) {
      local_res10 = 0;
      uVar17 = uVar15;
      do {
        uVar14 = (uint)uVar15;
        uVar7 = 0;
        if ((int)uVar14 < iVar11) {
          uVar7 = ~uVar14 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar1 = (param_1->AllocatorInstance).Data;
        lVar10 = uVar17 * 0x24;
        if (*(longlong *)(pFVar1 + lVar10 + 8) != lVar13) {
          AddPtrsToGroup(param_2,&InitTrackLUT,&InitSectionLUT,&EvalTrackLUT,&EvalSectionLUT);
        }
        lVar13 = *(longlong *)(pFVar1 + lVar10 + 8);
        sVar19 = 0;
        uVar2 = *(undefined8 *)(pFVar1 + lVar10 + 0x14);
        iVar11 = param_1->ArrayNum;
        lVar20 = lVar10;
        if ((int)uVar14 < iVar11) {
          do {
            uVar14 = (uint)uVar15;
            uVar16 = ~uVar14 >> 0x1f;
            uVar7 = 0;
            if ((int)uVar14 < iVar11) {
              uVar7 = uVar16;
            }
            if ((uVar7 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            uVar3 = *(undefined8 *)((param_1->AllocatorInstance).Data + lVar20 + 0x14);
            local_res20 = (int)((ulonglong)uVar2 >> 0x20);
            uVar17 = local_res10;
            if (((int)((ulonglong)uVar3 >> 0x20) != local_res20) || ((int)uVar3 != (int)uVar2))
            break;
            uVar8 = 0;
            uVar7 = uVar8;
            if ((int)uVar14 < param_1->ArrayNum) {
              uVar7 = uVar16;
            }
            if ((uVar7 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            if (*(short *)((param_1->AllocatorInstance).Data + lVar20 + 0x1c) != -1) {
              sVar19 = sVar19 + 1;
              if (pFVar1[lVar10 + 0x10] != (FScriptContainerElement)0x0) {
                uVar7 = uVar8;
                if ((int)uVar14 < param_1->ArrayNum) {
                  uVar7 = uVar16;
                }
                if ((uVar7 == 0) &&
                   (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar6)) {
                  pcVar4 = (code *)swi(3);
                  (*pcVar4)();
                  return;
                }
                pFVar18 = (param_1->AllocatorInstance).Data + lVar20 + 0x1c;
                if (((InitSectionLUT.AllocatorInstance.Data <= pFVar18) &&
                    (pFVar18 < InitSectionLUT.AllocatorInstance.Data +
                               (longlong)InitSectionLUT.ArrayMax * 8)) &&
                   (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x7a5,
                                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                      ), bVar6)) {
                  pcVar4 = (code *)swi(3);
                  (*pcVar4)();
                  return;
                }
                if (InitSectionLUT.ArrayNum == InitSectionLUT.ArrayMax) {
                  InitSectionLUT.ArrayNum =
                       UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x408,&InitSectionLUT.AllocatorInstance,&InitSectionLUT.ArrayMax);
                }
                lVar9 = (longlong)InitSectionLUT.ArrayNum;
                InitSectionLUT.ArrayNum = InitSectionLUT.ArrayNum + 1;
                *(undefined8 *)(InitSectionLUT.AllocatorInstance.Data + lVar9 * 8) =
                     *(undefined8 *)pFVar18;
              }
              if ((int)uVar14 < param_1->ArrayNum) {
                uVar8 = uVar16;
              }
              if ((uVar8 == 0) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar6)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              pFVar18 = (param_1->AllocatorInstance).Data + lVar20 + 0x1c;
              if (((EvalSectionLUT.AllocatorInstance.Data <= pFVar18) &&
                  (pFVar18 < EvalSectionLUT.AllocatorInstance.Data +
                             (longlong)EvalSectionLUT.ArrayMax * 8)) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar6)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              if (EvalSectionLUT.ArrayNum == EvalSectionLUT.ArrayMax) {
                EvalSectionLUT.ArrayNum =
                     UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x408,&EvalSectionLUT.AllocatorInstance,&EvalSectionLUT.ArrayMax);
              }
              lVar9 = (longlong)EvalSectionLUT.ArrayNum;
              EvalSectionLUT.ArrayNum = EvalSectionLUT.ArrayNum + 1;
              *(undefined8 *)(EvalSectionLUT.AllocatorInstance.Data + lVar9 * 8) =
                   *(undefined8 *)pFVar18;
            }
            uVar15 = (ulonglong)(uVar14 + 1);
            iVar11 = param_1->ArrayNum;
            uVar17 = local_res10 + 1;
            lVar20 = lVar20 + 0x24;
            local_res10 = uVar17;
          } while ((int)(uVar14 + 1) < iVar11);
        }
        local_48 = *(undefined8 *)(pFVar1 + lVar10 + 0x14);
        local_40 = CONCAT22(local_40._2_2_,sVar19);
        if (pFVar1[lVar10 + 0x10] != (FScriptContainerElement)0x0) {
          if (((InitTrackLUT.AllocatorInstance.Data <= (FScriptContainerElement *)&local_48) &&
              ((FScriptContainerElement *)&local_48 <
               InitTrackLUT.AllocatorInstance.Data + (longlong)InitTrackLUT.ArrayMax * 0xc)) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar6)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          if (InitTrackLUT.ArrayNum == InitTrackLUT.ArrayMax) {
            InitTrackLUT.ArrayNum =
                 UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x40c,&InitTrackLUT.AllocatorInstance,&InitTrackLUT.ArrayMax);
          }
          FVar5.Data = InitTrackLUT.AllocatorInstance.Data;
          lVar10 = (longlong)InitTrackLUT.ArrayNum;
          InitTrackLUT.ArrayNum = InitTrackLUT.ArrayNum + 1;
          *(undefined8 *)(InitTrackLUT.AllocatorInstance.Data + lVar10 * 0xc) = local_48;
          *(undefined4 *)(FVar5.Data + lVar10 * 0xc + 8) = local_40;
        }
        if (((EvalTrackLUT.AllocatorInstance.Data <= (FScriptContainerElement *)&local_48) &&
            ((FScriptContainerElement *)&local_48 <
             EvalTrackLUT.AllocatorInstance.Data + (longlong)EvalTrackLUT.ArrayMax * 0xc)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if (EvalTrackLUT.ArrayNum == EvalTrackLUT.ArrayMax) {
          EvalTrackLUT.ArrayNum =
               UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x40c,&EvalTrackLUT.AllocatorInstance,&EvalTrackLUT.ArrayMax);
        }
        FVar5.Data = EvalTrackLUT.AllocatorInstance.Data;
        lVar10 = (longlong)EvalTrackLUT.ArrayNum;
        EvalTrackLUT.ArrayNum = EvalTrackLUT.ArrayNum + 1;
        *(undefined8 *)(EvalTrackLUT.AllocatorInstance.Data + lVar10 * 0xc) = local_48;
        *(undefined4 *)(FVar5.Data + lVar10 * 0xc + 8) = local_40;
        iVar11 = param_1->ArrayNum;
      } while ((int)uVar15 < iVar11);
    }
    AddPtrsToGroup(param_2,&InitTrackLUT,&InitSectionLUT,&EvalTrackLUT,&EvalSectionLUT);
  }
  return;
}

// PopulateMetaData @ 1460df790

void __thiscall
UMovieSceneCompiledDataManager::PopulateMetaData
          (UMovieSceneCompiledDataManager *this,FMovieSceneSequenceHierarchy *param_1,
          TArray<FCompileOnTheFlyData,TSizedDefaultAllocator<32>_> *param_2,
          TMovieSceneEvaluationTreeDataIterator<FMovieSceneSubSequenceTreeEntry> *param_3,
          FMovieSceneEvaluationMetaData *param_4)

{
  TArray<FMovieSceneOrderedEvaluationKey,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  FMovieSceneSubSequenceTreeEntry *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  FScriptContainerElement *pFVar8;
  TArrayView<FMovieSceneSubSequenceTreeEntry_const_,int> *pTVar9;
  uint uVar10;
  short sVar11;
  FScriptContainerElement *pFVar12;
  longlong lVar13;
  FMovieSceneSubSequenceTreeEntry *pFVar14;
  ushort uVar15;
  TLess<void> local_res18;
  undefined1 local_a8;
  undefined1 local_a7;
  short local_a6;
  undefined1 local_a4 [4];
  FScriptContainerElement *local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  uint uStack_90;
  short sStack_8c;
  ushort uStack_8a;
  undefined4 local_88;
  undefined4 uStack_84;
  uint uStack_80;
  short sStack_7c;
  ushort uStack_7a;
  TMovieSceneEvaluationTreeDataIterator<FMovieSceneSubSequenceTreeEntry> local_78;
  TMovieSceneEvaluationTreeDataIterator<FMovieSceneSubSequenceTreeEntry> local_60;
  TArrayView<FMovieSceneSubSequenceTreeEntry_const_,int> local_48;
  
  if ((param_4 == (FMovieSceneEvaluationMetaData *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("OutMetaData",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\Compilation\\MovieSceneCompiledDataManager.cpp"
                         ,0x540,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  sVar11 = 0;
  (param_4->ActiveSequences).ArrayNum = 0;
  if ((param_4->ActiveSequences).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,(ForAnyElementType *)param_4,0,&(param_4->ActiveSequences).ArrayMax);
  }
  pTVar1 = &param_4->ActiveEntities;
  piVar2 = &(param_4->ActiveEntities).ArrayMax;
  (param_4->ActiveEntities).ArrayNum = 0;
  if ((param_4->ActiveEntities).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,0,&pTVar1->AllocatorInstance,0,piVar2);
  }
  uVar15 = 0;
  iVar7 = param_2->ArrayNum;
  pFVar12 = (param_2->AllocatorInstance).Data;
  pFVar8 = pFVar12 + (longlong)iVar7 * 0x24;
  local_a0 = pFVar8;
  while( true ) {
    if (param_2->ArrayNum != iVar7) {
      local_a8 = 0;
      `TCheckedPointerIterator<FCompileOnTheFlyData_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_a8);
      pFVar8 = local_a0;
    }
    if (pFVar12 == pFVar8) break;
    if (pFVar12[0x10] != (FScriptContainerElement)0x0) {
      uStack_90 = 0xffffffff;
      if (*(ushort *)(pFVar12 + 0x1c) != 0xffff) {
        uStack_90 = (uint)*(ushort *)(pFVar12 + 0x1c);
      }
      local_98 = *(undefined4 *)(pFVar12 + 0x14);
      uStack_94 = *(undefined4 *)(pFVar12 + 0x18);
      uStack_8a = uVar15;
      if (pFVar12[0x11] == (FScriptContainerElement)0x0) {
        uStack_8a = ~uVar15;
      }
      pFVar8 = (pTVar1->AllocatorInstance).Data;
      sStack_8c = sVar11;
      if (((pFVar8 <= (FScriptContainerElement *)&local_98) &&
          ((FScriptContainerElement *)&local_98 < pFVar8 + (longlong)*piVar2 * 0x10)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar6 = (param_4->ActiveEntities).ArrayNum;
      if (iVar6 == *piVar2) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x410,&pTVar1->AllocatorInstance,piVar2);
      }
      (param_4->ActiveEntities).ArrayNum = iVar6 + 1;
      uVar15 = uVar15 + 1;
      pFVar8 = (pTVar1->AllocatorInstance).Data + (longlong)iVar6 * 0x10;
      *(ulonglong *)pFVar8 = CONCAT44(uStack_94,local_98);
      *(ulonglong *)(pFVar8 + 8) = CONCAT26(uStack_8a,CONCAT24(sStack_8c,uStack_90));
      pFVar8 = local_a0;
      sVar11 = sVar11 + 1;
    }
    pFVar12 = pFVar12 + 0x24;
  }
  iVar7 = param_2->ArrayNum;
  pFVar12 = (param_2->AllocatorInstance).Data;
  pFVar8 = pFVar12 + (longlong)iVar7 * 0x24;
  local_a6 = sVar11;
  local_a0 = pFVar8;
  do {
    if (param_2->ArrayNum != iVar7) {
      local_a7 = 0;
      `TCheckedPointerIterator<FCompileOnTheFlyData_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_a7);
      pFVar8 = local_a0;
    }
    if (pFVar12 == pFVar8) {
      local_res18 = SUB81(param_2,0);
      AlgoImpl::
      IntroSortInternal<FMovieSceneOrderedEvaluationKey,int,UE::Core::Private::TProjectionMemberData<FMovieSceneEvaluationKey_FMovieSceneOrderedEvaluationKey::*>,TLess<void>_>
                ((FMovieSceneOrderedEvaluationKey *)(pTVar1->AllocatorInstance).Data,
                 (param_4->ActiveEntities).ArrayNum,
                 (TProjectionMemberData<FMovieSceneEvaluationKey_FMovieSceneOrderedEvaluationKey::*>
                 )0x0,local_res18);
      iVar7 = (param_4->ActiveSequences).ArrayMax;
      piVar2 = &(param_4->ActiveSequences).ArrayMax;
      (param_4->ActiveSequences).ArrayNum = 0;
      if (iVar7 < 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,0,(ForAnyElementType *)param_4,0,piVar2);
        iVar7 = *piVar2;
      }
      pFVar8 = (param_4->ActiveSequences).AllocatorInstance.Data;
      if (((pFVar8 < (FScriptContainerElement *)0x1511ece29) &&
          (&MovieSceneSequenceID::Root < pFVar8 + (longlong)iVar7 * 4)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar7 = (param_4->ActiveSequences).ArrayNum;
      if (iVar7 == *piVar2) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,(ForAnyElementType *)param_4,piVar2);
      }
      (param_4->ActiveSequences).ArrayNum = iVar7 + 1;
      *(undefined4 *)((param_4->ActiveSequences).AllocatorInstance.Data + (longlong)iVar7 * 4) = 0;
      local_78.Tree = param_3->Tree;
      local_78.CurrentNode = param_3->CurrentNode;
      local_78.DataIndex = param_3->DataIndex;
      local_78._20_4_ = *(undefined4 *)&param_3->field_0x14;
      TMovieSceneEvaluationTreeDataIterator<FMovieSceneSubSequenceTreeEntry>::
      TMovieSceneEvaluationTreeDataIterator<FMovieSceneSubSequenceTreeEntry>
                (&local_60,param_3->Tree,(FMovieSceneEvaluationTreeNodeHandle)0xffffffffffffffff);
      while( true ) {
        iVar7 = local_78.DataIndex;
        lVar13 = (longlong)local_78.DataIndex;
        if (((local_78.Tree == local_60.Tree) && (local_78.CurrentNode == local_60.CurrentNode)) &&
           (local_78.DataIndex == local_60.DataIndex)) {
          AlgoImpl::
          IntroSortInternal<FMovieSceneSequenceID,int,FIdentityFunctor,TDereferenceWrapper<FMovieSceneSequenceID,TLess<void>_>_>
                    ((FMovieSceneSequenceID *)(param_4->ActiveSequences).AllocatorInstance.Data,
                     (param_4->ActiveSequences).ArrayNum,(FIdentityFunctor)local_res18,
                     (TLess<void> *)local_a4);
          return;
        }
        pTVar9 = TMovieSceneEvaluationTree<FMovieSceneSubSequenceTreeEntry>::GetDataForSingleNode
                           (local_78.Tree,&local_48,local_78.CurrentNode);
        uVar10 = 0;
        if (iVar7 < pTVar9->ArrayNum) {
          uVar10 = (uint)~iVar7 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar5)) break;
        pFVar3 = (FMovieSceneSubSequenceTreeEntry *)
                 (param_4->ActiveSequences).AllocatorInstance.Data;
        pFVar14 = pTVar9->DataPtr + lVar13;
        if (((pFVar3 <= pFVar14) &&
            (pFVar14 < (FMovieSceneSubSequenceTreeEntry *)(&pFVar3->SequenceID + *piVar2))) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar7 = (param_4->ActiveSequences).ArrayNum;
        if (iVar7 == *piVar2) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,(ForAnyElementType *)param_4,piVar2);
        }
        (param_4->ActiveSequences).ArrayNum = iVar7 + 1;
        *(uint *)((param_4->ActiveSequences).AllocatorInstance.Data + (longlong)iVar7 * 4) =
             (pFVar14->SequenceID).Value;
        TMovieSceneEvaluationTreeDataIterator<FMovieSceneSubSequenceTreeEntry>::operator++
                  (&local_78);
      }
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if (pFVar12[0x10] == (FScriptContainerElement)0x0) {
      uStack_80 = 0xffffffff;
      if (*(ushort *)(pFVar12 + 0x1c) != 0xffff) {
        uStack_80 = (uint)*(ushort *)(pFVar12 + 0x1c);
      }
      local_88 = *(undefined4 *)(pFVar12 + 0x14);
      uStack_84 = *(undefined4 *)(pFVar12 + 0x18);
      uStack_7a = uVar15;
      if (pFVar12[0x11] == (FScriptContainerElement)0x0) {
        uStack_7a = ~uVar15;
      }
      pFVar8 = (pTVar1->AllocatorInstance).Data;
      sStack_7c = sVar11;
      if (((pFVar8 <= (FScriptContainerElement *)&local_88) &&
          ((FScriptContainerElement *)&local_88 < pFVar8 + (longlong)*piVar2 * 0x10)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar6 = (param_4->ActiveEntities).ArrayNum;
      if (iVar6 == *piVar2) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x410,&pTVar1->AllocatorInstance,piVar2);
      }
      (param_4->ActiveEntities).ArrayNum = iVar6 + 1;
      uVar15 = uVar15 + 1;
      pFVar8 = (pTVar1->AllocatorInstance).Data + (longlong)iVar6 * 0x10;
      *(ulonglong *)pFVar8 = CONCAT44(uStack_84,local_88);
      *(ulonglong *)(pFVar8 + 8) = CONCAT26(uStack_7a,CONCAT24(sStack_7c,uStack_80));
      pFVar8 = local_a0;
      sVar11 = sVar11 + 1;
    }
    pFVar12 = pFVar12 + 0x24;
  } while( true );
}

// PopulateSubSequenceTree @ 1460e04a0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __cdecl
UMovieSceneCompiledDataManager::PopulateSubSequenceTree
          (UMovieSceneSequence *param_1,FGatherParameters *param_2,FSubSequencePath *param_3,
          FMovieSceneSequenceHierarchy *param_4)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  UMovieSceneSubTrack *pUVar4;
  code *pcVar5;
  int *piVar6;
  bool bVar7;
  longlong lVar8;
  UClass *pUVar9;
  ulonglong uVar10;
  undefined8 *puVar11;
  int *piVar12;
  uint local_res8 [2];
  undefined1 local_48;
  undefined1 local_47 [7];
  longlong local_40;
  int *local_38;
  
  if ((param_1 != (UMovieSceneSequence *)0x0) &&
     (lVar8 = (**(code **)(param_1->_padding_ + 0x2f8))(), lVar8 != 0)) {
    local_40 = lVar8;
    if (((param_3 == (FSubSequencePath *)0x0) || (param_4 == (FMovieSceneSequenceHierarchy *)0x0))
       && (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                             ("RootPath && InOutHierarchy",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\Compilation\\MovieSceneCompiledDataManager.cpp"
                              ,0x72d,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    puVar11 = *(undefined8 **)(lVar8 + 0xf8);
    iVar2 = *(int *)(lVar8 + 0x100);
    puVar1 = puVar11 + iVar2;
    while( true ) {
      if (*(int *)(lVar8 + 0x100) != iVar2) {
        `TCheckedPointerIterator<UMovieSceneTrack_*_const,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      if (puVar11 == puVar1) break;
      pUVar4 = (UMovieSceneSubTrack *)*puVar11;
      if (pUVar4 != (UMovieSceneSubTrack *)0x0) {
        pUVar9 = Z_Construct_UClass_UMovieSceneSubTrack_NoRegister();
        iVar3 = (int)pUVar9->_padding_;
        if ((iVar3 <= *(int *)(pUVar4->_padding_ + 0x38)) &&
           ((longlong *)
            *(undefined1 **)(*(longlong *)(pUVar4->_padding_ + 0x30) + (longlong)iVar3 * 8) ==
            &pUVar9->_padding_)) {
          PopulateSubSequenceTree(pUVar4,param_2,param_3,param_4);
        }
      }
      puVar11 = puVar11 + 1;
      lVar8 = local_40;
    }
    local_res8[0] = *(uint *)(lVar8 + 0xa0);
    uVar10 = (ulonglong)(int)local_res8[0];
    local_38 = (int *)(uVar10 * 0x40 + *(longlong *)(lVar8 + 0x98));
    piVar12 = (int *)(*(longlong *)(lVar8 + 0x98) + 0x38);
    while( true ) {
      piVar6 = local_38;
      if (*(int *)(lVar8 + 0xa0) != (int)uVar10) {
        `TCheckedPointerIterator<FMovieSceneBinding_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_48);
      }
      if (piVar12 + -0xe == piVar6) break;
      puVar11 = *(undefined8 **)(piVar12 + -2);
      iVar2 = *piVar12;
      puVar1 = puVar11 + iVar2;
      while( true ) {
        if (*piVar12 != iVar2) {
          `TCheckedPointerIterator<UMovieSceneTrack_*_const,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_47);
        }
        if (puVar11 == puVar1) break;
        pUVar4 = (UMovieSceneSubTrack *)*puVar11;
        if (pUVar4 != (UMovieSceneSubTrack *)0x0) {
          pUVar9 = Z_Construct_UClass_UMovieSceneSubTrack_NoRegister();
          iVar3 = (int)pUVar9->_padding_;
          if ((iVar3 <= *(int *)(pUVar4->_padding_ + 0x38)) &&
             ((longlong *)
              *(undefined1 **)(*(longlong *)(pUVar4->_padding_ + 0x30) + (longlong)iVar3 * 8) ==
              &pUVar9->_padding_)) {
            PopulateSubSequenceTree(pUVar4,param_2,param_3,param_4);
          }
        }
        puVar11 = puVar11 + 1;
      }
      piVar12 = piVar12 + 0x10;
      uVar10 = (ulonglong)local_res8[0];
      lVar8 = local_40;
    }
  }
  return;
}

// PopulateSubSequenceTree @ 1460e0690

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __cdecl
UMovieSceneCompiledDataManager::PopulateSubSequenceTree
          (UMovieSceneSubTrack *param_1,FGatherParameters *param_2,FSubSequencePath *param_3,
          FMovieSceneSequenceHierarchy *param_4)

{
  ESectionEvaluationFlags EVar1;
  uint uVar2;
  UMovieSceneSubSection *this;
  undefined1 *puVar3;
  code *pcVar4;
  uint uVar5;
  bool bVar6;
  uint uVar7;
  UClass *pUVar8;
  UObject *pUVar9;
  FMovieSceneTrackEvaluationField *pFVar10;
  UMovieSceneSequence *pUVar11;
  longlong lVar12;
  uint *puVar13;
  ulonglong uVar14;
  undefined1 *puVar15;
  FScriptContainerElement *this_00;
  uint *puVar16;
  FScriptContainerElement *pFVar17;
  EMovieSceneServerClientMask EVar18;
  undefined1 local_res8 [8];
  uint local_res10 [2];
  FSubSequencePath *local_res18;
  code *local_88;
  FGatherParameters **local_80;
  FGatherParameters *local_78;
  FScriptContainerElement *local_70;
  FSubSequencePath **local_68;
  FMovieSceneSequenceHierarchy *local_60;
  EMovieSceneServerClientMask local_58;
  uint *local_50;
  uint local_48;
  
  local_res18 = param_3;
  if (((param_1 == (UMovieSceneSubTrack *)0x0) || (param_3 == (FSubSequencePath *)0x0)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("SubTrack && RootPath",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\Compilation\\MovieSceneCompiledDataManager.cpp"
                         ,0x747,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  EVar1 = param_2->Flags;
  if ((((EVar1 == None) || (((EVar1 & PreRoll) != None && ((param_1->_padding_ & 4) != 0)))) ||
      (((EVar1 & PostRoll) != None && ((param_1->_padding_ & 8) != 0)))) &&
     (bVar6 = UMovieSceneTrack::IsEvalDisabled((UMovieSceneTrack *)param_1,true), !bVar6)) {
    pUVar8 = Z_Construct_UClass_UMovieSceneSequence_NoRegister();
    pUVar9 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)param_1,pUVar8);
    if (pUVar9 != (UObject *)0x0) {
      pFVar10 = UMovieSceneTrack::GetEvaluationField((UMovieSceneTrack *)param_1);
      uVar2 = (pFVar10->Entries).ArrayNum;
      uVar14 = (ulonglong)(int)uVar2;
      this_00 = (pFVar10->Entries).AllocatorInstance.Data;
      pFVar17 = this_00 + uVar14 * 0x20;
      while( true ) {
        puVar16 = (uint *)0x0;
        if ((pFVar10->Entries).ArrayNum != (int)uVar14) {
          local_res8[0] = 0;
          `TCheckedPointerIterator<FMovieSceneTrackEvaluationFieldEntry_const_,int,0>::operator!='::
          __l2::<lambda_1>::operator()(local_res8);
        }
        if (this_00 == pFVar17) break;
        if (*(longlong *)this_00 != 0) {
          pUVar8 = Z_Construct_UClass_UMovieSceneSubSection_NoRegister();
          bVar6 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar8);
          if (((bVar6) &&
              (this = *(UMovieSceneSubSection **)this_00, this != (UMovieSceneSubSection *)0x0)) &&
             (pUVar11 = UMovieSceneSubSection::GetSequence(this),
             pUVar11 != (UMovieSceneSequence *)0x0)) {
            pUVar11 = UMovieSceneSubSection::GetSequence(this);
            lVar12 = (**(code **)(pUVar11->_padding_ + 0x2f8))(pUVar11);
            if ((lVar12 != 0) &&
               (bVar6 = UMovieSceneTrack::IsRowEvalDisabled
                                  ((UMovieSceneTrack *)param_1,(int)this->_padding_,true), !bVar6))
            {
              EVar18 = this->NetworkMask & param_2->NetworkMask;
              if (EVar18 != None) {
                param_4->AccumulatedNetworkMask =
                     param_4->AccumulatedNetworkMask & this->NetworkMask;
                UMovieSceneSubSection::GetSequenceID(this);
                UE::MovieScene::FSubSequencePath::ResolveChildSequenceID
                          (local_res18,(FMovieSceneSequenceID)(uint)local_res10);
                uVar5 = local_res10[0];
                if ((local_res10[0] != 0) &&
                   (*(int *)&(param_4->SubSequences).field_0x8 !=
                    *(int *)&(param_4->SubSequences).field_0x34)) {
                  puVar3 = *(undefined1 **)&(param_4->SubSequences).field_0x40;
                  puVar15 = &(param_4->SubSequences).field_0x38;
                  if (puVar3 != (undefined1 *)0x0) {
                    puVar15 = puVar3;
                  }
                  uVar7 = *(uint *)(puVar15 +
                                   (ulonglong)
                                   (*(int *)&(param_4->SubSequences).field_0x48 - 1U &
                                   local_res10[0]) * 4);
                  if (uVar7 != 0xffffffff) {
                    do {
                      puVar13 = (uint *)((longlong)(int)uVar7 * 0x120 +
                                        *(longlong *)&param_4->SubSequences);
                      if (*puVar13 == local_res10[0]) {
                        puVar16 = puVar13 + 2;
                        if (puVar13 == (uint *)0x0) {
                          puVar16 = (uint *)0x0;
                        }
                        if (puVar16 != (uint *)0x0) goto LAB_1460e0900;
                        break;
                      }
                      uVar7 = puVar13[0x46];
                    } while (uVar7 != 0xffffffff);
                  }
                }
                bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("SubData",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\Compilation\\MovieSceneCompiledDataManager.cpp"
                                   ,0x775,
                                   L"Unable to locate sub-data for a sub section that appears in the track\'s evaluation field - this indicates that the section is being evaluated even though it is not active"
                                  );
                if (bVar6) {
                  pcVar4 = (code *)swi(3);
                  (*pcVar4)();
                  return;
                }
LAB_1460e0900:
                local_68 = &local_res18;
                local_80 = &local_78;
                local_88 = UE::Core::Private::Function::
                           TFunctionRefCaller<`UMovieSceneCompiledDataManager::PopulateSubSequenceTree'::__l22::<lambda_1>,bool,TRange<FFrameTime>_>
                           ::Call;
                local_48 = uVar5;
                local_78 = param_2;
                local_70 = this_00;
                local_60 = param_4;
                local_58 = EVar18;
                local_50 = puVar16;
                FGatherParameters::TransformLocalRange
                          (param_2,(TRange<FFrameNumber> *)(this_00 + 8),
                           (TFunctionRef<bool___cdecl(TRange<FFrameTime>)> *)&local_88);
              }
            }
          }
        }
        this_00 = this_00 + 0x20;
        uVar14 = (ulonglong)uVar2;
      }
    }
  }
  return;
}

// ReportSequenceDestroyed @ 1460e8940

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __cdecl UMovieSceneCompiledDataManager::ReportSequenceDestroyed(UMovieSceneSequence *param_1)

{
  ulonglong uVar1;
  code *pcVar2;
  byte bVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  uint *puVar13;
  undefined1 local_res10 [8];
  int local_res18;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  if (!GExitPurge) {
    iVar11 = 0;
    iVar12 = 0;
    uVar5 = 1;
    uVar10 = ActiveManagers.Elements._40_4_;
    uVar6 = 0;
    if (uVar10 != 0) {
      puVar13 = (uint *)&ActiveManagers.Elements.field_0x10;
      if (ActiveManagers.Elements._32_8_ != 0) {
        puVar13 = (uint *)ActiveManagers.Elements._32_8_;
      }
      uVar6 = *puVar13;
      while (uVar6 == 0) {
        lVar7 = (longlong)iVar11;
        iVar12 = iVar12 + 0x20;
        iVar11 = iVar11 + 1;
        uVar6 = uVar10;
        if ((int)((uVar10 - 1) + ((int)(uVar10 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11)
        goto LAB_1460e8a0d;
        uVar6 = puVar13[lVar7 + 1];
      }
      uVar5 = -uVar6 & uVar6;
      uVar1 = (ulonglong)uVar5 * 2 + 1;
      lVar7 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      local_res18 = (int)lVar7;
      uVar6 = local_res18 + -1 + iVar12;
      if ((int)uVar10 < (int)uVar6) {
        uVar6 = uVar10;
      }
    }
LAB_1460e8a0d:
    bVar3 = ActiveManagers.Elements._40_1_;
    uVar9 = uVar10 & 0xffffffe0;
    TStack_60._padding_ = CONCAT44(uVar5,iVar11);
    TStack_60.CurrentBitIndex = uVar6;
    TStack_60.UnvisitedBitMask = 0xffffffff;
    iVar11 = (int)uVar10 >> 5;
    TStack_60._28_4_ = uVar6;
    TStack_60.BaseBitIndex = iVar12;
    uStack_40 = CONCAT44(uStack_6c,ActiveManagers.Elements._8_4_ - ActiveManagers.Elements._52_4_);
    TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)&ActiveManagers.Elements.field_0x10;
    uVar6 = uVar10;
    if ((int)uVar10 < 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L"");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar6 = ActiveManagers.Elements._40_4_;
    }
    if (uVar10 != uVar6) {
      lVar7 = 0x154bef960;
      if (ActiveManagers.Elements._32_8_ != 0) {
        lVar7 = ActiveManagers.Elements._32_8_;
      }
      uVar10 = -1 << (bVar3 & 0x1f) & *(uint *)(lVar7 + (longlong)iVar11 * 4);
      while (uVar10 == 0) {
        lVar8 = (longlong)iVar11;
        uVar9 = uVar9 + 0x20;
        iVar11 = iVar11 + 1;
        uVar10 = uVar6;
        if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11)
        goto LAB_1460e8b30;
        uVar10 = *(uint *)(lVar7 + 4 + lVar8 * 4);
      }
      uVar1 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
      lVar7 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      uVar10 = (int)lVar7 + -1 + uVar9;
      if ((int)uVar6 < (int)uVar10) {
        uVar10 = uVar6;
      }
    }
LAB_1460e8b30:
    while( true ) {
      if (ActiveManagers.Elements._8_4_ - ActiveManagers.Elements._52_4_ != (int)uStack_40) {
        `TSparseArray<TSparseSetElement<UMovieSceneCompiledDataManager_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
      }
      if ((TStack_60.CurrentBitIndex == uVar10) &&
         (TStack_60.Array ==
          (TBitArray<FDefaultBitArrayAllocator> *)&ActiveManagers.Elements.field_0x10)) break;
      Reset(*(UMovieSceneCompiledDataManager **)
             (ActiveManagers.Elements._0_8_ + (longlong)TStack_60.CurrentBitIndex * 0x10),param_1);
      TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
    }
  }
  return;
}

// Reset @ 1460e9770

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __thiscall
UMovieSceneCompiledDataManager::Reset
          (UMovieSceneCompiledDataManager *this,UMovieSceneSequence *param_1)

{
  code *pcVar1;
  FObjectKey FVar2;
  bool bVar3;
  TTuple<FObjectKey,FMovieSceneCompiledDataID> *pTVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined1 *puVar9;
  uint local_res8 [2];
  uint local_res10 [2];
  uint local_res18 [2];
  uint local_res20 [2];
  FObjectKey local_68;
  FWeakObjectPtr local_60;
  FObjectKey local_58;
  FWeakObjectPtr local_50;
  UMovieSceneSequence *local_48;
  UMovieSceneSequence *local_40;
  
  uVar5 = 0;
  local_58.ObjectIndex = 0;
  local_58.ObjectSerialNumber = 0;
  if (param_1 != (UMovieSceneSequence *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    local_60.ObjectIndex = 0;
    local_60.ObjectSerialNumber = 0;
    local_48 = param_1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=(&local_60,(FObjectPtr)&local_48);
    local_58.ObjectIndex = local_60.ObjectIndex;
    local_58.ObjectSerialNumber = local_60.ObjectSerialNumber;
  }
  pTVar4 = TSet<TTuple<FObjectKey,FMovieSceneCompiledDataID>,TDefaultMapHashableKeyFuncs<FObjectKey,FMovieSceneCompiledDataID,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FObjectKey,FMovieSceneCompiledDataID>,TDefaultMapHashableKeyFuncs<FObjectKey,FMovieSceneCompiledDataID,0>,FDefaultSetAllocator>
                   *)&this->SequenceToDataIDs,&local_58);
  if (pTVar4 == (TTuple<FObjectKey,FMovieSceneCompiledDataID> *)0x0) {
    return;
  }
  uVar7 = *(uint *)&pTVar4->field_0x8;
  if (uVar7 == 0xffffffff) {
    return;
  }
  if ((-1 < (int)uVar7) && ((int)uVar7 < *(int *)&(this->CompiledDataEntries).field_0x28)) {
    if ((*(int *)&(this->CompiledDataEntries).field_0x28 <= (int)uVar7) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5c6,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    puVar9 = *(undefined1 **)&(this->CompiledDataEntries).field_0x20;
    if (puVar9 == (undefined1 *)0x0) {
      puVar9 = &(this->CompiledDataEntries).field_0x10;
    }
    if ((*(uint *)(puVar9 + (longlong)((int)(uVar7 + ((int)uVar7 >> 0x1f & 0x1fU)) >> 5) * 4) >>
         (uVar7 & 0x1f) & 1) != 0) goto LAB_1460e9891;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("DataID.IsValid() && CompiledDataEntries.IsValidIndex(DataID.Value)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\Compilation\\MovieSceneCompiledDataManager.cpp"
                     ,0x310,L"");
  if (bVar3) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
LAB_1460e9891:
  local_res8[0] = uVar7;
  if (*(int *)&(this->Hierarchies).field_0x8 != *(int *)&(this->Hierarchies).field_0x34) {
    TSet<TTuple<int,FMovieSceneSequenceHierarchy>,TDefaultMapHashableKeyFuncs<int,FMovieSceneSequenceHierarchy,0>,FDefaultSetAllocator>
    ::RemoveImpl<int>((TSet<TTuple<int,FMovieSceneSequenceHierarchy>,TDefaultMapHashableKeyFuncs<int,FMovieSceneSequenceHierarchy,0>,FDefaultSetAllocator>
                       *)&this->Hierarchies,uVar7,(int *)local_res8);
  }
  local_res10[0] = uVar7;
  if (*(int *)&(this->TrackTemplates).field_0x8 != *(int *)&(this->TrackTemplates).field_0x34) {
    TSet<TTuple<int,FMovieSceneEvaluationTemplate>,TDefaultMapHashableKeyFuncs<int,FMovieSceneEvaluationTemplate,0>,FDefaultSetAllocator>
    ::RemoveImpl<int>((TSet<TTuple<int,FMovieSceneEvaluationTemplate>,TDefaultMapHashableKeyFuncs<int,FMovieSceneEvaluationTemplate,0>,FDefaultSetAllocator>
                       *)&this->TrackTemplates,uVar7,(int *)local_res10);
  }
  local_res18[0] = uVar7;
  if (*(int *)&(this->TrackTemplateFields).field_0x8 !=
      *(int *)&(this->TrackTemplateFields).field_0x34) {
    TSet<TTuple<int,FMovieSceneEvaluationField>,TDefaultMapHashableKeyFuncs<int,FMovieSceneEvaluationField,0>,FDefaultSetAllocator>
    ::RemoveImpl<int>((TSet<TTuple<int,FMovieSceneEvaluationField>,TDefaultMapHashableKeyFuncs<int,FMovieSceneEvaluationField,0>,FDefaultSetAllocator>
                       *)&this->TrackTemplateFields,uVar7,(int *)local_res18);
  }
  local_res20[0] = uVar7;
  if (*(int *)&(this->EntityComponentFields).field_0x8 !=
      *(int *)&(this->EntityComponentFields).field_0x34) {
    TSet<TTuple<int,FMovieSceneEntityComponentField>,TDefaultMapHashableKeyFuncs<int,FMovieSceneEntityComponentField,0>,FDefaultSetAllocator>
    ::RemoveImpl<int>((TSet<TTuple<int,FMovieSceneEntityComponentField>,TDefaultMapHashableKeyFuncs<int,FMovieSceneEntityComponentField,0>,FDefaultSetAllocator>
                       *)&this->EntityComponentFields,uVar7,(int *)local_res20);
  }
  TSparseArray<FMovieSceneCompiledDataEntry,FDefaultSparseArrayAllocator>::RemoveAt
            (&this->CompiledDataEntries,uVar7,1);
  local_68.ObjectIndex = 0;
  local_68.ObjectSerialNumber = 0;
  uVar7 = uVar5;
  if (param_1 != (UMovieSceneSequence *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    local_50.ObjectIndex = 0;
    local_50.ObjectSerialNumber = 0;
    local_40 = param_1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=(&local_50,(FObjectPtr)&local_40);
    local_68.ObjectIndex = local_50.ObjectIndex;
    local_68.ObjectSerialNumber = local_50.ObjectSerialNumber;
    FVar2 = local_68;
    uVar5 = local_50.ObjectIndex;
    local_68.ObjectSerialNumber = local_50.ObjectSerialNumber;
    uVar7 = local_68.ObjectSerialNumber;
    local_68 = FVar2;
  }
  if (*(int *)&(this->SequenceToDataIDs).field_0x8 != *(int *)&(this->SequenceToDataIDs).field_0x34)
  {
    uVar6 = uVar5 - uVar7 ^ uVar7 >> 0xd;
    uVar8 = (-0x61c88647 - uVar6) - uVar7 ^ uVar6 << 8;
    uVar5 = (uVar7 - uVar8) - uVar6 ^ uVar8 >> 0xd;
    uVar7 = (uVar6 - uVar5) - uVar8 ^ uVar5 >> 0xc;
    uVar6 = (uVar8 - uVar5) - uVar7 ^ uVar7 << 0x10;
    uVar5 = (uVar5 - uVar6) - uVar7 ^ uVar6 >> 5;
    uVar7 = (uVar7 - uVar5) - uVar6 ^ uVar5 >> 3;
    uVar6 = (uVar6 - uVar7) - uVar5 ^ uVar7 << 10;
    TSet<TTuple<FObjectKey,FMovieSceneCompiledDataID>,TDefaultMapHashableKeyFuncs<FObjectKey,FMovieSceneCompiledDataID,0>,FDefaultSetAllocator>
    ::RemoveImpl<FObjectKey>
              ((TSet<TTuple<FObjectKey,FMovieSceneCompiledDataID>,TDefaultMapHashableKeyFuncs<FObjectKey,FMovieSceneCompiledDataID,0>,FDefaultSetAllocator>
                *)&this->SequenceToDataIDs,(uVar5 - uVar6) - uVar7 ^ uVar6 >> 0xf,&local_68);
  }
  return;
}

// SetEmulatedNetworkMask @ 1460f7080

void __thiscall
UMovieSceneCompiledDataManager::SetEmulatedNetworkMask
          (UMovieSceneCompiledDataManager *this,EMovieSceneServerClientMask param_1)

{
  DestroyAllData(this);
  this->NetworkMask = param_1;
  return;
}

// StaticRegisterNativesUMovieSceneCompiledDataManager @ 1460fa200

void __cdecl
UMovieSceneCompiledDataManager::StaticRegisterNativesUMovieSceneCompiledDataManager(void)

{
  return;
}

// ValidateEntry @ 1460fef60

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

bool __thiscall
UMovieSceneCompiledDataManager::ValidateEntry
          (UMovieSceneCompiledDataManager *this,FMovieSceneCompiledDataID param_1,
          UMovieSceneSequence *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  undefined1 *puVar4;
  UMovieSceneSequence *local_res8;
  int local_res10 [2];
  UMovieSceneSequence *local_res18 [2];
  int *local_38;
  UMovieSceneCompiledDataManager *local_30;
  UMovieSceneSequence **local_28;
  UMovieSceneSequence **local_20;
  
  local_res10[0] = param_1.Value;
  local_res18[0] = param_2;
  if ((-1 < param_1.Value) && (param_1.Value < *(int *)&(this->CompiledDataEntries).field_0x28)) {
    if (*(int *)&(this->CompiledDataEntries).field_0x28 <= param_1.Value) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5c6,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
    puVar4 = *(undefined1 **)&(this->CompiledDataEntries).field_0x20;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(this->CompiledDataEntries).field_0x10;
    }
    if ((*(uint *)(puVar4 + (longlong)((int)(param_1.Value + (param_1.Value >> 0x1f & 0x1fU)) >> 5)
                            * 4) >> (param_1.Value & 0x1fU) & 1) != 0) goto LAB_1460feffd;
  }
  local_38 = local_res10;
  local_30 = this;
  bVar2 = `UMovieSceneCompiledDataManager::ValidateEntry'::__l3::<lambda_1>::operator()(&local_38);
  if (!bVar2) {
    return false;
  }
LAB_1460feffd:
  local_res8 = FMovieSceneCompiledDataEntry::GetSequence
                         ((FMovieSceneCompiledDataEntry *)
                          ((longlong)local_res10[0] * 0x30 + *(longlong *)&this->CompiledDataEntries
                          ));
  if (local_res8 != local_res18[0]) {
    local_28 = local_res18;
    local_20 = &local_res8;
    bVar2 = `UMovieSceneCompiledDataManager::ValidateEntry'::__l6::<lambda_2>::operator()(&local_28)
    ;
    return bVar2;
  }
  return true;
}

// __VTableCtorCaller @ 1461005c0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl UMovieSceneCompiledDataManager::__VTableCtorCaller(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UMovieSceneCompiledDataManager__6B_;
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)(pUVar1 + 1),4000);
    *(undefined8 *)(pUVar1 + 2) = 0;
    *(undefined8 *)&pUVar1[2].field_0x8 = 0;
    *(undefined8 *)&pUVar1[2].field_0x20 = 0;
    *(undefined4 *)(pUVar1 + 3) = 0;
    *(undefined4 *)&pUVar1[3].field_0x4 = 0x80;
    *(undefined4 *)&pUVar1[3].field_0x8 = 0xffffffff;
    *(undefined4 *)&pUVar1[3].field_0xc = 0;
    *(undefined8 *)&pUVar1[3].field_0x18 = 0;
    *(undefined4 *)&pUVar1[3].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 4) = 0;
    *(undefined8 *)&pUVar1[4].field_0x8 = 0;
    *(undefined8 *)&pUVar1[4].field_0x20 = 0;
    *(undefined4 *)(pUVar1 + 5) = 0;
    *(undefined4 *)&pUVar1[5].field_0x4 = 0x80;
    *(undefined4 *)&pUVar1[5].field_0x8 = 0xffffffff;
    *(undefined4 *)&pUVar1[5].field_0xc = 0;
    *(undefined8 *)&pUVar1[5].field_0x10 = 0;
    *(undefined8 *)&pUVar1[5].field_0x18 = 0;
    *(undefined8 *)&pUVar1[6].field_0x8 = 0;
    *(undefined4 *)&pUVar1[6].field_0x10 = 0;
    *(undefined4 *)&pUVar1[6].field_0x14 = 0x80;
    *(undefined4 *)&pUVar1[6].field_0x18 = 0xffffffff;
    *(undefined4 *)&pUVar1[6].field_0x1c = 0;
    *(undefined8 *)(pUVar1 + 7) = 0;
    *(undefined4 *)&pUVar1[7].field_0x8 = 0;
    *(undefined8 *)&pUVar1[7].field_0x10 = 0;
    *(undefined8 *)&pUVar1[7].field_0x18 = 0;
    *(undefined8 *)&pUVar1[8].field_0x8 = 0;
    *(undefined4 *)&pUVar1[8].field_0x10 = 0;
    *(undefined4 *)&pUVar1[8].field_0x14 = 0x80;
    *(undefined4 *)&pUVar1[8].field_0x18 = 0xffffffff;
    *(undefined4 *)&pUVar1[8].field_0x1c = 0;
    *(undefined8 *)(pUVar1 + 9) = 0;
    *(undefined4 *)&pUVar1[9].field_0x8 = 0;
    *(undefined8 *)&pUVar1[9].field_0x10 = 0;
    *(undefined8 *)&pUVar1[9].field_0x18 = 0;
    *(undefined8 *)&pUVar1[10].field_0x8 = 0;
    *(undefined4 *)&pUVar1[10].field_0x10 = 0;
    *(undefined4 *)&pUVar1[10].field_0x14 = 0x80;
    *(undefined4 *)&pUVar1[10].field_0x18 = 0xffffffff;
    *(undefined4 *)&pUVar1[10].field_0x1c = 0;
    *(undefined8 *)(pUVar1 + 0xb) = 0;
    *(undefined4 *)&pUVar1[0xb].field_0x8 = 0;
    *(undefined8 *)&pUVar1[0xb].field_0x10 = 0;
    *(undefined8 *)&pUVar1[0xb].field_0x18 = 0;
    *(undefined8 *)&pUVar1[0xc].field_0x8 = 0;
    *(undefined4 *)&pUVar1[0xc].field_0x10 = 0;
    *(undefined4 *)&pUVar1[0xc].field_0x14 = 0x80;
    *(undefined4 *)&pUVar1[0xc].field_0x18 = 0xffffffff;
    *(undefined4 *)&pUVar1[0xc].field_0x1c = 0;
    *(undefined8 *)(pUVar1 + 0xd) = 0;
    *(undefined4 *)&pUVar1[0xd].field_0x8 = 0;
    *(undefined8 *)&pUVar1[0xd].field_0x10 = 0;
    *(undefined8 *)&pUVar1[0xd].field_0x18 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// FindEntityComponentField @ 146131640

FMovieSceneEntityComponentField * __thiscall
UMovieSceneCompiledDataManager::FindEntityComponentField
          (UMovieSceneCompiledDataManager *this,FMovieSceneCompiledDataID param_1)

{
  int iVar1;
  FMovieSceneEntityComponentField *pFVar2;
  FMovieSceneEntityComponentField *pFVar3;
  undefined1 *puVar4;
  FMovieSceneEntityComponentField *pFVar5;
  
  pFVar5 = (FMovieSceneEntityComponentField *)0x0;
  pFVar2 = pFVar5;
  if (*(int *)&(this->EntityComponentFields).field_0x8 !=
      *(int *)&(this->EntityComponentFields).field_0x34) {
    puVar4 = *(undefined1 **)&(this->EntityComponentFields).field_0x40;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(this->EntityComponentFields).field_0x38;
    }
    iVar1 = *(int *)(puVar4 + (ulonglong)
                              (*(int *)&(this->EntityComponentFields).field_0x48 - 1U &
                              param_1.Value) * 4);
    if (iVar1 != -1) {
      do {
        pFVar2 = (FMovieSceneEntityComponentField *)
                 ((longlong)iVar1 * 0x100 + *(longlong *)&this->EntityComponentFields);
        if ((int)(pFVar2->PersistentEntityTree).SerializedData._padding_ == param_1.Value) break;
        iVar1 = (int)pFVar2[1].PersistentEntityTree.SerializedData._padding_;
        pFVar2 = pFVar5;
      } while (iVar1 != -1);
    }
  }
  pFVar3 = (FMovieSceneEntityComponentField *)
           &(pFVar2->PersistentEntityTree).SerializedData._padding_;
  if (pFVar2 == (FMovieSceneEntityComponentField *)0x0) {
    pFVar3 = pFVar5;
  }
  return pFVar3;
}

// FindTrackTemplateField @ 1461a9eb0

FMovieSceneEvaluationField * __thiscall
UMovieSceneCompiledDataManager::FindTrackTemplateField
          (UMovieSceneCompiledDataManager *this,FMovieSceneCompiledDataID param_1)

{
  int iVar1;
  FMovieSceneEvaluationField *pFVar2;
  FMovieSceneEvaluationField *pFVar3;
  undefined1 *puVar4;
  FMovieSceneEvaluationField *pFVar5;
  
  pFVar5 = (FMovieSceneEvaluationField *)0x0;
  pFVar2 = pFVar5;
  if (*(int *)&(this->TrackTemplateFields).field_0x8 !=
      *(int *)&(this->TrackTemplateFields).field_0x34) {
    puVar4 = *(undefined1 **)&(this->TrackTemplateFields).field_0x40;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(this->TrackTemplateFields).field_0x38;
    }
    iVar1 = *(int *)(puVar4 + (ulonglong)
                              (*(int *)&(this->TrackTemplateFields).field_0x48 - 1U & param_1.Value)
                              * 4);
    if (iVar1 != -1) {
      do {
        pFVar2 = (FMovieSceneEvaluationField *)
                 ((longlong)iVar1 * 0x40 + *(longlong *)&this->TrackTemplateFields);
        if (*(int *)&(pFVar2->Ranges).AllocatorInstance.Data == param_1.Value) break;
        iVar1 = pFVar2[1].Ranges.ArrayNum;
        pFVar2 = pFVar5;
      } while (iVar1 != -1);
    }
  }
  pFVar3 = (FMovieSceneEvaluationField *)&(pFVar2->Ranges).ArrayNum;
  if (pFVar2 == (FMovieSceneEvaluationField *)0x0) {
    pFVar3 = pFVar5;
  }
  return pFVar3;
}

// operator() @ 1504e1e40

bool __thiscall
`UMovieSceneCompiledDataManager::UMovieSceneCompiledDataManager'::__l2::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<7571377248008143313>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<7571377248008143313>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504e29c0

bool __thiscall
`UMovieSceneCompiledDataManager::ConsoleVariableSink'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<7571377248008143409>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<7571377248008143409>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504e2a80

bool __thiscall
`UMovieSceneCompiledDataManager::GetPrecompiledData'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<7571377248008143622>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<7571377248008143622>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504e2b40

bool __thiscall
`UMovieSceneCompiledDataManager::ValidateEntry'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<7571377248008143710>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<7571377248008143710>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504e2e60

bool __thiscall
`UMovieSceneCompiledDataManager::ValidateEntry'::__l6::<lambda_2>::operator()(void *this)

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
  bVar4 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<7571377248008143719>);
  if (bVar4) {
    if (**(longlong **)((longlong)this + 8) == 0) {
      ::FString::FString(&local_28,L"None");
    }
    else {
      local_res10 = *(FName *)(**(longlong **)((longlong)this + 8) + 0x18);
      ::FName::ToString(&local_res10,&local_28);
    }
    if (**(longlong **)this == 0) {
      ::FString::FString(&local_38,L"None");
    }
    else {
      local_res18[0] = *(FName *)(**(longlong **)this + 0x18);
      ::FName::ToString(local_res18,&local_38);
    }
    bVar3 = true;
    bVar2 = true;
    bVar4 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<7571377248008143719>,&::ENSURE_Static);
    if (bVar4) {
      bVar4 = true;
      goto LAB_1504e2f56;
    }
  }
  bVar4 = false;
LAB_1504e2f56:
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

