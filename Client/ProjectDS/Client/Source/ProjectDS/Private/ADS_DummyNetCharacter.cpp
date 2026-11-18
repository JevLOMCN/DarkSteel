// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 22

// StaticClass @ 14b487630

UClass * __cdecl ADS_DummyNetCharacter::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ADS_DummyNetCharacter.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_DummyNetCharacter",
               &Z_Registration_Info_UClass_ADS_DummyNetCharacter.InnerSingleton,
               StaticRegisterNativesADS_DummyNetCharacter,0x7b0,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<ADS_DummyNetCharacter>,
               InternalVTableHelperCtorCaller<ADS_DummyNetCharacter>,local_res8,
               ADS_EntityActorBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ADS_DummyNetCharacter.InnerSingleton;
}

// ADS_DummyNetCharacter @ 14b48a7e0

ADS_DummyNetCharacter * __thiscall
ADS_DummyNetCharacter::ADS_DummyNetCharacter(ADS_DummyNetCharacter *this,FVTableHelper *param_1)

{
  ADS_EntityActorBase::ADS_EntityActorBase((ADS_EntityActorBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__AActor__;
  this->_padding_ = (longlong)&_vftable__for__FDS_EntityBase__;
  (this->NameTagUIComponent).field0_0x0.DebugPtr = (UDS_ActorAttachedWidgetComponent *)0x0;
  (this->SkeletalMeshComp).field0_0x0.DebugPtr = (USkeletalMeshComponent *)0x0;
  (this->COICore).field0_0x0.DebugPtr = (UWN_MCS_COICore *)0x0;
  (this->ManCOIPath).AssetPath.PackageName.ComparisonIndex = 0;
  (this->ManCOIPath).AssetPath.PackageName.Number = 0;
  (this->ManCOIPath).AssetPath.AssetName.ComparisonIndex = 0;
  (this->ManCOIPath).AssetPath.AssetName.Number = 0;
  (this->ManCOIPath).SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ManCOIPath).SubPathString.Data.ArrayNum = 0;
  (this->ManCOIPath).SubPathString.Data.ArrayMax = 0;
  (this->GirlCOIPath).AssetPath.PackageName.ComparisonIndex = 0;
  (this->GirlCOIPath).AssetPath.PackageName.Number = 0;
  (this->GirlCOIPath).AssetPath.AssetName.ComparisonIndex = 0;
  (this->GirlCOIPath).AssetPath.AssetName.Number = 0;
  (this->GirlCOIPath).SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GirlCOIPath).SubPathString.Data.ArrayNum = 0;
  (this->GirlCOIPath).SubPathString.Data.ArrayMax = 0;
  (this->ManAnim).AssetPath.PackageName.ComparisonIndex = 0;
  (this->ManAnim).AssetPath.PackageName.Number = 0;
  (this->ManAnim).AssetPath.AssetName.ComparisonIndex = 0;
  (this->ManAnim).AssetPath.AssetName.Number = 0;
  (this->ManAnim).SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ManAnim).SubPathString.Data.ArrayNum = 0;
  (this->ManAnim).SubPathString.Data.ArrayMax = 0;
  (this->GirlAnim).AssetPath.PackageName.ComparisonIndex = 0;
  (this->GirlAnim).AssetPath.PackageName.Number = 0;
  (this->GirlAnim).AssetPath.AssetName.ComparisonIndex = 0;
  (this->GirlAnim).AssetPath.AssetName.Number = 0;
  (this->GirlAnim).SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GirlAnim).SubPathString.Data.ArrayNum = 0;
  (this->GirlAnim).SubPathString.Data.ArrayMax = 0;
  return this;
}

// ~ADS_DummyNetCharacter @ 14b48b720

void __thiscall ADS_DummyNetCharacter::~ADS_DummyNetCharacter(ADS_DummyNetCharacter *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__AActor__;
  this->_padding_ = (longlong)&_vftable__for__FDS_EntityBase__;
  pFVar1 = (this->GirlAnim).SubPathString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ManAnim).SubPathString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->GirlCOIPath).SubPathString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ManCOIPath).SubPathString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  ADS_EntityActorBase::~ADS_EntityActorBase((ADS_EntityActorBase *)this);
  return;
}

// GetFluxSurfaceLocation @ 14b48cc90

TVector<double> * __thiscall
ADS_DummyNetCharacter::GetFluxSurfaceLocation
          (ADS_DummyNetCharacter *this,TVector<double> *__return_storage_ptr__)

{
  UFunction *this_00;
  UClass *pUVar1;
  double local_28;
  double dStack_20;
  double local_18;
  
  this_00 = UObject::FindFunctionChecked
                      ((UObject *)this,NAME_ADS_DummyNetCharacter_GetFluxSurfaceLocation);
  pUVar1 = UField::GetOwnerClass((UField *)this_00);
  if ((pUVar1->ClassFlags & CLASS_Native) == CLASS_None) {
    local_18 = 0.0;
    local_28 = 0.0;
    dStack_20 = 0.0;
    (**(code **)(this->_padding_ + 0x260))(this,this_00,&local_28);
    (__return_storage_ptr__->field0_0x0)._s_0.X = local_28;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = dStack_20;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = local_18;
    return __return_storage_ptr__;
  }
  (**(code **)(this->_padding_ + 0x778))(this,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetFluxSurfaceLocation_Implementation @ 14b48cd40

TVector<double> * __thiscall
ADS_DummyNetCharacter::GetFluxSurfaceLocation_Implementation
          (ADS_DummyNetCharacter *this,TVector<double> *__return_storage_ptr__)

{
  undefined8 uVar1;
  
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)uVar1;
  (__return_storage_ptr__->field0_0x0)._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  return __return_storage_ptr__;
}

// GetPartsSystemControl @ 14b48cdb0

TWeakObjectPtr<UDS_PartsSystemControl,FWeakObjectPtr> __thiscall
ADS_DummyNetCharacter::GetPartsSystemControl(ADS_DummyNetCharacter *this)

{
  FWeakObjectPtr in_RDX;
  undefined8 local_res10 [3];
  
  *(undefined8 *)in_RDX = 0;
  local_res10[0] = 0;
  FWeakObjectPtr::operator=((FWeakObjectPtr *)in_RDX,(FObjectPtr)local_res10);
  return (TWeakObjectPtr<UDS_PartsSystemControl,FWeakObjectPtr>)in_RDX;
}

// GetPrivateStaticClass @ 14b48cde0

UClass * __cdecl ADS_DummyNetCharacter::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ADS_DummyNetCharacter.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_DummyNetCharacter",
               &Z_Registration_Info_UClass_ADS_DummyNetCharacter.InnerSingleton,
               StaticRegisterNativesADS_DummyNetCharacter,0x7b0,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<ADS_DummyNetCharacter>,
               InternalVTableHelperCtorCaller<ADS_DummyNetCharacter>,local_res8,
               ADS_EntityActorBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ADS_DummyNetCharacter.InnerSingleton;
}

