// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 96

// EditEmitterParameters @ 14929a9e0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FNiagaraEmitterParameters * __thiscall
FNiagaraSystemInstance::EditEmitterParameters(FNiagaraSystemInstance *this,int param_1)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FNiagaraEmitterParameters *pFVar5;
  
  uVar1 = this->CurrentFrameIndex + param_1 * 2;
  uVar4 = 0;
  if ((int)uVar1 < (this->EmitterParameters).ArrayNum) {
    uVar4 = ~uVar1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FNiagaraEmitterParameters *)(*pcVar2)();
      return pFVar5;
    }
  }
  return (FNiagaraEmitterParameters *)
         ((this->EmitterParameters).AllocatorInstance.Data + (longlong)(int)uVar1 * 0x20);
}

// GetEmitters @ 1492a2020

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TArrayView<TSharedRef<FNiagaraEmitterInstance,1>,int> * __thiscall
FNiagaraSystemInstance::GetEmitters
          (FNiagaraSystemInstance *this,
          TArrayView<TSharedRef<FNiagaraEmitterInstance,1>,int> *__return_storage_ptr__)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<TSharedRef<FNiagaraEmitterInstance,1>,int> *pTVar4;
  
  iVar1 = (this->Emitters).ArrayNum;
  __return_storage_ptr__->DataPtr =
       (TSharedRef<FNiagaraEmitterInstance,1> *)(this->Emitters).AllocatorInstance.Data;
  if (-1 < iVar1) {
    __return_storage_ptr__->ArrayNum = iVar1;
    return __return_storage_ptr__;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("InCount >= 0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                     ,0xeb,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    pTVar4 = (TArrayView<TSharedRef<FNiagaraEmitterInstance,1>,int> *)(*pcVar2)();
    return pTVar4;
  }
  __return_storage_ptr__->ArrayNum = iVar1;
  return __return_storage_ptr__;
}

// FindDataInterfaceInstanceData @ 1493a1310

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void * __thiscall
FNiagaraSystemInstance::FindDataInterfaceInstanceData
          (FNiagaraSystemInstance *this,UNiagaraDataInterface *param_1)

{
  FWeakObjectPtr *pFVar1;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  UNiagaraDataInterface *pUVar6;
  void *pvVar7;
  FWeakObjectPtr *this_00;
  
  this_00 = (FWeakObjectPtr *)(this->DataInterfaceInstanceDataOffsets).AllocatorInstance.Data;
  pFVar1 = (FWeakObjectPtr *)
           ((longlong)this_00 + (longlong)(this->DataInterfaceInstanceDataOffsets).ArrayNum * 0xc);
  while( true ) {
    if (this_00 == pFVar1) {
      return (void *)0x0;
    }
    pUVar6 = (UNiagaraDataInterface *)FWeakObjectPtr::Get(this_00);
    if (pUVar6 == param_1) break;
    this_00 = (FWeakObjectPtr *)&this_00[1].ObjectSerialNumber;
  }
  if (this_00 == (FWeakObjectPtr *)0x0) {
    return (void *)0x0;
  }
  uVar2 = this_00[1].ObjectIndex;
  uVar5 = 0;
  if ((int)uVar2 < (this->DataInterfaceInstanceData).ArrayNum) {
    uVar5 = ~uVar2 >> 0x1f;
  }
  if ((uVar5 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    pvVar7 = (void *)(*pcVar3)();
    return pvVar7;
  }
  return (this->DataInterfaceInstanceData).AllocatorInstance.Data + (int)uVar2;
}

// FNiagaraSystemInstance @ 1493cce90

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

FNiagaraSystemInstance * __thiscall
FNiagaraSystemInstance::FNiagaraSystemInstance
          (FNiagaraSystemInstance *this,UWorld *param_1,UNiagaraSystem *param_2,
          FNiagaraUserRedirectionParameterStore *param_3,USceneComponent *param_4,
          ENiagaraTickBehavior param_5,bool param_6)

{
  undefined1 *puVar1;
  byte bVar2;
  INiagaraSceneComponentUtils *pIVar3;
  code *pcVar4;
  float fVar5;
  float fVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  int iVar13;
  undefined8 uVar14;
  USceneComponent *this_00;
  TAtomic<unsigned___int64> TVar15;
  int iVar16;
  FNiagaraGpuComputeDispatchInterface *pFVar17;
  FNiagaraGpuComputeDispatchInterface *pFVar18;
  FNiagaraSystemInstance *pFVar19;
  UClass *pUVar20;
  INiagaraSceneComponentUtils *pIVar21;
  FNiagaraGpuComputeDispatchInterface *pFVar22;
  FNiagaraGpuComputeDispatchInterface *pFVar23;
  FNiagaraGpuComputeDispatchInterface *pFVar24;
  FNiagaraGpuComputeDispatchInterface *pFVar25;
  bool bVar26;
  FNiagaraGpuComputeDispatchInterface *local_78;
  FSharedReferencer<1> local_70;
  double local_68;
  double dStack_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined1 local_38;
  undefined7 uStack_37;
  
  bVar26 = param_6;
  this_00 = param_4;
  *(undefined ***)this = &___7FNiagaraSystemInstance__6B_;
  pFVar24 = (FNiagaraGpuComputeDispatchInterface *)0x0;
  this->TickBehavior = param_5;
  this->SystemInstanceState = None;
  this->DeferredResetMode = None;
  this->LastTickTime = 0.0;
  this->LastAge = 0.0;
  this->bSkipTick = false;
  this->CachedRandomSeed = -1;
  *(undefined8 *)&(this->LWCTile).field0_0x0 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_
  ;
  (this->LWCTile).field0_0x0._s_0.Z = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  (this->SystemSimulation).Object = (FNiagaraSystemSimulation *)0x0;
  (this->SystemSimulation).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  this->World = param_1;
  this->SystemInstanceIndex = -1;
  this->SignificanceIndex = -1;
  this->System = param_2;
  this->OverrideParameters = param_3;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_4 != (USceneComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_4);
  }
  (this->AttachComponent).WeakPtr = (FWeakObjectPtr)0x0;
  param_4 = this_00;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this_00 != (USceneComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)this_00);
  }
  FWeakObjectPtr::operator=(&(this->AttachComponent).WeakPtr,(FObjectPtr)&param_4);
  (this->SceneComponentUtils).Ptr = (INiagaraSceneComponentUtils *)0x0;
  fVar5 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar6 = GlobalVectorConstants::Float0001.m128_f32[3];
  auVar7._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar7._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar7._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->WorldTransform).Rotation.XY.m128d_f64 = auVar7;
  auVar8._8_4_ = SUB84((double)fVar6,0);
  auVar8._0_8_ = (double)fVar5;
  auVar8._12_4_ = (int)((ulonglong)(double)fVar6 >> 0x20);
  *(undefined1 (*) [16])(this->WorldTransform).Rotation.ZW.m128d_f64 = auVar8;
  fVar5 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar6 = GlobalVectorConstants::FloatZero.m128_f32[3];
  auVar9._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar9._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar9._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->WorldTransform).Translation.XY.m128d_f64 = auVar9;
  auVar10._8_4_ = SUB84((double)fVar6,0);
  auVar10._0_8_ = (double)fVar5;
  auVar10._12_4_ = (int)((ulonglong)(double)fVar6 >> 0x20);
  *(undefined1 (*) [16])(this->WorldTransform).Translation.ZW.m128d_f64 = auVar10;
  fVar5 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar6 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar11._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar11._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar11._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->WorldTransform).Scale3D.XY.m128d_f64 = auVar11;
  auVar12._8_4_ = SUB84((double)fVar6,0);
  auVar12._0_8_ = (double)fVar5;
  auVar12._12_4_ = (int)((ulonglong)(double)fVar6 >> 0x20);
  *(undefined1 (*) [16])(this->WorldTransform).Scale3D.ZW.m128d_f64 = auVar12;
  (this->PreviousLocation).bIsSet = false;
  this->Age = 0.0;
  this->LastRenderTime = 0.0;
  this->TickCount = 0;
  this->RandomSeed = 0;
  this->RandomSeedOffset = 0;
  this->LODDistance = 0.0;
  this->MaxLODDistance = 3.4028235e+38;
  this->WarmupTickCount = -1;
  this->WarmupTickDelta = 0.0;
  (this->IDName).ComparisonIndex = 0;
  (this->IDName).Number = 0;
  (this->Emitters).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Emitters).ArrayNum = 0;
  (this->Emitters).ArrayMax = 0;
  *(undefined8 *)&this->OnPostTickDelegate = 0;
  *(undefined8 *)&(this->OnPostTickDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->OnPostTickDelegate).field_0x10 = 0;
  *(undefined8 *)&this->OnCompleteDelegate = 0;
  *(undefined8 *)&(this->OnCompleteDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->OnCompleteDelegate).field_0x10 = 0;
  (this->CurrentCapture).Object =
       (TArray<TSharedPtr<FNiagaraScriptDebuggerInfo,1>,TSizedDefaultAllocator<32>_> *)0x0;
  (this->CurrentCapture).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->CurrentCaptureGuid).Object = (FGuid *)0x0;
  (this->CurrentCaptureGuid).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  this->bWasSoloPriorToCaptureRequest = false;
  *(undefined8 *)&this->CapturedFrames = 0;
  *(undefined8 *)&(this->CapturedFrames).field_0x8 = 0;
  *(undefined8 *)&(this->CapturedFrames).field_0x20 = 0;
  *(undefined4 *)&(this->CapturedFrames).field_0x28 = 0;
  *(undefined4 *)&(this->CapturedFrames).field_0x2c = 0x80;
  *(undefined4 *)&(this->CapturedFrames).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->CapturedFrames).field_0x34 = 0;
  *(undefined8 *)&(this->CapturedFrames).field_0x40 = 0;
  *(undefined4 *)&(this->CapturedFrames).field_0x48 = 0;
  (this->DataInterfaceInstanceData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DataInterfaceInstanceData).ArrayNum = 0;
  (this->DataInterfaceInstanceData).ArrayMax = 0;
  (this->PreTickDataInterfaces).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PreTickDataInterfaces).ArrayNum = 0;
  (this->PreTickDataInterfaces).ArrayMax = 0;
  (this->PostTickDataInterfaces).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PostTickDataInterfaces).ArrayNum = 0;
  (this->PostTickDataInterfaces).ArrayMax = 0;
  (this->DataInterfaceInstanceDataOffsets).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DataInterfaceInstanceDataOffsets).ArrayNum = 0;
  (this->DataInterfaceInstanceDataOffsets).ArrayMax = 0;
  (this->SystemSpawnDIStageTickHandler).PreStageTickList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->SystemSpawnDIStageTickHandler).PreStageTickList.ArrayNum = 0;
  (this->SystemSpawnDIStageTickHandler).PreStageTickList.ArrayMax = 0;
  (this->SystemSpawnDIStageTickHandler).PostStageTickList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->SystemSpawnDIStageTickHandler).PostStageTickList.ArrayNum = 0;
  (this->SystemSpawnDIStageTickHandler).PostStageTickList.ArrayMax = 0;
  (this->SystemUpdateDIStageTickHandler).PreStageTickList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->SystemUpdateDIStageTickHandler).PreStageTickList.ArrayNum = 0;
  (this->SystemUpdateDIStageTickHandler).PreStageTickList.ArrayMax = 0;
  (this->SystemUpdateDIStageTickHandler).PostStageTickList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->SystemUpdateDIStageTickHandler).PostStageTickList.ArrayNum = 0;
  (this->SystemUpdateDIStageTickHandler).PostStageTickList.ArrayMax = 0;
  this->PerInstanceDIFunctions[0].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->PerInstanceDIFunctions[0].ArrayNum = 0;
  this->PerInstanceDIFunctions[0].ArrayMax = 0;
  this->PerInstanceDIFunctions[1].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->PerInstanceDIFunctions[1].ArrayNum = 0;
  this->PerInstanceDIFunctions[1].ArrayMax = 0;
  FNiagaraParameterStore::FNiagaraParameterStore(&this->InstanceParameters);
  this->GlobalParameters[0]._Pad0 = 0;
  this->GlobalParameters[0]._Pad1 = 0;
  this->GlobalParameters[0].WorldDeltaTime = 0.0;
  this->GlobalParameters[0].EngineDeltaTime = 0.0;
  this->GlobalParameters[0].EngineInvDeltaTime = 0.0;
  this->GlobalParameters[0].EngineTime = 0.0;
  this->GlobalParameters[0].EngineRealTime = 0.0;
  this->GlobalParameters[0].QualityLevel = 0;
  this->GlobalParameters[1]._Pad0 = 0;
  this->GlobalParameters[1]._Pad1 = 0;
  this->GlobalParameters[1].WorldDeltaTime = 0.0;
  this->GlobalParameters[1].EngineDeltaTime = 0.0;
  this->GlobalParameters[1].EngineInvDeltaTime = 0.0;
  this->GlobalParameters[1].EngineTime = 0.0;
  this->GlobalParameters[1].EngineRealTime = 0.0;
  this->GlobalParameters[1].QualityLevel = 0;
  this->SystemParameters[0]._Pad0 = 0;
  this->SystemParameters[0]._Pad1 = 0;
  this->SystemParameters[0].EngineTimeSinceRendered = 0.0;
  this->SystemParameters[0].EngineLodDistance = 0.0;
  this->SystemParameters[0].EngineLodDistanceFraction = 0.0;
  this->SystemParameters[0].EngineSystemAge = 0.0;
  this->SystemParameters[0].EngineExecutionState = 0;
  this->SystemParameters[0].EngineTickCount = 0;
  this->SystemParameters[0].EngineEmitterCount = 0;
  this->SystemParameters[0].EngineAliveEmitterCount = 0;
  this->SystemParameters[0].SignificanceIndex = 0;
  this->SystemParameters[0].RandomSeed = 0;
  this->SystemParameters[0].CurrentTimeStep = 0;
  this->SystemParameters[0].NumTimeSteps = 0;
  this->SystemParameters[0].TimeStepFraction = 0.0;
  this->SystemParameters[0].NumParticles = 0;
  this->SystemParameters[1]._Pad0 = 0;
  this->SystemParameters[1]._Pad1 = 0;
  this->SystemParameters[1].EngineTimeSinceRendered = 0.0;
  this->SystemParameters[1].EngineLodDistance = 0.0;
  this->SystemParameters[1].EngineLodDistanceFraction = 0.0;
  this->SystemParameters[1].EngineSystemAge = 0.0;
  this->SystemParameters[1].EngineExecutionState = 0;
  this->SystemParameters[1].EngineTickCount = 0;
  this->SystemParameters[1].EngineEmitterCount = 0;
  this->SystemParameters[1].EngineAliveEmitterCount = 0;
  this->SystemParameters[1].SignificanceIndex = 0;
  this->SystemParameters[1].RandomSeed = 0;
  this->SystemParameters[1].CurrentTimeStep = 0;
  this->SystemParameters[1].NumTimeSteps = 0;
  this->SystemParameters[1].TimeStepFraction = 0.0;
  uVar14 = UE::Math::TMatrix<float>::Identity.M[0]._8_8_;
  this->SystemParameters[1].NumParticles = 0;
  *(undefined8 *)this->OwnerParameters[0].EngineLocalToWorld.M[0] =
       UE::Math::TMatrix<float>::Identity.M[0]._0_8_;
  *(undefined8 *)(this->OwnerParameters[0].EngineLocalToWorld.M[0] + 2) = uVar14;
  uVar14 = UE::Math::TMatrix<float>::Identity.M[1]._8_8_;
  *(undefined8 *)this->OwnerParameters[0].EngineLocalToWorld.M[1] =
       UE::Math::TMatrix<float>::Identity.M[1]._0_8_;
  *(undefined8 *)(this->OwnerParameters[0].EngineLocalToWorld.M[1] + 2) = uVar14;
  uVar14 = UE::Math::TMatrix<float>::Identity.M[2]._8_8_;
  *(undefined8 *)this->OwnerParameters[0].EngineLocalToWorld.M[2] =
       UE::Math::TMatrix<float>::Identity.M[2]._0_8_;
  *(undefined8 *)(this->OwnerParameters[0].EngineLocalToWorld.M[2] + 2) = uVar14;
  uVar14 = UE::Math::TMatrix<float>::Identity.M[3]._8_8_;
  *(undefined8 *)this->OwnerParameters[0].EngineLocalToWorld.M[3] =
       UE::Math::TMatrix<float>::Identity.M[3]._0_8_;
  *(undefined8 *)(this->OwnerParameters[0].EngineLocalToWorld.M[3] + 2) = uVar14;
  uVar14 = UE::Math::TMatrix<float>::Identity.M[0]._8_8_;
  *(undefined8 *)this->OwnerParameters[0].EngineWorldToLocal.M[0] =
       UE::Math::TMatrix<float>::Identity.M[0]._0_8_;
  *(undefined8 *)(this->OwnerParameters[0].EngineWorldToLocal.M[0] + 2) = uVar14;
  uVar14 = UE::Math::TMatrix<float>::Identity.M[1]._8_8_;
  *(undefined8 *)this->OwnerParameters[0].EngineWorldToLocal.M[1] =
       UE::Math::TMatrix<float>::Identity.M[1]._0_8_;
  *(undefined8 *)(this->OwnerParameters[0].EngineWorldToLocal.M[1] + 2) = uVar14;
  uVar14 = UE::Math::TMatrix<float>::Identity.M[2]._8_8_;
  *(undefined8 *)this->OwnerParameters[0].EngineWorldToLocal.M[2] =
       UE::Math::TMatrix<float>::Identity.M[2]._0_8_;
  *(undefined8 *)(this->OwnerParameters[0].EngineWorldToLocal.M[2] + 2) = uVar14;
  uVar14 = UE::Math::TMatrix<float>::Identity.M[3]._8_8_;
  *(undefined8 *)this->OwnerParameters[0].EngineWorldToLocal.M[3] =
       UE::Math::TMatrix<float>::Identity.M[3]._0_8_;
  *(undefined8 *)(this->OwnerParameters[0].EngineWorldToLocal.M[3] + 2) = uVar14;
  uVar14 = UE::Math::TMatrix<float>::Identity.M[0]._8_8_;
  *(undefined8 *)this->OwnerParameters[0].EngineLocalToWorldTransposed.M[0] =
       UE::Math::TMatrix<float>::Identity.M[0]._0_8_;
  *(undefined8 *)(this->OwnerParameters[0].EngineLocalToWorldTransposed.M[0] + 2) = uVar14;
  uVar14 = UE::Math::TMatrix<float>::Identity.M[1]._8_8_;
  *(undefined8 *)this->OwnerParameters[0].EngineLocalToWorldTransposed.M[1] =
       UE::Math::TMatrix<float>::Identity.M[1]._0_8_;
  *(undefined8 *)(this->OwnerParameters[0].EngineLocalToWorldTransposed.M[1] + 2) = uVar14;
  uVar14 = UE::Math::TMatrix<float>::Identity.M[2]._8_8_;
  *(undefined8 *)this->OwnerParameters[0].EngineLocalToWorldTransposed.M[2] =
       UE::Math::TMatrix<float>::Identity.M[2]._0_8_;
  *(undefined8 *)(this->OwnerParameters[0].EngineLocalToWorldTransposed.M[2] + 2) = uVar14;
  uVar14 = UE::Math::TMatrix<float>::Identity.M[3]._8_8_;
  *(undefined8 *)this->OwnerParameters[0].EngineLocalToWorldTransposed.M[3] =
       UE::Math::TMatrix<float>::Identity.M[3]._0_8_;
  *(undefined8 *)(this->OwnerParameters[0].EngineLocalToWorldTransposed.M[3] + 2) = uVar14;
  uVar14 = UE::Math::TMatrix<float>::Identity.M[0]._8_8_;
  *(undefined8 *)this->OwnerParameters[0].EngineWorldToLocalTransposed.M[0] =
       UE::Math::TMatrix<float>::Identity.M[0]._0_8_;
  *(undefined8 *)(this->OwnerParameters[0].EngineWorldToLocalTransposed.M[0] + 2) = uVar14;
  uVar14 = UE::Math::TMatrix<float>::Identity.M[1]._8_8_;
  *(undefined8 *)this->OwnerParameters[0].EngineWorldToLocalTransposed.M[1] =
       UE::Math::TMatrix<float>::Identity.M[1]._0_8_;
  *(undefined8 *)(this->OwnerParameters[0].EngineWorldToLocalTransposed.M[1] + 2) = uVar14;
  uVar14 = UE::Math::TMatrix<float>::Identity.M[2]._8_8_;
  *(undefined8 *)this->OwnerParameters[0].EngineWorldToLocalTransposed.M[2] =
       UE::Math::TMatrix<float>::Identity.M[2]._0_8_;
  *(undefined8 *)(this->OwnerParameters[0].EngineWorldToLocalTransposed.M[2] + 2) = uVar14;
  uVar14 = UE::Math::TMatrix<float>::Identity.M[3]._8_8_;
  *(undefined8 *)this->OwnerParameters[0].EngineWorldToLocalTransposed.M[3] =
       UE::Math::TMatrix<float>::Identity.M[3]._0_8_;
  *(undefined8 *)(this->OwnerParameters[0].EngineWorldToLocalTransposed.M[3] + 2) = uVar14;
  uVar14 = UE::Math::TMatrix<float>::Identity.M[0]._8_8_;
  *(undefined8 *)this->OwnerParameters[0].EngineLocalToWorldNoScale.M[0] =
       UE::Math::TMatrix<float>::Identity.M[0]._0_8_;
  *(undefined8 *)(this->OwnerParameters[0].EngineLocalToWorldNoScale.M[0] + 2) = uVar14;
  uVar14 = UE::Math::TMatrix<float>::Identity.M[1]._8_8_;
  *(undefined8 *)this->OwnerParameters[0].EngineLocalToWorldNoScale.M[1] =
       UE::Math::TMatrix<float>::Identity.M[1]._0_8_;
  *(undefined8 *)(this->OwnerParameters[0].EngineLocalToWorldNoScale.M[1] + 2) = uVar14;
  uVar14 = UE::Math::TMatrix<float>::Identity.M[2]._8_8_;
  *(undefined8 *)this->OwnerParameters[0].EngineLocalToWorldNoScale.M[2] =
       UE::Math::TMatrix<float>::Identity.M[2]._0_8_;
  *(undefined8 *)(this->OwnerParameters[0].EngineLocalToWorldNoScale.M[2] + 2) = uVar14;
  uVar14 = UE::Math::TMatrix<float>::Identity.M[3]._8_8_;
  *(undefined8 *)this->OwnerParameters[0].EngineLocalToWorldNoScale.M[3] =
       UE::Math::TMatrix<float>::Identity.M[3]._0_8_;
  *(undefined8 *)(this->OwnerParameters[0].EngineLocalToWorldNoScale.M[3] + 2) = uVar14;
  uVar14 = UE::Math::TMatrix<float>::Identity.M[0]._8_8_;
  *(undefined8 *)this->OwnerParameters[0].EngineWorldToLocalNoScale.M[0] =
       UE::Math::TMatrix<float>::Identity.M[0]._0_8_;
  *(undefined8 *)(this->OwnerParameters[0].EngineWorldToLocalNoScale.M[0] + 2) = uVar14;
  uVar14 = UE::Math::TMatrix<float>::Identity.M[1]._8_8_;
  *(undefined8 *)this->OwnerParameters[0].EngineWorldToLocalNoScale.M[1] =
       UE::Math::TMatrix<float>::Identity.M[1]._0_8_;
  *(undefined8 *)(this->OwnerParameters[0].EngineWorldToLocalNoScale.M[1] + 2) = uVar14;
  uVar14 = UE::Math::TMatrix<float>::Identity.M[2]._8_8_;
  *(undefined8 *)this->OwnerParameters[0].EngineWorldToLocalNoScale.M[2] =
       UE::Math::TMatrix<float>::Identity.M[2]._0_8_;
  *(undefined8 *)(this->OwnerParameters[0].EngineWorldToLocalNoScale.M[2] + 2) = uVar14;
  uVar14 = UE::Math::TMatrix<float>::Identity.M[3]._8_8_;
  *(undefined8 *)this->OwnerParameters[0].EngineWorldToLocalNoScale.M[3] =
       UE::Math::TMatrix<float>::Identity.M[3]._0_8_;
  *(undefined8 *)(this->OwnerParameters[0].EngineWorldToLocalNoScale.M[3] + 2) = uVar14;
  this->OwnerParameters[0].EngineRotation = UE::Math::TQuat<float>::Identity;
  *(undefined8 *)&this->OwnerParameters[0].EnginePosition.field0_0x0 = 0;
  this->OwnerParameters[0].EnginePosition.field0_0x0._s_0.Z = 0.0;
  *(undefined8 *)&this->OwnerParameters[0].EngineVelocity.field0_0x0 = 0;
  this->OwnerParameters[0].EngineVelocity.field0_0x0._s_0.Z = 0.0;
  *(undefined8 *)&this->OwnerParameters[0].EngineXAxis.field0_0x0 = 0x3f800000;
  this->OwnerParameters[0].EngineXAxis.field0_0x0._s_0.Z = 0.0;
  this->OwnerParameters[0].EngineYAxis.field0_0x0._s_0.X = 0.0;
  *(undefined8 *)((longlong)&this->OwnerParameters[0].EngineYAxis.field0_0x0 + 4) = 0x3f800000;
  *(undefined8 *)&this->OwnerParameters[0].EngineZAxis.field0_0x0 = 0;
  this->OwnerParameters[0].EngineZAxis.field0_0x0._s_0.Z = 1.0;
  this->OwnerParameters[0].EngineScale.field0_0x0._s_0.X = 1.0;
  this->OwnerParameters[0].EngineScale.field0_0x0._s_0.Y = 1.0;
  this->OwnerParameters[0].EngineScale.field0_0x0._s_0.Z = 1.0;
  *(undefined8 *)&this->OwnerParameters[0].EngineLWCTile.field0_0x0 = 0;
  *(undefined8 *)((longlong)&this->OwnerParameters[0].EngineLWCTile.field0_0x0 + 8) = 0;
  uVar14 = UE::Math::TMatrix<float>::Identity.M[0]._8_8_;
  *(undefined8 *)this->OwnerParameters[1].EngineLocalToWorld.M[0] =
       UE::Math::TMatrix<float>::Identity.M[0]._0_8_;
  *(undefined8 *)(this->OwnerParameters[1].EngineLocalToWorld.M[0] + 2) = uVar14;
  uVar14 = UE::Math::TMatrix<float>::Identity.M[1]._8_8_;
  *(undefined8 *)this->OwnerParameters[1].EngineLocalToWorld.M[1] =
       UE::Math::TMatrix<float>::Identity.M[1]._0_8_;
  *(undefined8 *)(this->OwnerParameters[1].EngineLocalToWorld.M[1] + 2) = uVar14;
  uVar14 = UE::Math::TMatrix<float>::Identity.M[2]._8_8_;
  *(undefined8 *)this->OwnerParameters[1].EngineLocalToWorld.M[2] =
       UE::Math::TMatrix<float>::Identity.M[2]._0_8_;
  *(undefined8 *)(this->OwnerParameters[1].EngineLocalToWorld.M[2] + 2) = uVar14;
  uVar14 = UE::Math::TMatrix<float>::Identity.M[3]._8_8_;
  *(undefined8 *)this->OwnerParameters[1].EngineLocalToWorld.M[3] =
       UE::Math::TMatrix<float>::Identity.M[3]._0_8_;
  *(undefined8 *)(this->OwnerParameters[1].EngineLocalToWorld.M[3] + 2) = uVar14;
  uVar14 = UE::Math::TMatrix<float>::Identity.M[0]._8_8_;
  *(undefined8 *)this->OwnerParameters[1].EngineWorldToLocal.M[0] =
       UE::Math::TMatrix<float>::Identity.M[0]._0_8_;
  *(undefined8 *)(this->OwnerParameters[1].EngineWorldToLocal.M[0] + 2) = uVar14;
  uVar14 = UE::Math::TMatrix<float>::Identity.M[1]._8_8_;
  *(undefined8 *)this->OwnerParameters[1].EngineWorldToLocal.M[1] =
       UE::Math::TMatrix<float>::Identity.M[1]._0_8_;
  *(undefined8 *)(this->OwnerParameters[1].EngineWorldToLocal.M[1] + 2) = uVar14;
  uVar14 = UE::Math::TMatrix<float>::Identity.M[2]._8_8_;
  *(undefined8 *)this->OwnerParameters[1].EngineWorldToLocal.M[2] =
       UE::Math::TMatrix<float>::Identity.M[2]._0_8_;
  *(undefined8 *)(this->OwnerParameters[1].EngineWorldToLocal.M[2] + 2) = uVar14;
  uVar14 = UE::Math::TMatrix<float>::Identity.M[3]._8_8_;
  *(undefined8 *)this->OwnerParameters[1].EngineWorldToLocal.M[3] =
       UE::Math::TMatrix<float>::Identity.M[3]._0_8_;
  *(undefined8 *)(this->OwnerParameters[1].EngineWorldToLocal.M[3] + 2) = uVar14;
  uVar14 = UE::Math::TMatrix<float>::Identity.M[0]._8_8_;
  *(undefined8 *)this->OwnerParameters[1].EngineLocalToWorldTransposed.M[0] =
       UE::Math::TMatrix<float>::Identity.M[0]._0_8_;
  *(undefined8 *)(this->OwnerParameters[1].EngineLocalToWorldTransposed.M[0] + 2) = uVar14;
  uVar14 = UE::Math::TMatrix<float>::Identity.M[1]._8_8_;
  *(undefined8 *)this->OwnerParameters[1].EngineLocalToWorldTransposed.M[1] =
       UE::Math::TMatrix<float>::Identity.M[1]._0_8_;
  *(undefined8 *)(this->OwnerParameters[1].EngineLocalToWorldTransposed.M[1] + 2) = uVar14;
  uVar14 = UE::Math::TMatrix<float>::Identity.M[2]._8_8_;
  *(undefined8 *)this->OwnerParameters[1].EngineLocalToWorldTransposed.M[2] =
       UE::Math::TMatrix<float>::Identity.M[2]._0_8_;
  *(undefined8 *)(this->OwnerParameters[1].EngineLocalToWorldTransposed.M[2] + 2) = uVar14;
  uVar14 = UE::Math::TMatrix<float>::Identity.M[3]._8_8_;
  *(undefined8 *)this->OwnerParameters[1].EngineLocalToWorldTransposed.M[3] =
       UE::Math::TMatrix<float>::Identity.M[3]._0_8_;
  *(undefined8 *)(this->OwnerParameters[1].EngineLocalToWorldTransposed.M[3] + 2) = uVar14;
  uVar14 = UE::Math::TMatrix<float>::Identity.M[0]._8_8_;
  *(undefined8 *)this->OwnerParameters[1].EngineWorldToLocalTransposed.M[0] =
       UE::Math::TMatrix<float>::Identity.M[0]._0_8_;
  *(undefined8 *)(this->OwnerParameters[1].EngineWorldToLocalTransposed.M[0] + 2) = uVar14;
  uVar14 = UE::Math::TMatrix<float>::Identity.M[1]._8_8_;
  *(undefined8 *)this->OwnerParameters[1].EngineWorldToLocalTransposed.M[1] =
       UE::Math::TMatrix<float>::Identity.M[1]._0_8_;
  *(undefined8 *)(this->OwnerParameters[1].EngineWorldToLocalTransposed.M[1] + 2) = uVar14;
  uVar14 = UE::Math::TMatrix<float>::Identity.M[2]._8_8_;
  *(undefined8 *)this->OwnerParameters[1].EngineWorldToLocalTransposed.M[2] =
       UE::Math::TMatrix<float>::Identity.M[2]._0_8_;
  *(undefined8 *)(this->OwnerParameters[1].EngineWorldToLocalTransposed.M[2] + 2) = uVar14;
  uVar14 = UE::Math::TMatrix<float>::Identity.M[3]._8_8_;
  *(undefined8 *)this->OwnerParameters[1].EngineWorldToLocalTransposed.M[3] =
       UE::Math::TMatrix<float>::Identity.M[3]._0_8_;
  *(undefined8 *)(this->OwnerParameters[1].EngineWorldToLocalTransposed.M[3] + 2) = uVar14;
  uVar14 = UE::Math::TMatrix<float>::Identity.M[0]._8_8_;
  *(undefined8 *)this->OwnerParameters[1].EngineLocalToWorldNoScale.M[0] =
       UE::Math::TMatrix<float>::Identity.M[0]._0_8_;
  *(undefined8 *)(this->OwnerParameters[1].EngineLocalToWorldNoScale.M[0] + 2) = uVar14;
  uVar14 = UE::Math::TMatrix<float>::Identity.M[1]._8_8_;
  *(undefined8 *)this->OwnerParameters[1].EngineLocalToWorldNoScale.M[1] =
       UE::Math::TMatrix<float>::Identity.M[1]._0_8_;
  *(undefined8 *)(this->OwnerParameters[1].EngineLocalToWorldNoScale.M[1] + 2) = uVar14;
  uVar14 = UE::Math::TMatrix<float>::Identity.M[2]._8_8_;
  *(undefined8 *)this->OwnerParameters[1].EngineLocalToWorldNoScale.M[2] =
       UE::Math::TMatrix<float>::Identity.M[2]._0_8_;
  *(undefined8 *)(this->OwnerParameters[1].EngineLocalToWorldNoScale.M[2] + 2) = uVar14;
  uVar14 = UE::Math::TMatrix<float>::Identity.M[3]._8_8_;
  *(undefined8 *)this->OwnerParameters[1].EngineLocalToWorldNoScale.M[3] =
       UE::Math::TMatrix<float>::Identity.M[3]._0_8_;
  *(undefined8 *)(this->OwnerParameters[1].EngineLocalToWorldNoScale.M[3] + 2) = uVar14;
  uVar14 = UE::Math::TMatrix<float>::Identity.M[0]._8_8_;
  *(undefined8 *)this->OwnerParameters[1].EngineWorldToLocalNoScale.M[0] =
       UE::Math::TMatrix<float>::Identity.M[0]._0_8_;
  *(undefined8 *)(this->OwnerParameters[1].EngineWorldToLocalNoScale.M[0] + 2) = uVar14;
  uVar14 = UE::Math::TMatrix<float>::Identity.M[1]._8_8_;
  *(undefined8 *)this->OwnerParameters[1].EngineWorldToLocalNoScale.M[1] =
       UE::Math::TMatrix<float>::Identity.M[1]._0_8_;
  *(undefined8 *)(this->OwnerParameters[1].EngineWorldToLocalNoScale.M[1] + 2) = uVar14;
  uVar14 = UE::Math::TMatrix<float>::Identity.M[2]._8_8_;
  *(undefined8 *)this->OwnerParameters[1].EngineWorldToLocalNoScale.M[2] =
       UE::Math::TMatrix<float>::Identity.M[2]._0_8_;
  *(undefined8 *)(this->OwnerParameters[1].EngineWorldToLocalNoScale.M[2] + 2) = uVar14;
  uVar14 = UE::Math::TMatrix<float>::Identity.M[3]._8_8_;
  *(undefined8 *)this->OwnerParameters[1].EngineWorldToLocalNoScale.M[3] =
       UE::Math::TMatrix<float>::Identity.M[3]._0_8_;
  *(undefined8 *)(this->OwnerParameters[1].EngineWorldToLocalNoScale.M[3] + 2) = uVar14;
  this->OwnerParameters[1].EngineRotation = UE::Math::TQuat<float>::Identity;
  *(undefined8 *)&this->OwnerParameters[1].EnginePosition.field0_0x0 = 0;
  this->OwnerParameters[1].EnginePosition.field0_0x0._s_0.Z = 0.0;
  *(undefined8 *)&this->OwnerParameters[1].EngineVelocity.field0_0x0 = 0;
  this->OwnerParameters[1].EngineVelocity.field0_0x0._s_0.Z = 0.0;
  *(undefined8 *)&this->OwnerParameters[1].EngineXAxis.field0_0x0 = 0x3f800000;
  this->OwnerParameters[1].EngineXAxis.field0_0x0._s_0.Z = 0.0;
  this->OwnerParameters[1].EngineYAxis.field0_0x0._s_0.X = 0.0;
  *(undefined8 *)((longlong)&this->OwnerParameters[1].EngineYAxis.field0_0x0 + 4) = 0x3f800000;
  *(undefined8 *)&this->OwnerParameters[1].EngineZAxis.field0_0x0 = 0;
  this->OwnerParameters[1].EngineZAxis.field0_0x0._s_0.Z = 1.0;
  this->OwnerParameters[1].EngineScale.field0_0x0._s_0.X = 1.0;
  this->OwnerParameters[1].EngineScale.field0_0x0._s_0.Y = 1.0;
  this->OwnerParameters[1].EngineScale.field0_0x0._s_0.Z = 1.0;
  *(undefined8 *)&this->OwnerParameters[1].EngineLWCTile.field0_0x0 = 0;
  *(undefined8 *)((longlong)&this->OwnerParameters[1].EngineLWCTile.field0_0x0 + 8) = 0;
  (this->EmitterParameters).ArrayNum = 0;
  (this->EmitterParameters).ArrayMax = 0;
  *(undefined8 *)&(this->EmitterEventDataSetMap).field_0x8 = 0;
  (this->EmitterParameters).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(undefined8 *)&this->EmitterEventDataSetMap = 0;
  *(undefined8 *)&(this->EmitterEventDataSetMap).field_0x20 = 0;
  *(undefined4 *)&(this->EmitterEventDataSetMap).field_0x28 = 0;
  *(undefined4 *)&(this->EmitterEventDataSetMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->EmitterEventDataSetMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->EmitterEventDataSetMap).field_0x34 = 0;
  *(undefined8 *)&(this->EmitterEventDataSetMap).field_0x40 = 0;
  *(undefined4 *)&(this->EmitterEventDataSetMap).field_0x48 = 0;
  bVar2 = this->field_0x841;
  puVar1 = &this->field_0x840;
  this->CurrentFrameIndex = '\x01';
  this->bDataInterfacesHaveTickPostreqs = '\0';
  this->bDataInterfacesHaveTickPrereqs = '\0';
  this->bHasGPUEmitters = '\0';
  this->bNotifyOnCompletion = '\0';
  this->bForceSolo = '\0';
  this->bSolo = '\0';
  this->ParametersValid = '\0';
  this->CachedDeltaSeconds = 0.0;
  this->TimeSinceLastForceUpdateTransform = 0.0;
  (this->ConcurrentTickGraphEvent).Reference = (FBaseGraphTask *)0x0;
  (this->ConcurrentTickBatchGraphEvent).Reference = (FBaseGraphTask *)0x0;
  (this->FinalizeRef).TaskEntry = (FNiagaraSystemInstance **)0x0;
  (this->FinalizeRef).DebugCounter = (atomic<int> *)0x0;
  this->field_0x841 = bVar2 & 0xc0 | bVar26 << 4;
  (this->FixedBounds_GT).Min.field0_0x0._s_0.X = 0.0;
  (this->FixedBounds_GT).Min.field0_0x0._s_0.Y = 0.0;
  (this->FixedBounds_GT).Min.field0_0x0._s_0.Z = 0.0;
  (this->FixedBounds_GT).Max.field0_0x0._s_0.X = 0.0;
  (this->FixedBounds_GT).Max.field0_0x0._s_0.Y = 0.0;
  (this->FixedBounds_GT).Max.field0_0x0._s_0.Z = 0.0;
  (this->FixedBounds_GT).IsValid = '\0';
  (this->FixedBounds_GT).Pad[0] = '\0';
  (this->FixedBounds_GT).Pad[1] = '\0';
  (this->FixedBounds_GT).Pad[2] = '\0';
  (this->FixedBounds_GT).Pad[3] = '\0';
  (this->FixedBounds_GT).Pad[4] = '\0';
  (this->FixedBounds_GT).Pad[5] = '\0';
  (this->FixedBounds_GT).Pad[6] = '\0';
  (this->FixedBounds_CNC).Min.field0_0x0._s_0.X = 0.0;
  (this->FixedBounds_CNC).Min.field0_0x0._s_0.Y = 0.0;
  (this->FixedBounds_CNC).Min.field0_0x0._s_0.Z = 0.0;
  (this->FixedBounds_CNC).Max.field0_0x0._s_0.X = 0.0;
  (this->FixedBounds_CNC).Max.field0_0x0._s_0.Y = 0.0;
  (this->FixedBounds_CNC).Max.field0_0x0._s_0.Z = 0.0;
  (this->FixedBounds_CNC).IsValid = '\0';
  (this->FixedBounds_CNC).Pad[0] = '\0';
  (this->FixedBounds_CNC).Pad[1] = '\0';
  (this->FixedBounds_CNC).Pad[2] = '\0';
  (this->FixedBounds_CNC).Pad[3] = '\0';
  (this->FixedBounds_CNC).Pad[4] = '\0';
  (this->FixedBounds_CNC).Pad[5] = '\0';
  (this->FixedBounds_CNC).Pad[6] = '\0';
  (this->LocalBounds).Min.field0_0x0._s_0.X = 0.0;
  (this->LocalBounds).Min.field0_0x0._s_0.Y = 0.0;
  (this->LocalBounds).Min.field0_0x0._s_0.Z = 0.0;
  (this->LocalBounds).Max.field0_0x0._s_0.X = 0.0;
  (this->LocalBounds).Max.field0_0x0._s_0.Y = 0.0;
  (this->LocalBounds).Max.field0_0x0._s_0.Z = 0.0;
  (this->LocalBounds).IsValid = '\0';
  (this->LocalBounds).Pad[0] = '\0';
  (this->LocalBounds).Pad[1] = '\0';
  (this->LocalBounds).Pad[2] = '\0';
  (this->LocalBounds).Pad[3] = '\0';
  (this->LocalBounds).Pad[4] = '\0';
  (this->LocalBounds).Pad[5] = '\0';
  (this->LocalBounds).Pad[6] = '\0';
  (this->ComputeDispatchInterfacePtr).Object = (FNiagaraGpuComputeDispatchInterface *)0x0;
  (this->ComputeDispatchInterfacePtr).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->SystemGpuComputeProxy).Ptr = (FNiagaraSystemGpuComputeProxy *)0x0;
  (this->CrashReporterTag).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CrashReporterTag).Data.ArrayNum = 0;
  (this->CrashReporterTag).Data.ArrayMax = 0;
  this->RequestedExecutionState = Complete;
  this->ActualExecutionState = Complete;
  this->FeatureLevel = GMaxRHIFeatureLevel;
  (this->GPUDataInterfaces).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GPUDataInterfaces).ArrayNum = 0;
  (this->GPUDataInterfaces).ArrayMax = 0;
  (this->SystemState_RandomStream).InitialSeed = 0;
  (this->SystemState_RandomStream).Seed = 0;
  this->TotalGPUParamSize = 0;
  this->ActiveGPUEmitterCount = 0;
  this->GPUDataInterfaceInstanceDataSize = 0;
  *&(this->GatheredInstanceParameters).ComponentTrans.Rotation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&(this->GatheredInstanceParameters).ComponentTrans.Rotation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(this->GatheredInstanceParameters).ComponentTrans.Translation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&(this->GatheredInstanceParameters).ComponentTrans.Translation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(this->GatheredInstanceParameters).ComponentTrans.Scale3D.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *&(this->GatheredInstanceParameters).ComponentTrans.Scale3D.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  uVar14 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->GatheredInstanceParameters).Velocity.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->GatheredInstanceParameters).Velocity.field0_0x0._s_0.Y = (double)uVar14;
  (this->GatheredInstanceParameters).Velocity.field0_0x0._s_0.Z =
       (double)CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._20_4_,
                        UE::Math::TVector<double>::ZeroVector.field0_0x0._16_4_);
  (this->GatheredInstanceParameters).DeltaSeconds = 0.0;
  (this->GatheredInstanceParameters).TimeSeconds = 0.0;
  (this->GatheredInstanceParameters).RealTimeSeconds = 0.0;
  (this->GatheredInstanceParameters).WorldDeltaSeconds = 0.0;
  (this->GatheredInstanceParameters).EmitterCount = 0;
  (this->GatheredInstanceParameters).NumAlive = 0;
  (this->GatheredInstanceParameters).RequestedExecutionState = Active;
  this->SystemState_LoopCount = 0;
  this->SystemState_CurrentLoopDuration = 0.0;
  this->SystemState_CurrentLoopDelay = 0.0;
  this->SystemState_CurrentLoopAgeStart = 0.0;
  this->SystemState_CurrentLoopAgeEnd = 0.0;
  LOCK();
  UNLOCK();
  TVar15 = (TAtomic<unsigned___int64>)((longlong)IDCounter + 1);
  this->ID = (ulong64)IDCounter;
  IDCounter = TVar15;
  uStack_54 = UE::Math::TVector<double>::ZeroVector.field0_0x0._20_4_;
  uStack_58 = UE::Math::TVector<double>::ZeroVector.field0_0x0._16_4_;
  dStack_60 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_68 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  local_38 = 1;
  local_50._0_4_ = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X,0);
  local_50._4_4_ =
       (undefined4)((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._0_8_ >> 0x20);
  (this->LocalBounds).Min.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->LocalBounds).Min.field0_0x0._s_0.Y = dStack_60;
  uStack_48._0_4_ = SUB84(dStack_60,0);
  uStack_48._4_4_ = (undefined4)((ulonglong)dStack_60 >> 0x20);
  *(undefined4 *)((longlong)&(this->LocalBounds).Min.field0_0x0 + 0x10) = uStack_58;
  *(undefined4 *)((longlong)&(this->LocalBounds).Min.field0_0x0 + 0x14) = uStack_54;
  *(undefined4 *)&(this->LocalBounds).Max.field0_0x0 = (undefined4)local_50;
  *(undefined4 *)((longlong)&(this->LocalBounds).Max.field0_0x0 + 4) = local_50._4_4_;
  local_50 = local_68;
  *(undefined4 *)((longlong)&(this->LocalBounds).Max.field0_0x0 + 8) = (undefined4)uStack_48;
  *(undefined4 *)((longlong)&(this->LocalBounds).Max.field0_0x0 + 0xc) = uStack_48._4_4_;
  *(undefined4 *)((longlong)&(this->LocalBounds).Max.field0_0x0 + 0x10) = uStack_58;
  *(undefined4 *)((longlong)&(this->LocalBounds).Max.field0_0x0 + 0x14) = uStack_54;
  (this->LocalBounds).IsValid = 1;
  (this->LocalBounds).Pad[0] = (char)uStack_37;
  (this->LocalBounds).Pad[1] = (char)((uint7)uStack_37 >> 8);
  (this->LocalBounds).Pad[2] = (char)((uint7)uStack_37 >> 0x10);
  (this->LocalBounds).Pad[3] = (char)((uint7)uStack_37 >> 0x18);
  (this->LocalBounds).Pad[4] = (char)((uint7)uStack_37 >> 0x20);
  (this->LocalBounds).Pad[5] = (char)((uint7)uStack_37 >> 0x28);
  (this->LocalBounds).Pad[6] = (char)((uint7)uStack_37 >> 0x30);
  uStack_48 = dStack_60;
  uStack_40 = uStack_58;
  uStack_3c = uStack_54;
  if (this_00 != (USceneComponent *)0x0) {
    FNiagaraParameterStore::SetOwner(&this->InstanceParameters,(UObject *)this_00);
  }
  pFVar17 = FNiagaraGpuComputeDispatchInterface::Get(this->World);
  if (pFVar17 != (FNiagaraGpuComputeDispatchInterface *)0x0) {
    pFVar23 = (FNiagaraGpuComputeDispatchInterface *)pFVar17->_padding_;
    pFVar25 = pFVar24;
    if (pFVar23 != (FNiagaraGpuComputeDispatchInterface *)0x0) {
      iVar13 = (int)pFVar23->_padding_;
      do {
        pFVar22 = pFVar24;
        if (iVar13 == 0) goto LAB_1493cd8f5;
        LOCK();
        iVar16 = (int)pFVar23->_padding_;
        bVar26 = iVar13 == iVar16;
        if (bVar26) {
          *(int *)&pFVar23->_padding_ = iVar13 + 1;
          iVar16 = iVar13;
        }
        UNLOCK();
        iVar13 = iVar16;
      } while (!bVar26);
      pFVar25 = (FNiagaraGpuComputeDispatchInterface *)pFVar17->_padding_;
    }
    pFVar18 = (FNiagaraGpuComputeDispatchInterface *)&pFVar25->_padding_;
    pFVar22 = pFVar23;
    if (pFVar25 == (FNiagaraGpuComputeDispatchInterface *)0x0) {
LAB_1493cd8f5:
      pFVar18 = pFVar24;
      pFVar23 = pFVar22;
    }
    if ((pFVar18 != (FNiagaraGpuComputeDispatchInterface *)&pFVar17->_padding_) &&
       (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                           ("SharedThis.Get() == this",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x67f,L""), bVar26)) {
      pcVar4 = (code *)swi(3);
      pFVar19 = (FNiagaraSystemInstance *)(*pcVar4)();
      return pFVar19;
    }
    if ((pFVar25 == (FNiagaraGpuComputeDispatchInterface *)0x0) &&
       (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x416,L""), bVar26)) {
      pcVar4 = (code *)swi(3);
      pFVar19 = (FNiagaraSystemInstance *)(*pcVar4)();
      return pFVar19;
    }
    if ((pFVar25 == (FNiagaraGpuComputeDispatchInterface *)0x0) &&
       (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x26c,L""), bVar26)) {
      pcVar4 = (code *)swi(3);
      pFVar19 = (FNiagaraSystemInstance *)(*pcVar4)();
      return pFVar19;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    if (pFVar23 != (FNiagaraGpuComputeDispatchInterface *)0x0) {
      LOCK();
      *(int *)&pFVar23->_padding_ = (int)pFVar23->_padding_ + 1;
      UNLOCK();
      LOCK();
      *(int *)&pFVar23->_padding_ = (int)pFVar23->_padding_ + 1;
      UNLOCK();
    }
    local_78 = pFVar25;
    local_70.ReferenceController = (TReferenceControllerBase<1> *)pFVar23;
    if (&this->ComputeDispatchInterfacePtr !=
        (TSharedPtr<FNiagaraGpuComputeDispatchInterface,1> *)&local_78) {
      (this->ComputeDispatchInterfacePtr).Object = pFVar25;
      local_78 = (FNiagaraGpuComputeDispatchInterface *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->ComputeDispatchInterfacePtr).SharedReferenceCount,&local_70);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_70.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pFVar23);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pFVar23);
  }
  this->FeatureLevel = (uint)(this->World->FeatureLevel).Value;
  if (param_2->bRequireCurrentFrameData == '\0') {
    this->TickBehavior = ForceTickFirst;
  }
  if (this_00 != (USceneComponent *)0x0) {
    pUVar20 = Z_Construct_UClass_UNiagaraComponent_NoRegister();
    iVar13 = (int)pUVar20->_padding_;
    if ((iVar13 <= *(int *)(this_00->_padding_ + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar13 * 8) ==
        &pUVar20->_padding_)) {
      pIVar21 = UNiagaraComponent::CreateSceneComponentUtils((UNiagaraComponent *)this_00);
      pIVar3 = (this->SceneComponentUtils).Ptr;
      if ((pIVar3 != pIVar21) &&
         ((this->SceneComponentUtils).Ptr = pIVar21, pIVar3 != (INiagaraSceneComponentUtils *)0x0))
      {
        (**(code **)*pIVar3)(pIVar3,1);
      }
    }
  }
  return this;
}

// ~FNiagaraSystemInstance @ 1493d11f0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall FNiagaraSystemInstance::~FNiagaraSystemInstance(FNiagaraSystemInstance *this)

{
  undefined1 *puVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  FNiagaraSystemGpuComputeProxy *this_00;
  FBaseGraphTask *pFVar4;
  void *pvVar5;
  INiagaraSceneComponentUtils *pIVar6;
  int *piVar7;
  longlong lVar8;
  FNiagaraParameterStore *this_01;
  
  *(undefined ***)this = &___7FNiagaraSystemInstance__6B_;
  Cleanup(this);
  pFVar3 = (this->GPUDataInterfaces).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->CrashReporterTag).Data.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  this_00 = (this->SystemGpuComputeProxy).Ptr;
  if (this_00 != (FNiagaraSystemGpuComputeProxy *)0x0) {
    FNiagaraSystemGpuComputeProxy::_scalar_deleting_destructor_(this_00,1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ComputeDispatchInterfacePtr).SharedReferenceCount.ReferenceController);
  pFVar4 = (this->ConcurrentTickBatchGraphEvent).Reference;
  if (pFVar4 != (FBaseGraphTask *)0x0) {
    LOCK();
    puVar1 = &pFVar4->field_0x30;
    iVar2 = *(int *)puVar1;
    *(int *)puVar1 = *(int *)puVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (*(code *)**(undefined8 **)pFVar4)(pFVar4,1);
    }
  }
  pFVar4 = (this->ConcurrentTickGraphEvent).Reference;
  if (pFVar4 != (FBaseGraphTask *)0x0) {
    LOCK();
    puVar1 = &pFVar4->field_0x30;
    iVar2 = *(int *)puVar1;
    *(int *)puVar1 = *(int *)puVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (*(code *)**(undefined8 **)pFVar4)(pFVar4,1);
    }
  }
  *(undefined4 *)&(this->EmitterEventDataSetMap).field_0x48 = 0;
  pvVar5 = *(void **)&(this->EmitterEventDataSetMap).field_0x40;
  if (pvVar5 != (void *)0x0) {
    FMemory::Free(pvVar5);
  }
  TSparseArray<TSparseSetElement<TTuple<TTuple<FName,FName>,FNiagaraDataSet_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TTuple<FName,FName>,FNiagaraDataSet_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TTuple<FName,FName>,FNiagaraDataSet_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->EmitterEventDataSetMap);
  pFVar3 = (this->EmitterParameters).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  this_01 = &this->InstanceParameters;
  FNiagaraParameterStore::~FNiagaraParameterStore(this_01);
  lVar8 = 2;
  do {
    piVar7 = (int *)(this_01 + -1);
    this_01 = (FNiagaraParameterStore *)((longlong)(this_01 + -1) + 0x78);
    lVar8 = lVar8 + -1;
    DestructItems<FNiagaraPerInstanceDIFuncInfo,int>
              (*(FNiagaraPerInstanceDIFuncInfo **)this_01,piVar7[0x20]);
    if (*(void **)this_01 != (void *)0x0) {
      FMemory::Free(*(void **)this_01);
    }
  } while (lVar8 != 0);
  pFVar3 = (this->SystemUpdateDIStageTickHandler).PostStageTickList.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->SystemUpdateDIStageTickHandler).PreStageTickList.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->SystemSpawnDIStageTickHandler).PostStageTickList.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->SystemSpawnDIStageTickHandler).PreStageTickList.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->DataInterfaceInstanceDataOffsets).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->PostTickDataInterfaces).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->PreTickDataInterfaces).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->DataInterfaceInstanceData).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  *(undefined4 *)&(this->CapturedFrames).field_0x48 = 0;
  pvVar5 = *(void **)&(this->CapturedFrames).field_0x40;
  if (pvVar5 != (void *)0x0) {
    FMemory::Free(pvVar5);
  }
  TSparseArray<TSparseSetElement<TTuple<FGuid,TSharedPtr<TArray<TSharedPtr<FNiagaraScriptDebuggerInfo,1>,TSizedDefaultAllocator<32>_>,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FGuid,TSharedPtr<TArray<TSharedPtr<FNiagaraScriptDebuggerInfo,1>,TSizedDefaultAllocator<32>_>,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FGuid,TSharedPtr<TArray<TSharedPtr<FNiagaraScriptDebuggerInfo,1>,TSizedDefaultAllocator<32>_>,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->CapturedFrames);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->CurrentCaptureGuid).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->CurrentCapture).SharedReferenceCount.ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnCompleteDelegate);
  pvVar5 = *(void **)&(this->OnCompleteDelegate).field_0x8;
  if (pvVar5 != (void *)0x0) {
    FMemory::Free(pvVar5);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnCompleteDelegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnPostTickDelegate);
  pvVar5 = *(void **)&(this->OnPostTickDelegate).field_0x8;
  if (pvVar5 != (void *)0x0) {
    FMemory::Free(pvVar5);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnPostTickDelegate);
  DestructItems<TSharedRef<FNiagaraEmitterInstance,1>,int>
            ((TSharedRef<FNiagaraEmitterInstance,1> *)(this->Emitters).AllocatorInstance.Data,
             (this->Emitters).ArrayNum);
  pFVar3 = (this->Emitters).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pIVar6 = (this->SceneComponentUtils).Ptr;
  if (pIVar6 != (INiagaraSceneComponentUtils *)0x0) {
    (**(code **)*pIVar6)(pIVar6,1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SystemSimulation).SharedReferenceCount.ReferenceController);
  return;
}

// operator() @ 1493d29e0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
`FNiagaraSystemInstance::EvaluateBoundFunction'::__l2::<lambda_1>::operator()
          (void *this,UNiagaraScript *param_1)

{
  ENiagaraScriptUsage EVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  longlong *plVar5;
  longlong *plVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  
  if (param_1 != (UNiagaraScript *)0x0) {
    EVar1 = param_1->Usage;
    if ((**(char **)this == '\0') && (EVar1 == ParticleGPUComputeScript)) {
      pFVar7 = (param_1->CachedScriptVM).ShaderScriptParametersMetadata.DataInterfaceParamInfo.
               AllocatorInstance.Data;
      iVar2 = (param_1->CachedScriptVM).ShaderScriptParametersMetadata.DataInterfaceParamInfo.
              ArrayNum;
      if ((iVar2 < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar8 = pFVar7 + (longlong)iVar2 * 0x38;
      if (pFVar7 != pFVar8) {
        do {
          plVar5 = *(longlong **)(pFVar7 + 0x28);
          plVar6 = plVar5 + (longlong)*(int *)(pFVar7 + 0x30) * 10;
          if (plVar5 != plVar6) {
            do {
              if (*plVar5 == **(longlong **)((longlong)this + 8)) {
                **(undefined1 **)this = 1;
                goto LAB_1493d2ab4;
              }
              plVar5 = plVar5 + 10;
            } while (plVar5 != plVar6);
          }
          pFVar7 = pFVar7 + 0x38;
        } while (pFVar7 != pFVar8);
      }
    }
LAB_1493d2ab4:
    if ((**(char **)((longlong)this + 0x10) == '\0') && (EVar1 != ParticleGPUComputeScript)) {
      pFVar7 = (param_1->CachedScriptVM).CalledVMExternalFunctions.AllocatorInstance.Data;
      pFVar8 = pFVar7 + (longlong)(param_1->CachedScriptVM).CalledVMExternalFunctions.ArrayNum *
                        0x58;
      if (pFVar7 != pFVar8) {
        while (*(longlong *)pFVar7 != **(longlong **)((longlong)this + 8)) {
          pFVar7 = pFVar7 + 0x58;
          if (pFVar7 == pFVar8) {
            return;
          }
        }
        **(char **)((longlong)this + 0x10) = '\x01';
      }
    }
  }
  return;
}

// operator() @ 1493d2b20

void __thiscall
`FNiagaraSystemInstance::InitDataInterfaces'::__l2::<lambda_1>::operator()
          (void *this,FNiagaraParameterStore *param_1,bool param_2,bool param_3,bool param_4)

{
  FWeakObjectPtr *pFVar1;
  byte bVar2;
  uint uVar3;
  FNiagaraDataInterfaceProxy *pFVar4;
  code *pcVar5;
  bool bVar6;
  char cVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  FNiagaraTypeDefinition *this_00;
  UNiagaraDataInterface *pUVar11;
  UNiagaraDataInterface *pUVar12;
  FWeakObjectPtr *this_01;
  longlong lVar13;
  FName *pFVar14;
  UNiagaraDataInterface *local_res10;
  char local_res18;
  char local_res20;
  FName *local_68;
  int local_60;
  FNiagaraVariable local_58;
  
  local_res18 = param_2;
  local_res20 = param_3;
  (**(code **)param_1->_padding_)(param_1,&local_68);
  pFVar14 = local_68;
  do {
    if (pFVar14 == local_68 + (longlong)local_60 * 5) {
      return;
    }
    this_00 = FNiagaraTypeDefinitionHandle::Resolve((FNiagaraTypeDefinitionHandle *)(pFVar14 + 1));
    bVar6 = FNiagaraTypeDefinition::IsDataInterface(this_00);
    if (bVar6) {
      uVar3 = pFVar14[1].Number;
      uVar8 = 0;
      if ((int)uVar3 < (param_1->DataInterfaces).ArrayNum) {
        uVar8 = ~uVar3 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pUVar12 = *(UNiagaraDataInterface **)
                 ((param_1->DataInterfaces).AllocatorInstance.Data + (longlong)(int)uVar3 * 8);
      if (param_4) {
        local_58._padding_ = *(longlong *)pFVar14;
        local_58._padding_._0_4_ = pFVar14[1].ComparisonIndex.Value;
        local_58.VarData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_58.VarData.ArrayNum = 0;
        local_58.VarData.ArrayMax = 0;
        pUVar11 = FNiagaraParameterStore::GetDataInterface
                            ((FNiagaraParameterStore *)(*(longlong *)this + 0x290),&local_58);
        if (local_58.VarData.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.VarData.AllocatorInstance.Data);
        }
        if (pUVar11 == (UNiagaraDataInterface *)0x0) goto LAB_1493d2c4c;
      }
      else {
LAB_1493d2c4c:
        pUVar11 = pUVar12;
        if (pUVar12 == (UNiagaraDataInterface *)0x0) goto LAB_1493d2e40;
      }
      iVar9 = (**(code **)(pUVar11->_padding_ + 0x328))(pUVar11);
      if (iVar9 != 0) {
        lVar13 = *(longlong *)this;
        this_01 = *(FWeakObjectPtr **)(lVar13 + 0x210);
        pFVar1 = (FWeakObjectPtr *)((longlong)this_01 + (longlong)*(int *)(lVar13 + 0x218) * 0xc);
        if (this_01 != pFVar1) {
          do {
            pUVar12 = (UNiagaraDataInterface *)FWeakObjectPtr::Get(this_01);
            if (pUVar12 == pUVar11) {
              lVar13 = *(longlong *)this;
              param_3 = (bool)local_res20;
              if (this_01 == (FWeakObjectPtr *)0x0) goto LAB_1493d2cb7;
              goto LAB_1493d2d42;
            }
            this_01 = (FWeakObjectPtr *)&this_01[1].ObjectSerialNumber;
          } while (this_01 != pFVar1);
          lVar13 = *(longlong *)this;
        }
LAB_1493d2cb7:
        iVar10 = *(int *)(lVar13 + 0x218);
        if (iVar10 == *(int *)(lVar13 + 0x21c)) {
          iVar10 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x40c,(ForAnyElementType *)(lVar13 + 0x210),(int *)(lVar13 + 0x21c));
        }
        *(int *)(lVar13 + 0x218) = iVar10 + 1;
        pFVar1 = (FWeakObjectPtr *)
                 (((ForAnyElementType *)(lVar13 + 0x210))->Data + (longlong)iVar10 * 0xc);
        DefaultConstructItems<TTuple<TWeakObjectPtr<UNiagaraDataInterface,FWeakObjectPtr>,int>,int>
                  (pFVar1,1);
        local_res10 = pUVar11;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (pUVar11 != (UNiagaraDataInterface *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)pUVar11);
        }
        FWeakObjectPtr::operator=(pFVar1,(FObjectPtr)&local_res10);
        pFVar1[1].ObjectIndex = **(int **)((longlong)this + 8);
        **(int **)((longlong)this + 8) =
             **(int **)((longlong)this + 8) + (iVar9 + 0xfU & 0xfffffff0);
        param_3 = (bool)local_res20;
      }
LAB_1493d2d42:
      if ((*(byte *)(*(longlong *)this + 0x840) & 0x40) == 0) {
        cVar7 = (**(code **)(pUVar11->_padding_ + 0x3c0))(pUVar11);
        bVar2 = *(byte *)(*(longlong *)this + 0x840);
        *(byte *)(*(longlong *)this + 0x840) = (cVar7 << 6 ^ bVar2) & 0x40 ^ bVar2;
      }
      if (-1 < *(char *)(*(longlong *)this + 0x840)) {
        cVar7 = (**(code **)(pUVar11->_padding_ + 0x3d0))(pUVar11);
        *(byte *)(*(longlong *)this + 0x840) =
             *(byte *)(*(longlong *)this + 0x840) & 0x7f | cVar7 << 7;
      }
      if (param_3 == false) {
        if (local_res18 != '\0') {
          bVar6 = IsInGameThread();
          if ((!bVar6) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsInGameThread()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataInterface.h"
                                 ,0x382,L""), bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pUVar11->bUsedWithCPUScript = 1;
        }
      }
      else {
        bVar6 = IsInGameThread();
        if ((!bVar6) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsInGameThread()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataInterface.h"
                               ,0x388,L""), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pUVar11->bUsedWithGPUScript = 1;
        if (pUVar11->bRenderDataDirty != 0) {
          (**(code **)(pUVar11->_padding_ + 0x448))(pUVar11);
          pUVar11->bRenderDataDirty = 0;
        }
        pFVar4 = (pUVar11->Proxy).Ptr;
        if (pFVar4 != (FNiagaraDataInterfaceProxy *)0x0) {
          pFVar4->SourceDIName = *pFVar14;
        }
      }
    }
LAB_1493d2e40:
    pFVar14 = pFVar14 + 5;
  } while( true );
}

// operator() @ 1493d3000

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
`FNiagaraSystemInstance::ResolveUserDataInterfaceBindings'::__l2::<lambda_1>::operator()
          (void *this,FNiagaraParameterStore *param_1,UNiagaraScript *param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  uint uVar3;
  longlong *plVar4;
  UObject *pUVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  bool bVar8;
  uint uVar9;
  FScriptContainerElement *pFVar10;
  
  iVar2 = (param_2->ResolvedUserDataInterfaceBindings).ArrayNum;
  pFVar10 = (param_2->ResolvedUserDataInterfaceBindings).AllocatorInstance.Data;
  if ((iVar2 < 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pFVar1 = pFVar10 + (longlong)iVar2 * 8;
  do {
    if (pFVar10 == pFVar1) {
      return;
    }
    iVar2 = *(int *)pFVar10;
    if ((iVar2 != -1) && (plVar4 = *(longlong **)this, iVar2 < (int)plVar4[1])) {
      uVar3 = *(uint *)(pFVar10 + 4);
      if ((uVar3 != 0xffffffff) && ((int)uVar3 < (param_1->DataInterfaces).ArrayNum)) {
        if ((iVar2 < 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pUVar5 = *(UObject **)(*plVar4 + (longlong)iVar2 * 8);
        uVar9 = 0;
        if ((int)uVar3 < (param_1->DataInterfaces).ArrayNum) {
          uVar9 = ~uVar3 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pFVar6 = (param_1->DataInterfaces).AllocatorInstance.Data;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar5);
        }
        *(UObject **)(pFVar6 + (longlong)(int)uVar3 * 8) = pUVar5;
        param_1->bInterfacesDirty = 1;
      }
    }
    pFVar10 = pFVar10 + 8;
  } while( true );
}

// operator() @ 1493d35e0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
`FNiagaraSystemInstance::GetActiveCaptureWrite'::__l5::<lambda_1>::operator()
          (void *this,TSharedPtr<FNiagaraScriptDebuggerInfo,1> *param_1)

{
  ENiagaraScriptUsage EVar1;
  ENiagaraScriptUsage EVar2;
  FName *pFVar3;
  uint *puVar4;
  FNiagaraScriptDebuggerInfo *pFVar5;
  code *pcVar6;
  bool bVar7;
  undefined1 uVar8;
  
  pFVar3 = *(FName **)this;
  if ((param_1->Object == (FNiagaraScriptDebuggerInfo *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    uVar8 = (*pcVar6)();
    return (bool)uVar8;
  }
  if (param_1->Object->HandleName != *pFVar3) {
    return false;
  }
  EVar1 = **(ENiagaraScriptUsage **)((longlong)this + 8);
  if ((param_1->Object == (FNiagaraScriptDebuggerInfo *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    uVar8 = (*pcVar6)();
    return (bool)uVar8;
  }
  EVar2 = param_1->Object->Usage;
  if (EVar2 != EVar1) {
    if (EVar1 == ParticleSpawnScript) {
      if (EVar2 != ParticleSpawnScriptInterpolated) {
        return false;
      }
    }
    else {
      if (EVar1 != ParticleSpawnScriptInterpolated) {
        return false;
      }
      if (EVar2 != ParticleSpawnScript) {
        return false;
      }
    }
  }
  puVar4 = *(uint **)((longlong)this + 0x10);
  if ((param_1->Object == (FNiagaraScriptDebuggerInfo *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    uVar8 = (*pcVar6)();
    return (bool)uVar8;
  }
  pFVar5 = param_1->Object;
  if ((((pFVar5->UsageId).D != puVar4[3] || (pFVar5->UsageId).C != puVar4[2]) ||
      (pFVar5->UsageId).B != puVar4[1]) || (pFVar5->UsageId).A != *puVar4) {
    return false;
  }
  return true;
}

// Activate @ 1493d6060

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall FNiagaraSystemInstance::Activate(FNiagaraSystemInstance *this,EResetMode param_1)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  FName *pFVar6;
  FThreadSafeStaticStat<FStat_STAT_NiagaraSystemActivate> FVar7;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar8;
  FNameEntryId FVar9;
  FName FVar10;
  FNameEntryId FVar11;
  LARGE_INTEGER local_res8;
  FName local_res18 [2];
  FStatMessage local_38;
  
  FVar11.Value = 0;
  FVar7 = StatPtr_STAT_NiagaraSystemActivate;
  if (StatPtr_STAT_NiagaraSystemActivate ==
      (FThreadSafeStaticStat<FStat_STAT_NiagaraSystemActivate>)0x0) {
    pFVar6 = ::FName::FName(local_res18,"STAT_NiagaraSystemActivate");
    FVar7 = (FThreadSafeStaticStat<FStat_STAT_NiagaraSystemActivate>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraSystemActivate,*pFVar6,
                       L"System Activate [GT]","STATGROUP_Niagara","STATCAT_Niagara",L"Niagara",true
                       ,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar10 = *(FName *)FVar7;
  bVar2 = false;
  bVar4 = false;
  FVar9 = FVar10.ComparisonIndex.Value;
  uVar8 = FVar10.Number;
  if ((FVar9.Value == 0) && (uVar8 == 0)) {
LAB_1493d61bb:
    bVar3 = false;
    FVar10.ComparisonIndex.Value = 0;
    FVar10.Number = 0;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8.s,(char *)*(FName *)((longlong)FVar7 + 0x10));
      bVar2 = false;
      bVar4 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.s.LowPart = FVar9.Value;
        local_res8.s.HighPart = uVar8;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(wchar_t *)*(FName *)((longlong)FVar7 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSystemInstance.cpp"
                   ,0x250);
        bVar2 = true;
        bVar4 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_1493d61bb;
    local_res8.s.LowPart = FVar9.Value;
    local_res8.s.HighPart = uVar8;
    FThreadStats::AddMessage(FVar10,CycleScopeStart);
    bVar3 = true;
    FVar11.Value = FVar9.Value;
  }
  if (((this->System != (UNiagaraSystem *)0x0) && (((uint)this->System->_padding_ >> 0x1e & 1) == 0)
      ) && (this->System->bIsValidCached != 0)) {
    bVar5 = IsReadyToRun(this);
    if (bVar5) {
      if (((GNiagaraAllowDeferredReset == 0) || (this->SystemInstanceIndex == -1)) ||
         ((this->FinalizeRef).TaskEntry == (FNiagaraSystemInstance **)0x0)) {
        WaitForConcurrentTickDoNotFinalize(this,false);
        if ((this->FinalizeRef).TaskEntry != (FNiagaraSystemInstance **)0x0) {
          FinalizeTick_GameThread(this,true);
        }
        this->DeferredResetMode = None;
        Reset(this,param_1);
      }
      else {
        this->DeferredResetMode = param_1;
      }
      goto LAB_1493d625f;
    }
  }
  if (this->RequestedExecutionState != Disabled) {
    this->ActualExecutionState = Disabled;
    Cleanup(this);
    this->RequestedExecutionState = Disabled;
  }
LAB_1493d625f:
  if (bVar4) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((bVar3) && (FVar10 != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_38.NameAndInfo.Number = FVar10.Number & 0xffff6fff | 0x6000;
      local_38.NameAndInfo.Index.Value = FVar11.Value;
      QueryPerformanceCounter(&local_res8);
      local_38.StatData.Pad[4] = '\0';
      local_38.StatData.Pad[5] = '\0';
      local_38.StatData.Pad[6] = '\0';
      local_38.StatData.Pad[7] = '\0';
      local_38.StatData.Pad[0] = local_res8.s.LowPart._0_1_;
      local_38.StatData.Pad[1] = local_res8.s.LowPart._1_1_;
      local_38.StatData.Pad[2] = local_res8.s.LowPart._2_1_;
      local_38.StatData.Pad[3] = local_res8.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_38);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return;
}

// AdvanceSimulation @ 1493d6fb0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FNiagaraSystemInstance::AdvanceSimulation(FNiagaraSystemInstance *this,int param_1,float param_2)

{
  int *piVar1;
  int iVar2;
  undefined1 uVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  FName *pFVar7;
  FThreadSafeStaticStat<FStat_STAT_NiagaraSystemAdvanceSim> FVar8;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  LARGE_INTEGER LVar9;
  ulonglong uVar10;
  undefined4 uVar11;
  FColor_u_0 local_res10 [2];
  LARGE_INTEGER local_res20;
  FStatMessage local_58;
  LARGE_INTEGER local_48;
  
  if (param_1 < 1) {
    return;
  }
  uVar10 = (ulonglong)(uint)param_1;
  if (this->SystemInstanceState == PendingSpawnPaused) {
    return;
  }
  if (this->SystemInstanceState == Paused) {
    return;
  }
  WaitForConcurrentTickAndFinalize(this,false);
  if (this->ActualExecutionState == Complete) {
    return;
  }
  if (this->ActualExecutionState == Disabled) {
    return;
  }
  uVar11 = 0;
  FVar8 = StatPtr_STAT_NiagaraSystemAdvanceSim;
  if (StatPtr_STAT_NiagaraSystemAdvanceSim ==
      (FThreadSafeStaticStat<FStat_STAT_NiagaraSystemAdvanceSim>)0x0) {
    pFVar7 = ::FName::FName((FName *)&local_58,"STAT_NiagaraSystemAdvanceSim");
    FVar8 = (FThreadSafeStaticStat<FStat_STAT_NiagaraSystemAdvanceSim>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraSystemAdvanceSim,*pFVar7,
                       L"System Advance Simulation [GT] ","STATGROUP_Niagara","STATCAT_Niagara",
                       L"Niagara",true,true,ST_int64,true,false,MCR_Invalid);
  }
  LVar9 = *(LARGE_INTEGER *)FVar8;
  bVar4 = false;
  bVar6 = false;
  local_48.s.LowPart = 0;
  local_48.s.HighPart = 0;
  if ((LVar9.s.LowPart != 0) || (LVar9.s.HighPart != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10[0]._s_0,(char *)*(FName *)((longlong)FVar8 + 0x10));
      bVar4 = false;
      bVar6 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res20 = LVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res20.s,(wchar_t *)*(FName *)((longlong)FVar8 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSystemInstance.cpp"
                   ,0x3f3);
        bVar4 = true;
        bVar6 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res20 = LVar9;
      local_48 = LVar9;
      FThreadStats::AddMessage((FName)LVar9.s,CycleScopeStart);
      bVar5 = true;
      uVar11 = local_48._0_4_;
      goto LAB_1493d7177;
    }
  }
  bVar5 = false;
  LVar9 = local_48;
LAB_1493d7177:
  SetSolo(this,true);
  do {
    local_res20.QuadPart = 0;
    ManualTick(this,param_2,(TRefCountPtr<FBaseGraphTask> *)&local_res20.s);
    if ((undefined8 *)local_res20.QuadPart != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(local_res20.QuadPart + 0x30);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (*(code *)**(undefined8 **)local_res20)(local_res20.QuadPart,1);
      }
    }
    uVar10 = uVar10 - 1;
  } while (uVar10 != 0);
  SetSolo(this,this->bSolo);
  if (bVar6) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && ((FName)LVar9.QuadPart != (FName)0x0)) &&
      (FThreadStats::bPrimaryDisableForever == false)) && (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_58.NameAndInfo.Number = LVar9.s.HighPart & 0xffff6fffU | 0x6000;
      local_58.NameAndInfo.Index.Value = uVar11;
      QueryPerformanceCounter(&local_res20);
      local_58.StatData.Pad = (uchar  [8])(local_res20.QuadPart & 0xffffffff);
      FThreadStats::AddStatMessage(this_00,&local_58);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return;
}

// AllocateSystemInstance @ 1493d7300

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __cdecl
FNiagaraSystemInstance::AllocateSystemInstance
          (TSharedPtr<FNiagaraSystemInstance,1> *param_1,UWorld *param_2,UNiagaraSystem *param_3,
          FNiagaraUserRedirectionParameterStore *param_4,USceneComponent *param_5,
          ENiagaraTickBehavior param_6,bool param_7)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  TReferenceControllerBase<1> *pTVar4;
  FNiagaraSystemInstance *pFVar5;
  TSharedPtr<FNiagaraSystemInstance,1> local_18;
  
  pTVar4 = ::operator_new(0xa40);
  if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
    pTVar4 = (TReferenceControllerBase<1> *)0x0;
    local_18.Object = ___xmm_00000000000000000000000000000010;
    pFVar5 = (FNiagaraSystemInstance *)&DAT_00000010;
    local_18.SharedReferenceCount.ReferenceController = _UNK_150651568;
  }
  else {
    pTVar4->SharedReferenceCount = (atomic<int>)0x1;
    pTVar4->WeakReferenceCount = (atomic<int>)0x1;
    pTVar4->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFNiagaraSystemInstance___00_SharedPointerInternals__6B_
    ;
    FNiagaraSystemInstance
              ((FNiagaraSystemInstance *)(pTVar4 + 1),param_2,param_3,param_4,param_5,param_6,
               param_7);
    pFVar5 = (FNiagaraSystemInstance *)(pTVar4 + 1);
    if (pFVar5 == (FNiagaraSystemInstance *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    local_18.SharedReferenceCount.ReferenceController = pTVar4;
    local_18.Object = pFVar5;
  }
  if (param_1 != &local_18) {
    param_1->Object = pFVar5;
    local_18.Object = (FNiagaraSystemInstance *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&param_1->SharedReferenceCount,&local_18.SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return true;
}

// BindParameters @ 1493d7690

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall FNiagaraSystemInstance::BindParameters(FNiagaraSystemInstance *this)

{
  int iVar1;
  UNiagaraSystem *this_00;
  UObject *this_01;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  FString local_28;
  FString local_18;
  
  if (this->OverrideParameters == (FNiagaraUserRedirectionParameterStore *)0x0) {
    if (2 < (byte)LogNiagara._0_1_) {
      this_00 = this->System;
      if ((this_00 == (UNiagaraSystem *)0x0) || (this_00->_padding_ == 0)) {
        ::FString::FString(&local_18,L"None");
      }
      else {
        UObjectBaseUtility::GetFullName((UObjectBaseUtility *)this_00,&local_18,(UObject *)0x0,None)
        ;
      }
      this_01 = FWeakObjectPtr::Get(&(this->AttachComponent).WeakPtr);
      if ((this_01 == (UObject *)0x0) || (*(longlong *)&this_01->field_0x10 == 0)) {
        ::FString::FString(&local_28,L"None");
      }
      else {
        UObjectBaseUtility::GetFullName((UObjectBaseUtility *)this_01,&local_28,(UObject *)0x0,None)
        ;
      }
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
  }
  else if (this->bAlreadyBound == '\0') {
    FNiagaraParameterStore::Bind
              ((FNiagaraParameterStore *)this->OverrideParameters,&this->InstanceParameters,
               (TArray<FNiagaraBoundParameter,TSizedDefaultAllocator<32>_> *)0x0);
  }
  iVar1 = (this->Emitters).ArrayNum;
  pFVar3 = (this->Emitters).AllocatorInstance.Data;
  pFVar2 = pFVar3 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((this->Emitters).ArrayNum != iVar1) {
      `TCheckedPointerIterator<TSharedRef<FNiagaraEmitterInstance,1>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar2) break;
    (**(code **)(**(longlong **)pFVar3 + 0x30))(*(longlong **)pFVar3,this->bAlreadyBound);
    pFVar3 = pFVar3 + 0x10;
  }
  this->bAlreadyBound = '\x01';
  return;
}

// BindToParameterStore @ 1493d7830

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FNiagaraSystemInstance::BindToParameterStore
          (FNiagaraSystemInstance *this,FNiagaraParameterStore *param_1)

{
  FNiagaraSystemSimulation *pFVar1;
  code *pcVar2;
  bool bVar3;
  
  if ((param_1->SortedParameterOffsets).ArrayNum != 0) {
    pFVar1 = (this->SystemSimulation).Object;
    if (pFVar1 != (FNiagaraSystemSimulation *)0x0) {
      FNiagaraParameterStore::Bind
                ((FNiagaraParameterStore *)&((pFVar1->SpawnExecContext).Ptr)->Parameters,param_1,
                 (TArray<FNiagaraBoundParameter,TSizedDefaultAllocator<32>_> *)0x0);
      if ((this->SystemSimulation).Object == (FNiagaraSystemSimulation *)0x0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      FNiagaraParameterStore::Bind
                ((FNiagaraParameterStore *)
                 &((((this->SystemSimulation).Object)->UpdateExecContext).Ptr)->Parameters,param_1,
                 (TArray<FNiagaraBoundParameter,TSizedDefaultAllocator<32>_> *)0x0);
    }
    FNiagaraParameterStore::Bind
              (&this->InstanceParameters,param_1,
               (TArray<FNiagaraBoundParameter,TSizedDefaultAllocator<32>_> *)0x0);
    if (this->OverrideParameters != (FNiagaraUserRedirectionParameterStore *)0x0) {
      FNiagaraParameterStore::Bind
                ((FNiagaraParameterStore *)this->OverrideParameters,param_1,
                 (TArray<FNiagaraBoundParameter,TSizedDefaultAllocator<32>_> *)0x0);
    }
  }
  return;
}

// CalculateTickGroup @ 1493d9370

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

ETickingGroup __thiscall FNiagaraSystemInstance::CalculateTickGroup(FNiagaraSystemInstance *this)

{
  FWeakObjectPtr *pFVar1;
  ENiagaraTickBehavior EVar2;
  byte bVar3;
  int iVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  ETickingGroup EVar8;
  int iVar9;
  UActorComponent *pUVar10;
  UClass *pUVar11;
  UObject *pUVar12;
  FText *pFVar13;
  byte bVar14;
  FWeakObjectPtr *pFVar15;
  ETickingGroup EVar16;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  byte local_res20;
  int local_80;
  FName local_7c;
  FString local_70;
  FText local_60;
  FText local_50;
  
  local_80 = 8;
  if (GNiagaraForceLastTickGroup != 0) {
    return TG_LastDemotable;
  }
  EVar2 = this->TickBehavior;
  if (EVar2 != UsePrereqs) {
    if (EVar2 == UseComponentTickGroup) {
      pUVar12 = FWeakObjectPtr::Get(&(this->AttachComponent).WeakPtr);
      if (pUVar12 != (UObject *)0x0) {
        EVar8 = TG_LastDemotable;
        if ((byte)pUVar12[1].field_0x18 < TG_LastDemotable) {
          EVar8 = (uint)(byte)pUVar12[1].field_0x18;
        }
        EVar16 = TG_PrePhysics;
        if (EVar8 != TG_PrePhysics) {
          EVar16 = EVar8;
        }
        return EVar16;
      }
    }
    else if (EVar2 != ForceTickFirst) {
      if (EVar2 == ForceTickLast) {
        return TG_LastDemotable;
      }
      goto LAB_1493d9412;
    }
    return TG_PrePhysics;
  }
LAB_1493d9412:
  pUVar10 = GetPrereqComponent(this);
  EVar8 = TG_PrePhysics;
  if (pUVar10 != (UActorComponent *)0x0) {
    local_res20 = *(byte *)((longlong)&(pUVar10->PrimaryComponentTick)._padding_ + 1);
    bVar3 = (byte)(pUVar10->PrimaryComponentTick)._padding_;
    bVar14 = local_res20;
    if (local_res20 < bVar3) {
      bVar14 = bVar3;
    }
    EVar16 = bVar14 + TG_StartPhysics;
    pUVar11 = Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
    iVar9 = (int)pUVar11->_padding_;
    EVar8 = EVar16;
    if ((((iVar9 <= *(int *)(pUVar10->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar10->_padding_ + 0x30) + (longlong)iVar9 * 8) ==
          &pUVar11->_padding_)) && ((pUVar10[0xe].PrimaryComponentTick._padding_ & 0x2000) != 0)) &&
       (EVar8 = TG_PostPhysics, TG_PostPhysics < EVar16)) {
      EVar8 = EVar16;
    }
  }
  if (this->bDataInterfacesHaveTickPrereqs != '\0') {
    iVar9 = (this->DataInterfaceInstanceDataOffsets).ArrayNum;
    pFVar15 = (FWeakObjectPtr *)(this->DataInterfaceInstanceDataOffsets).AllocatorInstance.Data;
    pFVar1 = (FWeakObjectPtr *)((longlong)pFVar15 + (longlong)iVar9 * 0xc);
    while( true ) {
      if ((this->DataInterfaceInstanceDataOffsets).ArrayNum != iVar9) {
        local_res10[0] = 0;
        `TCheckedPointerIterator<TTuple<TWeakObjectPtr<UNiagaraDataInterface,FWeakObjectPtr>,int>_const_,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(local_res10);
      }
      if (pFVar15 == pFVar1) break;
      pUVar12 = FWeakObjectPtr::Get(pFVar15);
      EVar16 = EVar8;
      if (pUVar12 != (UObject *)0x0) {
        pcVar5 = *(code **)(*(longlong *)pUVar12 + 0x3c8);
        uVar7 = 0;
        if (pFVar15[1].ObjectIndex < (this->DataInterfaceInstanceData).ArrayNum) {
          uVar7 = (uint)~pFVar15[1].ObjectIndex >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          EVar8 = (*pcVar5)();
          return EVar8;
        }
        EVar16 = (*pcVar5)(pUVar12);
        if ((int)EVar16 < (int)EVar8) {
          EVar16 = EVar8;
        }
      }
      EVar8 = EVar16;
      pFVar15 = (FWeakObjectPtr *)&pFVar15[1].ObjectSerialNumber;
    }
  }
  iVar9 = 8;
  if ((bool)this->bDataInterfacesHaveTickPostreqs) {
    iVar4 = (this->DataInterfaceInstanceDataOffsets).ArrayNum;
    pFVar15 = (FWeakObjectPtr *)(this->DataInterfaceInstanceDataOffsets).AllocatorInstance.Data;
    pFVar1 = (FWeakObjectPtr *)((longlong)pFVar15 + (longlong)iVar4 * 0xc);
    while( true ) {
      if ((this->DataInterfaceInstanceDataOffsets).ArrayNum != iVar4) {
        local_res18[0] = 0;
        `TCheckedPointerIterator<TTuple<TWeakObjectPtr<UNiagaraDataInterface,FWeakObjectPtr>,int>_const_,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(local_res18);
      }
      iVar9 = local_80;
      if (pFVar15 == pFVar1) break;
      pUVar12 = FWeakObjectPtr::Get(pFVar15);
      if (pUVar12 == (UObject *)0x0) {
        pFVar15 = (FWeakObjectPtr *)&pFVar15[1].ObjectSerialNumber;
      }
      else {
        pcVar5 = *(code **)(*(longlong *)pUVar12 + 0x3d8);
        uVar7 = 0;
        if (pFVar15[1].ObjectIndex < (this->DataInterfaceInstanceData).ArrayNum) {
          uVar7 = (uint)~pFVar15[1].ObjectIndex >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          EVar8 = (*pcVar5)();
          return EVar8;
        }
        iVar9 = (*pcVar5)(pUVar12);
        if (local_80 < iVar9) {
          iVar9 = local_80;
        }
        pFVar15 = (FWeakObjectPtr *)&pFVar15[1].ObjectSerialNumber;
        local_80 = iVar9;
      }
    }
  }
  if (iVar9 < (int)EVar8) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS2) && (_Init_thread_header(&::_TSS2), ::_TSS2 == -1)) {
      TGEnum = StaticEnum<enum_ETickingGroup>();
      _Init_thread_footer(&::_TSS2);
    }
    if (2 < (byte)LogNiagara._0_1_) {
      pFVar13 = UEnum::GetDisplayNameTextByValue(TGEnum,&local_50,(longlong)iVar9);
      FText::ToString(pFVar13);
      pFVar13 = UEnum::GetDisplayNameTextByValue(TGEnum,&local_60,(longlong)(int)EVar8);
      FText::ToString(pFVar13);
      local_7c = (FName)this->System->_padding_;
      ::FName::ToString(&local_7c,&local_70);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
      if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_70.Data.AllocatorInstance.Data);
      }
      if (local_60.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_60.TextData.Reference + 0x10))();
      }
      if (local_50.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_50.TextData.Reference + 0x10))();
      }
    }
  }
  EVar16 = TG_LastDemotable;
  if ((int)EVar8 < 6) {
    EVar16 = EVar8;
  }
  EVar8 = TG_PrePhysics;
  if (0 < (int)EVar16) {
    EVar8 = EVar16;
  }
  return EVar8;
}

// Cleanup @ 1493d9e40

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall FNiagaraSystemInstance::Cleanup(FNiagaraSystemInstance *this)

{
  int *piVar1;
  TReferenceControllerBase<1> *pTVar2;
  FNiagaraSystemSimulation *this_00;
  FNiagaraSystemGpuComputeProxy *this_01;
  code *pcVar3;
  bool bVar4;
  
  WaitForConcurrentTickDoNotFinalize(this,true);
  if (this->SystemInstanceIndex != -1) {
    pTVar2 = (this->SystemSimulation).SharedReferenceCount.ReferenceController;
    this_00 = (this->SystemSimulation).Object;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (this_00 == (FNiagaraSystemSimulation *)0x0) {
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
    FNiagaraSystemSimulation::RemoveInstance(this_00,this);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  }
  if ((this->FinalizeRef).TaskEntry != (FNiagaraSystemInstance **)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!FinalizeRef.IsPending()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSystemInstance.cpp"
                       ,0x4a0,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  DestroyDataInterfaceInstanceData(this);
  this_01 = (this->SystemGpuComputeProxy).Ptr;
  if (this_01 != (FNiagaraSystemGpuComputeProxy *)0x0) {
    (this->SystemGpuComputeProxy).Ptr = (FNiagaraSystemGpuComputeProxy *)0x0;
    FNiagaraSystemGpuComputeProxy::RemoveFromRenderThread
              (this_01,(this->ComputeDispatchInterfacePtr).Object,true);
  }
  UnbindParameters(this,false);
  DestructItems<TSharedRef<FNiagaraEmitterInstance,1>,int>
            ((TSharedRef<FNiagaraEmitterInstance,1> *)(this->Emitters).AllocatorInstance.Data,
             (this->Emitters).ArrayNum);
  piVar1 = &(this->Emitters).ArrayMax;
  (this->Emitters).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&(this->Emitters).AllocatorInstance,0,piVar1);
  }
  ClearEventDataSets(this);
  return;
}

// ClearEventDataSets @ 1493d9f80

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall FNiagaraSystemInstance::ClearEventDataSets(FNiagaraSystemInstance *this)

{
  undefined1 *puVar1;
  TMap<TTuple<FName,FName>,FNiagaraDataSet_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FNiagaraDataSet_*,0>_>
  *this_00;
  ulonglong uVar2;
  int iVar3;
  FNiagaraDataSet *this_01;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  int iVar10;
  undefined1 *puVar11;
  int iVar12;
  uint *puVar13;
  uint uVar14;
  undefined1 local_res8 [8];
  int local_res10;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar10 = 0;
  puVar1 = &(this->EmitterEventDataSetMap).field_0x10;
  iVar3 = *(int *)&(this->EmitterEventDataSetMap).field_0x28;
  this_00 = &this->EmitterEventDataSetMap;
  iVar12 = 0;
  uVar6 = 1;
  iVar7 = iVar12;
  if (iVar3 != 0) {
    puVar13 = *(uint **)&(this->EmitterEventDataSetMap).field_0x20;
    if (puVar13 == (uint *)0x0) {
      puVar13 = (uint *)puVar1;
    }
    uVar9 = *puVar13;
    iVar12 = 0;
    while (uVar9 == 0) {
      lVar8 = (longlong)iVar10;
      iVar12 = iVar12 + 0x20;
      iVar10 = iVar10 + 1;
      iVar7 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_1493da02d;
      uVar9 = puVar13[lVar8 + 1];
    }
    uVar6 = -uVar9 & uVar9;
    uVar2 = (ulonglong)uVar6 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_res10 = (int)lVar8;
    iVar7 = local_res10 + -1 + iVar12;
    if (iVar3 < iVar7) {
      iVar7 = iVar3;
    }
  }
LAB_1493da02d:
  uVar9 = *(uint *)&(this->EmitterEventDataSetMap).field_0x28;
  uVar14 = uVar9 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar6,iVar10);
  TStack_60.CurrentBitIndex = iVar7;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar10 = (int)uVar9 >> 5;
  TStack_60._28_4_ = iVar7;
  TStack_60.BaseBitIndex = iVar12;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->EmitterEventDataSetMap).field_0x8 -
                       *(int *)&(this->EmitterEventDataSetMap).field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar9 < 0) || (iVar3 < (int)uVar9)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar6 = *(uint *)&(this->EmitterEventDataSetMap).field_0x28;
  if (uVar9 != uVar6) {
    puVar11 = *(undefined1 **)&(this->EmitterEventDataSetMap).field_0x20;
    if (puVar11 == (undefined1 *)0x0) {
      puVar11 = puVar1;
    }
    uVar9 = -1 << ((byte)uVar9 & 0x1f) & *(uint *)(puVar11 + (longlong)iVar10 * 4);
    while (uVar9 == 0) {
      lVar8 = (longlong)iVar10;
      uVar14 = uVar14 + 0x20;
      iVar10 = iVar10 + 1;
      uVar9 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_1493da130;
      uVar9 = *(uint *)(puVar11 + lVar8 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar9 & uVar9) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar9 = (int)lVar8 + -1 + uVar14;
    if ((int)uVar6 < (int)uVar9) {
      uVar9 = uVar6;
    }
  }
LAB_1493da130:
  while( true ) {
    if (*(int *)&(this->EmitterEventDataSetMap).field_0x8 -
        *(int *)&(this->EmitterEventDataSetMap).field_0x34 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<TTuple<FName,FName>,FNiagaraDataSet_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar9) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    this_01 = *(FNiagaraDataSet **)
               ((longlong)TStack_60.CurrentBitIndex * 0x20 + 0x10 + *(longlong *)&this_00->field_0x0
               );
    if (this_01 != (FNiagaraDataSet *)0x0) {
      FNiagaraDataSet::~FNiagaraDataSet(this_01);
      ::operator_delete(this_01,0xc0);
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  bVar5 = 1 < *(int *)&(this->EmitterEventDataSetMap).field_0x48;
  if (!bVar5) {
    TSet<TTuple<TTuple<FName,FName>,FNiagaraDataSet_*>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FNiagaraDataSet_*,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<TTuple<FName,FName>,FNiagaraDataSet_*>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FNiagaraDataSet_*,0>,FDefaultSetAllocator>
                      *)this_00);
  }
  puVar1 = &(this->EmitterEventDataSetMap).field_0xc;
  *(undefined4 *)&(this->EmitterEventDataSetMap).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,(ForAnyElementType *)this_00,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->EmitterEventDataSetMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->EmitterEventDataSetMap).field_0x34 = 0;
  iVar3 = *(int *)&(this->EmitterEventDataSetMap).field_0x2c;
  *(undefined4 *)&(this->EmitterEventDataSetMap).field_0x28 = 0;
  if ((iVar3 < 0) || (0x80 < iVar3)) {
    *(undefined4 *)&(this->EmitterEventDataSetMap).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->EmitterEventDataSetMap).field_0x10,0)
    ;
  }
  if (bVar5) {
    *(undefined4 *)&(this->EmitterEventDataSetMap).field_0x48 = 1;
    TSet<TTuple<TTuple<FName,FName>,FNiagaraDataSet_*>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FNiagaraDataSet_*,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<TTuple<FName,FName>,FNiagaraDataSet_*>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FNiagaraDataSet_*,0>,FDefaultSetAllocator>
              *)this_00);
  }
  return;
}

// Complete @ 1493db170

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __thiscall FNiagaraSystemInstance::Complete(FNiagaraSystemInstance *this,bool param_1)

{
  int iVar1;
  FNiagaraSystemSimulation *this_00;
  TReferenceControllerBase<1> *pTVar2;
  FNiagaraSystemGpuComputeProxy *this_01;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  byte bVar8;
  bool bVar9;
  char cVar10;
  FName *pFVar11;
  FThreadSafeStaticStat<FStat_STAT_NiagaraSystemComplete> FVar12;
  FNiagaraWorldManager *pFVar13;
  uint uVar14;
  FReadAccessScope *this_02;
  FNameEntryId FVar15;
  FName FVar16;
  FScriptContainerElement *pFVar17;
  FScriptContainerElement *pFVar18;
  longlong *plVar19;
  uint local_res8;
  uint uStackX_c;
  undefined1 local_res10;
  byte local_res18;
  FColor_u_0 local_res20 [2];
  FName local_a8;
  FName local_a0;
  FName local_98;
  undefined8 local_88;
  FSharedReferencer<1> FStack_80;
  FReadAccessScope local_78;
  FReadAccessScope local_60;
  
  plVar19 = (longlong *)0x0;
  FVar12 = StatPtr_STAT_NiagaraSystemComplete;
  local_res10 = param_1;
  if (StatPtr_STAT_NiagaraSystemComplete ==
      (FThreadSafeStaticStat<FStat_STAT_NiagaraSystemComplete>)0x0) {
    pFVar11 = ::FName::FName(&local_a0,"STAT_NiagaraSystemComplete");
    FVar12 = (FThreadSafeStaticStat<FStat_STAT_NiagaraSystemComplete>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraSystemComplete,*pFVar11,
                        L"System Complete [GT]","STATGROUP_Niagara","STATCAT_Niagara",L"Niagara",
                        true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar16 = *(FName *)FVar12;
  bVar5 = false;
  bVar7 = false;
  local_98.ComparisonIndex.Value = 0;
  local_98.Number = 0;
  FVar15 = FVar16.ComparisonIndex.Value;
  uVar14 = FVar16.Number;
  if ((FVar15.Value == 0) && (uVar14 == 0)) {
LAB_1493db2c8:
    bVar6 = false;
    FVar16 = local_98;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res20[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res20[0]._s_0,(char *)*(FName *)((longlong)FVar12 + 0x10));
      bVar5 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_a8.ComparisonIndex.Value = FVar15.Value;
        local_a8.Number = uVar14;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_a8,(wchar_t *)*(FName *)((longlong)FVar12 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSystemInstance.cpp"
                   ,0x2ac);
        bVar5 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_1493db2c8;
    local_res8 = FVar15.Value;
    uStackX_c = uVar14;
    FThreadStats::AddMessage(FVar16,CycleScopeStart);
    bVar6 = true;
  }
  local_res18 = this->field_0x840;
  if (this->SystemInstanceIndex == -1) {
    if ((this->ActualExecutionState != Complete) && (this->ActualExecutionState != Disabled)) {
      this->ActualExecutionState = Complete;
    }
    if ((this->RequestedExecutionState != Complete) && (this->RequestedExecutionState != Disabled))
    {
      this->RequestedExecutionState = Complete;
    }
  }
  else {
    this_00 = (this->SystemSimulation).Object;
    pTVar2 = (this->SystemSimulation).SharedReferenceCount.ReferenceController;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (this_00 == (FNiagaraSystemSimulation *)0x0) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar9) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    FNiagaraSystemSimulation::RemoveInstance(this_00,this);
    if ((this->ActualExecutionState != Complete) && (this->ActualExecutionState != Disabled)) {
      this->ActualExecutionState = Complete;
    }
    if ((this->RequestedExecutionState != Complete) && (this->RequestedExecutionState != Disabled))
    {
      this->RequestedExecutionState = Complete;
    }
    iVar1 = (this->Emitters).ArrayNum;
    pFVar18 = (this->Emitters).AllocatorInstance.Data;
    pFVar17 = pFVar18 + (longlong)iVar1 * 0x10;
    while( true ) {
      if ((this->Emitters).ArrayNum != iVar1) {
        local_res8 = local_res8 & 0xffffff00;
        `TCheckedPointerIterator<TSharedRef<FNiagaraEmitterInstance,1>,int,0>::operator!='::__l2::
        <lambda_1>::operator()(&local_res8);
      }
      if (pFVar18 == pFVar17) break;
      (**(code **)(**(longlong **)pFVar18 + 0x28))(*(longlong **)pFVar18,1);
      pFVar18 = pFVar18 + 0x10;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    param_1 = (bool)local_res10;
  }
  bVar8 = local_res18;
  DestroyDataInterfaceInstanceData(this);
  this_01 = (this->SystemGpuComputeProxy).Ptr;
  if (this_01 != (FNiagaraSystemGpuComputeProxy *)0x0) {
    (this->SystemGpuComputeProxy).Ptr = (FNiagaraSystemGpuComputeProxy *)0x0;
    FNiagaraSystemGpuComputeProxy::RemoveFromRenderThread
              (this_01,(this->ComputeDispatchInterfacePtr).Object,true);
  }
  if (this->bPooled == '\0') {
    UnbindParameters(this,true);
  }
  if (this->World == (UWorld *)0x0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("World",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSystemInstance.cpp"
                       ,0x577,L"");
    if (bVar9) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pFVar13 = FNiagaraWorldManager::Get(this->World);
  if ((pFVar13 != (FNiagaraWorldManager *)0x0) && (pFVar13->bUseTickPasses != false)) {
    local_88 = 0;
    FStack_80.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (&this->SystemSimulation != (TSharedPtr<FNiagaraSystemSimulation,1> *)&local_88) {
      (this->SystemSimulation).Object = (FNiagaraSystemSimulation *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->SystemSimulation).SharedReferenceCount,&FStack_80);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_80.ReferenceController);
  }
  if ((bVar8 & 0x10) == 0) goto LAB_1493db571;
  this->bNotifyOnCompletion = '\0';
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnCompleteDelegate,
             &local_78);
  if ((*(int *)&(this->OnCompleteDelegate).field_0x10 == 0) ||
     (plVar3 = *(longlong **)&(this->OnCompleteDelegate).field_0x8, plVar3 == (longlong *)0x0)) {
LAB_1493db564:
    this_02 = &local_78;
  }
  else {
    cVar10 = (**(code **)(*plVar3 + 0x38))();
    if (cVar10 == '\0') goto LAB_1493db564;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_78);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnCompleteDelegate,
               &local_60);
    if (*(int *)&(this->OnCompleteDelegate).field_0x10 != 0) {
      plVar19 = *(longlong **)&(this->OnCompleteDelegate).field_0x8;
    }
    (**(code **)(*plVar19 + 0x60))(plVar19,param_1);
    this_02 = &local_60;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (this_02);
LAB_1493db571:
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar6) {
    FThreadStats::AddMessage(FVar16,CycleScopeEnd);
  }
  return;
}

// CreateEventDataSet @ 1493dce90

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FNiagaraDataSet * __thiscall
FNiagaraSystemInstance::CreateEventDataSet(FNiagaraSystemInstance *this,FName param_1,FName param_2)

{
  FName FVar1;
  uint uVar2;
  uint uVar3;
  FNiagaraDataSet **ppFVar4;
  FNiagaraDataSet *pFVar5;
  FName local_18;
  FName local_10;
  
  local_18 = param_1;
  local_10 = param_2;
  uVar2 = ::GetTypeHash(param_1.ComparisonIndex.Value);
  FVar1 = local_10;
  uVar2 = uVar2 + param_1.Number;
  uVar3 = ::GetTypeHash(local_10.ComparisonIndex.Value);
  ppFVar4 = TMapBase<TTuple<FName,FName>,FNiagaraDataSet_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FNiagaraDataSet_*,0>_>
            ::FindOrAddImpl<TTuple<FName,FName>_>
                      ((TMapBase<TTuple<FName,FName>,FNiagaraDataSet_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FNiagaraDataSet_*,0>_>
                        *)&this->EmitterEventDataSetMap,
                       uVar2 * 0x40 + FVar1.Number + (uVar2 >> 2) + uVar3 + 0x9e3779b9 ^ uVar2,
                       (TTuple<FName,FName> *)&local_18);
  pFVar5 = *ppFVar4;
  if (pFVar5 == (FNiagaraDataSet *)0x0) {
    pFVar5 = ::operator_new(0xc0);
    if (pFVar5 != (FNiagaraDataSet *)0x0) {
      pFVar5 = FNiagaraDataSet::FNiagaraDataSet(pFVar5);
      *ppFVar4 = pFVar5;
      return pFVar5;
    }
    *ppFVar4 = (FNiagaraDataSet *)0x0;
    pFVar5 = (FNiagaraDataSet *)0x0;
  }
  return pFVar5;
}

// Deactivate @ 1493dd030

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall FNiagaraSystemInstance::Deactivate(FNiagaraSystemInstance *this,bool param_1)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  FName *pFVar5;
  FThreadSafeStaticStat<FStat_STAT_NiagaraSystemDeactivate> FVar6;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar7;
  FNameEntryId FVar8;
  FName FVar9;
  FNameEntryId FVar10;
  LARGE_INTEGER local_res8;
  FColor_u_0 local_res10 [2];
  FName local_res18;
  FStatMessage local_38;
  
  FVar10.Value = 0;
  FVar6 = StatPtr_STAT_NiagaraSystemDeactivate;
  if (StatPtr_STAT_NiagaraSystemDeactivate ==
      (FThreadSafeStaticStat<FStat_STAT_NiagaraSystemDeactivate>)0x0) {
    pFVar5 = ::FName::FName(&local_res18,"STAT_NiagaraSystemDeactivate");
    FVar6 = (FThreadSafeStaticStat<FStat_STAT_NiagaraSystemDeactivate>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraSystemDeactivate,*pFVar5,
                       L"System Deactivate [GT]","STATGROUP_Niagara","STATCAT_Niagara",L"Niagara",
                       true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar9 = *(FName *)FVar6;
  bVar2 = false;
  bVar4 = false;
  FVar8 = FVar9.ComparisonIndex.Value;
  uVar7 = FVar9.Number;
  if ((FVar8.Value != 0) || (uVar7 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10[0]._s_0,(char *)*(FName *)((longlong)FVar6 + 0x10));
      bVar2 = false;
      bVar4 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.s.LowPart = FVar8.Value;
        local_res8.s.HighPart = uVar7;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(wchar_t *)*(FName *)((longlong)FVar6 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSystemInstance.cpp"
                   ,0x269);
        bVar2 = true;
        bVar4 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res8.s.LowPart = FVar8.Value;
      local_res8.s.HighPart = uVar7;
      FThreadStats::AddMessage(FVar9,CycleScopeStart);
      bVar3 = true;
      FVar10.Value = FVar8.Value;
      goto LAB_1493dd190;
    }
  }
  bVar3 = false;
  FVar9.ComparisonIndex.Value = 0;
  FVar9.Number = 0;
LAB_1493dd190:
  this->DeferredResetMode = None;
  if (param_1) {
    WaitForConcurrentTickDoNotFinalize(this,false);
    if ((this->FinalizeRef).TaskEntry != (FNiagaraSystemInstance **)0x0) {
      FinalizeTick_GameThread(this,true);
    }
    if ((this->ActualExecutionState != Complete) && (this->ActualExecutionState != Disabled)) {
      Complete(this,true);
    }
  }
  else if ((this->RequestedExecutionState != Inactive) &&
          (this->RequestedExecutionState != Disabled)) {
    this->RequestedExecutionState = Inactive;
  }
  if (bVar4) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar3) && (FVar9 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_38.NameAndInfo.Number = FVar9.Number & 0xffff6fff | 0x6000;
      local_38.NameAndInfo.Index.Value = FVar10.Value;
      QueryPerformanceCounter(&local_res8);
      local_38.StatData.Pad[4] = '\0';
      local_38.StatData.Pad[5] = '\0';
      local_38.StatData.Pad[6] = '\0';
      local_38.StatData.Pad[7] = '\0';
      local_38.StatData.Pad[0] = local_res8.s.LowPart._0_1_;
      local_38.StatData.Pad[1] = local_res8.s.LowPart._1_1_;
      local_38.StatData.Pad[2] = local_res8.s.LowPart._2_1_;
      local_38.StatData.Pad[3] = local_res8.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_38);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return;
}

// DeallocateSystemInstance @ 1493dd2e0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

bool __cdecl
FNiagaraSystemInstance::DeallocateSystemInstance(TSharedPtr<FNiagaraSystemInstance,1> *param_1)

{
  FNiagaraSystemInstance *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  FNiagaraSystemSimulation *this;
  FNiagaraSystemGpuComputeProxy *this_00;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  FNiagaraWorldManager *this_01;
  TSharedPtr<FNiagaraSystemInstance,1> local_18;
  
  pFVar1 = param_1->Object;
  if (pFVar1 != (FNiagaraSystemInstance *)0x0) {
    pTVar2 = (pFVar1->SystemSimulation).SharedReferenceCount.ReferenceController;
    this = (pFVar1->SystemSimulation).Object;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (param_1->Object == (FNiagaraSystemInstance *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
    }
    if (param_1->Object->SystemInstanceIndex != -1) {
      if (this == (FNiagaraSystemSimulation *)0x0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
      }
      FNiagaraSystemSimulation::RemoveInstance(this,param_1->Object);
    }
    if (param_1->Object == (FNiagaraSystemInstance *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
    }
    UnbindParameters(param_1->Object,false);
    if (param_1->Object == (FNiagaraSystemInstance *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
    }
    if ((param_1->Object->SystemGpuComputeProxy).Ptr != (FNiagaraSystemGpuComputeProxy *)0x0) {
      if (param_1->Object == (FNiagaraSystemInstance *)0x0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
      }
      this_00 = (param_1->Object->SystemGpuComputeProxy).Ptr;
      (param_1->Object->SystemGpuComputeProxy).Ptr = (FNiagaraSystemGpuComputeProxy *)0x0;
      if (param_1->Object == (FNiagaraSystemInstance *)0x0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
      }
      FNiagaraSystemGpuComputeProxy::RemoveFromRenderThread
                (this_00,(param_1->Object->ComputeDispatchInterfacePtr).Object,true);
    }
    if (param_1->Object == (FNiagaraSystemInstance *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
    }
    pFVar1 = param_1->Object;
    if (pFVar1->World == (UWorld *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("World",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSystemInstance.cpp"
                         ,0x577,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
    }
    this_01 = FNiagaraWorldManager::Get(pFVar1->World);
    if (this_01 == (FNiagaraWorldManager *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("WorldManager != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSystemInstance.cpp"
                         ,0x29b,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
    }
    if (param_1->Object == (FNiagaraSystemInstance *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
    }
    param_1->Object->OverrideParameters = (FNiagaraUserRedirectionParameterStore *)0x0;
    if (param_1->Object == (FNiagaraSystemInstance *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&param_1->Object->OnPostTickDelegate);
    if (param_1->Object == (FNiagaraSystemInstance *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&param_1->Object->OnCompleteDelegate);
    FNiagaraWorldManager::DestroySystemInstance(this_01,param_1);
    if (param_1->Object != (FNiagaraSystemInstance *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("SystemInstanceAllocation == nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSystemInstance.cpp"
                         ,0x2a3,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  }
  local_18.Object = (FNiagaraSystemInstance *)0x0;
  local_18.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (param_1 != &local_18) {
    param_1->Object = (FNiagaraSystemInstance *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&param_1->SharedReferenceCount,&local_18.SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return true;
}

// DestroyDataInterfaceInstanceData @ 1493ddd60

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FNiagaraSystemInstance::DestroyDataInterfaceInstanceData(FNiagaraSystemInstance *this)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  UObject *pUVar7;
  FWeakObjectPtr *this_00;
  FWeakObjectPtr *pFVar8;
  undefined1 local_res8 [8];
  FWeakObjectPtr *local_res10;
  
  iVar2 = (this->DataInterfaceInstanceDataOffsets).ArrayNum;
  this_00 = (FWeakObjectPtr *)(this->DataInterfaceInstanceDataOffsets).AllocatorInstance.Data;
  pFVar8 = (FWeakObjectPtr *)((longlong)this_00 + (longlong)iVar2 * 0xc);
  local_res10 = pFVar8;
  while( true ) {
    if ((this->DataInterfaceInstanceDataOffsets).ArrayNum != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TTuple<TWeakObjectPtr<UNiagaraDataInterface,FWeakObjectPtr>,int>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (this_00 == pFVar8) break;
    pUVar7 = FWeakObjectPtr::Get(this_00);
    if (pUVar7 != (UObject *)0x0) {
      uVar3 = this_00[1].ObjectIndex;
      pcVar4 = *(code **)(*(longlong *)pUVar7 + 0x2f0);
      uVar6 = 0;
      if ((int)uVar3 < (this->DataInterfaceInstanceData).ArrayNum) {
        uVar6 = ~uVar3 >> 0x1f;
      }
      if (uVar6 == 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      (*pcVar4)(pUVar7,(this->DataInterfaceInstanceData).AllocatorInstance.Data + (int)uVar3);
      pFVar8 = local_res10;
    }
    this_00 = (FWeakObjectPtr *)&this_00[1].ObjectSerialNumber;
  }
  piVar1 = &(this->DataInterfaceInstanceDataOffsets).ArrayMax;
  (this->DataInterfaceInstanceDataOffsets).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,&(this->DataInterfaceInstanceDataOffsets).AllocatorInstance,0,piVar1);
  }
  piVar1 = &(this->DataInterfaceInstanceData).ArrayMax;
  (this->DataInterfaceInstanceData).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
              (1,1,0,&(this->DataInterfaceInstanceData).AllocatorInstance,0,piVar1);
  }
  piVar1 = &(this->PreTickDataInterfaces).ArrayMax;
  (this->PreTickDataInterfaces).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->PreTickDataInterfaces).AllocatorInstance,0,piVar1);
  }
  piVar1 = &(this->PostTickDataInterfaces).ArrayMax;
  (this->PostTickDataInterfaces).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->PostTickDataInterfaces).AllocatorInstance,0,piVar1);
  }
  piVar1 = &(this->GPUDataInterfaces).ArrayMax;
  (this->GPUDataInterfaces).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,&(this->GPUDataInterfaces).AllocatorInstance,0,piVar1);
  }
  return;
}

// Dump @ 1493df5b0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall FNiagaraSystemInstance::Dump(FNiagaraSystemInstance *this)

{
  int iVar1;
  FNiagaraSystemSimulation *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  code *pcVar4;
  bool bVar5;
  FNiagaraEmitterInstanceImpl *this_00;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  undefined1 local_res8 [8];
  
  pFVar2 = (this->SystemSimulation).Object;
  pTVar3 = (this->SystemSimulation).SharedReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  if (pFVar2 != (FNiagaraSystemSimulation *)0x0) {
    pTVar3 = (this->SystemSimulation).SharedReferenceCount.ReferenceController;
    pFVar2 = (this->SystemSimulation).Object;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((pFVar2 == (FNiagaraSystemSimulation *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    FNiagaraSystemSimulation::DumpInstance(pFVar2,this);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    iVar1 = (this->Emitters).ArrayNum;
    pFVar6 = (this->Emitters).AllocatorInstance.Data;
    pFVar7 = pFVar6 + (longlong)iVar1 * 0x10;
    while( true ) {
      if ((this->Emitters).ArrayNum != iVar1) {
        `TCheckedPointerIterator<TSharedRef<FNiagaraEmitterInstance,1>_const_,int,0>::operator!='::
        __l2::<lambda_1>::operator()(local_res8);
      }
      if (pFVar6 == pFVar7) break;
      this_00 = (FNiagaraEmitterInstanceImpl *)(**(code **)(**(longlong **)pFVar6 + 0x68))();
      if (this_00 != (FNiagaraEmitterInstanceImpl *)0x0) {
        FNiagaraEmitterInstanceImpl::Dump(this_00);
      }
      pFVar6 = pFVar6 + 0x10;
    }
  }
  return;
}

// DumpStalledInfo @ 1493df8c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall FNiagaraSystemInstance::DumpStalledInfo(FNiagaraSystemInstance *this)

{
  undefined1 auStack_178 [32];
  FString local_158;
  FName local_148 [2];
  TStringBuilderBase<wchar_t> local_138;
  wchar_t local_118 [128];
  ulonglong local_18 [2];
  
  local_18[0] = __security_cookie.value ^ (ulonglong)auStack_178;
  local_138.Base = local_118;
  local_138.bIsDynamic = false;
  local_138.bIsExternal = false;
  local_138.CurPos = local_118;
  local_138.End = (wchar_t *)local_18;
  if (this->System == (UNiagaraSystem *)0x0) {
    ::FString::FString(&local_158,L"None");
  }
  else {
    local_148[0] = (FName)this->System->_padding_;
    ::FName::ToString(local_148,&local_158);
  }
  TStringBuilderBase<wchar_t>::AppendfImpl(&local_138,L"System (%s)\n");
  if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_158.Data.AllocatorInstance.Data);
  }
  TStringBuilderBase<wchar_t>::AppendfImpl(&local_138,L"ConcurrentTickGraphEvent Complete (%d)\n");
  TStringBuilderBase<wchar_t>::AppendfImpl
            (&local_138,L"ConcurrentTickBatchGraphEvent Complete (%d)\n");
  TStringBuilderBase<wchar_t>::AppendfImpl(&local_138,L"FinalizePending (%d)\n");
  TStringBuilderBase<wchar_t>::AppendfImpl(&local_138,L"SystemInstanceIndex (%d)\n");
  TStringBuilderBase<wchar_t>::AppendfImpl(&local_138,L"SystemInstanceState (%d)\n");
  if (local_138.End < local_138.CurPos + 1) {
    TStringBuilderBase<wchar_t>::Extend(&local_138,1);
  }
  *local_138.CurPos = L'\0';
  UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_138);
  return;
}

// DumpTickInfo @ 1493dfcc0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FNiagaraSystemInstance::DumpTickInfo(FNiagaraSystemInstance *this,FOutputDevice *param_1)

{
  int iVar1;
  uint uVar2;
  code *pcVar3;
  FWeakObjectPtr *pFVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  UObject *pUVar9;
  UClass *pUVar10;
  byte bVar11;
  FWeakObjectPtr *this_00;
  undefined1 local_res8 [8];
  FOutputDevice *local_res10;
  FWeakObjectPtr *local_res18;
  FString local_b8;
  wchar_t *local_a8;
  int iStack_a0;
  undefined4 uStack_9c;
  TStringView<wchar_t> local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  
  local_res10 = param_1;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    iStack_a0 = 0x1c;
    local_a8 = L"/Script/Engine.ETickingGroup";
    pUVar10 = Z_Construct_UClass_UEnum_NoRegister();
    local_98._12_4_ = uStack_9c;
    local_98.Size = iStack_a0;
    local_98.DataPtr = local_a8;
    TickingGroupEnum = (UEnum *)StaticFindObjectChecked(pUVar10,(UObject *)0x0,&local_98,None);
    _Init_thread_footer(&::_TSS0);
  }
  local_b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b8.Data.ArrayNum = 0;
  local_b8.Data.ArrayMax = 0;
  pUVar9 = FWeakObjectPtr::Get(&(this->AttachComponent).WeakPtr);
  if (pUVar9 == (UObject *)0x0) {
LAB_1493dfd68:
    if (pUVar9 == (UObject *)0x0) goto LAB_1493dfdf4;
  }
  else {
    pUVar10 = Z_Construct_UClass_UNiagaraComponent_NoRegister();
    iVar1 = (int)pUVar10->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar9->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar9->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar10->_padding_)) {
      pUVar9 = *(UObject **)&pUVar9[5].field_0x8;
      goto LAB_1493dfd68;
    }
  }
  bVar11 = ((UObjectBaseUtility *)(pUVar9 + 1))->field_0x19;
  if ((byte)((UObjectBaseUtility *)(pUVar9 + 1))->field_0x19 <
      (byte)((UObjectBaseUtility *)(pUVar9 + 1))->field_0x18) {
    bVar11 = ((UObjectBaseUtility *)(pUVar9 + 1))->field_0x18;
  }
  UEnum::GetNameStringByIndex(TickingGroupEnum,&local_78,(uint)bVar11);
  UObjectBaseUtility::GetFullName((UObjectBaseUtility *)pUVar9,&local_88,(UObject *)0x0,None);
  ::FString::AppendfImpl(&local_b8,L" PreReq(%s = %s)");
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
LAB_1493dfdf4:
  if ((this->bDataInterfacesHaveTickPrereqs != '\0') ||
     ((bool)this->bDataInterfacesHaveTickPostreqs)) {
    this_00 = (FWeakObjectPtr *)(this->DataInterfaceInstanceDataOffsets).AllocatorInstance.Data;
    iVar1 = (this->DataInterfaceInstanceDataOffsets).ArrayNum;
    local_res18 = (FWeakObjectPtr *)((longlong)this_00 + (longlong)iVar1 * 0xc);
    while( true ) {
      pFVar4 = local_res18;
      if ((this->DataInterfaceInstanceDataOffsets).ArrayNum != iVar1) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<TTuple<TWeakObjectPtr<UNiagaraDataInterface,FWeakObjectPtr>,int>,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      param_1 = local_res10;
      if (this_00 == pFVar4) break;
      pUVar9 = FWeakObjectPtr::Get(this_00);
      if (pUVar9 != (UObject *)0x0) {
        uVar2 = this_00[1].ObjectIndex;
        pcVar3 = *(code **)(*(longlong *)pUVar9 + 0x3c8);
        uVar6 = 0;
        if ((int)uVar2 < (this->DataInterfaceInstanceData).ArrayNum) {
          uVar6 = ~uVar2 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar7 = (*pcVar3)(pUVar9,(this->DataInterfaceInstanceData).AllocatorInstance.Data +
                                 (int)uVar2);
        uVar2 = this_00[1].ObjectIndex;
        pcVar3 = *(code **)(*(longlong *)pUVar9 + 0x3d8);
        uVar6 = 0;
        if ((int)uVar2 < (this->DataInterfaceInstanceData).ArrayNum) {
          uVar6 = ~uVar2 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar8 = (*pcVar3)(pUVar9,(this->DataInterfaceInstanceData).AllocatorInstance.Data +
                                 (int)uVar2);
        UEnum::GetNameStringByIndex(TickingGroupEnum,&local_48,iVar8);
        UEnum::GetNameStringByIndex(TickingGroupEnum,&local_58,iVar7);
        UObjectBaseUtility::GetFullName((UObjectBaseUtility *)pUVar9,&local_68,(UObject *)0x0,None);
        ::FString::AppendfImpl(&local_b8,L" DataInterface(%s = %s - %s)");
        if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_68.Data.AllocatorInstance.Data);
        }
        if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
        if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_48.Data.AllocatorInstance.Data);
        }
      }
      this_00 = (FWeakObjectPtr *)&this_00[1].ObjectSerialNumber;
    }
  }
  FOutputDevice::LogfImpl(param_1,L"\t\t\tInstance%s");
  if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Data.AllocatorInstance.Data);
  }
  return;
}

// EvaluateBoundFunction @ 1493e0380

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraStatelessFeatureMask": Some values do not have unique names */

void __thiscall
FNiagaraSystemInstance::EvaluateBoundFunction
          (FNiagaraSystemInstance *this,FName param_1,bool *param_2,bool *param_3)

{
  FNiagaraEmitterHandle *pFVar1;
  int iVar2;
  UNiagaraSystem *pUVar3;
  bool bVar4;
  FVersionedNiagaraEmitterData *this_00;
  FNiagaraEmitterHandle *this_01;
  undefined1 local_res8 [8];
  FName local_res10;
  bool *local_58;
  FName *pFStack_50;
  bool *local_48;
  <lambda_1> local_38;
  
  if ((this->System != (UNiagaraSystem *)0x0) && (((uint)this->System->_padding_ >> 0x1e & 1) == 0))
  {
    pFStack_50 = &local_res10;
    pUVar3 = this->System;
    local_res10 = param_1;
    local_58 = param_3;
    local_48 = param_2;
    `FNiagaraSystemInstance::EvaluateBoundFunction'::__l2::<lambda_1>::operator()
              (&local_58,(pUVar3->SystemSpawnScript).field0_0x0.DebugPtr);
    `FNiagaraSystemInstance::EvaluateBoundFunction'::__l2::<lambda_1>::operator()
              (&local_58,(pUVar3->SystemUpdateScript).field0_0x0.DebugPtr);
    iVar2 = (pUVar3->EmitterHandles).ArrayNum;
    this_01 = (FNiagaraEmitterHandle *)(pUVar3->EmitterHandles).AllocatorInstance.Data;
    pFVar1 = this_01 + iVar2;
    while( true ) {
      if ((pUVar3->EmitterHandles).ArrayNum != iVar2) {
        `TCheckedPointerIterator<FNiagaraEmitterHandle_const_,int,0>::operator!='::__l2::<lambda_1>
        ::operator()(local_res8);
      }
      if (this_01 == pFVar1) break;
      bVar4 = FNiagaraEmitterHandle::GetIsEnabled(this_01);
      if ((bVar4) &&
         (this_00 = FNiagaraEmitterHandle::GetEmitterData(this_01),
         this_00 != (FVersionedNiagaraEmitterData *)0x0)) {
        local_38.UsedOnGpu = local_58;
        local_38.FunctionName = pFStack_50;
        local_38.UsedOnCpu = local_48;
        FVersionedNiagaraEmitterData::
        ForEachScript<_FNiagaraSystemInstance::EvaluateBoundFunction_::__l2::<lambda_1>_>
                  (this_00,&local_38);
      }
      this_01 = this_01 + 1;
    }
  }
  return;
}

// FinalizeTick_GameThread @ 1493e2150

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FNiagaraSystemInstance::FinalizeTick_GameThread(FNiagaraSystemInstance *this,bool param_1)

{
  undefined1 *puVar1;
  int *piVar2;
  int iVar3;
  EResetMode EVar4;
  FBaseGraphTask *pFVar5;
  FNiagaraSystemInstance **ppFVar6;
  atomic<int> *paVar7;
  FNiagaraSystemSimulation *this_00;
  UNiagaraSystem *this_01;
  longlong *plVar8;
  code *pcVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  byte bVar17;
  char cVar18;
  ENiagaraGPUTickHandlingMode EVar19;
  FName *pFVar20;
  FThreadSafeStaticStat<FStat_STAT_NiagaraOverview_GT> FVar21;
  FThreadSafeStaticStat<FStat_STAT_NiagaraSystemInst_FinalizeGT> FVar22;
  UEnum *this_02;
  UObject *this_03;
  FThreadStats *pFVar23;
  FThreadStatsPool *pFVar24;
  FName FVar25;
  FName FVar26;
  FScriptContainerElement *pFVar27;
  byte bVar28;
  FScriptContainerElement *pFVar29;
  longlong *plVar30;
  undefined1 local_res20 [8];
  FNiagaraCrashReporterScope local_148 [4];
  FLLMScope local_144;
  FColor_u_0 local_140;
  FColor_u_0 local_13c;
  int local_138;
  ENiagaraExecutionState local_134;
  FName local_130;
  FName local_128;
  FName local_120;
  FName local_110;
  FString local_100;
  FString local_f0;
  FName local_e0;
  FMemScope local_d8;
  LARGE_INTEGER local_d0;
  LARGE_INTEGER local_c8;
  FString local_c0;
  FStatMessage local_b0;
  FStatMessage local_a0;
  FName local_90;
  FName local_88;
  FReadAccessScope local_80;
  FReadAccessScope local_68;
  
  FNiagaraCrashReporterScope::FNiagaraCrashReporterScope(local_148,this);
  FVar21 = StatPtr_STAT_NiagaraOverview_GT;
  if (StatPtr_STAT_NiagaraOverview_GT == (FThreadSafeStaticStat<FStat_STAT_NiagaraOverview_GT>)0x0)
  {
    pFVar20 = ::FName::FName(&local_90,"STAT_NiagaraOverview_GT");
    FVar21 = (FThreadSafeStaticStat<FStat_STAT_NiagaraOverview_GT>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraOverview_GT,*pFVar20,
                        L"GT Total","STATGROUP_NiagaraOverview","STATCAT_Niagara",L"NiagaraOverview"
                        ,true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar26 = *(FName *)FVar21;
  bVar10 = false;
  bVar13 = false;
  local_120.ComparisonIndex.Value = 0;
  local_120.Number = 0;
  bVar14 = false;
  bVar11 = false;
  if ((FVar26.ComparisonIndex.Value.Value == 0) && (FVar26.Number == 0)) {
LAB_1493e22bd:
    bVar13 = bVar11;
    bVar10 = bVar14;
    bVar14 = false;
    FVar26 = local_120;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_140.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_140._s_0,(char *)*(FName *)((longlong)FVar21 + 0x10));
      bVar10 = false;
      bVar13 = true;
      bVar14 = false;
      bVar11 = true;
      if (-1 < CpuChannel->Enabled) {
        local_130.ComparisonIndex.Value = FVar26.ComparisonIndex.Value.Value;
        local_130.Number = FVar26.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_130,(wchar_t *)*(FName *)((longlong)FVar21 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSystemInstance.cpp"
                   ,0xb0d);
        bVar10 = true;
        bVar13 = true;
        bVar14 = true;
        bVar11 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_1493e22bd;
    FThreadStats::AddMessage(FVar26,CycleScopeStart);
    bVar14 = true;
  }
  FVar22 = StatPtr_STAT_NiagaraSystemInst_FinalizeGT;
  if (StatPtr_STAT_NiagaraSystemInst_FinalizeGT ==
      (FThreadSafeStaticStat<FStat_STAT_NiagaraSystemInst_FinalizeGT>)0x0) {
    pFVar20 = ::FName::FName(&local_88,"STAT_NiagaraSystemInst_FinalizeGT");
    FVar22 = (FThreadSafeStaticStat<FStat_STAT_NiagaraSystemInst_FinalizeGT>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraSystemInst_FinalizeGT,
                        *pFVar20,L"System Instance Finalize [GT]","STATGROUP_Niagara",
                        "STATCAT_Niagara",L"Niagara",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar25 = *(FName *)FVar22;
  bVar12 = false;
  bVar11 = false;
  local_110.ComparisonIndex.Value = 0;
  local_110.Number = 0;
  bVar16 = false;
  bVar15 = false;
  if ((FVar25.ComparisonIndex.Value.Value != 0) || (FVar25.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_13c.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_13c._s_0,(char *)*(FName *)((longlong)FVar22 + 0x10));
      bVar12 = false;
      bVar11 = true;
      bVar16 = false;
      bVar15 = true;
      if (-1 < CpuChannel->Enabled) {
        local_128.ComparisonIndex.Value = FVar25.ComparisonIndex.Value.Value;
        local_128.Number = FVar25.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_128,(wchar_t *)*(FName *)((longlong)FVar22 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSystemInstance.cpp"
                   ,0xb0e);
        bVar12 = true;
        bVar11 = true;
        bVar16 = true;
        bVar15 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      FThreadStats::AddMessage(FVar25,CycleScopeStart);
      bVar15 = true;
      goto LAB_1493e23f9;
    }
  }
  bVar12 = bVar16;
  bVar11 = bVar15;
  bVar15 = false;
  FVar25 = local_110;
LAB_1493e23f9:
  FLLMScope::FLLMScope(&local_144,Niagara,false,None,Default,true);
  FMemScope::FMemScope(&local_d8,Niagara,true);
  pFVar5 = (this->ConcurrentTickGraphEvent).Reference;
  if (((pFVar5 != (FBaseGraphTask *)0x0) && (pFVar5->field_0xd0 == '\0')) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("ConcurrentTickGraphEvent == nullptr || ConcurrentTickGraphEvent->IsComplete()"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSystemInstance.cpp"
                          ,0xb12,L""), bVar16)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  pFVar5 = (this->ConcurrentTickGraphEvent).Reference;
  if (pFVar5 != (FBaseGraphTask *)0x0) {
    (this->ConcurrentTickGraphEvent).Reference = (FBaseGraphTask *)0x0;
    LOCK();
    puVar1 = &pFVar5->field_0x30;
    iVar3 = *(int *)puVar1;
    *(int *)puVar1 = *(int *)puVar1 + -1;
    UNLOCK();
    if (iVar3 == 1) {
      (*(code *)**(undefined8 **)pFVar5)();
    }
  }
  pFVar5 = (this->ConcurrentTickBatchGraphEvent).Reference;
  if (((pFVar5 != (FBaseGraphTask *)0x0) && (pFVar5->field_0xd0 == '\0')) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("ConcurrentTickBatchGraphEvent == nullptr || ConcurrentTickBatchGraphEvent->IsComplete()"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSystemInstance.cpp"
                          ,0xb14,L""), bVar16)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  pFVar5 = (this->ConcurrentTickBatchGraphEvent).Reference;
  if (pFVar5 != (FBaseGraphTask *)0x0) {
    (this->ConcurrentTickBatchGraphEvent).Reference = (FBaseGraphTask *)0x0;
    LOCK();
    puVar1 = &pFVar5->field_0x30;
    iVar3 = *(int *)puVar1;
    *(int *)puVar1 = *(int *)puVar1 + -1;
    UNLOCK();
    if (iVar3 == 1) {
      (*(code *)**(undefined8 **)pFVar5)();
    }
  }
  ppFVar6 = (this->FinalizeRef).TaskEntry;
  if (ppFVar6 != (FNiagaraSystemInstance **)0x0) {
    *ppFVar6 = (FNiagaraSystemInstance *)0x0;
    paVar7 = (this->FinalizeRef).DebugCounter;
    (this->FinalizeRef).TaskEntry = (FNiagaraSystemInstance **)0x0;
    LOCK();
    *paVar7 = (atomic<int>)((int)*paVar7 + -1);
    UNLOCK();
  }
  if (this->bLODDistanceIsOverridden == '\0') {
    this->field_0x841 = this->field_0x841 & 0xfb;
  }
  iVar3 = (this->Emitters).ArrayNum;
  bVar28 = 1;
  pFVar29 = (this->Emitters).AllocatorInstance.Data;
  pFVar27 = pFVar29 + (longlong)iVar3 * 0x10;
  while( true ) {
    if ((this->Emitters).ArrayNum != iVar3) {
      local_res20[0] = 0;
      `TCheckedPointerIterator<TSharedRef<FNiagaraEmitterInstance,1>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res20);
    }
    if (pFVar29 == pFVar27) break;
    bVar17 = (**(code **)(**(longlong **)pFVar29 + 0x28))();
    bVar28 = bVar28 & bVar17;
    pFVar29 = pFVar29 + 0x10;
  }
  plVar30 = (longlong *)0x0;
  if (((this->ActualExecutionState == Complete) || (this->ActualExecutionState == Disabled)) ||
     ((bVar28 != 0 || (this->World->bIsTearingDown != '\0')))) {
    Complete(this,false);
  }
  else {
    TickDataInterfaces(this,this->CachedDeltaSeconds,true);
    this_00 = (this->SystemSimulation).Object;
    if (this_00 == (FNiagaraSystemSimulation *)0x0) {
      StaticEnum<enum_ENiagaraSystemInstanceState>();
      this_02 = StaticEnum<enum_ENiagaraSystemInstanceState>();
      if ((this_02 == (UEnum *)0x0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("EnumClass != nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                              ,0xca4,L""), bVar16)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      UEnum::GetNameByValue(this_02,(long64)&local_e0);
      ::FName::ToString(&local_e0,&local_c0);
      local_138 = this->SystemInstanceIndex;
      local_134 = this->ActualExecutionState;
      this_03 = FWeakObjectPtr::Get(&(this->AttachComponent).WeakPtr);
      if ((this_03 == (UObject *)0x0) || (*(longlong *)&this_03->field_0x10 == 0)) {
        ::FString::FString(&local_f0,L"None");
      }
      else {
        UObjectBaseUtility::GetFullName((UObjectBaseUtility *)this_03,&local_f0,(UObject *)0x0,None)
        ;
      }
      this_01 = this->System;
      if ((this_01 == (UNiagaraSystem *)0x0) || (this_01->_padding_ == 0)) {
        ::FString::FString(&local_100,L"None");
      }
      else {
        UObjectBaseUtility::GetFullName
                  ((UObjectBaseUtility *)this_01,&local_100,(UObject *)0x0,None);
      }
      bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("Sim != nullptr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSystemInstance.cpp"
                          ,0xb2c,
                          L"SystemSimulation is nullptr during Finalize and the System(%s) AttachComponent(%s) ActualExecutionState(%d) SystemInstanceIndex(%d) SystemInstanceState(%s)"
                         );
      if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_100.Data.AllocatorInstance.Data);
      }
      if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_f0.Data.AllocatorInstance.Data);
      }
      if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_c0.Data.AllocatorInstance.Data);
      }
      if (bVar16) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
    }
    EVar19 = FNiagaraSystemSimulation::GetGPUTickHandlingMode(this_00);
    if ((EVar19 == GameThread) || ((EVar19 == GameThreadBatched && (param_1)))) {
      GenerateAndSubmitGPUTick(this);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnPostTickDelegate,
               &local_80);
    if (((*(int *)&(this->OnPostTickDelegate).field_0x10 == 0) ||
        (plVar8 = *(longlong **)&(this->OnPostTickDelegate).field_0x8, plVar8 == (longlong *)0x0))
       || (cVar18 = (**(code **)(*plVar8 + 0x38))(), cVar18 == '\0')) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_80);
    }
    else {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_80);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnPostTickDelegate
                 ,&local_68);
      if (*(int *)&(this->OnPostTickDelegate).field_0x10 != 0) {
        plVar30 = *(longlong **)&(this->OnPostTickDelegate).field_0x8;
      }
      (**(code **)(*plVar30 + 0x60))(plVar30);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_68);
    }
  }
  EVar4 = this->DeferredResetMode;
  if (EVar4 != None) {
    this->DeferredResetMode = None;
    Reset(this,EVar4);
  }
  FMemScope::~FMemScope(&local_d8);
  FLLMScope::~FLLMScope(&local_144);
  if (bVar11) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar12) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((bVar15) && (FVar25 != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    pFVar23 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar23 == (FThreadStats *)0x0) {
      pFVar24 = FThreadStatsPool::Get();
      pFVar23 = FThreadStatsPool::GetFromPool(pFVar24);
    }
    if (pFVar23->bWaitForExplicitFlush < pFVar23->ScopeCount) {
      local_b0.NameAndInfo.Index = FVar25.ComparisonIndex.Value;
      local_b0.NameAndInfo.Number = FVar25.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_d0);
      local_b0.StatData.Pad[4] = '\0';
      local_b0.StatData.Pad[5] = '\0';
      local_b0.StatData.Pad[6] = '\0';
      local_b0.StatData.Pad[7] = '\0';
      local_b0.StatData.Pad[0] = local_d0.s.LowPart._0_1_;
      local_b0.StatData.Pad[1] = local_d0.s.LowPart._1_1_;
      local_b0.StatData.Pad[2] = local_d0.s.LowPart._2_1_;
      local_b0.StatData.Pad[3] = local_d0.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(pFVar23,&local_b0);
      piVar2 = &pFVar23->ScopeCount;
      *piVar2 = *piVar2 + -1;
      if (*piVar2 == 0) {
        FThreadStats::Flush(pFVar23,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar23,false,false);
      }
    }
  }
  if (bVar13) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar10) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((bVar14) && (FVar26 != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    pFVar23 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar23 == (FThreadStats *)0x0) {
      pFVar24 = FThreadStatsPool::Get();
      pFVar23 = FThreadStatsPool::GetFromPool(pFVar24);
    }
    if (pFVar23->bWaitForExplicitFlush < pFVar23->ScopeCount) {
      local_a0.NameAndInfo.Index = FVar26.ComparisonIndex.Value;
      local_a0.NameAndInfo.Number = FVar26.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_c8);
      local_a0.StatData.Pad[4] = '\0';
      local_a0.StatData.Pad[5] = '\0';
      local_a0.StatData.Pad[6] = '\0';
      local_a0.StatData.Pad[7] = '\0';
      local_a0.StatData.Pad[0] = local_c8.s.LowPart._0_1_;
      local_a0.StatData.Pad[1] = local_c8.s.LowPart._1_1_;
      local_a0.StatData.Pad[2] = local_c8.s.LowPart._2_1_;
      local_a0.StatData.Pad[3] = local_c8.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(pFVar23,&local_a0);
      piVar2 = &pFVar23->ScopeCount;
      *piVar2 = *piVar2 + -1;
      if (*piVar2 == 0) {
        FThreadStats::Flush(pFVar23,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar23,false,false);
      }
    }
  }
  FNiagaraCrashReporterScope::~FNiagaraCrashReporterScope(local_148);
  return;
}

// FinishCapture @ 1493e3120

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall FNiagaraSystemInstance::FinishCapture(FNiagaraSystemInstance *this)

{
  TSharedPtr<TArray<TSharedPtr<FNiagaraScriptDebuggerInfo,1>,TSizedDefaultAllocator<32>_>,1> *pTVar1
  ;
  longlong local_28;
  FSharedReferencer<1> FStack_20;
  undefined8 local_18;
  FSharedReferencer<1> FStack_10;
  
  pTVar1 = &this->CurrentCapture;
  if (pTVar1->Object !=
      (TArray<TSharedPtr<FNiagaraScriptDebuggerInfo,1>,TSizedDefaultAllocator<32>_> *)0x0) {
    WaitForConcurrentTickAndFinalize(this,false);
    SetSolo(this,this->bWasSoloPriorToCaptureRequest);
    local_28 = 0;
    FStack_20.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (pTVar1 != (TSharedPtr<TArray<TSharedPtr<FNiagaraScriptDebuggerInfo,1>,TSizedDefaultAllocator<32>_>,1>
                   *)&local_28) {
      pTVar1->Object =
           (TArray<TSharedPtr<FNiagaraScriptDebuggerInfo,1>,TSizedDefaultAllocator<32>_> *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->CurrentCapture).SharedReferenceCount,&FStack_20);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_20.ReferenceController);
    local_18 = 0;
    FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (&this->CurrentCaptureGuid != (TSharedPtr<FGuid,1> *)&local_18) {
      (this->CurrentCaptureGuid).Object = (FGuid *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->CurrentCaptureGuid).SharedReferenceCount,&FStack_10);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_10.ReferenceController);
  }
  return;
}

// GenerateAndSubmitGPUTick @ 1493e4180

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall FNiagaraSystemInstance::GenerateAndSubmitGPUTick(FNiagaraSystemInstance *this)

{
  FNiagaraSystemGpuComputeProxy *pFVar1;
  code *pcVar2;
  ForAnyElementType FVar3;
  int iVar4;
  bool bVar5;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar6;
  code **ppcVar7;
  ulonglong uVar8;
  undefined1 auStackY_1a8 [32];
  ForAnyElementType local_160;
  undefined8 local_158;
  code *local_150;
  FNiagaraSystemGpuComputeProxy *local_148;
  FNiagaraComputeDataInterfaceInstanceData *local_140;
  code *local_138;
  code *local_130;
  code *local_128;
  code *local_120;
  uint local_118;
  uint local_114;
  undefined1 local_110;
  undefined1 local_10f;
  FNiagaraComputeInstanceData *local_108;
  code *pcStack_100;
  FNiagaraGPUSystemTick local_f8;
  code *local_88 [2];
  code *local_78 [3];
  code **local_60;
  undefined1 local_58 [40];
  code **local_30;
  byte local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  if (((this->ActiveGPUEmitterCount != 0) && (this->ActualExecutionState != Complete)) &&
     (this->ActualExecutionState != Disabled)) {
    local_f8.ExternalUnformBuffers_RT.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_f8.ExternalUnformBuffers_RT.ArrayNum = 0;
    local_f8.ExternalUnformBuffers_RT.ArrayMax = 0;
    local_f8.SystemInstanceID = 0;
    local_f8.SystemGpuComputeProxy = (FNiagaraSystemGpuComputeProxy *)0x0;
    local_f8.OwnerParamData = (uchar *)0x0;
    local_f8.InstanceCount = 0;
    local_f8.TotalDispatches = 0;
    local_f8.bIsFinalTick = false;
    local_f8.bHasInterpolatedParameters = false;
    local_f8.InstanceDataDebuggingOnly.DataPtr = (FNiagaraComputeInstanceData *)0x0;
    local_f8.InstanceDataDebuggingOnly.ArrayNum = 0;
    local_f8.DIInstanceData = (FNiagaraComputeDataInterfaceInstanceData *)0x0;
    local_f8.InstanceData_ParamData_Packed = (uchar *)0x0;
    local_f8.GlobalParamData = (uchar *)0x0;
    local_f8.SystemParamData = (uchar *)0x0;
    InitGPUTick(this,&local_f8);
    FVar3.Data = local_f8.ExternalUnformBuffers_RT.AllocatorInstance.Data;
    pFVar1 = (this->SystemGpuComputeProxy).Ptr;
    iVar4 = local_f8.ExternalUnformBuffers_RT.ArrayNum;
    local_160.Data = (FScriptContainerElement *)0x0;
    local_158 = CONCAT44(local_158._4_4_,local_f8.ExternalUnformBuffers_RT.ArrayNum);
    if (local_f8.ExternalUnformBuffers_RT.ArrayNum == 0) {
      local_158 = local_f8.ExternalUnformBuffers_RT._8_8_ & 0xffffffff;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,local_f8.ExternalUnformBuffers_RT.ArrayNum,0,&local_160,
                 local_f8.ExternalUnformBuffers_RT.ArrayNum,(int *)((longlong)&local_158 + 4));
      ConstructItems<TRefCountPtr<FRHIUniformBuffer>,TRefCountPtr<FRHIUniformBuffer>,int>
                (local_160.Data,(TRefCountPtr<FRHIUniformBuffer> *)FVar3.Data,iVar4);
    }
    pcStack_100 = (code *)CONCAT44(local_f8.InstanceDataDebuggingOnly._12_4_,
                                   local_f8.InstanceDataDebuggingOnly.ArrayNum);
    local_150 = (code *)local_f8.SystemInstanceID;
    local_148 = local_f8.SystemGpuComputeProxy;
    local_140 = local_f8.DIInstanceData;
    local_138 = (code *)local_f8.InstanceData_ParamData_Packed;
    local_130 = (code *)local_f8.GlobalParamData;
    local_128 = (code *)local_f8.SystemParamData;
    local_120 = (code *)local_f8.OwnerParamData;
    local_118 = local_f8.InstanceCount;
    local_114 = local_f8.TotalDispatches;
    local_110 = local_f8.bIsFinalTick;
    local_10f = local_f8.bHasInterpolatedParameters;
    local_108 = local_f8.InstanceDataDebuggingOnly.DataPtr;
    local_88[0] = (code *)0x0;
    local_60 = FMemory::Malloc(0x78,8);
    *local_60 = (code *)&UE::Core::Private::Function::
                         TFunction_OwnedObject<`FNiagaraSystemInstance::GenerateAndSubmitGPUTick'::`5'::<lambda_1>,1,1>
                         ::_vftable_;
    local_60[1] = (code *)pFVar1;
    local_60[2] = (code *)0x0;
    local_60[2] = (code *)local_160.Data;
    local_160.Data = (FScriptContainerElement *)0x0;
    *(int *)(local_60 + 3) = (int)local_158;
    *(undefined4 *)((longlong)local_60 + 0x1c) = local_158._4_4_;
    local_158 = 0;
    local_60[4] = local_150;
    local_60[5] = (code *)local_148;
    local_60[6] = (code *)local_140;
    local_60[7] = local_138;
    local_60[8] = local_130;
    local_60[9] = local_128;
    local_60[10] = local_120;
    *(uint *)(local_60 + 0xb) = local_118;
    *(uint *)((longlong)local_60 + 0x5c) = local_114;
    *(undefined1 *)(local_60 + 0xc) = local_110;
    *(undefined1 *)((longlong)local_60 + 0x61) = local_10f;
    local_60[0xd] = (code *)local_108;
    local_60[0xe] = pcStack_100;
    if (local_60 + 1 != (code **)0x0) {
      local_88[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`FNiagaraSystemInstance::GenerateAndSubmitGPUTick'::__l5::<lambda_1>,void,FRHICommandListImmediate_&>
                    ::Call;
    }
    this_00 = FRenderCommandList::GetInstanceTLS();
    if (this_00 == (FRenderCommandList *)0x0) {
      FRenderThreadCommandPipe::
      Enqueue<TRenderCommandTag<_FNiagaraSystemInstance::GenerateAndSubmitGPUTick_::__l5::TSTR_FNiagaraGiveSystemInstanceTickToRT2896>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_88);
    }
    else {
      this_01 = FRenderCommandList::GetRenderThread(this_00);
      local_58._0_8_ = local_88[0];
      local_30 = local_60;
      local_60 = (code **)0x0;
      local_58._16_8_ = local_78[0];
      local_58._24_8_ = local_78[1];
      local_58._32_8_ = local_78[2];
      local_88[0] = (code *)0x0;
      local_28 = 2;
      pFVar6 = (FRenderCommandTag *)
               TRenderCommandTag<`FNiagaraSystemInstance::GenerateAndSubmitGPUTick'::__l5::TSTR_FNiagaraGiveSystemInstanceTickToRT2896>
               ::Get();
      UE::RenderCommandPipe::FCommandList::Enqueue
                (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                          *)local_58,pFVar6);
      uVar8 = (ulonglong)local_28;
      if (2 < uVar8) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L"");
        if (bVar5) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar8] ==
          UE::Core::Private::
          TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
        if ((code *)local_58._0_8_ != (code *)0x0) {
          ppcVar7 = (code **)(local_58 + 0x10);
          if (local_30 != (code **)0x0) {
            ppcVar7 = local_30;
          }
          (**(code **)(*ppcVar7 + 0x10))();
        }
      }
      else {
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar8])(local_58);
      }
    }
    if (local_88[0] != (code *)0x0) {
      ppcVar7 = local_88 + 2;
      if (local_60 != (code **)0x0) {
        ppcVar7 = local_60;
      }
      (**(code **)(*ppcVar7 + 0x10))();
    }
    DestructItems<TRefCountPtr<FRHIUniformBuffer>,int>
              ((TRefCountPtr<FRHIUniformBuffer> *)local_160.Data,(int)local_158);
    if (local_160.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_160.Data);
    }
    DestructItems<TRefCountPtr<FRHIUniformBuffer>,int>
              ((TRefCountPtr<FRHIUniformBuffer> *)
               local_f8.ExternalUnformBuffers_RT.AllocatorInstance.Data,
               local_f8.ExternalUnformBuffers_RT.ArrayNum);
    if (local_f8.ExternalUnformBuffers_RT.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
    {
      FMemory::Free(local_f8.ExternalUnformBuffers_RT.AllocatorInstance.Data);
    }
  }
  return;
}

// GetActiveCaptureResults @ 1493e66d0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TArray<TSharedPtr<FNiagaraScriptDebuggerInfo,1>,TSizedDefaultAllocator<32>_> * __thiscall
FNiagaraSystemInstance::GetActiveCaptureResults(FNiagaraSystemInstance *this)

{
  return (this->CurrentCapture).Object;
}

// GetActiveCaptureWrite @ 1493e66e0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TSharedPtr<FNiagaraScriptDebuggerInfo,1> * __thiscall
FNiagaraSystemInstance::GetActiveCaptureWrite
          (FNiagaraSystemInstance *this,
          TSharedPtr<FNiagaraScriptDebuggerInfo,1> *__return_storage_ptr__,FName *param_1,
          ENiagaraScriptUsage param_2,FGuid *param_3)

{
  TArray<TSharedPtr<FNiagaraScriptDebuggerInfo,1>,TSizedDefaultAllocator<32>_> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  bool bVar3;
  TSharedPtr<FNiagaraScriptDebuggerInfo,1> *pTVar4;
  TSharedPtr<FNiagaraScriptDebuggerInfo,1> *pTVar5;
  ENiagaraScriptUsage local_res20 [8];
  FName *local_28;
  ENiagaraScriptUsage *local_20;
  FGuid *local_18;
  
  pTVar1 = (this->CurrentCapture).Object;
  if (pTVar1 != (TArray<TSharedPtr<FNiagaraScriptDebuggerInfo,1>,TSizedDefaultAllocator<32>_> *)0x0)
  {
    pTVar4 = (TSharedPtr<FNiagaraScriptDebuggerInfo,1> *)(pTVar1->AllocatorInstance).Data;
    local_20 = local_res20;
    pTVar5 = pTVar4 + pTVar1->ArrayNum;
    local_28 = param_1;
    local_res20[0] = param_2;
    local_18 = param_3;
    for (; pTVar4 != pTVar5; pTVar4 = pTVar4 + 1) {
      bVar3 = `FNiagaraSystemInstance::GetActiveCaptureWrite'::__l5::<lambda_1>::operator()
                        (&local_28,pTVar4);
      if (bVar3) {
        if (pTVar4 != (TSharedPtr<FNiagaraScriptDebuggerInfo,1> *)0x0) {
          __return_storage_ptr__->Object = pTVar4->Object;
          pTVar2 = (pTVar4->SharedReferenceCount).ReferenceController;
          (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar2;
          if (pTVar2 == (TReferenceControllerBase<1> *)0x0) {
            return __return_storage_ptr__;
          }
          LOCK();
          pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
          UNLOCK();
          return __return_storage_ptr__;
        }
        break;
      }
    }
  }
  __return_storage_ptr__->Object = (FNiagaraScriptDebuggerInfo *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// GetCrashReporterTag @ 1493e6900

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FString * __thiscall FNiagaraSystemInstance::GetCrashReporterTag(FNiagaraSystemInstance *this)

{
  FString *pFVar1;
  int iVar2;
  UNiagaraSystem *this_00;
  longlong lVar3;
  FScriptContainerElement *pFVar4;
  UObject *this_01;
  UClass *pUVar5;
  UObject *this_02;
  FString local_48;
  FString local_38;
  FString local_28;
  FString local_18;
  
  if (1 < (this->CrashReporterTag).Data.ArrayNum) {
    return &this->CrashReporterTag;
  }
  this_00 = this->System;
  this_01 = FWeakObjectPtr::Get(&(this->AttachComponent).WeakPtr);
  if (this_01 == (UObject *)0x0) {
LAB_1493e6984:
    this_02 = FWeakObjectPtr::Get(&(this->AttachComponent).WeakPtr);
  }
  else {
    pUVar5 = Z_Construct_UClass_UNiagaraComponent_NoRegister();
    lVar3 = *(longlong *)&this_01->field_0x10;
    iVar2 = (int)pUVar5->_padding_;
    if ((*(int *)(lVar3 + 0x38) < iVar2) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar2 * 8) !=
        &pUVar5->_padding_)) goto LAB_1493e6984;
    this_02 = *(UObject **)&this_01[5].field_0x8;
    if (lVar3 != 0) {
      UObjectBaseUtility::GetFullName((UObjectBaseUtility *)this_01,&local_18,(UObject *)0x0,None);
      goto LAB_1493e69a0;
    }
  }
  ::FString::FString(&local_18,L"None");
LAB_1493e69a0:
  if ((this_00 == (UNiagaraSystem *)0x0) || (this_00->_padding_ == 0)) {
    ::FString::FString(&local_28,L"None");
  }
  else {
    UObjectBaseUtility::GetFullName((UObjectBaseUtility *)this_00,&local_28,(UObject *)0x0,None);
  }
  if ((this_02 == (UObject *)0x0) ||
     (*(longlong *)&((UObjectBaseUtility *)this_02)->field_0x10 == 0)) {
    ::FString::FString(&local_38,L"None");
  }
  else {
    UObjectBaseUtility::GetFullName((UObjectBaseUtility *)this_02,&local_38,(UObject *)0x0,None);
  }
  ::FString::PrintfImpl
            (&local_48,L"SystemInstance | System: %s | bSolo: %s | Component: %s | AttachedTo: %s |"
            );
  pFVar1 = &this->CrashReporterTag;
  if (pFVar1 != &local_48) {
    pFVar4 = (pFVar1->Data).AllocatorInstance.Data;
    if (pFVar4 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar4);
    }
    (pFVar1->Data).AllocatorInstance.Data = local_48.Data.AllocatorInstance.Data;
    (this->CrashReporterTag).Data.ArrayNum = local_48.Data.ArrayNum;
    (this->CrashReporterTag).Data.ArrayMax = local_48.Data.ArrayMax;
    local_48.Data.ArrayNum = 0;
    local_48.Data.ArrayMax = 0;
    local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return &this->CrashReporterTag;
}

// GetEmitterByID @ 1493e74e0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FNiagaraEmitterInstance * __thiscall
FNiagaraSystemInstance::GetEmitterByID(FNiagaraSystemInstance *this,FNiagaraEmitterID param_1)

{
  code *pcVar1;
  bool bVar2;
  FNiagaraEmitterInstance *pFVar3;
  uint uVar4;
  
  if ((-1 < param_1.ID) && (param_1.ID < (this->Emitters).ArrayNum)) {
    uVar4 = 0;
    if (param_1.ID < (this->Emitters).ArrayNum) {
      uVar4 = (uint)~param_1.ID >> 0x1f;
    }
    if (uVar4 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar3 = (FNiagaraEmitterInstance *)(*pcVar1)();
        return pFVar3;
      }
    }
    return *(FNiagaraEmitterInstance **)
            ((this->Emitters).AllocatorInstance.Data + (longlong)param_1.ID * 0x10);
  }
  return (FNiagaraEmitterInstance *)0x0;
}

// GetEmitterExecutionOrder @ 1493e7580

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TArrayView<FNiagaraEmitterExecutionIndex_const_,int> * __thiscall
FNiagaraSystemInstance::GetEmitterExecutionOrder
          (FNiagaraSystemInstance *this,
          TArrayView<FNiagaraEmitterExecutionIndex_const_,int> *__return_storage_ptr__)

{
  int iVar1;
  FNiagaraSystemSimulation *pFVar2;
  UNiagaraSystem *pUVar3;
  code *pcVar4;
  bool bVar5;
  TArrayView<FNiagaraEmitterExecutionIndex_const_,int> *pTVar6;
  
  pFVar2 = (this->SystemSimulation).Object;
  if (pFVar2 != (FNiagaraSystemSimulation *)0x0) {
    pUVar3 = pFVar2->System;
    if (pUVar3 != (UNiagaraSystem *)0x0) {
      iVar1 = (pUVar3->EmitterExecutionOrder).ArrayNum;
      __return_storage_ptr__->DataPtr =
           (FNiagaraEmitterExecutionIndex *)(pUVar3->EmitterExecutionOrder).AllocatorInstance.Data;
      if (iVar1 < 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L"");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          pTVar6 = (TArrayView<FNiagaraEmitterExecutionIndex_const_,int> *)(*pcVar4)();
          return pTVar6;
        }
      }
      __return_storage_ptr__->ArrayNum = iVar1;
      return __return_storage_ptr__;
    }
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_2996346430399968339>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSystemInstance.cpp"
                       ,0xbad,"NiagaraSystem != nullptr");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar6 = (TArrayView<FNiagaraEmitterExecutionIndex_const_,int> *)(*pcVar4)();
      return pTVar6;
    }
  }
  __return_storage_ptr__->DataPtr = (FNiagaraEmitterExecutionIndex *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  return __return_storage_ptr__;
}

// GetEmitterFixedBounds @ 1493e7630

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraStatelessFeatureMask": Some values do not have unique names */

TBox<double> * __thiscall
FNiagaraSystemInstance::GetEmitterFixedBounds
          (FNiagaraSystemInstance *this,TBox<double> *__return_storage_ptr__,FName param_1)

{
  int iVar1;
  FNiagaraEmitterHandle *this_00;
  FName FVar2;
  UObject *this_01;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  FName local_res8 [2];
  FName local_res18 [2];
  FString local_58;
  FString local_48;
  FString local_38;
  
  iVar1 = (this->Emitters).ArrayNum;
  pFVar3 = (this->Emitters).AllocatorInstance.Data;
  pFVar4 = pFVar3 + (longlong)iVar1 * 0x10;
  local_res18[0] = param_1;
  while( true ) {
    if ((this->Emitters).ArrayNum != iVar1) {
      `TCheckedPointerIterator<TSharedRef<FNiagaraEmitterInstance,1>_const_,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar4) break;
    this_00 = FNiagaraEmitterInstance::GetEmitterHandle(*(FNiagaraEmitterInstance **)pFVar3);
    FVar2 = FNiagaraEmitterHandle::GetName(this_00);
    if (*(FName *)FVar2 == local_res18[0]) {
      FNiagaraEmitterInstance::GetFixedBounds
                (*(FNiagaraEmitterInstance **)pFVar3,__return_storage_ptr__);
      return __return_storage_ptr__;
    }
    pFVar3 = pFVar3 + 0x10;
  }
  if (2 < (byte)LogNiagara._0_1_) {
    this_01 = FWeakObjectPtr::Get(&(this->AttachComponent).WeakPtr);
    if ((this_01 == (UObject *)0x0) || (*(longlong *)&this_01->field_0x10 == 0)) {
      ::FString::FString(&local_48,L"None");
    }
    else {
      UObjectBaseUtility::GetFullName((UObjectBaseUtility *)this_01,&local_48,(UObject *)0x0,None);
    }
    if (this->System == (UNiagaraSystem *)0x0) {
      ::FString::FString(&local_58,L"None");
    }
    else {
      local_res8[0] = (FName)this->System->_padding_;
      ::FName::ToString(local_res8,&local_58);
    }
    ::FName::ToString(local_res18,&local_38);
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
  }
  (__return_storage_ptr__->Min).field0_0x0._s_0.X = 0.0;
  (__return_storage_ptr__->Min).field0_0x0._s_0.Y = 0.0;
  (__return_storage_ptr__->Min).field0_0x0._s_0.Z = 0.0;
  (__return_storage_ptr__->Max).field0_0x0._s_0.X = 0.0;
  (__return_storage_ptr__->Max).field0_0x0._s_0.Y = 0.0;
  (__return_storage_ptr__->Max).field0_0x0._s_0.Z = 0.0;
  __return_storage_ptr__->IsValid = '\0';
  __return_storage_ptr__->Pad[0] = '\0';
  __return_storage_ptr__->Pad[1] = '\0';
  __return_storage_ptr__->Pad[2] = '\0';
  __return_storage_ptr__->Pad[3] = '\0';
  __return_storage_ptr__->Pad[4] = '\0';
  __return_storage_ptr__->Pad[5] = '\0';
  __return_storage_ptr__->Pad[6] = '\0';
  return __return_storage_ptr__;
}

// GetEventDataSet @ 1493e7830

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FNiagaraDataSet * __thiscall
FNiagaraSystemInstance::GetEventDataSet(FNiagaraSystemInstance *this,FName param_1,FName param_2)

{
  FNiagaraDataSet **ppFVar1;
  FName local_18;
  FName local_10;
  
  local_18 = param_1;
  local_10 = param_2;
  ppFVar1 = TMapBase<TTuple<FName,FName>,FNiagaraDataSet_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FNiagaraDataSet_*,0>_>
            ::Find((TMapBase<TTuple<FName,FName>,FNiagaraDataSet_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,FNiagaraDataSet_*,0>_>
                    *)&this->EmitterEventDataSetMap,(TTuple<FName,FName> *)&local_18);
  if (ppFVar1 != (FNiagaraDataSet **)0x0) {
    return *ppFVar1;
  }
  return (FNiagaraDataSet *)0x0;
}

// GetLODDistance @ 1493e7ae0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

float __thiscall FNiagaraSystemInstance::GetLODDistance(FNiagaraSystemInstance *this)

{
  code *pcVar1;
  double dVar2;
  bool bVar3;
  FNiagaraWorldManager *this_00;
  float fVar4;
  double dVar5;
  TVector<double>_u_0 local_48 [2];
  
  if (this->bLODDistanceIsValid != '\0') {
    return this->LODDistance;
  }
  if (this->World == (UWorld *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("World",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSystemInstance.cpp"
                       ,0x577,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      fVar4 = (float)(*pcVar1)();
      return fVar4;
    }
  }
  this_00 = FNiagaraWorldManager::Get(this->World);
  if (this_00 == (FNiagaraWorldManager *)0x0) {
    return 0.0;
  }
  if (this->World == (UWorld *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("World",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSystemInstance.cpp"
                       ,0x7a9,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      fVar4 = (float)(*pcVar1)();
      return fVar4;
    }
  }
  dVar2 = __real_4140000000000000;
  dVar5 = (this->WorldTransform).Translation.ZW.m128d_f64[0];
  local_48[0]._0_8_ =
       (double)(this->LWCTile).field0_0x0._s_0.X * __real_4140000000000000 +
       (this->WorldTransform).Translation.XY.m128d_f64[0];
  local_48[0]._8_8_ =
       (double)(this->LWCTile).field0_0x0._s_0.Y * __real_4140000000000000 +
       (this->WorldTransform).Translation.XY.m128d_f64[1];
  fVar4 = (this->LWCTile).field0_0x0._s_0.Z;
  this->LODDistance = 0.0;
  local_48[0]._16_8_ = (double)fVar4 * dVar2 + dVar5;
  dVar5 = FNiagaraWorldManager::GetLODDistance(this_00,(TVector<double> *)&local_48[0]._s_0);
  this->bLODDistanceIsValid = '\x01';
  this->LODDistance = (float)dVar5;
  return (float)dVar5;
}

// GetLWCConverter @ 1493e7c20

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FNiagaraLWCConverter * __thiscall
FNiagaraSystemInstance::GetLWCConverter
          (FNiagaraSystemInstance *this,FNiagaraLWCConverter *__return_storage_ptr__,bool param_1)

{
  TVector<double>_u_0 local_28;
  
  if (param_1) {
    local_28._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    local_28._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    local_28._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    FNiagaraLWCConverter::FNiagaraLWCConverter
              (__return_storage_ptr__,(TVector<double> *)&local_28._s_0);
    return __return_storage_ptr__;
  }
  local_28._s_0.X = (double)(this->LWCTile).field0_0x0._s_0.X * __real_4140000000000000;
  local_28._s_0.Z = (double)(this->LWCTile).field0_0x0._s_0.Z * __real_4140000000000000;
  local_28._s_0.Y = (double)(this->LWCTile).field0_0x0._s_0.Y * __real_4140000000000000;
  FNiagaraLWCConverter::FNiagaraLWCConverter
            (__return_storage_ptr__,(TVector<double> *)&local_28._s_0);
  return __return_storage_ptr__;
}

// GetLWCSimToWorld @ 1493e7cc0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TTransform<double> * __thiscall
FNiagaraSystemInstance::GetLWCSimToWorld
          (FNiagaraSystemInstance *this,TTransform<double> *__return_storage_ptr__,bool param_1)

{
  float fVar1;
  float fVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  double dVar10;
  double dVar11;
  undefined1 auVar12 [16];
  double dVar13;
  
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[3];
  auVar3._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar3._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar3._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(__return_storage_ptr__->Rotation).XY.m128d_f64 = auVar3;
  auVar4._8_4_ = SUB84((double)fVar2,0);
  auVar4._0_8_ = (double)fVar1;
  auVar4._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(__return_storage_ptr__->Rotation).ZW.m128d_f64 = auVar4;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[3];
  auVar5._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar5._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar5._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(__return_storage_ptr__->Translation).XY.m128d_f64 = auVar5;
  auVar6._8_4_ = SUB84((double)fVar2,0);
  auVar6._0_8_ = (double)fVar1;
  auVar6._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(__return_storage_ptr__->Translation).ZW.m128d_f64 = auVar6;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar7._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar7._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar7._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(__return_storage_ptr__->Scale3D).XY.m128d_f64 = auVar7;
  auVar8._8_4_ = SUB84((double)fVar2,0);
  auVar8._0_8_ = (double)fVar1;
  auVar8._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(__return_storage_ptr__->Scale3D).ZW.m128d_f64 = auVar8;
  if (param_1) {
    dVar10 = (this->WorldTransform).Rotation.XY.m128d_f64[1];
    (__return_storage_ptr__->Rotation).XY.m128d_f64[0] =
         (this->WorldTransform).Rotation.XY.m128d_f64[0];
    (__return_storage_ptr__->Rotation).XY.m128d_f64[1] = dVar10;
    dVar10 = (this->WorldTransform).Rotation.ZW.m128d_f64[1];
    (__return_storage_ptr__->Rotation).ZW.m128d_f64[0] =
         (this->WorldTransform).Rotation.ZW.m128d_f64[0];
    (__return_storage_ptr__->Rotation).ZW.m128d_f64[1] = dVar10;
    dVar10 = (this->WorldTransform).Translation.XY.m128d_f64[1];
    (__return_storage_ptr__->Translation).XY.m128d_f64[0] =
         (this->WorldTransform).Translation.XY.m128d_f64[0];
    (__return_storage_ptr__->Translation).XY.m128d_f64[1] = dVar10;
    dVar10 = (this->WorldTransform).Translation.ZW.m128d_f64[1];
    (__return_storage_ptr__->Translation).ZW.m128d_f64[0] =
         (this->WorldTransform).Translation.ZW.m128d_f64[0];
    (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = dVar10;
    dVar10 = (this->WorldTransform).Scale3D.XY.m128d_f64[1];
    (__return_storage_ptr__->Scale3D).XY.m128d_f64[0] =
         (this->WorldTransform).Scale3D.XY.m128d_f64[0];
    (__return_storage_ptr__->Scale3D).XY.m128d_f64[1] = dVar10;
    dVar10 = (this->WorldTransform).Scale3D.ZW.m128d_f64[1];
    (__return_storage_ptr__->Scale3D).ZW.m128d_f64[0] =
         (this->WorldTransform).Scale3D.ZW.m128d_f64[0];
    (__return_storage_ptr__->Scale3D).ZW.m128d_f64[1] = dVar10;
  }
  dVar10 = (double)(this->LWCTile).field0_0x0._s_0.Z * __real_4140000000000000;
  dVar13 = (__return_storage_ptr__->Translation).XY.m128d_f64[1] +
           (double)(this->LWCTile).field0_0x0._s_0.Y * __real_4140000000000000;
  dVar11 = (__return_storage_ptr__->Translation).ZW.m128d_f64[1] + 0.0;
  auVar12._8_4_ = SUB84(dVar13,0);
  auVar12._0_8_ =
       (__return_storage_ptr__->Translation).XY.m128d_f64[0] +
       (double)(this->LWCTile).field0_0x0._s_0.X * __real_4140000000000000;
  auVar12._12_4_ = (int)((ulonglong)dVar13 >> 0x20);
  *(undefined1 (*) [16])(__return_storage_ptr__->Translation).XY.m128d_f64 = auVar12;
  auVar9._8_4_ = SUB84(dVar11,0);
  auVar9._0_8_ = dVar10 + (__return_storage_ptr__->Translation).ZW.m128d_f64[0];
  auVar9._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
  *(undefined1 (*) [16])(__return_storage_ptr__->Translation).ZW.m128d_f64 = auVar9;
  return __return_storage_ptr__;
}

// GetParameterCollectionInstance @ 1493e84d0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UNiagaraParameterCollectionInstance * __thiscall
FNiagaraSystemInstance::GetParameterCollectionInstance
          (FNiagaraSystemInstance *this,UNiagaraParameterCollection *param_1)

{
  code *pcVar1;
  bool bVar2;
  UNiagaraParameterCollectionInstance *pUVar3;
  
  if ((this->SystemSimulation).Object == (FNiagaraSystemSimulation *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pUVar3 = (UNiagaraParameterCollectionInstance *)(*pcVar1)();
      return pUVar3;
    }
  }
  pUVar3 = FNiagaraSystemSimulation::GetParameterCollectionInstance
                     ((this->SystemSimulation).Object,param_1);
  return pUVar3;
}

// GetPrereqComponent @ 1493e8640

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UActorComponent * __thiscall
FNiagaraSystemInstance::GetPrereqComponent(FNiagaraSystemInstance *this)

{
  int iVar1;
  UActorComponent *pUVar2;
  UClass *pUVar3;
  
  pUVar2 = (UActorComponent *)FWeakObjectPtr::Get(&(this->AttachComponent).WeakPtr);
  if (pUVar2 != (UActorComponent *)0x0) {
    pUVar3 = Z_Construct_UClass_UNiagaraComponent_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(pUVar2->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) {
      return (UActorComponent *)pUVar2[1]._padding_;
    }
  }
  return pUVar2;
}

// GetSceneComponentUtils @ 1493e9580

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

INiagaraSceneComponentUtils * __cdecl
FNiagaraSystemInstance::GetSceneComponentUtils(FNiagaraSystemInstance *param_1)

{
  FNiagaraActorSceneComponentUtils *pFVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FNiagaraActorSceneComponentUtils::FNiagaraActorSceneComponentUtils
                (&GNullUtils,(UNiagaraComponent *)0x0);
      atexit(`FNiagaraSystemInstance::GetSceneComponentUtils'::__l2::
             _dynamic_atexit_destructor_for__GNullUtils__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  if ((param_1 == (FNiagaraSystemInstance *)0x0) ||
     (pFVar1 = (FNiagaraActorSceneComponentUtils *)(param_1->SceneComponentUtils).Ptr,
     pFVar1 == (FNiagaraActorSceneComponentUtils *)0x0)) {
    pFVar1 = &GNullUtils;
  }
  return (INiagaraSceneComponentUtils *)pFVar1;
}

// GetSimulationForHandle @ 1493e9610

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraStatelessFeatureMask": Some values do not have unique names */

TSharedPtr<FNiagaraEmitterInstance,1> * __thiscall
FNiagaraSystemInstance::GetSimulationForHandle
          (FNiagaraSystemInstance *this,
          TSharedPtr<FNiagaraEmitterInstance,1> *__return_storage_ptr__,
          FNiagaraEmitterHandle *param_1)

{
  int iVar1;
  TReferenceControllerBase<1> *pTVar2;
  FGuid *pFVar3;
  FNiagaraEmitterHandle *this_00;
  FGuid *pFVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  undefined1 local_res8 [8];
  FGuid local_48;
  FGuid local_38;
  
  iVar1 = (this->Emitters).ArrayNum;
  pFVar5 = (this->Emitters).AllocatorInstance.Data;
  pFVar6 = pFVar5 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((this->Emitters).ArrayNum != iVar1) {
      `TCheckedPointerIterator<TSharedRef<FNiagaraEmitterInstance,1>_const_,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar5 == pFVar6) break;
    pFVar3 = FNiagaraEmitterHandle::GetId(param_1,&local_48);
    this_00 = FNiagaraEmitterInstance::GetEmitterHandle(*(FNiagaraEmitterInstance **)pFVar5);
    pFVar4 = FNiagaraEmitterHandle::GetId(this_00,&local_38);
    if (((pFVar4->D == pFVar3->D && pFVar4->C == pFVar3->C) && pFVar4->B == pFVar3->B) &&
        pFVar4->A == pFVar3->A) {
      __return_storage_ptr__->Object = *(FNiagaraEmitterInstance **)pFVar5;
      pTVar2 = *(TReferenceControllerBase<1> **)(pFVar5 + 8);
      (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar2;
      if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
        UNLOCK();
      }
      return __return_storage_ptr__;
    }
    pFVar5 = pFVar5 + 0x10;
  }
  __return_storage_ptr__->Object = (FNiagaraEmitterInstance *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// GetSystemDIStageTickHandler @ 1493e9a70

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FNDIStageTickHandler * __thiscall
FNiagaraSystemInstance::GetSystemDIStageTickHandler
          (FNiagaraSystemInstance *this,ENiagaraScriptUsage param_1)

{
  FNDIStageTickHandler *pFVar1;
  
  if ((param_1 - EmitterSpawnScript & 0xfd) == 0) {
    pFVar1 = &this->SystemSpawnDIStageTickHandler;
  }
  else {
    pFVar1 = &this->SystemUpdateDIStageTickHandler;
    if (param_1 != SystemUpdateScript) {
      if (param_1 != EmitterUpdateScript) {
        pFVar1 = (FNDIStageTickHandler *)0x0;
      }
      return pFVar1;
    }
  }
  return pFVar1;
}

// GetSystemFixedBounds @ 1493e9aa0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TBox<double> * __thiscall
FNiagaraSystemInstance::GetSystemFixedBounds
          (FNiagaraSystemInstance *this,TBox<double> *__return_storage_ptr__)

{
  UNiagaraSystem *pUVar1;
  double dVar2;
  uchar uVar3;
  uchar uVar4;
  uchar uVar5;
  uchar uVar6;
  uchar uVar7;
  uchar uVar8;
  uchar uVar9;
  
  if ((this->FixedBounds_GT).IsValid != '\0') {
    dVar2 = (this->FixedBounds_GT).Min.field0_0x0._s_0.Y;
    (__return_storage_ptr__->Min).field0_0x0._s_0.X = (this->FixedBounds_GT).Min.field0_0x0._s_0.X;
    (__return_storage_ptr__->Min).field0_0x0._s_0.Y = dVar2;
    dVar2 = (this->FixedBounds_GT).Max.field0_0x0._s_0.X;
    (__return_storage_ptr__->Min).field0_0x0._s_0.Z = (this->FixedBounds_GT).Min.field0_0x0._s_0.Z;
    (__return_storage_ptr__->Max).field0_0x0._s_0.X = dVar2;
    dVar2 = (this->FixedBounds_GT).Max.field0_0x0._s_0.Z;
    (__return_storage_ptr__->Max).field0_0x0._s_0.Y = (this->FixedBounds_GT).Max.field0_0x0._s_0.Y;
    (__return_storage_ptr__->Max).field0_0x0._s_0.Z = dVar2;
    uVar3 = (this->FixedBounds_GT).Pad[0];
    uVar4 = (this->FixedBounds_GT).Pad[1];
    uVar5 = (this->FixedBounds_GT).Pad[2];
    uVar6 = (this->FixedBounds_GT).Pad[3];
    uVar7 = (this->FixedBounds_GT).Pad[4];
    uVar8 = (this->FixedBounds_GT).Pad[5];
    uVar9 = (this->FixedBounds_GT).Pad[6];
    __return_storage_ptr__->IsValid = (this->FixedBounds_GT).IsValid;
    __return_storage_ptr__->Pad[0] = uVar3;
    __return_storage_ptr__->Pad[1] = uVar4;
    __return_storage_ptr__->Pad[2] = uVar5;
    __return_storage_ptr__->Pad[3] = uVar6;
    __return_storage_ptr__->Pad[4] = uVar7;
    __return_storage_ptr__->Pad[5] = uVar8;
    __return_storage_ptr__->Pad[6] = uVar9;
    return __return_storage_ptr__;
  }
  if (((this->System != (UNiagaraSystem *)0x0) && (((uint)this->System->_padding_ >> 0x1e & 1) == 0)
      ) && (pUVar1 = this->System, pUVar1->bFixedBounds != 0)) {
    dVar2 = (pUVar1->FixedBounds).Min.field0_0x0._s_0.Y;
    (__return_storage_ptr__->Min).field0_0x0._s_0.X = (pUVar1->FixedBounds).Min.field0_0x0._s_0.X;
    (__return_storage_ptr__->Min).field0_0x0._s_0.Y = dVar2;
    dVar2 = (pUVar1->FixedBounds).Max.field0_0x0._s_0.X;
    (__return_storage_ptr__->Min).field0_0x0._s_0.Z = (pUVar1->FixedBounds).Min.field0_0x0._s_0.Z;
    (__return_storage_ptr__->Max).field0_0x0._s_0.X = dVar2;
    dVar2 = (pUVar1->FixedBounds).Max.field0_0x0._s_0.Z;
    (__return_storage_ptr__->Max).field0_0x0._s_0.Y = (pUVar1->FixedBounds).Max.field0_0x0._s_0.Y;
    (__return_storage_ptr__->Max).field0_0x0._s_0.Z = dVar2;
    uVar3 = (pUVar1->FixedBounds).Pad[0];
    uVar4 = (pUVar1->FixedBounds).Pad[1];
    uVar5 = (pUVar1->FixedBounds).Pad[2];
    uVar6 = (pUVar1->FixedBounds).Pad[3];
    uVar7 = (pUVar1->FixedBounds).Pad[4];
    uVar8 = (pUVar1->FixedBounds).Pad[5];
    uVar9 = (pUVar1->FixedBounds).Pad[6];
    __return_storage_ptr__->IsValid = (pUVar1->FixedBounds).IsValid;
    __return_storage_ptr__->Pad[0] = uVar3;
    __return_storage_ptr__->Pad[1] = uVar4;
    __return_storage_ptr__->Pad[2] = uVar5;
    __return_storage_ptr__->Pad[3] = uVar6;
    __return_storage_ptr__->Pad[4] = uVar7;
    __return_storage_ptr__->Pad[5] = uVar8;
    __return_storage_ptr__->Pad[6] = uVar9;
    return __return_storage_ptr__;
  }
  (__return_storage_ptr__->Min).field0_0x0._s_0.X = 0.0;
  (__return_storage_ptr__->Min).field0_0x0._s_0.Y = 0.0;
  (__return_storage_ptr__->Min).field0_0x0._s_0.Z = 0.0;
  (__return_storage_ptr__->Max).field0_0x0._s_0.X = 0.0;
  (__return_storage_ptr__->Max).field0_0x0._s_0.Y = 0.0;
  (__return_storage_ptr__->Max).field0_0x0._s_0.Z = 0.0;
  __return_storage_ptr__->IsValid = '\0';
  __return_storage_ptr__->Pad[0] = '\0';
  __return_storage_ptr__->Pad[1] = '\0';
  __return_storage_ptr__->Pad[2] = '\0';
  __return_storage_ptr__->Pad[3] = '\0';
  __return_storage_ptr__->Pad[4] = '\0';
  __return_storage_ptr__->Pad[5] = '\0';
  __return_storage_ptr__->Pad[6] = '\0';
  return __return_storage_ptr__;
}

// GetWorldManager @ 1493ea6d0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

FNiagaraWorldManager * __thiscall
FNiagaraSystemInstance::GetWorldManager(FNiagaraSystemInstance *this)

{
  code *pcVar1;
  bool bVar2;
  FNiagaraWorldManager *pFVar3;
  
  if (this->World == (UWorld *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("World",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSystemInstance.cpp"
                       ,0x577,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FNiagaraWorldManager *)(*pcVar1)();
      return pFVar3;
    }
  }
  pFVar3 = FNiagaraWorldManager::Get(this->World);
  return pFVar3;
}

// HandleCompletion @ 1493ea720

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall FNiagaraSystemInstance::HandleCompletion(FNiagaraSystemInstance *this)

{
  int iVar1;
  byte bVar2;
  bool bVar3;
  FScriptContainerElement *pFVar4;
  byte bVar5;
  FScriptContainerElement *pFVar6;
  undefined1 local_res8 [8];
  
  iVar1 = (this->Emitters).ArrayNum;
  pFVar4 = (this->Emitters).AllocatorInstance.Data;
  bVar5 = 1;
  pFVar6 = pFVar4 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((this->Emitters).ArrayNum != iVar1) {
      `TCheckedPointerIterator<TSharedRef<FNiagaraEmitterInstance,1>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar4 == pFVar6) break;
    bVar2 = (**(code **)(**(longlong **)pFVar4 + 0x28))();
    bVar5 = bVar5 & bVar2;
    pFVar4 = pFVar4 + 0x10;
  }
  if ((((this->ActualExecutionState == Complete) || (this->ActualExecutionState == Disabled)) ||
      (bVar5 != 0)) || (this->World->bIsTearingDown != '\0')) {
    Complete(this,false);
    bVar3 = true;
  }
  else {
    bVar3 = false;
  }
  return bVar3;
}

// Init @ 1493eaf90

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall FNiagaraSystemInstance::Init(FNiagaraSystemInstance *this,bool param_1)

{
  UNiagaraSystem *pUVar1;
  int iVar2;
  
  WaitForConcurrentTickDoNotFinalize(this,true);
  if ((this->FinalizeRef).TaskEntry != (FNiagaraSystemInstance **)0x0) {
    FinalizeTick_GameThread(this,true);
  }
  this->bForceSolo = '\0';
  this->bAlreadyBound = '\0';
  pUVar1 = this->System;
  this->field_0x840 = this->field_0x840 | param_1 << 3;
  this->ActualExecutionState = Inactive;
  this->RequestedExecutionState = Inactive;
  if (pUVar1 != (UNiagaraSystem *)0x0) {
    if (pUVar1->bDeterminism == false) {
      iVar2 = rand();
    }
    else {
      iVar2 = pUVar1->RandomSeed;
    }
    this->RandomSeed = iVar2;
  }
  Reset(this,ReInit);
  return;
}

// InitDataInterfaces @ 1493ebef0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall FNiagaraSystemInstance::InitDataInterfaces(FNiagaraSystemInstance *this)

{
  undefined1 *puVar1;
  TArray<unsigned_char,TAlignedHeapAllocator<16>_> *pTVar2;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar4;
  FWeakObjectPtr *pFVar5;
  FNiagaraUserRedirectionParameterStore *this_00;
  FNiagaraSystemGpuComputeProxy *pFVar6;
  FNiagaraGpuComputeDispatchInterface *pFVar7;
  FNiagaraPerInstanceDIFuncInfo *pFVar8;
  FNiagaraScriptExecutionContext *pFVar9;
  FNiagaraScriptExecutionContextBase *pFVar10;
  code *pcVar11;
  bool bVar12;
  char cVar13;
  byte bVar14;
  byte bVar15;
  int iVar16;
  int iVar17;
  FRenderCommandList *this_01;
  FCommandList *this_02;
  FRenderCommandTag *pFVar18;
  ulonglong uVar19;
  FNiagaraEmitterInstanceImpl *pFVar20;
  TArrayView<FNiagaraScriptExecutionContext,int> *pTVar21;
  FNiagaraTypeDefinition *this_03;
  UObject *pUVar22;
  UObject *pUVar23;
  undefined ***pppuVar24;
  FScriptContainerElement *pFVar25;
  FWeakObjectPtr *pFVar26;
  uint uVar27;
  undefined8 *puVar28;
  longlong lVar29;
  TArray<TTuple<TWeakObjectPtr<UNiagaraDataInterface,FWeakObjectPtr>,int>,TSizedDefaultAllocator<32>_>
  *pTVar30;
  uint uVar31;
  int *piVar32;
  FScriptContainerElement *pFVar33;
  undefined8 *puVar34;
  undefined1 uVar35;
  FNiagaraSystemInstance *pFVar36;
  undefined1 uVar37;
  undefined1 auStackY_258 [32];
  uint local_208;
  undefined1 local_204;
  char local_203;
  undefined1 local_202;
  undefined1 local_201;
  undefined1 local_200;
  undefined1 local_1ff [7];
  FNiagaraSystemInstance *local_1f8;
  uint local_1f0;
  uint local_1ec;
  TArray<TTuple<TWeakObjectPtr<UNiagaraDataInterface,FWeakObjectPtr>,int>,TSizedDefaultAllocator<32>_>
  *local_1e8;
  FNiagaraSystemInstance *local_1e0;
  uint *local_1d8;
  FScriptContainerElement *local_1d0;
  undefined8 *local_1c8;
  longlong local_1c0;
  FScriptContainerElement *local_1b8;
  FString local_1b0;
  FString local_1a0;
  FString local_190;
  FName local_180;
  FName local_178;
  UObject *local_170;
  FNiagaraEmitterInstanceImpl *local_168;
  UObject *local_160;
  FName local_158;
  undefined8 *local_150;
  int local_148;
  TVector<double>_u_0 local_138;
  TArrayView<FNiagaraScriptExecutionContext,int> local_118;
  FString local_108;
  TVector<double>_u_0 local_f8;
  TVector<double>_u_0 local_d8;
  TArrayView<FNiagaraScriptExecutionContext,int> local_b8;
  code *local_a8 [2];
  undefined **local_98;
  FNiagaraSystemGpuComputeProxy *pFStack_90;
  undefined8 local_88;
  undefined ***local_80;
  undefined1 local_78 [16];
  undefined **local_68;
  FNiagaraSystemGpuComputeProxy *pFStack_60;
  undefined8 local_58;
  undefined ***local_50;
  byte local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_258;
  this->bDataInterfacesHaveTickPrereqs = '\0';
  this->bDataInterfacesHaveTickPostreqs = '\0';
  if (this->System == (UNiagaraSystem *)0x0) {
    return;
  }
  if (this->ActualExecutionState == Disabled) {
    return;
  }
  local_1f8 = this;
  WaitForConcurrentTickAndFinalize(this,true);
  this_00 = this->OverrideParameters;
  if (this_00 != (FNiagaraUserRedirectionParameterStore *)0x0) {
    local_138._s_0.X = (double)(this->LWCTile).field0_0x0._s_0.X * __real_4140000000000000;
    local_138._s_0.Z = (double)(this->LWCTile).field0_0x0._s_0.Z * __real_4140000000000000;
    local_138._s_0.Y = (double)(this->LWCTile).field0_0x0._s_0.Y * __real_4140000000000000;
    FNiagaraLWCConverter::FNiagaraLWCConverter
              ((FNiagaraLWCConverter *)&local_f8._s_0,(TVector<double> *)&local_138._s_0);
    local_d8._s_0.X = local_f8._s_0.X;
    local_d8._s_0.Y = local_f8._s_0.Y;
    local_d8._s_0.Z = local_f8._s_0.Z;
    FNiagaraParameterStore::ResolvePositions
              ((FNiagaraParameterStore *)this_00,(FNiagaraLWCConverter *)&local_d8._s_0);
    FNiagaraParameterStore::Tick((FNiagaraParameterStore *)this->OverrideParameters);
  }
  FNiagaraParameterStore::Tick(&this->InstanceParameters);
  DestroyDataInterfaceInstanceData(this);
  pFVar6 = (this->SystemGpuComputeProxy).Ptr;
  if (pFVar6 != (FNiagaraSystemGpuComputeProxy *)0x0) {
    pFVar7 = (this->ComputeDispatchInterfacePtr).Object;
    bVar12 = IsInGameThread();
    if ((!bVar12) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsInGameThread()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSystemGpuComputeProxy.cpp"
                            ,0x9a,L""), bVar12)) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    if ((pFVar6->DebugOwnerComputeDispatchInterface != pFVar7) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("DebugOwnerComputeDispatchInterface == ComputeDispatchInterface",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSystemGpuComputeProxy.cpp"
                            ,0x9b,L""), bVar12)) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    local_80 = (undefined ***)0x0;
    local_98 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`FNiagaraSystemGpuComputeProxy::ClearTicksFromRenderThread'::`2'::<lambda_1>,1,0>
                ::_vftable_;
    local_a8[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FNiagaraSystemGpuComputeProxy::ClearTicksFromRenderThread'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
                  ::Call;
    pFStack_90 = pFVar6;
    this_01 = FRenderCommandList::GetInstanceTLS();
    if (this_01 == (FRenderCommandList *)0x0) {
      FRenderThreadCommandPipe::
      Enqueue<TRenderCommandTag<_FNiagaraSystemGpuComputeProxy::ClearTicksFromRenderThread_::__l2::TSTR_ClearTicksFromProxy157>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_a8);
    }
    else {
      this_02 = FRenderCommandList::GetRenderThread(this_01);
      local_78._0_8_ = local_a8[0];
      local_50 = local_80;
      local_68 = local_98;
      pFStack_60 = pFStack_90;
      local_58 = local_88;
      local_a8[0] = (code *)0x0;
      local_48 = 2;
      pFVar18 = (FRenderCommandTag *)
                TRenderCommandTag<`FNiagaraSystemGpuComputeProxy::ClearTicksFromRenderThread'::__l2::TSTR_ClearTicksFromProxy157>
                ::Get();
      UE::RenderCommandPipe::FCommandList::Enqueue
                (this_02,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                          *)local_78,pFVar18);
      uVar19 = (ulonglong)local_48;
      if ((2 < uVar19) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                              ,0xd4,L""), bVar12)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar19] ==
          UE::Core::Private::
          TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
        if ((code *)local_78._0_8_ != (code *)0x0) {
          pppuVar24 = (undefined ***)(local_78 + 0x10);
          if (local_50 != (undefined ***)0x0) {
            pppuVar24 = local_50;
          }
          (*(code *)(*pppuVar24)[2])();
        }
      }
      else {
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar19])(local_78);
      }
    }
    if (local_a8[0] != (code *)0x0) {
      pppuVar24 = &local_98;
      if (local_80 != (undefined ***)0x0) {
        pppuVar24 = local_80;
      }
      (*(code *)(*pppuVar24)[2])();
    }
  }
  piVar32 = &this->PerInstanceDIFunctions[0].ArrayMax;
  pFVar8 = (FNiagaraPerInstanceDIFuncInfo *)this->PerInstanceDIFunctions[0].AllocatorInstance.Data;
  iVar16 = this->PerInstanceDIFunctions[0].ArrayNum;
  if (*piVar32 < 0) {
    DestructItems<FNiagaraPerInstanceDIFuncInfo,int>(pFVar8,iVar16);
    this->PerInstanceDIFunctions[0].ArrayNum = 0;
    if (*piVar32 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,0,&this->PerInstanceDIFunctions[0].AllocatorInstance,0,piVar32);
    }
  }
  else {
    DestructItems<FNiagaraPerInstanceDIFuncInfo,int>(pFVar8,iVar16);
    this->PerInstanceDIFunctions[0].ArrayNum = 0;
  }
  piVar32 = &this->PerInstanceDIFunctions[1].ArrayMax;
  pFVar8 = (FNiagaraPerInstanceDIFuncInfo *)this->PerInstanceDIFunctions[1].AllocatorInstance.Data;
  iVar16 = this->PerInstanceDIFunctions[1].ArrayNum;
  if (*piVar32 < 0) {
    DestructItems<FNiagaraPerInstanceDIFuncInfo,int>(pFVar8,iVar16);
    this->PerInstanceDIFunctions[1].ArrayNum = 0;
    if (*piVar32 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,0,&this->PerInstanceDIFunctions[1].AllocatorInstance,0,piVar32);
    }
  }
  else {
    DestructItems<FNiagaraPerInstanceDIFuncInfo,int>(pFVar8,iVar16);
    this->PerInstanceDIFunctions[1].ArrayNum = 0;
  }
  ResolveUserDataInterfaceBindings(this);
  local_1ec = 0;
  piVar32 = &(this->DataInterfaceInstanceDataOffsets).ArrayMax;
  (this->DataInterfaceInstanceDataOffsets).ArrayNum = 0;
  if (*piVar32 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,&(this->DataInterfaceInstanceDataOffsets).AllocatorInstance,0,piVar32);
  }
  local_1d8 = &local_1ec;
  local_1e0 = this;
  `FNiagaraSystemInstance::InitDataInterfaces'::__l2::<lambda_1>::operator()
            (&local_1e0,&this->InstanceParameters,false,false,false);
  if (((this->SystemSimulation).Object == (FNiagaraSystemSimulation *)0x0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar12)) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  `FNiagaraSystemInstance::InitDataInterfaces'::__l2::<lambda_1>::operator()
            (&local_1e0,
             (FNiagaraParameterStore *)
             &((((this->SystemSimulation).Object)->SpawnExecContext).Ptr)->Parameters,true,false,
             true);
  if (((this->SystemSimulation).Object == (FNiagaraSystemSimulation *)0x0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar12)) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  `FNiagaraSystemInstance::InitDataInterfaces'::__l2::<lambda_1>::operator()
            (&local_1e0,
             (FNiagaraParameterStore *)
             &((((this->SystemSimulation).Object)->UpdateExecContext).Ptr)->Parameters,true,false,
             true);
  iVar16 = (this->Emitters).ArrayNum;
  uVar19 = (ulonglong)iVar16;
  pFVar25 = (this->Emitters).AllocatorInstance.Data;
  local_1d0 = pFVar25 + uVar19 * 0x10;
  local_1e8 = (TArray<TTuple<TWeakObjectPtr<UNiagaraDataInterface,FWeakObjectPtr>,int>,TSizedDefaultAllocator<32>_>
               *)CONCAT44(local_1e8._4_4_,iVar16);
  while( true ) {
    pFVar33 = local_1d0;
    local_1b8 = pFVar25;
    if ((this->Emitters).ArrayNum != (int)uVar19) {
      local_204 = 0;
      `TCheckedPointerIterator<TSharedRef<FNiagaraEmitterInstance,1>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(&local_204);
    }
    uVar31 = local_1ec;
    if (pFVar25 == pFVar33) break;
    pFVar20 = (FNiagaraEmitterInstanceImpl *)(**(code **)(**(longlong **)pFVar25 + 0x68))();
    local_168 = pFVar20;
    if ((pFVar20 != (FNiagaraEmitterInstanceImpl *)0x0) &&
       (*(int *)((longlong)&pFVar20->_padding_ + 4) != 4)) {
      local_203 = *(char *)((longlong)&pFVar20->_padding_ + 1);
      uVar37 = local_203 == '\x01';
      uVar35 = !(bool)uVar37;
      local_202 = uVar37;
      local_201 = uVar35;
      `FNiagaraSystemInstance::InitDataInterfaces'::__l2::<lambda_1>::operator()
                (&local_1e0,(FNiagaraParameterStore *)&(pFVar20->SpawnExecContext)._padding_,
                 (bool)uVar35,(bool)uVar37,false);
      `FNiagaraSystemInstance::InitDataInterfaces'::__l2::<lambda_1>::operator()
                (&local_1e0,(FNiagaraParameterStore *)&(pFVar20->UpdateExecContext)._padding_,
                 (bool)uVar35,(bool)uVar37,false);
      uVar31 = 0;
      local_1f0 = 0;
      pTVar21 = FNiagaraEmitterInstanceImpl::GetEventExecutionContexts(pFVar20,&local_118);
      if (0 < pTVar21->ArrayNum) {
        lVar29 = 0;
        local_1c0 = 0;
        do {
          pTVar21 = FNiagaraEmitterInstanceImpl::GetEventExecutionContexts(pFVar20,&local_b8);
          uVar27 = 0;
          if ((int)uVar31 < pTVar21->ArrayNum) {
            uVar27 = ~uVar31 >> 0x1f;
          }
          if ((uVar27 == 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0x14f,
                                  L"Array index out of bounds: %lld from an array of size %lld"),
             bVar12)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          pFVar9 = pTVar21->DataPtr;
          (*(code *)**(undefined8 **)((longlong)&pFVar9->_padding_ + lVar29))
                    ((longlong)&pFVar9->_padding_ + lVar29,&local_150);
          puVar28 = local_150 + (longlong)local_148 * 5;
          puVar34 = local_150;
          local_1c8 = puVar28;
          if (local_150 != puVar28) {
            do {
              this_03 = FNiagaraTypeDefinitionHandle::Resolve
                                  ((FNiagaraTypeDefinitionHandle *)(puVar34 + 1));
              bVar12 = FNiagaraTypeDefinition::IsDataInterface(this_03);
              if (bVar12) {
                uVar31 = *(uint *)((longlong)puVar34 + 0xc);
                uVar27 = 0;
                if ((int)uVar31 < *(int *)((longlong)&pFVar9->_padding_ + lVar29)) {
                  uVar27 = ~uVar31 >> 0x1f;
                }
                if ((uVar27 == 0) &&
                   (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar12)) {
                  pcVar11 = (code *)swi(3);
                  (*pcVar11)();
                  return;
                }
                pUVar23 = *(UObject **)
                           (*(longlong *)((longlong)&pFVar9->_padding_ + lVar29) +
                           (longlong)(int)uVar31 * 8);
                if (pUVar23 != (UObject *)0x0) {
                  iVar16 = (**(code **)(*(longlong *)pUVar23 + 0x328))(pUVar23);
                  pFVar36 = local_1e0;
                  if (iVar16 != 0) {
                    pTVar30 = &local_1e0->DataInterfaceInstanceDataOffsets;
                    pFVar26 = (FWeakObjectPtr *)(pTVar30->AllocatorInstance).Data;
                    pFVar5 = (FWeakObjectPtr *)
                             ((longlong)pFVar26 +
                             (longlong)(local_1e0->DataInterfaceInstanceDataOffsets).ArrayNum * 0xc)
                    ;
                    for (; pFVar26 != pFVar5;
                        pFVar26 = (FWeakObjectPtr *)&pFVar26[1].ObjectSerialNumber) {
                      pUVar22 = FWeakObjectPtr::Get(pFVar26);
                      if (pUVar22 == pUVar23) {
                        puVar28 = local_1c8;
                        if (pFVar26 != (FWeakObjectPtr *)0x0) goto LAB_1493ec616;
                        break;
                      }
                    }
                    iVar17 = (pFVar36->DataInterfaceInstanceDataOffsets).ArrayNum;
                    piVar32 = &(pFVar36->DataInterfaceInstanceDataOffsets).ArrayMax;
                    if (iVar17 == *piVar32) {
                      iVar17 = UE::Core::Private::
                               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                         (0x40c,&pTVar30->AllocatorInstance,piVar32);
                    }
                    (pFVar36->DataInterfaceInstanceDataOffsets).ArrayNum = iVar17 + 1;
                    pFVar5 = (FWeakObjectPtr *)
                             ((pTVar30->AllocatorInstance).Data + (longlong)iVar17 * 0xc);
                    DefaultConstructItems<TTuple<TWeakObjectPtr<UNiagaraDataInterface,FWeakObjectPtr>,int>,int>
                              (pFVar5,1);
                    local_170 = pUVar23;
                    if (UE::GC::GIsIncrementalReachabilityPending != false) {
                      UE::GC::MarkAsReachable(pUVar23);
                    }
                    FWeakObjectPtr::operator=(pFVar5,(FObjectPtr)&local_170);
                    pFVar5[1].ObjectIndex = *local_1d8;
                    *local_1d8 = *local_1d8 + (iVar16 + 0xfU & 0xfffffff0);
                    puVar28 = local_1c8;
                  }
LAB_1493ec616:
                  pFVar36 = local_1e0;
                  bVar14 = local_1e0->field_0x840;
                  if (local_1e0->bDataInterfacesHaveTickPrereqs == '\0') {
                    cVar13 = (**(code **)(*(longlong *)pUVar23 + 0x3c0))(pUVar23);
                    bVar14 = (cVar13 << 6 ^ pFVar36->field_0x840) & 0x40U ^ pFVar36->field_0x840;
                    pFVar36->field_0x840 = bVar14;
                  }
                  if (-1 < (char)bVar14) {
                    cVar13 = (**(code **)(*(longlong *)pUVar23 + 0x3d0))(pUVar23);
                    pFVar36->bDataInterfacesHaveTickPostreqs = '\0';
                    pFVar36->field_0x840 = pFVar36->field_0x840 | cVar13 << 7;
                  }
                  bVar12 = IsInGameThread();
                  if (local_203 == '\x01') {
                    if ((!bVar12) &&
                       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                           ("IsInGameThread()",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataInterface.h"
                                            ,0x388,L""), bVar12)) {
                      pcVar11 = (code *)swi(3);
                      (*pcVar11)();
                      return;
                    }
                    *(uint *)&pUVar23[1].field_0x8 = *(uint *)&pUVar23[1].field_0x8 | 4;
                    if ((pUVar23[1].field_0x8 & 1) != 0) {
                      (**(code **)(*(longlong *)pUVar23 + 0x448))(pUVar23);
                      *(uint *)&pUVar23[1].field_0x8 = *(uint *)&pUVar23[1].field_0x8 & 0xfffffffe;
                    }
                    if (*(longlong *)(pUVar23 + 1) != 0) {
                      *(undefined8 *)(*(longlong *)(pUVar23 + 1) + 8) = *puVar34;
                    }
                  }
                  else {
                    if ((!bVar12) &&
                       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                           ("IsInGameThread()",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataInterface.h"
                                            ,0x382,L""), bVar12)) {
                      pcVar11 = (code *)swi(3);
                      (*pcVar11)();
                      return;
                    }
                    *(uint *)&pUVar23[1].field_0x8 = *(uint *)&pUVar23[1].field_0x8 | 2;
                  }
                }
              }
              puVar34 = puVar34 + 5;
              uVar31 = local_1f0;
            } while (puVar34 != puVar28);
          }
          pFVar20 = local_168;
          lVar29 = local_1c0 + 0x2b0;
          uVar31 = uVar31 + 1;
          local_1f0 = uVar31;
          local_1c0 = lVar29;
          pTVar21 = FNiagaraEmitterInstanceImpl::GetEventExecutionContexts(local_168,&local_118);
          pFVar25 = local_1b8;
          this = local_1f8;
          uVar37 = local_202;
          uVar35 = local_201;
        } while ((int)uVar31 < pTVar21->ArrayNum);
      }
      if ((pFVar20->_padding_ != 0) && (*(char *)((longlong)&pFVar20->_padding_ + 1) == '\x01')) {
        `FNiagaraSystemInstance::InitDataInterfaces'::__l2::<lambda_1>::operator()
                  (&local_1e0,(FNiagaraParameterStore *)(pFVar20->_padding_ + 0x80),(bool)uVar35,
                   (bool)uVar37,false);
      }
      FNiagaraEmitterInstanceImpl::DirtyDataInterfaces(pFVar20);
    }
    pFVar25 = pFVar25 + 0x10;
    uVar19 = (ulonglong)local_1e8 & 0xffffffff;
  }
  lVar29 = (longlong)(int)local_1ec;
  pTVar2 = &this->DataInterfaceInstanceData;
  iVar16 = (this->DataInterfaceInstanceData).ArrayNum;
  if (iVar16 < (int)local_1ec) {
    UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
              (1,1,local_1ec - iVar16,&pTVar2->AllocatorInstance,
               &(this->DataInterfaceInstanceData).ArrayNum,
               &(this->DataInterfaceInstanceData).ArrayMax);
  }
  else {
    if ((int)local_1ec < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)local_1ec);
    }
    if ((int)local_1ec < iVar16) {
      uVar27 = iVar16 - local_1ec;
      if (((int)(uVar27 | local_1ec) < 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x458,
                              L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                             ), bVar12)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      if (uVar27 != 0) {
        pFVar25 = (pTVar2->AllocatorInstance).Data + lVar29;
        iVar16 = ((this->DataInterfaceInstanceData).ArrayNum - uVar31) - uVar27;
        if (iVar16 != 0) {
          memmove(pFVar25,pFVar25 + (int)uVar27,(longlong)iVar16);
        }
        iVar16 = (this->DataInterfaceInstanceData).ArrayNum - uVar27;
        (this->DataInterfaceInstanceData).ArrayNum = iVar16;
        UE::Core::Private::ReallocShrink<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                  (1,1,&pTVar2->AllocatorInstance,iVar16,&(this->DataInterfaceInstanceData).ArrayMax
                  );
      }
    }
  }
  this->bDataInterfacesInitialized = '\x01';
  local_1d0 = (FScriptContainerElement *)&(this->PreTickDataInterfaces).ArrayMax;
  (this->PreTickDataInterfaces).ArrayNum = 0;
  if (*(int *)local_1d0 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->PreTickDataInterfaces).AllocatorInstance,0,(int *)local_1d0);
  }
  pTVar3 = &this->PostTickDataInterfaces;
  (this->PostTickDataInterfaces).ArrayNum = 0;
  if ((this->PostTickDataInterfaces).ArrayMax != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&pTVar3->AllocatorInstance,0,&(this->PostTickDataInterfaces).ArrayMax);
  }
  pTVar30 = &this->GPUDataInterfaces;
  this->GPUDataInterfaceInstanceDataSize = 0;
  (this->GPUDataInterfaces).ArrayNum = 0;
  local_1e8 = pTVar30;
  if ((this->GPUDataInterfaces).ArrayMax != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,&pTVar30->AllocatorInstance,0,&(this->GPUDataInterfaces).ArrayMax);
  }
  local_208 = 0;
  pFVar36 = this;
  if (0 < (this->DataInterfaceInstanceDataOffsets).ArrayNum) {
    pTVar4 = &this->PreTickDataInterfaces;
    do {
      uVar31 = local_208;
      piVar32 = &(this->PostTickDataInterfaces).ArrayMax;
      uVar27 = 0;
      if ((int)local_208 < (pFVar36->DataInterfaceInstanceDataOffsets).ArrayNum) {
        uVar27 = ~local_208 >> 0x1f;
      }
      if ((uVar27 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      pFVar5 = (FWeakObjectPtr *)
               ((pFVar36->DataInterfaceInstanceDataOffsets).AllocatorInstance.Data +
               (longlong)(int)uVar31 * 0xc);
      pUVar23 = FWeakObjectPtr::Get(pFVar5);
      if (pUVar23 == (UObject *)0x0) {
        if (1 < (byte)LogNiagara._0_1_) {
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
        }
        local_1f8->bDataInterfacesInitialized = '\0';
        pFVar36 = local_1f8;
      }
      else {
        uVar31 = pFVar5[1].ObjectIndex;
        uVar27 = 0;
        if ((int)uVar31 < (local_1f8->DataInterfaceInstanceData).ArrayNum) {
          uVar27 = ~uVar31 >> 0x1f;
        }
        if ((uVar27 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        if ((((char)uVar31 + *(char *)&(local_1f8->DataInterfaceInstanceData).AllocatorInstance.Data
             & 0xfU) != 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsAligned(&DataInterfaceInstanceData[Pair.Value], 16)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSystemInstance.cpp"
                                ,0x6b3,L""), bVar12)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        cVar13 = (**(code **)(*(longlong *)pUVar23 + 0x348))(pUVar23);
        if (cVar13 != '\0') {
          pFVar25 = (pTVar4->AllocatorInstance).Data;
          if (((pFVar25 <= (FScriptContainerElement *)&local_208) &&
              ((FScriptContainerElement *)&local_208 <
               pFVar25 + (longlong)(this->PreTickDataInterfaces).ArrayMax * 4)) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar12)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          iVar16 = (this->PreTickDataInterfaces).ArrayNum;
          if (iVar16 == (this->PreTickDataInterfaces).ArrayMax) {
            iVar16 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x404,&pTVar4->AllocatorInstance,(int *)local_1d0);
          }
          (this->PreTickDataInterfaces).ArrayNum = iVar16 + 1;
          *(uint *)((pTVar4->AllocatorInstance).Data + (longlong)iVar16 * 4) = local_208;
        }
        cVar13 = (**(code **)(*(longlong *)pUVar23 + 0x350))(pUVar23);
        if (cVar13 != '\0') {
          pFVar25 = (pTVar3->AllocatorInstance).Data;
          if (((pFVar25 <= (FScriptContainerElement *)&local_208) &&
              ((FScriptContainerElement *)&local_208 < pFVar25 + (longlong)*piVar32 * 4)) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar12)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          iVar16 = (this->PostTickDataInterfaces).ArrayNum;
          if (iVar16 == *piVar32) {
            iVar16 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x404,&pTVar3->AllocatorInstance,piVar32);
          }
          (this->PostTickDataInterfaces).ArrayNum = iVar16 + 1;
          *(uint *)((pTVar3->AllocatorInstance).Data + (longlong)iVar16 * 4) = local_208;
        }
        if (((*(uint *)&pUVar23[1].field_0x8 >> 2 & 1) != 0) &&
           (iVar16 = (**(code **)(*(longlong *)pUVar23 + 800))(pUVar23), 0 < iVar16)) {
          iVar17 = pTVar30->ArrayNum;
          if (iVar17 == pTVar30->ArrayMax) {
            iVar17 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x40c,&pTVar30->AllocatorInstance,&pTVar30->ArrayMax);
          }
          pTVar30->ArrayNum = iVar17 + 1;
          pFVar26 = (FWeakObjectPtr *)((pTVar30->AllocatorInstance).Data + (longlong)iVar17 * 0xc);
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable(pUVar23);
          }
          pFVar26->ObjectIndex = 0;
          pFVar26->ObjectSerialNumber = 0;
          local_160 = pUVar23;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable(pUVar23);
          }
          FWeakObjectPtr::operator=(pFVar26,(FObjectPtr)&local_160);
          pFVar26[1].ObjectIndex = pFVar5[1].ObjectIndex;
          local_1f8->GPUDataInterfaceInstanceDataSize =
               local_1f8->GPUDataInterfaceInstanceDataSize + (iVar16 + 0xfU & 0xfffffff0);
        }
        pUVar22 = FWeakObjectPtr::Get(pFVar5);
        pFVar36 = local_1f8;
        uVar31 = pFVar5[1].ObjectIndex;
        pcVar11 = *(code **)(*(longlong *)pUVar22 + 0x2e8);
        uVar27 = 0;
        if ((int)uVar31 < (local_1f8->DataInterfaceInstanceData).ArrayNum) {
          uVar27 = ~uVar31 >> 0x1f;
        }
        if ((uVar27 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        bVar14 = (*pcVar11)(pUVar22,(pFVar36->DataInterfaceInstanceData).AllocatorInstance.Data +
                                    (int)uVar31);
        pFVar36->field_0x841 = pFVar36->field_0x841 & (bVar14 | 0xfe);
        pTVar30 = local_1e8;
        if ((bVar14 == 0) && (1 < (byte)LogNiagara._0_1_)) {
          if (pFVar36->System == (UNiagaraSystem *)0x0) {
            ::FString::FString(&local_1b0,L"None");
          }
          else {
            local_158 = (FName)pFVar36->System->_padding_;
            ::FName::ToString(&local_158,&local_1b0);
          }
          UObjectBaseUtility::GetPathName((UObjectBaseUtility *)pUVar23,&local_108,(UObject *)0x0);
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
          if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_108.Data.AllocatorInstance.Data);
          }
          pTVar30 = local_1e8;
          if (local_1b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1b0.Data.AllocatorInstance.Data);
            pTVar30 = local_1e8;
          }
        }
      }
      local_208 = local_208 + 1;
    } while ((int)local_208 < (pFVar36->DataInterfaceInstanceDataOffsets).ArrayNum);
  }
  if ((((pFVar36->bDataInterfacesInitialized == 0) && (pFVar36->ActualExecutionState != Complete))
      && (pFVar36->ActualExecutionState != Disabled)) &&
     ((pFVar36->SystemInstanceState != PendingSpawn &&
      (pFVar36->SystemInstanceState != PendingSpawnPaused)))) {
    if ((byte)LogNiagara._0_1_ < 2) goto LAB_1493ecf6a;
    if (pFVar36->System == (UNiagaraSystem *)0x0) {
      ::FString::FString(&local_1a0,L"None");
    }
    else {
      local_180 = (FName)pFVar36->System->_padding_;
      ::FName::ToString(&local_180,&local_1a0);
    }
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
  }
  else {
    if (((pFVar36->SystemSimulation).Object == (FNiagaraSystemSimulation *)0x0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar12)) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    pFVar10 = (((pFVar36->SystemSimulation).Object)->SpawnExecContext).Ptr;
    bVar14 = (**(code **)(pFVar10->_padding_ + 0x30))
                       (pFVar10,pFVar36,pFVar36->PerInstanceDIFunctions);
    if (((pFVar36->SystemSimulation).Object == (FNiagaraSystemSimulation *)0x0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar12)) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    pFVar10 = (((pFVar36->SystemSimulation).Object)->UpdateExecContext).Ptr;
    bVar15 = (**(code **)(pFVar10->_padding_ + 0x30))
                       (pFVar10,pFVar36,pFVar36->PerInstanceDIFunctions + 1);
    if ((bVar15 & bVar14 & 1) != 0) {
      if (pFVar36->System->bNeedsGPUContextInitForDataInterfaces != false) {
        iVar16 = (pFVar36->Emitters).ArrayNum;
        pFVar25 = (pFVar36->Emitters).AllocatorInstance.Data;
        pFVar33 = pFVar25 + (longlong)iVar16 * 0x10;
        while( true ) {
          if ((pFVar36->Emitters).ArrayNum != iVar16) {
            local_200 = 0;
            `TCheckedPointerIterator<TSharedRef<FNiagaraEmitterInstance,1>,int,0>::operator!='::__l2
            ::<lambda_1>::operator()(&local_200);
          }
          if (pFVar25 == pFVar33) break;
          lVar29 = *(longlong *)pFVar25;
          if (((*(int *)(lVar29 + 0xd4) != 4) &&
              (*(FNiagaraComputeExecutionContext **)(lVar29 + 0x18) !=
               (FNiagaraComputeExecutionContext *)0x0)) && (*(char *)(lVar29 + 0xd1) == '\x01')) {
            FNiagaraComputeExecutionContext::OptionalContexInit
                      (*(FNiagaraComputeExecutionContext **)(lVar29 + 0x18),pFVar36);
          }
          pFVar25 = pFVar25 + 0x10;
        }
      }
      if (((pFVar36->SystemSimulation).Object == (FNiagaraSystemSimulation *)0x0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar12)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      FNDIStageTickHandler::Init
                (&pFVar36->SystemSpawnDIStageTickHandler,
                 ((((pFVar36->SystemSimulation).Object)->SpawnExecContext).Ptr)->Script,pFVar36);
      if (((pFVar36->SystemSimulation).Object == (FNiagaraSystemSimulation *)0x0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar12)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      FNDIStageTickHandler::Init
                (&pFVar36->SystemUpdateDIStageTickHandler,
                 ((((pFVar36->SystemSimulation).Object)->UpdateExecContext).Ptr)->Script,pFVar36);
      iVar16 = (pFVar36->Emitters).ArrayNum;
      pFVar25 = (pFVar36->Emitters).AllocatorInstance.Data;
      pFVar33 = pFVar25 + (longlong)iVar16 * 0x10;
      while( true ) {
        if ((pFVar36->Emitters).ArrayNum != iVar16) {
          `TCheckedPointerIterator<TSharedRef<FNiagaraEmitterInstance,1>,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_1ff);
        }
        if (pFVar25 == pFVar33) break;
        pFVar20 = (FNiagaraEmitterInstanceImpl *)(**(code **)(**(longlong **)pFVar25 + 0x68))();
        if (pFVar20 != (FNiagaraEmitterInstanceImpl *)0x0) {
          FNiagaraEmitterInstanceImpl::InitDITickLists(pFVar20);
        }
        pFVar25 = pFVar25 + 0x10;
      }
      return;
    }
    if ((byte)LogNiagara._0_1_ < 2) goto LAB_1493ecf6a;
    if (pFVar36->System == (UNiagaraSystem *)0x0) {
      ::FString::FString(&local_190,L"None");
    }
    else {
      local_178 = (FName)pFVar36->System->_padding_;
      ::FName::ToString(&local_178,&local_190);
    }
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
    local_1a0.Data.AllocatorInstance.Data = local_190.Data.AllocatorInstance.Data;
  }
  if (local_1a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1a0.Data.AllocatorInstance.Data);
  }
LAB_1493ecf6a:
  Complete(pFVar36,true);
  return;
}

// InitEmitters @ 1493ed120

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraStatelessFeatureMask": Some values do not have unique names */

void __thiscall FNiagaraSystemInstance::InitEmitters(FNiagaraSystemInstance *this)

{
  int *piVar1;
  TArray<TSharedRef<FNiagaraEmitterInstance,1>,TSizedDefaultAllocator<32>_> *pTVar2;
  undefined8 uVar3;
  UNiagaraSystem *pUVar10;
  FScriptContainerElement *pFVar11;
  FNiagaraEmitterInstance *this_00;
  UNiagaraSystem *pUVar12;
  code *pcVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  bool bVar19;
  bool bVar20;
  FNiagaraSystemInstance *pFVar21;
  bool bVar22;
  bool bVar23;
  bool bVar24;
  bool bVar25;
  byte bVar26;
  uint uVar27;
  int iVar28;
  FName *pFVar29;
  FThreadSafeStaticStat<FStat_STAT_NiagaraSystemInitEmitters> FVar30;
  TReferenceControllerBase<1> *pTVar31;
  FVersionedNiagaraEmitterData *pFVar32;
  longlong lVar33;
  uint uVar34;
  FName FVar35;
  FNiagaraEmitterHandle *this_01;
  uint uVar36;
  TReferenceControllerBase<1> *pTVar37;
  TBox<double> *pTVar38;
  undefined4 uVar39;
  FColor_u_0 local_138 [2];
  FName local_130;
  longlong local_128;
  longlong local_120;
  FName local_118;
  FNiagaraSystemInstance *local_110;
  FName local_108;
  TBox<double> *local_f8;
  double local_f0;
  double dStack_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined1 local_c0;
  undefined7 uStack_bf;
  FName local_b8 [2];
  TVector<double>_u_0 local_a8;
  double dStack_90;
  double local_88;
  double dStack_80;
  undefined8 local_78;
  undefined1 local_38;
  undefined4 uStack_37;
  undefined2 uStack_33;
  undefined1 uStack_31;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined3 uVar6;
  undefined1 uVar7;
  undefined2 uVar8;
  undefined1 uVar9;
  
  FVar30 = StatPtr_STAT_NiagaraSystemInitEmitters;
  local_110 = this;
  if (StatPtr_STAT_NiagaraSystemInitEmitters ==
      (FThreadSafeStaticStat<FStat_STAT_NiagaraSystemInitEmitters>)0x0) {
    pFVar29 = ::FName::FName(local_b8,"STAT_NiagaraSystemInitEmitters");
    FVar30 = (FThreadSafeStaticStat<FStat_STAT_NiagaraSystemInitEmitters>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraSystemInitEmitters,
                        *pFVar29,L"System Init Emitters [GT]","STATGROUP_Niagara","STATCAT_Niagara",
                        L"Niagara",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar35 = *(FName *)FVar30;
  bVar19 = false;
  bVar20 = false;
  local_108.ComparisonIndex.Value = 0;
  local_108.Number = 0;
  bVar22 = false;
  bVar23 = false;
  if ((FVar35.ComparisonIndex.Value.Value == 0) && (FVar35.Number == 0)) {
LAB_1493ed282:
    bVar20 = bVar23;
    bVar19 = bVar22;
    bVar22 = false;
    local_118 = local_108;
    FVar35 = local_108;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_138[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_138[0]._s_0,(char *)*(FName *)((longlong)FVar30 + 0x10));
      bVar19 = false;
      bVar20 = true;
      bVar22 = false;
      bVar23 = true;
      if (-1 < CpuChannel->Enabled) {
        local_130.ComparisonIndex.Value = FVar35.ComparisonIndex.Value.Value;
        local_130.Number = FVar35.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_130,(wchar_t *)*(FName *)((longlong)FVar30 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSystemInstance.cpp"
                   ,0x8e4);
        bVar19 = true;
        bVar20 = true;
        bVar22 = true;
        bVar23 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_1493ed282;
    local_118 = FVar35;
    FThreadStats::AddMessage(FVar35,CycleScopeStart);
    bVar22 = true;
  }
  this->bHasGPUEmitters = '\0';
  uStack_dc = UE::Math::TVector<double>::ZeroVector.field0_0x0._20_4_;
  uStack_e0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._16_4_;
  dStack_e8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_f0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  pTVar38 = &this->LocalBounds;
  pTVar2 = &this->Emitters;
  local_c0 = 1;
  (pTVar38->Min).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->LocalBounds).Min.field0_0x0._s_0.Y = dStack_e8;
  local_d8._0_4_ = SUB84(local_f0,0);
  local_d8._4_4_ = (undefined4)((ulonglong)local_f0 >> 0x20);
  uStack_d0._0_4_ = SUB84(dStack_e8,0);
  uStack_d0._4_4_ = (undefined4)((ulonglong)dStack_e8 >> 0x20);
  *(undefined4 *)((longlong)&(this->LocalBounds).Min.field0_0x0 + 0x10) = uStack_e0;
  *(undefined4 *)((longlong)&(this->LocalBounds).Min.field0_0x0 + 0x14) = uStack_dc;
  *(undefined4 *)&(this->LocalBounds).Max.field0_0x0 = (undefined4)local_d8;
  *(undefined4 *)((longlong)&(this->LocalBounds).Max.field0_0x0 + 4) = local_d8._4_4_;
  *(undefined4 *)((longlong)&(this->LocalBounds).Max.field0_0x0 + 8) = (undefined4)uStack_d0;
  *(undefined4 *)((longlong)&(this->LocalBounds).Max.field0_0x0 + 0xc) = uStack_d0._4_4_;
  *(undefined4 *)((longlong)&(this->LocalBounds).Max.field0_0x0 + 0x10) = uStack_e0;
  *(undefined4 *)((longlong)&(this->LocalBounds).Max.field0_0x0 + 0x14) = uStack_dc;
  local_d8 = local_f0;
  (this->LocalBounds).IsValid = 1;
  (this->LocalBounds).Pad[0] = (char)uStack_bf;
  (this->LocalBounds).Pad[1] = (char)((uint7)uStack_bf >> 8);
  (this->LocalBounds).Pad[2] = (char)((uint7)uStack_bf >> 0x10);
  (this->LocalBounds).Pad[3] = (char)((uint7)uStack_bf >> 0x18);
  (this->LocalBounds).Pad[4] = (char)((uint7)uStack_bf >> 0x20);
  (this->LocalBounds).Pad[5] = (char)((uint7)uStack_bf >> 0x28);
  (this->LocalBounds).Pad[6] = (char)((uint7)uStack_bf >> 0x30);
  uStack_d0 = dStack_e8;
  uStack_c8 = uStack_e0;
  uStack_c4 = uStack_dc;
  local_f8 = pTVar38;
  DestructItems<TSharedRef<FNiagaraEmitterInstance,1>,int>
            ((TSharedRef<FNiagaraEmitterInstance,1> *)(pTVar2->AllocatorInstance).Data,
             (this->Emitters).ArrayNum);
  piVar1 = &(this->Emitters).ArrayMax;
  (this->Emitters).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&pTVar2->AllocatorInstance,0,piVar1);
  }
  if ((this->System != (UNiagaraSystem *)0x0) && (((uint)this->System->_padding_ >> 0x1e & 1) == 0))
  {
    pUVar10 = this->System;
    bVar23 = FNiagaraUtilities::AllowComputeShaders();
    uVar27 = (pUVar10->EmitterHandles).ArrayNum;
    if ((int)uVar27 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar27);
    }
    if (*piVar1 < (int)uVar27) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,uVar27,&pTVar2->AllocatorInstance,(this->Emitters).ArrayNum,piVar1);
    }
    pFVar21 = local_110;
    uVar36 = 0;
    local_120 = (longlong)(int)uVar27;
    if (0 < (int)uVar27) {
      local_128 = 0;
      do {
        lVar33 = local_128;
        uVar27 = 0;
        if ((int)uVar36 < (pUVar10->EmitterHandles).ArrayNum) {
          uVar27 = ~uVar36 >> 0x1f;
        }
        if ((uVar27 == 0) &&
           (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar24)) {
          pcVar13 = (code *)swi(3);
          (*pcVar13)();
          return;
        }
        this_01 = (FNiagaraEmitterHandle *)
                  ((pUVar10->EmitterHandles).AllocatorInstance.Data + lVar33);
        bVar24 = FNiagaraEmitterHandle::GetIsEnabled(this_01);
        if (this_01->EmitterMode == Stateless) {
          pTVar31 = ::operator_new(0x2a0);
          if (pTVar31 == (TReferenceControllerBase<1> *)0x0) goto LAB_1493ed4c3;
          pTVar31->SharedReferenceCount = (atomic<int>)0x1;
          pTVar31->WeakReferenceCount = (atomic<int>)0x1;
          pTVar31->_padding_ =
               (longlong)
               &
               ___7__TIntrusiveReferenceController_VFNiagaraStatelessEmitterInstance___00_SharedPointerInternals__6B_
          ;
          FNiagaraStatelessEmitterInstance::FNiagaraStatelessEmitterInstance
                    ((FNiagaraStatelessEmitterInstance *)(pTVar31 + 1),pFVar21);
LAB_1493ed48f:
          pTVar37 = pTVar31 + 1;
          if ((pTVar37 == (TReferenceControllerBase<1> *)0x0) &&
             (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                 ("InObject != nullptr",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x246,L""), bVar25)) {
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
        }
        else {
          pTVar31 = ::operator_new(0x8d0);
          if (pTVar31 != (TReferenceControllerBase<1> *)0x0) {
            pTVar31->SharedReferenceCount = (atomic<int>)0x1;
            pTVar31->WeakReferenceCount = (atomic<int>)0x1;
            pTVar31->_padding_ =
                 (longlong)
                 &
                 ___7__TIntrusiveReferenceController_VFNiagaraEmitterInstanceImpl___00_SharedPointerInternals__6B_
            ;
            FNiagaraEmitterInstanceImpl::FNiagaraEmitterInstanceImpl
                      ((FNiagaraEmitterInstanceImpl *)(pTVar31 + 1),pFVar21);
            goto LAB_1493ed48f;
          }
LAB_1493ed4c3:
          pTVar37 = (TReferenceControllerBase<1> *)&DAT_00000010;
          pTVar31 = (TReferenceControllerBase<1> *)0x0;
        }
        iVar28 = (this->Emitters).ArrayNum;
        if (iVar28 == (this->Emitters).ArrayMax) {
          iVar28 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x810,&pTVar2->AllocatorInstance,&(this->Emitters).ArrayMax);
        }
        (this->Emitters).ArrayNum = iVar28 + 1;
        pFVar11 = (pTVar2->AllocatorInstance).Data;
        *(TReferenceControllerBase<1> **)(pFVar11 + (longlong)iVar28 * 0x10) = pTVar37;
        *(TReferenceControllerBase<1> **)(pFVar11 + (longlong)iVar28 * 0x10 + 8) = pTVar31;
        if (pTVar31 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar31->SharedReferenceCount = (atomic<int>)((int)pTVar31->SharedReferenceCount + 1);
          UNLOCK();
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar31)
        ;
        iVar28 = (this->Emitters).ArrayNum;
        uVar34 = iVar28 - 1;
        uVar27 = 0;
        if ((int)uVar34 < iVar28) {
          uVar27 = ~uVar34 >> 0x1f;
        }
        if ((uVar27 == 0) &&
           (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar25)) {
          pcVar13 = (code *)swi(3);
          (*pcVar13)();
          return;
        }
        pFVar11 = (pTVar2->AllocatorInstance).Data;
        lVar33 = (longlong)(this->Emitters).ArrayNum;
        pTVar31 = *(TReferenceControllerBase<1> **)(pFVar11 + lVar33 * 0x10 + -8);
        this_00 = *(FNiagaraEmitterInstance **)(pFVar11 + lVar33 * 0x10 + -0x10);
        if (pTVar31 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar31->SharedReferenceCount = (atomic<int>)((int)pTVar31->SharedReferenceCount + 1);
          UNLOCK();
        }
        pUVar12 = pFVar21->System;
        if (pUVar12->bFixedBounds == 0) {
          if (!bVar24) goto LAB_1493ed5d0;
          uVar27 = 0;
          if ((int)uVar36 < (pUVar10->EmitterHandles).ArrayNum) {
            uVar27 = ~uVar36 >> 0x1f;
          }
          if ((uVar27 == 0) &&
             (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar25)) {
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
          pFVar32 = FNiagaraEmitterHandle::GetEmitterData
                              ((FNiagaraEmitterHandle *)
                               ((pUVar10->EmitterHandles).AllocatorInstance.Data +
                               (longlong)(int)uVar36 * 0x48));
          if ((pFVar32 == (FVersionedNiagaraEmitterData *)0x0) ||
             (pFVar32->CalculateBoundsMode != Fixed)) goto LAB_1493ed5d0;
          UE::Math::TBox<double>::operator+=(&pFVar21->LocalBounds,&pFVar32->FixedBounds);
          (**(code **)(this_00->_padding_ + 8))(this_00,uVar36);
LAB_1493ed5e1:
          if (bVar23) {
            bVar26 = 0;
            if (this_00->SimTarget == GPUComputeSim) {
              bVar26 = 0x20;
            }
            pFVar21->field_0x840 =
                 (bVar26 | pFVar21->field_0x840 & 0x20) ^ pFVar21->field_0x840 & 0xdf;
          }
        }
        else {
          local_a8._s_0.X = (pUVar12->FixedBounds).Min.field0_0x0._s_0.X;
          local_a8._s_0.Y = (pUVar12->FixedBounds).Min.field0_0x0._s_0.Y;
          local_a8._s_0.Z = (pUVar12->FixedBounds).Min.field0_0x0._s_0.Z;
          dStack_90 = (pUVar12->FixedBounds).Max.field0_0x0._s_0.X;
          local_88 = (pUVar12->FixedBounds).Max.field0_0x0._s_0.Y;
          dStack_80 = (pUVar12->FixedBounds).Max.field0_0x0._s_0.Z;
          local_78._0_1_ = (pUVar12->FixedBounds).IsValid;
          local_78._1_1_ = (pUVar12->FixedBounds).Pad[0];
          local_78._2_1_ = (pUVar12->FixedBounds).Pad[1];
          local_78._3_1_ = (pUVar12->FixedBounds).Pad[2];
          local_78._4_1_ = (pUVar12->FixedBounds).Pad[3];
          local_78._5_1_ = (pUVar12->FixedBounds).Pad[4];
          local_78._6_1_ = (pUVar12->FixedBounds).Pad[5];
          local_78._7_1_ = (pUVar12->FixedBounds).Pad[6];
          FNiagaraEmitterInstance::SetSystemFixedBoundsOverride
                    (this_00,(TBox<double> *)&local_a8._s_0);
LAB_1493ed5d0:
          (**(code **)(this_00->_padding_ + 8))(this_00,uVar36);
          if (bVar24) goto LAB_1493ed5e1;
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar31)
        ;
        local_128 = local_128 + 0x48;
        uVar36 = uVar36 + 1;
        local_120 = local_120 + -1;
      } while (local_120 != 0);
      local_120 = 0;
      FVar35 = local_118;
      this = local_110;
      pTVar38 = local_f8;
    }
    pUVar10 = this->System;
    if (pUVar10->bFixedBounds == 0) {
      if (pTVar38->IsValid != '\0') goto LAB_1493ed76a;
      local_38 = 0;
      uStack_37 = 0;
      (pTVar38->Min).field0_0x0._s_0.X = 0.0;
      (pTVar38->Min).field0_0x0._s_0.Y = 0.0;
      uStack_33 = 0;
      uStack_31 = 0;
      uVar39 = 0;
      uVar3._4_4_ = 0;
      (pTVar38->Min).field0_0x0._s_0.Z = 0.0;
      (pTVar38->Max).field0_0x0._s_0.X = 0.0;
      (pTVar38->Max).field0_0x0._s_0.Y = 0.0;
      (pTVar38->Max).field0_0x0._s_0.Z = 0.0;
    }
    else {
      dVar14 = (pUVar10->FixedBounds).Min.field0_0x0._s_0.Y;
      dVar15 = (pUVar10->FixedBounds).Min.field0_0x0._s_0.Z;
      dVar16 = (pUVar10->FixedBounds).Max.field0_0x0._s_0.X;
      dVar17 = (pUVar10->FixedBounds).Max.field0_0x0._s_0.Y;
      dVar18 = (pUVar10->FixedBounds).Max.field0_0x0._s_0.Z;
      uVar3._0_1_ = (pUVar10->FixedBounds).IsValid;
      uVar3._1_1_ = (pUVar10->FixedBounds).Pad[0];
      uVar3._2_1_ = (pUVar10->FixedBounds).Pad[1];
      uVar3._3_1_ = (pUVar10->FixedBounds).Pad[2];
      uVar4 = (pUVar10->FixedBounds).Pad[3];
      uVar5 = (pUVar10->FixedBounds).Pad[4];
      uVar7 = (pUVar10->FixedBounds).Pad[5];
      uVar9 = (pUVar10->FixedBounds).Pad[6];
      uVar8 = CONCAT11(uVar9,uVar7);
      uVar6 = CONCAT21(uVar8,uVar5);
      uVar3._4_4_ = CONCAT31(uVar6,uVar4);
      uVar39 = (undefined4)uVar3;
      (pTVar38->Min).field0_0x0._s_0.X = (pUVar10->FixedBounds).Min.field0_0x0._s_0.X;
      (pTVar38->Min).field0_0x0._s_0.Y = dVar14;
      (pTVar38->Min).field0_0x0._s_0.Z = dVar15;
      (pTVar38->Max).field0_0x0._s_0.X = dVar16;
      (pTVar38->Max).field0_0x0._s_0.Y = dVar17;
      (pTVar38->Max).field0_0x0._s_0.Z = dVar18;
    }
    pTVar38->IsValid = (char)uVar39;
    pTVar38->Pad[0] = (char)((uint)uVar39 >> 8);
    pTVar38->Pad[1] = (char)((uint)uVar39 >> 0x10);
    pTVar38->Pad[2] = (char)((uint)uVar39 >> 0x18);
    pTVar38->Pad[3] = (char)uVar3._4_4_;
    pTVar38->Pad[4] = (char)((uint)uVar3._4_4_ >> 8);
    pTVar38->Pad[5] = (char)((uint)uVar3._4_4_ >> 0x10);
    pTVar38->Pad[6] = (char)((uint)uVar3._4_4_ >> 0x18);
  }
LAB_1493ed76a:
  ResetParameters(this);
  if (bVar20) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar19) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar22) {
    FThreadStats::AddMessage(FVar35,CycleScopeEnd);
  }
  return;
}

// InitGPUTick @ 1493ed8b0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FNiagaraSystemInstance::InitGPUTick(FNiagaraSystemInstance *this,FNiagaraGPUSystemTick *param_1)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  FName *pFVar7;
  FThreadSafeStaticStat<FStat_STAT_NiagaraInitGPUSystemTick> FVar8;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar9;
  FNameEntryId FVar10;
  FName FVar11;
  FColor_u_0 local_res8 [2];
  FName local_res18;
  LARGE_INTEGER local_res20;
  FName local_58;
  FName local_50;
  FStatMessage local_40;
  
  FVar8 = StatPtr_STAT_NiagaraInitGPUSystemTick;
  if (StatPtr_STAT_NiagaraInitGPUSystemTick ==
      (FThreadSafeStaticStat<FStat_STAT_NiagaraInitGPUSystemTick>)0x0) {
    pFVar7 = ::FName::FName(&local_58,"STAT_NiagaraInitGPUSystemTick");
    FVar8 = (FThreadSafeStaticStat<FStat_STAT_NiagaraInitGPUSystemTick>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraInitGPUSystemTick,*pFVar7,
                       L"InitGPUSystemTick","STATGROUP_Niagara","STATCAT_Niagara",L"Niagara",true,
                       true,ST_int64,true,false,MCR_Invalid);
  }
  FVar11 = *(FName *)FVar8;
  bVar3 = false;
  bVar5 = false;
  local_50.ComparisonIndex.Value = 0;
  local_50.Number = 0;
  FVar10 = FVar11.ComparisonIndex.Value;
  uVar9 = FVar11.Number;
  if ((FVar10.Value != 0) || (uVar9 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8[0]._s_0,(char *)*(FName *)((longlong)FVar8 + 0x10));
      bVar3 = false;
      bVar5 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res18.ComparisonIndex.Value = FVar10.Value;
        local_res18.Number = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res18,(wchar_t *)*(FName *)((longlong)FVar8 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSystemInstance.cpp"
                   ,0xb5b);
        bVar3 = true;
        bVar5 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res20.s.LowPart = FVar10.Value;
      local_res20.s.HighPart = uVar9;
      FThreadStats::AddMessage(FVar11,CycleScopeStart);
      bVar4 = true;
      goto LAB_1493eda07;
    }
  }
  bVar4 = false;
  FVar11 = local_50;
LAB_1493eda07:
  if ((this->SystemGpuComputeProxy).Ptr == (FNiagaraSystemGpuComputeProxy *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("SystemGpuComputeProxy.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSystemInstance.cpp"
                       ,0xb5c,L"");
    if (bVar6) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  FNiagaraGPUSystemTick::Init(param_1,this);
  if (bVar5) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar4) && (FVar11 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_40.NameAndInfo.Index = FVar11.ComparisonIndex.Value;
      local_40.NameAndInfo.Number = FVar11.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_res20);
      local_40.StatData.Pad[4] = '\0';
      local_40.StatData.Pad[5] = '\0';
      local_40.StatData.Pad[6] = '\0';
      local_40.StatData.Pad[7] = '\0';
      local_40.StatData.Pad[0] = local_res20.s.LowPart._0_1_;
      local_40.StatData.Pad[1] = local_res20.s.LowPart._1_1_;
      local_40.StatData.Pad[2] = local_res20.s.LowPart._2_1_;
      local_40.StatData.Pad[3] = local_res20.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_40);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return;
}

// InitSystemState @ 1493ee480

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall FNiagaraSystemInstance::InitSystemState(FNiagaraSystemInstance *this)

{
  float fVar1;
  float fVar2;
  float fVar3;
  FNiagaraSystemStateData *pFVar4;
  uint uVar5;
  uint uVar6;
  
  pFVar4 = UNiagaraSystem::GetSystemStateData(this->System);
  uVar6 = this->RandomSeedOffset + this->RandomSeed;
  (this->SystemState_RandomStream).Seed = uVar6;
  (this->SystemState_RandomStream).InitialSeed = uVar6;
  this->SystemState_LoopCount = 0;
  fVar1 = (pFVar4->LoopDuration).Max;
  fVar2 = (pFVar4->LoopDuration).Min;
  uVar5 = uVar6 * 0xbb38435 + 0x3619636b;
  (this->SystemState_RandomStream).Seed = uVar5;
  uVar6 = uVar5 * 0xbb38435 + 0x3619636b;
  fVar2 = ((float)(uVar5 >> 9 | 0x3f800000) - __real_3f800000) * (fVar1 - fVar2) + fVar2;
  this->SystemState_CurrentLoopDuration = fVar2;
  fVar1 = (pFVar4->LoopDelay).Max;
  fVar3 = (pFVar4->LoopDelay).Min;
  (this->SystemState_RandomStream).Seed = uVar6;
  this->SystemState_CurrentLoopAgeStart = 0.0;
  fVar3 = ((float)(uVar6 >> 9 | 0x3f800000) - __real_3f800000) * (fVar1 - fVar3) + fVar3;
  this->SystemState_CurrentLoopDelay = fVar3;
  this->SystemState_CurrentLoopAgeEnd = fVar3 + fVar2;
  return;
}

// IsReadyToRun @ 1493ef250

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall FNiagaraSystemInstance::IsReadyToRun(FNiagaraSystemInstance *this)

{
  int iVar1;
  FBaseGraphTask *pFVar2;
  bool bVar3;
  FNiagaraEmitterInstanceImpl *this_00;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  undefined1 local_res8 [8];
  
  if ((((this->World != (UWorld *)0x0) && (this->World->bIsTearingDown == '\0')) &&
      (this->System != (UNiagaraSystem *)0x0)) && (((uint)this->System->_padding_ >> 0x1e & 1) == 0)
     ) {
    pFVar2 = (this->System->PSOPrecacheCompletionEvent).Reference;
    if (((pFVar2 == (FBaseGraphTask *)0x0) || (pFVar2->field_0xd0 != '\0')) &&
       (this->System->bIsReadyToRunCached != 0)) {
      iVar1 = (this->Emitters).ArrayNum;
      pFVar4 = (this->Emitters).AllocatorInstance.Data;
      pFVar5 = pFVar4 + (longlong)iVar1 * 0x10;
      while( true ) {
        if ((this->Emitters).ArrayNum != iVar1) {
          `TCheckedPointerIterator<TSharedRef<FNiagaraEmitterInstance,1>_const_,int,0>::operator!='
          ::__l2::<lambda_1>::operator()(local_res8);
        }
        if (pFVar4 == pFVar5) {
          return true;
        }
        this_00 = (FNiagaraEmitterInstanceImpl *)(**(code **)(**(longlong **)pFVar4 + 0x68))();
        if ((this_00 != (FNiagaraEmitterInstanceImpl *)0x0) &&
           (bVar3 = FNiagaraEmitterInstanceImpl::IsReadyToRun(this_00), !bVar3)) break;
        pFVar4 = pFVar4 + 0x10;
      }
    }
  }
  return false;
}

// ManualTick @ 1493efcf0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FNiagaraSystemInstance::ManualTick
          (FNiagaraSystemInstance *this,float param_1,TRefCountPtr<FBaseGraphTask> *param_2)

{
  int *piVar1;
  TReferenceControllerBase<1> *pTVar2;
  FNiagaraSystemSimulation *this_00;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  FName *pFVar11;
  FThreadSafeStaticStat<FStat_STAT_NiagaraOverview_GT> FVar12;
  FThreadSafeStaticStat<FStat_STAT_NiagaraSystemInst_ComponentTickGT> FVar13;
  FThreadStats *pFVar14;
  FThreadStatsPool *pFVar15;
  uint uVar16;
  FColor_u_0 FVar17;
  FNameEntryId FVar18;
  FName FVar19;
  FName FVar20;
  FLLMScope local_res8 [2];
  FColor_u_0 local_res20 [2];
  FColor_u_0 local_c8;
  uint uStack_c4;
  LARGE_INTEGER local_c0;
  FColor_u_0 local_b8;
  uint local_b4;
  FName local_b0;
  FName local_a8;
  FName local_98;
  FMemScope local_88;
  LARGE_INTEGER local_80;
  FStatMessage local_78;
  FStatMessage local_68;
  FName local_58;
  FName local_50 [3];
  
  FVar12 = StatPtr_STAT_NiagaraOverview_GT;
  if (StatPtr_STAT_NiagaraOverview_GT == (FThreadSafeStaticStat<FStat_STAT_NiagaraOverview_GT>)0x0)
  {
    pFVar11 = ::FName::FName(&local_58,"STAT_NiagaraOverview_GT");
    FVar12 = (FThreadSafeStaticStat<FStat_STAT_NiagaraOverview_GT>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraOverview_GT,*pFVar11,
                        L"GT Total","STATGROUP_NiagaraOverview","STATCAT_Niagara",L"NiagaraOverview"
                        ,true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar20 = *(FName *)FVar12;
  bVar6 = false;
  bVar9 = false;
  local_a8.ComparisonIndex.Value = 0;
  local_a8.Number = 0;
  FVar17.Bits = (uint)FVar20.ComparisonIndex.Value;
  uVar16 = FVar20.Number;
  if ((FVar17.Bits == 0) && (uVar16 == 0)) {
LAB_1493efe32:
    bVar7 = false;
    FVar20 = local_a8;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res20[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res20[0]._s_0,(char *)*(FName *)((longlong)FVar12 + 0x10));
      bVar6 = false;
      bVar9 = true;
      if (-1 < CpuChannel->Enabled) {
        local_b8.Bits = FVar17.Bits;
        local_b4 = uVar16;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_b8._s_0,(wchar_t *)*(FName *)((longlong)FVar12 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSystemInstance.cpp"
                   ,0x930);
        bVar6 = true;
        bVar9 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_1493efe32;
    local_c8.Bits = FVar17.Bits;
    uStack_c4 = uVar16;
    FThreadStats::AddMessage(FVar20,CycleScopeStart);
    bVar7 = true;
  }
  FVar13 = StatPtr_STAT_NiagaraSystemInst_ComponentTickGT;
  if (StatPtr_STAT_NiagaraSystemInst_ComponentTickGT ==
      (FThreadSafeStaticStat<FStat_STAT_NiagaraSystemInst_ComponentTickGT>)0x0) {
    pFVar11 = ::FName::FName(local_50,"STAT_NiagaraSystemInst_ComponentTickGT");
    FVar13 = (FThreadSafeStaticStat<FStat_STAT_NiagaraSystemInst_ComponentTickGT>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraSystemInst_ComponentTickGT
                        ,*pFVar11,L"System Instance Tick (Component) [GT]","STATGROUP_Niagara",
                        "STATCAT_Niagara",L"Niagara",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar19 = *(FName *)FVar13;
  bVar4 = false;
  bVar8 = false;
  local_98.ComparisonIndex.Value = 0;
  local_98.Number = 0;
  FVar18 = FVar19.ComparisonIndex.Value;
  uVar16 = FVar19.Number;
  if ((FVar18.Value != 0) || (uVar16 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_c8.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_c8._s_0,(char *)*(FName *)((longlong)FVar13 + 0x10));
      bVar4 = false;
      bVar8 = true;
      if (-1 < CpuChannel->Enabled) {
        local_b0.ComparisonIndex.Value = FVar18.Value;
        local_b0.Number = uVar16;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_b0,(wchar_t *)*(FName *)((longlong)FVar13 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSystemInstance.cpp"
                   ,0x931);
        bVar4 = true;
        bVar8 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_c0.s.LowPart = FVar18.Value;
      local_c0.s.HighPart = uVar16;
      FThreadStats::AddMessage(FVar19,CycleScopeStart);
      bVar5 = true;
      goto LAB_1493eff47;
    }
  }
  bVar5 = false;
  FVar19 = local_98;
LAB_1493eff47:
  if (__CsvProfilerStat2354 == false) {
    FCsvProfilerTrace::OutputInlineStatExclusive("Effects");
    __CsvProfilerStat2354 = true;
  }
  FCsvProfiler::BeginExclusiveStat("Effects","CSV_Effects");
  FLLMScope::FLLMScope(local_res8,Niagara,false,None,Default,true);
  FMemScope::FMemScope(&local_88,Niagara,true);
  if (this->ActualExecutionState != Disabled) {
    pTVar2 = (this->SystemSimulation).SharedReferenceCount.ReferenceController;
    this_00 = (this->SystemSimulation).Object;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (this_00 == (FNiagaraSystemSimulation *)0x0) {
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("SystemSim.IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSystemInstance.cpp"
                          ,0x93b,L"");
      if (bVar10) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    bVar10 = IsInGameThread();
    if (!bVar10) {
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsInGameThread()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSystemInstance.cpp"
                          ,0x93c,L"");
      if (bVar10) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    if (this->bSolo == '\0') {
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("bSolo",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSystemInstance.cpp"
                          ,0x93d,L"");
      if (bVar10) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    if (this_00 == (FNiagaraSystemSimulation *)0x0) {
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L"");
      if (bVar10) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    FNiagaraSystemSimulation::Tick_GameThread(this_00,param_1,param_2);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  }
  FMemScope::~FMemScope(&local_88);
  FLLMScope::~FLLMScope(local_res8);
  FCsvProfiler::EndExclusiveStat("Effects");
  if (bVar8) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && (FVar19 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    pFVar14 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar14 == (FThreadStats *)0x0) {
      pFVar15 = FThreadStatsPool::Get();
      pFVar14 = FThreadStatsPool::GetFromPool(pFVar15);
    }
    if (pFVar14->bWaitForExplicitFlush < pFVar14->ScopeCount) {
      local_78.NameAndInfo.Index = FVar19.ComparisonIndex.Value;
      local_78.NameAndInfo.Number = FVar19.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_c0);
      local_78.StatData.Pad[4] = '\0';
      local_78.StatData.Pad[5] = '\0';
      local_78.StatData.Pad[6] = '\0';
      local_78.StatData.Pad[7] = '\0';
      local_78.StatData.Pad[0] = local_c0.s.LowPart._0_1_;
      local_78.StatData.Pad[1] = local_c0.s.LowPart._1_1_;
      local_78.StatData.Pad[2] = local_c0.s.LowPart._2_1_;
      local_78.StatData.Pad[3] = local_c0.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(pFVar14,&local_78);
      piVar1 = &pFVar14->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(pFVar14,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar14,false,false);
      }
    }
  }
  if (bVar9) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((bVar7) && (FVar20 != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    pFVar14 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar14 == (FThreadStats *)0x0) {
      pFVar15 = FThreadStatsPool::Get();
      pFVar14 = FThreadStatsPool::GetFromPool(pFVar15);
    }
    if (pFVar14->bWaitForExplicitFlush < pFVar14->ScopeCount) {
      local_68.NameAndInfo.Index = FVar20.ComparisonIndex.Value;
      local_68.NameAndInfo.Number = FVar20.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_80);
      local_68.StatData.Pad[4] = '\0';
      local_68.StatData.Pad[5] = '\0';
      local_68.StatData.Pad[6] = '\0';
      local_68.StatData.Pad[7] = '\0';
      local_68.StatData.Pad[0] = local_80.s.LowPart._0_1_;
      local_68.StatData.Pad[1] = local_80.s.LowPart._1_1_;
      local_68.StatData.Pad[2] = local_80.s.LowPart._2_1_;
      local_68.StatData.Pad[3] = local_80.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(pFVar14,&local_68);
      piVar1 = &pFVar14->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(pFVar14,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar14,false,false);
      }
    }
  }
  return;
}

// MultiTick @ 1493f0270

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
FNiagaraSystemInstance::MultiTick
          (FNiagaraSystemInstance *this,int param_1,float param_2,float param_3,
          TRefCountPtr<FBaseGraphTask> *param_4)

{
  int *piVar1;
  int iVar2;
  FNiagaraSystemSimulation *this_00;
  code *pcVar3;
  double dVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  double dVar11;
  int iVar12;
  bool bVar13;
  undefined1 uVar14;
  FName *pFVar15;
  FThreadSafeStaticStat<FStat_STAT_NiagaraOverview_GT> FVar16;
  FThreadSafeStaticStat<FStat_STAT_NiagaraSystemInst_ComponentTickGT> FVar17;
  FThreadStats *pFVar18;
  FThreadStatsPool *pFVar19;
  uint uVar20;
  FColor_u_0 FVar21;
  FName FVar22;
  FName FVar23;
  int iVar24;
  float fVar25;
  FLLMScope local_res8 [2];
  int local_res10;
  FColor_u_0 local_138;
  uint uStack_134;
  FName local_130;
  FColor_u_0 local_128 [2];
  FColor_u_0 local_120;
  uint local_11c;
  FName local_118;
  FName local_110;
  FName local_108;
  FName local_f8;
  LARGE_INTEGER local_e8;
  LARGE_INTEGER local_e0;
  TReferenceControllerBase<1> *local_d8;
  FMemScope local_d0;
  LARGE_INTEGER local_c8;
  LARGE_INTEGER local_c0;
  FStatMessage local_b8;
  FStatMessage local_a8;
  FName local_98;
  FName local_90 [11];
  
  bVar6 = false;
  bVar5 = false;
  FVar16 = StatPtr_STAT_NiagaraOverview_GT;
  local_res10 = param_1;
  if (StatPtr_STAT_NiagaraOverview_GT == (FThreadSafeStaticStat<FStat_STAT_NiagaraOverview_GT>)0x0)
  {
    pFVar15 = ::FName::FName(&local_98,"STAT_NiagaraOverview_GT");
    FVar16 = (FThreadSafeStaticStat<FStat_STAT_NiagaraOverview_GT>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraOverview_GT,*pFVar15,
                        L"GT Total","STATGROUP_NiagaraOverview","STATCAT_Niagara",L"NiagaraOverview"
                        ,true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar23 = *(FName *)FVar16;
  bVar8 = false;
  bVar10 = false;
  local_108.ComparisonIndex.Value = 0;
  local_108.Number = 0;
  FVar21.Bits = (uint)FVar23.ComparisonIndex.Value;
  uVar20 = FVar23.Number;
  if ((FVar21.Bits == 0) && (uVar20 == 0)) {
LAB_1493f03d4:
    bVar9 = false;
    local_110 = local_108;
    FVar23 = local_108;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_128[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_128[0]._s_0,(char *)*(FName *)((longlong)FVar16 + 0x10));
      bVar8 = false;
      bVar10 = true;
      if (-1 < CpuChannel->Enabled) {
        local_120.Bits = FVar21.Bits;
        local_11c = uVar20;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_120._s_0,(wchar_t *)*(FName *)((longlong)FVar16 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSystemInstance.cpp"
                   ,0x944);
        bVar8 = true;
        bVar10 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_1493f03d4;
    local_138.Bits = FVar21.Bits;
    uStack_134 = uVar20;
    local_110 = FVar23;
    FThreadStats::AddMessage(FVar23,CycleScopeStart);
    bVar9 = true;
  }
  FVar17 = StatPtr_STAT_NiagaraSystemInst_ComponentTickGT;
  if (StatPtr_STAT_NiagaraSystemInst_ComponentTickGT ==
      (FThreadSafeStaticStat<FStat_STAT_NiagaraSystemInst_ComponentTickGT>)0x0) {
    pFVar15 = ::FName::FName(local_90,"STAT_NiagaraSystemInst_ComponentTickGT");
    FVar17 = (FThreadSafeStaticStat<FStat_STAT_NiagaraSystemInst_ComponentTickGT>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraSystemInst_ComponentTickGT
                        ,*pFVar15,L"System Instance Tick (Component) [GT]","STATGROUP_Niagara",
                        "STATCAT_Niagara",L"Niagara",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar22 = *(FName *)FVar17;
  local_f8.ComparisonIndex.Value = 0;
  local_f8.Number = 0;
  if ((FVar22.ComparisonIndex.Value.Value != 0) || (FVar22.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_138.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_138._s_0,(char *)*(FName *)((longlong)FVar17 + 0x10));
      bVar6 = false;
      bVar5 = true;
      if (-1 < CpuChannel->Enabled) {
        local_118.ComparisonIndex.Value = FVar22.ComparisonIndex.Value.Value;
        local_118.Number = FVar22.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_118,(wchar_t *)*(FName *)((longlong)FVar17 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSystemInstance.cpp"
                   ,0x945);
        bVar6 = true;
        bVar5 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_130 = FVar22;
      FThreadStats::AddMessage(FVar22,CycleScopeStart);
      bVar6 = false;
      bVar7 = true;
      goto LAB_1493f04f9;
    }
  }
  bVar7 = false;
  FVar22 = local_f8;
LAB_1493f04f9:
  if (__CsvProfilerStat2374 == false) {
    FCsvProfilerTrace::OutputInlineStatExclusive("Effects");
    __CsvProfilerStat2374 = true;
  }
  FCsvProfiler::BeginExclusiveStat("Effects","CSV_Effects");
  FLLMScope::FLLMScope(local_res8,Niagara,false,None,Default,true);
  FMemScope::FMemScope(&local_d0,Niagara,true);
  if (this->ActualExecutionState == Disabled) {
    bVar13 = false;
  }
  else {
    local_d8 = (this->SystemSimulation).SharedReferenceCount.ReferenceController;
    this_00 = (this->SystemSimulation).Object;
    if (local_d8 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      local_d8->SharedReferenceCount = (atomic<int>)((int)local_d8->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (this_00 == (FNiagaraSystemSimulation *)0x0) {
      bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("SystemSim.IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSystemInstance.cpp"
                          ,0x94f,L"");
      if (bVar13) {
        pcVar3 = (code *)swi(3);
        uVar14 = (*pcVar3)();
        return (bool)uVar14;
      }
    }
    bVar13 = IsInGameThread();
    if (!bVar13) {
      bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsInGameThread()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSystemInstance.cpp"
                          ,0x950,L"");
      if (bVar13) {
        pcVar3 = (code *)swi(3);
        uVar14 = (*pcVar3)();
        return (bool)uVar14;
      }
    }
    if (this->bSolo == '\0') {
      bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("bSolo",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSystemInstance.cpp"
                          ,0x951,L"");
      if (bVar13) {
        pcVar3 = (code *)swi(3);
        uVar14 = (*pcVar3)();
        return (bool)uVar14;
      }
    }
    if (this_00 == (FNiagaraSystemSimulation *)0x0) {
      bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L"");
      if (bVar13) {
        pcVar3 = (code *)swi(3);
        uVar14 = (*pcVar3)();
        return (bool)uVar14;
      }
    }
    if ((param_2 <= 0.0) || (param_1 < 1)) {
      bVar13 = false;
    }
    else {
      (this_00->TickInfo).TickCount = param_1;
      (this_00->TickInfo).UsesFixedTick = true;
      (this_00->TickInfo).TickNumber = -1;
      (this_00->TickInfo).TimeStepFraction = 0.0;
      dVar11 = __real_4170000000000000;
      (this_00->TickInfo).SystemTick = param_2;
      (this_00->TickInfo).EngineTick = (float)param_1 * param_2;
      if (param_3 <= 0.0) {
        dVar4 = 0.0;
      }
      else {
        QueryPerformanceCounter(&local_e8);
        dVar4 = (double)local_e8.QuadPart * FGenericPlatformTime::SecondsPerCycle + (double)param_3
                + dVar11;
      }
      iVar12 = local_res10;
      iVar24 = 0;
      fVar25 = __real_3f800000 / (float)param_1;
      do {
        (this_00->TickInfo).TickNumber = iVar24;
        local_130.ComparisonIndex.Value = 0;
        local_130.Number = 0;
        (this_00->TickInfo).TimeStepFraction = (float)(iVar24 + 1) * fVar25;
        FNiagaraSystemSimulation::Tick_GameThread_Internal
                  (this_00,param_2,(TRefCountPtr<FBaseGraphTask> *)&local_130);
        if (local_130 != (FName)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)local_130 + 0x30);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            (*(code *)**(undefined8 **)local_130)(local_130,1);
          }
        }
        if (this_00->System->bFixedTickDelta != false) {
          this_00->FixedDeltaTickAge = param_2 + this_00->FixedDeltaTickAge;
        }
        if (param_3 > 0.0) {
          QueryPerformanceCounter(&local_e0);
          if (dVar4 <= (double)local_e0.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar11)
          break;
        }
        iVar24 = iVar24 + 1;
      } while (iVar24 < iVar12);
      bVar13 = (this_00->TickInfo).TickNumber != iVar12 + -1;
      FVar23 = local_110;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_d8);
  }
  FMemScope::~FMemScope(&local_d0);
  FLLMScope::~FLLMScope(local_res8);
  FCsvProfiler::EndExclusiveStat("Effects");
  if (bVar5) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar7) && (FVar22 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    pFVar18 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar18 == (FThreadStats *)0x0) {
      pFVar19 = FThreadStatsPool::Get();
      pFVar18 = FThreadStatsPool::GetFromPool(pFVar19);
    }
    if (pFVar18->bWaitForExplicitFlush < pFVar18->ScopeCount) {
      local_b8.NameAndInfo.Index = FVar22.ComparisonIndex.Value;
      local_b8.NameAndInfo.Number = FVar22.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_c8);
      local_b8.StatData.Pad[4] = '\0';
      local_b8.StatData.Pad[5] = '\0';
      local_b8.StatData.Pad[6] = '\0';
      local_b8.StatData.Pad[7] = '\0';
      local_b8.StatData.Pad[0] = local_c8.s.LowPart._0_1_;
      local_b8.StatData.Pad[1] = local_c8.s.LowPart._1_1_;
      local_b8.StatData.Pad[2] = local_c8.s.LowPart._2_1_;
      local_b8.StatData.Pad[3] = local_c8.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(pFVar18,&local_b8);
      piVar1 = &pFVar18->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(pFVar18,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar18,false,false);
      }
    }
  }
  if (bVar10) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((bVar9) && (FVar23 != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    pFVar18 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar18 == (FThreadStats *)0x0) {
      pFVar19 = FThreadStatsPool::Get();
      pFVar18 = FThreadStatsPool::GetFromPool(pFVar19);
    }
    if (pFVar18->bWaitForExplicitFlush < pFVar18->ScopeCount) {
      local_a8.NameAndInfo.Index = FVar23.ComparisonIndex.Value;
      local_a8.NameAndInfo.Number = FVar23.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_c0);
      local_a8.StatData.Pad[4] = '\0';
      local_a8.StatData.Pad[5] = '\0';
      local_a8.StatData.Pad[6] = '\0';
      local_a8.StatData.Pad[7] = '\0';
      local_a8.StatData.Pad[0] = local_c0.s.LowPart._0_1_;
      local_a8.StatData.Pad[1] = local_c0.s.LowPart._1_1_;
      local_a8.StatData.Pad[2] = local_c0.s.LowPart._2_1_;
      local_a8.StatData.Pad[3] = local_c0.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(pFVar18,&local_a8);
      piVar1 = &pFVar18->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(pFVar18,false,false);
        return bVar13;
      }
      if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar18,false,false);
      }
    }
  }
  return bVar13;
}

// OnPooledReuse @ 1493f0c50

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall FNiagaraSystemInstance::OnPooledReuse(FNiagaraSystemInstance *this,UWorld *param_1)

{
  double dVar1;
  int iVar2;
  double dVar3;
  double dVar4;
  undefined8 uVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  undefined1 local_res8 [8];
  
  this->World = param_1;
  uVar5 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->FixedBounds_GT).Max.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->FixedBounds_GT).Max.field0_0x0._s_0.Y = (double)uVar5;
  (this->FixedBounds_GT).Max.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  dVar3 = (this->FixedBounds_GT).Max.field0_0x0._s_0.X;
  dVar4 = (this->FixedBounds_GT).Max.field0_0x0._s_0.Y;
  (this->FixedBounds_GT).IsValid = '\0';
  dVar1 = (this->FixedBounds_GT).Max.field0_0x0._s_0.Z;
  (this->FixedBounds_GT).Min.field0_0x0._s_0.X = dVar3;
  (this->FixedBounds_GT).Min.field0_0x0._s_0.Y = dVar4;
  (this->FixedBounds_GT).Min.field0_0x0._s_0.Z = dVar1;
  uVar5 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->FixedBounds_CNC).Max.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->FixedBounds_CNC).Max.field0_0x0._s_0.Y = (double)uVar5;
  (this->FixedBounds_CNC).Max.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  dVar3 = (this->FixedBounds_CNC).Max.field0_0x0._s_0.X;
  dVar4 = (this->FixedBounds_CNC).Max.field0_0x0._s_0.Y;
  (this->FixedBounds_CNC).IsValid = '\0';
  dVar1 = (this->FixedBounds_CNC).Max.field0_0x0._s_0.Z;
  (this->FixedBounds_CNC).Min.field0_0x0._s_0.X = dVar3;
  (this->FixedBounds_CNC).Min.field0_0x0._s_0.Y = dVar4;
  (this->FixedBounds_CNC).Min.field0_0x0._s_0.Z = dVar1;
  if ((this->PreviousLocation).bIsSet != false) {
    (this->PreviousLocation).bIsSet = false;
  }
  iVar2 = (this->Emitters).ArrayNum;
  pFVar6 = (this->Emitters).AllocatorInstance.Data;
  pFVar7 = pFVar6 + (longlong)iVar2 * 0x10;
  while( true ) {
    if ((this->Emitters).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TSharedRef<FNiagaraEmitterInstance,1>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar6 == pFVar7) break;
    (**(code **)(**(longlong **)pFVar6 + 0x20))();
    pFVar6 = pFVar6 + 0x10;
  }
  return;
}

// OnSimulationDestroyed @ 1493f0d70

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall FNiagaraSystemInstance::OnSimulationDestroyed(FNiagaraSystemInstance *this)

{
  TSharedPtr<FNiagaraSystemSimulation,1> *this_00;
  int iVar1;
  FNiagaraUserRedirectionParameterStore *pFVar2;
  FNiagaraSystemSimulation *pFVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  undefined1 local_res8 [8];
  TSharedPtr<FNiagaraSystemSimulation,1> local_28;
  
  if (this->bSolo != '\0') {
    `FNiagaraSystemInstance::OnSimulationDestroyed'::__l2::<lambda_1>::operator()(local_res8);
  }
  pFVar3 = (this->SystemSimulation).Object;
  this_00 = &this->SystemSimulation;
  if (pFVar3 != (FNiagaraSystemSimulation *)0x0) {
    if (this->SystemInstanceIndex != -1) {
      FNiagaraSystemSimulation::SetInstanceState(pFVar3,this,None);
    }
    if (this->OverrideParameters != (FNiagaraUserRedirectionParameterStore *)0x0) {
      FNiagaraParameterStore::Unbind
                ((FNiagaraParameterStore *)this->OverrideParameters,&this->InstanceParameters);
      if ((this_00->Object != (FNiagaraSystemSimulation *)0x0) && (this_00->Object->bIsSolo != 0)) {
        pFVar2 = this->OverrideParameters;
        pFVar3 = TSharedPtr<FNiagaraSystemSimulation,1>::operator->(this_00);
        FNiagaraParameterStore::Unbind
                  ((FNiagaraParameterStore *)pFVar2,
                   (FNiagaraParameterStore *)&((pFVar3->SpawnExecContext).Ptr)->Parameters);
        pFVar2 = this->OverrideParameters;
        pFVar3 = TSharedPtr<FNiagaraSystemSimulation,1>::operator->(this_00);
        FNiagaraParameterStore::Unbind
                  ((FNiagaraParameterStore *)pFVar2,
                   (FNiagaraParameterStore *)&((pFVar3->UpdateExecContext).Ptr)->Parameters);
      }
    }
    this->bAlreadyBound = '\0';
    iVar1 = (this->Emitters).ArrayNum;
    pFVar4 = (this->Emitters).AllocatorInstance.Data;
    pFVar5 = pFVar4 + (longlong)iVar1 * 0x10;
    while( true ) {
      if ((this->Emitters).ArrayNum != iVar1) {
        `TCheckedPointerIterator<TSharedRef<FNiagaraEmitterInstance,1>,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res8);
      }
      if (pFVar4 == pFVar5) break;
      (**(code **)(**(longlong **)pFVar4 + 0x38))(*(longlong **)pFVar4,0);
      pFVar4 = pFVar4 + 0x10;
    }
    local_28.Object = (FNiagaraSystemSimulation *)0x0;
    local_28.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (this_00 != &local_28) {
      this_00->Object = (FNiagaraSystemSimulation *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->SystemSimulation).SharedReferenceCount,&local_28.SharedReferenceCount);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
  }
  return;
}

// QueryCaptureResults @ 1493f2a70

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
FNiagaraSystemInstance::QueryCaptureResults
          (FNiagaraSystemInstance *this,FGuid *param_1,
          TArray<TSharedPtr<FNiagaraScriptDebuggerInfo,1>,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  FGuid *pFVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  code *pcVar6;
  TReferenceControllerBase<1> *pTVar7;
  bool bVar8;
  undefined1 uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  ulong64 uVar13;
  longlong lVar14;
  FNiagaraEmitterInstanceImpl *this_00;
  FScriptContainerElement *pFVar15;
  ulonglong uVar16;
  uint uVar17;
  ulonglong uVar18;
  FScriptContainerElement *pFVar19;
  longlong *plVar20;
  undefined1 local_res20 [8];
  
  WaitForConcurrentTickDoNotFinalize(this,false);
  if ((this->FinalizeRef).TaskEntry != (FNiagaraSystemInstance **)0x0) {
    FinalizeTick_GameThread(this,true);
  }
  pFVar2 = (this->CurrentCaptureGuid).Object;
  if ((pFVar2 == (FGuid *)0x0) ||
     (((pFVar2->D != param_1->D || pFVar2->C != param_1->C) || pFVar2->B != param_1->B) ||
      pFVar2->A != param_1->A)) {
    uVar13 = CityHash64((char *)param_1,0x10);
    iVar10 = TSet<TTuple<FGuid,TSharedPtr<TArray<TSharedPtr<FNiagaraScriptDebuggerInfo,1>,TSizedDefaultAllocator<32>_>,1>_>,TDefaultMapHashableKeyFuncs<FGuid,TSharedPtr<TArray<TSharedPtr<FNiagaraScriptDebuggerInfo,1>,TSizedDefaultAllocator<32>_>,1>,0>,FDefaultSetAllocator>
             ::FindIndexByHash<FGuid>
                       ((TSet<TTuple<FGuid,TSharedPtr<TArray<TSharedPtr<FNiagaraScriptDebuggerInfo,1>,TSizedDefaultAllocator<32>_>,1>_>,TDefaultMapHashableKeyFuncs<FGuid,TSharedPtr<TArray<TSharedPtr<FNiagaraScriptDebuggerInfo,1>,TSizedDefaultAllocator<32>_>,1>,0>,FDefaultSetAllocator>
                         *)&this->CapturedFrames,(uint)uVar13,param_1);
    if (iVar10 != -1) {
      lVar14 = *(longlong *)&this->CapturedFrames + (longlong)iVar10 * 0x28;
      plVar20 = (longlong *)(lVar14 + 0x10);
      if (lVar14 == 0) {
        plVar20 = (longlong *)0x0;
      }
      if (plVar20 != (longlong *)0x0) {
        plVar3 = (longlong *)*plVar20;
        piVar1 = &param_2->ArrayNum;
        iVar10 = *piVar1;
        uVar12 = *(uint *)(plVar3 + 1);
        if (iVar10 < (int)uVar12) {
          iVar11 = UE::Core::Private::
                   ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x10,8,uVar12 - iVar10,&param_2->AllocatorInstance,piVar1,
                              &param_2->ArrayMax);
          memset((param_2->AllocatorInstance).Data + (longlong)iVar11 * 0x10,0,
                 (longlong)(int)(uVar12 - iVar10) << 4);
        }
        else {
          if ((int)uVar12 < 0) {
                    /* WARNING: Subroutine does not return */
            UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar12);
          }
          if ((int)uVar12 < iVar10) {
            uVar17 = iVar10 - uVar12;
            if (((int)(uVar17 | uVar12) < 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x458,
                                   L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                  ), bVar8)) {
              pcVar6 = (code *)swi(3);
              uVar9 = (*pcVar6)();
              return (bool)uVar9;
            }
            if (uVar17 != 0) {
              TArray<TSharedPtr<FNiagaraScriptDebuggerInfo,1>,TSizedDefaultAllocator<32>_>::
              RemoveAtImpl(param_2,uVar12,uVar17);
              UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x10,8,&param_2->AllocatorInstance,*piVar1,&param_2->ArrayMax);
            }
          }
        }
        lVar14 = *plVar20;
        uVar16 = 0;
        uVar18 = uVar16;
        if (0 < *(int *)(lVar14 + 8)) {
          do {
            uVar17 = (uint)uVar18;
            uVar12 = 0;
            if ((int)uVar17 < (int)plVar3[1]) {
              uVar12 = ~uVar17 >> 0x1f;
            }
            if ((uVar12 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar6 = (code *)swi(3);
              uVar9 = (*pcVar6)();
              return (bool)uVar9;
            }
            lVar14 = *plVar3;
            if ((*(longlong *)(lVar14 + uVar16) == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x458,L""), bVar8)) {
              pcVar6 = (code *)swi(3);
              uVar9 = (*pcVar6)();
              return (bool)uVar9;
            }
            if (**(char **)(lVar14 + uVar16) != '\0') {
              uVar12 = 0;
              if ((int)uVar17 < (int)plVar3[1]) {
                uVar12 = ~uVar17 >> 0x1f;
              }
              if ((uVar12 == 0) &&
                 (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar8)) {
                pcVar6 = (code *)swi(3);
                uVar9 = (*pcVar6)();
                return (bool)uVar9;
              }
              lVar14 = *plVar3;
              if ((*(longlong *)(lVar14 + uVar16) == 0) &&
                 (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("IsValid()",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                     ,0x458,L""), bVar8)) {
                pcVar6 = (code *)swi(3);
                uVar9 = (*pcVar6)();
                return (bool)uVar9;
              }
              if (*(char *)(*(longlong *)(lVar14 + uVar16) + 0x170) == '\0') {
                iVar10 = (this->Emitters).ArrayNum;
                pFVar15 = (this->Emitters).AllocatorInstance.Data;
                pFVar19 = pFVar15 + (longlong)iVar10 * 0x10;
                while( true ) {
                  if ((this->Emitters).ArrayNum != iVar10) {
                    `TCheckedPointerIterator<TSharedRef<FNiagaraEmitterInstance,1>,int,0>::
                    operator!='::__l2::<lambda_1>::operator()(local_res20);
                  }
                  if (pFVar15 == pFVar19) break;
                  this_00 = (FNiagaraEmitterInstanceImpl *)
                            (**(code **)(**(longlong **)pFVar15 + 0x68))();
                  if (this_00 != (FNiagaraEmitterInstanceImpl *)0x0) {
                    FNiagaraEmitterInstanceImpl::WaitForDebugInfo(this_00);
                  }
                  pFVar15 = pFVar15 + 0x10;
                }
                return false;
              }
            }
            lVar14 = *plVar20;
            uVar16 = uVar16 + 0x10;
            uVar18 = (ulonglong)(uVar17 + 1);
          } while ((int)(uVar17 + 1) < *(int *)(lVar14 + 8));
        }
        uVar16 = 0;
        uVar18 = uVar16;
        if (0 < *(int *)(lVar14 + 8)) {
          do {
            uVar17 = (uint)uVar18;
            uVar12 = 0;
            if ((int)uVar17 < (int)plVar3[1]) {
              uVar12 = ~uVar17 >> 0x1f;
            }
            if ((uVar12 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar6 = (code *)swi(3);
              uVar9 = (*pcVar6)();
              return (bool)uVar9;
            }
            lVar14 = *plVar3;
            uVar12 = 0;
            if ((int)uVar17 < param_2->ArrayNum) {
              uVar12 = ~uVar17 >> 0x1f;
            }
            if ((uVar12 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar6 = (code *)swi(3);
              uVar9 = (*pcVar6)();
              return (bool)uVar9;
            }
            lVar4 = *(longlong *)(lVar14 + 8 + uVar16);
            pFVar15 = (param_2->AllocatorInstance).Data;
            uVar5 = *(undefined8 *)(lVar14 + uVar16);
            if (lVar4 != 0) {
              LOCK();
              *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
              UNLOCK();
            }
            pTVar7 = *(TReferenceControllerBase<1> **)(pFVar15 + uVar16 + 8);
            *(undefined8 *)(pFVar15 + uVar16) = uVar5;
            *(longlong *)(pFVar15 + uVar16 + 8) = lVar4;
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTVar7);
            uVar16 = uVar16 + 0x10;
            uVar18 = (ulonglong)(uVar17 + 1);
          } while ((int)(uVar17 + 1) < *(int *)(*plVar20 + 8));
        }
        if (*(int *)&(this->CapturedFrames).field_0x8 != *(int *)&(this->CapturedFrames).field_0x34)
        {
          uVar13 = CityHash64((char *)param_1,0x10);
          TSet<TTuple<FGuid,TSharedPtr<TArray<TSharedPtr<FNiagaraScriptDebuggerInfo,1>,TSizedDefaultAllocator<32>_>,1>_>,TDefaultMapHashableKeyFuncs<FGuid,TSharedPtr<TArray<TSharedPtr<FNiagaraScriptDebuggerInfo,1>,TSizedDefaultAllocator<32>_>,1>,0>,FDefaultSetAllocator>
          ::RemoveImpl<FGuid>((TSet<TTuple<FGuid,TSharedPtr<TArray<TSharedPtr<FNiagaraScriptDebuggerInfo,1>,TSizedDefaultAllocator<32>_>,1>_>,TDefaultMapHashableKeyFuncs<FGuid,TSharedPtr<TArray<TSharedPtr<FNiagaraScriptDebuggerInfo,1>,TSizedDefaultAllocator<32>_>,1>,0>,FDefaultSetAllocator>
                               *)&this->CapturedFrames,(uint)uVar13,param_1);
        }
        return true;
      }
    }
  }
  return false;
}

// ReInitInternal @ 1493f3260

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __thiscall FNiagaraSystemInstance::ReInitInternal(FNiagaraSystemInstance *this)

{
  int *piVar1;
  byte bVar2;
  int iVar3;
  longlong *plVar4;
  TSharedRef<FNiagaraEmitterInstance,1> *pTVar5;
  code *pcVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  ETickingGroup EVar14;
  FName *pFVar15;
  FThreadSafeStaticStat<FStat_STAT_NiagaraSystemReinit> FVar16;
  FThreadSafeStaticStat<FStat_STAT_NiagaraOverview_GT> FVar17;
  UObject *this_00;
  TReferenceControllerBase<1> *pTVar18;
  FNiagaraSystemSimulation *this_01;
  FNiagaraWorldManager *this_02;
  TSharedRef<FNiagaraSystemSimulation,1> *pTVar19;
  FThreadStats *pFVar20;
  FThreadStatsPool *pFVar21;
  FName FVar22;
  TReferenceControllerBase<1> *pTVar23;
  FName FVar24;
  FLLMScope local_res10 [2];
  FColor_u_0 local_res18 [2];
  FColor_u_0 local_res20 [2];
  FNiagaraSystemSimulation *local_158;
  FNiagaraSystemSimulation *local_150;
  FSharedReferencer<1> local_148;
  FName local_140;
  FName local_138;
  FNiagaraSystemSimulation *local_130;
  FSharedReferencer<1> local_128;
  FName local_120;
  FName local_110;
  FString local_100;
  FName local_f0;
  FMemScope local_e8;
  LARGE_INTEGER local_e0;
  LARGE_INTEGER local_d8;
  FString local_d0;
  FStatMessage local_c0;
  FStatMessage local_b0;
  double local_a0;
  double dStack_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined1 local_70;
  undefined7 uStack_6f;
  FName local_68;
  FName local_60;
  TSharedRef<FNiagaraSystemSimulation,1> local_58;
  
  if ((this->SystemInstanceIndex != -1) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("SystemInstanceIndex == INDEX_NONE",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSystemInstance.cpp"
                          ,0x422,L""), bVar12)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if (((this->FinalizeRef).TaskEntry != (FNiagaraSystemInstance **)0x0) &&
     (bVar12 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<_2996346430399970269>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSystemInstance.cpp"
                          ,0x423,"!FinalizeRef.IsPending()"), bVar12)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pTVar23 = (TReferenceControllerBase<1> *)0x0;
  FVar16 = StatPtr_STAT_NiagaraSystemReinit;
  if (StatPtr_STAT_NiagaraSystemReinit == (FThreadSafeStaticStat<FStat_STAT_NiagaraSystemReinit>)0x0
     ) {
    pFVar15 = ::FName::FName(&local_68,"STAT_NiagaraSystemReinit");
    FVar16 = (FThreadSafeStaticStat<FStat_STAT_NiagaraSystemReinit>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraSystemReinit,*pFVar15,
                        L"System Reinit [GT]","STATGROUP_Niagara","STATCAT_Niagara",L"Niagara",true,
                        true,ST_int64,true,false,MCR_Invalid);
  }
  FVar24 = *(FName *)FVar16;
  bVar10 = false;
  bVar12 = false;
  local_120.ComparisonIndex.Value = 0;
  local_120.Number = 0;
  bVar7 = false;
  bVar11 = false;
  if ((FVar24.ComparisonIndex.Value.Value == 0) && (FVar24.Number == 0)) {
LAB_1493f3427:
    bVar10 = bVar7;
    bVar12 = bVar11;
    bVar11 = false;
    FVar24 = local_120;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res18[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res18[0]._s_0,(char *)*(FName *)((longlong)FVar16 + 0x10));
      bVar10 = false;
      bVar12 = true;
      bVar7 = false;
      bVar11 = true;
      if (-1 < CpuChannel->Enabled) {
        local_140.ComparisonIndex.Value = FVar24.ComparisonIndex.Value.Value;
        local_140.Number = FVar24.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_140,(wchar_t *)*(FName *)((longlong)FVar16 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSystemInstance.cpp"
                   ,0x425);
        bVar10 = true;
        bVar12 = true;
        bVar7 = true;
        bVar11 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_1493f3427;
    FThreadStats::AddMessage(FVar24,CycleScopeStart);
    bVar11 = true;
  }
  FVar17 = StatPtr_STAT_NiagaraOverview_GT;
  if (StatPtr_STAT_NiagaraOverview_GT == (FThreadSafeStaticStat<FStat_STAT_NiagaraOverview_GT>)0x0)
  {
    pFVar15 = ::FName::FName(&local_60,"STAT_NiagaraOverview_GT");
    FVar17 = (FThreadSafeStaticStat<FStat_STAT_NiagaraOverview_GT>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraOverview_GT,*pFVar15,
                        L"GT Total","STATGROUP_NiagaraOverview","STATCAT_Niagara",L"NiagaraOverview"
                        ,true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar22 = *(FName *)FVar17;
  bVar7 = false;
  bVar9 = false;
  local_110.ComparisonIndex.Value = 0;
  local_110.Number = 0;
  if ((FVar22.ComparisonIndex.Value.Value == 0) && (FVar22.Number == 0)) {
LAB_1493f3541:
    bVar8 = false;
    FVar22 = local_110;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res20[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res20[0]._s_0,(char *)*(FName *)((longlong)FVar17 + 0x10));
      bVar7 = false;
      bVar9 = true;
      if (-1 < CpuChannel->Enabled) {
        local_138.ComparisonIndex.Value = FVar22.ComparisonIndex.Value.Value;
        local_138.Number = FVar22.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_138,(wchar_t *)*(FName *)((longlong)FVar17 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSystemInstance.cpp"
                   ,0x427);
        bVar7 = true;
        bVar9 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_1493f3541;
    FThreadStats::AddMessage(FVar22,CycleScopeStart);
    bVar8 = true;
  }
  if (__CsvProfilerStat1064 == false) {
    FCsvProfilerTrace::OutputInlineStatExclusive("Effects");
    __CsvProfilerStat1064 = true;
  }
  FCsvProfiler::BeginExclusiveStat("Effects","CSV_Effects");
  FLLMScope::FLLMScope(local_res10,Niagara,false,None,Default,true);
  FMemScope::FMemScope(&local_e8,Niagara,true);
  bVar2 = this->field_0x840;
  this->Age = 0.0;
  this->TickCount = 0;
  uStack_8c = UE::Math::TVector<double>::ZeroVector.field0_0x0._20_4_;
  uStack_90 = UE::Math::TVector<double>::ZeroVector.field0_0x0._16_4_;
  dStack_98 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_a0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  this->bAlreadyBound = '\0';
  this->field_0x840 = (bVar2 >> 1 ^ bVar2) & 4 ^ bVar2;
  local_70 = 1;
  local_88._0_4_ = SUB84(local_a0,0);
  local_88._4_4_ = (undefined4)((ulonglong)local_a0 >> 0x20);
  this->CachedDeltaSeconds = 0.0;
  (this->LocalBounds).Min.field0_0x0._s_0.X = local_a0;
  (this->LocalBounds).Min.field0_0x0._s_0.Y = dStack_98;
  uStack_80._0_4_ = SUB84(dStack_98,0);
  uStack_80._4_4_ = (undefined4)((ulonglong)dStack_98 >> 0x20);
  *(undefined4 *)((longlong)&(this->LocalBounds).Min.field0_0x0 + 0x10) = uStack_90;
  *(undefined4 *)((longlong)&(this->LocalBounds).Min.field0_0x0 + 0x14) = uStack_8c;
  *(undefined4 *)&(this->LocalBounds).Max.field0_0x0 = (undefined4)local_88;
  *(undefined4 *)((longlong)&(this->LocalBounds).Max.field0_0x0 + 4) = local_88._4_4_;
  local_88 = local_a0;
  *(undefined4 *)((longlong)&(this->LocalBounds).Max.field0_0x0 + 8) = (undefined4)uStack_80;
  *(undefined4 *)((longlong)&(this->LocalBounds).Max.field0_0x0 + 0xc) = uStack_80._4_4_;
  *(undefined4 *)((longlong)&(this->LocalBounds).Max.field0_0x0 + 0x10) = uStack_90;
  *(undefined4 *)((longlong)&(this->LocalBounds).Max.field0_0x0 + 0x14) = uStack_8c;
  (this->LocalBounds).IsValid = 1;
  (this->LocalBounds).Pad[0] = (char)uStack_6f;
  (this->LocalBounds).Pad[1] = (char)((uint7)uStack_6f >> 8);
  (this->LocalBounds).Pad[2] = (char)((uint7)uStack_6f >> 0x10);
  (this->LocalBounds).Pad[3] = (char)((uint7)uStack_6f >> 0x18);
  (this->LocalBounds).Pad[4] = (char)((uint7)uStack_6f >> 0x20);
  (this->LocalBounds).Pad[5] = (char)((uint7)uStack_6f >> 0x28);
  (this->LocalBounds).Pad[6] = (char)((uint7)uStack_6f >> 0x30);
  uStack_80 = dStack_98;
  uStack_78 = uStack_90;
  uStack_74 = uStack_8c;
  InitSystemState(this);
  if ((this->System == (UNiagaraSystem *)0x0) || (((uint)this->System->_padding_ >> 0x1e & 1) != 0))
  goto LAB_1493f3a1d;
  bVar2 = this->field_0x840;
  this->RequestedExecutionState = Inactive;
  this->ActualExecutionState = Inactive;
  this->field_0x840 = (bVar2 >> 1 ^ bVar2) & 4 ^ bVar2;
  bVar13 = IsReadyToRun(this);
  if (!bVar13) goto LAB_1493f3a1d;
  if (this->System->bIsValidCached == 0) {
    if (this->RequestedExecutionState != Disabled) {
      this->ActualExecutionState = Disabled;
      Cleanup(this);
      this->RequestedExecutionState = Disabled;
    }
    if (((this->Emitters).ArrayNum != 0) && (2 < (byte)LogNiagara._0_1_)) {
      this_00 = FWeakObjectPtr::Get(&(this->AttachComponent).WeakPtr);
      if ((this_00 == (UObject *)0x0) || (*(longlong *)&this_00->field_0x10 == 0)) {
        ::FString::FString(&local_100,L"None");
      }
      else {
        UObjectBaseUtility::GetFullName
                  ((UObjectBaseUtility *)this_00,&local_100,(UObject *)0x0,None);
      }
      local_f0 = (FName)this->System->_padding_;
      ::FName::ToString(&local_f0,&local_d0);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
      if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_d0.Data.AllocatorInstance.Data);
      }
      if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_100.Data.AllocatorInstance.Data);
      }
    }
    goto LAB_1493f3a1d;
  }
  if (this->bSolo == '\0') {
    EVar14 = CalculateTickGroup(this);
    this_02 = GetWorldManager(this);
    pTVar19 = FNiagaraWorldManager::GetSystemSimulation(this_02,&local_58,EVar14,this->System);
    local_128.ReferenceController = (pTVar19->SharedReferenceCount).ReferenceController;
    local_130 = pTVar19->Object;
    if (local_128.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_128.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(local_128.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (&this->SystemSimulation != (TSharedPtr<FNiagaraSystemSimulation,1> *)&local_130) {
      (this->SystemSimulation).Object = local_130;
      local_130 = (FNiagaraSystemSimulation *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->SystemSimulation).SharedReferenceCount,&local_128);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_128.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_58.SharedReferenceCount.ReferenceController);
  }
  else if ((this->SystemSimulation).Object == (FNiagaraSystemSimulation *)0x0) {
    pTVar18 = ::operator_new(0x6d8);
    if (pTVar18 == (TReferenceControllerBase<1> *)0x0) {
      local_158 = (FNiagaraSystemSimulation *)&DAT_00000010;
LAB_1493f3834:
      if (((local_158->_padding_ == 0) || (local_158->_padding_ == 0)) ||
         (*(int *)(local_158->_padding_ + 8) < 1)) {
        if (pTVar23 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar23->SharedReferenceCount = (atomic<int>)((int)pTVar23->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_158->_padding_ = (longlong)local_158;
        if (pTVar23 != (TReferenceControllerBase<1> *)local_158->_padding_) {
          if (pTVar23 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar23->WeakReferenceCount = (atomic<int>)((int)pTVar23->WeakReferenceCount + 1);
            UNLOCK();
          }
          plVar4 = (longlong *)local_158->_padding_;
          if (plVar4 != (longlong *)0x0) {
            LOCK();
            piVar1 = (int *)((longlong)plVar4 + 0xc);
            iVar3 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar3 == 1) {
              (**(code **)(*plVar4 + 8))(plVar4,1);
            }
          }
          local_158->_padding_ = (longlong)pTVar23;
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar23)
        ;
      }
    }
    else {
      pTVar18->SharedReferenceCount = (atomic<int>)0x1;
      pTVar18->WeakReferenceCount = (atomic<int>)0x1;
      pTVar18->_padding_ =
           (longlong)
           &
           ___7__TIntrusiveReferenceController_VFNiagaraSystemSimulation___00_SharedPointerInternals__6B_
      ;
      FNiagaraSystemSimulation::FNiagaraSystemSimulation((FNiagaraSystemSimulation *)(pTVar18 + 1));
      local_158 = (FNiagaraSystemSimulation *)(pTVar18 + 1);
      pTVar23 = pTVar18;
      if (local_158 != (FNiagaraSystemSimulation *)0x0) goto LAB_1493f3834;
      bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("InObject != nullptr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x246,L"");
      if (bVar13) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    local_150 = local_158;
    if (pTVar23 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar23->SharedReferenceCount = (atomic<int>)((int)pTVar23->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_148.ReferenceController = pTVar23;
    if (&this->SystemSimulation != (TSharedPtr<FNiagaraSystemSimulation,1> *)&local_150) {
      (this->SystemSimulation).Object = local_158;
      local_150 = (FNiagaraSystemSimulation *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->SystemSimulation).SharedReferenceCount,&local_148);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_148.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar23);
    this_01 = TSharedPtr<FNiagaraSystemSimulation,1>::operator->(&this->SystemSimulation);
    FNiagaraSystemSimulation::Init(this_01,this->System,this->World,true,TG_MAX);
  }
  FNiagaraParameterStore::operator=
            (&this->InstanceParameters,&(this->System->SystemCompiledData).InstanceParamStore);
  piVar1 = &(this->Emitters).ArrayMax;
  pTVar5 = (TSharedRef<FNiagaraEmitterInstance,1> *)(this->Emitters).AllocatorInstance.Data;
  iVar3 = (this->Emitters).ArrayNum;
  if ((this->Emitters).ArrayMax < 0) {
    DestructItems<TSharedRef<FNiagaraEmitterInstance,1>,int>(pTVar5,iVar3);
    (this->Emitters).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,&(this->Emitters).AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<TSharedRef<FNiagaraEmitterInstance,1>,int>(pTVar5,iVar3);
    (this->Emitters).ArrayNum = 0;
  }
  InitEmitters(this);
  FNiagaraParameterStore::Rebind(&this->InstanceParameters);
  TickInstanceParameters_GameThread(this,__real_3c23d70a);
  TickInstanceParameters_Concurrent(this);
LAB_1493f3a1d:
  FMemScope::~FMemScope(&local_e8);
  FLLMScope::~FLLMScope(local_res10);
  FCsvProfiler::EndExclusiveStat("Effects");
  if (bVar9) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar7) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((bVar8) && (FVar22 != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    pFVar20 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar20 == (FThreadStats *)0x0) {
      pFVar21 = FThreadStatsPool::Get();
      pFVar20 = FThreadStatsPool::GetFromPool(pFVar21);
    }
    if (pFVar20->bWaitForExplicitFlush < pFVar20->ScopeCount) {
      local_c0.NameAndInfo.Index = FVar22.ComparisonIndex.Value;
      local_c0.NameAndInfo.Number = FVar22.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_e0);
      local_c0.StatData.Pad[4] = '\0';
      local_c0.StatData.Pad[5] = '\0';
      local_c0.StatData.Pad[6] = '\0';
      local_c0.StatData.Pad[7] = '\0';
      local_c0.StatData.Pad[0] = local_e0.s.LowPart._0_1_;
      local_c0.StatData.Pad[1] = local_e0.s.LowPart._1_1_;
      local_c0.StatData.Pad[2] = local_e0.s.LowPart._2_1_;
      local_c0.StatData.Pad[3] = local_e0.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(pFVar20,&local_c0);
      piVar1 = &pFVar20->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(pFVar20,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar20,false,false);
      }
    }
  }
  if (bVar12) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar10) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((bVar11) && (FVar24 != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    pFVar20 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar20 == (FThreadStats *)0x0) {
      pFVar21 = FThreadStatsPool::Get();
      pFVar20 = FThreadStatsPool::GetFromPool(pFVar21);
    }
    if (pFVar20->bWaitForExplicitFlush < pFVar20->ScopeCount) {
      local_b0.NameAndInfo.Index = FVar24.ComparisonIndex.Value;
      local_b0.NameAndInfo.Number = FVar24.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_d8);
      local_b0.StatData.Pad[4] = '\0';
      local_b0.StatData.Pad[5] = '\0';
      local_b0.StatData.Pad[6] = '\0';
      local_b0.StatData.Pad[7] = '\0';
      local_b0.StatData.Pad[0] = local_d8.s.LowPart._0_1_;
      local_b0.StatData.Pad[1] = local_d8.s.LowPart._1_1_;
      local_b0.StatData.Pad[2] = local_d8.s.LowPart._2_1_;
      local_b0.StatData.Pad[3] = local_d8.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(pFVar20,&local_b0);
      piVar1 = &pFVar20->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(pFVar20,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar20,false,false);
      }
    }
  }
  return;
}

// RequestCapture @ 1493f5d90

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraStatelessFeatureMask": Some values do not have unique names */

bool __thiscall FNiagaraSystemInstance::RequestCapture(FNiagaraSystemInstance *this,FGuid *param_1)

{
  ENiagaraScriptUsage EVar1;
  longlong lVar2;
  code *pcVar3;
  uint uVar4;
  uint uVar5;
  FNiagaraEmitterHandle *pFVar6;
  bool bVar7;
  undefined1 uVar8;
  int iVar9;
  TReferenceControllerBase<1> *pTVar10;
  FVersionedNiagaraEmitterData *this_00;
  FName FVar11;
  TReferenceControllerBase<1> *pTVar12;
  TArray<TSharedPtr<FNiagaraScriptDebuggerInfo,1>,TSizedDefaultAllocator<32>_> *pTVar13;
  FNiagaraEmitterHandle *this_01;
  FGuid *pFVar14;
  TReferenceControllerBase<1> *pTVar15;
  FScriptContainerElement *pFVar16;
  ulonglong uVar17;
  TArray<TSharedPtr<FNiagaraScriptDebuggerInfo,1>,TSizedDefaultAllocator<32>_> *pTVar18;
  ForAnyElementType FVar19;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  TReferenceControllerBase<1> *local_178;
  FGuid *local_170;
  TReferenceControllerBase<1> *pTStack_168;
  TArray<TSharedPtr<FNiagaraScriptDebuggerInfo,1>,TSizedDefaultAllocator<32>_> *local_160;
  FGuid *local_158;
  TReferenceControllerBase<1> *pTStack_150;
  FGuid *local_148;
  TReferenceControllerBase<1> *pTStack_140;
  uint local_138;
  uint local_134;
  TReferenceControllerBase<1> *local_130;
  TArray<UNiagaraScript_*,TSizedDefaultAllocator<32>_> local_128;
  FGuid *local_118;
  FSharedReferencer<1> FStack_110;
  undefined8 local_108;
  undefined8 local_100;
  FScriptContainerElement *local_f8;
  FNiagaraEmitterHandle *local_f0;
  TArray<TSharedPtr<FNiagaraScriptDebuggerInfo,1>,TSizedDefaultAllocator<32>_> *local_e8;
  FSharedReferencer<1> local_e0;
  FGuid local_d8;
  FGuid local_c8;
  TPairInitializer<FGuid_const_&,TSharedPtr<TArray<TSharedPtr<FNiagaraScriptDebuggerInfo,1>,TSizedDefaultAllocator<32>_>,1>_&&>
  local_b8;
  UNiagaraSystem *local_a8;
  FNiagaraEmitterHandle *local_a0;
  TArray<TSharedPtr<FNiagaraScriptDebuggerInfo,1>,TSizedDefaultAllocator<32>_> *local_98;
  TReferenceControllerBase<1> *local_90;
  FGuid *local_88;
  TArray<TSharedPtr<FNiagaraScriptDebuggerInfo,1>,TSizedDefaultAllocator<32>_> **local_80;
  FGuid local_70 [3];
  
  if (((this->ActualExecutionState != Complete) && (this->ActualExecutionState != Disabled)) &&
     ((this->CurrentCapture).Object ==
      (TArray<TSharedPtr<FNiagaraScriptDebuggerInfo,1>,TSizedDefaultAllocator<32>_> *)0x0)) {
    WaitForConcurrentTickDoNotFinalize(this,false);
    if ((this->FinalizeRef).TaskEntry != (FNiagaraSystemInstance **)0x0) {
      FinalizeTick_GameThread(this,true);
    }
    if ((this->ActualExecutionState != Complete) && (this->ActualExecutionState != Disabled)) {
      if (2 < (byte)LogNiagara._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
      }
      this->bWasSoloPriorToCaptureRequest = this->bSolo;
      SetSolo(this,true);
      local_178 = ::operator_new(0x20);
      pTVar15 = (TReferenceControllerBase<1> *)0x0;
      if (local_178 == (TReferenceControllerBase<1> *)0x0) {
        local_178 = (TReferenceControllerBase<1> *)0x0;
        pTVar18 = (TArray<TSharedPtr<FNiagaraScriptDebuggerInfo,1>,TSizedDefaultAllocator<32>_> *)
                  &DAT_00000010;
        local_130 = (TReferenceControllerBase<1> *)0x0;
        local_160 = (TArray<TSharedPtr<FNiagaraScriptDebuggerInfo,1>,TSizedDefaultAllocator<32>_> *)
                    &DAT_00000010;
      }
      else {
        pTVar18 = (TArray<TSharedPtr<FNiagaraScriptDebuggerInfo,1>,TSizedDefaultAllocator<32>_> *)
                  (local_178 + 1);
        local_178->SharedReferenceCount = (atomic<int>)0x1;
        local_178->WeakReferenceCount = (atomic<int>)0x1;
        local_178->_padding_ =
             (longlong)
             &
             ___7__TIntrusiveReferenceController_V__TArray_V__TSharedPtr_UFNiagaraScriptDebuggerInfo___00__V__TSizedDefaultAllocator__0CA______00_SharedPointerInternals__6B_
        ;
        local_178[1]._padding_ = 0;
        local_178[1].SharedReferenceCount = (atomic<int>)0x0;
        local_178[1].WeakReferenceCount = (atomic<int>)0x0;
        local_160 = pTVar18;
        local_130 = local_178;
        if (pTVar18 ==
            (TArray<TSharedPtr<FNiagaraScriptDebuggerInfo,1>,TSizedDefaultAllocator<32>_> *)0x0) {
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("InObject != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x246,L"");
          if (bVar7) {
            pcVar3 = (code *)swi(3);
            uVar8 = (*pcVar3)();
            return (bool)uVar8;
          }
        }
      }
      local_d8.A = 0;
      local_d8.B = 0;
      local_d8.C = 0;
      local_d8.D = 0;
      pTVar10 = ::operator_new(0x188);
      pTVar12 = _UNK_150651568;
      pFVar14 = ___xmm_00000000000000000000000000000010;
      if (pTVar10 == (TReferenceControllerBase<1> *)0x0) {
        local_158 = ___xmm_00000000000000000000000000000010;
        pTStack_150 = _UNK_150651568;
        pTVar10 = pTVar15;
      }
      else {
        local_108 = 0;
        pTVar10->SharedReferenceCount = (atomic<int>)0x1;
        pTVar10->WeakReferenceCount = (atomic<int>)0x1;
        pTVar10->_padding_ =
             (longlong)
             &
             ___7__TIntrusiveReferenceController_UFNiagaraScriptDebuggerInfo___00_SharedPointerInternals__6B_
        ;
        FNiagaraScriptDebuggerInfo::FNiagaraScriptDebuggerInfo
                  ((FNiagaraScriptDebuggerInfo *)(pTVar10 + 1),(FName)0x0,SystemSpawnScript,
                   &local_d8);
        local_158 = (FGuid *)(pTVar10 + 1);
        if (local_158 == (FGuid *)0x0) {
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("InObject != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x246,L"");
          if (bVar7) {
            pcVar3 = (code *)swi(3);
            uVar8 = (*pcVar3)();
            return (bool)uVar8;
          }
        }
        LOCK();
        pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
        UNLOCK();
        pTStack_150 = pTVar10;
      }
      pFVar16 = (pTVar18->AllocatorInstance).Data;
      if ((pFVar16 <= (FScriptContainerElement *)&local_158) &&
         ((FScriptContainerElement *)&local_158 < pFVar16 + (longlong)pTVar18->ArrayMax * 0x10)) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar7) {
          pcVar3 = (code *)swi(3);
          uVar8 = (*pcVar3)();
          return (bool)uVar8;
        }
      }
      iVar9 = pTVar18->ArrayNum;
      if (iVar9 == pTVar18->ArrayMax) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&pTVar18->AllocatorInstance,&pTVar18->ArrayMax);
      }
      pTVar18->ArrayNum = iVar9 + 1;
      pFVar16 = (pTVar18->AllocatorInstance).Data + (longlong)iVar9 * 0x10;
      *(FGuid **)pFVar16 = local_158;
      *(TReferenceControllerBase<1> **)(pFVar16 + 8) = pTStack_150;
      pTStack_150 = (TReferenceControllerBase<1> *)0x0;
      local_158 = (FGuid *)0x0;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
      local_c8.A = 0;
      local_c8.B = 0;
      local_c8.C = 0;
      local_c8.D = 0;
      pTVar10 = ::operator_new(0x188);
      if (pTVar10 == (TReferenceControllerBase<1> *)0x0) {
        local_148 = pFVar14;
        pTStack_140 = pTVar12;
        pTVar10 = pTVar15;
      }
      else {
        local_100 = 0;
        pTVar10->SharedReferenceCount = (atomic<int>)0x1;
        pTVar10->WeakReferenceCount = (atomic<int>)0x1;
        pTVar10->_padding_ =
             (longlong)
             &
             ___7__TIntrusiveReferenceController_UFNiagaraScriptDebuggerInfo___00_SharedPointerInternals__6B_
        ;
        FNiagaraScriptDebuggerInfo::FNiagaraScriptDebuggerInfo
                  ((FNiagaraScriptDebuggerInfo *)(pTVar10 + 1),(FName)0x0,SystemUpdateScript,
                   &local_c8);
        local_148 = (FGuid *)(pTVar10 + 1);
        if (local_148 == (FGuid *)0x0) {
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("InObject != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x246,L"");
          if (bVar7) {
            pcVar3 = (code *)swi(3);
            uVar8 = (*pcVar3)();
            return (bool)uVar8;
          }
        }
        LOCK();
        pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
        UNLOCK();
        pTStack_140 = pTVar10;
      }
      pTVar13 = local_160;
      pFVar16 = (local_160->AllocatorInstance).Data;
      if ((pFVar16 <= (FScriptContainerElement *)&local_148) &&
         ((FScriptContainerElement *)&local_148 < pFVar16 + (longlong)pTVar18->ArrayMax * 0x10)) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar7) {
          pcVar3 = (code *)swi(3);
          uVar8 = (*pcVar3)();
          return (bool)uVar8;
        }
      }
      iVar9 = pTVar18->ArrayNum;
      if (iVar9 == pTVar18->ArrayMax) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&pTVar13->AllocatorInstance,&pTVar18->ArrayMax);
      }
      pTVar18->ArrayNum = iVar9 + 1;
      pFVar16 = (pTVar13->AllocatorInstance).Data + (longlong)iVar9 * 0x10;
      *(FGuid **)pFVar16 = local_148;
      *(TReferenceControllerBase<1> **)(pFVar16 + 8) = pTStack_140;
      pTStack_140 = (TReferenceControllerBase<1> *)0x0;
      local_148 = (FGuid *)0x0;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
      local_a8 = this->System;
      local_134 = (local_a8->EmitterHandles).ArrayNum;
      uVar17 = (ulonglong)(int)local_134;
      this_01 = (FNiagaraEmitterHandle *)(local_a8->EmitterHandles).AllocatorInstance.Data;
      local_a0 = this_01 + uVar17;
      while( true ) {
        pFVar6 = local_a0;
        local_f0 = this_01;
        if ((local_a8->EmitterHandles).ArrayNum != (int)uVar17) {
          local_res18[0] = 0;
          `TCheckedPointerIterator<FNiagaraEmitterHandle,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_res18);
        }
        pTVar10 = local_130;
        if (this_01 == pFVar6) break;
        local_128.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_128.ArrayNum = 0;
        local_128.ArrayMax = 0;
        this_00 = FNiagaraEmitterHandle::GetEmitterData(this_01);
        local_b8.Value =
             (TSharedPtr<TArray<TSharedPtr<FNiagaraScriptDebuggerInfo,1>,TSizedDefaultAllocator<32>_>,1>
              *)this_00;
        if (this_00 != (FVersionedNiagaraEmitterData *)0x0) {
          bVar7 = FNiagaraEmitterHandle::GetIsEnabled(this_01);
          if (bVar7) {
            FVersionedNiagaraEmitterData::GetScripts(this_00,&local_128,false,false);
            uVar17 = (ulonglong)local_128.ArrayNum;
            local_138 = local_128.ArrayNum;
            local_f8 = local_128.AllocatorInstance.Data + uVar17 * 8;
            FVar19.Data = local_128.AllocatorInstance.Data;
            while( true ) {
              if (local_128.ArrayNum != (int)uVar17) {
                local_res20[0] = 0;
                `TCheckedPointerIterator<UNiagaraScript_*,int,0>::operator!='::__l2::<lambda_1>::
                operator()(local_res20);
              }
              if (FVar19.Data == local_f8) break;
              lVar2 = *(longlong *)FVar19.Data;
              EVar1 = *(ENiagaraScriptUsage *)(lVar2 + 0x30);
              if ((EVar1 == ParticleGPUComputeScript) && (this_00->SimTarget == CPUSim)) {
                FVar19.Data = FVar19.Data + 8;
                uVar17 = (ulonglong)local_138;
                pTVar13 = local_160;
              }
              else {
                local_70[0]._0_8_ = *(undefined8 *)(lVar2 + 0x34);
                local_70[0]._8_8_ = *(undefined8 *)(lVar2 + 0x3c);
                FVar11 = FNiagaraEmitterHandle::GetIdName(this_01);
                pTVar10 = ::operator_new(0x188);
                if (pTVar10 == (TReferenceControllerBase<1> *)0x0) {
                  local_170 = pFVar14;
                  pTStack_168 = pTVar12;
                  pTVar10 = pTVar15;
                }
                else {
                  pTVar10->SharedReferenceCount = (atomic<int>)0x1;
                  pTVar10->WeakReferenceCount = (atomic<int>)0x1;
                  pTVar10->_padding_ =
                       (longlong)
                       &
                       ___7__TIntrusiveReferenceController_UFNiagaraScriptDebuggerInfo___00_SharedPointerInternals__6B_
                  ;
                  FNiagaraScriptDebuggerInfo::FNiagaraScriptDebuggerInfo
                            ((FNiagaraScriptDebuggerInfo *)(pTVar10 + 1),*(FName *)FVar11,EVar1,
                             local_70);
                  if ((FGuid *)(pTVar10 + 1) == (FGuid *)0x0) {
                    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                      ("InObject != nullptr",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                       ,0x246,L"");
                    if (bVar7) {
                      pcVar3 = (code *)swi(3);
                      uVar8 = (*pcVar3)();
                      return (bool)uVar8;
                    }
                  }
                  LOCK();
                  pTVar10->SharedReferenceCount =
                       (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
                  UNLOCK();
                  local_170 = (FGuid *)(pTVar10 + 1);
                  pTStack_168 = pTVar10;
                }
                SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                          (pTVar10);
                if (local_170 == (FGuid *)0x0) {
                  bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("IsValid()",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                     ,0x458,L"");
                  if (bVar7) {
                    pcVar3 = (code *)swi(3);
                    uVar8 = (*pcVar3)();
                    return (bool)uVar8;
                  }
                }
                pTVar13 = local_160;
                LOCK();
                *(undefined1 *)&local_170[0x17].A = 0;
                UNLOCK();
                pFVar16 = (local_160->AllocatorInstance).Data;
                if ((pFVar16 <= (FScriptContainerElement *)&local_170) &&
                   ((FScriptContainerElement *)&local_170 <
                    pFVar16 + (longlong)pTVar18->ArrayMax * 0x10)) {
                  bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    );
                  if (bVar7) {
                    pcVar3 = (code *)swi(3);
                    uVar8 = (*pcVar3)();
                    return (bool)uVar8;
                  }
                }
                iVar9 = pTVar18->ArrayNum;
                if (iVar9 == pTVar18->ArrayMax) {
                  iVar9 = UE::Core::Private::
                          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                    (0x810,&pTVar13->AllocatorInstance,&pTVar18->ArrayMax);
                }
                pTVar18->ArrayNum = iVar9 + 1;
                pFVar16 = (pTVar13->AllocatorInstance).Data + (longlong)iVar9 * 0x10;
                *(FGuid **)pFVar16 = local_170;
                *(TReferenceControllerBase<1> **)(pFVar16 + 8) = pTStack_168;
                if (pTStack_168 != (TReferenceControllerBase<1> *)0x0) {
                  LOCK();
                  pTStack_168->SharedReferenceCount =
                       (atomic<int>)((int)pTStack_168->SharedReferenceCount + 1);
                  UNLOCK();
                }
                SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                          (pTStack_168);
                uVar17 = (ulonglong)local_138;
                FVar19.Data = FVar19.Data + 8;
                this_01 = local_f0;
                this_00 = (FVersionedNiagaraEmitterData *)local_b8.Value;
              }
            }
          }
        }
        if (local_128.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_128.AllocatorInstance.Data);
        }
        this_01 = this_01 + 1;
        uVar17 = (ulonglong)local_134;
      }
      local_90 = local_178;
      if (local_178 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        local_130->SharedReferenceCount = (atomic<int>)((int)local_130->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_80 = &local_98;
      local_98 = pTVar13;
      local_88 = param_1;
      TSet<TTuple<FGuid,TSharedPtr<TArray<TSharedPtr<FNiagaraScriptDebuggerInfo,1>,TSizedDefaultAllocator<32>_>,1>_>,TDefaultMapHashableKeyFuncs<FGuid,TSharedPtr<TArray<TSharedPtr<FNiagaraScriptDebuggerInfo,1>,TSizedDefaultAllocator<32>_>,1>,0>,FDefaultSetAllocator>
      ::
      Emplace<TPairInitializer<FGuid_const_&,TSharedPtr<TArray<TSharedPtr<FNiagaraScriptDebuggerInfo,1>,TSizedDefaultAllocator<32>_>,1>_&&>_>
                ((TSet<TTuple<FGuid,TSharedPtr<TArray<TSharedPtr<FNiagaraScriptDebuggerInfo,1>,TSizedDefaultAllocator<32>_>,1>_>,TDefaultMapHashableKeyFuncs<FGuid,TSharedPtr<TArray<TSharedPtr<FNiagaraScriptDebuggerInfo,1>,TSizedDefaultAllocator<32>_>,1>,0>,FDefaultSetAllocator>
                  *)&this->CapturedFrames,&local_b8,(bool *)&local_88);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_90);
      local_e0.ReferenceController = local_178;
      if (local_178 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_e8 = pTVar13;
      if (&this->CurrentCapture !=
          (TSharedPtr<TArray<TSharedPtr<FNiagaraScriptDebuggerInfo,1>,TSizedDefaultAllocator<32>_>,1>
           *)&local_e8) {
        (this->CurrentCapture).Object = pTVar13;
        local_e8 = (TArray<TSharedPtr<FNiagaraScriptDebuggerInfo,1>,TSizedDefaultAllocator<32>_> *)
                   0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&(this->CurrentCapture).SharedReferenceCount,&local_e0);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_e0.ReferenceController);
      pTVar10 = ::operator_new(0x20);
      if (pTVar10 == (TReferenceControllerBase<1> *)0x0) {
        local_118 = pFVar14;
        pFVar14 = (FGuid *)&DAT_00000010;
      }
      else {
        pTVar10->SharedReferenceCount = (atomic<int>)0x1;
        pFVar14 = (FGuid *)(pTVar10 + 1);
        pTVar10->WeakReferenceCount = (atomic<int>)0x1;
        pTVar10->_padding_ =
             (longlong)&___7__TIntrusiveReferenceController_UFGuid___00_SharedPointerInternals__6B_;
        uVar4 = param_1->C;
        uVar5 = param_1->D;
        pTVar10[1]._padding_ = *(longlong *)param_1;
        pTVar10[1].SharedReferenceCount = (atomic<int>)uVar4;
        pTVar10[1].WeakReferenceCount = (atomic<int>)uVar5;
        if (pFVar14 == (FGuid *)0x0) {
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("InObject != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x246,L"");
          if (bVar7) {
            pcVar3 = (code *)swi(3);
            uVar8 = (*pcVar3)();
            return (bool)uVar8;
          }
        }
        LOCK();
        pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
        UNLOCK();
        pTVar12 = pTVar10;
        pTVar15 = pTVar10;
        local_118 = pFVar14;
      }
      FStack_110.ReferenceController = pTVar12;
      if (&this->CurrentCaptureGuid != (TSharedPtr<FGuid,1> *)&local_118) {
        (this->CurrentCaptureGuid).Object = pFVar14;
        local_118 = (FGuid *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&(this->CurrentCaptureGuid).SharedReferenceCount,&FStack_110);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FStack_110.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar15);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_178)
      ;
      return true;
    }
  }
  return false;
}

// RequiresCurrentFrameNDC @ 1493f6690

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall FNiagaraSystemInstance::RequiresCurrentFrameNDC(FNiagaraSystemInstance *this)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  longlong *plVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  undefined1 local_res8 [8];
  
  if (this->bHasGPUEmitters != '\0') {
    iVar2 = (this->Emitters).ArrayNum;
    pFVar8 = (this->Emitters).AllocatorInstance.Data;
    pFVar7 = pFVar8 + (longlong)iVar2 * 0x10;
    while( true ) {
      if ((this->Emitters).ArrayNum != iVar2) {
        `TCheckedPointerIterator<TSharedRef<FNiagaraEmitterInstance,1>_const_,int,0>::operator!='::
        __l2::<lambda_1>::operator()(local_res8);
      }
      if (pFVar8 == pFVar7) break;
      lVar4 = *(longlong *)(*(longlong *)pFVar8 + 0x18);
      if (lVar4 != 0) {
        plVar6 = *(longlong **)(lVar4 + 0xb0);
        iVar3 = *(int *)(lVar4 + 0xb8);
        plVar1 = plVar6 + iVar3;
        while( true ) {
          if (*(int *)(lVar4 + 0xb8) != iVar3) {
            `TCheckedPointerIterator<UNiagaraDataInterface_*_const,int,0>::operator!='::__l2::
            <lambda_1>::operator()(local_res8);
          }
          if (plVar6 == plVar1) break;
          if (((longlong *)*plVar6 != (longlong *)0x0) &&
             (cVar5 = (**(code **)(*(longlong *)*plVar6 + 0x3b0))(), cVar5 != '\0')) {
            return true;
          }
          plVar6 = plVar6 + 1;
        }
      }
      pFVar8 = pFVar8 + 0x10;
    }
  }
  return false;
}

// RequiresDepthBuffer @ 1493f6780

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall FNiagaraSystemInstance::RequiresDepthBuffer(FNiagaraSystemInstance *this)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  longlong *plVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  undefined1 local_res8 [8];
  
  if (this->bHasGPUEmitters != '\0') {
    iVar2 = (this->Emitters).ArrayNum;
    pFVar8 = (this->Emitters).AllocatorInstance.Data;
    pFVar7 = pFVar8 + (longlong)iVar2 * 0x10;
    while( true ) {
      if ((this->Emitters).ArrayNum != iVar2) {
        `TCheckedPointerIterator<TSharedRef<FNiagaraEmitterInstance,1>_const_,int,0>::operator!='::
        __l2::<lambda_1>::operator()(local_res8);
      }
      if (pFVar8 == pFVar7) break;
      lVar4 = *(longlong *)(*(longlong *)pFVar8 + 0x18);
      if (lVar4 != 0) {
        plVar6 = *(longlong **)(lVar4 + 0xb0);
        iVar3 = *(int *)(lVar4 + 0xb8);
        plVar1 = plVar6 + iVar3;
        while( true ) {
          if (*(int *)(lVar4 + 0xb8) != iVar3) {
            `TCheckedPointerIterator<UNiagaraDataInterface_*_const,int,0>::operator!='::__l2::
            <lambda_1>::operator()(local_res8);
          }
          if (plVar6 == plVar1) break;
          if (((longlong *)*plVar6 != (longlong *)0x0) &&
             (cVar5 = (**(code **)(*(longlong *)*plVar6 + 0x398))(), cVar5 != '\0')) {
            return true;
          }
          plVar6 = plVar6 + 1;
        }
      }
      pFVar8 = pFVar8 + 0x10;
    }
  }
  return false;
}

// RequiresEarlyViewData @ 1493f6870

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall FNiagaraSystemInstance::RequiresEarlyViewData(FNiagaraSystemInstance *this)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  longlong *plVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  undefined1 local_res8 [8];
  
  if (this->bHasGPUEmitters != '\0') {
    iVar2 = (this->Emitters).ArrayNum;
    pFVar8 = (this->Emitters).AllocatorInstance.Data;
    pFVar7 = pFVar8 + (longlong)iVar2 * 0x10;
    while( true ) {
      if ((this->Emitters).ArrayNum != iVar2) {
        `TCheckedPointerIterator<TSharedRef<FNiagaraEmitterInstance,1>_const_,int,0>::operator!='::
        __l2::<lambda_1>::operator()(local_res8);
      }
      if (pFVar8 == pFVar7) break;
      lVar4 = *(longlong *)(*(longlong *)pFVar8 + 0x18);
      if (lVar4 != 0) {
        plVar6 = *(longlong **)(lVar4 + 0xb0);
        iVar3 = *(int *)(lVar4 + 0xb8);
        plVar1 = plVar6 + iVar3;
        while( true ) {
          if (*(int *)(lVar4 + 0xb8) != iVar3) {
            `TCheckedPointerIterator<UNiagaraDataInterface_*_const,int,0>::operator!='::__l2::
            <lambda_1>::operator()(local_res8);
          }
          if (plVar6 == plVar1) break;
          if (((longlong *)*plVar6 != (longlong *)0x0) &&
             (cVar5 = (**(code **)(*(longlong *)*plVar6 + 0x3a0))(), cVar5 != '\0')) {
            return true;
          }
          plVar6 = plVar6 + 1;
        }
      }
      pFVar8 = pFVar8 + 0x10;
    }
  }
  return false;
}

// RequiresGlobalDistanceField @ 1493f6960

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall FNiagaraSystemInstance::RequiresGlobalDistanceField(FNiagaraSystemInstance *this)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  longlong *plVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  undefined1 local_res8 [8];
  
  if (this->bHasGPUEmitters != '\0') {
    iVar2 = (this->Emitters).ArrayNum;
    pFVar8 = (this->Emitters).AllocatorInstance.Data;
    pFVar7 = pFVar8 + (longlong)iVar2 * 0x10;
    while( true ) {
      if ((this->Emitters).ArrayNum != iVar2) {
        `TCheckedPointerIterator<TSharedRef<FNiagaraEmitterInstance,1>_const_,int,0>::operator!='::
        __l2::<lambda_1>::operator()(local_res8);
      }
      if (pFVar8 == pFVar7) break;
      lVar4 = *(longlong *)(*(longlong *)pFVar8 + 0x18);
      if (lVar4 != 0) {
        plVar6 = *(longlong **)(lVar4 + 0xb0);
        iVar3 = *(int *)(lVar4 + 0xb8);
        plVar1 = plVar6 + iVar3;
        while( true ) {
          if (*(int *)(lVar4 + 0xb8) != iVar3) {
            `TCheckedPointerIterator<UNiagaraDataInterface_*_const,int,0>::operator!='::__l2::
            <lambda_1>::operator()(local_res8);
          }
          if (plVar6 == plVar1) break;
          if (((longlong *)*plVar6 != (longlong *)0x0) &&
             (cVar5 = (**(code **)(*(longlong *)*plVar6 + 0x390))(), cVar5 != '\0')) {
            return true;
          }
          plVar6 = plVar6 + 1;
        }
      }
      pFVar8 = pFVar8 + 0x10;
    }
  }
  return false;
}

// RequiresRayTracingScene @ 1493f6a50

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall FNiagaraSystemInstance::RequiresRayTracingScene(FNiagaraSystemInstance *this)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  longlong *plVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  undefined1 local_res8 [8];
  
  if (this->bHasGPUEmitters != '\0') {
    iVar2 = (this->Emitters).ArrayNum;
    pFVar8 = (this->Emitters).AllocatorInstance.Data;
    pFVar7 = pFVar8 + (longlong)iVar2 * 0x10;
    while( true ) {
      if ((this->Emitters).ArrayNum != iVar2) {
        `TCheckedPointerIterator<TSharedRef<FNiagaraEmitterInstance,1>_const_,int,0>::operator!='::
        __l2::<lambda_1>::operator()(local_res8);
      }
      if (pFVar8 == pFVar7) break;
      lVar4 = *(longlong *)(*(longlong *)pFVar8 + 0x18);
      if (lVar4 != 0) {
        plVar6 = *(longlong **)(lVar4 + 0xb0);
        iVar3 = *(int *)(lVar4 + 0xb8);
        plVar1 = plVar6 + iVar3;
        while( true ) {
          if (*(int *)(lVar4 + 0xb8) != iVar3) {
            `TCheckedPointerIterator<UNiagaraDataInterface_*_const,int,0>::operator!='::__l2::
            <lambda_1>::operator()(local_res8);
          }
          if (plVar6 == plVar1) break;
          if (((longlong *)*plVar6 != (longlong *)0x0) &&
             (cVar5 = (**(code **)(*(longlong *)*plVar6 + 0x3a8))(), cVar5 != '\0')) {
            return true;
          }
          plVar6 = plVar6 + 1;
        }
      }
      pFVar8 = pFVar8 + 0x10;
    }
  }
  return false;
}

// RequiresViewUniformBuffer @ 1493f6b40

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall FNiagaraSystemInstance::RequiresViewUniformBuffer(FNiagaraSystemInstance *this)

{
  int iVar1;
  bool bVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res8 [8];
  
  if (this->bHasGPUEmitters == '\0') {
LAB_1493f6bac:
    bVar2 = false;
  }
  else {
    iVar1 = (this->Emitters).ArrayNum;
    pFVar3 = (this->Emitters).AllocatorInstance.Data;
    pFVar4 = pFVar3 + (longlong)iVar1 * 0x10;
    while( true ) {
      if ((this->Emitters).ArrayNum != iVar1) {
        `TCheckedPointerIterator<TSharedRef<FNiagaraEmitterInstance,1>_const_,int,0>::operator!='::
        __l2::<lambda_1>::operator()(local_res8);
      }
      if (pFVar3 == pFVar4) goto LAB_1493f6bac;
      if ((*(longlong *)(*(longlong *)pFVar3 + 0x18) != 0) &&
         ((*(byte *)(*(longlong *)pFVar3 + 0xd0) & 8) != 0)) break;
      pFVar3 = pFVar3 + 0x10;
    }
    bVar2 = true;
  }
  return bVar2;
}

// Reset @ 1493f6cd0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall FNiagaraSystemInstance::Reset(FNiagaraSystemInstance *this,EResetMode param_1)

{
  int *piVar1;
  FName FVar2;
  FNiagaraSystemSimulation *pFVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  FName *pFVar8;
  FThreadSafeStaticStat<FStat_STAT_NiagaraSystemReset> FVar9;
  TStatId TVar10;
  UObject *pUVar11;
  TVector<float> *pTVar12;
  FNiagaraEmitterInstanceImpl *this_00;
  FNiagaraSystemGpuComputeProxy *pFVar13;
  FNiagaraSystemGpuComputeProxy *pFVar14;
  uint uVar15;
  FNameEntryId FVar16;
  FName FVar17;
  FScriptContainerElement *pFVar18;
  EResetMode EVar19;
  FScriptContainerElement *pFVar20;
  byte bVar21;
  float fVar22;
  uint local_res8;
  uint uStackX_c;
  byte local_res10;
  undefined1 local_res18 [8];
  FColor_u_0 local_res20 [2];
  FName local_d8;
  byte local_d0;
  FName local_c8;
  FName local_c0;
  FName local_b0;
  FName local_a8 [2];
  TVector<double>_u_0 local_98;
  TVector<float> local_78;
  double local_68;
  double dStack_60;
  double local_58;
  
  bVar21 = 0;
  FVar9 = StatPtr_STAT_NiagaraSystemReset;
  if (StatPtr_STAT_NiagaraSystemReset == (FThreadSafeStaticStat<FStat_STAT_NiagaraSystemReset>)0x0)
  {
    pFVar8 = ::FName::FName(&local_b0,"STAT_NiagaraSystemReset");
    FVar9 = (FThreadSafeStaticStat<FStat_STAT_NiagaraSystemReset>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraSystemReset,*pFVar8,
                       L"System Reset [GT]","STATGROUP_Niagara","STATCAT_Niagara",L"Niagara",true,
                       true,ST_int64,true,false,MCR_Invalid);
  }
  FVar2 = *(FName *)FVar9;
  local_c0.ComparisonIndex.Value = 0;
  local_c0.Number = 0;
  local_res10 = 0;
  FVar16 = FVar2.ComparisonIndex.Value;
  uVar15 = FVar2.Number;
  if ((FVar16.Value != 0) || (FVar17 = local_c0, uVar15 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res20[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res20[0]._s_0,(char *)*(FName *)((longlong)FVar9 + 0x10));
      bVar21 = 1;
      local_res10 = 1;
      if (-1 < CpuChannel->Enabled) {
        local_c8.ComparisonIndex.Value = FVar16.Value;
        local_c8.Number = uVar15;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_c8,(wchar_t *)*(FName *)((longlong)FVar9 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSystemInstance.cpp"
                   ,0x310);
        bVar21 = 3;
        local_res10 = 3;
      }
    }
    FVar17 = local_c0;
    if (FThreadStats::bPrimaryEnable != false) {
      local_res8 = FVar16.Value;
      uStackX_c = uVar15;
      FThreadStats::AddMessage(FVar2,CycleScopeStart);
      local_res10 = bVar21 | 4;
      FVar17 = FVar2;
    }
  }
  TVar10.StatIdPtr = (TStatIdData *)StatPtr_STAT_NiagaraSystemReset;
  if (StatPtr_STAT_NiagaraSystemReset == (FThreadSafeStaticStat<FStat_STAT_NiagaraSystemReset>)0x0)
  {
    pFVar8 = ::FName::FName(local_a8,"STAT_NiagaraSystemReset");
    TVar10.StatIdPtr =
         FThreadSafeStaticStatBase::DoSetup
                   ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraSystemReset,*pFVar8,
                    L"System Reset [GT]","STATGROUP_Niagara","STATCAT_Niagara",L"Niagara",true,true,
                    ST_int64,true,false,MCR_Invalid);
  }
  FScopeCycleCounterUObject::FScopeCycleCounterUObject
            ((FScopeCycleCounterUObject *)&local_d8,(UObjectBaseUtility *)this->System,TVar10);
  if (param_1 == None) goto LAB_1493f73c4;
  WaitForConcurrentTickAndFinalize(this,false);
  this->LastRenderTime = (float)this->World->TimeSeconds;
  SetPaused(this,false);
  pFVar3 = (this->SystemSimulation).Object;
  EVar19 = ReInit;
  if (pFVar3 != (FNiagaraSystemSimulation *)0x0) {
    FNiagaraSystemSimulation::RemoveInstance(pFVar3,this);
    EVar19 = param_1;
  }
  pFVar14 = (this->SystemGpuComputeProxy).Ptr;
  if (this->ActualExecutionState == Disabled) {
    EVar19 = ReInit;
  }
  if ((pFVar14 != (FNiagaraSystemGpuComputeProxy *)0x0) &&
     ((this->ActualExecutionState - Complete < 2 || (EVar19 != ResetSystem)))) {
    (this->SystemGpuComputeProxy).Ptr = (FNiagaraSystemGpuComputeProxy *)0x0;
    FNiagaraSystemGpuComputeProxy::RemoveFromRenderThread
              (pFVar14,(this->ComputeDispatchInterfacePtr).Object,true);
  }
  *(undefined8 *)&(this->LWCTile).field0_0x0 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_
  ;
  (this->LWCTile).field0_0x0._s_0.Z = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  bVar6 = FWeakObjectPtr::IsValid(&(this->AttachComponent).WeakPtr);
  if (((bVar6) && (this->System->bSupportLargeWorldCoordinates != 0)) &&
     (this->System->bLwcEnabledSettingCached != 0)) {
    pUVar11 = FWeakObjectPtr::Get(&(this->AttachComponent).WeakPtr);
    local_98._s_0.X = (double)*(undefined8 *)&pUVar11[0xd].field_0x8;
    local_98._s_0.Y = (double)*(undefined8 *)&pUVar11[0xd].field_0x10;
    local_98._s_0.Z = (double)*(undefined8 *)&pUVar11[0xd].field_0x18;
    local_68 = local_98._s_0.X;
    dStack_60 = local_98._s_0.Y;
    local_58 = local_98._s_0.Z;
    pTVar12 = TLargeWorldRenderScalar<double>::GetTileFor
                        (&local_78,(TVector<double> *)&local_98._s_0);
    *(undefined8 *)&(this->LWCTile).field0_0x0 = *(undefined8 *)&pTVar12->field0_0x0;
    (this->LWCTile).field0_0x0._s_0.Z = (pTVar12->field0_0x0)._s_0.Z;
  }
  if ((this->ActualExecutionState == Complete) || (this->ActualExecutionState == Disabled)) {
    bVar6 = true;
  }
  else {
    bVar6 = false;
  }
  if (EVar19 == ResetSystem) {
    ResetInternal(this,false);
  }
  else {
    if (EVar19 == ResetAll) {
      ResetInternal(this,true);
    }
    else {
      if (EVar19 != ReInit) goto LAB_1493f6ffb;
      ReInitInternal(this);
    }
    bVar6 = this->ActualExecutionState != Disabled;
  }
LAB_1493f6ffb:
  iVar7 = (this->Emitters).ArrayNum;
  bVar5 = false;
  pFVar18 = (this->Emitters).AllocatorInstance.Data;
  pFVar20 = pFVar18 + (longlong)iVar7 * 0x10;
  while( true ) {
    if ((this->Emitters).ArrayNum != iVar7) {
      local_res8 = local_res8 & 0xffffff00;
      `TCheckedPointerIterator<TSharedRef<FNiagaraEmitterInstance,1>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(&local_res8);
    }
    if (pFVar18 == pFVar20) goto LAB_1493f704d;
    if ((*(int *)(*(longlong *)pFVar18 + 0xd4) != 3) && (*(int *)(*(longlong *)pFVar18 + 0xd4) != 4)
       ) break;
    pFVar18 = pFVar18 + 0x10;
  }
  bVar5 = true;
LAB_1493f704d:
  if ((this->RequestedExecutionState != Active) && (this->RequestedExecutionState != Disabled)) {
    this->RequestedExecutionState = Active;
  }
  if (bVar5) {
    if (bVar6) {
      ResetParameters(this);
      BindParameters(this);
    }
    if ((this->ActualExecutionState != Active) && (this->ActualExecutionState != Disabled)) {
      this->bNotifyOnCompletion = '\x01';
      this->ActualExecutionState = Active;
      iVar7 = (this->Emitters).ArrayNum;
      pFVar18 = (this->Emitters).AllocatorInstance.Data;
      pFVar20 = pFVar18 + (longlong)iVar7 * 0x10;
      while( true ) {
        if ((this->Emitters).ArrayNum != iVar7) {
          local_res18[0] = 0;
          `TCheckedPointerIterator<TSharedRef<FNiagaraEmitterInstance,1>,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_res18);
        }
        if (pFVar18 == pFVar20) break;
        this_00 = (FNiagaraEmitterInstanceImpl *)(**(code **)(**(longlong **)pFVar18 + 0x68))();
        if (this_00 != (FNiagaraEmitterInstanceImpl *)0x0) {
          FNiagaraEmitterInstanceImpl::SetExecutionState(this_00,Active);
        }
        pFVar18 = pFVar18 + 0x10;
      }
    }
    if (bVar6) {
      InitDataInterfaces(this);
    }
    if ((this->ActualExecutionState != Complete) && (this->ActualExecutionState != Disabled)) {
      if ((this->bHasGPUEmitters != '\0') &&
         ((this->SystemGpuComputeProxy).Ptr == (FNiagaraSystemGpuComputeProxy *)0x0)) {
        pFVar13 = ::operator_new(0x60);
        pFVar14 = (FNiagaraSystemGpuComputeProxy *)0x0;
        if (pFVar13 != (FNiagaraSystemGpuComputeProxy *)0x0) {
          pFVar14 = FNiagaraSystemGpuComputeProxy::FNiagaraSystemGpuComputeProxy(pFVar13,this);
        }
        pFVar13 = (this->SystemGpuComputeProxy).Ptr;
        if ((pFVar13 != pFVar14) &&
           ((this->SystemGpuComputeProxy).Ptr = pFVar14,
           pFVar13 != (FNiagaraSystemGpuComputeProxy *)0x0)) {
          FNiagaraSystemGpuComputeProxy::_scalar_deleting_destructor_(pFVar13,1);
        }
        FNiagaraSystemGpuComputeProxy::AddToRenderThread
                  ((this->SystemGpuComputeProxy).Ptr,(this->ComputeDispatchInterfacePtr).Object);
      }
      iVar7 = this->CachedRandomSeed;
      if (iVar7 == -1) {
        if (this->System->bDeterminism == false) {
          iVar7 = rand();
        }
        else {
          iVar7 = this->System->RandomSeed;
        }
      }
      else {
        this->CachedRandomSeed = -1;
      }
      this->RandomSeed = iVar7;
      if (((this->SystemSimulation).Object == (FNiagaraSystemSimulation *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar3 = (this->SystemSimulation).Object;
      bVar6 = IsInGameThread();
      if ((!bVar6) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsInGameThread()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSystemSimulation.cpp"
                             ,0x956,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if ((this->SystemInstanceIndex != -1) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Instance->SystemInstanceIndex == INDEX_NONE",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSystemSimulation.cpp"
                             ,0x957,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      FNiagaraSystemSimulation::WaitForConcurrentTickComplete(pFVar3,false);
      FNiagaraSystemSimulation::SetInstanceState(pFVar3,this,PendingSpawn);
      if (pFVar3->System != (UNiagaraSystem *)0x0) {
        piVar1 = &pFVar3->System->ActiveInstances;
        *piVar1 = *piVar1 + 1;
      }
      pUVar11 = FWeakObjectPtr::Get(&(pFVar3->EffectType).WeakPtr);
      if (pUVar11 != (UObject *)0x0) {
        *(int *)&pUVar11[2].field_0x20 = *(int *)&pUVar11[2].field_0x20 + 1;
        *(uint *)&pUVar11[2].field_0x24 = *(uint *)&pUVar11[2].field_0x24 | 1;
      }
      if (((pFVar3->MainDataSet).CurrentData == (FNiagaraDataBuffer *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("CurrentData",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataSet.h"
                             ,0x158,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if ((pFVar3->SystemInstancesPerState[4].ArrayNum !=
           ((pFVar3->MainDataSet).CurrentData)->NumInstances) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("GetSystemInstances(ENiagaraSystemInstanceState::Running).Num() == MainDataSet.GetCurrentDataChecked().GetNumInstances()"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSystemSimulation.cpp"
                             ,0x968,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (((pFVar3->PausedDataSet).CurrentData == (FNiagaraDataBuffer *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("CurrentData",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataSet.h"
                             ,0x158,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if ((pFVar3->SystemInstancesPerState[5].ArrayNum !=
           ((pFVar3->PausedDataSet).CurrentData)->NumInstances) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("GetSystemInstances(ENiagaraSystemInstanceState::Paused).Num() == PausedDataSet.GetCurrentDataChecked().GetNumInstances()"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSystemSimulation.cpp"
                             ,0x96b,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar7 = this->WarmupTickCount;
      fVar22 = this->WarmupTickDelta;
      if (iVar7 == -1) {
        iVar7 = this->System->WarmupTickCount;
        fVar22 = this->System->WarmupTickDelta;
      }
      if ((0 < iVar7) && (__real_322bcc77 < fVar22)) {
        AdvanceSimulation(this,iVar7,fVar22);
        this->Age = 0.0;
        this->TickCount = 0;
      }
    }
  }
  else {
    if ((this->ActualExecutionState != Complete) && (this->ActualExecutionState != Disabled)) {
      this->ActualExecutionState = Complete;
    }
    Complete(this,true);
  }
LAB_1493f73c4:
  if ((local_d0 & 1) != 0) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if ((local_d0 & 2) != 0) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((local_d0 & 4) != 0) {
    FThreadStats::AddMessage(local_d8,CycleScopeEnd);
  }
  bVar21 = local_res10;
  local_d0 = 0;
  if ((local_res10 & 1) != 0) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if ((bVar21 & 2) != 0) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((bVar21 & 4) != 0) {
    FThreadStats::AddMessage(FVar17,CycleScopeEnd);
  }
  return;
}

// ResetInternal @ 1493f7440

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall FNiagaraSystemInstance::ResetInternal(FNiagaraSystemInstance *this,bool param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  byte bVar4;
  UObject *this_00;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  undefined1 local_res8 [8];
  FName local_res18;
  FString local_38;
  FString local_28;
  
  if ((this->SystemInstanceIndex != -1) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("SystemInstanceIndex == INDEX_NONE",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSystemInstance.cpp"
                         ,0x3ac,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (((this->FinalizeRef).TaskEntry != (FNiagaraSystemInstance **)0x0) &&
     (bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_2996346430399970387>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSystemInstance.cpp"
                         ,0x3ad,"!FinalizeRef.IsPending()"), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  this->Age = 0.0;
  this->TickCount = 0;
  this->CachedDeltaSeconds = 0.0;
  InitSystemState(this);
  bVar4 = this->field_0x841;
  if (this->bLODDistanceIsOverridden == '\0') {
    bVar4 = bVar4 & 0xfb;
  }
  this->TotalGPUParamSize = 0;
  this->ActiveGPUEmitterCount = 0;
  this->field_0x841 = bVar4 & 0xdf;
  if ((((this->System != (UNiagaraSystem *)0x0) &&
       (((uint)this->System->_padding_ >> 0x1e & 1) == 0)) &&
      (this->ActualExecutionState != Disabled)) && (bVar3 = IsReadyToRun(this), bVar3)) {
    if (this->System->bIsValidCached == 0) {
      if (this->RequestedExecutionState != Disabled) {
        this->ActualExecutionState = Disabled;
        Cleanup(this);
        this->RequestedExecutionState = Disabled;
      }
      if (2 < (byte)LogNiagara._0_1_) {
        this_00 = FWeakObjectPtr::Get(&(this->AttachComponent).WeakPtr);
        if ((this_00 == (UObject *)0x0) || (*(longlong *)&this_00->field_0x10 == 0)) {
          ::FString::FString(&local_38,L"None");
        }
        else {
          UObjectBaseUtility::GetFullName
                    ((UObjectBaseUtility *)this_00,&local_38,(UObject *)0x0,None);
        }
        local_res18 = (FName)this->System->_padding_;
        ::FName::ToString(&local_res18,&local_28);
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
        if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_28.Data.AllocatorInstance.Data);
        }
        if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.Data.AllocatorInstance.Data);
          return;
        }
      }
    }
    else {
      pFVar5 = (this->Emitters).AllocatorInstance.Data;
      iVar1 = (this->Emitters).ArrayNum;
      pFVar6 = pFVar5 + (longlong)iVar1 * 0x10;
      while( true ) {
        if ((this->Emitters).ArrayNum != iVar1) {
          `TCheckedPointerIterator<TSharedRef<FNiagaraEmitterInstance,1>,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_res8);
        }
        if (pFVar5 == pFVar6) break;
        (**(code **)(**(longlong **)pFVar5 + 0x10))(*(longlong **)pFVar5,param_1);
        pFVar5 = pFVar5 + 0x10;
      }
    }
  }
  return;
}

// ResetParameters @ 1493f7690

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall FNiagaraSystemInstance::ResetParameters(FNiagaraSystemInstance *this)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  undefined8 uVar5;
  int iVar6;
  FNiagaraOwnerParameters *pFVar7;
  FNiagaraOwnerParameters *pFVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 auStackY_2a8 [32];
  FNiagaraOwnerParameters local_238;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_2a8;
  if ((this->System != (UNiagaraSystem *)0x0) && (((uint)this->System->_padding_ >> 0x1e & 1) == 0))
  {
    this->CurrentFrameIndex = '\x01';
    this->ParametersValid = '\0';
    this->GlobalParameters[0].WorldDeltaTime = 0.0;
    this->GlobalParameters[0].EngineDeltaTime = 0.0;
    this->GlobalParameters[0].EngineInvDeltaTime = 0.0;
    this->GlobalParameters[0].EngineTime = 0.0;
    this->GlobalParameters[0].EngineRealTime = 0.0;
    this->GlobalParameters[0].QualityLevel = 0;
    this->GlobalParameters[0]._Pad0 = 0;
    this->GlobalParameters[0]._Pad1 = 0;
    this->GlobalParameters[1].WorldDeltaTime = 0.0;
    this->GlobalParameters[1].EngineDeltaTime = 0.0;
    this->GlobalParameters[1].EngineInvDeltaTime = 0.0;
    this->GlobalParameters[1].EngineTime = 0.0;
    this->GlobalParameters[1].EngineRealTime = 0.0;
    this->GlobalParameters[1].QualityLevel = 0;
    this->GlobalParameters[1]._Pad0 = 0;
    this->GlobalParameters[1]._Pad1 = 0;
    this->SystemParameters[0].EngineTimeSinceRendered = 0.0;
    this->SystemParameters[0].EngineLodDistance = 0.0;
    this->SystemParameters[0].EngineLodDistanceFraction = 0.0;
    this->SystemParameters[0].EngineSystemAge = 0.0;
    this->SystemParameters[0].EngineExecutionState = 0;
    this->SystemParameters[0].EngineTickCount = 0;
    this->SystemParameters[0].EngineEmitterCount = 0;
    this->SystemParameters[0].EngineAliveEmitterCount = 0;
    this->SystemParameters[0].SignificanceIndex = 0;
    this->SystemParameters[0].RandomSeed = 0;
    this->SystemParameters[0].CurrentTimeStep = 0;
    this->SystemParameters[0].NumTimeSteps = 0;
    this->SystemParameters[0].TimeStepFraction = 0.0;
    this->SystemParameters[0].NumParticles = 0;
    this->SystemParameters[0]._Pad0 = 0;
    this->SystemParameters[0]._Pad1 = 0;
    this->SystemParameters[1].EngineTimeSinceRendered = 0.0;
    this->SystemParameters[1].EngineLodDistance = 0.0;
    this->SystemParameters[1].EngineLodDistanceFraction = 0.0;
    this->SystemParameters[1].EngineSystemAge = 0.0;
    this->SystemParameters[1].EngineExecutionState = 0;
    this->SystemParameters[1].EngineTickCount = 0;
    this->SystemParameters[1].EngineEmitterCount = 0;
    this->SystemParameters[1].EngineAliveEmitterCount = 0;
    this->SystemParameters[1].SignificanceIndex = 0;
    this->SystemParameters[1].RandomSeed = 0;
    this->SystemParameters[1].CurrentTimeStep = 0;
    this->SystemParameters[1].NumTimeSteps = 0;
    this->SystemParameters[1].TimeStepFraction = 0.0;
    this->SystemParameters[1].NumParticles = 0;
    this->SystemParameters[1]._Pad0 = 0;
    this->SystemParameters[1]._Pad1 = 0;
    memset(&local_238,0,0x200);
    pFVar7 = FNiagaraOwnerParameters::FNiagaraOwnerParameters(&local_238);
    lVar10 = 4;
    lVar9 = 4;
    pFVar8 = this->OwnerParameters;
    do {
      uVar5 = *(undefined8 *)((pFVar7->EngineLocalToWorld).M[0] + 2);
      *(undefined8 *)(pFVar8->EngineLocalToWorld).M[0] =
           *(undefined8 *)(pFVar7->EngineLocalToWorld).M[0];
      *(undefined8 *)((pFVar8->EngineLocalToWorld).M[0] + 2) = uVar5;
      uVar5 = *(undefined8 *)((pFVar7->EngineLocalToWorld).M[1] + 2);
      *(undefined8 *)(pFVar8->EngineLocalToWorld).M[1] =
           *(undefined8 *)(pFVar7->EngineLocalToWorld).M[1];
      *(undefined8 *)((pFVar8->EngineLocalToWorld).M[1] + 2) = uVar5;
      uVar5 = *(undefined8 *)((pFVar7->EngineLocalToWorld).M[2] + 2);
      *(undefined8 *)(pFVar8->EngineLocalToWorld).M[2] =
           *(undefined8 *)(pFVar7->EngineLocalToWorld).M[2];
      *(undefined8 *)((pFVar8->EngineLocalToWorld).M[2] + 2) = uVar5;
      uVar5 = *(undefined8 *)((pFVar7->EngineLocalToWorld).M[3] + 2);
      *(undefined8 *)(pFVar8->EngineLocalToWorld).M[3] =
           *(undefined8 *)(pFVar7->EngineLocalToWorld).M[3];
      *(undefined8 *)((pFVar8->EngineLocalToWorld).M[3] + 2) = uVar5;
      uVar5 = *(undefined8 *)((pFVar7->EngineWorldToLocal).M[0] + 2);
      *(undefined8 *)(pFVar8->EngineWorldToLocal).M[0] =
           *(undefined8 *)(pFVar7->EngineWorldToLocal).M[0];
      *(undefined8 *)((pFVar8->EngineWorldToLocal).M[0] + 2) = uVar5;
      uVar5 = *(undefined8 *)((pFVar7->EngineWorldToLocal).M[1] + 2);
      *(undefined8 *)(pFVar8->EngineWorldToLocal).M[1] =
           *(undefined8 *)(pFVar7->EngineWorldToLocal).M[1];
      *(undefined8 *)((pFVar8->EngineWorldToLocal).M[1] + 2) = uVar5;
      uVar5 = *(undefined8 *)((pFVar7->EngineWorldToLocal).M[2] + 2);
      *(undefined8 *)(pFVar8->EngineWorldToLocal).M[2] =
           *(undefined8 *)(pFVar7->EngineWorldToLocal).M[2];
      *(undefined8 *)((pFVar8->EngineWorldToLocal).M[2] + 2) = uVar5;
      uVar5 = *(undefined8 *)((pFVar7->EngineWorldToLocal).M[3] + 2);
      *(undefined8 *)(pFVar8->EngineWorldToLocal).M[3] =
           *(undefined8 *)(pFVar7->EngineWorldToLocal).M[3];
      *(undefined8 *)((pFVar8->EngineWorldToLocal).M[3] + 2) = uVar5;
      lVar9 = lVar9 + -1;
      pFVar7 = (FNiagaraOwnerParameters *)&pFVar7->EngineLocalToWorldTransposed;
      pFVar8 = (FNiagaraOwnerParameters *)&pFVar8->EngineLocalToWorldTransposed;
    } while (lVar9 != 0);
    memset(&local_238,0,0x200);
    pFVar7 = FNiagaraOwnerParameters::FNiagaraOwnerParameters(&local_238);
    pFVar8 = this->OwnerParameters + 1;
    do {
      uVar5 = *(undefined8 *)((pFVar7->EngineLocalToWorld).M[0] + 2);
      *(undefined8 *)(pFVar8->EngineLocalToWorld).M[0] =
           *(undefined8 *)(pFVar7->EngineLocalToWorld).M[0];
      *(undefined8 *)((pFVar8->EngineLocalToWorld).M[0] + 2) = uVar5;
      uVar5 = *(undefined8 *)((pFVar7->EngineLocalToWorld).M[1] + 2);
      *(undefined8 *)(pFVar8->EngineLocalToWorld).M[1] =
           *(undefined8 *)(pFVar7->EngineLocalToWorld).M[1];
      *(undefined8 *)((pFVar8->EngineLocalToWorld).M[1] + 2) = uVar5;
      uVar5 = *(undefined8 *)((pFVar7->EngineLocalToWorld).M[2] + 2);
      *(undefined8 *)(pFVar8->EngineLocalToWorld).M[2] =
           *(undefined8 *)(pFVar7->EngineLocalToWorld).M[2];
      *(undefined8 *)((pFVar8->EngineLocalToWorld).M[2] + 2) = uVar5;
      uVar5 = *(undefined8 *)((pFVar7->EngineLocalToWorld).M[3] + 2);
      *(undefined8 *)(pFVar8->EngineLocalToWorld).M[3] =
           *(undefined8 *)(pFVar7->EngineLocalToWorld).M[3];
      *(undefined8 *)((pFVar8->EngineLocalToWorld).M[3] + 2) = uVar5;
      uVar5 = *(undefined8 *)((pFVar7->EngineWorldToLocal).M[0] + 2);
      *(undefined8 *)(pFVar8->EngineWorldToLocal).M[0] =
           *(undefined8 *)(pFVar7->EngineWorldToLocal).M[0];
      *(undefined8 *)((pFVar8->EngineWorldToLocal).M[0] + 2) = uVar5;
      uVar5 = *(undefined8 *)((pFVar7->EngineWorldToLocal).M[1] + 2);
      *(undefined8 *)(pFVar8->EngineWorldToLocal).M[1] =
           *(undefined8 *)(pFVar7->EngineWorldToLocal).M[1];
      *(undefined8 *)((pFVar8->EngineWorldToLocal).M[1] + 2) = uVar5;
      uVar5 = *(undefined8 *)((pFVar7->EngineWorldToLocal).M[2] + 2);
      *(undefined8 *)(pFVar8->EngineWorldToLocal).M[2] =
           *(undefined8 *)(pFVar7->EngineWorldToLocal).M[2];
      *(undefined8 *)((pFVar8->EngineWorldToLocal).M[2] + 2) = uVar5;
      uVar5 = *(undefined8 *)((pFVar7->EngineWorldToLocal).M[3] + 2);
      *(undefined8 *)(pFVar8->EngineWorldToLocal).M[3] =
           *(undefined8 *)(pFVar7->EngineWorldToLocal).M[3];
      *(undefined8 *)((pFVar8->EngineWorldToLocal).M[3] + 2) = uVar5;
      lVar10 = lVar10 + -1;
      pFVar7 = (FNiagaraOwnerParameters *)&pFVar7->EngineLocalToWorldTransposed;
      pFVar8 = (FNiagaraOwnerParameters *)&pFVar8->EngineLocalToWorldTransposed;
    } while (lVar10 != 0);
    uVar3 = (this->Emitters).ArrayNum * 2;
    if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar3);
    }
    piVar1 = &(this->EmitterParameters).ArrayMax;
    piVar2 = &(this->EmitterParameters).ArrayNum;
    *piVar2 = 0;
    if (*piVar1 < (int)uVar3) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,0x10,uVar3,&(this->EmitterParameters).AllocatorInstance,0,piVar1);
    }
    iVar4 = (this->Emitters).ArrayNum * 2;
    iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x20,0x10,iVar4,&(this->EmitterParameters).AllocatorInstance,piVar2,piVar1);
    DefaultConstructItems<FNiagaraEmitterParameters,int>
              ((this->EmitterParameters).AllocatorInstance.Data + (longlong)iVar6 * 0x20,iVar4);
    *&(this->GatheredInstanceParameters).ComponentTrans.Rotation.XY.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
    *&(this->GatheredInstanceParameters).ComponentTrans.Rotation.ZW.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
    *&(this->GatheredInstanceParameters).ComponentTrans.Translation.XY.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
    *&(this->GatheredInstanceParameters).ComponentTrans.Translation.ZW.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
    *&(this->GatheredInstanceParameters).ComponentTrans.Scale3D.XY.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
    *&(this->GatheredInstanceParameters).ComponentTrans.Scale3D.ZW.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
    uVar5 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    (this->GatheredInstanceParameters).Velocity.field0_0x0._s_0.X =
         UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    (this->GatheredInstanceParameters).Velocity.field0_0x0._s_0.Y = (double)uVar5;
    uVar5 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    (this->GatheredInstanceParameters).DeltaSeconds = 0.0;
    (this->GatheredInstanceParameters).TimeSeconds = 0.0;
    (this->GatheredInstanceParameters).RealTimeSeconds = 0.0;
    (this->GatheredInstanceParameters).WorldDeltaSeconds = 0.0;
    (this->GatheredInstanceParameters).EmitterCount = 0;
    (this->GatheredInstanceParameters).NumAlive = 0;
    (this->GatheredInstanceParameters).RequestedExecutionState = Active;
    (this->GatheredInstanceParameters).Velocity.field0_0x0._s_0.Z = (double)uVar5;
  }
  return;
}

// ResolveUserDataInterfaceBindings @ 1493f7fb0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FNiagaraSystemInstance::ResolveUserDataInterfaceBindings(FNiagaraSystemInstance *this)

{
  FNiagaraScriptExecutionContext *pFVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  UObject *pUVar6;
  code *pcVar7;
  TArray<TObjectPtr<UNiagaraDataInterface>,TSizedDefaultAllocator<32>_> *pTVar8;
  bool bVar9;
  uint uVar10;
  ulonglong uVar11;
  FNiagaraEmitterInstanceImpl *this_00;
  FScriptContainerElement *pFVar12;
  int *piVar13;
  FNiagaraScriptExecutionContext *pFVar14;
  FScriptContainerElement *pFVar15;
  longlong *plVar16;
  undefined1 local_res10 [8];
  uint local_res18;
  TArray<TObjectPtr<UNiagaraDataInterface>,TSizedDefaultAllocator<32>_> *local_res20;
  TArrayView<FNiagaraScriptExecutionContext,int> local_60 [2];
  
  pFVar15 = (this->Emitters).AllocatorInstance.Data;
  local_res20 = &(this->InstanceParameters).DataInterfaces;
  local_res18 = (this->Emitters).ArrayNum;
  uVar11 = (ulonglong)(int)local_res18;
  pFVar12 = pFVar15 + uVar11 * 0x10;
  do {
    if ((this->Emitters).ArrayNum != (int)uVar11) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<TSharedRef<FNiagaraEmitterInstance,1>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res10);
    }
    if (pFVar15 == pFVar12) {
      return;
    }
    this_00 = (FNiagaraEmitterInstanceImpl *)(**(code **)(**(longlong **)pFVar15 + 0x68))();
    if (this_00 != (FNiagaraEmitterInstanceImpl *)0x0) {
      lVar5 = (this_00->SpawnExecContext)._padding_;
      if (lVar5 != 0) {
        iVar3 = *(int *)(lVar5 + 0x330);
        piVar13 = *(int **)(lVar5 + 0x328);
        if ((iVar3 < 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("InCount >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xeb,L""), bVar9)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        piVar2 = piVar13 + (longlong)iVar3 * 2;
        pTVar8 = local_res20;
        for (; local_res20 = pTVar8, piVar13 != piVar2; piVar13 = piVar13 + 2) {
          iVar3 = *piVar13;
          if ((iVar3 != -1) && (iVar3 < pTVar8->ArrayNum)) {
            uVar4 = piVar13[1];
            if ((uVar4 != 0xffffffff) && ((int)uVar4 < (int)(this_00->SpawnExecContext)._padding_))
            {
              if ((iVar3 < 0) &&
                 (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar9)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              pUVar6 = *(UObject **)((pTVar8->AllocatorInstance).Data + (longlong)iVar3 * 8);
              uVar10 = 0;
              if ((int)uVar4 < (int)(this_00->SpawnExecContext)._padding_) {
                uVar10 = ~uVar4 >> 0x1f;
              }
              if ((uVar10 == 0) &&
                 (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar9)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              lVar5 = (this_00->SpawnExecContext)._padding_;
              if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)
                 ) {
                UE::GC::MarkAsReachable(pUVar6);
              }
              *(UObject **)(lVar5 + (longlong)(int)uVar4 * 8) = pUVar6;
              plVar16 = &(this_00->SpawnExecContext)._padding_;
              *(uint *)plVar16 = (uint)*plVar16 | 2;
            }
          }
          pTVar8 = local_res20;
        }
      }
      lVar5 = (this_00->UpdateExecContext)._padding_;
      if (lVar5 != 0) {
        iVar3 = *(int *)(lVar5 + 0x330);
        piVar13 = *(int **)(lVar5 + 0x328);
        if ((iVar3 < 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("InCount >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xeb,L""), bVar9)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        piVar2 = piVar13 + (longlong)iVar3 * 2;
        pTVar8 = local_res20;
        for (; local_res20 = pTVar8, piVar13 != piVar2; piVar13 = piVar13 + 2) {
          iVar3 = *piVar13;
          if ((iVar3 != -1) && (iVar3 < pTVar8->ArrayNum)) {
            uVar4 = piVar13[1];
            if ((uVar4 != 0xffffffff) && ((int)uVar4 < (int)(this_00->UpdateExecContext)._padding_))
            {
              if ((iVar3 < 0) &&
                 (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar9)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              pUVar6 = *(UObject **)((pTVar8->AllocatorInstance).Data + (longlong)iVar3 * 8);
              uVar10 = 0;
              if ((int)uVar4 < (int)(this_00->UpdateExecContext)._padding_) {
                uVar10 = ~uVar4 >> 0x1f;
              }
              if ((uVar10 == 0) &&
                 (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar9)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              lVar5 = (this_00->UpdateExecContext)._padding_;
              if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)
                 ) {
                UE::GC::MarkAsReachable(pUVar6);
              }
              *(UObject **)(lVar5 + (longlong)(int)uVar4 * 8) = pUVar6;
              plVar16 = &(this_00->UpdateExecContext)._padding_;
              *(uint *)plVar16 = (uint)*plVar16 | 2;
            }
          }
          pTVar8 = local_res20;
        }
      }
      lVar5 = this_00->_padding_;
      if ((lVar5 != 0) && (*(UNiagaraScript **)(lVar5 + 0x60) != (UNiagaraScript *)0x0)) {
        `FNiagaraSystemInstance::ResolveUserDataInterfaceBindings'::__l2::<lambda_1>::operator()
                  (&local_res20,(FNiagaraParameterStore *)(lVar5 + 0x80),
                   *(UNiagaraScript **)(lVar5 + 0x60));
      }
      FNiagaraEmitterInstanceImpl::GetEventExecutionContexts(this_00,local_60);
      pFVar14 = local_60[0].DataPtr + local_60[0].ArrayNum;
      if (local_60[0].DataPtr != pFVar14) {
        plVar16 = &(local_60[0].DataPtr)->_padding_;
        do {
          lVar5 = plVar16[-0xd];
          if (lVar5 != 0) {
            iVar3 = *(int *)(lVar5 + 0x330);
            piVar13 = *(int **)(lVar5 + 0x328);
            if ((iVar3 < 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("InCount >= 0",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                   ,0xeb,L""), bVar9)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            piVar2 = piVar13 + (longlong)iVar3 * 2;
            pTVar8 = local_res20;
            for (; local_res20 = pTVar8, piVar13 != piVar2; piVar13 = piVar13 + 2) {
              iVar3 = *piVar13;
              if ((iVar3 != -1) && (iVar3 < pTVar8->ArrayNum)) {
                uVar4 = piVar13[1];
                if ((uVar4 != 0xffffffff) && ((int)uVar4 < (int)*plVar16)) {
                  if ((iVar3 < 0) &&
                     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar9)) {
                    pcVar7 = (code *)swi(3);
                    (*pcVar7)();
                    return;
                  }
                  pUVar6 = *(UObject **)((pTVar8->AllocatorInstance).Data + (longlong)iVar3 * 8);
                  uVar10 = 0;
                  if ((int)uVar4 < (int)*plVar16) {
                    uVar10 = ~uVar4 >> 0x1f;
                  }
                  if ((uVar10 == 0) &&
                     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar9)) {
                    pcVar7 = (code *)swi(3);
                    (*pcVar7)();
                    return;
                  }
                  lVar5 = plVar16[-1];
                  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                     (pUVar6 != (UObject *)0x0)) {
                    UE::GC::MarkAsReachable(pUVar6);
                  }
                  *(UObject **)(lVar5 + (longlong)(int)uVar4 * 8) = pUVar6;
                  *(uint *)(plVar16 + 9) = (uint)plVar16[9] | 2;
                }
              }
              pTVar8 = local_res20;
            }
          }
          pFVar1 = (FNiagaraScriptExecutionContext *)(plVar16 + 0x48);
          plVar16 = plVar16 + 0x56;
        } while (pFVar1 != pFVar14);
      }
    }
    pFVar15 = pFVar15 + 0x10;
    uVar11 = (ulonglong)local_res18;
  } while( true );
}

// SetActualExecutionState @ 1493f8f50

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FNiagaraSystemInstance::SetActualExecutionState
          (FNiagaraSystemInstance *this,ENiagaraExecutionState param_1)

{
  int iVar1;
  FNiagaraEmitterInstanceImpl *this_00;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res10 [8];
  
  if (((this->ActualExecutionState != param_1) && (this->ActualExecutionState != Disabled)) &&
     (this->ActualExecutionState = param_1, param_1 == Active)) {
    this->bNotifyOnCompletion = '\x01';
    pFVar2 = (this->Emitters).AllocatorInstance.Data;
    iVar1 = (this->Emitters).ArrayNum;
    pFVar3 = pFVar2 + (longlong)iVar1 * 0x10;
    while( true ) {
      if ((this->Emitters).ArrayNum != iVar1) {
        `TCheckedPointerIterator<TSharedRef<FNiagaraEmitterInstance,1>,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res10);
      }
      if (pFVar2 == pFVar3) break;
      this_00 = (FNiagaraEmitterInstanceImpl *)(**(code **)(**(longlong **)pFVar2 + 0x68))();
      if (this_00 != (FNiagaraEmitterInstanceImpl *)0x0) {
        FNiagaraEmitterInstanceImpl::SetExecutionState(this_00,Active);
      }
      pFVar2 = pFVar2 + 0x10;
    }
  }
  return;
}

// SetEmitterEnable @ 1493f9000

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraStatelessFeatureMask": Some values do not have unique names */

void __thiscall
FNiagaraSystemInstance::SetEmitterEnable(FNiagaraSystemInstance *this,FName param_1,bool param_2)

{
  int iVar1;
  bool bVar2;
  FNiagaraEmitterHandle *this_00;
  FName FVar3;
  UObject *this_01;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  FName local_res8;
  FName local_res10 [3];
  FString local_58;
  FString local_48;
  FString local_38;
  
  iVar1 = (this->Emitters).ArrayNum;
  pFVar4 = (this->Emitters).AllocatorInstance.Data;
  pFVar5 = pFVar4 + (longlong)iVar1 * 0x10;
  local_res10[0] = param_1;
  while( true ) {
    if ((this->Emitters).ArrayNum != iVar1) {
      `TCheckedPointerIterator<TSharedRef<FNiagaraEmitterInstance,1>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(&local_res8);
    }
    if (pFVar4 == pFVar5) break;
    this_00 = FNiagaraEmitterInstance::GetEmitterHandle(*(FNiagaraEmitterInstance **)pFVar4);
    FVar3 = FNiagaraEmitterHandle::GetName(this_00);
    if (*(FName *)FVar3 == local_res10[0]) {
      (**(code **)(**(longlong **)pFVar4 + 0x18))(*(longlong **)pFVar4,param_2);
      return;
    }
    pFVar4 = pFVar4 + 0x10;
  }
  bVar2 = FNiagaraUtilities::LogVerboseWarnings();
  if ((bVar2) && (2 < (byte)LogNiagara._0_1_)) {
    this_01 = FWeakObjectPtr::Get(&(this->AttachComponent).WeakPtr);
    if ((this_01 == (UObject *)0x0) || (*(longlong *)&this_01->field_0x10 == 0)) {
      ::FString::FString(&local_48,L"None");
    }
    else {
      UObjectBaseUtility::GetFullName((UObjectBaseUtility *)this_01,&local_48,(UObject *)0x0,None);
    }
    if (this->System == (UNiagaraSystem *)0x0) {
      ::FString::FString(&local_58,L"None");
    }
    else {
      local_res8 = (FName)this->System->_padding_;
      ::FName::ToString(&local_res8,&local_58);
    }
    ::FName::ToString(local_res10,&local_38);
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// SetEmitterFixedBounds @ 1493f91c0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraStatelessFeatureMask": Some values do not have unique names */

void __thiscall
FNiagaraSystemInstance::SetEmitterFixedBounds
          (FNiagaraSystemInstance *this,FName param_1,TBox<double> *param_2)

{
  int iVar1;
  FNiagaraEmitterHandle *this_00;
  FName FVar2;
  UObject *this_01;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  FName local_res8;
  FName local_res10 [3];
  FString local_58;
  FString local_48;
  FString local_38;
  
  iVar1 = (this->Emitters).ArrayNum;
  pFVar3 = (this->Emitters).AllocatorInstance.Data;
  pFVar4 = pFVar3 + (longlong)iVar1 * 0x10;
  local_res10[0] = param_1;
  while( true ) {
    if ((this->Emitters).ArrayNum != iVar1) {
      `TCheckedPointerIterator<TSharedRef<FNiagaraEmitterInstance,1>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(&local_res8);
    }
    if (pFVar3 == pFVar4) break;
    this_00 = FNiagaraEmitterInstance::GetEmitterHandle(*(FNiagaraEmitterInstance **)pFVar3);
    FVar2 = FNiagaraEmitterHandle::GetName(this_00);
    if (*(FName *)FVar2 == local_res10[0]) {
      FNiagaraEmitterInstance::SetFixedBounds(*(FNiagaraEmitterInstance **)pFVar3,param_2);
      return;
    }
    pFVar3 = pFVar3 + 0x10;
  }
  if (2 < (byte)LogNiagara._0_1_) {
    this_01 = FWeakObjectPtr::Get(&(this->AttachComponent).WeakPtr);
    if ((this_01 == (UObject *)0x0) || (*(longlong *)&this_01->field_0x10 == 0)) {
      ::FString::FString(&local_48,L"None");
    }
    else {
      UObjectBaseUtility::GetFullName((UObjectBaseUtility *)this_01,&local_48,(UObject *)0x0,None);
    }
    if (this->System == (UNiagaraSystem *)0x0) {
      ::FString::FString(&local_58,L"None");
    }
    else {
      local_res8 = (FName)this->System->_padding_;
      ::FName::ToString(&local_res8,&local_58);
    }
    ::FName::ToString(local_res10,&local_38);
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// SetForceSolo @ 1493f9370

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall FNiagaraSystemInstance::SetForceSolo(FNiagaraSystemInstance *this,bool param_1)

{
  if (this->bForceSolo != param_1) {
    this->field_0x840 = this->field_0x840 & 0xf7 | param_1 << 3;
    SetSolo(this,param_1);
    return;
  }
  return;
}

// SetGpuComputeDebug @ 1493f93b0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FNiagaraSystemInstance::SetGpuComputeDebug(FNiagaraSystemInstance *this,bool param_1)

{
  return;
}

// SetPaused @ 1493f9bb0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall FNiagaraSystemInstance::SetPaused(FNiagaraSystemInstance *this,bool param_1)

{
  ENiagaraSystemInstanceState EVar1;
  TReferenceControllerBase<1> *pTVar2;
  FNiagaraSystemSimulation *this_00;
  code *pcVar3;
  bool bVar4;
  
  if ((this->SystemInstanceState == PendingSpawnPaused) || (this->SystemInstanceState == Paused)) {
    bVar4 = true;
  }
  else {
    bVar4 = false;
  }
  if ((param_1 != bVar4) &&
     (WaitForConcurrentTickAndFinalize(this,false), this->SystemInstanceIndex != -1)) {
    pTVar2 = (this->SystemSimulation).SharedReferenceCount.ReferenceController;
    this_00 = (this->SystemSimulation).Object;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    if (this_00 != (FNiagaraSystemSimulation *)0x0) {
      bVar4 = IsInGameThread();
      if (param_1) {
        if ((!bVar4) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsInGameThread()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSystemSimulation.cpp"
                               ,0x970,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        FNiagaraSystemSimulation::WaitForInstancesTickComplete(this_00,false);
        EVar1 = this->SystemInstanceState;
        if (EVar1 == Running) {
          FNiagaraSystemSimulation::SetInstanceState(this_00,this,Paused);
          return;
        }
        if (EVar1 == PendingSpawn) {
          FNiagaraSystemSimulation::SetInstanceState(this_00,this,PendingSpawnPaused);
          return;
        }
        if (EVar1 != None) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Instance->SystemInstanceState == ENiagaraSystemInstanceState::None",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSystemSimulation.cpp"
                             ,0x980,L"");
          if (!bVar4) {
            return;
          }
code_r0x0001493f9d7b:
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      else {
        if ((!bVar4) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsInGameThread()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSystemSimulation.cpp"
                               ,0x986,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        FNiagaraSystemSimulation::WaitForInstancesTickComplete(this_00,false);
        EVar1 = this->SystemInstanceState;
        if (EVar1 == Paused) {
          FNiagaraSystemSimulation::SetInstanceState(this_00,this,Running);
          return;
        }
        if (EVar1 == PendingSpawnPaused) {
          FNiagaraSystemSimulation::SetInstanceState(this_00,this,PendingSpawn);
          return;
        }
        if ((EVar1 != None) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Instance->SystemInstanceState == ENiagaraSystemInstanceState::None",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSystemSimulation.cpp"
                               ,0x996,L""), bVar4)) goto code_r0x0001493f9d7b;
      }
    }
  }
  return;
}

// SetRequestedExecutionState @ 1493fa200

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FNiagaraSystemInstance::SetRequestedExecutionState
          (FNiagaraSystemInstance *this,ENiagaraExecutionState param_1)

{
  if ((this->RequestedExecutionState != param_1) && (this->RequestedExecutionState != Disabled)) {
    if (param_1 == Disabled) {
      this->ActualExecutionState = Disabled;
      Cleanup(this);
    }
    this->RequestedExecutionState = param_1;
  }
  return;
}

// SetSolo @ 1493fa250

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __thiscall FNiagaraSystemInstance::SetSolo(FNiagaraSystemInstance *this,bool param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  FNiagaraSystemInstance **ppFVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  ETickingGroup EVar10;
  FName *pFVar11;
  FThreadSafeStaticStat<FStat_STAT_NiagaraSystemSetSolo> FVar12;
  TReferenceControllerBase<1> *pTVar13;
  FNiagaraWorldManager *this_00;
  TSharedRef<FNiagaraSystemSimulation,1> *pTVar14;
  FThreadStats *this_01;
  FThreadStatsPool *this_02;
  uint uVar15;
  FNameEntryId FVar16;
  FName FVar17;
  TReferenceControllerBase<1> *pTVar18;
  FNiagaraSystemSimulation *pFVar19;
  FName local_res8;
  FColor_u_0 local_res10 [2];
  LARGE_INTEGER local_res18;
  FName local_res20;
  FStatMessage local_68;
  TSharedRef<FNiagaraSystemSimulation,1> local_58;
  
  pTVar18 = (TReferenceControllerBase<1> *)0x0;
  FVar12 = StatPtr_STAT_NiagaraSystemSetSolo;
  if (StatPtr_STAT_NiagaraSystemSetSolo ==
      (FThreadSafeStaticStat<FStat_STAT_NiagaraSystemSetSolo>)0x0) {
    pFVar11 = ::FName::FName(&local_res20,"STAT_NiagaraSystemSetSolo");
    FVar12 = (FThreadSafeStaticStat<FStat_STAT_NiagaraSystemSetSolo>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraSystemSetSolo,*pFVar11,
                        L"System SetSolo[GT] ","STATGROUP_Niagara","STATCAT_Niagara",L"Niagara",true
                        ,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar17 = *(FName *)FVar12;
  bVar6 = false;
  bVar8 = false;
  FVar16 = FVar17.ComparisonIndex.Value;
  uVar15 = FVar17.Number;
  if ((FVar16.Value == 0) && (uVar15 == 0)) {
LAB_1493fa3a7:
    bVar7 = false;
    FVar17.ComparisonIndex.Value = 0;
    FVar17.Number = 0;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10[0]._s_0,(char *)*(FName *)((longlong)FVar12 + 0x10));
      bVar6 = false;
      bVar8 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.ComparisonIndex.Value = FVar16.Value;
        local_res8.Number = uVar15;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res8,(wchar_t *)*(FName *)((longlong)FVar12 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSystemInstance.cpp"
                   ,0x1e2);
        bVar6 = true;
        bVar8 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_1493fa3a7;
    local_res18.s.LowPart = FVar16.Value;
    local_res18.s.HighPart = uVar15;
    FThreadStats::AddMessage(FVar17,CycleScopeStart);
    bVar7 = true;
  }
  if (this->bSolo == param_1) goto LAB_1493fa628;
  WaitForConcurrentTickDoNotFinalize(this,false);
  if ((this->SystemSimulation).Object != (FNiagaraSystemSimulation *)0x0) {
    if (param_1) {
      pTVar13 = ::operator_new(0x6d8);
      if (pTVar13 == (TReferenceControllerBase<1> *)0x0) {
        pFVar19 = (FNiagaraSystemSimulation *)&DAT_00000010;
LAB_1493fa465:
        if (((pFVar19->_padding_ == 0) || (*(longlong *)&pFVar19->_padding_ == 0)) ||
           (*(int *)(*(longlong *)&pFVar19->_padding_ + 8) < 1)) {
          if (pTVar18 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar18->SharedReferenceCount = (atomic<int>)((int)pTVar18->SharedReferenceCount + 1);
            UNLOCK();
          }
          pFVar19->_padding_ = (longlong)pFVar19;
          if (pTVar18 != *(TReferenceControllerBase<1> **)&pFVar19->_padding_) {
            if (pTVar18 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              pTVar18->WeakReferenceCount = (atomic<int>)((int)pTVar18->WeakReferenceCount + 1);
              UNLOCK();
            }
            plVar3 = *(longlong **)&pFVar19->_padding_;
            if (plVar3 != (longlong *)0x0) {
              LOCK();
              piVar1 = (int *)((longlong)plVar3 + 0xc);
              iVar2 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar2 == 1) {
                (**(code **)(*plVar3 + 8))(plVar3,1);
              }
            }
            *(TReferenceControllerBase<1> **)&pFVar19->_padding_ = pTVar18;
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar18);
        }
        if (pTVar18 != (TReferenceControllerBase<1> *)0x0) goto LAB_1493fa4ca;
      }
      else {
        pTVar13->SharedReferenceCount = (atomic<int>)0x1;
        pTVar13->WeakReferenceCount = (atomic<int>)0x1;
        pTVar13->_padding_ =
             (longlong)
             &
             ___7__TIntrusiveReferenceController_VFNiagaraSystemSimulation___00_SharedPointerInternals__6B_
        ;
        FNiagaraSystemSimulation::FNiagaraSystemSimulation
                  ((FNiagaraSystemSimulation *)(pTVar13 + 1));
        pFVar19 = (FNiagaraSystemSimulation *)(pTVar13 + 1);
        pTVar18 = pTVar13;
        if (pFVar19 != (FNiagaraSystemSimulation *)0x0) goto LAB_1493fa465;
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L"");
        if (bVar9) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
LAB_1493fa4ca:
        LOCK();
        pTVar18->SharedReferenceCount = (atomic<int>)((int)pTVar18->SharedReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar18);
      if ((pFVar19 == (FNiagaraSystemSimulation *)0x0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      FNiagaraSystemSimulation::Init(pFVar19,this->System,this->World,true,TG_MAX);
      if ((pFVar19 == (FNiagaraSystemSimulation *)0x0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      FNiagaraSystemSimulation::TransferInstance(pFVar19,this);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar18);
    }
    else {
      EVar10 = CalculateTickGroup(this);
      this_00 = GetWorldManager(this);
      pTVar14 = FNiagaraWorldManager::GetSystemSimulation(this_00,&local_58,EVar10,this->System);
      pTVar18 = (pTVar14->SharedReferenceCount).ReferenceController;
      pFVar19 = pTVar14->Object;
      if (pTVar18 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar18->SharedReferenceCount = (atomic<int>)((int)pTVar18->SharedReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_58.SharedReferenceCount.ReferenceController);
      if ((pFVar19 == (FNiagaraSystemSimulation *)0x0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      FNiagaraSystemSimulation::TransferInstance(pFVar19,this);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar18);
    }
  }
  ppFVar4 = (this->FinalizeRef).TaskEntry;
  this->field_0x840 = this->field_0x840 & 0xfb | param_1 << 2;
  if (ppFVar4 != (FNiagaraSystemInstance **)0x0) {
    FinalizeTick_GameThread(this,true);
  }
LAB_1493fa628:
  if (bVar8) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar7) && (FVar17 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_01 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_01 == (FThreadStats *)0x0) {
      this_02 = FThreadStatsPool::Get();
      this_01 = FThreadStatsPool::GetFromPool(this_02);
    }
    if (this_01->bWaitForExplicitFlush < this_01->ScopeCount) {
      local_68.NameAndInfo.Index = FVar17.ComparisonIndex.Value;
      local_68.NameAndInfo.Number = FVar17.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_res18);
      local_68.StatData.Pad[4] = '\0';
      local_68.StatData.Pad[5] = '\0';
      local_68.StatData.Pad[6] = '\0';
      local_68.StatData.Pad[7] = '\0';
      local_68.StatData.Pad[0] = local_res18.s.LowPart._0_1_;
      local_68.StatData.Pad[1] = local_res18.s.LowPart._1_1_;
      local_68.StatData.Pad[2] = local_res18.s.LowPart._2_1_;
      local_68.StatData.Pad[3] = local_res18.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_01,&local_68);
      piVar1 = &this_01->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_01,false,false);
        return;
      }
      if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_01,false,false);
      }
    }
  }
  return;
}

// SetTickBehavior @ 1493fa740

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FNiagaraSystemInstance::SetTickBehavior(FNiagaraSystemInstance *this,ENiagaraTickBehavior param_1)

{
  if (((this->System != (UNiagaraSystem *)0x0) && (((uint)this->System->_padding_ >> 0x1e & 1) == 0)
      ) && (this->System->bRequireCurrentFrameData == '\0')) {
    this->TickBehavior = ForceTickFirst;
    return;
  }
  this->TickBehavior = param_1;
  return;
}

// SetWarmupSettings @ 1493fb830

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FNiagaraSystemInstance::SetWarmupSettings(FNiagaraSystemInstance *this,int param_1,float param_2)

{
  this->WarmupTickDelta = param_2;
  this->WarmupTickCount = param_1;
  return;
}

// ShouldCaptureThisFrame @ 1493fba00

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall FNiagaraSystemInstance::ShouldCaptureThisFrame(FNiagaraSystemInstance *this)

{
  return (this->CurrentCapture).Object !=
         (TArray<TSharedPtr<FNiagaraScriptDebuggerInfo,1>,TSizedDefaultAllocator<32>_> *)0x0;
}

// SimCacheTickFinalize_GameThread @ 1493fba20

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FNiagaraSystemInstance::SimCacheTickFinalize_GameThread(FNiagaraSystemInstance *this)

{
  undefined1 *puVar1;
  int iVar2;
  FBaseGraphTask *pFVar3;
  FNiagaraSystemInstance **ppFVar4;
  atomic<int> *paVar5;
  longlong *plVar6;
  code *pcVar7;
  bool bVar8;
  char cVar9;
  FReadAccessScope *this_00;
  longlong *plVar10;
  FReadAccessScope local_38;
  FReadAccessScope local_20;
  
  pFVar3 = (this->ConcurrentTickGraphEvent).Reference;
  if ((pFVar3 != (FBaseGraphTask *)0x0) && (pFVar3->field_0xd0 == '\0')) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("ConcurrentTickGraphEvent == nullptr || ConcurrentTickGraphEvent->IsComplete()"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSystemInstance.cpp"
                       ,0x9a1,L"");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  pFVar3 = (this->ConcurrentTickGraphEvent).Reference;
  plVar10 = (longlong *)0x0;
  if (pFVar3 != (FBaseGraphTask *)0x0) {
    (this->ConcurrentTickGraphEvent).Reference = (FBaseGraphTask *)0x0;
    LOCK();
    puVar1 = &pFVar3->field_0x30;
    iVar2 = *(int *)puVar1;
    *(int *)puVar1 = *(int *)puVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (*(code *)**(undefined8 **)pFVar3)();
    }
  }
  pFVar3 = (this->ConcurrentTickBatchGraphEvent).Reference;
  if ((pFVar3 != (FBaseGraphTask *)0x0) && (pFVar3->field_0xd0 == '\0')) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("ConcurrentTickBatchGraphEvent == nullptr || ConcurrentTickBatchGraphEvent->IsComplete()"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSystemInstance.cpp"
                       ,0x9a3,L"");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  pFVar3 = (this->ConcurrentTickBatchGraphEvent).Reference;
  if (pFVar3 != (FBaseGraphTask *)0x0) {
    (this->ConcurrentTickBatchGraphEvent).Reference = (FBaseGraphTask *)0x0;
    LOCK();
    puVar1 = &pFVar3->field_0x30;
    iVar2 = *(int *)puVar1;
    *(int *)puVar1 = *(int *)puVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (*(code *)**(undefined8 **)pFVar3)();
    }
  }
  ppFVar4 = (this->FinalizeRef).TaskEntry;
  if (ppFVar4 != (FNiagaraSystemInstance **)0x0) {
    *ppFVar4 = (FNiagaraSystemInstance *)0x0;
    paVar5 = (this->FinalizeRef).DebugCounter;
    (this->FinalizeRef).TaskEntry = (FNiagaraSystemInstance **)0x0;
    LOCK();
    *paVar5 = (atomic<int>)((int)*paVar5 + -1);
    UNLOCK();
  }
  if (this->RequestedExecutionState == Complete) {
    Complete(this,false);
    return;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnPostTickDelegate,
             &local_38);
  if ((*(int *)&(this->OnPostTickDelegate).field_0x10 != 0) &&
     (plVar6 = *(longlong **)&(this->OnPostTickDelegate).field_0x8, plVar6 != (longlong *)0x0)) {
    cVar9 = (**(code **)(*plVar6 + 0x38))();
    if (cVar9 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_38);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnPostTickDelegate
                 ,&local_20);
      if (*(int *)&(this->OnPostTickDelegate).field_0x10 != 0) {
        plVar10 = *(longlong **)&(this->OnPostTickDelegate).field_0x8;
      }
      (**(code **)(*plVar10 + 0x60))(plVar10);
      this_00 = &local_20;
      goto LAB_1493fbbaa;
    }
  }
  this_00 = &local_38;
LAB_1493fbbaa:
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (this_00);
  return;
}

// SimCacheTick_GameThread @ 1493fc170

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FNiagaraSystemInstance::SimCacheTick_GameThread
          (FNiagaraSystemInstance *this,UNiagaraSimCache *param_1,float param_2,float param_3,
          TRefCountPtr<FBaseGraphTask> *param_4)

{
  int *piVar1;
  UNiagaraSystem *this_00;
  TAtomic<FMinimalName> TVar2;
  TStatIdData *pTVar3;
  FNiagaraUserRedirectionParameterStore *this_01;
  code *pcVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  double dVar12;
  double dVar13;
  undefined1 auVar14 [16];
  double dVar15;
  double dVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  double dVar19;
  double dVar20;
  bool bVar21;
  bool bVar22;
  bool bVar23;
  bool bVar24;
  bool bVar25;
  bool bVar26;
  bool bVar27;
  bool bVar28;
  bool bVar29;
  bool bVar30;
  bool bVar31;
  int iVar32;
  FName *pFVar33;
  FThreadSafeStaticStat<FStat_STAT_NiagaraSystemInst_ComponentTickGT> FVar34;
  FThreadSafeStaticStat<FStat_STAT_NiagaraSystemInst_TickGT> FVar35;
  UObject *pUVar36;
  FNiagaraSystemSimulation *this_02;
  FThreadStats *pFVar37;
  FThreadStatsPool *pFVar38;
  undefined4 uVar39;
  uint uVar40;
  int iVar41;
  uint uVar42;
  TWeakObjectPtr<USceneComponent,FWeakObjectPtr> *this_03;
  char *pcVar43;
  FColor_u_0 FVar44;
  FName FVar45;
  FName FVar46;
  FName FVar47;
  FNameEntryId FVar48;
  longlong lVar49;
  double dVar50;
  double dVar51;
  double dVar52;
  double dVar53;
  double dVar54;
  double dVar55;
  FNiagaraCrashReporterScope local_2a8 [8];
  FColor_u_0 local_2a0;
  uint uStack_29c;
  FLLMScope local_298;
  FColor_u_0 local_294;
  FColor_u_0 local_290 [2];
  FName local_288;
  FColor_u_0 local_280;
  uint local_27c;
  FName local_278;
  uint local_270;
  uint uStack_26c;
  FName local_268;
  FName local_258;
  FName local_248;
  LARGE_INTEGER local_238;
  FMemScope local_230;
  LARGE_INTEGER local_228;
  LARGE_INTEGER local_220;
  FStatMessage local_218;
  FStatMessage local_208;
  FStatMessage local_1f8;
  undefined4 local_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined4 local_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined4 local_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined4 local_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined4 local_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined4 local_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined1 local_188;
  TVector<double>_u_0 local_178;
  FName local_158;
  FName local_150 [4];
  TVector<double>_u_0 local_130;
  TVector<double>_u_0 local_118 [9];
  
  bVar23 = false;
  bVar22 = false;
  FVar34 = StatPtr_STAT_NiagaraSystemInst_ComponentTickGT;
  if (StatPtr_STAT_NiagaraSystemInst_ComponentTickGT ==
      (FThreadSafeStaticStat<FStat_STAT_NiagaraSystemInst_ComponentTickGT>)0x0) {
    pFVar33 = ::FName::FName(&local_158,"STAT_NiagaraSystemInst_ComponentTickGT");
    FVar34 = (FThreadSafeStaticStat<FStat_STAT_NiagaraSystemInst_ComponentTickGT>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraSystemInst_ComponentTickGT
                        ,*pFVar33,L"System Instance Tick (Component) [GT]","STATGROUP_Niagara",
                        "STATCAT_Niagara",L"Niagara",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar46 = *(FName *)FVar34;
  bVar28 = false;
  bVar27 = false;
  local_268.ComparisonIndex.Value = 0;
  local_268.Number = 0;
  bVar24 = false;
  bVar29 = false;
  if ((FVar46.ComparisonIndex.Value.Value == 0) && (FVar46.Number == 0)) {
LAB_1493fc2f8:
    bVar28 = bVar24;
    bVar27 = bVar29;
    bVar29 = false;
    FVar46 = local_268;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_294.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_294._s_0,(char *)*(FName *)((longlong)FVar34 + 0x10));
      bVar28 = false;
      bVar27 = true;
      bVar24 = false;
      bVar29 = true;
      if (-1 < CpuChannel->Enabled) {
        local_288.ComparisonIndex.Value = FVar46.ComparisonIndex.Value.Value;
        local_288.Number = FVar46.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_288,(wchar_t *)*(FName *)((longlong)FVar34 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSystemInstance.cpp"
                   ,0x958);
        bVar28 = true;
        bVar27 = true;
        bVar24 = true;
        bVar29 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_1493fc2f8;
    FThreadStats::AddMessage(FVar46,CycleScopeStart);
    bVar29 = true;
  }
  FVar35 = StatPtr_STAT_NiagaraSystemInst_TickGT;
  if (StatPtr_STAT_NiagaraSystemInst_TickGT ==
      (FThreadSafeStaticStat<FStat_STAT_NiagaraSystemInst_TickGT>)0x0) {
    pFVar33 = ::FName::FName(local_150,"STAT_NiagaraSystemInst_TickGT");
    FVar35 = (FThreadSafeStaticStat<FStat_STAT_NiagaraSystemInst_TickGT>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraSystemInst_TickGT,*pFVar33
                        ,L"System Instance Tick [GT]","STATGROUP_Niagara","STATCAT_Niagara",
                        L"Niagara",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar47 = *(FName *)FVar35;
  bVar24 = false;
  bVar26 = false;
  local_258.ComparisonIndex.Value = 0;
  local_258.Number = 0;
  FVar44.Bits = (uint)FVar47.ComparisonIndex.Value;
  uVar40 = FVar47.Number;
  if ((FVar44.Bits == 0) && (uVar40 == 0)) {
LAB_1493fc411:
    bVar25 = false;
    FVar47 = local_258;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_290[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_290[0]._s_0,(char *)*(FName *)((longlong)FVar35 + 0x10));
      bVar24 = false;
      bVar26 = true;
      if (-1 < CpuChannel->Enabled) {
        local_280.Bits = FVar44.Bits;
        local_27c = uVar40;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_280._s_0,(wchar_t *)*(FName *)((longlong)FVar35 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSystemInstance.cpp"
                   ,0x959);
        bVar24 = true;
        bVar26 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_1493fc411;
    local_2a0.Bits = FVar44.Bits;
    uStack_29c = uVar40;
    FThreadStats::AddMessage(FVar47,CycleScopeStart);
    bVar25 = true;
  }
  FLLMScope::FLLMScope(&local_298,Niagara,false,None,Default,true);
  FMemScope::FMemScope(&local_230,Niagara,true);
  bVar30 = IsInGameThread();
  if ((!bVar30) &&
     (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsInGameThread()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSystemInstance.cpp"
                          ,0x95c,L""), bVar30)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if ((this->bSolo == '\0') &&
     (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                         ("bSolo",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSystemInstance.cpp"
                          ,0x95d,L""), bVar30)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  FNiagaraCrashReporterScope::FNiagaraCrashReporterScope(local_2a8,this);
  this_00 = this->System;
  TVar2 = ((this_00->StatID_GT).StatIdPtr)->Name;
  if ((TVar2._0_4_ == 0) && (TVar2._4_4_ == 0)) {
    UNiagaraSystem::GenerateStatID(this_00);
  }
  pTVar3 = (this_00->StatID_GT).StatIdPtr;
  local_248.ComparisonIndex.Value = 0;
  local_248.Number = 0;
  FVar45 = *(FName *)&pTVar3->Name;
  FVar48 = FVar45.ComparisonIndex.Value;
  uVar40 = FVar45.Number;
  if ((FVar48.Value == 0) && (uVar40 == 0)) {
LAB_1493fc579:
    bVar30 = false;
    FVar45 = local_248;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_2a0.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_2a0._s_0,(pTVar3->StatDescriptionAnsi).Ptr);
      bVar23 = false;
      bVar22 = true;
      if (-1 < CpuChannel->Enabled) {
        local_278.ComparisonIndex.Value = FVar48.Value;
        local_278.Number = uVar40;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_278,(pTVar3->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSystemInstance.cpp"
                   ,0x961);
        bVar23 = true;
        bVar22 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_1493fc579;
    local_270 = FVar48.Value;
    uStack_26c = uVar40;
    FThreadStats::AddMessage(FVar45,CycleScopeStart);
    bVar23 = false;
    bVar30 = true;
  }
  if ((this->ActualExecutionState == Complete) || (this->ActualExecutionState == Disabled))
  goto LAB_1493fc9dc;
  pUVar36 = FWeakObjectPtr::Get(&(this->AttachComponent).WeakPtr);
  if (pUVar36 == (UObject *)0x0) {
    Complete(this,true);
    goto LAB_1493fc9dc;
  }
  if (param_1->DurationSeconds + param_1->StartSeconds < param_2) {
    Complete(this,false);
    goto LAB_1493fc9dc;
  }
  this_03 = &this->AttachComponent;
  bVar21 = false;
  local_188 = 0;
  pUVar36 = FWeakObjectPtr::Get(&this_03->WeakPtr);
  uVar39 = SUB84(this_03,0);
  if (pUVar36 == (UObject *)0x0) {
    dVar15 = (double)CONCAT44(uStack_1b4,local_1b8);
    dVar16 = (double)CONCAT44(uStack_1ac,uStack_1b0);
    dVar12 = (double)CONCAT44(uStack_1c4,local_1c8);
    dVar13 = (double)CONCAT44(uStack_1bc,uStack_1c0);
  }
  else {
    pUVar36 = FWeakObjectPtr::Get(&(this->AttachComponent).WeakPtr);
    pcVar43 = (char *)&local_1e8;
    if (&pUVar36[0xc].field_0x10 == pcVar43) {
      pcVar43 = "IsSet()";
      bVar31 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsSet()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                          ,0x1bd,
                          L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                         );
      if (bVar31) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    else {
      local_1e8 = *(undefined4 *)&pUVar36[0xc].field_0x10;
      uStack_1e4 = *(undefined4 *)&pUVar36[0xc].field_0x14;
      uStack_1e0 = *(undefined4 *)&pUVar36[0xc].field_0x18;
      uStack_1dc = *(undefined4 *)&pUVar36[0xc].field_0x1c;
      bVar21 = true;
      local_1d8 = *(undefined4 *)&pUVar36[0xc].field_0x20;
      uStack_1d4 = *(undefined4 *)&pUVar36[0xc].field_0x24;
      uStack_1d0 = *(undefined4 *)(pUVar36 + 0xd);
      uStack_1cc = *(undefined4 *)&pUVar36[0xd].field_0x4;
      local_1c8 = *(undefined4 *)&pUVar36[0xd].field_0x8;
      uStack_1c4 = *(undefined4 *)&pUVar36[0xd].field_0xc;
      uStack_1c0 = *(undefined4 *)&pUVar36[0xd].field_0x10;
      uStack_1bc = *(undefined4 *)&pUVar36[0xd].field_0x14;
      local_1b8 = *(undefined4 *)&pUVar36[0xd].field_0x18;
      uStack_1b4 = *(undefined4 *)&pUVar36[0xd].field_0x1c;
      uStack_1b0 = *(undefined4 *)&pUVar36[0xd].field_0x20;
      uStack_1ac = *(undefined4 *)&pUVar36[0xd].field_0x24;
      local_1a8 = *(undefined4 *)(pUVar36 + 0xe);
      uStack_1a4 = *(undefined4 *)&pUVar36[0xe].field_0x4;
      uStack_1a0 = *(undefined4 *)&pUVar36[0xe].field_0x8;
      uStack_19c = *(undefined4 *)&pUVar36[0xe].field_0xc;
      local_198 = *(undefined4 *)&pUVar36[0xe].field_0x10;
      uStack_194 = *(undefined4 *)&pUVar36[0xe].field_0x14;
      uStack_190 = *(undefined4 *)&pUVar36[0xe].field_0x18;
      uStack_18c = *(undefined4 *)&pUVar36[0xe].field_0x1c;
    }
    uVar39 = SUB84(pcVar43,0);
    dVar12 = (double)CONCAT44(uStack_1c4,local_1c8) +
             (double)(this->LWCTile).field0_0x0._s_0.X * __real_c140000000000000;
    dVar13 = (double)CONCAT44(uStack_1bc,uStack_1c0) +
             (double)(this->LWCTile).field0_0x0._s_0.Y * __real_c140000000000000;
    dVar15 = (double)CONCAT44(uStack_1b4,local_1b8) +
             (double)(this->LWCTile).field0_0x0._s_0.Z * __real_c140000000000000;
    dVar16 = (double)CONCAT44(uStack_1ac,uStack_1b0) + 0.0;
  }
  if ((float)((uint)(this->Age - param_2) & __xmm_7fffffff7fffffff7fffffff7fffffff) <=
      __real_322bcc77) {
    if (((param_1->CreateParameters).bAllowRebasing == 0) || (!bVar21)) goto LAB_1493fc9dc;
    dVar50 = (this->WorldTransform).Translation.ZW.m128d_f64[0] - dVar15;
    dVar51 = (this->WorldTransform).Translation.ZW.m128d_f64[1] - dVar16;
    dVar52 = (this->WorldTransform).Translation.XY.m128d_f64[0] - dVar12;
    dVar54 = (this->WorldTransform).Translation.XY.m128d_f64[1] - dVar13;
    lVar49 = -(ulonglong)
              (__real_3f1a36e2e0000000 <
              (double)CONCAT44((uint)((ulonglong)dVar51 >> 0x20) & _UNK_15061cc8c,
                               SUB84(dVar51,0) & _UNK_15061cc88));
    auVar5._8_4_ = (int)lVar49;
    auVar5._0_8_ = -(ulonglong)
                    (__real_3f1a36e2e0000000 <
                    (double)CONCAT44((uint)((ulonglong)dVar50 >> 0x20) &
                                     __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                     SUB84(dVar50,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)
                    );
    auVar5._12_4_ = (int)((ulonglong)lVar49 >> 0x20);
    uVar40 = movmskpd(uVar39,auVar5);
    lVar49 = -(ulonglong)
              (__real_3f1a36e2e0000000 <
              (double)CONCAT44((uint)((ulonglong)dVar54 >> 0x20) & _UNK_15061cc8c,
                               SUB84(dVar54,0) & _UNK_15061cc88));
    auVar10._8_4_ = (int)lVar49;
    auVar10._0_8_ =
         -(ulonglong)
          (__real_3f1a36e2e0000000 <
          (double)CONCAT44((uint)((ulonglong)dVar52 >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           SUB84(dVar52,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff));
    auVar10._12_4_ = (int)((ulonglong)lVar49 >> 0x20);
    iVar32 = movmskpd((int)param_1,auVar10);
    if ((uVar40 & 0x3fffffff) == 0 && iVar32 == 0) {
      dVar53 = (this->WorldTransform).Rotation.ZW.m128d_f64[0];
      dVar55 = (this->WorldTransform).Rotation.ZW.m128d_f64[1];
      dVar50 = (this->WorldTransform).Rotation.XY.m128d_f64[0];
      dVar51 = (this->WorldTransform).Rotation.XY.m128d_f64[1];
      dVar19 = (double)CONCAT44(uStack_1d4,local_1d8) + dVar53;
      dVar20 = (double)CONCAT44(uStack_1cc,uStack_1d0) + dVar55;
      dVar52 = (double)CONCAT44(uStack_1e4,local_1e8) + dVar50;
      dVar54 = (double)CONCAT44(uStack_1dc,uStack_1e0) + dVar51;
      dVar53 = dVar53 - (double)CONCAT44(uStack_1d4,local_1d8);
      dVar55 = dVar55 - (double)CONCAT44(uStack_1cc,uStack_1d0);
      dVar50 = dVar50 - (double)CONCAT44(uStack_1e4,local_1e8);
      dVar51 = dVar51 - (double)CONCAT44(uStack_1dc,uStack_1e0);
      lVar49 = -(ulonglong)
                (__real_3f1a36e2e0000000 <
                (double)CONCAT44((uint)((ulonglong)dVar55 >> 0x20) & _UNK_15061cc8c,
                                 SUB84(dVar55,0) & _UNK_15061cc88));
      auVar6._8_4_ = (int)lVar49;
      auVar6._0_8_ = -(ulonglong)
                      (__real_3f1a36e2e0000000 <
                      (double)CONCAT44((uint)((ulonglong)dVar53 >> 0x20) &
                                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                       SUB84(dVar53,0) &
                                       (uint)__xmm_7fffffffffffffff7fffffffffffffff));
      auVar6._12_4_ = (int)((ulonglong)lVar49 >> 0x20);
      iVar41 = movmskpd(0,auVar6);
      lVar49 = -(ulonglong)
                (__real_3f1a36e2e0000000 <
                (double)CONCAT44((uint)((ulonglong)dVar51 >> 0x20) & _UNK_15061cc8c,
                                 SUB84(dVar51,0) & _UNK_15061cc88));
      auVar7._8_4_ = (int)lVar49;
      auVar7._0_8_ = -(ulonglong)
                      (__real_3f1a36e2e0000000 <
                      (double)CONCAT44((uint)((ulonglong)dVar50 >> 0x20) &
                                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                       SUB84(dVar50,0) &
                                       (uint)__xmm_7fffffffffffffff7fffffffffffffff));
      auVar7._12_4_ = (int)((ulonglong)lVar49 >> 0x20);
      uVar40 = movmskpd(iVar32,auVar7);
      uVar42 = iVar41 << 2 | uVar40;
      if (uVar42 != 0) {
        lVar49 = -(ulonglong)
                  (__real_3f1a36e2e0000000 <
                  (double)CONCAT44((uint)((ulonglong)dVar20 >> 0x20) & _UNK_15061cc8c,
                                   SUB84(dVar20,0) & _UNK_15061cc88));
        auVar8._8_4_ = (int)lVar49;
        auVar8._0_8_ = -(ulonglong)
                        (__real_3f1a36e2e0000000 <
                        (double)CONCAT44((uint)((ulonglong)dVar19 >> 0x20) &
                                         __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                         SUB84(dVar19,0) &
                                         (uint)__xmm_7fffffffffffffff7fffffffffffffff));
        auVar8._12_4_ = (int)((ulonglong)lVar49 >> 0x20);
        uVar42 = movmskpd(uVar42,auVar8);
        lVar49 = -(ulonglong)
                  (__real_3f1a36e2e0000000 <
                  (double)CONCAT44((uint)((ulonglong)dVar54 >> 0x20) & _UNK_15061cc8c,
                                   SUB84(dVar54,0) & _UNK_15061cc88));
        auVar18._8_4_ = (int)lVar49;
        auVar18._0_8_ =
             -(ulonglong)
              (__real_3f1a36e2e0000000 <
              (double)CONCAT44((uint)((ulonglong)dVar52 >> 0x20) &
                               __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                               SUB84(dVar52,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff));
        auVar18._12_4_ = (int)((ulonglong)lVar49 >> 0x20);
        uVar40 = movmskpd(uVar40,auVar18);
        if ((uVar42 & 0x3fffffff) != 0 || uVar40 != 0) goto LAB_1493fc87b;
      }
      dVar50 = (this->WorldTransform).Scale3D.ZW.m128d_f64[0] -
               (double)CONCAT44(uStack_194,local_198);
      dVar51 = (this->WorldTransform).Scale3D.ZW.m128d_f64[1] -
               (double)CONCAT44(uStack_18c,uStack_190);
      dVar52 = (this->WorldTransform).Scale3D.XY.m128d_f64[0] -
               (double)CONCAT44(uStack_1a4,local_1a8);
      dVar54 = (this->WorldTransform).Scale3D.XY.m128d_f64[1] -
               (double)CONCAT44(uStack_19c,uStack_1a0);
      lVar49 = -(ulonglong)
                (__real_3f1a36e2e0000000 <
                (double)CONCAT44((uint)((ulonglong)dVar51 >> 0x20) & _UNK_15061cc8c,
                                 SUB84(dVar51,0) & _UNK_15061cc88));
      auVar9._8_4_ = (int)lVar49;
      auVar9._0_8_ = -(ulonglong)
                      (__real_3f1a36e2e0000000 <
                      (double)CONCAT44((uint)((ulonglong)dVar50 >> 0x20) &
                                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                       SUB84(dVar50,0) &
                                       (uint)__xmm_7fffffffffffffff7fffffffffffffff));
      auVar9._12_4_ = (int)((ulonglong)lVar49 >> 0x20);
      uVar42 = movmskpd(0,auVar9);
      lVar49 = -(ulonglong)
                (__real_3f1a36e2e0000000 <
                (double)CONCAT44((uint)((ulonglong)dVar54 >> 0x20) & _UNK_15061cc8c,
                                 SUB84(dVar54,0) & _UNK_15061cc88));
      auVar17._8_4_ = (int)lVar49;
      auVar17._0_8_ =
           -(ulonglong)
            (__real_3f1a36e2e0000000 <
            (double)CONCAT44((uint)((ulonglong)dVar52 >> 0x20) &
                             __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                             SUB84(dVar52,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff));
      auVar17._12_4_ = (int)((ulonglong)lVar49 >> 0x20);
      iVar32 = movmskpd(uVar40,auVar17);
      if ((uVar42 & 0x3fffffff) == 0 && iVar32 == 0) goto LAB_1493fc9dc;
    }
  }
LAB_1493fc87b:
  this->CachedDeltaSeconds = param_3;
  if (bVar21) {
    *(undefined4 *)(this->WorldTransform).Rotation.XY.m128d_f64 = local_1e8;
    *(undefined4 *)((longlong)(this->WorldTransform).Rotation.XY.m128d_f64 + 4) = uStack_1e4;
    *(undefined4 *)((this->WorldTransform).Rotation.XY.m128d_f64 + 1) = uStack_1e0;
    *(undefined4 *)((longlong)(this->WorldTransform).Rotation.XY.m128d_f64 + 0xc) = uStack_1dc;
    *(undefined4 *)(this->WorldTransform).Rotation.ZW.m128d_f64 = local_1d8;
    *(undefined4 *)((longlong)(this->WorldTransform).Rotation.ZW.m128d_f64 + 4) = uStack_1d4;
    *(undefined4 *)((this->WorldTransform).Rotation.ZW.m128d_f64 + 1) = uStack_1d0;
    *(undefined4 *)((longlong)(this->WorldTransform).Rotation.ZW.m128d_f64 + 0xc) = uStack_1cc;
    auVar11._8_4_ = SUB84(dVar13,0);
    auVar11._0_8_ = dVar12;
    auVar11._12_4_ = (int)((ulonglong)dVar13 >> 0x20);
    *(undefined1 (*) [16])(this->WorldTransform).Translation.XY.m128d_f64 = auVar11;
    auVar14._8_4_ = SUB84(dVar16,0);
    auVar14._0_8_ = dVar15;
    auVar14._12_4_ = (int)((ulonglong)dVar16 >> 0x20);
    *(undefined1 (*) [16])(this->WorldTransform).Translation.ZW.m128d_f64 = auVar14;
    *(undefined4 *)(this->WorldTransform).Scale3D.XY.m128d_f64 = local_1a8;
    *(undefined4 *)((longlong)(this->WorldTransform).Scale3D.XY.m128d_f64 + 4) = uStack_1a4;
    *(undefined4 *)((this->WorldTransform).Scale3D.XY.m128d_f64 + 1) = uStack_1a0;
    *(undefined4 *)((longlong)(this->WorldTransform).Scale3D.XY.m128d_f64 + 0xc) = uStack_19c;
    *(undefined4 *)(this->WorldTransform).Scale3D.ZW.m128d_f64 = local_198;
    *(undefined4 *)((longlong)(this->WorldTransform).Scale3D.ZW.m128d_f64 + 4) = uStack_194;
    *(undefined4 *)((this->WorldTransform).Scale3D.ZW.m128d_f64 + 1) = uStack_190;
    *(undefined4 *)((longlong)(this->WorldTransform).Scale3D.ZW.m128d_f64 + 0xc) = uStack_18c;
  }
  this_01 = this->OverrideParameters;
  if (this_01 != (FNiagaraUserRedirectionParameterStore *)0x0) {
    local_178._s_0.X = (double)(this->LWCTile).field0_0x0._s_0.X * __real_4140000000000000;
    local_178._s_0.Z = (double)(this->LWCTile).field0_0x0._s_0.Z * __real_4140000000000000;
    local_178._s_0.Y = (double)(this->LWCTile).field0_0x0._s_0.Y * __real_4140000000000000;
    FNiagaraLWCConverter::FNiagaraLWCConverter
              ((FNiagaraLWCConverter *)&local_130._s_0,(TVector<double> *)&local_178._s_0);
    local_118[0]._s_0.X = local_130._s_0.X;
    local_118[0]._s_0.Y = local_130._s_0.Y;
    local_118[0]._s_0.Z = local_130._s_0.Z;
    FNiagaraParameterStore::ResolvePositions
              ((FNiagaraParameterStore *)this_01,(FNiagaraLWCConverter *)&local_118[0]._s_0);
    FNiagaraParameterStore::Tick((FNiagaraParameterStore *)this->OverrideParameters);
  }
  this->TickCount = this->TickCount + 1;
  this->Age = param_2;
  this_02 = TSharedPtr<FNiagaraSystemSimulation,1>::operator->(&this->SystemSimulation);
  FNiagaraSystemSimulation::SimCacheTick_GameThread(this_02,param_1,param_3,param_4);
LAB_1493fc9dc:
  if (bVar22) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar23) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar30) && (FVar45 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    pFVar37 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar37 == (FThreadStats *)0x0) {
      pFVar38 = FThreadStatsPool::Get();
      pFVar37 = FThreadStatsPool::GetFromPool(pFVar38);
    }
    if (pFVar37->bWaitForExplicitFlush < pFVar37->ScopeCount) {
      local_218.NameAndInfo.Index = FVar45.ComparisonIndex.Value;
      local_218.NameAndInfo.Number = FVar45.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_238);
      local_218.StatData.Pad[4] = '\0';
      local_218.StatData.Pad[5] = '\0';
      local_218.StatData.Pad[6] = '\0';
      local_218.StatData.Pad[7] = '\0';
      local_218.StatData.Pad[0] = local_238.s.LowPart._0_1_;
      local_218.StatData.Pad[1] = local_238.s.LowPart._1_1_;
      local_218.StatData.Pad[2] = local_238.s.LowPart._2_1_;
      local_218.StatData.Pad[3] = local_238.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(pFVar37,&local_218);
      piVar1 = &pFVar37->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(pFVar37,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar37,false,false);
      }
    }
  }
  FNiagaraCrashReporterScope::~FNiagaraCrashReporterScope(local_2a8);
  FMemScope::~FMemScope(&local_230);
  FLLMScope::~FLLMScope(&local_298);
  if (bVar26) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar24) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((bVar25) && (FVar47 != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    pFVar37 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar37 == (FThreadStats *)0x0) {
      pFVar38 = FThreadStatsPool::Get();
      pFVar37 = FThreadStatsPool::GetFromPool(pFVar38);
    }
    if (pFVar37->bWaitForExplicitFlush < pFVar37->ScopeCount) {
      local_208.NameAndInfo.Index = FVar47.ComparisonIndex.Value;
      local_208.NameAndInfo.Number = FVar47.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_228);
      local_208.StatData.Pad[4] = '\0';
      local_208.StatData.Pad[5] = '\0';
      local_208.StatData.Pad[6] = '\0';
      local_208.StatData.Pad[7] = '\0';
      local_208.StatData.Pad[0] = local_228.s.LowPart._0_1_;
      local_208.StatData.Pad[1] = local_228.s.LowPart._1_1_;
      local_208.StatData.Pad[2] = local_228.s.LowPart._2_1_;
      local_208.StatData.Pad[3] = local_228.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(pFVar37,&local_208);
      piVar1 = &pFVar37->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(pFVar37,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar37,false,false);
      }
    }
  }
  if (bVar27) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar28) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((bVar29) && (FVar46 != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    pFVar37 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar37 == (FThreadStats *)0x0) {
      pFVar38 = FThreadStatsPool::Get();
      pFVar37 = FThreadStatsPool::GetFromPool(pFVar38);
    }
    if (pFVar37->bWaitForExplicitFlush < pFVar37->ScopeCount) {
      local_1f8.NameAndInfo.Index = FVar46.ComparisonIndex.Value;
      local_1f8.NameAndInfo.Number = FVar46.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_220);
      local_1f8.StatData.Pad[4] = '\0';
      local_1f8.StatData.Pad[5] = '\0';
      local_1f8.StatData.Pad[6] = '\0';
      local_1f8.StatData.Pad[7] = '\0';
      local_1f8.StatData.Pad[0] = local_220.s.LowPart._0_1_;
      local_1f8.StatData.Pad[1] = local_220.s.LowPart._1_1_;
      local_1f8.StatData.Pad[2] = local_220.s.LowPart._2_1_;
      local_1f8.StatData.Pad[3] = local_220.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(pFVar37,&local_1f8);
      piVar1 = &pFVar37->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(pFVar37,false,false);
        return;
      }
      if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar37,false,false);
      }
    }
  }
  return;
}

// TickDataInterfaces @ 1493fea30

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FNiagaraSystemInstance::TickDataInterfaces(FNiagaraSystemInstance *this,float param_1,bool param_2)

{
  int *piVar1;
  TArray<FNiagaraPerInstanceDIFuncInfo,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<FNiagaraPerInstanceDIFuncInfo,TSizedDefaultAllocator<32>_> *pTVar3;
  FWeakObjectPtr *pFVar4;
  uint uVar5;
  int iVar6;
  FNiagaraPerInstanceDIFuncInfo *pFVar7;
  FNiagaraScriptExecutionContextBase *pFVar8;
  code *pcVar9;
  bool bVar10;
  char cVar11;
  bool bVar12;
  byte bVar13;
  byte bVar14;
  uint uVar15;
  UObject *pUVar16;
  FNiagaraEmitterInstanceImpl *this_00;
  ulonglong uVar17;
  FScriptContainerElement *pFVar18;
  FScriptContainerElement *pFVar19;
  undefined1 local_res8 [8];
  undefined1 local_res20 [8];
  undefined1 local_78 [4];
  uint local_74;
  FScriptContainerElement *local_70;
  FName local_68;
  FString local_60 [2];
  
  if ((this->System != (UNiagaraSystem *)0x0) && (this->ActualExecutionState != Disabled)) {
    bVar12 = false;
    if (param_2) {
      pFVar18 = (this->PostTickDataInterfaces).AllocatorInstance.Data;
      local_74 = (this->PostTickDataInterfaces).ArrayNum;
      uVar17 = (ulonglong)(int)local_74;
      local_70 = pFVar18 + uVar17 * 4;
      while( true ) {
        pFVar19 = local_70;
        if ((this->PostTickDataInterfaces).ArrayNum != (int)uVar17) {
          local_res8[0] = 0;
          `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res8)
          ;
        }
        if (pFVar18 == pFVar19) break;
        uVar5 = *(uint *)pFVar18;
        uVar15 = 0;
        if ((int)uVar5 < (this->DataInterfaceInstanceDataOffsets).ArrayNum) {
          uVar15 = ~uVar5 >> 0x1f;
        }
        if ((uVar15 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        pFVar4 = (FWeakObjectPtr *)
                 ((this->DataInterfaceInstanceDataOffsets).AllocatorInstance.Data +
                 (longlong)(int)uVar5 * 0xc);
        pUVar16 = FWeakObjectPtr::Get(pFVar4);
        if (pUVar16 != (UObject *)0x0) {
          uVar5 = pFVar4[1].ObjectIndex;
          pcVar9 = *(code **)(*(longlong *)pUVar16 + 0x300);
          uVar15 = 0;
          if ((int)uVar5 < (this->DataInterfaceInstanceData).ArrayNum) {
            uVar15 = ~uVar5 >> 0x1f;
          }
          if ((uVar15 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          cVar11 = (*pcVar9)(pUVar16,(this->DataInterfaceInstanceData).AllocatorInstance.Data +
                                     (int)uVar5,this,param_1);
          if (cVar11 != '\0') {
            uVar5 = pFVar4[1].ObjectIndex;
            pcVar9 = *(code **)(*(longlong *)pUVar16 + 0x2f0);
            uVar15 = 0;
            if ((int)uVar5 < (this->DataInterfaceInstanceData).ArrayNum) {
              uVar15 = ~uVar5 >> 0x1f;
            }
            if ((uVar15 == 0) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar12)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            (*pcVar9)(pUVar16,(this->DataInterfaceInstanceData).AllocatorInstance.Data + (int)uVar5,
                      this);
            uVar5 = pFVar4[1].ObjectIndex;
            pcVar9 = *(code **)(*(longlong *)pUVar16 + 0x2e8);
            uVar15 = 0;
            if ((int)uVar5 < (this->DataInterfaceInstanceData).ArrayNum) {
              uVar15 = ~uVar5 >> 0x1f;
            }
            if ((uVar15 == 0) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar12)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            (*pcVar9)(pUVar16,(this->DataInterfaceInstanceData).AllocatorInstance.Data + (int)uVar5)
            ;
            bVar12 = true;
          }
        }
        uVar17 = (ulonglong)local_74;
        pFVar18 = pFVar18 + 4;
      }
    }
    else {
      pFVar18 = (this->PreTickDataInterfaces).AllocatorInstance.Data;
      local_74 = (this->PreTickDataInterfaces).ArrayNum;
      uVar17 = (ulonglong)(int)local_74;
      local_70 = pFVar18 + uVar17 * 4;
      while( true ) {
        pFVar19 = local_70;
        if ((this->PreTickDataInterfaces).ArrayNum != (int)uVar17) {
          local_res20[0] = 0;
          `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_res20);
        }
        if (pFVar18 == pFVar19) break;
        uVar5 = *(uint *)pFVar18;
        uVar15 = 0;
        if ((int)uVar5 < (this->DataInterfaceInstanceDataOffsets).ArrayNum) {
          uVar15 = ~uVar5 >> 0x1f;
        }
        if ((uVar15 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        pFVar4 = (FWeakObjectPtr *)
                 ((this->DataInterfaceInstanceDataOffsets).AllocatorInstance.Data +
                 (longlong)(int)uVar5 * 0xc);
        pUVar16 = FWeakObjectPtr::Get(pFVar4);
        if (pUVar16 != (UObject *)0x0) {
          uVar5 = pFVar4[1].ObjectIndex;
          pcVar9 = *(code **)(*(longlong *)pUVar16 + 0x2f8);
          uVar15 = 0;
          if ((int)uVar5 < (this->DataInterfaceInstanceData).ArrayNum) {
            uVar15 = ~uVar5 >> 0x1f;
          }
          if ((uVar15 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          cVar11 = (*pcVar9)(pUVar16,(this->DataInterfaceInstanceData).AllocatorInstance.Data +
                                     (int)uVar5,this,param_1);
          if (cVar11 != '\0') {
            uVar5 = pFVar4[1].ObjectIndex;
            pcVar9 = *(code **)(*(longlong *)pUVar16 + 0x2f0);
            uVar15 = 0;
            if ((int)uVar5 < (this->DataInterfaceInstanceData).ArrayNum) {
              uVar15 = ~uVar5 >> 0x1f;
            }
            if ((uVar15 == 0) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar12)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            (*pcVar9)(pUVar16,(this->DataInterfaceInstanceData).AllocatorInstance.Data + (int)uVar5,
                      this);
            uVar5 = pFVar4[1].ObjectIndex;
            pcVar9 = *(code **)(*(longlong *)pUVar16 + 0x2e8);
            uVar15 = 0;
            if ((int)uVar5 < (this->DataInterfaceInstanceData).ArrayNum) {
              uVar15 = ~uVar5 >> 0x1f;
            }
            if ((uVar15 == 0) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar12)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            (*pcVar9)(pUVar16,(this->DataInterfaceInstanceData).AllocatorInstance.Data + (int)uVar5)
            ;
            bVar12 = true;
          }
        }
        uVar17 = (ulonglong)local_74;
        pFVar18 = pFVar18 + 4;
      }
    }
    if (bVar12) {
      iVar6 = (this->Emitters).ArrayNum;
      pFVar18 = (this->Emitters).AllocatorInstance.Data;
      pFVar19 = pFVar18 + (longlong)iVar6 * 0x10;
      while( true ) {
        if ((this->Emitters).ArrayNum != iVar6) {
          local_78[0] = 0;
          `TCheckedPointerIterator<TSharedRef<FNiagaraEmitterInstance,1>,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_78);
        }
        if (pFVar18 == pFVar19) break;
        this_00 = (FNiagaraEmitterInstanceImpl *)(**(code **)(**(longlong **)pFVar18 + 0x68))();
        if ((this_00 != (FNiagaraEmitterInstanceImpl *)0x0) &&
           (*(int *)((longlong)&this_00->_padding_ + 4) != 4)) {
          FNiagaraEmitterInstanceImpl::DirtyDataInterfaces(this_00);
        }
        pFVar18 = pFVar18 + 0x10;
      }
      pTVar2 = this->PerInstanceDIFunctions;
      piVar1 = &this->PerInstanceDIFunctions[0].ArrayMax;
      pFVar7 = (FNiagaraPerInstanceDIFuncInfo *)(pTVar2->AllocatorInstance).Data;
      iVar6 = this->PerInstanceDIFunctions[0].ArrayNum;
      if (this->PerInstanceDIFunctions[0].ArrayMax < 0) {
        DestructItems<FNiagaraPerInstanceDIFuncInfo,int>(pFVar7,iVar6);
        this->PerInstanceDIFunctions[0].ArrayNum = 0;
        if (*piVar1 != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x20,8,0,&pTVar2->AllocatorInstance,0,piVar1);
        }
      }
      else {
        DestructItems<FNiagaraPerInstanceDIFuncInfo,int>(pFVar7,iVar6);
        this->PerInstanceDIFunctions[0].ArrayNum = 0;
      }
      pTVar3 = this->PerInstanceDIFunctions + 1;
      piVar1 = &this->PerInstanceDIFunctions[1].ArrayMax;
      pFVar7 = (FNiagaraPerInstanceDIFuncInfo *)(pTVar3->AllocatorInstance).Data;
      iVar6 = this->PerInstanceDIFunctions[1].ArrayNum;
      if (this->PerInstanceDIFunctions[1].ArrayMax < 0) {
        DestructItems<FNiagaraPerInstanceDIFuncInfo,int>(pFVar7,iVar6);
        iVar6 = *piVar1;
        this->PerInstanceDIFunctions[1].ArrayNum = 0;
        if (iVar6 != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x20,8,0,&pTVar3->AllocatorInstance,0,piVar1);
        }
      }
      else {
        DestructItems<FNiagaraPerInstanceDIFuncInfo,int>(pFVar7,iVar6);
        this->PerInstanceDIFunctions[1].ArrayNum = 0;
      }
      if (((this->SystemSimulation).Object == (FNiagaraSystemSimulation *)0x0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar12)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      pFVar8 = (((this->SystemSimulation).Object)->SpawnExecContext).Ptr;
      bVar13 = (**(code **)(pFVar8->_padding_ + 0x30))(pFVar8,this,pTVar2);
      if (((this->SystemSimulation).Object == (FNiagaraSystemSimulation *)0x0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar12)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      pFVar8 = (((this->SystemSimulation).Object)->UpdateExecContext).Ptr;
      bVar14 = (**(code **)(pFVar8->_padding_ + 0x30))(pFVar8,this,pTVar3);
      if ((bVar14 & bVar13 & 1) == 0) {
        if (1 < (byte)LogNiagara._0_1_) {
          if (this->System == (UNiagaraSystem *)0x0) {
            ::FString::FString(local_60,L"None");
          }
          else {
            local_68 = (FName)this->System->_padding_;
            ::FName::ToString(&local_68,local_60);
          }
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
          if (local_60[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_60[0].Data.AllocatorInstance.Data);
          }
        }
        Complete(this,true);
      }
    }
  }
  return;
}

// TickInstanceParameters_Concurrent @ 1493ff100

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FNiagaraSystemInstance::TickInstanceParameters_Concurrent(FNiagaraSystemInstance *this)

{
  undefined1 *puVar1;
  FNiagaraOwnerParameters *pFVar2;
  float fVar3;
  float fVar4;
  double dVar5;
  double dVar6;
  TReferenceControllerBase<1> *pTVar7;
  FNiagaraSystemSimulation *pFVar8;
  code *pcVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  TMatrix<float> *pTVar23;
  bool bVar24;
  int iVar25;
  TMatrix<double> *pTVar26;
  TQuat<float> *this_00;
  uint uVar27;
  float fVar28;
  undefined1 auStack_408 [32];
  TVector<float>_u_0 local_3e8;
  TVector<float>_u_0 local_3d8;
  TVector<float>_u_0 local_3c8;
  TVector<float>_u_0 local_3b8;
  TVector<float>_u_0 local_3ac;
  TVector<float>_u_0 local_3a0 [2];
  float local_388;
  float fStack_384;
  float fStack_380;
  float fStack_37c;
  float local_378;
  float fStack_374;
  float fStack_370;
  float fStack_36c;
  float local_368;
  float fStack_364;
  float fStack_360;
  float fStack_35c;
  float local_358;
  float fStack_354;
  float fStack_350;
  float fStack_34c;
  float local_348;
  float fStack_344;
  float fStack_340;
  float fStack_33c;
  double local_338;
  double dStack_330;
  double local_328;
  undefined1 local_318 [16];
  double local_308;
  double dStack_300;
  double local_2f8;
  double dStack_2f0;
  double local_2e8;
  double dStack_2e0;
  double local_2d8;
  TMatrix<double> local_2c8;
  TMatrix<double> local_248;
  TMatrix<double> local_1c8;
  TMatrix<double> local_148;
  ulonglong local_c8;
  
  local_c8 = __security_cookie.value ^ (ulonglong)auStack_408;
  uVar27 = this->CurrentFrameIndex;
  UE::Math::TTransform<double>::ToMatrixWithScale
            (&(this->GatheredInstanceParameters).ComponentTrans,&local_1c8);
  UE::Math::TTransform<double>::ToMatrixNoScale
            (&(this->GatheredInstanceParameters).ComponentTrans,&local_148);
  local_338 = (this->GatheredInstanceParameters).ComponentTrans.Translation.XY.m128d_f64[0];
  dStack_330 = (this->GatheredInstanceParameters).ComponentTrans.Translation.XY.m128d_f64[1];
  local_328 = (this->GatheredInstanceParameters).ComponentTrans.Translation.ZW.m128d_f64[0];
  local_308 = (this->GatheredInstanceParameters).ComponentTrans.Rotation.XY.m128d_f64[0];
  dStack_300 = (this->GatheredInstanceParameters).ComponentTrans.Rotation.XY.m128d_f64[1];
  local_2f8 = (this->GatheredInstanceParameters).ComponentTrans.Rotation.ZW.m128d_f64[0];
  dStack_2f0 = (this->GatheredInstanceParameters).ComponentTrans.Rotation.ZW.m128d_f64[1];
  pFVar2 = this->OwnerParameters + uVar27;
  (pFVar2->EngineLocalToWorld).M[0][0] = (float)local_1c8.M[0][0];
  (pFVar2->EngineLocalToWorld).M[0][1] = (float)local_1c8.M[0][1];
  (pFVar2->EngineLocalToWorld).M[0][2] = (float)local_1c8.M[0][2];
  (pFVar2->EngineLocalToWorld).M[0][3] = (float)local_1c8.M[0][3];
  pTVar23 = &this->OwnerParameters[uVar27].EngineLocalToWorld;
  pTVar23->M[1][0] = (float)local_1c8.M[1][0];
  pTVar23->M[1][1] = (float)local_1c8.M[1][1];
  pTVar23->M[1][2] = (float)local_1c8.M[1][2];
  pTVar23->M[1][3] = (float)local_1c8.M[1][3];
  pTVar23 = &this->OwnerParameters[uVar27].EngineLocalToWorld;
  pTVar23->M[2][0] = (float)local_1c8.M[2][0];
  pTVar23->M[2][1] = (float)local_1c8.M[2][1];
  pTVar23->M[2][2] = (float)local_1c8.M[2][2];
  pTVar23->M[2][3] = (float)local_1c8.M[2][3];
  pTVar23 = &this->OwnerParameters[uVar27].EngineLocalToWorld;
  pTVar23->M[3][0] = (float)local_1c8.M[3][0];
  pTVar23->M[3][1] = (float)local_1c8.M[3][1];
  pTVar23->M[3][2] = (float)local_1c8.M[3][2];
  pTVar23->M[3][3] = (float)local_1c8.M[3][3];
  pTVar26 = UE::Math::TMatrix<double>::Inverse(&local_1c8,&local_2c8);
  dVar5 = pTVar26->M[1][2];
  dVar6 = pTVar26->M[1][3];
  dVar10 = pTVar26->M[1][0];
  dVar11 = pTVar26->M[1][1];
  dVar12 = pTVar26->M[2][2];
  dVar13 = pTVar26->M[2][3];
  dVar14 = pTVar26->M[2][0];
  dVar15 = pTVar26->M[2][1];
  dVar16 = pTVar26->M[3][0];
  dVar17 = pTVar26->M[3][1];
  dVar18 = pTVar26->M[3][2];
  dVar19 = pTVar26->M[3][3];
  dVar20 = pTVar26->M[0][2];
  dVar21 = pTVar26->M[0][3];
  dVar22 = pTVar26->M[0][1];
  pTVar23 = &this->OwnerParameters[uVar27].EngineWorldToLocal;
  pTVar23->M[0][0] = (float)pTVar26->M[0][0];
  pTVar23->M[0][1] = (float)dVar22;
  pTVar23->M[0][2] = (float)dVar20;
  pTVar23->M[0][3] = (float)dVar21;
  pTVar23 = &this->OwnerParameters[uVar27].EngineWorldToLocal;
  pTVar23->M[1][0] = (float)dVar10;
  pTVar23->M[1][1] = (float)dVar11;
  pTVar23->M[1][2] = (float)dVar5;
  pTVar23->M[1][3] = (float)dVar6;
  pTVar23 = &this->OwnerParameters[uVar27].EngineWorldToLocal;
  pTVar23->M[2][0] = (float)dVar14;
  pTVar23->M[2][1] = (float)dVar15;
  pTVar23->M[2][2] = (float)dVar12;
  pTVar23->M[2][3] = (float)dVar13;
  pTVar23 = &this->OwnerParameters[uVar27].EngineWorldToLocal;
  pTVar23->M[3][0] = (float)dVar16;
  pTVar23->M[3][1] = (float)dVar17;
  pTVar23->M[3][2] = (float)dVar18;
  pTVar23->M[3][3] = (float)dVar19;
  local_318._8_4_ = SUB84(local_1c8.M[0][3],0);
  local_318._0_8_ = local_1c8.M[0][3];
  local_318._12_4_ = (int)((ulonglong)local_1c8.M[0][3] >> 0x20);
  pTVar23 = &this->OwnerParameters[uVar27].EngineLocalToWorldTransposed;
  pTVar23->M[0][0] = (float)local_1c8.M[0][0];
  pTVar23->M[0][1] = (float)local_1c8.M[1][0];
  pTVar23->M[0][2] = (float)local_1c8.M[2][0];
  pTVar23->M[0][3] = (float)local_1c8.M[3][0];
  pTVar23 = &this->OwnerParameters[uVar27].EngineLocalToWorldTransposed;
  pTVar23->M[1][0] = (float)local_1c8.M[0][1];
  pTVar23->M[1][1] = (float)local_1c8.M[1][1];
  pTVar23->M[1][2] = (float)local_1c8.M[2][1];
  pTVar23->M[1][3] = (float)local_1c8.M[3][1];
  pTVar23 = &this->OwnerParameters[uVar27].EngineLocalToWorldTransposed;
  pTVar23->M[2][0] = (float)local_1c8.M[0][2];
  pTVar23->M[2][1] = (float)local_1c8.M[1][2];
  pTVar23->M[2][2] = (float)local_1c8.M[2][2];
  pTVar23->M[2][3] = (float)local_1c8.M[3][2];
  pTVar23 = &this->OwnerParameters[uVar27].EngineLocalToWorldTransposed;
  pTVar23->M[3][0] = (float)local_1c8.M[0][3];
  pTVar23->M[3][1] = (float)local_1c8.M[1][3];
  pTVar23->M[3][2] = (float)local_1c8.M[2][3];
  pTVar23->M[3][3] = (float)local_1c8.M[3][3];
  local_378 = this->OwnerParameters[uVar27].EngineWorldToLocal.M[0][0];
  local_368 = this->OwnerParameters[uVar27].EngineWorldToLocal.M[0][1];
  fStack_374 = this->OwnerParameters[uVar27].EngineWorldToLocal.M[1][0];
  local_358 = this->OwnerParameters[uVar27].EngineWorldToLocal.M[0][2];
  fStack_364 = this->OwnerParameters[uVar27].EngineWorldToLocal.M[1][1];
  fStack_354 = this->OwnerParameters[uVar27].EngineWorldToLocal.M[1][2];
  fStack_370 = this->OwnerParameters[uVar27].EngineWorldToLocal.M[2][0];
  fStack_360 = this->OwnerParameters[uVar27].EngineWorldToLocal.M[2][1];
  fStack_350 = this->OwnerParameters[uVar27].EngineWorldToLocal.M[2][2];
  fStack_36c = this->OwnerParameters[uVar27].EngineWorldToLocal.M[3][0];
  fStack_35c = this->OwnerParameters[uVar27].EngineWorldToLocal.M[3][1];
  fStack_34c = this->OwnerParameters[uVar27].EngineWorldToLocal.M[3][2];
  local_348 = this->OwnerParameters[uVar27].EngineWorldToLocal.M[0][3];
  fStack_344 = this->OwnerParameters[uVar27].EngineWorldToLocal.M[1][3];
  fStack_340 = this->OwnerParameters[uVar27].EngineWorldToLocal.M[2][3];
  fStack_33c = this->OwnerParameters[uVar27].EngineWorldToLocal.M[3][3];
  pTVar23 = &this->OwnerParameters[uVar27].EngineWorldToLocalTransposed;
  pTVar23->M[0][0] = local_378;
  pTVar23->M[0][1] = fStack_374;
  pTVar23->M[0][2] = fStack_370;
  pTVar23->M[0][3] = fStack_36c;
  pTVar23 = &this->OwnerParameters[uVar27].EngineWorldToLocalTransposed;
  pTVar23->M[1][0] = local_368;
  pTVar23->M[1][1] = fStack_364;
  pTVar23->M[1][2] = fStack_360;
  pTVar23->M[1][3] = fStack_35c;
  pTVar23 = &this->OwnerParameters[uVar27].EngineWorldToLocalTransposed;
  pTVar23->M[2][0] = local_358;
  pTVar23->M[2][1] = fStack_354;
  pTVar23->M[2][2] = fStack_350;
  pTVar23->M[2][3] = fStack_34c;
  pTVar23 = &this->OwnerParameters[uVar27].EngineWorldToLocalTransposed;
  pTVar23->M[3][0] = local_348;
  pTVar23->M[3][1] = fStack_344;
  pTVar23->M[3][2] = fStack_340;
  pTVar23->M[3][3] = fStack_33c;
  pTVar23 = &this->OwnerParameters[uVar27].EngineLocalToWorldNoScale;
  pTVar23->M[0][0] = (float)local_148.M[0][0];
  pTVar23->M[0][1] = (float)local_148.M[0][1];
  pTVar23->M[0][2] = (float)local_148.M[0][2];
  pTVar23->M[0][3] = (float)local_148.M[0][3];
  pTVar23 = &this->OwnerParameters[uVar27].EngineLocalToWorldNoScale;
  pTVar23->M[1][0] = (float)local_148.M[1][0];
  pTVar23->M[1][1] = (float)local_148.M[1][1];
  pTVar23->M[1][2] = (float)local_148.M[1][2];
  pTVar23->M[1][3] = (float)local_148.M[1][3];
  pTVar23 = &this->OwnerParameters[uVar27].EngineLocalToWorldNoScale;
  pTVar23->M[2][0] = (float)local_148.M[2][0];
  pTVar23->M[2][1] = (float)local_148.M[2][1];
  pTVar23->M[2][2] = (float)local_148.M[2][2];
  pTVar23->M[2][3] = (float)local_148.M[2][3];
  pTVar23 = &this->OwnerParameters[uVar27].EngineLocalToWorldNoScale;
  pTVar23->M[3][0] = (float)local_148.M[3][0];
  pTVar23->M[3][1] = (float)local_148.M[3][1];
  pTVar23->M[3][2] = (float)local_148.M[3][2];
  pTVar23->M[3][3] = (float)local_148.M[3][3];
  pTVar26 = UE::Math::TMatrix<double>::Inverse(&local_148,&local_248);
  this_00 = &this->OwnerParameters[uVar27].EngineRotation;
  dVar5 = pTVar26->M[1][2];
  dVar6 = pTVar26->M[1][3];
  dVar10 = pTVar26->M[1][0];
  dVar11 = pTVar26->M[1][1];
  dVar12 = pTVar26->M[2][2];
  dVar13 = pTVar26->M[2][3];
  dVar14 = pTVar26->M[2][0];
  dVar15 = pTVar26->M[2][1];
  dVar16 = pTVar26->M[3][2];
  dVar17 = pTVar26->M[3][3];
  dVar18 = pTVar26->M[3][0];
  dVar19 = pTVar26->M[3][1];
  dVar20 = pTVar26->M[0][2];
  dVar21 = pTVar26->M[0][3];
  dVar22 = pTVar26->M[0][1];
  pTVar23 = &this->OwnerParameters[uVar27].EngineWorldToLocalNoScale;
  pTVar23->M[0][0] = (float)pTVar26->M[0][0];
  pTVar23->M[0][1] = (float)dVar22;
  pTVar23->M[0][2] = (float)dVar20;
  pTVar23->M[0][3] = (float)dVar21;
  pTVar23 = &this->OwnerParameters[uVar27].EngineWorldToLocalNoScale;
  pTVar23->M[1][0] = (float)dVar10;
  pTVar23->M[1][1] = (float)dVar11;
  pTVar23->M[1][2] = (float)dVar5;
  pTVar23->M[1][3] = (float)dVar6;
  pTVar23 = &this->OwnerParameters[uVar27].EngineWorldToLocalNoScale;
  pTVar23->M[2][0] = (float)dVar14;
  pTVar23->M[2][1] = (float)dVar15;
  pTVar23->M[2][2] = (float)dVar12;
  pTVar23->M[2][3] = (float)dVar13;
  pTVar23 = &this->OwnerParameters[uVar27].EngineWorldToLocalNoScale;
  pTVar23->M[3][0] = (float)dVar18;
  pTVar23->M[3][1] = (float)dVar19;
  pTVar23->M[3][2] = (float)dVar16;
  pTVar23->M[3][3] = (float)dVar17;
  local_388 = (float)local_308;
  fStack_380 = (float)local_2f8;
  fStack_384 = (float)dStack_300;
  fStack_37c = (float)dStack_2f0;
  this_00->X = local_388;
  this_00->Y = fStack_384;
  this_00->Z = fStack_380;
  this_00->W = fStack_37c;
  this->OwnerParameters[uVar27].EnginePosition.field0_0x0._s_0.X = (float)local_338;
  this->OwnerParameters[uVar27].EnginePosition.field0_0x0._s_0.Y = (float)dStack_330;
  this->OwnerParameters[uVar27].EnginePosition.field0_0x0._s_0.Z = (float)local_328;
  dVar5 = (this->GatheredInstanceParameters).Velocity.field0_0x0._s_0.Y;
  dVar6 = (this->GatheredInstanceParameters).Velocity.field0_0x0._s_0.Z;
  this->OwnerParameters[uVar27].EngineVelocity.field0_0x0._s_0.X =
       (float)(this->GatheredInstanceParameters).Velocity.field0_0x0._s_0.X;
  this->OwnerParameters[uVar27].EngineVelocity.field0_0x0._s_0.Y = (float)dVar5;
  this->OwnerParameters[uVar27].EngineVelocity.field0_0x0._s_0.Z = (float)dVar6;
  fVar28 = __real_3f800000;
  local_3e8._0_8_ = 0x3f800000;
  local_3e8._s_0.Z = 0.0;
  UE::Math::TQuat<float>::RotateVector
            (this_00,(TVector<float> *)&local_3b8._s_0,(TVector<float> *)&local_3e8._s_0);
  *(undefined8 *)&this->OwnerParameters[uVar27].EngineXAxis.field0_0x0 = local_3b8._0_8_;
  this->OwnerParameters[uVar27].EngineXAxis.field0_0x0._s_0.Z = local_3b8._s_0.Z;
  local_3d8._s_0.X = 0.0;
  local_3d8._4_8_ = 0x3f800000;
  UE::Math::TQuat<float>::RotateVector
            (this_00,(TVector<float> *)&local_3ac._s_0,(TVector<float> *)&local_3d8._s_0);
  *(undefined8 *)&this->OwnerParameters[uVar27].EngineYAxis.field0_0x0 = local_3ac._0_8_;
  this->OwnerParameters[uVar27].EngineYAxis.field0_0x0._s_0.Z = local_3ac._s_0.Z;
  local_3c8._0_8_ = 0;
  local_3c8._s_0.Z = 1.0;
  UE::Math::TQuat<float>::RotateVector
            (this_00,(TVector<float> *)&local_3a0[0]._s_0,(TVector<float> *)&local_3c8._s_0);
  *(undefined8 *)&this->OwnerParameters[uVar27].EngineZAxis.field0_0x0 = local_3a0[0]._0_8_;
  this->OwnerParameters[uVar27].EngineZAxis.field0_0x0._s_0.Z = (float)local_3a0[0]._8_4_;
  local_2e8 = (this->GatheredInstanceParameters).ComponentTrans.Scale3D.XY.m128d_f64[0];
  dStack_2e0 = (this->GatheredInstanceParameters).ComponentTrans.Scale3D.XY.m128d_f64[1];
  local_2d8 = (this->GatheredInstanceParameters).ComponentTrans.Scale3D.ZW.m128d_f64[0];
  this->OwnerParameters[uVar27].EngineScale.field0_0x0._s_0.X = (float)local_2e8;
  this->OwnerParameters[uVar27].EngineScale.field0_0x0._s_0.Y = (float)dStack_2e0;
  this->OwnerParameters[uVar27].EngineScale.field0_0x0._s_0.Z = (float)local_2d8;
  fVar3 = (this->LWCTile).field0_0x0._s_0.Y;
  fVar4 = (this->LWCTile).field0_0x0._s_0.Z;
  this->OwnerParameters[uVar27].EngineLWCTile.field0_0x0._s_0.X = (this->LWCTile).field0_0x0._s_0.X;
  this->OwnerParameters[uVar27].EngineLWCTile.field0_0x0._s_0.Y = fVar3;
  this->OwnerParameters[uVar27].EngineLWCTile.field0_0x0._s_0.Z = fVar4;
  this->OwnerParameters[uVar27].EngineLWCTile.field0_0x0._s_0.W = 2097152.0;
  this->SystemParameters[uVar27].EngineEmitterCount =
       (this->GatheredInstanceParameters).EmitterCount;
  this->SystemParameters[uVar27].EngineAliveEmitterCount =
       (this->GatheredInstanceParameters).NumAlive;
  this->SystemParameters[uVar27].SignificanceIndex = this->SignificanceIndex;
  this->SystemParameters[uVar27].RandomSeed = this->RandomSeedOffset + this->RandomSeed;
  pTVar7 = (this->SystemSimulation).SharedReferenceCount.ReferenceController;
  pFVar8 = (this->SystemSimulation).Object;
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pFVar8 == (FNiagaraSystemSimulation *)0x0) {
    bVar24 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    if (bVar24) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  this->SystemParameters[uVar27].CurrentTimeStep = (pFVar8->TickInfo).TickNumber;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  pTVar7 = (this->SystemSimulation).SharedReferenceCount.ReferenceController;
  pFVar8 = (this->SystemSimulation).Object;
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pFVar8 == (FNiagaraSystemSimulation *)0x0) {
    bVar24 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    if (bVar24) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  this->SystemParameters[uVar27].NumTimeSteps = (pFVar8->TickInfo).TickCount;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  pTVar7 = (this->SystemSimulation).SharedReferenceCount.ReferenceController;
  pFVar8 = (this->SystemSimulation).Object;
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pFVar8 == (FNiagaraSystemSimulation *)0x0) {
    bVar24 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    if (bVar24) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  this->SystemParameters[uVar27].TimeStepFraction = (pFVar8->TickInfo).TimeStepFraction;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  this->GlobalParameters[uVar27].WorldDeltaTime =
       (this->GatheredInstanceParameters).WorldDeltaSeconds;
  this->GlobalParameters[uVar27].EngineDeltaTime = (this->GatheredInstanceParameters).DeltaSeconds;
  fVar3 = (this->GatheredInstanceParameters).DeltaSeconds;
  if (fVar3 <= 0.0) {
    fVar28 = 0.0;
  }
  else {
    fVar28 = fVar28 / fVar3;
  }
  this->GlobalParameters[uVar27].EngineInvDeltaTime = fVar28;
  this->GlobalParameters[uVar27].EngineRealTime = (this->GatheredInstanceParameters).RealTimeSeconds
  ;
  this->GlobalParameters[uVar27].EngineTime = (this->GatheredInstanceParameters).TimeSeconds;
  iVar25 = FNiagaraPlatformSet::GetQualityLevel();
  this->GlobalParameters[uVar27].QualityLevel = iVar25;
  FNiagaraParameterStore::Tick(&this->InstanceParameters);
  (this->InstanceParameters).bParametersDirty = 1;
  return;
}

// TickInstanceParameters_GameThread @ 1493ffa20

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __thiscall
FNiagaraSystemInstance::TickInstanceParameters_GameThread
          (FNiagaraSystemInstance *this,float param_1)

{
  VectorRegister4Double *pVVar1;
  int *piVar2;
  uint *puVar3;
  double dVar4;
  undefined1 uVar5;
  longlong *plVar6;
  TReferenceControllerBase<1> *pTVar7;
  FNiagaraSystemSimulation *pFVar8;
  UWorld *pUVar9;
  FNiagaraUserRedirectionParameterStore *this_00;
  code *pcVar10;
  undefined1 auVar11 [16];
  double dVar12;
  undefined1 auVar13 [16];
  double dVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  int iVar19;
  undefined8 uVar20;
  bool bVar21;
  uint uVar22;
  int iVar23;
  UObject *pUVar24;
  double *pdVar25;
  FNiagaraWorldManager *this_01;
  FNiagaraEmitterInstance *this_02;
  FVersionedNiagaraEmitterData *pFVar26;
  uint uVar27;
  FScriptContainerElement *pFVar28;
  longlong lVar29;
  int iVar30;
  byte bVar31;
  uint uVar32;
  uint uVar33;
  float fVar34;
  double dVar35;
  double dVar36;
  float fVar37;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  double local_148;
  TVector<double>_u_0 local_138;
  TVector<double>_u_0 local_118;
  TVector<double>_u_0 local_f8;
  TVector<double>_u_0 local_d8;
  undefined1 local_b8 [16];
  double local_a8;
  double local_a0;
  double dStack_98;
  double local_90;
  undefined1 local_88 [96];
  
  bVar21 = FWeakObjectPtr::IsValid(&(this->AttachComponent).WeakPtr);
  uVar20 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  fVar37 = 0.0;
  if (bVar21) {
    pUVar24 = FWeakObjectPtr::Get(&(this->AttachComponent).WeakPtr);
    dVar4 = *(double *)&pUVar24[0xc].field_0x18;
    (this->WorldTransform).Rotation.XY.m128d_f64[0] = *(double *)&pUVar24[0xc].field_0x10;
    (this->WorldTransform).Rotation.XY.m128d_f64[1] = dVar4;
    dVar4 = *(double *)(pUVar24 + 0xd);
    (this->WorldTransform).Rotation.ZW.m128d_f64[0] = *(double *)&pUVar24[0xc].field_0x20;
    (this->WorldTransform).Rotation.ZW.m128d_f64[1] = dVar4;
    dVar4 = *(double *)&pUVar24[0xd].field_0x10;
    (this->WorldTransform).Translation.XY.m128d_f64[0] = *(double *)&pUVar24[0xd].field_0x8;
    (this->WorldTransform).Translation.XY.m128d_f64[1] = dVar4;
    dVar4 = *(double *)&pUVar24[0xd].field_0x20;
    (this->WorldTransform).Translation.ZW.m128d_f64[0] = *(double *)&pUVar24[0xd].field_0x18;
    (this->WorldTransform).Translation.ZW.m128d_f64[1] = dVar4;
    dVar4 = *(double *)&pUVar24[0xe].field_0x8;
    (this->WorldTransform).Scale3D.XY.m128d_f64[0] = *(double *)(pUVar24 + 0xe);
    (this->WorldTransform).Scale3D.XY.m128d_f64[1] = dVar4;
    dVar35 = __real_c140000000000000;
    dVar4 = *(double *)&pUVar24[0xe].field_0x18;
    (this->WorldTransform).Scale3D.ZW.m128d_f64[0] = *(double *)&pUVar24[0xe].field_0x10;
    (this->WorldTransform).Scale3D.ZW.m128d_f64[1] = dVar4;
    dVar36 = (double)(this->LWCTile).field0_0x0._s_0.X * dVar35;
    local_a8 = (double)(this->LWCTile).field0_0x0._s_0.Z * dVar35;
    dVar4 = (this->WorldTransform).Translation.ZW.m128d_f64[0];
    dVar12 = (this->WorldTransform).Translation.ZW.m128d_f64[1] + 0.0;
    dVar35 = (double)(this->LWCTile).field0_0x0._s_0.Y * dVar35;
    local_b8._8_4_ = SUB84(dVar35,0);
    local_b8._0_8_ = dVar36;
    local_b8._12_4_ = (int)((ulonglong)dVar35 >> 0x20);
    dVar35 = (this->WorldTransform).Translation.XY.m128d_f64[1] + dVar35;
    auVar13._8_4_ = SUB84(dVar35,0);
    auVar13._0_8_ = (this->WorldTransform).Translation.XY.m128d_f64[0] + dVar36;
    auVar13._12_4_ = (int)((ulonglong)dVar35 >> 0x20);
    *(undefined1 (*) [16])(this->WorldTransform).Translation.XY.m128d_f64 = auVar13;
    auVar11._8_4_ = SUB84(dVar12,0);
    auVar11._0_8_ = local_a8 + dVar4;
    auVar11._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
    *(undefined1 (*) [16])(this->WorldTransform).Translation.ZW.m128d_f64 = auVar11;
    uVar20 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    pVVar1 = &(this->WorldTransform).Translation;
    uVar15 = *(undefined4 *)(pVVar1->XY).m128d_f64;
    uVar16 = *(undefined4 *)((longlong)(this->WorldTransform).Translation.XY.m128d_f64 + 4);
    pdVar25 = (this->WorldTransform).Translation.XY.m128d_f64 + 1;
    uVar17 = *(undefined4 *)pdVar25;
    uVar18 = *(undefined4 *)((longlong)(this->WorldTransform).Translation.XY.m128d_f64 + 0xc);
    dVar12 = *pdVar25;
    dVar4 = (this->WorldTransform).Translation.ZW.m128d_f64[0];
    local_158 = uVar15;
    uStack_154 = uVar16;
    uStack_150 = uVar17;
    uStack_14c = uVar18;
    local_148 = dVar4;
    if (0.0 < param_1) {
      if ((__real_322bcc77 < (float)((uint)this->Age & __xmm_7fffffff7fffffff7fffffff7fffffff)) ||
         (this->System->bInitialOwnerVelocityFromActor != '\0')) {
        if ((this->PreviousLocation).bIsSet == false) {
          pUVar24 = FWeakObjectPtr::Get(&(this->AttachComponent).WeakPtr);
          plVar6 = *(longlong **)&pUVar24[4].field_0x8;
          if (plVar6 != (longlong *)0x0) {
            pdVar25 = (double *)(**(code **)(*plVar6 + 0x360))(plVar6,local_88);
            dVar12 = pdVar25[1];
            (this->GatheredInstanceParameters).Velocity.field0_0x0._s_0.X = *pdVar25;
            (this->GatheredInstanceParameters).Velocity.field0_0x0._s_0.Y = dVar12;
            (this->GatheredInstanceParameters).Velocity.field0_0x0._s_0.Z = pdVar25[2];
          }
        }
        else {
          dVar35 = (this->PreviousLocation).TypedValue.field0_0x0._s_0.Y;
          dVar36 = (this->PreviousLocation).TypedValue.field0_0x0._s_0.Z;
          dVar14 = __real_3ff0000000000000 / (double)param_1;
          (this->GatheredInstanceParameters).Velocity.field0_0x0._s_0.X =
               ((pVVar1->XY).m128d_f64[0] - (this->PreviousLocation).TypedValue.field0_0x0._s_0.X) *
               dVar14;
          (this->GatheredInstanceParameters).Velocity.field0_0x0._s_0.Y = (dVar12 - dVar35) * dVar14
          ;
          (this->GatheredInstanceParameters).Velocity.field0_0x0._s_0.Z = (dVar4 - dVar36) * dVar14;
        }
      }
      else {
        (this->GatheredInstanceParameters).Velocity.field0_0x0._s_0.X =
             UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
        (this->GatheredInstanceParameters).Velocity.field0_0x0._s_0.Y = (double)uVar20;
        (this->GatheredInstanceParameters).Velocity.field0_0x0._s_0.Z =
             UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      }
    }
    if ((TOptional<UE::Math::TVector<double>_> *)&local_158 != &this->PreviousLocation) {
      *(undefined4 *)&(this->PreviousLocation).TypedValue.field0_0x0 = uVar15;
      *(undefined4 *)((longlong)&(this->PreviousLocation).TypedValue.field0_0x0 + 4) = uVar16;
      *(undefined4 *)((longlong)&(this->PreviousLocation).TypedValue.field0_0x0 + 8) = uVar17;
      *(undefined4 *)((longlong)&(this->PreviousLocation).TypedValue.field0_0x0 + 0xc) = uVar18;
      (this->PreviousLocation).TypedValue.field0_0x0._s_0.Z = dVar4;
      (this->PreviousLocation).bIsSet = true;
    }
  }
  else {
    (this->GatheredInstanceParameters).Velocity.field0_0x0._s_0.X =
         UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    (this->GatheredInstanceParameters).Velocity.field0_0x0._s_0.Y = (double)uVar20;
    (this->GatheredInstanceParameters).Velocity.field0_0x0._s_0.Z =
         UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  }
  dVar4 = (this->WorldTransform).Rotation.XY.m128d_f64[0];
  dVar12 = (this->WorldTransform).Rotation.XY.m128d_f64[1];
  dVar35 = (this->WorldTransform).Rotation.ZW.m128d_f64[0];
  dVar36 = (this->WorldTransform).Rotation.ZW.m128d_f64[1];
  (this->GatheredInstanceParameters).EmitterCount = (this->Emitters).ArrayNum;
  (this->GatheredInstanceParameters).ComponentTrans.Rotation.XY.m128d_f64[0] = dVar4;
  (this->GatheredInstanceParameters).ComponentTrans.Rotation.XY.m128d_f64[1] = dVar12;
  dVar4 = (this->WorldTransform).Translation.XY.m128d_f64[0];
  dVar12 = (this->WorldTransform).Translation.XY.m128d_f64[1];
  (this->GatheredInstanceParameters).ComponentTrans.Rotation.ZW.m128d_f64[0] = dVar35;
  (this->GatheredInstanceParameters).ComponentTrans.Rotation.ZW.m128d_f64[1] = dVar36;
  dVar35 = (this->WorldTransform).Translation.ZW.m128d_f64[0];
  dVar36 = (this->WorldTransform).Translation.ZW.m128d_f64[1];
  (this->GatheredInstanceParameters).ComponentTrans.Translation.XY.m128d_f64[0] = dVar4;
  (this->GatheredInstanceParameters).ComponentTrans.Translation.XY.m128d_f64[1] = dVar12;
  dVar4 = (this->WorldTransform).Scale3D.XY.m128d_f64[0];
  dVar12 = (this->WorldTransform).Scale3D.XY.m128d_f64[1];
  (this->GatheredInstanceParameters).ComponentTrans.Translation.ZW.m128d_f64[0] = dVar35;
  (this->GatheredInstanceParameters).ComponentTrans.Translation.ZW.m128d_f64[1] = dVar36;
  dVar35 = (this->WorldTransform).Scale3D.ZW.m128d_f64[0];
  dVar36 = (this->WorldTransform).Scale3D.ZW.m128d_f64[1];
  (this->GatheredInstanceParameters).ComponentTrans.Scale3D.XY.m128d_f64[0] = dVar4;
  (this->GatheredInstanceParameters).ComponentTrans.Scale3D.XY.m128d_f64[1] = dVar12;
  (this->GatheredInstanceParameters).ComponentTrans.Scale3D.ZW.m128d_f64[0] = dVar35;
  (this->GatheredInstanceParameters).ComponentTrans.Scale3D.ZW.m128d_f64[1] = dVar36;
  (this->GatheredInstanceParameters).DeltaSeconds = param_1;
  pTVar7 = (this->SystemSimulation).SharedReferenceCount.ReferenceController;
  pFVar8 = (this->SystemSimulation).Object;
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((pFVar8 == (FNiagaraSystemSimulation *)0x0) &&
     (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar21)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  (this->GatheredInstanceParameters).WorldDeltaSeconds = (pFVar8->TickInfo).EngineTick;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  (this->GatheredInstanceParameters).NumAlive = 0;
  if ((this->World == (UWorld *)0x0) &&
     (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                         ("World",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSystemInstance.cpp"
                          ,0x848,L""), bVar21)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  pUVar9 = this->World;
  (this->GatheredInstanceParameters).TimeSeconds = (float)pUVar9->TimeSeconds;
  dVar4 = pUVar9->RealTimeSeconds;
  uVar5 = this->field_0x840;
  bVar31 = uVar5 ^ 1;
  this->field_0x840 = bVar31;
  (this->GatheredInstanceParameters).RealTimeSeconds = (float)dVar4;
  if ((~this->CurrentFrameIndex & 1) != 0) {
    bVar31 = bVar31 | 2;
    this->field_0x840 = bVar31;
  }
  dVar4 = __real_4140000000000000;
  uVar32 = bVar31 & 1;
  this->SystemParameters[uVar32].EngineSystemAge = this->Age;
  this->SystemParameters[uVar32].EngineTickCount = this->TickCount;
  fVar34 = ((this->GatheredInstanceParameters).TimeSeconds - this->LastRenderTime) -
           GLastRenderTimeSafetyBias;
  if (fVar34 <= 0.0) {
    fVar34 = 0.0;
  }
  this->SystemParameters[uVar32].EngineTimeSinceRendered = fVar34;
  this->SystemParameters[uVar32].EngineExecutionState = this->RequestedExecutionState;
  if (this->bLODDistanceIsValid == '\0') {
    if ((this->World == (UWorld *)0x0) &&
       (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                           ("World",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSystemInstance.cpp"
                            ,0x577,L""), bVar21)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    this_01 = FNiagaraWorldManager::Get(this->World);
    if (this_01 != (FNiagaraWorldManager *)0x0) {
      if ((this->World == (UWorld *)0x0) &&
         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("World",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSystemInstance.cpp"
                              ,0x7a9,L""), bVar21)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      local_a0 = (this->WorldTransform).Translation.XY.m128d_f64[0];
      dStack_98 = (this->WorldTransform).Translation.XY.m128d_f64[1];
      local_90 = (this->WorldTransform).Translation.ZW.m128d_f64[0];
      local_138._s_0.X = (double)(this->LWCTile).field0_0x0._s_0.X * dVar4 + local_a0;
      local_138._s_0.Y = (double)(this->LWCTile).field0_0x0._s_0.Y * dVar4 + dStack_98;
      fVar37 = (this->LWCTile).field0_0x0._s_0.Z;
      this->LODDistance = 0.0;
      local_138._s_0.Z = (double)fVar37 * dVar4 + local_90;
      dVar12 = FNiagaraWorldManager::GetLODDistance(this_01,(TVector<double> *)&local_138._s_0);
      this->bLODDistanceIsValid = '\x01';
      fVar37 = (float)dVar12;
      this->LODDistance = fVar37;
    }
  }
  else {
    fVar37 = this->LODDistance;
  }
  this->SystemParameters[uVar32].EngineLodDistance = fVar37;
  this->SystemParameters[uVar32].EngineLodDistanceFraction = fVar37 / this->MaxLODDistance;
  this->SystemParameters[uVar32].SignificanceIndex = this->SignificanceIndex;
  this->SystemParameters[uVar32].RandomSeed = this->RandomSeedOffset + this->RandomSeed;
  pTVar7 = (this->SystemSimulation).SharedReferenceCount.ReferenceController;
  pFVar8 = (this->SystemSimulation).Object;
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((pFVar8 == (FNiagaraSystemSimulation *)0x0) &&
     (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar21)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  this->SystemParameters[uVar32].CurrentTimeStep = (pFVar8->TickInfo).TickNumber;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  pTVar7 = (this->SystemSimulation).SharedReferenceCount.ReferenceController;
  pFVar8 = (this->SystemSimulation).Object;
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((pFVar8 == (FNiagaraSystemSimulation *)0x0) &&
     (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar21)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  this->SystemParameters[uVar32].NumTimeSteps = (pFVar8->TickInfo).TickCount;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  pTVar7 = (this->SystemSimulation).SharedReferenceCount.ReferenceController;
  pFVar8 = (this->SystemSimulation).Object;
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((pFVar8 == (FNiagaraSystemSimulation *)0x0) &&
     (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar21)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  this->SystemParameters[uVar32].TimeStepFraction = (pFVar8->TickInfo).TimeStepFraction;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  uVar33 = 0;
  this->SystemParameters[uVar32].NumParticles = 0;
  iVar19 = __real_3f800000;
  if (0 < (this->GatheredInstanceParameters).EmitterCount) {
    lVar29 = 0;
    iVar30 = 0;
    do {
      uVar27 = this->CurrentFrameIndex + iVar30;
      uVar22 = 0;
      if ((int)uVar27 < (this->EmitterParameters).ArrayNum) {
        uVar22 = ~uVar27 >> 0x1f;
      }
      if ((uVar22 == 0) &&
         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar21)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      pFVar28 = (this->EmitterParameters).AllocatorInstance.Data + (longlong)(int)uVar27 * 0x20;
      uVar22 = 0;
      if ((int)uVar33 < (this->Emitters).ArrayNum) {
        uVar22 = ~uVar33 >> 0x1f;
      }
      if ((uVar22 == 0) &&
         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar21)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      this_02 = (FNiagaraEmitterInstance *)
                (**(code **)(**(longlong **)((this->Emitters).AllocatorInstance.Data + lVar29) +
                            0x68))();
      if ((this_02 == (FNiagaraEmitterInstance *)0x0) || (this_02->ExecutionState == Disabled)) {
        *(int *)pFVar28 = 0;
      }
      else {
        iVar23 = FNiagaraEmitterInstance::GetNumParticles(this_02);
        puVar3 = &this->SystemParameters[uVar32].NumParticles;
        *puVar3 = *puVar3 + iVar23;
        *(int *)pFVar28 = iVar23;
        *(int *)(pFVar28 + 4) = this_02->TotalSpawnedParticles;
        *(int *)(pFVar28 + 0x10) = this_02[5].RendererBindings.DataInterfaces.ArrayMax;
        *(int *)(pFVar28 + 0x14) =
             *(int *)&this_02[5].RendererBindings.UObjects.AllocatorInstance.Data;
        pFVar26 = FVersionedNiagaraEmitter::GetEmitterData(&this_02->VersionedEmitter);
        if ((pFVar26 == (FVersionedNiagaraEmitterData *)0x0) &&
           (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                               ("VersionedEmitter.GetEmitterData() != nullptr",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Internal\\NiagaraEmitterInstanceImpl.h"
                                ,0x56,L""), bVar21)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        pFVar26 = FVersionedNiagaraEmitter::GetEmitterData(&this_02->VersionedEmitter);
        if ((pFVar26->CurrentScalabilitySettings).bScaleSpawnCount == 0) {
          *(int *)(pFVar28 + 8) = iVar19;
          piVar2 = &(this->GatheredInstanceParameters).NumAlive;
          *piVar2 = *piVar2 + 1;
        }
        else {
          *(float *)(pFVar28 + 8) = (pFVar26->CurrentScalabilitySettings).SpawnCountScale;
          piVar2 = &(this->GatheredInstanceParameters).NumAlive;
          *piVar2 = *piVar2 + 1;
        }
      }
      uVar33 = uVar33 + 1;
      iVar30 = iVar30 + 2;
      lVar29 = lVar29 + 0x10;
    } while ((int)uVar33 < (this->GatheredInstanceParameters).EmitterCount);
  }
  this_00 = this->OverrideParameters;
  if (this_00 != (FNiagaraUserRedirectionParameterStore *)0x0) {
    local_118._s_0.X = (double)(this->LWCTile).field0_0x0._s_0.X * dVar4;
    local_118._s_0.Y = (double)(this->LWCTile).field0_0x0._s_0.Y * dVar4;
    local_118._s_0.Z = (double)(this->LWCTile).field0_0x0._s_0.Z * dVar4;
    FNiagaraLWCConverter::FNiagaraLWCConverter
              ((FNiagaraLWCConverter *)&local_f8._s_0,(TVector<double> *)&local_118._s_0);
    local_d8._s_0.X = local_f8._s_0.X;
    local_d8._s_0.Y = local_f8._s_0.Y;
    local_d8._s_0.Z = local_f8._s_0.Z;
    FNiagaraParameterStore::ResolvePositions
              ((FNiagaraParameterStore *)this_00,(FNiagaraLWCConverter *)&local_d8._s_0);
    FNiagaraParameterStore::Tick((FNiagaraParameterStore *)this->OverrideParameters);
  }
  return;
}

// TickSystemState @ 149400310

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall FNiagaraSystemInstance::TickSystemState(FNiagaraSystemInstance *this)

{
  uint *puVar1;
  float fVar2;
  ENiagaraExecutionState EVar3;
  float fVar4;
  int iVar5;
  uint uVar6;
  FNiagaraSystemStateData *pFVar7;
  ENiagaraExecutionState EVar8;
  float *pfVar9;
  ENiagaraExecutionState EVar10;
  float fVar11;
  
  EVar3 = this->SystemParameters[this->CurrentFrameIndex].EngineExecutionState;
  EVar8 = EVar3;
  if (EVar3 == Active) {
    if (this->Age <= this->SystemState_CurrentLoopAgeEnd &&
        this->SystemState_CurrentLoopAgeEnd != this->Age) {
      return;
    }
    pFVar7 = UNiagaraSystem::GetSystemStateData(this->System);
    fVar4 = __real_3f800000;
    if (pFVar7->bIgnoreSystemState == 0) {
      EVar10 = Inactive;
      if (pFVar7->InactiveResponse == Kill) {
        EVar10 = Complete;
      }
      EVar8 = EVar10;
      if (pFVar7->LoopBehavior != Once) {
        do {
          iVar5 = this->SystemState_LoopCount + 1;
          this->SystemState_LoopCount = iVar5;
          if ((pFVar7->LoopBehavior == Multiple) && (EVar8 = EVar10, pFVar7->LoopCount <= iVar5))
          break;
          puVar1 = &(this->SystemState_RandomStream).Seed;
          if (pFVar7->bRecalculateDurationEachLoop != 0) {
            fVar11 = (pFVar7->LoopDuration).Max;
            fVar2 = (pFVar7->LoopDuration).Min;
            uVar6 = *puVar1 * 0xbb38435 + 0x3619636b;
            *puVar1 = uVar6;
            this->SystemState_CurrentLoopDuration =
                 (fVar11 - fVar2) * ((float)(uVar6 >> 9 | 0x3f800000) - fVar4) + fVar2;
          }
          pfVar9 = &this->SystemState_CurrentLoopDelay;
          if (pFVar7->bDelayFirstLoopOnly == 0) {
            if (pFVar7->bRecalculateDelayEachLoop != 0) {
              fVar11 = (pFVar7->LoopDelay).Max;
              fVar2 = (pFVar7->LoopDelay).Min;
              uVar6 = *puVar1 * 0xbb38435 + 0x3619636b;
              *puVar1 = uVar6;
              *pfVar9 = (fVar11 - fVar2) * ((float)(uVar6 >> 9 | 0x3f800000) - fVar4) + fVar2;
            }
          }
          else {
            *pfVar9 = 0.0;
          }
          this->SystemState_CurrentLoopAgeStart = this->SystemState_CurrentLoopAgeEnd;
          fVar11 = this->SystemState_CurrentLoopAgeEnd + *pfVar9 +
                   this->SystemState_CurrentLoopDuration;
          this->SystemState_CurrentLoopAgeEnd = fVar11;
          EVar8 = EVar3;
        } while (fVar11 < this->Age || fVar11 == this->Age);
      }
    }
  }
  SetActualExecutionState(this,EVar8);
  return;
}

// Tick_Concurrent @ 1494004e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000149400ad3) */
/* WARNING: Removing unreachable block (ram,0x000149400c07) */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall FNiagaraSystemInstance::Tick_Concurrent(FNiagaraSystemInstance *this,bool param_1)

{
  undefined1 *puVar1;
  uint *puVar2;
  FScriptContainerElement *pFVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  FNiagaraSystemSimulation *pFVar7;
  UNiagaraSystem *pUVar8;
  TAtomic<FMinimalName> TVar9;
  TStatIdData *pTVar10;
  longlong *plVar11;
  FNiagaraComputeExecutionContext *this_00;
  code *pcVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  double dVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  double dVar31;
  double dVar32;
  undefined1 auVar33 [12];
  undefined1 auVar34 [12];
  bool bVar35;
  bool bVar36;
  bool bVar37;
  uchar uVar38;
  uchar uVar39;
  uchar uVar40;
  uchar uVar41;
  uchar uVar42;
  uchar uVar43;
  uchar uVar44;
  uchar uVar45;
  undefined8 uVar46;
  bool bVar47;
  bool bVar48;
  bool bVar49;
  char cVar50;
  bool bVar51;
  int iVar52;
  FName *pFVar53;
  FThreadSafeStaticStat<FStat_STAT_NiagaraSystemInst_TickCNC> FVar54;
  TStatId TVar55;
  ForElementType<unsigned_int> FVar56;
  longlong lVar57;
  byte bVar58;
  uint uVar59;
  FName FVar60;
  FScriptContainerElement *pFVar61;
  FScriptContainerElement *pFVar62;
  FName FVar63;
  uint uVar64;
  char cVar65;
  FScriptContainerElement *pFVar66;
  int iVar67;
  undefined4 uVar68;
  undefined4 uVar69;
  undefined4 uVar70;
  undefined4 uVar71;
  undefined4 uVar72;
  undefined4 uVar73;
  undefined4 uVar74;
  undefined4 uVar75;
  double dVar76;
  double dVar77;
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  double dVar80;
  double dVar83;
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  double dVar84;
  double dVar88;
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined4 uVar89;
  undefined4 uVar90;
  undefined4 uVar91;
  undefined4 uVar92;
  undefined4 uVar93;
  undefined4 uVar94;
  undefined4 uVar95;
  undefined4 uVar96;
  undefined4 uVar97;
  undefined4 uVar98;
  undefined4 uVar99;
  undefined4 uVar100;
  undefined4 uVar101;
  undefined4 uVar102;
  undefined1 auStackY_3c8 [32];
  undefined1 local_366;
  char local_365;
  FNiagaraCrashReporterScope local_364 [12];
  undefined1 local_358 [16];
  FLLMScope local_348 [2];
  FName local_340;
  undefined1 local_338 [16];
  FColor_u_0 local_328;
  FColor_u_0 local_324;
  FName local_320;
  byte local_318;
  undefined1 local_310 [16];
  undefined1 local_300 [8];
  double dStack_2f8;
  undefined1 local_2f0 [8];
  double dStack_2e8;
  undefined8 local_2e0;
  undefined1 local_2d8 [16];
  undefined1 local_2c8 [16];
  undefined1 local_2b8 [16];
  undefined8 local_2a8;
  FName local_2a0;
  FName local_298;
  FName local_290;
  FName local_280;
  FMemScope local_270;
  undefined1 local_268 [16];
  undefined1 local_258 [16];
  undefined1 local_248 [16];
  undefined1 local_238;
  undefined7 uStack_237;
  undefined1 local_230 [16];
  undefined1 local_220 [16];
  undefined1 local_210 [16];
  undefined1 local_200;
  undefined7 uStack_1ff;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined1 local_1c8;
  undefined4 uStack_1c7;
  undefined2 uStack_1c3;
  undefined1 uStack_1c1;
  FName local_1c0;
  FName local_1b8;
  undefined1 local_1b0 [16];
  undefined1 local_1a0 [16];
  undefined1 local_190 [16];
  undefined8 local_180;
  undefined1 local_178 [16];
  undefined1 local_168 [16];
  undefined1 local_158 [16];
  undefined8 local_148;
  uint local_140;
  uint uStack_13c;
  uint uStack_138;
  uint uStack_134;
  uint local_130;
  uint uStack_12c;
  uint uStack_128;
  uint uStack_124;
  undefined4 local_120;
  undefined4 uStack_11c;
  uint uStack_118;
  uint uStack_114;
  undefined1 local_110;
  undefined7 uStack_10f;
  TBitArray<TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> local_108;
  ulonglong local_d8;
  
  local_d8 = __security_cookie.value ^ (ulonglong)auStackY_3c8;
  pFVar62 = (FScriptContainerElement *)0x0;
  iVar67 = 0;
  FVar54 = StatPtr_STAT_NiagaraSystemInst_TickCNC;
  local_365 = param_1;
  if (StatPtr_STAT_NiagaraSystemInst_TickCNC ==
      (FThreadSafeStaticStat<FStat_STAT_NiagaraSystemInst_TickCNC>)0x0) {
    pFVar53 = ::FName::FName(&local_1c0,"STAT_NiagaraSystemInst_TickCNC");
    FVar54 = (FThreadSafeStaticStat<FStat_STAT_NiagaraSystemInst_TickCNC>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraSystemInst_TickCNC,
                        *pFVar53,L"System Instance Tick [CNC]","STATGROUP_Niagara","STATCAT_Niagara"
                        ,L"Niagara",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar63 = *(FName *)FVar54;
  bVar35 = false;
  bVar37 = false;
  local_290.ComparisonIndex.Value = 0;
  local_290.Number = 0;
  bVar47 = false;
  bVar49 = false;
  if ((FVar63.ComparisonIndex.Value.Value == 0) && (FVar63.Number == 0)) {
LAB_149400654:
    bVar37 = bVar49;
    bVar35 = bVar47;
    bVar47 = false;
    local_340 = local_290;
    FVar63 = local_290;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_328.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_328._s_0,(char *)*(FName *)((longlong)FVar54 + 0x10));
      bVar35 = false;
      bVar37 = true;
      bVar47 = false;
      bVar49 = true;
      if (-1 < CpuChannel->Enabled) {
        local_2a0.ComparisonIndex.Value = FVar63.ComparisonIndex.Value.Value;
        local_2a0.Number = FVar63.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_2a0,(wchar_t *)*(FName *)((longlong)FVar54 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSystemInstance.cpp"
                   ,0xa58);
        bVar35 = true;
        bVar37 = true;
        bVar47 = true;
        bVar49 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_149400654;
    local_358._0_4_ = FVar63.ComparisonIndex.Value;
    local_358._4_4_ = FVar63.Number;
    local_340 = FVar63;
    FThreadStats::AddMessage(FVar63,CycleScopeStart);
    bVar47 = true;
  }
  FLLMScope::FLLMScope(local_348,Niagara,false,None,Default,true);
  FMemScope::FMemScope(&local_270,Niagara,true);
  TVar55.StatIdPtr = (TStatIdData *)StatPtr_STAT_NiagaraOverview_GT_CNC;
  if (StatPtr_STAT_NiagaraOverview_GT_CNC ==
      (FThreadSafeStaticStat<FStat_STAT_NiagaraOverview_GT_CNC>)0x0) {
    pFVar53 = ::FName::FName(&local_1b8,"STAT_NiagaraOverview_GT_CNC");
    TVar55.StatIdPtr =
         FThreadSafeStaticStatBase::DoSetup
                   ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraOverview_GT_CNC,*pFVar53,
                    L"GT Concurrent Total","STATGROUP_NiagaraOverview","STATCAT_Niagara",
                    L"NiagaraOverview",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FScopeCycleCounterUObject::FScopeCycleCounterUObject
            ((FScopeCycleCounterUObject *)&local_320,(UObjectBaseUtility *)this->System,TVar55);
  FNiagaraCrashReporterScope::FNiagaraCrashReporterScope(local_364,this);
  this->GPUParamIncludeInterpolation = '\0';
  this->TotalGPUParamSize = 0;
  this->ActiveGPUEmitterCount = 0;
  if ((((this->ActualExecutionState == Complete) || (this->ActualExecutionState == Disabled)) ||
      (this->System == (UNiagaraSystem *)0x0)) ||
     ((((uint)this->System->_padding_ >> 0x1e & 1) != 0 ||
      (this->CachedDeltaSeconds <= __real_322bcc77 && __real_322bcc77 != this->CachedDeltaSeconds)))
     ) goto LAB_1494016e2;
  pFVar7 = (this->SystemSimulation).Object;
  uVar64 = (this->Emitters).ArrayNum;
  pFVar66 = pFVar62;
  if (pFVar7 != (FNiagaraSystemSimulation *)0x0) {
    pUVar8 = pFVar7->System;
    if (pUVar8 == (UNiagaraSystem *)0x0) {
      bVar49 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<_2996346430399968339>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSystemInstance.cpp"
                          ,0xbad,"NiagaraSystem != nullptr");
      if (bVar49) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
    }
    else {
      iVar67 = (pUVar8->EmitterExecutionOrder).ArrayNum;
      pFVar66 = (pUVar8->EmitterExecutionOrder).AllocatorInstance.Data;
      if ((iVar67 < 0) &&
         (bVar49 = ::FDebug::CheckVerifyFailedImpl2
                             ("InCount >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xeb,L""), bVar49)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
    }
  }
  uVar59 = uVar64 + 0x1f >> 5;
  local_108.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_108.MaxBits = 0x100;
  local_108.NumBits = uVar64;
  if (uVar64 + 0x1f >> 5 != 0) {
    if (8 < uVar59) {
      TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>::
      ResizeAllocation(&local_108.AllocatorInstance,0,uVar59,4);
      local_108.MaxBits = uVar59 << 5;
    }
    FVar56 = (ForElementType<unsigned_int>)&local_108;
    if (local_108.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FVar56 = local_108.AllocatorInstance.SecondaryData;
    }
    memset((void *)FVar56,0,(ulonglong)uVar59 << 2);
    uVar64 = local_108.NumBits & 0x8000001f;
    if ((int)uVar64 < 0) {
      uVar64 = (uVar64 - 1 | 0xffffffe0) + 1;
    }
    if (uVar64 != 0) {
      FVar56 = (ForElementType<unsigned_int>)&local_108;
      if (local_108.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        FVar56 = local_108.AllocatorInstance.SecondaryData;
      }
      puVar2 = (uint *)((longlong)FVar56 +
                       (longlong)
                       ((int)(local_108.NumBits + (local_108.NumBits >> 0x1f & 0x1fU)) >> 5) * 4);
      *puVar2 = *puVar2 & 0xffffffffU >> (0x20U - (char)uVar64 & 0x1f);
    }
  }
  pFVar3 = pFVar66 + (longlong)iVar67 * 4;
  local_358._0_8_ = pFVar3;
  pFVar61 = pFVar66;
  if (pFVar66 != pFVar3) {
    do {
      uVar64 = *(uint *)pFVar61;
      if (((this->Emitters).ArrayNum <= (int)(uVar64 >> 1)) &&
         (bVar49 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar49)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      cVar50 = (**(code **)(**(longlong **)
                              ((this->Emitters).AllocatorInstance.Data +
                              (ulonglong)(uVar64 >> 1) * 0x10) + 0x40))();
      if (cVar50 != '\0') {
        pFVar62 = (FScriptContainerElement *)&DAT_00000001;
        TBitArray<TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>::SetRange
                  (&local_108,*(uint *)pFVar61 >> 1,1,true);
      }
      pFVar61 = pFVar61 + 4;
    } while (pFVar61 != pFVar3);
    FVar63 = local_340;
    if ((char)pFVar62 != '\0') {
      pUVar8 = this->System;
      TVar9 = ((pUVar8->StatID_GT).StatIdPtr)->Name;
      if ((TVar9._0_4_ == 0) && (TVar9._4_4_ == 0)) {
        UNiagaraSystem::GenerateStatID(pUVar8);
      }
      pTVar10 = (pUVar8->StatID_GT_CNC).StatIdPtr;
      bVar49 = false;
      bVar36 = false;
      local_280.ComparisonIndex.Value = 0;
      local_280.Number = 0;
      bVar48 = false;
      bVar51 = false;
      FVar60 = *(FName *)&pTVar10->Name;
      if ((FVar60.ComparisonIndex.Value.Value == 0) && (FVar60.Number == 0)) {
LAB_149400a6b:
        bVar36 = bVar51;
        bVar49 = bVar48;
        bVar48 = false;
        FVar60 = local_280;
      }
      else {
        if (GCycleStatsShouldEmitNamedEvents != 0) {
          local_324.Bits = 0;
          FGenericPlatformMisc::BeginNamedEvent
                    ((FColor *)&local_324._s_0,(pTVar10->StatDescriptionAnsi).Ptr);
          bVar49 = false;
          bVar36 = true;
          bVar48 = false;
          bVar51 = true;
          if (-1 < CpuChannel->Enabled) {
            local_298.ComparisonIndex.Value = FVar60.ComparisonIndex.Value.Value;
            local_298.Number = FVar60.Number;
            FCpuProfilerTrace::OutputBeginDynamicEventWithId
                      (&local_298,(pTVar10->StatDescriptionWide).Ptr,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSystemInstance.cpp"
                       ,0xa80);
            bVar49 = true;
            bVar36 = true;
            bVar48 = true;
            bVar51 = true;
          }
        }
        if (FThreadStats::bPrimaryEnable == false) goto LAB_149400a6b;
        local_338._0_4_ = FVar60.ComparisonIndex.Value;
        local_338._4_4_ = FVar60.Number;
        FThreadStats::AddMessage(FVar60,CycleScopeStart);
        bVar48 = true;
      }
      uVar46 = local_358._0_8_;
      pFVar62 = pFVar66;
      do {
        uVar64 = *(uint *)pFVar62 >> 1;
        if ((local_108.NumBits <= (int)uVar64) &&
           (bVar51 = ::FDebug::CheckVerifyFailedImpl2
                               ("Index>=0 && Index<NumBits",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                ,0x5be,L""), bVar51)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        FVar56 = (ForElementType<unsigned_int>)&local_108;
        if (local_108.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
          FVar56 = local_108.AllocatorInstance.SecondaryData;
        }
        if ((*(uint *)((longlong)FVar56 + (longlong)((int)uVar64 >> 5) * 4) >> (uVar64 & 0x1f) & 1)
            != 0) {
          uVar64 = *(uint *)pFVar62;
          if (((this->Emitters).ArrayNum <= (int)(uVar64 >> 1)) &&
             (bVar51 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar51)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          (**(code **)(**(longlong **)
                         ((this->Emitters).AllocatorInstance.Data + (ulonglong)(uVar64 >> 1) * 0x10)
                      + 0x48))();
        }
        pFVar62 = pFVar62 + 4;
      } while (pFVar62 != (FScriptContainerElement *)uVar46);
      uVar46 = local_358._0_8_;
      iVar67 = 0;
      do {
        uVar64 = *(uint *)pFVar66;
        if (((this->Emitters).ArrayNum <= (int)(uVar64 >> 1)) &&
           (bVar51 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar51)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        uVar59 = *(uint *)pFVar66 >> 1;
        plVar11 = *(longlong **)
                   ((this->Emitters).AllocatorInstance.Data + (ulonglong)(uVar64 >> 1) * 0x10);
        if ((local_108.NumBits <= (int)uVar59) &&
           (bVar51 = ::FDebug::CheckVerifyFailedImpl2
                               ("Index>=0 && Index<NumBits",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                ,0x5be,L""), bVar51)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        FVar56 = (ForElementType<unsigned_int>)&local_108;
        if (local_108.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
          FVar56 = local_108.AllocatorInstance.SecondaryData;
        }
        if ((*(uint *)((longlong)FVar56 + (longlong)((int)uVar59 >> 5) * 4) >> (uVar59 & 0x1f) & 1)
            != 0) {
          (**(code **)(*plVar11 + 0x50))(plVar11);
        }
        if ((((*(int *)((longlong)plVar11 + 0xd4) != 3) && (*(int *)((longlong)plVar11 + 0xd4) != 4)
             ) && (*(char *)((longlong)plVar11 + 0xd1) == '\x01')) &&
           (lVar57 = (**(code **)(*plVar11 + 0x68))(plVar11), lVar57 != 0)) {
          if ((*(int *)(lVar57 + 0xd4) == 1) || (*(int *)(lVar57 + 0xd4) == 2)) {
            bVar51 = true;
          }
          else {
            bVar51 = false;
          }
          if (((0 < *(int *)(lVar57 + 0x854)) || (!bVar51)) &&
             (this_00 = *(FNiagaraComputeExecutionContext **)(lVar57 + 0x18),
             this_00 != (FNiagaraComputeExecutionContext *)0x0)) {
            bVar51 = this_00->HasInterpolationParameters;
            iVar52 = FNiagaraComputeExecutionContext::GetConstantBufferSize(this_00);
            iVar67 = iVar67 + iVar52 * ((bVar51 != false) + 1);
            if ((this_00->HasInterpolationParameters == false) &&
               (this->GPUParamIncludeInterpolation == '\0')) {
              bVar58 = 0;
            }
            else {
              bVar58 = 0x20;
            }
            this->ActiveGPUEmitterCount = this->ActiveGPUEmitterCount + 1;
            this->GPUParamIncludeInterpolation = bVar58 >> 5;
          }
        }
        pFVar66 = pFVar66 + 4;
      } while (pFVar66 != (FScriptContainerElement *)uVar46);
      uVar64 = this->ActiveGPUEmitterCount;
      if (uVar64 != 0) {
        iVar52 = (uVar64 + 0x13) * 0x20;
        if (this->GPUParamIncludeInterpolation != '\0') {
          iVar52 = (uVar64 + 0x13) * 0x40;
        }
        this->TotalGPUParamSize = iVar52 + iVar67;
      }
      if ((this->FixedBounds_CNC).IsValid == '\0') {
        pUVar8 = this->System;
        if (pUVar8->bFixedBounds == 0) {
          iVar67 = (this->Emitters).ArrayNum;
          pFVar62 = (this->Emitters).AllocatorInstance.Data;
          cVar65 = '\0';
          local_2d8 = ZEXT816(0);
          uVar72 = 0;
          uVar73 = 0;
          uVar74 = 0;
          uVar75 = 0;
          uVar95 = 0;
          uVar96 = 0;
          local_2c8 = ZEXT816(0);
          uVar70 = 0;
          uVar69 = 0;
          uVar71 = 0;
          uVar68 = 0;
          uVar97 = 0;
          uVar98 = 0;
          local_310 = ZEXT816(0);
          _local_300 = ZEXT816(0);
          auVar87 = _local_300;
          dStack_2f8 = 0.0;
          _local_2f0 = ZEXT816(0);
          auVar5 = _local_2f0;
          dStack_2e8 = 0.0;
          local_2b8 = ZEXT816(0);
          uVar93 = 0;
          uVar94 = 0;
          pFVar66 = pFVar62 + (longlong)iVar67 * 0x10;
          uVar101 = 0;
          uVar102 = 0;
          local_2e0 = 0;
          local_2a8 = 0;
          local_338 = ZEXT816(0);
          local_358 = ZEXT816(0);
          auVar78 = ZEXT816(0);
          uVar89 = 0;
          uVar90 = 0;
          uVar91 = 0;
          uVar92 = 0;
          uVar99 = 0;
          uVar100 = 0;
          cVar50 = '\0';
          dVar77 = dStack_2f8;
          dVar88 = 0.0;
          dVar80 = dStack_2e8;
          dVar83 = 0.0;
          _local_300 = auVar87;
          _local_2f0 = auVar5;
LAB_149400ed3:
          do {
            if ((this->Emitters).ArrayNum != iVar67) {
              local_366 = 0;
              `TCheckedPointerIterator<TSharedRef<FNiagaraEmitterInstance,1>,int,0>::operator!='::
              __l2::<lambda_1>::operator()(&local_366);
              uVar70 = local_338._0_4_;
              uVar69 = local_338._4_4_;
              uVar71 = local_338._8_4_;
              uVar68 = local_338._12_4_;
              uVar72 = local_358._0_4_;
              uVar73 = local_358._4_4_;
              uVar74 = local_358._8_4_;
              uVar75 = local_358._12_4_;
            }
            uVar46 = local_2e0;
            dVar76 = auVar78._0_8_;
            if (pFVar62 == pFVar66) goto LAB_1494010db;
            lVar57 = *(longlong *)pFVar62;
            auVar87 = *(undefined1 (*) [16])(lVar57 + 0xe0);
            uVar13 = auVar87._0_4_;
            uVar15 = auVar87._4_4_;
            uVar18 = auVar87._8_4_;
            uVar21 = auVar87._12_4_;
            auVar5 = *(undefined1 (*) [16])(lVar57 + 0xf0);
            uVar14 = auVar5._0_4_;
            uVar16 = auVar5._4_4_;
            uVar19 = auVar5._8_4_;
            uVar22 = auVar5._12_4_;
            auVar6 = *(undefined1 (*) [16])(lVar57 + 0x100);
            uVar17 = auVar6._4_4_;
            uVar20 = auVar6._8_4_;
            uVar23 = auVar6._12_4_;
            uVar4 = *(undefined8 *)(lVar57 + 0x110);
            dVar28 = auVar87._8_8_;
            dVar84 = auVar5._8_8_;
            dVar32 = auVar6._8_8_;
            dVar31 = auVar6._0_8_;
            local_2e0._0_1_ = (char)uVar4;
            local_2e0 = uVar46;
            if (*(char *)(lVar57 + 0xd8) != '\0') {
              local_1b0 = auVar87;
              local_1a0 = auVar5;
              local_190 = auVar6;
              local_180 = uVar4;
              if (cVar50 == '\0') {
                if ((char)local_2e0 != '\0') {
                  auVar33._4_8_ = dVar83;
                  auVar33._0_4_ = uVar17;
                  auVar81._0_8_ = auVar33._0_8_ << 0x20;
                  auVar81._8_4_ = uVar20;
                  auVar81._12_4_ = uVar23;
                  auVar34._4_8_ = dVar88;
                  auVar34._0_4_ = uVar16;
                  auVar85._0_8_ = auVar34._0_8_ << 0x20;
                  auVar85._8_4_ = uVar19;
                  auVar85._12_4_ = uVar22;
                  dVar80 = auVar81._8_8_;
                  dVar77 = auVar85._8_8_;
                  pFVar62 = pFVar62 + 0x10;
                  auVar78 = auVar6;
                  uVar89 = uVar13;
                  uVar90 = uVar15;
                  uVar91 = uVar14;
                  uVar92 = uVar16;
                  uVar99 = uVar18;
                  uVar100 = uVar21;
                  cVar50 = (char)local_2e0;
                  dVar88 = dVar84;
                  dVar83 = dVar32;
                  local_310 = auVar87;
                  _local_300 = auVar5;
                  _local_2f0 = auVar6;
                  local_2e0 = uVar4;
                  goto LAB_149400ed3;
                }
              }
              else if ((char)local_2e0 != '\0') {
                if (auVar87._0_8_ <= (double)CONCAT44(uVar90,uVar89)) {
                  uVar89 = uVar13;
                  uVar90 = uVar15;
                }
                pFVar62 = pFVar62 + 0x10;
                if (auVar5._0_8_ <= (double)CONCAT44(uVar92,uVar91)) {
                  uVar91 = uVar14;
                  uVar92 = uVar16;
                }
                if (dVar76 <= dVar31) {
                  auVar78._0_8_ = dVar31;
                }
                if (dVar28 <= (double)CONCAT44(uVar100,uVar99)) {
                  uVar99 = uVar18;
                  uVar100 = uVar21;
                }
                if (dVar77 <= dVar84) {
                  dVar77 = dVar84;
                }
                if (dVar80 <= dVar32) {
                  dVar80 = dVar32;
                }
                local_310._4_4_ = uVar90;
                local_310._0_4_ = uVar89;
                local_300._4_4_ = uVar92;
                local_300._0_4_ = uVar91;
                local_310._12_4_ = uVar100;
                local_310._8_4_ = uVar99;
                dStack_2f8 = dVar77;
                dStack_2e8 = dVar80;
                local_2f0 = (undefined1  [8])auVar78._0_8_;
                goto LAB_149400ed3;
              }
LAB_1494010d2:
              pFVar62 = pFVar62 + 0x10;
              goto LAB_149400ed3;
            }
            local_178 = auVar87;
            local_168 = auVar5;
            local_158 = auVar6;
            local_148 = uVar4;
            if (cVar65 == '\0') {
              if ((char)local_2e0 != '\0') {
                local_358._8_4_ = uVar18;
                local_358._0_8_ = dVar28;
                local_358._12_4_ = uVar21;
                local_338._8_4_ = uVar19;
                local_338._0_8_ = dVar84;
                local_338._12_4_ = uVar22;
                uVar70 = uVar19;
                uVar69 = uVar22;
                uVar71 = uVar19;
                uVar68 = uVar22;
                uVar72 = uVar18;
                uVar73 = uVar21;
                uVar74 = uVar18;
                uVar75 = uVar21;
                uVar93 = auVar6._0_4_;
                uVar94 = uVar17;
                uVar95 = uVar13;
                uVar96 = uVar15;
                uVar97 = uVar14;
                uVar98 = uVar16;
                uVar101 = uVar20;
                uVar102 = uVar23;
                cVar65 = (char)local_2e0;
                local_2d8 = auVar87;
                local_2c8 = auVar5;
                local_2b8 = auVar6;
                local_2a8 = uVar4;
              }
              goto LAB_1494010d2;
            }
            if ((char)local_2e0 == '\0') goto LAB_1494010d2;
            if (auVar87._0_8_ <= (double)CONCAT44(uVar96,uVar95)) {
              uVar95 = uVar13;
              uVar96 = uVar15;
            }
            pFVar62 = pFVar62 + 0x10;
            if (auVar5._0_8_ <= (double)CONCAT44(uVar98,uVar97)) {
              uVar97 = uVar14;
              uVar98 = uVar16;
            }
            if ((double)CONCAT44(uVar94,uVar93) <= dVar31) {
              uVar93 = auVar6._0_4_;
              uVar94 = uVar17;
            }
            if (dVar28 <= (double)CONCAT44(uVar73,uVar72)) {
              uVar72 = uVar18;
              uVar73 = uVar21;
            }
            if ((double)CONCAT44(uVar69,uVar70) <= dVar84) {
              uVar70 = uVar19;
              uVar69 = uVar22;
            }
            if ((double)CONCAT44(uVar102,uVar101) <= dVar32) {
              uVar101 = uVar20;
              uVar102 = uVar23;
            }
            local_2d8._4_4_ = uVar96;
            local_2d8._0_4_ = uVar95;
            local_2c8._4_4_ = uVar98;
            local_2c8._0_4_ = uVar97;
            local_2b8._4_4_ = uVar94;
            local_2b8._0_4_ = uVar93;
            local_2d8._12_4_ = uVar73;
            local_2d8._8_4_ = uVar72;
            local_2c8._12_4_ = uVar69;
            local_2c8._8_4_ = uVar70;
            local_2b8._12_4_ = uVar102;
            local_2b8._8_4_ = uVar101;
            local_358._4_4_ = uVar73;
            local_358._0_4_ = uVar72;
            local_358._8_4_ = uVar74;
            local_358._12_4_ = uVar75;
            local_338._4_4_ = uVar69;
            local_338._0_4_ = uVar70;
            local_338._8_4_ = uVar71;
            local_338._12_4_ = uVar68;
          } while( true );
        }
        dVar77 = (pUVar8->FixedBounds).Min.field0_0x0._s_0.Y;
        (this->LocalBounds).Min.field0_0x0._s_0.X = (pUVar8->FixedBounds).Min.field0_0x0._s_0.X;
        (this->LocalBounds).Min.field0_0x0._s_0.Y = dVar77;
        dVar77 = (pUVar8->FixedBounds).Max.field0_0x0._s_0.X;
        (this->LocalBounds).Min.field0_0x0._s_0.Z = (pUVar8->FixedBounds).Min.field0_0x0._s_0.Z;
        (this->LocalBounds).Max.field0_0x0._s_0.X = dVar77;
        dVar77 = (pUVar8->FixedBounds).Max.field0_0x0._s_0.Z;
        (this->LocalBounds).Max.field0_0x0._s_0.Y = (pUVar8->FixedBounds).Max.field0_0x0._s_0.Y;
        (this->LocalBounds).Max.field0_0x0._s_0.Z = dVar77;
        uVar38 = (pUVar8->FixedBounds).Pad[0];
        uVar39 = (pUVar8->FixedBounds).Pad[1];
        uVar40 = (pUVar8->FixedBounds).Pad[2];
        uVar41 = (pUVar8->FixedBounds).Pad[3];
        uVar42 = (pUVar8->FixedBounds).Pad[4];
        uVar43 = (pUVar8->FixedBounds).Pad[5];
        uVar44 = (pUVar8->FixedBounds).Pad[6];
        (this->LocalBounds).IsValid = (pUVar8->FixedBounds).IsValid;
        (this->LocalBounds).Pad[0] = uVar38;
        (this->LocalBounds).Pad[1] = uVar39;
        (this->LocalBounds).Pad[2] = uVar40;
        (this->LocalBounds).Pad[3] = uVar41;
        (this->LocalBounds).Pad[4] = uVar42;
        (this->LocalBounds).Pad[5] = uVar43;
        (this->LocalBounds).Pad[6] = uVar44;
      }
      else {
        dVar77 = (this->FixedBounds_CNC).Min.field0_0x0._s_0.Y;
        dVar88 = (this->FixedBounds_CNC).Min.field0_0x0._s_0.Z;
        dVar80 = (this->FixedBounds_CNC).Max.field0_0x0._s_0.X;
        (this->LocalBounds).Min.field0_0x0._s_0.X = (this->FixedBounds_CNC).Min.field0_0x0._s_0.X;
        (this->LocalBounds).Min.field0_0x0._s_0.Y = dVar77;
        dVar77 = (this->FixedBounds_CNC).Max.field0_0x0._s_0.Y;
        dVar83 = (this->FixedBounds_CNC).Max.field0_0x0._s_0.Z;
        (this->LocalBounds).Min.field0_0x0._s_0.Z = dVar88;
        (this->LocalBounds).Max.field0_0x0._s_0.X = dVar80;
        uVar38 = (this->FixedBounds_CNC).IsValid;
        uVar39 = (this->FixedBounds_CNC).Pad[0];
        uVar40 = (this->FixedBounds_CNC).Pad[1];
        uVar41 = (this->FixedBounds_CNC).Pad[2];
        uVar42 = (this->FixedBounds_CNC).Pad[3];
        uVar43 = (this->FixedBounds_CNC).Pad[4];
        uVar44 = (this->FixedBounds_CNC).Pad[5];
        uVar45 = (this->FixedBounds_CNC).Pad[6];
        (this->LocalBounds).Max.field0_0x0._s_0.Y = dVar77;
        (this->LocalBounds).Max.field0_0x0._s_0.Z = dVar83;
        (this->LocalBounds).IsValid = uVar38;
        (this->LocalBounds).Pad[0] = uVar39;
        (this->LocalBounds).Pad[1] = uVar40;
        (this->LocalBounds).Pad[2] = uVar41;
        (this->LocalBounds).Pad[3] = uVar42;
        (this->LocalBounds).Pad[4] = uVar43;
        (this->LocalBounds).Pad[5] = uVar44;
        (this->LocalBounds).Pad[6] = uVar45;
      }
      goto LAB_1494015ed;
    }
  }
  goto LAB_1494016c9;
LAB_1494010db:
  local_1c8 = 0;
  uStack_1c7 = 0;
  uStack_1c3 = 0;
  uStack_1c1 = 0;
  (this->LocalBounds).Min.field0_0x0._s_0.X = 0.0;
  (this->LocalBounds).Min.field0_0x0._s_0.Y = 0.0;
  (this->LocalBounds).Min.field0_0x0._s_0.Z = 0.0;
  (this->LocalBounds).Max.field0_0x0._s_0.X = 0.0;
  (this->LocalBounds).Max.field0_0x0._s_0.Y = 0.0;
  (this->LocalBounds).Max.field0_0x0._s_0.Z = 0.0;
  local_1d8 = 0;
  uStack_1d0 = 0;
  (this->LocalBounds).IsValid = '\0';
  dVar28 = __real_3fe0000000000000;
  (this->LocalBounds).Pad[0] = '\0';
  (this->LocalBounds).Pad[1] = '\0';
  (this->LocalBounds).Pad[2] = '\0';
  (this->LocalBounds).Pad[3] = '\0';
  (this->LocalBounds).Pad[4] = '\0';
  (this->LocalBounds).Pad[5] = '\0';
  (this->LocalBounds).Pad[6] = '\0';
  local_1f8 = 0;
  uStack_1f0 = 0;
  local_1e8 = 0;
  uStack_1e0 = 0;
  if (cVar50 != '\0') {
    local_338._0_8_ = (dVar76 + (double)CONCAT44(uVar100,uVar99)) * __real_3fe0000000000000;
    local_268._0_8_ = (dVar77 + (double)CONCAT44(uVar90,uVar89)) * __real_3fe0000000000000;
    dVar84 = (dVar77 - (double)CONCAT44(uVar90,uVar89)) * __real_3fe0000000000000;
    dVar77 = (dVar76 - (double)CONCAT44(uVar100,uVar99)) * __real_3fe0000000000000;
    local_358._0_8_ = (dVar80 + (double)CONCAT44(uVar92,uVar91)) * __real_3fe0000000000000;
    dVar80 = (dVar80 - (double)CONCAT44(uVar92,uVar91)) * __real_3fe0000000000000;
    if (__real_3f800000 < GNiagaraEmitterBoundsDynamicSnapValue) {
      dVar31 = (double)GNiagaraEmitterBoundsDynamicSnapValue;
      dVar76 = __real_3ff0000000000000 / dVar31;
      auVar86._0_8_ = dVar84 * dVar76;
      auVar86._8_8_ = dVar88;
      auVar79._0_8_ = dVar77 * dVar76;
      auVar79._8_8_ = auVar78._8_8_;
      auVar82._0_8_ = dVar80 * dVar76;
      auVar82._8_8_ = dVar83;
      auVar87._8_8_ = 0;
      auVar87._0_8_ = auVar86._0_8_;
      auVar87 = roundpd(auVar86,auVar87,2);
      dVar84 = auVar87._0_8_ * dVar31;
      auVar5._8_8_ = 0;
      auVar5._0_8_ = auVar79._0_8_;
      auVar87 = roundpd(auVar79,auVar5,2);
      dVar77 = auVar87._0_8_ * dVar31;
      auVar6._8_8_ = 0;
      auVar6._0_8_ = auVar82._0_8_;
      auVar87 = roundpd(auVar82,auVar6,2);
      dVar80 = auVar87._0_8_ * dVar31;
    }
    dVar88 = (double)GNiagaraEmitterBoundsDynamicExpandMultiplier;
    local_238 = 1;
    local_248._8_8_ = dVar88 * dVar80 + (double)local_358._0_8_;
    uVar71 = (undefined4)((ulonglong)local_248._8_8_ >> 0x20);
    local_258._0_8_ = (double)local_358._0_8_ - dVar88 * dVar80;
    local_258._8_8_ = dVar88 * dVar84 + (double)local_268._0_8_;
    local_248._0_8_ = dVar88 * dVar77 + (double)local_338._0_8_;
    local_268._0_8_ = (double)local_268._0_8_ - dVar88 * dVar84;
    local_268._8_8_ = (double)local_338._0_8_ - dVar88 * dVar77;
    if ((this->LocalBounds).IsValid == '\0') {
      uVar68 = (undefined4)((ulonglong)local_268._8_8_ >> 0x20);
      auVar26._8_4_ = (int)local_268._8_8_;
      auVar26._0_8_ = local_268._0_8_;
      auVar26._12_4_ = uVar68;
      *(undefined1 (*) [16])&(this->LocalBounds).Min.field0_0x0 = auVar26;
      local_268._8_4_ = (int)local_268._8_8_;
      local_268._12_4_ = uVar68;
      uVar68 = (undefined4)((ulonglong)local_258._8_8_ >> 0x20);
      auVar30._8_4_ = (int)local_258._8_8_;
      auVar30._0_8_ = local_258._0_8_;
      auVar30._12_4_ = uVar68;
      *(undefined1 (*) [16])((longlong)&(this->LocalBounds).Min.field0_0x0 + 0x10) = auVar30;
      auVar27._8_4_ = (int)local_248._8_8_;
      auVar27._0_8_ = local_248._0_8_;
      auVar27._12_4_ = uVar71;
      *(undefined1 (*) [16])((longlong)&(this->LocalBounds).Max.field0_0x0 + 8) = auVar27;
      local_248._8_4_ = (int)local_248._8_8_;
      local_248._12_4_ = uVar71;
      (this->LocalBounds).IsValid = 1;
      (this->LocalBounds).Pad[0] = (char)uStack_237;
      (this->LocalBounds).Pad[1] = (char)((uint7)uStack_237 >> 8);
      (this->LocalBounds).Pad[2] = (char)((uint7)uStack_237 >> 0x10);
      (this->LocalBounds).Pad[3] = (char)((uint7)uStack_237 >> 0x18);
      (this->LocalBounds).Pad[4] = (char)((uint7)uStack_237 >> 0x20);
      (this->LocalBounds).Pad[5] = (char)((uint7)uStack_237 >> 0x28);
      (this->LocalBounds).Pad[6] = (char)((uint7)uStack_237 >> 0x30);
      local_258._8_4_ = (int)local_258._8_8_;
      local_258._12_4_ = uVar68;
    }
    else {
      dVar77 = (this->LocalBounds).Min.field0_0x0._s_0.Z;
      dVar88 = (this->LocalBounds).Min.field0_0x0._s_0.X;
      dVar80 = (double)local_268._0_8_;
      if (dVar88 <= (double)local_268._0_8_) {
        dVar80 = dVar88;
      }
      dVar88 = (this->LocalBounds).Min.field0_0x0._s_0.Y;
      dVar83 = (double)local_268._8_8_;
      if (dVar88 <= (double)local_268._8_8_) {
        dVar83 = dVar88;
      }
      dVar88 = (this->LocalBounds).Max.field0_0x0._s_0.X;
      dVar76 = (double)local_258._8_8_;
      if ((double)local_258._8_8_ <= dVar88) {
        dVar76 = dVar88;
      }
      dVar88 = (this->LocalBounds).Max.field0_0x0._s_0.Z;
      dVar84 = (double)local_248._8_8_;
      if ((double)local_248._8_8_ <= dVar88) {
        dVar84 = dVar88;
      }
      if ((double)local_258._0_8_ <= dVar77) {
        dVar77 = (double)local_258._0_8_;
      }
      (this->LocalBounds).Min.field0_0x0._s_0.X = dVar80;
      (this->LocalBounds).Min.field0_0x0._s_0.Y = dVar83;
      (this->LocalBounds).Max.field0_0x0._s_0.X = dVar76;
      (this->LocalBounds).Max.field0_0x0._s_0.Z = dVar84;
      (this->LocalBounds).Min.field0_0x0._s_0.Z = dVar77;
      dVar77 = (this->LocalBounds).Max.field0_0x0._s_0.Y;
      if (dVar77 <= (double)local_248._0_8_) {
        dVar77 = (double)local_248._0_8_;
      }
      (this->LocalBounds).Max.field0_0x0._s_0.Y = dVar77;
    }
  }
  if (cVar65 != '\0') {
    local_200 = 1;
    dVar77 = (double)GNiagaraEmitterBoundsFixedExpandMultiplier;
    local_230._0_8_ = ((double)CONCAT44(uVar69,uVar70) + (double)CONCAT44(uVar96,uVar95)) * dVar28;
    local_220._0_8_ = ((double)CONCAT44(uVar102,uVar101) + (double)CONCAT44(uVar98,uVar97)) * dVar28
    ;
    local_230._8_8_ = ((double)CONCAT44(uVar94,uVar93) + (double)CONCAT44(uVar73,uVar72)) * dVar28;
    dVar88 = ((double)CONCAT44(uVar69,uVar70) - (double)CONCAT44(uVar96,uVar95)) * dVar28 * dVar77;
    dVar80 = ((double)CONCAT44(uVar94,uVar93) - (double)CONCAT44(uVar73,uVar72)) * dVar28 * dVar77;
    dVar77 = ((double)CONCAT44(uVar102,uVar101) - (double)CONCAT44(uVar98,uVar97)) * dVar28 * dVar77
    ;
    local_220._8_8_ = dVar88 + (double)local_230._0_8_;
    uVar71 = (undefined4)((ulonglong)local_220._8_8_ >> 0x20);
    local_210._0_8_ = dVar80 + (double)local_230._8_8_;
    local_230._0_8_ = (double)local_230._0_8_ - dVar88;
    local_210._8_8_ = dVar77 + (double)local_220._0_8_;
    local_230._8_8_ = (double)local_230._8_8_ - dVar80;
    uVar69 = (undefined4)((ulonglong)local_230._8_8_ >> 0x20);
    local_220._0_8_ = (double)local_220._0_8_ - dVar77;
    uVar70 = (undefined4)((ulonglong)local_210._8_8_ >> 0x20);
    if ((this->LocalBounds).IsValid == '\0') {
      auVar24._8_4_ = (int)local_230._8_8_;
      auVar24._0_8_ = local_230._0_8_;
      auVar24._12_4_ = uVar69;
      *(undefined1 (*) [16])&(this->LocalBounds).Min.field0_0x0 = auVar24;
      local_230._8_4_ = (int)local_230._8_8_;
      local_230._12_4_ = uVar69;
      auVar29._8_4_ = (int)local_220._8_8_;
      auVar29._0_8_ = local_220._0_8_;
      auVar29._12_4_ = uVar71;
      *(undefined1 (*) [16])((longlong)&(this->LocalBounds).Min.field0_0x0 + 0x10) = auVar29;
      auVar25._8_4_ = (int)local_210._8_8_;
      auVar25._0_8_ = local_210._0_8_;
      auVar25._12_4_ = uVar70;
      *(undefined1 (*) [16])((longlong)&(this->LocalBounds).Max.field0_0x0 + 8) = auVar25;
      local_210._8_4_ = (int)local_210._8_8_;
      local_210._12_4_ = uVar70;
      (this->LocalBounds).IsValid = 1;
      (this->LocalBounds).Pad[0] = (char)uStack_1ff;
      (this->LocalBounds).Pad[1] = (char)((uint7)uStack_1ff >> 8);
      (this->LocalBounds).Pad[2] = (char)((uint7)uStack_1ff >> 0x10);
      (this->LocalBounds).Pad[3] = (char)((uint7)uStack_1ff >> 0x18);
      (this->LocalBounds).Pad[4] = (char)((uint7)uStack_1ff >> 0x20);
      (this->LocalBounds).Pad[5] = (char)((uint7)uStack_1ff >> 0x28);
      (this->LocalBounds).Pad[6] = (char)((uint7)uStack_1ff >> 0x30);
      local_220._8_4_ = (int)local_220._8_8_;
      local_220._12_4_ = uVar71;
    }
    else {
      dVar77 = (this->LocalBounds).Min.field0_0x0._s_0.Y;
      dVar88 = (this->LocalBounds).Min.field0_0x0._s_0.X;
      dVar80 = (double)local_230._0_8_;
      if (dVar88 <= (double)local_230._0_8_) {
        dVar80 = dVar88;
      }
      dVar88 = (this->LocalBounds).Max.field0_0x0._s_0.Y;
      dVar83 = (double)local_210._0_8_;
      if ((double)local_210._0_8_ <= dVar88) {
        dVar83 = dVar88;
      }
      if ((double)local_230._8_8_ <= dVar77) {
        dVar77 = (double)local_230._8_8_;
      }
      (this->LocalBounds).Min.field0_0x0._s_0.X = dVar80;
      dVar88 = (this->LocalBounds).Min.field0_0x0._s_0.Z;
      (this->LocalBounds).Min.field0_0x0._s_0.Y = dVar77;
      if ((double)local_220._0_8_ <= dVar88) {
        dVar88 = (double)local_220._0_8_;
      }
      dVar77 = (this->LocalBounds).Max.field0_0x0._s_0.X;
      if (dVar77 <= (double)local_220._8_8_) {
        dVar77 = (double)local_220._8_8_;
      }
      (this->LocalBounds).Max.field0_0x0._s_0.Y = dVar83;
      (this->LocalBounds).Min.field0_0x0._s_0.Z = dVar88;
      (this->LocalBounds).Max.field0_0x0._s_0.X = dVar77;
      dVar77 = (this->LocalBounds).Max.field0_0x0._s_0.Z;
      if (dVar77 <= (double)local_210._8_8_) {
        dVar77 = (double)local_210._8_8_;
      }
      (this->LocalBounds).Max.field0_0x0._s_0.Z = dVar77;
    }
  }
  uVar69 = UE::Math::TVector<double>::OneVector.field0_0x0._12_4_;
  uVar70 = UE::Math::TVector<double>::OneVector.field0_0x0._8_4_;
  if ((this->LocalBounds).IsValid == '\0') {
    uStack_128 = SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X,0);
    uStack_124 = (uint)((ulonglong)UE::Math::TVector<double>::OneVector.field0_0x0._0_8_ >> 0x20);
    uStack_118 = SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z,0);
    uStack_114 = (uint)((ulonglong)UE::Math::TVector<double>::OneVector.field0_0x0._16_8_ >> 0x20);
    local_140 = (uint)__xmm_80000000000000008000000000000000;
    uStack_13c = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
    uStack_138 = UE::Math::TVector<double>::OneVector.field0_0x0._8_4_ ^ local_140;
    uStack_134 = UE::Math::TVector<double>::OneVector.field0_0x0._12_4_ ^ uStack_13c;
    local_110 = 1;
    local_130 = uStack_118 ^ local_140;
    uStack_12c = uStack_114 ^ uStack_13c;
    local_140 = uStack_128 ^ local_140;
    uStack_13c = uStack_124 ^ uStack_13c;
    *(uint *)&(this->LocalBounds).Min.field0_0x0 = local_140;
    *(uint *)((longlong)&(this->LocalBounds).Min.field0_0x0 + 4) = uStack_13c;
    *(uint *)((longlong)&(this->LocalBounds).Min.field0_0x0 + 8) = uStack_138;
    *(uint *)((longlong)&(this->LocalBounds).Min.field0_0x0 + 0xc) = uStack_134;
    *(uint *)((longlong)&(this->LocalBounds).Min.field0_0x0 + 0x10) = local_130;
    *(uint *)((longlong)&(this->LocalBounds).Min.field0_0x0 + 0x14) = uStack_12c;
    *(uint *)&(this->LocalBounds).Max.field0_0x0 = uStack_128;
    *(uint *)((longlong)&(this->LocalBounds).Max.field0_0x0 + 4) = uStack_124;
    *(undefined4 *)((longlong)&(this->LocalBounds).Max.field0_0x0 + 8) = uVar70;
    *(undefined4 *)((longlong)&(this->LocalBounds).Max.field0_0x0 + 0xc) = uVar69;
    *(uint *)((longlong)&(this->LocalBounds).Max.field0_0x0 + 0x10) = uStack_118;
    *(uint *)((longlong)&(this->LocalBounds).Max.field0_0x0 + 0x14) = uStack_114;
    local_120 = uVar70;
    uStack_11c = uVar69;
    (this->LocalBounds).IsValid = 1;
    (this->LocalBounds).Pad[0] = (char)uStack_10f;
    (this->LocalBounds).Pad[1] = (char)((uint7)uStack_10f >> 8);
    (this->LocalBounds).Pad[2] = (char)((uint7)uStack_10f >> 0x10);
    (this->LocalBounds).Pad[3] = (char)((uint7)uStack_10f >> 0x18);
    (this->LocalBounds).Pad[4] = (char)((uint7)uStack_10f >> 0x20);
    (this->LocalBounds).Pad[5] = (char)((uint7)uStack_10f >> 0x28);
    (this->LocalBounds).Pad[6] = (char)((uint7)uStack_10f >> 0x30);
  }
LAB_1494015ed:
  FVar63 = local_340;
  pFVar7 = (this->SystemSimulation).Object;
  if ((pFVar7 == (FNiagaraSystemSimulation *)0x0) &&
     (bVar51 = ::FDebug::CheckVerifyFailedImpl2
                         ("Sim",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSystemInstance.cpp"
                          ,0xaf1,L""), bVar51)) {
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  if ((((pFVar7->DispatchInterface != (FNiagaraGpuComputeDispatchInterface *)0x0) &&
       (bVar51 = FNiagaraUtilities::AllowGPUParticles(), bVar51)) &&
      (pFVar7->System != (UNiagaraSystem *)0x0)) && (pFVar7->System->bHasAnyGPUEmitters != 0)) {
    if ((pFVar7->System->bHasDIsWithPostSimulateTick == 0) &&
       (GNiagaraSystemSimulationConcurrentGPUTickInit != 0)) {
      bVar51 = false;
    }
    else {
      bVar51 = true;
    }
    if ((GNiagaraSystemSimulationBatchGPUTickSubmit == 0) || (pFVar7->bIsSolo != 0)) {
      iVar52 = 2;
      iVar67 = 1;
    }
    else {
      iVar67 = 3;
      iVar52 = 4;
    }
    if (!bVar51) {
      iVar67 = iVar52;
    }
    if ((iVar67 == 2) || ((iVar67 == 4 && (local_365 != '\0')))) {
      GenerateAndSubmitGPUTick(this);
    }
  }
  if (bVar36) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar49) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar48) {
    FThreadStats::AddMessage(FVar60,CycleScopeEnd);
  }
LAB_1494016c9:
  if (local_108.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_108.AllocatorInstance.SecondaryData);
  }
LAB_1494016e2:
  FNiagaraCrashReporterScope::~FNiagaraCrashReporterScope(local_364);
  if ((local_318 & 1) != 0) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if ((local_318 & 2) != 0) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((local_318 & 4) != 0) {
    FThreadStats::AddMessage(local_320,CycleScopeEnd);
  }
  local_318 = 0;
  FMemScope::~FMemScope(&local_270);
  FLLMScope::~FLLMScope(local_348);
  if (bVar37) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar35) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar47) {
    FThreadStats::AddMessage(FVar63,CycleScopeEnd);
  }
  return;
}

// Tick_GameThread @ 1494025d0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall FNiagaraSystemInstance::Tick_GameThread(FNiagaraSystemInstance *this,float param_1)

{
  int *piVar1;
  UNiagaraSystem *this_00;
  TAtomic<FMinimalName> TVar2;
  TStatIdData *pTVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  uchar uVar14;
  uchar uVar15;
  uchar uVar16;
  uchar uVar17;
  uchar uVar18;
  uchar uVar19;
  uchar uVar20;
  uchar uVar21;
  uint uVar22;
  FName *pFVar23;
  FThreadSafeStaticStat<FStat_STAT_NiagaraSystemInst_TickGT> FVar24;
  UObject *pUVar25;
  UActorComponent *this_01;
  FThreadStats *pFVar26;
  FThreadStatsPool *pFVar27;
  FNameEntryId FVar28;
  FName FVar29;
  FName FVar30;
  FNameEntryId FVar31;
  FNiagaraCrashReporterScope local_res8 [8];
  FLLMScope local_res18 [2];
  LARGE_INTEGER local_res20;
  FMemScope local_88;
  FStatMessage local_80;
  FName local_70;
  FName local_60;
  
  FVar31.Value = 0;
  FVar24 = StatPtr_STAT_NiagaraSystemInst_TickGT;
  if (StatPtr_STAT_NiagaraSystemInst_TickGT ==
      (FThreadSafeStaticStat<FStat_STAT_NiagaraSystemInst_TickGT>)0x0) {
    pFVar23 = ::FName::FName((FName *)&local_80,"STAT_NiagaraSystemInst_TickGT");
    FVar24 = (FThreadSafeStaticStat<FStat_STAT_NiagaraSystemInst_TickGT>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraSystemInst_TickGT,*pFVar23
                        ,L"System Instance Tick [GT]","STATGROUP_Niagara","STATCAT_Niagara",
                        L"Niagara",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar30 = *(FName *)FVar24;
  bVar10 = false;
  bVar13 = false;
  local_60.ComparisonIndex.Value = 0;
  local_60.Number = 0;
  FVar28 = FVar30.ComparisonIndex.Value;
  uVar22 = FVar30.Number;
  if ((FVar28.Value == 0) && (uVar22 == 0)) {
LAB_14940271b:
    bVar11 = false;
    FVar30 = local_60;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res20.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res20.s,(char *)*(FName *)((longlong)FVar24 + 0x10));
      bVar10 = false;
      bVar13 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res20.s.LowPart = FVar28.Value;
        local_res20.s.HighPart = uVar22;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res20.s,(wchar_t *)*(FName *)((longlong)FVar24 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSystemInstance.cpp"
                   ,0xa18);
        bVar10 = true;
        bVar13 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14940271b;
    local_res20.s.LowPart = FVar28.Value;
    local_res20.s.HighPart = uVar22;
    local_60 = FVar30;
    FThreadStats::AddMessage(FVar30,CycleScopeStart);
    bVar11 = true;
  }
  FLLMScope::FLLMScope(local_res18,Niagara,false,None,Default,true);
  FMemScope::FMemScope(&local_88,Niagara,true);
  FNiagaraCrashReporterScope::FNiagaraCrashReporterScope(local_res8,this);
  this_00 = this->System;
  TVar2 = ((this_00->StatID_GT).StatIdPtr)->Name;
  if ((TVar2._0_4_ == 0) && (TVar2._4_4_ == 0)) {
    UNiagaraSystem::GenerateStatID(this_00);
  }
  pTVar3 = (this_00->StatID_GT).StatIdPtr;
  bVar8 = false;
  bVar12 = false;
  local_70.ComparisonIndex.Value = 0;
  local_70.Number = 0;
  FVar29 = *(FName *)&pTVar3->Name;
  FVar28 = FVar29.ComparisonIndex.Value;
  uVar22 = FVar29.Number;
  if ((FVar28.Value != 0) || (uVar22 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res20.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res20.s,(pTVar3->StatDescriptionAnsi).Ptr);
      bVar8 = false;
      bVar12 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res20.s.LowPart = FVar28.Value;
        local_res20.s.HighPart = uVar22;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res20.s,(pTVar3->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSystemInstance.cpp"
                   ,0xa1d);
        bVar8 = true;
        bVar12 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res20.s.LowPart = FVar28.Value;
      local_res20.s.HighPart = uVar22;
      local_70 = FVar29;
      FThreadStats::AddMessage(FVar29,CycleScopeStart);
      bVar9 = true;
      FVar31.Value = local_70.ComparisonIndex.Value;
      goto LAB_149402832;
    }
  }
  bVar9 = false;
  FVar29 = local_70;
LAB_149402832:
  WaitForConcurrentTickAndFinalize(this,true);
  pUVar25 = FWeakObjectPtr::Get(&(this->AttachComponent).WeakPtr);
  if (pUVar25 == (UObject *)0x0) {
    Complete(this,true);
  }
  else if ((this->ActualExecutionState != Complete) && (this->ActualExecutionState != Disabled)) {
    if (((uint)this->OverrideParameters->_padding_ >> 1 & 1) == 0) {
      dVar4 = (this->FixedBounds_GT).Min.field0_0x0._s_0.Y;
      dVar5 = (this->FixedBounds_GT).Min.field0_0x0._s_0.Z;
      dVar6 = (this->FixedBounds_GT).Max.field0_0x0._s_0.X;
      (this->FixedBounds_CNC).Min.field0_0x0._s_0.X = (this->FixedBounds_GT).Min.field0_0x0._s_0.X;
      (this->FixedBounds_CNC).Min.field0_0x0._s_0.Y = dVar4;
      dVar4 = (this->FixedBounds_GT).Max.field0_0x0._s_0.Y;
      dVar7 = (this->FixedBounds_GT).Max.field0_0x0._s_0.Z;
      (this->FixedBounds_CNC).Min.field0_0x0._s_0.Z = dVar5;
      (this->FixedBounds_CNC).Max.field0_0x0._s_0.X = dVar6;
      uVar14 = (this->FixedBounds_GT).IsValid;
      uVar15 = (this->FixedBounds_GT).Pad[0];
      uVar16 = (this->FixedBounds_GT).Pad[1];
      uVar17 = (this->FixedBounds_GT).Pad[2];
      uVar18 = (this->FixedBounds_GT).Pad[3];
      uVar19 = (this->FixedBounds_GT).Pad[4];
      uVar20 = (this->FixedBounds_GT).Pad[5];
      uVar21 = (this->FixedBounds_GT).Pad[6];
      (this->FixedBounds_CNC).Max.field0_0x0._s_0.Y = dVar4;
      (this->FixedBounds_CNC).Max.field0_0x0._s_0.Z = dVar7;
      (this->FixedBounds_CNC).IsValid = uVar14;
      (this->FixedBounds_CNC).Pad[0] = uVar15;
      (this->FixedBounds_CNC).Pad[1] = uVar16;
      (this->FixedBounds_CNC).Pad[2] = uVar17;
      (this->FixedBounds_CNC).Pad[3] = uVar18;
      (this->FixedBounds_CNC).Pad[4] = uVar19;
      (this->FixedBounds_CNC).Pad[5] = uVar20;
      (this->FixedBounds_CNC).Pad[6] = uVar21;
      this->CachedDeltaSeconds = param_1;
      TickInstanceParameters_GameThread(this,param_1);
      TickDataInterfaces(this,param_1,false);
      this->TickCount = this->TickCount + 1;
      this->Age = param_1 + this->Age;
    }
    else {
      Reset(this,ReInit);
      this_01 = (UActorComponent *)FWeakObjectPtr::Get(&(this->AttachComponent).WeakPtr);
      if (this_01 != (UActorComponent *)0x0) {
        UActorComponent::MarkRenderStateDirty(this_01);
      }
    }
  }
  if (bVar12) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar9) && (FVar29 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    pFVar26 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar26 == (FThreadStats *)0x0) {
      pFVar27 = FThreadStatsPool::Get();
      pFVar26 = FThreadStatsPool::GetFromPool(pFVar27);
    }
    if (pFVar26->bWaitForExplicitFlush < pFVar26->ScopeCount) {
      local_80.NameAndInfo.Number = FVar29.Number & 0xffff6fff | 0x6000;
      local_80.NameAndInfo.Index.Value = FVar31.Value;
      QueryPerformanceCounter(&local_res20);
      local_80.StatData.Pad[4] = '\0';
      local_80.StatData.Pad[5] = '\0';
      local_80.StatData.Pad[6] = '\0';
      local_80.StatData.Pad[7] = '\0';
      local_80.StatData.Pad[0] = local_res20.s.LowPart._0_1_;
      local_80.StatData.Pad[1] = local_res20.s.LowPart._1_1_;
      local_80.StatData.Pad[2] = local_res20.s.LowPart._2_1_;
      local_80.StatData.Pad[3] = local_res20.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(pFVar26,&local_80);
      piVar1 = &pFVar26->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(pFVar26,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar26,false,false);
      }
    }
  }
  FNiagaraCrashReporterScope::~FNiagaraCrashReporterScope(local_res8);
  FMemScope::~FMemScope(&local_88);
  FLLMScope::~FLLMScope(local_res18);
  if (bVar13) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar10) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((bVar11) && (FVar30 != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    pFVar26 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar26 == (FThreadStats *)0x0) {
      pFVar27 = FThreadStatsPool::Get();
      pFVar26 = FThreadStatsPool::GetFromPool(pFVar27);
    }
    if (pFVar26->bWaitForExplicitFlush < pFVar26->ScopeCount) {
      local_80.NameAndInfo.Index.Value = local_60.ComparisonIndex.Value;
      local_80.NameAndInfo.Number = FVar30.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_res20);
      local_80.StatData.Pad[4] = '\0';
      local_80.StatData.Pad[5] = '\0';
      local_80.StatData.Pad[6] = '\0';
      local_80.StatData.Pad[7] = '\0';
      local_80.StatData.Pad[0] = local_res20.s.LowPart._0_1_;
      local_80.StatData.Pad[1] = local_res20.s.LowPart._1_1_;
      local_80.StatData.Pad[2] = local_res20.s.LowPart._2_1_;
      local_80.StatData.Pad[3] = local_res20.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(pFVar26,&local_80);
      piVar1 = &pFVar26->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(pFVar26,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar26,false,false);
      }
    }
  }
  return;
}

// UnbindFromParameterStore @ 149405940

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FNiagaraSystemInstance::UnbindFromParameterStore
          (FNiagaraSystemInstance *this,FNiagaraParameterStore *param_1)

{
  FNiagaraSystemSimulation *pFVar1;
  code *pcVar2;
  bool bVar3;
  
  if ((param_1->SortedParameterOffsets).ArrayNum != 0) {
    pFVar1 = (this->SystemSimulation).Object;
    if (pFVar1 != (FNiagaraSystemSimulation *)0x0) {
      FNiagaraParameterStore::Unbind
                ((FNiagaraParameterStore *)&((pFVar1->SpawnExecContext).Ptr)->Parameters,param_1);
      if ((this->SystemSimulation).Object == (FNiagaraSystemSimulation *)0x0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      FNiagaraParameterStore::Unbind
                ((FNiagaraParameterStore *)
                 &((((this->SystemSimulation).Object)->UpdateExecContext).Ptr)->Parameters,param_1);
    }
    FNiagaraParameterStore::Unbind(&this->InstanceParameters,param_1);
    if (this->OverrideParameters != (FNiagaraUserRedirectionParameterStore *)0x0) {
      FNiagaraParameterStore::Unbind((FNiagaraParameterStore *)this->OverrideParameters,param_1);
    }
  }
  return;
}

// UnbindParameters @ 1494059f0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall FNiagaraSystemInstance::UnbindParameters(FNiagaraSystemInstance *this,bool param_1)

{
  undefined1 *puVar1;
  int iVar2;
  FNiagaraUserRedirectionParameterStore *pFVar3;
  FNiagaraSystemSimulation *pFVar4;
  byte bVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  undefined1 local_res10 [8];
  
  if (this->OverrideParameters != (FNiagaraUserRedirectionParameterStore *)0x0) {
    if (!param_1) {
      FNiagaraParameterStore::Unbind
                ((FNiagaraParameterStore *)this->OverrideParameters,&this->InstanceParameters);
    }
    pFVar4 = (this->SystemSimulation).Object;
    if ((pFVar4 != (FNiagaraSystemSimulation *)0x0) && (pFVar4->bIsSolo != 0)) {
      pFVar3 = this->OverrideParameters;
      pFVar4 = TSharedPtr<FNiagaraSystemSimulation,1>::operator->(&this->SystemSimulation);
      FNiagaraParameterStore::Unbind
                ((FNiagaraParameterStore *)pFVar3,
                 (FNiagaraParameterStore *)&((pFVar4->SpawnExecContext).Ptr)->Parameters);
      pFVar3 = this->OverrideParameters;
      pFVar4 = TSharedPtr<FNiagaraSystemSimulation,1>::operator->(&this->SystemSimulation);
      FNiagaraParameterStore::Unbind
                ((FNiagaraParameterStore *)pFVar3,
                 (FNiagaraParameterStore *)&((pFVar4->UpdateExecContext).Ptr)->Parameters);
    }
  }
  puVar1 = &this->field_0x841;
  if ((param_1) && (this->bAlreadyBound != '\0')) {
    bVar5 = 2;
  }
  else {
    bVar5 = 0;
  }
  this->bAlreadyBound = '\0';
  *puVar1 = *puVar1 | bVar5;
  iVar2 = (this->Emitters).ArrayNum;
  pFVar6 = (this->Emitters).AllocatorInstance.Data;
  pFVar7 = pFVar6 + (longlong)iVar2 * 0x10;
  while( true ) {
    if ((this->Emitters).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TSharedRef<FNiagaraEmitterInstance,1>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res10);
    }
    if (pFVar6 == pFVar7) break;
    (**(code **)(**(longlong **)pFVar6 + 0x38))(*(longlong **)pFVar6,param_1);
    pFVar6 = pFVar6 + 0x10;
  }
  return;
}

// UpdateLWCTile @ 149406460

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FNiagaraSystemInstance::UpdateLWCTile
          (FNiagaraSystemInstance *this,TVector<float> *param_1,FNiagaraDataSet *param_2)

{
  uint *puVar1;
  undefined1 *puVar2;
  TOptional<UE::Math::TVector<double>_> *pTVar3;
  float fVar4;
  float fVar5;
  double dVar6;
  UNiagaraSystem *pUVar7;
  FNiagaraGpuComputeDispatchInterface *pFVar8;
  code *pcVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  double dVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  double dVar15;
  double dVar16;
  double dVar17;
  bool bVar18;
  UClass *pUVar19;
  UActorComponent *this_00;
  UObject *this_01;
  TOptional<ENiagaraLwcTileUpdateMode> *pTVar20;
  float (*pafVar21) [4];
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  uint uVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  undefined1 auStack_398 [32];
  TVector<float>_u_0 local_378;
  float local_368;
  float local_364;
  float local_360;
  FString local_358;
  FString local_348;
  undefined4 local_338;
  undefined4 uStack_334;
  undefined4 uStack_330;
  undefined4 uStack_32c;
  undefined4 local_328;
  undefined4 uStack_324;
  undefined4 uStack_320;
  undefined4 uStack_31c;
  undefined4 local_318;
  undefined4 uStack_314;
  undefined4 uStack_310;
  undefined4 uStack_30c;
  undefined4 local_308;
  undefined4 uStack_304;
  undefined4 uStack_300;
  undefined4 uStack_2fc;
  float local_2f8;
  float fStack_2f4;
  float fStack_2f0;
  float fStack_2ec;
  float local_2e8;
  float fStack_2e4;
  float fStack_2e0;
  float fStack_2dc;
  float local_2d8;
  float fStack_2d4;
  float fStack_2d0;
  float fStack_2cc;
  float local_2c8;
  float fStack_2c4;
  float fStack_2c0;
  float fStack_2bc;
  TSharedRef<FNiagaraEmitterInstance,1> *local_2b8;
  int iStack_2b0;
  undefined4 uStack_2ac;
  undefined1 local_2a8 [16];
  double local_298;
  TArrayView<TSharedRef<FNiagaraEmitterInstance,1>,int> local_288;
  float local_278;
  float fStack_274;
  float fStack_270;
  float fStack_26c;
  float local_268;
  float fStack_264;
  float fStack_260;
  float fStack_25c;
  float local_258;
  float fStack_254;
  float fStack_250;
  float fStack_24c;
  float local_248;
  float fStack_244;
  float fStack_240;
  float fStack_23c;
  float local_238;
  float fStack_234;
  float fStack_230;
  float fStack_22c;
  float local_228;
  float fStack_224;
  float fStack_220;
  float fStack_21c;
  float local_218;
  float fStack_214;
  float fStack_210;
  float fStack_20c;
  float local_208;
  float fStack_204;
  float fStack_200;
  float fStack_1fc;
  double local_1f8 [4];
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  float local_1a8;
  float fStack_1a4;
  float fStack_1a0;
  undefined4 uStack_19c;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined1 auStack_170 [8];
  float local_168;
  float fStack_164;
  float fStack_160;
  undefined4 uStack_15c;
  TMatrix<float> local_158;
  TMatrix<float> local_118;
  ulonglong local_d8;
  
  local_d8 = __security_cookie.value ^ (ulonglong)auStack_398;
  pUVar7 = this->System;
  pTVar20 = &pUVar7->LargeWorldCoordinateTileUpdateMode;
  pUVar19 = Z_Construct_UClass_UNiagaraSettings_NoRegister();
  if ((pUVar19->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(pUVar19);
  }
  uVar35 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  if ((pUVar7->LargeWorldCoordinateTileUpdateMode).bIsSet == false) {
    pTVar20 = (TOptional<ENiagaraLwcTileUpdateMode> *)
              &(pUVar19->ClassDefaultObject).field0_0x0.DebugPtr[1].field_0x11;
  }
  fVar37 = (this->LWCTile).field0_0x0._s_0.X - (param_1->field0_0x0)._s_0.X;
  fVar38 = (this->LWCTile).field0_0x0._s_0.Y - (param_1->field0_0x0)._s_0.Y;
  fVar39 = (this->LWCTile).field0_0x0._s_0.Z - (param_1->field0_0x0)._s_0.Z;
  if (pTVar20->TypedValue == ResetSimulation) {
LAB_149406e59:
    if ((1 < this->TickCount) && (2 < (byte)LogNiagara._0_1_)) {
      pUVar7 = this->System;
      if ((pUVar7 == (UNiagaraSystem *)0x0) || (pUVar7->_padding_ == 0)) {
        ::FString::FString(&local_348,L"None");
      }
      else {
        UObjectBaseUtility::GetFullName((UObjectBaseUtility *)pUVar7,&local_348,(UObject *)0x0,None)
        ;
      }
      this_01 = FWeakObjectPtr::Get(&(this->AttachComponent).WeakPtr);
      if ((this_01 == (UObject *)0x0) || (*(longlong *)&this_01->field_0x10 == 0)) {
        ::FString::FString(&local_358,L"None");
      }
      else {
        UObjectBaseUtility::GetFullName
                  ((UObjectBaseUtility *)this_01,&local_358,(UObject *)0x0,None);
      }
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
      if (local_358.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_358.Data.AllocatorInstance.Data);
      }
      if (local_348.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_348.Data.AllocatorInstance.Data);
      }
    }
    Reset(this,ResetAll);
  }
  else {
    if (pTVar20->TypedValue == RebaseOrResetSimulation) {
      fVar36 = (float)((uint)fVar37 & __xmm_7fffffff7fffffff7fffffff7fffffff);
      fVar22 = (float)((uint)fVar38 & __xmm_7fffffff7fffffff7fffffff7fffffff);
      if (fVar36 <= fVar22) {
        fVar36 = fVar22;
      }
      fVar22 = (float)((uint)fVar39 & __xmm_7fffffff7fffffff7fffffff7fffffff);
      if (fVar36 <= fVar22) {
        fVar36 = fVar22;
      }
      pUVar19 = Z_Construct_UClass_UNiagaraSettings_NoRegister();
      if ((pUVar19->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
        UClass::InternalCreateDefaultObjectWrapper(pUVar19);
      }
      if ((float)*(uint *)&(pUVar19->ClassDefaultObject).field0_0x0.DebugPtr[1].field_0x14 <= fVar36
         ) goto LAB_149406e59;
    }
    dVar16 = (double)fVar37 * __real_4140000000000000;
    local_298 = (double)fVar39 * __real_4140000000000000;
    dVar17 = (double)fVar38 * __real_4140000000000000;
    local_378._s_0.X = (float)dVar16;
    local_378._s_0.Y = (float)dVar17;
    dVar6 = (this->WorldTransform).Translation.ZW.m128d_f64[0];
    dVar12 = (this->WorldTransform).Translation.ZW.m128d_f64[1] + 0.0;
    local_378._s_0.Z = (float)local_298;
    local_2a8._8_4_ = SUB84(dVar17,0);
    local_2a8._0_8_ = dVar16;
    local_2a8._12_4_ = (int)((ulonglong)dVar17 >> 0x20);
    dVar15 = (this->WorldTransform).Translation.XY.m128d_f64[1] + dVar17;
    auVar13._8_4_ = SUB84(dVar15,0);
    auVar13._0_8_ = (this->WorldTransform).Translation.XY.m128d_f64[0] + dVar16;
    auVar13._12_4_ = (int)((ulonglong)dVar15 >> 0x20);
    *(undefined1 (*) [16])(this->WorldTransform).Translation.XY.m128d_f64 = auVar13;
    auVar10._8_4_ = SUB84(dVar12,0);
    auVar10._0_8_ = local_298 + dVar6;
    auVar10._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
    *(undefined1 (*) [16])(this->WorldTransform).Translation.ZW.m128d_f64 = auVar10;
    if ((this->PreviousLocation).bIsSet != false) {
      pTVar3 = &this->PreviousLocation;
      dVar6 = (this->PreviousLocation).TypedValue.field0_0x0._s_0.Y;
      dVar12 = (this->PreviousLocation).TypedValue.field0_0x0._s_0.Z;
      if ((TOptional<UE::Math::TVector<double>_> *)local_1f8 != pTVar3) {
        (pTVar3->TypedValue).field0_0x0._s_0.X = dVar16 + (pTVar3->TypedValue).field0_0x0._s_0.X;
        (this->PreviousLocation).TypedValue.field0_0x0._s_0.Y = dVar17 + dVar6;
        (this->PreviousLocation).TypedValue.field0_0x0._s_0.Z = local_298 + dVar12;
        (this->PreviousLocation).bIsSet = true;
      }
    }
    if (this->OwnerParameters != (FNiagaraOwnerParameters *)&this->EmitterParameters) {
      pafVar21 = this->OwnerParameters[0].EngineWorldToLocal.M + 2;
      fVar37 = __real_322bcc77;
      do {
        puVar1 = (uint *)(pafVar21 + -6);
        if (((longlong)(pafVar21 + -4) + 0xcU < &local_1d8) ||
           ((uint *)((longlong)&uStack_1b0 + 4U) < puVar1)) {
          local_1d8 = *(undefined8 *)puVar1;
          uStack_1d0 = *(undefined8 *)((longlong)(pafVar21 + -6) + 8);
          local_1c8 = *(undefined8 *)(pafVar21 + -5);
          uStack_1c0 = *(undefined8 *)((longlong)(pafVar21 + -5) + 8);
          local_1b8 = *(undefined8 *)(pafVar21 + -4);
          uStack_1b0 = *(undefined8 *)((longlong)(pafVar21 + -4) + 8);
        }
        else {
          local_1d8 = *(undefined8 *)puVar1;
          uStack_1d0 = *(undefined8 *)((longlong)(pafVar21 + -6) + 8);
          local_1c8 = *(undefined8 *)(pafVar21 + -5);
          uStack_1c0 = *(undefined8 *)((longlong)(pafVar21 + -5) + 8);
          local_1b8 = *(undefined8 *)(pafVar21 + -4);
          uStack_1b0 = *(undefined8 *)((longlong)(pafVar21 + -4) + 8);
        }
        uStack_19c = *(undefined4 *)((longlong)(pafVar21 + -3) + 0xc);
        local_1a8 = local_378._s_0.X + pafVar21[-3][0];
        local_368 = local_378._s_0.X;
        local_364 = local_378._s_0.Y;
        fStack_1a4 = local_378._s_0.Y + *(float *)((longlong)(pafVar21 + -3) + 4);
        fStack_1a0 = local_378._s_0.Z + *(float *)((longlong)(pafVar21 + -3) + 8);
        local_360 = local_378._s_0.Z;
        *(undefined8 *)puVar1 = local_1d8;
        *(undefined8 *)((longlong)(pafVar21 + -6) + 8) = uStack_1d0;
        *(undefined8 *)(pafVar21 + -5) = local_1c8;
        *(undefined8 *)((longlong)(pafVar21 + -5) + 8) = uStack_1c0;
        *(undefined8 *)(pafVar21 + -4) = local_1b8;
        *(undefined8 *)((longlong)(pafVar21 + -4) + 8) = uStack_1b0;
        pafVar21[-3][0] = local_1a8;
        *(float *)((longlong)(pafVar21 + -3) + 4) = fStack_1a4;
        *(float *)((longlong)(pafVar21 + -3) + 8) = fStack_1a0;
        *(undefined4 *)((longlong)(pafVar21 + -3) + 0xc) = uStack_19c;
        if (((fVar37 < (float)(*puVar1 & uVar35)) ||
            (fVar37 < (float)(*(uint *)((longlong)(pafVar21 + -6) + 4) & uVar35))) ||
           (fVar37 < (float)(*(uint *)((longlong)(pafVar21 + -6) + 8) & uVar35))) {
LAB_14940681d:
          FMath::MatrixInverse(&local_158,(TMatrix<float> *)(pafVar21 + -6));
          fVar38 = local_158.M[0][0];
          fVar39 = local_158.M[0][1];
          fVar36 = local_158.M[0][2];
          fVar22 = local_158.M[0][3];
          fVar23 = local_158.M[1][0];
          fVar24 = local_158.M[1][1];
          fVar25 = local_158.M[1][2];
          fVar26 = local_158.M[1][3];
          fVar27 = local_158.M[2][0];
          fVar28 = local_158.M[2][1];
          fVar29 = local_158.M[2][2];
          fVar30 = local_158.M[2][3];
          fVar31 = local_158.M[3][0];
          fVar32 = local_158.M[3][1];
          fVar33 = local_158.M[3][2];
          fVar34 = local_158.M[3][3];
        }
        else {
          if (((fVar37 < (float)(*(uint *)(pafVar21 + -5) & uVar35)) ||
              (fVar37 < (float)(*(uint *)((longlong)(pafVar21 + -5) + 4) & uVar35))) ||
             (fVar37 < (float)(*(uint *)((longlong)(pafVar21 + -5) + 8) & uVar35)))
          goto LAB_14940681d;
          if (((fVar37 < (float)(*(uint *)(pafVar21 + -4) & uVar35)) ||
              (fVar37 < (float)(*(uint *)((longlong)(pafVar21 + -4) + 4) & uVar35))) ||
             (fVar38 = UE::Math::TMatrix<float>::Identity.M[0][0],
             fVar39 = UE::Math::TMatrix<float>::Identity.M[0][1],
             fVar36 = UE::Math::TMatrix<float>::Identity.M[0][2],
             fVar22 = UE::Math::TMatrix<float>::Identity.M[0][3],
             fVar23 = UE::Math::TMatrix<float>::Identity.M[1][0],
             fVar24 = UE::Math::TMatrix<float>::Identity.M[1][1],
             fVar25 = UE::Math::TMatrix<float>::Identity.M[1][2],
             fVar26 = UE::Math::TMatrix<float>::Identity.M[1][3],
             fVar27 = UE::Math::TMatrix<float>::Identity.M[2][0],
             fVar28 = UE::Math::TMatrix<float>::Identity.M[2][1],
             fVar29 = UE::Math::TMatrix<float>::Identity.M[2][2],
             fVar30 = UE::Math::TMatrix<float>::Identity.M[2][3],
             fVar31 = UE::Math::TMatrix<float>::Identity.M[3][0],
             fVar32 = UE::Math::TMatrix<float>::Identity.M[3][1],
             fVar33 = UE::Math::TMatrix<float>::Identity.M[3][2],
             fVar34 = UE::Math::TMatrix<float>::Identity.M[3][3],
             fVar37 < (float)(*(uint *)((longlong)(pafVar21 + -4) + 8) & uVar35)))
          goto LAB_14940681d;
        }
        ((TMatrix<float> *)(pafVar21 + -2))->M[0][0] = fVar38;
        ((TMatrix<float> *)(pafVar21 + -2))->M[0][1] = fVar39;
        ((TMatrix<float> *)(pafVar21 + -2))->M[0][2] = fVar36;
        ((TMatrix<float> *)(pafVar21 + -2))->M[0][3] = fVar22;
        pafVar21[-1][0] = fVar23;
        pafVar21[-1][1] = fVar24;
        pafVar21[-1][2] = fVar25;
        pafVar21[-1][3] = fVar26;
        (*pafVar21)[0] = fVar27;
        (*pafVar21)[1] = fVar28;
        (*pafVar21)[2] = fVar29;
        (*pafVar21)[3] = fVar30;
        pafVar21[1][0] = fVar31;
        pafVar21[1][1] = fVar32;
        pafVar21[1][2] = fVar33;
        pafVar21[1][3] = fVar34;
        uStack_334 = pafVar21[-5][0];
        uStack_314 = *(undefined4 *)((longlong)(pafVar21 + -5) + 8);
        uStack_304 = *(undefined4 *)((longlong)(pafVar21 + -5) + 0xc);
        uStack_320 = *(undefined4 *)((longlong)(pafVar21 + -4) + 4);
        uStack_310 = *(undefined4 *)((longlong)(pafVar21 + -4) + 8);
        uStack_300 = *(undefined4 *)((longlong)(pafVar21 + -4) + 0xc);
        uStack_31c = *(undefined4 *)((longlong)(pafVar21 + -3) + 4);
        uStack_30c = *(undefined4 *)((longlong)(pafVar21 + -3) + 8);
        uStack_2fc = *(undefined4 *)((longlong)(pafVar21 + -3) + 0xc);
        local_328 = *(undefined4 *)((longlong)(pafVar21 + -6) + 4);
        local_318 = *(undefined4 *)((longlong)(pafVar21 + -6) + 8);
        local_308 = *(undefined4 *)((longlong)(pafVar21 + -6) + 0xc);
        local_338 = pafVar21[-6][0];
        uStack_324 = *(undefined4 *)((longlong)(pafVar21 + -5) + 4);
        uStack_330 = pafVar21[-4][0];
        uStack_32c = pafVar21[-3][0];
        pafVar21[2][0] = local_338;
        *(undefined4 *)((longlong)(pafVar21 + 2) + 4) = uStack_334;
        *(undefined4 *)((longlong)(pafVar21 + 2) + 8) = uStack_330;
        *(undefined4 *)((longlong)(pafVar21 + 2) + 0xc) = uStack_32c;
        pafVar21[3][0] = local_328;
        *(undefined4 *)((longlong)(pafVar21 + 3) + 4) = uStack_324;
        *(undefined4 *)((longlong)(pafVar21 + 3) + 8) = uStack_320;
        *(undefined4 *)((longlong)(pafVar21 + 3) + 0xc) = uStack_31c;
        pafVar21[4][0] = local_318;
        *(undefined4 *)((longlong)(pafVar21 + 4) + 4) = uStack_314;
        *(undefined4 *)((longlong)(pafVar21 + 4) + 8) = uStack_310;
        *(undefined4 *)((longlong)(pafVar21 + 4) + 0xc) = uStack_30c;
        pafVar21[5][0] = local_308;
        *(undefined4 *)((longlong)(pafVar21 + 5) + 4) = uStack_304;
        *(undefined4 *)((longlong)(pafVar21 + 5) + 8) = uStack_300;
        *(undefined4 *)((longlong)(pafVar21 + 5) + 0xc) = uStack_2fc;
        fStack_2f4 = pafVar21[-1][0];
        fStack_2f0 = (*pafVar21)[0];
        fStack_2ec = pafVar21[1][0];
        fStack_2e4 = pafVar21[-1][1];
        fStack_2e0 = (*pafVar21)[1];
        fStack_2dc = pafVar21[1][1];
        fStack_2d4 = pafVar21[-1][2];
        fStack_2d0 = (*pafVar21)[2];
        fStack_2cc = pafVar21[1][2];
        fStack_2c4 = pafVar21[-1][3];
        fStack_2c0 = (*pafVar21)[3];
        fStack_2bc = pafVar21[1][3];
        local_2f8 = ((TMatrix<float> *)(pafVar21 + -2))->M[0][0];
        local_2e8 = ((TMatrix<float> *)(pafVar21 + -2))->M[0][1];
        local_2d8 = ((TMatrix<float> *)(pafVar21 + -2))->M[0][2];
        local_2c8 = ((TMatrix<float> *)(pafVar21 + -2))->M[0][3];
        pafVar21[6][0] = local_2f8;
        *(float *)((longlong)(pafVar21 + 6) + 4) = fStack_2f4;
        *(float *)((longlong)(pafVar21 + 6) + 8) = fStack_2f0;
        *(float *)((longlong)(pafVar21 + 6) + 0xc) = fStack_2ec;
        pafVar21[7][0] = local_2e8;
        *(float *)((longlong)(pafVar21 + 7) + 4) = fStack_2e4;
        *(float *)((longlong)(pafVar21 + 7) + 8) = fStack_2e0;
        *(float *)((longlong)(pafVar21 + 7) + 0xc) = fStack_2dc;
        pafVar21[8][0] = local_2d8;
        *(float *)((longlong)(pafVar21 + 8) + 4) = fStack_2d4;
        *(float *)((longlong)(pafVar21 + 8) + 8) = fStack_2d0;
        *(float *)((longlong)(pafVar21 + 8) + 0xc) = fStack_2cc;
        pafVar21[9][0] = local_2c8;
        *(float *)((longlong)(pafVar21 + 9) + 4) = fStack_2c4;
        *(float *)((longlong)(pafVar21 + 9) + 8) = fStack_2c0;
        *(float *)((longlong)(pafVar21 + 9) + 0xc) = fStack_2bc;
        uVar35 = __xmm_7fffffff7fffffff7fffffff7fffffff;
        fVar37 = __real_322bcc77;
        if (((longlong)(pafVar21 + 0xc) + 0xcU < &local_198) || (auStack_170 + 4 < pafVar21 + 10)) {
          local_198 = *(undefined8 *)(pafVar21 + 10);
          uStack_190 = *(undefined8 *)((longlong)(pafVar21 + 10) + 8);
          local_188 = *(undefined8 *)(pafVar21 + 0xb);
          uStack_180 = *(undefined8 *)((longlong)(pafVar21 + 0xb) + 8);
          local_178 = *(undefined8 *)(pafVar21 + 0xc);
          auStack_170 = *(undefined1 (*) [8])((longlong)(pafVar21 + 0xc) + 8);
        }
        else {
          local_198 = *(undefined8 *)(pafVar21 + 10);
          uStack_190 = *(undefined8 *)((longlong)(pafVar21 + 10) + 8);
          local_188 = *(undefined8 *)(pafVar21 + 0xb);
          uStack_180 = *(undefined8 *)((longlong)(pafVar21 + 0xb) + 8);
          local_178 = *(undefined8 *)(pafVar21 + 0xc);
          auStack_170 = *(undefined1 (*) [8])((longlong)(pafVar21 + 0xc) + 8);
        }
        uStack_15c = *(undefined4 *)((longlong)(pafVar21 + 0xd) + 0xc);
        local_168 = local_378._s_0.X + pafVar21[0xd][0];
        fStack_164 = local_378._s_0.Y + *(float *)((longlong)(pafVar21 + 0xd) + 4);
        fStack_160 = local_378._s_0.Z + *(float *)((longlong)(pafVar21 + 0xd) + 8);
        *(undefined8 *)(pafVar21 + 10) = local_198;
        *(undefined8 *)((longlong)(pafVar21 + 10) + 8) = uStack_190;
        *(undefined8 *)(pafVar21 + 0xb) = local_188;
        *(undefined8 *)((longlong)(pafVar21 + 0xb) + 8) = uStack_180;
        *(undefined8 *)(pafVar21 + 0xc) = local_178;
        *(undefined1 (*) [8])((longlong)(pafVar21 + 0xc) + 8) = auStack_170;
        pafVar21[0xd][0] = local_168;
        *(float *)((longlong)(pafVar21 + 0xd) + 4) = fStack_164;
        *(float *)((longlong)(pafVar21 + 0xd) + 8) = fStack_160;
        *(undefined4 *)((longlong)(pafVar21 + 0xd) + 0xc) = uStack_15c;
        local_368 = local_378._s_0.X;
        local_364 = local_378._s_0.Y;
        local_360 = local_378._s_0.Z;
        local_278 = fVar38;
        fStack_274 = fVar39;
        fStack_270 = fVar36;
        fStack_26c = fVar22;
        local_268 = fVar23;
        fStack_264 = fVar24;
        fStack_260 = fVar25;
        fStack_25c = fVar26;
        local_258 = fVar27;
        fStack_254 = fVar28;
        fStack_250 = fVar29;
        fStack_24c = fVar30;
        local_248 = fVar31;
        fStack_244 = fVar32;
        fStack_240 = fVar33;
        fStack_23c = fVar34;
        if (((fVar37 < (float)(*(uint *)(pafVar21 + 10) & uVar35)) ||
            (fVar37 < (float)(*(uint *)((longlong)(pafVar21 + 10) + 4) & uVar35))) ||
           (fVar37 < (float)(*(uint *)((longlong)(pafVar21 + 10) + 8) & uVar35))) {
LAB_149406c7b:
          FMath::MatrixInverse(&local_118,(TMatrix<float> *)(pafVar21 + 10));
          fVar38 = local_118.M[0][0];
          fVar39 = local_118.M[0][1];
          fVar36 = local_118.M[0][2];
          fVar22 = local_118.M[0][3];
          fVar23 = local_118.M[1][0];
          fVar24 = local_118.M[1][1];
          fVar25 = local_118.M[1][2];
          fVar26 = local_118.M[1][3];
          fVar27 = local_118.M[2][0];
          fVar28 = local_118.M[2][1];
          fVar29 = local_118.M[2][2];
          fVar30 = local_118.M[2][3];
          fVar31 = local_118.M[3][0];
          fVar32 = local_118.M[3][1];
          fVar33 = local_118.M[3][2];
          fVar34 = local_118.M[3][3];
        }
        else {
          if (((fVar37 < (float)(*(uint *)(pafVar21 + 0xb) & uVar35)) ||
              (fVar37 < (float)(*(uint *)((longlong)(pafVar21 + 0xb) + 4) & uVar35))) ||
             (fVar37 < (float)(*(uint *)((longlong)(pafVar21 + 0xb) + 8) & uVar35)))
          goto LAB_149406c7b;
          if (((fVar37 < (float)(*(uint *)(pafVar21 + 0xc) & uVar35)) ||
              (fVar37 < (float)(*(uint *)((longlong)(pafVar21 + 0xc) + 4) & uVar35))) ||
             (fVar38 = UE::Math::TMatrix<float>::Identity.M[0][0],
             fVar39 = UE::Math::TMatrix<float>::Identity.M[0][1],
             fVar36 = UE::Math::TMatrix<float>::Identity.M[0][2],
             fVar22 = UE::Math::TMatrix<float>::Identity.M[0][3],
             fVar23 = UE::Math::TMatrix<float>::Identity.M[1][0],
             fVar24 = UE::Math::TMatrix<float>::Identity.M[1][1],
             fVar25 = UE::Math::TMatrix<float>::Identity.M[1][2],
             fVar26 = UE::Math::TMatrix<float>::Identity.M[1][3],
             fVar27 = UE::Math::TMatrix<float>::Identity.M[2][0],
             fVar28 = UE::Math::TMatrix<float>::Identity.M[2][1],
             fVar29 = UE::Math::TMatrix<float>::Identity.M[2][2],
             fVar30 = UE::Math::TMatrix<float>::Identity.M[2][3],
             fVar31 = UE::Math::TMatrix<float>::Identity.M[3][0],
             fVar32 = UE::Math::TMatrix<float>::Identity.M[3][1],
             fVar33 = UE::Math::TMatrix<float>::Identity.M[3][2],
             fVar34 = UE::Math::TMatrix<float>::Identity.M[3][3],
             fVar37 < (float)(*(uint *)((longlong)(pafVar21 + 0xc) + 8) & uVar35)))
          goto LAB_149406c7b;
        }
        pafVar21[0xe][0] = fVar38;
        *(float *)((longlong)(pafVar21 + 0xe) + 4) = fVar39;
        *(float *)((longlong)(pafVar21 + 0xe) + 8) = fVar36;
        *(float *)((longlong)(pafVar21 + 0xe) + 0xc) = fVar22;
        pafVar21[0xf][0] = fVar23;
        *(float *)((longlong)(pafVar21 + 0xf) + 4) = fVar24;
        *(float *)((longlong)(pafVar21 + 0xf) + 8) = fVar25;
        *(float *)((longlong)(pafVar21 + 0xf) + 0xc) = fVar26;
        pafVar21[0x10][0] = fVar27;
        *(float *)((longlong)(pafVar21 + 0x10) + 4) = fVar28;
        *(float *)((longlong)(pafVar21 + 0x10) + 8) = fVar29;
        *(float *)((longlong)(pafVar21 + 0x10) + 0xc) = fVar30;
        pafVar21[0x11][0] = fVar31;
        *(float *)((longlong)(pafVar21 + 0x11) + 4) = fVar32;
        *(float *)((longlong)(pafVar21 + 0x11) + 8) = fVar33;
        *(float *)((longlong)(pafVar21 + 0x11) + 0xc) = fVar34;
        fVar4 = *(float *)((longlong)(pafVar21 + 0x13) + 4);
        fVar5 = *(float *)((longlong)(pafVar21 + 0x13) + 8);
        pafVar21[0x13][0] = local_378._s_0.X + pafVar21[0x13][0];
        *(float *)((longlong)(pafVar21 + 0x13) + 4) = local_378._s_0.Y + fVar4;
        *(float *)((longlong)(pafVar21 + 0x13) + 8) = local_378._s_0.Z + fVar5;
        fVar4 = (param_1->field0_0x0)._s_0.Y;
        fVar5 = (param_1->field0_0x0)._s_0.Z;
        pafVar21[0x19][0] = (param_1->field0_0x0)._s_0.X;
        *(float *)((longlong)(pafVar21 + 0x19) + 4) = fVar4;
        *(float *)((longlong)(pafVar21 + 0x19) + 8) = fVar5;
        *(undefined4 *)((longlong)(pafVar21 + 0x19) + 0xc) = 0x3f800000;
        puVar2 = (undefined1 *)(pafVar21 + 0x1a);
        pafVar21 = pafVar21 + 0x20;
        local_238 = fVar38;
        fStack_234 = fVar39;
        fStack_230 = fVar36;
        fStack_22c = fVar22;
        local_228 = fVar23;
        fStack_224 = fVar24;
        fStack_220 = fVar25;
        fStack_21c = fVar26;
        local_218 = fVar27;
        fStack_214 = fVar28;
        fStack_210 = fVar29;
        fStack_20c = fVar30;
        local_208 = fVar31;
        fStack_204 = fVar32;
        fStack_200 = fVar33;
        fStack_1fc = fVar34;
      } while ((TArray<FNiagaraEmitterParameters,TSizedDefaultAllocator<32>_> *)puVar2 !=
               &this->EmitterParameters);
    }
    dVar6 = (this->GatheredInstanceParameters).ComponentTrans.Translation.ZW.m128d_f64[0];
    dVar12 = (this->GatheredInstanceParameters).ComponentTrans.Translation.ZW.m128d_f64[1] + 0.0;
    dVar15 = (this->GatheredInstanceParameters).ComponentTrans.Translation.XY.m128d_f64[1] +
             (double)local_2a8._8_8_;
    auVar14._8_4_ = SUB84(dVar15,0);
    auVar14._0_8_ =
         (this->GatheredInstanceParameters).ComponentTrans.Translation.XY.m128d_f64[0] +
         (double)local_2a8._0_8_;
    auVar14._12_4_ = (int)((ulonglong)dVar15 >> 0x20);
    *(undefined1 (*) [16])(this->GatheredInstanceParameters).ComponentTrans.Translation.XY.m128d_f64
         = auVar14;
    auVar11._8_4_ = SUB84(dVar12,0);
    auVar11._0_8_ = local_298 + dVar6;
    auVar11._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
    *(undefined1 (*) [16])(this->GatheredInstanceParameters).ComponentTrans.Translation.ZW.m128d_f64
         = auVar11;
    NiagaraLWCHelper::RebaseDataSet
              ((TVector<float> *)&local_378._s_0,param_2,this->SystemInstanceIndex);
    local_2b8 = (TSharedRef<FNiagaraEmitterInstance,1> *)(this->Emitters).AllocatorInstance.Data;
    iStack_2b0 = (this->Emitters).ArrayNum;
    pFVar8 = (this->ComputeDispatchInterfacePtr).Object;
    if ((iStack_2b0 < 0) &&
       (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L""), bVar18)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    local_288._12_4_ = uStack_2ac;
    local_288.ArrayNum = iStack_2b0;
    local_288.DataPtr = local_2b8;
    NiagaraLWCHelper::RebaseEmitters((TVector<float> *)&local_378._s_0,&local_288,pFVar8);
    *(undefined8 *)&(this->LWCTile).field0_0x0 = *(undefined8 *)&param_1->field0_0x0;
    (this->LWCTile).field0_0x0._s_0.Z = (param_1->field0_0x0)._s_0.Z;
    this_00 = (UActorComponent *)FWeakObjectPtr::Get(&(this->AttachComponent).WeakPtr);
    if (this_00 != (UActorComponent *)0x0) {
      UActorComponent::MarkRenderStateDirty(this_00);
    }
  }
  return;
}

// WaitForConcurrentTickAndFinalize @ 1494085c0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FNiagaraSystemInstance::WaitForConcurrentTickAndFinalize(FNiagaraSystemInstance *this,bool param_1)

{
  WaitForConcurrentTickDoNotFinalize(this,param_1);
  if ((this->FinalizeRef).TaskEntry != (FNiagaraSystemInstance **)0x0) {
    FinalizeTick_GameThread(this,true);
    return;
  }
  return;
}

// WaitForConcurrentTickDoNotFinalize @ 149408a70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FNiagaraSystemInstance::WaitForConcurrentTickDoNotFinalize
          (FNiagaraSystemInstance *this,bool param_1)

{
  undefined1 *puVar1;
  int *piVar2;
  ulong64 *puVar3;
  int iVar4;
  FBaseGraphTask *pFVar5;
  UNiagaraSystem *pUVar6;
  code *pcVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  int iVar12;
  FName *pFVar13;
  FThreadSafeStaticStat<FStat_STAT_NiagaraSystemWaitForAsyncTick> FVar14;
  UFXSystemComponent *pUVar15;
  UClass *pUVar16;
  UFXSystemComponent *pUVar17;
  UFXSystemComponent *pUVar18;
  UFXSystemComponent *pUVar19;
  longlong lVar20;
  FThreadStats *pFVar21;
  FThreadStatsPool *pFVar22;
  FParticlePerfStats *pFVar23;
  FParticlePerfStats *pFVar24;
  FTaskGraphInterface *pFVar25;
  UObject *this_00;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> FVar26;
  uint uVar27;
  FName FVar28;
  LARGE_INTEGER LVar29;
  FNameEntryId FVar30;
  undefined8 extraout_XMM0_Qa;
  undefined1 extraout_XMM0 [16];
  undefined1 extraout_XMM0_00 [16];
  undefined1 extraout_XMM0_01 [16];
  undefined1 extraout_XMM0_02 [16];
  undefined1 extraout_XMM0_03 [16];
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auStackY_2f8 [32];
  FName local_290;
  FColor_u_0 local_280 [2];
  FName local_278;
  FName local_270;
  FColor_u_0 local_268 [2];
  LARGE_INTEGER local_260;
  FName local_258;
  TRefCountPtr<FBaseGraphTask> local_248;
  FString local_240;
  FString local_230;
  FString local_220;
  LARGE_INTEGER local_210;
  FName local_208;
  LARGE_INTEGER local_200;
  LARGE_INTEGER local_1f8;
  LARGE_INTEGER local_1f0;
  LARGE_INTEGER local_1e8;
  LARGE_INTEGER local_1e0;
  FNiagaraSystemInstance *local_1d8;
  LARGE_INTEGER local_1d0;
  FStatMessage local_1c8;
  FStatMessage local_1b8;
  FName local_1a8;
  FName local_1a0;
  TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
  local_198;
  TStringBuilderBase<wchar_t> local_168;
  wchar_t local_148 [128];
  ulonglong local_48 [4];
  
  local_48[0] = __security_cookie.value ^ (ulonglong)auStackY_2f8;
  bVar11 = IsInGameThread();
  if ((!bVar11) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsInGameThread()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSystemInstance.cpp"
                          ,0x9c3,L""), bVar11)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  QueryPerformanceCounter(&local_260);
  pFVar5 = (this->ConcurrentTickGraphEvent).Reference;
  bVar11 = false;
  pUVar19 = (UFXSystemComponent *)0x0;
  if ((pFVar5 != (FBaseGraphTask *)0x0) && (pFVar5->field_0xd0 == '\0')) {
    if (__CsvProfilerStat2508 == false) {
      FCsvProfilerTrace::OutputInlineStatExclusive("EventWait/Effects");
      __CsvProfilerStat2508 = true;
    }
    FCsvProfiler::BeginSetWaitStat
              ("EventWait/Effects","CsvEventWait/Effects","CsvEventWait/Effects (Non-CP)");
    FVar14 = StatPtr_STAT_NiagaraSystemWaitForAsyncTick;
    if (StatPtr_STAT_NiagaraSystemWaitForAsyncTick ==
        (FThreadSafeStaticStat<FStat_STAT_NiagaraSystemWaitForAsyncTick>)0x0) {
      pFVar13 = ::FName::FName(&local_1a8,"STAT_NiagaraSystemWaitForAsyncTick");
      FVar14 = (FThreadSafeStaticStat<FStat_STAT_NiagaraSystemWaitForAsyncTick>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraSystemWaitForAsyncTick,
                          *pFVar13,L"System Instance WaitForAsyncTick [GT]","STATGROUP_Niagara",
                          "STATCAT_Niagara",L"Niagara",true,true,ST_int64,true,false,MCR_Invalid);
    }
    local_290.ComparisonIndex.Value = 0;
    local_290.Number = 0;
    bVar10 = false;
    bVar8 = false;
    bVar9 = false;
    FVar28 = *(FName *)FVar14;
    FVar30 = FVar28.ComparisonIndex.Value;
    uVar27 = FVar28.Number;
    if ((FVar30.Value != 0) || (uVar27 != 0)) {
      if (GCycleStatsShouldEmitNamedEvents != 0) {
        local_268[0].Bits = 0;
        FGenericPlatformMisc::BeginNamedEvent
                  ((FColor *)&local_268[0]._s_0,(char *)*(FName *)((longlong)FVar14 + 0x10));
        bVar8 = false;
        bVar9 = true;
        if (-1 < CpuChannel->Enabled) {
          local_278.ComparisonIndex.Value = FVar30.Value;
          local_278.Number = uVar27;
          FCpuProfilerTrace::OutputBeginDynamicEventWithId
                    (&local_278,(wchar_t *)*(FName *)((longlong)FVar14 + 8),
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSystemInstance.cpp"
                     ,0x9cd);
          bVar8 = true;
          bVar9 = true;
        }
      }
      bVar10 = false;
      if (FThreadStats::bPrimaryEnable != false) {
        local_278.ComparisonIndex.Value = FVar30.Value;
        local_278.Number = uVar27;
        FThreadStats::AddMessage(FVar28,CycleScopeStart);
        bVar10 = true;
        local_290 = FVar28;
      }
    }
    pUVar15 = (UFXSystemComponent *)FWeakObjectPtr::Get(&(this->AttachComponent).WeakPtr);
    auVar31 = extraout_XMM0;
    if (pUVar15 == (UFXSystemComponent *)0x0) {
LAB_149408c99:
      pUVar15 = pUVar19;
    }
    else {
      pUVar16 = Z_Construct_UClass_UFXSystemComponent_NoRegister();
      iVar12 = (int)pUVar16->_padding_;
      auVar31 = extraout_XMM0_00;
      if ((*(int *)(pUVar15->_padding_ + 0x38) < iVar12) ||
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar15->_padding_ + 0x30) + (longlong)iVar12 * 8) !=
          &pUVar16->_padding_)) goto LAB_149408c99;
    }
    pUVar6 = this->System;
    pUVar17 = pUVar19;
    if (((this->World != (UWorld *)0x0) && (0 < (int)FParticlePerfStats::WorldStatsReaders)) &&
       (FParticlePerfStats::bStatsEnabled != (TAtomic<bool>)0x0)) {
      pUVar17 = (UFXSystemComponent *)FParticlePerfStats::GetWorldPerfStats(this->World);
      auVar31 = extraout_XMM0_01;
    }
    pUVar18 = pUVar19;
    if (((pUVar6 != (UNiagaraSystem *)0x0) && (0 < (int)FParticlePerfStats::SystemStatsReaders)) &&
       (FParticlePerfStats::bStatsEnabled != (TAtomic<bool>)0x0)) {
      pUVar18 = (UFXSystemComponent *)
                FParticlePerfStats::GetSystemPerfStats((UFXSystemAsset *)pUVar6);
      auVar31 = extraout_XMM0_02;
    }
    if (((pUVar15 != (UFXSystemComponent *)0x0) &&
        (0 < (int)FParticlePerfStats::ComponentStatsReaders)) &&
       (FParticlePerfStats::bStatsEnabled != (TAtomic<bool>)0x0)) {
      pUVar19 = (UFXSystemComponent *)FParticlePerfStats::GetComponentPerfStats(pUVar15);
      auVar31 = extraout_XMM0_03;
    }
    if (((pUVar17 != (UFXSystemComponent *)0x0) || (pUVar18 != (UFXSystemComponent *)0x0)) ||
       (LVar29.QuadPart = -1, pUVar19 != (UFXSystemComponent *)0x0)) {
      QueryPerformanceCounter(&local_210);
      auVar31._8_8_ = extraout_XMM0_Qb;
      auVar31._0_8_ = extraout_XMM0_Qa;
      LVar29 = local_210;
    }
    bVar11 = true;
    if (GNiagaraSystemSimulationTaskStallTimeout < 1) {
      pFVar25 = FTaskGraphInterface::Get();
      FTaskGraphInterface::WaitUntilTaskCompletes
                (pFVar25,&this->ConcurrentTickGraphEvent,GameThread_Local);
    }
    else {
      local_248.Reference = (this->ConcurrentTickGraphEvent).Reference;
      auVar32._0_8_ =
           (double)GNiagaraSystemSimulationTaskStallTimeout * __real_4024000000000000 +
           __real_3fe0000000000000;
      auVar32._8_8_ = 0;
      auVar31 = roundpd(auVar31,auVar32,1);
      if (local_248.Reference != (FBaseGraphTask *)0x0) {
        LOCK();
        *(int *)&(local_248.Reference)->field_0x30 = *(int *)&(local_248.Reference)->field_0x30 + 1;
        UNLOCK();
      }
      local_198.AllocatorInstance.SecondaryData = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0
      ;
      local_198.ArrayNum = 1;
      UE::Core::Private::
      ReallocForCopy<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TRefCountPtr<FBaseGraphTask>_>_>
                (8,8,1,0,&local_198.AllocatorInstance,1,&local_198.ArrayMax);
      FVar26 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)&local_198;
      if (local_198.AllocatorInstance.SecondaryData !=
          (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
        FVar26 = local_198.AllocatorInstance.SecondaryData;
      }
      ConstructItems<TRefCountPtr<FBaseGraphTask>,TRefCountPtr<FBaseGraphTask>,int>
                ((void *)FVar26,&local_248,1);
      iVar12 = WaitForAnyTaskCompleted(&local_198,(FTimespan)(longlong)auVar31._0_8_);
      FVar26 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)&local_198;
      if (local_198.AllocatorInstance.SecondaryData !=
          (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
        FVar26 = local_198.AllocatorInstance.SecondaryData;
      }
      DestructItems<TRefCountPtr<FBaseGraphTask>,int>
                ((TRefCountPtr<FBaseGraphTask> *)FVar26,local_198.ArrayNum);
      if (local_198.AllocatorInstance.SecondaryData !=
          (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
        FMemory::Free((void *)local_198.AllocatorInstance.SecondaryData);
      }
      if (local_248.Reference != (FBaseGraphTask *)0x0) {
        LOCK();
        puVar1 = &(local_248.Reference)->field_0x30;
        iVar4 = *(int *)puVar1;
        *(int *)puVar1 = *(int *)puVar1 + -1;
        UNLOCK();
        if ((iVar4 == 1) && (local_248.Reference != (FBaseGraphTask *)0x0)) {
          (*(code *)**(undefined8 **)local_248.Reference)(local_248.Reference,1);
        }
      }
      if (iVar12 == -1) {
        local_168.Base = local_148;
        local_168.bIsDynamic = false;
        local_168.bIsExternal = false;
        local_168.CurPos = local_148;
        local_168.End = (wchar_t *)local_48;
        if (this->System == (UNiagaraSystem *)0x0) {
          ::FString::FString(&local_240,L"None");
        }
        else {
          local_208 = (FName)this->System->_padding_;
          ::FName::ToString(&local_208,&local_240);
        }
        TStringBuilderBase<wchar_t>::AppendfImpl(&local_168,L"System (%s)\n");
        if (local_240.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_240.Data.AllocatorInstance.Data);
        }
        TStringBuilderBase<wchar_t>::AppendfImpl
                  (&local_168,L"ConcurrentTickGraphEvent Complete (%d)\n");
        TStringBuilderBase<wchar_t>::AppendfImpl
                  (&local_168,L"ConcurrentTickBatchGraphEvent Complete (%d)\n");
        TStringBuilderBase<wchar_t>::AppendfImpl(&local_168,L"FinalizePending (%d)\n");
        TStringBuilderBase<wchar_t>::AppendfImpl(&local_168,L"SystemInstanceIndex (%d)\n");
        TStringBuilderBase<wchar_t>::AppendfImpl(&local_168,L"SystemInstanceState (%d)\n");
        if (local_168.End < local_168.CurPos + 1) {
          TStringBuilderBase<wchar_t>::Extend(&local_168,1);
        }
        *local_168.CurPos = L'\0';
        UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
        TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_168);
      }
    }
    if (LVar29.QuadPart != -1) {
      QueryPerformanceCounter(&local_200);
      lVar20 = local_200.QuadPart - (longlong)LVar29;
      if (pUVar17 != (UFXSystemComponent *)0x0) {
        pUVar17->_padding_ = pUVar17->_padding_ + lVar20;
      }
      if (pUVar18 != (UFXSystemComponent *)0x0) {
        pUVar18->_padding_ = pUVar18->_padding_ + lVar20;
      }
      if (pUVar19 != (UFXSystemComponent *)0x0) {
        pUVar19->_padding_ = pUVar19->_padding_ + lVar20;
      }
    }
    if (bVar9) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if (bVar8) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if (((bVar10) && (local_290 != (FName)0x0)) &&
       ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
      pFVar21 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar21 == (FThreadStats *)0x0) {
        pFVar22 = FThreadStatsPool::Get();
        pFVar21 = FThreadStatsPool::GetFromPool(pFVar22);
      }
      if (pFVar21->bWaitForExplicitFlush < pFVar21->ScopeCount) {
        local_1c8.NameAndInfo.Index = local_290.ComparisonIndex.Value;
        local_1c8.NameAndInfo.Number = local_290.Number & 0xffff6fff | 0x6000;
        QueryPerformanceCounter(&local_1f8);
        local_1c8.StatData.Pad[4] = '\0';
        local_1c8.StatData.Pad[5] = '\0';
        local_1c8.StatData.Pad[6] = '\0';
        local_1c8.StatData.Pad[7] = '\0';
        local_1c8.StatData.Pad[0] = local_1f8.s.LowPart._0_1_;
        local_1c8.StatData.Pad[1] = local_1f8.s.LowPart._1_1_;
        local_1c8.StatData.Pad[2] = local_1f8.s.LowPart._2_1_;
        local_1c8.StatData.Pad[3] = local_1f8.s.LowPart._3_1_;
        FThreadStats::AddStatMessage(pFVar21,&local_1c8);
        piVar2 = &pFVar21->ScopeCount;
        *piVar2 = *piVar2 + -1;
        if (*piVar2 == 0) {
          FThreadStats::Flush(pFVar21,false,false);
        }
        else if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(pFVar21,false,false);
        }
      }
    }
    FCsvProfiler::EndSetWaitStat();
  }
  pUVar19 = (UFXSystemComponent *)0x0;
  pFVar5 = (this->ConcurrentTickBatchGraphEvent).Reference;
  if ((pFVar5 == (FBaseGraphTask *)0x0) || (pFVar5->field_0xd0 != '\0')) {
    if (!bVar11) goto LAB_149409600;
  }
  else {
    if (__CsvProfilerStat2530 == false) {
      FCsvProfilerTrace::OutputInlineStatExclusive("EventWait/Effects");
      __CsvProfilerStat2530 = true;
    }
    FCsvProfiler::BeginSetWaitStat
              ("EventWait/Effects","CsvEventWait/Effects","CsvEventWait/Effects (Non-CP)");
    FVar14 = StatPtr_STAT_NiagaraSystemWaitForAsyncTick;
    if (StatPtr_STAT_NiagaraSystemWaitForAsyncTick ==
        (FThreadSafeStaticStat<FStat_STAT_NiagaraSystemWaitForAsyncTick>)0x0) {
      pFVar13 = ::FName::FName(&local_1a0,"STAT_NiagaraSystemWaitForAsyncTick");
      FVar14 = (FThreadSafeStaticStat<FStat_STAT_NiagaraSystemWaitForAsyncTick>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraSystemWaitForAsyncTick,
                          *pFVar13,L"System Instance WaitForAsyncTick [GT]","STATGROUP_Niagara",
                          "STATCAT_Niagara",L"Niagara",true,true,ST_int64,true,false,MCR_Invalid);
    }
    FVar28 = *(FName *)FVar14;
    bVar11 = false;
    bVar9 = false;
    local_258.ComparisonIndex.Value = 0;
    local_258.Number = 0;
    FVar30 = FVar28.ComparisonIndex.Value;
    uVar27 = FVar28.Number;
    if ((FVar30.Value == 0) && (uVar27 == 0)) {
LAB_149409297:
      bVar8 = false;
      FVar28 = local_258;
    }
    else {
      if (GCycleStatsShouldEmitNamedEvents != 0) {
        local_280[0].Bits = 0;
        FGenericPlatformMisc::BeginNamedEvent
                  ((FColor *)&local_280[0]._s_0,(char *)*(FName *)((longlong)FVar14 + 0x10));
        bVar11 = false;
        bVar9 = true;
        if (-1 < CpuChannel->Enabled) {
          local_270.ComparisonIndex.Value = FVar30.Value;
          local_270.Number = uVar27;
          FCpuProfilerTrace::OutputBeginDynamicEventWithId
                    (&local_270,(wchar_t *)*(FName *)((longlong)FVar14 + 8),
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSystemInstance.cpp"
                     ,0x9e3);
          bVar11 = true;
          bVar9 = true;
        }
      }
      if (FThreadStats::bPrimaryEnable == false) goto LAB_149409297;
      local_270.ComparisonIndex.Value = FVar30.Value;
      local_270.Number = uVar27;
      local_258 = FVar28;
      FThreadStats::AddMessage(FVar28,CycleScopeStart);
      bVar8 = true;
    }
    pUVar15 = (UFXSystemComponent *)FWeakObjectPtr::Get(&(this->AttachComponent).WeakPtr);
    if (pUVar15 == (UFXSystemComponent *)0x0) {
LAB_1494092cf:
      pUVar15 = pUVar19;
    }
    else {
      pUVar16 = Z_Construct_UClass_UFXSystemComponent_NoRegister();
      iVar12 = (int)pUVar16->_padding_;
      if ((*(int *)(pUVar15->_padding_ + 0x38) < iVar12) ||
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar15->_padding_ + 0x30) + (longlong)iVar12 * 8) !=
          &pUVar16->_padding_)) goto LAB_1494092cf;
    }
    pUVar6 = this->System;
    if (((this->World != (UWorld *)0x0) && (0 < (int)FParticlePerfStats::WorldStatsReaders)) &&
       (FParticlePerfStats::bStatsEnabled != (TAtomic<bool>)0x0)) {
      pUVar19 = (UFXSystemComponent *)FParticlePerfStats::GetWorldPerfStats(this->World);
    }
    if (((pUVar6 == (UNiagaraSystem *)0x0) || ((int)FParticlePerfStats::SystemStatsReaders < 1)) ||
       (FParticlePerfStats::bStatsEnabled == (TAtomic<bool>)0x0)) {
      pFVar23 = (FParticlePerfStats *)0x0;
    }
    else {
      pFVar23 = FParticlePerfStats::GetSystemPerfStats((UFXSystemAsset *)pUVar6);
    }
    pFVar24 = (FParticlePerfStats *)0x0;
    if (((pUVar15 != (UFXSystemComponent *)0x0) &&
        (0 < (int)FParticlePerfStats::ComponentStatsReaders)) &&
       (FParticlePerfStats::bStatsEnabled != (TAtomic<bool>)0x0)) {
      pFVar24 = FParticlePerfStats::GetComponentPerfStats(pUVar15);
    }
    if (((pUVar19 != (UFXSystemComponent *)0x0) || (pFVar23 != (FParticlePerfStats *)0x0)) ||
       (LVar29.QuadPart = -1, pFVar24 != (FParticlePerfStats *)0x0)) {
      QueryPerformanceCounter(&local_1f0);
      LVar29 = local_1f0;
    }
    pFVar25 = FTaskGraphInterface::Get();
    FTaskGraphInterface::WaitUntilTaskCompletes
              (pFVar25,&this->ConcurrentTickBatchGraphEvent,GameThread_Local);
    if (LVar29.QuadPart != -1) {
      QueryPerformanceCounter(&local_1e8);
      lVar20 = local_1e8.QuadPart - (longlong)LVar29;
      if (pUVar19 != (UFXSystemComponent *)0x0) {
        pUVar19->_padding_ = pUVar19->_padding_ + lVar20;
      }
      if (pFVar23 != (FParticlePerfStats *)0x0) {
        puVar3 = &(pFVar23->GameThreadStats).WaitCycles;
        *puVar3 = *puVar3 + lVar20;
      }
      if (pFVar24 != (FParticlePerfStats *)0x0) {
        puVar3 = &(pFVar24->GameThreadStats).WaitCycles;
        *puVar3 = *puVar3 + lVar20;
      }
    }
    if (bVar9) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if (bVar11) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if (((bVar8) && (FVar28 != (FName)0x0)) &&
       ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
      pFVar21 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar21 == (FThreadStats *)0x0) {
        pFVar22 = FThreadStatsPool::Get();
        pFVar21 = FThreadStatsPool::GetFromPool(pFVar22);
      }
      if (pFVar21->bWaitForExplicitFlush < pFVar21->ScopeCount) {
        local_1b8.NameAndInfo.Index.Value = local_258.ComparisonIndex.Value;
        local_1b8.NameAndInfo.Number = FVar28.Number & 0xffff6fff | 0x6000;
        QueryPerformanceCounter(&local_1e0);
        local_1b8.StatData.Pad[4] = '\0';
        local_1b8.StatData.Pad[5] = '\0';
        local_1b8.StatData.Pad[6] = '\0';
        local_1b8.StatData.Pad[7] = '\0';
        local_1b8.StatData.Pad[0] = local_1e0.s.LowPart._0_1_;
        local_1b8.StatData.Pad[1] = local_1e0.s.LowPart._1_1_;
        local_1b8.StatData.Pad[2] = local_1e0.s.LowPart._2_1_;
        local_1b8.StatData.Pad[3] = local_1e0.s.LowPart._3_1_;
        FThreadStats::AddStatMessage(pFVar21,&local_1b8);
        piVar2 = &pFVar21->ScopeCount;
        *piVar2 = *piVar2 + -1;
        if (*piVar2 == 0) {
          FThreadStats::Flush(pFVar21,false,false);
          FCsvProfiler::EndSetWaitStat();
          goto LAB_1494094a6;
        }
        if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(pFVar21,false,false);
        }
      }
    }
    FCsvProfiler::EndSetWaitStat();
  }
LAB_1494094a6:
  if (param_1) {
    local_1d8 = this;
    `FNiagaraSystemInstance::WaitForConcurrentTickDoNotFinalize'::__l32::<lambda_1>::operator()
              (&local_1d8);
  }
  QueryPerformanceCounter(&local_1d0);
  if (((0.0 < GWaitForAsyncStallWarnThresholdMS) &&
      ((double)GWaitForAsyncStallWarnThresholdMS <
       (double)(ulonglong)(local_1d0.QuadPart - (longlong)local_260) *
       FGenericPlatformTime::SecondsPerCycle64 * __real_408f400000000000)) &&
     (4 < (byte)LogNiagara._0_1_)) {
    pUVar6 = this->System;
    if ((pUVar6 == (UNiagaraSystem *)0x0) || (pUVar6->_padding_ == 0)) {
      ::FString::FString(&local_220,L"None");
    }
    else {
      UObjectBaseUtility::GetFullName((UObjectBaseUtility *)pUVar6,&local_220,(UObject *)0x0,None);
    }
    this_00 = FWeakObjectPtr::Get(&(this->AttachComponent).WeakPtr);
    if ((this_00 == (UObject *)0x0) || (*(longlong *)&this_00->field_0x10 == 0)) {
      ::FString::FString(&local_230,L"None");
    }
    else {
      UObjectBaseUtility::GetFullName((UObjectBaseUtility *)this_00,&local_230,(UObject *)0x0,None);
    }
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
    if (local_230.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_230.Data.AllocatorInstance.Data);
    }
    if (local_220.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_220.Data.AllocatorInstance.Data);
    }
  }
LAB_149409600:
  pFVar5 = (this->ConcurrentTickGraphEvent).Reference;
  if (pFVar5 != (FBaseGraphTask *)0x0) {
    (this->ConcurrentTickGraphEvent).Reference = (FBaseGraphTask *)0x0;
    LOCK();
    puVar1 = &pFVar5->field_0x30;
    iVar12 = *(int *)puVar1;
    *(int *)puVar1 = *(int *)puVar1 + -1;
    UNLOCK();
    if (iVar12 == 1) {
      (*(code *)**(undefined8 **)pFVar5)(pFVar5,1);
    }
  }
  pFVar5 = (this->ConcurrentTickBatchGraphEvent).Reference;
  if (pFVar5 != (FBaseGraphTask *)0x0) {
    (this->ConcurrentTickBatchGraphEvent).Reference = (FBaseGraphTask *)0x0;
    LOCK();
    puVar1 = &pFVar5->field_0x30;
    iVar12 = *(int *)puVar1;
    *(int *)puVar1 = *(int *)puVar1 + -1;
    UNLOCK();
    if (iVar12 == 1) {
      (*(code *)**(undefined8 **)pFVar5)(pFVar5,1);
    }
  }
  return;
}

// operator() @ 150541ff0

bool __thiscall
`FNiagaraSystemInstance::OnSimulationDestroyed'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_2996346430399968515>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_2996346430399968515>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 150542030

bool __thiscall
`FNiagaraSystemInstance::WaitForConcurrentTickDoNotFinalize'::__l32::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<_2996346430399968789>);
  if (bVar2) {
    UObjectBaseUtility::GetPathName
              (*(UObjectBaseUtility **)(*(longlong *)this + 0x50),&local_18,(UObject *)0x0);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_2996346430399968789>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_15054209e;
    }
  }
  bVar2 = false;
LAB_15054209e:
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

