// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 14

// StaticClass @ 14b5a5a60

UClass * __cdecl ADS_StuffQuestBoard::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ADS_StuffQuestBoard.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_StuffQuestBoard",
               &Z_Registration_Info_UClass_ADS_StuffQuestBoard.InnerSingleton,
               StaticRegisterNativesADS_StuffQuestBoard,0x740,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<ADS_StuffQuestBoard>,
               InternalVTableHelperCtorCaller<ADS_StuffQuestBoard>,local_res8,ADS_Stuff::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ADS_StuffQuestBoard.InnerSingleton;
}

// ADS_StuffQuestBoard @ 14b5a8f00

ADS_StuffQuestBoard * __thiscall
ADS_StuffQuestBoard::ADS_StuffQuestBoard(ADS_StuffQuestBoard *this,FVTableHelper *param_1)

{
  ADS_EntityActorBase::ADS_EntityActorBase((ADS_EntityActorBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__AActor__;
  this->_padding_ = (longlong)&_vftable__for__FDS_EntityBase__;
  (this->NameTagUIComponent).field0_0x0.DebugPtr = (UDS_ActorAttachedWidgetComponent *)0x0;
  (this->InteractionPrepareUIComponent).field0_0x0.DebugPtr =
       (UDS_ActorAttachedWidgetComponent *)0x0;
  (this->InteractionIconUIComponent).field0_0x0.DebugPtr = (UDS_ActorAttachedWidgetComponent *)0x0;
  return this;
}

// ~ADS_StuffQuestBoard @ 14b5a9730

void __thiscall ADS_StuffQuestBoard::~ADS_StuffQuestBoard(ADS_StuffQuestBoard *this)

{
  this->_padding_ = (longlong)&ADS_Stuff::_vftable__for__AActor__;
  this->_padding_ = (longlong)&ADS_Stuff::_vftable__for__FDS_EntityBase__;
  ADS_EntityActorBase::~ADS_EntityActorBase((ADS_EntityActorBase *)this);
  return;
}

// GetPrivateStaticClass @ 14b5aa6e0

UClass * __cdecl ADS_StuffQuestBoard::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ADS_StuffQuestBoard.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_StuffQuestBoard",
               &Z_Registration_Info_UClass_ADS_StuffQuestBoard.InnerSingleton,
               StaticRegisterNativesADS_StuffQuestBoard,0x740,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<ADS_StuffQuestBoard>,
               InternalVTableHelperCtorCaller<ADS_StuffQuestBoard>,local_res8,ADS_Stuff::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ADS_StuffQuestBoard.InnerSingleton;
}

// IsMovementCoreTickEnabled @ 14b5aaf50

bool __thiscall ADS_StuffQuestBoard::IsMovementCoreTickEnabled(ADS_StuffQuestBoard *this)

{
  return false;
}

// StaticRegisterNativesADS_StuffQuestBoard @ 14b5aafb0

void __cdecl ADS_StuffQuestBoard::StaticRegisterNativesADS_StuffQuestBoard(void)

{
  return;
}

// ADS_StuffQuestBoard @ 14bc827e0

ADS_StuffQuestBoard * __thiscall
ADS_StuffQuestBoard::ADS_StuffQuestBoard(ADS_StuffQuestBoard *this,FObjectInitializer *param_1)

{
  byte *pbVar1;
  FName FVar2;
  code *pcVar3;
  bool bVar4;
  ADS_StuffQuestBoard *pAVar5;
  FName *pFVar6;
  UClass *pUVar7;
  UDS_ActorAttachedWidgetComponent *pUVar8;
  FName local_res8;
  FName local_res18;
  FName local_res20;
  FName local_18 [2];
  
  ADS_Stuff::ADS_Stuff((ADS_Stuff *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__AActor__;
  this->_padding_ = (longlong)&_vftable__for__FDS_EntityBase__;
  (this->NameTagUIComponent).field0_0x0.DebugPtr = (UDS_ActorAttachedWidgetComponent *)0x0;
  (this->InteractionPrepareUIComponent).field0_0x0.DebugPtr =
       (UDS_ActorAttachedWidgetComponent *)0x0;
  (this->InteractionIconUIComponent).field0_0x0.DebugPtr = (UDS_ActorAttachedWidgetComponent *)0x0;
  if (this->_padding_ == 0) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_8784761004400574441>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\SpawnActor\\Prop\\DS_StuffQuestBoard.cpp"
                       ,0x17,"false");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pAVar5 = (ADS_StuffQuestBoard *)(*pcVar3)();
      return pAVar5;
    }
  }
  else {
    ::FName::FName(&local_res8,L"Prop");
    this->_padding_ = (longlong)local_res8;
    (**(code **)(*(longlong *)this->_padding_ + 0x788))((longlong *)this->_padding_,local_res8,1);
    pFVar6 = ::FName::FName(&local_res18,"NameTagUIComponent");
    FVar2 = *pFVar6;
    pUVar7 = Z_Construct_UClass_UDS_ActorAttachedWidgetComponent_NoRegister();
    pUVar8 = (UDS_ActorAttachedWidgetComponent *)
             UObject::CreateDefaultSubobject((UObject *)this,FVar2,pUVar7,pUVar7,true,false);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar8 != (UDS_ActorAttachedWidgetComponent *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar8);
    }
    (this->NameTagUIComponent).field0_0x0.DebugPtr = pUVar8;
    pFVar6 = ::FName::FName(&local_res20,"InteractionPrepareUIComponent");
    FVar2 = *pFVar6;
    pUVar7 = Z_Construct_UClass_UDS_ActorAttachedWidgetComponent_NoRegister();
    pUVar8 = (UDS_ActorAttachedWidgetComponent *)
             UObject::CreateDefaultSubobject((UObject *)this,FVar2,pUVar7,pUVar7,true,false);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar8 != (UDS_ActorAttachedWidgetComponent *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar8);
    }
    (this->InteractionPrepareUIComponent).field0_0x0.DebugPtr = pUVar8;
    pFVar6 = ::FName::FName(local_18,"InteractionIconUIComponent");
    FVar2 = *pFVar6;
    pUVar7 = Z_Construct_UClass_UDS_ActorAttachedWidgetComponent_NoRegister();
    pUVar8 = (UDS_ActorAttachedWidgetComponent *)
             UObject::CreateDefaultSubobject((UObject *)this,FVar2,pUVar7,pUVar7,true,false);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar8 != (UDS_ActorAttachedWidgetComponent *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar8);
    }
    (this->InteractionIconUIComponent).field0_0x0.DebugPtr = pUVar8;
    pbVar1 = (byte *)((longlong)&this->_padding_ + 2);
    *pbVar1 = *pbVar1 | 6;
  }
  return this;
}

