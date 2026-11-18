// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosSolverEngine
// Functions: 31

// StaticClass @ 146300ae0

UClass * __cdecl AChaosSolverActor::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AChaosSolverActor.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ChaosSolverEngine",L"ChaosSolverActor",
               &Z_Registration_Info_UClass_AChaosSolverActor.InnerSingleton,
               StaticRegisterNativesAChaosSolverActor,0x4c0,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<AChaosSolverActor>,
               InternalVTableHelperCtorCaller<AChaosSolverActor>,local_res8,AActor::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AChaosSolverActor.InnerSingleton;
}

// AChaosSolverActor @ 146308dc0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

AChaosSolverActor * __thiscall
AChaosSolverActor::AChaosSolverActor(AChaosSolverActor *this,FVTableHelper *param_1)

{
  AActor::AActor((AActor *)this,param_1);
  IDataflowPhysicsSolverInterface::IDataflowPhysicsSolverInterface
            ((IDataflowPhysicsSolverInterface *)&this->_padding_);
  this->_padding_ = (longlong)&_vftable__for__AActor__;
  this->_padding_ = (longlong)&_vftable__for__IDataflowPhysicsSolverInterface__;
  FChaosSolverConfiguration::FChaosSolverConfiguration(&this->Properties);
  (this->CollisionFilterSettings_DEPRECATED).FilterEnabled = false;
  (this->CollisionFilterSettings_DEPRECATED).MinMass = 0.0;
  (this->CollisionFilterSettings_DEPRECATED).MinSpeed = 0.0;
  (this->CollisionFilterSettings_DEPRECATED).MinImpulse = 0.0;
  (this->BreakingFilterSettings_DEPRECATED).FilterEnabled = false;
  (this->BreakingFilterSettings_DEPRECATED).MinMass = 0.0;
  (this->BreakingFilterSettings_DEPRECATED).MinSpeed = 0.0;
  (this->BreakingFilterSettings_DEPRECATED).MinVolume = 0.0;
  (this->TrailingFilterSettings_DEPRECATED).FilterEnabled = false;
  (this->TrailingFilterSettings_DEPRECATED).MinMass = 0.0;
  (this->TrailingFilterSettings_DEPRECATED).MinSpeed = 0.0;
  (this->TrailingFilterSettings_DEPRECATED).MinVolume = 0.0;
  (this->ChaosDebugSubstepControl).bPause = false;
  (this->ChaosDebugSubstepControl).bSubstep = false;
  (this->ChaosDebugSubstepControl).bStep = false;
  (this->SpriteComponent).field0_0x0.DebugPtr = (UBillboardComponent *)0x0;
  (this->SimulationAsset).DataflowAsset.field0_0x0.DebugPtr = (UDataflow *)0x0;
  *(undefined8 *)&(this->SimulationAsset).SimulationGroups.Elements = 0;
  *(undefined8 *)&(this->SimulationAsset).SimulationGroups.Elements.field_0x8 = 0;
  *(undefined8 *)&(this->SimulationAsset).SimulationGroups.Elements.field_0x20 = 0;
  *(undefined4 *)&(this->SimulationAsset).SimulationGroups.Elements.field_0x28 = 0;
  *(undefined4 *)&(this->SimulationAsset).SimulationGroups.Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->SimulationAsset).SimulationGroups.Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->SimulationAsset).SimulationGroups.Elements.field_0x34 = 0;
  (this->SimulationAsset).SimulationGroups.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->SimulationAsset).SimulationGroups.HashSize = 0;
  (this->PhysScene).Object = (FPhysScene_Chaos *)0x0;
  (this->PhysScene).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  FDataflowPhysicsSolverProxy::FDataflowPhysicsSolverProxy
            ((FDataflowPhysicsSolverProxy *)&this->RigidSolverProxy);
  (this->RigidSolverProxy)._padding_ = (longlong)&___7FDataflowRigidSolverProxy__6B_;
  (this->RigidSolverProxy).PushDatas.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RigidSolverProxy).PushDatas.ArrayNum = 0;
  (this->RigidSolverProxy).PushDatas.ArrayMax = 0;
  (this->RigidSolverProxy).Solver = (FPBDRigidsSolver *)0x0;
  (this->GameplayEventDispatcherComponent).field0_0x0.DebugPtr =
       (UChaosGameplayEventDispatcher *)0x0;
  return this;
}

// AChaosSolverActor @ 146308f00

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

AChaosSolverActor * __thiscall
AChaosSolverActor::AChaosSolverActor(AChaosSolverActor *this,FObjectInitializer *param_1)

