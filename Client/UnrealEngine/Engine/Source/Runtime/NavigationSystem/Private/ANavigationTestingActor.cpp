// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NavigationSystem
// Functions: 27

// StaticClass @ 146dc9380

UClass * __cdecl ANavigationTestingActor::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ANavigationTestingActor.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/NavigationSystem",L"NavigationTestingActor",
               &Z_Registration_Info_UClass_ANavigationTestingActor.InnerSingleton,
               StaticRegisterNativesANavigationTestingActor,0x420,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<ANavigationTestingActor>,
               InternalVTableHelperCtorCaller<ANavigationTestingActor>,local_res8,
               AActor::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ANavigationTestingActor.InnerSingleton;
}

// ANavigationTestingActor @ 146dd2a00

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

ANavigationTestingActor * __thiscall
ANavigationTestingActor::ANavigationTestingActor
          (ANavigationTestingActor *this,FVTableHelper *param_1)

{
  AActor::AActor((AActor *)this,param_1);
  (this->NavAgentProps).AgentRadius = -1.0;
  this->_padding_ = (longlong)&_vftable__for__AActor__;
  this->_padding_ = (longlong)&_vftable__for__INavAgentInterface__;
  this->_padding_ = (longlong)&_vftable__for__INavPathObserverInterface__;
  *(byte *)&(this->NavAgentProps)._padding_ = (byte)(this->NavAgentProps)._padding_ & 0xe0;
  (this->CapsuleComponent).field0_0x0.DebugPtr = (UCapsuleComponent *)0x0;
  (this->InvokerComponent).field0_0x0.DebugPtr = (UNavigationInvokerComponent *)0x0;
  *(undefined8 *)&(this->NavAgentProps).PreferredNavData = 0;
  *(undefined8 *)&(this->NavAgentProps).PreferredNavData.field_0x8 = 0;
  *(undefined8 *)&(this->NavAgentProps).PreferredNavData.field_0x10 = 0;
  *(undefined8 *)&(this->NavAgentProps).PreferredNavData.field_0x18 = 0;
  (this->MyNavData).field0_0x0.DebugPtr = (ANavigationData *)0x0;
  (this->QueryTargetActor).field0_0x0.DebugPtr = (AActor *)0x0;
  this->RadiusUsedToValidateNavData = 0.0;
  (this->OtherActor).field0_0x0.DebugPtr = (ANavigationTestingActor *)0x0;
  (this->FilterClass).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->LastPath).Object = (FNavigationPath *)0x0;
  (this->LastPath).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  *(undefined8 *)&this->PathObserver = 0;
  *(undefined8 *)&(this->PathObserver).field_0x8 = 0;
  *(undefined4 *)&(this->PathObserver).field_0x10 = 0;
  (this->NavAgentProps).AgentHeight = -1.0;
  (this->NavAgentProps).AgentStepHeight = -1.0;
  (this->NavAgentProps).NavWalkingSearchHeightScale = 0.5;
  return this;
}

// ANavigationTestingActor @ 146dd2af0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

ANavigationTestingActor * __thiscall
ANavigationTestingActor::ANavigationTestingActor
          (ANavigationTestingActor *this,FObjectInitializer *param_1)

{
  byte *pbVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  float fVar4;
  byte bVar5;
  uint uVar6;
  FName FVar7;
  void *pvVar8;
  undefined8 uVar9;
  TVector2<double> TVar10;
  ForElementType<TAlignedBytes<16,16>_> FVar11;
  int iVar12;
  FName *pFVar13;
  UClass *pUVar14;
  UCapsuleComponent *pUVar15;
  UNavigationInvokerComponent *pUVar16;
  undefined8 *puVar17;
  ulong64 uVar18;
  float fVar19;
  float fVar20;
  FName local_res8;
  code *local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  bool local_78;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_68;
  FDelegateAllocation local_60;
  FDestructionSentinel local_50;
  FDelegateAllocation *local_38;
  
  AActor::AActor((AActor *)this,param_1);
  *(byte *)&(this->NavAgentProps)._padding_ = (byte)(this->NavAgentProps)._padding_ & 0xe0;
  pbVar1 = (byte *)((longlong)&this->_padding_ + 3);
  *pbVar1 = *pbVar1 | 2;
  (this->NavAgentProps).AgentStepHeight = -1.0;
  (this->NavAgentProps).NavWalkingSearchHeightScale = 0.5;
  (this->CapsuleComponent).field0_0x0.DebugPtr = (UCapsuleComponent *)0x0;
  (this->InvokerComponent).field0_0x0.DebugPtr = (UNavigationInvokerComponent *)0x0;
  *(undefined8 *)&(this->NavAgentProps).PreferredNavData = 0;
  *(undefined8 *)&(this->NavAgentProps).PreferredNavData.field_0x8 = 0;
  *(undefined8 *)&(this->NavAgentProps).PreferredNavData.field_0x10 = 0;
  *(undefined8 *)&(this->NavAgentProps).PreferredNavData.field_0x18 = 0;
  (this->MyNavData).field0_0x0.DebugPtr = (ANavigationData *)0x0;
  (this->QueryTargetActor).field0_0x0.DebugPtr = (AActor *)0x0;
  (this->OtherActor).field0_0x0.DebugPtr = (ANavigationTestingActor *)0x0;
  (this->FilterClass).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->LastPath).Object = (FNavigationPath *)0x0;
  (this->LastPath).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  *(undefined8 *)&this->PathObserver = 0;
  *(undefined8 *)&(this->PathObserver).field_0x8 = 0;
  *(undefined4 *)&(this->PathObserver).field_0x10 = 0;
  this->_padding_ = (longlong)&_vftable__for__AActor__;
  this->_padding_ = (longlong)&_vftable__for__INavAgentInterface__;
  this->_padding_ = (longlong)&_vftable__for__INavPathObserverInterface__;
  this->RadiusUsedToValidateNavData = 0.0;
  (this->NavAgentProps).AgentRadius = 34.0;
  puVar3 = &this->field_0x370;
  this->bShowNodePool = 1;
  this->bShouldBeVisibleInGame = 0;
  this->bShowDiffWithPreviousStep = 0;
  this->bShowBestPath = 1;
  (this->NavAgentProps).AgentHeight = 144.0;
  this->CostLimitFactor = 3.4028235e+38;
  this->MinimumCostLimit = 0.0;
  this->ShowStepIndex = -1;
  TVar10 = UE::Math::TVector2<double>::ZeroVector;
  this->bGatherDetailedInfo = 1;
  this->bDrawDistanceToWall = 0;
  (this->TextCanvasOffset).field0_0x0._s_0 = (TVector2<double>_u_0_s_0)TVar10.field0_0x0;
  uVar9 = FNavigationSystem::InvalidLocation.field0_0x0._s_0.Y;
  (this->ClosestWallLocation).field0_0x0._s_0.X =
       FNavigationSystem::InvalidLocation.field0_0x0._s_0.X;
  (this->ClosestWallLocation).field0_0x0._s_0.Y = (double)uVar9;
  (this->ClosestWallLocation).field0_0x0._s_0.Z =
       FNavigationSystem::InvalidLocation.field0_0x0._s_0.Z;
  uVar9 = FNavigationSystem::InvalidLocation.field0_0x0._s_0.Y;
  (this->RaycastHitLocation).field0_0x0._s_0.X =
       FNavigationSystem::InvalidLocation.field0_0x0._s_0.X;
  (this->RaycastHitLocation).field0_0x0._s_0.Y = (double)uVar9;
  (this->RaycastHitLocation).field0_0x0._s_0.Z =
       FNavigationSystem::InvalidLocation.field0_0x0._s_0.Z;
  this->bNavDataIsReadyInRadius = false;
  this->bNavDataIsReadyToQueryTargetActor = false;
  this->bRaycastToQueryTargetActorResult = false;
  this->bRaycastToQueryTargetEndsInCorridor = false;
  this->OffsetFromCornersDistance = 0.0;
  (this->QueryingExtent).field0_0x0._s_0.X = 50.0;
  (this->QueryingExtent).field0_0x0._s_0.Y = 50.0;
  (this->QueryingExtent).field0_0x0._s_0.Z = 250.0;
  puVar3 = &this->field_0x364;
  this->bGatherDetailedInfo = 1;
  this->bDrawDistanceToWall = 0;
  this->bRequireNavigableEndLocation = 1;
  pFVar13 = ::FName::FName(&local_res8,L"CollisionCylinder");
  FVar7 = *pFVar13;
  pUVar14 = Z_Construct_UClass_UCapsuleComponent_NoRegister();
  pUVar15 = (UCapsuleComponent *)
            UObject::CreateDefaultSubobject((UObject *)this,FVar7,pUVar14,pUVar14,true,false);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar15 != (UCapsuleComponent *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)pUVar15);
  }
  (this->CapsuleComponent).field0_0x0.DebugPtr = pUVar15;
  fVar4 = (this->NavAgentProps).AgentRadius;
  fVar20 = (this->NavAgentProps).AgentHeight * __real_3f000000;
  fVar19 = fVar4;
  if (fVar4 <= 0.0) {
    fVar19 = 0.0;
  }
  if (fVar20 <= 0.0) {
    fVar20 = 0.0;
  }
  pUVar15->CapsuleRadius = fVar19;
  if (fVar20 <= fVar4) {
    fVar20 = fVar4;
  }
  pUVar15->CapsuleHalfHeight = fVar20;
  (**(code **)(pUVar15->_padding_ + 0x788))(pUVar15,UCollisionProfile::NoCollision_ProfileName,1);
  *(undefined1 *)((longlong)&((this->CapsuleComponent).field0_0x0.DebugPtr)->_padding_ + 7) = 0;
  USceneComponent::SetShouldUpdatePhysicsVolume
            ((USceneComponent *)(this->CapsuleComponent).field0_0x0.DebugPtr,true);
  UActorComponent::SetCanEverAffectNavigation
            ((UActorComponent *)(this->CapsuleComponent).field0_0x0.DebugPtr,false);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar15 = (this->CapsuleComponent).field0_0x0.DebugPtr, pUVar15 != (UCapsuleComponent *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)pUVar15);
  }
  this->_padding_ = (longlong)(this->CapsuleComponent).field0_0x0;
  pFVar13 = ::FName::FName(&local_res8,L"InvokerComponent");
  FVar7 = *pFVar13;
  pUVar14 = Z_Construct_UClass_UNavigationInvokerComponent_NoRegister();
  pUVar16 = (UNavigationInvokerComponent *)
            UObject::CreateDefaultSubobject((UObject *)this,FVar7,pUVar14,pUVar14,true,false);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar16 != (UNavigationInvokerComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar16);
  }
  (this->InvokerComponent).field0_0x0.DebugPtr = pUVar16;
  bVar5 = *(byte *)((longlong)&pUVar16->_padding_ + 2);
  local_88 = OnPathEvent;
  uStack_80 = 0;
  *(byte *)((longlong)&pUVar16->_padding_ + 2) = (this->field_0x2e0 << 3 ^ bVar5) & 8 ^ bVar5;
  local_68.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_60.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_68,(FWriteAccessScope *)&local_50);
  local_38 = &local_60;
  puVar17 = UE::Core::Private::DelegateAllocate(0x30,&local_60);
  if (puVar17 != (undefined8 *)0x0) {
    *puVar17 = &
               ___7__TCommonDelegateInstanceState___A6AXPEAUFNavigationPath__W4Type_ENavPathEvent___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar18 = FDelegateHandle::GenerateNewID();
    puVar17[2] = uVar18;
    *puVar17 = &
               ___7__TBaseUObjectMethodDelegateInstance__0A_VANavigationTestingActor____A6AXPEAUFNavigationPath__W4Type_ENavPathEvent___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar17[3] = 0;
    local_res8 = (FName)this;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar17 + 3),(FObjectPtr)&local_res8);
    puVar17[4] = local_88;
    puVar17[5] = CONCAT44(uStack_7c,uStack_80);
  }
  if (local_50.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_68,(FWriteAccessScope *)&local_88);
  iVar12 = local_60.DelegateSize;
  FVar11 = local_60.DelegateAllocator;
  local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_60.DelegateSize = 0;
  if (local_78 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)CONCAT44(uStack_7c,uStack_80),
               (FDestructionSentinel *)&local_88);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->PathObserver,
             (FWriteAccessScope *)&local_88);
  if ((*(int *)&(this->PathObserver).field_0x10 != 0) &&
     (puVar17 = *(undefined8 **)&(this->PathObserver).field_0x8, puVar17 != (undefined8 *)0x0)) {
    (**(code **)*puVar17)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&(this->PathObserver).field_0x8,0,0,0x10);
    *(undefined4 *)&(this->PathObserver).field_0x10 = 0;
  }
  pvVar8 = *(void **)&(this->PathObserver).field_0x8;
  if (pvVar8 != (void *)0x0) {
    FMemory::Free(pvVar8);
  }
  *(ForElementType<TAlignedBytes<16,16>_> *)&(this->PathObserver).field_0x8 = FVar11;
  *(int *)&(this->PathObserver).field_0x10 = iVar12;
  if (local_78 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)CONCAT44(uStack_7c,uStack_80),
               (FDestructionSentinel *)&local_88);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_68,(FWriteAccessScope *)&local_88);
  if ((local_60.DelegateSize != 0) &&
     (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_60.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_60,0,0,0x10);
    local_60.DelegateSize = 0;
  }
  if (local_78 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)CONCAT44(uStack_7c,uStack_80),
               (FDestructionSentinel *)&local_88);
  }
  if (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_60.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_68.AccessDetector);
  return this;
}