// BeginPlay @ 14bc89e40

void __thiscall ADS_StuffQuestBoard::BeginPlay(ADS_StuffQuestBoard *this)

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
  ADS_StuffQuestBoard *pAStackX_8;
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
    *(float *)((longlong)&this->_padding_ + 4) =
         FLinearColor::sRGBToLinearTable[(pFVar8->Color).field0_0x0._s_0.R];
    *(float *)&this->_padding_ = fVar2;
    *(float *)((longlong)&this->_padding_ + 4) = fVar1;
    *(float *)&this->_padding_ = fVar19;
  }
  this_00 = (FDS_ResourcePresetTableRow *)(**(code **)(this->_padding_ + 0x28))();
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

// EndPlay @ 14bc97130

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ADS_StuffQuestBoard::EndPlay(ADS_StuffQuestBoard *this,Type param_1)

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
  pUVar3 = (UObject *)this->_padding_;
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
  pUVar3 = (UObject *)this->_padding_;
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
  if ((UWN_AbilitySystemComponent *)this->_padding_ != (UWN_AbilitySystemComponent *)0x0) {
    this_00 = (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
              UWN_AbilitySystemComponent::GetChangedTagEvent
                        ((UWN_AbilitySystemComponent *)this->_padding_);
    if (this->_padding_ != 0) {
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
                (this_00,(FDelegateHandle)this->_padding_);
    }
    UWN_AbilitySystemComponent::UninitializeComponent((UWN_AbilitySystemComponent *)this->_padding_)
    ;
    FTickFunction::RemovePrerequisite
              ((FTickFunction *)&this->_padding_,(UObject *)this->_padding_,
               (FTickFunction *)&this->_padding_);
  }
  if ((longlong *)this->_padding_ != (longlong *)0x0) {
    (**(code **)(*(longlong *)this->_padding_ + 0x2b8))();
  }
  if ((UDS_TriggerCore *)this->_padding_ != (UDS_TriggerCore *)0x0) {
    UDS_TriggerCore::Deinitialize((UDS_TriggerCore *)this->_padding_);
  }
  lVar4 = this->_padding_;
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
  if ((longlong *)this->_padding_ != (longlong *)0x0) {
    (**(code **)(*(longlong *)this->_padding_ + 0x2b8))();
  }
  ADS_EntityActorBase::ClearEntityMaterialInfoMap((ADS_EntityActorBase *)this);
  ADS_EntityActorBase::ClearDestructionGC((ADS_EntityActorBase *)this);
  return;
}

