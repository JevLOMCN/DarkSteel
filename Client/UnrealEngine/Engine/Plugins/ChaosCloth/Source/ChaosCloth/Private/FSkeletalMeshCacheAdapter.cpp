// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosCloth
// Functions: 16

// SupportsComponentClass @ 14db77df0

SupportType __thiscall
Chaos::FSkeletalMeshCacheAdapter::SupportsComponentClass
          (FSkeletalMeshCacheAdapter *this,UClass *param_1)

{
  int iVar1;
  UClass *pUVar2;
  
  pUVar2 = (UClass *)(**(code **)(*(longlong *)this + 0x10))();
  if (param_1 == pUVar2) {
    return Direct;
  }
  if (pUVar2 != (UClass *)0x0) {
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= (int)param_1->_padding_) &&
       ((longlong *)*(undefined1 **)(param_1->_padding_ + (longlong)iVar1 * 8) == &pUVar2->_padding_
       )) {
      return Derived;
    }
    return None;
  }
  return None;
}

// GetDesiredClass @ 14db77e60

UClass * __thiscall
Chaos::FSkeletalMeshCacheAdapter::GetDesiredClass(FSkeletalMeshCacheAdapter *this)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_USkeletalMeshComponent.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"SkeletalMeshComponent",
               &Z_Registration_Info_UClass_USkeletalMeshComponent.InnerSingleton,
               USkeletalMeshComponent::StaticRegisterNativesUSkeletalMeshComponent,0x1060,0x10,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_USkeletalMeshComponent,L"Engine",
               InternalConstructor<USkeletalMeshComponent>,
               InternalVTableHelperCtorCaller<USkeletalMeshComponent>,aFStackX_8,
               USkinnedMeshComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USkeletalMeshComponent.InnerSingleton;
}

// GetPriority @ 14db77e70

uchar __thiscall Chaos::FSkeletalMeshCacheAdapter::GetPriority(FSkeletalMeshCacheAdapter *this)

{
  return FComponentCacheAdapter::EngineAdapterPriorityBegin;
}

// GetGuid @ 14db77e80

FGuid * __thiscall
Chaos::FSkeletalMeshCacheAdapter::GetGuid
          (FSkeletalMeshCacheAdapter *this,FGuid *__return_storage_ptr__)

{
  __return_storage_ptr__->A = 0;
  __return_storage_ptr__->B = 0;
  __return_storage_ptr__->C = 0;
  __return_storage_ptr__->D = 0;
  return __return_storage_ptr__;
}

// ValidForPlayback @ 14db77ea0

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
Chaos::FSkeletalMeshCacheAdapter::ValidForPlayback
          (FSkeletalMeshCacheAdapter *this,UPrimitiveComponent *param_1,UChaosCache *param_2)

{
  USkeletalMeshComponent *this_00;
  USkinnedAsset *pUVar1;
  
  this_00 = CastChecked<USkeletalMeshComponent,UPrimitiveComponent>(param_1);
  if (this_00 != (USkeletalMeshComponent *)0x0) {
    pUVar1 = USkinnedMeshComponent::GetSkinnedAsset((USkinnedMeshComponent *)this_00);
    if ((pUVar1 != (USkinnedAsset *)0x0) &&
       ((0 < (param_2->TrackToParticle).ArrayNum || (0 < (param_2->ChannelCurveToParticle).ArrayNum)
        ))) {
      return true;
    }
  }
  return false;
}

// GetComponentSolver @ 14db77ef0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FPBDRigidsSolver * __thiscall
Chaos::FSkeletalMeshCacheAdapter::GetComponentSolver
          (FSkeletalMeshCacheAdapter *this,UPrimitiveComponent *param_1)

{
  return (FPBDRigidsSolver *)0x0;
}

// BuildEventsSolver @ 14db77f00

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FPhysicsSolverEvents * __thiscall
Chaos::FSkeletalMeshCacheAdapter::BuildEventsSolver
          (FSkeletalMeshCacheAdapter *this,UPrimitiveComponent *param_1)

{
  USkeletalMeshComponent *this_00;
  FClothingSimulationSolver *pFVar1;
  
  this_00 = CastChecked<USkeletalMeshComponent,UPrimitiveComponent>(param_1);
  if (this_00 != (USkeletalMeshComponent *)0x0) {
    UActorComponent::RecreatePhysicsState((UActorComponent *)this_00);
    USkeletalMeshComponent::RecreateClothingActors(this_00);
    pFVar1 = GetClothSolver(this,param_1);
    return (FPhysicsSolverEvents *)pFVar1;
  }
  return (FPhysicsSolverEvents *)0x0;
}

// SetRestState @ 14db77f70

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
Chaos::FSkeletalMeshCacheAdapter::SetRestState
          (FSkeletalMeshCacheAdapter *this,UPrimitiveComponent *param_1,UChaosCache *param_2,
          TTransform<double> *param_3,double param_4)