// StaticRegisterNativesADS_DummyNetCharacter @ 14b48d760

void __cdecl ADS_DummyNetCharacter::StaticRegisterNativesADS_DummyNetCharacter(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_ADS_DummyNetCharacter_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execGetFluxSurfaceLocation @ 14b48e700

void __cdecl
ADS_DummyNetCharacter::execGetFluxSurfaceLocation(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 local_28 [32];
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  puVar2 = (undefined8 *)(**(code **)(*(longlong *)param_1 + 0x778))(param_1,local_28);
  uVar1 = puVar2[1];
  *(undefined8 *)param_3 = *puVar2;
  *(undefined8 *)((longlong)param_3 + 8) = uVar1;
  *(undefined8 *)((longlong)param_3 + 0x10) = puVar2[2];
  return;
}

// ADS_DummyNetCharacter @ 14bc814a0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

ADS_DummyNetCharacter * __thiscall
ADS_DummyNetCharacter::ADS_DummyNetCharacter
          (ADS_DummyNetCharacter *this,FObjectInitializer *param_1)

{
  byte *pbVar1;
  FName FVar2;
  FName *pFVar3;
  UClass *pUVar4;
  UObject *pUVar5;
  UDS_ActorAttachedWidgetComponent *pUVar6;
  USkeletalMeshComponent *this_00;
  UWN_MCS_COICore *this_01;
  FName local_res8;
  
  ADS_EntityActorBase::ADS_EntityActorBase((ADS_EntityActorBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__AActor__;
  (this->NameTagUIComponent).field0_0x0.DebugPtr = (UDS_ActorAttachedWidgetComponent *)0x0;
  (this->SkeletalMeshComp).field0_0x0.DebugPtr = (USkeletalMeshComponent *)0x0;
  (this->COICore).field0_0x0.DebugPtr = (UWN_MCS_COICore *)0x0;
  (this->ManCOIPath).AssetPath.PackageName.ComparisonIndex = 0;
  (this->ManCOIPath).AssetPath.PackageName.Number = 0;
  (this->ManCOIPath).AssetPath.AssetName.ComparisonIndex = 0;
  (this->ManCOIPath).AssetPath.AssetName.Number = 0;
  (this->ManCOIPath).SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ManCOIPath).SubPathString.Data.ArrayNum = 0;
  (this->ManCOIPath).SubPathString.Data.ArrayMax = 0;
  (this->GirlCOIPath).AssetPath.PackageName.ComparisonIndex = 0;
  (this->GirlCOIPath).AssetPath.PackageName.Number = 0;
  (this->GirlCOIPath).AssetPath.AssetName.ComparisonIndex = 0;
  (this->GirlCOIPath).AssetPath.AssetName.Number = 0;
  (this->GirlCOIPath).SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GirlCOIPath).SubPathString.Data.ArrayNum = 0;
  (this->GirlCOIPath).SubPathString.Data.ArrayMax = 0;
  (this->ManAnim).AssetPath.PackageName.ComparisonIndex = 0;
  (this->ManAnim).AssetPath.PackageName.Number = 0;
  (this->ManAnim).AssetPath.AssetName.ComparisonIndex = 0;
  (this->ManAnim).AssetPath.AssetName.Number = 0;
  (this->ManAnim).SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ManAnim).SubPathString.Data.ArrayNum = 0;
  (this->ManAnim).SubPathString.Data.ArrayMax = 0;
  (this->GirlAnim).AssetPath.PackageName.ComparisonIndex = 0;
  (this->GirlAnim).AssetPath.PackageName.Number = 0;
  (this->GirlAnim).AssetPath.AssetName.ComparisonIndex = 0;
  (this->GirlAnim).AssetPath.AssetName.Number = 0;
  (this->GirlAnim).SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GirlAnim).SubPathString.Data.ArrayNum = 0;
  (this->GirlAnim).SubPathString.Data.ArrayMax = 0;
  this->_padding_ = (longlong)&_vftable__for__FDS_EntityBase__;
  if (this->_padding_ != 0) {
    ::FName::FName(&local_res8,L"DummyNetPlayer");
    this->_padding_ = (longlong)local_res8;
    (**(code **)(*(longlong *)this->_padding_ + 0x788))((longlong *)this->_padding_,local_res8,1);
  }
  pFVar3 = ::FName::FName(&local_res8,L"CharacterTrajectory");
  FVar2 = *pFVar3;
  pUVar4 = Z_Construct_UClass_UDS_CharacterTrajectoryComponent_NoRegister();
  pUVar5 = UObject::CreateDefaultSubobject((UObject *)this,FVar2,pUVar4,pUVar4,true,false);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar5);
  }
  this->_padding_ = (longlong)pUVar5;
  pFVar3 = ::FName::FName(&local_res8,"NameTagUIComponent");
  FVar2 = *pFVar3;
  pUVar4 = Z_Construct_UClass_UDS_ActorAttachedWidgetComponent_NoRegister();
  pUVar6 = (UDS_ActorAttachedWidgetComponent *)
           UObject::CreateDefaultSubobject((UObject *)this,FVar2,pUVar4,pUVar4,true,false);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar6 != (UDS_ActorAttachedWidgetComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar6);
  }
  (this->NameTagUIComponent).field0_0x0.DebugPtr = pUVar6;
  pbVar1 = (byte *)((longlong)&this->_padding_ + 2);
  *pbVar1 = *pbVar1 | 6;
  pFVar3 = ::FName::FName(&local_res8,L"SkeletalMeshComponent");
  FVar2 = *pFVar3;
  pUVar4 = Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
  this_00 = (USkeletalMeshComponent *)
            UObject::CreateDefaultSubobject((UObject *)this,FVar2,pUVar4,pUVar4,true,false);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (this_00 != (USkeletalMeshComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)this_00);
  }
  (this->SkeletalMeshComp).field0_0x0.DebugPtr = this_00;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  USceneComponent::SetupAttachment
            ((USceneComponent *)this_00,(USceneComponent *)this->_padding_,(FName)0x0);
  pFVar3 = ::FName::FName(&local_res8,"COICore");
  FVar2 = *pFVar3;
  pUVar4 = Z_Construct_UClass_UWN_MCS_COICore_NoRegister();
  this_01 = (UWN_MCS_COICore *)
            UObject::CreateDefaultSubobject((UObject *)this,FVar2,pUVar4,pUVar4,true,false);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this_01 != (UWN_MCS_COICore *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)this_01);
  }
  (this->COICore).field0_0x0.DebugPtr = this_01;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  USceneComponent::SetupAttachment
            ((USceneComponent *)this_01,
             (USceneComponent *)(this->SkeletalMeshComp).field0_0x0.DebugPtr,(FName)0x0);
  return this;
}