// GetNameTagUIComponent @ 14bca0ac0

TWeakObjectPtr<UDS_WidgetComponent,FWeakObjectPtr> __thiscall
ADS_StuffQuestBoard::GetNameTagUIComponent(ADS_StuffQuestBoard *this)

{
  UObject *pUVar1;
  FWeakObjectPtr in_RDX;
  UObject *local_res8;
  
  pUVar1 = (UObject *)this->_padding_;
  if (UE::GC::GIsIncrementalReachabilityPending) {
    if (pUVar1 != (UObject *)0x0) {
      UE::GC::MarkAsReachable(pUVar1);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar1);
    }
  }
  *(undefined8 *)in_RDX = 0;
  local_res8 = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar1);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)in_RDX,(FObjectPtr)&local_res8);
  return (TWeakObjectPtr<UDS_WidgetComponent,FWeakObjectPtr>)in_RDX;
}

// InitWidgets @ 14bca63e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall ADS_StuffQuestBoard::InitWidgets(ADS_StuffQuestBoard *this)

{
  UDS_ActorAttachedWidgetComponent *pUVar1;
  code *pcVar2;
  FName FVar3;
  bool bVar4;
  UDS_LogManager *pUVar5;
  FDS_UniqueBpTableRow *pFVar6;
  FDS_ResourceEtcTableRow *pFVar7;
  FName *pFVar8;
  UObject *pUVar9;
  undefined1 auStackY_188 [32];
  FWeakObjectPtr local_158;
  FName local_150;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_188;
  (**(code **)(this->_padding_ + 0x80))();
  bVar4 = TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr> *)&local_158,(void *)0x0
                    );
  if (bVar4) {
    pUVar5 = UDS_LogManager::GetInst();
    if (pUVar5 != (UDS_LogManager *)0x0) {
      pUVar5 = UDS_LogManager::GetInst();
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"ADS_StuffQuestBoard::InitWidgets",0x20,Yes);
      UDS_LogManager::PrintLog(pUVar5,1,Warning,local_148.Ptr,0x61,L"skm is nullptr.");
      if ((void *)local_148._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_148._padding_);
      }
    }
  }
  else {
    if ((this->NameTagUIComponent).field0_0x0.DebugPtr != (UDS_ActorAttachedWidgetComponent *)0x0) {
      pFVar6 = FDS_UniqueBpTableRow::GetRef(8,true);
      pFVar7 = FDS_UniqueBpTableRow::ID_BpLinkTable(pFVar6);
      pUVar1 = (this->NameTagUIComponent).field0_0x0.DebugPtr;
      pcVar2 = *(code **)(*(longlong *)pUVar1 + 0x508);
      pFVar8 = ::FName::FName(&local_150,"NameTag");
      FVar3 = *pFVar8;
      pUVar9 = FWeakObjectPtr::Get(&local_158);
      (*pcVar2)(pUVar1,pUVar9,&FAttachmentTransformRules::KeepRelativeTransform,FVar3);
      UDS_ActorAttachedWidgetComponent::Init
                ((this->NameTagUIComponent).field0_0x0.DebugPtr,&pFVar7->ResourcePath);
    }
    if ((this->InteractionPrepareUIComponent).field0_0x0.DebugPtr !=
        (UDS_ActorAttachedWidgetComponent *)0x0) {
      pFVar6 = FDS_UniqueBpTableRow::GetRef(0xb,true);
      pFVar7 = FDS_UniqueBpTableRow::ID_BpLinkTable(pFVar6);
      pUVar1 = (this->InteractionPrepareUIComponent).field0_0x0.DebugPtr;
      pcVar2 = *(code **)(*(longlong *)pUVar1 + 0x508);
      pFVar8 = ::FName::FName(&local_150,"Interaction");
      FVar3 = *pFVar8;
      pUVar9 = FWeakObjectPtr::Get(&local_158);
      (*pcVar2)(pUVar1,pUVar9,&FAttachmentTransformRules::KeepRelativeTransform,FVar3);
      UDS_ActorAttachedWidgetComponent::Init
                ((this->InteractionPrepareUIComponent).field0_0x0.DebugPtr,&pFVar7->ResourcePath);
    }
    if ((this->InteractionIconUIComponent).field0_0x0.DebugPtr !=
        (UDS_ActorAttachedWidgetComponent *)0x0) {
      pFVar6 = FDS_UniqueBpTableRow::GetRef(0xc,true);
      pFVar7 = FDS_UniqueBpTableRow::ID_BpLinkTable(pFVar6);
      pUVar1 = (this->InteractionIconUIComponent).field0_0x0.DebugPtr;
      pcVar2 = *(code **)(*(longlong *)pUVar1 + 0x508);
      pFVar8 = ::FName::FName(&local_150,"Interaction");
      FVar3 = *pFVar8;
      pUVar9 = FWeakObjectPtr::Get(&local_158);
      (*pcVar2)(pUVar1,pUVar9,&FAttachmentTransformRules::KeepRelativeTransform,FVar3);
      UDS_ActorAttachedWidgetComponent::Init
                ((this->InteractionIconUIComponent).field0_0x0.DebugPtr,&pFVar7->ResourcePath);
    }
  }
  return;
}