// ~ANavigationTestingActor @ 146dd9210

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall ANavigationTestingActor::~ANavigationTestingActor(ANavigationTestingActor *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&_vftable__for__AActor__;
  this->_padding_ = (longlong)&_vftable__for__INavAgentInterface__;
  this->_padding_ = (longlong)&_vftable__for__INavPathObserverInterface__;
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->PathObserver);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->LastPath).SharedReferenceCount.ReferenceController);
  pvVar1 = *(void **)&(this->NavAgentProps).PreferredNavData.field_0x10;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  this->_padding_ = (longlong)&___7INavPathObserverInterface__6B_;
  this->_padding_ = (longlong)&___7INavAgentInterface__6B_;
  AActor::~AActor((AActor *)this);
  return;
}

// BeginDestroy @ 146de1030

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall ANavigationTestingActor::BeginDestroy(ANavigationTestingActor *this)

{
  ANavigationTestingActor *pAVar1;
  ANavigationTestingActor *pAVar2;
  AActor *pAVar3;
  USceneComponent *pUVar4;
  TSharedPtr<FNavigationPath,1> *pTVar5;
  bool bVar6;
  undefined8 local_28;
  FSharedReferencer<1> FStack_20;
  undefined8 local_18;
  FSharedReferencer<1> FStack_10;
  
  local_28 = 0;
  FStack_20.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->LastPath != (TSharedPtr<FNavigationPath,1> *)&local_28) {
    (this->LastPath).Object = (FNavigationPath *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->LastPath).SharedReferenceCount,&FStack_20);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_20.ReferenceController);
  pAVar1 = (this->OtherActor).field0_0x0.DebugPtr;
  if (pAVar1 != (ANavigationTestingActor *)0x0) {
    pAVar2 = (pAVar1->OtherActor).field0_0x0.DebugPtr;
    if (pAVar2 == (ANavigationTestingActor *)0x0) {
      bVar6 = this == (ANavigationTestingActor *)0x0;
    }
    else {
      bVar6 = pAVar2 == this;
    }
    if (bVar6) {
      (pAVar1->OtherActor).field0_0x0.DebugPtr = (ANavigationTestingActor *)0x0;
      pAVar1 = (this->OtherActor).field0_0x0.DebugPtr;
      pTVar5 = &pAVar1->LastPath;
      local_18 = 0;
      FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      if (pTVar5 != (TSharedPtr<FNavigationPath,1> *)&local_18) {
        pTVar5->Object = (FNavigationPath *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&(pAVar1->LastPath).SharedReferenceCount,&FStack_10);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FStack_10.ReferenceController);
    }
  }
  pAVar3 = (this->QueryTargetActor).field0_0x0.DebugPtr;
  if ((pAVar3 != (AActor *)0x0) &&
     (pUVar4 = (pAVar3->RootComponent).field0_0x0.DebugPtr, pUVar4 != (USceneComponent *)0x0)) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar4->TransformUpdated,this)
    ;
  }
  AActor::BeginDestroy((AActor *)this);
  return;
}

// BuildPathFindingQuery @ 146de1260

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FPathFindingQuery * __thiscall
ANavigationTestingActor::BuildPathFindingQuery
          (ANavigationTestingActor *this,FPathFindingQuery *__return_storage_ptr__,
          ANavigationTestingActor *param_1)

{
  uint *puVar1;
  undefined4 uVar2;
  code *pcVar3;
  undefined8 uVar4;
  bool bVar5;
  FPathFindingQuery *pFVar6;
  TSharedPtr<FNavigationQueryFilter_const_,1> *pTVar7;
  TVector<double> *pTVar8;
  TVector<double> *pTVar9;
  UClass *local_res8;
  TSharedPtr<FNavigationPath,1> local_68;
  TSharedPtr<FNavigationQueryFilter_const_,1> local_58;
  undefined1 local_48 [24];
  undefined1 local_30 [24];
  
  if (param_1 == (ANavigationTestingActor *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Goal",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NavigationSystem\\Private\\NavigationTestingActor.cpp"
                       ,0x27b,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FPathFindingQuery *)(*pcVar3)();
      return pFVar6;
    }
  }
  if ((this->MyNavData).field0_0x0.DebugPtr != (ANavigationData *)0x0) {
    local_res8 = (this->FilterClass).Class.field0_0x0.DebugPtr;
    local_68.Object = (FNavigationPath *)0x0;
    local_68.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res8);
    }
    pTVar7 = UNavigationQueryFilter::GetQueryFilter
                       (&local_58,(this->MyNavData).field0_0x0.DebugPtr,(UObject *)this,
                        (TSubclassOf<UNavigationQueryFilter>)&local_res8);
    pTVar8 = (TVector<double> *)
             (**(code **)(param_1->_padding_ + 0x18))(&param_1->_padding_,local_48);
    pTVar9 = (TVector<double> *)(**(code **)(this->_padding_ + 0x18))(&this->_padding_,local_30);
    FPathFindingQuery::FPathFindingQuery
              (__return_storage_ptr__,(UObject *)this,(this->MyNavData).field0_0x0.DebugPtr,pTVar9,
               pTVar8,pTVar7,&local_68,__real_47efffffe0000000,this->bRequireNavigableEndLocation);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    return __return_storage_ptr__;
  }
  __return_storage_ptr__->_padding_ = 0;
  uVar4 = FNavigationSystem::InvalidLocation.field0_0x0._s_0.Y;
  __return_storage_ptr__->_padding_ = (longlong)FNavigationSystem::InvalidLocation.field0_0x0._s_0.X
  ;
  __return_storage_ptr__->_padding_ = uVar4;
  __return_storage_ptr__->_padding_ = (longlong)FNavigationSystem::InvalidLocation.field0_0x0._s_0.Z
  ;
  uVar4 = FNavigationSystem::InvalidLocation.field0_0x0._s_0.Y;
  __return_storage_ptr__->_padding_ = (longlong)FNavigationSystem::InvalidLocation.field0_0x0._s_0.X
  ;
  __return_storage_ptr__->_padding_ = uVar4;
  uVar4 = FNavigationSystem::InvalidLocation.field0_0x0._s_0.Z;
  puVar1 = (uint *)((longlong)&__return_storage_ptr__->_padding_ + 4);
  *puVar1 = *puVar1 | 3;
  __return_storage_ptr__->_padding_ = uVar4;
  *(byte *)&(__return_storage_ptr__->NavAgentProperties)._padding_ =
       (byte)(__return_storage_ptr__->NavAgentProperties)._padding_ & 0xe0;
  __return_storage_ptr__->_padding_ = 0x7fefffffffffffff;
  __return_storage_ptr__->_padding_ = 0;
  __return_storage_ptr__->_padding_ = 0;
  (__return_storage_ptr__->NavData).WeakPtr = (FWeakObjectPtr)0x0;
  (__return_storage_ptr__->PathInstanceToFill).Object = (FNavigationPath *)0x0;
  (__return_storage_ptr__->PathInstanceToFill).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (__return_storage_ptr__->NavAgentProperties).AgentRadius = -1.0;
  (__return_storage_ptr__->NavAgentProperties).AgentHeight = -1.0;
  (__return_storage_ptr__->NavAgentProperties).AgentStepHeight = -1.0;
  (__return_storage_ptr__->NavAgentProperties).NavWalkingSearchHeightScale = 0.5;
  *(undefined8 *)&(__return_storage_ptr__->NavAgentProperties).PreferredNavData = 0;
  *(undefined8 *)&(__return_storage_ptr__->NavAgentProperties).PreferredNavData.field_0x8 = 0;
  *(undefined8 *)&(__return_storage_ptr__->NavAgentProperties).PreferredNavData.field_0x10 = 0;
  *(undefined8 *)&(__return_storage_ptr__->NavAgentProperties).PreferredNavData.field_0x18 = 0;
  *(undefined4 *)&__return_storage_ptr__->_padding_ = 0;
  return __return_storage_ptr__;
}

// CheckIfNavDataIsReadyInRadius @ 146de37e0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall
ANavigationTestingActor::CheckIfNavDataIsReadyInRadius(ANavigationTestingActor *this)

{
  ARecastNavMesh *this_00;
  longlong lVar1;
  bool bVar2;
  UClass *pUVar3;
  TVector<double>_u_0 local_28;
  
  UpdateNavData(this);
  if ((this->MyNavData).field0_0x0.DebugPtr != (ANavigationData *)0x0) {
    pUVar3 = ARecastNavMesh::StaticClass();
    bVar2 = FObjectPtr::IsA((FObjectPtr *)&this->MyNavData,pUVar3);
    if ((bVar2) &&
       (this_00 = (ARecastNavMesh *)(this->MyNavData).field0_0x0.DebugPtr,
       this_00 != (ARecastNavMesh *)0x0)) {
      lVar1 = this->_padding_;
      local_28._0_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
      local_28._4_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
      local_28._8_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
      local_28._12_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
      local_28._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      if (lVar1 != 0) {
        local_28._0_4_ = *(undefined4 *)(lVar1 + 0x210);
        local_28._4_4_ = *(undefined4 *)(lVar1 + 0x214);
        local_28._8_4_ = *(undefined4 *)(lVar1 + 0x218);
        local_28._12_4_ = *(undefined4 *)(lVar1 + 0x21c);
        local_28._s_0.Z = *(double *)(lVar1 + 0x220);
      }
      bVar2 = ARecastNavMesh::HasCompleteDataInRadius
                        (this_00,(TVector<double> *)&local_28._s_0,
                         (double)this->RadiusUsedToValidateNavData);
      return bVar2;
    }
  }
  return false;
}

