// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosCaching
// Functions: 13

// ~FStaticMeshCacheAdapter @ 14dae8c70

void __thiscall
Chaos::FStaticMeshCacheAdapter::~FStaticMeshCacheAdapter(FStaticMeshCacheAdapter *this)

{
  return;
}

// BuildEventsSolver @ 14daece50

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
Chaos::FStaticMeshCacheAdapter::BuildEventsSolver
          (FStaticMeshCacheAdapter *this,UPrimitiveComponent *param_1)

{
  FPhysicsSolverEvents *pFVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014daece53. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pFVar1 = (FPhysicsSolverEvents *)(**(code **)(*(longlong *)this + 0x20))();
  return pFVar1;
}

// GetComponentSolver @ 14daf7d00

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
Chaos::FStaticMeshCacheAdapter::GetComponentSolver
          (FStaticMeshCacheAdapter *this,UPrimitiveComponent *param_1)

{
  UWorld *pUVar1;
  
  if (param_1 != (UPrimitiveComponent *)0x0) {
    if ((*(longlong *)&param_1->field_0xb0 == 0) &&
       (pUVar1 = UActorComponent::GetWorld_Uncached((UActorComponent *)param_1),
       pUVar1 == (UWorld *)0x0)) {
      return (FPBDRigidsSolver *)0x0;
    }
    pUVar1 = *(UWorld **)&param_1->field_0xb0;
    if (pUVar1 == (UWorld *)0x0) {
      pUVar1 = UActorComponent::GetWorld_Uncached((UActorComponent *)param_1);
    }
    if (pUVar1->PhysicsScene != (FPhysScene_Chaos *)0x0) {
      return (FPBDRigidsSolver *)pUVar1->PhysicsScene->_padding_;
    }
  }
  return (FPBDRigidsSolver *)0x0;
}

// GetDesiredClass @ 14daf7d80

UClass * __thiscall Chaos::FStaticMeshCacheAdapter::GetDesiredClass(FStaticMeshCacheAdapter *this)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UStaticMeshComponent.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UStaticMeshComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"StaticMeshComponent",
               &Z_Registration_Info_UClass_UStaticMeshComponent.InnerSingleton,
               UStaticMeshComponent::StaticRegisterNativesUStaticMeshComponent,0x650,0x10,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_UStaticMeshComponent,L"Engine",
               InternalConstructor<UStaticMeshComponent>,
               InternalVTableHelperCtorCaller<UStaticMeshComponent>,aFStackX_8,
               UMeshComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UStaticMeshComponent.InnerSingleton;
}

// GetGuid @ 14daf7f30

FGuid * __thiscall
Chaos::FStaticMeshCacheAdapter::GetGuid(FStaticMeshCacheAdapter *this,FGuid *__return_storage_ptr__)

{
  __return_storage_ptr__->A = 0;
  __return_storage_ptr__->B = 0;
  __return_storage_ptr__->C = 0;
  __return_storage_ptr__->D = 0;
  return __return_storage_ptr__;
}

// GetPriority @ 14daf82f0

uchar __thiscall Chaos::FStaticMeshCacheAdapter::GetPriority(FStaticMeshCacheAdapter *this)

{
  return '\0';
}