{
  USkeletalMeshComponent *this_00;
  USkeletalMeshComponent *this_01;
  FClothingSimulationSolver *pFVar1;
  IClothingSimulationContext *pIVar2;
  float fVar3;
  
  if (((param_2 != (UChaosCache *)0x0) && (fVar3 = UChaosCache::GetDuration(param_2), fVar3 != 0.0))
     && (this_00 = CastChecked<USkeletalMeshComponent,UPrimitiveComponent>(param_1),
        this_00 != (USkeletalMeshComponent *)0x0)) {
    this_01 = CastChecked<USkeletalMeshComponent,UPrimitiveComponent>(param_1);
    if (this_01 != (USkeletalMeshComponent *)0x0) {
      UActorComponent::RecreatePhysicsState((UActorComponent *)this_01);
      USkeletalMeshComponent::RecreateClothingActors(this_01);
    }
    pFVar1 = GetClothSolver(this,param_1);
    if (pFVar1 != (FClothingSimulationSolver *)0x0) {
      pFVar1->bEnableSolver = false;
    }
    pIVar2 = USkeletalMeshComponent::GetClothingSimulationContext(this_00);
    if (pIVar2 != (IClothingSimulationContext *)0x0) {
      pIVar2 = USkeletalMeshComponent::GetClothingSimulationContext(this_00);
      FClothingCacheSchema::LoadCacheData
                (param_2,param_4,(FClothingSimulationCacheData *)(pIVar2 + 0x1c));
    }
  }
  return;
}

// InitializeForRecord @ 14db78050

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
Chaos::FSkeletalMeshCacheAdapter::InitializeForRecord
          (FSkeletalMeshCacheAdapter *this,UPrimitiveComponent *param_1,UChaosCache *param_2)

{
  FClothingSimulationSolver *pFVar1;
  
  pFVar1 = GetClothSolver(this,param_1);
  if (pFVar1 != (FClothingSimulationSolver *)0x0) {
    pFVar1->bEnableSolver = true;
  }
  return true;
}

// InitializeForPlayback @ 14db78080

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
Chaos::FSkeletalMeshCacheAdapter::InitializeForPlayback
          (FSkeletalMeshCacheAdapter *this,UPrimitiveComponent *param_1,UChaosCache *param_2,
          float param_3)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  uint *puVar4;
  FTlsAutoCleanup *pFVar5;
  FClothingSimulationSolver *pFVar6;
  undefined1 local_28 [8];
  code *local_20;
  undefined1 *local_18;
  
  puVar4 = TThreadSingleton<Chaos::FPhysicsThreadContext>::GetTlsSlot();
  local_18 = local_28;
  local_20 = UE::Core::Private::Function::
             TFunctionRefCaller<`TThreadSingleton<Chaos::FPhysicsThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
             ::Call;
  pFVar5 = FThreadSingletonInitializer::Get
                     ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_20,puVar4);
  bVar2 = IsInGameThread();
  if (((!bVar2) && (*(int *)&pFVar5[2].field_0x4 < 1)) || (*(char *)(pFVar5 + 3) != '\0')) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<3522308889972310313>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Framework\\Threading.h"
                       ,0x129,"IsInGameThreadContext()");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  pFVar6 = GetClothSolver(this,param_1);
  if (pFVar6 != (FClothingSimulationSolver *)0x0) {
    pFVar6->bEnableSolver = false;
  }
  return true;
}

// Record_PostSolve @ 14db78140

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
Chaos::FSkeletalMeshCacheAdapter::Record_PostSolve
          (FSkeletalMeshCacheAdapter *this,UPrimitiveComponent *param_1,TTransform<double> *param_2,
          FPendingFrameWrite *param_3,double param_4)

{
  FClothingSimulationSolver *pFVar1;
  
  pFVar1 = GetClothSolver(this,param_1);
  if (pFVar1 != (FClothingSimulationSolver *)0x0) {
    FClothingCacheSchema::RecordPostSolve(pFVar1,param_3,param_4);
    return;
  }
  return;
}

// Playback_PreSolve @ 14db78180

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
Chaos::FSkeletalMeshCacheAdapter::Playback_PreSolve
          (FSkeletalMeshCacheAdapter *this,UPrimitiveComponent *param_1,UChaosCache *param_2,
          double param_3,FPlaybackTickRecord *param_4,
          TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>
          *param_5)

{
  code *pcVar1;
  bool bVar2;
  FClothingSimulationSolver *pFVar3;
  
  if (param_2 == (UChaosCache *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCache",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosCloth\\Source\\ChaosCloth\\Private\\ChaosCloth\\SkeletalMeshComponentCacheAdapter.cpp"
                       ,0x34,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  pFVar3 = GetClothSolver(this,param_1);
  if (pFVar3 != (FClothingSimulationSolver *)0x0) {
    FClothingCacheSchema::PlaybackPreSolve(param_2,param_3,param_4,pFVar3);
  }
  return;
}

// WaitForSolverTasks @ 14db78210

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
Chaos::FSkeletalMeshCacheAdapter::WaitForSolverTasks
          (FSkeletalMeshCacheAdapter *this,UPrimitiveComponent *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint *puVar3;
  FTlsAutoCleanup *pFVar4;
  USkeletalMeshComponent *this_00;
  undefined1 local_res18 [16];
  code *local_18;
  undefined1 *local_10;
  
  puVar3 = TThreadSingleton<Chaos::FPhysicsThreadContext>::GetTlsSlot();
  local_10 = local_res18;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`TThreadSingleton<Chaos::FPhysicsThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
             ::Call;
  pFVar4 = FThreadSingletonInitializer::Get
                     ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_18,puVar3);
  bVar2 = IsInGameThread();
  if (((!bVar2) && (*(int *)&pFVar4[2].field_0x4 < 1)) || (*(char *)(pFVar4 + 3) != '\0')) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<3522308889972310313>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Framework\\Threading.h"
                       ,0x129,"IsInGameThreadContext()");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this_00 = CastChecked<USkeletalMeshComponent,UPrimitiveComponent>(param_1);
  if (this_00 != (USkeletalMeshComponent *)0x0) {
    USkeletalMeshComponent::WaitForExistingParallelClothSimulation_GameThread(this_00);
  }
  return;
}