// CheckIfNavDataIsReadyToActor @ 146de3890

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall
ANavigationTestingActor::CheckIfNavDataIsReadyToActor(ANavigationTestingActor *this,AActor *param_1)

{
  ARecastNavMesh *this_00;
  USceneComponent *pUVar1;
  longlong lVar2;
  bool bVar3;
  UClass *pUVar4;
  TVector<double>_u_0 local_38;
  TVector<double>_u_0 local_20;
  
  UpdateNavData(this);
  if ((this->MyNavData).field0_0x0.DebugPtr != (ANavigationData *)0x0) {
    pUVar4 = ARecastNavMesh::StaticClass();
    bVar3 = FObjectPtr::IsA((FObjectPtr *)&this->MyNavData,pUVar4);
    if (((bVar3) &&
        (this_00 = (ARecastNavMesh *)(this->MyNavData).field0_0x0.DebugPtr,
        this_00 != (ARecastNavMesh *)0x0)) && (param_1 != (AActor *)0x0)) {
      pUVar1 = (param_1->RootComponent).field0_0x0.DebugPtr;
      local_38._0_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
      local_38._4_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
      local_38._8_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
      local_38._12_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
      local_38._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      if (pUVar1 != (USceneComponent *)0x0) {
        local_38._0_4_ = *(undefined4 *)(pUVar1->ComponentToWorld).Translation.XY.m128d_f64;
        local_38._4_4_ =
             *(undefined4 *)((longlong)(pUVar1->ComponentToWorld).Translation.XY.m128d_f64 + 4);
        local_38._8_4_ = *(undefined4 *)((pUVar1->ComponentToWorld).Translation.XY.m128d_f64 + 1);
        local_38._12_4_ =
             *(undefined4 *)((longlong)(pUVar1->ComponentToWorld).Translation.XY.m128d_f64 + 0xc);
        local_38._s_0.Z = (pUVar1->ComponentToWorld).Translation.ZW.m128d_f64[0];
      }
      lVar2 = this->_padding_;
      local_20._0_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
      local_20._4_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
      local_20._8_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
      local_20._12_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
      local_20._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      if (lVar2 != 0) {
        local_20._0_4_ = *(undefined4 *)(lVar2 + 0x210);
        local_20._4_4_ = *(undefined4 *)(lVar2 + 0x214);
        local_20._8_4_ = *(undefined4 *)(lVar2 + 0x218);
        local_20._12_4_ = *(undefined4 *)(lVar2 + 0x21c);
        local_20._s_0.Z = *(double *)(lVar2 + 0x220);
      }
      bVar3 = ARecastNavMesh::HasCompleteDataAroundSegment
                        (this_00,(TVector<double> *)&local_20._s_0,(TVector<double> *)&local_38._s_0
                         ,(double)this->RadiusUsedToValidateNavData);
      return bVar3;
    }
  }
  return false;
}

// CheckRaycastToActor @ 146de39a0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall
ANavigationTestingActor::CheckRaycastToActor
          (ANavigationTestingActor *this,AActor *param_1,TVector<double> *param_2,bool *param_3)

{
  ANavigationData *pAVar1;
  USceneComponent *pUVar2;
  longlong lVar3;
  _func___cdecl_bool_ANavigationData_ptr_TVector<double>_ptr_TVector<double>_ptr_TVector<double>_ptr_FNavigationRaycastAdditionalResults_ptr_TSharedPtr<FNavigationQueryFilter_const_,1>_UObject_ptr
  *p_Var4;
  code *pcVar5;
  undefined8 uVar6;
  FSharedReferencer<1> FVar7;
  bool bVar8;
  undefined1 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  FNavigationRaycastAdditionalResults local_res8 [8];
  UClass *local_res18;
  TSharedPtr<FNavigationQueryFilter_const_,1> local_a8;
  TSharedPtr<FNavigationQueryFilter_const_,1> local_98;
  TVector<double>_u_0 local_88;
  TVector<double>_u_0 local_70;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  double local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  double local_30;
  
  uVar6 = FNavigationSystem::InvalidLocation.field0_0x0._s_0.Y;
  (param_2->field0_0x0)._s_0.X = FNavigationSystem::InvalidLocation.field0_0x0._s_0.X;
  (param_2->field0_0x0)._s_0.Y = (double)uVar6;
  (param_2->field0_0x0)._s_0.Z = FNavigationSystem::InvalidLocation.field0_0x0._s_0.Z;
  UpdateNavData(this);
  if (((this->MyNavData).field0_0x0.DebugPtr != (ANavigationData *)0x0) &&
     (param_1 != (AActor *)0x0)) {
    local_res18 = (this->FilterClass).Class.field0_0x0.DebugPtr;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res18 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res18);
    }
    UNavigationQueryFilter::GetQueryFilter
              (&local_a8,(this->MyNavData).field0_0x0.DebugPtr,(UObject *)this,
               (TSubclassOf<UNavigationQueryFilter>)&local_res18);
    FVar7.ReferenceController = local_a8.SharedReferenceCount.ReferenceController;
    pAVar1 = (this->MyNavData).field0_0x0.DebugPtr;
    local_res8[0].bIsRayEndInCorridor = false;
    if (local_a8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    pUVar2 = (param_1->RootComponent).field0_0x0.DebugPtr;
    if (pUVar2 == (USceneComponent *)0x0) {
      uVar10 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
      uVar11 = (undefined4)
               ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20);
      local_88._0_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
      local_88._4_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
      local_88._8_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
      local_88._12_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
    }
    else {
      local_48 = (pUVar2->ComponentToWorld).Translation.ZW.m128d_f64[0];
      uVar10 = SUB84(local_48,0);
      uVar11 = (undefined4)((ulonglong)local_48 >> 0x20);
      local_58 = *(undefined4 *)(pUVar2->ComponentToWorld).Translation.XY.m128d_f64;
      uStack_54 = *(undefined4 *)((longlong)(pUVar2->ComponentToWorld).Translation.XY.m128d_f64 + 4)
      ;
      uStack_50 = *(undefined4 *)((pUVar2->ComponentToWorld).Translation.XY.m128d_f64 + 1);
      uStack_4c = *(undefined4 *)
                   ((longlong)(pUVar2->ComponentToWorld).Translation.XY.m128d_f64 + 0xc);
      local_88._0_4_ = local_58;
      local_88._4_4_ = uStack_54;
      local_88._8_4_ = uStack_50;
      local_88._12_4_ = uStack_4c;
    }
    lVar3 = this->_padding_;
    local_88._s_0.Z = (double)CONCAT44(uVar11,uVar10);
    local_70._0_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
    local_70._4_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
    local_70._8_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
    local_70._12_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
    local_70._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    if (lVar3 != 0) {
      local_70._s_0.Z = *(double *)(lVar3 + 0x220);
      local_70._0_4_ = *(undefined4 *)(lVar3 + 0x210);
      local_70._4_4_ = *(undefined4 *)(lVar3 + 0x214);
      local_70._8_4_ = *(undefined4 *)(lVar3 + 0x218);
      local_70._12_4_ = *(undefined4 *)(lVar3 + 0x21c);
      local_40 = local_70._0_4_;
      uStack_3c = local_70._4_4_;
      uStack_38 = local_70._8_4_;
      uStack_34 = local_70._12_4_;
      local_30 = local_70._s_0.Z;
    }
    if (pAVar1->RaycastImplementationWithAdditionalResults ==
        (_func___cdecl_bool_ANavigationData_ptr_TVector<double>_ptr_TVector<double>_ptr_TVector<double>_ptr_FNavigationRaycastAdditionalResults_ptr_TSharedPtr<FNavigationQueryFilter_const_,1>_UObject_ptr
         *)0x0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("RaycastImplementationWithAdditionalResults",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NavigationSystem\\Public\\NavigationData.h"
                         ,0x37d,L"");
      if (bVar8) {
        pcVar5 = (code *)swi(3);
        uVar9 = (*pcVar5)();
        return (bool)uVar9;
      }
    }
    p_Var4 = pAVar1->RaycastImplementationWithAdditionalResults;
    local_98.Object = local_a8.Object;
    local_98.SharedReferenceCount.ReferenceController = FVar7.ReferenceController;
    if (FVar7.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (FVar7.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(FVar7.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    bVar8 = (*p_Var4)(pAVar1,(TVector<double> *)&local_70._s_0,(TVector<double> *)&local_88._s_0,
                      param_2,local_res8,&local_98,(UObject *)this);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar7.ReferenceController);
    *param_3 = local_res8[0].bIsRayEndInCorridor;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_a8.SharedReferenceCount.ReferenceController);
    return bVar8;
  }
  return false;
}

// FindClosestWallLocation @ 146df3830

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

TVector<double> * __thiscall
ANavigationTestingActor::FindClosestWallLocation
          (ANavigationTestingActor *this,TVector<double> *__return_storage_ptr__)

{
  ARecastNavMesh *this_00;
  longlong lVar1;
  undefined8 uVar2;
  bool bVar3;
  UClass *pUVar4;
  TSharedPtr<FNavigationQueryFilter_const_,1> *pTVar5;
  UClass *local_res8;
  TSharedPtr<FNavigationQueryFilter_const_,1> local_48;
  TVector<double>_u_0 local_38;
  TVector<double>_u_0 local_20;
  
  if ((this->MyNavData).field0_0x0.DebugPtr != (ANavigationData *)0x0) {
    pUVar4 = ARecastNavMesh::StaticClass();
    bVar3 = FObjectPtr::IsA((FObjectPtr *)&this->MyNavData,pUVar4);
    if ((bVar3) &&
       (this_00 = (ARecastNavMesh *)(this->MyNavData).field0_0x0.DebugPtr,
       this_00 != (ARecastNavMesh *)0x0)) {
      local_res8 = (this->FilterClass).Class.field0_0x0.DebugPtr;
      local_38._s_0.X = FNavigationSystem::InvalidLocation.field0_0x0._s_0.X;
      local_38._s_0.Y = FNavigationSystem::InvalidLocation.field0_0x0._s_0.Y;
      local_38._s_0.Z = FNavigationSystem::InvalidLocation.field0_0x0._s_0.Z;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UClass *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)local_res8);
      }
      pTVar5 = UNavigationQueryFilter::GetQueryFilter
                         (&local_48,(this->MyNavData).field0_0x0.DebugPtr,(UObject *)this,
                          (TSubclassOf<UNavigationQueryFilter>)&local_res8);
      lVar1 = this->_padding_;
      local_20._0_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
      local_20._4_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
      local_20._8_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
      local_20._12_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
      local_20._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      if (lVar1 != 0) {
        local_20._0_4_ = *(undefined4 *)(lVar1 + 0x210);
        local_20._4_4_ = *(undefined4 *)(lVar1 + 0x214);
        local_20._8_4_ = *(undefined4 *)(lVar1 + 0x218);
        local_20._12_4_ = *(undefined4 *)(lVar1 + 0x21c);
        local_20._s_0.Z = *(double *)(lVar1 + 0x220);
      }
      ARecastNavMesh::FindDistanceToWall
                (this_00,(TVector<double> *)&local_20._s_0,pTVar5,__real_47efffffe0000000,
                 (TVector<double> *)&local_38._s_0);
      (__return_storage_ptr__->field0_0x0)._s_0.X = local_38._s_0.X;
      (__return_storage_ptr__->field0_0x0)._s_0.Y = local_38._s_0.Y;
      (__return_storage_ptr__->field0_0x0)._s_0.Z = local_38._s_0.Z;
      return __return_storage_ptr__;
    }
  }
  uVar2 = FNavigationSystem::InvalidLocation.field0_0x0._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.X = FNavigationSystem::InvalidLocation.field0_0x0._s_0.X
  ;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)uVar2;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = FNavigationSystem::InvalidLocation.field0_0x0._s_0.Z
  ;
  return __return_storage_ptr__;
}

