// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 16

// StaticClass @ 14b5a6470

UClass * __cdecl ADS_Stuff::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ADS_Stuff.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_Stuff",&Z_Registration_Info_UClass_ADS_Stuff.InnerSingleton
               ,StaticRegisterNativesADS_Stuff,0x728,8,CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,
               L"Engine",InternalConstructor<ADS_Stuff>,InternalVTableHelperCtorCaller<ADS_Stuff>,
               local_res8,ADS_EntityActorBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ADS_Stuff.InnerSingleton;
}

// ADS_Stuff @ 14b5a8db0

ADS_Stuff * __thiscall ADS_Stuff::ADS_Stuff(ADS_Stuff *this,FVTableHelper *param_1)

{
  ADS_EntityActorBase::ADS_EntityActorBase((ADS_EntityActorBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__AActor__;
  this->_padding_ = (longlong)&_vftable__for__FDS_EntityBase__;
  return this;
}

// ~ADS_Stuff @ 14b5a9670

void __thiscall ADS_Stuff::~ADS_Stuff(ADS_Stuff *this)

{
  this->_padding_ = (longlong)&_vftable__for__AActor__;
  this->_padding_ = (longlong)&_vftable__for__FDS_EntityBase__;
  ADS_EntityActorBase::~ADS_EntityActorBase((ADS_EntityActorBase *)this);
  return;
}

// GetPrivateStaticClass @ 14b5aa3e0

UClass * __cdecl ADS_Stuff::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ADS_Stuff.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_Stuff",&Z_Registration_Info_UClass_ADS_Stuff.InnerSingleton
               ,StaticRegisterNativesADS_Stuff,0x728,8,CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,
               L"Engine",InternalConstructor<ADS_Stuff>,InternalVTableHelperCtorCaller<ADS_Stuff>,
               local_res8,ADS_EntityActorBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ADS_Stuff.InnerSingleton;
}

// StaticRegisterNativesADS_Stuff @ 14b5aaf70

void __cdecl ADS_Stuff::StaticRegisterNativesADS_Stuff(void)

{
  return;
}

// ADS_Stuff @ 14bc822c0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

ADS_Stuff * __thiscall ADS_Stuff::ADS_Stuff(ADS_Stuff *this,FObjectInitializer *param_1)

{
  FName FVar1;
  FName *pFVar2;
  UClass *pUVar3;
  USkeletalMeshComponent *this_00;
  UStaticMeshComponent *this_01;
  FName local_res8;
  
  ADS_EntityActorBase::ADS_EntityActorBase((ADS_EntityActorBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__AActor__;
  this->_padding_ = (longlong)&_vftable__for__FDS_EntityBase__;
  pFVar2 = ::FName::FName(&local_res8,L"SkeletalMeshComponent");
  FVar1 = *pFVar2;
  pUVar3 = Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
  this_00 = (USkeletalMeshComponent *)
            UObject::CreateDefaultSubobject((UObject *)this,FVar1,pUVar3,pUVar3,true,false);
  this->SkeletalMeshComponent = this_00;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  USceneComponent::SetupAttachment
            ((USceneComponent *)this_00,(USceneComponent *)this->_padding_,(FName)0x0);
  pFVar2 = ::FName::FName(&local_res8,L"StaticMeshComponent");
  FVar1 = *pFVar2;
  pUVar3 = Z_Construct_UClass_UStaticMeshComponent_NoRegister();
  this_01 = (UStaticMeshComponent *)
            UObject::CreateDefaultSubobject((UObject *)this,FVar1,pUVar3,pUVar3,true,false);
  this->StaticMeshComponent = this_01;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  USceneComponent::SetupAttachment
            ((USceneComponent *)this_01,(USceneComponent *)this->_padding_,(FName)0x0);
  return this;
}

// BeginPlay @ 14bc89300

void __thiscall ADS_Stuff::BeginPlay(ADS_Stuff *this)

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
  ADS_Stuff *local_res8;
  undefined1 local_e8 [16];
  int local_d8;
  undefined1 *local_d0;
  undefined1 local_c8 [16];
  int local_b8;
  undefined1 *local_b0;
  undefined1 local_a8 [8];
  ForAnyElementType FStack_a0;
  int local_98;
  undefined1 local_88 [8];
  FSharedReferencer<1> FStack_80;
  FLoadAssetAsyncOptionalParams local_78;
  undefined1 local_48 [16];
  ForAnyElementType local_38;
  FSharedReferencer<1> *local_30;
  
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
  FStack_a0.Data = (FScriptContainerElement *)(local_e8._8_8_ & 0xffffffff00000000);
  local_78.ProgressDelegate.Object = (FLoadPackageAsyncProgressDelegate *)0x0;
  local_a8 = (undefined1  [8])OnStuffLoadComplete;
  local_78.ProgressDelegate.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  local_78._16_8_ = (ulonglong)(uint)local_78._20_4_ << 0x20;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&local_78,
             (FWriteAccessScope *)local_48);
  local_30 = &local_78.ProgressDelegate.SharedReferenceCount;
  puVar9 = UE::Core::Private::DelegateAllocate
                     (0x30,(FDelegateAllocation *)&local_78.ProgressDelegate.SharedReferenceCount);
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
    local_res8 = this;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar9 + 3),(FObjectPtr)&local_res8);
    *(undefined1 (*) [8])(puVar9 + 4) = local_a8;
    puVar9[5] = FStack_a0.Data;
  }
  if (local_38.Data._0_1_ == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_48._8_8_,(FDestructionSentinel *)local_48);
  }
  local_88 = (undefined1  [8])0x0;
  FStack_80.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&local_78,
             (FReadAccessScope *)local_c8);
  if (((local_78.PackagePriority == 0) ||
      (local_78.ProgressDelegate.SharedReferenceCount.ReferenceController ==
       (TReferenceControllerBase<1> *)0x0)) ||
     (cVar7 = (**(code **)((local_78.ProgressDelegate.SharedReferenceCount.ReferenceController)->
                           _padding_ + 0x38))(), cVar7 == '\0')) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            ((FReadAccessScope *)local_c8);
  if (!bVar3) goto LAB_14bc896c9;
  local_e8._0_8_ = (atomic<unsigned___int64>)0x0;
  local_e8._8_8_ = (atomic<unsigned___int64> *)0x0;
  local_d8 = 0;
  local_a8 = (undefined1  [8])0x0;
  FStack_a0.Data = (FScriptContainerElement *)0x0;
  local_98 = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&local_78,
             (FReadAccessScope *)local_c8);
  if ((local_78.PackagePriority != 0) &&
     (local_78.ProgressDelegate.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0)) {
    (**(code **)((local_78.ProgressDelegate.SharedReferenceCount.ReferenceController)->_padding_ +
                0x50))(local_78.ProgressDelegate.SharedReferenceCount.ReferenceController,local_a8);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            ((FReadAccessScope *)local_c8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_a8,
             (FWriteAccessScope *)local_c8);
  iVar17 = local_98;
  FVar4.Data = FStack_a0.Data;
  FStack_a0.Data = (FScriptContainerElement *)0x0;
  local_98 = 0;
  if (local_b8._0_1_ == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_c8._8_8_,(FDestructionSentinel *)local_c8);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_e8,
             (FWriteAccessScope *)local_c8);
  if (local_d8 == 0) {
LAB_14bc89562:
    if ((FMRSWRecursiveAccessDetector *)local_e8._8_8_ != (FMRSWRecursiveAccessDetector *)0x0) {
      FMemory::Free((void *)local_e8._8_8_);
    }
  }
  else if ((FMRSWRecursiveAccessDetector *)local_e8._8_8_ != (FMRSWRecursiveAccessDetector *)0x0) {
    (**(code **)*(atomic<unsigned___int64> *)local_e8._8_8_)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)(local_e8 + 8),0,0,0x10);
    local_d8 = 0;
    goto LAB_14bc89562;
  }
  local_e8._8_8_ = FVar4.Data;
  local_d8 = iVar17;
  if (local_b8._0_1_ == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_c8._8_8_,(FDestructionSentinel *)local_c8);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_a8,
             (FWriteAccessScope *)local_c8);
  if ((local_98 != 0) && (FStack_a0.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_a0.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_a0,0,0,0x10);
    local_98 = 0;
  }
  if (local_b8._0_1_ == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_c8._8_8_,(FDestructionSentinel *)local_c8);
  }
  if (FStack_a0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_a0.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_a8);
  pTVar11 = ::operator_new(0x30);
  if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
    *(undefined8 *)(pTVar11 + 1) = 0;
    pTVar11[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar11[1].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar11[2]._padding_ = 0;
    TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
              ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)(pTVar11 + 1),
               (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_e8);
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
  local_a8 = (undefined1  [8])0x0;
  FStack_a0.Data = (FScriptContainerElement *)pTVar18;
  SharedPointerInternals::FSharedReferencer<1>::operator=
            (&FStack_80,(FSharedReferencer<1> *)&FStack_a0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)FStack_a0.Data);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_e8,
             (FWriteAccessScope *)local_c8);
  if ((local_d8 != 0) &&
     ((FMRSWRecursiveAccessDetector *)local_e8._8_8_ != (FMRSWRecursiveAccessDetector *)0x0)) {
    (**(code **)*(atomic<unsigned___int64> *)local_e8._8_8_)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)(local_e8 + 8),0,0,0x10);
    local_d8 = 0;
  }
  if (local_b8._0_1_ == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_c8._8_8_,(FDestructionSentinel *)local_c8);
  }
  if ((FMRSWRecursiveAccessDetector *)local_e8._8_8_ != (FMRSWRecursiveAccessDetector *)0x0) {
    FMemory::Free((void *)local_e8._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_e8);
LAB_14bc896c9:
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&local_78,
             (FWriteAccessScope *)local_c8);
  if ((local_78.PackagePriority != 0) &&
     (local_78.ProgressDelegate.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0)) {
    (**(code **)(local_78.ProgressDelegate.SharedReferenceCount.ReferenceController)->_padding_)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_78.ProgressDelegate.SharedReferenceCount,0,0,0x10);
    local_78._16_8_ = local_78._16_8_ & 0xffffffff00000000;
  }
  if (local_b8._0_1_ == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_c8._8_8_,(FDestructionSentinel *)local_c8);
  }
  if (local_78.ProgressDelegate.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    FMemory::Free(local_78.ProgressDelegate.SharedReferenceCount.ReferenceController);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&local_78);
  FVar6.ReferenceController = FStack_80.ReferenceController;
  auVar5 = local_88;
  if (this_00->ID_ResourceMesh != 0) {
    pFVar12 = FDS_ResourcePresetTableRow::ID_ResourceMeshTable(this_00);
    pFVar13 = FSoftObjectPath::ToString(&pFVar12->MeshPath,(FString *)&local_78);
    pFVar13 = FWN_SoftObjectUtils::GetObjectPath((FString *)local_a8,pFVar13,false);
    local_48._0_4_ = 0;
    local_48._4_4_ = 0;
    local_48._8_4_ = 0;
    local_48._12_4_ = 0;
    local_38.Data = (FScriptContainerElement *)0x0;
    local_30 = (FSharedReferencer<1> *)0x0;
    local_88 = (undefined1  [8])(pFVar13->Data).AllocatorInstance.Data;
    iVar17 = (pFVar13->Data).ArrayNum;
    iVar16 = iVar17 + -1;
    if (iVar17 == 0) {
      iVar16 = 0;
    }
    FStack_80.ReferenceController._0_4_ = iVar16;
    FSoftObjectPath::SetPath((FSoftObjectPath *)local_48,(TStringView<wchar_t> *)local_88);
    if ((atomic<unsigned___int64>)local_a8 != (atomic<unsigned___int64>)0x0) {
      FMemory::Free((void *)local_a8);
    }
    if (local_78.ProgressDelegate.Object != (FLoadPackageAsyncProgressDelegate *)0x0) {
      FMemory::Free(local_78.ProgressDelegate.Object);
    }
    local_88 = (undefined1  [8])OnMeshLoaded;
    FStack_80.ReferenceController =
         (TReferenceControllerBase<1> *)(local_e8._8_8_ & 0xffffffff00000000);
    local_e8._8_8_ = (atomic<unsigned___int64> *)0x0;
    local_e8._0_8_ = (atomic<unsigned___int64>)0x0;
    local_d8 = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_e8,
               (FWriteAccessScope *)local_c8);
    local_b0 = local_e8 + 8;
    puVar9 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)(local_e8 + 8));
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
      local_res8 = this;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar9 + 4),(FObjectPtr)&local_res8);
      puVar9[5] = local_88;
      puVar9[6] = FStack_80.ReferenceController;
    }
    if (local_b8._0_1_ == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                ((FMRSWRecursiveAccessDetector *)local_c8._8_8_,(FDestructionSentinel *)local_c8);
    }
    local_78._16_8_ = 0;
    local_78.LoadFlags = 0;
    local_78._36_4_ = 0;
    local_78.InstancingContext = (FLinkerInstancingContext *)0x0;
    local_78.ProgressDelegate.Object = (FLoadPackageAsyncProgressDelegate *)0x0;
    local_78.ProgressDelegate.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    pTVar14 = TDelegate<void___cdecl(FSoftObjectPath_const_&,UObject_*),FDefaultDelegateUserPolicy>
              ::
              TDelegate<void___cdecl(FSoftObjectPath_const_&,UObject_*),FDefaultDelegateUserPolicy>
                        ((TDelegate<void___cdecl(FSoftObjectPath_const_&,UObject_*),FDefaultDelegateUserPolicy>
                          *)local_c8,
                         (TDelegate<void___cdecl(FSoftObjectPath_const_&,UObject_*),FDefaultDelegateUserPolicy>
                          *)local_e8);
    FSoftObjectPath::LoadAsync((FSoftObjectPath *)local_48,pTVar14,&local_78);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_e8,
               (FWriteAccessScope *)local_c8);
    if ((local_d8 != 0) &&
       ((FMRSWRecursiveAccessDetector *)local_e8._8_8_ != (FMRSWRecursiveAccessDetector *)0x0)) {
      (**(code **)*(atomic<unsigned___int64> *)local_e8._8_8_)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)(local_e8 + 8),0,0,0x10);
      local_d8 = 0;
    }
    if (local_b8._0_1_ == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                ((FMRSWRecursiveAccessDetector *)local_c8._8_8_,(FDestructionSentinel *)local_c8);
    }
    if ((FMRSWRecursiveAccessDetector *)local_e8._8_8_ != (FMRSWRecursiveAccessDetector *)0x0) {
      FMemory::Free((void *)local_e8._8_8_);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_e8);
    if (local_38.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data);
    }
  }
  if (this_00->ID_AbpLink != 0) {
    pFVar15 = FDS_ResourcePresetTableRow::ID_AbpLinkTable(this_00);
    pFVar13 = FSoftObjectPath::ToString(&pFVar15->AbpPath,(FString *)local_e8);
    pFVar13 = FWN_SoftObjectUtils::GetObjectPath((FString *)local_a8,pFVar13,false);
    local_48._0_4_ = 0;
    local_48._4_4_ = 0;
    local_48._8_4_ = 0;
    local_48._12_4_ = 0;
    local_38.Data = (FScriptContainerElement *)0x0;
    local_30 = (FSharedReferencer<1> *)0x0;
    local_88 = (undefined1  [8])(pFVar13->Data).AllocatorInstance.Data;
    iVar16 = (pFVar13->Data).ArrayNum;
    iVar17 = iVar16 + -1;
    if (iVar16 == 0) {
      iVar17 = 0;
    }
    FStack_80.ReferenceController._0_4_ = iVar17;
    local_78.ProgressDelegate.SharedReferenceCount.ReferenceController =
         FStack_80.ReferenceController;
    local_78.ProgressDelegate.Object = (FLoadPackageAsyncProgressDelegate *)local_88;
    FSoftObjectPath::SetPath((FSoftObjectPath *)local_48,(TStringView<wchar_t> *)&local_78);
    if ((atomic<unsigned___int64>)local_a8 != (atomic<unsigned___int64>)0x0) {
      FMemory::Free((void *)local_a8);
    }
    if ((atomic<unsigned___int64>)local_e8._0_8_ != (atomic<unsigned___int64>)0x0) {
      FMemory::Free((void *)local_e8._0_8_);
    }
    local_88 = (undefined1  [8])OnAbpLoaded;
    FStack_80.ReferenceController =
         (TReferenceControllerBase<1> *)(local_e8._8_8_ & 0xffffffff00000000);
    local_c8._0_8_ = (atomic<unsigned___int64>)0x0;
    local_c8._8_8_ = (atomic<unsigned___int64> *)0x0;
    local_b8 = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_c8,
               (FWriteAccessScope *)local_e8);
    local_d0 = local_c8 + 8;
    puVar9 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)(local_c8 + 8));
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
      local_res8 = this;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar9 + 4),(FObjectPtr)&local_res8);
      puVar9[5] = local_88;
      puVar9[6] = FStack_80.ReferenceController;
    }
    if (local_d8._0_1_ == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                ((FMRSWRecursiveAccessDetector *)local_e8._8_8_,(FDestructionSentinel *)local_e8);
    }
    local_78._16_8_ = 0;
    local_78.LoadFlags = 0;
    local_78._36_4_ = 0;
    local_78.InstancingContext = (FLinkerInstancingContext *)0x0;
    local_78.ProgressDelegate.Object = (FLoadPackageAsyncProgressDelegate *)0x0;
    local_78.ProgressDelegate.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    pTVar14 = TDelegate<void___cdecl(FSoftObjectPath_const_&,UObject_*),FDefaultDelegateUserPolicy>
              ::
              TDelegate<void___cdecl(FSoftObjectPath_const_&,UObject_*),FDefaultDelegateUserPolicy>
                        ((TDelegate<void___cdecl(FSoftObjectPath_const_&,UObject_*),FDefaultDelegateUserPolicy>
                          *)local_e8,
                         (TDelegate<void___cdecl(FSoftObjectPath_const_&,UObject_*),FDefaultDelegateUserPolicy>
                          *)local_c8);
    FSoftObjectPath::LoadAsync((FSoftObjectPath *)local_48,pTVar14,&local_78);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_c8,
               (FWriteAccessScope *)local_e8);
    if ((local_b8 != 0) &&
       ((atomic<unsigned___int64> *)local_c8._8_8_ != (atomic<unsigned___int64> *)0x0)) {
      (**(code **)*(atomic<unsigned___int64> *)local_c8._8_8_)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)(local_c8 + 8),0,0,0x10);
      local_b8 = 0;
    }
    if (local_d8._0_1_ == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                ((FMRSWRecursiveAccessDetector *)local_e8._8_8_,(FDestructionSentinel *)local_e8);
    }
    if ((atomic<unsigned___int64> *)local_c8._8_8_ != (atomic<unsigned___int64> *)0x0) {
      FMemory::Free((void *)local_c8._8_8_);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_c8);
    if (local_38.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar6.ReferenceController);
  return;
}

