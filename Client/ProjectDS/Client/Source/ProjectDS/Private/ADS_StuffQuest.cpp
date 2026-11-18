// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 11

// StaticClass @ 14b5a5960

UClass * __cdecl ADS_StuffQuest::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ADS_StuffQuest.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_StuffQuest",
               &Z_Registration_Info_UClass_ADS_StuffQuest.InnerSingleton,
               StaticRegisterNativesADS_StuffQuest,0x728,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<ADS_StuffQuest>,
               InternalVTableHelperCtorCaller<ADS_StuffQuest>,local_res8,ADS_Stuff::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ADS_StuffQuest.InnerSingleton;
}

// ADS_StuffQuest @ 14b5a8ec0

ADS_StuffQuest * __thiscall
ADS_StuffQuest::ADS_StuffQuest(ADS_StuffQuest *this,FVTableHelper *param_1)

{
  ADS_EntityActorBase::ADS_EntityActorBase((ADS_EntityActorBase *)this,param_1);
  *(undefined ***)this = &_vftable__for__AActor__;
  *(undefined ***)&this->field_0x2c0 = &_vftable__for__FDS_EntityBase__;
  return this;
}

// ~ADS_StuffQuest @ 14b5a9700

void __thiscall ADS_StuffQuest::~ADS_StuffQuest(ADS_StuffQuest *this)

{
  *(undefined ***)this = &ADS_Stuff::_vftable__for__AActor__;
  *(undefined ***)&this->field_0x2c0 = &ADS_Stuff::_vftable__for__FDS_EntityBase__;
  ADS_EntityActorBase::~ADS_EntityActorBase((ADS_EntityActorBase *)this);
  return;
}

// GetPrivateStaticClass @ 14b5aa620

UClass * __cdecl ADS_StuffQuest::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ADS_StuffQuest.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_StuffQuest",
               &Z_Registration_Info_UClass_ADS_StuffQuest.InnerSingleton,
               StaticRegisterNativesADS_StuffQuest,0x728,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<ADS_StuffQuest>,
               InternalVTableHelperCtorCaller<ADS_StuffQuest>,local_res8,ADS_Stuff::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ADS_StuffQuest.InnerSingleton;
}

// IsMovementCoreTickEnabled @ 14b5aaf40

bool __thiscall ADS_StuffQuest::IsMovementCoreTickEnabled(ADS_StuffQuest *this)

{
  return false;
}

// StaticRegisterNativesADS_StuffQuest @ 14b5aafa0

void __cdecl ADS_StuffQuest::StaticRegisterNativesADS_StuffQuest(void)

{
  return;
}

// ADS_StuffQuest @ 14bc82730

ADS_StuffQuest * __thiscall
ADS_StuffQuest::ADS_StuffQuest(ADS_StuffQuest *this,FObjectInitializer *param_1)

{
  code *pcVar1;
  bool bVar2;
  ADS_StuffQuest *pAVar3;
  FName local_res8 [4];
  
  ADS_Stuff::ADS_Stuff((ADS_Stuff *)this,param_1);
  *(undefined ***)this = &_vftable__for__AActor__;
  *(undefined ***)&this->field_0x2c0 = &_vftable__for__FDS_EntityBase__;
  if (*(longlong *)&this->field_0x660 == 0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_4557170715798798317>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\SpawnActor\\Prop\\DS_StuffQuest.cpp"
                       ,0x13,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pAVar3 = (ADS_StuffQuest *)(*pcVar1)();
      return pAVar3;
    }
  }
  else {
    ::FName::FName(local_res8,L"Prop");
    *(uint *)&this->field_0x320 = local_res8[0].ComparisonIndex.Value;
    *(uint *)&this->field_0x324 = local_res8[0].Number;
    (**(code **)(**(longlong **)&this->field_0x660 + 0x788))
              (*(longlong **)&this->field_0x660,local_res8[0],1);
    this->field_0x32 = this->field_0x32 | 6;
  }
  return this;
}

// BeginPlay @ 14bc89e30

void __thiscall ADS_StuffQuest::BeginPlay(ADS_StuffQuest *this)