// GetMoveGoalReachTest @ 146e07cd0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
ANavigationTestingActor::GetMoveGoalReachTest
          (ANavigationTestingActor *this,AActor *param_1,TVector<double> *param_2,
          TVector<double> *param_3,float *param_4,float *param_5)

{
  return;
}

// GetNavAgentLocation @ 146e07d50

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

TVector<double> * __thiscall
ANavigationTestingActor::GetNavAgentLocation
          (ANavigationTestingActor *this,TVector<double> *__return_storage_ptr__)

{
  longlong lVar1;
  double local_28;
  double dStack_20;
  double local_18;
  
  lVar1 = *(longlong *)&this[-1].NavAgentProps.PreferredNavData.field_0x18;
  if (lVar1 == 0) {
    local_28 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    dStack_20 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    local_18 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  }
  else {
    local_28 = *(double *)(lVar1 + 0x210);
    dStack_20 = *(double *)(lVar1 + 0x218);
    local_18 = *(double *)(lVar1 + 0x220);
  }
  (__return_storage_ptr__->field0_0x0)._s_0.X = local_28;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dStack_20;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = local_18;
  return __return_storage_ptr__;
}

// GetNavAgentPropertiesRef @ 146e07e10

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FNavAgentProperties * __thiscall
ANavigationTestingActor::GetNavAgentPropertiesRef(ANavigationTestingActor *this)

{
  return (FNavAgentProperties *)&this->_padding_;
}

// GetPrivateStaticClass @ 146e0e780

UClass * __cdecl ANavigationTestingActor::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ANavigationTestingActor.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/NavigationSystem",L"NavigationTestingActor",
               &Z_Registration_Info_UClass_ANavigationTestingActor.InnerSingleton,
               StaticRegisterNativesANavigationTestingActor,0x420,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<ANavigationTestingActor>,
               InternalVTableHelperCtorCaller<ANavigationTestingActor>,local_res8,
               AActor::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ANavigationTestingActor.InnerSingleton;
}

// OnPathEvent @ 146e19900

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
ANavigationTestingActor::OnPathEvent
          (ANavigationTestingActor *this,FNavigationPath *param_1,Type param_2)

{
  undefined1 *puVar1;
  ANavigationTestingActor *pAVar2;
  code *pcVar3;
  bool bVar4;
  UClass *pUVar5;
  UWorld *pUVar6;
  AActor *pAVar7;
  ANavigationTestingActor *pAVar8;
  longlong lVar9;
  FString *pFVar10;
  wchar_t *pwVar11;
  ANavigationTestingActor *pAVar12;
  wchar_t *pwVar13;
  UClass *pUStackX_8;
  undefined8 uStack_b8;
  FSharedReferencer<1> FStack_b0;
  TActorIteratorBase<TActorIterator<ANavigationTestingActor>_> TStack_a8;
  FString FStack_48;
  FString FStack_38;
  FString FStack_28;
  
  if (((param_1 == (FNavigationPath *)0x0) || (param_1 != (this->LastPath).Object)) ||
     (param_2 != Invalidated)) {
    return;
  }
  this->bPathExist = 0;
  this->bPathSearchOutOfNodes = 0;
  this->bPathIsPartial = 0;
  this->PathfindingTime = 0.0;
  this->PathCost = 0.0;
  uStack_b8 = 0;
  FStack_b0.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->LastPath != (TSharedPtr<FNavigationPath,1> *)&uStack_b8) {
    (this->LastPath).Object = (FNavigationPath *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->LastPath).SharedReferenceCount,&FStack_b0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_b0.ReferenceController);
  this->PathfindingSteps = 0;
  UpdateNavData(this);
  if (this->bSearchStart == 0) {
    pAVar12 = (this->OtherActor).field0_0x0.DebugPtr;
    if (pAVar12 == (ANavigationTestingActor *)0x0) {
      return;
    }
    if (pAVar12->bSearchStart == 0) {
      return;
    }
  }
  else if ((this->OtherActor).field0_0x0.DebugPtr == (ANavigationTestingActor *)0x0) {
    pUVar5 = GetPrivateStaticClass();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar5);
    }
    pUVar6 = AActor::GetWorld((AActor *)this);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar5);
    }
    TStack_a8.Flags = OnlyActiveLevels|SkipPendingKill;
    TStack_a8.State.bIsSet = false;
    pUStackX_8 = pUVar5;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar5);
    }
    FActorIteratorState::FActorIteratorState
              (&TStack_a8.State.TypedValue,pUVar6,(TSubclassOf<AActor>)&pUStackX_8);
    TStack_a8.State.bIsSet = true;
    pAVar12 = (ANavigationTestingActor *)0x0;
LAB_146e2e97c:
    TActorIteratorBase<TActorIterator<ANavigationTestingActor>_>::operator++(&TStack_a8);
    if ((TStack_a8.State.bIsSet == false) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x1bd,
                           L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                          ), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (TStack_a8.State.TypedValue.ReachedEnd == false) goto code_r0x000146e2e9bb;
    goto LAB_146e2ea65;
  }
LAB_146e2ead3:
  pAVar12 = (this->OtherActor).field0_0x0.DebugPtr;
  if (pAVar12 != (ANavigationTestingActor *)0x0) {
    if (this->bSearchStart == 0) {
      lVar9 = pAVar12->_padding_;
      pAVar8 = pAVar12;
    }
    else {
      lVar9 = this->_padding_;
      pAVar8 = this;
      this = pAVar12;
    }
    (**(code **)(lVar9 + 0x760))(pAVar8,this);
  }
  return;
code_r0x000146e2e9bb:
  if ((TStack_a8.State.bIsSet == false) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pAVar7 = FActorIteratorState::GetActorChecked(&TStack_a8.State.TypedValue);
  if (pAVar7 == (AActor *)0x0) {
    pFVar10 = GetTypeName<ANavigationTestingActor>(&FStack_28);
    if ((pFVar10->Data).ArrayNum == 0) {
      pwVar11 = L"";
    }
    else {
      pwVar11 = (wchar_t *)(pFVar10->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar11);
  }
  pAVar8 = Cast<ANavigationTestingActor,AActor>(pAVar7);
  if (pAVar8 == (ANavigationTestingActor *)0x0) {
    pFVar10 = GetTypeName<ANavigationTestingActor>(&FStack_48);
    pwVar11 = L"";
    if ((pFVar10->Data).ArrayNum == 0) {
      pwVar13 = L"";
    }
    else {
      pwVar13 = (wchar_t *)(pFVar10->Data).AllocatorInstance.Data;
    }
    pFVar10 = GetFullNameForCastLogError<AActor>(&FStack_38,pAVar7);
    if ((pFVar10->Data).ArrayNum != 0) {
      pwVar11 = (wchar_t *)(pFVar10->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(pwVar11,pwVar13);
  }
  if (pAVar8 != this) {
    pAVar2 = (pAVar8->OtherActor).field0_0x0.DebugPtr;
    if (pAVar2 == (ANavigationTestingActor *)0x0) {
      bVar4 = this == (ANavigationTestingActor *)0x0;
    }
    else {
      bVar4 = pAVar2 == this;
    }
    if (bVar4) {
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)pAVar8);
      }
      (this->OtherActor).field0_0x0.DebugPtr = pAVar8;
LAB_146e2ea65:
      if (TStack_a8.State.bIsSet != false) {
        UWorld::RemoveOnActorSpawnedHandler
                  (TStack_a8.State.TypedValue.CurrentWorld,
                   TStack_a8.State.TypedValue.ActorSpawnedDelegateHandle);
        if (TStack_a8.State.TypedValue.SpawnedActorArray.AllocatorInstance.Data !=
            (FScriptContainerElement *)0x0) {
          FMemory::Free(TStack_a8.State.TypedValue.SpawnedActorArray.AllocatorInstance.Data);
        }
        if (TStack_a8.State.TypedValue.ActorArray.AllocatorInstance.Data !=
            (FScriptContainerElement *)0x0) {
          FMemory::Free(TStack_a8.State.TypedValue.ActorArray.AllocatorInstance.Data);
        }
      }
      if (((this->OtherActor).field0_0x0.DebugPtr == (ANavigationTestingActor *)0x0) &&
         (pAVar12 != (ANavigationTestingActor *)0x0)) {
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)pAVar12);
        }
        (this->OtherActor).field0_0x0.DebugPtr = pAVar12;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        (pAVar12->OtherActor).field0_0x0.DebugPtr = this;
      }
      goto LAB_146e2ead3;
    }
    if ((this->bSearchStart != 0) && (pAVar2 == (ANavigationTestingActor *)0x0)) {
      pAVar12 = pAVar8;
    }
  }
  goto LAB_146e2e97c;
}

// OnPathFailed @ 146e19920

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
ANavigationTestingActor::OnPathFailed
          (ANavigationTestingActor *this,INavigationPathGenerator *param_1)

{
  return;
}

// OnPathInvalid @ 146e19960

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
ANavigationTestingActor::OnPathInvalid
          (ANavigationTestingActor *this,INavigationPathGenerator *param_1)

{
  return;
}

// OnPathUpdated @ 146e199a0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
ANavigationTestingActor::OnPathUpdated
          (ANavigationTestingActor *this,INavigationPathGenerator *param_1)

{
  return;
}

// OnQueryTargetActorTransformUpdated @ 146e19a20

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
ANavigationTestingActor::OnQueryTargetActorTransformUpdated
          (ANavigationTestingActor *this,USceneComponent *param_1,EUpdateTransformFlags param_2,
          ETeleportType param_3)