{
  byte *pbVar1;
  FPBDRigidsSolver *pFVar2;
  FName FVar3;
  code *pcVar4;
  bool bVar5;
  FPhysScene_Chaos *this_00;
  FPhysScene_Chaos *pFVar6;
  AChaosSolverActor *pAVar7;
  FName *pFVar8;
  UClass *pUVar9;
  UObject *pUVar10;
  UChaosGameplayEventDispatcher *pUVar11;
  FName local_res8 [2];
  TRawPtrProxy<FPhysScene_Chaos> local_res18;
  FName local_res20;
  FName local_38 [2];
  
  AActor::AActor((AActor *)this,param_1);
  IDataflowPhysicsSolverInterface::IDataflowPhysicsSolverInterface
            ((IDataflowPhysicsSolverInterface *)&this->_padding_);
  this->_padding_ = (longlong)&_vftable__for__AActor__;
  this->_padding_ = (longlong)&_vftable__for__IDataflowPhysicsSolverInterface__;
  FChaosSolverConfiguration::FChaosSolverConfiguration(&this->Properties);
  pFVar6 = (FPhysScene_Chaos *)0x0;
  this->TimeStepMultiplier_DEPRECATED = 1.0;
  (this->CollisionFilterSettings_DEPRECATED).MinMass = 0.0;
  (this->CollisionFilterSettings_DEPRECATED).MinSpeed = 0.0;
  (this->CollisionFilterSettings_DEPRECATED).MinImpulse = 0.0;
  (this->BreakingFilterSettings_DEPRECATED).FilterEnabled = false;
  (this->BreakingFilterSettings_DEPRECATED).MinMass = 0.0;
  (this->BreakingFilterSettings_DEPRECATED).MinSpeed = 0.0;
  (this->BreakingFilterSettings_DEPRECATED).MinVolume = 0.0;
  (this->TrailingFilterSettings_DEPRECATED).FilterEnabled = false;
  (this->TrailingFilterSettings_DEPRECATED).MinMass = 0.0;
  (this->TrailingFilterSettings_DEPRECATED).MinSpeed = 0.0;
  (this->TrailingFilterSettings_DEPRECATED).MinVolume = 0.0;
  this->FloorHeight = 0.0;
  (this->ChaosDebugSubstepControl).bPause = false;
  (this->ChaosDebugSubstepControl).bSubstep = false;
  (this->ChaosDebugSubstepControl).bStep = false;
  (this->SpriteComponent).field0_0x0.DebugPtr = (UBillboardComponent *)0x0;
  (this->SimulationAsset).DataflowAsset.field0_0x0.DebugPtr = (UDataflow *)0x0;
  *(undefined8 *)&(this->SimulationAsset).SimulationGroups.Elements = 0;
  *(undefined8 *)&(this->SimulationAsset).SimulationGroups.Elements.field_0x8 = 0;
  *(undefined8 *)&(this->SimulationAsset).SimulationGroups.Elements.field_0x20 = 0;
  this->CollisionIterations_DEPRECATED = 1;
  this->PushOutIterations_DEPRECATED = 3;
  this->PushOutPairIterations_DEPRECATED = 2;
  this->ClusterConnectionFactor_DEPRECATED = 1.0;
  this->ClusterUnionConnectionType_DEPRECATED = Chaos_DelaunayTriangulation;
  this->DoGenerateCollisionData_DEPRECATED = true;
  (this->CollisionFilterSettings_DEPRECATED).FilterEnabled = false;
  this->DoGenerateBreakingData_DEPRECATED = true;
  this->DoGenerateTrailingData_DEPRECATED = true;
  this->MassScale_DEPRECATED = 1.0;
  this->bHasFloor = true;
  *(undefined4 *)&(this->SimulationAsset).SimulationGroups.Elements.field_0x28 = 0;
  *(undefined4 *)&(this->SimulationAsset).SimulationGroups.Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->SimulationAsset).SimulationGroups.Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->SimulationAsset).SimulationGroups.Elements.field_0x34 = 0;
  (this->SimulationAsset).SimulationGroups.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->SimulationAsset).SimulationGroups.HashSize = 0;
  (this->PhysScene).Object = (FPhysScene_Chaos *)0x0;
  (this->PhysScene).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  FDataflowPhysicsSolverProxy::FDataflowPhysicsSolverProxy
            ((FDataflowPhysicsSolverProxy *)&this->RigidSolverProxy);
  (this->RigidSolverProxy).Solver = (FPBDRigidsSolver *)0x0;
  (this->RigidSolverProxy)._padding_ = (longlong)&___7FDataflowRigidSolverProxy__6B_;
  (this->RigidSolverProxy).PushDatas.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RigidSolverProxy).PushDatas.ArrayNum = 0;
  (this->RigidSolverProxy).PushDatas.ArrayMax = 0;
  (this->GameplayEventDispatcherComponent).field0_0x0.DebugPtr =
       (UChaosGameplayEventDispatcher *)0x0;
  this->Proxy = (FSingleParticlePhysicsProxy *)0x0;
  if ((this->_padding_ & 0x10) == 0) {
    this_00 = ::operator_new(0x428);
    if (this_00 != (FPhysScene_Chaos *)0x0) {
      ::FName::FName(local_res8,L"Solver Actor Physics");
      pFVar6 = FPhysScene_Chaos::FPhysScene_Chaos(this_00,(AActor *)this,local_res8);
    }
    local_res18.Object = pFVar6;
    TSharedPtr<FPhysScene_Chaos,1>::operator=<FPhysScene_Chaos>(&this->PhysScene,&local_res18);
    if (((this->PhysScene).Object == (FPhysScene_Chaos *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      pAVar7 = (AChaosSolverActor *)(*pcVar4)();
      return pAVar7;
    }
    pFVar2 = (FPBDRigidsSolver *)((this->PhysScene).Object)->_padding_;
    pbVar1 = (byte *)((longlong)&this->_padding_ + 2);
    *pbVar1 = *pbVar1 | 6;
    (this->RigidSolverProxy).Solver = pFVar2;
    *(undefined1 *)&this->_padding_ = 4;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    FGCObject::RegisterGCObject((FGCObject *)&::ConstructorStatics);
    ::ConstructorStatics.SolverTextureObject.Object.field0_0x0 =
         (TObjectPtr<UTexture2D>_u_0)(FObjectPtr)0x0;
    ::ConstructorStatics.SolverTextureObject._padding_ =
         (longlong)&___7__FObjectFinderOptional_VUTexture2D___ConstructorHelpers__6B_;
    ::ConstructorStatics.SolverTextureObject.LoadFlags = 0;
    ::ConstructorStatics.SolverTextureObject.ObjectToFind =
         L"/Engine/EditorResources/S_Solver.S_Solver";
    ::FName::FName(&::ConstructorStatics.ID_Solver,L"Solver");
    FText::AsLocalizable_Advanced_LocText
              (&::ConstructorStatics.NAME_Solver,L"SpriteCategory",L"Solver",L"Solver");
    atexit(`AChaosSolverActor::AChaosSolverActor'::__l2::
           _dynamic_atexit_destructor_for__ConstructorStatics__);
    _Init_thread_footer(&::_TSS0);
  }
  pFVar8 = ::FName::FName(&local_res20,L"SceneComp");
  FVar3 = *pFVar8;
  pUVar9 = Z_Construct_UClass_USceneComponent_NoRegister();
  pUVar10 = FObjectInitializer::CreateDefaultSubobject
                      (param_1,(UObject *)this,FVar3,pUVar9,pUVar9,true,false);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar10 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar10);
  }
  this->_padding_ = (longlong)pUVar10;
  pUVar10[10].field_0x1b = 0;
  pFVar8 = ::FName::FName(local_38,L"GameplayEventDispatcher");
  FVar3 = *pFVar8;
  pUVar9 = UChaosGameplayEventDispatcher::StaticClass();
  pUVar11 = (UChaosGameplayEventDispatcher *)
            FObjectInitializer::CreateDefaultSubobject
                      (param_1,(UObject *)this,FVar3,pUVar9,pUVar9,true,false);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar11 != (UChaosGameplayEventDispatcher *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar11);
  }
  (this->GameplayEventDispatcherComponent).field0_0x0.DebugPtr = pUVar11;
  return this;
}

// ~AChaosSolverActor @ 14630ad80

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall AChaosSolverActor::~AChaosSolverActor(AChaosSolverActor *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  ForElementType<FSetElementId> FVar3;
  
  this->_padding_ = (longlong)&_vftable__for__AActor__;
  this->_padding_ = (longlong)&_vftable__for__IDataflowPhysicsSolverInterface__;
  pFVar1 = (this->RigidSolverProxy).PushDatas.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->RigidSolverProxy)._padding_ = 0;
  pvVar2 = (void *)(this->RigidSolverProxy)._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->RigidSolverProxy)._padding_);
  pvVar2 = (void *)(this->RigidSolverProxy)._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->PhysScene).SharedReferenceCount.ReferenceController);
  (this->SimulationAsset).SimulationGroups.HashSize = 0;
  FVar3 = (this->SimulationAsset).SimulationGroups.Hash.SecondaryData;
  if (FVar3 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar3);
  }
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->SimulationAsset).SimulationGroups.Elements);
  this->_padding_ = (longlong)&___7IDataflowSimulationInterface__6B_;
  AActor::~AActor((AActor *)this);
  return;
}

// BeginPlay @ 14630d4c0

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

void __thiscall AChaosSolverActor::BeginPlay(AChaosSolverActor *this)

{
  FPBDRigidsSolver *pFVar1;
  code *pcVar2;
  bool bVar3;
  FSimCallbackCommandObject *pFVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  FSimCallbackCommandObject *pFVar7;
  FSimCallbackCommandObject *pFVar8;
  undefined1 auStack_118 [32];
  undefined1 local_f8 [4];
  undefined4 local_f4;
  FPBDRigidsSolver *local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  FSimCallbackCommandObject *local_58;
  longlong local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_118;
  pFVar7 = (FSimCallbackCommandObject *)0x0;
  local_f4 = 0;
  AActor::BeginPlay((AActor *)this);
  if ((this->RigidSolverProxy).Solver != (FPBDRigidsSolver *)0x0) {
    MigrateSolver(this);
    uStack_e8._0_4_ = (this->Properties).PositionIterations;
    uStack_e8._4_4_ = (this->Properties).VelocityIterations;
    uStack_e0._0_4_ = (this->Properties).ProjectionIterations;
    uStack_e0._4_4_ = (this->Properties).CollisionMarginFraction;
    pFVar1 = (this->RigidSolverProxy).Solver;
    uStack_d8._0_4_ = (this->Properties).CollisionMarginMax;
    uStack_d8._4_4_ = (this->Properties).CollisionCullDistance;
    uStack_d0._0_4_ = (this->Properties).CollisionMaxPushOutVelocity;
    uStack_d0._4_4_ = (this->Properties).CollisionInitialOverlapDepenetrationVelocity;
    local_68 = *(undefined4 *)&(this->Properties).bGenerateContactGraph_DEPRECATED;
    local_c8._0_4_ = (this->Properties).ClusterConnectionFactor;
    local_c8._4_1_ = (this->Properties).ClusterUnionConnectionType;
    local_c8._5_3_ = *(undefined3 *)&(this->Properties).field_0x25;
    uStack_c0._0_4_ = (this->Properties).DestructionSettings.PerAdvanceBreaksAllowed;
    uStack_c0._4_4_ = (this->Properties).DestructionSettings.PerAdvanceBreaksRescheduleLimit;
    local_b8._0_4_ =
         (this->Properties).DestructionSettings.ClusteringParticleReleaseThrottlingMinCount;
    local_b8._4_4_ =
         (this->Properties).DestructionSettings.ClusteringParticleReleaseThrottlingMaxCount;
    uStack_b0 = *(undefined8 *)&(this->Properties).DestructionSettings.bOptimizeForRuntimeMemory;
    local_a8._0_1_ = (this->Properties).CollisionFilterSettings.FilterEnabled;
    local_a8._1_3_ = *(undefined3 *)&(this->Properties).CollisionFilterSettings.field_0x1;
    local_a8._4_4_ = (this->Properties).CollisionFilterSettings.MinMass;
    uStack_a0._0_4_ = (this->Properties).CollisionFilterSettings.MinSpeed;
    uStack_a0._4_4_ = (this->Properties).CollisionFilterSettings.MinImpulse;
    local_98._0_1_ = (this->Properties).bGenerateBreakData;
    local_98._1_3_ = *(undefined3 *)&(this->Properties).field_0x51;
    local_98._4_1_ = (this->Properties).BreakingFilterSettings.FilterEnabled;
    local_98._5_3_ = *(undefined3 *)&(this->Properties).BreakingFilterSettings.field_0x1;
    uStack_90._0_4_ = (this->Properties).BreakingFilterSettings.MinMass;
    uStack_90._4_4_ = (this->Properties).BreakingFilterSettings.MinSpeed;
    local_88 = *(undefined8 *)&(this->Properties).BreakingFilterSettings.MinVolume;
    uStack_80._0_1_ = (this->Properties).TrailingFilterSettings.FilterEnabled;
    uStack_80._1_3_ = *(undefined3 *)&(this->Properties).TrailingFilterSettings.field_0x1;
    uStack_80._4_4_ = (this->Properties).TrailingFilterSettings.MinMass;
    local_78._0_4_ = (this->Properties).TrailingFilterSettings.MinSpeed;
    local_78._4_4_ = (this->Properties).TrailingFilterSettings.MinVolume;
    uStack_70._0_4_ = (this->Properties).Iterations_DEPRECATED;
    uStack_70._4_4_ = (this->Properties).PushOutIterations_DEPRECATED;
    local_f0 = pFVar1;
    if (((Chaos::CVars::bEnableAsyncInitBody == false) && (bVar3 = IsInGameThread(), !bVar3)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Chaos::CVars::bEnableAsyncInitBody || IsInGameThread()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Framework\\PhysicsSolverBase.h"
                           ,0x1b3,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pFVar4 = ::operator_new(0xc0);
    pFVar8 = pFVar7;
    if (pFVar4 != (FSimCallbackCommandObject *)0x0) {
      local_58 = (FSimCallbackCommandObject *)0x0;
      puVar5 = FMemory::Malloc(0x98,8);
      *puVar5 = &UE::Core::Private::Function::
                 TFunction_OwnedObject<`AChaosSolverActor::BeginPlay'::`2'::<lambda_1>,1,1>::
                 _vftable_;
      puVar5[1] = local_f0;
      puVar5[2] = uStack_e8;
      puVar5[3] = uStack_e0;
      puVar5[4] = uStack_d8;
      puVar5[5] = uStack_d0;
      puVar5[6] = local_c8;
      puVar5[7] = uStack_c0;
      puVar5[8] = local_b8;
      puVar5[9] = uStack_b0;
      puVar5[10] = local_a8;
      puVar5[0xb] = uStack_a0;
      puVar5[0xc] = local_98;
      puVar5[0xd] = uStack_90;
      puVar5[0xe] = local_88;
      puVar5[0xf] = uStack_80;
      puVar5[0x10] = local_78;
      puVar5[0x11] = uStack_70;
      puVar5[0x12] = CONCAT44(uStack_64,local_68);
      if (puVar5 + 1 != (longlong *)0x0) {
        local_58 = (FSimCallbackCommandObject *)
                   UE::Core::Private::Function::
                   TFunctionRefCaller<`AChaosSolverActor::BeginPlay'::__l2::<lambda_1>,void>::Call;
      }
      *(undefined ***)pFVar4 = &___7FSimCallbackCommandObject_Chaos__6B_;
      *(undefined2 *)&pFVar4->field_0x8 = 0;
      *(undefined8 *)&pFVar4->field_0x10 = 0;
      *(undefined8 *)&pFVar4->field_0x18 = 0;
      *(undefined8 *)&pFVar4->field_0x20 = 0;
      *(undefined8 *)&pFVar4->field_0x28 = 0;
      *(undefined2 *)&pFVar4->field_0x40 = 1;
      *(FSimCallbackCommandObject **)&pFVar4->Func = local_58;
      *(undefined8 **)&(pFVar4->Func).field_0x28 = puVar5;
      local_30 = (longlong *)0x0;
      *(longlong *)&(pFVar4->Func).field_0x10 = local_48;
      *(undefined8 *)&(pFVar4->Func).field_0x18 = uStack_40;
      *(undefined8 *)&(pFVar4->Func).field_0x20 = local_38;
      if (*(longlong *)&pFVar4->Func != 0) {
        local_58 = pFVar7;
      }
      *(undefined8 *)&pFVar4->Func2 = 0;
      *(undefined8 *)&(pFVar4->Func2).field_0x28 = 0;
      pFVar4->bFuncHasTimeParameters = false;
      pFVar4->ExecuteOnStep = -1;
      if (*(longlong *)&pFVar4->Func == 0) {
        `Chaos::FSimCallbackCommandObject::FSimCallbackCommandObject'::__l2::<lambda_1>::operator()
                  (local_f8);
      }
      pFVar7 = (FSimCallbackCommandObject *)&DAT_00000001;
      pFVar8 = pFVar4;
    }
    if ((pFVar7 != (FSimCallbackCommandObject *)0x0) &&
       (local_58 != (FSimCallbackCommandObject *)0x0)) {
      plVar6 = &local_48;
      if (local_30 != (longlong *)0x0) {
        plVar6 = local_30;
      }
      (**(code **)(*plVar6 + 0x10))();
    }
    Chaos::FChaosMarshallingManager::RegisterSimCommand_External
              ((FChaosMarshallingManager *)&pFVar1->_padding_,pFVar8);
    MakeFloor(this);
  }
  return;
}

// BuildSimulationProxy @ 14630db10

void __thiscall AChaosSolverActor::BuildSimulationProxy(AChaosSolverActor *this)

{
  byte *pbVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  
  if (this->_padding_ == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  lVar2 = *(longlong *)(this->_padding_ + 0x40);
  pbVar1 = (byte *)((longlong)&this[-1]._padding_ + 2);
  *pbVar1 = *pbVar1 | 6;
  this->_padding_ = lVar2;
  *(undefined1 *)&this[-1]._padding_ = 4;
  return;
}

// EndPlay @ 146311200

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

void __thiscall AChaosSolverActor::EndPlay(AChaosSolverActor *this,Type param_1)

{
  FPBDRigidsSolver *pFVar1;
  code *pcVar2;
  bool bVar3;
  FSimCallbackCommandObject *pFVar4;
  undefined ***pppuVar5;
  FSimCallbackCommandObject *pFVar6;
  FSimCallbackCommandObject *pFVar7;
  undefined1 auStack_88 [32];
  undefined1 local_68 [4];
  undefined4 local_64;
  FSimCallbackCommandObject *local_58;
  undefined **local_48;
  FPBDRigidsSolver *pFStack_40;
  undefined8 local_38;
  undefined ***local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_88;
  pFVar6 = (FSimCallbackCommandObject *)0x0;
  local_64 = 0;
  AActor::EndPlay((AActor *)this,param_1);
  pFVar1 = (this->RigidSolverProxy).Solver;
  if (pFVar1 != (FPBDRigidsSolver *)0x0) {
    if (this->Proxy != (FSingleParticlePhysicsProxy *)0x0) {
      Chaos::FPBDRigidsSolver::UnregisterObject(pFVar1,this->Proxy);
      this->Proxy = (FSingleParticlePhysicsProxy *)0x0;
    }
    pFVar1 = (this->RigidSolverProxy).Solver;
    if (((Chaos::CVars::bEnableAsyncInitBody == false) && (bVar3 = IsInGameThread(), !bVar3)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Chaos::CVars::bEnableAsyncInitBody || IsInGameThread()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Framework\\PhysicsSolverBase.h"
                           ,0x1b3,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pFVar4 = ::operator_new(0xc0);
    pFVar7 = pFVar6;
    if (pFVar4 != (FSimCallbackCommandObject *)0x0) {
      local_30 = (undefined ***)0x0;
      local_48 = &UE::Core::Private::Function::
                  TFunction_OwnedObject<`AChaosSolverActor::EndPlay'::`2'::<lambda_1>,1,0>::
                  _vftable_;
      pFStack_40 = pFVar1;
      *(undefined ***)pFVar4 = &___7FSimCallbackCommandObject_Chaos__6B_;
      *(undefined2 *)&pFVar4->field_0x8 = 0;
      *(undefined8 *)&pFVar4->field_0x10 = 0;
      *(undefined8 *)&pFVar4->field_0x18 = 0;
      *(undefined8 *)&pFVar4->field_0x20 = 0;
      *(undefined8 *)&pFVar4->field_0x28 = 0;
      *(undefined2 *)&pFVar4->field_0x40 = 1;
      *(code **)&pFVar4->Func =
           UE::Core::Private::Function::
           TFunctionRefCaller<`AChaosSolverActor::EndPlay'::__l2::<lambda_1>,void>::Call;
      *(undefined8 *)&(pFVar4->Func).field_0x28 = 0;
      *(undefined ***)&(pFVar4->Func).field_0x10 =
           &UE::Core::Private::Function::
            TFunction_OwnedObject<`AChaosSolverActor::EndPlay'::`2'::<lambda_1>,1,0>::_vftable_;
      *(FPBDRigidsSolver **)&(pFVar4->Func).field_0x18 = pFVar1;
      *(undefined8 *)&(pFVar4->Func).field_0x20 = local_38;
      local_58 = (FSimCallbackCommandObject *)
                 UE::Core::Private::Function::
                 TFunctionRefCaller<`AChaosSolverActor::EndPlay'::__l2::<lambda_1>,void>::Call;
      if (*(longlong *)&pFVar4->Func != 0) {
        local_58 = pFVar6;
      }
      *(undefined8 *)&pFVar4->Func2 = 0;
      *(undefined8 *)&(pFVar4->Func2).field_0x28 = 0;
      pFVar4->bFuncHasTimeParameters = false;
      pFVar4->ExecuteOnStep = -1;
      if (*(longlong *)&pFVar4->Func == 0) {
        `Chaos::FSimCallbackCommandObject::FSimCallbackCommandObject'::__l2::<lambda_1>::operator()
                  (local_68);
      }
      pFVar6 = pFVar4;
      pFVar7 = (FSimCallbackCommandObject *)&DAT_00000001;
    }
    if ((pFVar7 != (FSimCallbackCommandObject *)0x0) &&
       (local_58 != (FSimCallbackCommandObject *)0x0)) {
      pppuVar5 = &local_48;
      if (local_30 != (undefined ***)0x0) {
        pppuVar5 = local_30;
      }
      (*(code *)(*pppuVar5)[2])();
    }
    Chaos::FChaosMarshallingManager::RegisterSimCommand_External
              ((FChaosMarshallingManager *)&pFVar1->_padding_,pFVar6);
  }
  return;
}

// GetPrivateStaticClass @ 1463134b0

UClass * __cdecl AChaosSolverActor::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AChaosSolverActor.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ChaosSolverEngine",L"ChaosSolverActor",
               &Z_Registration_Info_UClass_AChaosSolverActor.InnerSingleton,
               StaticRegisterNativesAChaosSolverActor,0x4c0,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<AChaosSolverActor>,
               InternalVTableHelperCtorCaller<AChaosSolverActor>,local_res8,AActor::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AChaosSolverActor.InnerSingleton;
}

// GetSimulationAsset @ 146313cd0

FDataflowSimulationAsset * __thiscall AChaosSolverActor::GetSimulationAsset(AChaosSolverActor *this)

{
  return (FDataflowSimulationAsset *)&this->_padding_;
}

// GetSimulationAsset @ 146313ce0

FDataflowSimulationAsset * __thiscall AChaosSolverActor::GetSimulationAsset(AChaosSolverActor *this)

{
  return (FDataflowSimulationAsset *)&this->_padding_;
}

// GetSimulationName @ 146313cf0

FString * __thiscall
AChaosSolverActor::GetSimulationName(AChaosSolverActor *this,FString *__return_storage_ptr__)

{
  FName local_res8 [4];
  
  local_res8[0] = (FName)this[-1]._padding_;
  ::FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetSimulationProxy @ 146313d20

FDataflowSimulationProxy * __thiscall AChaosSolverActor::GetSimulationProxy(AChaosSolverActor *this)

{
  return (FDataflowSimulationProxy *)&this->_padding_;
}

// GetSimulationProxy @ 146313d30

FDataflowSimulationProxy * __thiscall AChaosSolverActor::GetSimulationProxy(AChaosSolverActor *this)

{
  return (FDataflowSimulationProxy *)&this->_padding_;
}

// MakeFloor @ 146318940

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall AChaosSolverActor::MakeFloor(AChaosSolverActor *this)

{
  longlong lVar1;
  TGeometryParticle<double,3> *pTVar2;
  FPBDRigidsSolver *this_00;
  code *pcVar3;
  undefined8 uVar4;
  bool bVar5;
  TGeometryParticle<double,3> *pTVar6;
  TGeometryParticle<double,3> *this_01;
  FSingleParticlePhysicsProxy *this_02;
  TGeometryParticle<double,3> *pTVar7;
  longlong *plVar8;
  IPhysicsProxyBase *pIVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  FGeometryParticleParameters local_res8 [16];
  TUniquePtr<Chaos::TGeometryParticle<double,3>,TDefaultDelete<Chaos::TGeometryParticle<double,3>_>_>
  local_res18 [2];
  FCollisionFilterData local_b8;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  double local_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined8 local_80;
  undefined8 local_68;
  
  if (this->bHasFloor != false) {
    local_res8[0].bDisabled = false;
    pTVar6 = ::operator_new(0xa0);
    pTVar7 = (TGeometryParticle<double,3> *)0x0;
    this_01 = pTVar7;
    if (pTVar6 != (TGeometryParticle<double,3> *)0x0) {
      this_01 = Chaos::TGeometryParticle<double,3>::TGeometryParticle<double,3>(pTVar6,local_res8);
    }
    lVar1 = this->_padding_;
    if (lVar1 == 0) {
      uVar10 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
      uVar11 = (undefined4)
               ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20);
      uVar12 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
      uVar13 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
      uVar14 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
      uVar15 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
    }
    else {
      local_90 = *(undefined4 *)(lVar1 + 0x210);
      uStack_8c = *(undefined4 *)(lVar1 + 0x214);
      uStack_88 = *(undefined4 *)(lVar1 + 0x218);
      uStack_84 = *(undefined4 *)(lVar1 + 0x21c);
      local_80 = *(undefined8 *)(lVar1 + 0x220);
      uVar10 = (undefined4)local_80;
      uVar11 = (undefined4)((ulonglong)local_80 >> 0x20);
      uVar12 = local_90;
      uVar13 = uStack_8c;
      uVar14 = uStack_88;
      uVar15 = uStack_84;
    }
    local_98 = (double)CONCAT44(uVar11,uVar10);
    local_res18[0].Ptr = this_01;
    pTVar6 = ::operator_new(0x50);
    uVar4 = _UNK_1512542d8;
    lVar1 = ___xmm_40f86a000000000040f86a0000000000;
    if (pTVar6 == (TGeometryParticle<double,3> *)0x0) {
      pIVar9 = this_01->Proxy;
      plVar8 = (longlong *)&DAT_00000008;
      pTVar6 = pTVar7;
    }
    else {
      local_68 = 0;
      Chaos::FImplicitObject::FImplicitObject((FImplicitObject *)pTVar6,3,'\x01');
      pTVar6->_padding_ = (longlong)&___7__TBox_N_02_Chaos__6B_;
      plVar8 = &pTVar6->_padding_;
      *(undefined8 *)&(pTVar6->MXR).Property.MX = 0xc0f86a0000000000;
      *(undefined8 *)&(pTVar6->MXR).Property.MX.field_0x8 = 0xc0f86a0000000000;
      *(undefined8 *)&(pTVar6->MXR).Property.MX.field_0x10 = 0xc08f400000000000;
      (pTVar6->MXR).Property._padding_ = lVar1;
      *(undefined8 *)&(pTVar6->MXR).Property.MR.field_0x0 = uVar4;
      *(undefined8 *)&(pTVar6->MXR).Property.MR.field_0x8 = local_68;
      LOCK();
      *(int *)plVar8 = (int)*plVar8 + 1;
      UNLOCK();
      pIVar9 = this_01->Proxy;
      LOCK();
      *(int *)plVar8 = (int)*plVar8 + 1;
      UNLOCK();
    }
    pTVar2 = (TGeometryParticle<double,3> *)(this_01->MNonFrequentData).Property.MGeometry.Reference
    ;
    if (pTVar2 != pTVar6) {
      (this_01->MNonFrequentData).Property.MGeometry.Reference = (FImplicitObject *)pTVar6;
      if (pTVar6 != (TGeometryParticle<double,3> *)0x0) {
        LOCK();
        *(int *)plVar8 = (int)*plVar8 + 1;
        UNLOCK();
      }
      if (pTVar2 != (TGeometryParticle<double,3> *)0x0) {
        LOCK();
        plVar8 = &pTVar2->_padding_;
        lVar1 = *plVar8;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if (((int)lVar1 == 1) && (*(int *)((longlong)&pTVar2->_padding_ + 4) == 0)) {
          (**(code **)pTVar2->_padding_)(pTVar2,1);
        }
      }
    }
    if (pTVar6 != (TGeometryParticle<double,3> *)0x0) {
      LOCK();
      plVar8 = &pTVar6->_padding_;
      lVar1 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if (((int)lVar1 == 1) && (*(int *)((longlong)&pTVar6->_padding_ + 4) == 0)) {
        (**(code **)pTVar6->_padding_)(pTVar6,1);
      }
    }
    (this_01->MDirtyFlags).Bits = (this_01->MDirtyFlags).Bits | 0x10;
    if ((pIVar9 != (IPhysicsProxyBase *)0x0) && (pIVar9->Solver != (FPhysicsSolverBase *)0x0)) {
      Chaos::FPhysicsSolverBase::AddDirtyProxy(pIVar9->Solver,pIVar9);
    }
    Chaos::TGeometryParticle<double,3>::UpdateShapesArray(this_01);
    if (pTVar6 != (TGeometryParticle<double,3> *)0x0) {
      LOCK();
      plVar8 = &pTVar6->_padding_;
      lVar1 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if (((int)lVar1 == 1) && (*(int *)((longlong)&pTVar6->_padding_ + 4) == 0)) {
        (**(code **)pTVar6->_padding_)(pTVar6,1);
      }
    }
    local_98 = (double)this->FloorHeight;
    pIVar9 = (local_res18[0].Ptr)->Proxy;
    *(undefined4 *)&((local_res18[0].Ptr)->MXR).Property.MX = uVar12;
    *(undefined4 *)&((local_res18[0].Ptr)->MXR).Property.MX.field_0x4 = uVar13;
    *(undefined4 *)&((local_res18[0].Ptr)->MXR).Property.MX.field_0x8 = uVar14;
    *(undefined4 *)&((local_res18[0].Ptr)->MXR).Property.MX.field_0xc = uVar15;
    *(double *)&((local_res18[0].Ptr)->MXR).Property.MX.field_0x10 = local_98;
    ((local_res18[0].Ptr)->MDirtyFlags).Bits = ((local_res18[0].Ptr)->MDirtyFlags).Bits | 1;
    local_a8 = uVar12;
    uStack_a4 = uVar13;
    uStack_a0 = uVar14;
    uStack_9c = uVar15;
    if ((pIVar9 != (IPhysicsProxyBase *)0x0) && (pIVar9->Solver != (FPhysicsSolverBase *)0x0)) {
      Chaos::FPhysicsSolverBase::AddDirtyProxy(pIVar9->Solver,pIVar9);
    }
    local_b8.Word1 = 0xffff;
    local_b8.Word2 = 0;
    local_b8.Word0 = 0;
    local_b8.Word3 = 0xffff;
    Chaos::TGeometryParticle<double,3>::SetShapeSimData(local_res18[0].Ptr,0,&local_b8);
    if (((local_res18[0].Ptr)->Proxy != (IPhysicsProxyBase *)0x0) &&
       (bVar5 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_12814936870746524>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\PhysicsProxy\\SingleParticlePhysicsProxy.h"
                           ,0x664,"Particle->GetProxy() == nullptr"), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    this_02 = ::operator_new(0x68);
    if (this_02 != (FSingleParticlePhysicsProxy *)0x0) {
      pTVar7 = (TGeometryParticle<double,3> *)
               Chaos::FSingleParticlePhysicsProxy::FSingleParticlePhysicsProxy
                         (this_02,local_res18,(TGeometryParticleHandleImp<double,3,1> *)0x0,
                          (UObject *)0x0);
    }
    this_00 = (this->RigidSolverProxy).Solver;
    this->Proxy = (FSingleParticlePhysicsProxy *)pTVar7;
    Chaos::FPBDRigidsSolver::RegisterObject(this_00,(FSingleParticlePhysicsProxy *)pTVar7);
    if (local_res18[0].Ptr != (TGeometryParticle<double,3> *)0x0) {
      (**(code **)(local_res18[0].Ptr)->_padding_)(local_res18[0].Ptr,1);
    }
  }
  return;
}

// MigrateSolver @ 146318fe0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall AChaosSolverActor::MigrateSolver(AChaosSolverActor *this)

{
  FPhysScene_Chaos *this_00;
  code *pcVar1;
  bool bVar2;
  FChaosSolversModule *this_01;
  UWorld *pUVar3;
  
  if ((this->RigidSolverProxy).Solver != (FPBDRigidsSolver *)0x0) {
    this_01 = FChaosSolversModule::GetModule();
    if (this_01 != (FChaosSolversModule *)0x0) {
      if ((this->SimulationAsset).DataflowAsset.field0_0x0.DebugPtr == (UDataflow *)0x0) {
        pUVar3 = AActor::GetWorld((AActor *)this);
        FChaosSolversModule::MigrateSolver
                  (this_01,(FPhysicsSolverBase *)(this->RigidSolverProxy).Solver,(UObject *)pUVar3);
        *(undefined1 *)&((this->RigidSolverProxy).Solver)->_padding_ = 0;
      }
      else {
        FChaosSolversModule::MigrateSolver
                  (this_01,(FPhysicsSolverBase *)(this->RigidSolverProxy).Solver,(UObject *)this);
        *(undefined1 *)&((this->RigidSolverProxy).Solver)->_padding_ = 1;
      }
    }
  }
  if ((this->PhysScene).Object == (FPhysScene_Chaos *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this_00 = (this->PhysScene).Object;
  pUVar3 = AActor::GetWorld((AActor *)this);
  FPhysScene_Chaos::SetOwningWorld(this_00,pUVar3);
  return;
}

// PostDuplicate @ 1463192a0

void __thiscall AChaosSolverActor::PostDuplicate(AChaosSolverActor *this,Type param_1)

{
  (**(code **)(this->_padding_ + 0xf8))(this,param_1 == PIE);
  MigrateSolver(this);
  return;
}

// PostLoad @ 146319790

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall AChaosSolverActor::PostLoad(AChaosSolverActor *this)

{
  EClusterConnectionTypeEnum EVar1;
  bool bVar2;
  bool bVar3;
  undefined3 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  EClusterUnionMethod EVar8;
  int iVar9;
  FGuid local_18;
  
  AActor::PostLoad((AActor *)this);
  local_18 = FFortniteMainBranchObjectVersion::GUID;
  iVar9 = UObjectBaseUtility::GetLinkerCustomVersion((UObjectBaseUtility *)this,&local_18);
  if (iVar9 < 0x2b) {
    EVar1 = this->ClusterUnionConnectionType_DEPRECATED;
    (this->Properties).PositionIterations = this->CollisionIterations_DEPRECATED;
    (this->Properties).VelocityIterations = this->PushOutIterations_DEPRECATED;
    (this->Properties).ClusterConnectionFactor = this->ClusterConnectionFactor_DEPRECATED;
    if (EVar1 == Chaos_PointImplicit) {
      EVar8 = PointImplicit;
    }
    else if (EVar1 == Chaos_DelaunayTriangulation) {
      EVar8 = DelaunayTriangulation;
    }
    else if (EVar1 == Chaos_MinimalSpanningSubsetDelaunayTriangulation) {
      EVar8 = MinimalSpanningSubsetDelaunayTriangulation;
    }
    else if (EVar1 == Chaos_PointImplicitAugmentedWithMinimalDelaunay) {
      EVar8 = PointImplicitAugmentedWithMinimalDelaunay;
    }
    else if (EVar1 == Chaos_BoundsOverlapFilteredDelaunayTriangulation) {
      EVar8 = BoundsOverlapFilteredDelaunayTriangulation;
    }
    else {
      EVar8 = None;
    }
    bVar3 = (this->BreakingFilterSettings_DEPRECATED).FilterEnabled;
    uVar4 = *(undefined3 *)&(this->BreakingFilterSettings_DEPRECATED).field_0x1;
    fVar5 = (this->BreakingFilterSettings_DEPRECATED).MinMass;
    fVar6 = (this->BreakingFilterSettings_DEPRECATED).MinSpeed;
    fVar7 = (this->BreakingFilterSettings_DEPRECATED).MinVolume;
    (this->Properties).ClusterUnionConnectionType = EVar8;
    bVar2 = this->DoGenerateBreakingData_DEPRECATED;
    (this->Properties).BreakingFilterSettings.FilterEnabled = bVar3;
    *(undefined3 *)&(this->Properties).BreakingFilterSettings.field_0x1 = uVar4;
    (this->Properties).BreakingFilterSettings.MinMass = fVar5;
    (this->Properties).BreakingFilterSettings.MinSpeed = fVar6;
    (this->Properties).BreakingFilterSettings.MinVolume = fVar7;
    (this->Properties).bGenerateBreakData = bVar2;
    bVar3 = (this->CollisionFilterSettings_DEPRECATED).FilterEnabled;
    uVar4 = *(undefined3 *)&(this->CollisionFilterSettings_DEPRECATED).field_0x1;
    fVar5 = (this->CollisionFilterSettings_DEPRECATED).MinMass;
    fVar6 = (this->CollisionFilterSettings_DEPRECATED).MinSpeed;
    fVar7 = (this->CollisionFilterSettings_DEPRECATED).MinImpulse;
    (this->Properties).bGenerateCollisionData = this->DoGenerateCollisionData_DEPRECATED;
    bVar2 = this->DoGenerateTrailingData_DEPRECATED;
    (this->Properties).CollisionFilterSettings.FilterEnabled = bVar3;
    *(undefined3 *)&(this->Properties).CollisionFilterSettings.field_0x1 = uVar4;
    (this->Properties).CollisionFilterSettings.MinMass = fVar5;
    (this->Properties).CollisionFilterSettings.MinSpeed = fVar6;
    (this->Properties).CollisionFilterSettings.MinImpulse = fVar7;
    (this->Properties).bGenerateTrailingData = bVar2;
    uVar4 = *(undefined3 *)&(this->TrailingFilterSettings_DEPRECATED).field_0x1;
    fVar5 = (this->TrailingFilterSettings_DEPRECATED).MinMass;
    fVar6 = (this->TrailingFilterSettings_DEPRECATED).MinSpeed;
    fVar7 = (this->TrailingFilterSettings_DEPRECATED).MinVolume;
    (this->Properties).TrailingFilterSettings.FilterEnabled =
         (this->TrailingFilterSettings_DEPRECATED).FilterEnabled;
    *(undefined3 *)&(this->Properties).TrailingFilterSettings.field_0x1 = uVar4;
    (this->Properties).TrailingFilterSettings.MinMass = fVar5;
    (this->Properties).TrailingFilterSettings.MinSpeed = fVar6;
    (this->Properties).TrailingFilterSettings.MinVolume = fVar7;
  }
  return;
}

// PostRegisterAllComponents @ 146319880

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall AChaosSolverActor::PostRegisterAllComponents(AChaosSolverActor *this)

{
  UWorld *pUVar1;
  TObjectPtr<UObject>_u_0 local_res8 [4];
  
  AActor::PostRegisterAllComponents((AActor *)this);
  MigrateSolver(this);
  pUVar1 = AActor::GetWorld((AActor *)this);
  if ((pUVar1 != (UWorld *)0x0) && ((pUVar1->PhysicsScene_Chaos).Object == (FPhysScene_Chaos *)0x0))
  {
    SetAsCurrentWorldSolver(this);
  }
  local_res8[0] = (TObjectPtr<UObject>_u_0)this;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (AChaosSolverActor *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)this);
  }
  UE::Dataflow::RegisterSimulationInterface((TObjectPtr<UObject> *)&local_res8[0].ObjectPtr);
  return;
}

// PostUnregisterAllComponents @ 146319900

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall AChaosSolverActor::PostUnregisterAllComponents(AChaosSolverActor *this)

{
  TObjectPtr<UObject>_u_0 local_res8 [4];
  
  AActor::PostUnregisterAllComponents((AActor *)this);
  local_res8[0] = (TObjectPtr<UObject>_u_0)this;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (AChaosSolverActor *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)this);
  }
  UE::Dataflow::UnregisterSimulationInterface((TObjectPtr<UObject> *)&local_res8[0].ObjectPtr);
  return;
}

// PreInitializeComponents @ 146319940

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall AChaosSolverActor::PreInitializeComponents(AChaosSolverActor *this)

{
  byte bVar1;
  code *UNRECOVERED_JUMPTABLE;
  APlayerController *pAVar2;
  UWorld *pUVar3;
  int iVar4;
  
  bVar1 = *(byte *)((longlong)&this->_padding_ + 3);
  if (bVar1 != 0) {
    iVar4 = bVar1 - 1;
    pAVar2 = UGameplayStatics::GetPlayerController((UObject *)this,iVar4);
    if (pAVar2 != (APlayerController *)0x0) {
      UNRECOVERED_JUMPTABLE = *(code **)(this->_padding_ + 0x330);
                    /* WARNING: Could not recover jumptable at 0x0001473ad8e2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(this,pAVar2,UNRECOVERED_JUMPTABLE);
      return;
    }
    pUVar3 = AActor::GetWorld((AActor *)this);
    ULevel::RegisterActorForAutoReceiveInput
              ((pUVar3->PersistentLevel).field0_0x0.DebugPtr,(AActor *)this,iVar4);
  }
  return;
}

// ReadFromSimulation @ 146319f80

void __thiscall
AChaosSolverActor::ReadFromSimulation(AChaosSolverActor *this,float param_1,bool param_2)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  
  if ((!param_2) && (cVar2 = (**(code **)(this->_padding_ + 8))(), cVar2 != '\0')) {
    if ((this->_padding_ == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    FChaosScene::EndFrame((FChaosScene *)this->_padding_);
  }
  return;
}

// ResetSimulationProxy @ 14631dea0

void __thiscall AChaosSolverActor::ResetSimulationProxy(AChaosSolverActor *this)

{
  this->_padding_ = 0;
  return;
}

// Serialize @ 14631ecc0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall AChaosSolverActor::Serialize(AChaosSolverActor *this,FArchive *param_1)

{
  AActor::Serialize((AActor *)this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014631ece0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FFortniteMainBranchObjectVersion::GUID);
  return;
}

// Serialize @ 14631ecf0

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
AChaosSolverActor::Serialize(AChaosSolverActor *this,FStructuredArchiveRecord param_1)

{
  FArchive *pFVar1;
  FSlotBase local_res10 [3];
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  pFVar1 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  AActor::Serialize((AActor *)this,pFVar1);
  (**(code **)(*(longlong *)pFVar1 + 0x230))(pFVar1,&FFortniteMainBranchObjectVersion::GUID);
  return;
}

// SetAsCurrentWorldSolver @ 14631f5f0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall AChaosSolverActor::SetAsCurrentWorldSolver(AChaosSolverActor *this)

{
  FPBDRigidsSolver *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  FPhysScene_Chaos *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  UWorld *pUVar5;
  
  pUVar5 = AActor::GetWorld((AActor *)this);
  if (((pUVar5 != (UWorld *)0x0) &&
      (pFVar1 = (this->RigidSolverProxy).Solver, pFVar1 != (FPBDRigidsSolver *)0x0)) &&
     ((char)pFVar1->_padding_ == '\0')) {
    pTVar2 = (this->PhysScene).SharedReferenceCount.ReferenceController;
    pFVar3 = (this->PhysScene).Object;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar4 = (pUVar5->PhysicsScene_Chaos).SharedReferenceCount.ReferenceController;
    (pUVar5->PhysicsScene_Chaos).Object = pFVar3;
    (pUVar5->PhysicsScene_Chaos).SharedReferenceCount.ReferenceController = pTVar2;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
    return;
  }
  return;
}

// SetSolverActive @ 14631f870

void __thiscall AChaosSolverActor::SetSolverActive(AChaosSolverActor *this,bool param_1)

{
  FPBDRigidsSolver *pFVar1;
  
  pFVar1 = (this->RigidSolverProxy).Solver;
  if ((pFVar1 != (FPBDRigidsSolver *)0x0) && ((this->PhysScene).Object != (FPhysScene_Chaos *)0x0))
  {
    *(bool *)((longlong)&pFVar1->_padding_ + 4) = !param_1;
  }
  return;
}

// StaticRegisterNativesAChaosSolverActor @ 146320290

void __cdecl AChaosSolverActor::StaticRegisterNativesAChaosSolverActor(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 2;
  local_18.DataPtr = Z_Construct_UClass_AChaosSolverActor_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// WriteToSimulation @ 146322900

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
AChaosSolverActor::WriteToSimulation(AChaosSolverActor *this,float param_1,bool param_2)

{
  int *piVar1;
  longlong *plVar2;
  float fVar3;
  FChaosScene *this_00;
  code *pcVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  UWorld *this_01;
  UPhysicsSettings *pUVar8;
  float fVar9;
  undefined4 in_XMM1_Db;
  undefined8 *local_res8;
  FPushPhysicsData *local_58;
  TVector<double>_u_0 local_50 [3];
  
  fVar9 = param_1;
  cVar5 = (**(code **)(this->_padding_ + 8))(&this->_padding_);
  if (cVar5 != '\0') {
    if (param_2) {
      Chaos::FPhysicsSolverBase::AdvanceAndDispatch_External
                ((FPhysicsSolverBase *)this->_padding_,(double)CONCAT44(in_XMM1_Db,fVar9));
      if (local_res8 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(local_res8 + 6);
        iVar7 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if ((iVar7 == 1) && (local_res8 != (undefined8 *)0x0)) {
          (**(code **)*local_res8)(local_res8,1);
        }
      }
    }
    else {
      if ((this->_padding_ == 0) && ((char)this->_padding_ != '\0')) {
        MakeFloor((AChaosSolverActor *)&this[-1]._padding_);
      }
      this_01 = AActor::GetWorld((AActor *)&this[-1]._padding_);
      fVar9 = UWorld::GetGravityZ(this_01);
      local_50[0]._16_8_ = (undefined8)fVar9;
      local_50[0]._s_0.X = 0.0;
      local_50[0]._s_0.Y = 0.0;
      if ((this->_padding_ == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      this_00 = (FChaosScene *)this->_padding_;
      pUVar8 = UPhysicsSettings::Get();
      bVar6 = pUVar8->bSubstepping;
      pUVar8 = UPhysicsSettings::Get();
      iVar7 = pUVar8->MaxSubsteps;
      pUVar8 = UPhysicsSettings::Get();
      fVar9 = pUVar8->MaxSubstepDeltaTime;
      pUVar8 = UPhysicsSettings::Get();
      fVar3 = pUVar8->MaxPhysicsDeltaTime;
      pUVar8 = UPhysicsSettings::Get();
      FChaosScene::SetUpForFrame
                (this_00,(TVector<double> *)&local_50[0]._s_0,param_1,pUVar8->MinPhysicsDeltaTime,
                 fVar3,fVar9,iVar7,bVar6);
      if ((this->_padding_ == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      FChaosScene::StartFrame((FChaosScene *)this->_padding_);
    }
    plVar2 = &this->_padding_;
    iVar7 = *(int *)((longlong)&this->_padding_ + 4);
    piVar1 = (int *)((longlong)&this->_padding_ + 4);
    *(undefined4 *)&this->_padding_ = 0;
    if (iVar7 < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,(ForAnyElementType *)plVar2,0,piVar1);
    }
    local_58 = Chaos::FChaosMarshallingManager::StepInternalTime_External
                         ((FChaosMarshallingManager *)(this->_padding_ + 0x98));
    while (local_58 != (FPushPhysicsData *)0x0) {
      if ((((FPushPhysicsData **)*plVar2 <= &local_58) &&
          (&local_58 < (FPushPhysicsData **)*plVar2 + *piVar1)) &&
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
      iVar7 = (int)this->_padding_;
      if (iVar7 == *piVar1) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,(ForAnyElementType *)plVar2,piVar1);
      }
      *(int *)&this->_padding_ = iVar7 + 1;
      *(FPushPhysicsData **)(*plVar2 + (longlong)iVar7 * 8) = local_58;
      local_58 = Chaos::FChaosMarshallingManager::StepInternalTime_External
                           ((FChaosMarshallingManager *)(this->_padding_ + 0x98));
    }
  }
  return;
}

// _getUObject @ 146323be0

UObject * __thiscall AChaosSolverActor::_getUObject(AChaosSolverActor *this)

{
  return (UObject *)&this[-1]._padding_;
}

// execSetAsCurrentWorldSolver @ 146323ec0

void __cdecl
AChaosSolverActor::execSetAsCurrentWorldSolver(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  SetAsCurrentWorldSolver((AChaosSolverActor *)param_1);
  return;
}

// execSetSolverActive @ 146323ee0

void __cdecl AChaosSolverActor::execSetSolverActive(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res8 [2];
  
  local_res8[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0x760))(param_1,local_res8[0] != 0);
  return;
}