// EndPlay @ 14bc96fb0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ADS_Stuff::EndPlay(ADS_Stuff *this,Type param_1)

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

// GetEntitySpawnRange @ 14bc9f830

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

EDS_EntitySpawnRange __thiscall ADS_Stuff::GetEntitySpawnRange(ADS_Stuff *this)

{
  EDS_EntitySpawnRange EVar1;
  FDS_StuffBaseTableRow *pFVar2;
  UDS_LogManager *pUVar3;
  undefined1 auStackY_178 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  pFVar2 = FDS_StuffBaseTableRow::Get(this->_padding_,true);
  if (pFVar2 == (FDS_StuffBaseTableRow *)0x0) {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 != (UDS_LogManager *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"ADS_Stuff::GetEntitySpawnRange",0x1e,Yes);
      UDS_LogManager::PrintLog
                (pUVar3,1,Warning,local_138.Ptr,0x6e,L"stuffBaseTable is nullptr. (%d)");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
    EVar1 = None;
  }
  else {
    EVar1 = pFVar2->EntitySpawnRange;
  }
  return EVar1;
}

// GetResourcePresetTableRow @ 14bca18f0

FDS_ResourcePresetTableRow * __thiscall ADS_Stuff::GetResourcePresetTableRow(ADS_Stuff *this)