// BeginPlay @ 14bc87fd0

void __thiscall ADS_DummyNetCharacter::BeginPlay(ADS_DummyNetCharacter *this)

{
  UDS_ActorAttachedWidgetComponent *pUVar1;
  ForAnyElementType FVar2;
  int iVar3;
  FSharedReferencer<1> FVar4;
  bool bVar5;
  char cVar6;
  UDS_SyncRecvComponent *pUVar7;
  undefined8 *puVar8;
  ulong64 uVar9;
  TReferenceControllerBase<1> *pTVar10;
  TDelegate<void___cdecl(FSoftObjectPath_const_&,UObject_*),FDefaultDelegateUserPolicy> *pTVar11;
  TReferenceControllerBase<1> *pTVar12;
  ADS_DummyNetCharacter *local_res8;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_c8;
  ForAnyElementType FStack_c0;
  int local_b8;
  FDestructionSentinel local_a8;
  FDelegateAllocation *local_90;
  undefined1 local_88 [8];
  ForAnyElementType local_80;
  int local_78;
  FLoadAssetAsyncOptionalParams local_70;
  undefined1 local_48 [8];
  FDelegateAllocation local_40;
  undefined8 local_30;
  FSharedReferencer<1> aFStack_28 [2];
  
  bVar5 = UDS_GameInstance::GetIsAIGymMode();
  if ((bVar5) &&
     (pUVar1 = (this->NameTagUIComponent).field0_0x0.DebugPtr,
     pUVar1 != (UDS_ActorAttachedWidgetComponent *)0x0)) {
    (**(code **)(*(longlong *)pUVar1 + 0xb58))(pUVar1,0);
  }
  ADS_EntityActorBase::BeginPlay((ADS_EntityActorBase *)this);
  pUVar7 = NewObject<UDS_SyncRecvComponent>((UObject *)this);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar7 != (UDS_SyncRecvComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar7);
  }
  pTVar12 = (TReferenceControllerBase<1> *)0x0;
  this->_padding_ = (longlong)pUVar7;
  local_c8.AccessDetector.State = (FMRSWRecursiveAccessDetector)OnCharacterLoadingComplete;
  FStack_c0.Data =
       (FScriptContainerElement *)((ulonglong)aFStack_28[0].ReferenceController._4_4_ << 0x20);
  local_70.ProgressDelegate.Object = (FLoadPackageAsyncProgressDelegate *)0x0;
  local_70.ProgressDelegate.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  local_70._16_8_ = (ulonglong)(uint)local_70._20_4_ << 0x20;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&local_70,
             (FWriteAccessScope *)&local_a8);
  local_90 = (FDelegateAllocation *)&local_70.ProgressDelegate.SharedReferenceCount;
  puVar8 = UE::Core::Private::DelegateAllocate
                     (0x30,(FDelegateAllocation *)&local_70.ProgressDelegate.SharedReferenceCount);
  if (puVar8 != (undefined8 *)0x0) {
    *puVar8 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar9 = FDelegateHandle::GenerateNewID();
    puVar8[2] = uVar9;
    *puVar8 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VADS_DummyNetCharacter____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this != (ADS_DummyNetCharacter *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar8[3] = 0;
    local_res8 = this;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this != (ADS_DummyNetCharacter *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar8 + 3),(FObjectPtr)&local_res8);
    *(FMRSWRecursiveAccessDetector *)(puVar8 + 4) = local_c8.AccessDetector.State;
    puVar8[5] = FStack_c0.Data;
  }
  if (local_a8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_a8.Accessor,&local_a8);
  }
  local_30 = 0;
  aFStack_28[0].ReferenceController = (TReferenceControllerBase<1> *)0x0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&local_70,
             (FReadAccessScope *)&local_a8);
  if (((local_70.PackagePriority == 0) ||
      (local_70.ProgressDelegate.SharedReferenceCount.ReferenceController ==
       (TReferenceControllerBase<1> *)0x0)) ||
     (cVar6 = (**(code **)((local_70.ProgressDelegate.SharedReferenceCount.ReferenceController)->
                           _padding_ + 0x38))(), cVar6 == '\0')) {
    bVar5 = false;
  }
  else {
    bVar5 = true;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            ((FReadAccessScope *)&local_a8);
  if (!bVar5) goto LAB_14bc88363;
  local_88 = (undefined1  [8])0x0;
  local_80.Data = (FScriptContainerElement *)0x0;
  local_78 = 0;
  local_c8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_c0.Data = (FScriptContainerElement *)0x0;
  local_b8 = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&local_70,
             (FReadAccessScope *)&local_a8);
  if ((local_70.PackagePriority != 0) &&
     (local_70.ProgressDelegate.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0)) {
    (**(code **)((local_70.ProgressDelegate.SharedReferenceCount.ReferenceController)->_padding_ +
                0x50))(local_70.ProgressDelegate.SharedReferenceCount.ReferenceController,&local_c8)
    ;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            ((FReadAccessScope *)&local_a8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_c8,(FWriteAccessScope *)&local_a8);
  iVar3 = local_b8;
  FVar2.Data = FStack_c0.Data;
  FStack_c0.Data = (FScriptContainerElement *)0x0;
  local_b8 = 0;
  if (local_a8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_a8.Accessor,&local_a8);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_88,
             (FWriteAccessScope *)&local_a8);
  if (local_78 == 0) {
LAB_14bc88204:
    if (local_80.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_80.Data);
    }
  }
  else if (local_80.Data != (FScriptContainerElement *)0x0) {
    (*(code *)**(undefined8 **)local_80.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_80,0,0,0x10);
    local_78 = 0;
    goto LAB_14bc88204;
  }
  local_80.Data = FVar2.Data;
  local_78 = iVar3;
  if (local_a8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_a8.Accessor,&local_a8);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_c8,(FWriteAccessScope *)&local_a8);
  if ((local_b8 != 0) && (FStack_c0.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_c0.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_c0,0,0,0x10);
    local_b8 = 0;
  }
  if (local_a8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_a8.Accessor,&local_a8);
  }
  if (FStack_c0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_c0.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_c8.AccessDetector);
  pTVar10 = ::operator_new(0x30);
  if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
    *(undefined8 *)(pTVar10 + 1) = 0;
    pTVar10[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar10[1].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar10[2]._padding_ = 0;
    TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
              ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)(pTVar10 + 1),
               (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_88);
    pTVar10->SharedReferenceCount = (atomic<int>)0x1;
    pTVar10->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_XV<lambda_1>__4___0FWN_EndOfRefs__QEAA_AEBV__TDelegate___A6AXXZUFDefaultDelegateUserPolicy_____Z__00_SharedPointerInternals__6B_
    ;
    pTVar10->WeakReferenceCount = (atomic<int>)0x1;
    pTVar10[2].SharedReferenceCount = (atomic<int>)0x0;
    pTVar10[2].WeakReferenceCount = (atomic<int>)0x0;
    pTVar12 = pTVar10;
  }
  local_c8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_c0.Data = (FScriptContainerElement *)pTVar12;
  SharedPointerInternals::FSharedReferencer<1>::operator=
            (aFStack_28,(FSharedReferencer<1> *)&FStack_c0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)FStack_c0.Data);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_88,
             (FWriteAccessScope *)&local_a8);
  if ((local_78 != 0) && (local_80.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)local_80.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_80,0,0,0x10);
    local_78 = 0;
  }
  if (local_a8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_a8.Accessor,&local_a8);
  }
  if (local_80.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_80.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_88);