{
  TObjectPtr<AActor>_u_0 TVar1;
  ARecastNavMesh *this_00;
  longlong lVar2;
  ANavigationData *pAVar3;
  _func___cdecl_bool_ANavigationData_ptr_TVector<double>_ptr_TVector<double>_ptr_TVector<double>_ptr_FNavigationRaycastAdditionalResults_ptr_TSharedPtr<FNavigationQueryFilter_const_,1>_UObject_ptr
  *p_Var4;
  code *pcVar5;
  undefined8 uVar6;
  FSharedReferencer<1> FVar7;
  bool bVar8;
  UClass *pUVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  FNavigationRaycastAdditionalResults aFStackX_8 [8];
  UClass *pUStackX_10;
  TSharedPtr<FNavigationQueryFilter_const_,1> TStack_108;
  TSharedPtr<FNavigationQueryFilter_const_,1> TStack_f8;
  TVector<double>_u_0 TStack_e8;
  TVector<double>_u_0 TStack_d0;
  TVector<double>_u_0 TStack_b8;
  TVector<double>_u_0 TStack_a0;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 uStack_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  double dStack_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 uStack_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  double dStack_30;
  
  if (this->bDrawIfNavDataIsReadyToQueryTargetActor == 0) goto LAB_146e2ee73;
  TVar1 = (this->QueryTargetActor).field0_0x0;
  UpdateNavData(this);
  if ((this->MyNavData).field0_0x0.DebugPtr == (ANavigationData *)0x0) {
LAB_146e2ee6b:
    bVar8 = false;
  }
  else {
    pUVar9 = ARecastNavMesh::StaticClass();
    bVar8 = FObjectPtr::IsA((FObjectPtr *)&this->MyNavData,pUVar9);
    if (((!bVar8) ||
        (this_00 = (ARecastNavMesh *)(this->MyNavData).field0_0x0.DebugPtr,
        this_00 == (ARecastNavMesh *)0x0)) || (TVar1.DebugPtr == (AActor *)0x0)) goto LAB_146e2ee6b;
    lVar2 = *(longlong *)((longlong)TVar1 + 0x1b8);
    if (lVar2 == 0) {
      uVar10 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
      uVar11 = (undefined4)
               ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20);
      TStack_e8._0_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
      TStack_e8._4_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
      TStack_e8._8_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
      TStack_e8._12_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
    }
    else {
      uStack_78 = *(undefined8 *)(lVar2 + 0x220);
      uVar10 = (undefined4)uStack_78;
      uVar11 = (undefined4)((ulonglong)uStack_78 >> 0x20);
      uStack_88 = *(undefined4 *)(lVar2 + 0x210);
      uStack_84 = *(undefined4 *)(lVar2 + 0x214);
      uStack_80 = *(undefined4 *)(lVar2 + 0x218);
      uStack_7c = *(undefined4 *)(lVar2 + 0x21c);
      TStack_e8._0_4_ = uStack_88;
      TStack_e8._4_4_ = uStack_84;
      TStack_e8._8_4_ = uStack_80;
      TStack_e8._12_4_ = uStack_7c;
    }
    lVar2 = this->_padding_;
    TStack_e8._s_0.Z = (double)CONCAT44(uVar11,uVar10);
    TStack_d0._0_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
    TStack_d0._4_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
    TStack_d0._8_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
    TStack_d0._12_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
    TStack_d0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    if (lVar2 != 0) {
      TStack_d0._s_0.Z = *(double *)(lVar2 + 0x220);
      TStack_d0._0_4_ = *(undefined4 *)(lVar2 + 0x210);
      TStack_d0._4_4_ = *(undefined4 *)(lVar2 + 0x214);
      TStack_d0._8_4_ = *(undefined4 *)(lVar2 + 0x218);
      TStack_d0._12_4_ = *(undefined4 *)(lVar2 + 0x21c);
      uStack_70 = TStack_d0._0_4_;
      uStack_6c = TStack_d0._4_4_;
      uStack_68 = TStack_d0._8_4_;
      uStack_64 = TStack_d0._12_4_;
      dStack_60 = TStack_d0._s_0.Z;
    }
    bVar8 = ARecastNavMesh::HasCompleteDataAroundSegment
                      (this_00,(TVector<double> *)&TStack_d0._s_0,(TVector<double> *)&TStack_e8._s_0
                       ,(double)this->RadiusUsedToValidateNavData);
  }
  this->bNavDataIsReadyToQueryTargetActor = bVar8;