{
  float fVar1;
  float fVar2;
  bool bVar3;
  ForAnyElementType FVar4;
  undefined1 auVar5 [8];
  FSharedReferencer<1> FVar6;
  char cVar7;
  FDS_ResourceColorTableRow *pFVar8;
  FDS_ResourcePresetTableRow *this_00;
  undefined8 *puVar9;
  ulong64 uVar10;
  TReferenceControllerBase<1> *pTVar11;
  FDS_ResourceMeshTableRow *pFVar12;
  FString *pFVar13;
  TDelegate<void___cdecl(FSoftObjectPath_const_&,UObject_*),FDefaultDelegateUserPolicy> *pTVar14;
  FDS_ResourceAbpTableRow *pFVar15;
  int iVar16;
  int iVar17;
  TReferenceControllerBase<1> *pTVar18;
  float fVar19;
  ADS_StuffQuest *pAStackX_8;
  undefined1 auStack_e8 [16];
  int iStack_d8;
  undefined1 *puStack_d0;
  undefined1 auStack_c8 [16];
  int iStack_b8;
  undefined1 *puStack_b0;
  undefined1 auStack_a8 [8];
  ForAnyElementType FStack_a0;
  int iStack_98;
  undefined1 auStack_88 [8];
  FSharedReferencer<1> FStack_80;
  FLoadAssetAsyncOptionalParams FStack_78;
  undefined1 auStack_48 [16];
  ForAnyElementType FStack_38;
  FSharedReferencer<1> *pFStack_30;
  
  ADS_EntityActorBase::BeginPlay((ADS_EntityActorBase *)this);
  pFVar8 = FDS_ResourceColorTableRow::Get(0x13892,true);
  if (pFVar8 != (FDS_ResourceColorTableRow *)0x0) {
    fVar1 = FLinearColor::sRGBToLinearTable[(pFVar8->Color).field0_0x0._s_0.B];
    fVar2 = FLinearColor::sRGBToLinearTable[(pFVar8->Color).field0_0x0._s_0.G];
    fVar19 = (float)(pFVar8->Color).field0_0x0._s_0.A * __real_3b808081;
    *(float *)&this->field_0x4fc =
         FLinearColor::sRGBToLinearTable[(pFVar8->Color).field0_0x0._s_0.R];
    *(float *)&this->field_0x500 = fVar2;
    *(float *)&this->field_0x504 = fVar1;
    *(float *)&this->field_0x508 = fVar19;
  }
  this_00 = (FDS_ResourcePresetTableRow *)(**(code **)(*(longlong *)&this->field_0x2c0 + 0x28))();
  pTVar18 = (TReferenceControllerBase<1> *)0x0;
  FStack_a0.Data = (FScriptContainerElement *)(auStack_e8._8_8_ & 0xffffffff00000000);
  FStack_78.ProgressDelegate.Object = (FLoadPackageAsyncProgressDelegate *)0x0;
  auStack_a8 = (undefined1  [8])ADS_Stuff::OnStuffLoadComplete;
  FStack_78.ProgressDelegate.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  FStack_78._16_8_ = (ulonglong)(uint)FStack_78._20_4_ << 0x20;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&FStack_78,
             (FWriteAccessScope *)auStack_48);
  pFStack_30 = &FStack_78.ProgressDelegate.SharedReferenceCount;
  puVar9 = UE::Core::Private::DelegateAllocate
                     (0x30,(FDelegateAllocation *)&FStack_78.ProgressDelegate.SharedReferenceCount);
  if (puVar9 != (undefined8 *)0x0) {
    *puVar9 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar10 = FDelegateHandle::GenerateNewID();
    puVar9[2] = uVar10;
    *puVar9 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VADS_Stuff____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar9[3] = 0;
    pAStackX_8 = this;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar9 + 3),(FObjectPtr)&pAStackX_8);
    *(undefined1 (*) [8])(puVar9 + 4) = auStack_a8;
    puVar9[5] = FStack_a0.Data;
  }
  if (FStack_38.Data._0_1_ == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)auStack_48._8_8_,(FDestructionSentinel *)auStack_48);
  }
  auStack_88 = (undefined1  [8])0x0;
  FStack_80.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&FStack_78,
             (FReadAccessScope *)auStack_c8);
  if (((FStack_78.PackagePriority == 0) ||
      (FStack_78.ProgressDelegate.SharedReferenceCount.ReferenceController ==
       (TReferenceControllerBase<1> *)0x0)) ||
     (cVar7 = (**(code **)((FStack_78.ProgressDelegate.SharedReferenceCount.ReferenceController)->
                           _padding_ + 0x38))(), cVar7 == '\0')) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            ((FReadAccessScope *)auStack_c8);
  if (!bVar3) goto LAB_14bc896c9;
  auStack_e8._0_8_ = (atomic<unsigned___int64>)0x0;
  auStack_e8._8_8_ = (atomic<unsigned___int64> *)0x0;
  iStack_d8 = 0;
  auStack_a8 = (undefined1  [8])0x0;
  FStack_a0.Data = (FScriptContainerElement *)0x0;
  iStack_98 = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&FStack_78,
             (FReadAccessScope *)auStack_c8);
  if ((FStack_78.PackagePriority != 0) &&
     (FStack_78.ProgressDelegate.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0)) {
    (**(code **)((FStack_78.ProgressDelegate.SharedReferenceCount.ReferenceController)->_padding_ +
                0x50))(FStack_78.ProgressDelegate.SharedReferenceCount.ReferenceController,
                       auStack_a8);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            ((FReadAccessScope *)auStack_c8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)auStack_a8,
             (FWriteAccessScope *)auStack_c8);
  iVar17 = iStack_98;
  FVar4.Data = FStack_a0.Data;
  FStack_a0.Data = (FScriptContainerElement *)0x0;
  iStack_98 = 0;
  if (iStack_b8._0_1_ == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)auStack_c8._8_8_,(FDestructionSentinel *)auStack_c8);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)auStack_e8,
             (FWriteAccessScope *)auStack_c8);
  if (iStack_d8 == 0) {
LAB_14bc89562:
    if ((FMRSWRecursiveAccessDetector *)auStack_e8._8_8_ != (FMRSWRecursiveAccessDetector *)0x0) {
      FMemory::Free((void *)auStack_e8._8_8_);
    }
  }
  else if ((FMRSWRecursiveAccessDetector *)auStack_e8._8_8_ != (FMRSWRecursiveAccessDetector *)0x0)
  {
    (**(code **)*(atomic<unsigned___int64> *)auStack_e8._8_8_)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)(auStack_e8 + 8),0,0,0x10);
    iStack_d8 = 0;
    goto LAB_14bc89562;
  }
  auStack_e8._8_8_ = FVar4.Data;
  iStack_d8 = iVar17;
  if (iStack_b8._0_1_ == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)auStack_c8._8_8_,(FDestructionSentinel *)auStack_c8);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)auStack_a8,
             (FWriteAccessScope *)auStack_c8);
  if ((iStack_98 != 0) && (FStack_a0.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_a0.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_a0,0,0,0x10);
    iStack_98 = 0;
  }
  if (iStack_b8._0_1_ == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)auStack_c8._8_8_,(FDestructionSentinel *)auStack_c8);
  }
  if (FStack_a0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_a0.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)auStack_a8);
  pTVar11 = ::operator_new(0x30);
  if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
    *(undefined8 *)(pTVar11 + 1) = 0;
    pTVar11[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar11[1].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar11[2]._padding_ = 0;
    TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
              ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)(pTVar11 + 1),
               (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)auStack_e8);
    pTVar11->SharedReferenceCount = (atomic<int>)0x1;
    pTVar11->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_XV<lambda_1>__4___0FWN_EndOfRefs__QEAA_AEBV__TDelegate___A6AXXZUFDefaultDelegateUserPolicy_____Z__00_SharedPointerInternals__6B_
    ;
    pTVar11->WeakReferenceCount = (atomic<int>)0x1;
    pTVar11[2].SharedReferenceCount = (atomic<int>)0x0;
    pTVar11[2].WeakReferenceCount = (atomic<int>)0x0;
    pTVar18 = pTVar11;
  }
  auStack_a8 = (undefined1  [8])0x0;
  FStack_a0.Data = (FScriptContainerElement *)pTVar18;
  SharedPointerInternals::FSharedReferencer<1>::operator=
            (&FStack_80,(FSharedReferencer<1> *)&FStack_a0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)FStack_a0.Data);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)auStack_e8,
             (FWriteAccessScope *)auStack_c8);
  if ((iStack_d8 != 0) &&
     ((FMRSWRecursiveAccessDetector *)auStack_e8._8_8_ != (FMRSWRecursiveAccessDetector *)0x0)) {
    (**(code **)*(atomic<unsigned___int64> *)auStack_e8._8_8_)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)(auStack_e8 + 8),0,0,0x10);
    iStack_d8 = 0;
  }
  if (iStack_b8._0_1_ == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)auStack_c8._8_8_,(FDestructionSentinel *)auStack_c8);
  }
  if ((FMRSWRecursiveAccessDetector *)auStack_e8._8_8_ != (FMRSWRecursiveAccessDetector *)0x0) {
    FMemory::Free((void *)auStack_e8._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)auStack_e8);