LAB_14bc88363:
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&local_70,
             (FWriteAccessScope *)&local_a8);
  if ((local_70.PackagePriority != 0) &&
     (local_70.ProgressDelegate.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0)) {
    (**(code **)(local_70.ProgressDelegate.SharedReferenceCount.ReferenceController)->_padding_)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_70.ProgressDelegate.SharedReferenceCount,0,0,0x10);
    local_70._16_8_ = local_70._16_8_ & 0xffffffff00000000;
  }
  if (local_a8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_a8.Accessor,&local_a8);
  }
  if (local_70.ProgressDelegate.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    FMemory::Free(local_70.ProgressDelegate.SharedReferenceCount.ReferenceController);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&local_70);
  local_c8.AccessDetector.State = (FMRSWRecursiveAccessDetector)OnAnimLoadComplete;
  FStack_c0.Data =
       (FScriptContainerElement *)
       ((ulonglong)aFStack_28[0].ReferenceController & 0xffffffff00000000);
  local_48 = (undefined1  [8])0x0;
  local_40.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_40.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
             (FWriteAccessScope *)&local_a8);
  local_90 = &local_40;
  puVar8 = UE::Core::Private::DelegateAllocate(0x38,&local_40);
  FVar4.ReferenceController = aFStack_28[0].ReferenceController;
  if (puVar8 != (undefined8 *)0x0) {
    *puVar8 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBUFSoftObjectPath__PEAVUObject___ZUFDefaultDelegateUserPolicy__VFWN_EndOfRefs____6B_
    ;
    puVar8[1] = local_30;
    puVar8[2] = aFStack_28[0].ReferenceController;
    if (aFStack_28[0].ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (aFStack_28[0].ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(aFStack_28[0].ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    uVar9 = FDelegateHandle::GenerateNewID();
    puVar8[3] = uVar9;
    *puVar8 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VADS_DummyNetCharacter____A6AXAEBUFSoftObjectPath__PEAVUObject___ZUFDefaultDelegateUserPolicy__VFWN_EndOfRefs____6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this != (ADS_DummyNetCharacter *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar8[4] = 0;
    local_res8 = this;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this != (ADS_DummyNetCharacter *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar8 + 4),(FObjectPtr)&local_res8);
    *(FMRSWRecursiveAccessDetector *)(puVar8 + 5) = local_c8.AccessDetector.State;
    puVar8[6] = FStack_c0.Data;
  }
  if (local_a8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_a8.Accessor,&local_a8);
  }
  local_70.PackagePriority = 0;
  local_70._20_4_ = 0;
  local_70.LoadFlags = 0;
  local_70._36_4_ = 0;
  local_70.InstancingContext = (FLinkerInstancingContext *)0x0;
  local_70.ProgressDelegate.Object = (FLoadPackageAsyncProgressDelegate *)0x0;
  local_70.ProgressDelegate.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  pTVar11 = TDelegate<void___cdecl(FSoftObjectPath_const_&,UObject_*),FDefaultDelegateUserPolicy>::
            TDelegate<void___cdecl(FSoftObjectPath_const_&,UObject_*),FDefaultDelegateUserPolicy>
                      ((TDelegate<void___cdecl(FSoftObjectPath_const_&,UObject_*),FDefaultDelegateUserPolicy>
                        *)&local_a8,
                       (TDelegate<void___cdecl(FSoftObjectPath_const_&,UObject_*),FDefaultDelegateUserPolicy>
                        *)local_48);
  FSoftObjectPath::LoadAsync(&this->ManAnim,pTVar11,&local_70);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
             (FWriteAccessScope *)&local_a8);
  if ((local_40.DelegateSize != 0) &&
     (local_40.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_40.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_40,0,0,0x10);
    local_40.DelegateSize = 0;
  }
  if (local_a8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_a8.Accessor,&local_a8);
  }
  if (local_40.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_40.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_48);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar4.ReferenceController);
  return;
}

// EndPlay @ 14bc96b30

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

void __thiscall ADS_DummyNetCharacter::EndPlay(ADS_DummyNetCharacter *this,Type param_1)