{
  FDS_StuffBaseTableRow *this_00;
  FDS_ResourcePresetTableRow *pFVar1;
  
  this_00 = FDS_StuffBaseTableRow::GetRef((longlong)(int)this->_padding_,true);
  pFVar1 = FDS_StuffBaseTableRow::ID_ResourcePresetTable(this_00);
  return pFVar1;
}

// GetSkeletalMeshComponent @ 14bca1b70

TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr> __thiscall
ADS_Stuff::GetSkeletalMeshComponent(ADS_Stuff *this)

{
  UObject *pUVar1;
  FWeakObjectPtr in_RDX;
  UObject *local_res8;
  
  pUVar1 = (UObject *)this->_padding_;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (pUVar1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar1);
  }
  *(undefined8 *)in_RDX = 0;
  local_res8 = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar1);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)in_RDX,(FObjectPtr)&local_res8);
  return (TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr>)in_RDX;
}

// InitTriggers @ 14bca54b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall ADS_Stuff::InitTriggers(ADS_Stuff *this,bool *param_1)

{
  void *_Src;
  bool bVar1;
  UDS_LogManager *pUVar2;
  UObject *pUVar3;
  UDS_TriggerCore *this_00;
  longlong lVar4;
  undefined1 auStackY_1a8 [32];
  TArray<int,TSizedDefaultAllocator<32>_> local_168;
  FWeakObjectPtr local_158;
  FWeakObjectPtr local_150;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  ADS_EntityActorBase::GetTriggerCore((ADS_EntityActorBase *)this);
  bVar1 = TWeakObjectPtr<UDS_TriggerCore,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_TriggerCore,FWeakObjectPtr> *)&local_150,(void *)0x0);
  if (bVar1) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 != (UDS_LogManager *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"ADS_Stuff::InitTriggers",0x17,Yes);
      UDS_LogManager::PrintLog(pUVar2,1,Warning,local_148.Ptr,0x86,L"triggerCore is nullptr.");
      if ((void *)local_148._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_148._padding_);
      }
    }
  }
  else {
    UDS_StuffData::GetData((ulong64)&local_158,this->_padding_,false);
    bVar1 = TWeakObjectPtr<UDS_StuffData,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_StuffData,FWeakObjectPtr> *)&local_158,(void *)0x0);
    if (bVar1) {
      pUVar2 = UDS_LogManager::GetInst();
      if (pUVar2 != (UDS_LogManager *)0x0) {
        pUVar2 = UDS_LogManager::GetInst();
        local_148._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_148,"ADS_Stuff::InitTriggers",0x17,Yes);
        UDS_LogManager::PrintLog
                  (pUVar2,1,Warning,local_148.Ptr,0x8d,L"stuffData is nullptr. (%llu)");
        if ((void *)local_148._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_148._padding_);
        }
      }
    }
    else {
      pUVar3 = FWeakObjectPtr::Get(&local_158);
      this_00 = (UDS_TriggerCore *)FWeakObjectPtr::Get(&local_150);
      local_168.ArrayNum = *(int *)(pUVar3 + 8);
      lVar4 = (longlong)local_168.ArrayNum;
      bVar1 = *param_1;
      _Src = *(void **)&pUVar3[7].field_0x20;
      local_168.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      if (local_168.ArrayNum == 0) {
        local_168.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,local_168.ArrayNum,0,&local_168.AllocatorInstance,local_168.ArrayNum,
                   &local_168.ArrayMax);
        memcpy(local_168.AllocatorInstance.Data,_Src,lVar4 << 2);
      }
      UDS_TriggerCore::CreateTrigger(this_00,&local_168,bVar1);
    }
  }
  return;
}