LAB_146e2ee73:
  uVar6 = FNavigationSystem::InvalidLocation.field0_0x0._s_0.Y;
  if (this->bDrawRaycastToQueryTargetActor != 0) {
    TVar1 = (this->QueryTargetActor).field0_0x0;
    (this->RaycastHitLocation).field0_0x0._s_0.X =
         FNavigationSystem::InvalidLocation.field0_0x0._s_0.X;
    (this->RaycastHitLocation).field0_0x0._s_0.Y = (double)uVar6;
    (this->RaycastHitLocation).field0_0x0._s_0.Z =
         FNavigationSystem::InvalidLocation.field0_0x0._s_0.Z;
    UpdateNavData(this);
    if (((this->MyNavData).field0_0x0.DebugPtr == (ANavigationData *)0x0) ||
       (TVar1.DebugPtr == (AActor *)0x0)) {
      bVar8 = false;
    }
    else {
      pUStackX_10 = (this->FilterClass).Class.field0_0x0.DebugPtr;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUStackX_10 != (UClass *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUStackX_10);
      }
      UNavigationQueryFilter::GetQueryFilter
                (&TStack_108,(this->MyNavData).field0_0x0.DebugPtr,(UObject *)this,
                 (TSubclassOf<UNavigationQueryFilter>)&pUStackX_10);
      FVar7.ReferenceController = TStack_108.SharedReferenceCount.ReferenceController;
      pAVar3 = (this->MyNavData).field0_0x0.DebugPtr;
      aFStackX_8[0].bIsRayEndInCorridor = false;
      if (TStack_108.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (TStack_108.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(TStack_108.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      lVar2 = *(longlong *)((longlong)TVar1 + 0x1b8);
      if (lVar2 == 0) {
        uVar10 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
        uVar11 = (undefined4)
                 ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20);
        TStack_b8._0_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
        TStack_b8._4_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
        TStack_b8._8_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
        TStack_b8._12_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
      }
      else {
        uStack_48 = *(undefined8 *)(lVar2 + 0x220);
        uVar10 = (undefined4)uStack_48;
        uVar11 = (undefined4)((ulonglong)uStack_48 >> 0x20);
        uStack_58 = *(undefined4 *)(lVar2 + 0x210);
        uStack_54 = *(undefined4 *)(lVar2 + 0x214);
        uStack_50 = *(undefined4 *)(lVar2 + 0x218);
        uStack_4c = *(undefined4 *)(lVar2 + 0x21c);
        TStack_b8._0_4_ = uStack_58;
        TStack_b8._4_4_ = uStack_54;
        TStack_b8._8_4_ = uStack_50;
        TStack_b8._12_4_ = uStack_4c;
      }
      lVar2 = this->_padding_;
      TStack_b8._s_0.Z = (double)CONCAT44(uVar11,uVar10);
      TStack_a0._0_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
      TStack_a0._4_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
      TStack_a0._8_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
      TStack_a0._12_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
      TStack_a0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      if (lVar2 != 0) {
        TStack_a0._s_0.Z = *(double *)(lVar2 + 0x220);
        TStack_a0._0_4_ = *(undefined4 *)(lVar2 + 0x210);
        TStack_a0._4_4_ = *(undefined4 *)(lVar2 + 0x214);
        TStack_a0._8_4_ = *(undefined4 *)(lVar2 + 0x218);
        TStack_a0._12_4_ = *(undefined4 *)(lVar2 + 0x21c);
        uStack_40 = TStack_a0._0_4_;
        uStack_3c = TStack_a0._4_4_;
        uStack_38 = TStack_a0._8_4_;
        uStack_34 = TStack_a0._12_4_;
        dStack_30 = TStack_a0._s_0.Z;
      }
      if (pAVar3->RaycastImplementationWithAdditionalResults ==
          (_func___cdecl_bool_ANavigationData_ptr_TVector<double>_ptr_TVector<double>_ptr_TVector<double>_ptr_FNavigationRaycastAdditionalResults_ptr_TSharedPtr<FNavigationQueryFilter_const_,1>_UObject_ptr
           *)0x0) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("RaycastImplementationWithAdditionalResults",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NavigationSystem\\Public\\NavigationData.h"
                           ,0x37d,L"");
        if (bVar8) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      p_Var4 = pAVar3->RaycastImplementationWithAdditionalResults;
      TStack_f8.Object = TStack_108.Object;
      TStack_f8.SharedReferenceCount.ReferenceController = FVar7.ReferenceController;
      if (FVar7.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (FVar7.ReferenceController)->SharedReferenceCount =
             (atomic<int>)((int)(FVar7.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      bVar8 = (*p_Var4)(pAVar3,(TVector<double> *)&TStack_a0._s_0,(TVector<double> *)&TStack_b8._s_0
                        ,&this->RaycastHitLocation,aFStackX_8,&TStack_f8,(UObject *)this);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FVar7.ReferenceController);
      this->bRaycastToQueryTargetEndsInCorridor = aFStackX_8[0].bIsRayEndInCorridor;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (TStack_108.SharedReferenceCount.ReferenceController);
    }
    this->bRaycastToQueryTargetActorResult = bVar8;
  }
  return;
}

// SearchPathTo @ 146e21fe0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
ANavigationTestingActor::SearchPathTo
          (ANavigationTestingActor *this,ANavigationTestingActor *param_1)

{
  int iVar1;
  undefined4 uVar2;
  INavigationQueryFilterInterface *pIVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  UWorld *pUVar7;
  UClass *pUVar8;
  INavigationDataInterface *pIVar9;
  longlong lVar10;
  FNavigationPath *pFVar11;
  TDelegate<void___cdecl(FNavigationPath_*,ENavPathEvent::Type),FDefaultDelegateUserPolicy> *this_00
  ;
  byte bVar12;
  FNavigationQueryFilter *pFVar13;
  UNavigationSystemV1 *this_01;
  float fVar14;
  double dVar15;
  double dVar16;
  LARGE_INTEGER local_res10;
  LARGE_INTEGER local_res18 [2];
  FSharedReferencer<1> local_230;
  FPathFindingResult local_228;
  TSharedPtr<FNavigationQueryFilter,1> local_208;
  undefined8 local_1f8;
  FSharedReferencer<1> FStack_1f0;
  undefined8 local_1e8;
  FSharedReferencer<1> FStack_1e0;
  FNavigationPath *local_1d8;
  TReferenceControllerBase<1> *pTStack_1d0;
  longlong local_1c8;
  TVector<double>_u_0 local_1c0;
  TVector<double>_u_0 local_1a8;
  FNavigationQueryFilter *local_190;
  FSharedReferencer<1> local_188;
  double local_180;
  undefined4 local_178;
  uint local_174;
  FWeakObjectPtr local_170;
  FNavigationPath *local_168;
  TReferenceControllerBase<1> *local_160;
  undefined1 local_158 [64];
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  FPathFindingQuery local_f8;
  undefined1 local_50 [40];
  
  if (param_1 == (ANavigationTestingActor *)0x0) {
    return;
  }
  pUVar7 = AActor::GetWorld((AActor *)this);
  if (pUVar7 == (UWorld *)0x0) {
    return;
  }
  this_01 = (UNavigationSystemV1 *)(pUVar7->NavigationSystem).field0_0x0.DebugPtr;
  if (this_01 != (UNavigationSystemV1 *)0x0) {
    pUVar8 = Z_Construct_UClass_UNavigationSystemV1_NoRegister();
    iVar1 = (int)pUVar8->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&this_01->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&this_01->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar8->_padding_)) goto LAB_146e2204c;
  }
  this_01 = (UNavigationSystemV1 *)0x0;
LAB_146e2204c:
  if (((this_01 != (UNavigationSystemV1 *)0x0) &&
      (pIVar9 = UNavigationSystemV1::GetNavDataForActor((AActor *)this),
      pIVar9 != (INavigationDataInterface *)0x0)) &&
     (lVar10 = (**(code **)((longlong)*pIVar9 + 8))(pIVar9), lVar10 != 0)) {
    pUVar8 = Z_Construct_UClass_ANavigationData_NoRegister();
    iVar1 = (int)pUVar8->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)(lVar10 + 0x10) + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x30) + (longlong)iVar1 * 8)
        == &pUVar8->_padding_)) {
      QueryPerformanceCounter(&local_res10);
      dVar16 = (double)local_res10.QuadPart * FGenericPlatformTime::SecondsPerCycle +
               __real_4170000000000000;
      (**(code **)(this->_padding_ + 0x768))(this,&local_1c8,param_1);
      if (local_190 == (FNavigationQueryFilter *)0x0) {
        local_230.ReferenceController = *(TReferenceControllerBase<1> **)(lVar10 + 0x420);
        pFVar13 = *(FNavigationQueryFilter **)(lVar10 + 0x418);
        if (local_230.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (local_230.ReferenceController)->SharedReferenceCount =
               (atomic<int>)((int)(local_230.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_100 = 0;
        local_108 = 0;
      }
      else {
        if (local_188.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (local_188.ReferenceController)->SharedReferenceCount =
               (atomic<int>)((int)(local_188.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_110 = 0;
        local_118 = 0;
        local_230.ReferenceController = local_188.ReferenceController;
        pFVar13 = local_190;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      if ((pFVar13 == (FNavigationQueryFilter *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if ((pFVar13->QueryFilterImpl).Object != (INavigationQueryFilterInterface *)0x0) {
        if (this->bBacktracking != 0) {
          FNavigationQueryFilter::GetCopy(pFVar13,&local_208);
          if ((local_208.Object == (FNavigationQueryFilter *)0x0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          pFVar13 = local_208.Object;
          if ((((local_208.Object)->QueryFilterImpl).Object ==
               (INavigationQueryFilterInterface *)0x0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          pIVar3 = (pFVar13->QueryFilterImpl).Object;
          (**(code **)((longlong)*pIVar3 + 0x38))(pIVar3,1);
          FStack_1f0.ReferenceController = local_208.SharedReferenceCount.ReferenceController;
          if (local_208.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_208.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_208.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
                 1);
            UNLOCK();
          }
          local_190 = local_208.Object;
          local_1f8 = 0;
          SharedPointerInternals::FSharedReferencer<1>::operator=(&local_188,&FStack_1f0);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (FStack_1f0.ReferenceController);
          FStack_1e0.ReferenceController = local_208.SharedReferenceCount.ReferenceController;
          if (local_208.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_208.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_208.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
                 1);
            UNLOCK();
          }
          local_1e8 = 0;
          SharedPointerInternals::FSharedReferencer<1>::operator=(&local_230,&FStack_1e0);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (FStack_1e0.ReferenceController);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_208.SharedReferenceCount.ReferenceController);
          pFVar13 = local_208.Object;
        }
        if ((pFVar13 == (FNavigationQueryFilter *)0x0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if (((pFVar13->QueryFilterImpl).Object == (INavigationQueryFilterInterface *)0x0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        fVar14 = (float)(**(code **)((longlong)*(pFVar13->QueryFilterImpl).Object + 0x48))();
        local_180 = FPathFindingQuery::ComputeCostLimitFromHeuristic
                              ((TVector<double> *)&local_1c0._s_0,(TVector<double> *)&local_1a8._s_0
                               ,(double)fVar14,(double)this->CostLimitFactor,
                               (double)this->MinimumCostLimit);
        local_f8._padding_ = local_1c8;
        local_f8._padding_ = (longlong)local_190;
        local_f8._padding_ = (longlong)local_1c0._s_0.Z;
        local_f8._padding_ = (longlong)local_1a8._s_0.Z;
        local_f8._padding_ = (longlong)local_188.ReferenceController;
        local_f8._padding_ = (longlong)local_1c0._s_0.X;
        local_f8._padding_ = (longlong)local_1c0._s_0.Y;
        local_f8._padding_ = (longlong)local_1a8._s_0.X;
        local_f8._padding_ = (longlong)local_1a8._s_0.Y;
        if (local_188.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (local_188.ReferenceController)->SharedReferenceCount =
               (atomic<int>)((int)(local_188.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_f8._padding_._0_4_ = local_178;
        local_f8._padding_._4_4_ = local_f8._padding_._4_4_ & 0xfffffffc | local_174 & 3;
        local_f8.NavData.WeakPtr = local_170;
        local_f8.PathInstanceToFill.Object = local_168;
        local_f8.PathInstanceToFill.SharedReferenceCount.ReferenceController = local_160;
        if (local_160 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          local_160->SharedReferenceCount = (atomic<int>)((int)local_160->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_f8._padding_ = (longlong)local_180;
        FNavAgentProperties::FNavAgentProperties
                  (&local_f8.NavAgentProperties,(FNavAgentProperties *)local_158);
        UNavigationSystemV1::FindPathSync
                  (this_01,&local_228,&this->NavAgentProps,&local_f8,
                   this->bUseHierarchicalPathfinding);
        dVar15 = FWindowsPlatformTime::Seconds();
        this->PathfindingTime = (float)((dVar15 - dVar16) * __real_412e848000000000);
        if (((local_228.Result == Error) || (local_228.Path.Object == (FNavigationPath *)0x0)) ||
           (uVar6 = 2, (local_228.Path.Object)->bIsPartial == 0)) {
          uVar6 = 0;
        }
        this->bPathIsPartial = 0;
        *(uint *)&this->field_0x390 =
             uVar6 | *(uint *)&this->field_0x390 & 0xfffffffe | (uint)(local_228.Result == Success);
        if (local_228.Result == Success) {
          if ((local_228.Path.Object == (FNavigationPath *)0x0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          bVar12 = (byte)(*(uint *)&(local_228.Path.Object)->field_0xa0 >> 3);
        }
        else {
          bVar12 = 0;
        }
        *(uint *)&this->field_0x390 =
             ((uint)bVar12 << 2 ^ *(uint *)&this->field_0x390) & 4 ^ *(uint *)&this->field_0x390;
        if (local_228.Path.SharedReferenceCount.ReferenceController !=
            (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (local_228.Path.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_228.Path.SharedReferenceCount.ReferenceController)->SharedReferenceCount
               + 1);
          UNLOCK();
        }
        local_1d8 = (this->LastPath).Object;
        pTStack_1d0 = (this->LastPath).SharedReferenceCount.ReferenceController;
        (this->LastPath).Object = local_228.Path.Object;
        (this->LastPath).SharedReferenceCount.ReferenceController =
             local_228.Path.SharedReferenceCount.ReferenceController;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (pTStack_1d0);
        if (this->bPathExist == 0) {
          dVar16 = 0.0;
        }
        else {
          if ((local_228.Path.Object == (FNavigationPath *)0x0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          dVar16 = (double)(**(code **)((local_228.Path.Object)->_padding_ + 0x48))
                                     (local_228.Path.Object,0);
        }
        this->PathCost = dVar16;
        if (this->bPathExist != 0) {
          pFVar11 = TSharedPtr<FNavigationPath,1>::operator->(&this->LastPath);
          this_00 = TDelegate<void___cdecl(FNavigationPath_*,enum_ENavPathEvent::Type),FDefaultDelegateUserPolicy>
                    ::
                    TDelegate<void___cdecl(FNavigationPath_*,enum_ENavPathEvent::Type),FDefaultDelegateUserPolicy>
                              (local_50,&this->PathObserver);
          TMulticastDelegateRegistration<void___cdecl(FNavigationPath_*,enum_ENavPathEvent::Type),FDefaultDelegateUserPolicy>
          ::Add(&pFVar11->ObserverDelegate,
                (TDelegate<void___cdecl(FNavigationPath_*,ENavPathEvent::Type),FDefaultDelegateUserPolicy>
                 *)&local_res18[0].s);
          TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                    ((TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
          if (0.0 < this->OffsetFromCornersDistance) {
            FNavMeshPath::OffsetFromCorners
                      ((FNavMeshPath *)(this->LastPath).Object,
                       (double)this->OffsetFromCornersDistance);
          }
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_228.Path.SharedReferenceCount.ReferenceController);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_230.ReferenceController);
      if ((void *)local_158._40_8_ != (void *)0x0) {
        FMemory::Free((void *)local_158._40_8_);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_160)
      ;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_188.ReferenceController);
    }
  }
  return;
}

// StaticRegisterNativesANavigationTestingActor @ 146e29dc0

void __cdecl ANavigationTestingActor::StaticRegisterNativesANavigationTestingActor(void)

{
  return;
}

// UpdateLocalQueries @ 146e2e220

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall ANavigationTestingActor::UpdateLocalQueries(ANavigationTestingActor *this)

{
  ARecastNavMesh *pAVar1;
  longlong lVar2;
  bool bVar3;
  UClass *pUVar4;
  TSharedPtr<FNavigationQueryFilter_const_,1> *pTVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  UClass *local_res8;
  TSharedPtr<FNavigationQueryFilter_const_,1> local_48;
  TVector<double>_u_0 local_38;
  TVector<double>_u_0 local_20;
  
  if (this->bDrawDistanceToWall != 0) {
    if ((this->MyNavData).field0_0x0.DebugPtr == (ANavigationData *)0x0) {
LAB_146e2e33a:
      uVar10 = SUB84(FNavigationSystem::InvalidLocation.field0_0x0._s_0.Z,0);
      uVar11 = (undefined4)((ulonglong)FNavigationSystem::InvalidLocation.field0_0x0._16_8_ >> 0x20)
      ;
      uVar6 = FNavigationSystem::InvalidLocation.field0_0x0._0_4_;
      uVar7 = FNavigationSystem::InvalidLocation.field0_0x0._4_4_;
      uVar8 = FNavigationSystem::InvalidLocation.field0_0x0._8_4_;
      uVar9 = FNavigationSystem::InvalidLocation.field0_0x0._12_4_;
    }
    else {
      pUVar4 = ARecastNavMesh::StaticClass();
      bVar3 = FObjectPtr::IsA((FObjectPtr *)&this->MyNavData,pUVar4);
      if ((!bVar3) ||
         (pAVar1 = (ARecastNavMesh *)(this->MyNavData).field0_0x0.DebugPtr,
         pAVar1 == (ARecastNavMesh *)0x0)) goto LAB_146e2e33a;
      local_38._s_0.X =
           (double)CONCAT44(FNavigationSystem::InvalidLocation.field0_0x0._4_4_,
                            FNavigationSystem::InvalidLocation.field0_0x0._0_4_);
      local_38._s_0.Y =
           (double)CONCAT44(FNavigationSystem::InvalidLocation.field0_0x0._12_4_,
                            FNavigationSystem::InvalidLocation.field0_0x0._8_4_);
      local_res8 = (this->FilterClass).Class.field0_0x0.DebugPtr;
      local_38._s_0.Z = (double)FNavigationSystem::InvalidLocation.field0_0x0._16_8_;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UClass *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)local_res8);
      }
      pTVar5 = UNavigationQueryFilter::GetQueryFilter
                         (&local_48,(this->MyNavData).field0_0x0.DebugPtr,(UObject *)this,
                          (TSubclassOf<UNavigationQueryFilter>)&local_res8);
      lVar2 = this->_padding_;
      local_20._0_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
      local_20._4_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
      local_20._8_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
      local_20._12_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
      local_20._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      if (lVar2 != 0) {
        local_20._0_4_ = *(undefined4 *)(lVar2 + 0x210);
        local_20._4_4_ = *(undefined4 *)(lVar2 + 0x214);
        local_20._8_4_ = *(undefined4 *)(lVar2 + 0x218);
        local_20._12_4_ = *(undefined4 *)(lVar2 + 0x21c);
        local_20._s_0.Z = *(double *)(lVar2 + 0x220);
      }
      ARecastNavMesh::FindDistanceToWall
                (pAVar1,(TVector<double> *)&local_20._s_0,pTVar5,__real_47efffffe0000000,
                 (TVector<double> *)&local_38._s_0);
      uVar10 = SUB84(local_38._s_0.Z,0);
      uVar11 = (undefined4)((ulonglong)local_38._16_8_ >> 0x20);
      uVar6 = local_38._0_4_;
      uVar7 = local_38._4_4_;
      uVar8 = local_38._8_4_;
      uVar9 = local_38._12_4_;
    }
    *(undefined4 *)&(this->ClosestWallLocation).field0_0x0 = uVar6;
    *(undefined4 *)((longlong)&(this->ClosestWallLocation).field0_0x0 + 4) = uVar7;
    *(undefined4 *)((longlong)&(this->ClosestWallLocation).field0_0x0 + 8) = uVar8;
    *(undefined4 *)((longlong)&(this->ClosestWallLocation).field0_0x0 + 0xc) = uVar9;
    (this->ClosestWallLocation).field0_0x0._s_0.Z = (double)CONCAT44(uVar11,uVar10);
  }
  if (this->bDrawIfNavDataIsReadyInRadius == 0) {
    return;
  }
  UpdateNavData(this);
  if ((this->MyNavData).field0_0x0.DebugPtr != (ANavigationData *)0x0) {
    pUVar4 = ARecastNavMesh::StaticClass();
    bVar3 = FObjectPtr::IsA((FObjectPtr *)&this->MyNavData,pUVar4);
    if ((bVar3) &&
       (pAVar1 = (ARecastNavMesh *)(this->MyNavData).field0_0x0.DebugPtr,
       pAVar1 != (ARecastNavMesh *)0x0)) {
      lVar2 = this->_padding_;
      local_20._0_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
      local_20._4_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
      local_20._8_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
      local_20._12_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
      local_20._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      if (lVar2 != 0) {
        local_20._0_4_ = *(undefined4 *)(lVar2 + 0x210);
        local_20._4_4_ = *(undefined4 *)(lVar2 + 0x214);
        local_20._8_4_ = *(undefined4 *)(lVar2 + 0x218);
        local_20._12_4_ = *(undefined4 *)(lVar2 + 0x21c);
        local_20._s_0.Z = *(double *)(lVar2 + 0x220);
      }
      bVar3 = ARecastNavMesh::HasCompleteDataInRadius
                        (pAVar1,(TVector<double> *)&local_20._s_0,
                         (double)this->RadiusUsedToValidateNavData);
      goto LAB_146e2e3f6;
    }
  }
  bVar3 = false;
LAB_146e2e3f6:
  this->bNavDataIsReadyInRadius = bVar3;
  return;
}

// UpdateNavData @ 146e2e410

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall ANavigationTestingActor::UpdateNavData(ANavigationTestingActor *this)

{
  int iVar1;
  longlong lVar2;
  UWorld *pUVar3;
  UClass *pUVar4;
  ANavigationData *pAVar5;
  UNavigationSystemBase *pUVar6;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  double local_18;
  
  if ((this->MyNavData).field0_0x0.DebugPtr != (ANavigationData *)0x0) {
    return;
  }
  pUVar3 = AActor::GetWorld((AActor *)this);
  if (pUVar3 == (UWorld *)0x0) {
    return;
  }
  pUVar3 = AActor::GetWorld((AActor *)this);
  if ((pUVar3->NavigationSystem).field0_0x0.DebugPtr == (UNavigationSystemBase *)0x0) {
    return;
  }
  pUVar3 = AActor::GetWorld((AActor *)this);
  if ((pUVar3 != (UWorld *)0x0) &&
     (pUVar6 = (pUVar3->NavigationSystem).field0_0x0.DebugPtr,
     pUVar6 != (UNavigationSystemBase *)0x0)) {
    pUVar4 = Z_Construct_UClass_UNavigationSystemV1_NoRegister();
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar6->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar6->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar4->_padding_)) goto LAB_146e2e48e;
  }
  pUVar6 = (UNavigationSystemBase *)0x0;
LAB_146e2e48e:
  if (pUVar6 != (UNavigationSystemBase *)0x0) {
    lVar2 = this->_padding_;
    local_28 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
    uStack_24 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
    uStack_20 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
    uStack_1c = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
    local_18 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    if (lVar2 != 0) {
      local_28 = *(undefined4 *)(lVar2 + 0x210);
      uStack_24 = *(undefined4 *)(lVar2 + 0x214);
      uStack_20 = *(undefined4 *)(lVar2 + 0x218);
      uStack_1c = *(undefined4 *)(lVar2 + 0x21c);
      local_18 = *(double *)(lVar2 + 0x220);
    }
    pAVar5 = (ANavigationData *)
             (**(code **)(*(longlong *)pUVar6 + 0x350))
                       (pUVar6,&this->NavAgentProps,&local_28,&UE::Math::TVector<double>::ZeroVector
                       );
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pAVar5 != (ANavigationData *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)pAVar5);
    }
    (this->MyNavData).field0_0x0.DebugPtr = pAVar5;
  }
  return;
}

// UpdatePathfinding @ 146e2e850

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall ANavigationTestingActor::UpdatePathfinding(ANavigationTestingActor *this)

{
  undefined1 *puVar1;
  ANavigationTestingActor *pAVar2;
  code *pcVar3;
  bool bVar4;
  UClass *pUVar5;
  UWorld *pUVar6;
  AActor *pAVar7;
  ANavigationTestingActor *pAVar8;
  longlong lVar9;
  FString *pFVar10;
  wchar_t *pwVar11;
  ANavigationTestingActor *pAVar12;
  wchar_t *pwVar13;
  UClass *local_res8;
  undefined8 local_b8;
  FSharedReferencer<1> FStack_b0;
  TActorIteratorBase<TActorIterator<ANavigationTestingActor>_> local_a8;
  FString local_48;
  FString local_38;
  FString local_28;
  
  this->bPathExist = 0;
  this->bPathSearchOutOfNodes = 0;
  this->bPathIsPartial = 0;
  this->PathfindingTime = 0.0;
  this->PathCost = 0.0;
  local_b8 = 0;
  FStack_b0.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->LastPath != (TSharedPtr<FNavigationPath,1> *)&local_b8) {
    (this->LastPath).Object = (FNavigationPath *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->LastPath).SharedReferenceCount,&FStack_b0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_b0.ReferenceController);
  this->PathfindingSteps = 0;
  UpdateNavData(this);
  if (this->bSearchStart == 0) {
    pAVar12 = (this->OtherActor).field0_0x0.DebugPtr;
    if (pAVar12 == (ANavigationTestingActor *)0x0) {
      return;
    }
    if (pAVar12->bSearchStart == 0) {
      return;
    }
  }
  else if ((this->OtherActor).field0_0x0.DebugPtr == (ANavigationTestingActor *)0x0) {
    pUVar5 = GetPrivateStaticClass();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar5);
    }
    pUVar6 = AActor::GetWorld((AActor *)this);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar5);
    }
    local_a8.Flags = OnlyActiveLevels|SkipPendingKill;
    local_a8.State.bIsSet = false;
    local_res8 = pUVar5;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar5);
    }
    FActorIteratorState::FActorIteratorState
              (&local_a8.State.TypedValue,pUVar6,(TSubclassOf<AActor>)&local_res8);
    local_a8.State.bIsSet = true;
    pAVar12 = (ANavigationTestingActor *)0x0;
LAB_146e2e97c:
    TActorIteratorBase<TActorIterator<ANavigationTestingActor>_>::operator++(&local_a8);
    if ((local_a8.State.bIsSet == false) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x1bd,
                           L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                          ), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (local_a8.State.TypedValue.ReachedEnd == false) goto code_r0x000146e2e9bb;
    goto LAB_146e2ea65;
  }
LAB_146e2ead3:
  pAVar12 = (this->OtherActor).field0_0x0.DebugPtr;
  if (pAVar12 != (ANavigationTestingActor *)0x0) {
    if (this->bSearchStart == 0) {
      lVar9 = pAVar12->_padding_;
      pAVar8 = pAVar12;
    }
    else {
      lVar9 = this->_padding_;
      pAVar8 = this;
      this = pAVar12;
    }
    (**(code **)(lVar9 + 0x760))(pAVar8,this);
  }
  return;
code_r0x000146e2e9bb:
  if ((local_a8.State.bIsSet == false) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pAVar7 = FActorIteratorState::GetActorChecked(&local_a8.State.TypedValue);
  if (pAVar7 == (AActor *)0x0) {
    pFVar10 = GetTypeName<ANavigationTestingActor>(&local_28);
    if ((pFVar10->Data).ArrayNum == 0) {
      pwVar11 = L"";
    }
    else {
      pwVar11 = (wchar_t *)(pFVar10->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar11);
  }
  pAVar8 = Cast<ANavigationTestingActor,AActor>(pAVar7);
  if (pAVar8 == (ANavigationTestingActor *)0x0) {
    pFVar10 = GetTypeName<ANavigationTestingActor>(&local_48);
    pwVar11 = L"";
    if ((pFVar10->Data).ArrayNum == 0) {
      pwVar13 = L"";
    }
    else {
      pwVar13 = (wchar_t *)(pFVar10->Data).AllocatorInstance.Data;
    }
    pFVar10 = GetFullNameForCastLogError<AActor>(&local_38,pAVar7);
    if ((pFVar10->Data).ArrayNum != 0) {
      pwVar11 = (wchar_t *)(pFVar10->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(pwVar11,pwVar13);
  }
  if (pAVar8 != this) {
    pAVar2 = (pAVar8->OtherActor).field0_0x0.DebugPtr;
    if (pAVar2 == (ANavigationTestingActor *)0x0) {
      bVar4 = this == (ANavigationTestingActor *)0x0;
    }
    else {
      bVar4 = pAVar2 == this;
    }
    if (bVar4) {
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)pAVar8);
      }
      (this->OtherActor).field0_0x0.DebugPtr = pAVar8;
LAB_146e2ea65:
      if (local_a8.State.bIsSet != false) {
        UWorld::RemoveOnActorSpawnedHandler
                  (local_a8.State.TypedValue.CurrentWorld,
                   local_a8.State.TypedValue.ActorSpawnedDelegateHandle);
        if (local_a8.State.TypedValue.SpawnedActorArray.AllocatorInstance.Data !=
            (FScriptContainerElement *)0x0) {
          FMemory::Free(local_a8.State.TypedValue.SpawnedActorArray.AllocatorInstance.Data);
        }
        if (local_a8.State.TypedValue.ActorArray.AllocatorInstance.Data !=
            (FScriptContainerElement *)0x0) {
          FMemory::Free(local_a8.State.TypedValue.ActorArray.AllocatorInstance.Data);
        }
      }
      if (((this->OtherActor).field0_0x0.DebugPtr == (ANavigationTestingActor *)0x0) &&
         (pAVar12 != (ANavigationTestingActor *)0x0)) {
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)pAVar12);
        }
        (this->OtherActor).field0_0x0.DebugPtr = pAVar12;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        (pAVar12->OtherActor).field0_0x0.DebugPtr = this;
      }
      goto LAB_146e2ead3;
    }
    if ((this->bSearchStart != 0) && (pAVar2 == (ANavigationTestingActor *)0x0)) {
      pAVar12 = pAVar8;
    }
  }
  goto LAB_146e2e97c;
}

// UpdateTargetActorQueries @ 146e2ed60

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall ANavigationTestingActor::UpdateTargetActorQueries(ANavigationTestingActor *this)

{
  TObjectPtr<AActor>_u_0 TVar1;
  ARecastNavMesh *this_00;
  longlong lVar2;
  ANavigationData *pAVar3;
  _func___cdecl_bool_ANavigationData_ptr_TVector<double>_ptr_TVector<double>_ptr_TVector<double>_ptr_FNavigationRaycastAdditionalResults_ptr_TSharedPtr<FNavigationQueryFilter_const_,1>_UObject_ptr
  *p_Var4;
  code *pcVar5;
  undefined8 uVar6;
  FSharedReferencer<1> FVar7;
  bool bVar8;
  UClass *pUVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  FNavigationRaycastAdditionalResults local_res8 [8];
  UClass *local_res10;
  TSharedPtr<FNavigationQueryFilter_const_,1> local_108;
  TSharedPtr<FNavigationQueryFilter_const_,1> local_f8;
  TVector<double>_u_0 local_e8;
  TVector<double>_u_0 local_d0;
  TVector<double>_u_0 local_b8;
  TVector<double>_u_0 local_a0;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  double local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  double local_30;
  
  if (this->bDrawIfNavDataIsReadyToQueryTargetActor == 0) goto LAB_146e2ee73;
  TVar1 = (this->QueryTargetActor).field0_0x0;
  UpdateNavData(this);
  if ((this->MyNavData).field0_0x0.DebugPtr == (ANavigationData *)0x0) {
LAB_146e2ee6b:
    bVar8 = false;
  }
  else {
    pUVar9 = ARecastNavMesh::StaticClass();
    bVar8 = FObjectPtr::IsA((FObjectPtr *)&this->MyNavData,pUVar9);
    if (((!bVar8) ||
        (this_00 = (ARecastNavMesh *)(this->MyNavData).field0_0x0.DebugPtr,
        this_00 == (ARecastNavMesh *)0x0)) || (TVar1.DebugPtr == (AActor *)0x0)) goto LAB_146e2ee6b;
    lVar2 = *(longlong *)((longlong)TVar1 + 0x1b8);
    if (lVar2 == 0) {
      uVar10 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
      uVar11 = (undefined4)
               ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20);
      local_e8._0_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
      local_e8._4_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
      local_e8._8_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
      local_e8._12_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
    }
    else {
      local_78 = *(undefined8 *)(lVar2 + 0x220);
      uVar10 = (undefined4)local_78;
      uVar11 = (undefined4)((ulonglong)local_78 >> 0x20);
      local_88 = *(undefined4 *)(lVar2 + 0x210);
      uStack_84 = *(undefined4 *)(lVar2 + 0x214);
      uStack_80 = *(undefined4 *)(lVar2 + 0x218);
      uStack_7c = *(undefined4 *)(lVar2 + 0x21c);
      local_e8._0_4_ = local_88;
      local_e8._4_4_ = uStack_84;
      local_e8._8_4_ = uStack_80;
      local_e8._12_4_ = uStack_7c;
    }
    lVar2 = this->_padding_;
    local_e8._s_0.Z = (double)CONCAT44(uVar11,uVar10);
    local_d0._0_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
    local_d0._4_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
    local_d0._8_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
    local_d0._12_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
    local_d0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    if (lVar2 != 0) {
      local_d0._s_0.Z = *(double *)(lVar2 + 0x220);
      local_d0._0_4_ = *(undefined4 *)(lVar2 + 0x210);
      local_d0._4_4_ = *(undefined4 *)(lVar2 + 0x214);
      local_d0._8_4_ = *(undefined4 *)(lVar2 + 0x218);
      local_d0._12_4_ = *(undefined4 *)(lVar2 + 0x21c);
      local_70 = local_d0._0_4_;
      uStack_6c = local_d0._4_4_;
      uStack_68 = local_d0._8_4_;
      uStack_64 = local_d0._12_4_;
      local_60 = local_d0._s_0.Z;
    }
    bVar8 = ARecastNavMesh::HasCompleteDataAroundSegment
                      (this_00,(TVector<double> *)&local_d0._s_0,(TVector<double> *)&local_e8._s_0,
                       (double)this->RadiusUsedToValidateNavData);
  }
  this->bNavDataIsReadyToQueryTargetActor = bVar8;
LAB_146e2ee73:
  uVar6 = FNavigationSystem::InvalidLocation.field0_0x0._s_0.Y;
  if (this->bDrawRaycastToQueryTargetActor != 0) {
    TVar1 = (this->QueryTargetActor).field0_0x0;
    (this->RaycastHitLocation).field0_0x0._s_0.X =
         FNavigationSystem::InvalidLocation.field0_0x0._s_0.X;
    (this->RaycastHitLocation).field0_0x0._s_0.Y = (double)uVar6;
    (this->RaycastHitLocation).field0_0x0._s_0.Z =
         FNavigationSystem::InvalidLocation.field0_0x0._s_0.Z;
    UpdateNavData(this);
    if (((this->MyNavData).field0_0x0.DebugPtr == (ANavigationData *)0x0) ||
       (TVar1.DebugPtr == (AActor *)0x0)) {
      bVar8 = false;
    }
    else {
      local_res10 = (this->FilterClass).Class.field0_0x0.DebugPtr;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res10 != (UClass *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)local_res10);
      }
      UNavigationQueryFilter::GetQueryFilter
                (&local_108,(this->MyNavData).field0_0x0.DebugPtr,(UObject *)this,
                 (TSubclassOf<UNavigationQueryFilter>)&local_res10);
      FVar7.ReferenceController = local_108.SharedReferenceCount.ReferenceController;
      pAVar3 = (this->MyNavData).field0_0x0.DebugPtr;
      local_res8[0].bIsRayEndInCorridor = false;
      if (local_108.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (local_108.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_108.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      lVar2 = *(longlong *)((longlong)TVar1 + 0x1b8);
      if (lVar2 == 0) {
        uVar10 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
        uVar11 = (undefined4)
                 ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20);
        local_b8._0_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
        local_b8._4_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
        local_b8._8_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
        local_b8._12_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
      }
      else {
        local_48 = *(undefined8 *)(lVar2 + 0x220);
        uVar10 = (undefined4)local_48;
        uVar11 = (undefined4)((ulonglong)local_48 >> 0x20);
        local_58 = *(undefined4 *)(lVar2 + 0x210);
        uStack_54 = *(undefined4 *)(lVar2 + 0x214);
        uStack_50 = *(undefined4 *)(lVar2 + 0x218);
        uStack_4c = *(undefined4 *)(lVar2 + 0x21c);
        local_b8._0_4_ = local_58;
        local_b8._4_4_ = uStack_54;
        local_b8._8_4_ = uStack_50;
        local_b8._12_4_ = uStack_4c;
      }
      lVar2 = this->_padding_;
      local_b8._s_0.Z = (double)CONCAT44(uVar11,uVar10);
      local_a0._0_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
      local_a0._4_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
      local_a0._8_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
      local_a0._12_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
      local_a0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      if (lVar2 != 0) {
        local_a0._s_0.Z = *(double *)(lVar2 + 0x220);
        local_a0._0_4_ = *(undefined4 *)(lVar2 + 0x210);
        local_a0._4_4_ = *(undefined4 *)(lVar2 + 0x214);
        local_a0._8_4_ = *(undefined4 *)(lVar2 + 0x218);
        local_a0._12_4_ = *(undefined4 *)(lVar2 + 0x21c);
        local_40 = local_a0._0_4_;
        uStack_3c = local_a0._4_4_;
        uStack_38 = local_a0._8_4_;
        uStack_34 = local_a0._12_4_;
        local_30 = local_a0._s_0.Z;
      }
      if (pAVar3->RaycastImplementationWithAdditionalResults ==
          (_func___cdecl_bool_ANavigationData_ptr_TVector<double>_ptr_TVector<double>_ptr_TVector<double>_ptr_FNavigationRaycastAdditionalResults_ptr_TSharedPtr<FNavigationQueryFilter_const_,1>_UObject_ptr
           *)0x0) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("RaycastImplementationWithAdditionalResults",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NavigationSystem\\Public\\NavigationData.h"
                           ,0x37d,L"");
        if (bVar8) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      p_Var4 = pAVar3->RaycastImplementationWithAdditionalResults;
      local_f8.Object = local_108.Object;
      local_f8.SharedReferenceCount.ReferenceController = FVar7.ReferenceController;
      if (FVar7.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (FVar7.ReferenceController)->SharedReferenceCount =
             (atomic<int>)((int)(FVar7.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      bVar8 = (*p_Var4)(pAVar3,(TVector<double> *)&local_a0._s_0,(TVector<double> *)&local_b8._s_0,
                        &this->RaycastHitLocation,local_res8,&local_f8,(UObject *)this);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FVar7.ReferenceController);
      this->bRaycastToQueryTargetEndsInCorridor = local_res8[0].bIsRayEndInCorridor;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_108.SharedReferenceCount.ReferenceController);
    }
    this->bRaycastToQueryTargetActorResult = bVar8;
  }
  return;
}

// _getUObject @ 146e2f980

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

UObject * __thiscall ANavigationTestingActor::_getUObject(ANavigationTestingActor *this)

{
  return (UObject *)&this[-1]._padding_;
}

// _getUObject`adjustor{8}' @ 146e2f990

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* [thunk]:public: virtual class UObject * __ptr64 __cdecl
   ANavigationTestingActor::_getUObject`adjustor{8}' (void)const __ptr64 */

UObject * __thiscall
ANavigationTestingActor::_getUObject_adjustor_8__(ANavigationTestingActor *this)

{
  UObject *pUVar1;
  
  pUVar1 = _getUObject((ANavigationTestingActor *)&this[-1].PathObserver.field_0x10);
  return (UObject *)pUVar1;
}