// InitializeForPlayback @ 14dafa030

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
Chaos::FStaticMeshCacheAdapter::InitializeForPlayback
          (FStaticMeshCacheAdapter *this,UPrimitiveComponent *param_1,UChaosCache *param_2,
          float param_3)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint *puVar5;
  FTlsAutoCleanup *pFVar6;
  UClass *pUVar7;
  longlong lVar8;
  FBodyInstance *pFVar9;
  FSingleParticlePhysicsProxy *pFVar10;
  undefined1 local_res10 [24];
  FSingleParticlePhysicsProxy *local_20;
  code *local_18;
  undefined1 *local_10;
  
  puVar5 = TThreadSingleton<Chaos::FPhysicsThreadContext>::GetTlsSlot();
  local_10 = local_res10;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`TThreadSingleton<Chaos::FPhysicsThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
             ::Call;
  pFVar6 = FThreadSingletonInitializer::Get
                     ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_18,puVar5);
  bVar3 = IsInGameThread();
  if (((!bVar3) && (*(int *)&pFVar6[2].field_0x4 < 1)) || (*(char *)(pFVar6 + 3) != '\0')) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<3522308889972310313>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Framework\\Threading.h"
                       ,0x129,"IsInGameThreadContext()");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  if (param_1 != (UPrimitiveComponent *)0x0) {
    pUVar7 = Z_Construct_UClass_UStaticMeshComponent_NoRegister();
    iVar1 = (int)pUVar7->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar7->_padding_)) {
      lVar8 = (**(code **)(*(longlong *)param_1 + 0x818))
                        (param_1,0,CONCAT71((int7)((ulonglong)&pUVar7->_padding_ >> 8),1),0xffffffff
                        );
      if (lVar8 != 0) {
        pFVar9 = (FBodyInstance *)
                 (**(code **)(*(longlong *)param_1 + 0x818))(param_1,0,1,0xffffffff);
        pFVar10 = FBodyInstance::GetPhysicsActor(pFVar9);
        if (pFVar10 != (FSingleParticlePhysicsProxy *)0x0) {
          pFVar9 = (FBodyInstance *)
                   (**(code **)(*(longlong *)param_1 + 0x818))(param_1,0,1,0xffffffff);
          local_20 = FBodyInstance::GetPhysicsActor(pFVar9);
          FChaosEngineInterface::SetIsKinematic_AssumesLocked(&local_20,true);
        }
      }
    }
  }
  return true;
}

// InitializeForRecord @ 14dafa660

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
Chaos::FStaticMeshCacheAdapter::InitializeForRecord
          (FStaticMeshCacheAdapter *this,UPrimitiveComponent *param_1,UChaosCache *param_2)

{
  return true;
}

// Playback_PreSolve @ 14dafe800

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
Chaos::FStaticMeshCacheAdapter::Playback_PreSolve
          (FStaticMeshCacheAdapter *this,UPrimitiveComponent *param_1,UChaosCache *param_2,
          double param_3,FPlaybackTickRecord *param_4,
          TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>
          *param_5)

{
  UStaticMeshComponent *pUVar1;
  FSingleParticlePhysicsProxy *pFVar2;
  
  pUVar1 = CastChecked<UStaticMeshComponent,UPrimitiveComponent>(param_1);
  pFVar2 = FBodyInstance::GetPhysicsActor((FBodyInstance *)&pUVar1->_padding_);
  PlayFromCacheInternal(pFVar2,param_2,param_4,param_5);
  return;
}

// Record_PostSolve @ 14db013b0

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
Chaos::FStaticMeshCacheAdapter::Record_PostSolve
          (FStaticMeshCacheAdapter *this,UPrimitiveComponent *param_1,TTransform<double> *param_2,
          FPendingFrameWrite *param_3,double param_4)

{
  UStaticMeshComponent *pUVar1;
  FSingleParticlePhysicsProxy *pFVar2;
  
  pUVar1 = CastChecked<UStaticMeshComponent,UPrimitiveComponent>(param_1);
  pFVar2 = FBodyInstance::GetPhysicsActor((FBodyInstance *)&pUVar1->_padding_);
  RecordToCacheInternal(pFVar2,param_2,param_3,param_4);
  return;
}

// SetRestState @ 14db04c50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
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
Chaos::FStaticMeshCacheAdapter::SetRestState
          (FStaticMeshCacheAdapter *this,UPrimitiveComponent *param_1,UChaosCache *param_2,
          TTransform<double> *param_3,double param_4)

{
  ulonglong uVar1;
  int iVar2;
  undefined1 auStackY_1d8 [32];
  undefined1 local_1a8 [8];
  ForAnyElementType local_1a0;
  undefined8 local_198;
  TBitArray<FDefaultBitArrayAllocator> local_190;
  undefined8 uStack_170;
  void *local_160;
  undefined4 local_158;
  __m128d local_148;
  __m128d local_138;
  __m128d local_128;
  __m128d local_118;
  __m128d local_108;
  __m128d local_f8;
  TTransform<double> local_e8;
  TTransform<double> local_88;
  ulonglong local_28;
  
  if (((param_2 != (UChaosCache *)0x0) &&
      (local_28 = __security_cookie.value ^ (ulonglong)auStackY_1d8,
      param_2->RecordedDuration != 0.0)) && ((param_2->ParticleTracks).ArrayNum == 1)) {
    local_190._24_8_ = ___xmm_00000000ffffffff0000008000000000;
    uStack_170 = _UNK_150631d98;
    local_148.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
    local_128.m128d_f64 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
    local_108.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
    local_138.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
    local_1a8._4_4_ = (undefined4)param_4;
    local_1a8._0_4_ = 0.0;
    local_1a0.Data = (FScriptContainerElement *)0x0;
    local_118.m128d_f64 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
    local_f8.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
    local_198 = 0;
    local_190.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
    local_160 = (void *)0x0;
    local_158 = 0;
    local_e8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
    local_e8.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
    local_e8.Rotation.XY.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
    local_e8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    local_e8.Rotation.XY.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
    local_e8.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
    local_e8.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
    local_e8.Translation.XY.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
    local_e8.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    local_e8.Translation.XY.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
    local_e8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
    local_e8.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
    local_e8.Scale3D.XY.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
    local_e8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    local_e8.Scale3D.XY.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
    UChaosCache::EvaluateSingle
              (param_2,0,(FPlaybackTickRecord *)local_1a8,(TTransform<double> *)0x0,&local_e8,
               (TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_> *
               )0x0);
    local_88.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    local_88.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
    local_88.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
    local_88.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
    local_88.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
    local_88.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
    local_88.Translation.XY.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
    local_88.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    local_88.Translation.XY.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
    local_88.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
    local_88.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
    local_88.Scale3D.XY.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
    local_88.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    local_88.Scale3D.XY.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
    UE::Math::TTransform<double>::Multiply(&local_88,&local_e8,param_3);
    USceneComponent::SetWorldTransform
              ((USceneComponent *)param_1,&local_88,false,(FHitResult *)0x0,None);
    local_158 = 0;
    if (local_160 != (void *)0x0) {
      FMemory::Free(local_160);
    }
    uVar1 = local_198 >> 0x20;
    local_198 = local_198 & 0xffffffff00000000;
    if ((int)uVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x14,4,0,&local_1a0,0,(int *)((longlong)&local_198 + 4));
    }
    iVar2 = local_190.MaxBits;
    local_190._24_8_ = (ulonglong)(uint)local_190.MaxBits << 0x20;
    uStack_170 = 0xffffffff;
    if (0x80 < (uint)iVar2) {
      local_190.NumBits = 0;
      local_190.MaxBits = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_190,0);
    }
    if (local_190.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_190.AllocatorInstance.SecondaryData);
    }
    if (local_1a0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1a0.Data);
    }
  }
  return;
}

// SupportsComponentClass @ 14db054d0

SupportType __thiscall
Chaos::FStaticMeshCacheAdapter::SupportsComponentClass
          (FStaticMeshCacheAdapter *this,UClass *param_1)

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

// ValidForPlayback @ 14db07d10

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
Chaos::FStaticMeshCacheAdapter::ValidForPlayback
          (FStaticMeshCacheAdapter *this,UPrimitiveComponent *param_1,UChaosCache *param_2)

{
  int iVar1;
  UObject *pUVar2;
  UClass *pUVar3;
  
  if (param_1 != (UPrimitiveComponent *)0x0) {
    pUVar3 = Z_Construct_UClass_UStaticMeshComponent_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar3->_padding_)) {
      pUVar2 = *(UObject **)&param_1[1].field_0x50;
      if (UE::GC::GIsIncrementalReachabilityPending == false) {
        if (pUVar2 == (UObject *)0x0) {
          return false;
        }
      }
      else {
        if (pUVar2 == (UObject *)0x0) {
          return false;
        }
        UE::GC::MarkAsReachable(pUVar2);
      }
      if (0 < (param_2->TrackToParticle).ArrayNum) {
        return true;
      }
    }
  }
  return false;
}