// OnAbpLoaded @ 14bcaf080

void __thiscall
ADS_Stuff::OnAbpLoaded
          (ADS_Stuff *this,FSoftObjectPath *param_1,UObject *param_2,FWN_EndOfRefs *param_3)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UAnimBlueprint *this_00;
  UClass *pUVar4;
  UAnimBlueprintGeneratedClass *pUVar5;
  IAnimClassInterface *pIVar6;
  
  this_00 = (UAnimBlueprint *)FSoftObjectPath::TryLoad(param_1,(FUObjectSerializeContext *)0x0);
  if (this_00 == (UAnimBlueprint *)0x0) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_6239794943657770820>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\SpawnActor\\Prop\\DS_Stuff.cpp"
                       ,0xbc,"anim");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    pUVar4 = Z_Construct_UClass_UAnimBlueprint_NoRegister();
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= *(int *)(this_00->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar4->_padding_)) {
      pUVar5 = UAnimBlueprint::GetAnimBlueprintGeneratedClass(this_00);
      pIVar6 = (IAnimClassInterface *)&pUVar5->_padding_;
      if (pUVar5 == (UAnimBlueprintGeneratedClass *)0x0) {
        pIVar6 = (IAnimClassInterface *)0x0;
      }
      pUVar4 = IAnimClassInterface::GetActualAnimClass(pIVar6);
      (**(code **)(this->SkeletalMeshComponent->_padding_ + 0xc70))
                (this->SkeletalMeshComponent,pUVar4);
    }
    pUVar4 = Z_Construct_UClass_UAnimBlueprintGeneratedClass_NoRegister();
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= *(int *)(this_00->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar4->_padding_)) {
      pUVar4 = IAnimClassInterface::GetActualAnimClass((IAnimClassInterface *)&this_00[4]._padding_)
      ;
      (**(code **)(this->SkeletalMeshComponent->_padding_ + 0xc70))
                (this->SkeletalMeshComponent,pUVar4);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_3->TaskCaller).SharedReferenceCount.ReferenceController);
  return;
}