{
  byte *pbVar1;
  longlong *plVar2;
  int iVar3;
  code *pcVar4;
  FName FVar5;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *this_00;
  bool bVar6;
  UWorld *pUVar7;
  FStopReplicatingActorParams *pFVar8;
  UFunction *pUVar9;
  TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1> *pTVar10;
  ADS_DummyNetCharacter *pAVar11;
  UClass *pUVar12;
  ADS_DummyNetCharacter *pAVar13;
  longlong *plVar14;
  ADS_DummyNetCharacter *pAVar15;
  undefined1 auStack_188 [32];
  undefined1 uStack_168;
  undefined1 auStack_167 [7];
  longlong *plStack_160;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *pTStack_158;
  FSharedReferencer<1> FStack_150;
  ADS_DummyNetCharacter *pAStack_148;
  ADS_DummyNetCharacter *pAStack_140;
  longlong **pplStack_138;
  undefined8 uStack_130;
  FSharedReferencer<1> FStack_128;
  ADS_DummyNetCharacter *pAStack_120;
  undefined1 uStack_118;
  FStopReplicatingActorParams FStack_110;
  TSharedPtr<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,1> TStack_108;
  longlong alStack_f8 [24];
  longlong *plStack_38;
  int iStack_30;
  undefined4 uStack_2c;
  ulonglong uStack_28;
  
  uStack_28 = __security_cookie.value ^ (ulonglong)auStack_188;
  if ((this->_padding_ & 0x180000000000) != 0x100000000000) {
    return;
  }
  pAVar13 = (ADS_DummyNetCharacter *)0x0;
  pAVar15 = (ADS_DummyNetCharacter *)0x0;
  pAVar11 = this;
  if (this == (ADS_DummyNetCharacter *)0x0) {
    pAVar11 = pAVar13;
  }
  bVar6 = FTraceFilter::IsObjectTraceable<1>((UObject *)pAVar11);
  if (bVar6) {
    pUVar7 = AActor::GetWorld((AActor *)this);
    bVar6 = FTraceFilter::IsObjectTraceable<1>((UObject *)pUVar7);
    if (bVar6) {
      FObjectTrace::OutputObjectLifetimeEnd((UObject *)this);
    }
  }
  pbVar1 = (byte *)((longlong)&this->_padding_ + 5);
  *pbVar1 = *pbVar1 & 0xe7;
  pFVar8 = FStopReplicatingActorParams::FStopReplicatingActorParams(&FStack_110,param_1);
  UE::Net::FReplicationSystemUtil::StopReplicatingActor((AActor *)this,pFVar8);
  uStack_168 = (char)param_1;
  pUVar9 = UObject::FindFunctionChecked((UObject *)this,NAME_AActor_ReceiveEndPlay);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar9,&uStack_168);
  pTStack_158 = (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)0x0;
  FStack_150.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (*(char *)((longlong)&this->_padding_ + 7) != '\0') {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) <
         `protected:_class_FName___cdecl_TSparseDynamicDelegate<FActorEndPlaySignature_MCSignature,AActor,FActorEndPlaySignatureInfoGetter>::GetDelegateName(void)const___ptr64'
         ::__l2::_thread_safe_static_guard_0__) &&
       (_Init_thread_header(&`protected:_class_FName___cdecl_TSparseDynamicDelegate<FActorEndPlaySignature_MCSignature,AActor,FActorEndPlaySignatureInfoGetter>::GetDelegateName(void)const___ptr64'
                             ::__l2::_thread_safe_static_guard_0__),
       `protected:_class_FName___cdecl_TSparseDynamicDelegate<FActorEndPlaySignature_MCSignature,AActor,FActorEndPlaySignatureInfoGetter>::GetDelegateName(void)const___ptr64'
       ::__l2::_thread_safe_static_guard_0__ == -1)) {
      ::FName::FName(&`protected:_class_FName___cdecl_TSparseDynamicDelegate<FActorEndPlaySignature_MCSignature,AActor,FActorEndPlaySignatureInfoGetter>::GetDelegateName(void)const___ptr64'
                      ::__l2::DelegateFName,"OnEndPlay");
      _Init_thread_footer(&`protected:_class_FName___cdecl_TSparseDynamicDelegate<FActorEndPlaySignature_MCSignature,AActor,FActorEndPlaySignatureInfoGetter>::GetDelegateName(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
    FVar5 = `protected:_class_FName___cdecl_TSparseDynamicDelegate<FActorEndPlaySignature_MCSignature,AActor,FActorEndPlaySignatureInfoGetter>::GetDelegateName(void)const___ptr64'
            ::__l2::DelegateFName;
    bVar6 = UObjectBase::IsValidLowLevelFast((UObjectBase *)this,false);
    if ((!bVar6) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("DelegateOwner->IsValidLowLevelFast(false)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\SparseDelegate.h"
                           ,0xd7,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pTVar10 = FSparseDelegateStorage::GetSharedMulticastDelegate(&TStack_108,(UObject *)this,FVar5);
    FStack_128.ReferenceController = (pTVar10->SharedReferenceCount).ReferenceController;
    pTStack_158 = pTVar10->Object;
    if (FStack_128.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (FStack_128.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(FStack_128.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    uStack_130 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(&FStack_150,&FStack_128);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_128.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (TStack_108.SharedReferenceCount.ReferenceController);
  }
  this_00 = pTStack_158;
  if (pTStack_158 != (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)0x0) {
    if ((pTStack_158 == (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pAStack_120 = this;
    uStack_118 = (char)param_1;
    TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
              (this_00,&pAStack_120);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_150.ReferenceController);
  plStack_38 = (longlong *)0x0;
  uStack_2c = 0x18;
  iStack_30 = 0;
  pAVar11 = (ADS_DummyNetCharacter *)Z_Construct_UClass_UActorComponent_NoRegister();
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (pAVar11 == (ADS_DummyNetCharacter *)0x0) goto LAB_147390f4f;
  }
  else {
    pAVar15 = pAVar13;
    if (pAVar11 == (ADS_DummyNetCharacter *)0x0) goto LAB_147390f4f;
    UE::GC::MarkAsReachable((UObject *)pAVar11);
  }
  pUVar12 = Z_Construct_UClass_UActorComponent_NoRegister();
  pAVar15 = pAVar13;
  if (pUVar12 != (UClass *)0x0) {
    iVar3 = (int)pUVar12->_padding_;
    if (((int)pAVar11->_padding_ < iVar3) ||
       ((longlong *)*(undefined1 **)(pAVar11->_padding_ + (longlong)iVar3 * 8) !=
        &pUVar12->_padding_)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if (bVar6) {
      pAVar15 = pAVar11;
    }
  }
LAB_147390f4f:
  pAVar13 = (ADS_DummyNetCharacter *)Z_Construct_UClass_UActorComponent_NoRegister();
  if (pAVar15 == pAVar13) {
    pAStack_148 = pAVar11;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pAVar11 != (ADS_DummyNetCharacter *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pAVar11);
    }
    AActor::
    ForEachComponent_Internal<UActorComponent,1,0,_AActor::GetComponents<TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>_::__l2::<lambda_1>_>
              ((AActor *)this,(TSubclassOf<UActorComponent>)&pAStack_148,
               (TArray<UActorComponent_*,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>
                *)alStack_f8);
  }
  else {
    pAStack_140 = pAVar11;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pAVar11 != (ADS_DummyNetCharacter *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pAVar11);
    }
    AActor::
    ForEachComponent_Internal<UActorComponent,0,0,_AActor::GetComponents<TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>_::__l2::<lambda_1>_>
              ((AActor *)this,(TSubclassOf<UActorComponent>)&pAStack_140,
               (TArray<UActorComponent_*,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>
                *)alStack_f8);
  }
  iVar3 = iStack_30;
  plVar14 = alStack_f8;
  if (plStack_38 != (longlong *)0x0) {
    plVar14 = plStack_38;
  }
  plVar2 = plVar14 + iStack_30;
  while( true ) {
    if (iStack_30 != iVar3) {
      `TCheckedPointerIterator<UActorComponent_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (auStack_167);
    }
    if (plVar14 == plVar2) break;
    plStack_160 = (longlong *)*plVar14;
    if (((*(byte *)((longlong)plStack_160 + 0x9b) & 0x20) != 0) &&
       ((**(code **)(*plStack_160 + 0x400))(plStack_160,param_1),
       (*(byte *)((longlong)plStack_160 + 0x9b) & 0x20) != 0)) {
      pplStack_138 = &plStack_160;
      `AActor::EndPlay'::__l15::<lambda_1>::operator()(&pplStack_138);
    }
    plVar14 = plVar14 + 1;
  }
  if (plStack_38 != (longlong *)0x0) {
    FMemory::Free(plStack_38);
  }
  return;
}

// GetDummyNetCharacter @ 14bc9f490

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

TWeakObjectPtr<ADS_DummyNetCharacter,FWeakObjectPtr> __cdecl
ADS_DummyNetCharacter::GetDummyNetCharacter(ulong64 param_1,bool param_2)

{
  int iVar1;
  FDS_EntityBase *pFVar2;
  FWeakObjectPtr *this;
  UObject *pUVar3;
  UClass *pUVar4;
  undefined7 in_register_00000011;
  ulong64 local_res10;
  UObject *local_res20;
  undefined1 local_18 [16];
  
  local_res10 = CONCAT71(in_register_00000011,param_2);
  pFVar2 = FDS_EntityBase::GetEntityBase(&local_res10);
  if (pFVar2 == (FDS_EntityBase *)0x0) {
    *(undefined8 *)param_1 = 0;
    local_res20 = (UObject *)0x0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)&local_res20);
    return (TWeakObjectPtr<ADS_DummyNetCharacter,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
  }
  this = (FWeakObjectPtr *)(**(code **)(pFVar2->_padding_ + 0x150))(pFVar2,local_18);
  pUVar3 = FWeakObjectPtr::Get(this);
  if (pUVar3 != (UObject *)0x0) {
    pUVar4 = Z_Construct_UClass_ADS_DummyNetCharacter_NoRegister();
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar3->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar3->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar4->_padding_)) goto LAB_14bc9f507;
  }
  pUVar3 = (UObject *)0x0;
LAB_14bc9f507:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar3);
  }
  *(undefined8 *)param_1 = 0;
  local_res20 = pUVar3;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar3);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)&local_res20);
  return (TWeakObjectPtr<ADS_DummyNetCharacter,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
}