LAB_14bc896c9:
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&FStack_78,
             (FWriteAccessScope *)auStack_c8);
  if ((FStack_78.PackagePriority != 0) &&
     (FStack_78.ProgressDelegate.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0)) {
    (**(code **)(FStack_78.ProgressDelegate.SharedReferenceCount.ReferenceController)->_padding_)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&FStack_78.ProgressDelegate.SharedReferenceCount,0,0,0x10);
    FStack_78._16_8_ = FStack_78._16_8_ & 0xffffffff00000000;
  }
  if (iStack_b8._0_1_ == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)auStack_c8._8_8_,(FDestructionSentinel *)auStack_c8);
  }
  if (FStack_78.ProgressDelegate.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    FMemory::Free(FStack_78.ProgressDelegate.SharedReferenceCount.ReferenceController);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&FStack_78);
  FVar6.ReferenceController = FStack_80.ReferenceController;
  auVar5 = auStack_88;
  if (this_00->ID_ResourceMesh != 0) {
    pFVar12 = FDS_ResourcePresetTableRow::ID_ResourceMeshTable(this_00);
    pFVar13 = FSoftObjectPath::ToString(&pFVar12->MeshPath,(FString *)&FStack_78);
    pFVar13 = FWN_SoftObjectUtils::GetObjectPath((FString *)auStack_a8,pFVar13,false);
    auStack_48._0_4_ = 0;
    auStack_48._4_4_ = 0;
    auStack_48._8_4_ = 0;
    auStack_48._12_4_ = 0;
    FStack_38.Data = (FScriptContainerElement *)0x0;
    pFStack_30 = (FSharedReferencer<1> *)0x0;
    auStack_88 = (undefined1  [8])(pFVar13->Data).AllocatorInstance.Data;
    iVar17 = (pFVar13->Data).ArrayNum;
    iVar16 = iVar17 + -1;
    if (iVar17 == 0) {
      iVar16 = 0;
    }
    FStack_80.ReferenceController._0_4_ = iVar16;
    FSoftObjectPath::SetPath((FSoftObjectPath *)auStack_48,(TStringView<wchar_t> *)auStack_88);
    if ((atomic<unsigned___int64>)auStack_a8 != (atomic<unsigned___int64>)0x0) {
      FMemory::Free((void *)auStack_a8);
    }
    if (FStack_78.ProgressDelegate.Object != (FLoadPackageAsyncProgressDelegate *)0x0) {
      FMemory::Free(FStack_78.ProgressDelegate.Object);
    }
    auStack_88 = (undefined1  [8])ADS_Stuff::OnMeshLoaded;
    FStack_80.ReferenceController =
         (TReferenceControllerBase<1> *)(auStack_e8._8_8_ & 0xffffffff00000000);
    auStack_e8._8_8_ = (atomic<unsigned___int64> *)0x0;
    auStack_e8._0_8_ = (atomic<unsigned___int64>)0x0;
    iStack_d8 = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)auStack_e8,
               (FWriteAccessScope *)auStack_c8);
    puStack_b0 = auStack_e8 + 8;
    puVar9 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)(auStack_e8 + 8));
    if (puVar9 != (undefined8 *)0x0) {
      *puVar9 = &
                ___7__TCommonDelegateInstanceState___A6AXAEBUFSoftObjectPath__PEAVUObject___ZUFDefaultDelegateUserPolicy__VFWN_EndOfRefs____6B_
      ;
      puVar9[1] = auVar5;
      puVar9[2] = FVar6.ReferenceController;
      if (FVar6.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (FVar6.ReferenceController)->SharedReferenceCount =
             (atomic<int>)((int)(FVar6.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      uVar10 = FDelegateHandle::GenerateNewID();
      puVar9[3] = uVar10;
      *puVar9 = &
                ___7__TBaseUObjectMethodDelegateInstance__0A_VADS_Stuff____A6AXAEBUFSoftObjectPath__PEAVUObject___ZUFDefaultDelegateUserPolicy__VFWN_EndOfRefs____6B_
      ;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar9[4] = 0;
      pAStackX_8 = this;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar9 + 4),(FObjectPtr)&pAStackX_8);
      puVar9[5] = auStack_88;
      puVar9[6] = FStack_80.ReferenceController;
    }
    if (iStack_b8._0_1_ == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                ((FMRSWRecursiveAccessDetector *)auStack_c8._8_8_,(FDestructionSentinel *)auStack_c8
                );
    }
    FStack_78._16_8_ = 0;
    FStack_78.LoadFlags = 0;
    FStack_78._36_4_ = 0;
    FStack_78.InstancingContext = (FLinkerInstancingContext *)0x0;
    FStack_78.ProgressDelegate.Object = (FLoadPackageAsyncProgressDelegate *)0x0;
    FStack_78.ProgressDelegate.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    pTVar14 = TDelegate<void___cdecl(FSoftObjectPath_const_&,UObject_*),FDefaultDelegateUserPolicy>
              ::
              TDelegate<void___cdecl(FSoftObjectPath_const_&,UObject_*),FDefaultDelegateUserPolicy>
                        ((TDelegate<void___cdecl(FSoftObjectPath_const_&,UObject_*),FDefaultDelegateUserPolicy>
                          *)auStack_c8,
                         (TDelegate<void___cdecl(FSoftObjectPath_const_&,UObject_*),FDefaultDelegateUserPolicy>
                          *)auStack_e8);
    FSoftObjectPath::LoadAsync((FSoftObjectPath *)auStack_48,pTVar14,&FStack_78);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)auStack_e8,
               (FWriteAccessScope *)auStack_c8);
    if ((iStack_d8 != 0) &&
       ((FMRSWRecursiveAccessDetector *)auStack_e8._8_8_ != (FMRSWRecursiveAccessDetector *)0x0)) {
      (**(code **)*(atomic<unsigned___int64> *)auStack_e8._8_8_)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)(auStack_e8 + 8),0,0,0x10);
      iStack_d8 = 0;
    }
    if (iStack_b8._0_1_ == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                ((FMRSWRecursiveAccessDetector *)auStack_c8._8_8_,(FDestructionSentinel *)auStack_c8
                );
    }
    if ((FMRSWRecursiveAccessDetector *)auStack_e8._8_8_ != (FMRSWRecursiveAccessDetector *)0x0) {
      FMemory::Free((void *)auStack_e8._8_8_);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)auStack_e8);
    if (FStack_38.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_38.Data);
    }
  }
  if (this_00->ID_AbpLink != 0) {
    pFVar15 = FDS_ResourcePresetTableRow::ID_AbpLinkTable(this_00);
    pFVar13 = FSoftObjectPath::ToString(&pFVar15->AbpPath,(FString *)auStack_e8);
    pFVar13 = FWN_SoftObjectUtils::GetObjectPath((FString *)auStack_a8,pFVar13,false);
    auStack_48._0_4_ = 0;
    auStack_48._4_4_ = 0;
    auStack_48._8_4_ = 0;
    auStack_48._12_4_ = 0;
    FStack_38.Data = (FScriptContainerElement *)0x0;
    pFStack_30 = (FSharedReferencer<1> *)0x0;
    auStack_88 = (undefined1  [8])(pFVar13->Data).AllocatorInstance.Data;
    iVar16 = (pFVar13->Data).ArrayNum;
    iVar17 = iVar16 + -1;
    if (iVar16 == 0) {
      iVar17 = 0;
    }
    FStack_80.ReferenceController._0_4_ = iVar17;
    FStack_78.ProgressDelegate.SharedReferenceCount.ReferenceController =
         FStack_80.ReferenceController;
    FStack_78.ProgressDelegate.Object = (FLoadPackageAsyncProgressDelegate *)auStack_88;
    FSoftObjectPath::SetPath((FSoftObjectPath *)auStack_48,(TStringView<wchar_t> *)&FStack_78);
    if ((atomic<unsigned___int64>)auStack_a8 != (atomic<unsigned___int64>)0x0) {
      FMemory::Free((void *)auStack_a8);
    }
    if ((atomic<unsigned___int64>)auStack_e8._0_8_ != (atomic<unsigned___int64>)0x0) {
      FMemory::Free((void *)auStack_e8._0_8_);
    }
    auStack_88 = (undefined1  [8])ADS_Stuff::OnAbpLoaded;
    FStack_80.ReferenceController =
         (TReferenceControllerBase<1> *)(auStack_e8._8_8_ & 0xffffffff00000000);
    auStack_c8._0_8_ = (atomic<unsigned___int64>)0x0;
    auStack_c8._8_8_ = (atomic<unsigned___int64> *)0x0;
    iStack_b8 = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)auStack_c8,
               (FWriteAccessScope *)auStack_e8);
    puStack_d0 = auStack_c8 + 8;
    puVar9 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)(auStack_c8 + 8));
    if (puVar9 != (undefined8 *)0x0) {
      *puVar9 = &
                ___7__TCommonDelegateInstanceState___A6AXAEBUFSoftObjectPath__PEAVUObject___ZUFDefaultDelegateUserPolicy__VFWN_EndOfRefs____6B_
      ;
      puVar9[1] = auVar5;
      puVar9[2] = FVar6.ReferenceController;
      if (FVar6.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (FVar6.ReferenceController)->SharedReferenceCount =
             (atomic<int>)((int)(FVar6.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      uVar10 = FDelegateHandle::GenerateNewID();
      puVar9[3] = uVar10;
      *puVar9 = &
                ___7__TBaseUObjectMethodDelegateInstance__0A_VADS_Stuff____A6AXAEBUFSoftObjectPath__PEAVUObject___ZUFDefaultDelegateUserPolicy__VFWN_EndOfRefs____6B_
      ;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar9[4] = 0;
      pAStackX_8 = this;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar9 + 4),(FObjectPtr)&pAStackX_8);
      puVar9[5] = auStack_88;
      puVar9[6] = FStack_80.ReferenceController;
    }
    if (iStack_d8._0_1_ == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                ((FMRSWRecursiveAccessDetector *)auStack_e8._8_8_,(FDestructionSentinel *)auStack_e8
                );
    }
    FStack_78._16_8_ = 0;
    FStack_78.LoadFlags = 0;
    FStack_78._36_4_ = 0;
    FStack_78.InstancingContext = (FLinkerInstancingContext *)0x0;
    FStack_78.ProgressDelegate.Object = (FLoadPackageAsyncProgressDelegate *)0x0;
    FStack_78.ProgressDelegate.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    pTVar14 = TDelegate<void___cdecl(FSoftObjectPath_const_&,UObject_*),FDefaultDelegateUserPolicy>
              ::
              TDelegate<void___cdecl(FSoftObjectPath_const_&,UObject_*),FDefaultDelegateUserPolicy>
                        ((TDelegate<void___cdecl(FSoftObjectPath_const_&,UObject_*),FDefaultDelegateUserPolicy>
                          *)auStack_e8,
                         (TDelegate<void___cdecl(FSoftObjectPath_const_&,UObject_*),FDefaultDelegateUserPolicy>
                          *)auStack_c8);
    FSoftObjectPath::LoadAsync((FSoftObjectPath *)auStack_48,pTVar14,&FStack_78);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)auStack_c8,
               (FWriteAccessScope *)auStack_e8);
    if ((iStack_b8 != 0) &&
       ((atomic<unsigned___int64> *)auStack_c8._8_8_ != (atomic<unsigned___int64> *)0x0)) {
      (**(code **)*(atomic<unsigned___int64> *)auStack_c8._8_8_)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)(auStack_c8 + 8),0,0,0x10);
      iStack_b8 = 0;
    }
    if (iStack_d8._0_1_ == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                ((FMRSWRecursiveAccessDetector *)auStack_e8._8_8_,(FDestructionSentinel *)auStack_e8
                );
    }
    if ((atomic<unsigned___int64> *)auStack_c8._8_8_ != (atomic<unsigned___int64> *)0x0) {
      FMemory::Free((void *)auStack_c8._8_8_);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)auStack_c8);
    if (FStack_38.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_38.Data);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar6.ReferenceController);
  return;
}