// OnMeshLoaded @ 14bcb6d00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
ADS_Stuff::OnMeshLoaded
          (ADS_Stuff *this,FSoftObjectPath *param_1,UObject *param_2,FWN_EndOfRefs *param_3)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UObject *pUVar4;
  longlong lVar5;
  UClass *pUVar6;
  UDS_LogManager *pUVar7;
  UObject *pUVar8;
  undefined1 auStackY_218 [32];
  FString local_1d8;
  TVector<double>_u_0 local_1c8;
  TVector<double>_u_0 local_1a8;
  undefined8 local_188;
  undefined8 uStack_180;
  double local_178;
  undefined8 local_170;
  undefined8 uStack_168;
  double local_160;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_218;
  pUVar4 = FSoftObjectPath::TryLoad(param_1,(FUObjectSerializeContext *)0x0);
  if (pUVar4 == (UObject *)0x0) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_6239794943657770854>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\SpawnActor\\Prop\\DS_Stuff.cpp"
                       ,0x9a,"false");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    lVar5 = (**(code **)(this->_padding_ + 0x28))();
    pUVar6 = Z_Construct_UClass_USkeletalMesh_NoRegister();
    iVar1 = (int)pUVar6->_padding_;
    if ((*(int *)(*(longlong *)&pUVar4->field_0x10 + 0x38) < iVar1) ||
       (pUVar8 = pUVar4,
       (longlong *)
       *(undefined1 **)
        (*(longlong *)(*(longlong *)&pUVar4->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
       &pUVar6->_padding_)) {
      pUVar8 = (UObject *)0x0;
    }
    if (pUVar8 == (UObject *)0x0) {
      pUVar6 = Z_Construct_UClass_UStaticMesh_NoRegister();
      iVar1 = (int)pUVar6->_padding_;
      if ((*(int *)(*(longlong *)&pUVar4->field_0x10 + 0x38) < iVar1) ||
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&pUVar4->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar6->_padding_)) {
        pUVar4 = (UObject *)0x0;
      }
      if (pUVar4 == (UObject *)0x0) {
        bVar3 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_6239794943657770829>,false,
                           "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\SpawnActor\\Prop\\DS_Stuff.cpp"
                           ,0xb3,"false");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pUVar7 = UDS_LogManager::GetInst();
        if (pUVar7 != (UDS_LogManager *)0x0) {
          pUVar7 = UDS_LogManager::GetInst();
          FSoftObjectPath::ToString(param_1,&local_1d8);
          local_158._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_158,"ADS_Stuff::OnMeshLoaded",0x17,Yes);
          UDS_LogManager::PrintLog(pUVar7,1,Error,local_158.Ptr,0xb4,L"MeshLoadFail : %s");
          if ((void *)local_158._padding_ != (void *)0x0) {
            FMemory::Free((void *)local_158._padding_);
          }
          if (local_1d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1d8.Data.AllocatorInstance.Data);
          }
        }
      }
      else {
        local_1a8._s_0.Z =
             (double)(float)(*(uint *)(lVar5 + 0x50) ^ __xmm_80000000800000008000000080000000);
        local_1a8._s_0.X = 0.0;
        local_1a8._s_0.Y = 0.0;
        local_170 = 0;
        uStack_168 = 0;
        local_160 = local_1a8._s_0.Z;
        USceneComponent::SetRelativeLocation
                  ((USceneComponent *)this->StaticMeshComponent,(TVector<double> *)&local_1a8._s_0,
                   false,(FHitResult *)0x0,None);
        (**(code **)(this->StaticMeshComponent->_padding_ + 0xb28))
                  (this->StaticMeshComponent,pUVar4);
      }
    }
    else {
      local_1c8._s_0.Z =
           (double)(float)(*(uint *)(lVar5 + 0x50) ^ __xmm_80000000800000008000000080000000);
      local_1c8._s_0.X = 0.0;
      local_1c8._s_0.Y = 0.0;
      local_188 = 0;
      uStack_180 = 0;
      local_178 = local_1c8._s_0.Z;
      USceneComponent::SetRelativeLocation
                ((USceneComponent *)this->SkeletalMeshComponent,(TVector<double> *)&local_1c8._s_0,
                 false,(FHitResult *)0x0,None);
      (**(code **)(this->SkeletalMeshComponent->_padding_ + 0xb48))
                (this->SkeletalMeshComponent,pUVar8,1);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_3->TaskCaller).SharedReferenceCount.ReferenceController);
  return;
}