// GetNameTagUIComponent @ 14bca0880

TWeakObjectPtr<UDS_WidgetComponent,FWeakObjectPtr> __thiscall
ADS_DummyNetCharacter::GetNameTagUIComponent(ADS_DummyNetCharacter *this)

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

// GetResourcePresetTableRow @ 14bca1800

FDS_ResourcePresetTableRow * __thiscall
ADS_DummyNetCharacter::GetResourcePresetTableRow(ADS_DummyNetCharacter *this)

{
  bool bVar1;
  UObject *pUVar2;
  FDS_ResourcePresetTableRow *pFVar3;
  FWeakObjectPtr local_res8 [4];
  
  UDS_CharInfoData::GetData((ulong64)local_res8);
  bVar1 = TWeakObjectPtr<UDS_CharInfoData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_CharInfoData,FWeakObjectPtr> *)local_res8,(void *)0x0);
  if (bVar1) {
    return &FDS_ResourcePresetTableRow::DefaultObject;
  }
  pUVar2 = FWeakObjectPtr::Get(local_res8);
  pFVar3 = FDS_ResourcePresetTableRow::GetRef((longlong)*(int *)&pUVar2[0xd].field_0x18,true);
  return pFVar3;
}

// GetSkeletalMeshComponent @ 14bca1a50

TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr> __thiscall
ADS_DummyNetCharacter::GetSkeletalMeshComponent(ADS_DummyNetCharacter *this)

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
  return (TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr>)in_RDX;
}