// ~FSkeletalMeshCacheAdapter @ 14dba0220

void __thiscall
Chaos::FSkeletalMeshCacheAdapter::~FSkeletalMeshCacheAdapter(FSkeletalMeshCacheAdapter *this)

{
  return;
}

// GetClothSolver @ 14dbf8a90

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FClothingSimulationSolver * __thiscall
Chaos::FSkeletalMeshCacheAdapter::GetClothSolver
          (FSkeletalMeshCacheAdapter *this,UPrimitiveComponent *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  USkeletalMeshComponent *pUVar3;
  UClass *pUVar4;
  FClothingSimulationSolver *pFVar5;
  FScriptContainerElement *pFVar6;
  FName local_res10;
  FString local_18;
  
  if ((param_1 == (UPrimitiveComponent *)0x0) ||
     (pUVar3 = CastChecked<USkeletalMeshComponent,UPrimitiveComponent>(param_1),
     pUVar3 == (USkeletalMeshComponent *)0x0)) {
LAB_14dbf8b87:
    pFVar5 = (FClothingSimulationSolver *)0x0;
  }
  else {
    if (1 < (pUVar3->ClothingSimulationInstances).ArrayNum) {
      if ((1 < (byte)LogChaosCloth._0_1_) && (bErroredOnce == false)) {
        local_res10 = (FName)pUVar3->_padding_;
        ::FName::ToString(&local_res10,&local_18);
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogChaosCloth);
        if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_18.Data.AllocatorInstance.Data);
        }
      }
      bErroredOnce = true;
    }
    iVar2 = (pUVar3->ClothingSimulationInstances).ArrayNum;
    pFVar6 = (pUVar3->ClothingSimulationInstances).AllocatorInstance.Data;
    pFVar1 = pFVar6 + (longlong)iVar2 * 0x28;
    while( true ) {
      if ((pUVar3->ClothingSimulationInstances).ArrayNum != iVar2) {
        `TCheckedPointerIterator<FClothingSimulationInstance,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_res10);
      }
      if (pFVar6 == pFVar1) goto LAB_14dbf8b87;
      if (((*(longlong *)pFVar6 != 0) && (*(longlong *)(pFVar6 + 0x18) != 0)) &&
         (pUVar4 = UChaosClothingSimulationFactory::StaticClass(),
         *(UClass **)(*(longlong *)(pFVar6 + 0x18) + 0x10) == pUVar4)) break;
      pFVar6 = pFVar6 + 0x28;
    }
    pFVar5 = *(FClothingSimulationSolver **)(*(longlong *)pFVar6 + 0x28);
  }
  return pFVar5;
}

// InitializeForRestState @ 14dc047e0

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
Chaos::FSkeletalMeshCacheAdapter::InitializeForRestState
          (FSkeletalMeshCacheAdapter *this,UPrimitiveComponent *param_1)

{
  USkeletalMeshComponent *this_00;
  FClothingSimulationSolver *pFVar1;
  
  this_00 = CastChecked<USkeletalMeshComponent,UPrimitiveComponent>(param_1);
  if (this_00 != (USkeletalMeshComponent *)0x0) {
    UActorComponent::RecreatePhysicsState((UActorComponent *)this_00);
    USkeletalMeshComponent::RecreateClothingActors(this_00);
  }
  pFVar1 = GetClothSolver(this,param_1);
  if (pFVar1 != (FClothingSimulationSolver *)0x0) {
    pFVar1->bEnableSolver = false;
  }
  return;
}