// IsInteractingWithMainCharacter @ 14bca7a80

bool __thiscall ADS_StuffQuestBoard::IsInteractingWithMainCharacter(ADS_StuffQuestBoard *this)

{
  bool bVar1;
  UObject *pUVar2;
  FWeakObjectPtr local_res18;
  ulong64 local_res20;
  
  local_res20 = FDS_EntityBase::GetMainPlayerEntityID(true);
  UDS_AbilityDataSet::GetAbilityData<UDS_InteractionAbilityData_StuffQuestBoard>
            ((ulong64 *)&local_res18,(EDS_AbilityTagType *)&local_res20);
  bVar1 = FWeakObjectPtr::IsValid(&local_res18);
  if (bVar1) {
    pUVar2 = FWeakObjectPtr::Get(&local_res18);
    return *(longlong *)&pUVar2[2].field_0x8 == this->_padding_;
  }
  return false;
}

// IsInteractionAvailable @ 14bca7f10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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

bool __thiscall
ADS_StuffQuestBoard::IsInteractionAvailable(ADS_StuffQuestBoard *this,ulong64 param_1)

{
  bool bVar1;
  UDS_LogManager *pUVar2;
  UDS_StuffQuestBoardData *this_00;
  undefined1 auStackY_188 [32];
  FWeakObjectPtr local_148 [2];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_188;
  bVar1 = FDS_EntityBase::IsInteractionAvailable((FDS_EntityBase *)this,param_1);
  if (bVar1) {
    UDS_StuffQuestBoardData::GetData((ulong64)local_148);
    bVar1 = TWeakObjectPtr<UDS_StuffQuestBoardData,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_StuffQuestBoardData,FWeakObjectPtr> *)local_148,
                       (void *)0x0);
    if (!bVar1) {
      this_00 = (UDS_StuffQuestBoardData *)FWeakObjectPtr::Get(local_148);
      bVar1 = UDS_StuffQuestBoardData::IsInteractionAvailable(this_00,param_1);
      return bVar1;
    }
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 != (UDS_LogManager *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"ADS_StuffQuestBoard::IsInteractionAvailable",0x2b,Yes);
      UDS_LogManager::PrintLog
                (pUVar2,1,Warning,local_138.Ptr,0x3e,L"stuffQuestBoardData is nullptr. (%llu)");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  return false;
}

// OnPartsSystemComplete @ 14bcb9e40

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

void __thiscall ADS_StuffQuestBoard::OnPartsSystemComplete(ADS_StuffQuestBoard *this)

{
  bool local_res8 [8];
  
  local_res8[0] = false;
  ADS_Stuff::InitTriggers((ADS_Stuff *)&this[-1]._padding_,local_res8);
  InitWidgets((ADS_StuffQuestBoard *)&this[-1]._padding_);
  (**(code **)(this[-1]._padding_ + 0x768))(&this[-1]._padding_,0);
  FDS_EntityBase::OnPartsSystemComplete((FDS_EntityBase *)this);
  return;
}