// OnAnimLoadComplete @ 14bcaf300

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
ADS_DummyNetCharacter::OnAnimLoadComplete
          (ADS_DummyNetCharacter *this,FSoftObjectPath *param_1,UObject *param_2,
          FWN_EndOfRefs *param_3)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UAnimBlueprint *this_00;
  UClass *pUVar4;
  UAnimBlueprintGeneratedClass *pUVar5;
  FWeakObjectPtr *pFVar6;
  UObject *pUVar7;
  USceneComponent *this_01;
  longlong lVar8;
  IAnimClassInterface *pIVar9;
  longlong *plVar10;
  FWeakObjectPtr local_res8;
  undefined1 local_68 [8];
  undefined1 local_60 [8];
  TVector<double>_u_0 local_58;
  undefined8 local_38;
  undefined8 uStack_30;
  double local_28;
  
  this_00 = (UAnimBlueprint *)FSoftObjectPath::TryLoad(param_1,(FUObjectSerializeContext *)0x0);
  plVar10 = &this->_padding_;
  (**(code **)(*plVar10 + 0x80))(plVar10);
  bVar3 = TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr> *)&local_res8,
                     (void *)0x0);
  if (bVar3) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_297207089728585414>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\SpawnActor\\NetPlayer\\DS_DummyNetCharacter.cpp"
                       ,0x13a,"false");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else if (this_00 == (UAnimBlueprint *)0x0) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_297207089728585408>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\SpawnActor\\NetPlayer\\DS_DummyNetCharacter.cpp"
                       ,0x140,"false");
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
      pIVar9 = (IAnimClassInterface *)&pUVar5->_padding_;
      if (pUVar5 == (UAnimBlueprintGeneratedClass *)0x0) {
        pIVar9 = (IAnimClassInterface *)0x0;
      }
      pUVar4 = IAnimClassInterface::GetActualAnimClass(pIVar9);
      pFVar6 = (FWeakObjectPtr *)(**(code **)(*plVar10 + 0x80))(plVar10,local_68);
      pUVar7 = FWeakObjectPtr::Get(pFVar6);
      (**(code **)(*(longlong *)pUVar7 + 0xc70))(pUVar7,pUVar4);
    }
    pUVar4 = Z_Construct_UClass_UAnimBlueprintGeneratedClass_NoRegister();
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= *(int *)(this_00->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar4->_padding_)) {
      pUVar4 = IAnimClassInterface::GetActualAnimClass((IAnimClassInterface *)&this_00[4]._padding_)
      ;
      pFVar6 = (FWeakObjectPtr *)(**(code **)(*plVar10 + 0x80))(plVar10,local_60);
      pUVar7 = FWeakObjectPtr::Get(pFVar6);
      (**(code **)(*(longlong *)pUVar7 + 0xc70))(pUVar7,pUVar4);
    }
    this_01 = (USceneComponent *)FWeakObjectPtr::Get(&local_res8);
    local_38 = 0;
    uStack_30 = 0;
    lVar8 = (**(code **)(*plVar10 + 0x28))(plVar10);
    local_58._s_0.X = 0.0;
    local_58._s_0.Y = 0.0;
    local_58._s_0.Z =
         (double)(float)(*(uint *)(lVar8 + 0x50) ^ __xmm_80000000800000008000000080000000);
    local_28 = local_58._s_0.Z;
    USceneComponent::SetRelativeLocation
              (this_01,(TVector<double> *)&local_58._s_0,false,(FHitResult *)0x0,None);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_3->TaskCaller).SharedReferenceCount.ReferenceController);
  return;
}

// OnChangedTagCallback @ 14bcb1700

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
ADS_DummyNetCharacter::OnChangedTagCallback
          (ADS_DummyNetCharacter *this,FGameplayTag *param_1,bool param_2)

{
  bool bVar1;
  UDS_LogManager *pUVar2;
  UDS_CharStateData *this_00;
  undefined1 auStackY_198 [32];
  FWeakObjectPtr local_158 [2];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_198;
  UDS_CharStateData::GetData((ulong64)local_158);
  bVar1 = TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr> *)local_158,(void *)0x0);
  if (bVar1) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 != (UDS_LogManager *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"ADS_DummyNetCharacter::OnChangedTagCallback",0x2b,Yes);
      UDS_LogManager::PrintLog
                (pUVar2,1,Warning,local_148.Ptr,0xbe,L"charStateData is nullptr. entityID : %d");
      if ((void *)local_148._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_148._padding_);
      }
    }
  }
  else {
    this_00 = (UDS_CharStateData *)FWeakObjectPtr::Get(local_158);
    UDS_CharStateData::OnChangedTagCallback(this_00,param_1,param_2);
  }
  return;
}

// OnCharacterLoadingComplete @ 14bcb1b60

void __thiscall ADS_DummyNetCharacter::OnCharacterLoadingComplete(ADS_DummyNetCharacter *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014bcb1b6a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x48))();
  return;
}

// OnPartsSystemComplete @ 14bcb8740

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

void __thiscall ADS_DummyNetCharacter::OnPartsSystemComplete(ADS_DummyNetCharacter *this)

{
  longlong lVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  FDS_UniqueBpTableRow *this_00;
  FDS_ResourceEtcTableRow *pFVar5;
  FName *pFVar6;
  UObject *pUVar7;
  EDS_AbilityTagType local_res8 [8];
  EDS_AbilityTagType local_res10 [8];
  EDS_AbilityTagType local_res18 [8];
  EDS_AbilityTagType local_res20 [8];
  FWeakObjectPtr local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  FName local_38 [2];
  
  lVar1 = this->_padding_;
  if (lVar1 == 0) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_297207089728585462>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\SpawnActor\\NetPlayer\\DS_DummyNetCharacter.cpp"
                       ,0x10a,"false");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else {
    this_00 = FDS_UniqueBpTableRow::GetRef(5,true);
    pFVar5 = FDS_UniqueBpTableRow::ID_BpLinkTable(this_00);
    plVar2 = (longlong *)this->_padding_;
    if (plVar2 != (longlong *)0x0) {
      pcVar3 = *(code **)(*plVar2 + 0x508);
      pFVar6 = ::FName::FName(local_38,"NameTag");
      (*pcVar3)(plVar2,lVar1,&FAttachmentTransformRules::KeepRelativeTransform,*pFVar6);
      UDS_ActorAttachedWidgetComponent::Init
                ((UDS_ActorAttachedWidgetComponent *)this->_padding_,&pFVar5->ResourcePath);
    }
    UDS_CharacterTrajectoryComponent::Init((UDS_CharacterTrajectoryComponent *)this->_padding_);
    local_res8[0] = EquipmentAppearance;
    local_60 = 0;
    FDS_EntityBase::TryActivateAbility
              ((FDS_EntityBase *)this,local_res8,(TObjectPtr<UWN_AbilityContext>)&local_60);
    local_58 = 0;
    local_res10[0] = BattleState;
    FDS_EntityBase::TryActivateAbility
              ((FDS_EntityBase *)this,local_res10,(TObjectPtr<UWN_AbilityContext>)&local_58);
    local_50 = 0;
    local_res18[0] = BuffProcess;
    FDS_EntityBase::TryActivateAbility
              ((FDS_EntityBase *)this,local_res18,(TObjectPtr<UWN_AbilityContext>)&local_50);
    local_48 = 0;
    local_res20[0] = SlopeSlide;
    FDS_EntityBase::TryActivateAbility
              ((FDS_EntityBase *)this,local_res20,(TObjectPtr<UWN_AbilityContext>)&local_48);
    UDS_PlayerData::GetData((ulong64)&local_68,this->_padding_,false);
    bVar4 = FWeakObjectPtr::IsValid(&local_68);
    if (bVar4) {
      pUVar7 = FWeakObjectPtr::Get(&local_68);
      if (pUVar7[10].field_0x8 == '\x16') {
        local_40 = 0x20;
        (**(code **)(this->_padding_ + 0x58))(this,&local_40,0);
      }
    }
    FDS_EntityBase::OnPartsSystemComplete((FDS_EntityBase *)this);
  }
  return;
}