// EndPlay @ 14bc97120

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ADS_StuffQuest::EndPlay(ADS_StuffQuest *this,Type param_1)

{
  undefined8 *puVar1;
  int iVar2;
  UObject *pUVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  TMulticastDelegateBase<FDefaultDelegateUserPolicy> *this_00;
  UDS_ColliderComponent *this_01;
  undefined8 *puVar7;
  EDS_StateTagType aEStackX_18 [8];
  EDS_StateTagType aEStackX_20 [8];
  undefined1 auStack_78 [8];
  FWeakObjectPtr FStack_70;
  FWeakObjectPtr FStack_68;
  FWeakObjectPtr FStack_60;
  UObject *pUStack_58;
  UObject *pUStack_50;
  UObject *apUStack_48 [2];
  
  AActor::EndPlay((AActor *)this,param_1);
  pUVar3 = *(UObject **)&this->field_0x648;
  aEStackX_18[0] = RemoveEntity;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    if (pUVar3 != (UObject *)0x0) {
      UE::GC::MarkAsReachable(pUVar3);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar3);
    }
  }
  FStack_68.ObjectIndex = 0;
  FStack_68.ObjectSerialNumber = 0;
  pUStack_58 = pUVar3;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar3);
  }
  FWeakObjectPtr::operator=(&FStack_68,(FObjectPtr)&pUStack_58);
  UDS_AbilitySystemComponent::AddStateTag
            ((TWeakObjectPtr<UWN_AbilitySystemComponent,FWeakObjectPtr>)FStack_68,aEStackX_18);
  pUVar3 = *(UObject **)&this->field_0x648;
  aEStackX_20[0] = RemoveEntity;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    if (pUVar3 != (UObject *)0x0) {
      UE::GC::MarkAsReachable(pUVar3);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar3);
    }
  }
  FStack_60.ObjectIndex = 0;
  FStack_60.ObjectSerialNumber = 0;
  pUStack_50 = pUVar3;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar3);
  }
  FWeakObjectPtr::operator=(&FStack_60,(FObjectPtr)&pUStack_50);
  UDS_AbilitySystemComponent::RemoveStateTag
            ((TWeakObjectPtr<UWN_AbilitySystemComponent,FWeakObjectPtr>)FStack_60,aEStackX_20);
  if (*(UWN_AbilitySystemComponent **)&this->field_0x648 != (UWN_AbilitySystemComponent *)0x0) {
    this_00 = (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
              UWN_AbilitySystemComponent::GetChangedTagEvent
                        (*(UWN_AbilitySystemComponent **)&this->field_0x648);
    if (*(ulong64 *)&this->field_0x3a0 != 0) {
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
                (this_00,(FDelegateHandle)*(ulong64 *)&this->field_0x3a0);
    }
    UWN_AbilitySystemComponent::UninitializeComponent
              (*(UWN_AbilitySystemComponent **)&this->field_0x648);
    FTickFunction::RemovePrerequisite
              ((FTickFunction *)&this->field_0x28,*(UObject **)&this->field_0x648,
               (FTickFunction *)&this->field_0x28);
  }
  if (*(longlong **)&this->field_0x658 != (longlong *)0x0) {
    (**(code **)(**(longlong **)&this->field_0x658 + 0x2b8))();
  }
  if (*(UDS_TriggerCore **)&this->field_0x670 != (UDS_TriggerCore *)0x0) {
    UDS_TriggerCore::Deinitialize(*(UDS_TriggerCore **)&this->field_0x670);
  }
  lVar4 = *(longlong *)&this->field_0x678;
  if (lVar4 != 0) {
    *(undefined8 *)(lVar4 + 0x28) = 0;
    puVar7 = *(undefined8 **)(lVar4 + 0x30);
    iVar2 = *(int *)(lVar4 + 0x38);
    puVar1 = puVar7 + iVar2;
    while( true ) {
      if (*(int *)(lVar4 + 0x38) != iVar2) {
        auStack_78[0] = 0;
        `TCheckedPointerIterator<TObjectPtr<UDS_ColliderComponent>,int,0>::operator!='::__l2::
        <lambda_1>::operator()(auStack_78);
      }
      if (puVar7 == puVar1) break;
      pUVar3 = (UObject *)*puVar7;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        if (pUVar3 != (UObject *)0x0) {
          UE::GC::MarkAsReachable(pUVar3);
        }
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar3);
        }
      }
      FStack_70.ObjectIndex = 0;
      FStack_70.ObjectSerialNumber = 0;
      apUStack_48[0] = pUVar3;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar3);
      }
      FWeakObjectPtr::operator=(&FStack_70,(FObjectPtr)apUStack_48);
      bVar6 = FWeakObjectPtr::IsValid(&FStack_70);
      if (bVar6) {
        this_01 = (UDS_ColliderComponent *)FWeakObjectPtr::Get(&FStack_70);
        (this_01->OwnerActor).WeakPtr = (FWeakObjectPtr)0x0;
        UDS_ColliderComponent::RemoveAllCharacterDelegate(this_01);
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                  ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                   &ADS_MainCharacter::MainCharacterSwitchCompleteDelegate,this_01);
      }
      else {
        bVar6 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<7585797269991981086>,false,
                           "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\SpawnActor\\Components\\Collider\\DS_ColliderCore.cpp"
                           ,0x1e,"collideComponent.IsValid()");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      puVar7 = puVar7 + 1;
    }
  }
  if (*(longlong **)&this->field_0x668 != (longlong *)0x0) {
    (**(code **)(**(longlong **)&this->field_0x668 + 0x2b8))();
  }
  ADS_EntityActorBase::ClearEntityMaterialInfoMap((ADS_EntityActorBase *)this);
  ADS_EntityActorBase::ClearDestructionGC((ADS_EntityActorBase *)this);
  return;
}

// IsInteractionAvailable @ 14bca7ef0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

bool __thiscall ADS_StuffQuest::IsInteractionAvailable(ADS_StuffQuest *this,ulong64 param_1)

{
  FDS_EntityBase::IsInteractionAvailable((FDS_EntityBase *)this,param_1);
  return false;
}

// OnPartsSystemComplete @ 14bcb9de0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall ADS_StuffQuest::OnPartsSystemComplete(ADS_StuffQuest *this)

{
  bool local_res8 [8];
  
  local_res8[0] = false;
  ADS_Stuff::InitTriggers((ADS_Stuff *)&this[-1].field_0x468,local_res8);
  (**(code **)(*(longlong *)&this[-1].field_0x468 + 0x768))(&this[-1].field_0x468,0);
  FDS_EntityBase::OnPartsSystemComplete((FDS_EntityBase *)this);
  return;
}