// OnStuffLoadComplete @ 14bcbb740

void __thiscall ADS_Stuff::OnStuffLoadComplete(ADS_Stuff *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014bcbb74a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x48))();
  return;
}

// Tick @ 14bcccd40

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

void __thiscall ADS_Stuff::Tick(ADS_Stuff *this,float param_1)

{
  long64 lVar1;
  ulong64 uVar2;
  longlong lVar3;
  bool bVar4;
  UDS_EntityData *this_00;
  FWeakObjectPtr local_res8;
  FString local_28;
  FString local_18;
  
  bVar4 = UDS_GameInstance::IsNameTagDebug();
  FDS_EntityBase::ShowDebugUI((FDS_EntityBase *)&this->_padding_,bVar4);
  if (bVar4) {
    UDS_EntityData::GetData((ulong64)&local_res8,this->_padding_);
    bVar4 = TWeakObjectPtr<UDS_EntityData,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_EntityData,FWeakObjectPtr> *)&local_res8,(void *)0x0);
    if (!bVar4) {
      lVar3 = this->_padding_;
      lVar1 = this->_padding_;
      uVar2 = this->_padding_;
      ::FString::FString(&local_28,L"EntityID:{1}\n TableID:{2} SpawnTableID:{3}");
      DS_Util::GetFormatString<unsigned___int64,__int64,int>
                (&local_18,&local_28,uVar2,lVar1,(int)lVar3);
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
      this_00 = (UDS_EntityData *)FWeakObjectPtr::Get(&local_res8);
      UDS_EntityData::SetDebugString(this_00,&local_18);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
  }
  return;
}