// SetParentEntity @ 14bcc8360

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
ADS_DummyNetCharacter::SetParentEntity
          (ADS_DummyNetCharacter *this,TWeakObjectPtr<AActor,FWeakObjectPtr> param_1)

{
  bool bVar1;
  UObject *pUVar2;
  UObject *pUVar3;
  FWeakObjectPtr local_res10;
  FWeakObjectPtr local_res18;
  FWeakObjectPtr local_res20;
  undefined8 local_18 [2];
  
  local_res10 = param_1.WeakPtr;
  bVar1 = FWeakObjectPtr::IsValid(&local_res10);
  if (bVar1) {
    pUVar2 = FWeakObjectPtr::Get(&local_res10);
    pUVar3 = FWeakObjectPtr::Get(&local_res10);
    FTickFunction::AddPrerequisite
              ((FTickFunction *)&this[-1]._padding_,pUVar3,(FTickFunction *)(pUVar2 + 1));
    local_res20 = (FWeakObjectPtr)FWeakObjectPtr::Get(&local_res10);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res20 != (FWeakObjectPtr)0x0)
       ) {
      UE::GC::MarkAsReachable((UObject *)local_res20);
    }
    local_res18.ObjectIndex = 0;
    local_res18.ObjectSerialNumber = 0;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res20 != (FWeakObjectPtr)0x0)
       ) {
      UE::GC::MarkAsReachable((UObject *)local_res20);
    }
    FWeakObjectPtr::operator=(&local_res18,(FObjectPtr)&local_res20);
    ADS_EntityActorBase::SetParentEntity
              ((ADS_EntityActorBase *)this,(TWeakObjectPtr<AActor,FWeakObjectPtr>)local_res18);
    return;
  }
  (**(code **)(this->_padding_ + 0x1d0))(this);
  bVar1 = TWeakObjectPtr<AActor,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<AActor,FWeakObjectPtr> *)&local_res18,(void *)0x0);
  if (!bVar1) {
    pUVar2 = FWeakObjectPtr::Get(&local_res18);
    pUVar3 = FWeakObjectPtr::Get(&local_res18);
    FTickFunction::RemovePrerequisite
              ((FTickFunction *)&this[-1]._padding_,pUVar3,(FTickFunction *)(pUVar2 + 1));
  }
  local_res20.ObjectIndex = 0;
  local_res20.ObjectSerialNumber = 0;
  local_18[0] = 0;
  FWeakObjectPtr::operator=(&local_res20,(FObjectPtr)local_18);
  ADS_EntityActorBase::SetParentEntity
            ((ADS_EntityActorBase *)this,(TWeakObjectPtr<AActor,FWeakObjectPtr>)local_res20);
  return;
}

// Tick @ 14bccc8e0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall ADS_DummyNetCharacter::Tick(ADS_DummyNetCharacter *this,float param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  double dVar3;
  char cVar4;
  bool bVar5;
  UDS_EntityManager *pUVar6;
  FDS_EntityBase *pFVar7;
  FDS_EntityBase *pFVar8;
  float afStackX_8 [2];
  float afStackX_10 [2];
  float afStackX_18 [2];
  undefined8 uStackX_20;
  
  afStackX_10[0] = param_1;
  AActor::Tick((AActor *)this,param_1);
  plVar1 = (longlong *)this->_padding_;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x2c8))(plVar1,afStackX_10[0]);
  }
  plVar1 = &this->_padding_;
  cVar4 = (**(code **)(*plVar1 + 0x88))(plVar1);
  if ((cVar4 == '\x01') && (plVar2 = (longlong *)this->_padding_, plVar2 != (longlong *)0x0)) {
    (**(code **)(*plVar2 + 0x2c0))(plVar2,afStackX_10);
  }
  bVar5 = UDS_IngameState::IsNpcTalking();
  if (((((!bVar5) && (cVar4 = (**(code **)(this->_padding_ + 0x770))(this), cVar4 == '\0')) &&
       (pUVar6 = UDS_EntityManager::GetInst(), pUVar6 != (UDS_EntityManager *)0x0)) &&
      ((pFVar7 = UDS_EntityManager::FindEntityBase(pUVar6,this->_padding_),
       pFVar7 != (FDS_EntityBase *)0x0 &&
       (pUVar6 = UDS_EntityManager::GetInst(), pUVar6 != (UDS_EntityManager *)0x0)))) &&
     (pFVar8 = UDS_EntityManager::GetCurrentMainCharEntityBase(pUVar6,true),
     pFVar8 != (FDS_EntityBase *)0x0)) {
    dVar3 = (double)(**(code **)(*plVar1 + 0x68))(plVar1);
    afStackX_8[0] = (float)dVar3;
    dVar3 = (double)(**(code **)(*plVar1 + 0x70))(plVar1);
    afStackX_18[0] = (float)dVar3;
    if ((0.0 < afStackX_8[0]) && (0.0 < afStackX_18[0])) {
      bVar5 = DS_Util::IsCloseDist(pFVar7,pFVar8,afStackX_8);
      if (bVar5) {
        uStackX_20 = 0x10;
        (**(code **)(*plVar1 + 0x60))(plVar1,&uStackX_20,0);
        return;
      }
      bVar5 = DS_Util::IsCloseDist(pFVar7,pFVar8,afStackX_18);
      if (!bVar5) {
        uStackX_20 = 0x10;
        (**(code **)(*plVar1 + 0x58))(plVar1,&uStackX_20,0);
      }
    }
  }
  return;
}

