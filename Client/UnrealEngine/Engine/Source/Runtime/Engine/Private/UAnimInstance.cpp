// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 389

// GetProxyOnAnyThread<FAnimInstanceProxy> @ 14742cea0

FAnimInstanceProxy * __thiscall
UAnimInstance::GetProxyOnAnyThread<FAnimInstanceProxy>(UAnimInstance *this)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  UClass *pUVar4;
  USkeletalMeshComponent *this_00;
  FAnimInstanceProxy *pFVar5;
  
  lVar2 = *(longlong *)&this->field_0x20;
  if (lVar2 != 0) {
    pUVar4 = Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
    lVar2 = *(longlong *)(lVar2 + 0x10);
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= *(int *)(lVar2 + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar4->_padding_)) {
      bVar3 = IsInGameThread();
      if (bVar3) {
        this_00 = GetSkelMeshComponent(this);
        USkeletalMeshComponent::HandleExistingParallelEvaluationTask(this_00,true,true);
      }
    }
  }
  pFVar5 = this->AnimInstanceProxy;
  if (pFVar5 == (FAnimInstanceProxy *)0x0) {
    pFVar5 = (FAnimInstanceProxy *)(**(code **)(*(longlong *)this + 0x378))(this);
    this->AnimInstanceProxy = pFVar5;
  }
  return pFVar5;
}

// GetProxyOnAnyThread<FAnimInstanceProxy> @ 14742cf30

FAnimInstanceProxy * __thiscall
UAnimInstance::GetProxyOnAnyThread<FAnimInstanceProxy>(UAnimInstance *this)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  UClass *pUVar4;
  USkeletalMeshComponent *this_00;
  FAnimInstanceProxy *pFVar5;
  
  lVar2 = *(longlong *)&this->field_0x20;
  if (lVar2 != 0) {
    pUVar4 = Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
    lVar2 = *(longlong *)(lVar2 + 0x10);
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= *(int *)(lVar2 + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar4->_padding_)) {
      bVar3 = IsInGameThread();
      if (bVar3) {
        this_00 = GetSkelMeshComponent(this);
        USkeletalMeshComponent::HandleExistingParallelEvaluationTask(this_00,true,true);
      }
    }
  }
  pFVar5 = this->AnimInstanceProxy;
  if (pFVar5 == (FAnimInstanceProxy *)0x0) {
    pFVar5 = (FAnimInstanceProxy *)(**(code **)(*(longlong *)this + 0x378))(this);
    this->AnimInstanceProxy = pFVar5;
  }
  return pFVar5;
}

// GetProxyOnGameThread<FAnimInstanceProxy> @ 14742cfc0

FAnimInstanceProxy * __thiscall
UAnimInstance::GetProxyOnGameThread<FAnimInstanceProxy>(UAnimInstance *this)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  FAnimInstanceProxy *pFVar5;
  UClass *pUVar6;
  USkeletalMeshComponent *this_00;
  
  if (this == (UAnimInstance *)0x0) {
    pFVar5 = (FAnimInstanceProxy *)0x0;
  }
  else {
    bVar4 = IsInGameThread();
    if (!bVar4) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AnimInstance.h"
                         ,0x687,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar5 = (FAnimInstanceProxy *)(*pcVar3)();
        return pFVar5;
      }
    }
    lVar2 = *(longlong *)&this->field_0x20;
    if (lVar2 != 0) {
      pUVar6 = Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
      lVar2 = *(longlong *)(lVar2 + 0x10);
      iVar1 = (int)pUVar6->_padding_;
      if ((iVar1 <= *(int *)(lVar2 + 0x38)) &&
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar6->_padding_)) {
        this_00 = GetSkelMeshComponent(this);
        USkeletalMeshComponent::HandleExistingParallelEvaluationTask(this_00,true,true);
      }
    }
    pFVar5 = this->AnimInstanceProxy;
    if (pFVar5 == (FAnimInstanceProxy *)0x0) {
      pFVar5 = (FAnimInstanceProxy *)(**(code **)(*(longlong *)this + 0x378))(this);
      this->AnimInstanceProxy = pFVar5;
      return pFVar5;
    }
  }
  return pFVar5;
}

// GetProxyOnGameThread<FAnimInstanceProxy> @ 14742d090

FAnimInstanceProxy * __thiscall
UAnimInstance::GetProxyOnGameThread<FAnimInstanceProxy>(UAnimInstance *this)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  FAnimInstanceProxy *pFVar5;
  UClass *pUVar6;
  USkeletalMeshComponent *this_00;
  
  bVar4 = IsInGameThread();
  if (!bVar4) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AnimInstance.h"
                       ,0x6a1,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar5 = (FAnimInstanceProxy *)(*pcVar3)();
      return pFVar5;
    }
  }
  lVar2 = *(longlong *)&this->field_0x20;
  if (lVar2 != 0) {
    pUVar6 = Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
    lVar2 = *(longlong *)(lVar2 + 0x10);
    iVar1 = (int)pUVar6->_padding_;
    if ((iVar1 <= *(int *)(lVar2 + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar6->_padding_)) {
      this_00 = GetSkelMeshComponent(this);
      USkeletalMeshComponent::HandleExistingParallelEvaluationTask(this_00,true,true);
    }
  }
  pFVar5 = this->AnimInstanceProxy;
  if (pFVar5 == (FAnimInstanceProxy *)0x0) {
    pFVar5 = (FAnimInstanceProxy *)(**(code **)(*(longlong *)this + 0x378))(this);
    this->AnimInstanceProxy = pFVar5;
  }
  return pFVar5;
}

// UAnimInstance @ 147435140

/* WARNING: Type propagation algorithm not settling */

UAnimInstance * __thiscall UAnimInstance::UAnimInstance(UAnimInstance *this,FVTableHelper *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UAnimInstance__6B_;
  (this->CurrentSkeleton).field0_0x0.DebugPtr = (USkeleton *)0x0;
  *(undefined8 *)&this->OnMontageBlendingOut = 0;
  *(undefined8 *)&(this->OnMontageBlendingOut).field_0x8 = 0;
  *(undefined8 *)&(this->OnMontageBlendingOut).field_0x10 = 0;
  *(undefined8 *)&this->OnMontageBlendedIn = 0;
  *(undefined8 *)&(this->OnMontageBlendedIn).field_0x8 = 0;
  *(undefined8 *)&(this->OnMontageBlendedIn).field_0x10 = 0;
  *(undefined8 *)&this->OnMontageStarted = 0;
  *(undefined8 *)&(this->OnMontageStarted).field_0x8 = 0;
  *(undefined8 *)&(this->OnMontageStarted).field_0x10 = 0;
  *(undefined8 *)&this->OnMontageEnded = 0;
  *(undefined8 *)&(this->OnMontageEnded).field_0x8 = 0;
  *(undefined8 *)&(this->OnMontageEnded).field_0x10 = 0;
  *(undefined8 *)&this->OnAllMontageInstancesEnded = 0;
  *(undefined8 *)&(this->OnAllMontageInstancesEnded).field_0x8 = 0;
  *(undefined8 *)&(this->OnAllMontageInstancesEnded).field_0x10 = 0;
  *(undefined8 *)&this->OnMontageSectionChanged = 0;
  *(undefined8 *)&(this->OnMontageSectionChanged).field_0x8 = 0;
  *(undefined8 *)&(this->OnMontageSectionChanged).field_0x10 = 0;
  (this->MontageInstances).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MontageInstances).ArrayNum = 0;
  (this->MontageInstances).ArrayMax = 0;
  *(undefined8 *)&this->ActiveMontagesMap = 0;
  *(undefined8 *)&(this->ActiveMontagesMap).field_0x8 = 0;
  *(undefined8 *)&(this->ActiveMontagesMap).field_0x20 = 0;
  *(undefined4 *)&(this->ActiveMontagesMap).field_0x28 = 0;
  *(undefined4 *)&(this->ActiveMontagesMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->ActiveMontagesMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ActiveMontagesMap).field_0x34 = 0;
  *(undefined8 *)&(this->ActiveMontagesMap).field_0x40 = 0;
  *(undefined4 *)&(this->ActiveMontagesMap).field_0x48 = 0;
  *(undefined8 *)&this->SlotGroupInertializationRequestMap = 0;
  *(undefined8 *)&(this->SlotGroupInertializationRequestMap).field_0x8 = 0;
  *(undefined8 *)&(this->SlotGroupInertializationRequestMap).field_0x20 = 0;
  *(undefined4 *)&(this->SlotGroupInertializationRequestMap).field_0x28 = 0;
  *(undefined4 *)&(this->SlotGroupInertializationRequestMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->SlotGroupInertializationRequestMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->SlotGroupInertializationRequestMap).field_0x34 = 0;
  *(undefined8 *)&(this->SlotGroupInertializationRequestMap).field_0x40 = 0;
  *(undefined4 *)&(this->SlotGroupInertializationRequestMap).field_0x48 = 0;
  *(undefined8 *)&this->SlotGroupInertializationRequestDataMap = 0;
  *(undefined8 *)&(this->SlotGroupInertializationRequestDataMap).field_0x8 = 0;
  *(undefined8 *)&(this->SlotGroupInertializationRequestDataMap).field_0x20 = 0;
  *(undefined4 *)&(this->SlotGroupInertializationRequestDataMap).field_0x28 = 0;
  *(undefined4 *)&(this->SlotGroupInertializationRequestDataMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->SlotGroupInertializationRequestDataMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->SlotGroupInertializationRequestDataMap).field_0x34 = 0;
  *(undefined8 *)&(this->SlotGroupInertializationRequestDataMap).field_0x40 = 0;
  *(undefined4 *)&(this->SlotGroupInertializationRequestDataMap).field_0x48 = 0;
  (this->QueuedMontageBlendingOutEvents).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->QueuedMontageBlendingOutEvents).ArrayNum = 0;
  (this->QueuedMontageBlendingOutEvents).ArrayMax = 0;
  (this->QueuedMontageBlendedInEvents).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->QueuedMontageBlendedInEvents).ArrayNum = 0;
  (this->QueuedMontageBlendedInEvents).ArrayMax = 0;
  (this->QueuedMontageEndedEvents).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->QueuedMontageEndedEvents).ArrayNum = 0;
  (this->QueuedMontageEndedEvents).ArrayMax = 0;
  (this->QueuedMontageSectionChangedEvents).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->QueuedMontageSectionChangedEvents).ArrayNum = 0;
  (this->QueuedMontageSectionChangedEvents).ArrayMax = 0;
  (this->NotifyQueue).PredictedLODLevel = -1;
  (this->NotifyQueue).AnimNotifies.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NotifyQueue).AnimNotifies.ArrayNum = 0;
  (this->NotifyQueue).AnimNotifies.ArrayMax = 0;
  *(undefined8 *)&(this->NotifyQueue).UnfilteredMontageAnimNotifies = 0;
  *(undefined8 *)&(this->NotifyQueue).UnfilteredMontageAnimNotifies.field_0x8 = 0;
  *(undefined8 *)&(this->NotifyQueue).UnfilteredMontageAnimNotifies.field_0x20 = 0;
  *(undefined4 *)&(this->NotifyQueue).UnfilteredMontageAnimNotifies.field_0x28 = 0;
  *(undefined4 *)&(this->NotifyQueue).UnfilteredMontageAnimNotifies.field_0x2c = 0x80;
  *(undefined4 *)&(this->NotifyQueue).UnfilteredMontageAnimNotifies.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->NotifyQueue).UnfilteredMontageAnimNotifies.field_0x34 = 0;
  *(undefined8 *)&(this->NotifyQueue).UnfilteredMontageAnimNotifies.field_0x40 = 0;
  *(undefined4 *)&(this->NotifyQueue).UnfilteredMontageAnimNotifies.field_0x48 = 0;
  (this->NotifyQueue).World.WeakPtr = (FWeakObjectPtr)0x0;
  (this->NotifyQueue).RandomStream.InitialSeed = 0x5629063;
  (this->NotifyQueue).RandomStream.Seed = 0x5629063;
  (this->ActiveAnimNotifyState).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ActiveAnimNotifyState).ArrayNum = 0;
  (this->ActiveAnimNotifyState).ArrayMax = 0;
  (this->ActiveAnimNotifyEventReference).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ActiveAnimNotifyEventReference).ArrayNum = 0;
  (this->ActiveAnimNotifyEventReference).ArrayMax = 0;
  (this->DebugDataCounter).LastSyncronizedFrame = 0xffffffffffffffff;
  (this->DebugDataCounter).Counter = -1;
  (this->DebugDataCounter).SkipFrames = 0;
  this->LastMontageFlushFrame = 0;
  *(undefined8 *)&this->SlotWeightTracker = 0;
  *(undefined8 *)&(this->SlotWeightTracker).field_0x8 = 0;
  *(undefined8 *)&(this->SlotWeightTracker).field_0x20 = 0;
  *(undefined4 *)&(this->SlotWeightTracker).field_0x28 = 0;
  *(undefined4 *)&(this->SlotWeightTracker).field_0x2c = 0x80;
  *(undefined4 *)&(this->SlotWeightTracker).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->SlotWeightTracker).field_0x34 = 0;
  *(undefined8 *)&(this->SlotWeightTracker).field_0x40 = 0;
  *(undefined4 *)&(this->SlotWeightTracker).field_0x48 = 0;
  *(undefined8 *)&this->ExternalNotifyHandlers = 0;
  *(undefined8 *)&(this->ExternalNotifyHandlers).field_0x8 = 0;
  *(undefined8 *)&(this->ExternalNotifyHandlers).field_0x20 = 0;
  *(undefined4 *)&(this->ExternalNotifyHandlers).field_0x28 = 0;
  *(undefined4 *)&(this->ExternalNotifyHandlers).field_0x2c = 0x80;
  *(undefined4 *)&(this->ExternalNotifyHandlers).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ExternalNotifyHandlers).field_0x34 = 0;
  *(undefined8 *)&(this->ExternalNotifyHandlers).field_0x40 = 0;
  *(undefined4 *)&(this->ExternalNotifyHandlers).field_0x48 = 0;
  (this->RootMotionBlendQueue).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RootMotionBlendQueue).ArrayNum = 0;
  (this->RootMotionBlendQueue).ArrayMax = 0;
  (this->ExtractedRootMotion).bHasRootMotion = false;
  (this->ExtractedRootMotion).BlendWeight = 0.0;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  (this->ExtractedRootMotion).RootMotionTransform.Rotation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float0001.m128_f32[0];
  (this->ExtractedRootMotion).RootMotionTransform.Rotation.XY.m128d_f64[1] = (double)fVar1;
  (this->ExtractedRootMotion).RootMotionTransform.Rotation.ZW.m128d_f64[0] = (double)fVar2;
  (this->ExtractedRootMotion).RootMotionTransform.Rotation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  (this->ExtractedRootMotion).RootMotionTransform.Translation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  (this->ExtractedRootMotion).RootMotionTransform.Translation.XY.m128d_f64[1] = (double)fVar1;
  (this->ExtractedRootMotion).RootMotionTransform.Translation.ZW.m128d_f64[0] = (double)fVar2;
  (this->ExtractedRootMotion).RootMotionTransform.Translation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  (this->ExtractedRootMotion).RootMotionTransform.Scale3D.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float1110.m128_f32[0];
  (this->ExtractedRootMotion).RootMotionTransform.Scale3D.XY.m128d_f64[1] = (double)fVar1;
  (this->ExtractedRootMotion).RootMotionTransform.Scale3D.ZW.m128d_f64[0] = (double)fVar2;
  (this->ExtractedRootMotion).RootMotionTransform.Scale3D.ZW.m128d_f64[1] = (double)fVar3;
  *(undefined8 *)&this->OnPlayMontageNotifyBegin = 0;
  *(undefined8 *)&(this->OnPlayMontageNotifyBegin).field_0x8 = 0;
  *(undefined8 *)&(this->OnPlayMontageNotifyBegin).field_0x10 = 0;
  *(undefined8 *)&this->OnPlayMontageNotifyEnd = 0;
  *(undefined8 *)&(this->OnPlayMontageNotifyEnd).field_0x8 = 0;
  *(undefined8 *)&(this->OnPlayMontageNotifyEnd).field_0x10 = 0;
  return this;
}

// UAnimInstance @ 1474354a0

/* WARNING: Type propagation algorithm not settling */

UAnimInstance * __thiscall
UAnimInstance::UAnimInstance(UAnimInstance *this,FObjectInitializer *param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  byte bVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UAnimInstance__6B_;
  (this->CurrentSkeleton).field0_0x0.DebugPtr = (USkeleton *)0x0;
  *(undefined8 *)&this->OnMontageBlendingOut = 0;
  *(undefined8 *)&(this->OnMontageBlendingOut).field_0x8 = 0;
  *(undefined8 *)&(this->OnMontageBlendingOut).field_0x10 = 0;
  *(undefined8 *)&this->OnMontageBlendedIn = 0;
  *(undefined8 *)&(this->OnMontageBlendedIn).field_0x8 = 0;
  *(undefined8 *)&(this->OnMontageBlendedIn).field_0x10 = 0;
  *(undefined8 *)&this->OnMontageStarted = 0;
  *(undefined8 *)&(this->OnMontageStarted).field_0x8 = 0;
  *(undefined8 *)&(this->OnMontageStarted).field_0x10 = 0;
  *(undefined8 *)&this->OnMontageEnded = 0;
  *(undefined8 *)&(this->OnMontageEnded).field_0x8 = 0;
  *(undefined8 *)&(this->OnMontageEnded).field_0x10 = 0;
  *(undefined8 *)&this->OnAllMontageInstancesEnded = 0;
  *(undefined8 *)&(this->OnAllMontageInstancesEnded).field_0x8 = 0;
  *(undefined8 *)&(this->OnAllMontageInstancesEnded).field_0x10 = 0;
  *(undefined8 *)&this->OnMontageSectionChanged = 0;
  *(undefined8 *)&(this->OnMontageSectionChanged).field_0x8 = 0;
  *(undefined8 *)&(this->OnMontageSectionChanged).field_0x10 = 0;
  (this->MontageInstances).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MontageInstances).ArrayNum = 0;
  (this->MontageInstances).ArrayMax = 0;
  *(undefined8 *)&this->ActiveMontagesMap = 0;
  *(undefined8 *)&(this->ActiveMontagesMap).field_0x8 = 0;
  *(undefined8 *)&(this->ActiveMontagesMap).field_0x20 = 0;
  this->bPostUpdatingAnimation = false;
  this->bUpdatingAnimation = false;
  *(undefined4 *)&(this->ActiveMontagesMap).field_0x28 = 0;
  *(undefined4 *)&(this->ActiveMontagesMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->ActiveMontagesMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ActiveMontagesMap).field_0x34 = 0;
  *(undefined8 *)&(this->ActiveMontagesMap).field_0x40 = 0;
  *(undefined4 *)&(this->ActiveMontagesMap).field_0x48 = 0;
  *(undefined8 *)&this->SlotGroupInertializationRequestMap = 0;
  *(undefined8 *)&(this->SlotGroupInertializationRequestMap).field_0x8 = 0;
  *(undefined8 *)&(this->SlotGroupInertializationRequestMap).field_0x20 = 0;
  *(undefined4 *)&(this->SlotGroupInertializationRequestMap).field_0x28 = 0;
  *(undefined4 *)&(this->SlotGroupInertializationRequestMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->SlotGroupInertializationRequestMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->SlotGroupInertializationRequestMap).field_0x34 = 0;
  *(undefined8 *)&(this->SlotGroupInertializationRequestMap).field_0x40 = 0;
  *(undefined4 *)&(this->SlotGroupInertializationRequestMap).field_0x48 = 0;
  *(undefined8 *)&this->SlotGroupInertializationRequestDataMap = 0;
  *(undefined8 *)&(this->SlotGroupInertializationRequestDataMap).field_0x8 = 0;
  *(undefined8 *)&(this->SlotGroupInertializationRequestDataMap).field_0x20 = 0;
  *(undefined4 *)&(this->SlotGroupInertializationRequestDataMap).field_0x28 = 0;
  *(undefined4 *)&(this->SlotGroupInertializationRequestDataMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->SlotGroupInertializationRequestDataMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->SlotGroupInertializationRequestDataMap).field_0x34 = 0;
  *(undefined8 *)&(this->SlotGroupInertializationRequestDataMap).field_0x40 = 0;
  *(undefined4 *)&(this->SlotGroupInertializationRequestDataMap).field_0x48 = 0;
  (this->QueuedMontageBlendingOutEvents).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->QueuedMontageBlendingOutEvents).ArrayNum = 0;
  (this->QueuedMontageBlendingOutEvents).ArrayMax = 0;
  (this->QueuedMontageBlendedInEvents).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->QueuedMontageBlendedInEvents).ArrayNum = 0;
  (this->QueuedMontageBlendedInEvents).ArrayMax = 0;
  (this->QueuedMontageEndedEvents).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->QueuedMontageEndedEvents).ArrayNum = 0;
  (this->QueuedMontageEndedEvents).ArrayMax = 0;
  (this->QueuedMontageSectionChangedEvents).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->QueuedMontageSectionChangedEvents).ArrayNum = 0;
  (this->QueuedMontageSectionChangedEvents).ArrayMax = 0;
  (this->NotifyQueue).PredictedLODLevel = -1;
  (this->NotifyQueue).AnimNotifies.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NotifyQueue).AnimNotifies.ArrayNum = 0;
  (this->NotifyQueue).AnimNotifies.ArrayMax = 0;
  *(undefined8 *)&(this->NotifyQueue).UnfilteredMontageAnimNotifies = 0;
  *(undefined8 *)&(this->NotifyQueue).UnfilteredMontageAnimNotifies.field_0x8 = 0;
  *(undefined8 *)&(this->NotifyQueue).UnfilteredMontageAnimNotifies.field_0x20 = 0;
  *(undefined4 *)&(this->NotifyQueue).UnfilteredMontageAnimNotifies.field_0x28 = 0;
  *(undefined4 *)&(this->NotifyQueue).UnfilteredMontageAnimNotifies.field_0x2c = 0x80;
  *(undefined4 *)&(this->NotifyQueue).UnfilteredMontageAnimNotifies.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->NotifyQueue).UnfilteredMontageAnimNotifies.field_0x34 = 0;
  *(undefined8 *)&(this->NotifyQueue).UnfilteredMontageAnimNotifies.field_0x40 = 0;
  *(undefined4 *)&(this->NotifyQueue).UnfilteredMontageAnimNotifies.field_0x48 = 0;
  (this->NotifyQueue).World.WeakPtr = (FWeakObjectPtr)0x0;
  (this->NotifyQueue).RandomStream.InitialSeed = 0x5629063;
  (this->NotifyQueue).RandomStream.Seed = 0x5629063;
  (this->ActiveAnimNotifyState).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ActiveAnimNotifyState).ArrayNum = 0;
  (this->ActiveAnimNotifyState).ArrayMax = 0;
  (this->ActiveAnimNotifyEventReference).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DebugDataCounter).LastSyncronizedFrame = 0xffffffffffffffff;
  (this->ActiveAnimNotifyEventReference).ArrayNum = 0;
  (this->ActiveAnimNotifyEventReference).ArrayMax = 0;
  (this->DebugDataCounter).Counter = -1;
  (this->DebugDataCounter).SkipFrames = 0;
  *(undefined8 *)&this->SlotWeightTracker = 0;
  *(undefined8 *)&(this->SlotWeightTracker).field_0x8 = 0;
  *(undefined8 *)&(this->SlotWeightTracker).field_0x20 = 0;
  this->LastMontageFlushFrame = 0;
  *(undefined4 *)&(this->SlotWeightTracker).field_0x28 = 0;
  *(undefined4 *)&(this->SlotWeightTracker).field_0x2c = 0x80;
  *(undefined4 *)&(this->SlotWeightTracker).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->SlotWeightTracker).field_0x34 = 0;
  *(undefined8 *)&(this->SlotWeightTracker).field_0x40 = 0;
  *(undefined4 *)&(this->SlotWeightTracker).field_0x48 = 0;
  *(undefined8 *)&this->ExternalNotifyHandlers = 0;
  *(undefined8 *)&(this->ExternalNotifyHandlers).field_0x8 = 0;
  *(undefined8 *)&(this->ExternalNotifyHandlers).field_0x20 = 0;
  *(undefined4 *)&(this->ExternalNotifyHandlers).field_0x28 = 0;
  *(undefined4 *)&(this->ExternalNotifyHandlers).field_0x2c = 0x80;
  *(undefined4 *)&(this->ExternalNotifyHandlers).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ExternalNotifyHandlers).field_0x34 = 0;
  *(undefined8 *)&(this->ExternalNotifyHandlers).field_0x40 = 0;
  *(undefined4 *)&(this->ExternalNotifyHandlers).field_0x48 = 0;
  (this->RootMotionBlendQueue).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RootMotionBlendQueue).ArrayNum = 0;
  (this->RootMotionBlendQueue).ArrayMax = 0;
  (this->ExtractedRootMotion).bHasRootMotion = false;
  (this->ExtractedRootMotion).BlendWeight = 0.0;
  fVar4 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar5 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar6 = GlobalVectorConstants::Float0001.m128_f32[3];
  (this->ExtractedRootMotion).RootMotionTransform.Rotation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float0001.m128_f32[0];
  (this->ExtractedRootMotion).RootMotionTransform.Rotation.XY.m128d_f64[1] = (double)fVar4;
  (this->ExtractedRootMotion).RootMotionTransform.Rotation.ZW.m128d_f64[0] = (double)fVar5;
  (this->ExtractedRootMotion).RootMotionTransform.Rotation.ZW.m128d_f64[1] = (double)fVar6;
  fVar4 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar5 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar6 = GlobalVectorConstants::FloatZero.m128_f32[3];
  (this->ExtractedRootMotion).RootMotionTransform.Translation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  (this->ExtractedRootMotion).RootMotionTransform.Translation.XY.m128d_f64[1] = (double)fVar4;
  (this->ExtractedRootMotion).RootMotionTransform.Translation.ZW.m128d_f64[0] = (double)fVar5;
  (this->ExtractedRootMotion).RootMotionTransform.Translation.ZW.m128d_f64[1] = (double)fVar6;
  fVar4 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar5 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar6 = GlobalVectorConstants::Float1110.m128_f32[3];
  (this->ExtractedRootMotion).RootMotionTransform.Scale3D.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float1110.m128_f32[0];
  (this->ExtractedRootMotion).RootMotionTransform.Scale3D.XY.m128d_f64[1] = (double)fVar4;
  (this->ExtractedRootMotion).RootMotionTransform.Scale3D.ZW.m128d_f64[0] = (double)fVar5;
  (this->ExtractedRootMotion).RootMotionTransform.Scale3D.ZW.m128d_f64[1] = (double)fVar6;
  *(undefined8 *)&this->OnPlayMontageNotifyBegin = 0;
  *(undefined8 *)&(this->OnPlayMontageNotifyBegin).field_0x8 = 0;
  *(undefined8 *)&(this->OnPlayMontageNotifyBegin).field_0x10 = 0;
  *(undefined8 *)&this->OnPlayMontageNotifyEnd = 0;
  *(undefined8 *)&(this->OnPlayMontageNotifyEnd).field_0x8 = 0;
  *(undefined8 *)&(this->OnPlayMontageNotifyEnd).field_0x10 = 0;
  (this->RootMotionMode).Value = '\x03';
  this->PendingDynamicResetTeleportType = None;
  puVar2 = &this->field_0x31;
  this->bUseMultiThreadedAnimationUpdate = '\x01';
  this->bUseMainInstanceMontageEvaluationData = '\0';
  this->bPropagateNotifiesToLinkedInstances = '\0';
  this->bReceiveNotifiesFromLinkedInstances = '\0';
  this->bCreatedByLinkedAnimGraph = '\0';
  this->bNeedsUpdate = '\0';
  this->bUpdateAnimationEnabled = '\x01';
  this->bUninitialized = '\x01';
  this->bInitializing = '\0';
  return this;
}

// ~UAnimInstance @ 147436c20

void __thiscall UAnimInstance::~UAnimInstance(UAnimInstance *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  *(undefined ***)this = &___7UAnimInstance__6B_;
  pvVar1 = *(void **)&(this->OnPlayMontageNotifyEnd).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnPlayMontageNotifyEnd);
  pvVar1 = *(void **)&(this->OnPlayMontageNotifyBegin).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnPlayMontageNotifyBegin);
  pFVar2 = (this->RootMotionBlendQueue).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  *(undefined4 *)&(this->ExternalNotifyHandlers).field_0x48 = 0;
  pvVar1 = *(void **)&(this->ExternalNotifyHandlers).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ExternalNotifyHandlers);
  *(undefined4 *)&(this->SlotWeightTracker).field_0x48 = 0;
  pvVar1 = *(void **)&(this->SlotWeightTracker).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FMontageActiveSlotTracker>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FMontageActiveSlotTracker>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FMontageActiveSlotTracker>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->SlotWeightTracker);
  DestructItems<FAnimNotifyEventReference,int>
            ((FAnimNotifyEventReference *)
             (this->ActiveAnimNotifyEventReference).AllocatorInstance.Data,
             (this->ActiveAnimNotifyEventReference).ArrayNum);
  pFVar2 = (this->ActiveAnimNotifyEventReference).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<FAnimNotifyEvent,int>
            ((FAnimNotifyEvent *)(this->ActiveAnimNotifyState).AllocatorInstance.Data,
             (this->ActiveAnimNotifyState).ArrayNum);
  pFVar2 = (this->ActiveAnimNotifyState).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  *(undefined4 *)&(this->NotifyQueue).UnfilteredMontageAnimNotifies.field_0x48 = 0;
  pvVar1 = *(void **)&(this->NotifyQueue).UnfilteredMontageAnimNotifies.field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FAnimNotifyArray>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FAnimNotifyArray>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FAnimNotifyArray>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->NotifyQueue).UnfilteredMontageAnimNotifies);
  DestructItems<FAnimNotifyEventReference,int>
            ((FAnimNotifyEventReference *)(this->NotifyQueue).AnimNotifies.AllocatorInstance.Data,
             (this->NotifyQueue).AnimNotifies.ArrayNum);
  pFVar2 = (this->NotifyQueue).AnimNotifies.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<FQueuedMontageSectionChangedEvent,int>
            ((FQueuedMontageSectionChangedEvent *)
             (this->QueuedMontageSectionChangedEvents).AllocatorInstance.Data,
             (this->QueuedMontageSectionChangedEvents).ArrayNum);
  pFVar2 = (this->QueuedMontageSectionChangedEvents).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<FQueuedMontageEndedEvent,int>
            ((FQueuedMontageEndedEvent *)(this->QueuedMontageEndedEvents).AllocatorInstance.Data,
             (this->QueuedMontageEndedEvents).ArrayNum);
  pFVar2 = (this->QueuedMontageEndedEvents).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<FQueuedMontageBlendedInEvent,int>
            ((FQueuedMontageBlendedInEvent *)
             (this->QueuedMontageBlendedInEvents).AllocatorInstance.Data,
             (this->QueuedMontageBlendedInEvents).ArrayNum);
  pFVar2 = (this->QueuedMontageBlendedInEvents).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<FQueuedMontageBlendingOutEvent,int>
            ((FQueuedMontageBlendingOutEvent *)
             (this->QueuedMontageBlendingOutEvents).AllocatorInstance.Data,
             (this->QueuedMontageBlendingOutEvents).ArrayNum);
  pFVar2 = (this->QueuedMontageBlendingOutEvents).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  *(undefined4 *)&(this->SlotGroupInertializationRequestDataMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->SlotGroupInertializationRequestDataMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FInertializationRequest>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FInertializationRequest>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FInertializationRequest>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->SlotGroupInertializationRequestDataMap);
  *(undefined4 *)&(this->SlotGroupInertializationRequestMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->SlotGroupInertializationRequestMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,TTuple<float,UBlendProfile_const_*>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,TTuple<float,UBlendProfile_const_*>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,TTuple<float,UBlendProfile_const_*>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->SlotGroupInertializationRequestMap);
  *(undefined4 *)&(this->ActiveMontagesMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->ActiveMontagesMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<UAnimMontage_*,FAnimMontageInstance_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UAnimMontage_*,FAnimMontageInstance_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UAnimMontage_*,FAnimMontageInstance_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ActiveMontagesMap);
  pFVar2 = (this->MontageInstances).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pvVar1 = *(void **)&(this->OnMontageSectionChanged).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnMontageSectionChanged);
  pvVar1 = *(void **)&(this->OnAllMontageInstancesEnded).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnAllMontageInstancesEnded);
  pvVar1 = *(void **)&(this->OnMontageEnded).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnMontageEnded);
  pvVar1 = *(void **)&(this->OnMontageStarted).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnMontageStarted);
  pvVar1 = *(void **)&(this->OnMontageBlendedIn).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnMontageBlendedIn);
  pvVar1 = *(void **)&(this->OnMontageBlendingOut).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnMontageBlendingOut);
  UObject::~UObject((UObject *)this);
  return;
}

// operator() @ 14743ac10

FMontageBlendSettings * __thiscall
`UAnimInstance::Montage_Stop'::__l2::<lambda_1>::operator()
          (void *this,FMontageBlendSettings *__return_storage_ptr__,FAnimMontageInstance *param_1)

{
  UAnimMontage *pUVar1;
  UBlendProfile *pUVar2;
  TObjectPtr<UCurveFloat>_u_0 local_18;
  float local_10;
  EAlphaBlendOption local_c;
  
  FMontageBlendSettings::FMontageBlendSettings(__return_storage_ptr__);
  pUVar1 = (param_1->Montage).field0_0x0.DebugPtr;
  if (pUVar1 != (UAnimMontage *)0x0) {
    FAlphaBlendArgs::FAlphaBlendArgs((FAlphaBlendArgs *)&local_18.ObjectPtr,&pUVar1->BlendOut);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_18.DebugPtr != (UCurveFloat *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_18.DebugPtr);
    }
    (__return_storage_ptr__->Blend).CustomCurve.field0_0x0.DebugPtr = (UCurveFloat *)local_18;
    (__return_storage_ptr__->Blend).BlendOption = local_c;
    (__return_storage_ptr__->Blend).BlendTime = local_10;
    (__return_storage_ptr__->Blend).BlendTime = *(float *)this;
    __return_storage_ptr__->BlendMode = pUVar1->BlendModeOut;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar2 = (pUVar1->BlendProfileOut).field0_0x0.DebugPtr, pUVar2 != (UBlendProfile *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar2);
    }
    (__return_storage_ptr__->BlendProfile).field0_0x0 = (pUVar1->BlendProfileOut).field0_0x0;
  }
  return __return_storage_ptr__;
}

// operator() @ 14743acd0

FMontageBlendSettings * __thiscall
`UAnimInstance::Montage_StopWithBlendOut'::__l2::<lambda_1>::operator()
          (void *this,FMontageBlendSettings *__return_storage_ptr__,FAnimMontageInstance *param_1)

{
  UAnimMontage *pUVar1;
  UBlendProfile *pUVar2;
  
  FMontageBlendSettings::FMontageBlendSettings(__return_storage_ptr__);
  pUVar1 = (param_1->Montage).field0_0x0.DebugPtr;
  if (pUVar1 != (UAnimMontage *)0x0) {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (*(UObject **)this != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(*(UObject **)this);
    }
    (__return_storage_ptr__->Blend).CustomCurve.field0_0x0 = *(TObjectPtr<UCurveFloat>_u_0 *)this;
    (__return_storage_ptr__->Blend).BlendTime = *(float *)((longlong)this + 8);
    (__return_storage_ptr__->Blend).BlendOption = *(EAlphaBlendOption *)((longlong)this + 0xc);
    __return_storage_ptr__->BlendMode = pUVar1->BlendModeOut;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar2 = (pUVar1->BlendProfileOut).field0_0x0.DebugPtr, pUVar2 != (UBlendProfile *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar2);
    }
    (__return_storage_ptr__->BlendProfile).field0_0x0 = (pUVar1->BlendProfileOut).field0_0x0;
  }
  return __return_storage_ptr__;
}

// operator() @ 14743ad70

UClass * __thiscall
`UAnimInstance::UnlinkAnimClassLayers'::__l2::<lambda_1>::operator()
          (void *this,UClass *param_1,FAnimNode_LinkedAnimLayer *param_2)

{
  int iVar1;
  bool bVar2;
  UClass *pUVar3;
  longlong lVar4;
  longlong lVar5;
  
  if ((param_2->_padding_ != 0) && ((*(uint *)(param_2->_padding_ + 8) >> 0x1e & 1) == 0)) {
    lVar5 = 0;
    lVar4 = lVar5;
    if (param_2->_padding_ != 0) {
      pUVar3 = UAnimInstance::StaticClass();
      bVar2 = FObjectPtr::IsA((FObjectPtr *)&param_2->_padding_,pUVar3);
      if (bVar2) {
        lVar4 = param_2->_padding_;
      }
    }
    if (lVar4 != 0) {
      if (param_1 != (UClass *)0x0) {
        lVar4 = lVar5;
        if (((param_2->_padding_ != 0) && ((*(uint *)(param_2->_padding_ + 8) >> 0x1e & 1) == 0)) &&
           (param_2->_padding_ != 0)) {
          pUVar3 = UAnimInstance::StaticClass();
          bVar2 = FObjectPtr::IsA((FObjectPtr *)&param_2->_padding_,pUVar3);
          if (bVar2) {
            lVar4 = param_2->_padding_;
          }
        }
        if (*(UClass **)(lVar4 + 0x10) == param_1) {
          lVar5 = param_2->_padding_;
          if (lVar5 == 0) {
            return (UClass *)0x0;
          }
          pUVar3 = UAnimInstance::StaticClass();
          if (pUVar3 == (UClass *)0x0) {
            return (UClass *)0x0;
          }
          iVar1 = (int)pUVar3->_padding_;
          if ((*(int *)(lVar5 + 0x38) < iVar1) ||
             ((longlong *)*(undefined1 **)(*(longlong *)(lVar5 + 0x30) + (longlong)iVar1 * 8) !=
              &pUVar3->_padding_)) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          if (!bVar2) {
            return (UClass *)0x0;
          }
          return (UClass *)param_2->_padding_;
        }
      }
      if (((param_2->_padding_ != 0) && ((*(uint *)(param_2->_padding_ + 8) >> 0x1e & 1) == 0)) &&
         (param_2->_padding_ != 0)) {
        pUVar3 = UAnimInstance::StaticClass();
        bVar2 = FObjectPtr::IsA((FObjectPtr *)&param_2->_padding_,pUVar3);
        lVar5 = 0;
        if (bVar2) {
          lVar5 = param_2->_padding_;
        }
      }
      return *(UClass **)(lVar5 + 0x10);
    }
  }
  return (UClass *)0x0;
}

// operator() @ 14743aeb0

bool __thiscall
`UAnimInstance::WasAnimNotifyNameTriggeredInAnyState'::__l2::<lambda_1>::operator()
          (void *this,FAnimInstanceProxy *param_1)

{
  int iVar1;
  FName FVar2;
  FName *pFVar3;
  FName FVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  undefined1 local_res8 [8];
  
  iVar1 = (param_1->ActiveAnimNotifiesSinceLastTick).ArrayNum;
  pFVar6 = (param_1->ActiveAnimNotifiesSinceLastTick).AllocatorInstance.Data;
  FVar2 = **(FName **)this;
  pFVar5 = pFVar6 + (longlong)iVar1 * 0x30;
  do {
    if ((param_1->ActiveAnimNotifiesSinceLastTick).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FAnimNotifyEventReference_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar6 == pFVar5) {
      return false;
    }
    if ((*(longlong *)(pFVar6 + 0x20) != 0) && (*(longlong *)(pFVar6 + 0x10) != 0)) {
      FVar4 = *(FName *)(*(longlong *)(pFVar6 + 0x10) + 0x3c);
      if ((*(longlong *)(pFVar6 + 0x18) != 0) &&
         (pFVar3 = TMapBase<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,0>_>
                   ::Find((TMapBase<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,0>_>
                           *)(*(longlong *)(pFVar6 + 0x18) + 0x158),FVar4), pFVar3 != (FName *)0x0))
      {
        FVar4 = *pFVar3;
      }
      if (FVar4 == FVar2) {
        return true;
      }
    }
    pFVar6 = pFVar6 + 0x30;
  } while( true );
}

// operator() @ 14743af70

bool __thiscall
`UAnimInstance::WasAnimNotifyNameTriggeredInSourceState'::__l2::<lambda_1>::operator()
          (void *this,FAnimInstanceProxy *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  FName FVar4;
  UMirrorDataTable *pUVar5;
  bool bVar6;
  FName *pFVar7;
  FName FVar8;
  FAnimNotifyEventReference *pFVar9;
  FAnimNotifyEventReference *pFVar10;
  undefined1 local_res8 [8];
  
  iVar1 = (param_1->ActiveAnimNotifiesSinceLastTick).ArrayNum;
  pFVar10 = (FAnimNotifyEventReference *)
            (param_1->ActiveAnimNotifiesSinceLastTick).AllocatorInstance.Data;
  FVar4 = **(FName **)((longlong)this + 0x10);
  pFVar9 = pFVar10 + iVar1;
  iVar2 = **(int **)((longlong)this + 8);
  iVar3 = **(int **)this;
  do {
    if ((param_1->ActiveAnimNotifiesSinceLastTick).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FAnimNotifyEventReference_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar10 == pFVar9) {
      return false;
    }
    if (((pFVar10->NotifySource).field0_0x0.DebugPtr != (UObject *)0x0) &&
       (pFVar10->Notify != (FAnimNotifyEvent *)0x0)) {
      pUVar5 = (pFVar10->MirrorTable).field0_0x0.DebugPtr;
      FVar8 = pFVar10->Notify->NotifyName;
      if ((pUVar5 != (UMirrorDataTable *)0x0) &&
         (pFVar7 = TMapBase<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,0>_>
                   ::Find((TMapBase<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,0>_>
                           *)&pUVar5->AnimNotifyToMirrorAnimNotifyMap,FVar8), pFVar7 != (FName *)0x0
         )) {
        FVar8 = *pFVar7;
      }
      if (FVar8 == FVar4) {
        bVar6 = UAnimNotifyStateMachineInspectionLibrary::IsStateInStateMachineInEventContext
                          (pFVar10,iVar3,iVar2);
        return bVar6;
      }
    }
    pFVar10 = pFVar10 + 1;
  } while( true );
}

// operator() @ 14743b050

bool __thiscall
`UAnimInstance::WasAnimNotifyNameTriggeredInStateMachine'::__l2::<lambda_1>::operator()
          (void *this,FAnimInstanceProxy *param_1)

{
  int iVar1;
  int iVar2;
  FName FVar3;
  UMirrorDataTable *pUVar4;
  bool bVar5;
  FName *pFVar6;
  FName FVar7;
  FAnimNotifyEventReference *pFVar8;
  FAnimNotifyEventReference *pFVar9;
  undefined1 local_res8 [8];
  
  iVar1 = (param_1->ActiveAnimNotifiesSinceLastTick).ArrayNum;
  pFVar9 = (FAnimNotifyEventReference *)
           (param_1->ActiveAnimNotifiesSinceLastTick).AllocatorInstance.Data;
  FVar3 = **(FName **)((longlong)this + 8);
  pFVar8 = pFVar9 + iVar1;
  iVar2 = **(int **)this;
  do {
    if ((param_1->ActiveAnimNotifiesSinceLastTick).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FAnimNotifyEventReference,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar9 == pFVar8) {
      return false;
    }
    if (((pFVar9->NotifySource).field0_0x0.DebugPtr != (UObject *)0x0) &&
       (pFVar9->Notify != (FAnimNotifyEvent *)0x0)) {
      pUVar4 = (pFVar9->MirrorTable).field0_0x0.DebugPtr;
      FVar7 = pFVar9->Notify->NotifyName;
      if ((pUVar4 != (UMirrorDataTable *)0x0) &&
         (pFVar6 = TMapBase<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,0>_>
                   ::Find((TMapBase<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,0>_>
                           *)&pUVar4->AnimNotifyToMirrorAnimNotifyMap,FVar7), pFVar6 != (FName *)0x0
         )) {
        FVar7 = *pFVar6;
      }
      if (FVar7 == FVar3) {
        bVar5 = UAnimNotifyStateMachineInspectionLibrary::IsStateMachineInEventContext(pFVar9,iVar2)
        ;
        return bVar5;
      }
    }
    pFVar9 = pFVar9 + 1;
  } while( true );
}

// operator() @ 14743b120

bool __thiscall
`UAnimInstance::WasAnimNotifyStateActiveInAnyState'::__l2::<lambda_1>::operator()
          (void *this,FAnimInstanceProxy *param_1)

{
  int iVar1;
  int iVar2;
  UObject *pUVar3;
  FScriptContainerElement *pFVar4;
  longlong lVar5;
  bool bVar6;
  UClass *pUVar7;
  UObject *pUVar8;
  FScriptContainerElement *pFVar9;
  undefined1 local_res8 [8];
  
  pUVar3 = (UObject *)**(undefined8 **)this;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (pUVar3 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar3);
  }
  pFVar4 = (param_1->ActiveAnimNotifiesSinceLastTick).AllocatorInstance.Data;
  iVar1 = (param_1->ActiveAnimNotifiesSinceLastTick).ArrayNum;
  pFVar9 = pFVar4 + 0x10;
  do {
    if ((param_1->ActiveAnimNotifiesSinceLastTick).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FAnimNotifyEventReference_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar9 + -0x10 == pFVar4 + (longlong)iVar1 * 0x30) {
      return false;
    }
    if (((*(longlong *)(pFVar9 + 0x10) != 0) && (*(longlong *)pFVar9 != 0)) &&
       (lVar5 = *(longlong *)(*(longlong *)pFVar9 + 0x50), lVar5 != 0)) {
      if (UE::GC::GIsIncrementalReachabilityPending == false) {
        if (pUVar3 != (UObject *)0x0) goto LAB_14743b1cd;
LAB_14743b200:
        pUVar8 = (UObject *)0x0;
      }
      else {
        if (pUVar3 == (UObject *)0x0) goto LAB_14743b200;
        UE::GC::MarkAsReachable(pUVar3);
LAB_14743b1cd:
        pUVar7 = Z_Construct_UClass_UAnimNotifyState_NoRegister();
        if (pUVar7 == (UClass *)0x0) goto LAB_14743b200;
        iVar2 = (int)pUVar7->_padding_;
        if ((*(int *)&pUVar3[1].field_0x10 < iVar2) ||
           ((longlong *)*(undefined1 **)(*(longlong *)&pUVar3[1].field_0x8 + (longlong)iVar2 * 8) !=
            &pUVar7->_padding_)) {
          bVar6 = false;
        }
        else {
          bVar6 = true;
        }
        pUVar8 = pUVar3;
        if (!bVar6) goto LAB_14743b200;
      }
      lVar5 = *(longlong *)(lVar5 + 0x10);
      if ((*(int *)&pUVar8[1].field_0x10 <= *(int *)(lVar5 + 0x38)) &&
         (*(undefined1 **)
           (*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)&pUVar8[1].field_0x10 * 8) ==
          &pUVar8[1].field_0x8)) {
        return true;
      }
    }
    pFVar9 = pFVar9 + 0x30;
  } while( true );
}

// operator() @ 14743b250

bool __thiscall
`UAnimInstance::WasAnimNotifyStateActiveInSourceState'::__l2::<lambda_1>::operator()
          (void *this,FAnimInstanceProxy *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  UObject *pUVar5;
  UAnimNotifyState *pUVar6;
  longlong lVar7;
  bool bVar8;
  UClass *pUVar9;
  UObject *pUVar10;
  FAnimNotifyEventReference *pFVar11;
  FAnimNotifyEventReference *pFVar12;
  undefined1 local_res8 [8];
  
  pUVar5 = (UObject *)**(undefined8 **)((longlong)this + 0x10);
  if ((UE::GC::GIsIncrementalReachabilityPending) && (pUVar5 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar5);
  }
  iVar1 = (param_1->ActiveAnimNotifiesSinceLastTick).ArrayNum;
  iVar2 = **(int **)((longlong)this + 8);
  pFVar11 = (FAnimNotifyEventReference *)
            (param_1->ActiveAnimNotifiesSinceLastTick).AllocatorInstance.Data;
  pFVar12 = pFVar11 + iVar1;
  iVar3 = **(int **)this;
  do {
    if ((param_1->ActiveAnimNotifiesSinceLastTick).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FAnimNotifyEventReference_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar11 == pFVar12) {
      return false;
    }
    if ((((pFVar11->NotifySource).field0_0x0.DebugPtr != (UObject *)0x0) &&
        (pFVar11->Notify != (FAnimNotifyEvent *)0x0)) &&
       (pUVar6 = (pFVar11->Notify->NotifyStateClass).field0_0x0.DebugPtr,
       pUVar6 != (UAnimNotifyState *)0x0)) {
      if (UE::GC::GIsIncrementalReachabilityPending == false) {
        if (pUVar5 != (UObject *)0x0) goto LAB_14743b30b;
LAB_14743b33e:
        pUVar10 = (UObject *)0x0;
      }
      else {
        if (pUVar5 == (UObject *)0x0) goto LAB_14743b33e;
        UE::GC::MarkAsReachable(pUVar5);
LAB_14743b30b:
        pUVar9 = Z_Construct_UClass_UAnimNotifyState_NoRegister();
        if (pUVar9 == (UClass *)0x0) goto LAB_14743b33e;
        iVar4 = (int)pUVar9->_padding_;
        if ((*(int *)&pUVar5[1].field_0x10 < iVar4) ||
           ((longlong *)*(undefined1 **)(*(longlong *)&pUVar5[1].field_0x8 + (longlong)iVar4 * 8) !=
            &pUVar9->_padding_)) {
          bVar8 = false;
        }
        else {
          bVar8 = true;
        }
        pUVar10 = pUVar5;
        if (!bVar8) goto LAB_14743b33e;
      }
      lVar7 = pUVar6->_padding_;
      if ((*(int *)&pUVar10[1].field_0x10 <= *(int *)(lVar7 + 0x38)) &&
         (*(undefined1 **)
           (*(longlong *)(lVar7 + 0x30) + (longlong)*(int *)&pUVar10[1].field_0x10 * 8) ==
          &pUVar10[1].field_0x8)) {
        bVar8 = UAnimNotifyStateMachineInspectionLibrary::IsStateInStateMachineInEventContext
                          (pFVar11,iVar3,iVar2);
        return bVar8;
      }
    }
    pFVar11 = pFVar11 + 1;
  } while( true );
}

// operator() @ 14743b3a0

bool __thiscall
`UAnimInstance::WasAnimNotifyStateActiveInStateMachine'::__l2::<lambda_1>::operator()
          (void *this,FAnimInstanceProxy *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  UObject *pUVar4;
  UAnimNotifyState *pUVar5;
  longlong lVar6;
  bool bVar7;
  UClass *pUVar8;
  UObject *pUVar9;
  FAnimNotifyEventReference *pFVar10;
  FAnimNotifyEventReference *pFVar11;
  undefined1 local_res8 [8];
  
  pUVar4 = (UObject *)**(undefined8 **)((longlong)this + 8);
  if ((UE::GC::GIsIncrementalReachabilityPending) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  iVar1 = (param_1->ActiveAnimNotifiesSinceLastTick).ArrayNum;
  pFVar10 = (FAnimNotifyEventReference *)
            (param_1->ActiveAnimNotifiesSinceLastTick).AllocatorInstance.Data;
  iVar2 = **(int **)this;
  pFVar11 = pFVar10 + iVar1;
  do {
    if ((param_1->ActiveAnimNotifiesSinceLastTick).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FAnimNotifyEventReference_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar10 == pFVar11) {
      return false;
    }
    if ((((pFVar10->NotifySource).field0_0x0.DebugPtr != (UObject *)0x0) &&
        (pFVar10->Notify != (FAnimNotifyEvent *)0x0)) &&
       (pUVar5 = (pFVar10->Notify->NotifyStateClass).field0_0x0.DebugPtr,
       pUVar5 != (UAnimNotifyState *)0x0)) {
      if (UE::GC::GIsIncrementalReachabilityPending == false) {
        if (pUVar4 != (UObject *)0x0) goto LAB_14743b456;
LAB_14743b489:
        pUVar9 = (UObject *)0x0;
      }
      else {
        if (pUVar4 == (UObject *)0x0) goto LAB_14743b489;
        UE::GC::MarkAsReachable(pUVar4);
LAB_14743b456:
        pUVar8 = Z_Construct_UClass_UAnimNotifyState_NoRegister();
        if (pUVar8 == (UClass *)0x0) goto LAB_14743b489;
        iVar3 = (int)pUVar8->_padding_;
        if ((*(int *)&pUVar4[1].field_0x10 < iVar3) ||
           ((longlong *)*(undefined1 **)(*(longlong *)&pUVar4[1].field_0x8 + (longlong)iVar3 * 8) !=
            &pUVar8->_padding_)) {
          bVar7 = false;
        }
        else {
          bVar7 = true;
        }
        pUVar9 = pUVar4;
        if (!bVar7) goto LAB_14743b489;
      }
      lVar6 = pUVar5->_padding_;
      if ((*(int *)&pUVar9[1].field_0x10 <= *(int *)(lVar6 + 0x38)) &&
         (*(undefined1 **)
           (*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)&pUVar9[1].field_0x10 * 8) ==
          &pUVar9[1].field_0x8)) {
        bVar7 = UAnimNotifyStateMachineInspectionLibrary::IsStateMachineInEventContext
                          (pFVar10,iVar2);
        return bVar7;
      }
    }
    pFVar10 = pFVar10 + 1;
  } while( true );
}

// operator() @ 14743b4e0

bool __thiscall
`UAnimInstance::WasAnimNotifyTriggeredInAnyState'::__l2::<lambda_1>::operator()
          (void *this,FAnimInstanceProxy *param_1)

{
  int iVar1;
  int iVar2;
  UObject *pUVar3;
  FScriptContainerElement *pFVar4;
  longlong lVar5;
  bool bVar6;
  UClass *pUVar7;
  UObject *pUVar8;
  FScriptContainerElement *pFVar9;
  undefined1 local_res8 [8];
  
  pUVar3 = (UObject *)**(undefined8 **)this;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (pUVar3 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar3);
  }
  pFVar4 = (param_1->ActiveAnimNotifiesSinceLastTick).AllocatorInstance.Data;
  iVar1 = (param_1->ActiveAnimNotifiesSinceLastTick).ArrayNum;
  pFVar9 = pFVar4 + 0x10;
  do {
    if ((param_1->ActiveAnimNotifiesSinceLastTick).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FAnimNotifyEventReference_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar9 + -0x10 == pFVar4 + (longlong)iVar1 * 0x30) {
      return false;
    }
    if (((*(longlong *)(pFVar9 + 0x10) != 0) && (*(longlong *)pFVar9 != 0)) &&
       (lVar5 = *(longlong *)(*(longlong *)pFVar9 + 0x48), lVar5 != 0)) {
      if (UE::GC::GIsIncrementalReachabilityPending == false) {
        if (pUVar3 != (UObject *)0x0) goto LAB_14743b58d;
LAB_14743b5c0:
        pUVar8 = (UObject *)0x0;
      }
      else {
        if (pUVar3 == (UObject *)0x0) goto LAB_14743b5c0;
        UE::GC::MarkAsReachable(pUVar3);
LAB_14743b58d:
        pUVar7 = Z_Construct_UClass_UAnimNotify_NoRegister();
        if (pUVar7 == (UClass *)0x0) goto LAB_14743b5c0;
        iVar2 = (int)pUVar7->_padding_;
        if ((*(int *)&pUVar3[1].field_0x10 < iVar2) ||
           ((longlong *)*(undefined1 **)(*(longlong *)&pUVar3[1].field_0x8 + (longlong)iVar2 * 8) !=
            &pUVar7->_padding_)) {
          bVar6 = false;
        }
        else {
          bVar6 = true;
        }
        pUVar8 = pUVar3;
        if (!bVar6) goto LAB_14743b5c0;
      }
      lVar5 = *(longlong *)(lVar5 + 0x10);
      if ((*(int *)&pUVar8[1].field_0x10 <= *(int *)(lVar5 + 0x38)) &&
         (*(undefined1 **)
           (*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)&pUVar8[1].field_0x10 * 8) ==
          &pUVar8[1].field_0x8)) {
        return true;
      }
    }
    pFVar9 = pFVar9 + 0x30;
  } while( true );
}

// operator() @ 14743b610

bool __thiscall
`UAnimInstance::WasAnimNotifyTriggeredInSourceState'::__l2::<lambda_1>::operator()
          (void *this,FAnimInstanceProxy *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  UObject *pUVar5;
  UAnimNotify *pUVar6;
  longlong lVar7;
  bool bVar8;
  UClass *pUVar9;
  UObject *pUVar10;
  FAnimNotifyEventReference *pFVar11;
  FAnimNotifyEventReference *pFVar12;
  undefined1 local_res8 [8];
  
  pUVar5 = (UObject *)**(undefined8 **)((longlong)this + 0x10);
  if ((UE::GC::GIsIncrementalReachabilityPending) && (pUVar5 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar5);
  }
  iVar1 = (param_1->ActiveAnimNotifiesSinceLastTick).ArrayNum;
  iVar2 = **(int **)((longlong)this + 8);
  pFVar11 = (FAnimNotifyEventReference *)
            (param_1->ActiveAnimNotifiesSinceLastTick).AllocatorInstance.Data;
  pFVar12 = pFVar11 + iVar1;
  iVar3 = **(int **)this;
  do {
    if ((param_1->ActiveAnimNotifiesSinceLastTick).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FAnimNotifyEventReference_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar11 == pFVar12) {
      return false;
    }
    if ((((pFVar11->NotifySource).field0_0x0.DebugPtr != (UObject *)0x0) &&
        (pFVar11->Notify != (FAnimNotifyEvent *)0x0)) &&
       (pUVar6 = (pFVar11->Notify->Notify).field0_0x0.DebugPtr, pUVar6 != (UAnimNotify *)0x0)) {
      if (UE::GC::GIsIncrementalReachabilityPending == false) {
        if (pUVar5 != (UObject *)0x0) goto LAB_14743b6cb;
LAB_14743b6fe:
        pUVar10 = (UObject *)0x0;
      }
      else {
        if (pUVar5 == (UObject *)0x0) goto LAB_14743b6fe;
        UE::GC::MarkAsReachable(pUVar5);
LAB_14743b6cb:
        pUVar9 = Z_Construct_UClass_UAnimNotify_NoRegister();
        if (pUVar9 == (UClass *)0x0) goto LAB_14743b6fe;
        iVar4 = (int)pUVar9->_padding_;
        if ((*(int *)&pUVar5[1].field_0x10 < iVar4) ||
           ((longlong *)*(undefined1 **)(*(longlong *)&pUVar5[1].field_0x8 + (longlong)iVar4 * 8) !=
            &pUVar9->_padding_)) {
          bVar8 = false;
        }
        else {
          bVar8 = true;
        }
        pUVar10 = pUVar5;
        if (!bVar8) goto LAB_14743b6fe;
      }
      lVar7 = pUVar6->_padding_;
      if ((*(int *)&pUVar10[1].field_0x10 <= *(int *)(lVar7 + 0x38)) &&
         (*(undefined1 **)
           (*(longlong *)(lVar7 + 0x30) + (longlong)*(int *)&pUVar10[1].field_0x10 * 8) ==
          &pUVar10[1].field_0x8)) {
        bVar8 = UAnimNotifyStateMachineInspectionLibrary::IsStateInStateMachineInEventContext
                          (pFVar11,iVar3,iVar2);
        return bVar8;
      }
    }
    pFVar11 = pFVar11 + 1;
  } while( true );
}

// operator() @ 14743b760

bool __thiscall
`UAnimInstance::WasAnimNotifyTriggeredInStateMachine'::__l2::<lambda_1>::operator()
          (void *this,FAnimInstanceProxy *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  UObject *pUVar4;
  UAnimNotify *pUVar5;
  longlong lVar6;
  bool bVar7;
  UClass *pUVar8;
  UObject *pUVar9;
  FAnimNotifyEventReference *pFVar10;
  FAnimNotifyEventReference *pFVar11;
  undefined1 local_res8 [8];
  
  pUVar4 = (UObject *)**(undefined8 **)((longlong)this + 8);
  if ((UE::GC::GIsIncrementalReachabilityPending) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  iVar1 = (param_1->ActiveAnimNotifiesSinceLastTick).ArrayNum;
  pFVar10 = (FAnimNotifyEventReference *)
            (param_1->ActiveAnimNotifiesSinceLastTick).AllocatorInstance.Data;
  iVar2 = **(int **)this;
  pFVar11 = pFVar10 + iVar1;
  do {
    if ((param_1->ActiveAnimNotifiesSinceLastTick).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FAnimNotifyEventReference_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar10 == pFVar11) {
      return false;
    }
    if ((((pFVar10->NotifySource).field0_0x0.DebugPtr != (UObject *)0x0) &&
        (pFVar10->Notify != (FAnimNotifyEvent *)0x0)) &&
       (pUVar5 = (pFVar10->Notify->Notify).field0_0x0.DebugPtr, pUVar5 != (UAnimNotify *)0x0)) {
      if (UE::GC::GIsIncrementalReachabilityPending == false) {
        if (pUVar4 != (UObject *)0x0) goto LAB_14743b816;
LAB_14743b849:
        pUVar9 = (UObject *)0x0;
      }
      else {
        if (pUVar4 == (UObject *)0x0) goto LAB_14743b849;
        UE::GC::MarkAsReachable(pUVar4);
LAB_14743b816:
        pUVar8 = Z_Construct_UClass_UAnimNotify_NoRegister();
        if (pUVar8 == (UClass *)0x0) goto LAB_14743b849;
        iVar3 = (int)pUVar8->_padding_;
        if ((*(int *)&pUVar4[1].field_0x10 < iVar3) ||
           ((longlong *)*(undefined1 **)(*(longlong *)&pUVar4[1].field_0x8 + (longlong)iVar3 * 8) !=
            &pUVar8->_padding_)) {
          bVar7 = false;
        }
        else {
          bVar7 = true;
        }
        pUVar9 = pUVar4;
        if (!bVar7) goto LAB_14743b849;
      }
      lVar6 = pUVar5->_padding_;
      if ((*(int *)&pUVar9[1].field_0x10 <= *(int *)(lVar6 + 0x38)) &&
         (*(undefined1 **)
           (*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)&pUVar9[1].field_0x10 * 8) ==
          &pUVar9[1].field_0x8)) {
        bVar7 = UAnimNotifyStateMachineInspectionLibrary::IsStateMachineInEventContext
                          (pFVar10,iVar2);
        return bVar7;
      }
    }
    pFVar10 = pFVar10 + 1;
  } while( true );
}

// operator() @ 14743b9c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`UAnimInstance::TriggerSingleAnimNotify'::__l16::<lambda_1>::operator()
          (void *this,UAnimInstance *param_1)

{
  code *pcVar1;
  bool bVar2;
  UFunction *pUVar3;
  undefined8 local_res8;
  FString local_18;
  
  if ((param_1 == (UAnimInstance *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InAnimInstance",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimInstance.cpp"
                         ,0x6d2,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if ((param_1 == *(UAnimInstance **)this) || (param_1->bReceiveNotifiesFromLinkedInstances != '\0')
     ) {
    FAnimTrace::OutputAnimNotify
              (*(UAnimInstance **)this,*(FAnimNotifyEvent **)((longlong)this + 8),Event);
    pUVar3 = UObject::FindFunction((UObject *)param_1,*(FName *)((longlong)this + 0x10));
    if (pUVar3 != (UFunction *)0x0) {
      if (pUVar3->NumParms == '\0') {
        (**(code **)(*(longlong *)param_1 + 0x260))(param_1,pUVar3,0);
      }
      else if (((pUVar3->NumParms == '\x01') && (pUVar3->_padding_ != 0)) &&
              ((*(uint *)(*(longlong *)(pUVar3->_padding_ + 8) + 0x18) >> 0x10 & 1) != 0)) {
        local_res8 = *(undefined8 *)(*(longlong *)((longlong)this + 8) + 0x48);
        (**(code **)(*(longlong *)param_1 + 0x260))(param_1,pUVar3,&local_res8);
      }
      else if (2 < (byte)LogAnimNotify._0_1_) {
        ::FName::ToString((FName *)((longlong)this + 0x10),&local_18);
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAnimNotify);
        if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_18.Data.AllocatorInstance.Data);
        }
      }
    }
  }
  return;
}

// AddCurveValue @ 14743d350

void __thiscall
UAnimInstance::AddCurveValue
          (UAnimInstance *this,FName *param_1,float param_2,bool param_3,bool param_4)

{
  FName FVar1;
  uint uVar2;
  FAnimInstanceProxy *pFVar3;
  TTuple<FName,float> *pTVar4;
  float *pfVar5;
  float *pfVar6;
  FName local_res10;
  undefined1 local_res18 [8];
  float local_res20 [2];
  FName *local_48;
  float *local_40;
  
  pFVar3 = GetProxyOnAnyThread<FAnimInstanceProxy>(this);
  local_res20[0] = param_2;
  FStatsHierarchical::BeginMeasurement("FAnimInstanceProxy::AddCurveValue");
  pTVar4 = TSet<TTuple<FName,float>,TDefaultMapHashableKeyFuncs<FName,float,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FName,float>,TDefaultMapHashableKeyFuncs<FName,float,0>,FDefaultSetAllocator>
                   *)pFVar3->AnimationCurves,*param_1);
  pfVar6 = (float *)0x0;
  pfVar5 = (float *)&pTVar4->field_0x8;
  if (pTVar4 == (TTuple<FName,float> *)0x0) {
    pfVar5 = pfVar6;
  }
  if (pfVar5 == (float *)0x0) {
    local_40 = local_res20;
    local_48 = param_1;
    TSet<TTuple<FName,float>,TDefaultMapHashableKeyFuncs<FName,float,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<FName_const_&,float_const_&>_>
              ((TSet<TTuple<FName,float>,TDefaultMapHashableKeyFuncs<FName,float,0>,FDefaultSetAllocator>
                *)pFVar3->AnimationCurves,
               (TPairInitializer<FName_const_&,float_const_&> *)local_res18,(bool *)&local_48);
  }
  else {
    *pfVar5 = local_res20[0];
  }
  if (param_3) {
    pTVar4 = TSet<TTuple<FName,float>,TDefaultMapHashableKeyFuncs<FName,float,0>,FDefaultSetAllocator>
             ::Find((TSet<TTuple<FName,float>,TDefaultMapHashableKeyFuncs<FName,float,0>,FDefaultSetAllocator>
                     *)(pFVar3->AnimationCurves + 2),*param_1);
    pfVar5 = (float *)&pTVar4->field_0x8;
    if (pTVar4 == (TTuple<FName,float> *)0x0) {
      pfVar5 = pfVar6;
    }
    if (pfVar5 == (float *)0x0) {
      local_40 = local_res20;
      local_48 = param_1;
      TSet<TTuple<FName,float>,TDefaultMapHashableKeyFuncs<FName,float,0>,FDefaultSetAllocator>::
      Emplace<TPairInitializer<FName_const_&,float_const_&>_>
                ((TSet<TTuple<FName,float>,TDefaultMapHashableKeyFuncs<FName,float,0>,FDefaultSetAllocator>
                  *)(pFVar3->AnimationCurves + 2),
                 (TPairInitializer<FName_const_&,float_const_&> *)local_res18,(bool *)&local_48);
    }
    else {
      *pfVar5 = local_res20[0];
    }
  }
  if (param_4 != false) {
    FVar1 = *param_1;
    local_res10 = FVar1;
    if (*(int *)&(pFVar3->MaterialParametersToClear).Elements.field_0x8 !=
        *(int *)&(pFVar3->MaterialParametersToClear).Elements.field_0x34) {
      uVar2 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
      TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::RemoveImpl<FName>
                (&pFVar3->MaterialParametersToClear,FVar1.Number + uVar2,&local_res10);
    }
    pTVar4 = TSet<TTuple<FName,float>,TDefaultMapHashableKeyFuncs<FName,float,0>,FDefaultSetAllocator>
             ::Find((TSet<TTuple<FName,float>,TDefaultMapHashableKeyFuncs<FName,float,0>,FDefaultSetAllocator>
                     *)(pFVar3->AnimationCurves + 1),*param_1);
    pfVar5 = (float *)&pTVar4->field_0x8;
    if (pTVar4 == (TTuple<FName,float> *)0x0) {
      pfVar5 = pfVar6;
    }
    if (pfVar5 == (float *)0x0) {
      local_40 = local_res20;
      local_48 = param_1;
      TSet<TTuple<FName,float>,TDefaultMapHashableKeyFuncs<FName,float,0>,FDefaultSetAllocator>::
      Emplace<TPairInitializer<FName_const_&,float_const_&>_>
                ((TSet<TTuple<FName,float>,TDefaultMapHashableKeyFuncs<FName,float,0>,FDefaultSetAllocator>
                  *)(pFVar3->AnimationCurves + 1),
                 (TPairInitializer<FName_const_&,float_const_&> *)&param_4,(bool *)&local_48);
    }
    else {
      *pfVar5 = local_res20[0];
    }
  }
  FStatsHierarchical::EndMeasurement();
  return;
}

// AddExternalNotifyHandler @ 14743d550

void __thiscall
UAnimInstance::AddExternalNotifyHandler(UAnimInstance *this,UObject *param_1,FName param_2)

{
  code *pcVar1;
  FName FVar2;
  bool bVar3;
  uint uVar4;
  UFunction *pUVar5;
  TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *this_00;
  FName local_res18;
  
  if (param_1 != (UObject *)0x0) {
    local_res18 = param_2;
    pUVar5 = UObject::FindFunction(param_1,param_2);
    if (pUVar5 == (UFunction *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ExternalHandlerObject->FindFunction(NotifyEventName)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimInstance.cpp"
                         ,0xee8,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    FVar2 = local_res18;
    uVar4 = ::GetTypeHash(local_res18.ComparisonIndex.Value);
    this_00 = TMapBase<FName,TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,0>_>
              ::FindOrAddImpl<FName_const_&>
                        ((TMapBase<FName,TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,0>_>
                          *)&this->ExternalNotifyHandlers,uVar4 + FVar2.Number,&local_res18);
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
    AddUFunction<UObject>
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               this_00,(UObject *)&stack0x00000010,(FName *)param_1);
  }
  return;
}

// AddNativeStateEntryBinding @ 14743d780

void __thiscall
UAnimInstance::AddNativeStateEntryBinding
          (UAnimInstance *this,FName *param_1,FName *param_2,
          TDelegate<void___cdecl(FAnimNode_StateMachine_const_&,int,int),FDefaultDelegateUserPolicy>
          *param_3)

{
  int *piVar1;
  TArray<FNativeStateBinding,TSizedDefaultAllocator<32>_> *pTVar2;
  FName *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FAnimInstanceProxy *pFVar7;
  FDestructionSentinel local_48;
  FName local_30;
  FName local_28;
  undefined1 local_20 [8];
  ForAnyElementType FStack_18;
  int local_10;
  
  pFVar7 = GetProxyOnGameThread<FAnimInstanceProxy>(this);
  local_20 = (undefined1  [8])0x0;
  FStack_18.Data = (FScriptContainerElement *)0x0;
  pTVar2 = &pFVar7->NativeStateEntryBindings;
  local_30 = *param_1;
  local_28 = *param_2;
  local_10 = 0;
  TDelegate<void___cdecl(FAnimNode_StateMachine_const_&,int,int),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<void___cdecl(FAnimNode_StateMachine_const_&,int,int),FDefaultDelegateUserPolicy>
              *)local_20,param_3);
  pFVar3 = (FName *)(pTVar2->AllocatorInstance).Data;
  if ((pFVar3 <= &local_30) &&
     (&local_30 < pFVar3 + (longlong)(pFVar7->NativeStateEntryBindings).ArrayMax * 5)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = (pFVar7->NativeStateEntryBindings).ArrayNum;
  piVar1 = &(pFVar7->NativeStateEntryBindings).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x828,&pTVar2->AllocatorInstance,piVar1);
  }
  (pFVar7->NativeStateEntryBindings).ArrayNum = iVar6 + 1;
  pFVar3 = (FName *)((pTVar2->AllocatorInstance).Data + (longlong)iVar6 * 0x28);
  *pFVar3 = local_30;
  pFVar3[1] = local_28;
  TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)(pFVar3 + 2),
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_20);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_20,
             (FWriteAccessScope *)&local_48);
  if ((local_10 != 0) && (FStack_18.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_18.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_18,0,0,0x10);
    local_10 = 0;
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  if (FStack_18.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_18.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_20);
  return;
}

// AddNativeStateExitBinding @ 14743daa0

void __thiscall
UAnimInstance::AddNativeStateExitBinding
          (UAnimInstance *this,FName *param_1,FName *param_2,
          TDelegate<void___cdecl(FAnimNode_StateMachine_const_&,int,int),FDefaultDelegateUserPolicy>
          *param_3)

{
  int *piVar1;
  TArray<FNativeStateBinding,TSizedDefaultAllocator<32>_> *pTVar2;
  FName *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FAnimInstanceProxy *pFVar7;
  FDestructionSentinel local_48;
  FName local_30;
  FName local_28;
  undefined1 local_20 [8];
  ForAnyElementType FStack_18;
  int local_10;
  
  pFVar7 = GetProxyOnGameThread<FAnimInstanceProxy>(this);
  local_20 = (undefined1  [8])0x0;
  FStack_18.Data = (FScriptContainerElement *)0x0;
  pTVar2 = &pFVar7->NativeStateExitBindings;
  local_30 = *param_1;
  local_28 = *param_2;
  local_10 = 0;
  TDelegate<void___cdecl(FAnimNode_StateMachine_const_&,int,int),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<void___cdecl(FAnimNode_StateMachine_const_&,int,int),FDefaultDelegateUserPolicy>
              *)local_20,param_3);
  pFVar3 = (FName *)(pTVar2->AllocatorInstance).Data;
  if ((pFVar3 <= &local_30) &&
     (&local_30 < pFVar3 + (longlong)(pFVar7->NativeStateExitBindings).ArrayMax * 5)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = (pFVar7->NativeStateExitBindings).ArrayNum;
  piVar1 = &(pFVar7->NativeStateExitBindings).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x828,&pTVar2->AllocatorInstance,piVar1);
  }
  (pFVar7->NativeStateExitBindings).ArrayNum = iVar6 + 1;
  pFVar3 = (FName *)((pTVar2->AllocatorInstance).Data + (longlong)iVar6 * 0x28);
  *pFVar3 = local_30;
  pFVar3[1] = local_28;
  TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)(pFVar3 + 2),
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_20);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_20,
             (FWriteAccessScope *)&local_48);
  if ((local_10 != 0) && (FStack_18.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_18.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_18,0,0,0x10);
    local_10 = 0;
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  if (FStack_18.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_18.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_20);
  return;
}

// AddNativeTransitionBinding @ 14743ddd0

void __thiscall
UAnimInstance::AddNativeTransitionBinding
          (UAnimInstance *this,FName *param_1,FName *param_2,FName *param_3,
          TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *param_4,FName *param_5)

{
  int *piVar1;
  TArray<FNativeTransitionBinding,TSizedDefaultAllocator<32>_> *pTVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FAnimInstanceProxy *pFVar6;
  FName *pFVar7;
  FDestructionSentinel local_58;
  FName local_40;
  FName local_38;
  FName local_30;
  undefined1 local_28 [8];
  ForAnyElementType FStack_20;
  int local_18;
  
  pFVar6 = GetProxyOnGameThread<FAnimInstanceProxy>(this);
  local_28 = (undefined1  [8])0x0;
  FStack_20.Data = (FScriptContainerElement *)0x0;
  pTVar2 = &pFVar6->NativeTransitionBindings;
  local_40 = *param_1;
  local_38 = *param_2;
  local_30 = *param_3;
  local_18 = 0;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *)local_28,param_4);
  pFVar7 = (FName *)(pTVar2->AllocatorInstance).Data;
  if ((pFVar7 <= &local_40) &&
     (&local_40 < pFVar7 + (longlong)(pFVar6->NativeTransitionBindings).ArrayMax * 6)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = (pFVar6->NativeTransitionBindings).ArrayNum;
  piVar1 = &(pFVar6->NativeTransitionBindings).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&pTVar2->AllocatorInstance,piVar1);
  }
  (pFVar6->NativeTransitionBindings).ArrayNum = iVar5 + 1;
  pFVar7 = (FName *)((pTVar2->AllocatorInstance).Data + (longlong)iVar5 * 0x30);
  *pFVar7 = local_40;
  pFVar7[1] = local_38;
  pFVar7[2] = local_30;
  TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)(pFVar7 + 3),
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_28);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_28,
             (FWriteAccessScope *)&local_58);
  if ((local_18 != 0) && (FStack_20.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_20.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_20,0,0,0x10);
    local_18 = 0;
  }
  if (local_58.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_58.Accessor,&local_58);
  }
  if (FStack_20.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_20.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_28);
  return;
}

// AddPoseSnapshot @ 14743e100

FPoseSnapshot * __thiscall UAnimInstance::AddPoseSnapshot(UAnimInstance *this,FName param_1)

{
  FAnimInstanceProxy *this_00;
  FPoseSnapshot *pFVar1;
  
  this_00 = GetProxyOnGameThread<FAnimInstanceProxy>(this);
  pFVar1 = FAnimInstanceProxy::AddPoseSnapshot(this_00,param_1);
  return pFVar1;
}

// AddReferencedObjects @ 14743e180

void __cdecl UAnimInstance::AddReferencedObjects(UObject *param_1,FReferenceCollector *param_2)

{
  FAnimInstanceProxy *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  UAnimInstance *pUVar5;
  uint uVar6;
  longlong lVar7;
  
  pUVar5 = CastChecked<UAnimInstance,UObject>(param_1);
  uVar6 = 0;
  if (0 < (pUVar5->MontageInstances).ArrayNum) {
    lVar7 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar6 < (pUVar5->MontageInstances).ArrayNum) {
        uVar4 = ~uVar6 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (*(longlong *)((pUVar5->MontageInstances).AllocatorInstance.Data + lVar7) != 0) {
        uVar4 = 0;
        if ((int)uVar6 < (pUVar5->MontageInstances).ArrayNum) {
          uVar4 = ~uVar6 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        FAnimMontageInstance::AddReferencedObjects
                  (*(FAnimMontageInstance **)
                    ((pUVar5->MontageInstances).AllocatorInstance.Data + lVar7),param_2);
      }
      uVar6 = uVar6 + 1;
      lVar7 = lVar7 + 8;
    } while ((int)uVar6 < (pUVar5->MontageInstances).ArrayNum);
  }
  uVar6 = 0;
  if (0 < (pUVar5->QueuedMontageBlendingOutEvents).ArrayNum) {
    do {
      uVar4 = 0;
      if ((int)uVar6 < (pUVar5->QueuedMontageBlendingOutEvents).ArrayNum) {
        uVar4 = ~uVar6 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      (**(code **)(param_2->_padding_ + 0x88))
                (param_2,(pUVar5->QueuedMontageBlendingOutEvents).AllocatorInstance.Data +
                         (longlong)(int)uVar6 * 0x28,0,0);
      uVar6 = uVar6 + 1;
    } while ((int)uVar6 < (pUVar5->QueuedMontageBlendingOutEvents).ArrayNum);
  }
  uVar6 = 0;
  if (0 < (pUVar5->QueuedMontageBlendedInEvents).ArrayNum) {
    do {
      uVar4 = 0;
      if ((int)uVar6 < (pUVar5->QueuedMontageBlendedInEvents).ArrayNum) {
        uVar4 = ~uVar6 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      (**(code **)(param_2->_padding_ + 0x88))
                (param_2,(pUVar5->QueuedMontageBlendedInEvents).AllocatorInstance.Data +
                         (longlong)(int)uVar6 * 0x20,0,0);
      uVar6 = uVar6 + 1;
    } while ((int)uVar6 < (pUVar5->QueuedMontageBlendedInEvents).ArrayNum);
  }
  uVar6 = 0;
  if (0 < (pUVar5->QueuedMontageEndedEvents).ArrayNum) {
    do {
      uVar4 = 0;
      if ((int)uVar6 < (pUVar5->QueuedMontageEndedEvents).ArrayNum) {
        uVar4 = ~uVar6 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      (**(code **)(param_2->_padding_ + 0x88))
                (param_2,(pUVar5->QueuedMontageEndedEvents).AllocatorInstance.Data +
                         (longlong)(int)uVar6 * 0x28,0,0);
      uVar6 = uVar6 + 1;
    } while ((int)uVar6 < (pUVar5->QueuedMontageEndedEvents).ArrayNum);
  }
  uVar6 = 0;
  if (0 < (pUVar5->QueuedMontageSectionChangedEvents).ArrayNum) {
    do {
      uVar4 = 0;
      if ((int)uVar6 < (pUVar5->QueuedMontageSectionChangedEvents).ArrayNum) {
        uVar4 = ~uVar6 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      (**(code **)(param_2->_padding_ + 0x88))
                (param_2,(pUVar5->QueuedMontageSectionChangedEvents).AllocatorInstance.Data +
                         (longlong)(int)uVar6 * 0x30,0,0);
      uVar6 = uVar6 + 1;
    } while ((int)uVar6 < (pUVar5->QueuedMontageSectionChangedEvents).ArrayNum);
  }
  pFVar1 = pUVar5->AnimInstanceProxy;
  if (pFVar1 != (FAnimInstanceProxy *)0x0) {
    (**(code **)(*(longlong *)pFVar1 + 0x90))(pFVar1,pUVar5,param_2);
  }
  UObject::AddReferencedObjects((UObject *)pUVar5,param_2);
  return;
}

// AppendAnimationCurveList @ 147440e00

void __thiscall
UAnimInstance::AppendAnimationCurveList
          (UAnimInstance *this,EAnimCurveType param_1,
          TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>
          *param_2)

{
  FAnimInstanceProxy *pFVar1;
  
  pFVar1 = GetProxyOnAnyThread<FAnimInstanceProxy>(this);
  TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>::
  Append<FDefaultSetAllocator>(param_2,pFVar1->AnimationCurves + param_1);
  return;
}

// BeginDestroy @ 147440e40

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UAnimInstance::BeginDestroy(UAnimInstance *this)

{
  int iVar1;
  longlong lVar2;
  AActor *this_00;
  code *pcVar3;
  bool bVar4;
  UClass *pUVar5;
  USkeletalMeshComponent *pUVar6;
  UAnimInstance *pUVar7;
  UWorld *pUVar8;
  
  lVar2 = *(longlong *)&this->field_0x20;
  if (lVar2 != 0) {
    pUVar5 = Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
    lVar2 = *(longlong *)(lVar2 + 0x10);
    iVar1 = (int)pUVar5->_padding_;
    if ((((iVar1 <= *(int *)(lVar2 + 0x38)) &&
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar5->_padding_)) &&
        (pUVar6 = GetSkelMeshComponent(this), pUVar6 != (USkeletalMeshComponent *)0x0)) &&
       (((pUVar7 = USkeletalMeshComponent::GetAnimInstance(pUVar6), pUVar7 == this &&
         ((pUVar6->ParallelAnimationEvaluationTask).Reference != (FBaseGraphTask *)0x0)) &&
        (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                           ("!IsRunningParallelEvaluation()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimInstance.cpp"
                            ,0x5cb,L""), bVar4)))) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (this->AnimInstanceProxy != (FAnimInstanceProxy *)0x0) {
    (**(code **)(*(longlong *)this + 0x380))(this);
    this->AnimInstanceProxy = (FAnimInstanceProxy *)0x0;
  }
  UObject::BeginDestroy((UObject *)this);
  bVar4 = FTraceFilter::IsObjectTraceable<1>((UObject *)this);
  if (!bVar4) {
    pUVar6 = GetSkelMeshComponent(this);
    bVar4 = FTraceFilter::IsObjectTraceable<1>((UObject *)pUVar6);
    if (!bVar4) {
      if (pUVar6 == (USkeletalMeshComponent *)0x0) {
        return;
      }
      this_00 = (AActor *)pUVar6->_padding_;
      bVar4 = FTraceFilter::IsObjectTraceable<1>((UObject *)this_00);
      if (!bVar4) {
        return;
      }
      if (this_00 == (AActor *)0x0) {
        return;
      }
      pUVar8 = AActor::GetWorld(this_00);
      bVar4 = FTraceFilter::IsObjectTraceable<1>((UObject *)pUVar8);
      if (!bVar4) {
        return;
      }
    }
  }
  FObjectTrace::OutputObjectLifetimeEnd((UObject *)this);
  return;
}

// BlueprintBeginPlay @ 1474416b0

void __thiscall UAnimInstance::BlueprintBeginPlay(UAnimInstance *this)

{
  UFunction *pUVar1;
  
  pUVar1 = UObject::FindFunctionChecked((UObject *)this,NAME_UAnimInstance_BlueprintBeginPlay);
                    /* WARNING: Could not recover jumptable at 0x0001474416dd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x260))(this,pUVar1,0,*(code **)(*(longlong *)this + 0x260));
  return;
}

// BlueprintInitializeAnimation @ 1474416f0

void __thiscall UAnimInstance::BlueprintInitializeAnimation(UAnimInstance *this)

{
  UFunction *pUVar1;
  
  pUVar1 = UObject::FindFunctionChecked
                     ((UObject *)this,NAME_UAnimInstance_BlueprintInitializeAnimation);
                    /* WARNING: Could not recover jumptable at 0x00014744171d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x260))(this,pUVar1,0,*(code **)(*(longlong *)this + 0x260));
  return;
}

// BlueprintLinkedAnimationLayersInitialized @ 147441730

void __thiscall UAnimInstance::BlueprintLinkedAnimationLayersInitialized(UAnimInstance *this)

{
  UFunction *pUVar1;
  
  pUVar1 = UObject::FindFunctionChecked
                     ((UObject *)this,NAME_UAnimInstance_BlueprintLinkedAnimationLayersInitialized);
                    /* WARNING: Could not recover jumptable at 0x00014744175d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x260))(this,pUVar1,0,*(code **)(*(longlong *)this + 0x260));
  return;
}

// BlueprintPostEvaluateAnimation @ 147441770

void __thiscall UAnimInstance::BlueprintPostEvaluateAnimation(UAnimInstance *this)

{
  UFunction *pUVar1;
  
  pUVar1 = UObject::FindFunctionChecked
                     ((UObject *)this,NAME_UAnimInstance_BlueprintPostEvaluateAnimation);
                    /* WARNING: Could not recover jumptable at 0x00014744179d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x260))(this,pUVar1,0,*(code **)(*(longlong *)this + 0x260));
  return;
}

// BlueprintThreadSafeUpdateAnimation @ 1474417b0

void __thiscall UAnimInstance::BlueprintThreadSafeUpdateAnimation(UAnimInstance *this,float param_1)

{
  UFunction *pUVar1;
  float local_res10 [6];
  
  local_res10[0] = param_1;
  pUVar1 = UObject::FindFunctionChecked
                     ((UObject *)this,NAME_UAnimInstance_BlueprintThreadSafeUpdateAnimation);
  (**(code **)(*(longlong *)this + 0x260))(this,pUVar1,local_res10);
  return;
}

// BlueprintUpdateAnimation @ 1474417f0

void __thiscall UAnimInstance::BlueprintUpdateAnimation(UAnimInstance *this,float param_1)

{
  UFunction *pUVar1;
  float local_res10 [6];
  
  local_res10[0] = param_1;
  pUVar1 = UObject::FindFunctionChecked((UObject *)this,NAME_UAnimInstance_BlueprintUpdateAnimation)
  ;
  (**(code **)(*(longlong *)this + 0x260))(this,pUVar1,local_res10);
  return;
}

// Blueprint_GetMainAnimInstance @ 147441830

UAnimInstance * __thiscall UAnimInstance::Blueprint_GetMainAnimInstance(UAnimInstance *this)

{
  USkeletalMeshComponent *this_00;
  UAnimInstance *pUVar1;
  
  this_00 = GetSkelMeshComponent(this);
  pUVar1 = USkeletalMeshComponent::GetAnimInstance(this_00);
  return pUVar1;
}

// Blueprint_GetSlotMontageLocalWeight @ 147441850

float __thiscall
UAnimInstance::Blueprint_GetSlotMontageLocalWeight(UAnimInstance *this,FName param_1)

{
  FAnimInstanceProxy *this_00;
  float fVar1;
  FName local_res10 [3];
  
  local_res10[0] = param_1;
  this_00 = GetProxyOnAnyThread<FAnimInstanceProxy>(this);
  fVar1 = FAnimInstanceProxy::GetSlotMontageLocalWeight(this_00,local_res10);
  return fVar1;
}

// CalcSlotMontageLocalWeight @ 1474438c0

/* WARNING: Enum "Type": Some values do not have unique names */

float __thiscall UAnimInstance::CalcSlotMontageLocalWeight(UAnimInstance *this,FName *param_1)

{
  int iVar1;
  bool bVar2;
  FAnimInstanceProxy *pFVar3;
  UAnimMontage *this_00;
  UObject *pUVar4;
  FWeakObjectPtr *this_01;
  FAnimInstanceProxy *pFVar5;
  FWeakObjectPtr *pFVar6;
  float fVar7;
  FName local_res18 [2];
  FString local_68 [4];
  
  pFVar3 = GetProxyOnAnyThread<FAnimInstanceProxy>(this);
  fVar7 = 0.0;
  if ((pFVar3->bUseMainInstanceMontageEvaluationData == '\0') ||
     (pFVar5 = pFVar3->MainInstanceProxy, pFVar3->MainInstanceProxy == (FAnimInstanceProxy *)0x0)) {
    pFVar5 = pFVar3;
  }
  iVar1 = (pFVar5->MontageEvaluationData).ArrayNum;
  this_01 = (FWeakObjectPtr *)(pFVar5->MontageEvaluationData).AllocatorInstance.Data;
  pFVar6 = this_01 + (longlong)iVar1 * 0xb;
  while( true ) {
    if ((pFVar5->MontageEvaluationData).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FMontageEvaluationState_const_,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res18);
    }
    if (this_01 == pFVar6) break;
    bVar2 = FWeakObjectPtr::IsValid(this_01);
    if (bVar2) {
      this_00 = (UAnimMontage *)FWeakObjectPtr::Get(this_01);
      bVar2 = UAnimMontage::IsValidSlot(this_00,*param_1);
      if (bVar2) {
        fVar7 = fVar7 + (float)this_01[4].ObjectIndex;
        UAnimMontage::IsValidAdditiveSlot(this_00,param_1);
        if (5 < (byte)LogAnimation._0_1_) {
          pUVar4 = FWeakObjectPtr::Get(this_01);
          local_res18[0].ComparisonIndex.Value = *(uint *)&pUVar4->field_0x18;
          local_res18[0].Number = *(uint *)&pUVar4->field_0x1c;
          ::FName::ToString(local_res18,local_68);
          UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogAnimation);
          if (local_68[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_68[0].Data.AllocatorInstance.Data);
          }
        }
      }
    }
    this_01 = this_01 + 0xb;
  }
  if (__real_3f800000 <= fVar7) {
    fVar7 = __real_3f800000;
  }
  return fVar7;
}

// CalculateDirection @ 147443a70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

float __thiscall
UAnimInstance::CalculateDirection
          (UAnimInstance *this,TVector<double> *param_1,TRotator<double> *param_2)

{
  double dVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  double dVar4;
  float fVar5;
  float fVar6;
  double extraout_XMM0_Qa;
  double extraout_XMM0_Qa_00;
  double extraout_XMM0_Qb;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  uint uVar15;
  uint uVar16;
  undefined1 auStack_e8 [48];
  double local_b8;
  double dStack_b0;
  ulonglong local_98;
  
  local_98 = __security_cookie.value ^ (ulonglong)auStack_e8;
  dVar1 = (param_1->field0_0x0)._s_0.X;
  if ((((double)CONCAT44((uint)((ulonglong)dVar1 >> 0x20) &
                         __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                         SUB84(dVar1,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
        __real_3f1a36e2e0000000) &&
      (uVar2 = *(undefined8 *)((longlong)&param_1->field0_0x0 + 8),
      (double)CONCAT44((uint)((ulonglong)uVar2 >> 0x20) &
                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                       (uint)uVar2 & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
      __real_3f1a36e2e0000000)) &&
     (uVar2 = *(undefined8 *)((longlong)&param_1->field0_0x0 + 0x10),
     (double)CONCAT44((uint)((ulonglong)uVar2 >> 0x20) &
                      __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                      (uint)uVar2 & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
     __real_3f1a36e2e0000000)) {
    return 0.0;
  }
  dVar7 = (double)GlobalVectorConstants::DEG_TO_RAD.m128_f32[0];
  dVar10 = (double)GlobalVectorConstants::DEG_TO_RAD.m128_f32[1];
  __vdecl_sincos2();
  uVar13 = 0;
  uVar14 = 0;
  local_b8 = dVar7;
  dStack_b0 = dVar10;
  __vdecl_sincos2();
  dVar8 = dVar7 * dStack_b0;
  dVar10 = (param_1->field0_0x0)._s_0.Y;
  dVar4 = extraout_XMM0_Qa_00 * extraout_XMM0_Qa * dStack_b0;
  uVar15 = SUB84(local_b8 * extraout_XMM0_Qa_00,0) ^ (uint)__xmm_80000000000000008000000000000000;
  uVar16 = (uint)((ulonglong)(local_b8 * extraout_XMM0_Qa_00) >> 0x20) ^
           __xmm_80000000000000008000000000000000._4_4_;
  dVar9 = dVar1 * dVar1 + dVar10 * dVar10;
  if (dVar9 == __real_3ff0000000000000) {
    if ((param_1->field0_0x0)._s_0.Z == 0.0) {
      auVar3 = *(undefined1 (*) [16])&param_1->field0_0x0;
      dVar1 = auVar3._0_8_;
      uVar11 = auVar3._8_4_;
      uVar12 = auVar3._12_4_;
      uVar2 = *(undefined8 *)((longlong)&param_1->field0_0x0 + 0x10);
      uVar13 = (undefined4)uVar2;
      uVar14 = (undefined4)((ulonglong)uVar2 >> 0x20);
      goto LAB_147443c32;
    }
  }
  else {
    if (dVar9 < __real_3e45798ee0000000) {
      uVar11 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
      uVar12 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
      uVar13 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
      uVar14 = (undefined4)
               ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20);
      dVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_8_;
      goto LAB_147443c32;
    }
    dVar1 = dVar1 * (__real_3ff0000000000000 / SQRT(dVar9));
    dVar10 = dVar10 * (__real_3ff0000000000000 / SQRT(dVar9));
  }
  uVar11 = SUB84(dVar10,0);
  uVar12 = (undefined4)((ulonglong)dVar10 >> 0x20);
LAB_147443c32:
  fVar6 = (float)(local_b8 * extraout_XMM0_Qb * (double)CONCAT44(uVar12,uVar11) +
                  dStack_b0 * local_b8 * dVar1 + extraout_XMM0_Qa * (double)CONCAT44(uVar14,uVar13))
  ;
  fVar5 = __real_bf800000;
  if ((__real_bf800000 <= fVar6) && (fVar5 = fVar6, __real_3f800000 <= fVar6)) {
    fVar5 = __real_3f800000;
  }
  fVar6 = acosf(fVar5);
  fVar5 = __real_42652ee0;
  if ((float)((extraout_XMM0_Qa_00 * extraout_XMM0_Qa * extraout_XMM0_Qb + dVar8) *
              (double)CONCAT44(uVar12,uVar11) + (dVar4 - dVar7 * extraout_XMM0_Qb) * dVar1 +
             (double)CONCAT44(uVar16,uVar15) * (double)CONCAT44(uVar14,uVar13)) < 0.0) {
    fVar5 = __real_c2652ee0;
  }
  return fVar6 * fVar5;
}

// CanTransitionSignature @ 147444220

bool __thiscall UAnimInstance::CanTransitionSignature(UAnimInstance *this)

{
  return false;
}

// CheckOnInstanceAndMainInstance @ 147444230

bool __thiscall
UAnimInstance::CheckOnInstanceAndMainInstance
          (UAnimInstance *this,TFunctionRef<bool___cdecl(FAnimInstanceProxy_*)> *param_1)

{
  char cVar1;
  undefined1 uVar2;
  FAnimInstanceProxy *pFVar3;
  FAnimInstanceProxy *local_res10 [3];
  
  pFVar3 = GetProxyOnAnyThread<FAnimInstanceProxy>(this);
  local_res10[0] = pFVar3;
  cVar1 = (**(code **)param_1)(*(undefined8 *)&param_1->field_0x8,local_res10);
  if (cVar1 != '\0') {
    return true;
  }
  local_res10[0] = pFVar3->MainInstanceProxy;
  if ((local_res10[0] != (FAnimInstanceProxy *)0x0) && (local_res10[0] != pFVar3)) {
    uVar2 = (**(code **)param_1)(*(undefined8 *)&param_1->field_0x8,local_res10);
    return (bool)uVar2;
  }
  return false;
}

// ClearAllTransitionEvents @ 1474442e0

void __thiscall UAnimInstance::ClearAllTransitionEvents(UAnimInstance *this)

{
  FAnimInstanceProxy *this_00;
  undefined1 local_res10 [24];
  code *local_18;
  undefined1 *local_10;
  
  this_00 = GetProxyOnAnyThread<FAnimInstanceProxy>(this);
  local_10 = local_res10;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`FAnimInstanceProxy::ClearAllTransitionEvents'::__l2::<lambda_1>,void,FAnimNode_StateMachine_&>
             ::Call;
  FAnimInstanceProxy::ForEachStateMachine
            (this_00,(TFunctionRef<void___cdecl(FAnimNode_StateMachine_&)> *)&local_18);
  return;
}

// ClearMontageInstanceReferences @ 147444320

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UAnimInstance::ClearMontageInstanceReferences(UAnimInstance *this,FAnimMontageInstance *param_1)

{
  TMap<UAnimMontage_*,FAnimMontageInstance_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UAnimMontage_*,FAnimMontageInstance_*,0>_>
  *this_00;
  ulonglong uVar1;
  int iVar2;
  TObjectPtr<UAnimMontage>_u_0 TVar3;
  bool bVar4;
  int iVar5;
  FAnimMontageInstance **ppFVar6;
  longlong lVar7;
  uint uVar8;
  uint *puVar9;
  TObjectPtr<UAnimMontage>_u_0 local_res8;
  undefined1 local_88 [12];
  uint uStack_7c;
  undefined1 *local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  TMap<UAnimMontage_*,FAnimMontageInstance_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UAnimMontage_*,FAnimMontageInstance_*,0>_>
  *local_60;
  int iStack_58;
  uint uStack_54;
  undefined1 *local_50;
  undefined4 uStack_48;
  int iStack_44;
  int local_40;
  undefined4 uStack_3c;
  
  this_00 = &this->ActiveMontagesMap;
  TVar3 = (TObjectPtr<UAnimMontage>_u_0)(param_1->Montage).field0_0x0.DebugPtr;
  if (TVar3.DebugPtr == (UAnimMontage *)0x0) {
    local_78 = &(this->ActiveMontagesMap).field_0x10;
    iStack_58 = 0;
    iVar2 = *(int *)&(this->ActiveMontagesMap).field_0x28;
    local_40 = 0;
    uStack_54 = 1;
    iVar5 = 0;
    if (iVar2 != 0) {
      puVar9 = *(uint **)&(this->ActiveMontagesMap).field_0x20;
      if (puVar9 == (uint *)0x0) {
        puVar9 = (uint *)local_78;
      }
      uVar8 = *puVar9;
      while (uVar8 == 0) {
        lVar7 = (longlong)iStack_58;
        local_40 = local_40 + 0x20;
        iStack_58 = iStack_58 + 1;
        iVar5 = iVar2;
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_58) goto LAB_14744444d;
        uVar8 = puVar9[lVar7 + 1];
      }
      uStack_54 = -uVar8 & uVar8;
      uVar1 = (ulonglong)uStack_54 * 2 + 1;
      lVar7 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iVar5 = local_40 + -1 + (int)lVar7;
      if (iVar2 < iVar5) {
        iVar5 = iVar2;
      }
    }
LAB_14744444d:
    uStack_7c = uStack_54;
    local_88._8_4_ = iStack_58;
    uStack_48 = 0xffffffff;
    uStack_3c = uStack_70._4_4_;
    local_68 = CONCAT44(uStack_70._4_4_,local_40);
    local_88._0_8_ = this_00;
    uStack_70 = CONCAT44(iVar5,0xffffffff);
    local_60 = this_00;
    local_50 = local_78;
    iStack_44 = iVar5;
    if (iVar5 < *(int *)&(this->ActiveMontagesMap).field_0x28) {
      do {
        if (*(FAnimMontageInstance **)(*(longlong *)local_88._0_8_ + 8 + (longlong)iVar5 * 0x18) ==
            param_1) {
          if ((*(longlong *)local_88._0_8_ + (longlong)iVar5 * 0x18 != 0) &&
             (2 < (byte)LogAnimation._0_1_)) {
            local_res8 = *(TObjectPtr<UAnimMontage>_u_0 *)&this->field_0x18;
            ::FName::ToString((FName *)&local_res8.ObjectPtr,(FString *)local_88);
            UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAnimation);
            if ((FScriptContainerElement *)local_88._0_8_ != (FScriptContainerElement *)0x0) {
              FMemory::Free((void *)local_88._0_8_);
            }
          }
          break;
        }
        uStack_70 = CONCAT44(uStack_70._4_4_,(uint)uStack_70 & ~uStack_7c);
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                  ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)(local_88 + 8));
        bVar4 = uStack_70._4_4_ < *(int *)(local_78 + 0x18);
        iVar5 = uStack_70._4_4_;
      } while (bVar4);
    }
  }
  else {
    ppFVar6 = TMapBase<UAnimMontage_*,FAnimMontageInstance_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UAnimMontage_*,FAnimMontageInstance_*,0>_>
              ::Find((TMapBase<UAnimMontage_*,FAnimMontageInstance_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UAnimMontage_*,FAnimMontageInstance_*,0>_>
                      *)this_00,TVar3.DebugPtr);
    if (((ppFVar6 != (FAnimMontageInstance **)0x0) && (*ppFVar6 == param_1)) &&
       (local_res8 = TVar3,
       *(int *)&(this->ActiveMontagesMap).field_0x8 != *(int *)&(this->ActiveMontagesMap).field_0x34
       )) {
      uVar8 = ((uint)((ulonglong)TVar3.DebugPtr >> 0x14) & 0xffff ^
              (uint)((ulonglong)TVar3.DebugPtr >> 4)) * -0x7a143595;
      uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
      TSet<TTuple<UAnimMontage_*,FAnimMontageInstance_*>,TDefaultMapHashableKeyFuncs<UAnimMontage_*,FAnimMontageInstance_*,0>,FDefaultSetAllocator>
      ::RemoveImpl<UAnimMontage_const_*>
                ((TSet<TTuple<UAnimMontage_*,FAnimMontageInstance_*>,TDefaultMapHashableKeyFuncs<UAnimMontage_*,FAnimMontageInstance_*,0>,FDefaultSetAllocator>
                  *)this_00,uVar8 >> 0x10 ^ uVar8,&local_res8.DebugPtr);
    }
  }
  if (this->RootMotionMontageInstance == param_1) {
    this->RootMotionMontageInstance = (FAnimMontageInstance *)0x0;
  }
  FAnimMontageInstance::MontageSync_StopFollowing(param_1);
  FAnimMontageInstance::MontageSync_StopLeading(param_1);
  return;
}

// ClearMorphTargets @ 147444590

void __thiscall UAnimInstance::ClearMorphTargets(UAnimInstance *this)

{
  USkeletalMeshComponent *this_00;
  
  this_00 = GetSkelMeshComponent(this);
  if (this_00 != (USkeletalMeshComponent *)0x0) {
    USkeletalMeshComponent::ClearMorphTargets(this_00);
    return;
  }
  return;
}

// ClearQueuedAnimEvents @ 1474445e0

void __thiscall UAnimInstance::ClearQueuedAnimEvents(UAnimInstance *this,bool param_1)

{
  TArray<FAnimNotifyEventReference,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<FAnimNotifyEventReference,TSizedDefaultAllocator<32>_> *this_00;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FAnimInstanceProxy *pFVar5;
  USkeletalMeshComponent *pUVar6;
  int iVar7;
  
  pFVar5 = GetProxyOnGameThread<FAnimInstanceProxy>(this);
  pTVar1 = &(this->NotifyQueue).AnimNotifies;
  this_00 = &pFVar5->ActiveAnimNotifiesSinceLastTick;
  if (param_1) {
    TArray<FAnimNotifyEventReference,TSizedDefaultAllocator<32>_>::Reset
              (this_00,(this->NotifyQueue).AnimNotifies.ArrayNum);
    if (this_00 == pTVar1) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(void*)this != (void*)&Source",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x96e,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    iVar7 = (this->NotifyQueue).AnimNotifies.ArrayNum;
    if (iVar7 == 0) goto LAB_1474446fe;
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x30,8,iVar7,&this_00->AllocatorInstance,
                       &(pFVar5->ActiveAnimNotifiesSinceLastTick).ArrayNum,
                       &(pFVar5->ActiveAnimNotifiesSinceLastTick).ArrayMax);
  }
  else {
    if (this_00 == pTVar1) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(void*)this != (void*)&Source",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x96e,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    iVar7 = (this->NotifyQueue).AnimNotifies.ArrayNum;
    if (iVar7 == 0) goto LAB_1474446fe;
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x30,8,iVar7,&this_00->AllocatorInstance,
                       &(pFVar5->ActiveAnimNotifiesSinceLastTick).ArrayNum,
                       &(pFVar5->ActiveAnimNotifiesSinceLastTick).ArrayMax);
  }
  ConstructItems<FAnimNotifyEventReference,FAnimNotifyEventReference,int>
            ((this_00->AllocatorInstance).Data + (longlong)iVar4 * 0x30,
             (FAnimNotifyEventReference *)(pTVar1->AllocatorInstance).Data,iVar7);
LAB_1474446fe:
  pUVar6 = GetSkelMeshComponent(this);
  FAnimNotifyQueue::Reset(&this->NotifyQueue,pUVar6);
  return;
}

// ClearTransitionEvents @ 147444930

void __thiscall UAnimInstance::ClearTransitionEvents(UAnimInstance *this,FName param_1)

{
  FAnimInstanceProxy *this_00;
  FName local_res10 [3];
  code *local_18;
  FName *local_10;
  
  this_00 = GetProxyOnAnyThread<FAnimInstanceProxy>(this);
  local_10 = local_res10;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`FAnimInstanceProxy::ClearTransitionEvents'::__l2::<lambda_1>,void,FAnimNode_StateMachine_&>
             ::Call;
  local_res10[0] = param_1;
  FAnimInstanceProxy::ForEachStateMachine
            (this_00,(TFunctionRef<void___cdecl(FAnimNode_StateMachine_&)> *)&local_18);
  return;
}

// ConditionalFlushCompletedMontages @ 1474449a0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall UAnimInstance::ConditionalFlushCompletedMontages(UAnimInstance *this)

{
  FAnimMontageInstance *pFVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  uint uVar6;
  USkeletalMeshComponent *this_00;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  
  if ((this->MontageInstances).ArrayNum != 0) {
    this_00 = GetSkelMeshComponent(this);
    if ((this_00 == (USkeletalMeshComponent *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("MeshComp",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimInstance.cpp"
                           ,0x7e8,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    bVar3 = USkeletalMeshComponent::PoseTickedThisFrame(this_00);
    bVar4 = USkeletalMeshComponent::ShouldTickAnimation(this_00);
    cVar5 = (**(code **)(this_00->_padding_ + 0xbd8))(this_00);
    uVar8 = (uint)GFrameCounter;
    if ((!bVar3) &&
       (((!bVar4 || (cVar5 == '\0')) &&
        (uVar6 = this->LastMontageFlushFrame, this->LastMontageFlushFrame = (uint)GFrameCounter,
        uVar8 != uVar6)))) {
      uVar8 = (this->MontageInstances).ArrayNum - 1;
      if (-1 < (int)uVar8) {
        lVar9 = (longlong)(int)uVar8 * 8;
        do {
          if ((int)uVar8 < (this->MontageInstances).ArrayNum) {
            uVar6 = 0;
            if ((int)uVar8 < (this->MontageInstances).ArrayNum) {
              uVar6 = ~uVar8 >> 0x1f;
            }
            if ((uVar6 == 0) &&
               (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar3)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            pFVar1 = *(FAnimMontageInstance **)
                      ((this->MontageInstances).AllocatorInstance.Data + lVar9);
            if (((pFVar1 != (FAnimMontageInstance *)0x0) &&
                ((pFVar1->Montage).field0_0x0.DebugPtr != (UAnimMontage *)0x0)) &&
               (((pFVar1->Blend).DesiredValue == 0.0 &&
                (((bVar3 = FAlphaBlend::IsComplete(&pFVar1->Blend), bVar3 &&
                  (FAnimMontageInstance::Terminate(pFVar1), this->bUninitialized != '\0')) &&
                 (MontageCVars::bEarlyOutMontageWhenUninitialized != false)))))) {
              return;
            }
          }
          lVar9 = lVar9 + -8;
          uVar8 = uVar8 - 1;
        } while (-1 < (int)uVar8);
      }
      iVar7 = (this->MontageInstances).ArrayNum;
      uVar8 = 0;
      if (0 < iVar7) {
        lVar9 = 0;
        do {
          uVar6 = 0;
          if ((int)uVar8 < iVar7) {
            uVar6 = ~uVar8 >> 0x1f;
          }
          if ((uVar6 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          pFVar1 = *(FAnimMontageInstance **)
                    ((this->MontageInstances).AllocatorInstance.Data + lVar9);
          if (pFVar1 == (FAnimMontageInstance *)0x0) {
            bVar3 = UE::Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<_8124036945119541225>,false,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimInstance.cpp"
                               ,0x817,"MontageInstance");
            if (bVar3) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
          }
          else if ((pFVar1->Montage).field0_0x0.DebugPtr == (UAnimMontage *)0x0) {
            ClearMontageInstanceReferences(this,pFVar1);
            FAnimMontageInstance::_scalar_deleting_destructor_(pFVar1,1);
            TArray<FAnimMontageInstance_*,TSizedDefaultAllocator<32>_>::RemoveAt
                      (&this->MontageInstances,uVar8,Default);
            uVar8 = uVar8 - 1;
            lVar9 = lVar9 + -8;
            if ((this->MontageInstances).ArrayNum == 0) {
              TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::
              ProcessMulticastDelegate<UObject>
                        ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)
                         &this->OnAllMontageInstancesEnded,(void *)0x0);
            }
          }
          iVar7 = (this->MontageInstances).ArrayNum;
          uVar8 = uVar8 + 1;
          lVar9 = lVar9 + 8;
        } while ((int)uVar8 < iVar7);
      }
    }
  }
  return;
}

// ConsumeExtractedRootMotion @ 147444c50

/* WARNING: Type propagation algorithm not settling */

FRootMotionMovementParams * __thiscall
UAnimInstance::ConsumeExtractedRootMotion
          (UAnimInstance *this,FRootMotionMovementParams *__return_storage_ptr__,float param_1)

{
  float fVar1;
  bool bVar2;
  float fVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
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
  FRootMotionMovementParams *this_00;
  
  if (param_1 < __real_3727c5ac) {
    __return_storage_ptr__->bHasRootMotion = false;
    __return_storage_ptr__->BlendWeight = 0.0;
    fVar1 = GlobalVectorConstants::Float0001.m128_f32[2];
    fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
    auVar4._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
    auVar4._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    auVar4._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
    *(undefined1 (*) [16])(__return_storage_ptr__->RootMotionTransform).Rotation.XY.m128d_f64 =
         auVar4;
    auVar5._8_4_ = SUB84((double)fVar3,0);
    auVar5._0_8_ = (double)fVar1;
    auVar5._12_4_ = (int)((ulonglong)(double)fVar3 >> 0x20);
    *(undefined1 (*) [16])(__return_storage_ptr__->RootMotionTransform).Rotation.ZW.m128d_f64 =
         auVar5;
    fVar1 = GlobalVectorConstants::FloatZero.m128_f32[2];
    fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
    auVar6._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
    auVar6._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    auVar6._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
    *(undefined1 (*) [16])(__return_storage_ptr__->RootMotionTransform).Translation.XY.m128d_f64 =
         auVar6;
    auVar7._8_4_ = SUB84((double)fVar3,0);
    auVar7._0_8_ = (double)fVar1;
    auVar7._12_4_ = (int)((ulonglong)(double)fVar3 >> 0x20);
    *(undefined1 (*) [16])(__return_storage_ptr__->RootMotionTransform).Translation.ZW.m128d_f64 =
         auVar7;
    fVar1 = GlobalVectorConstants::Float1110.m128_f32[2];
    fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
    auVar8._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
    auVar8._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    auVar8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
    *(undefined1 (*) [16])(__return_storage_ptr__->RootMotionTransform).Scale3D.XY.m128d_f64 =
         auVar8;
    auVar9._8_4_ = SUB84((double)fVar3,0);
    auVar9._0_8_ = (double)fVar1;
    auVar9._12_4_ = (int)((ulonglong)(double)fVar3 >> 0x20);
    *(undefined1 (*) [16])(__return_storage_ptr__->RootMotionTransform).Scale3D.ZW.m128d_f64 =
         auVar9;
    return __return_storage_ptr__;
  }
  this_00 = &this->ExtractedRootMotion;
  if (__real_3f7fff58 < param_1) {
    bVar2 = this_00->bHasRootMotion;
    dVar10 = (this->ExtractedRootMotion).RootMotionTransform.Rotation.XY.m128d_f64[0];
    dVar11 = (this->ExtractedRootMotion).RootMotionTransform.Rotation.XY.m128d_f64[1];
    dVar12 = (this->ExtractedRootMotion).RootMotionTransform.Rotation.ZW.m128d_f64[0];
    dVar13 = (this->ExtractedRootMotion).RootMotionTransform.Rotation.ZW.m128d_f64[1];
    fVar1 = (this->ExtractedRootMotion).BlendWeight;
    dVar14 = (this->ExtractedRootMotion).RootMotionTransform.Translation.XY.m128d_f64[0];
    dVar15 = (this->ExtractedRootMotion).RootMotionTransform.Translation.XY.m128d_f64[1];
    dVar16 = (this->ExtractedRootMotion).RootMotionTransform.Translation.ZW.m128d_f64[0];
    dVar17 = (this->ExtractedRootMotion).RootMotionTransform.Translation.ZW.m128d_f64[1];
    dVar18 = (this->ExtractedRootMotion).RootMotionTransform.Scale3D.XY.m128d_f64[0];
    dVar19 = (this->ExtractedRootMotion).RootMotionTransform.Scale3D.XY.m128d_f64[1];
    dVar20 = (this->ExtractedRootMotion).RootMotionTransform.Scale3D.ZW.m128d_f64[0];
    dVar21 = (this->ExtractedRootMotion).RootMotionTransform.Scale3D.ZW.m128d_f64[1];
    this_00->bHasRootMotion = false;
    (this->ExtractedRootMotion).BlendWeight = 0.0;
    (__return_storage_ptr__->RootMotionTransform).Rotation.XY.m128d_f64[0] = dVar10;
    (__return_storage_ptr__->RootMotionTransform).Rotation.XY.m128d_f64[1] = dVar11;
    __return_storage_ptr__->bHasRootMotion = bVar2;
    (__return_storage_ptr__->RootMotionTransform).Rotation.ZW.m128d_f64[0] = dVar12;
    (__return_storage_ptr__->RootMotionTransform).Rotation.ZW.m128d_f64[1] = dVar13;
    (__return_storage_ptr__->RootMotionTransform).Translation.XY.m128d_f64[0] = dVar14;
    (__return_storage_ptr__->RootMotionTransform).Translation.XY.m128d_f64[1] = dVar15;
    (__return_storage_ptr__->RootMotionTransform).Translation.ZW.m128d_f64[0] = dVar16;
    (__return_storage_ptr__->RootMotionTransform).Translation.ZW.m128d_f64[1] = dVar17;
    (__return_storage_ptr__->RootMotionTransform).Scale3D.XY.m128d_f64[0] = dVar18;
    (__return_storage_ptr__->RootMotionTransform).Scale3D.XY.m128d_f64[1] = dVar19;
    (__return_storage_ptr__->RootMotionTransform).Scale3D.ZW.m128d_f64[0] = dVar20;
    (__return_storage_ptr__->RootMotionTransform).Scale3D.ZW.m128d_f64[1] = dVar21;
    __return_storage_ptr__->BlendWeight = fVar1;
    return __return_storage_ptr__;
  }
  FRootMotionMovementParams::ConsumeRootMotion(this_00,__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// CopyCurveValues @ 147445220

void __thiscall UAnimInstance::CopyCurveValues(UAnimInstance *this,UAnimInstance *param_1)

{
  FAnimInstanceProxy *pFVar1;
  FAnimInstanceProxy *pFVar2;
  TSet<TTuple<FName,float>,TDefaultMapHashableKeyFuncs<FName,float,0>,FDefaultSetAllocator> *this_00
  ;
  longlong lVar3;
  
  pFVar1 = GetProxyOnAnyThread<FAnimInstanceProxy>(this);
  pFVar2 = GetProxyOnAnyThread<FAnimInstanceProxy>(param_1);
  this_00 = (TSet<TTuple<FName,float>,TDefaultMapHashableKeyFuncs<FName,float,0>,FDefaultSetAllocator>
             *)pFVar1->AnimationCurves;
  lVar3 = 3;
  do {
    TSet<TTuple<FName,float>,TDefaultMapHashableKeyFuncs<FName,float,0>,FDefaultSetAllocator>::
    operator=(this_00,(TSet<TTuple<FName,float>,TDefaultMapHashableKeyFuncs<FName,float,0>,FDefaultSetAllocator>
                       *)(((longlong)pFVar2 - (longlong)pFVar1) + (longlong)this_00));
    this_00 = this_00 + 1;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  return;
}

// CreateAnimInstanceProxy @ 147445280

FAnimInstanceProxy * __thiscall UAnimInstance::CreateAnimInstanceProxy(UAnimInstance *this)

{
  FAnimInstanceProxy *pFVar1;
  
  pFVar1 = ::operator_new(0x810);
  if (pFVar1 != (FAnimInstanceProxy *)0x0) {
    pFVar1 = FAnimInstanceProxy::FAnimInstanceProxy(pFVar1,this);
    return pFVar1;
  }
  return (FAnimInstanceProxy *)0x0;
}

// DestroyAnimInstanceProxy @ 147446070

void __thiscall
UAnimInstance::DestroyAnimInstanceProxy(UAnimInstance *this,FAnimInstanceProxy *param_1)

{
  if (param_1 != (FAnimInstanceProxy *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147446083. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)**(undefined8 **)param_1)(param_1,1);
    return;
  }
  return;
}

// DispatchQueuedAnimEvents @ 147446c00

void __thiscall UAnimInstance::DispatchQueuedAnimEvents(UAnimInstance *this)

{
  int *piVar1;
  TArray<FAnimMontageInstance_*,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *_Dst;
  FAnimMontageInstance *this_00;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FAnimInstanceProxy *pFVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  uint uVar10;
  
  pFVar6 = GetProxyOnGameThread<FAnimInstanceProxy>(this);
  TriggerAnimNotifies(this,pFVar6->CurrentDeltaSeconds);
  TriggerQueuedMontageEvents(this);
  uVar8 = 0;
  if (0 < (this->MontageInstances).ArrayNum) {
    pTVar2 = &this->MontageInstances;
    lVar9 = 0;
    do {
      uVar10 = ~uVar8 >> 0x1f;
      uVar5 = 0;
      if ((int)uVar8 < (this->MontageInstances).ArrayNum) {
        uVar5 = uVar10;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      this_00 = *(FAnimMontageInstance **)((pTVar2->AllocatorInstance).Data + lVar9);
      if (this_00 == (FAnimMontageInstance *)0x0) {
        bVar4 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_8124036945119542493>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimInstance.cpp"
                           ,0x323,"MontageInstance");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      else if ((this_00->Montage).field0_0x0.DebugPtr == (UAnimMontage *)0x0) {
        ClearMontageInstanceReferences(this,this_00);
        FAnimMontageInstance::_scalar_deleting_destructor_(this_00,1);
        uVar5 = 0;
        if ((int)uVar8 < (this->MontageInstances).ArrayNum) {
          uVar5 = uVar10;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        _Dst = (pTVar2->AllocatorInstance).Data + (longlong)(int)uVar8 * 8;
        iVar7 = (this->MontageInstances).ArrayNum + ~uVar8;
        if (iVar7 != 0) {
          memmove(_Dst,_Dst + 8,(longlong)iVar7 << 3);
        }
        piVar1 = &(this->MontageInstances).ArrayNum;
        *piVar1 = *piVar1 + -1;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,&pTVar2->AllocatorInstance,(this->MontageInstances).ArrayNum,
                   &(this->MontageInstances).ArrayMax);
        uVar8 = uVar8 - 1;
        lVar9 = lVar9 + -8;
        if ((this->MontageInstances).ArrayNum == 0) {
          TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
                    ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)
                     &this->OnAllMontageInstancesEnded,(void *)0x0);
        }
      }
      uVar8 = uVar8 + 1;
      lVar9 = lVar9 + 8;
    } while ((int)uVar8 < (this->MontageInstances).ArrayNum);
  }
  return;
}

// DisplayDebug @ 147446e10

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
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
UAnimInstance::DisplayDebug
          (UAnimInstance *this,UCanvas *param_1,FDebugDisplayInfo *param_2,float *param_3,
          float *param_4)

{
  short *psVar1;
  int iVar2;
  uint uVar3;
  FAnimMontageInstance *this_00;
  code *pcVar4;
  double dVar5;
  float fVar6;
  float fVar7;
  undefined8 uVar8;
  void *pvVar9;
  TArray<FAnimTickRecord,TSizedDefaultAllocator<32>_> *pTVar10;
  TMap<FName,FAnimGroupInstance,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAnimGroupInstance,0>_>
  *pTVar11;
  undefined1 auVar12 [16];
  bool bVar13;
  uint uVar14;
  int iVar15;
  FAnimInstanceProxy *pFVar16;
  UFont *this_01;
  FLinearColor_u_0 *pFVar17;
  longlong *plVar18;
  FAnimInstanceProxy *pFVar19;
  FName FVar20;
  FName *pFVar21;
  longlong lVar22;
  longlong lVar23;
  uint uVar24;
  int iVar25;
  FName *pFVar26;
  FAnimNotifyEvent *this_02;
  FDisplayDebugManager *this_03;
  FScriptContainerElement *pFVar27;
  ulonglong uVar28;
  FName *pFVar29;
  FName *pFVar30;
  FName *pFVar31;
  FName *pFVar32;
  FName *pFVar33;
  FName *pFVar34;
  undefined1 *puVar35;
  uint *puVar36;
  FFlattenedDebugData *pFVar37;
  ulonglong uVar38;
  TMap<FName,FAnimGroupInstance,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAnimGroupInstance,0>_>
  *pTVar39;
  char cVar40;
  uint uVar41;
  char cVar42;
  undefined1 *puVar43;
  float fVar44;
  double dVar45;
  float fVar46;
  undefined4 uVar47;
  undefined4 uVar48;
  undefined4 uVar49;
  undefined4 uVar50;
  float fVar51;
  float fVar52;
  undefined1 auVar53 [16];
  bool local_res18;
  float local_4a8;
  char local_4a4;
  char local_4a3;
  char local_4a2;
  char local_4a1;
  char local_4a0;
  FString local_498;
  undefined1 local_488;
  undefined1 local_487 [7];
  ForAnyElementType local_480;
  int local_478 [2];
  float local_470 [2];
  TArray<FNodeDebugData::FFlattenedDebugData,TSizedDefaultAllocator<32>_> local_468;
  int local_458 [2];
  FString local_450;
  FString local_440;
  FString local_430;
  FString local_420;
  FLinearColor_u_0 local_408;
  FString local_3f8;
  FLinearColor_u_0 local_3e8;
  FNodeDebugData local_3d8;
  int local_388;
  int local_384;
  FName local_380;
  TArray<FAnimTickRecord,TSizedDefaultAllocator<32>_> *local_378;
  FName local_370;
  FName local_368;
  FAnimInstanceProxy *local_360;
  TMap<FName,FAnimGroupInstance,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAnimGroupInstance,0>_>
  *local_358;
  int iStack_350;
  uint uStack_34c;
  undefined1 *local_348;
  undefined4 uStack_340;
  int iStack_33c;
  int local_338;
  undefined4 uStack_334;
  int iStack_330;
  undefined4 uStack_32c;
  FString local_328;
  longlong local_318;
  undefined8 uStack_310;
  FString local_308;
  FString local_2f8;
  FString local_2e8;
  FString local_2d8;
  FString local_2c8;
  FString local_2b8;
  TMap<FName,FAnimGroupInstance,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAnimGroupInstance,0>_>
  *local_2a8;
  undefined1 auStack_2a0 [16];
  uint uStack_290;
  uint uStack_28c;
  undefined8 local_288;
  undefined8 uStack_280;
  FString local_278;
  undefined1 local_268 [16];
  FString local_258;
  FString local_248;
  TVector<double>_u_0 local_238;
  TVector<double>_u_0 local_220;
  TVector<double>_u_0 local_208;
  TVector<double>_u_0 local_1f0;
  FLinearColor_u_0 local_1d0;
  longlong local_1c0;
  undefined8 uStack_1b8;
  FString local_1b0;
  FLinearColor_u_0 local_198;
  FLinearColor_u_0 local_188 [2];
  FLinearColor_u_0 local_168;
  FLinearColor_u_0 local_158;
  FLinearColor_u_0 local_148;
  FString local_138;
  FString local_128;
  FString local_118;
  FLinearColor_u_0 local_108 [2];
  undefined4 local_dc;
  
  pFVar16 = GetProxyOnGameThread<FAnimInstanceProxy>(this);
  auVar53 = ___xmm_3f800000000000003f30a3d73f5c28f6;
  this_03 = &param_1->DisplayDebugManager;
  local_3e8._0_1_ = __xmm_3f8000003f6666663f6666663f666666[0];
  local_3e8._1_1_ = __xmm_3f8000003f6666663f6666663f666666[1];
  local_3e8._2_1_ = __xmm_3f8000003f6666663f6666663f666666[2];
  local_3e8._3_1_ = __xmm_3f8000003f6666663f6666663f666666[3];
  local_3e8._4_1_ = __xmm_3f8000003f6666663f6666663f666666[4];
  local_3e8._5_1_ = __xmm_3f8000003f6666663f6666663f666666[5];
  local_3e8._6_1_ = __xmm_3f8000003f6666663f6666663f666666[6];
  local_3e8._7_1_ = __xmm_3f8000003f6666663f6666663f666666[7];
  local_3e8._8_8_ = ram0x0001516cebc8;
  local_408._0_8_ = ___xmm_3f8000003dcccccd3f19999a3dcccccd;
  local_408._8_8_ = _UNK_1516ceb98;
  local_318 = ___xmm_3f8000003e4ccccd3e4ccccd3e4ccccd;
  uStack_310 = _UNK_1516ceba8;
  local_1d0 = ___xmm_3f8000003f0000003e8000003f000000;
  local_4a8 = 0.0;
  local_268 = ___xmm_3f800000000000003f30a3d73f5c28f6;
  local_360 = pFVar16;
  this_01 = UEngine::GetSmallFont();
  if ((this_01 != (UFont *)0x0) &&
     (this_01 != (UFont *)(param_1->DisplayDebugManager).DebugTextItem._padding_)) {
    (param_1->DisplayDebugManager).DebugTextItem._padding_ = (longlong)this_01;
    fVar44 = UFont::GetMaxCharHeight(this_01);
    (param_1->DisplayDebugManager).MaxCharHeight = fVar44;
  }
  pvVar9 = ThreadLocalStoragePointer;
  *(undefined4 *)&(param_1->DisplayDebugManager).DebugTextItem._padding_ = 0x3f5c28f6;
  *(undefined8 *)((longlong)&(param_1->DisplayDebugManager).DebugTextItem._padding_ + 4) =
       0x3f30a3d7;
  *(undefined4 *)((longlong)&(param_1->DisplayDebugManager).DebugTextItem._padding_ + 4) =
       0x3f800000;
  lVar22 = *(longlong *)((longlong)pvVar9 + (ulonglong)_tls_index * 8);
  if ((*(int *)(lVar22 + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&CAT_SyncGroups,L"SyncGroups");
    _Init_thread_footer(&::_TSS0);
  }
  if ((*(int *)(lVar22 + 0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
    ::FName::FName(&CAT_Montages,L"Montages");
    _Init_thread_footer(&::_TSS1);
  }
  if ((*(int *)(lVar22 + 0x9d4c) < ::_TSS2) && (_Init_thread_header(&::_TSS2), ::_TSS2 == -1)) {
    ::FName::FName(&CAT_Graph,L"Graph");
    _Init_thread_footer(&::_TSS2);
  }
  if ((*(int *)(lVar22 + 0x9d4c) < ::_TSS3) && (_Init_thread_header(&::_TSS3), ::_TSS3 == -1)) {
    ::FName::FName(&CAT_Curves,L"Curves");
    _Init_thread_footer(&::_TSS3);
  }
  if ((*(int *)(lVar22 + 0x9d4c) < ::_TSS4) && (_Init_thread_header(&::_TSS4), ::_TSS4 == -1)) {
    ::FName::FName(&CAT_Notifies,L"Notifies");
    _Init_thread_footer(&::_TSS4);
  }
  if ((*(int *)(lVar22 + 0x9d4c) < ::_TSS5) && (_Init_thread_header(&::_TSS5), ::_TSS5 == -1)) {
    ::FName::FName(&CAT_FullAnimGraph,L"FullGraph");
    _Init_thread_footer(&::_TSS5);
  }
  if ((*(int *)(lVar22 + 0x9d4c) < ::_TSS6) && (_Init_thread_header(&::_TSS6), ::_TSS6 == -1)) {
    ::FName::FName(&CAT_FullBlendspaceDisplay,L"FullBlendspaceDisplay");
    _Init_thread_footer(&::_TSS6);
  }
  pFVar21 = (FName *)(param_2->ToggledCategories).AllocatorInstance.Data;
  pFVar26 = pFVar21 + (param_2->ToggledCategories).ArrayNum;
  for (pFVar29 = pFVar21; pFVar34 = pFVar21, pFVar33 = pFVar21, pFVar32 = pFVar21, pFVar31 = pFVar21
      , pFVar30 = pFVar21, pFVar29 != pFVar26; pFVar29 = pFVar29 + 1) {
    if (*pFVar29 == CAT_SyncGroups) {
      cVar42 = '\0';
      local_4a4 = '\0';
      goto LAB_147446fe0;
    }
  }
  cVar42 = '\x01';
  local_4a4 = '\x01';
  for (; pFVar30 != pFVar26; pFVar30 = pFVar30 + 1) {
LAB_147446fe0:
    if (*pFVar30 == CAT_Montages) {
      local_4a3 = '\0';
      goto LAB_147447010;
    }
  }
  local_4a3 = '\x01';
  for (; pFVar31 != pFVar26; pFVar31 = pFVar31 + 1) {
LAB_147447010:
    if (*pFVar31 == CAT_Graph) {
      bVar13 = false;
      goto LAB_147447036;
    }
  }
  bVar13 = true;
  for (; pFVar32 != pFVar26; pFVar32 = pFVar32 + 1) {
LAB_147447036:
    if (*pFVar32 == CAT_Curves) {
      local_4a1 = '\0';
      goto LAB_147447060;
    }
  }
  local_4a1 = '\x01';
  for (; pFVar33 != pFVar26; pFVar33 = pFVar33 + 1) {
LAB_147447060:
    if (*pFVar33 == CAT_Notifies) {
      local_4a2 = '\0';
      goto LAB_147447090;
    }
  }
  local_4a2 = '\x01';
  for (; pFVar34 != pFVar26; pFVar34 = pFVar34 + 1) {
LAB_147447090:
    if (*pFVar34 == CAT_FullAnimGraph) {
      cVar40 = '\x01';
      local_4a0 = '\x01';
      goto LAB_1474470b6;
    }
  }
  cVar40 = '\0';
  local_4a0 = '\0';
  for (; pFVar21 != pFVar26; pFVar21 = pFVar21 + 1) {
LAB_1474470b6:
    if (*pFVar21 == CAT_FullBlendspaceDisplay) {
      local_res18 = false;
      goto LAB_1474470cf;
    }
  }
  local_res18 = true;
LAB_1474470cf:
  local_380.ComparisonIndex.Value = *(uint *)&this->field_0x18;
  local_380.Number = *(uint *)&this->field_0x1c;
  ::FName::ToString(&local_380,&local_328);
  ::FString::PrintfImpl(&local_498,L"Animation: %s");
  if (local_328.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_328.Data.AllocatorInstance.Data);
  }
  FDisplayDebugManager::DrawString(this_03,&local_498,&local_4a8);
  fVar44 = __real_40800000;
  local_4a8 = local_4a8 + __real_40800000;
  (**(code **)(*(longlong *)this + 0x358))(this,this_03,&local_4a8);
  auVar12 = ___xmm_3f800000000000003f30a3d73f5c28f6;
  local_4a8 = local_4a8 - fVar44;
  if ((bVar13) && (pFVar16->RootNode != (FAnimNode_Base *)0x0)) {
    ___xmm_3f800000000000003f30a3d73f5c28f6 = auVar53._0_8_;
    _UNK_1516ceb88 = auVar53._8_8_;
    uVar8 = _UNK_1516ceb88;
    (param_1->DisplayDebugManager).DebugTextItem._padding_ = ___xmm_3f800000000000003f30a3d73f5c28f6
    ;
    ___xmm_3f800000000000003f30a3d73f5c28f6 = auVar12;
    (param_1->DisplayDebugManager).DebugTextItem._padding_ = uVar8;
    ::FString::PrintfImpl(&local_450,L"Anim Node Tree");
    if (local_498.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_498.Data.AllocatorInstance.Data);
    }
    local_498.Data.AllocatorInstance.Data = local_450.Data.AllocatorInstance.Data;
    iVar15 = 0;
    local_498.Data.ArrayNum = local_450.Data.ArrayNum;
    local_498.Data.ArrayMax = local_450.Data.ArrayMax;
    local_450.Data.ArrayNum = 0;
    local_450.Data.ArrayMax = 0;
    local_450.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    FDisplayDebugManager::DrawString(this_03,&local_498,&local_4a8);
    psVar1 = &(this->DebugDataCounter).Counter;
    *psVar1 = *psVar1 + 1;
    local_4a8 = local_4a8 + fVar44;
    (this->DebugDataCounter).LastSyncronizedFrame = GFrameCounter;
    if ((this->DebugDataCounter).Counter == -1) {
      (this->DebugDataCounter).Counter = 0;
    }
    local_3d8.RootNodePtr = &local_3d8;
    local_3d8.AbsoluteWeight = 1.0;
    local_3d8.NodeChain.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_3d8.NodeChain.ArrayNum = 0;
    local_3d8.NodeChain.ArrayMax = 0;
    local_3d8.NodeDescription.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_3d8.NodeDescription.Data.ArrayNum = 0;
    local_3d8.NodeDescription.Data.ArrayMax = 0;
    local_3d8.SaveCachePoseNodes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_3d8.SaveCachePoseNodes.ArrayNum = 0;
    local_3d8.SaveCachePoseNodes.ArrayMax = 0;
    local_3d8.AnimInstance = this;
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x48,8,0x14,&local_3d8.SaveCachePoseNodes.AllocatorInstance,0,
               &local_3d8.SaveCachePoseNodes.ArrayMax);
    FAnimInstanceProxy::GatherDebugData(pFVar16,&local_3d8);
    local_468.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_468.ArrayNum = 0;
    local_468.ArrayMax = 0;
    local_458[0] = 0;
    FNodeDebugData::GetFlattenedDebugData(&local_3d8,&local_468,0,local_458);
    fVar7 = __real_3f000000;
    uVar3 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
    uVar41 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
    fVar6 = __real_41000000;
    fVar44 = __real_3727c5ac;
    iVar2 = local_468.ArrayNum;
    uVar24 = 0xffffffff;
    pFVar27 = local_468.AllocatorInstance.Data + 0x14;
    pFVar37 = (FFlattenedDebugData *)
              (local_468.AllocatorInstance.Data + (longlong)local_468.ArrayNum * 0x20);
    local_480.Data = (FScriptContainerElement *)0x0;
    local_478[0] = 0;
    local_478[1] = 0;
    while( true ) {
      if (local_468.ArrayNum != iVar2) {
        local_488 = 0;
        `TCheckedPointerIterator<FNodeDebugData::FFlattenedDebugData,int,0>::operator!='::__l2::
        <lambda_1>::operator()(&local_488);
        iVar15 = local_478[0];
      }
      if ((FFlattenedDebugData *)(pFVar27 + -0x14) == pFVar37) break;
      if ((fVar44 < *(float *)(pFVar27 + -4)) || (cVar40 != '\0')) {
        fVar46 = (param_1->DisplayDebugManager).CurrentPos.field0_0x0._s_0.Y;
        local_470[0] = (float)(int)*(uint *)pFVar27 * fVar6 + local_4a8;
        fVar52 = (param_1->DisplayDebugManager).MaxCharHeight;
        fVar51 = fVar46 + fVar52;
        if (uVar24 != *(uint *)(pFVar27 + 4)) {
          fVar52 = (float)(int)(fVar52 * fVar7);
          (param_1->DisplayDebugManager).CurrentPos.field0_0x0._s_0.Y = fVar52 + fVar46;
          FDisplayDebugManager::AddColumnIfNeeded(this_03);
          uVar24 = *(uint *)pFVar27 - 1;
          if ((-1 < (int)uVar24) && ((int)uVar24 < local_478[0])) {
            uVar14 = 0;
            if ((int)uVar24 < local_478[0]) {
              uVar14 = ~uVar24 >> 0x1f;
            }
            if ((uVar14 == 0) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar13)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            fVar46 = (param_1->DisplayDebugManager).CurrentPos.field0_0x0._s_0.X;
            lVar22 = (longlong)(int)uVar24;
            auVar53 = *(undefined1 (*) [16])(local_480.Data + lVar22 * 0x10);
            uVar14 = 0;
            if ((int)uVar24 < local_478[0]) {
              uVar14 = ~uVar24 >> 0x1f;
            }
            dVar5 = (double)fVar51;
            if ((uVar14 == 0) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar13)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            *(double *)(local_480.Data + lVar22 * 0x10) = (double)fVar46;
            *(double *)(local_480.Data + lVar22 * 0x10 + 8) = dVar5;
            fVar46 = (param_1->DisplayDebugManager).CurrentPos.field0_0x0._s_0.X;
            dVar45 = auVar53._0_8_ - (double)fVar46;
            if ((double)CONCAT44((uint)((ulonglong)dVar45 >> 0x20) & uVar3,SUB84(dVar45,0) & uVar41)
                <= __real_3e45798ee2308c3a) {
              fVar46 = fVar46 + local_470[0];
              local_238._s_0.Z = 0.0;
              local_238._s_0.X = (double)fVar46;
              local_220._s_0.Z = 0.0;
              dVar45 = (double)(fVar46 - __real_40800000);
              local_238._s_0.Y = dVar5;
              local_220._s_0.X = dVar45;
              local_220._s_0.Y = dVar5;
              DrawDebugCanvas2DLine
                        (param_1,(TVector<double> *)&local_220._s_0,
                         (TVector<double> *)&local_238._s_0,(FLinearColor *)&local_408._s_0);
              local_1f0._s_0.Y = (double)auVar53._8_8_;
              local_208._s_0.Z = 0.0;
              local_1f0._s_0.Z = 0.0;
              local_208._s_0.X = dVar45;
              local_208._s_0.Y = dVar5;
              local_1f0._s_0.X = dVar45;
              DrawDebugCanvas2DLine
                        (param_1,(TVector<double> *)&local_1f0._s_0,
                         (TVector<double> *)&local_208._s_0,(FLinearColor *)&local_408._s_0);
            }
          }
          fVar51 = fVar51 + fVar52;
          iVar15 = local_478[0];
        }
        uVar24 = *(uint *)pFVar27;
        if (((int)uVar24 < 0) || (iVar15 <= (int)uVar24)) {
          iVar25 = (uVar24 - iVar15) + 1;
          iVar15 = UE::Core::Private::
                   ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x10,8,iVar25,&local_480,local_478,local_478 + 1);
          memset(local_480.Data + (longlong)iVar15 * 0x10,0,(longlong)iVar25 << 4);
          iVar15 = local_478[0];
        }
        uVar24 = *(uint *)pFVar27;
        fVar46 = (param_1->DisplayDebugManager).CurrentPos.field0_0x0._s_0.X;
        uVar14 = 0;
        if ((int)uVar24 < iVar15) {
          uVar14 = ~uVar24 >> 0x1f;
        }
        if ((uVar14 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        *(double *)(local_480.Data + (longlong)(int)uVar24 * 0x10) = (double)fVar46;
        *(double *)(local_480.Data + (longlong)(int)uVar24 * 0x10 + 8) = (double)fVar51;
        uVar24 = *(uint *)(pFVar27 + 4);
        pFVar17 = &local_1d0;
        if (pFVar27[8] == (FScriptContainerElement)0x0) {
          pFVar17 = &local_408;
        }
        plVar18 = &local_1c0;
        if (*(float *)(pFVar27 + -4) <= fVar44) {
          plVar18 = &local_318;
        }
        local_1c0 = *(longlong *)pFVar17;
        uStack_1b8 = *(undefined8 *)((longlong)pFVar17 + 8);
        lVar22 = plVar18[1];
        (param_1->DisplayDebugManager).DebugTextItem._padding_ = *plVar18;
        (param_1->DisplayDebugManager).DebugTextItem._padding_ = lVar22;
        FDisplayDebugManager::DrawString(this_03,(FString *)(pFVar27 + -0x14),local_470);
        iVar15 = local_478[0];
        cVar40 = local_4a0;
      }
      pFVar27 = pFVar27 + 0x20;
    }
    if (local_480.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_480.Data);
    }
    DestructItems<FNodeDebugData::FFlattenedDebugData,int>
              ((FFlattenedDebugData *)local_468.AllocatorInstance.Data,local_468.ArrayNum);
    if ((FFlattenedDebugData *)local_468.AllocatorInstance.Data != (FFlattenedDebugData *)0x0) {
      FMemory::Free(local_468.AllocatorInstance.Data);
    }
    DestructItems<FNodeDebugData,int>
              ((FNodeDebugData *)local_3d8.SaveCachePoseNodes.AllocatorInstance.Data,
               local_3d8.SaveCachePoseNodes.ArrayNum);
    if ((FNodeDebugData *)local_3d8.SaveCachePoseNodes.AllocatorInstance.Data !=
        (FNodeDebugData *)0x0) {
      FMemory::Free(local_3d8.SaveCachePoseNodes.AllocatorInstance.Data);
    }
    if (local_3d8.NodeDescription.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3d8.NodeDescription.Data.AllocatorInstance.Data);
    }
    DestructItems<FNodeDebugData::DebugItem,int>
              ((DebugItem *)local_3d8.NodeChain.AllocatorInstance.Data,local_3d8.NodeChain.ArrayNum)
    ;
    if ((DebugItem *)local_3d8.NodeChain.AllocatorInstance.Data != (DebugItem *)0x0) {
      FMemory::Free(local_3d8.NodeChain.AllocatorInstance.Data);
    }
    local_4a8 = local_4a8 + __real_c0800000;
    fVar44 = __real_40800000;
    auVar53 = local_268;
    cVar42 = local_4a4;
  }
  fVar6 = __real_c0800000;
  if (cVar42 == '\0') {
    uVar47 = local_3e8._s_0.R;
    uVar48 = local_3e8._s_0.G;
    uVar49 = local_3e8._s_0.B;
    uVar50 = local_3e8._s_0.A;
  }
  else {
    local_4a8 = local_4a8 + fVar44;
    pFVar16 = GetProxyOnGameThread<FAnimInstanceProxy>(this);
    iVar15 = 1 - (pFVar16->Sync).SyncGroupWriteIndex;
    pTVar39 = (pFVar16->Sync).SyncGroupMaps + iVar15;
    pFVar19 = GetProxyOnGameThread<FAnimInstanceProxy>(this);
    local_378 = (pFVar19->Sync).UngroupedActivePlayerArrays +
                (1 - (pFVar19->Sync).SyncGroupWriteIndex);
    ::FString::PrintfImpl(&local_440,L"SyncGroups: %i");
    if (local_498.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_498.Data.AllocatorInstance.Data);
    }
    local_498.Data.AllocatorInstance.Data = local_440.Data.AllocatorInstance.Data;
    local_498.Data.ArrayNum = local_440.Data.ArrayNum;
    local_498.Data.ArrayMax = local_440.Data.ArrayMax;
    local_440.Data.ArrayNum = 0;
    local_440.Data.ArrayMax = 0;
    local_440.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    FDisplayDebugManager::DrawString(this_03,&local_498,&local_4a8);
    local_338 = 0;
    iStack_350 = 0;
    local_348 = &(pFVar16->Sync).SyncGroupMaps[iVar15].field_0x10;
    iVar2 = *(int *)(local_348 + 0x18);
    uStack_34c = 1;
    iStack_33c = iStack_350;
    if (iVar2 != 0) {
      puVar36 = *(uint **)(local_348 + 0x10);
      if (*(uint **)(local_348 + 0x10) == (uint *)0x0) {
        puVar36 = (uint *)local_348;
      }
      uStack_34c = *puVar36;
      iStack_350 = 0;
      while (uStack_34c == 0) {
        lVar22 = (longlong)iStack_350;
        local_338 = local_338 + 0x20;
        iStack_350 = iStack_350 + 1;
        uStack_34c = 1;
        iStack_33c = iVar2;
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_350) goto LAB_14744793e;
        uStack_34c = puVar36[lVar22 + 1];
      }
      uStack_34c = -uStack_34c & uStack_34c;
      uVar28 = (ulonglong)uStack_34c * 2 + 1;
      lVar22 = 0x3f;
      if (uVar28 != 0) {
        for (; uVar28 >> lVar22 == 0; lVar22 = lVar22 + -1) {
        }
      }
      local_388 = (int)lVar22;
      iStack_33c = local_338 + -1 + local_388;
      if (iVar2 < iStack_33c) {
        iStack_33c = iVar2;
      }
    }
LAB_14744793e:
    uStack_334 = local_dc;
    iStack_330 = *(int *)&(pFVar16->Sync).SyncGroupMaps[iVar15].field_0x8 -
                 *(int *)&(pFVar16->Sync).SyncGroupMaps[iVar15].field_0x34;
    uVar24 = *(uint *)&(pFVar16->Sync).SyncGroupMaps[iVar15].field_0x28;
    uStack_340 = 0xffffffff;
    uStack_290 = 0xffffffff;
    auStack_2a0._8_8_ = local_348;
    uStack_28c = iStack_33c;
    puVar43 = &(pFVar16->Sync).SyncGroupMaps[iVar15].field_0x10;
    auStack_2a0._0_8_ = CONCAT44(uStack_34c,iStack_350);
    uVar41 = uVar24 & 0xffffffe0;
    iVar15 = (int)uVar24 >> 5;
    local_288._4_4_ = local_dc;
    local_288._0_4_ = local_338;
    uStack_280 = CONCAT44(uStack_32c,iStack_330);
    local_358 = pTVar39;
    local_2a8 = pTVar39;
    if (((int)uVar24 < 0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("StartIndex >= 0 && StartIndex <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x7af,L""), bVar13)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    uVar8 = uStack_310;
    lVar22 = local_318;
    uVar3 = *(uint *)(puVar43 + 0x18);
    if (uVar24 != uVar3) {
      puVar35 = puVar43;
      if (*(undefined1 **)(puVar43 + 0x10) != (undefined1 *)0x0) {
        puVar35 = *(undefined1 **)(puVar43 + 0x10);
      }
      uVar24 = -1 << ((byte)uVar24 & 0x1f) & *(uint *)(puVar35 + (longlong)iVar15 * 4);
      while (uVar24 == 0) {
        lVar23 = (longlong)iVar15;
        uVar41 = uVar41 + 0x20;
        iVar15 = iVar15 + 1;
        uVar24 = uVar3;
        if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar15)
        goto LAB_147447a7f;
        uVar24 = *(uint *)(puVar35 + lVar23 * 4 + 4);
      }
      uVar28 = (ulonglong)(-uVar24 & uVar24) * 2 + 1;
      lVar23 = 0x3f;
      if (uVar28 != 0) {
        for (; uVar28 >> lVar23 == 0; lVar23 = lVar23 + -1) {
        }
      }
      local_384 = (int)lVar23;
      uVar24 = local_384 + -1 + uVar41;
      if ((int)uVar3 < (int)uVar24) {
        uVar24 = uVar3;
      }
    }
LAB_147447a7f:
    uVar47 = local_3e8._s_0.R;
    uVar48 = local_3e8._s_0.G;
    uVar49 = local_3e8._s_0.B;
    uVar50 = local_3e8._s_0.A;
    while( true ) {
      pTVar11 = local_2a8;
      if (*(int *)&local_2a8->field_0x8 - *(int *)&local_2a8->field_0x34 != (int)uStack_280) {
        local_487[0] = 0;
        `TSparseArray<TSparseSetElement<TTuple<FName,FAnimGroupInstance>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_487);
      }
      pTVar10 = local_378;
      if (((uStack_28c == uVar24) && ((undefined1 *)auStack_2a0._8_8_ == puVar43)) &&
         (pTVar11 == pTVar39)) break;
      lVar23 = *(longlong *)pTVar11;
      local_4a8 = local_4a8 + fVar44;
      (param_1->DisplayDebugManager).DebugTextItem._padding_ = auVar53._0_8_;
      (param_1->DisplayDebugManager).DebugTextItem._padding_ = auVar53._8_8_;
      pFVar26 = (FName *)(lVar23 + (longlong)(int)uStack_28c * 0x88);
      ::FName::ToString(pFVar26,&local_1b0);
      ::FString::PrintfImpl(&local_248,L"Group %s - Players %i");
      if (local_1b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1b0.Data.AllocatorInstance.Data);
      }
      FDisplayDebugManager::DrawString(this_03,&local_248,&local_4a8);
      if (0 < (int)pFVar26[2].ComparisonIndex.Value) {
        if ((pFVar26[3].ComparisonIndex.Value == 0xffffffff) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("SyncGroup.GroupLeaderIndex != -1",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimInstance.cpp"
                                ,0x513,L""), bVar13)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        local_198._0_8_ = lVar22;
        local_198._8_8_ = uVar8;
        local_188[0]._0_8_ = local_408._0_8_;
        local_188[0]._8_8_ = local_408._8_8_;
        local_108[0]._s_0.R = uVar47;
        local_108[0]._s_0.G = uVar48;
        local_108[0]._s_0.B = uVar49;
        local_108[0]._s_0.A = uVar50;
        OutputTickRecords((TArray<FAnimTickRecord,TSizedDefaultAllocator<32>_> *)(pFVar26 + 1),
                          param_1,local_4a8,pFVar26[3].ComparisonIndex.Value,
                          (FLinearColor *)&local_108[0]._s_0,(FLinearColor *)&local_188[0]._s_0,
                          (FLinearColor *)&local_198._s_0,this_03,local_res18);
      }
      if (local_248.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_248.Data.AllocatorInstance.Data);
      }
      local_4a8 = local_4a8 + fVar6;
      uStack_290 = uStack_290 & ~auStack_2a0._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_2a0);
    }
    (param_1->DisplayDebugManager).DebugTextItem._padding_ = auVar53._0_8_;
    (param_1->DisplayDebugManager).DebugTextItem._padding_ = auVar53._8_8_;
    ::FString::PrintfImpl(&local_430,L"Ungrouped: %i");
    if (local_498.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_498.Data.AllocatorInstance.Data);
    }
    local_498.Data.AllocatorInstance.Data = local_430.Data.AllocatorInstance.Data;
    local_498.Data.ArrayNum = local_430.Data.ArrayNum;
    local_498.Data.ArrayMax = local_430.Data.ArrayMax;
    local_430.Data.ArrayNum = 0;
    local_430.Data.ArrayMax = 0;
    local_430.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    FDisplayDebugManager::DrawString(this_03,&local_498,&local_4a8);
    *(undefined4 *)&(param_1->DisplayDebugManager).DebugTextItem._padding_ = uVar47;
    *(undefined4 *)((longlong)&(param_1->DisplayDebugManager).DebugTextItem._padding_ + 4) = uVar48;
    *(undefined4 *)&(param_1->DisplayDebugManager).DebugTextItem._padding_ = uVar49;
    *(undefined4 *)((longlong)&(param_1->DisplayDebugManager).DebugTextItem._padding_ + 4) = uVar50;
    local_168._0_8_ = lVar22;
    local_168._8_8_ = uVar8;
    local_158._0_8_ = local_408._0_8_;
    local_158._8_8_ = local_408._8_8_;
    local_148._s_0.R = (float)uVar47;
    local_148._s_0.G = (float)uVar48;
    local_148._s_0.B = (float)uVar49;
    local_148._s_0.A = (float)uVar50;
    OutputTickRecords(pTVar10,param_1,local_4a8,-1,(FLinearColor *)&local_148._s_0,
                      (FLinearColor *)&local_158._s_0,(FLinearColor *)&local_168._s_0,this_03,
                      local_res18);
    local_4a8 = local_4a8 + fVar6;
  }
  uVar28 = 0;
  if (local_4a3 != '\0') {
    (param_1->DisplayDebugManager).DebugTextItem._padding_ = auVar53._0_8_;
    (param_1->DisplayDebugManager).DebugTextItem._padding_ = auVar53._8_8_;
    ::FString::PrintfImpl(&local_420,L"Montages: %i");
    if (local_498.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_498.Data.AllocatorInstance.Data);
    }
    local_498.Data.AllocatorInstance.Data = local_420.Data.AllocatorInstance.Data;
    local_498.Data.ArrayNum = local_420.Data.ArrayNum;
    local_498.Data.ArrayMax = local_420.Data.ArrayMax;
    local_420.Data.ArrayNum = 0;
    local_420.Data.ArrayMax = 0;
    local_420.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    FDisplayDebugManager::DrawString(this_03,&local_498,&local_4a8);
    uVar38 = uVar28;
    if (0 < (this->MontageInstances).ArrayNum) {
      do {
        uVar41 = (uint)uVar28;
        local_4a8 = local_4a8 + fVar44;
        uVar24 = 0;
        if ((int)uVar41 < (this->MontageInstances).ArrayNum) {
          uVar24 = ~uVar41 >> 0x1f;
        }
        if ((uVar24 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        this_00 = *(FAnimMontageInstance **)
                   ((this->MontageInstances).AllocatorInstance.Data + uVar38);
        if ((this_00 != (FAnimMontageInstance *)0x0) &&
           ((this_00->Montage).field0_0x0.DebugPtr != (UAnimMontage *)0x0)) {
          pFVar17 = &local_408;
          if ((this_00->Blend).DesiredValue == 0.0) {
            pFVar17 = &local_3e8;
          }
          lVar22 = *(longlong *)((longlong)pFVar17 + 8);
          (param_1->DisplayDebugManager).DebugTextItem._padding_ = *(longlong *)pFVar17;
          (param_1->DisplayDebugManager).DebugTextItem._padding_ = lVar22;
          FVar20 = FAnimMontageInstance::GetNextSection(this_00);
          ::FName::ToString((FName *)FVar20,&local_128);
          FVar20 = FAnimMontageInstance::GetCurrentSection(this_00);
          ::FName::ToString((FName *)FVar20,&local_138);
          local_370 = (FName)((this_00->Montage).field0_0x0.DebugPtr)->_padding_;
          ::FName::ToString(&local_370,&local_308);
          ::FString::PrintfImpl(&local_278,L"%i) %s CurrSec: %s NextSec: %s W:%.2f DW:%.2f");
          if (local_308.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_308.Data.AllocatorInstance.Data);
          }
          if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_138.Data.AllocatorInstance.Data);
          }
          if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_128.Data.AllocatorInstance.Data);
          }
          FDisplayDebugManager::DrawString(this_03,&local_278,&local_4a8);
          if (local_278.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_278.Data.AllocatorInstance.Data);
          }
        }
        uVar28 = (ulonglong)(uVar41 + 1);
        local_4a8 = local_4a8 + fVar6;
        uVar38 = uVar38 + 8;
      } while ((int)(uVar41 + 1) < (this->MontageInstances).ArrayNum);
      uVar47 = local_3e8._s_0.R;
      uVar48 = local_3e8._s_0.G;
      uVar49 = local_3e8._s_0.B;
      uVar50 = local_3e8._s_0.A;
      auVar53 = local_268;
    }
  }
  uVar28 = 0;
  if (local_4a2 != '\0') {
    (param_1->DisplayDebugManager).DebugTextItem._padding_ = auVar53._0_8_;
    (param_1->DisplayDebugManager).DebugTextItem._padding_ = auVar53._8_8_;
    ::FString::PrintfImpl(&local_3f8,L"Active Notify States: %i");
    if (local_498.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_498.Data.AllocatorInstance.Data);
    }
    local_498.Data.AllocatorInstance.Data = local_3f8.Data.AllocatorInstance.Data;
    local_498.Data.ArrayNum = local_3f8.Data.ArrayNum;
    local_498.Data.ArrayMax = local_3f8.Data.ArrayMax;
    local_3f8.Data.ArrayNum = 0;
    local_3f8.Data.ArrayMax = 0;
    local_3f8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    FDisplayDebugManager::DrawString(this_03,&local_498,&local_4a8);
    *(undefined4 *)&(param_1->DisplayDebugManager).DebugTextItem._padding_ = uVar47;
    *(undefined4 *)((longlong)&(param_1->DisplayDebugManager).DebugTextItem._padding_ + 4) = uVar48;
    *(undefined4 *)&(param_1->DisplayDebugManager).DebugTextItem._padding_ = uVar49;
    *(undefined4 *)((longlong)&(param_1->DisplayDebugManager).DebugTextItem._padding_ + 4) = uVar50;
    uVar38 = uVar28;
    if (0 < (this->ActiveAnimNotifyState).ArrayNum) {
      do {
        local_4a8 = local_4a8 + fVar44;
        uVar41 = (uint)uVar28;
        uVar24 = 0;
        if ((int)uVar41 < (this->ActiveAnimNotifyState).ArrayNum) {
          uVar24 = ~uVar41 >> 0x1f;
        }
        if ((uVar24 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        this_02 = (FAnimNotifyEvent *)
                  ((this->ActiveAnimNotifyState).AllocatorInstance.Data + uVar38);
        FAnimNotifyEvent::GetDuration(this_02);
        local_368 = (FName)((this_02->NotifyStateClass).field0_0x0.DebugPtr)->_padding_;
        ::FName::ToString(&local_368,&local_2f8);
        ::FName::ToString(&this_02->NotifyName,&local_118);
        ::FString::PrintfImpl(&local_258,L"%i) %s Class: %s Dur:%.3f");
        if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_118.Data.AllocatorInstance.Data);
        }
        if (local_2f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_2f8.Data.AllocatorInstance.Data);
        }
        FDisplayDebugManager::DrawString(this_03,&local_258,&local_4a8);
        if (local_258.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_258.Data.AllocatorInstance.Data);
        }
        uVar28 = (ulonglong)(uVar41 + 1);
        local_4a8 = local_4a8 + fVar6;
        uVar38 = uVar38 + 0xb8;
      } while ((int)(uVar41 + 1) < (this->ActiveAnimNotifyState).ArrayNum);
      uVar47 = local_3e8._s_0.R;
      uVar48 = local_3e8._s_0.G;
      uVar49 = local_3e8._s_0.B;
      uVar50 = local_3e8._s_0.A;
    }
  }
  if (local_4a1 != '\0') {
    (param_1->DisplayDebugManager).DebugTextItem._padding_ = auVar53._0_8_;
    (param_1->DisplayDebugManager).DebugTextItem._padding_ = auVar53._8_8_;
    ::FString::PrintfImpl(&local_2e8,L"Curves");
    if (local_498.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_498.Data.AllocatorInstance.Data);
    }
    local_498.Data.AllocatorInstance.Data = local_2e8.Data.AllocatorInstance.Data;
    local_498.Data.ArrayNum = local_2e8.Data.ArrayNum;
    local_498.Data.ArrayMax = local_2e8.Data.ArrayMax;
    FDisplayDebugManager::DrawString(this_03,&local_498,&local_4a8);
    pFVar16 = local_360;
    local_4a8 = local_4a8 + fVar44;
    ::FString::PrintfImpl(&local_2d8,L"Morph Curves: %i");
    if (local_498.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_498.Data.AllocatorInstance.Data);
    }
    local_498.Data.AllocatorInstance.Data = local_2d8.Data.AllocatorInstance.Data;
    local_498.Data.ArrayNum = local_2d8.Data.ArrayNum;
    local_498.Data.ArrayMax = local_2d8.Data.ArrayMax;
    FDisplayDebugManager::DrawString(this_03,&local_498,&local_4a8);
    local_4a8 = local_4a8 + fVar44;
    *(undefined4 *)&(param_1->DisplayDebugManager).DebugTextItem._padding_ = uVar47;
    *(undefined4 *)((longlong)&(param_1->DisplayDebugManager).DebugTextItem._padding_ + 4) = uVar48;
    *(undefined4 *)&(param_1->DisplayDebugManager).DebugTextItem._padding_ = uVar49;
    *(undefined4 *)((longlong)&(param_1->DisplayDebugManager).DebugTextItem._padding_ + 4) = uVar50;
    OutputCurveMap(pFVar16->AnimationCurves + 2,param_1,this_03,local_4a8);
    (param_1->DisplayDebugManager).DebugTextItem._padding_ = auVar53._0_8_;
    (param_1->DisplayDebugManager).DebugTextItem._padding_ = auVar53._8_8_;
    local_4a8 = local_4a8 + fVar6;
    ::FString::PrintfImpl(&local_2c8,L"Material Curves: %i");
    if (local_498.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_498.Data.AllocatorInstance.Data);
    }
    local_498.Data.AllocatorInstance.Data = local_2c8.Data.AllocatorInstance.Data;
    local_498.Data.ArrayNum = local_2c8.Data.ArrayNum;
    local_498.Data.ArrayMax = local_2c8.Data.ArrayMax;
    FDisplayDebugManager::DrawString(this_03,&local_498,&local_4a8);
    local_4a8 = local_4a8 + fVar44;
    *(undefined4 *)&(param_1->DisplayDebugManager).DebugTextItem._padding_ = uVar47;
    *(undefined4 *)((longlong)&(param_1->DisplayDebugManager).DebugTextItem._padding_ + 4) = uVar48;
    *(undefined4 *)&(param_1->DisplayDebugManager).DebugTextItem._padding_ = uVar49;
    *(undefined4 *)((longlong)&(param_1->DisplayDebugManager).DebugTextItem._padding_ + 4) = uVar50;
    OutputCurveMap(pFVar16->AnimationCurves + 1,param_1,this_03,local_4a8);
    (param_1->DisplayDebugManager).DebugTextItem._padding_ = auVar53._0_8_;
    (param_1->DisplayDebugManager).DebugTextItem._padding_ = auVar53._8_8_;
    local_4a8 = local_4a8 + fVar6;
    ::FString::PrintfImpl(&local_2b8,L"Event Curves: %i");
    if (local_498.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_498.Data.AllocatorInstance.Data);
    }
    local_498.Data.AllocatorInstance.Data = local_2b8.Data.AllocatorInstance.Data;
    local_498.Data.ArrayNum = local_2b8.Data.ArrayNum;
    local_498.Data.ArrayMax = local_2b8.Data.ArrayMax;
    FDisplayDebugManager::DrawString(this_03,&local_498,&local_4a8);
    local_4a8 = local_4a8 + fVar44;
    *(undefined4 *)&(param_1->DisplayDebugManager).DebugTextItem._padding_ = uVar47;
    *(undefined4 *)((longlong)&(param_1->DisplayDebugManager).DebugTextItem._padding_ + 4) = uVar48;
    *(undefined4 *)&(param_1->DisplayDebugManager).DebugTextItem._padding_ = uVar49;
    *(undefined4 *)((longlong)&(param_1->DisplayDebugManager).DebugTextItem._padding_ + 4) = uVar50;
    OutputCurveMap(pFVar16->AnimationCurves,param_1,this_03,local_4a8);
    local_4a8 = (local_4a8 - fVar44) - fVar44;
  }
  if (local_498.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_498.Data.AllocatorInstance.Data);
  }
  return;
}

// DisplayDebugInstance @ 147448650

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
UAnimInstance::DisplayDebugInstance
          (UAnimInstance *this,FDisplayDebugManager *param_1,float *param_2)

{
  bool bVar1;
  USkeletalMeshComponent *this_00;
  FString local_28;
  FString local_18;
  
  *(FLinearColor_u_0 *)&(param_1->DebugTextItem)._padding_ =
       (FLinearColor_u_0_s_0)FLinearColor::Green.field0_0x0;
  this_00 = GetSkelMeshComponent(this);
  if (this_00 != (USkeletalMeshComponent *)0x0) {
    GetProxyOnGameThread<FAnimInstanceProxy>(this);
    ::FString::PrintfImpl
              (&local_28,
               L"LOD(%d/%d) UpdateCounter(%d) EvalCounter(%d) CacheBoneCounter(%d) InitCounter(%d) DeltaSeconds(%.3f)"
              );
    FDisplayDebugManager::DrawString(param_1,&local_28,param_2);
    bVar1 = USkinnedMeshComponent::ShouldUseUpdateRateOptimizations
                      ((USkinnedMeshComponent *)this_00);
    if ((bVar1) && (this_00->_padding_ != 0)) {
      ::FString::PrintfImpl(&local_18,L"URO Rate(%d) SkipUpdate(%d) SkipEval(%d) Interp(%d)");
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
      local_28.Data.AllocatorInstance.Data = local_18.Data.AllocatorInstance.Data;
      local_28.Data.ArrayNum = local_18.Data.ArrayNum;
      local_28.Data.ArrayMax = local_18.Data.ArrayMax;
      FDisplayDebugManager::DrawString(param_1,&local_28,param_2);
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// DynamicMontage_IsPlayingFrom @ 147448800

/* WARNING: Type propagation algorithm not settling */

bool __thiscall
UAnimInstance::DynamicMontage_IsPlayingFrom(UAnimInstance *this,UAnimSequenceBase *param_1)

{
  ulonglong uVar1;
  undefined1 *puVar2;
  int iVar3;
  FAnimMontageInstance *pFVar4;
  undefined1 *puVar5;
  longlong lVar6;
  longlong *plVar7;
  code *pcVar8;
  bool bVar9;
  undefined1 uVar10;
  uint uVar11;
  int iVar12;
  UClass *pUVar13;
  FAnimMontageInstance **ppFVar14;
  longlong lVar15;
  UAnimSequenceBase *pUVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  undefined1 *puVar20;
  int iVar21;
  uint *puVar22;
  undefined1 local_res10 [8];
  int local_res18;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  if (param_1 != (UAnimSequenceBase *)0x0) {
    pUVar13 = Z_Construct_UClass_UAnimMontage_NoRegister();
    iVar3 = (int)pUVar13->_padding_;
    if ((*(int *)(param_1->_padding_ + 0x38) < iVar3) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar3 * 8)
        != &pUVar13->_padding_)) {
      iVar19 = 0;
      uVar11 = 1;
      iVar3 = *(int *)&(this->ActiveMontagesMap).field_0x28;
      puVar2 = &(this->ActiveMontagesMap).field_0x10;
      iVar21 = 0;
      iVar12 = 0;
      if (iVar3 != 0) {
        puVar22 = *(uint **)&(this->ActiveMontagesMap).field_0x20;
        if (puVar22 == (uint *)0x0) {
          puVar22 = (uint *)puVar2;
        }
        uVar18 = *puVar22;
        while (uVar18 == 0) {
          iVar19 = iVar19 + 1;
          iVar21 = iVar21 + 0x20;
          iVar12 = iVar3;
          if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar19) goto LAB_14744891b;
          uVar18 = puVar22[iVar19];
        }
        uVar11 = -uVar18 & uVar18;
        uVar1 = (ulonglong)uVar11 * 2 + 1;
        lVar15 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar15 == 0; lVar15 = lVar15 + -1) {
          }
        }
        local_res18 = (int)lVar15;
        iVar12 = local_res18 + -1 + iVar21;
        if (iVar3 < iVar12) {
          iVar12 = iVar3;
        }
      }
LAB_14744891b:
      uVar18 = *(uint *)&(this->ActiveMontagesMap).field_0x28;
      uVar17 = uVar18 & 0xffffffe0;
      TStack_60._padding_ = CONCAT44(uVar11,iVar19);
      TStack_60.CurrentBitIndex = iVar12;
      TStack_60.UnvisitedBitMask = 0xffffffff;
      iVar19 = (int)uVar18 >> 5;
      TStack_60._28_4_ = iVar12;
      TStack_60.BaseBitIndex = iVar21;
      uStack_40 = CONCAT44(uStack_6c,
                           *(int *)&(this->ActiveMontagesMap).field_0x8 -
                           *(int *)&(this->ActiveMontagesMap).field_0x34);
      TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
      if ((((int)uVar18 < 0) || (iVar3 < (int)uVar18)) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("StartIndex >= 0 && StartIndex <= Array.Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x7af,L""), bVar9)) {
        pcVar8 = (code *)swi(3);
        uVar10 = (*pcVar8)();
        return (bool)uVar10;
      }
      uVar11 = *(uint *)&(this->ActiveMontagesMap).field_0x28;
      if (uVar18 != uVar11) {
        puVar5 = *(undefined1 **)&(this->ActiveMontagesMap).field_0x20;
        puVar20 = puVar2;
        if (puVar5 != (undefined1 *)0x0) {
          puVar20 = puVar5;
        }
        uVar18 = -1 << ((byte)uVar18 & 0x1f) & *(uint *)(puVar20 + (longlong)iVar19 * 4);
        while (uVar18 == 0) {
          iVar19 = iVar19 + 1;
          uVar17 = uVar17 + 0x20;
          uVar18 = uVar11;
          if ((int)(((int)(uVar11 - 1) >> 0x1f & 0x1fU) + (uVar11 - 1)) >> 5 < iVar19)
          goto LAB_147448a20;
          uVar18 = *(uint *)(puVar20 + (longlong)iVar19 * 4);
        }
        uVar1 = (ulonglong)(-uVar18 & uVar18) * 2 + 1;
        lVar15 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar15 == 0; lVar15 = lVar15 + -1) {
          }
        }
        uVar18 = (int)lVar15 + -1 + uVar17;
        if ((int)uVar11 < (int)uVar18) {
          uVar18 = uVar11;
        }
      }
LAB_147448a20:
      while( true ) {
        if (*(int *)&(this->ActiveMontagesMap).field_0x8 -
            *(int *)&(this->ActiveMontagesMap).field_0x34 != (int)uStack_40) {
          `TSparseArray<TSparseSetElement<TTuple<UAnimMontage_*,FAnimMontageInstance_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
        }
        lVar15 = (longlong)TStack_60.CurrentBitIndex;
        if ((TStack_60.CurrentBitIndex == uVar18) &&
           (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) {
          return false;
        }
        lVar6 = *(longlong *)&this->ActiveMontagesMap;
        bVar9 = UAnimMontage::IsDynamicMontage(*(UAnimMontage **)(lVar6 + lVar15 * 0x18));
        if ((bVar9) &&
           (pUVar16 = UAnimMontage::GetFirstAnimReference(*(UAnimMontage **)(lVar6 + lVar15 * 0x18))
           , pUVar16 == param_1)) break;
        TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
      }
      plVar7 = *(longlong **)(lVar6 + 8 + lVar15 * 0x18);
      if (*plVar7 == 0) {
        return false;
      }
      if ((char)plVar7[0xd] == '\0') {
        return false;
      }
      return true;
    }
    ppFVar14 = TMapBase<UAnimMontage_*,FAnimMontageInstance_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UAnimMontage_*,FAnimMontageInstance_*,0>_>
               ::Find((TMapBase<UAnimMontage_*,FAnimMontageInstance_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UAnimMontage_*,FAnimMontageInstance_*,0>_>
                       *)&this->ActiveMontagesMap,(UAnimMontage *)param_1);
    if ((((ppFVar14 != (FAnimMontageInstance **)0x0) &&
         (pFVar4 = *ppFVar14, pFVar4 != (FAnimMontageInstance *)0x0)) &&
        ((pFVar4->Montage).field0_0x0.DebugPtr != (UAnimMontage *)0x0)) &&
       (pFVar4->bPlaying != false)) {
      return true;
    }
  }
  return false;
}

// EndNotifyStates @ 147449100

void __thiscall UAnimInstance::EndNotifyStates(UAnimInstance *this)

{
  int *piVar1;
  TArray<FAnimNotifyEvent,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  UAnimNotifyState *pUVar4;
  FScriptContainerElement *pFVar5;
  FAnimNotifyEventReference *pFVar6;
  code *pcVar7;
  bool bVar8;
  uint uVar9;
  USkeletalMeshComponent *pUVar10;
  UClass *pUVar11;
  uint uVar12;
  FAnimNotifyEvent *pFVar13;
  longlong lVar14;
  longlong lVar15;
  
  pUVar10 = GetSkelMeshComponent(this);
  uVar12 = 0;
  pTVar2 = &this->ActiveAnimNotifyState;
  if (0 < (this->ActiveAnimNotifyState).ArrayNum) {
    lVar15 = 0;
    do {
      uVar9 = 0;
      if ((int)uVar12 < (this->ActiveAnimNotifyState).ArrayNum) {
        uVar9 = ~uVar12 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pFVar13 = (FAnimNotifyEvent *)((pTVar2->AllocatorInstance).Data + lVar15);
      uVar9 = 0;
      if ((int)uVar12 < (this->ActiveAnimNotifyEventReference).ArrayNum) {
        uVar9 = ~uVar12 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pUVar4 = (pFVar13->NotifyStateClass).field0_0x0.DebugPtr;
      pFVar5 = (this->ActiveAnimNotifyEventReference).AllocatorInstance.Data;
      if (pUVar4 != (UAnimNotifyState *)0x0) {
        FAnimTrace::OutputAnimNotify(this,pFVar13,End);
        lVar14 = pUVar4->_padding_;
        pcVar7 = *(code **)(pUVar4->_padding_ + 0x2e0);
        if (lVar14 == 0) {
LAB_147449249:
          lVar14 = 0;
        }
        else {
          pUVar11 = Z_Construct_UClass_UAnimSequenceBase_NoRegister();
          iVar3 = (int)pUVar11->_padding_;
          if ((*(int *)(*(longlong *)(lVar14 + 0x10) + 0x38) < iVar3) ||
             ((longlong *)
              *(undefined1 **)
               (*(longlong *)(*(longlong *)(lVar14 + 0x10) + 0x30) + (longlong)iVar3 * 8) !=
              &pUVar11->_padding_)) goto LAB_147449249;
        }
        (*pcVar7)(pUVar4,pUVar10,lVar14,pFVar5 + (longlong)(int)uVar12 * 0x30);
      }
      uVar12 = uVar12 + 1;
      lVar15 = lVar15 + 0xb8;
    } while ((int)uVar12 < (this->ActiveAnimNotifyState).ArrayNum);
  }
  piVar1 = &(this->ActiveAnimNotifyState).ArrayMax;
  pFVar13 = (FAnimNotifyEvent *)(pTVar2->AllocatorInstance).Data;
  iVar3 = (this->ActiveAnimNotifyState).ArrayNum;
  if ((this->ActiveAnimNotifyState).ArrayMax < 0) {
    DestructItems<FAnimNotifyEvent,int>(pFVar13,iVar3);
    (this->ActiveAnimNotifyState).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xb8,8,0,&pTVar2->AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<FAnimNotifyEvent,int>(pFVar13,iVar3);
    (this->ActiveAnimNotifyState).ArrayNum = 0;
  }
  piVar1 = &(this->ActiveAnimNotifyEventReference).ArrayMax;
  pFVar6 = (FAnimNotifyEventReference *)
           (this->ActiveAnimNotifyEventReference).AllocatorInstance.Data;
  iVar3 = (this->ActiveAnimNotifyEventReference).ArrayNum;
  if ((this->ActiveAnimNotifyEventReference).ArrayMax < 0) {
    DestructItems<FAnimNotifyEventReference,int>(pFVar6,iVar3);
    (this->ActiveAnimNotifyEventReference).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x30,8,0,&(this->ActiveAnimNotifyEventReference).AllocatorInstance,0,piVar1);
    }
    return;
  }
  DestructItems<FAnimNotifyEventReference,int>(pFVar6,iVar3);
  (this->ActiveAnimNotifyEventReference).ArrayNum = 0;
  return;
}

// FindSubsystem @ 14744b120

FAnimSubsystemInstance * __thiscall
UAnimInstance::FindSubsystem(UAnimInstance *this,UScriptStruct *param_1)

{
  IAnimClassInterface *pIVar1;
  FAnimSubsystemInstance *local_res8;
  FAnimSubsystemInstance **local_28;
  UScriptStruct *local_20;
  code *local_18;
  undefined8 **local_10;
  
  pIVar1 = IAnimClassInterface::GetFromClass(*(UClass **)&this->field_0x10);
  if (pIVar1 != (IAnimClassInterface *)0x0) {
    local_28 = &local_res8;
    local_res8 = (FAnimSubsystemInstance *)0x0;
    local_10 = &local_28;
    local_18 = UE::Core::Private::Function::
               TFunctionRefCaller<`UAnimInstance::FindSubsystem'::__l5::<lambda_1>,enum_EAnimSubsystemEnumeration,FAnimSubsystemInstanceContext_const_&>
               ::Call;
    local_20 = param_1;
    (**(code **)((longlong)*pIVar1 + 0xb0))(pIVar1,this,&local_18);
    return local_res8;
  }
  return (FAnimSubsystemInstance *)0x0;
}

// GatherDebugData @ 14744bc20

void __thiscall UAnimInstance::GatherDebugData(UAnimInstance *this,FNodeDebugData *param_1)

{
  FAnimInstanceProxy *this_00;
  
  this_00 = GetProxyOnGameThread<FAnimInstanceProxy>(this);
  FAnimInstanceProxy::GatherDebugData(this_00,param_1);
  return;
}

// GetActiveCurveNames @ 14744bee0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UAnimInstance::GetActiveCurveNames
          (UAnimInstance *this,EAnimCurveType param_1,
          TArray<FName,TSizedDefaultAllocator<32>_> *param_2)

{
  int iVar1;
  FAnimInstanceProxy *pFVar2;
  undefined1 auStackY_a8 [32];
  undefined1 local_78 [32];
  void *local_58;
  undefined4 local_50;
  uint local_4c;
  undefined4 local_48;
  undefined4 local_44;
  ForElementType<FSetElementId> local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_a8;
  local_78._0_8_ = (FScriptContainerElement *)0x0;
  local_78._8_8_ = 0;
  local_58 = (void *)0x0;
  local_50 = 0;
  local_44 = 0;
  local_38 = (ForElementType<FSetElementId>)0x0;
  local_30 = 0;
  local_4c = 0x80;
  local_48 = 0xffffffff;
  pFVar2 = GetProxyOnAnyThread<FAnimInstanceProxy>(this);
  TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>::
  Append<FDefaultSetAllocator>
            ((TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_> *)
             local_78,pFVar2->AnimationCurves + param_1);
  TMapBase<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>::
  GetKeys<TSizedDefaultAllocator<32>_>
            ((TMapBase<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>
              *)local_78,param_2);
  local_30 = 0;
  if (local_38 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_38);
  }
  iVar1 = SUB84(local_78._8_8_,4);
  local_78._8_8_ = local_78._8_8_ & 0xffffffff00000000;
  if (iVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x14,4,0,(ForAnyElementType *)local_78,0,(int *)(local_78 + 0xc));
  }
  local_48 = 0xffffffff;
  local_44 = 0;
  local_50 = 0;
  if (0x80 < local_4c) {
    local_4c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_78 + 0x10),0);
  }
  if (local_58 != (void *)0x0) {
    FMemory::Free(local_58);
  }
  if ((FScriptContainerElement *)local_78._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_78._0_8_);
  }
  return;
}

// GetActiveInstanceForMontage @ 14744c010

FAnimMontageInstance * __thiscall
UAnimInstance::GetActiveInstanceForMontage(UAnimInstance *this,UAnimMontage *param_1)

{
  FAnimMontageInstance **ppFVar1;
  
  ppFVar1 = TMapBase<UAnimMontage_*,FAnimMontageInstance_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UAnimMontage_*,FAnimMontageInstance_*,0>_>
            ::Find((TMapBase<UAnimMontage_*,FAnimMontageInstance_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UAnimMontage_*,FAnimMontageInstance_*,0>_>
                    *)&this->ActiveMontagesMap,param_1);
  if (ppFVar1 != (FAnimMontageInstance **)0x0) {
    return *ppFVar1;
  }
  return (FAnimMontageInstance *)0x0;
}

// GetActiveMontageInstance @ 14744c120

FAnimMontageInstance * __thiscall UAnimInstance::GetActiveMontageInstance(UAnimInstance *this)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FAnimMontageInstance *pFVar4;
  uint uVar5;
  longlong lVar6;
  
  uVar5 = (this->MontageInstances).ArrayNum - 1;
  if (-1 < (int)uVar5) {
    lVar6 = (longlong)(int)uVar5 * 8;
    do {
      uVar3 = 0;
      if ((int)uVar5 < (this->MontageInstances).ArrayNum) {
        uVar3 = ~uVar5 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FAnimMontageInstance *)(*pcVar1)();
        return pFVar4;
      }
      pFVar4 = *(FAnimMontageInstance **)((this->MontageInstances).AllocatorInstance.Data + lVar6);
      if (((pFVar4 != (FAnimMontageInstance *)0x0) &&
          ((pFVar4->Montage).field0_0x0.DebugPtr != (UAnimMontage *)0x0)) &&
         ((pFVar4->Blend).DesiredValue != 0.0)) {
        return pFVar4;
      }
      lVar6 = lVar6 + -8;
      uVar5 = uVar5 - 1;
    } while (-1 < (int)uVar5);
  }
  return (FAnimMontageInstance *)0x0;
}

// GetAllCurveNames @ 14744c210

void __thiscall
UAnimInstance::GetAllCurveNames
          (UAnimInstance *this,TArray<FName,TSizedDefaultAllocator<32>_> *param_1)

{
  GetActiveCurveNames(this,AttributeCurve,param_1);
  return;
}

// GetAnimationCurveList @ 14744c230

TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_> * __thiscall
UAnimInstance::GetAnimationCurveList(UAnimInstance *this,EAnimCurveType param_1)

{
  FAnimInstanceProxy *pFVar1;
  
  pFVar1 = GetProxyOnAnyThread<FAnimInstanceProxy>(this);
  return pFVar1->AnimationCurves + param_1;
}

// GetAnimationCurveList @ 14744c260

void __thiscall
UAnimInstance::GetAnimationCurveList
          (UAnimInstance *this,EAnimCurveType param_1,
          TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>
          *param_2)

{
  FAnimInstanceProxy *pFVar1;
  
  pFVar1 = GetProxyOnAnyThread<FAnimInstanceProxy>(this);
  TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>::
  Append<FDefaultSetAllocator>(param_2,pFVar1->AnimationCurves + param_1);
  return;
}

// GetAnimationCurves @ 14744c2a0

TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_> * __thiscall
UAnimInstance::GetAnimationCurves(UAnimInstance *this,EAnimCurveType param_1)

{
  USkeletalMeshComponent *this_00;
  UAnimInstance *pUVar1;
  FAnimInstanceProxy *pFVar2;
  undefined1 local_res10 [8];
  
  this_00 = GetSkelMeshComponent(this);
  if (this_00 != (USkeletalMeshComponent *)0x0) {
    pUVar1 = USkeletalMeshComponent::GetAnimInstance(this_00);
    if ((pUVar1 == this) &&
       ((this_00->ParallelAnimationEvaluationTask).Reference != (FBaseGraphTask *)0x0))
    goto LAB_14744c2e3;
  }
  `UAnimInstance::GetAnimationCurves'::__l2::<lambda_1>::operator()(local_res10);
LAB_14744c2e3:
  pFVar2 = GetProxyOnGameThread<FAnimInstanceProxy>(this);
  return pFVar2->AnimationCurves + param_1;
}

// GetBlendProfileByName @ 14744c610

UBlendProfile * __thiscall UAnimInstance::GetBlendProfileByName(UAnimInstance *this,FName param_1)

{
  USkeleton *this_00;
  UBlendProfile *pUVar1;
  FName local_res10 [3];
  
  this_00 = (this->CurrentSkeleton).field0_0x0.DebugPtr;
  if (this_00 != (USkeleton *)0x0) {
    local_res10[0] = param_1;
    pUVar1 = USkeleton::GetBlendProfile(this_00,local_res10);
    return pUVar1;
  }
  return (UBlendProfile *)0x0;
}

// GetCurrentActiveMontage @ 1474548b0

UAnimMontage * __thiscall UAnimInstance::GetCurrentActiveMontage(UAnimInstance *this)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  UAnimMontage *pUVar5;
  uint uVar6;
  longlong lVar7;
  
  uVar6 = (this->MontageInstances).ArrayNum - 1;
  if (-1 < (int)uVar6) {
    lVar7 = (longlong)(int)uVar6 * 8;
    do {
      uVar4 = 0;
      if ((int)uVar6 < (this->MontageInstances).ArrayNum) {
        uVar4 = ~uVar6 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        pUVar5 = (UAnimMontage *)(*pcVar2)();
        return pUVar5;
      }
      plVar1 = *(longlong **)((this->MontageInstances).AllocatorInstance.Data + lVar7);
      if (((plVar1 != (longlong *)0x0) && ((UAnimMontage *)*plVar1 != (UAnimMontage *)0x0)) &&
         (*(float *)(plVar1 + 0x34) != 0.0)) {
        return (UAnimMontage *)*plVar1;
      }
      lVar7 = lVar7 + -8;
      uVar6 = uVar6 - 1;
    } while (-1 < (int)uVar6);
  }
  return (UAnimMontage *)0x0;
}

// GetCurrentStateName @ 147454990

FName __thiscall UAnimInstance::GetCurrentStateName(UAnimInstance *this,int param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  IAnimClassInterface *pIVar4;
  longlong *plVar5;
  FName FVar6;
  FAnimNode_StateMachine *this_00;
  uint uVar7;
  uint in_register_00000014;
  uint uVar8;
  uint in_R8D;
  
  FVar6.Number = in_register_00000014;
  FVar6.ComparisonIndex.Value = param_1;
  pIVar4 = IAnimClassInterface::GetFromClass(*(UClass **)&this->field_0x10);
  if (((pIVar4 == (IAnimClassInterface *)0x0) ||
      (plVar5 = (longlong *)(**(code **)((longlong)*pIVar4 + 0x20))(), (int)in_R8D < 0)) ||
     (iVar1 = (int)plVar5[1], iVar1 <= (int)in_R8D)) {
    *(undefined8 *)FVar6 = 0;
    return FVar6;
  }
  uVar8 = ~in_R8D + iVar1;
  uVar7 = 0;
  if ((int)uVar8 < iVar1) {
    uVar7 = ~uVar8 >> 0x1f;
  }
  if ((uVar7 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    FVar6 = (FName)(*pcVar2)();
    return FVar6;
  }
  this_00 = FProperty::ContainerUObjectPtrToValuePtrInternal
                      (*(FProperty **)(*plVar5 + (longlong)(int)uVar8 * 8),(UObject *)this,0);
  FAnimNode_StateMachine::GetCurrentStateName(this_00);
  return FVar6;
}

// GetCurveValue @ 147454ce0

float __thiscall UAnimInstance::GetCurveValue(UAnimInstance *this,FName param_1)

{
  FAnimInstanceProxy *pFVar1;
  TTuple<FName,float> *pTVar2;
  float *pfVar3;
  
  pFVar1 = GetProxyOnAnyThread<FAnimInstanceProxy>(this);
  pTVar2 = TSet<TTuple<FName,float>,TDefaultMapHashableKeyFuncs<FName,float,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FName,float>,TDefaultMapHashableKeyFuncs<FName,float,0>,FDefaultSetAllocator>
                   *)pFVar1->AnimationCurves,param_1);
  pfVar3 = (float *)&pTVar2->field_0x8;
  if (pTVar2 == (TTuple<FName,float> *)0x0) {
    pfVar3 = (float *)0x0;
  }
  if (pfVar3 != (float *)0x0) {
    return *pfVar3;
  }
  return 0.0;
}

// GetCurveValue @ 147454d30

bool __thiscall UAnimInstance::GetCurveValue(UAnimInstance *this,FName param_1,float *param_2)

{
  FAnimInstanceProxy *pFVar1;
  TTuple<FName,float> *pTVar2;
  float *pfVar3;
  
  pFVar1 = GetProxyOnAnyThread<FAnimInstanceProxy>(this);
  pTVar2 = TSet<TTuple<FName,float>,TDefaultMapHashableKeyFuncs<FName,float,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FName,float>,TDefaultMapHashableKeyFuncs<FName,float,0>,FDefaultSetAllocator>
                   *)pFVar1->AnimationCurves,param_1);
  pfVar3 = (float *)&pTVar2->field_0x8;
  if (pTVar2 == (TTuple<FName,float> *)0x0) {
    pfVar3 = (float *)0x0;
  }
  if (pfVar3 != (float *)0x0) {
    *param_2 = *pfVar3;
    return true;
  }
  return false;
}

// GetCurveValueWithDefault @ 147454d90

bool __thiscall
UAnimInstance::GetCurveValueWithDefault
          (UAnimInstance *this,FName param_1,float param_2,float *param_3)

{
  FAnimInstanceProxy *pFVar1;
  TTuple<FName,float> *pTVar2;
  float *pfVar3;
  
  *param_3 = param_2;
  pFVar1 = GetProxyOnAnyThread<FAnimInstanceProxy>(this);
  pTVar2 = TSet<TTuple<FName,float>,TDefaultMapHashableKeyFuncs<FName,float,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FName,float>,TDefaultMapHashableKeyFuncs<FName,float,0>,FDefaultSetAllocator>
                   *)pFVar1->AnimationCurves,param_1);
  pfVar3 = (float *)&pTVar2->field_0x8;
  if (pTVar2 == (TTuple<FName,float> *)0x0) {
    pfVar3 = (float *)0x0;
  }
  if (pfVar3 != (float *)0x0) {
    *param_3 = *pfVar3;
    return true;
  }
  return false;
}

// GetDeltaSeconds @ 147454df0

float __thiscall UAnimInstance::GetDeltaSeconds(UAnimInstance *this)

{
  FAnimInstanceProxy *pFVar1;
  
  pFVar1 = GetProxyOnAnyThread<FAnimInstanceProxy>(this);
  return pFVar1->CurrentDeltaSeconds;
}

// GetInstanceAssetPlayerIndex @ 1474551c0

int __thiscall
UAnimInstance::GetInstanceAssetPlayerIndex
          (UAnimInstance *this,FName param_1,FName param_2,FName param_3)

{
  int iVar1;
  FAnimInstanceProxy *this_00;
  
  this_00 = GetProxyOnGameThread<FAnimInstanceProxy>(this);
  iVar1 = FAnimInstanceProxy::GetInstanceAssetPlayerIndex(this_00,param_1,param_2,param_3);
  return iVar1;
}

// GetInstanceAssetPlayerLength @ 147455270

float __thiscall UAnimInstance::GetInstanceAssetPlayerLength(UAnimInstance *this,int param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  FAnimInstanceProxy *this_00;
  UScriptStruct *pUVar1;
  FAnimNode_Base *pFVar2;
  float fVar3;
  
  this_00 = GetProxyOnAnyThread<FAnimInstanceProxy>(this);
  pUVar1 = FAnimNode_AssetPlayerBase::StaticStruct();
  pFVar2 = FAnimInstanceProxy::GetNodeFromIndexUntyped(this_00,param_1,pUVar1);
  if (pFVar2 != (FAnimNode_Base *)0x0) {
    UNRECOVERED_JUMPTABLE = *(code **)(pFVar2->_padding_ + 0xb8);
                    /* WARNING: Could not recover jumptable at 0x0001474552b2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    fVar3 = (float)(*UNRECOVERED_JUMPTABLE)(pFVar2,UNRECOVERED_JUMPTABLE);
    return fVar3;
  }
  return 0.0;
}

// GetInstanceAssetPlayerTime @ 147455330

float __thiscall UAnimInstance::GetInstanceAssetPlayerTime(UAnimInstance *this,int param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  FAnimInstanceProxy *this_00;
  UScriptStruct *pUVar1;
  FAnimNode_Base *pFVar2;
  float fVar3;
  
  this_00 = GetProxyOnAnyThread<FAnimInstanceProxy>(this);
  pUVar1 = FAnimNode_AssetPlayerBase::StaticStruct();
  pFVar2 = FAnimInstanceProxy::GetNodeFromIndexUntyped(this_00,param_1,pUVar1);
  if (pFVar2 != (FAnimNode_Base *)0x0) {
    UNRECOVERED_JUMPTABLE = *(code **)(pFVar2->_padding_ + 200);
                    /* WARNING: Could not recover jumptable at 0x000147455372. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    fVar3 = (float)(*UNRECOVERED_JUMPTABLE)(pFVar2,UNRECOVERED_JUMPTABLE);
    return fVar3;
  }
  return 0.0;
}

// GetInstanceAssetPlayerTimeFraction @ 147455420

float __thiscall UAnimInstance::GetInstanceAssetPlayerTimeFraction(UAnimInstance *this,int param_1)

{
  FAnimInstanceProxy *this_00;
  UScriptStruct *pUVar1;
  FAnimNode_Base *pFVar2;
  float fVar3;
  float fVar4;
  
  this_00 = GetProxyOnAnyThread<FAnimInstanceProxy>(this);
  pUVar1 = FAnimNode_AssetPlayerBase::StaticStruct();
  pFVar2 = FAnimInstanceProxy::GetNodeFromIndexUntyped(this_00,param_1,pUVar1);
  if (pFVar2 != (FAnimNode_Base *)0x0) {
    fVar3 = (float)(**(code **)(pFVar2->_padding_ + 0xb8))(pFVar2);
    if (0.0 < fVar3) {
      fVar4 = (float)(**(code **)(pFVar2->_padding_ + 200))(pFVar2);
      return fVar4 / fVar3;
    }
  }
  return 0.0;
}

// GetInstanceAssetPlayerTimeFromEnd @ 147455540

float __thiscall UAnimInstance::GetInstanceAssetPlayerTimeFromEnd(UAnimInstance *this,int param_1)

{
  code *pcVar1;
  FAnimInstanceProxy *this_00;
  UScriptStruct *pUVar2;
  FAnimNode_Base *pFVar3;
  float fVar4;
  float fVar5;
  
  this_00 = GetProxyOnAnyThread<FAnimInstanceProxy>(this);
  pUVar2 = FAnimNode_AssetPlayerBase::StaticStruct();
  pFVar3 = FAnimInstanceProxy::GetNodeFromIndexUntyped(this_00,param_1,pUVar2);
  if (pFVar3 != (FAnimNode_Base *)0x0) {
    pcVar1 = *(code **)(pFVar3->_padding_ + 200);
    fVar4 = (float)(**(code **)(pFVar3->_padding_ + 0xb8))(pFVar3);
    fVar5 = (float)(*pcVar1)(pFVar3);
    return fVar4 - fVar5;
  }
  return __real_7f7fffff;
}

// GetInstanceAssetPlayerTimeFromEndFraction @ 147455660

float __thiscall
UAnimInstance::GetInstanceAssetPlayerTimeFromEndFraction(UAnimInstance *this,int param_1)

{
  FAnimInstanceProxy *this_00;
  UScriptStruct *pUVar1;
  FAnimNode_Base *pFVar2;
  float fVar3;
  float fVar4;
  
  this_00 = GetProxyOnAnyThread<FAnimInstanceProxy>(this);
  pUVar1 = FAnimNode_AssetPlayerBase::StaticStruct();
  pFVar2 = FAnimInstanceProxy::GetNodeFromIndexUntyped(this_00,param_1,pUVar1);
  if (pFVar2 != (FAnimNode_Base *)0x0) {
    fVar3 = (float)(**(code **)(pFVar2->_padding_ + 0xb8))(pFVar2);
    if (0.0 < fVar3) {
      fVar4 = (float)(**(code **)(pFVar2->_padding_ + 200))(pFVar2);
      return (fVar3 - fVar4) / fVar3;
    }
  }
  return __real_3f800000;
}

// GetInstanceAssetPlayers @ 1474558b0

TArray<FAnimNode_AssetPlayerBase_const_*,TSizedDefaultAllocator<32>_> * __thiscall
UAnimInstance::GetInstanceAssetPlayers
          (UAnimInstance *this,
          TArray<FAnimNode_AssetPlayerBase_const_*,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__,FName *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FAnimInstanceProxy *this_00;
  TMapBase<FName,FGraphAssetPlayerInformation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FGraphAssetPlayerInformation,0>_>
  *this_01;
  FGraphAssetPlayerInformation *pFVar7;
  UScriptStruct *pUVar8;
  TArray<FAnimNode_AssetPlayerBase_const_*,TSizedDefaultAllocator<32>_> *pTVar9;
  FScriptContainerElement *pFVar10;
  undefined1 local_res10 [8];
  FAnimNode_Base *local_38 [2];
  
  this_00 = GetProxyOnAnyThread<FAnimInstanceProxy>(this);
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  if (this_00->AnimClassInterface == (IAnimClassInterface *)0x0) {
    return __return_storage_ptr__;
  }
  this_01 = (TMapBase<FName,FGraphAssetPlayerInformation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FGraphAssetPlayerInformation,0>_>
             *)(**(code **)((longlong)*this_00->AnimClassInterface + 0x88))();
  pFVar7 = TMapBase<FName,FGraphAssetPlayerInformation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FGraphAssetPlayerInformation,0>_>
           ::Find(this_01,*param_1);
  if (pFVar7 != (FGraphAssetPlayerInformation *)0x0) {
    iVar2 = (pFVar7->PlayerNodeIndices).ArrayNum;
    pFVar10 = (pFVar7->PlayerNodeIndices).AllocatorInstance.Data;
    pFVar1 = pFVar10 + (longlong)iVar2 * 4;
    while( true ) {
      if ((pFVar7->PlayerNodeIndices).ArrayNum != iVar2) {
        local_res10[0] = 0;
        `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res10);
      }
      if (pFVar10 == pFVar1) break;
      iVar6 = *(int *)pFVar10;
      pUVar8 = FAnimNode_AssetPlayerBase::StaticStruct();
      local_38[0] = FAnimInstanceProxy::GetNodeFromIndexUntyped(this_00,iVar6,pUVar8);
      if (local_38[0] != (FAnimNode_Base *)0x0) {
        pFVar3 = (__return_storage_ptr__->AllocatorInstance).Data;
        if ((pFVar3 <= (FScriptContainerElement *)local_38) &&
           ((FScriptContainerElement *)local_38 <
            pFVar3 + (longlong)__return_storage_ptr__->ArrayMax * 8)) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            pTVar9 = (TArray<FAnimNode_AssetPlayerBase_const_*,TSizedDefaultAllocator<32>_> *)
                     (*pcVar4)();
            return pTVar9;
          }
        }
        iVar6 = __return_storage_ptr__->ArrayNum;
        if (iVar6 == __return_storage_ptr__->ArrayMax) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&__return_storage_ptr__->AllocatorInstance,
                             &__return_storage_ptr__->ArrayMax);
        }
        __return_storage_ptr__->ArrayNum = iVar6 + 1;
        *(FAnimNode_Base **)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar6 * 8)
             = local_38[0];
      }
      pFVar10 = pFVar10 + 4;
    }
    return __return_storage_ptr__;
  }
  return __return_storage_ptr__;
}

// GetInstanceCurrentStateElapsedTime @ 147455aa0

float __thiscall UAnimInstance::GetInstanceCurrentStateElapsedTime(UAnimInstance *this,int param_1)

{
  FAnimInstanceProxy *this_00;
  FAnimNode_StateMachine *pFVar1;
  
  this_00 = GetProxyOnAnyThread<FAnimInstanceProxy>(this);
  pFVar1 = FAnimInstanceProxy::GetStateMachineInstance(this_00,param_1);
  if (pFVar1 != (FAnimNode_StateMachine *)0x0) {
    return pFVar1->ElapsedTime;
  }
  return 0.0;
}

// GetInstanceForMontage @ 147455ae0

FAnimMontageInstance * __thiscall
UAnimInstance::GetInstanceForMontage(UAnimInstance *this,UAnimMontage *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FAnimMontageInstance *pFVar3;
  UAnimMontage *pUVar4;
  FScriptContainerElement *pFVar5;
  bool bVar6;
  undefined1 local_res8 [8];
  
  pFVar5 = (this->MontageInstances).AllocatorInstance.Data;
  iVar2 = (this->MontageInstances).ArrayNum;
  pFVar1 = pFVar5 + (longlong)iVar2 * 8;
  do {
    if ((this->MontageInstances).ArrayNum != iVar2) {
      `TCheckedPointerIterator<FAnimMontageInstance_*_const,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar5 == pFVar1) {
      return (FAnimMontageInstance *)0x0;
    }
    pFVar3 = *(FAnimMontageInstance **)pFVar5;
    if (pFVar3 != (FAnimMontageInstance *)0x0) {
      pUVar4 = (pFVar3->Montage).field0_0x0.DebugPtr;
      if (pUVar4 == (UAnimMontage *)0x0) {
        bVar6 = param_1 == (UAnimMontage *)0x0;
      }
      else {
        bVar6 = pUVar4 == param_1;
      }
      if (bVar6) {
        return pFVar3;
      }
    }
    pFVar5 = pFVar5 + 8;
  } while( true );
}

// GetInstanceMachineWeight @ 147455c20

float __thiscall UAnimInstance::GetInstanceMachineWeight(UAnimInstance *this,int param_1)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FAnimInstanceProxy *this_00;
  FAnimNode_StateMachine *pFVar5;
  int iVar6;
  float fVar7;
  
  this_00 = GetProxyOnAnyThread<FAnimInstanceProxy>(this);
  pFVar5 = FAnimInstanceProxy::GetStateMachineInstance(this_00,param_1);
  if (pFVar5 == (FAnimNode_StateMachine *)0x0) {
    return 0.0;
  }
  iVar6 = 1 - this_00->BufferWriteIndex;
  uVar1 = pFVar5->StateMachineIndexInClass;
  uVar4 = 0;
  if ((int)uVar1 < this_00->MachineWeightArrays[iVar6].ArrayNum) {
    uVar4 = ~uVar1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      fVar7 = (float)(*pcVar2)();
      return fVar7;
    }
  }
  return *(float *)(this_00->MachineWeightArrays[iVar6].AllocatorInstance.Data +
                   (longlong)(int)uVar1 * 4);
}

// GetInstanceRelevantAssetPlayers @ 147455e90

TArray<FAnimNode_AssetPlayerRelevancyBase_const_*,TSizedDefaultAllocator<32>_> * __thiscall
UAnimInstance::GetInstanceRelevantAssetPlayers
          (UAnimInstance *this,
          TArray<FAnimNode_AssetPlayerRelevancyBase_const_*,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__,FName *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FAnimInstanceProxy *this_00;
  TMapBase<FName,FGraphAssetPlayerInformation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FGraphAssetPlayerInformation,0>_>
  *this_01;
  FGraphAssetPlayerInformation *pFVar7;
  UScriptStruct *pUVar8;
  TArray<FAnimNode_AssetPlayerRelevancyBase_const_*,TSizedDefaultAllocator<32>_> *pTVar9;
  FScriptContainerElement *pFVar10;
  undefined1 local_res10 [8];
  FAnimNode_Base *local_38 [2];
  
  this_00 = GetProxyOnAnyThread<FAnimInstanceProxy>(this);
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  if (this_00->AnimClassInterface == (IAnimClassInterface *)0x0) {
    return __return_storage_ptr__;
  }
  this_01 = (TMapBase<FName,FGraphAssetPlayerInformation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FGraphAssetPlayerInformation,0>_>
             *)(**(code **)((longlong)*this_00->AnimClassInterface + 0x88))();
  pFVar7 = TMapBase<FName,FGraphAssetPlayerInformation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FGraphAssetPlayerInformation,0>_>
           ::Find(this_01,*param_1);
  if (pFVar7 != (FGraphAssetPlayerInformation *)0x0) {
    iVar2 = (pFVar7->PlayerNodeIndices).ArrayNum;
    pFVar10 = (pFVar7->PlayerNodeIndices).AllocatorInstance.Data;
    pFVar1 = pFVar10 + (longlong)iVar2 * 4;
    while( true ) {
      if ((pFVar7->PlayerNodeIndices).ArrayNum != iVar2) {
        local_res10[0] = 0;
        `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res10);
      }
      if (pFVar10 == pFVar1) break;
      iVar6 = *(int *)pFVar10;
      pUVar8 = FAnimNode_AssetPlayerRelevancyBase::StaticStruct();
      local_38[0] = FAnimInstanceProxy::GetNodeFromIndexUntyped(this_00,iVar6,pUVar8);
      if (local_38[0] != (FAnimNode_Base *)0x0) {
        pFVar3 = (__return_storage_ptr__->AllocatorInstance).Data;
        if ((pFVar3 <= (FScriptContainerElement *)local_38) &&
           ((FScriptContainerElement *)local_38 <
            pFVar3 + (longlong)__return_storage_ptr__->ArrayMax * 8)) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            pTVar9 = (TArray<FAnimNode_AssetPlayerRelevancyBase_const_*,TSizedDefaultAllocator<32>_>
                      *)(*pcVar4)();
            return pTVar9;
          }
        }
        iVar6 = __return_storage_ptr__->ArrayNum;
        if (iVar6 == __return_storage_ptr__->ArrayMax) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&__return_storage_ptr__->AllocatorInstance,
                             &__return_storage_ptr__->ArrayMax);
        }
        __return_storage_ptr__->ArrayNum = iVar6 + 1;
        *(FAnimNode_Base **)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar6 * 8)
             = local_38[0];
      }
      pFVar10 = pFVar10 + 4;
    }
    return __return_storage_ptr__;
  }
  return __return_storage_ptr__;
}

// GetInstanceStateWeight @ 147456170

float __thiscall UAnimInstance::GetInstanceStateWeight(UAnimInstance *this,int param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  FAnimInstanceProxy *this_00;
  FAnimNode_StateMachine *pFVar5;
  uint *puVar6;
  uint *puVar7;
  undefined1 *puVar8;
  uint uVar9;
  float fVar10;
  
  this_00 = GetProxyOnAnyThread<FAnimInstanceProxy>(this);
  pFVar5 = FAnimInstanceProxy::GetStateMachineInstance(this_00,param_1);
  if ((pFVar5 != (FAnimNode_StateMachine *)0x0) &&
     (*(int *)&(this_00->StateMachineClassIndexToWeightOffset).field_0x8 !=
      *(int *)&(this_00->StateMachineClassIndexToWeightOffset).field_0x34)) {
    puVar8 = *(undefined1 **)&(this_00->StateMachineClassIndexToWeightOffset).field_0x40;
    if (puVar8 == (undefined1 *)0x0) {
      puVar8 = &(this_00->StateMachineClassIndexToWeightOffset).field_0x38;
    }
    uVar3 = *(uint *)(puVar8 + (ulonglong)
                               (*(int *)&(this_00->StateMachineClassIndexToWeightOffset).field_0x48
                                - 1U & pFVar5->StateMachineIndexInClass) * 4);
    if (uVar3 != 0xffffffff) {
      do {
        puVar7 = (uint *)((longlong)(int)uVar3 * 0x10 +
                         *(longlong *)&this_00->StateMachineClassIndexToWeightOffset);
        if (*puVar7 == pFVar5->StateMachineIndexInClass) {
          puVar6 = puVar7 + 1;
          if (puVar7 == (uint *)0x0) {
            puVar6 = (uint *)0x0;
          }
          if (puVar6 == (uint *)0x0) {
            return 0.0;
          }
          iVar4 = 1 - this_00->BufferWriteIndex;
          uVar9 = *puVar6 + param_2;
          uVar3 = 0;
          if ((int)uVar9 < this_00->StateWeightArrays[iVar4].ArrayNum) {
            uVar3 = ~uVar9 >> 0x1f;
          }
          if ((uVar3 == 0) &&
             (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar2)) {
            pcVar1 = (code *)swi(3);
            fVar10 = (float)(*pcVar1)();
            return fVar10;
          }
          return *(float *)(this_00->StateWeightArrays[iVar4].AllocatorInstance.Data +
                           (longlong)(int)uVar9 * 4);
        }
        uVar3 = puVar7[2];
      } while (uVar3 != 0xffffffff);
    }
  }
  return 0.0;
}

// GetInstanceTransitionCrossfadeDuration @ 147456310

float __thiscall
UAnimInstance::GetInstanceTransitionCrossfadeDuration(UAnimInstance *this,int param_1,int param_2)

{
  bool bVar1;
  FAnimInstanceProxy *this_00;
  FAnimNode_StateMachine *this_01;
  FAnimationTransitionBetweenStates *pFVar2;
  
  this_00 = GetProxyOnAnyThread<FAnimInstanceProxy>(this);
  this_01 = FAnimInstanceProxy::GetStateMachineInstance(this_00,param_1);
  if (this_01 != (FAnimNode_StateMachine *)0x0) {
    bVar1 = FAnimNode_StateMachine::IsValidTransitionIndex(this_01,param_2);
    if (bVar1) {
      pFVar2 = FAnimNode_StateMachine::GetTransitionInfo(this_01,param_2);
      return pFVar2->CrossfadeDuration;
    }
  }
  return 0.0;
}

// GetInstanceTransitionTimeElapsed @ 147456450

float __thiscall
UAnimInstance::GetInstanceTransitionTimeElapsed(UAnimInstance *this,int param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  bool bVar3;
  FAnimInstanceProxy *this_00;
  FAnimNode_StateMachine *this_01;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  undefined1 local_res18 [8];
  
  this_00 = GetProxyOnAnyThread<FAnimInstanceProxy>(this);
  this_01 = FAnimInstanceProxy::GetStateMachineInstance(this_00,param_1);
  if ((this_01 != (FAnimNode_StateMachine *)0x0) &&
     (bVar3 = FAnimNode_StateMachine::IsValidTransitionIndex(this_01,param_2), bVar3)) {
    pFVar6 = (this_01->ActiveTransitionArray).AllocatorInstance.Data;
    iVar2 = (this_01->ActiveTransitionArray).ArrayNum;
    pFVar5 = pFVar6 + 0x80;
    pFVar7 = pFVar6 + (longlong)iVar2 * 200;
    while( true ) {
      if ((this_01->ActiveTransitionArray).ArrayNum != iVar2) {
        `TCheckedPointerIterator<FAnimationActiveTransitionEntry_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res18);
      }
      if (pFVar6 == pFVar7) break;
      pFVar4 = *(FScriptContainerElement **)(pFVar5 + -8);
      if (pFVar4 == (FScriptContainerElement *)0x0) {
        pFVar4 = pFVar5 + -0x18;
      }
      pFVar1 = pFVar4 + (longlong)*(int *)pFVar5 * 4;
      for (; pFVar4 != pFVar1; pFVar4 = pFVar4 + 4) {
        if (*(int *)pFVar4 == param_2) {
          return *(float *)pFVar6;
        }
      }
      pFVar6 = pFVar6 + 200;
      pFVar5 = pFVar5 + 200;
    }
  }
  return 0.0;
}

// GetInstanceTransitionTimeElapsedFraction @ 147456600

float __thiscall
UAnimInstance::GetInstanceTransitionTimeElapsedFraction(UAnimInstance *this,int param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  bool bVar3;
  FAnimInstanceProxy *this_00;
  FAnimNode_StateMachine *this_01;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  undefined1 local_res18 [8];
  
  this_00 = GetProxyOnAnyThread<FAnimInstanceProxy>(this);
  this_01 = FAnimInstanceProxy::GetStateMachineInstance(this_00,param_1);
  if ((this_01 != (FAnimNode_StateMachine *)0x0) &&
     (bVar3 = FAnimNode_StateMachine::IsValidTransitionIndex(this_01,param_2), bVar3)) {
    pFVar6 = (this_01->ActiveTransitionArray).AllocatorInstance.Data;
    iVar2 = (this_01->ActiveTransitionArray).ArrayNum;
    pFVar5 = pFVar6 + 0x80;
    pFVar7 = pFVar6 + (longlong)iVar2 * 200;
    while( true ) {
      if ((this_01->ActiveTransitionArray).ArrayNum != iVar2) {
        `TCheckedPointerIterator<FAnimationActiveTransitionEntry_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res18);
      }
      if (pFVar6 == pFVar7) break;
      pFVar4 = *(FScriptContainerElement **)(pFVar5 + -8);
      if (pFVar4 == (FScriptContainerElement *)0x0) {
        pFVar4 = pFVar5 + -0x18;
      }
      pFVar1 = pFVar4 + (longlong)(int)*(float *)pFVar5 * 4;
      for (; pFVar4 != pFVar1; pFVar4 = pFVar4 + 4) {
        if (*(float *)pFVar4 == (float)param_2) {
          return *(float *)pFVar6 / *(float *)(pFVar6 + 8);
        }
      }
      pFVar6 = pFVar6 + 200;
      pFVar5 = pFVar5 + 200;
    }
  }
  return 0.0;
}

// GetLODLevel @ 147457110

int __thiscall UAnimInstance::GetLODLevel(UAnimInstance *this)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  USkeletalMeshComponent *pUVar4;
  
  pUVar4 = GetSkelMeshComponent(this);
  if (pUVar4 != (USkeletalMeshComponent *)0x0) {
    return *(int *)((longlong)&pUVar4->_padding_ + 4);
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("SkelMeshComp",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimInstance.cpp"
                     ,0x58c,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    iVar3 = (*pcVar1)();
    return iVar3;
  }
  return iRam00000000000007b4;
}

// GetLastMontageFlushFrame @ 147457170

uint __thiscall UAnimInstance::GetLastMontageFlushFrame(UAnimInstance *this)

{
  return this->LastMontageFlushFrame;
}

// GetLinkedAnimGraphInstanceByTag @ 147457180

UAnimInstance * __thiscall
UAnimInstance::GetLinkedAnimGraphInstanceByTag(UAnimInstance *this,FName param_1)

{
  code *pcVar1;
  IAnimClassInterface *pIVar2;
  UScriptStruct *pUVar3;
  FAnimSubsystem_Tag *this_00;
  FAnimNode_CustomProperty *this_01;
  UAnimInstance *pUVar4;
  
  pIVar2 = IAnimClassInterface::GetFromClass(*(UClass **)&this->field_0x10);
  if (pIVar2 != (IAnimClassInterface *)0x0) {
    pcVar1 = *(code **)((longlong)*pIVar2 + 0xc0);
    pUVar3 = FAnimSubsystem_Tag::StaticStruct();
    this_00 = (FAnimSubsystem_Tag *)(*pcVar1)(pIVar2,pUVar3);
    if (this_00 != (FAnimSubsystem_Tag *)0x0) {
      pUVar3 = FAnimNode_LinkedAnimGraph::StaticStruct();
      this_01 = (FAnimNode_CustomProperty *)
                FAnimSubsystem_Tag::FindNodeByTag_Internal(this_00,param_1,this,pUVar3);
      if (this_01 != (FAnimNode_CustomProperty *)0x0) {
        pUVar4 = FAnimNode_CustomProperty::GetTargetInstance<UAnimInstance>(this_01);
        return pUVar4;
      }
    }
  }
  return (UAnimInstance *)0x0;
}

// GetLinkedAnimGraphInstancesByTag @ 147457210

void __thiscall
UAnimInstance::GetLinkedAnimGraphInstancesByTag
          (UAnimInstance *this,FName param_1,
          TArray<UAnimInstance_*,TSizedDefaultAllocator<32>_> *param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  UAnimInstance *local_18 [2];
  
  local_18[0] = GetLinkedAnimGraphInstanceByTag(this,param_1);
  if (local_18[0] != (UAnimInstance *)0x0) {
    pFVar1 = (param_2->AllocatorInstance).Data;
    if ((pFVar1 <= (FScriptContainerElement *)local_18) &&
       ((FScriptContainerElement *)local_18 < pFVar1 + (longlong)param_2->ArrayMax * 8)) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    iVar4 = param_2->ArrayNum;
    if (iVar4 == param_2->ArrayMax) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&param_2->AllocatorInstance,&param_2->ArrayMax);
    }
    param_2->ArrayNum = iVar4 + 1;
    *(UAnimInstance **)((param_2->AllocatorInstance).Data + (longlong)iVar4 * 8) = local_18[0];
  }
  return;
}

// GetLinkedAnimLayerInstanceByClass @ 1474572e0

UAnimInstance * __thiscall
UAnimInstance::GetLinkedAnimLayerInstanceByClass
          (UAnimInstance *this,TSubclassOf<UAnimInstance> param_1,bool param_2)

{
  FObjectPtr_u_0 *this_00;
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  bool bVar5;
  IAnimClassInterface *pIVar6;
  longlong *plVar7;
  void *pvVar8;
  UClass *pUVar9;
  longlong lVar10;
  UAnimInstance *pUVar11;
  undefined8 *puVar12;
  undefined1 local_res20 [8];
  
  pIVar6 = IAnimClassInterface::GetFromClass(*(UClass **)&this->field_0x10);
  if (pIVar6 != (IAnimClassInterface *)0x0) {
    plVar7 = (longlong *)(**(code **)((longlong)*pIVar6 + 0x40))(pIVar6);
    puVar12 = (undefined8 *)*plVar7;
    lVar4 = plVar7[1];
    puVar1 = puVar12 + (int)lVar4;
    while( true ) {
      if ((int)plVar7[1] != (int)lVar4) {
        `TCheckedPointerIterator<FStructProperty_*_const,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res20);
      }
      if (puVar12 == puVar1) break;
      pvVar8 = FProperty::ContainerUObjectPtrToValuePtrInternal
                         ((FProperty *)*puVar12,(UObject *)this,0);
      this_00 = (FObjectPtr_u_0 *)((longlong)pvVar8 + 0x30);
      if ((*(longlong *)((longlong)pvVar8 + 0x30) != 0) &&
         ((*(uint *)(*(longlong *)((longlong)pvVar8 + 0x30) + 8) >> 0x1e & 1) == 0)) {
        if (this_00->Handle == (UObject *)0x0) {
LAB_147457394:
          pUVar11 = (UAnimInstance *)0x0;
        }
        else {
          pUVar9 = StaticClass();
          bVar5 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar9);
          if (!bVar5) goto LAB_147457394;
          pUVar11 = (UAnimInstance *)this_00->Handle;
        }
        if ((pUVar11 != (UAnimInstance *)0x0) &&
           (lVar10 = *(longlong *)&pUVar11->field_0x10, lVar10 != 0)) {
          lVar3 = *(longlong *)param_1.Class.field0_0x0;
          if (param_2) {
            if ((lVar3 != 0) && (pUVar9 = StaticClass(), pUVar9 != (UClass *)0x0)) {
              iVar2 = (int)pUVar9->_padding_;
              if ((*(int *)(lVar3 + 0x38) < iVar2) ||
                 ((longlong *)*(undefined1 **)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar2 * 8) !=
                  &pUVar9->_padding_)) {
                bVar5 = false;
              }
              else {
                bVar5 = true;
              }
              if ((bVar5) && (lVar3 = *(longlong *)param_1.Class.field0_0x0, lVar3 != 0)) {
                if ((*(int *)(lVar10 + 0x38) < *(int *)(lVar3 + 0x38)) ||
                   (*(longlong *)
                     (*(longlong *)(lVar10 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) !=
                    lVar3 + 0x30)) {
                  bVar5 = false;
                }
                else {
                  bVar5 = true;
                }
                if (bVar5) {
                  return pUVar11;
                }
              }
            }
          }
          else {
            if ((lVar3 == 0) || (pUVar9 = StaticClass(), pUVar9 == (UClass *)0x0)) {
LAB_14745745a:
              lVar10 = 0;
            }
            else {
              iVar2 = (int)pUVar9->_padding_;
              if ((*(int *)(lVar3 + 0x38) < iVar2) ||
                 ((longlong *)*(undefined1 **)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar2 * 8) !=
                  &pUVar9->_padding_)) {
                bVar5 = false;
              }
              else {
                bVar5 = true;
              }
              if (!bVar5) goto LAB_14745745a;
              lVar10 = *(longlong *)param_1.Class.field0_0x0;
            }
            if (*(longlong *)&pUVar11->field_0x10 == lVar10) {
              return pUVar11;
            }
          }
        }
      }
      puVar12 = puVar12 + 1;
    }
  }
  return (UAnimInstance *)0x0;
}

// GetLinkedAnimLayerInstanceByGroup @ 147457490

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

UAnimInstance * __thiscall
UAnimInstance::GetLinkedAnimLayerInstanceByGroup(UAnimInstance *this,FName param_1)

{
  ForElementType<UClass_*> FVar1;
  int iVar2;
  code *pcVar3;
  undefined8 *puVar4;
  uint uVar5;
  bool bVar6;
  IAnimClassInterface *pIVar7;
  void *pvVar8;
  UClass *pUVar9;
  UAnimInstance *pUVar10;
  UAnimInstance *pUVar11;
  FAnimBlueprintFunction *pFVar12;
  longlong lVar13;
  ulonglong uVar14;
  undefined8 *puVar15;
  ForElementType<UClass_*> FVar16;
  undefined1 auStack_108 [32];
  longlong *local_e8;
  ForElementType<UClass_*> local_e0;
  longlong local_d8;
  longlong local_d0;
  undefined8 local_c8;
  undefined1 local_b8;
  undefined1 local_b7 [7];
  longlong local_b0;
  longlong local_a8;
  longlong local_a0;
  longlong local_98;
  uint local_90;
  undefined8 *local_88;
  ForElementType<UClass_*> local_80;
  longlong *local_78;
  undefined8 *local_70;
  ForElementType<UClass_*> local_68;
  uint local_40;
  int local_3c;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_108;
  local_80 = (ForElementType<UClass_*>)this;
  pIVar7 = IAnimClassInterface::GetFromClass(*(UClass **)&this->field_0x10);
  if (pIVar7 != (IAnimClassInterface *)0x0) {
    local_78 = (longlong *)(**(code **)((longlong)*pIVar7 + 0x40))(pIVar7);
    pUVar11 = (UAnimInstance *)0x0;
    local_90 = *(uint *)(local_78 + 1);
    uVar14 = (ulonglong)(int)local_90;
    puVar15 = (undefined8 *)*local_78;
    local_70 = puVar15 + uVar14;
    while( true ) {
      puVar4 = local_70;
      local_88 = puVar15;
      if ((int)local_78[1] != (int)uVar14) {
        local_b8 = 0;
        `TCheckedPointerIterator<FStructProperty_*_const,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_b8);
      }
      if (puVar15 == puVar4) break;
      pvVar8 = FProperty::ContainerUObjectPtrToValuePtrInternal
                         ((FProperty *)*puVar15,(UObject *)this,0);
      local_68.SecondaryData = (ForElementType<UClass_*>)0x0;
      local_40 = 0;
      local_3c = 4;
      if ((*(longlong *)((longlong)pvVar8 + 0x30) != 0) &&
         ((*(uint *)(*(longlong *)((longlong)pvVar8 + 0x30) + 8) >> 0x1e & 1) == 0)) {
        pUVar10 = pUVar11;
        if (*(longlong *)((longlong)pvVar8 + 0x30) != 0) {
          pUVar9 = StaticClass();
          bVar6 = FObjectPtr::IsA((FObjectPtr *)((longlong)pvVar8 + 0x30),pUVar9);
          if (bVar6) {
            pUVar10 = *(UAnimInstance **)((longlong)pvVar8 + 0x30);
          }
        }
        if (pUVar10 != (UAnimInstance *)0x0) {
          local_a0 = *(longlong *)&pUVar10->field_0x10;
          FVar16 = (ForElementType<UClass_*>)&local_68;
          if (local_68.SecondaryData != (ForElementType<UClass_*>)0x0) {
            FVar16 = local_68.SecondaryData;
          }
          if ((ulonglong)FVar16 <= &local_a0) {
            FVar16 = (ForElementType<UClass_*>)&local_68;
            if (local_68.SecondaryData != (ForElementType<UClass_*>)0x0) {
              FVar16 = local_68.SecondaryData;
            }
            if (&local_a0 < (longlong *)((longlong)FVar16 + (longlong)local_3c * 8)) {
              local_d0 = (longlong)(int)local_40;
              local_c8 = 8;
              local_e8 = &local_a0;
              local_e0 = (ForElementType<UClass_*>)&local_68;
              if (local_68.SecondaryData != (ForElementType<UClass_*>)0x0) {
                local_e0 = local_68.SecondaryData;
              }
              local_d8 = (longlong)local_3c;
              bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                );
              if (bVar6) {
                pcVar3 = (code *)swi(3);
                pUVar11 = (UAnimInstance *)(*pcVar3)();
                return pUVar11;
              }
            }
          }
          if (local_40 == local_3c) {
            local_40 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<UClass_*>_>
                                 (0x808,&local_68,&local_3c);
          }
          lVar13 = (longlong)(int)local_40;
          FVar16 = (ForElementType<UClass_*>)&local_68;
          if (local_68.SecondaryData != (ForElementType<UClass_*>)0x0) {
            FVar16 = local_68.SecondaryData;
          }
          local_40 = local_40 + 1;
          *(longlong *)((longlong)FVar16 + lVar13 * 8) = local_a0;
        }
      }
      lVar13 = *(longlong *)((longlong)pvVar8 + 0x78);
      if ((lVar13 == 0) || (pUVar9 = StaticClass(), pUVar9 == (UClass *)0x0)) {
LAB_147457774:
        local_b0 = 0;
      }
      else {
        iVar2 = (int)pUVar9->_padding_;
        if ((*(int *)(lVar13 + 0x38) < iVar2) ||
           ((longlong *)*(undefined1 **)(*(longlong *)(lVar13 + 0x30) + (longlong)iVar2 * 8) !=
            &pUVar9->_padding_)) {
          bVar6 = false;
        }
        else {
          bVar6 = true;
        }
        if (!bVar6) goto LAB_147457774;
        local_b0 = *(longlong *)((longlong)pvVar8 + 0x78);
        if (local_b0 != 0) {
          FVar16 = (ForElementType<UClass_*>)&local_68;
          if (local_68.SecondaryData != (ForElementType<UClass_*>)0x0) {
            FVar16 = local_68.SecondaryData;
          }
          if ((ulonglong)FVar16 <= &local_b0) {
            FVar16 = (ForElementType<UClass_*>)&local_68;
            if (local_68.SecondaryData != (ForElementType<UClass_*>)0x0) {
              FVar16 = local_68.SecondaryData;
            }
            if (&local_b0 < (longlong *)((longlong)FVar16 + (longlong)local_3c * 8)) {
              local_d0 = (longlong)(int)local_40;
              local_c8 = 8;
              local_e8 = &local_b0;
              local_e0 = (ForElementType<UClass_*>)&local_68;
              if (local_68.SecondaryData != (ForElementType<UClass_*>)0x0) {
                local_e0 = local_68.SecondaryData;
              }
              local_d8 = (longlong)local_3c;
              bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                );
              if (bVar6) {
                pcVar3 = (code *)swi(3);
                pUVar11 = (UAnimInstance *)(*pcVar3)();
                return pUVar11;
              }
            }
          }
          if (local_40 == local_3c) {
            local_40 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<UClass_*>_>
                                 (0x808,&local_68,&local_3c);
          }
          lVar13 = (longlong)(int)local_40;
          FVar16 = (ForElementType<UClass_*>)&local_68;
          if (local_68.SecondaryData != (ForElementType<UClass_*>)0x0) {
            FVar16 = local_68.SecondaryData;
          }
          local_40 = local_40 + 1;
          *(longlong *)((longlong)FVar16 + lVar13 * 8) = local_b0;
        }
      }
      lVar13 = *(longlong *)((longlong)pvVar8 + 0xb8);
      if ((lVar13 == 0) ||
         (pUVar9 = Z_Construct_UClass_UAnimLayerInterface_NoRegister(), pUVar9 == (UClass *)0x0)) {
LAB_14745789c:
        local_a8 = 0;
      }
      else {
        iVar2 = (int)pUVar9->_padding_;
        if ((*(int *)(lVar13 + 0x38) < iVar2) ||
           ((longlong *)*(undefined1 **)(*(longlong *)(lVar13 + 0x30) + (longlong)iVar2 * 8) !=
            &pUVar9->_padding_)) {
          bVar6 = false;
        }
        else {
          bVar6 = true;
        }
        if (!bVar6) goto LAB_14745789c;
        local_a8 = *(longlong *)((longlong)pvVar8 + 0xb8);
        if (local_a8 != 0) {
          FVar16 = (ForElementType<UClass_*>)&local_68;
          if (local_68.SecondaryData != (ForElementType<UClass_*>)0x0) {
            FVar16 = local_68.SecondaryData;
          }
          if ((ulonglong)FVar16 <= &local_a8) {
            FVar16 = (ForElementType<UClass_*>)&local_68;
            if (local_68.SecondaryData != (ForElementType<UClass_*>)0x0) {
              FVar16 = local_68.SecondaryData;
            }
            if (&local_a8 < (longlong *)((longlong)FVar16 + (longlong)local_3c * 8)) {
              local_d0 = (longlong)(int)local_40;
              local_c8 = 8;
              local_e8 = &local_a8;
              local_e0 = (ForElementType<UClass_*>)&local_68;
              if (local_68.SecondaryData != (ForElementType<UClass_*>)0x0) {
                local_e0 = local_68.SecondaryData;
              }
              local_d8 = (longlong)local_3c;
              bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                );
              if (bVar6) {
                pcVar3 = (code *)swi(3);
                pUVar11 = (UAnimInstance *)(*pcVar3)();
                return pUVar11;
              }
            }
          }
          if (local_40 == local_3c) {
            local_40 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<UClass_*>_>
                                 (0x808,&local_68,&local_3c);
          }
          lVar13 = (longlong)(int)local_40;
          FVar16 = (ForElementType<UClass_*>)&local_68;
          if (local_68.SecondaryData != (ForElementType<UClass_*>)0x0) {
            FVar16 = local_68.SecondaryData;
          }
          local_40 = local_40 + 1;
          *(longlong *)((longlong)FVar16 + lVar13 * 8) = local_a8;
        }
      }
      local_98 = *(longlong *)((longlong)this + 0x10);
      FVar16 = (ForElementType<UClass_*>)&local_68;
      if (local_68.SecondaryData != (ForElementType<UClass_*>)0x0) {
        FVar16 = local_68.SecondaryData;
      }
      if ((ulonglong)FVar16 <= &local_98) {
        FVar16 = (ForElementType<UClass_*>)&local_68;
        if (local_68.SecondaryData != (ForElementType<UClass_*>)0x0) {
          FVar16 = local_68.SecondaryData;
        }
        if (&local_98 < (longlong *)((longlong)FVar16 + (longlong)local_3c * 8)) {
          local_d0 = (longlong)(int)local_40;
          local_c8 = 8;
          local_e8 = &local_98;
          local_e0 = (ForElementType<UClass_*>)&local_68;
          if (local_68.SecondaryData != (ForElementType<UClass_*>)0x0) {
            local_e0 = local_68.SecondaryData;
          }
          local_d8 = (longlong)local_3c;
          bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar6) {
            pcVar3 = (code *)swi(3);
            pUVar11 = (UAnimInstance *)(*pcVar3)();
            return pUVar11;
          }
        }
      }
      if (local_40 == local_3c) {
        local_40 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<UClass_*>_>
                             (0x808,&local_68,&local_3c);
      }
      lVar13 = (longlong)(int)local_40;
      FVar16 = (ForElementType<UClass_*>)&local_68;
      if (local_68.SecondaryData != (ForElementType<UClass_*>)0x0) {
        FVar16 = local_68.SecondaryData;
      }
      local_40 = local_40 + 1;
      *(longlong *)((longlong)FVar16 + lVar13 * 8) = local_98;
      uVar5 = local_40;
      uVar14 = (ulonglong)(int)local_40;
      FVar16 = (ForElementType<UClass_*>)&local_68;
      if (local_68.SecondaryData != (ForElementType<UClass_*>)0x0) {
        FVar16 = local_68.SecondaryData;
      }
      FVar1 = (ForElementType<UClass_*>)((longlong)FVar16 + uVar14 * 8);
      while( true ) {
        if ((uint)uVar14 != uVar5) {
          local_b7[0] = 0;
          `TCheckedPointerIterator<UClass_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_b7);
        }
        if (FVar16 == FVar1) break;
        pIVar7 = IAnimClassInterface::GetFromClass(*(UClass **)FVar16);
        pFVar12 = IAnimClassInterface::FindAnimBlueprintFunction
                            (pIVar7,(FName *)((longlong)pvVar8 + 0xc0));
        if ((pFVar12 != (FAnimBlueprintFunction *)0x0) && (param_1 == pFVar12->Group)) {
          if ((*(longlong *)((longlong)pvVar8 + 0x30) != 0) &&
             (((*(uint *)(*(longlong *)((longlong)pvVar8 + 0x30) + 8) >> 0x1e & 1) == 0 &&
              (*(longlong *)((longlong)pvVar8 + 0x30) != 0)))) {
            pUVar9 = StaticClass();
            bVar6 = FObjectPtr::IsA((FObjectPtr *)((longlong)pvVar8 + 0x30),pUVar9);
            pUVar11 = (UAnimInstance *)0x0;
            if (bVar6) {
              pUVar11 = *(UAnimInstance **)((longlong)pvVar8 + 0x30);
            }
          }
          if (local_68.SecondaryData == (ForElementType<UClass_*>)0x0) {
            return pUVar11;
          }
          FMemory::Free((void *)local_68.SecondaryData);
          return pUVar11;
        }
        uVar14 = (ulonglong)local_40;
        FVar16 = (ForElementType<UClass_*>)((longlong)FVar16 + 8);
      }
      if (local_68.SecondaryData != (ForElementType<UClass_*>)0x0) {
        FMemory::Free((void *)local_68.SecondaryData);
      }
      puVar15 = local_88 + 1;
      uVar14 = (ulonglong)local_90;
      this = (UAnimInstance *)local_80;
    }
  }
  return (UAnimInstance *)0x0;
}

// GetLinkedAnimLayerInstanceByGroupAndClass @ 147457a80

UAnimInstance * __thiscall
UAnimInstance::GetLinkedAnimLayerInstanceByGroupAndClass
          (UAnimInstance *this,FName param_1,TSubclassOf<UAnimInstance> param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  int iVar3;
  bool bVar4;
  IAnimClassInterface *pIVar5;
  longlong *plVar6;
  ulonglong uVar7;
  void *pvVar8;
  UClass *pUVar9;
  longlong lVar10;
  FAnimBlueprintFunction *pFVar11;
  UAnimInstance *pUVar12;
  undefined8 *puVar13;
  undefined1 local_res8 [8];
  
  pIVar5 = IAnimClassInterface::GetFromClass(*(UClass **)&this->field_0x10);
  if (pIVar5 != (IAnimClassInterface *)0x0) {
    plVar6 = (longlong *)(**(code **)((longlong)*pIVar5 + 0x40))(pIVar5);
    puVar13 = (undefined8 *)*plVar6;
    uVar2 = *(uint *)(plVar6 + 1);
    uVar7 = (ulonglong)(int)uVar2;
    puVar1 = puVar13 + uVar7;
    while( true ) {
      if ((int)plVar6[1] != (int)uVar7) {
        `TCheckedPointerIterator<FStructProperty_*_const,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      if (puVar13 == puVar1) break;
      pvVar8 = FProperty::ContainerUObjectPtrToValuePtrInternal
                         ((FProperty *)*puVar13,(UObject *)this,0);
      if ((*(longlong *)((longlong)pvVar8 + 0x30) != 0) &&
         ((*(uint *)(*(longlong *)((longlong)pvVar8 + 0x30) + 8) >> 0x1e & 1) == 0)) {
        if (*(longlong *)((longlong)pvVar8 + 0x30) == 0) {
LAB_147457b39:
          pUVar12 = (UAnimInstance *)0x0;
        }
        else {
          pUVar9 = StaticClass();
          bVar4 = FObjectPtr::IsA((FObjectPtr *)((longlong)pvVar8 + 0x30),pUVar9);
          if (!bVar4) goto LAB_147457b39;
          pUVar12 = *(UAnimInstance **)((longlong)pvVar8 + 0x30);
        }
        if (pUVar12 != (UAnimInstance *)0x0) {
          lVar10 = *(longlong *)param_2.Class.field0_0x0;
          if ((lVar10 == 0) || (pUVar9 = StaticClass(), pUVar9 == (UClass *)0x0)) {
LAB_147457b7f:
            lVar10 = 0;
          }
          else {
            iVar3 = (int)pUVar9->_padding_;
            if ((*(int *)(lVar10 + 0x38) < iVar3) ||
               ((longlong *)*(undefined1 **)(*(longlong *)(lVar10 + 0x30) + (longlong)iVar3 * 8) !=
                &pUVar9->_padding_)) {
              bVar4 = false;
            }
            else {
              bVar4 = true;
            }
            if (!bVar4) goto LAB_147457b7f;
            lVar10 = *(longlong *)param_2.Class.field0_0x0;
          }
          if (*(longlong *)&pUVar12->field_0x10 == lVar10) {
            lVar10 = *(longlong *)((longlong)pvVar8 + 0xb8);
            if ((lVar10 == 0) ||
               (pUVar9 = Z_Construct_UClass_UAnimLayerInterface_NoRegister(),
               pUVar9 == (UClass *)0x0)) {
LAB_147457bcd:
              pUVar9 = *(UClass **)&this->field_0x10;
            }
            else {
              iVar3 = (int)pUVar9->_padding_;
              if ((*(int *)(lVar10 + 0x38) < iVar3) ||
                 ((longlong *)*(undefined1 **)(*(longlong *)(lVar10 + 0x30) + (longlong)iVar3 * 8)
                  != &pUVar9->_padding_)) {
                bVar4 = false;
              }
              else {
                bVar4 = true;
              }
              if ((!bVar4) ||
                 (pUVar9 = *(UClass **)((longlong)pvVar8 + 0xb8), pUVar9 == (UClass *)0x0))
              goto LAB_147457bcd;
            }
            pIVar5 = IAnimClassInterface::GetFromClass(pUVar9);
            pFVar11 = IAnimClassInterface::FindAnimBlueprintFunction
                                (pIVar5,(FName *)((longlong)pvVar8 + 0xc0));
            if ((pFVar11 != (FAnimBlueprintFunction *)0x0) && (param_1 == pFVar11->Group)) {
              return pUVar12;
            }
          }
        }
      }
      uVar7 = (ulonglong)uVar2;
      puVar13 = puVar13 + 1;
    }
  }
  return (UAnimInstance *)0x0;
}

// GetLinkedAnimLayerInstancesByGroup @ 147457c30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UAnimInstance::GetLinkedAnimLayerInstancesByGroup
          (UAnimInstance *this,FName param_1,
          TArray<UAnimInstance_*,TSizedDefaultAllocator<32>_> *param_2)

{
  FObjectPtr_u_0 *this_00;
  ForElementType<UClass_*> FVar1;
  FScriptContainerElement *pFVar2;
  ForElementType<UClass_*> FVar3;
  code *pcVar4;
  uint uVar5;
  bool bVar6;
  int iVar7;
  IAnimClassInterface *pIVar8;
  void *pvVar9;
  UClass *pUVar10;
  UObject *pUVar11;
  FAnimBlueprintFunction *pFVar12;
  FScriptContainerElement *pFVar13;
  longlong lVar14;
  ulonglong uVar15;
  ForElementType<UClass_*> FVar16;
  undefined1 auStack_128 [32];
  UObject **local_108;
  ForElementType<UClass_*> local_100;
  longlong local_f8;
  longlong local_f0;
  undefined8 local_e8;
  undefined1 local_d8;
  undefined1 local_d7 [7];
  UObject *local_d0;
  UObject *local_c8;
  UObject *local_c0;
  UObject *local_b8;
  UObject *local_b0;
  uint local_a8;
  ForElementType<UClass_*> local_a0;
  void *local_98;
  UAnimInstance *local_90;
  ForElementType<UClass_*> *local_88;
  ForElementType<UClass_*> local_80;
  ForElementType<UClass_*> local_78;
  uint local_50;
  int local_4c;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_128;
  local_90 = this;
  pIVar8 = IAnimClassInterface::GetFromClass(*(UClass **)&this->field_0x10);
  if (pIVar8 != (IAnimClassInterface *)0x0) {
    local_88 = (ForElementType<UClass_*> *)(**(code **)((longlong)*pIVar8 + 0x40))(pIVar8);
    local_a8 = *(uint *)(local_88 + 1);
    uVar15 = (ulonglong)(int)local_a8;
    FVar16 = *local_88;
    local_80 = (ForElementType<UClass_*>)((longlong)FVar16 + uVar15 * 8);
    while( true ) {
      FVar1 = local_80;
      pUVar11 = (UObject *)0x0;
      local_a0 = FVar16;
      if (*(int *)(local_88 + 1) != (int)uVar15) {
        local_d8 = 0;
        `TCheckedPointerIterator<FStructProperty_*_const,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_d8);
      }
      if (FVar16 == FVar1) break;
      pvVar9 = FProperty::ContainerUObjectPtrToValuePtrInternal
                         (*(FProperty **)FVar16,(UObject *)this,0);
      local_78.SecondaryData = (ForElementType<UClass_*>)0x0;
      local_50 = 0;
      local_4c = 4;
      this_00 = (FObjectPtr_u_0 *)((longlong)pvVar9 + 0x30);
      local_98 = pvVar9;
      if ((*(longlong *)((longlong)pvVar9 + 0x30) != 0) &&
         ((*(uint *)(*(longlong *)((longlong)pvVar9 + 0x30) + 8) >> 0x1e & 1) == 0)) {
        if (this_00->Handle != (UObject *)0x0) {
          pUVar10 = StaticClass();
          bVar6 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar10);
          if (bVar6) {
            pUVar11 = this_00->Handle;
          }
        }
        if (pUVar11 != (UObject *)0x0) {
          local_c0 = *(UObject **)&pUVar11->field_0x10;
          FVar16 = (ForElementType<UClass_*>)&local_78;
          if (local_78.SecondaryData != (ForElementType<UClass_*>)0x0) {
            FVar16 = local_78.SecondaryData;
          }
          if ((ulonglong)FVar16 <= &local_c0) {
            FVar16 = (ForElementType<UClass_*>)&local_78;
            if (local_78.SecondaryData != (ForElementType<UClass_*>)0x0) {
              FVar16 = local_78.SecondaryData;
            }
            if (&local_c0 < (UObject **)((longlong)FVar16 + (longlong)local_4c * 8)) {
              local_f0 = (longlong)(int)local_50;
              local_e8 = 8;
              local_108 = &local_c0;
              local_100 = (ForElementType<UClass_*>)&local_78;
              if (local_78.SecondaryData != (ForElementType<UClass_*>)0x0) {
                local_100 = local_78.SecondaryData;
              }
              local_f8 = (longlong)local_4c;
              bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                );
              if (bVar6) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
            }
          }
          if (local_50 == local_4c) {
            local_50 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<UClass_*>_>
                                 (0x808,&local_78,&local_4c);
          }
          lVar14 = (longlong)(int)local_50;
          FVar16 = (ForElementType<UClass_*>)&local_78;
          if (local_78.SecondaryData != (ForElementType<UClass_*>)0x0) {
            FVar16 = local_78.SecondaryData;
          }
          local_50 = local_50 + 1;
          *(UObject **)((longlong)FVar16 + lVar14 * 8) = local_c0;
        }
      }
      lVar14 = *(longlong *)((longlong)pvVar9 + 0x78);
      if ((lVar14 == 0) || (pUVar10 = StaticClass(), pUVar10 == (UClass *)0x0)) {
LAB_147457f3a:
        local_d0 = (UObject *)0x0;
      }
      else {
        iVar7 = (int)pUVar10->_padding_;
        if ((*(int *)(lVar14 + 0x38) < iVar7) ||
           ((longlong *)*(undefined1 **)(*(longlong *)(lVar14 + 0x30) + (longlong)iVar7 * 8) !=
            &pUVar10->_padding_)) {
          bVar6 = false;
        }
        else {
          bVar6 = true;
        }
        if (!bVar6) goto LAB_147457f3a;
        local_d0 = *(UObject **)((longlong)pvVar9 + 0x78);
        if (local_d0 != (UObject *)0x0) {
          FVar16 = (ForElementType<UClass_*>)&local_78;
          if (local_78.SecondaryData != (ForElementType<UClass_*>)0x0) {
            FVar16 = local_78.SecondaryData;
          }
          if ((ulonglong)FVar16 <= &local_d0) {
            FVar16 = (ForElementType<UClass_*>)&local_78;
            if (local_78.SecondaryData != (ForElementType<UClass_*>)0x0) {
              FVar16 = local_78.SecondaryData;
            }
            if (&local_d0 < (UObject **)((longlong)FVar16 + (longlong)local_4c * 8)) {
              local_f0 = (longlong)(int)local_50;
              local_e8 = 8;
              local_108 = &local_d0;
              local_100 = (ForElementType<UClass_*>)&local_78;
              if (local_78.SecondaryData != (ForElementType<UClass_*>)0x0) {
                local_100 = local_78.SecondaryData;
              }
              local_f8 = (longlong)local_4c;
              bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                );
              if (bVar6) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
            }
          }
          if (local_50 == local_4c) {
            local_50 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<UClass_*>_>
                                 (0x808,&local_78,&local_4c);
          }
          lVar14 = (longlong)(int)local_50;
          FVar16 = (ForElementType<UClass_*>)&local_78;
          if (local_78.SecondaryData != (ForElementType<UClass_*>)0x0) {
            FVar16 = local_78.SecondaryData;
          }
          local_50 = local_50 + 1;
          *(UObject **)((longlong)FVar16 + lVar14 * 8) = local_d0;
        }
      }
      lVar14 = *(longlong *)((longlong)pvVar9 + 0xb8);
      if ((lVar14 == 0) ||
         (pUVar10 = Z_Construct_UClass_UAnimLayerInterface_NoRegister(), pUVar10 == (UClass *)0x0))
      {
LAB_147458068:
        local_c8 = (UObject *)0x0;
      }
      else {
        iVar7 = (int)pUVar10->_padding_;
        if ((*(int *)(lVar14 + 0x38) < iVar7) ||
           ((longlong *)*(undefined1 **)(*(longlong *)(lVar14 + 0x30) + (longlong)iVar7 * 8) !=
            &pUVar10->_padding_)) {
          bVar6 = false;
        }
        else {
          bVar6 = true;
        }
        if (!bVar6) goto LAB_147458068;
        local_c8 = *(UObject **)((longlong)pvVar9 + 0xb8);
        if (local_c8 != (UObject *)0x0) {
          FVar16 = (ForElementType<UClass_*>)&local_78;
          if (local_78.SecondaryData != (ForElementType<UClass_*>)0x0) {
            FVar16 = local_78.SecondaryData;
          }
          if ((ulonglong)FVar16 <= &local_c8) {
            FVar16 = (ForElementType<UClass_*>)&local_78;
            if (local_78.SecondaryData != (ForElementType<UClass_*>)0x0) {
              FVar16 = local_78.SecondaryData;
            }
            if (&local_c8 < (UObject **)((longlong)FVar16 + (longlong)local_4c * 8)) {
              local_f0 = (longlong)(int)local_50;
              local_e8 = 8;
              local_108 = &local_c8;
              local_100 = (ForElementType<UClass_*>)&local_78;
              if (local_78.SecondaryData != (ForElementType<UClass_*>)0x0) {
                local_100 = local_78.SecondaryData;
              }
              local_f8 = (longlong)local_4c;
              bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                );
              if (bVar6) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
            }
          }
          if (local_50 == local_4c) {
            local_50 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<UClass_*>_>
                                 (0x808,&local_78,&local_4c);
          }
          lVar14 = (longlong)(int)local_50;
          FVar16 = (ForElementType<UClass_*>)&local_78;
          if (local_78.SecondaryData != (ForElementType<UClass_*>)0x0) {
            FVar16 = local_78.SecondaryData;
          }
          local_50 = local_50 + 1;
          *(UObject **)((longlong)FVar16 + lVar14 * 8) = local_c8;
        }
      }
      local_b8 = *(UObject **)&this->field_0x10;
      FVar16 = (ForElementType<UClass_*>)&local_78;
      if (local_78.SecondaryData != (ForElementType<UClass_*>)0x0) {
        FVar16 = local_78.SecondaryData;
      }
      if ((ulonglong)FVar16 <= &local_b8) {
        FVar16 = (ForElementType<UClass_*>)&local_78;
        if (local_78.SecondaryData != (ForElementType<UClass_*>)0x0) {
          FVar16 = local_78.SecondaryData;
        }
        if (&local_b8 < (UObject **)((longlong)FVar16 + (longlong)local_4c * 8)) {
          local_f0 = (longlong)(int)local_50;
          local_e8 = 8;
          local_108 = &local_b8;
          local_100 = (ForElementType<UClass_*>)&local_78;
          if (local_78.SecondaryData != (ForElementType<UClass_*>)0x0) {
            local_100 = local_78.SecondaryData;
          }
          local_f8 = (longlong)local_4c;
          bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar6) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
      }
      if (local_50 == local_4c) {
        local_50 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<UClass_*>_>
                             (0x808,&local_78,&local_4c);
      }
      lVar14 = (longlong)(int)local_50;
      FVar16 = (ForElementType<UClass_*>)&local_78;
      if (local_78.SecondaryData != (ForElementType<UClass_*>)0x0) {
        FVar16 = local_78.SecondaryData;
      }
      local_50 = local_50 + 1;
      *(UObject **)((longlong)FVar16 + lVar14 * 8) = local_b8;
      uVar5 = local_50;
      uVar15 = (ulonglong)(int)local_50;
      FVar16 = (ForElementType<UClass_*>)&local_78;
      if (local_78.SecondaryData != (ForElementType<UClass_*>)0x0) {
        FVar16 = local_78.SecondaryData;
      }
      FVar1 = (ForElementType<UClass_*>)((longlong)FVar16 + uVar15 * 8);
      while( true ) {
        if ((uint)uVar15 != uVar5) {
          local_d7[0] = 0;
          `TCheckedPointerIterator<UClass_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_d7);
        }
        if (FVar16 == FVar1) break;
        pIVar8 = IAnimClassInterface::GetFromClass(*(UClass **)FVar16);
        pFVar12 = IAnimClassInterface::FindAnimBlueprintFunction
                            (pIVar8,(FName *)((longlong)local_98 + 0xc0));
        if (pFVar12 != (FAnimBlueprintFunction *)0x0) {
          if (((this_00->Handle == (UObject *)0x0) ||
              ((*(uint *)&this_00->Handle->field_0x8 >> 0x1e & 1) != 0)) ||
             (this_00->Handle == (UObject *)0x0)) {
LAB_1474581d8:
            local_b0 = (UObject *)0x0;
          }
          else {
            pUVar10 = StaticClass();
            bVar6 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar10);
            if (!bVar6) goto LAB_1474581d8;
            local_b0 = this_00->Handle;
          }
          if (param_1 == pFVar12->Group) {
            pFVar13 = (param_2->AllocatorInstance).Data;
            pFVar2 = pFVar13 + (longlong)param_2->ArrayNum * 8;
            for (; pFVar13 != pFVar2; pFVar13 = pFVar13 + 8) {
              if (*(UObject **)pFVar13 == local_b0) goto LAB_1474582aa;
            }
            FVar3 = (ForElementType<UClass_*>)(param_2->AllocatorInstance).Data;
            if (((ulonglong)FVar3 <= &local_b0) &&
               (&local_b0 < (UObject **)((longlong)FVar3 + (longlong)param_2->ArrayMax * 8))) {
              local_f0 = (longlong)param_2->ArrayNum;
              local_e8 = 8;
              local_108 = &local_b0;
              local_100 = FVar3;
              local_f8 = (longlong)param_2->ArrayMax;
              bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                );
              if (bVar6) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
            }
            iVar7 = param_2->ArrayNum;
            if (iVar7 == param_2->ArrayMax) {
              iVar7 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x808,&param_2->AllocatorInstance,&param_2->ArrayMax);
            }
            param_2->ArrayNum = iVar7 + 1;
            *(UObject **)((param_2->AllocatorInstance).Data + (longlong)iVar7 * 8) = local_b0;
          }
        }
LAB_1474582aa:
        uVar15 = (ulonglong)local_50;
        FVar16 = (ForElementType<UClass_*>)((longlong)FVar16 + 8);
      }
      if (local_78.SecondaryData != (ForElementType<UClass_*>)0x0) {
        FMemory::Free((void *)local_78.SecondaryData);
      }
      FVar16 = (ForElementType<UClass_*>)((longlong)local_a0 + 8);
      uVar15 = (ulonglong)local_a8;
      this = local_90;
    }
  }
  return;
}

// GetLinkedInputPoseNode @ 147458320

FAnimNode_LinkedInputPose * __thiscall
UAnimInstance::GetLinkedInputPoseNode(UAnimInstance *this,FName param_1,FName param_2)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FAnimInstanceProxy *pFVar5;
  IAnimClassInterface *pIVar6;
  longlong *plVar7;
  FAnimNode_LinkedInputPose *pFVar8;
  uint uVar9;
  ulonglong uVar10;
  uint uVar11;
  FName *pFVar12;
  uint uVar13;
  FName *pFVar14;
  FName *pFVar15;
  ulonglong uVar16;
  undefined1 local_res10 [8];
  
  pFVar5 = GetProxyOnAnyThread<FAnimInstanceProxy>(this);
  if ((param_1 == (FName)0x0) && (param_2 == (FName)0x0)) {
    return pFVar5->DefaultLinkedInstanceInputNode;
  }
  pIVar6 = IAnimClassInterface::GetFromClass(*(UClass **)&this->field_0x10);
  if (pIVar6 != (IAnimClassInterface *)0x0) {
    if (param_1 == (FName)0x0) {
      param_1 = FAnimNode_LinkedInputPose::DefaultInputPoseName;
    }
    if (param_2 == (FName)0x0) {
      param_2 = NAME_AnimGraph;
    }
    plVar7 = (longlong *)(**(code **)((longlong)*pIVar6 + 0x80))(pIVar6);
    uVar1 = *(uint *)(plVar7 + 1);
    uVar10 = (ulonglong)(int)uVar1;
    pFVar14 = (FName *)*plVar7;
    pFVar15 = pFVar14 + 9;
    pFVar12 = pFVar14 + uVar10 * 0xf;
    while( true ) {
      if ((int)plVar7[1] != (int)uVar10) {
        local_res10[0] = 0;
        `TCheckedPointerIterator<FAnimBlueprintFunction_const_,int,0>::operator!='::__l2::<lambda_1>
        ::operator()(local_res10);
      }
      if (pFVar14 == pFVar12) break;
      if (*pFVar14 == param_2) {
        if ((pFVar15[-5].ComparisonIndex.Value != (pFVar15->ComparisonIndex).Value) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("AnimBlueprintFunction.InputPoseNames.Num() == AnimBlueprintFunction.InputPoseNodeProperties.Num()"
                               ,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimInstance.cpp"
                               ,0xd24,L""), bVar3)) {
          pcVar2 = (code *)swi(3);
          pFVar8 = (FAnimNode_LinkedInputPose *)(*pcVar2)();
          return pFVar8;
        }
        uVar9 = pFVar15[-5].ComparisonIndex.Value;
        uVar13 = 0;
        uVar10 = 0;
        uVar16 = 0;
        if (0 < (int)uVar9) {
          do {
            uVar11 = (uint)uVar10;
            uVar4 = uVar13;
            if ((int)uVar11 < (int)uVar9) {
              uVar4 = ~uVar11 >> 0x1f;
            }
            if ((uVar4 == 0) &&
               (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar3)) {
              pcVar2 = (code *)swi(3);
              pFVar8 = (FAnimNode_LinkedInputPose *)(*pcVar2)();
              return pFVar8;
            }
            if (*(FName *)(uVar16 + (longlong)pFVar15[-6]) == param_1) {
              uVar9 = uVar13;
              if ((int)uVar11 < (int)(pFVar15->ComparisonIndex).Value) {
                uVar9 = ~uVar11 >> 0x1f;
              }
              if ((uVar9 == 0) &&
                 (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar3)) {
                pcVar2 = (code *)swi(3);
                pFVar8 = (FAnimNode_LinkedInputPose *)(*pcVar2)();
                return pFVar8;
              }
              if (*(longlong *)(uVar16 + (longlong)pFVar15[-1]) != 0) {
                if ((int)uVar11 < (int)pFVar14[9].ComparisonIndex.Value) {
                  uVar13 = ~uVar11 >> 0x1f;
                }
                if ((uVar13 == 0) &&
                   (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar3)) {
                  pcVar2 = (code *)swi(3);
                  pFVar8 = (FAnimNode_LinkedInputPose *)(*pcVar2)();
                  return pFVar8;
                }
                pFVar8 = FProperty::ContainerUObjectPtrToValuePtrInternal
                                   (*(FProperty **)
                                     ((longlong)pFVar14[8] + (longlong)(int)uVar11 * 8),
                                    (UObject *)this,0);
                if (pFVar8->Name == param_1) {
                  return pFVar8;
                }
                bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("LinkedInput->Name == InLinkedInputName",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimInstance.cpp"
                                   ,0xd2a,L"");
                if (!bVar3) {
                  return pFVar8;
                }
                pcVar2 = (code *)swi(3);
                pFVar8 = (FAnimNode_LinkedInputPose *)(*pcVar2)();
                return pFVar8;
              }
            }
            uVar9 = pFVar15[-5].ComparisonIndex.Value;
            uVar10 = (ulonglong)(uVar11 + 1);
            uVar16 = uVar16 + 8;
          } while ((int)(uVar11 + 1) < (int)uVar9);
        }
      }
      pFVar14 = pFVar14 + 0xf;
      uVar10 = (ulonglong)uVar1;
      pFVar15 = pFVar15 + 0xf;
    }
  }
  return (FAnimNode_LinkedInputPose *)0x0;
}

// GetMachineDescription @ 147458670

FBakedAnimationStateMachine * __thiscall
UAnimInstance::GetMachineDescription
          (UAnimInstance *this,IAnimClassInterface *param_1,FAnimNode_StateMachine *param_2)

{
  FBakedAnimationStateMachine *pFVar1;
  
  GetProxyOnGameThread<FAnimInstanceProxy>(this);
  pFVar1 = FAnimInstanceProxy::GetMachineDescription(param_1,param_2);
  return pFVar1;
}

// GetMontageInstanceForID @ 147458720

FAnimMontageInstance * __thiscall
UAnimInstance::GetMontageInstanceForID(UAnimInstance *this,int param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FAnimMontageInstance *pFVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res8 [8];
  
  pFVar4 = (this->MontageInstances).AllocatorInstance.Data;
  iVar2 = (this->MontageInstances).ArrayNum;
  pFVar1 = pFVar4 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->MontageInstances).ArrayNum != iVar2) {
      `TCheckedPointerIterator<FAnimMontageInstance_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar4 == pFVar1) break;
    pFVar3 = *(FAnimMontageInstance **)pFVar4;
    if ((pFVar3 != (FAnimMontageInstance *)0x0) && (pFVar3->InstanceID == param_1)) {
      return pFVar3;
    }
    pFVar4 = pFVar4 + 8;
  }
  return (FAnimMontageInstance *)0x0;
}

// GetMutableInstanceAssetPlayers @ 1474589b0

TArray<FAnimNode_AssetPlayerBase_*,TSizedDefaultAllocator<32>_> * __thiscall
UAnimInstance::GetMutableInstanceAssetPlayers
          (UAnimInstance *this,
          TArray<FAnimNode_AssetPlayerBase_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          FName *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FAnimInstanceProxy *this_00;
  TMapBase<FName,FGraphAssetPlayerInformation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FGraphAssetPlayerInformation,0>_>
  *this_01;
  FGraphAssetPlayerInformation *pFVar7;
  UScriptStruct *pUVar8;
  TArray<FAnimNode_AssetPlayerBase_*,TSizedDefaultAllocator<32>_> *pTVar9;
  FScriptContainerElement *pFVar10;
  undefined1 local_res10 [8];
  FAnimNode_Base *local_38 [2];
  
  this_00 = GetProxyOnAnyThread<FAnimInstanceProxy>(this);
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  if (this_00->AnimClassInterface == (IAnimClassInterface *)0x0) {
    return __return_storage_ptr__;
  }
  this_01 = (TMapBase<FName,FGraphAssetPlayerInformation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FGraphAssetPlayerInformation,0>_>
             *)(**(code **)((longlong)*this_00->AnimClassInterface + 0x88))();
  pFVar7 = TMapBase<FName,FGraphAssetPlayerInformation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FGraphAssetPlayerInformation,0>_>
           ::Find(this_01,*param_1);
  if (pFVar7 != (FGraphAssetPlayerInformation *)0x0) {
    iVar2 = (pFVar7->PlayerNodeIndices).ArrayNum;
    pFVar10 = (pFVar7->PlayerNodeIndices).AllocatorInstance.Data;
    pFVar1 = pFVar10 + (longlong)iVar2 * 4;
    while( true ) {
      if ((pFVar7->PlayerNodeIndices).ArrayNum != iVar2) {
        local_res10[0] = 0;
        `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res10);
      }
      if (pFVar10 == pFVar1) break;
      iVar6 = *(int *)pFVar10;
      pUVar8 = FAnimNode_AssetPlayerBase::StaticStruct();
      local_38[0] = FAnimInstanceProxy::GetNodeFromIndexUntyped(this_00,iVar6,pUVar8);
      if (local_38[0] != (FAnimNode_Base *)0x0) {
        pFVar3 = (__return_storage_ptr__->AllocatorInstance).Data;
        if ((pFVar3 <= (FScriptContainerElement *)local_38) &&
           ((FScriptContainerElement *)local_38 <
            pFVar3 + (longlong)__return_storage_ptr__->ArrayMax * 8)) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            pTVar9 = (TArray<FAnimNode_AssetPlayerBase_*,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
            return pTVar9;
          }
        }
        iVar6 = __return_storage_ptr__->ArrayNum;
        if (iVar6 == __return_storage_ptr__->ArrayMax) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&__return_storage_ptr__->AllocatorInstance,
                             &__return_storage_ptr__->ArrayMax);
        }
        __return_storage_ptr__->ArrayNum = iVar6 + 1;
        *(FAnimNode_Base **)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar6 * 8)
             = local_38[0];
      }
      pFVar10 = pFVar10 + 4;
    }
    return __return_storage_ptr__;
  }
  return __return_storage_ptr__;
}

// GetMutableInstanceRelevantAssetPlayers @ 147458d20

TArray<FAnimNode_AssetPlayerRelevancyBase_*,TSizedDefaultAllocator<32>_> * __thiscall
UAnimInstance::GetMutableInstanceRelevantAssetPlayers
          (UAnimInstance *this,
          TArray<FAnimNode_AssetPlayerRelevancyBase_*,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__,FName *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FAnimInstanceProxy *this_00;
  TMapBase<FName,FGraphAssetPlayerInformation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FGraphAssetPlayerInformation,0>_>
  *this_01;
  FGraphAssetPlayerInformation *pFVar7;
  UScriptStruct *pUVar8;
  TArray<FAnimNode_AssetPlayerRelevancyBase_*,TSizedDefaultAllocator<32>_> *pTVar9;
  FScriptContainerElement *pFVar10;
  undefined1 local_res10 [8];
  FAnimNode_Base *local_38 [2];
  
  this_00 = GetProxyOnAnyThread<FAnimInstanceProxy>(this);
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  if (this_00->AnimClassInterface == (IAnimClassInterface *)0x0) {
    return __return_storage_ptr__;
  }
  this_01 = (TMapBase<FName,FGraphAssetPlayerInformation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FGraphAssetPlayerInformation,0>_>
             *)(**(code **)((longlong)*this_00->AnimClassInterface + 0x88))();
  pFVar7 = TMapBase<FName,FGraphAssetPlayerInformation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FGraphAssetPlayerInformation,0>_>
           ::Find(this_01,*param_1);
  if (pFVar7 != (FGraphAssetPlayerInformation *)0x0) {
    iVar2 = (pFVar7->PlayerNodeIndices).ArrayNum;
    pFVar10 = (pFVar7->PlayerNodeIndices).AllocatorInstance.Data;
    pFVar1 = pFVar10 + (longlong)iVar2 * 4;
    while( true ) {
      if ((pFVar7->PlayerNodeIndices).ArrayNum != iVar2) {
        local_res10[0] = 0;
        `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res10);
      }
      if (pFVar10 == pFVar1) break;
      iVar6 = *(int *)pFVar10;
      pUVar8 = FAnimNode_AssetPlayerRelevancyBase::StaticStruct();
      local_38[0] = FAnimInstanceProxy::GetNodeFromIndexUntyped(this_00,iVar6,pUVar8);
      if (local_38[0] != (FAnimNode_Base *)0x0) {
        pFVar3 = (__return_storage_ptr__->AllocatorInstance).Data;
        if ((pFVar3 <= (FScriptContainerElement *)local_38) &&
           ((FScriptContainerElement *)local_38 <
            pFVar3 + (longlong)__return_storage_ptr__->ArrayMax * 8)) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            pTVar9 = (TArray<FAnimNode_AssetPlayerRelevancyBase_*,TSizedDefaultAllocator<32>_> *)
                     (*pcVar4)();
            return pTVar9;
          }
        }
        iVar6 = __return_storage_ptr__->ArrayNum;
        if (iVar6 == __return_storage_ptr__->ArrayMax) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&__return_storage_ptr__->AllocatorInstance,
                             &__return_storage_ptr__->ArrayMax);
        }
        __return_storage_ptr__->ArrayNum = iVar6 + 1;
        *(FAnimNode_Base **)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar6 * 8)
             = local_38[0];
      }
      pFVar10 = pFVar10 + 4;
    }
    return __return_storage_ptr__;
  }
  return __return_storage_ptr__;
}

// GetOwningActor @ 1474593a0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

AActor * __thiscall UAnimInstance::GetOwningActor(UAnimInstance *this)

{
  USkeletalMeshComponent *pUVar1;
  
  pUVar1 = GetSkelMeshComponent(this);
  return (AActor *)pUVar1->_padding_;
}

// GetOwningComponent @ 1474593c0

USkeletalMeshComponent * __thiscall UAnimInstance::GetOwningComponent(UAnimInstance *this)

{
  int iVar1;
  USkeletalMeshComponent *pUVar2;
  UClass *pUVar3;
  FString *pFVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  FString FStack_28;
  FString FStack_18;
  
  pUVar2 = *(USkeletalMeshComponent **)&this->field_0x20;
  if (pUVar2 == (USkeletalMeshComponent *)0x0) {
    pFVar4 = GetTypeName<USkeletalMeshComponent>(&FStack_28);
    if ((pFVar4->Data).ArrayNum == 0) {
      pwVar5 = L"";
    }
    else {
      pwVar5 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar5);
  }
  pUVar3 = Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
  iVar1 = (int)pUVar3->_padding_;
  if ((iVar1 <= *(int *)(pUVar2->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
      &pUVar3->_padding_)) {
    return pUVar2;
  }
  pFVar4 = GetTypeName<USkeletalMeshComponent>(&FStack_28);
  pwVar5 = L"";
  if ((pFVar4->Data).ArrayNum == 0) {
    pwVar6 = L"";
  }
  else {
    pwVar6 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
  }
  pFVar4 = GetFullNameForCastLogError<UObject>(&FStack_18,(UObject *)pUVar2);
  if ((pFVar4->Data).ArrayNum != 0) {
    pwVar5 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar5,pwVar6);
}

// GetPoseSnapshot @ 14745e700

FPoseSnapshot * __thiscall UAnimInstance::GetPoseSnapshot(UAnimInstance *this,FName param_1)

{
  FAnimInstanceProxy *pFVar1;
  FPoseSnapshot *pFVar2;
  FPoseSnapshot *pFVar3;
  
  pFVar1 = GetProxyOnGameThread<FAnimInstanceProxy>(this);
  pFVar2 = (FPoseSnapshot *)(pFVar1->PoseSnapshots).AllocatorInstance.Data;
  pFVar3 = pFVar2 + (pFVar1->PoseSnapshots).ArrayNum;
  while( true ) {
    if (pFVar2 == pFVar3) {
      return (FPoseSnapshot *)0x0;
    }
    if (pFVar2->SnapshotName == param_1) break;
    pFVar2 = pFVar2 + 1;
  }
  return pFVar2;
}

// GetPrivateStaticClass @ 147462570

UClass * __cdecl UAnimInstance::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAnimInstance.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"AnimInstance",
               &Z_Registration_Info_UClass_UAnimInstance.InnerSingleton,
               StaticRegisterNativesUAnimInstance,0x430,0x10,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UAnimInstance>,
               InternalVTableHelperCtorCaller<UAnimInstance>,local_res8,UObject::StaticClass,
               USkeletalMeshComponent::StaticClass);
  }
  return Z_Registration_Info_UClass_UAnimInstance.InnerSingleton;
}

// GetRelevantAnimLength @ 1474629f0

float __thiscall UAnimInstance::GetRelevantAnimLength(UAnimInstance *this,int param_1,int param_2)

{
  FAnimInstanceProxy *this_00;
  FAnimNode_StateMachine *this_01;
  FBakedAnimationState *pFVar1;
  FAnimNode_AssetPlayerRelevancyBase *pFVar2;
  longlong lVar3;
  float fVar4;
  
  this_00 = GetProxyOnAnyThread<FAnimInstanceProxy>(this);
  this_01 = FAnimInstanceProxy::GetStateMachineInstance(this_00,param_1);
  if (this_01 != (FAnimNode_StateMachine *)0x0) {
    pFVar1 = FAnimNode_StateMachine::GetStateInfo(this_01,param_2);
    pFVar2 = FAnimNode_StateMachine::GetRelevantAssetPlayerInterfaceFromState
                       (this_01,this_00,pFVar1);
    if (pFVar2 != (FAnimNode_AssetPlayerRelevancyBase *)0x0) {
      lVar3 = (**(code **)(*(longlong *)pFVar2 + 0xa0))(pFVar2);
      if (lVar3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000147462a6e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        fVar4 = (float)(**(code **)(*(longlong *)pFVar2 + 0xb8))
                                 (pFVar2,*(code **)(*(longlong *)pFVar2 + 0xb8));
        return fVar4;
      }
    }
  }
  return 0.0;
}

// GetRelevantAnimTime @ 147462b10

float __thiscall UAnimInstance::GetRelevantAnimTime(UAnimInstance *this,int param_1,int param_2)

{
  FAnimInstanceProxy *this_00;
  FAnimNode_StateMachine *this_01;
  FBakedAnimationState *pFVar1;
  FAnimNode_AssetPlayerRelevancyBase *pFVar2;
  float fVar3;
  
  this_00 = GetProxyOnAnyThread<FAnimInstanceProxy>(this);
  this_01 = FAnimInstanceProxy::GetStateMachineInstance(this_00,param_1);
  if (this_01 != (FAnimNode_StateMachine *)0x0) {
    pFVar1 = FAnimNode_StateMachine::GetStateInfo(this_01,param_2);
    pFVar2 = FAnimNode_StateMachine::GetRelevantAssetPlayerInterfaceFromState
                       (this_01,this_00,pFVar1);
    if (pFVar2 != (FAnimNode_AssetPlayerRelevancyBase *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147462b77. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      fVar3 = (float)(**(code **)(*(longlong *)pFVar2 + 200))
                               (pFVar2,*(code **)(*(longlong *)pFVar2 + 200));
      return fVar3;
    }
  }
  return 0.0;
}

// GetRelevantAnimTimeFraction @ 147462c40

float __thiscall
UAnimInstance::GetRelevantAnimTimeFraction(UAnimInstance *this,int param_1,int param_2)

{
  FAnimInstanceProxy *this_00;
  FAnimNode_StateMachine *this_01;
  FBakedAnimationState *pFVar1;
  FAnimNode_AssetPlayerRelevancyBase *pFVar2;
  float fVar3;
  float fVar4;
  
  this_00 = GetProxyOnAnyThread<FAnimInstanceProxy>(this);
  this_01 = FAnimInstanceProxy::GetStateMachineInstance(this_00,param_1);
  if (this_01 != (FAnimNode_StateMachine *)0x0) {
    pFVar1 = FAnimNode_StateMachine::GetStateInfo(this_01,param_2);
    pFVar2 = FAnimNode_StateMachine::GetRelevantAssetPlayerInterfaceFromState
                       (this_01,this_00,pFVar1);
    if ((pFVar2 != (FAnimNode_AssetPlayerRelevancyBase *)0x0) &&
       (fVar3 = (float)(**(code **)(*(longlong *)pFVar2 + 0xb8))(pFVar2), 0.0 < fVar3)) {
      fVar4 = (float)(**(code **)(*(longlong *)pFVar2 + 200))(pFVar2);
      return fVar4 / fVar3;
    }
  }
  return 0.0;
}

// GetRelevantAnimTimeRemaining @ 147462d40

float __thiscall
UAnimInstance::GetRelevantAnimTimeRemaining(UAnimInstance *this,int param_1,int param_2)

{
  FAnimInstanceProxy *this_00;
  FAnimNode_StateMachine *this_01;
  float fVar1;
  
  this_00 = GetProxyOnAnyThread<FAnimInstanceProxy>(this);
  this_01 = FAnimInstanceProxy::GetStateMachineInstance(this_00,param_1);
  if (this_01 != (FAnimNode_StateMachine *)0x0) {
    fVar1 = FAnimNode_StateMachine::GetRelevantAnimTimeRemaining(this_01,this_00,param_2);
    return fVar1;
  }
  return __real_7f7fffff;
}

// GetRelevantAnimTimeRemainingFraction @ 147462e00

float __thiscall
UAnimInstance::GetRelevantAnimTimeRemainingFraction(UAnimInstance *this,int param_1,int param_2)

{
  FAnimInstanceProxy *this_00;
  FAnimNode_StateMachine *this_01;
  float fVar1;
  
  this_00 = GetProxyOnAnyThread<FAnimInstanceProxy>(this);
  this_01 = FAnimInstanceProxy::GetStateMachineInstance(this_00,param_1);
  if (this_01 != (FAnimNode_StateMachine *)0x0) {
    fVar1 = FAnimNode_StateMachine::GetRelevantAnimTimeRemainingFraction(this_01,this_00,param_2);
    return fVar1;
  }
  return __real_3f800000;
}

// GetRelevantAssetPlayerInterfaceFromState @ 147462ed0

FAnimNode_AssetPlayerRelevancyBase * __thiscall
UAnimInstance::GetRelevantAssetPlayerInterfaceFromState(UAnimInstance *this,int param_1,int param_2)

{
  FAnimInstanceProxy *this_00;
  FAnimNode_StateMachine *this_01;
  FBakedAnimationState *pFVar1;
  FAnimNode_AssetPlayerRelevancyBase *pFVar2;
  
  this_00 = GetProxyOnAnyThread<FAnimInstanceProxy>(this);
  this_01 = FAnimInstanceProxy::GetStateMachineInstance(this_00,param_1);
  if (this_01 != (FAnimNode_StateMachine *)0x0) {
    pFVar1 = FAnimNode_StateMachine::GetStateInfo(this_01,param_2);
    pFVar2 = FAnimNode_StateMachine::GetRelevantAssetPlayerInterfaceFromState
                       (this_01,this_00,pFVar1);
    return pFVar2;
  }
  return (FAnimNode_AssetPlayerRelevancyBase *)0x0;
}

// GetRequiredBones @ 147462f40

FBoneContainer * __thiscall UAnimInstance::GetRequiredBones(UAnimInstance *this)

{
  code *pcVar1;
  bool bVar2;
  FAnimInstanceProxy *pFVar3;
  FBoneContainer *pFVar4;
  
  pFVar3 = GetProxyOnGameThread<FAnimInstanceProxy>(this);
  if ((pFVar3->RequiredBones).Object != (FBoneContainer *)0x0) {
    return (pFVar3->RequiredBones).Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x44d,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar4 = (FBoneContainer *)(*pcVar1)();
    return pFVar4;
  }
  return (pFVar3->RequiredBones).Object;
}

// GetRequiredBones @ 147462fa0

FBoneContainer * __thiscall UAnimInstance::GetRequiredBones(UAnimInstance *this)

{
  code *pcVar1;
  bool bVar2;
  FAnimInstanceProxy *pFVar3;
  FBoneContainer *pFVar4;
  
  pFVar3 = GetProxyOnGameThread<FAnimInstanceProxy>(this);
  if ((pFVar3->RequiredBones).Object != (FBoneContainer *)0x0) {
    return (pFVar3->RequiredBones).Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x44d,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar4 = (FBoneContainer *)(*pcVar1)();
    return pFVar4;
  }
  return (pFVar3->RequiredBones).Object;
}

// GetRequiredBonesOnAnyThread @ 147463000

FBoneContainer * __thiscall UAnimInstance::GetRequiredBonesOnAnyThread(UAnimInstance *this)

{
  code *pcVar1;
  bool bVar2;
  FAnimInstanceProxy *pFVar3;
  FBoneContainer *pFVar4;
  
  pFVar3 = GetProxyOnAnyThread<FAnimInstanceProxy>(this);
  if ((pFVar3->RequiredBones).Object != (FBoneContainer *)0x0) {
    return (pFVar3->RequiredBones).Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x44d,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar4 = (FBoneContainer *)(*pcVar1)();
    return pFVar4;
  }
  return (pFVar3->RequiredBones).Object;
}

// GetRootMotionMontageInstance @ 1474630b0

FAnimMontageInstance * __thiscall UAnimInstance::GetRootMotionMontageInstance(UAnimInstance *this)

{
  return this->RootMotionMontageInstance;
}

// GetSkelMeshComponent @ 1474630c0

USkeletalMeshComponent * __thiscall UAnimInstance::GetSkelMeshComponent(UAnimInstance *this)

{
  int iVar1;
  USkeletalMeshComponent *pUVar2;
  UClass *pUVar3;
  FString *pFVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  FString local_28;
  FString local_18;
  
  pUVar2 = *(USkeletalMeshComponent **)&this->field_0x20;
  if (pUVar2 == (USkeletalMeshComponent *)0x0) {
    pFVar4 = GetTypeName<USkeletalMeshComponent>(&local_28);
    if ((pFVar4->Data).ArrayNum == 0) {
      pwVar5 = L"";
    }
    else {
      pwVar5 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar5);
  }
  pUVar3 = Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
  iVar1 = (int)pUVar3->_padding_;
  if ((iVar1 <= *(int *)(pUVar2->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
      &pUVar3->_padding_)) {
    return pUVar2;
  }
  pFVar4 = GetTypeName<USkeletalMeshComponent>(&local_28);
  pwVar5 = L"";
  if ((pFVar4->Data).ArrayNum == 0) {
    pwVar6 = L"";
  }
  else {
    pwVar6 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
  }
  pFVar4 = GetFullNameForCastLogError<UObject>(&local_18,(UObject *)pUVar2);
  if ((pFVar4->Data).ArrayNum != 0) {
    pwVar5 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar5,pwVar6);
}

// GetSkelMeshComponentChecked @ 147463180

USkeletalMeshComponent * __thiscall UAnimInstance::GetSkelMeshComponentChecked(UAnimInstance *this)

{
  int iVar1;
  USkeletalMeshComponent *pUVar2;
  UClass *pUVar3;
  FString *pFVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  FString local_28;
  FString local_18;
  
  pUVar2 = *(USkeletalMeshComponent **)&this->field_0x20;
  if (pUVar2 == (USkeletalMeshComponent *)0x0) {
    pFVar4 = GetTypeName<USkeletalMeshComponent>(&local_28);
    if ((pFVar4->Data).ArrayNum == 0) {
      pwVar5 = L"";
    }
    else {
      pwVar5 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar5);
  }
  pUVar3 = Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
  iVar1 = (int)pUVar3->_padding_;
  if ((iVar1 <= *(int *)(pUVar2->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
      &pUVar3->_padding_)) {
    return pUVar2;
  }
  pFVar4 = GetTypeName<USkeletalMeshComponent>(&local_28);
  pwVar5 = L"";
  if ((pFVar4->Data).ArrayNum == 0) {
    pwVar6 = L"";
  }
  else {
    pwVar6 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
  }
  pFVar4 = GetFullNameForCastLogError<UObject>(&local_18,(UObject *)pUVar2);
  if ((pFVar4->Data).ArrayNum != 0) {
    pwVar5 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar5,pwVar6);
}

// GetSkelMeshComponentUnchecked @ 147463240

USkeletalMeshComponent * __thiscall
UAnimInstance::GetSkelMeshComponentUnchecked(UAnimInstance *this)

{
  int iVar1;
  USkeletalMeshComponent *pUVar2;
  UClass *pUVar3;
  
  pUVar2 = *(USkeletalMeshComponent **)&this->field_0x20;
  if (pUVar2 != (USkeletalMeshComponent *)0x0) {
    pUVar3 = Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(pUVar2->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) {
      return pUVar2;
    }
  }
  return (USkeletalMeshComponent *)0x0;
}

// GetSlotMontageGlobalWeight @ 147463790

float __thiscall UAnimInstance::GetSlotMontageGlobalWeight(UAnimInstance *this,FName *param_1)

{
  uint uVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FAnimInstanceProxy *pFVar6;
  uint *puVar7;
  int iVar8;
  float fVar9;
  
  pFVar6 = GetProxyOnAnyThread<FAnimInstanceProxy>(this);
  puVar7 = (uint *)TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                   ::Find((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                           *)&pFVar6->SlotNameToTrackerIndex,*param_1);
  if (puVar7 == (uint *)0x0) {
    return 0.0;
  }
  uVar1 = *puVar7;
  iVar8 = 1 - pFVar6->BufferWriteIndex;
  uVar5 = 0;
  if ((int)uVar1 < pFVar6->SlotWeightTracker[iVar8].ArrayNum) {
    uVar5 = ~uVar1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      fVar9 = (float)(*pcVar3)();
      return fVar9;
    }
  }
  pFVar2 = pFVar6->SlotWeightTracker[iVar8].AllocatorInstance.Data;
  return *(float *)(pFVar2 + (longlong)(int)uVar1 * 0xc + 4) *
         *(float *)(pFVar2 + (longlong)(int)uVar1 * 0xc);
}

// GetSlotMontageLocalWeight @ 147463920

float __thiscall UAnimInstance::GetSlotMontageLocalWeight(UAnimInstance *this,FName *param_1)

{
  FAnimInstanceProxy *this_00;
  float fVar1;
  
  this_00 = GetProxyOnAnyThread<FAnimInstanceProxy>(this);
  fVar1 = FAnimInstanceProxy::GetSlotMontageLocalWeight(this_00,param_1);
  return fVar1;
}

// GetSlotNodeGlobalWeight @ 147463a10

float __thiscall UAnimInstance::GetSlotNodeGlobalWeight(UAnimInstance *this,FName *param_1)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FAnimInstanceProxy *pFVar5;
  uint *puVar6;
  int iVar7;
  float fVar8;
  
  pFVar5 = GetProxyOnGameThread<FAnimInstanceProxy>(this);
  puVar6 = (uint *)TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                   ::Find((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                           *)&pFVar5->SlotNameToTrackerIndex,*param_1);
  if (puVar6 == (uint *)0x0) {
    return 0.0;
  }
  uVar1 = *puVar6;
  iVar7 = 1 - pFVar5->BufferWriteIndex;
  uVar4 = 0;
  if ((int)uVar1 < pFVar5->SlotWeightTracker[iVar7].ArrayNum) {
    uVar4 = ~uVar1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      fVar8 = (float)(*pcVar2)();
      return fVar8;
    }
  }
  return *(float *)(pFVar5->SlotWeightTracker[iVar7].AllocatorInstance.Data +
                   (longlong)(int)uVar1 * 0xc + 4);
}

// GetStateMachineIndex @ 147463f70

int __thiscall UAnimInstance::GetStateMachineIndex(UAnimInstance *this,FName param_1)

{
  FProperty *this_00;
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  FAnimInstanceProxy *pFVar6;
  longlong *plVar7;
  UScriptStruct *pUVar8;
  FAnimNode_StateMachine *pFVar9;
  FBakedAnimationStateMachine *pFVar10;
  uint uVar11;
  uint uVar12;
  
  pFVar6 = GetProxyOnAnyThread<FAnimInstanceProxy>(this);
  if (pFVar6->AnimClassInterface != (IAnimClassInterface *)0x0) {
    plVar7 = (longlong *)(**(code **)((longlong)*pFVar6->AnimClassInterface + 0x20))();
    uVar12 = 0;
    iVar5 = (int)plVar7[1];
    if (0 < iVar5) {
      do {
        uVar11 = ~uVar12 + iVar5;
        uVar4 = 0;
        if ((int)uVar11 < iVar5) {
          uVar4 = ~uVar11 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          iVar5 = (*pcVar2)();
          return iVar5;
        }
        this_00 = *(FProperty **)(*plVar7 + (longlong)(int)uVar11 * 8);
        if (this_00 != (FProperty *)0x0) {
          lVar1 = this_00[1]._padding_;
          pUVar8 = FAnimNode_StateMachine::StaticStruct();
          if (pUVar8 != (UScriptStruct *)0x0) {
            iVar5 = (int)pUVar8->_padding_;
            if ((*(int *)(lVar1 + 0x38) < iVar5) ||
               ((longlong *)*(undefined1 **)(*(longlong *)(lVar1 + 0x30) + (longlong)iVar5 * 8) !=
                &pUVar8->_padding_)) {
              bVar3 = false;
            }
            else {
              bVar3 = true;
            }
            if ((((bVar3) &&
                 (pFVar9 = FProperty::ContainerUObjectPtrToValuePtrInternal
                                     (this_00,pFVar6->AnimInstanceObject,0),
                 pFVar9 != (FAnimNode_StateMachine *)0x0)) &&
                (pFVar10 = FAnimInstanceProxy::GetMachineDescription
                                     (pFVar6->AnimClassInterface,pFVar9),
                pFVar10 != (FBakedAnimationStateMachine *)0x0)) && (pFVar10->MachineName == param_1)
               ) {
              return uVar12;
            }
          }
        }
        iVar5 = (int)plVar7[1];
        uVar12 = uVar12 + 1;
      } while ((int)uVar12 < iVar5);
    }
  }
  return -1;
}

// GetStateMachineIndexAndDescription @ 147464230

void __thiscall
UAnimInstance::GetStateMachineIndexAndDescription
          (UAnimInstance *this,FName param_1,int *param_2,FBakedAnimationStateMachine **param_3)

{
  FProperty *this_00;
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FAnimInstanceProxy *pFVar5;
  longlong *plVar6;
  UScriptStruct *pUVar7;
  FAnimNode_StateMachine *pFVar8;
  FBakedAnimationStateMachine *pFVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  
  pFVar5 = GetProxyOnAnyThread<FAnimInstanceProxy>(this);
  if (pFVar5->AnimClassInterface != (IAnimClassInterface *)0x0) {
    plVar6 = (longlong *)(**(code **)((longlong)*pFVar5->AnimClassInterface + 0x20))();
    uVar11 = 0;
    iVar10 = (int)plVar6[1];
    if (0 < iVar10) {
      do {
        uVar12 = ~uVar11 + iVar10;
        uVar4 = 0;
        if ((int)uVar12 < iVar10) {
          uVar4 = ~uVar12 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        this_00 = *(FProperty **)(*plVar6 + (longlong)(int)uVar12 * 8);
        if (this_00 != (FProperty *)0x0) {
          lVar1 = this_00[1]._padding_;
          pUVar7 = FAnimNode_StateMachine::StaticStruct();
          if (pUVar7 != (UScriptStruct *)0x0) {
            iVar10 = (int)pUVar7->_padding_;
            if ((*(int *)(lVar1 + 0x38) < iVar10) ||
               ((longlong *)*(undefined1 **)(*(longlong *)(lVar1 + 0x30) + (longlong)iVar10 * 8) !=
                &pUVar7->_padding_)) {
              bVar3 = false;
            }
            else {
              bVar3 = true;
            }
            if ((((bVar3) &&
                 (pFVar8 = FProperty::ContainerUObjectPtrToValuePtrInternal
                                     (this_00,pFVar5->AnimInstanceObject,0),
                 pFVar8 != (FAnimNode_StateMachine *)0x0)) &&
                (pFVar9 = FAnimInstanceProxy::GetMachineDescription
                                    (pFVar5->AnimClassInterface,pFVar8),
                pFVar9 != (FBakedAnimationStateMachine *)0x0)) && (pFVar9->MachineName == param_1))
            {
              *param_2 = uVar11;
              if (param_3 == (FBakedAnimationStateMachine **)0x0) {
                return;
              }
              *param_3 = pFVar9;
              return;
            }
          }
        }
        iVar10 = (int)plVar6[1];
        uVar11 = uVar11 + 1;
      } while ((int)uVar11 < iVar10);
    }
  }
  *param_2 = -1;
  if (param_3 != (FBakedAnimationStateMachine **)0x0) {
    *param_3 = (FBakedAnimationStateMachine *)0x0;
  }
  return;
}

// GetStateMachineInstance @ 1474644a0

FAnimNode_StateMachine * __thiscall
UAnimInstance::GetStateMachineInstance(UAnimInstance *this,int param_1)

{
  FAnimInstanceProxy *this_00;
  FAnimNode_StateMachine *pFVar1;
  
  this_00 = GetProxyOnAnyThread<FAnimInstanceProxy>(this);
  pFVar1 = FAnimInstanceProxy::GetStateMachineInstance(this_00,param_1);
  return pFVar1;
}

// GetStateMachineInstanceDesc @ 147464610

FBakedAnimationStateMachine * __thiscall
UAnimInstance::GetStateMachineInstanceDesc(UAnimInstance *this,FName param_1)

{
  FAnimInstanceProxy *this_00;
  FBakedAnimationStateMachine *pFVar1;
  
  this_00 = GetProxyOnAnyThread<FAnimInstanceProxy>(this);
  pFVar1 = FAnimInstanceProxy::GetStateMachineInstanceDesc(this_00,param_1);
  return pFVar1;
}

// GetStateMachineInstanceFromName @ 147464780

FAnimNode_StateMachine * __thiscall
UAnimInstance::GetStateMachineInstanceFromName(UAnimInstance *this,FName param_1)

{
  FProperty *this_00;
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FAnimInstanceProxy *pFVar5;
  longlong *plVar6;
  FAnimNode_StateMachine *pFVar7;
  UScriptStruct *pUVar8;
  FBakedAnimationStateMachine *pFVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  
  pFVar5 = GetProxyOnAnyThread<FAnimInstanceProxy>(this);
  if (pFVar5->AnimClassInterface != (IAnimClassInterface *)0x0) {
    plVar6 = (longlong *)(**(code **)((longlong)*pFVar5->AnimClassInterface + 0x20))();
    uVar11 = 0;
    iVar10 = (int)plVar6[1];
    if (0 < iVar10) {
      do {
        uVar12 = ~uVar11 + iVar10;
        uVar4 = 0;
        if ((int)uVar12 < iVar10) {
          uVar4 = ~uVar12 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          pFVar7 = (FAnimNode_StateMachine *)(*pcVar2)();
          return pFVar7;
        }
        this_00 = *(FProperty **)(*plVar6 + (longlong)(int)uVar12 * 8);
        if (this_00 != (FProperty *)0x0) {
          lVar1 = this_00[1]._padding_;
          pUVar8 = FAnimNode_StateMachine::StaticStruct();
          if (pUVar8 != (UScriptStruct *)0x0) {
            iVar10 = (int)pUVar8->_padding_;
            if ((*(int *)(lVar1 + 0x38) < iVar10) ||
               ((longlong *)*(undefined1 **)(*(longlong *)(lVar1 + 0x30) + (longlong)iVar10 * 8) !=
                &pUVar8->_padding_)) {
              bVar3 = false;
            }
            else {
              bVar3 = true;
            }
            if ((((bVar3) &&
                 (pFVar7 = FProperty::ContainerUObjectPtrToValuePtrInternal
                                     (this_00,pFVar5->AnimInstanceObject,0),
                 pFVar7 != (FAnimNode_StateMachine *)0x0)) &&
                (pFVar9 = FAnimInstanceProxy::GetMachineDescription
                                    (pFVar5->AnimClassInterface,pFVar7),
                pFVar9 != (FBakedAnimationStateMachine *)0x0)) && (pFVar9->MachineName == param_1))
            {
              return pFVar7;
            }
          }
        }
        iVar10 = (int)plVar6[1];
        uVar11 = uVar11 + 1;
      } while ((int)uVar11 < iVar10);
    }
  }
  return (FAnimNode_StateMachine *)0x0;
}

// GetSyncGroupIndexFromName @ 147464900

int __thiscall UAnimInstance::GetSyncGroupIndexFromName(UAnimInstance *this,FName param_1)

{
  IAnimClassInterface *pIVar1;
  int iVar2;
  FAnimInstanceProxy *pFVar3;
  
  pFVar3 = GetProxyOnGameThread<FAnimInstanceProxy>(this);
  pIVar1 = pFVar3->AnimClassInterface;
  if (pIVar1 != (IAnimClassInterface *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147464925. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar2 = (**(code **)((longlong)*pIVar1 + 0xa0))(pIVar1,param_1);
    return iVar2;
  }
  return -1;
}

// GetSyncGroupMapRead @ 147464940

TMap<FName,FAnimGroupInstance,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAnimGroupInstance,0>_>
* __thiscall UAnimInstance::GetSyncGroupMapRead(UAnimInstance *this)

{
  FAnimInstanceProxy *pFVar1;
  
  pFVar1 = GetProxyOnGameThread<FAnimInstanceProxy>(this);
  return (pFVar1->Sync).SyncGroupMaps + (1 - (pFVar1->Sync).SyncGroupWriteIndex);
}

// GetSyncGroupPosition @ 1474649b0

FMarkerSyncAnimPosition * __thiscall
UAnimInstance::GetSyncGroupPosition
          (UAnimInstance *this,FMarkerSyncAnimPosition *__return_storage_ptr__,FName param_1)

{
  FAnimInstanceProxy *pFVar1;
  
  pFVar1 = GetProxyOnAnyThread<FAnimInstanceProxy>(this);
  UE::Anim::FAnimSync::GetSyncGroupPosition(&pFVar1->Sync,__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// GetTimeToClosestMarker @ 147464b30

bool __thiscall
UAnimInstance::GetTimeToClosestMarker
          (UAnimInstance *this,FName param_1,FName param_2,float *param_3)

{
  bool bVar1;
  FAnimInstanceProxy *pFVar2;
  
  pFVar2 = GetProxyOnAnyThread<FAnimInstanceProxy>(this);
  bVar1 = UE::Anim::FAnimSync::GetTimeToClosestMarker(&pFVar2->Sync,param_1,param_2,param_3);
  return bVar1;
}

// GetUngroupedActivePlayersRead @ 147464bf0

TArray<FAnimTickRecord,TSizedDefaultAllocator<32>_> * __thiscall
UAnimInstance::GetUngroupedActivePlayersRead(UAnimInstance *this)

{
  FAnimInstanceProxy *pFVar1;
  
  pFVar1 = GetProxyOnGameThread<FAnimInstanceProxy>(this);
  return (pFVar1->Sync).UngroupedActivePlayerArrays + (1 - (pFVar1->Sync).SyncGroupWriteIndex);
}

// GetUngroupedActivePlayersRead_AnyThread @ 147464c20

TArray<FAnimTickRecord,TSizedDefaultAllocator<32>_> * __thiscall
UAnimInstance::GetUngroupedActivePlayersRead_AnyThread(UAnimInstance *this)

{
  FAnimInstanceProxy *pFVar1;
  
  pFVar1 = GetProxyOnAnyThread<FAnimInstanceProxy>(this);
  return (pFVar1->Sync).UngroupedActivePlayerArrays + (1 - (pFVar1->Sync).SyncGroupWriteIndex);
}

// GetUpdateCounter @ 147464c50

FGraphTraversalCounter * __thiscall UAnimInstance::GetUpdateCounter(UAnimInstance *this)

{
  FAnimInstanceProxy *pFVar1;
  
  pFVar1 = GetProxyOnGameThread<FAnimInstanceProxy>(this);
  return &pFVar1->UpdateCounter;
}

// GetWorld @ 147464ee0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UWorld * __thiscall UAnimInstance::GetWorld(UAnimInstance *this)

{
  USkeletalMeshComponent *this_00;
  UWorld *pUVar1;
  
  if ((*(uint *)&this->field_0x8 & 0x10) != 0) {
    return (UWorld *)0x0;
  }
  this_00 = GetSkelMeshComponent(this);
  if ((UWorld *)this_00->_padding_ == (UWorld *)0x0) {
    pUVar1 = UActorComponent::GetWorld_Uncached((UActorComponent *)this_00);
    return pUVar1;
  }
  return (UWorld *)this_00->_padding_;
}

// HandleExistingParallelEvaluationTask @ 147464f20

void __cdecl UAnimInstance::HandleExistingParallelEvaluationTask(USkeletalMeshComponent *param_1)

{
  USkeletalMeshComponent::HandleExistingParallelEvaluationTask(param_1,true,true);
  return;
}

// HandleNotify @ 147464f40

bool __thiscall UAnimInstance::HandleNotify(UAnimInstance *this,FAnimNotifyEvent *param_1)

{
  return false;
}

// HasActiveCurves @ 147464f90

bool __thiscall UAnimInstance::HasActiveCurves(UAnimInstance *this)

{
  int *piVar1;
  FAnimInstanceProxy *pFVar2;
  int *piVar3;
  
  pFVar2 = GetProxyOnAnyThread<FAnimInstanceProxy>(this);
  if ((TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)pFVar2->AnimationCurves !=
      &pFVar2->MaterialParametersToClear) {
    piVar3 = (int *)&pFVar2->AnimationCurves[0].field_0x8;
    do {
      if (0 < *piVar3 - piVar3[0xb]) {
        return true;
      }
      piVar1 = piVar3 + 0x12;
      piVar3 = piVar3 + 0x14;
    } while ((TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)piVar1 !=
             &pFVar2->MaterialParametersToClear);
  }
  return false;
}

// HasMarkerBeenHitThisFrame @ 147465010

bool __thiscall
UAnimInstance::HasMarkerBeenHitThisFrame(UAnimInstance *this,FName param_1,FName param_2)

{
  bool bVar1;
  FAnimInstanceProxy *pFVar2;
  
  pFVar2 = GetProxyOnAnyThread<FAnimInstanceProxy>(this);
  bVar1 = UE::Anim::FAnimSync::HasMarkerBeenHitThisFrame(&pFVar2->Sync,param_1,param_2);
  return bVar1;
}

// HasMorphTargetCurves @ 147465050

bool __thiscall UAnimInstance::HasMorphTargetCurves(UAnimInstance *this)

{
  FAnimInstanceProxy *pFVar1;
  
  pFVar1 = GetProxyOnAnyThread<FAnimInstanceProxy>(this);
  return 0 < *(int *)&pFVar1->AnimationCurves[2].field_0x8 -
             *(int *)&pFVar1->AnimationCurves[2].field_0x34;
}

// HasNativeStateEntryBinding @ 147465120

bool __thiscall
UAnimInstance::HasNativeStateEntryBinding
          (UAnimInstance *this,FName *param_1,FName *param_2,FName *param_3)

{
  FName *pFVar1;
  int iVar2;
  FAnimInstanceProxy *pFVar3;
  FName *pFVar4;
  undefined1 local_28 [16];
  
  pFVar3 = GetProxyOnGameThread<FAnimInstanceProxy>(this);
  iVar2 = (pFVar3->NativeStateEntryBindings).ArrayNum;
  pFVar4 = (FName *)(pFVar3->NativeStateEntryBindings).AllocatorInstance.Data;
  pFVar1 = pFVar4 + (longlong)iVar2 * 5;
  while( true ) {
    if ((pFVar3->NativeStateEntryBindings).ArrayNum != iVar2) {
      `TCheckedPointerIterator<FNativeStateBinding,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_28);
    }
    if (pFVar4 == pFVar1) break;
    if ((*pFVar4 == *param_1) && (pFVar4[1] == *param_2)) {
      param_3->ComparisonIndex = 0;
      param_3->Number = 0;
      return true;
    }
    pFVar4 = pFVar4 + 5;
  }
  return false;
}

// HasNativeStateExitBinding @ 147465270

bool __thiscall
UAnimInstance::HasNativeStateExitBinding
          (UAnimInstance *this,FName *param_1,FName *param_2,FName *param_3)

{
  FName *pFVar1;
  int iVar2;
  FAnimInstanceProxy *pFVar3;
  FName *pFVar4;
  undefined1 local_28 [16];
  
  pFVar3 = GetProxyOnGameThread<FAnimInstanceProxy>(this);
  iVar2 = (pFVar3->NativeStateExitBindings).ArrayNum;
  pFVar4 = (FName *)(pFVar3->NativeStateExitBindings).AllocatorInstance.Data;
  pFVar1 = pFVar4 + (longlong)iVar2 * 5;
  while( true ) {
    if ((pFVar3->NativeStateExitBindings).ArrayNum != iVar2) {
      `TCheckedPointerIterator<FNativeStateBinding,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_28);
    }
    if (pFVar4 == pFVar1) break;
    if ((*pFVar4 == *param_1) && (pFVar4[1] == *param_2)) {
      param_3->ComparisonIndex = 0;
      param_3->Number = 0;
      return true;
    }
    pFVar4 = pFVar4 + 5;
  }
  return false;
}

// HasNativeTransitionBinding @ 1474653d0

bool __thiscall
UAnimInstance::HasNativeTransitionBinding
          (UAnimInstance *this,FName *param_1,FName *param_2,FName *param_3,FName *param_4)

{
  int iVar1;
  FAnimInstanceProxy *pFVar2;
  FName *pFVar3;
  FName *pFVar4;
  undefined1 local_28 [16];
  
  pFVar2 = GetProxyOnAnyThread<FAnimInstanceProxy>(this);
  iVar1 = (pFVar2->NativeTransitionBindings).ArrayNum;
  pFVar3 = (FName *)(pFVar2->NativeTransitionBindings).AllocatorInstance.Data;
  pFVar4 = pFVar3 + (longlong)iVar1 * 6;
  while( true ) {
    if ((pFVar2->NativeTransitionBindings).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FNativeTransitionBinding,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_28);
    }
    if (pFVar3 == pFVar4) break;
    if (((*pFVar3 == *param_1) && (pFVar3[1] == *param_2)) && (pFVar3[2] == *param_3)) {
      param_4->ComparisonIndex = 0;
      param_4->Number = 0;
      return true;
    }
    pFVar3 = pFVar3 + 6;
  }
  return false;
}

// InitializeAnimation @ 147466080

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UAnimInstance::InitializeAnimation(UAnimInstance *this,bool param_1)

{
  byte *pbVar1;
  int *piVar2;
  AActor *this_00;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  FName *pFVar8;
  FThreadSafeStaticStat<FStat_STAT_AnimInitTime> FVar9;
  USkeletalMeshComponent *pUVar10;
  UWorld *pUVar11;
  USkeletalMesh *pUVar12;
  USkeleton *pUVar13;
  longlong lVar14;
  FAnimInstanceProxy *pFVar15;
  UFunction *pUVar16;
  longlong *plVar17;
  FThreadStats *this_01;
  FThreadStatsPool *this_02;
  uint uVar18;
  FNameEntryId FVar19;
  FName FVar20;
  undefined1 auStackY_188 [32];
  byte local_128;
  undefined1 local_127 [3];
  FColor_u_0 local_124;
  FLLMScope local_120;
  FLLMScope local_11c;
  FMemScope local_118;
  FName local_110;
  byte local_108;
  FName local_100;
  FName local_f8;
  undefined8 local_e8;
  FMemScope local_e0;
  LARGE_INTEGER local_d8;
  FStatMessage local_d0;
  code *local_c0;
  undefined1 *local_b8;
  FName local_b0;
  code *local_a8;
  undefined4 local_98;
  undefined4 uStack_94;
  UAnimInstance *pUStack_90;
  byte *local_88;
  longlong *local_80;
  undefined **local_68;
  UAnimInstance *pUStack_60;
  byte *local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_188;
  FScopeCycleCounterUObject::FScopeCycleCounterUObject
            ((FScopeCycleCounterUObject *)&local_110,(UObjectBaseUtility *)this);
  FVar9 = StatPtr_STAT_AnimInitTime;
  if (StatPtr_STAT_AnimInitTime == (FThreadSafeStaticStat<FStat_STAT_AnimInitTime>)0x0) {
    pFVar8 = ::FName::FName(&local_b0,"STAT_AnimInitTime");
    FVar9 = (FThreadSafeStaticStat<FStat_STAT_AnimInitTime>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AnimInitTime,*pFVar8,
                       L"Anim Init Time","STATGROUP_Anim","STATCAT_Advanced",L"Anim",true,true,
                       ST_int64,true,false,MCR_Invalid);
  }
  FVar20 = *(FName *)FVar9;
  bVar4 = false;
  bVar6 = false;
  local_f8.ComparisonIndex.Value = 0;
  local_f8.Number = 0;
  FVar19 = FVar20.ComparisonIndex.Value;
  uVar18 = FVar20.Number;
  if ((FVar19.Value == 0) && (uVar18 == 0)) {
LAB_1474661da:
    bVar5 = false;
    FVar20 = local_f8;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_124.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_124._s_0,(char *)*(FName *)((longlong)FVar9 + 0x10));
      bVar4 = false;
      bVar6 = true;
      if (-1 < CpuChannel->Enabled) {
        local_100.ComparisonIndex.Value = FVar19.Value;
        local_100.Number = uVar18;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_100,(wchar_t *)*(FName *)((longlong)FVar9 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimInstance.cpp"
                   ,0x115);
        bVar4 = true;
        bVar6 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_1474661da;
    local_118._0_4_ = FVar19.Value;
    local_118.PrevTag = uVar18;
    FThreadStats::AddMessage(FVar20,CycleScopeStart);
    bVar5 = true;
  }
  FLLMScope::FLLMScope(&local_11c,Animation,false,None,Default,true);
  FMemScope::FMemScope(&local_e0,Animation,true);
  UninitializeAnimation(this);
  this->bUninitialized = '\0';
  bVar7 = FTraceFilter::IsObjectTraceable<1>((UObject *)this);
  if (bVar7) {
LAB_147466268:
    FObjectTrace::OutputObjectLifetimeBegin((UObject *)this);
  }
  else {
    pUVar10 = GetSkelMeshComponent(this);
    bVar7 = FTraceFilter::IsObjectTraceable<1>((UObject *)pUVar10);
    if (bVar7) goto LAB_147466268;
    if (pUVar10 != (USkeletalMeshComponent *)0x0) {
      this_00 = (AActor *)pUVar10->_padding_;
      bVar7 = FTraceFilter::IsObjectTraceable<1>((UObject *)this_00);
      if ((bVar7) && (this_00 != (AActor *)0x0)) {
        pUVar11 = AActor::GetWorld(this_00);
        bVar7 = FTraceFilter::IsObjectTraceable<1>((UObject *)pUVar11);
        if (bVar7) goto LAB_147466268;
      }
    }
  }
  pUVar10 = GetSkelMeshComponent(this);
  pUVar12 = USkeletalMeshComponent::GetSkeletalMeshAsset(pUVar10);
  if (pUVar12 == (USkeletalMesh *)0x0) {
    pUVar13 = (USkeleton *)0x0;
  }
  else {
    pUVar12 = USkeletalMeshComponent::GetSkeletalMeshAsset(pUVar10);
    pUVar13 = (USkeleton *)(**(code **)(pUVar12->_padding_ + 0x408))(pUVar12);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar13 != (USkeleton *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar13);
    }
  }
  (this->CurrentSkeleton).field0_0x0.DebugPtr = pUVar13;
  IAnimClassInterface::GetFromClass(*(UClass **)&this->field_0x10);
  FLLMScope::FLLMScope(&local_120,Animation,false,None,Default,true);
  FMemScope::FMemScope(&local_118,Animation,true);
  pUVar10 = GetSkelMeshComponent(this);
  if (pUVar10 == (USkeletalMeshComponent *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("SkelMeshComp",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimInstance.cpp"
                       ,0x595,L"");
    if (bVar7) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pUVar12 = USkeletalMeshComponent::GetSkeletalMeshAsset(pUVar10);
  if (pUVar12 == (USkeletalMesh *)0x0) {
LAB_14746636f:
    if ((this->CurrentSkeleton).field0_0x0.DebugPtr == (USkeleton *)0x0) goto LAB_14746638c;
    pFVar15 = GetProxyOnGameThread<FAnimInstanceProxy>(this);
    pUVar12 = (USkeletalMesh *)(this->CurrentSkeleton).field0_0x0.DebugPtr;
  }
  else {
    pUVar12 = USkeletalMeshComponent::GetSkeletalMeshAsset(pUVar10);
    lVar14 = (**(code **)(pUVar12->_padding_ + 0x408))(pUVar12);
    if (lVar14 == 0) goto LAB_14746636f;
    pFVar15 = GetProxyOnGameThread<FAnimInstanceProxy>(this);
    pUVar12 = USkeletalMeshComponent::GetSkeletalMeshAsset(pUVar10);
  }
  FAnimInstanceProxy::RecalcRequiredBones(pFVar15,pUVar10,(UObject *)pUVar12);
LAB_14746638c:
  FMemScope::~FMemScope(&local_118);
  FLLMScope::~FLLMScope(&local_120);
  pFVar15 = GetProxyOnGameThread<FAnimInstanceProxy>(this);
  (**(code **)(*(longlong *)pFVar15 + 8))(pFVar15,this);
  local_128 = this->bInitializing;
  this->bInitializing = '\x01';
  local_a8 = UE::Core::Private::Function::
             TFunctionRefCaller<`UAnimInstance::InitializeAnimation'::__l14::<lambda_1>,void>::Call;
  local_68 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UAnimInstance::InitializeAnimation'::`14'::<lambda_1>,0,0>::
              _vftable_;
  local_88 = &local_128;
  local_80 = (longlong *)0x0;
  local_98 = 0x516ceac0;
  uStack_94 = 1;
  pUStack_60 = this;
  local_58 = local_88;
  pUStack_90 = this;
  (**(code **)(*(longlong *)this + 800))(this);
  pUVar16 = UObject::FindFunctionChecked
                      ((UObject *)this,NAME_UAnimInstance_BlueprintInitializeAnimation);
  (**(code **)(*(longlong *)this + 0x260))(this,pUVar16);
  UE::Core::Private::Function::CheckCallable(local_a8);
  pcVar3 = local_a8;
  plVar17 = (longlong *)&local_98;
  if (local_80 != (longlong *)0x0) {
    plVar17 = local_80;
  }
  plVar17 = (longlong *)(**(code **)(*plVar17 + 8))();
  if (pcVar3 == UE::Core::Private::Function::
                TFunctionRefCaller<`UAnimInstance::InitializeAnimation'::__l14::<lambda_1>,void>::
                Call) {
    pbVar1 = (byte *)(*plVar17 + 0x33);
    *pbVar1 = *pbVar1 ^ (*(char *)plVar17[1] << 2 ^ *(byte *)(*plVar17 + 0x33)) & 4;
  }
  else {
    (*pcVar3)(plVar17);
  }
  if (local_a8 != (code *)0x0) {
    plVar17 = (longlong *)&local_98;
    if (local_80 != (longlong *)0x0) {
      plVar17 = local_80;
    }
    (**(code **)(*plVar17 + 0x10))();
  }
  pFVar15 = GetProxyOnGameThread<FAnimInstanceProxy>(this);
  FAnimInstanceProxy::InitializeRootNode(pFVar15,param_1);
  pFVar15 = GetProxyOnGameThread<FAnimInstanceProxy>(this);
  FAnimInstanceProxy::BindNativeDelegates(pFVar15);
  pUVar10 = GetSkelMeshComponent(this);
  if ((pUVar10->_padding_ & 1) != 0) {
    local_b8 = local_127;
    local_e8 = 0;
    local_c0 = UE::Core::Private::Function::
               TFunctionRefCaller<`UAnimInstance::InitializeGroupedLayers'::__l2::<lambda_1>,UClass_*,UClass_*,FAnimNode_LinkedAnimLayer_*>
               ::Call;
    PerformLinkedLayerOverlayOperation
              (this,(TSubclassOf<UAnimInstance>)&local_e8,
               (TFunctionRef<UClass_*___cdecl(UClass_*,FAnimNode_LinkedAnimLayer_*)> *)&local_c0,
               param_1);
  }
  (**(code **)(*(longlong *)this + 0x348))(this);
  pUVar16 = UObject::FindFunctionChecked
                      ((UObject *)this,NAME_UAnimInstance_BlueprintLinkedAnimationLayersInitialized)
  ;
  (**(code **)(*(longlong *)this + 0x260))(this,pUVar16);
  FMemScope::~FMemScope(&local_e0);
  FLLMScope::~FLLMScope(&local_11c);
  if (bVar6) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && (FVar20 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_01 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_01 == (FThreadStats *)0x0) {
      this_02 = FThreadStatsPool::Get();
      this_01 = FThreadStatsPool::GetFromPool(this_02);
    }
    if (this_01->bWaitForExplicitFlush < this_01->ScopeCount) {
      local_d0.NameAndInfo.Index = FVar20.ComparisonIndex.Value;
      local_d0.NameAndInfo.Number = FVar20.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_d8);
      local_d0.StatData.Pad[4] = '\0';
      local_d0.StatData.Pad[5] = '\0';
      local_d0.StatData.Pad[6] = '\0';
      local_d0.StatData.Pad[7] = '\0';
      local_d0.StatData.Pad[0] = local_d8.s.LowPart._0_1_;
      local_d0.StatData.Pad[1] = local_d8.s.LowPart._1_1_;
      local_d0.StatData.Pad[2] = local_d8.s.LowPart._2_1_;
      local_d0.StatData.Pad[3] = local_d8.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_01,&local_d0);
      piVar2 = &this_01->ScopeCount;
      *piVar2 = *piVar2 + -1;
      if (*piVar2 == 0) {
        FThreadStats::Flush(this_01,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_01,false,false);
      }
    }
  }
  if ((local_108 & 1) != 0) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if ((local_108 & 2) != 0) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((local_108 & 4) != 0) {
    FThreadStats::AddMessage(local_110,CycleScopeEnd);
  }
  return;
}

// InitializeGroupedLayers @ 147466c70

void __thiscall UAnimInstance::InitializeGroupedLayers(UAnimInstance *this,bool param_1)

{
  USkeletalMeshComponent *pUVar1;
  undefined1 local_res18 [8];
  undefined8 local_res20;
  code *local_18;
  undefined1 *local_10;
  
  pUVar1 = GetSkelMeshComponent(this);
  if ((pUVar1->_padding_ & 1) != 0) {
    local_10 = local_res18;
    local_res20 = 0;
    local_18 = UE::Core::Private::Function::
               TFunctionRefCaller<`UAnimInstance::InitializeGroupedLayers'::__l2::<lambda_1>,UClass_*,UClass_*,FAnimNode_LinkedAnimLayer_*>
               ::Call;
    PerformLinkedLayerOverlayOperation
              (this,(TSubclassOf<UAnimInstance>)&local_res20,
               (TFunctionRef<UClass_*___cdecl(UClass_*,FAnimNode_LinkedAnimLayer_*)> *)&local_18,
               param_1);
  }
  return;
}

// IsAnyMontagePlaying @ 147467340

bool __thiscall UAnimInstance::IsAnyMontagePlaying(UAnimInstance *this)

{
  return 0 < (this->MontageInstances).ArrayNum;
}

// IsInitialized @ 147467400

bool __thiscall UAnimInstance::IsInitialized(UAnimInstance *this)

{
  return (bool)(~this->bUninitialized & 1);
}

// IsPlayingSlotAnimation @ 147467420

bool __thiscall
UAnimInstance::IsPlayingSlotAnimation(UAnimInstance *this,UAnimSequenceBase *param_1,FName param_2)

{
  undefined8 *puVar1;
  UAnimMontage *this_00;
  UPackage *pUVar2;
  UAnimSequenceBase *pUVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  uint uVar7;
  UPackage *pUVar8;
  FAnimTrack *pFVar9;
  uint uVar10;
  longlong lVar11;
  
  uVar10 = 0;
  if (0 < (this->MontageInstances).ArrayNum) {
    lVar11 = 0;
    do {
      uVar7 = 0;
      if ((int)uVar10 < (this->MontageInstances).ArrayNum) {
        uVar7 = ~uVar10 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
      puVar1 = *(undefined8 **)((this->MontageInstances).AllocatorInstance.Data + lVar11);
      if ((((puVar1 != (undefined8 *)0x0) &&
           (this_00 = (UAnimMontage *)*puVar1, this_00 != (UAnimMontage *)0x0)) &&
          (*(float *)(puVar1 + 0x34) != 0.0)) &&
         (((*(char *)(puVar1 + 0xd) != '\0' &&
           (pUVar2 = (UPackage *)this_00->_padding_, pUVar8 = GetTransientPackage(),
           pUVar2 == pUVar8)) &&
          ((pFVar9 = UAnimMontage::GetAnimationData(this_00,param_2), pFVar9 != (FAnimTrack *)0x0 &&
           ((pFVar9->AnimSegments).ArrayNum == 1)))))) {
        pUVar3 = *(UAnimSequenceBase **)(pFVar9->AnimSegments).AllocatorInstance.Data;
        if (pUVar3 == (UAnimSequenceBase *)0x0) {
          return param_1 == (UAnimSequenceBase *)0x0;
        }
        return pUVar3 == param_1;
      }
      uVar10 = uVar10 + 1;
      lVar11 = lVar11 + 8;
    } while ((int)uVar10 < (this->MontageInstances).ArrayNum);
  }
  return false;
}

// IsPlayingSlotAnimation @ 147467560

bool __thiscall
UAnimInstance::IsPlayingSlotAnimation
          (UAnimInstance *this,UAnimSequenceBase *param_1,FName param_2,UAnimMontage **param_3)

{
  undefined8 *puVar1;
  UAnimMontage *this_00;
  UPackage *pUVar2;
  UAnimSequenceBase *pUVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  uint uVar7;
  UPackage *pUVar8;
  FAnimTrack *pFVar9;
  uint uVar10;
  longlong lVar11;
  
  uVar10 = 0;
  if (0 < (this->MontageInstances).ArrayNum) {
    lVar11 = 0;
    do {
      uVar7 = 0;
      if ((int)uVar10 < (this->MontageInstances).ArrayNum) {
        uVar7 = ~uVar10 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
      puVar1 = *(undefined8 **)((this->MontageInstances).AllocatorInstance.Data + lVar11);
      if (((((puVar1 != (undefined8 *)0x0) &&
            (this_00 = (UAnimMontage *)*puVar1, this_00 != (UAnimMontage *)0x0)) &&
           (*(float *)(puVar1 + 0x34) != 0.0)) &&
          ((*(char *)(puVar1 + 0xd) != '\0' &&
           (pUVar2 = (UPackage *)this_00->_padding_, pUVar8 = GetTransientPackage(),
           pUVar2 == pUVar8)))) &&
         ((pFVar9 = UAnimMontage::GetAnimationData(this_00,param_2), pFVar9 != (FAnimTrack *)0x0 &&
          ((pFVar9->AnimSegments).ArrayNum == 1)))) {
        *param_3 = this_00;
        if (((pFVar9->AnimSegments).ArrayNum < 1) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          uVar6 = (*pcVar4)();
          return (bool)uVar6;
        }
        pUVar3 = *(UAnimSequenceBase **)(pFVar9->AnimSegments).AllocatorInstance.Data;
        if (pUVar3 == (UAnimSequenceBase *)0x0) {
          return param_1 == (UAnimSequenceBase *)0x0;
        }
        return pUVar3 == param_1;
      }
      uVar10 = uVar10 + 1;
      lVar11 = lVar11 + 8;
    } while ((int)uVar10 < (this->MontageInstances).ArrayNum);
  }
  return false;
}

// IsRunningParallelEvaluation @ 1474676f0

bool __thiscall UAnimInstance::IsRunningParallelEvaluation(UAnimInstance *this)

{
  USkeletalMeshComponent *this_00;
  UAnimInstance *pUVar1;
  
  this_00 = GetSkelMeshComponent(this);
  if (this_00 != (USkeletalMeshComponent *)0x0) {
    pUVar1 = USkeletalMeshComponent::GetAnimInstance(this_00);
    if (pUVar1 == this) {
      return (this_00->ParallelAnimationEvaluationTask).Reference != (FBaseGraphTask *)0x0;
    }
  }
  return false;
}

// IsSkeletalMeshComponent @ 147467750

bool __cdecl UAnimInstance::IsSkeletalMeshComponent(UObject *param_1)

{
  int iVar1;
  UClass *pUVar2;
  
  if (param_1 != (UObject *)0x0) {
    pUVar2 = Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar2->_padding_)) {
      return true;
    }
  }
  return false;
}

// IsSlotActive @ 1474677a0

bool __thiscall UAnimInstance::IsSlotActive(UAnimInstance *this,FName param_1)

{
  int iVar1;
  bool bVar2;
  FAnimInstanceProxy *pFVar3;
  UAnimMontage *this_00;
  FWeakObjectPtr *pFVar4;
  FAnimInstanceProxy *pFVar5;
  FWeakObjectPtr *this_01;
  undefined1 local_res10 [8];
  
  if (param_1 != (FName)0x0) {
    pFVar3 = GetProxyOnAnyThread<FAnimInstanceProxy>(this);
    if ((pFVar3->bUseMainInstanceMontageEvaluationData == '\0') ||
       (pFVar5 = pFVar3->MainInstanceProxy, pFVar3->MainInstanceProxy == (FAnimInstanceProxy *)0x0))
    {
      pFVar5 = pFVar3;
    }
    iVar1 = (pFVar5->MontageEvaluationData).ArrayNum;
    this_01 = (FWeakObjectPtr *)(pFVar5->MontageEvaluationData).AllocatorInstance.Data;
    pFVar4 = this_01 + (longlong)iVar1 * 0xb;
    while( true ) {
      if ((pFVar5->MontageEvaluationData).ArrayNum != iVar1) {
        `TCheckedPointerIterator<FMontageEvaluationState_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res10);
      }
      if (this_01 == pFVar4) break;
      bVar2 = FWeakObjectPtr::IsValid(this_01);
      if (bVar2) {
        this_00 = (UAnimMontage *)FWeakObjectPtr::Get(this_01);
        bVar2 = UAnimMontage::IsValidSlot(this_00,param_1);
        if ((bVar2) && (*(char *)((longlong)&this_01[10].ObjectSerialNumber + 1) != '\0')) {
          return true;
        }
      }
      this_01 = this_01 + 0xb;
    }
  }
  return false;
}

// IsSyncGroupBetweenMarkers @ 147467940

bool __thiscall
UAnimInstance::IsSyncGroupBetweenMarkers
          (UAnimInstance *this,FName param_1,FName param_2,FName param_3,bool param_4)

{
  bool bVar1;
  FAnimInstanceProxy *pFVar2;
  
  pFVar2 = GetProxyOnAnyThread<FAnimInstanceProxy>(this);
  bVar1 = UE::Anim::FAnimSync::IsSyncGroupBetweenMarkers
                    (&pFVar2->Sync,param_1,param_2,param_3,param_4);
  return bVar1;
}

// LinkAnimClassLayers @ 147467ca0

void __thiscall
UAnimInstance::LinkAnimClassLayers(UAnimInstance *this,TSubclassOf<UAnimInstance> param_1)

{
  USkeletalMeshComponent *pUVar1;
  undefined1 local_res18 [8];
  UObject *local_res20;
  code *local_18;
  undefined1 *local_10;
  
  pUVar1 = GetSkelMeshComponent(this);
  if ((pUVar1->_padding_ & 1) != 0) {
    local_10 = local_res18;
    local_res20 = *(UObject **)param_1.Class.field0_0x0;
    local_18 = UE::Core::Private::Function::
               TFunctionRefCaller<`UAnimInstance::LinkAnimClassLayers'::__l2::<lambda_1>,UClass_*,UClass_*,FAnimNode_LinkedAnimLayer_*>
               ::Call;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res20 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_res20);
    }
    PerformLinkedLayerOverlayOperation
              (this,(TSubclassOf<UAnimInstance>)&local_res20,
               (TFunctionRef<UClass_*___cdecl(UClass_*,FAnimNode_LinkedAnimLayer_*)> *)&local_18,
               false);
  }
  return;
}

// LinkAnimGraphByTag @ 147467d20

void __thiscall
UAnimInstance::LinkAnimGraphByTag
          (UAnimInstance *this,FName param_1,TSubclassOf<UAnimInstance> param_2)

{
  code *pcVar1;
  IAnimClassInterface *pIVar2;
  UScriptStruct *pUVar3;
  FAnimSubsystem_Tag *this_00;
  FAnimNode_LinkedAnimGraph *this_01;
  UObject *local_res8;
  
  pIVar2 = IAnimClassInterface::GetFromClass(*(UClass **)&this->field_0x10);
  if (pIVar2 != (IAnimClassInterface *)0x0) {
    pcVar1 = *(code **)((longlong)*pIVar2 + 0xc0);
    pUVar3 = FAnimSubsystem_Tag::StaticStruct();
    this_00 = (FAnimSubsystem_Tag *)(*pcVar1)(pIVar2,pUVar3);
    if (this_00 != (FAnimSubsystem_Tag *)0x0) {
      pUVar3 = FAnimNode_LinkedAnimGraph::StaticStruct();
      this_01 = (FAnimNode_LinkedAnimGraph *)
                FAnimSubsystem_Tag::FindNodeByTag_Internal(this_00,param_1,this,pUVar3);
      if (this_01 != (FAnimNode_LinkedAnimGraph *)0x0) {
        local_res8 = *(UObject **)param_2.Class.field0_0x0;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UObject *)0x0))
        {
          UE::GC::MarkAsReachable(local_res8);
        }
        FAnimNode_LinkedAnimGraph::SetAnimClass
                  (this_01,(TSubclassOf<UAnimInstance>)&local_res8,this);
      }
    }
  }
  return;
}

// LockAIResources @ 147467dd0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UAnimInstance::LockAIResources(UAnimInstance *this,bool param_1,bool param_2)

{
  FName local_res20;
  FString local_18;
  
  if (1 < (byte)LogAnimation._0_1_) {
    local_res20.ComparisonIndex.Value = *(uint *)&this->field_0x18;
    local_res20.Number = *(uint *)&this->field_0x1c;
    ::FName::ToString(&local_res20,&local_18);
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAnimation);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// MakeMontageTickRecord @ 147468400

void __thiscall
UAnimInstance::MakeMontageTickRecord
          (UAnimInstance *this,FAnimTickRecord *param_1,UAnimMontage *param_2,float param_3,
          float param_4,TArray<FPassedMarker,TSizedDefaultAllocator<32>_> *param_5,
          FMarkerTickRecord *param_6)

{
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_2 != (UAnimMontage *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_2);
  }
  (param_1->SourceAsset).field0_0x0.DebugPtr = (UAnimationAsset *)param_2;
  (param_1->field13_0x40).Montage.MarkersPassedThisTick = param_5;
  (param_1->field13_0x40).Montage.CurrentPosition = param_3;
  param_1->MarkerTickRecord = param_6;
  param_1->EffectiveBlendWeight = param_4;
  param_1->PlayRateMultiplier = 1.0;
  param_1->bLooping = false;
  return;
}

// MontageSync_Follow @ 147468570

void __thiscall
UAnimInstance::MontageSync_Follow
          (UAnimInstance *this,UAnimMontage *param_1,UAnimInstance *param_2,UAnimMontage *param_3)

{
  FAnimMontageInstance **ppFVar1;
  FAnimMontageInstance *pFVar2;
  FAnimMontageInstance *this_00;
  
  if (((param_1 != (UAnimMontage *)0x0) && (param_2 != (UAnimInstance *)0x0)) &&
     (param_3 != (UAnimMontage *)0x0)) {
    ppFVar1 = TMapBase<UAnimMontage_*,FAnimMontageInstance_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UAnimMontage_*,FAnimMontageInstance_*,0>_>
              ::Find((TMapBase<UAnimMontage_*,FAnimMontageInstance_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UAnimMontage_*,FAnimMontageInstance_*,0>_>
                      *)&this->ActiveMontagesMap,param_1);
    pFVar2 = (FAnimMontageInstance *)0x0;
    this_00 = pFVar2;
    if (ppFVar1 != (FAnimMontageInstance **)0x0) {
      this_00 = *ppFVar1;
    }
    ppFVar1 = TMapBase<UAnimMontage_*,FAnimMontageInstance_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UAnimMontage_*,FAnimMontageInstance_*,0>_>
              ::Find((TMapBase<UAnimMontage_*,FAnimMontageInstance_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UAnimMontage_*,FAnimMontageInstance_*,0>_>
                      *)&param_2->ActiveMontagesMap,param_3);
    if (ppFVar1 != (FAnimMontageInstance **)0x0) {
      pFVar2 = *ppFVar1;
    }
    if ((this_00 != (FAnimMontageInstance *)0x0) && (pFVar2 != (FAnimMontageInstance *)0x0)) {
      FAnimMontageInstance::MontageSync_Follow(this_00,pFVar2);
    }
  }
  return;
}

// MontageSync_StopFollowing @ 147468600

void __thiscall UAnimInstance::MontageSync_StopFollowing(UAnimInstance *this,UAnimMontage *param_1)

{
  FAnimMontageInstance **ppFVar1;
  
  if (param_1 != (UAnimMontage *)0x0) {
    ppFVar1 = TMapBase<UAnimMontage_*,FAnimMontageInstance_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UAnimMontage_*,FAnimMontageInstance_*,0>_>
              ::Find((TMapBase<UAnimMontage_*,FAnimMontageInstance_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UAnimMontage_*,FAnimMontageInstance_*,0>_>
                      *)&this->ActiveMontagesMap,param_1);
    if ((ppFVar1 != (FAnimMontageInstance **)0x0) && (*ppFVar1 != (FAnimMontageInstance *)0x0)) {
      FAnimMontageInstance::MontageSync_StopFollowing(*ppFVar1);
      return;
    }
  }
  return;
}

// Montage_Advance @ 147468640

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UAnimInstance::Montage_Advance(UAnimInstance *this,float param_1)

{
  uchar uVar1;
  FAnimMontageInstance *this_00;
  UAnimMontage *pUVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  uint uVar8;
  FName *pFVar9;
  FThreadSafeStaticStat<FStat_STAT_Montage_Advance> FVar10;
  uint uVar11;
  longlong lVar12;
  FRootMotionMovementParams *pFVar13;
  undefined1 auStackY_168 [32];
  FName local_100;
  FColor_u_0 local_f8 [2];
  FName local_f0;
  FName local_e8;
  FName local_d8 [2];
  FRootMotionMovementParams local_c8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_168;
  this->bQueueMontageEvents = '\x01';
  if ((this->MontageInstances).ArrayNum == 0) {
    return;
  }
  FVar10 = StatPtr_STAT_Montage_Advance;
  if (StatPtr_STAT_Montage_Advance == (FThreadSafeStaticStat<FStat_STAT_Montage_Advance>)0x0) {
    pFVar9 = ::FName::FName(local_d8,"STAT_Montage_Advance");
    FVar10 = (FThreadSafeStaticStat<FStat_STAT_Montage_Advance>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Montage_Advance,*pFVar9,
                        L"MontageAdvance","STATGROUP_Anim","STATCAT_Advanced",L"Anim",true,true,
                        ST_int64,true,false,MCR_Invalid);
  }
  local_100 = *(FName *)FVar10;
  bVar4 = false;
  bVar5 = false;
  local_e8.ComparisonIndex.Value = 0;
  local_e8.Number = 0;
  bVar6 = false;
  bVar7 = false;
  if ((local_100.ComparisonIndex.Value.Value != 0) || (local_100.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_f8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_f8[0]._s_0,(char *)*(FName *)((longlong)FVar10 + 0x10));
      bVar4 = false;
      bVar5 = true;
      bVar6 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_f0.ComparisonIndex.Value = local_100.ComparisonIndex.Value.Value;
        local_f0.Number = local_100.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_f0,(wchar_t *)*(FName *)((longlong)FVar10 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimInstance.cpp"
                   ,0x79e);
        bVar4 = true;
        bVar5 = true;
        bVar6 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      FThreadStats::AddMessage(local_100,CycleScopeStart);
      bVar6 = true;
      goto LAB_1474687d4;
    }
  }
  bVar5 = bVar7;
  bVar4 = bVar6;
  bVar6 = false;
  local_100 = local_e8;
LAB_1474687d4:
  uVar11 = 0;
  if (0 < (this->MontageInstances).ArrayNum) {
    lVar12 = 0;
    do {
      uVar8 = 0;
      if ((int)uVar11 < (this->MontageInstances).ArrayNum) {
        uVar8 = ~uVar11 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      this_00 = *(FAnimMontageInstance **)((this->MontageInstances).AllocatorInstance.Data + lVar12)
      ;
      if (this_00 == (FAnimMontageInstance *)0x0) {
        bVar7 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_8124036945119541338>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimInstance.cpp"
                           ,0x7a6,"MontageInstance");
        if (bVar7) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      else {
        pUVar2 = (this_00->Montage).field0_0x0.DebugPtr;
        if ((pUVar2 != (UAnimMontage *)0x0) && (((uint)pUVar2->_padding_ >> 0x1e & 1) == 0)) {
          uVar1 = (this->RootMotionMode).Value;
          if ((this_00->DisableRootMotionCount < 1) &&
             ((uVar1 == '\x02' || ((uVar1 != '\0' && (this_00 == this->RootMotionMontageInstance))))
             )) {
            bVar7 = true;
          }
          else {
            bVar7 = false;
          }
          pFVar13 = (FRootMotionMovementParams *)0x0;
          local_c8.bHasRootMotion = false;
          local_c8.BlendWeight = 0.0;
          local_c8.RootMotionTransform.Rotation.XY.m128d_f64[0] =
               (double)GlobalVectorConstants::Float0001.m128_f32[0];
          local_c8.RootMotionTransform.Rotation.XY.m128d_f64[1] =
               (double)GlobalVectorConstants::Float0001.m128_f32[1];
          local_c8.RootMotionTransform.Rotation.ZW.m128d_f64[0] =
               (double)GlobalVectorConstants::Float0001.m128_f32[2];
          local_c8.RootMotionTransform.Rotation.ZW.m128d_f64[1] =
               (double)GlobalVectorConstants::Float0001.m128_f32[3];
          local_c8.RootMotionTransform.Translation.XY.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
          local_c8.RootMotionTransform.Translation.XY.m128d_f64[0] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[0];
          local_c8.RootMotionTransform.Translation.XY.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
          local_c8.RootMotionTransform.Translation.ZW.m128d_f64[0] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[2];
          local_c8.RootMotionTransform.Translation.ZW.m128d_f64[1] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[3];
          local_c8.RootMotionTransform.Scale3D.XY.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
          local_c8.RootMotionTransform.Scale3D.XY.m128d_f64[0] =
               (double)GlobalVectorConstants::Float1110.m128_f32[0];
          local_c8.RootMotionTransform.Scale3D.XY.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
          local_c8.RootMotionTransform.Scale3D.ZW.m128d_f64[0] =
               (double)GlobalVectorConstants::Float1110.m128_f32[2];
          local_c8.RootMotionTransform.Scale3D.ZW.m128d_f64[1] =
               (double)GlobalVectorConstants::Float1110.m128_f32[3];
          if ((bVar7) && (pFVar13 = &this->ExtractedRootMotion, uVar1 == '\x01')) {
            pFVar13 = &local_c8;
          }
          FAnimMontageInstance::MontageSync_PreUpdate(this_00);
          FAnimMontageInstance::Advance(this_00,param_1,pFVar13,uVar1 == '\x02');
          if (((int)uVar11 < 0) || ((this->MontageInstances).ArrayNum <= (int)uVar11)) break;
          uVar8 = 0;
          if ((int)uVar11 < (this->MontageInstances).ArrayNum) {
            uVar8 = ~uVar11 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          if (*(FAnimMontageInstance **)((this->MontageInstances).AllocatorInstance.Data + lVar12)
              != this_00) break;
          FAnimMontageInstance::MontageSync_PostUpdate(this_00);
        }
      }
      uVar11 = uVar11 + 1;
      lVar12 = lVar12 + 8;
    } while ((int)uVar11 < (this->MontageInstances).ArrayNum);
  }
  if (bVar5) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar6) {
    FThreadStats::AddMessage(local_100,CycleScopeEnd);
  }
  return;
}

// Montage_GetBlendTime @ 147468aa0

float __thiscall UAnimInstance::Montage_GetBlendTime(UAnimInstance *this,UAnimMontage *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FAnimMontageInstance **ppFVar5;
  uint uVar6;
  longlong lVar7;
  float fVar8;
  
  if (param_1 == (UAnimMontage *)0x0) {
    uVar6 = 0;
    if (0 < (this->MontageInstances).ArrayNum) {
      lVar7 = 0;
      do {
        uVar4 = 0;
        if ((int)uVar6 < (this->MontageInstances).ArrayNum) {
          uVar4 = ~uVar6 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          fVar8 = (float)(*pcVar2)();
          return fVar8;
        }
        plVar1 = *(longlong **)((this->MontageInstances).AllocatorInstance.Data + lVar7);
        if (((plVar1 != (longlong *)0x0) && (*plVar1 != 0)) && (*(float *)(plVar1 + 0x34) != 0.0)) {
          return *(float *)(plVar1 + 0x31);
        }
        uVar6 = uVar6 + 1;
        lVar7 = lVar7 + 8;
      } while ((int)uVar6 < (this->MontageInstances).ArrayNum);
    }
  }
  else {
    ppFVar5 = TMapBase<UAnimMontage_*,FAnimMontageInstance_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UAnimMontage_*,FAnimMontageInstance_*,0>_>
              ::Find((TMapBase<UAnimMontage_*,FAnimMontageInstance_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UAnimMontage_*,FAnimMontageInstance_*,0>_>
                      *)&this->ActiveMontagesMap,param_1);
    if ((ppFVar5 != (FAnimMontageInstance **)0x0) && (*ppFVar5 != (FAnimMontageInstance *)0x0)) {
      return ((*ppFVar5)->Blend).BlendTime;
    }
  }
  return 0.0;
}

// Montage_GetBlendingOutDelegate @ 147468bb0

TDelegate<void___cdecl(UAnimMontage_*,bool),FDefaultDelegateUserPolicy> * __thiscall
UAnimInstance::Montage_GetBlendingOutDelegate(UAnimInstance *this,UAnimMontage *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FAnimMontageInstance **ppFVar5;
  TDelegate<void___cdecl(UAnimMontage_*,bool),FDefaultDelegateUserPolicy> *pTVar6;
  uint uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  
  if (param_1 == (UAnimMontage *)0x0) {
    uVar8 = 0;
    uVar9 = uVar8;
    if (0 < (this->MontageInstances).ArrayNum) {
      do {
        uVar7 = (uint)uVar8;
        uVar4 = 0;
        if ((int)uVar7 < (this->MontageInstances).ArrayNum) {
          uVar4 = ~uVar7 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          pTVar6 = (TDelegate<void___cdecl(UAnimMontage_*,bool),FDefaultDelegateUserPolicy> *)
                   (*pcVar2)();
          return pTVar6;
        }
        plVar1 = *(longlong **)((this->MontageInstances).AllocatorInstance.Data + uVar9);
        if (((plVar1 != (longlong *)0x0) && (*plVar1 != 0)) && (*(float *)(plVar1 + 0x34) != 0.0)) {
          return (TDelegate<void___cdecl(UAnimMontage_*,bool),FDefaultDelegateUserPolicy> *)
                 (plVar1 + 4);
        }
        uVar8 = (ulonglong)(uVar7 + 1);
        uVar9 = uVar9 + 8;
      } while ((int)(uVar7 + 1) < (this->MontageInstances).ArrayNum);
    }
  }
  else {
    ppFVar5 = TMapBase<UAnimMontage_*,FAnimMontageInstance_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UAnimMontage_*,FAnimMontageInstance_*,0>_>
              ::Find((TMapBase<UAnimMontage_*,FAnimMontageInstance_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UAnimMontage_*,FAnimMontageInstance_*,0>_>
                      *)&this->ActiveMontagesMap,param_1);
    if (ppFVar5 != (FAnimMontageInstance **)0x0) {
      if (*ppFVar5 == (FAnimMontageInstance *)0x0) {
        return (TDelegate<void___cdecl(UAnimMontage_*,bool),FDefaultDelegateUserPolicy> *)0x0;
      }
      return &(*ppFVar5)->OnMontageBlendingOutStarted;
    }
  }
  return (TDelegate<void___cdecl(UAnimMontage_*,bool),FDefaultDelegateUserPolicy> *)0x0;
}

// Montage_GetCurrentSection @ 147468cc0

FName __thiscall UAnimInstance::Montage_GetCurrentSection(UAnimInstance *this,UAnimMontage *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FAnimMontageInstance **ppFVar4;
  FName FVar5;
  FAnimMontageInstance *this_00;
  uint uVar6;
  longlong lVar7;
  UAnimMontage *in_R8;
  
  if (in_R8 == (UAnimMontage *)0x0) {
    uVar6 = 0;
    if (0 < (this->MontageInstances).ArrayNum) {
      lVar7 = 0;
      do {
        uVar3 = 0;
        if ((int)uVar6 < (this->MontageInstances).ArrayNum) {
          uVar3 = ~uVar6 >> 0x1f;
        }
        if ((uVar3 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          FVar5 = (FName)(*pcVar1)();
          return FVar5;
        }
        this_00 = *(FAnimMontageInstance **)
                   ((this->MontageInstances).AllocatorInstance.Data + lVar7);
        if (((this_00 != (FAnimMontageInstance *)0x0) &&
            ((this_00->Montage).field0_0x0.DebugPtr != (UAnimMontage *)0x0)) &&
           ((this_00->Blend).DesiredValue != 0.0)) goto LAB_147468d09;
        uVar6 = uVar6 + 1;
        lVar7 = lVar7 + 8;
      } while ((int)uVar6 < (this->MontageInstances).ArrayNum);
    }
  }
  else {
    ppFVar4 = TMapBase<UAnimMontage_*,FAnimMontageInstance_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UAnimMontage_*,FAnimMontageInstance_*,0>_>
              ::Find((TMapBase<UAnimMontage_*,FAnimMontageInstance_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UAnimMontage_*,FAnimMontageInstance_*,0>_>
                      *)&this->ActiveMontagesMap,in_R8);
    if ((ppFVar4 != (FAnimMontageInstance **)0x0) &&
       (this_00 = *ppFVar4, this_00 != (FAnimMontageInstance *)0x0)) {
LAB_147468d09:
      FAnimMontageInstance::GetCurrentSection(this_00);
      return (FName)param_1;
    }
  }
  param_1->_padding_ = 0;
  return (FName)param_1;
}

// Montage_GetEffectivePlayRate @ 147468de0

float __thiscall
UAnimInstance::Montage_GetEffectivePlayRate(UAnimInstance *this,UAnimMontage *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FAnimMontageInstance **ppFVar5;
  uint uVar6;
  longlong lVar7;
  float fVar8;
  
  if (param_1 == (UAnimMontage *)0x0) {
    uVar6 = 0;
    if (0 < (this->MontageInstances).ArrayNum) {
      lVar7 = 0;
      do {
        uVar4 = 0;
        if ((int)uVar6 < (this->MontageInstances).ArrayNum) {
          uVar4 = ~uVar6 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          fVar8 = (float)(*pcVar2)();
          return fVar8;
        }
        plVar1 = *(longlong **)((this->MontageInstances).AllocatorInstance.Data + lVar7);
        if (((plVar1 != (longlong *)0x0) && (*plVar1 != 0)) && (*(float *)(plVar1 + 0x34) != 0.0)) {
          return *(float *)(*plVar1 + 0xa8) * *(float *)((longlong)plVar1 + 0x17c);
        }
        uVar6 = uVar6 + 1;
        lVar7 = lVar7 + 8;
      } while ((int)uVar6 < (this->MontageInstances).ArrayNum);
    }
  }
  else {
    ppFVar5 = TMapBase<UAnimMontage_*,FAnimMontageInstance_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UAnimMontage_*,FAnimMontageInstance_*,0>_>
              ::Find((TMapBase<UAnimMontage_*,FAnimMontageInstance_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UAnimMontage_*,FAnimMontageInstance_*,0>_>
                      *)&this->ActiveMontagesMap,param_1);
    if ((ppFVar5 != (FAnimMontageInstance **)0x0) && (*ppFVar5 != (FAnimMontageInstance *)0x0)) {
      return (*ppFVar5)->PlayRate * *(float *)&param_1->_padding_;
    }
  }
  return 0.0;
}

// Montage_GetEndedDelegate @ 147468f00

TDelegate<void___cdecl(UAnimMontage_*,bool),FDefaultDelegateUserPolicy> * __thiscall
UAnimInstance::Montage_GetEndedDelegate(UAnimInstance *this,UAnimMontage *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FAnimMontageInstance **ppFVar5;
  TDelegate<void___cdecl(UAnimMontage_*,bool),FDefaultDelegateUserPolicy> *pTVar6;
  uint uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  
  if (param_1 == (UAnimMontage *)0x0) {
    uVar8 = 0;
    uVar9 = uVar8;
    if (0 < (this->MontageInstances).ArrayNum) {
      do {
        uVar7 = (uint)uVar8;
        uVar4 = 0;
        if ((int)uVar7 < (this->MontageInstances).ArrayNum) {
          uVar4 = ~uVar7 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          pTVar6 = (TDelegate<void___cdecl(UAnimMontage_*,bool),FDefaultDelegateUserPolicy> *)
                   (*pcVar2)();
          return pTVar6;
        }
        plVar1 = *(longlong **)((this->MontageInstances).AllocatorInstance.Data + uVar9);
        if (((plVar1 != (longlong *)0x0) && (*plVar1 != 0)) && (*(float *)(plVar1 + 0x34) != 0.0)) {
          return (TDelegate<void___cdecl(UAnimMontage_*,bool),FDefaultDelegateUserPolicy> *)
                 (plVar1 + 1);
        }
        uVar8 = (ulonglong)(uVar7 + 1);
        uVar9 = uVar9 + 8;
      } while ((int)(uVar7 + 1) < (this->MontageInstances).ArrayNum);
    }
  }
  else {
    ppFVar5 = TMapBase<UAnimMontage_*,FAnimMontageInstance_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UAnimMontage_*,FAnimMontageInstance_*,0>_>
              ::Find((TMapBase<UAnimMontage_*,FAnimMontageInstance_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UAnimMontage_*,FAnimMontageInstance_*,0>_>
                      *)&this->ActiveMontagesMap,param_1);
    if (ppFVar5 != (FAnimMontageInstance **)0x0) {
      if (*ppFVar5 == (FAnimMontageInstance *)0x0) {
        return (TDelegate<void___cdecl(UAnimMontage_*,bool),FDefaultDelegateUserPolicy> *)0x0;
      }
      return &(*ppFVar5)->OnMontageEnded;
    }
  }
  return (TDelegate<void___cdecl(UAnimMontage_*,bool),FDefaultDelegateUserPolicy> *)0x0;
}

// Montage_GetIsStopped @ 147469010

bool __thiscall UAnimInstance::Montage_GetIsStopped(UAnimInstance *this,UAnimMontage *param_1)

{
  FAnimMontageInstance **ppFVar1;
  
  if (param_1 == (UAnimMontage *)0x0) {
    return true;
  }
  ppFVar1 = TMapBase<UAnimMontage_*,FAnimMontageInstance_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UAnimMontage_*,FAnimMontageInstance_*,0>_>
            ::Find((TMapBase<UAnimMontage_*,FAnimMontageInstance_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UAnimMontage_*,FAnimMontageInstance_*,0>_>
                    *)&this->ActiveMontagesMap,param_1);
  if (ppFVar1 != (FAnimMontageInstance **)0x0) {
    return *ppFVar1 == (FAnimMontageInstance *)0x0;
  }
  return true;
}

// Montage_GetNextSectionID @ 147469050

int __thiscall
UAnimInstance::Montage_GetNextSectionID(UAnimInstance *this,UAnimMontage *param_1,int *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  FAnimMontageInstance **ppFVar5;
  FAnimMontageInstance *this_00;
  uint uVar6;
  longlong lVar7;
  
  if (param_1 == (UAnimMontage *)0x0) {
    uVar6 = 0;
    if (0 < (this->MontageInstances).ArrayNum) {
      lVar7 = 0;
      do {
        uVar4 = 0;
        if ((int)uVar6 < (this->MontageInstances).ArrayNum) {
          uVar4 = ~uVar6 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          iVar3 = (*pcVar1)();
          return iVar3;
        }
        this_00 = *(FAnimMontageInstance **)
                   ((this->MontageInstances).AllocatorInstance.Data + lVar7);
        if (((this_00 != (FAnimMontageInstance *)0x0) &&
            ((this_00->Montage).field0_0x0.DebugPtr != (UAnimMontage *)0x0)) &&
           ((this_00->Blend).DesiredValue != 0.0)) goto LAB_147469095;
        uVar6 = uVar6 + 1;
        lVar7 = lVar7 + 8;
      } while ((int)uVar6 < (this->MontageInstances).ArrayNum);
    }
  }
  else {
    ppFVar5 = TMapBase<UAnimMontage_*,FAnimMontageInstance_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UAnimMontage_*,FAnimMontageInstance_*,0>_>
              ::Find((TMapBase<UAnimMontage_*,FAnimMontageInstance_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UAnimMontage_*,FAnimMontageInstance_*,0>_>
                      *)&this->ActiveMontagesMap,param_1);
    if ((ppFVar5 != (FAnimMontageInstance **)0x0) &&
       (this_00 = *ppFVar5, this_00 != (FAnimMontageInstance *)0x0)) {
LAB_147469095:
      iVar3 = FAnimMontageInstance::GetNextSectionID(this_00,param_2);
      return iVar3;
    }
  }
  return -1;
}

// Montage_GetPlayRate @ 147469170

float __thiscall UAnimInstance::Montage_GetPlayRate(UAnimInstance *this,UAnimMontage *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FAnimMontageInstance **ppFVar5;
  uint uVar6;
  longlong lVar7;
  float fVar8;
  
  if (param_1 == (UAnimMontage *)0x0) {
    uVar6 = 0;
    if (0 < (this->MontageInstances).ArrayNum) {
      lVar7 = 0;
      do {
        uVar4 = 0;
        if ((int)uVar6 < (this->MontageInstances).ArrayNum) {
          uVar4 = ~uVar6 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          fVar8 = (float)(*pcVar2)();
          return fVar8;
        }
        plVar1 = *(longlong **)((this->MontageInstances).AllocatorInstance.Data + lVar7);
        if (((plVar1 != (longlong *)0x0) && (*plVar1 != 0)) && (*(float *)(plVar1 + 0x34) != 0.0)) {
          return *(float *)((longlong)plVar1 + 0x17c);
        }
        uVar6 = uVar6 + 1;
        lVar7 = lVar7 + 8;
      } while ((int)uVar6 < (this->MontageInstances).ArrayNum);
    }
  }
  else {
    ppFVar5 = TMapBase<UAnimMontage_*,FAnimMontageInstance_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UAnimMontage_*,FAnimMontageInstance_*,0>_>
              ::Find((TMapBase<UAnimMontage_*,FAnimMontageInstance_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UAnimMontage_*,FAnimMontageInstance_*,0>_>
                      *)&this->ActiveMontagesMap,param_1);
    if ((ppFVar5 != (FAnimMontageInstance **)0x0) && (*ppFVar5 != (FAnimMontageInstance *)0x0)) {
      return (*ppFVar5)->PlayRate;
    }
  }
  return 0.0;
}

// Montage_GetPosition @ 147469280

float __thiscall UAnimInstance::Montage_GetPosition(UAnimInstance *this,UAnimMontage *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FAnimMontageInstance **ppFVar5;
  uint uVar6;
  longlong lVar7;
  float fVar8;
  
  if (param_1 == (UAnimMontage *)0x0) {
    uVar6 = 0;
    if (0 < (this->MontageInstances).ArrayNum) {
      lVar7 = 0;
      do {
        uVar4 = 0;
        if ((int)uVar6 < (this->MontageInstances).ArrayNum) {
          uVar4 = ~uVar6 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          fVar8 = (float)(*pcVar2)();
          return fVar8;
        }
        plVar1 = *(longlong **)((this->MontageInstances).AllocatorInstance.Data + lVar7);
        if (((plVar1 != (longlong *)0x0) && (*plVar1 != 0)) && (*(float *)(plVar1 + 0x34) != 0.0)) {
          return *(float *)(plVar1 + 0x2f);
        }
        uVar6 = uVar6 + 1;
        lVar7 = lVar7 + 8;
      } while ((int)uVar6 < (this->MontageInstances).ArrayNum);
    }
  }
  else {
    ppFVar5 = TMapBase<UAnimMontage_*,FAnimMontageInstance_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UAnimMontage_*,FAnimMontageInstance_*,0>_>
              ::Find((TMapBase<UAnimMontage_*,FAnimMontageInstance_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UAnimMontage_*,FAnimMontageInstance_*,0>_>
                      *)&this->ActiveMontagesMap,param_1);
    if ((ppFVar5 != (FAnimMontageInstance **)0x0) && (*ppFVar5 != (FAnimMontageInstance *)0x0)) {
      return (*ppFVar5)->Position;
    }
  }
  return 0.0;
}

// Montage_GetSectionChangedDelegate @ 147469390

TDelegate<void___cdecl(UAnimMontage_*,FName,bool),FDefaultDelegateUserPolicy> * __thiscall
UAnimInstance::Montage_GetSectionChangedDelegate(UAnimInstance *this,UAnimMontage *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FAnimMontageInstance **ppFVar5;
  TDelegate<void___cdecl(UAnimMontage_*,FName,bool),FDefaultDelegateUserPolicy> *pTVar6;
  uint uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  
  if (param_1 == (UAnimMontage *)0x0) {
    uVar8 = 0;
    uVar9 = uVar8;
    if (0 < (this->MontageInstances).ArrayNum) {
      do {
        uVar7 = (uint)uVar8;
        uVar4 = 0;
        if ((int)uVar7 < (this->MontageInstances).ArrayNum) {
          uVar4 = ~uVar7 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          pTVar6 = (TDelegate<void___cdecl(UAnimMontage_*,FName,bool),FDefaultDelegateUserPolicy> *)
                   (*pcVar2)();
          return pTVar6;
        }
        plVar1 = *(longlong **)((this->MontageInstances).AllocatorInstance.Data + uVar9);
        if (((plVar1 != (longlong *)0x0) && (*plVar1 != 0)) && (*(float *)(plVar1 + 0x34) != 0.0)) {
          return (TDelegate<void___cdecl(UAnimMontage_*,FName,bool),FDefaultDelegateUserPolicy> *)
                 (plVar1 + 10);
        }
        uVar8 = (ulonglong)(uVar7 + 1);
        uVar9 = uVar9 + 8;
      } while ((int)(uVar7 + 1) < (this->MontageInstances).ArrayNum);
    }
  }
  else {
    ppFVar5 = TMapBase<UAnimMontage_*,FAnimMontageInstance_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UAnimMontage_*,FAnimMontageInstance_*,0>_>
              ::Find((TMapBase<UAnimMontage_*,FAnimMontageInstance_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UAnimMontage_*,FAnimMontageInstance_*,0>_>
                      *)&this->ActiveMontagesMap,param_1);
    if (ppFVar5 != (FAnimMontageInstance **)0x0) {
      if (*ppFVar5 == (FAnimMontageInstance *)0x0) {
        return (TDelegate<void___cdecl(UAnimMontage_*,FName,bool),FDefaultDelegateUserPolicy> *)0x0;
      }
      return &(*ppFVar5)->OnMontageSectionChanged;
    }
  }
  return (TDelegate<void___cdecl(UAnimMontage_*,FName,bool),FDefaultDelegateUserPolicy> *)0x0;
}

// Montage_IsActive @ 1474694a0

bool __thiscall UAnimInstance::Montage_IsActive(UAnimInstance *this,UAnimMontage *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  FAnimMontageInstance **ppFVar6;
  uint uVar7;
  longlong lVar8;
  
  if (param_1 == (UAnimMontage *)0x0) {
    uVar7 = 0;
    if (0 < (this->MontageInstances).ArrayNum) {
      lVar8 = 0;
      do {
        uVar5 = 0;
        if ((int)uVar7 < (this->MontageInstances).ArrayNum) {
          uVar5 = ~uVar7 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          uVar4 = (*pcVar2)();
          return (bool)uVar4;
        }
        plVar1 = *(longlong **)((this->MontageInstances).AllocatorInstance.Data + lVar8);
        if (((plVar1 != (longlong *)0x0) && (*plVar1 != 0)) && (*(float *)(plVar1 + 0x34) != 0.0)) {
          return true;
        }
        uVar7 = uVar7 + 1;
        lVar8 = lVar8 + 8;
      } while ((int)uVar7 < (this->MontageInstances).ArrayNum);
    }
  }
  else {
    ppFVar6 = TMapBase<UAnimMontage_*,FAnimMontageInstance_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UAnimMontage_*,FAnimMontageInstance_*,0>_>
              ::Find((TMapBase<UAnimMontage_*,FAnimMontageInstance_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UAnimMontage_*,FAnimMontageInstance_*,0>_>
                      *)&this->ActiveMontagesMap,param_1);
    if ((ppFVar6 != (FAnimMontageInstance **)0x0) && (*ppFVar6 != (FAnimMontageInstance *)0x0)) {
      return true;
    }
  }
  return false;
}

// Montage_IsPlaying @ 147469590

bool __thiscall UAnimInstance::Montage_IsPlaying(UAnimInstance *this,UAnimMontage *param_1)

{
  FAnimMontageInstance *pFVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  FAnimMontageInstance **ppFVar7;
  uint uVar8;
  longlong lVar9;
  
  if (param_1 == (UAnimMontage *)0x0) {
    uVar8 = 0;
    if (0 < (this->MontageInstances).ArrayNum) {
      lVar9 = 0;
      do {
        uVar6 = 0;
        if ((int)uVar8 < (this->MontageInstances).ArrayNum) {
          uVar6 = ~uVar8 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
        plVar2 = *(longlong **)((this->MontageInstances).AllocatorInstance.Data + lVar9);
        if ((((plVar2 != (longlong *)0x0) && (*plVar2 != 0)) && (*(float *)(plVar2 + 0x34) != 0.0))
           && ((char)plVar2[0xd] != '\0')) {
          return true;
        }
        uVar8 = uVar8 + 1;
        lVar9 = lVar9 + 8;
      } while ((int)uVar8 < (this->MontageInstances).ArrayNum);
    }
  }
  else {
    ppFVar7 = TMapBase<UAnimMontage_*,FAnimMontageInstance_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UAnimMontage_*,FAnimMontageInstance_*,0>_>
              ::Find((TMapBase<UAnimMontage_*,FAnimMontageInstance_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UAnimMontage_*,FAnimMontageInstance_*,0>_>
                      *)&this->ActiveMontagesMap,param_1);
    if (((ppFVar7 != (FAnimMontageInstance **)0x0) &&
        (pFVar1 = *ppFVar7, pFVar1 != (FAnimMontageInstance *)0x0)) &&
       (((pFVar1->Montage).field0_0x0.DebugPtr != (UAnimMontage *)0x0 && (pFVar1->bPlaying != false)
        ))) {
      return true;
    }
  }
  return false;
}

// Montage_JumpToSection @ 1474696b0

void __thiscall
UAnimInstance::Montage_JumpToSection(UAnimInstance *this,FName param_1,UAnimMontage *param_2)

{
  FAnimMontageInstance *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FAnimMontageInstance **ppFVar5;
  uint uVar6;
  longlong lVar7;
  FName local_res10;
  
  local_res10 = param_1;
  if (param_2 == (UAnimMontage *)0x0) {
    uVar6 = 0;
    if (0 < (this->MontageInstances).ArrayNum) {
      lVar7 = 0;
      do {
        uVar4 = 0;
        if ((int)uVar6 < (this->MontageInstances).ArrayNum) {
          uVar4 = ~uVar6 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pFVar1 = *(FAnimMontageInstance **)((this->MontageInstances).AllocatorInstance.Data + lVar7)
        ;
        if (((pFVar1 != (FAnimMontageInstance *)0x0) &&
            ((pFVar1->Montage).field0_0x0.DebugPtr != (UAnimMontage *)0x0)) &&
           ((pFVar1->Blend).DesiredValue != 0.0)) {
          FAnimMontageInstance::JumpToSectionName
                    (pFVar1,&local_res10,pFVar1->PlayRate <= 0.0 && pFVar1->PlayRate != 0.0);
        }
        uVar6 = uVar6 + 1;
        lVar7 = lVar7 + 8;
      } while ((int)uVar6 < (this->MontageInstances).ArrayNum);
    }
  }
  else {
    ppFVar5 = TMapBase<UAnimMontage_*,FAnimMontageInstance_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UAnimMontage_*,FAnimMontageInstance_*,0>_>
              ::Find((TMapBase<UAnimMontage_*,FAnimMontageInstance_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UAnimMontage_*,FAnimMontageInstance_*,0>_>
                      *)&this->ActiveMontagesMap,param_2);
    if ((ppFVar5 != (FAnimMontageInstance **)0x0) &&
       (pFVar1 = *ppFVar5, pFVar1 != (FAnimMontageInstance *)0x0)) {
      FAnimMontageInstance::JumpToSectionName
                (pFVar1,&local_res10,pFVar1->PlayRate <= 0.0 && pFVar1->PlayRate != 0.0);
      return;
    }
  }
  return;
}

// Montage_JumpToSectionsEnd @ 1474697e0

void __thiscall
UAnimInstance::Montage_JumpToSectionsEnd(UAnimInstance *this,FName param_1,UAnimMontage *param_2)

{
  FAnimMontageInstance *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FAnimMontageInstance **ppFVar5;
  uint uVar6;
  longlong lVar7;
  FName local_res10;
  
  local_res10 = param_1;
  if (param_2 == (UAnimMontage *)0x0) {
    uVar6 = 0;
    if (0 < (this->MontageInstances).ArrayNum) {
      lVar7 = 0;
      do {
        uVar4 = 0;
        if ((int)uVar6 < (this->MontageInstances).ArrayNum) {
          uVar4 = ~uVar6 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pFVar1 = *(FAnimMontageInstance **)((this->MontageInstances).AllocatorInstance.Data + lVar7)
        ;
        if (((pFVar1 != (FAnimMontageInstance *)0x0) &&
            ((pFVar1->Montage).field0_0x0.DebugPtr != (UAnimMontage *)0x0)) &&
           ((pFVar1->Blend).DesiredValue != 0.0)) {
          FAnimMontageInstance::JumpToSectionName
                    (pFVar1,&local_res10,0.0 < pFVar1->PlayRate || pFVar1->PlayRate == 0.0);
        }
        uVar6 = uVar6 + 1;
        lVar7 = lVar7 + 8;
      } while ((int)uVar6 < (this->MontageInstances).ArrayNum);
    }
  }
  else {
    ppFVar5 = TMapBase<UAnimMontage_*,FAnimMontageInstance_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UAnimMontage_*,FAnimMontageInstance_*,0>_>
              ::Find((TMapBase<UAnimMontage_*,FAnimMontageInstance_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UAnimMontage_*,FAnimMontageInstance_*,0>_>
                      *)&this->ActiveMontagesMap,param_2);
    if ((ppFVar5 != (FAnimMontageInstance **)0x0) &&
       (pFVar1 = *ppFVar5, pFVar1 != (FAnimMontageInstance *)0x0)) {
      FAnimMontageInstance::JumpToSectionName
                (pFVar1,&local_res10,0.0 < pFVar1->PlayRate || pFVar1->PlayRate == 0.0);
      return;
    }
  }
  return;
}

// Montage_Pause @ 147469910

void __thiscall UAnimInstance::Montage_Pause(UAnimInstance *this,UAnimMontage *param_1)

{
  FAnimMontageInstance *this_00;
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FAnimMontageInstance **ppFVar4;
  uint uVar5;
  longlong lVar6;
  
  if (param_1 == (UAnimMontage *)0x0) {
    uVar5 = 0;
    if (0 < (this->MontageInstances).ArrayNum) {
      lVar6 = 0;
      do {
        uVar3 = 0;
        if ((int)uVar5 < (this->MontageInstances).ArrayNum) {
          uVar3 = ~uVar5 >> 0x1f;
        }
        if ((uVar3 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        this_00 = *(FAnimMontageInstance **)
                   ((this->MontageInstances).AllocatorInstance.Data + lVar6);
        if (((this_00 != (FAnimMontageInstance *)0x0) &&
            ((this_00->Montage).field0_0x0.DebugPtr != (UAnimMontage *)0x0)) &&
           ((this_00->Blend).DesiredValue != 0.0)) {
          FAnimMontageInstance::Pause(this_00);
        }
        uVar5 = uVar5 + 1;
        lVar6 = lVar6 + 8;
      } while ((int)uVar5 < (this->MontageInstances).ArrayNum);
    }
  }
  else {
    ppFVar4 = TMapBase<UAnimMontage_*,FAnimMontageInstance_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UAnimMontage_*,FAnimMontageInstance_*,0>_>
              ::Find((TMapBase<UAnimMontage_*,FAnimMontageInstance_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UAnimMontage_*,FAnimMontageInstance_*,0>_>
                      *)&this->ActiveMontagesMap,param_1);
    if ((ppFVar4 != (FAnimMontageInstance **)0x0) && (*ppFVar4 != (FAnimMontageInstance *)0x0)) {
      FAnimMontageInstance::Pause(*ppFVar4);
      return;
    }
  }
  return;
}

// Montage_Play @ 147469a10

float __thiscall
UAnimInstance::Montage_Play
          (UAnimInstance *this,UAnimMontage *param_1,float param_2,EMontagePlayReturnType param_3,
          float param_4,bool param_5)

{
  UBlendProfile *pUVar1;
  float fVar2;
  TObjectPtr<UCurveFloat>_u_0 local_48;
  undefined4 local_40;
  undefined1 local_3c;
  TObjectPtr<UBlendProfile>_u_0 local_38 [2];
  undefined4 local_28;
  undefined1 local_24;
  EMontageBlendMode local_20;
  
  FMontageBlendSettings::FMontageBlendSettings((FMontageBlendSettings *)&local_38[0].ObjectPtr);
  if (param_1 != (UAnimMontage *)0x0) {
    FAlphaBlendArgs::FAlphaBlendArgs((FAlphaBlendArgs *)&local_48.ObjectPtr,&param_1->BlendIn);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_48.DebugPtr != (UCurveFloat *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_48.DebugPtr);
    }
    local_24 = local_3c;
    local_20 = param_1->BlendModeIn;
    local_28 = local_40;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar1 = (param_1->BlendProfileIn).field0_0x0.DebugPtr, pUVar1 != (UBlendProfile *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    local_38[0] = (param_1->BlendProfileIn).field0_0x0;
  }
  fVar2 = (float)(**(code **)(*(longlong *)this + 0x2f8))
                           (this,param_1,local_38,param_2,param_3,param_4,param_5);
  return fVar2;
}

// Montage_PlayInternal @ 147469b30

/* WARNING: Enum "Type": Some values do not have unique names */

float __thiscall
UAnimInstance::Montage_PlayInternal
          (UAnimInstance *this,UAnimMontage *param_1,FMontageBlendSettings *param_2,float param_3,
          EMontagePlayReturnType param_4,float param_5,bool param_6)

{
  int *piVar1;
  TArray<FAnimMontageInstance_*,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  USkeleton *pUVar4;
  code *pcVar5;
  bool bVar6;
  char cVar7;
  int iVar8;
  FAnimMontageInstance *this_00;
  float fVar9;
  float fVar10;
  UAnimMontage *local_res10;
  FAnimMontageInstance *local_e8;
  FLLMScope local_e0 [2];
  FString local_d8;
  FString local_c8;
  FString local_b8;
  TPairInitializer<UAnimMontage_*_const_&,FAnimMontageInstance_*_const_&> local_a8;
  UAnimMontage *local_98;
  FName local_90;
  FName local_88;
  FName local_80;
  FName local_78;
  FMemScope local_70;
  FString local_68;
  UAnimMontage **local_58;
  FAnimMontageInstance **local_50;
  
  local_res10 = param_1;
  FLLMScope::FLLMScope(local_e0,Animation,false,None,Default,true);
  FMemScope::FMemScope(&local_70,Animation,true);
  fVar10 = 0.0;
  if (((local_res10 == (UAnimMontage *)0x0) ||
      (fVar9 = (float)(**(code **)(local_res10->_padding_ + 0x2c0))(), fVar9 <= 0.0)) ||
     (bVar6 = UAnimMontage::HasValidSlotSetup(local_res10), !bVar6)) goto LAB_147469fdc;
  if (((this->CurrentSkeleton).field0_0x0.DebugPtr == (USkeleton *)0x0) ||
     (local_res10->_padding_ == 0)) {
    if (2 < (byte)LogAnimMontage._0_1_) {
      if (local_res10->_padding_ == 0) {
        ::FString::FString(&local_b8,L"None");
      }
      else {
        local_88 = *(FName *)(local_res10->_padding_ + 0x18);
        ::FName::ToString(&local_88,&local_b8);
      }
      pUVar4 = (this->CurrentSkeleton).field0_0x0.DebugPtr;
      if (pUVar4 == (USkeleton *)0x0) {
        ::FString::FString(&local_c8,L"None");
      }
      else {
        local_80 = (FName)pUVar4->_padding_;
        ::FName::ToString(&local_80,&local_c8);
      }
      if (local_res10 == (UAnimMontage *)0x0) {
        ::FString::FString(&local_d8,L"None");
      }
      else {
        local_78 = (FName)local_res10->_padding_;
        ::FName::ToString(&local_78,&local_d8);
      }
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAnimMontage);
      if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_d8.Data.AllocatorInstance.Data);
      }
      if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_c8.Data.AllocatorInstance.Data);
      }
      if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b8.Data.AllocatorInstance.Data);
      }
    }
    goto LAB_147469fdc;
  }
  UAnimMontage::GetGroupName(local_res10);
  if (param_6) {
    StopAllMontagesByGroupName(this,(FName)local_a8.Value,param_2);
    if ((this->bUninitialized != '\0') && (MontageCVars::bEarlyOutMontageWhenUninitialized != false)
       ) goto LAB_147469fdc;
    if (MontageCVars::bFlushCompletedMontagesOnPlay != false) {
      ConditionalFlushCompletedMontages(this);
    }
  }
  if ((((local_res10->bEnableRootMotionTranslation != false) ||
       (local_res10->bEnableRootMotionRotation != false)) &&
      (this->RootMotionMontageInstance != (FAnimMontageInstance *)0x0)) &&
     ((FAnimMontageInstance::Stop(this->RootMotionMontageInstance,param_2,true),
      this->bUninitialized != '\0' && (MontageCVars::bEarlyOutMontageWhenUninitialized != false))))
  goto LAB_147469fdc;
  this_00 = ::operator_new(0x208);
  if (this_00 == (FAnimMontageInstance *)0x0) {
    local_e8 = (FAnimMontageInstance *)0x0;
LAB_147469c9d:
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("NewInstance",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimInstance.cpp"
                       ,0x98c,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      fVar10 = (float)(*pcVar5)();
      return fVar10;
    }
  }
  else {
    local_e8 = FAnimMontageInstance::FAnimMontageInstance(this_00,this);
    if (local_e8 == (FAnimMontageInstance *)0x0) goto LAB_147469c9d;
  }
  fVar10 = (float)(**(code **)(local_res10->_padding_ + 0x2c0))();
  FAnimMontageInstance::Initialize(local_e8,local_res10);
  FAnimMontageInstance::Play(local_e8,param_3,param_2);
  pTVar2 = &this->MontageInstances;
  fVar9 = fVar10;
  if (param_5 <= fVar10) {
    fVar9 = param_5;
  }
  (local_e8->MarkerTickRecord).PreviousMarker.MarkerIndex = -2;
  (local_e8->MarkerTickRecord).NextMarker.MarkerIndex = -2;
  if (fVar9 <= 0.0) {
    fVar9 = 0.0;
  }
  local_e8->Position = fVar9;
  pFVar3 = (pTVar2->AllocatorInstance).Data;
  if (((pFVar3 <= (FScriptContainerElement *)&local_e8) &&
      ((FScriptContainerElement *)&local_e8 <
       pFVar3 + (longlong)(this->MontageInstances).ArrayMax * 8)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar6)) {
    pcVar5 = (code *)swi(3);
    fVar10 = (float)(*pcVar5)();
    return fVar10;
  }
  iVar8 = (this->MontageInstances).ArrayNum;
  piVar1 = &(this->MontageInstances).ArrayMax;
  if (iVar8 == *piVar1) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&pTVar2->AllocatorInstance,piVar1);
  }
  (this->MontageInstances).ArrayNum = iVar8 + 1;
  *(FAnimMontageInstance **)((pTVar2->AllocatorInstance).Data + (longlong)iVar8 * 8) = local_e8;
  local_58 = &local_res10;
  local_50 = &local_e8;
  TSet<TTuple<UAnimMontage_*,FAnimMontageInstance_*>,TDefaultMapHashableKeyFuncs<UAnimMontage_*,FAnimMontageInstance_*,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<UAnimMontage_*_const_&,FAnimMontageInstance_*_const_&>_>
            ((TSet<TTuple<UAnimMontage_*,FAnimMontageInstance_*>,TDefaultMapHashableKeyFuncs<UAnimMontage_*,FAnimMontageInstance_*,0>,FDefaultSetAllocator>
              *)&this->ActiveMontagesMap,&local_a8,(bool *)&local_58);
  cVar7 = (**(code **)(local_res10->_padding_ + 0x340))();
  if (cVar7 != '\0') {
    this->RootMotionMontageInstance = local_e8;
  }
  local_98 = local_res10;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->OnMontageStarted,
             &local_98);
  if (5 < (byte)LogAnimMontage._0_1_) {
    local_90 = (FName)((local_e8->Montage).field0_0x0.DebugPtr)->_padding_;
    ::FName::ToString(&local_90,&local_68);
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogAnimMontage);
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
  }
  if (param_4 != MontageLength) {
    fVar10 = fVar10 / (param_3 * *(float *)&local_res10->_padding_);
  }
LAB_147469fdc:
  FMemScope::~FMemScope(&local_70);
  FLLMScope::~FLLMScope(local_e0);
  return fVar10;
}

// Montage_PlayWithBlendIn @ 14746a020

float __thiscall
UAnimInstance::Montage_PlayWithBlendIn
          (UAnimInstance *this,UAnimMontage *param_1,FAlphaBlendArgs *param_2,float param_3,
          EMontagePlayReturnType param_4,float param_5,bool param_6)

{
  UCurveFloat *pUVar1;
  UBlendProfile *pUVar2;
  float fVar3;
  TObjectPtr<UBlendProfile>_u_0 local_38;
  TObjectPtr<UCurveFloat>_u_0 local_30;
  float local_28;
  EAlphaBlendOption local_24;
  EMontageBlendMode local_20;
  
  FMontageBlendSettings::FMontageBlendSettings((FMontageBlendSettings *)&local_38.ObjectPtr);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar1 = (param_2->CustomCurve).field0_0x0.DebugPtr, pUVar1 != (UCurveFloat *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  local_30.ObjectPtr.field0_0x0 = *(FObjectPtr *)&(param_2->CustomCurve).field0_0x0;
  local_28 = param_2->BlendTime;
  local_24 = param_2->BlendOption;
  if (param_1 != (UAnimMontage *)0x0) {
    local_20 = param_1->BlendModeIn;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar2 = (param_1->BlendProfileIn).field0_0x0.DebugPtr, pUVar2 != (UBlendProfile *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar2);
    }
    local_38 = (param_1->BlendProfileIn).field0_0x0;
  }
  fVar3 = (float)(**(code **)(*(longlong *)this + 0x2f8))
                           (this,param_1,&local_38,param_3,param_4,param_5,param_6);
  return fVar3;
}

// Montage_PlayWithBlendSettings @ 14746a120

float __thiscall
UAnimInstance::Montage_PlayWithBlendSettings
          (UAnimInstance *this,UAnimMontage *param_1,FMontageBlendSettings *param_2,float param_3,
          EMontagePlayReturnType param_4,float param_5,bool param_6)

{
  float fVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014746a13c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  fVar1 = (float)(**(code **)(*(longlong *)this + 0x2f8))
                           (this,param_1,param_2,*(code **)(*(longlong *)this + 0x2f8));
  return fVar1;
}

// Montage_Resume @ 14746a150

void __thiscall UAnimInstance::Montage_Resume(UAnimInstance *this,UAnimMontage *param_1)

{
  FAnimMontageInstance *pFVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FAnimMontageInstance **ppFVar6;
  uint uVar7;
  longlong lVar8;
  
  if (param_1 == (UAnimMontage *)0x0) {
    uVar7 = 0;
    if (0 < (this->MontageInstances).ArrayNum) {
      lVar8 = 0;
      do {
        uVar5 = 0;
        if ((int)uVar7 < (this->MontageInstances).ArrayNum) {
          uVar5 = ~uVar7 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        plVar2 = *(longlong **)((this->MontageInstances).AllocatorInstance.Data + lVar8);
        if ((((plVar2 != (longlong *)0x0) && (*plVar2 != 0)) && (*(float *)(plVar2 + 0x34) != 0.0))
           && ((char)plVar2[0xd] == '\0')) {
          *(undefined1 *)(plVar2 + 0xd) = 1;
        }
        uVar7 = uVar7 + 1;
        lVar8 = lVar8 + 8;
      } while ((int)uVar7 < (this->MontageInstances).ArrayNum);
    }
  }
  else {
    ppFVar6 = TMapBase<UAnimMontage_*,FAnimMontageInstance_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UAnimMontage_*,FAnimMontageInstance_*,0>_>
              ::Find((TMapBase<UAnimMontage_*,FAnimMontageInstance_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UAnimMontage_*,FAnimMontageInstance_*,0>_>
                      *)&this->ActiveMontagesMap,param_1);
    if (((ppFVar6 != (FAnimMontageInstance **)0x0) &&
        (pFVar1 = *ppFVar6, pFVar1 != (FAnimMontageInstance *)0x0)) &&
       (((pFVar1->Montage).field0_0x0.DebugPtr == (UAnimMontage *)0x0 || (pFVar1->bPlaying == false)
        ))) {
      pFVar1->bPlaying = true;
      return;
    }
  }
  return;
}

// Montage_SetBlendedInDelegate @ 14746a270

void __thiscall
UAnimInstance::Montage_SetBlendedInDelegate
          (UAnimInstance *this,
          TDelegate<void___cdecl(UAnimMontage_*),FDefaultDelegateUserPolicy> *param_1,
          UAnimMontage *param_2)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FAnimMontageInstance **ppFVar5;
  uint uVar6;
  longlong lVar7;
  
  if (param_2 == (UAnimMontage *)0x0) {
    uVar6 = 0;
    if (0 < (this->MontageInstances).ArrayNum) {
      lVar7 = 0;
      do {
        uVar4 = 0;
        if ((int)uVar6 < (this->MontageInstances).ArrayNum) {
          uVar4 = ~uVar6 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        plVar1 = *(longlong **)((this->MontageInstances).AllocatorInstance.Data + lVar7);
        if (((plVar1 != (longlong *)0x0) && (*plVar1 != 0)) && (*(float *)(plVar1 + 0x34) != 0.0)) {
          TDelegate<void___cdecl(UAnimMontage_*),FDefaultDelegateUserPolicy>::
          CopyFrom<FDefaultDelegateUserPolicy>
                    ((TDelegate<void___cdecl(UAnimMontage_*),FDefaultDelegateUserPolicy> *)
                     (plVar1 + 7),param_1);
        }
        uVar6 = uVar6 + 1;
        lVar7 = lVar7 + 8;
      } while ((int)uVar6 < (this->MontageInstances).ArrayNum);
    }
  }
  else {
    ppFVar5 = TMapBase<UAnimMontage_*,FAnimMontageInstance_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UAnimMontage_*,FAnimMontageInstance_*,0>_>
              ::Find((TMapBase<UAnimMontage_*,FAnimMontageInstance_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UAnimMontage_*,FAnimMontageInstance_*,0>_>
                      *)&this->ActiveMontagesMap,param_2);
    if ((ppFVar5 != (FAnimMontageInstance **)0x0) && (*ppFVar5 != (FAnimMontageInstance *)0x0)) {
      TDelegate<void___cdecl(UAnimMontage_*),FDefaultDelegateUserPolicy>::
      CopyFrom<FDefaultDelegateUserPolicy>(&(*ppFVar5)->OnMontageBlendedInEnded,param_1);
      return;
    }
  }
  return;
}

// Montage_SetBlendingOutDelegate @ 14746a3a0

void __thiscall
UAnimInstance::Montage_SetBlendingOutDelegate
          (UAnimInstance *this,
          TDelegate<void___cdecl(UAnimMontage_*,bool),FDefaultDelegateUserPolicy> *param_1,
          UAnimMontage *param_2)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FAnimMontageInstance **ppFVar5;
  uint uVar6;
  longlong lVar7;
  
  if (param_2 == (UAnimMontage *)0x0) {
    uVar6 = 0;
    if (0 < (this->MontageInstances).ArrayNum) {
      lVar7 = 0;
      do {
        uVar4 = 0;
        if ((int)uVar6 < (this->MontageInstances).ArrayNum) {
          uVar4 = ~uVar6 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        plVar1 = *(longlong **)((this->MontageInstances).AllocatorInstance.Data + lVar7);
        if (((plVar1 != (longlong *)0x0) && (*plVar1 != 0)) && (*(float *)(plVar1 + 0x34) != 0.0)) {
          TDelegate<void___cdecl(UAnimMontage_*,bool),FDefaultDelegateUserPolicy>::
          CopyFrom<FDefaultDelegateUserPolicy>
                    ((TDelegate<void___cdecl(UAnimMontage_*,bool),FDefaultDelegateUserPolicy> *)
                     (plVar1 + 4),param_1);
        }
        uVar6 = uVar6 + 1;
        lVar7 = lVar7 + 8;
      } while ((int)uVar6 < (this->MontageInstances).ArrayNum);
    }
  }
  else {
    ppFVar5 = TMapBase<UAnimMontage_*,FAnimMontageInstance_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UAnimMontage_*,FAnimMontageInstance_*,0>_>
              ::Find((TMapBase<UAnimMontage_*,FAnimMontageInstance_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UAnimMontage_*,FAnimMontageInstance_*,0>_>
                      *)&this->ActiveMontagesMap,param_2);
    if ((ppFVar5 != (FAnimMontageInstance **)0x0) && (*ppFVar5 != (FAnimMontageInstance *)0x0)) {
      TDelegate<void___cdecl(UAnimMontage_*,bool),FDefaultDelegateUserPolicy>::
      CopyFrom<FDefaultDelegateUserPolicy>(&(*ppFVar5)->OnMontageBlendingOutStarted,param_1);
      return;
    }
  }
  return;
}

// Montage_SetEndDelegate @ 14746a4d0

void __thiscall
UAnimInstance::Montage_SetEndDelegate
          (UAnimInstance *this,
          TDelegate<void___cdecl(UAnimMontage_*,bool),FDefaultDelegateUserPolicy> *param_1,
          UAnimMontage *param_2)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FAnimMontageInstance **ppFVar5;
  uint uVar6;
  longlong lVar7;
  
  if (param_2 == (UAnimMontage *)0x0) {
    uVar6 = 0;
    if (0 < (this->MontageInstances).ArrayNum) {
      lVar7 = 0;
      do {
        uVar4 = 0;
        if ((int)uVar6 < (this->MontageInstances).ArrayNum) {
          uVar4 = ~uVar6 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        plVar1 = *(longlong **)((this->MontageInstances).AllocatorInstance.Data + lVar7);
        if (((plVar1 != (longlong *)0x0) && (*plVar1 != 0)) && (*(float *)(plVar1 + 0x34) != 0.0)) {
          TDelegate<void___cdecl(UAnimMontage_*,bool),FDefaultDelegateUserPolicy>::
          CopyFrom<FDefaultDelegateUserPolicy>
                    ((TDelegate<void___cdecl(UAnimMontage_*,bool),FDefaultDelegateUserPolicy> *)
                     (plVar1 + 1),param_1);
        }
        uVar6 = uVar6 + 1;
        lVar7 = lVar7 + 8;
      } while ((int)uVar6 < (this->MontageInstances).ArrayNum);
    }
  }
  else {
    ppFVar5 = TMapBase<UAnimMontage_*,FAnimMontageInstance_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UAnimMontage_*,FAnimMontageInstance_*,0>_>
              ::Find((TMapBase<UAnimMontage_*,FAnimMontageInstance_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UAnimMontage_*,FAnimMontageInstance_*,0>_>
                      *)&this->ActiveMontagesMap,param_2);
    if ((ppFVar5 != (FAnimMontageInstance **)0x0) && (*ppFVar5 != (FAnimMontageInstance *)0x0)) {
      TDelegate<void___cdecl(UAnimMontage_*,bool),FDefaultDelegateUserPolicy>::
      CopyFrom<FDefaultDelegateUserPolicy>(&(*ppFVar5)->OnMontageEnded,param_1);
      return;
    }
  }
  return;
}

// Montage_SetNextSection @ 14746a600

void __thiscall
UAnimInstance::Montage_SetNextSection
          (UAnimInstance *this,FName param_1,FName param_2,UAnimMontage *param_3)

{
  FAnimMontageInstance *this_00;
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FAnimMontageInstance **ppFVar4;
  uint uVar5;
  longlong lVar6;
  FName local_res10;
  FName local_res18;
  
  local_res10 = param_1;
  local_res18 = param_2;
  if (param_3 == (UAnimMontage *)0x0) {
    uVar5 = 0;
    if (0 < (this->MontageInstances).ArrayNum) {
      lVar6 = 0;
      do {
        uVar3 = 0;
        if ((int)uVar5 < (this->MontageInstances).ArrayNum) {
          uVar3 = ~uVar5 >> 0x1f;
        }
        if ((uVar3 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        this_00 = *(FAnimMontageInstance **)
                   ((this->MontageInstances).AllocatorInstance.Data + lVar6);
        if (((this_00 != (FAnimMontageInstance *)0x0) &&
            ((this_00->Montage).field0_0x0.DebugPtr != (UAnimMontage *)0x0)) &&
           ((this_00->Blend).DesiredValue != 0.0)) {
          FAnimMontageInstance::SetNextSectionName(this_00,&local_res10,&local_res18);
        }
        uVar5 = uVar5 + 1;
        lVar6 = lVar6 + 8;
      } while ((int)uVar5 < (this->MontageInstances).ArrayNum);
    }
  }
  else {
    ppFVar4 = TMapBase<UAnimMontage_*,FAnimMontageInstance_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UAnimMontage_*,FAnimMontageInstance_*,0>_>
              ::Find((TMapBase<UAnimMontage_*,FAnimMontageInstance_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UAnimMontage_*,FAnimMontageInstance_*,0>_>
                      *)&this->ActiveMontagesMap,param_3);
    if ((ppFVar4 != (FAnimMontageInstance **)0x0) && (*ppFVar4 != (FAnimMontageInstance *)0x0)) {
      FAnimMontageInstance::SetNextSectionName(*ppFVar4,&local_res10,&local_res18);
      return;
    }
  }
  return;
}

// Montage_SetPlayRate @ 14746a730

void __thiscall
UAnimInstance::Montage_SetPlayRate(UAnimInstance *this,UAnimMontage *param_1,float param_2)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FAnimMontageInstance **ppFVar5;
  uint uVar6;
  longlong lVar7;
  
  if (param_1 == (UAnimMontage *)0x0) {
    uVar6 = 0;
    if (0 < (this->MontageInstances).ArrayNum) {
      lVar7 = 0;
      do {
        uVar4 = 0;
        if ((int)uVar6 < (this->MontageInstances).ArrayNum) {
          uVar4 = ~uVar6 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        plVar1 = *(longlong **)((this->MontageInstances).AllocatorInstance.Data + lVar7);
        if (((plVar1 != (longlong *)0x0) && (*plVar1 != 0)) && (*(float *)(plVar1 + 0x34) != 0.0)) {
          *(float *)((longlong)plVar1 + 0x17c) = param_2;
        }
        uVar6 = uVar6 + 1;
        lVar7 = lVar7 + 8;
      } while ((int)uVar6 < (this->MontageInstances).ArrayNum);
    }
  }
  else {
    ppFVar5 = TMapBase<UAnimMontage_*,FAnimMontageInstance_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UAnimMontage_*,FAnimMontageInstance_*,0>_>
              ::Find((TMapBase<UAnimMontage_*,FAnimMontageInstance_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UAnimMontage_*,FAnimMontageInstance_*,0>_>
                      *)&this->ActiveMontagesMap,param_1);
    if ((ppFVar5 != (FAnimMontageInstance **)0x0) && (*ppFVar5 != (FAnimMontageInstance *)0x0)) {
      (*ppFVar5)->PlayRate = param_2;
      return;
    }
  }
  return;
}

// Montage_SetPosition @ 14746a850

void __thiscall
UAnimInstance::Montage_SetPosition(UAnimInstance *this,UAnimMontage *param_1,float param_2)

{
  FAnimMontageInstance *pFVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FAnimMontageInstance **ppFVar6;
  uint uVar7;
  longlong lVar8;
  
  if (param_1 == (UAnimMontage *)0x0) {
    uVar7 = 0;
    if (0 < (this->MontageInstances).ArrayNum) {
      lVar8 = 0;
      do {
        uVar5 = 0;
        if ((int)uVar7 < (this->MontageInstances).ArrayNum) {
          uVar5 = ~uVar7 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        plVar2 = *(longlong **)((this->MontageInstances).AllocatorInstance.Data + lVar8);
        if (((plVar2 != (longlong *)0x0) && (*plVar2 != 0)) && (*(float *)(plVar2 + 0x34) != 0.0)) {
          *(float *)(plVar2 + 0x2f) = param_2;
          *(undefined4 *)((longlong)plVar2 + 0x7c) = 0xfffffffe;
          *(undefined4 *)((longlong)plVar2 + 0x84) = 0xfffffffe;
        }
        uVar7 = uVar7 + 1;
        lVar8 = lVar8 + 8;
      } while ((int)uVar7 < (this->MontageInstances).ArrayNum);
    }
  }
  else {
    ppFVar6 = TMapBase<UAnimMontage_*,FAnimMontageInstance_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UAnimMontage_*,FAnimMontageInstance_*,0>_>
              ::Find((TMapBase<UAnimMontage_*,FAnimMontageInstance_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UAnimMontage_*,FAnimMontageInstance_*,0>_>
                      *)&this->ActiveMontagesMap,param_1);
    if ((ppFVar6 != (FAnimMontageInstance **)0x0) &&
       (pFVar1 = *ppFVar6, pFVar1 != (FAnimMontageInstance *)0x0)) {
      pFVar1->Position = param_2;
      (pFVar1->MarkerTickRecord).PreviousMarker.MarkerIndex = -2;
      (pFVar1->MarkerTickRecord).NextMarker.MarkerIndex = -2;
      return;
    }
  }
  return;
}

// Montage_SetSectionChangedDelegate @ 14746a990

void __thiscall
UAnimInstance::Montage_SetSectionChangedDelegate
          (UAnimInstance *this,
          TDelegate<void___cdecl(UAnimMontage_*,FName,bool),FDefaultDelegateUserPolicy> *param_1,
          UAnimMontage *param_2)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FAnimMontageInstance **ppFVar5;
  uint uVar6;
  longlong lVar7;
  
  if (param_2 == (UAnimMontage *)0x0) {
    uVar6 = 0;
    if (0 < (this->MontageInstances).ArrayNum) {
      lVar7 = 0;
      do {
        uVar4 = 0;
        if ((int)uVar6 < (this->MontageInstances).ArrayNum) {
          uVar4 = ~uVar6 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        plVar1 = *(longlong **)((this->MontageInstances).AllocatorInstance.Data + lVar7);
        if (((plVar1 != (longlong *)0x0) && (*plVar1 != 0)) && (*(float *)(plVar1 + 0x34) != 0.0)) {
          TDelegate<void___cdecl(UAnimMontage_*,FName,bool),FDefaultDelegateUserPolicy>::
          CopyFrom<FDefaultDelegateUserPolicy>
                    ((TDelegate<void___cdecl(UAnimMontage_*,FName,bool),FDefaultDelegateUserPolicy>
                      *)(plVar1 + 10),param_1);
        }
        uVar6 = uVar6 + 1;
        lVar7 = lVar7 + 8;
      } while ((int)uVar6 < (this->MontageInstances).ArrayNum);
    }
  }
  else {
    ppFVar5 = TMapBase<UAnimMontage_*,FAnimMontageInstance_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UAnimMontage_*,FAnimMontageInstance_*,0>_>
              ::Find((TMapBase<UAnimMontage_*,FAnimMontageInstance_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UAnimMontage_*,FAnimMontageInstance_*,0>_>
                      *)&this->ActiveMontagesMap,param_2);
    if ((ppFVar5 != (FAnimMontageInstance **)0x0) && (*ppFVar5 != (FAnimMontageInstance *)0x0)) {
      TDelegate<void___cdecl(UAnimMontage_*,FName,bool),FDefaultDelegateUserPolicy>::
      CopyFrom<FDefaultDelegateUserPolicy>(&(*ppFVar5)->OnMontageSectionChanged,param_1);
      return;
    }
  }
  return;
}

// Montage_Stop @ 14746aac0

void __thiscall UAnimInstance::Montage_Stop(UAnimInstance *this,float param_1,UAnimMontage *param_2)

{
  FAnimMontageInstance *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FAnimMontageInstance **ppFVar5;
  uint uVar6;
  longlong lVar7;
  float local_res10 [2];
  FMontageBlendSettings local_58;
  FMontageBlendSettings local_38;
  
  local_res10[0] = param_1;
  if (param_2 == (UAnimMontage *)0x0) {
    uVar6 = 0;
    if (0 < (this->MontageInstances).ArrayNum) {
      lVar7 = 0;
      do {
        uVar4 = 0;
        if ((int)uVar6 < (this->MontageInstances).ArrayNum) {
          uVar4 = ~uVar6 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pFVar1 = *(FAnimMontageInstance **)((this->MontageInstances).AllocatorInstance.Data + lVar7)
        ;
        if (((pFVar1 != (FAnimMontageInstance *)0x0) &&
            ((pFVar1->Montage).field0_0x0.DebugPtr != (UAnimMontage *)0x0)) &&
           ((pFVar1->Blend).DesiredValue != 0.0)) {
          `UAnimInstance::Montage_Stop'::__l2::<lambda_1>::operator()(local_res10,&local_38,pFVar1);
          FAnimMontageInstance::Stop(pFVar1,&local_38,true);
          if ((this->bUninitialized != '\0') &&
             (MontageCVars::bEarlyOutMontageWhenUninitialized != false)) {
            return;
          }
        }
        uVar6 = uVar6 + 1;
        lVar7 = lVar7 + 8;
      } while ((int)uVar6 < (this->MontageInstances).ArrayNum);
    }
  }
  else {
    ppFVar5 = TMapBase<UAnimMontage_*,FAnimMontageInstance_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UAnimMontage_*,FAnimMontageInstance_*,0>_>
              ::Find((TMapBase<UAnimMontage_*,FAnimMontageInstance_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UAnimMontage_*,FAnimMontageInstance_*,0>_>
                      *)&this->ActiveMontagesMap,param_2);
    if ((ppFVar5 != (FAnimMontageInstance **)0x0) &&
       (pFVar1 = *ppFVar5, pFVar1 != (FAnimMontageInstance *)0x0)) {
      `UAnimInstance::Montage_Stop'::__l2::<lambda_1>::operator()(local_res10,&local_58,pFVar1);
      FAnimMontageInstance::Stop(pFVar1,&local_58,true);
      return;
    }
  }
  return;
}

// Montage_StopGroupByName @ 14746ac50

void __thiscall
UAnimInstance::Montage_StopGroupByName(UAnimInstance *this,float param_1,FName param_2)

{
  longlong *plVar1;
  FAnimMontageInstance *this_00;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FName FVar5;
  FAlphaBlend *pFVar6;
  uint uVar7;
  longlong lVar8;
  FAlphaBlend local_68;
  
  uVar7 = 0;
  if (0 < (this->MontageInstances).ArrayNum) {
    lVar8 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar7 < (this->MontageInstances).ArrayNum) {
        uVar4 = ~uVar7 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      plVar1 = *(longlong **)((this->MontageInstances).AllocatorInstance.Data + lVar8);
      if ((((plVar1 != (longlong *)0x0) && ((UAnimMontage *)*plVar1 != (UAnimMontage *)0x0)) &&
          (*(float *)(plVar1 + 0x34) != 0.0)) &&
         (FVar5 = UAnimMontage::GetGroupName((UAnimMontage *)*plVar1), *(FName *)FVar5 == param_2))
      {
        uVar4 = 0;
        if ((int)uVar7 < (this->MontageInstances).ArrayNum) {
          uVar4 = ~uVar7 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        this_00 = *(FAnimMontageInstance **)
                   ((this->MontageInstances).AllocatorInstance.Data + lVar8);
        pFVar6 = FAlphaBlend::FAlphaBlend(&local_68,(FAlphaBlend *)(*plVar1 + 0xf0),param_1);
        FAnimMontageInstance::Stop(this_00,pFVar6,true);
      }
      uVar7 = uVar7 + 1;
      lVar8 = lVar8 + 8;
    } while ((int)uVar7 < (this->MontageInstances).ArrayNum);
  }
  return;
}

// Montage_StopInternal @ 14746ade0

void __thiscall
UAnimInstance::Montage_StopInternal
          (UAnimInstance *this,
          TFunctionRef<FMontageBlendSettings___cdecl(FAnimMontageInstance_const_*)> *param_1,
          UAnimMontage *param_2)

{
  FAnimMontageInstance *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FAnimMontageInstance **ppFVar5;
  uint uVar6;
  longlong lVar7;
  FAnimMontageInstance *local_res18;
  FAnimMontageInstance *local_res20;
  FMontageBlendSettings local_68;
  FMontageBlendSettings local_48;
  
  if (param_2 == (UAnimMontage *)0x0) {
    uVar6 = 0;
    if (0 < (this->MontageInstances).ArrayNum) {
      lVar7 = 0;
      do {
        uVar4 = 0;
        if ((int)uVar6 < (this->MontageInstances).ArrayNum) {
          uVar4 = ~uVar6 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pFVar1 = *(FAnimMontageInstance **)((this->MontageInstances).AllocatorInstance.Data + lVar7)
        ;
        if (((pFVar1 != (FAnimMontageInstance *)0x0) &&
            ((pFVar1->Montage).field0_0x0.DebugPtr != (UAnimMontage *)0x0)) &&
           ((pFVar1->Blend).DesiredValue != 0.0)) {
          local_res20 = pFVar1;
          (**(code **)param_1)(&local_48,*(undefined8 *)&param_1->field_0x8,&local_res20);
          FAnimMontageInstance::Stop(pFVar1,&local_48,true);
          if ((this->bUninitialized != '\0') &&
             (MontageCVars::bEarlyOutMontageWhenUninitialized != false)) {
            return;
          }
        }
        uVar6 = uVar6 + 1;
        lVar7 = lVar7 + 8;
      } while ((int)uVar6 < (this->MontageInstances).ArrayNum);
    }
  }
  else {
    ppFVar5 = TMapBase<UAnimMontage_*,FAnimMontageInstance_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UAnimMontage_*,FAnimMontageInstance_*,0>_>
              ::Find((TMapBase<UAnimMontage_*,FAnimMontageInstance_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UAnimMontage_*,FAnimMontageInstance_*,0>_>
                      *)&this->ActiveMontagesMap,param_2);
    if ((ppFVar5 != (FAnimMontageInstance **)0x0) &&
       (pFVar1 = *ppFVar5, pFVar1 != (FAnimMontageInstance *)0x0)) {
      local_res18 = pFVar1;
      (**(code **)param_1)(&local_68,*(undefined8 *)&param_1->field_0x8,&local_res18);
      FAnimMontageInstance::Stop(pFVar1,&local_68,true);
      return;
    }
  }
  return;
}

// Montage_StopWithBlendOut @ 14746af70

void __thiscall
UAnimInstance::Montage_StopWithBlendOut
          (UAnimInstance *this,FAlphaBlendArgs *param_1,UAnimMontage *param_2)

{
  FAnimMontageInstance *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FAnimMontageInstance **ppFVar5;
  uint uVar6;
  longlong lVar7;
  TObjectPtr<UCurveFloat>_u_0 local_68;
  float local_60;
  EAlphaBlendOption local_5c;
  FMontageBlendSettings local_58;
  FMontageBlendSettings local_38;
  
  local_68 = (TObjectPtr<UCurveFloat>_u_0)(param_1->CustomCurve).field0_0x0.DebugPtr;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (local_68.DebugPtr != (UCurveFloat *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_68.DebugPtr);
  }
  local_60 = param_1->BlendTime;
  local_5c = param_1->BlendOption;
  if (param_2 == (UAnimMontage *)0x0) {
    if (0 < (this->MontageInstances).ArrayNum) {
      lVar7 = 0;
      uVar6 = 0;
      do {
        uVar4 = 0;
        if ((int)uVar6 < (this->MontageInstances).ArrayNum) {
          uVar4 = ~uVar6 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pFVar1 = *(FAnimMontageInstance **)((this->MontageInstances).AllocatorInstance.Data + lVar7)
        ;
        if (((pFVar1 != (FAnimMontageInstance *)0x0) &&
            ((pFVar1->Montage).field0_0x0.DebugPtr != (UAnimMontage *)0x0)) &&
           ((pFVar1->Blend).DesiredValue != 0.0)) {
          `UAnimInstance::Montage_StopWithBlendOut'::__l2::<lambda_1>::operator()
                    (&local_68,&local_38,pFVar1);
          FAnimMontageInstance::Stop(pFVar1,&local_38,true);
          if ((this->bUninitialized != '\0') &&
             (MontageCVars::bEarlyOutMontageWhenUninitialized != false)) {
            return;
          }
        }
        uVar6 = uVar6 + 1;
        lVar7 = lVar7 + 8;
      } while ((int)uVar6 < (this->MontageInstances).ArrayNum);
    }
  }
  else {
    ppFVar5 = TMapBase<UAnimMontage_*,FAnimMontageInstance_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UAnimMontage_*,FAnimMontageInstance_*,0>_>
              ::Find((TMapBase<UAnimMontage_*,FAnimMontageInstance_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UAnimMontage_*,FAnimMontageInstance_*,0>_>
                      *)&this->ActiveMontagesMap,param_2);
    if ((ppFVar5 != (FAnimMontageInstance **)0x0) &&
       (pFVar1 = *ppFVar5, pFVar1 != (FAnimMontageInstance *)0x0)) {
      `UAnimInstance::Montage_StopWithBlendOut'::__l2::<lambda_1>::operator()
                (&local_68,&local_58,pFVar1);
      FAnimMontageInstance::Stop(pFVar1,&local_58,true);
    }
  }
  return;
}

// Montage_StopWithBlendSettings @ 14746b110

void __thiscall
UAnimInstance::Montage_StopWithBlendSettings
          (UAnimInstance *this,FMontageBlendSettings *param_1,UAnimMontage *param_2)

{
  float fVar1;
  EAlphaBlendOption EVar2;
  EMontageBlendMode EVar3;
  TObjectPtr<UBlendProfile>_u_0 TVar4;
  UCurveFloat *pUVar5;
  FAnimMontageInstance *pFVar6;
  code *pcVar7;
  bool bVar8;
  uint uVar9;
  FAnimMontageInstance **ppFVar10;
  uint uVar11;
  longlong lVar12;
  TObjectPtr<UBlendProfile>_u_0 local_88;
  UCurveFloat *local_80;
  float local_78;
  EAlphaBlendOption local_74;
  EMontageBlendMode local_70;
  TObjectPtr<UBlendProfile>_u_0 local_68;
  UCurveFloat *local_60;
  float local_58;
  EAlphaBlendOption local_54;
  EMontageBlendMode local_50;
  
  TVar4.ObjectPtr.field0_0x0 = (FObjectPtr)(param_1->BlendProfile).field0_0x0.DebugPtr;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (TVar4.DebugPtr != (UBlendProfile *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)TVar4.DebugPtr);
  }
  pUVar5 = (param_1->Blend).CustomCurve.field0_0x0.DebugPtr;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UCurveFloat *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar5);
  }
  fVar1 = (param_1->Blend).BlendTime;
  EVar2 = (param_1->Blend).BlendOption;
  EVar3 = param_1->BlendMode;
  if (param_2 == (UAnimMontage *)0x0) {
    if (0 < (this->MontageInstances).ArrayNum) {
      lVar12 = 0;
      uVar11 = 0;
      do {
        uVar9 = 0;
        if ((int)uVar11 < (this->MontageInstances).ArrayNum) {
          uVar9 = ~uVar11 >> 0x1f;
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
        pFVar6 = *(FAnimMontageInstance **)
                  ((this->MontageInstances).AllocatorInstance.Data + lVar12);
        if (((pFVar6 != (FAnimMontageInstance *)0x0) &&
            ((pFVar6->Montage).field0_0x0.DebugPtr != (UAnimMontage *)0x0)) &&
           ((pFVar6->Blend).DesiredValue != 0.0)) {
          local_68.ObjectPtr.field0_0x0 = TVar4.ObjectPtr.field0_0x0;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (TVar4.DebugPtr != (UBlendProfile *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)TVar4.DebugPtr);
          }
          local_60 = pUVar5;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UCurveFloat *)0x0)
             ) {
            UE::GC::MarkAsReachable((UObject *)pUVar5);
          }
          local_58 = fVar1;
          local_54 = EVar2;
          local_50 = EVar3;
          FAnimMontageInstance::Stop(pFVar6,(FMontageBlendSettings *)&local_68.ObjectPtr,true);
          if ((this->bUninitialized != '\0') &&
             (MontageCVars::bEarlyOutMontageWhenUninitialized != false)) {
            return;
          }
        }
        uVar11 = uVar11 + 1;
        lVar12 = lVar12 + 8;
      } while ((int)uVar11 < (this->MontageInstances).ArrayNum);
    }
  }
  else {
    ppFVar10 = TMapBase<UAnimMontage_*,FAnimMontageInstance_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UAnimMontage_*,FAnimMontageInstance_*,0>_>
               ::Find((TMapBase<UAnimMontage_*,FAnimMontageInstance_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UAnimMontage_*,FAnimMontageInstance_*,0>_>
                       *)&this->ActiveMontagesMap,param_2);
    if ((ppFVar10 != (FAnimMontageInstance **)0x0) &&
       (pFVar6 = *ppFVar10, pFVar6 != (FAnimMontageInstance *)0x0)) {
      local_88.ObjectPtr.field0_0x0 = TVar4.ObjectPtr.field0_0x0;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (TVar4.DebugPtr != (UBlendProfile *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)TVar4.DebugPtr);
      }
      local_80 = pUVar5;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UCurveFloat *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar5);
      }
      local_78 = fVar1;
      local_74 = EVar2;
      local_70 = EVar3;
      FAnimMontageInstance::Stop(pFVar6,(FMontageBlendSettings *)&local_88.ObjectPtr,true);
    }
  }
  return;
}

// Montage_UpdateWeight @ 14746b340

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UAnimInstance::Montage_UpdateWeight(UAnimInstance *this,float param_1)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  uint uVar7;
  FName *pFVar8;
  FThreadSafeStaticStat<FStat_STAT_Montage_UpdateWeight> FVar9;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FNameEntryId FVar10;
  FName FVar11;
  uint uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  FColor_u_0 local_res8 [4];
  FName local_res18;
  LARGE_INTEGER local_res20;
  FName local_78;
  FName local_70;
  FStatMessage local_60 [2];
  
  if ((this->MontageInstances).ArrayNum == 0) {
    return;
  }
  uVar13 = 0;
  FVar9 = StatPtr_STAT_Montage_UpdateWeight;
  if (StatPtr_STAT_Montage_UpdateWeight ==
      (FThreadSafeStaticStat<FStat_STAT_Montage_UpdateWeight>)0x0) {
    pFVar8 = ::FName::FName(&local_78,"STAT_Montage_UpdateWeight");
    FVar9 = (FThreadSafeStaticStat<FStat_STAT_Montage_UpdateWeight>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Montage_UpdateWeight,*pFVar8,
                       L"MontageUpdateWeight","STATGROUP_Anim","STATCAT_Advanced",L"Anim",true,true,
                       ST_int64,true,false,MCR_Invalid);
  }
  FVar11 = *(FName *)FVar9;
  bVar3 = false;
  bVar5 = false;
  local_70.ComparisonIndex.Value = 0;
  local_70.Number = 0;
  FVar10 = FVar11.ComparisonIndex.Value;
  uVar7 = FVar11.Number;
  if ((FVar10.Value != 0) || (uVar7 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8[0]._s_0,(char *)*(FName *)((longlong)FVar9 + 0x10));
      bVar3 = false;
      bVar5 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res18.ComparisonIndex.Value = FVar10.Value;
        local_res18.Number = uVar7;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res18,(wchar_t *)*(FName *)((longlong)FVar9 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimInstance.cpp"
                   ,0x787);
        bVar3 = true;
        bVar5 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res20.s.LowPart = FVar10.Value;
      local_res20.s.HighPart = uVar7;
      FThreadStats::AddMessage(FVar11,CycleScopeStart);
      bVar4 = true;
      goto LAB_14746b4af;
    }
  }
  bVar4 = false;
  FVar11 = local_70;
LAB_14746b4af:
  uVar14 = uVar13;
  if (0 < (this->MontageInstances).ArrayNum) {
    do {
      uVar12 = (uint)uVar13;
      uVar7 = 0;
      if ((int)uVar12 < (this->MontageInstances).ArrayNum) {
        uVar7 = ~uVar12 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (*(longlong *)((this->MontageInstances).AllocatorInstance.Data + uVar14) != 0) {
        uVar7 = 0;
        if ((int)uVar12 < (this->MontageInstances).ArrayNum) {
          uVar7 = ~uVar12 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        FAnimMontageInstance::UpdateWeight
                  (*(FAnimMontageInstance **)
                    ((this->MontageInstances).AllocatorInstance.Data + uVar14),param_1);
      }
      uVar13 = (ulonglong)(uVar12 + 1);
      uVar14 = uVar14 + 8;
    } while ((int)(uVar12 + 1) < (this->MontageInstances).ArrayNum);
  }
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
      local_60[0].NameAndInfo.Index = FVar11.ComparisonIndex.Value;
      local_60[0].NameAndInfo.Number = FVar11.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_res20);
      local_60[0].StatData.Pad[4] = '\0';
      local_60[0].StatData.Pad[5] = '\0';
      local_60[0].StatData.Pad[6] = '\0';
      local_60[0].StatData.Pad[7] = '\0';
      local_60[0].StatData.Pad[0] = local_res20.s.LowPart._0_1_;
      local_60[0].StatData.Pad[1] = local_res20.s.LowPart._1_1_;
      local_60[0].StatData.Pad[2] = local_res20.s.LowPart._2_1_;
      local_60[0].StatData.Pad[3] = local_res20.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,local_60);
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

// NativeBeginPlay @ 14746b6c0

void __thiscall UAnimInstance::NativeBeginPlay(UAnimInstance *this)

{
  return;
}

// NativeInitializeAnimation @ 14746b6d0

void __thiscall UAnimInstance::NativeInitializeAnimation(UAnimInstance *this)

{
  return;
}

// NativeLinkedAnimationLayersInitialized @ 14746b6e0

void __thiscall UAnimInstance::NativeLinkedAnimationLayersInitialized(UAnimInstance *this)

{
  return;
}

// NativePostEvaluateAnimation @ 14746b6f0

void __thiscall UAnimInstance::NativePostEvaluateAnimation(UAnimInstance *this)

{
  return;
}

// NativeThreadSafeUpdateAnimation @ 14746b700

void __thiscall UAnimInstance::NativeThreadSafeUpdateAnimation(UAnimInstance *this,float param_1)

{
  return;
}

// NativeUninitializeAnimation @ 14746b710

void __thiscall UAnimInstance::NativeUninitializeAnimation(UAnimInstance *this)

{
  return;
}

// NativeUpdateAnimation @ 14746b720

void __thiscall UAnimInstance::NativeUpdateAnimation(UAnimInstance *this,float param_1)

{
  return;
}

// NeedsImmediateUpdate @ 14746b730

bool __thiscall UAnimInstance::NeedsImmediateUpdate(UAnimInstance *this,float param_1,bool param_2)

{
  code *pcVar1;
  TConsoleVariableData<int> *pTVar2;
  TConsoleVariableData<int> *pTVar3;
  bool bVar4;
  undefined1 uVar5;
  char cVar6;
  bool bVar7;
  UClass *this_00;
  
  this_00 = Z_Construct_UClass_UEngine_NoRegister();
  if ((this_00->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this_00);
  }
  pTVar3 = CVarForceUseParallelAnimUpdate.Ref;
  if ((((this_00->ClassDefaultObject).field0_0x0.DebugPtr[0x51].field_0x4 & 4) == 0) ||
     (this->bUseMultiThreadedAnimationUpdate == 0)) {
    bVar4 = IsInParallelGameThread();
    if ((!bVar4) &&
       ((bVar4 = IsInGameThread(), !bVar4 &&
        (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<6409875433831007945>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                            ,0x6c9,"GetShadowIndex() == 0"), bVar4)))) {
      pcVar1 = (code *)swi(3);
      uVar5 = (*pcVar1)();
      return (bool)uVar5;
    }
    if (pTVar3->ShadowedValue[0] == 0) {
      bVar4 = false;
      goto LAB_14746b7d4;
    }
  }
  bVar4 = true;
LAB_14746b7d4:
  if (((!param_2) || ((this->RootMotionMode).Value != '\x02')) &&
     (cVar6 = (**(code **)(*(longlong *)this + 0x2c8))(this), pTVar3 = CVarUseParallelAnimUpdate.Ref
     , cVar6 != '\0')) {
    bVar7 = IsInParallelGameThread();
    if (((!bVar7) && (bVar7 = IsInGameThread(), !bVar7)) &&
       (bVar7 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<6409875433831007945>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                           ,0x6c9,"GetShadowIndex() == 0"), bVar7)) {
      pcVar1 = (code *)swi(3);
      uVar5 = (*pcVar1)();
      return (bool)uVar5;
    }
    pTVar2 = CVarUseParallelAnimationEvaluation.Ref;
    if (pTVar3->ShadowedValue[0] != 0) {
      bVar7 = IsInParallelGameThread();
      if (((!bVar7) && (bVar7 = IsInGameThread(), !bVar7)) &&
         (bVar7 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<6409875433831007945>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                             ,0x6c9,"GetShadowIndex() == 0"), bVar7)) {
        pcVar1 = (code *)swi(3);
        uVar5 = (*pcVar1)();
        return (bool)uVar5;
      }
      if (((pTVar2->ShadowedValue[0] != 0) && (bVar4)) && (param_1 != 0.0)) {
        return false;
      }
    }
  }
  return true;
}

// NeedsUpdate @ 14746b8c0

bool __thiscall UAnimInstance::NeedsUpdate(UAnimInstance *this)

{
  return this->bNeedsUpdate;
}

// OnMontageInstanceStopped @ 14746ba00

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UAnimInstance::OnMontageInstanceStopped(UAnimInstance *this,FAnimMontageInstance *param_1)

{
  TMap<UAnimMontage_*,FAnimMontageInstance_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UAnimMontage_*,FAnimMontageInstance_*,0>_>
  *this_00;
  ulonglong uVar1;
  int iVar2;
  TObjectPtr<UAnimMontage>_u_0 TVar3;
  bool bVar4;
  int iVar5;
  FAnimMontageInstance **ppFVar6;
  longlong lVar7;
  uint uVar8;
  uint *puVar9;
  TObjectPtr<UAnimMontage>_u_0 TStackX_8;
  undefined1 auStack_88 [12];
  uint uStack_7c;
  undefined1 *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  TMap<UAnimMontage_*,FAnimMontageInstance_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UAnimMontage_*,FAnimMontageInstance_*,0>_>
  *pTStack_60;
  int iStack_58;
  uint uStack_54;
  undefined1 *puStack_50;
  undefined4 uStack_48;
  int iStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  
  this_00 = &this->ActiveMontagesMap;
  TVar3 = (TObjectPtr<UAnimMontage>_u_0)(param_1->Montage).field0_0x0.DebugPtr;
  if (TVar3.DebugPtr == (UAnimMontage *)0x0) {
    puStack_78 = &(this->ActiveMontagesMap).field_0x10;
    iStack_58 = 0;
    iVar2 = *(int *)&(this->ActiveMontagesMap).field_0x28;
    iStack_40 = 0;
    uStack_54 = 1;
    iVar5 = 0;
    if (iVar2 != 0) {
      puVar9 = *(uint **)&(this->ActiveMontagesMap).field_0x20;
      if (puVar9 == (uint *)0x0) {
        puVar9 = (uint *)puStack_78;
      }
      uVar8 = *puVar9;
      while (uVar8 == 0) {
        lVar7 = (longlong)iStack_58;
        iStack_40 = iStack_40 + 0x20;
        iStack_58 = iStack_58 + 1;
        iVar5 = iVar2;
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_58) goto LAB_14744444d;
        uVar8 = puVar9[lVar7 + 1];
      }
      uStack_54 = -uVar8 & uVar8;
      uVar1 = (ulonglong)uStack_54 * 2 + 1;
      lVar7 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iVar5 = iStack_40 + -1 + (int)lVar7;
      if (iVar2 < iVar5) {
        iVar5 = iVar2;
      }
    }
LAB_14744444d:
    uStack_7c = uStack_54;
    auStack_88._8_4_ = iStack_58;
    uStack_48 = 0xffffffff;
    uStack_3c = uStack_70._4_4_;
    uStack_68 = CONCAT44(uStack_70._4_4_,iStack_40);
    auStack_88._0_8_ = this_00;
    uStack_70 = CONCAT44(iVar5,0xffffffff);
    pTStack_60 = this_00;
    puStack_50 = puStack_78;
    iStack_44 = iVar5;
    if (iVar5 < *(int *)&(this->ActiveMontagesMap).field_0x28) {
      do {
        if (*(FAnimMontageInstance **)(*(longlong *)auStack_88._0_8_ + 8 + (longlong)iVar5 * 0x18)
            == param_1) {
          if ((*(longlong *)auStack_88._0_8_ + (longlong)iVar5 * 0x18 != 0) &&
             (2 < (byte)LogAnimation._0_1_)) {
            TStackX_8 = *(TObjectPtr<UAnimMontage>_u_0 *)&this->field_0x18;
            ::FName::ToString((FName *)&TStackX_8.ObjectPtr,(FString *)auStack_88);
            UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAnimation);
            if ((FScriptContainerElement *)auStack_88._0_8_ != (FScriptContainerElement *)0x0) {
              FMemory::Free((void *)auStack_88._0_8_);
            }
          }
          break;
        }
        uStack_70 = CONCAT44(uStack_70._4_4_,(uint)uStack_70 & ~uStack_7c);
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                  ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)(auStack_88 + 8));
        bVar4 = uStack_70._4_4_ < *(int *)(puStack_78 + 0x18);
        iVar5 = uStack_70._4_4_;
      } while (bVar4);
    }
  }
  else {
    ppFVar6 = TMapBase<UAnimMontage_*,FAnimMontageInstance_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UAnimMontage_*,FAnimMontageInstance_*,0>_>
              ::Find((TMapBase<UAnimMontage_*,FAnimMontageInstance_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UAnimMontage_*,FAnimMontageInstance_*,0>_>
                      *)this_00,TVar3.DebugPtr);
    if (((ppFVar6 != (FAnimMontageInstance **)0x0) && (*ppFVar6 == param_1)) &&
       (TStackX_8 = TVar3,
       *(int *)&(this->ActiveMontagesMap).field_0x8 != *(int *)&(this->ActiveMontagesMap).field_0x34
       )) {
      uVar8 = ((uint)((ulonglong)TVar3.DebugPtr >> 0x14) & 0xffff ^
              (uint)((ulonglong)TVar3.DebugPtr >> 4)) * -0x7a143595;
      uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
      TSet<TTuple<UAnimMontage_*,FAnimMontageInstance_*>,TDefaultMapHashableKeyFuncs<UAnimMontage_*,FAnimMontageInstance_*,0>,FDefaultSetAllocator>
      ::RemoveImpl<UAnimMontage_const_*>
                ((TSet<TTuple<UAnimMontage_*,FAnimMontageInstance_*>,TDefaultMapHashableKeyFuncs<UAnimMontage_*,FAnimMontageInstance_*,0>,FDefaultSetAllocator>
                  *)this_00,uVar8 >> 0x10 ^ uVar8,&TStackX_8.DebugPtr);
    }
  }
  if (this->RootMotionMontageInstance == param_1) {
    this->RootMotionMontageInstance = (FAnimMontageInstance *)0x0;
  }
  FAnimMontageInstance::MontageSync_StopFollowing(param_1);
  FAnimMontageInstance::MontageSync_StopLeading(param_1);
  return;
}

// OverrideCurveValue @ 14746c910

void __thiscall UAnimInstance::OverrideCurveValue(UAnimInstance *this,FName param_1,float param_2)

{
  FName FVar1;
  uint uVar2;
  FAnimInstanceProxy *pFVar3;
  float *pfVar4;
  FName local_res10 [3];
  
  local_res10[0] = param_1;
  pFVar3 = GetProxyOnAnyThread<FAnimInstanceProxy>(this);
  FVar1 = local_res10[0];
  uVar2 = ::GetTypeHash(local_res10[0].ComparisonIndex.Value);
  pfVar4 = TMapBase<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>::
           FindOrAddImpl<FName_const_&>
                     ((TMapBase<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>
                       *)pFVar3->AnimationCurves,uVar2 + FVar1.Number,local_res10);
  *pfVar4 = param_2;
  return;
}

// ParallelCanEvaluate @ 14746ca60

bool __thiscall UAnimInstance::ParallelCanEvaluate(UAnimInstance *this,USkeletalMesh *param_1)

{
  FBoneContainer *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  FAnimInstanceProxy *pFVar5;
  USkeletalMesh *pUVar6;
  
  pFVar5 = GetProxyOnAnyThread<FAnimInstanceProxy>(this);
  if ((pFVar5->RequiredBones).Object == (FBoneContainer *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  pFVar1 = (pFVar5->RequiredBones).Object;
  bVar3 = FWeakObjectPtr::IsValid(&(pFVar1->Asset).WeakPtr);
  if (((bVar3) && (pFVar1->RefSkeleton != (FReferenceSkeleton *)0x0)) &&
     (0 < (pFVar1->BoneIndicesArray).ArrayNum)) {
    if ((pFVar5->RequiredBones).Object == (FBoneContainer *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
    pUVar6 = (USkeletalMesh *)
             FWeakObjectPtr::Get(&(((pFVar5->RequiredBones).Object)->Asset).WeakPtr);
    if (pUVar6 == param_1) {
      return true;
    }
  }
  return false;
}

// ParallelEvaluateAnimation @ 14746cb40

void __thiscall
UAnimInstance::ParallelEvaluateAnimation
          (UAnimInstance *this,bool param_1,USkeletalMesh *param_2,FBlendedHeapCurve *param_3,
          FCompactPose *param_4)

{
  FParallelEvaluationData local_68;
  TArray<int,TSizedDefaultAllocator<32>_> *local_48;
  undefined8 local_40;
  TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_> *local_38;
  undefined8 local_30;
  TArray<UE::Anim::TWrappedAttribute<TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
  *local_28;
  undefined8 local_20;
  void *local_18;
  undefined8 local_10;
  
  local_48 = (TArray<int,TSizedDefaultAllocator<32>_> *)0x0;
  local_40 = 0;
  local_38 = (TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_> *)0x0;
  local_30 = 0;
  local_28 = (TArray<UE::Anim::TWrappedAttribute<TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
              *)0x0;
  local_20 = 0;
  local_18 = (void *)0x0;
  local_10 = 0;
  local_68.OutPose = param_4;
  local_68.OutAttributes = (FHeapAttributeContainer *)&local_48;
  local_68.OutCurve = param_3;
  ParallelEvaluateAnimation(this,param_1,param_2,&local_68);
  if (local_18 != (void *)0x0) {
    FMemory::Free(local_18);
  }
  DestructItems<TArray<UE::Anim::TWrappedAttribute<TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>,int>
            (local_28,(int)local_20);
  if (local_28 !=
      (TArray<UE::Anim::TWrappedAttribute<TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
       *)0x0) {
    FMemory::Free(local_28);
  }
  DestructItems<TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_>,int>
            (local_38,(int)local_30);
  if (local_38 != (TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_> *)0x0) {
    FMemory::Free(local_38);
  }
  DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>(local_48,(int)local_40);
  if (local_48 != (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
    FMemory::Free(local_48);
  }
  return;
}

// ParallelEvaluateAnimation @ 14746cc00

void __thiscall
UAnimInstance::ParallelEvaluateAnimation
          (UAnimInstance *this,bool param_1,USkeletalMesh *param_2,FParallelEvaluationData *param_3)

{
  int iVar1;
  FBaseCompactPose<TMemStackAllocator<0>_> *this_00;
  FBlendedHeapCurve *pFVar2;
  FCompactPose *this_01;
  code *pcVar3;
  int *piVar4;
  void *_Src;
  int iVar5;
  bool bVar6;
  FAnimInstanceProxy *this_02;
  uint *puVar7;
  FTlsAutoCleanup *pFVar8;
  longlong lVar9;
  FCachedPoseScope local_res10 [16];
  undefined1 local_res20 [8];
  FLLMScope local_118 [2];
  FMemMark local_110;
  undefined1 local_e8 [32];
  FBaseCompactPose<TMemStackAllocator<0>_> local_c8;
  void *pvStack_b0;
  undefined8 local_a8;
  undefined1 local_a0;
  undefined8 local_98;
  TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_> TStack_90;
  bool local_50;
  FMemScope local_48;
  code *local_40;
  undefined1 *local_38;
  
  FLLMScope::FLLMScope(local_118,Animation,false,None,Default,true);
  FMemScope::FMemScope(&local_48,Animation,true);
  this_02 = GetProxyOnAnyThread<FAnimInstanceProxy>(this);
  this_00 = (FBaseCompactPose<TMemStackAllocator<0>_> *)param_3->OutPose;
  if ((this_02->RequiredBones).Object == (FBoneContainer *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  FBaseCompactPose<TMemStackAllocator<0>_>::SetBoneContainer
            (this_00,(this_02->RequiredBones).Object);
  puVar7 = TThreadSingleton<FMemStack>::GetTlsSlot();
  local_38 = local_res20;
  local_40 = UE::Core::Private::Function::
             TFunctionRefCaller<`TThreadSingleton<FMemStack>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
             ::Call;
  pFVar8 = FThreadSingletonInitializer::Get
                     ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_40,puVar7);
  local_110.Mem = (FMemStackBase *)(pFVar8 + 2);
  local_110.Top = (local_110.Mem)->Top;
  local_110.SavedChunk = *(FTaggedMemory **)(pFVar8 + 4);
  local_110.bPopped = false;
  local_110.NextTopmostMark = *(FMemMark **)(pFVar8 + 5);
  pFVar8[5] = (FTlsAutoCleanup)&local_110;
  *(int *)(pFVar8 + 6) = *(int *)(pFVar8 + 6) + 1;
  UE::Anim::FCachedPoseScope::FCachedPoseScope(local_res10);
  if (param_1) {
    FBaseCompactPose<TMemStackAllocator<0>_>::ResetToRefPose
              ((FBaseCompactPose<TMemStackAllocator<0>_> *)param_3->OutPose,
               ((FBaseCompactPose<TMemStackAllocator<0>_> *)param_3->OutPose)->BoneContainer);
  }
  else {
    FAnimationBaseContext::FAnimationBaseContext
              ((FAnimationBaseContext *)local_e8,this_02,(FAnimationUpdateSharedContext *)0x0);
    local_c8._padding_ = 0;
    local_c8.BoneContainer = (FBoneContainer *)0x0;
    pvStack_b0 = (void *)0x0;
    local_98 = 0;
    TStack_90.UniqueTypedBoneIndices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_c8._padding_ = 0;
    local_a8 = 0;
    local_a0 = 0;
    TStack_90.UniqueTypedBoneIndices.ArrayNum = 0;
    TStack_90.UniqueTypedBoneIndices.ArrayMax = 0;
    TStack_90.AttributeIdentifiers.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    TStack_90.AttributeIdentifiers.ArrayNum = 0;
    TStack_90.AttributeIdentifiers.ArrayMax = 0;
    TStack_90.Values.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    TStack_90.Values.ArrayNum = 0;
    TStack_90.Values.ArrayMax = 0;
    TStack_90.UniqueTypes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    TStack_90.UniqueTypes.ArrayNum = 0;
    TStack_90.UniqueTypes.ArrayMax = 0;
    local_50 = false;
    FPoseContext::InitializeImpl((FPoseContext *)local_e8,this_02);
    if (local_50 == false) {
      FBaseCompactPose<TMemStackAllocator<0>_>::ResetToRefPose
                ((FBaseCompactPose<TMemStackAllocator<0>_> *)(local_e8 + 0x20),
                 local_c8.BoneContainer);
    }
    else {
      FCompactPose::ResetToAdditiveIdentity((FCompactPose *)(local_e8 + 0x20));
    }
    FAnimInstanceProxy::EvaluateAnimation_WithRoot
              (this_02,(FPoseContext *)local_e8,this_02->RootNode);
    _Src = pvStack_b0;
    pFVar2 = param_3->OutCurve;
    iVar5 = (int)local_a8;
    lVar9 = (longlong)(int)local_a8;
    piVar4 = (int *)(&pFVar2->field_0x8 + 4);
    iVar1 = *piVar4;
    *(int *)&pFVar2->field_0x8 = (int)local_a8;
    if (((int)local_a8 == 0) && (iVar1 == 0)) {
      *piVar4 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,4,(int)local_a8,iVar1,(ForAnyElementType *)pFVar2,(int)local_a8,piVar4);
      if (iVar5 != 0) {
        memcpy(*(FScriptContainerElement **)&pFVar2->field_0x0,_Src,lVar9 << 4);
      }
    }
    pFVar2->field_0x10 = local_a0;
    this_01 = param_3->OutPose;
    if (this_01 != (FCompactPose *)(local_e8 + 0x20)) {
      TArray<UE::Math::TTransform<double>,TMemStackAllocator<0>_>::operator=
                ((TArray<UE::Math::TTransform<double>,TMemStackAllocator<0>_> *)this_01,
                 (TArray<UE::Math::TTransform<double>,TMemStackAllocator<0>_> *)(local_e8 + 0x20));
      *(FBoneContainer **)&this_01->field_0x10 = local_c8.BoneContainer;
    }
    UE::Anim::TAttributeContainer<FCompactPoseBoneIndex,TSizedDefaultAllocator<32>_>::
    CopyFrom<TMemStackAllocator<0>_>
              ((TAttributeContainer<FCompactPoseBoneIndex,TSizedDefaultAllocator<32>_> *)
               param_3->OutAttributes,&TStack_90);
    if (TStack_90.UniqueTypes.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(TStack_90.UniqueTypes.AllocatorInstance.Data);
    }
    DestructItems<TArray<UE::Anim::TWrappedAttribute<TMemStackAllocator<0>_>,TSizedDefaultAllocator<32>_>,int>
              ((TArray<UE::Anim::TWrappedAttribute<TMemStackAllocator<0>_>,TSizedDefaultAllocator<32>_>
                *)TStack_90.Values.AllocatorInstance.Data,TStack_90.Values.ArrayNum);
    if ((TArray<UE::Anim::TWrappedAttribute<TMemStackAllocator<0>_>,TSizedDefaultAllocator<32>_> *)
        TStack_90.Values.AllocatorInstance.Data !=
        (TArray<UE::Anim::TWrappedAttribute<TMemStackAllocator<0>_>,TSizedDefaultAllocator<32>_> *)
        0x0) {
      FMemory::Free(TStack_90.Values.AllocatorInstance.Data);
    }
    DestructItems<TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_>,int>
              ((TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_> *)
               TStack_90.AttributeIdentifiers.AllocatorInstance.Data,
               TStack_90.AttributeIdentifiers.ArrayNum);
    if ((TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_> *)
        TStack_90.AttributeIdentifiers.AllocatorInstance.Data !=
        (TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_> *)0x0) {
      FMemory::Free(TStack_90.AttributeIdentifiers.AllocatorInstance.Data);
    }
    DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
              ((TArray<int,TSizedDefaultAllocator<32>_> *)
               TStack_90.UniqueTypedBoneIndices.AllocatorInstance.Data,
               TStack_90.UniqueTypedBoneIndices.ArrayNum);
    if ((TArray<int,TSizedDefaultAllocator<32>_> *)
        TStack_90.UniqueTypedBoneIndices.AllocatorInstance.Data !=
        (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
      FMemory::Free(TStack_90.UniqueTypedBoneIndices.AllocatorInstance.Data);
    }
  }
  UE::Anim::FCachedPoseScope::~FCachedPoseScope(local_res10);
  if (local_110.bPopped == false) {
    if ((local_110.Mem)->TopMark != &local_110) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mem.TopMark == this",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MemStack.h"
                         ,0x215,L"");
      if (bVar6) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    local_110.bPopped = true;
    (local_110.Mem)->NumMarks = (local_110.Mem)->NumMarks + -1;
    if (local_110.SavedChunk != (local_110.Mem)->TopChunk) {
      FMemStackBase::FreeChunks(local_110.Mem,local_110.SavedChunk);
    }
    (local_110.Mem)->Top = local_110.Top;
    (local_110.Mem)->TopMark = local_110.NextTopmostMark;
    local_110.Top = (uchar *)0x0;
  }
  FMemScope::~FMemScope(&local_48);
  FLLMScope::~FLLMScope(local_118);
  return;
}

// ParallelUpdateAnimation @ 14746cf50

void __thiscall UAnimInstance::ParallelUpdateAnimation(UAnimInstance *this)

{
  FAnimInstanceProxy *this_00;
  
  this_00 = GetProxyOnAnyThread<FAnimInstanceProxy>(this);
  FAnimInstanceProxy::UpdateAnimation(this_00);
  return;
}

// PerformLinkedLayerOverlayOperation @ 14746cf70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UAnimInstance::PerformLinkedLayerOverlayOperation
          (UAnimInstance *this,TSubclassOf<UAnimInstance> param_1,
          TFunctionRef<UClass_*___cdecl(UClass_*,FAnimNode_LinkedAnimLayer_*)> *param_2,bool param_3
          )

{
  int *piVar1;
  undefined8 *puVar2;
  int iVar3;
  FName FVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  bool bVar11;
  uint uVar12;
  int iVar13;
  IAnimClassInterface *pIVar14;
  UClass *pUVar15;
  IAnimClassInterface *pIVar16;
  longlong *plVar17;
  UClass *pUVar18;
  FAnimBlueprintFunction *pFVar19;
  TMap<FName,TArray<FAnimNode_LinkedAnimLayer_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FAnimNode_LinkedAnimLayer_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,0>_>
  *pTVar20;
  ForElementType<FAnimNode_LinkedAnimLayer_*> FVar21;
  TConstSetBitIterator<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *pTVar22;
  FAnimNode_LinkedAnimLayer *pFVar23;
  UClass *pUVar24;
  UAnimInstance *pUVar25;
  FAnimNode_LinkedAnimGraph *pFVar26;
  USkeletalMeshComponent *pUVar27;
  FAnimInstanceProxy *pFVar28;
  FAnimInstanceProxy *pFVar29;
  USkeletalMesh *pUVar30;
  UAnimInstance *pUVar31;
  UFunction *pUVar32;
  USkeletalMeshComponent *pUVar33;
  FBoneContainer *pFVar34;
  byte bVar35;
  ForElementType<FAnimNode_LinkedAnimLayer_*> FVar36;
  FAnimationBaseContext *pFVar37;
  longlong lVar38;
  undefined8 *puVar39;
  TArray<TObjectPtr<UAnimInstance>,TSizedDefaultAllocator<32>_> *pTVar40;
  FScriptContainerElement *pFVar41;
  undefined1 *puVar42;
  ForElementType<FAnimNode_LinkedAnimLayer_*> FVar43;
  ulonglong uVar44;
  ulonglong uVar45;
  longlong lVar46;
  UClass *pUVar47;
  FAnimNode_LinkedAnimLayer *this_00;
  ForElementType<FAnimNode_LinkedAnimLayer_*> FVar48;
  undefined1 auStackY_bc8 [32];
  undefined1 local_b68;
  undefined1 local_b67;
  undefined1 local_b66;
  undefined1 local_b65;
  bool local_b64 [12];
  UAnimInstance *local_b58;
  void *local_b50;
  UClass *local_b48;
  undefined1 local_b40 [4];
  uint local_b3c;
  ForElementType<FAnimNode_LinkedAnimLayer_*> local_b38;
  UAnimInstance *local_b30;
  UAnimInstance *local_b28;
  USkeletalMeshComponent *local_b20;
  FName local_b18;
  FAnimNode_LinkedAnimLayer *local_b10;
  undefined1 *local_b08;
  longlong lStack_b00;
  TBitArray<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *pTStack_af8;
  undefined8 uStack_af0;
  undefined8 uStack_ae8;
  int local_ae0;
  undefined4 uStack_adc;
  undefined8 local_ad8;
  undefined8 local_ad0;
  undefined8 local_ac8;
  TConstSetBitIterator<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> local_ac0;
  TConstSetBitIterator<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> local_aa0;
  TConstSetBitIterator<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> local_a80;
  UClass *local_a60;
  UClass *local_a58;
  FName local_a50;
  UClass *local_a48;
  FAnimNode_LinkedAnimLayer *local_a40;
  FName local_a38;
  FString local_a30;
  void *local_a20;
  UClass *local_a18;
  UClass *local_a10;
  void *local_a08;
  undefined1 *local_a00;
  TConstSetBitIterator<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> TStack_9f8;
  undefined8 uStack_9d8;
  undefined1 *local_9d0;
  TConstSetBitIterator<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> TStack_9c8;
  undefined8 uStack_9a8;
  code *local_9a0;
  undefined1 *local_998;
  undefined1 local_990 [40];
  int local_968;
  undefined4 uStack_964;
  undefined1 *local_960;
  longlong lStack_958;
  TBitArray<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *local_950;
  undefined8 uStack_948;
  undefined8 local_940;
  undefined8 uStack_938;
  undefined1 *local_930;
  longlong lStack_928;
  TBitArray<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *local_920;
  undefined8 uStack_918;
  undefined8 local_910;
  undefined8 uStack_908;
  FAnimationBaseContext local_900;
  FAnimationBaseContext local_8e0;
  FAnimationBaseContext local_8c0;
  FAnimationBaseContext local_8a0;
  FAnimationBaseContext local_880;
  FAnimationBaseContext local_860;
  FAnimationBaseContext local_840;
  FAnimationBaseContext local_820;
  FAnimationBaseContext local_800;
  FAnimationBaseContext local_7e0;
  FAnimationBaseContext local_7c0;
  FAnimationBaseContext local_7a0;
  UClass *local_780;
  undefined1 local_778 [256];
  void *local_678;
  int local_670;
  undefined4 local_66c;
  TBitArray<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> local_668;
  undefined8 uStack_650;
  int iStack_64c;
  ForElementType<FSetElementId> local_640;
  int local_638;
  longlong local_630;
  ForElementType<FAnimNode_LinkedAnimLayer_*> local_628;
  uint local_600;
  int local_5fc;
  undefined1 local_5f8 [1400];
  undefined8 local_80;
  int local_78;
  int iStack_74;
  undefined8 uStack_70;
  int iStack_6c;
  ForElementType<FSetElementId> local_60;
  int local_58;
  ulonglong local_50;
  
  local_50 = __security_cookie.value ^ (ulonglong)auStackY_bc8;
  local_b58 = this;
  local_b38 = (ForElementType<FAnimNode_LinkedAnimLayer_*>)param_2;
  if ((this->bInitializing != '\0') && (2 < (byte)LogAnimation._0_1_)) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAnimation);
  }
  pIVar14 = IAnimClassInterface::GetFromClass(*(UClass **)&this->field_0x10);
  if (pIVar14 != (IAnimClassInterface *)0x0) {
    pUVar15 = TSubclassOf<UAnimInstance>::operator*
                        ((TSubclassOf<UAnimInstance> *)param_1.Class.field0_0x0);
    if ((pUVar15 == (UClass *)0x0) ||
       (pIVar16 = IAnimClassInterface::GetFromClass(pUVar15), pIVar16 != (IAnimClassInterface *)0x0)
       ) {
      pUVar31 = local_b58;
      local_b20 = GetSkelMeshComponent(local_b58);
      local_998 = local_b40;
      local_9a0 = UE::Core::Private::Function::
                  TFunctionRefCaller<`UAnimInstance::PerformLinkedLayerOverlayOperation'::__l26::<lambda_1>,void,UAnimInstance_*>
                  ::Call;
      USkeletalMeshComponent::ForEachAnimInstance
                (local_b20,(TFunctionRef<void___cdecl(UAnimInstance_*)> *)&local_9a0);
      uVar10 = _UNK_150631d78;
      uVar8 = ___xmm_00000000ffffffff0000002000000000;
      local_5f8._1376_8_ = 0;
      local_5f8._1384_4_ = 0;
      local_80 = 0;
      local_60 = (ForElementType<FSetElementId>)0x0;
      local_58 = 0;
      local_5f8._1388_4_ = 4;
      local_78 = ___xmm_00000000ffffffff0000002000000000;
      iStack_74 = _UNK_150631d74;
      uStack_70 = _UNK_150631d78;
      plVar17 = (longlong *)(**(code **)((longlong)*pIVar14 + 0x40))(pIVar14);
      pUVar47 = (UClass *)*plVar17;
      lVar38 = plVar17[1];
      pUVar24 = (UClass *)(&pUVar47->_padding_ + (int)lVar38);
      local_b48 = pUVar24;
      while( true ) {
        if ((int)plVar17[1] != (int)lVar38) {
          local_b68 = 0;
          `TCheckedPointerIterator<FStructProperty_*_const,int,0>::operator!='::__l2::<lambda_1>::
          operator()(&local_b68);
        }
        if (pUVar47 == pUVar24) break;
        local_b50 = FProperty::ContainerUObjectPtrToValuePtrInternal
                              ((FProperty *)pUVar47->_padding_,(UObject *)pUVar31,0);
        pUVar18 = pUVar15;
        if ((pUVar15 == (UClass *)0x0) &&
           (pUVar18 = TSubclassOf<UAnimInstance>::operator*
                                ((TSubclassOf<UAnimInstance> *)((longlong)local_b50 + 0x78)),
           pUVar18 == (UClass *)0x0)) {
          local_a08 = local_b50;
          local_a60 = pUVar15;
          local_a58 = (UClass *)
                      (**(code **)param_2)
                                (*(longlong *)((longlong)param_2 + 8),&local_a60,&local_a08);
          uVar12 = ((uint)((ulonglong)local_a58 >> 0x14) & 0xffff ^
                   (uint)((ulonglong)local_a58 >> 4)) * -0x7a143595;
          uVar12 = (uVar12 >> 0xd ^ uVar12) * -0x3d4d51cb;
          pTVar20 = TMapBase<UClass_*,TMap<FName,TArray<FAnimNode_LinkedAnimLayer_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FAnimNode_LinkedAnimLayer_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,0>_>,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<UClass_*,TMap<FName,TArray<FAnimNode_LinkedAnimLayer_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FAnimNode_LinkedAnimLayer_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,0>_>,0>_>
                    ::FindOrAddImpl<UClass_*_const_&>
                              ((TMapBase<UClass_*,TMap<FName,TArray<FAnimNode_LinkedAnimLayer_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FAnimNode_LinkedAnimLayer_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,0>_>,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<UClass_*,TMap<FName,TArray<FAnimNode_LinkedAnimLayer_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FAnimNode_LinkedAnimLayer_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,0>_>,0>_>
                                *)local_5f8,uVar12 >> 0x10 ^ uVar12,&local_a58);
          local_b18.ComparisonIndex.Value = 0;
          local_b18.Number = 0;
          uVar12 = ::GetTypeHash((FNameEntryId)0x0);
          FVar21 = (ForElementType<FAnimNode_LinkedAnimLayer_*>)
                   TMapBase<FName,TArray<FAnimNode_LinkedAnimLayer_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FAnimNode_LinkedAnimLayer_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,0>_>
                   ::FindOrAddImpl<FName>
                             ((TMapBase<FName,TArray<FAnimNode_LinkedAnimLayer_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FAnimNode_LinkedAnimLayer_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,0>_>
                               *)pTVar20,uVar12,&local_b18);
          FVar43 = *(ForElementType<FAnimNode_LinkedAnimLayer_*> *)((longlong)FVar21 + 0x20);
          FVar48 = FVar21;
          if (FVar43 != (ForElementType<FAnimNode_LinkedAnimLayer_*>)0x0) {
            FVar48 = FVar43;
          }
          if ((ulonglong)FVar48 <= &local_b50) {
            FVar48 = FVar21;
            if (FVar43 != (ForElementType<FAnimNode_LinkedAnimLayer_*>)0x0) {
              FVar48 = FVar43;
            }
            if ((&local_b50 <
                 (void **)((longlong)FVar48 + (longlong)*(int *)((longlong)FVar21 + 0x2c) * 8)) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar11)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
          }
          iVar13 = *(int *)((longlong)FVar21 + 0x28);
          if (iVar13 == *(int *)((longlong)FVar21 + 0x2c)) {
            iVar13 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FAnimNode_LinkedAnimLayer_*>_>
                               (0x808,(ForElementType<FAnimNode_LinkedAnimLayer_*> *)FVar21,
                                (int *)((longlong)FVar21 + 0x2c));
          }
LAB_14746d409:
          *(int *)((longlong)FVar21 + 0x28) = iVar13 + 1;
          if (*(ForElementType<FAnimNode_LinkedAnimLayer_*> *)((longlong)FVar21 + 0x20) !=
              (ForElementType<FAnimNode_LinkedAnimLayer_*>)0x0) {
            FVar21 = *(ForElementType<FAnimNode_LinkedAnimLayer_*> *)((longlong)FVar21 + 0x20);
          }
          *(void **)((longlong)FVar21 + (longlong)iVar13 * 8) = local_b50;
          pUVar24 = local_b48;
        }
        else {
          pIVar14 = IAnimClassInterface::GetFromClass(pUVar18);
          pFVar19 = IAnimClassInterface::FindAnimBlueprintFunction
                              (pIVar14,(FName *)((longlong)local_b50 + 0xc0));
          if ((pFVar19 != (FAnimBlueprintFunction *)0x0) && (pFVar19->bImplemented != false)) {
            local_a20 = local_b50;
            local_a18 = pUVar15;
            local_a10 = (UClass *)
                        (**(code **)param_2)
                                  (*(longlong *)((longlong)param_2 + 8),&local_a18,&local_a20);
            uVar12 = ((uint)((ulonglong)local_a10 >> 0x14) & 0xffff ^
                     (uint)((ulonglong)local_a10 >> 4)) * -0x7a143595;
            uVar12 = (uVar12 >> 0xd ^ uVar12) * -0x3d4d51cb;
            pTVar20 = TMapBase<UClass_*,TMap<FName,TArray<FAnimNode_LinkedAnimLayer_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FAnimNode_LinkedAnimLayer_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,0>_>,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<UClass_*,TMap<FName,TArray<FAnimNode_LinkedAnimLayer_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FAnimNode_LinkedAnimLayer_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,0>_>,0>_>
                      ::FindOrAddImpl<UClass_*_const_&>
                                ((TMapBase<UClass_*,TMap<FName,TArray<FAnimNode_LinkedAnimLayer_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FAnimNode_LinkedAnimLayer_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,0>_>,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<UClass_*,TMap<FName,TArray<FAnimNode_LinkedAnimLayer_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FAnimNode_LinkedAnimLayer_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,0>_>,0>_>
                                  *)local_5f8,uVar12 >> 0x10 ^ uVar12,&local_a10);
            FVar4 = pFVar19->Group;
            uVar12 = ::GetTypeHash(FVar4.ComparisonIndex.Value);
            FVar21 = (ForElementType<FAnimNode_LinkedAnimLayer_*>)
                     TMapBase<FName,TArray<FAnimNode_LinkedAnimLayer_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FAnimNode_LinkedAnimLayer_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,0>_>
                     ::FindOrAddImpl<FName_const_&>
                               ((TMapBase<FName,TArray<FAnimNode_LinkedAnimLayer_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FAnimNode_LinkedAnimLayer_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,0>_>
                                 *)pTVar20,FVar4.Number + uVar12,&pFVar19->Group);
            FVar43 = *(ForElementType<FAnimNode_LinkedAnimLayer_*> *)((longlong)FVar21 + 0x20);
            FVar48 = FVar21;
            if (FVar43 != (ForElementType<FAnimNode_LinkedAnimLayer_*>)0x0) {
              FVar48 = FVar43;
            }
            if ((ulonglong)FVar48 <= &local_b50) {
              FVar48 = FVar21;
              if (FVar43 != (ForElementType<FAnimNode_LinkedAnimLayer_*>)0x0) {
                FVar48 = FVar43;
              }
              if ((&local_b50 <
                   (void **)((longlong)FVar48 + (longlong)*(int *)((longlong)FVar21 + 0x2c) * 8)) &&
                 (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar11)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
            }
            iVar13 = *(int *)((longlong)FVar21 + 0x28);
            param_2 = (TFunctionRef<UClass_*___cdecl(UClass_*,FAnimNode_LinkedAnimLayer_*)> *)
                      local_b38;
            if (iVar13 == *(int *)((longlong)FVar21 + 0x2c)) {
              iVar13 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FAnimNode_LinkedAnimLayer_*>_>
                                 (0x808,(ForElementType<FAnimNode_LinkedAnimLayer_*> *)FVar21,
                                  (int *)((longlong)FVar21 + 0x2c));
              param_2 = (TFunctionRef<UClass_*___cdecl(UClass_*,FAnimNode_LinkedAnimLayer_*)> *)
                        local_b38;
            }
            goto LAB_14746d409;
          }
        }
        pUVar47 = (UClass *)&pUVar47->_padding_;
        pUVar31 = local_b58;
      }
      local_aa0.Array =
           (TBitArray<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *)
           (local_5f8 + 0x570);
      local_aa0._padding_._0_4_ = 0;
      local_aa0._padding_._4_4_ = 1;
      local_aa0.UnvisitedBitMask = 0xffffffff;
      local_aa0.CurrentBitIndex = 0;
      local_aa0.BaseBitIndex = 0;
      iVar13 = 0;
      if (local_78 != 0) {
        TConstSetBitIterator<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::
        FindFirstSetBit(&local_aa0);
        iVar13 = local_78;
      }
      TStack_9c8._padding_ = CONCAT44(local_aa0._padding_._4_4_,(undefined4)local_aa0._padding_);
      local_9d0 = local_5f8;
      TStack_9c8.CurrentBitIndex = local_aa0.CurrentBitIndex;
      TStack_9c8.UnvisitedBitMask = local_aa0.UnvisitedBitMask;
      TStack_9c8._28_4_ = local_aa0._28_4_;
      TStack_9c8.BaseBitIndex = local_aa0.BaseBitIndex;
      local_968 = local_5f8._1384_4_ - iStack_6c;
      local_990._16_8_ = local_aa0.Array;
      uStack_9a8 = CONCAT44(uStack_964,local_968);
      TStack_9c8.Array = local_aa0.Array;
      local_990._0_8_ = local_9d0;
      local_990._8_8_ = TStack_9c8._padding_;
      local_990._24_8_ = TStack_9c8._16_8_;
      local_990._32_8_ = TStack_9c8._24_8_;
      pTVar22 = TConstSetBitIterator<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::
                TConstSetBitIterator<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
                          ((TConstSetBitIterator<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
                            *)local_990,
                           (TBitArray<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *)
                           (local_5f8 + 0x570),iVar13);
      local_b08 = local_5f8;
      lStack_b00 = pTVar22->_padding_;
      pTStack_af8 = pTVar22->Array;
      uStack_af0._0_4_ = pTVar22->UnvisitedBitMask;
      uStack_af0._4_4_ = pTVar22->CurrentBitIndex;
      uStack_ae8 = *(undefined8 *)&pTVar22->BaseBitIndex;
      local_ae0 = local_5f8._1384_4_ - iStack_6c;
      uStack_938 = CONCAT44(uStack_adc,local_ae0);
      local_960 = local_b08;
      lStack_958 = lStack_b00;
      local_950 = pTStack_af8;
      uStack_948 = uStack_af0;
      local_940 = uStack_ae8;
      while( true ) {
        puVar42 = local_9d0;
        if (*(int *)(local_9d0 + 0x568) - *(int *)(local_9d0 + 0x58c) != (int)uStack_9a8) {
          local_b67 = 0;
          `TSparseArray<TSparseSetElement<TTuple<UClass_*,TMap<FName,TArray<FAnimNode_LinkedAnimLayer_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FAnimNode_LinkedAnimLayer_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,0>_>_>_>,TInlineSparseArrayAllocator<4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
          ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_b67);
        }
        pUVar27 = local_b20;
        uVar9 = ___xmm_00000000ffffffff0000002000000000;
        if (((TStack_9c8.CurrentBitIndex == uStack_948._4_4_) && (TStack_9c8.Array == local_950)) &&
           (puVar42 == local_960)) break;
        if (*(undefined1 **)(puVar42 + 0x560) != (undefined1 *)0x0) {
          puVar42 = *(undefined1 **)(puVar42 + 0x560);
        }
        local_780 = *(UClass **)(puVar42 + (longlong)TStack_9c8.CurrentBitIndex * 0x158);
        local_678 = (void *)0x0;
        local_670 = 0;
        local_66c = 4;
        local_668.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
        ___xmm_00000000ffffffff0000002000000000 = (int)uVar8;
        _UNK_150631d74 = SUB84(uVar8,4);
        local_668.NumBits = ___xmm_00000000ffffffff0000002000000000;
        local_668.MaxBits = _UNK_150631d74;
        uStack_650 = uVar10;
        local_640 = (ForElementType<FSetElementId>)0x0;
        local_638 = 0;
        ___xmm_00000000ffffffff0000002000000000 = uVar9;
        TSet<TTuple<FName,TArray<FAnimNode_LinkedAnimLayer_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FAnimNode_LinkedAnimLayer_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,0>,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
        ::operator=((TSet<TTuple<FName,TArray<FAnimNode_LinkedAnimLayer_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FAnimNode_LinkedAnimLayer_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,0>,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
                     *)local_778,
                    (TSet<TTuple<FName,TArray<FAnimNode_LinkedAnimLayer_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FAnimNode_LinkedAnimLayer_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,0>,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
                     *)(puVar42 + (longlong)TStack_9c8.CurrentBitIndex * 0x158 + 8));
        local_a80.Array = &local_668;
        local_a80._padding_._0_4_ = 0;
        local_a80._padding_._4_4_ = 1;
        local_a80.UnvisitedBitMask = 0xffffffff;
        local_a80.CurrentBitIndex = 0;
        local_a80.BaseBitIndex = 0;
        uVar12 = 0;
        if (local_668.NumBits != 0) {
          TConstSetBitIterator<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::
          FindFirstSetBit(&local_a80);
          uVar12 = local_668.NumBits;
        }
        lStack_b00 = CONCAT44(local_a80._padding_._4_4_,(undefined4)local_a80._padding_);
        local_b08 = local_778;
        uStack_af0._4_4_ = local_a80.CurrentBitIndex;
        uStack_af0._0_4_ = local_a80.UnvisitedBitMask;
        uStack_ae8._4_4_ = local_a80._28_4_;
        uStack_ae8._0_4_ = local_a80.BaseBitIndex;
        local_ac0.Array = &local_668;
        bVar35 = (byte)uVar12 & 0x1f;
        local_ae0 = local_670 - iStack_64c;
        local_ac0._padding_._0_4_ = (int)uVar12 >> 5;
        local_ac0._padding_._4_4_ = 1 << bVar35;
        local_ac0.UnvisitedBitMask = -1 << bVar35;
        pTStack_af8 = local_a80.Array;
        local_ac0.BaseBitIndex = uVar12 & 0xffffffe0;
        uStack_9d8 = CONCAT44(uStack_adc,local_ae0);
        TStack_9f8.Array = local_a80.Array;
        local_ac0.CurrentBitIndex = uVar12;
        local_a00 = local_b08;
        TStack_9f8._padding_ = lStack_b00;
        TStack_9f8._16_8_ = uStack_af0;
        TStack_9f8._24_8_ = uStack_ae8;
        if (((int)uVar12 < 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("StartIndex >= 0 && StartIndex <= Array.Num()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                ,0x7af,L""), bVar11)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        if (uVar12 != local_668.NumBits) {
          TConstSetBitIterator<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::
          FindFirstSetBit(&local_ac0);
        }
        lStack_b00 = CONCAT44(local_ac0._padding_._4_4_,(int)local_ac0._padding_);
        local_b08 = local_778;
        uStack_af0 = CONCAT44(local_ac0.CurrentBitIndex,local_ac0.UnvisitedBitMask);
        uStack_ae8 = CONCAT44(local_ac0._28_4_,local_ac0.BaseBitIndex);
        local_ae0 = local_670 - iStack_64c;
        pTStack_af8 = local_ac0.Array;
        uStack_908 = CONCAT44(uStack_adc,local_ae0);
        local_920 = local_ac0.Array;
        local_930 = local_b08;
        lStack_928 = lStack_b00;
        uStack_918 = uStack_af0;
        local_910 = uStack_ae8;
        while( true ) {
          puVar42 = local_a00;
          if (*(int *)(local_a00 + 0x108) - *(int *)(local_a00 + 300) != (int)uStack_9d8) {
            local_b66 = 0;
            `TSparseArray<TSparseSetElement<TTuple<FName,TArray<FAnimNode_LinkedAnimLayer_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_>_>,TInlineSparseArrayAllocator<4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
            ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_b66);
          }
          if (((TStack_9f8.CurrentBitIndex == uStack_918._4_4_) && (TStack_9f8.Array == local_920))
             && (puVar42 == local_930)) break;
          if (*(undefined1 **)(puVar42 + 0x100) != (undefined1 *)0x0) {
            puVar42 = *(undefined1 **)(puVar42 + 0x100);
          }
          local_630 = *(longlong *)(puVar42 + (longlong)TStack_9f8.CurrentBitIndex * 0x40);
          puVar42 = puVar42 + (longlong)TStack_9f8.CurrentBitIndex * 0x40 + 8;
          local_628.SecondaryData = (ForElementType<FAnimNode_LinkedAnimLayer_*>)0x0;
          local_600 = *(uint *)(puVar42 + 0x28);
          lVar38 = (longlong)(int)local_600;
          if (*(undefined1 **)(puVar42 + 0x20) != (undefined1 *)0x0) {
            puVar42 = *(undefined1 **)(puVar42 + 0x20);
          }
          if (local_600 == 0) {
            local_5fc = 4;
          }
          else {
            UE::Core::Private::
            ReallocForCopy<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FAnimNode_LinkedAnimLayer_*>_>
                      (8,8,local_600,0,&local_628,local_600,&local_5fc);
            FVar43 = (ForElementType<FAnimNode_LinkedAnimLayer_*>)&local_628;
            if (local_628.SecondaryData != (ForElementType<FAnimNode_LinkedAnimLayer_*>)0x0) {
              FVar43 = local_628.SecondaryData;
            }
            memcpy((void *)FVar43,puVar42,lVar38 << 3);
          }
          pUVar27 = local_b20;
          pFVar23 = (FAnimNode_LinkedAnimLayer *)
                    FAnimSubsystem_SharedLinkedAnimLayers::GetFromMesh(local_b20);
          local_b10 = pFVar23;
          if (pFVar23 == (FAnimNode_LinkedAnimLayer *)0x0) {
            lVar38 = 0;
            local_ad8 = 0;
            if (local_630 == 0) {
              uVar44 = (ulonglong)(int)local_600;
              local_b3c = local_600;
              FVar43 = (ForElementType<FAnimNode_LinkedAnimLayer_*>)&local_628;
              if (local_628.SecondaryData != (ForElementType<FAnimNode_LinkedAnimLayer_*>)0x0) {
                FVar43 = local_628.SecondaryData;
              }
              FVar48 = (ForElementType<FAnimNode_LinkedAnimLayer_*>)((longlong)FVar43 + uVar44 * 8);
              uVar45 = uVar44;
              while( true ) {
                pUVar31 = (UAnimInstance *)0x0;
                local_b38 = FVar43;
                if ((int)uVar44 != (int)uVar45) {
                  local_b64[2] = false;
                  `TCheckedPointerIterator<FAnimNode_LinkedAnimLayer_*,int,0>::operator!='::__l2::
                  <lambda_1>::operator()(local_b64 + 2);
                }
                pUVar15 = local_780;
                pUVar25 = local_b58;
                if (FVar43 == FVar48) break;
                pFVar23 = *(FAnimNode_LinkedAnimLayer **)FVar43;
                local_b10 = pFVar23;
                if ((local_780 == (UClass *)0x0) ||
                   (local_780 == *(UClass **)&local_b58->field_0x10)) {
                  FAnimNode_LinkedAnimLayer::SetLinkedLayerInstance
                            (pFVar23,local_b58,(UAnimInstance *)0x0);
                  if (!param_3) {
                    if (((pFVar23->_padding_ != 0) &&
                        ((*(uint *)(pFVar23->_padding_ + 8) >> 0x1e & 1) == 0)) &&
                       (pFVar23->_padding_ != 0)) {
                      pUVar15 = StaticClass();
                      bVar11 = FObjectPtr::IsA((FObjectPtr *)&pFVar23->_padding_,pUVar15);
                      if (bVar11) {
                        pUVar31 = (UAnimInstance *)pFVar23->_padding_;
                      }
                    }
                    if ((pFVar23->_padding_ != 0) && (pUVar31 != (UAnimInstance *)0x0)) {
                      if ((*(UObjectBaseUtility **)&pUVar25->field_0x20 != (UObjectBaseUtility *)0x0
                          ) && ((bVar11 = UObjectBaseUtility::IsA<USkeletalMeshComponent>
                                                    (*(UObjectBaseUtility **)&pUVar25->field_0x20),
                                bVar11 && (bVar11 = IsInGameThread(), bVar11)))) {
                        pUVar33 = GetSkelMeshComponent(pUVar25);
                        USkeletalMeshComponent::HandleExistingParallelEvaluationTask
                                  (pUVar33,true,true);
                      }
                      pFVar28 = pUVar25->AnimInstanceProxy;
                      if (pFVar28 == (FAnimInstanceProxy *)0x0) {
                        pFVar28 = (FAnimInstanceProxy *)
                                  (**(code **)(*(longlong *)pUVar25 + 0x378))(pUVar25);
                        pUVar25->AnimInstanceProxy = pFVar28;
                      }
                      if (((*(UObjectBaseUtility **)&pUVar31->field_0x20 !=
                            (UObjectBaseUtility *)0x0) &&
                          (bVar11 = UObjectBaseUtility::IsA<USkeletalMeshComponent>
                                              (*(UObjectBaseUtility **)&pUVar31->field_0x20), bVar11
                          )) && (bVar11 = IsInGameThread(), bVar11)) {
                        pUVar33 = GetSkelMeshComponent(pUVar31);
                        USkeletalMeshComponent::HandleExistingParallelEvaluationTask
                                  (pUVar33,true,true);
                      }
                      pFVar29 = pUVar31->AnimInstanceProxy;
                      if (pFVar29 == (FAnimInstanceProxy *)0x0) {
                        pFVar29 = (FAnimInstanceProxy *)
                                  (**(code **)(*(longlong *)pUVar31 + 0x378))(pUVar31);
                        pUVar31->AnimInstanceProxy = pFVar29;
                      }
                      (**(code **)(*(longlong *)pFVar29 + 0x80))(pFVar29,pUVar31);
                      pUVar33 = GetSkelMeshComponent(pUVar31);
                      pUVar30 = USkeletalMeshComponent::GetSkeletalMeshAsset(pUVar33);
                      if (pUVar30 != (USkeletalMesh *)0x0) {
                        FAnimationBaseContext::FAnimationBaseContext
                                  (&local_860,pFVar28,(FAnimationUpdateSharedContext *)0x0);
                        FAnimNode_LinkedAnimGraph::InitializeSubGraph_AnyThread
                                  ((FAnimNode_LinkedAnimGraph *)pFVar23,
                                   (FAnimationInitializeContext *)&local_860);
                        FAnimationBaseContext::FAnimationBaseContext
                                  (&local_840,pFVar28,(FAnimationUpdateSharedContext *)0x0);
                        FAnimNode_LinkedAnimGraph::CacheBonesSubGraph_AnyThread
                                  ((FAnimNode_LinkedAnimGraph *)pFVar23,
                                   (FAnimationCacheBonesContext *)&local_840);
                      }
                    }
                  }
                }
                else {
                  if ((pFVar23->_padding_ != 0) &&
                     ((*(uint *)(pFVar23->_padding_ + 8) >> 0x1e & 1) == 0)) {
                    if (pFVar23->_padding_ != 0) {
                      pUVar24 = StaticClass();
                      bVar11 = FObjectPtr::IsA((FObjectPtr *)&pFVar23->_padding_,pUVar24);
                      if (bVar11) {
                        pUVar31 = (UAnimInstance *)pFVar23->_padding_;
                      }
                    }
                    if ((pUVar31 != (UAnimInstance *)0x0) &&
                       (pUVar15 == *(UClass **)&pUVar31->field_0x10)) goto LAB_14746e222;
                  }
                  local_ad0 = 0;
                  pUVar31 = NewObject<UAnimInstance>
                                      ((UObject *)pUVar27,pUVar15,(FName)0x0,RF_NoFlags,
                                       (UObject *)0x0,false,(FObjectInstancingGraph *)0x0,
                                       (UPackage *)0x0);
                  pUVar31->bCreatedByLinkedAnimGraph = '\x01';
                  bVar35 = ((char)pFVar23->_padding_ << 4 ^ pUVar31->field_0x31) & 0x20U ^
                           pUVar31->field_0x31;
                  pUVar31->field_0x31 = bVar35;
                  pUVar31->field_0x31 = ((char)pFVar23->_padding_ << 4 ^ bVar35) & 0x10 ^ bVar35;
                  InitializeAnimation(pUVar31,false);
                  if ((pUVar27->_padding_ & 0x20000000) != 0) {
                    (**(code **)(*(longlong *)pUVar31 + 0x350))(pUVar31);
                    pUVar32 = UObject::FindFunctionChecked
                                        ((UObject *)pUVar31,NAME_UAnimInstance_BlueprintBeginPlay);
                    (**(code **)(*(longlong *)pUVar31 + 0x260))(pUVar31,pUVar32);
                  }
                  lVar38 = (longlong)(int)local_600;
                  FVar43 = (ForElementType<FAnimNode_LinkedAnimLayer_*>)&local_628;
                  if (local_628.SecondaryData != (ForElementType<FAnimNode_LinkedAnimLayer_*>)0x0) {
                    FVar43 = local_628.SecondaryData;
                  }
                  if (((int)local_600 < 0) &&
                     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                         ("InCount >= 0",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                          ,0xeb,L""), bVar11)) {
                    pcVar6 = (code *)swi(3);
                    (*pcVar6)();
                    return;
                  }
                  pIVar14 = IAnimClassInterface::GetFromClass(*(UClass **)&pUVar31->field_0x10);
                  plVar17 = (longlong *)(**(code **)((longlong)*pIVar14 + 0x40))(pIVar14);
                  puVar39 = (undefined8 *)*plVar17;
                  lVar46 = plVar17[1];
                  puVar2 = puVar39 + (int)lVar46;
                  while( true ) {
                    if ((int)plVar17[1] != (int)lVar46) {
                      local_b64[3] = false;
                      `TCheckedPointerIterator<FStructProperty_*_const,int,0>::operator!='::__l2::
                      <lambda_1>::operator()(local_b64 + 3);
                    }
                    pFVar23 = local_b10;
                    pUVar25 = local_b58;
                    if (puVar39 == puVar2) break;
                    pFVar26 = FProperty::ContainerUObjectPtrToValuePtrInternal
                                        ((FProperty *)*puVar39,(UObject *)pUVar31,0);
                    FVar21 = (ForElementType<FAnimNode_LinkedAnimLayer_*>)
                             ((longlong)FVar43 + lVar38 * 8);
                    if (FVar43 == FVar21) {
LAB_14746e017:
                      puVar39 = puVar39 + 1;
                    }
                    else {
                      FVar36 = FVar43;
                      do {
                        if (*(longlong *)(*(longlong *)FVar36 + 0xc0) == pFVar26[1]._padding_) {
                          FAnimNode_LinkedAnimGraph::DynamicUnlink(pFVar26,pUVar31);
                          goto LAB_14746e017;
                        }
                        FVar36 = (ForElementType<FAnimNode_LinkedAnimLayer_*>)((longlong)FVar36 + 8)
                        ;
                      } while (FVar36 != FVar21);
                      puVar39 = puVar39 + 1;
                    }
                  }
                  FAnimNode_LinkedAnimLayer::SetLinkedLayerInstance(local_b10,local_b58,pUVar31);
                  if ((!param_3) && (pFVar23->_padding_ != 0)) {
                    if ((*(UObjectBaseUtility **)&pUVar25->field_0x20 != (UObjectBaseUtility *)0x0)
                       && ((bVar11 = UObjectBaseUtility::IsA<USkeletalMeshComponent>
                                               (*(UObjectBaseUtility **)&pUVar25->field_0x20),
                           bVar11 && (bVar11 = IsInGameThread(), bVar11)))) {
                      pUVar27 = GetSkelMeshComponent(pUVar25);
                      USkeletalMeshComponent::HandleExistingParallelEvaluationTask
                                (pUVar27,true,true);
                    }
                    pFVar28 = pUVar25->AnimInstanceProxy;
                    if (pFVar28 == (FAnimInstanceProxy *)0x0) {
                      pFVar28 = (FAnimInstanceProxy *)
                                (**(code **)(*(longlong *)pUVar25 + 0x378))(pUVar25);
                      pUVar25->AnimInstanceProxy = pFVar28;
                    }
                    if (((*(UObjectBaseUtility **)&pUVar31->field_0x20 != (UObjectBaseUtility *)0x0)
                        && (bVar11 = UObjectBaseUtility::IsA<USkeletalMeshComponent>
                                               (*(UObjectBaseUtility **)&pUVar31->field_0x20),
                           bVar11)) && (bVar11 = IsInGameThread(), bVar11)) {
                      pUVar27 = GetSkelMeshComponent(pUVar31);
                      USkeletalMeshComponent::HandleExistingParallelEvaluationTask
                                (pUVar27,true,true);
                    }
                    pFVar29 = pUVar31->AnimInstanceProxy;
                    if (pFVar29 == (FAnimInstanceProxy *)0x0) {
                      pFVar29 = (FAnimInstanceProxy *)
                                (**(code **)(*(longlong *)pUVar31 + 0x378))(pUVar31);
                      pUVar31->AnimInstanceProxy = pFVar29;
                    }
                    (**(code **)(*(longlong *)pFVar29 + 0x80))(pFVar29,pUVar31);
                    pUVar27 = GetSkelMeshComponent(pUVar31);
                    pUVar30 = USkeletalMeshComponent::GetSkeletalMeshAsset(pUVar27);
                    if (pUVar30 != (USkeletalMesh *)0x0) {
                      FAnimationBaseContext::FAnimationBaseContext
                                (&local_7a0,pFVar28,(FAnimationUpdateSharedContext *)0x0);
                      FAnimNode_LinkedAnimGraph::InitializeSubGraph_AnyThread
                                ((FAnimNode_LinkedAnimGraph *)pFVar23,
                                 (FAnimationInitializeContext *)&local_7a0);
                      FAnimationBaseContext::FAnimationBaseContext
                                (&local_880,pFVar28,(FAnimationUpdateSharedContext *)0x0);
                      FAnimNode_LinkedAnimGraph::CacheBonesSubGraph_AnyThread
                                ((FAnimNode_LinkedAnimGraph *)pFVar23,
                                 (FAnimationCacheBonesContext *)&local_880);
                    }
                  }
                  pUVar27 = local_b20;
                  pTVar40 = &local_b20->LinkedInstances;
                  pFVar5 = (pTVar40->AllocatorInstance).Data;
                  local_b30 = pUVar31;
                  if (((pFVar5 <= (FScriptContainerElement *)&local_b30) &&
                      ((FScriptContainerElement *)&local_b30 <
                       pFVar5 + (longlong)(local_b20->LinkedInstances).ArrayMax * 8)) &&
                     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x7a5,
                                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                         ), bVar11)) {
                    pcVar6 = (code *)swi(3);
                    (*pcVar6)();
                    return;
                  }
                  iVar13 = (pUVar27->LinkedInstances).ArrayNum;
                  piVar1 = &(pUVar27->LinkedInstances).ArrayMax;
                  if (iVar13 == *piVar1) {
                    iVar13 = UE::Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x808,&pTVar40->AllocatorInstance,piVar1);
                  }
                  (pUVar27->LinkedInstances).ArrayNum = iVar13 + 1;
                  *(UAnimInstance **)((pTVar40->AllocatorInstance).Data + (longlong)iVar13 * 8) =
                       local_b30;
                  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                     (local_b30 != (UAnimInstance *)0x0)) {
                    UE::GC::MarkAsReachable((UObject *)local_b30);
                  }
                }
LAB_14746e222:
                uVar44 = (ulonglong)local_600;
                FVar43 = (ForElementType<FAnimNode_LinkedAnimLayer_*>)((longlong)local_b38 + 8);
                uVar45 = (ulonglong)local_b3c;
              }
            }
            else {
              if (((int)local_600 < 1) &&
                 (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar11)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              uVar12 = local_600;
              pUVar15 = local_780;
              pUVar31 = local_b58;
              FVar43 = (ForElementType<FAnimNode_LinkedAnimLayer_*>)&local_628;
              if (local_628.SecondaryData != (ForElementType<FAnimNode_LinkedAnimLayer_*>)0x0) {
                FVar43 = local_628.SecondaryData;
              }
              lVar46 = *(longlong *)FVar43;
              if ((local_780 == (UClass *)0x0) || (local_780 == *(UClass **)&local_b58->field_0x10))
              {
                FVar43 = (ForElementType<FAnimNode_LinkedAnimLayer_*>)&local_628;
                if (local_628.SecondaryData != (ForElementType<FAnimNode_LinkedAnimLayer_*>)0x0) {
                  FVar43 = local_628.SecondaryData;
                }
                FVar48 = (ForElementType<FAnimNode_LinkedAnimLayer_*>)
                         ((longlong)FVar43 + (longlong)(int)local_600 * 8);
                while( true ) {
                  if (local_600 != uVar12) {
                    local_b64[7] = false;
                    `TCheckedPointerIterator<FAnimNode_LinkedAnimLayer_*,int,0>::operator!='::__l2::
                    <lambda_1>::operator()(local_b64 + 7);
                  }
                  if (FVar43 == FVar48) break;
                  pFVar23 = *(FAnimNode_LinkedAnimLayer **)FVar43;
                  FAnimNode_LinkedAnimLayer::SetLinkedLayerInstance
                            (pFVar23,pUVar31,(UAnimInstance *)0x0);
                  if (!param_3) {
                    if (((pFVar23->_padding_ == 0) ||
                        ((*(uint *)(pFVar23->_padding_ + 8) >> 0x1e & 1) != 0)) ||
                       (pFVar23->_padding_ == 0)) {
LAB_14746e93e:
                      pUVar25 = (UAnimInstance *)0x0;
                    }
                    else {
                      pUVar15 = StaticClass();
                      bVar11 = FObjectPtr::IsA((FObjectPtr *)&pFVar23->_padding_,pUVar15);
                      if (!bVar11) goto LAB_14746e93e;
                      pUVar25 = (UAnimInstance *)pFVar23->_padding_;
                    }
                    if ((pFVar23->_padding_ != 0) && (pUVar25 != (UAnimInstance *)0x0)) {
                      if ((*(UObjectBaseUtility **)&pUVar31->field_0x20 != (UObjectBaseUtility *)0x0
                          ) && ((bVar11 = UObjectBaseUtility::IsA<USkeletalMeshComponent>
                                                    (*(UObjectBaseUtility **)&pUVar31->field_0x20),
                                bVar11 && (bVar11 = IsInGameThread(), bVar11)))) {
                        pUVar27 = GetSkelMeshComponent(pUVar31);
                        USkeletalMeshComponent::HandleExistingParallelEvaluationTask
                                  (pUVar27,true,true);
                      }
                      pFVar28 = pUVar31->AnimInstanceProxy;
                      if (pFVar28 == (FAnimInstanceProxy *)0x0) {
                        pFVar28 = (FAnimInstanceProxy *)
                                  (**(code **)(*(longlong *)pUVar31 + 0x378))(pUVar31);
                        pUVar31->AnimInstanceProxy = pFVar28;
                      }
                      if (((*(UObjectBaseUtility **)&pUVar25->field_0x20 !=
                            (UObjectBaseUtility *)0x0) &&
                          (bVar11 = UObjectBaseUtility::IsA<USkeletalMeshComponent>
                                              (*(UObjectBaseUtility **)&pUVar25->field_0x20), bVar11
                          )) && (bVar11 = IsInGameThread(), bVar11)) {
                        pUVar27 = GetSkelMeshComponent(pUVar25);
                        USkeletalMeshComponent::HandleExistingParallelEvaluationTask
                                  (pUVar27,true,true);
                      }
                      pFVar29 = pUVar25->AnimInstanceProxy;
                      if (pFVar29 == (FAnimInstanceProxy *)0x0) {
                        pFVar29 = (FAnimInstanceProxy *)
                                  (**(code **)(*(longlong *)pUVar25 + 0x378))(pUVar25);
                        pUVar25->AnimInstanceProxy = pFVar29;
                      }
                      (**(code **)(*(longlong *)pFVar29 + 0x80))(pFVar29,pUVar25);
                      pUVar27 = GetSkelMeshComponent(pUVar25);
                      pUVar30 = USkeletalMeshComponent::GetSkeletalMeshAsset(pUVar27);
                      if (pUVar30 != (USkeletalMesh *)0x0) {
                        FAnimationBaseContext::FAnimationBaseContext
                                  (&local_7e0,pFVar28,(FAnimationUpdateSharedContext *)0x0);
                        FAnimNode_LinkedAnimGraph::InitializeSubGraph_AnyThread
                                  ((FAnimNode_LinkedAnimGraph *)pFVar23,
                                   (FAnimationInitializeContext *)&local_7e0);
                        FAnimationBaseContext::FAnimationBaseContext
                                  (&local_7c0,pFVar28,(FAnimationUpdateSharedContext *)0x0);
                        FAnimNode_LinkedAnimGraph::CacheBonesSubGraph_AnyThread
                                  ((FAnimNode_LinkedAnimGraph *)pFVar23,
                                   (FAnimationCacheBonesContext *)&local_7c0);
                      }
                    }
                  }
                  FVar43 = (ForElementType<FAnimNode_LinkedAnimLayer_*>)((longlong)FVar43 + 8);
                }
              }
              else {
                if ((*(longlong *)(lVar46 + 0x30) != 0) &&
                   ((*(uint *)(*(longlong *)(lVar46 + 0x30) + 8) >> 0x1e & 1) == 0)) {
                  if (*(longlong *)(lVar46 + 0x30) != 0) {
                    pUVar24 = StaticClass();
                    bVar11 = FObjectPtr::IsA((FObjectPtr *)(lVar46 + 0x30),pUVar24);
                    if (bVar11) {
                      lVar38 = *(longlong *)(lVar46 + 0x30);
                    }
                  }
                  if ((lVar38 != 0) && (pUVar15 == *(UClass **)(lVar38 + 0x10))) goto LAB_14746e87a;
                }
                local_ac8 = 0;
                pUVar31 = NewObject<UAnimInstance>
                                    ((UObject *)pUVar27,pUVar15,(FName)0x0,RF_NoFlags,(UObject *)0x0
                                     ,false,(FObjectInstancingGraph *)0x0,(UPackage *)0x0);
                pUVar31->bCreatedByLinkedAnimGraph = '\x01';
                InitializeAnimation(pUVar31,false);
                if ((pUVar27->_padding_ & 0x20000000) != 0) {
                  (**(code **)(*(longlong *)pUVar31 + 0x350))(pUVar31);
                  pUVar32 = UObject::FindFunctionChecked
                                      ((UObject *)pUVar31,NAME_UAnimInstance_BlueprintBeginPlay);
                  (**(code **)(*(longlong *)pUVar31 + 0x260))(pUVar31,pUVar32);
                }
                lVar38 = (longlong)(int)local_600;
                FVar43 = (ForElementType<FAnimNode_LinkedAnimLayer_*>)&local_628;
                if (local_628.SecondaryData != (ForElementType<FAnimNode_LinkedAnimLayer_*>)0x0) {
                  FVar43 = local_628.SecondaryData;
                }
                if (((int)local_600 < 0) &&
                   (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                       ("InCount >= 0",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                        ,0xeb,L""), bVar11)) {
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
                pIVar14 = IAnimClassInterface::GetFromClass(*(UClass **)&pUVar31->field_0x10);
                plVar17 = (longlong *)(**(code **)((longlong)*pIVar14 + 0x40))(pIVar14);
                puVar39 = (undefined8 *)*plVar17;
                lVar46 = plVar17[1];
                puVar2 = puVar39 + (int)lVar46;
                while( true ) {
                  if ((int)plVar17[1] != (int)lVar46) {
                    local_b64[4] = false;
                    `TCheckedPointerIterator<FStructProperty_*_const,int,0>::operator!='::__l2::
                    <lambda_1>::operator()(local_b64 + 4);
                  }
                  uVar12 = local_600;
                  pUVar25 = local_b58;
                  if (puVar39 == puVar2) break;
                  pFVar26 = FProperty::ContainerUObjectPtrToValuePtrInternal
                                      ((FProperty *)*puVar39,(UObject *)pUVar31,0);
                  FVar48 = (ForElementType<FAnimNode_LinkedAnimLayer_*>)
                           ((longlong)FVar43 + lVar38 * 8);
                  if (FVar43 == FVar48) {
LAB_14746e5a7:
                    puVar39 = puVar39 + 1;
                  }
                  else {
                    FVar21 = FVar43;
                    do {
                      if (*(longlong *)(*(longlong *)FVar21 + 0xc0) == pFVar26[1]._padding_) {
                        FAnimNode_LinkedAnimGraph::DynamicUnlink(pFVar26,pUVar31);
                        goto LAB_14746e5a7;
                      }
                      FVar21 = (ForElementType<FAnimNode_LinkedAnimLayer_*>)((longlong)FVar21 + 8);
                    } while (FVar21 != FVar48);
                    puVar39 = puVar39 + 1;
                  }
                }
                FVar43 = (ForElementType<FAnimNode_LinkedAnimLayer_*>)&local_628;
                if (local_628.SecondaryData != (ForElementType<FAnimNode_LinkedAnimLayer_*>)0x0) {
                  FVar43 = local_628.SecondaryData;
                }
                FVar48 = (ForElementType<FAnimNode_LinkedAnimLayer_*>)
                         ((longlong)FVar43 + (longlong)(int)local_600 * 8);
                while( true ) {
                  if (local_600 != uVar12) {
                    local_b64[5] = false;
                    `TCheckedPointerIterator<FAnimNode_LinkedAnimLayer_*,int,0>::operator!='::__l2::
                    <lambda_1>::operator()(local_b64 + 5);
                  }
                  if (FVar43 == FVar48) break;
                  pFVar23 = *(FAnimNode_LinkedAnimLayer **)FVar43;
                  FAnimNode_LinkedAnimLayer::SetLinkedLayerInstance(pFVar23,pUVar25,pUVar31);
                  bVar35 = ((char)pFVar23->_padding_ << 4 | pUVar31->field_0x31) & 0x20U ^
                           pUVar31->field_0x31 & 0xdf;
                  pUVar31->field_0x31 = bVar35;
                  pUVar31->field_0x31 =
                       ((char)pFVar23->_padding_ << 4 | bVar35) & 0x10 ^ bVar35 & 0xef;
                  FVar43 = (ForElementType<FAnimNode_LinkedAnimLayer_*>)((longlong)FVar43 + 8);
                }
                if (!param_3) {
                  if (((*(UObjectBaseUtility **)&pUVar25->field_0x20 != (UObjectBaseUtility *)0x0)
                      && (bVar11 = UObjectBaseUtility::IsA<USkeletalMeshComponent>
                                             (*(UObjectBaseUtility **)&pUVar25->field_0x20), bVar11)
                      ) && (bVar11 = IsInGameThread(), bVar11)) {
                    pUVar27 = GetSkelMeshComponent(pUVar25);
                    USkeletalMeshComponent::HandleExistingParallelEvaluationTask(pUVar27,true,true);
                  }
                  pFVar28 = pUVar25->AnimInstanceProxy;
                  if (pFVar28 == (FAnimInstanceProxy *)0x0) {
                    pFVar28 = (FAnimInstanceProxy *)
                              (**(code **)(*(longlong *)pUVar25 + 0x378))(pUVar25);
                    pUVar25->AnimInstanceProxy = pFVar28;
                  }
                  if (((*(UObjectBaseUtility **)&pUVar31->field_0x20 != (UObjectBaseUtility *)0x0)
                      && (bVar11 = UObjectBaseUtility::IsA<USkeletalMeshComponent>
                                             (*(UObjectBaseUtility **)&pUVar31->field_0x20), bVar11)
                      ) && (bVar11 = IsInGameThread(), bVar11)) {
                    pUVar27 = GetSkelMeshComponent(pUVar31);
                    USkeletalMeshComponent::HandleExistingParallelEvaluationTask(pUVar27,true,true);
                  }
                  pFVar29 = pUVar31->AnimInstanceProxy;
                  if (pFVar29 == (FAnimInstanceProxy *)0x0) {
                    pFVar29 = (FAnimInstanceProxy *)
                              (**(code **)(*(longlong *)pUVar31 + 0x378))(pUVar31);
                    pUVar31->AnimInstanceProxy = pFVar29;
                  }
                  uVar12 = local_600;
                  FVar43 = (ForElementType<FAnimNode_LinkedAnimLayer_*>)&local_628;
                  if (local_628.SecondaryData != (ForElementType<FAnimNode_LinkedAnimLayer_*>)0x0) {
                    FVar43 = local_628.SecondaryData;
                  }
                  FVar48 = (ForElementType<FAnimNode_LinkedAnimLayer_*>)
                           ((longlong)FVar43 + (longlong)(int)local_600 * 8);
                  while( true ) {
                    if (local_600 != uVar12) {
                      local_b64[6] = false;
                      `TCheckedPointerIterator<FAnimNode_LinkedAnimLayer_*,int,0>::operator!='::__l2
                      ::<lambda_1>::operator()(local_b64 + 6);
                    }
                    if (FVar43 == FVar48) break;
                    pFVar26 = *(FAnimNode_LinkedAnimGraph **)FVar43;
                    if (pFVar26->LinkedRoot != (FAnimNode_Base *)0x0) {
                      (**(code **)(*(longlong *)pFVar29 + 0x80))(pFVar29,pUVar31);
                      pUVar27 = GetSkelMeshComponent(pUVar31);
                      pUVar30 = USkeletalMeshComponent::GetSkeletalMeshAsset(pUVar27);
                      if (pUVar30 != (USkeletalMesh *)0x0) {
                        FAnimationBaseContext::FAnimationBaseContext
                                  (&local_820,pFVar28,(FAnimationUpdateSharedContext *)0x0);
                        FAnimNode_LinkedAnimGraph::InitializeSubGraph_AnyThread
                                  (pFVar26,(FAnimationInitializeContext *)&local_820);
                        FAnimationBaseContext::FAnimationBaseContext
                                  (&local_800,pFVar28,(FAnimationUpdateSharedContext *)0x0);
                        FAnimNode_LinkedAnimGraph::CacheBonesSubGraph_AnyThread
                                  (pFVar26,(FAnimationCacheBonesContext *)&local_800);
                      }
                    }
                    FVar43 = (ForElementType<FAnimNode_LinkedAnimLayer_*>)((longlong)FVar43 + 8);
                  }
                }
                pUVar27 = local_b20;
                pTVar40 = &local_b20->LinkedInstances;
                pFVar5 = (pTVar40->AllocatorInstance).Data;
                local_b28 = pUVar31;
                if (((pFVar5 <= (FScriptContainerElement *)&local_b28) &&
                    ((FScriptContainerElement *)&local_b28 <
                     pFVar5 + (longlong)(local_b20->LinkedInstances).ArrayMax * 8)) &&
                   (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x7a5,
                                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                       ), bVar11)) {
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
                iVar13 = (pUVar27->LinkedInstances).ArrayNum;
                piVar1 = &(pUVar27->LinkedInstances).ArrayMax;
                if (iVar13 == *piVar1) {
                  iVar13 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x808,&pTVar40->AllocatorInstance,piVar1);
                }
                (pUVar27->LinkedInstances).ArrayNum = iVar13 + 1;
                *(UAnimInstance **)((pTVar40->AllocatorInstance).Data + (longlong)iVar13 * 8) =
                     local_b28;
                if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                   (local_b28 != (UAnimInstance *)0x0)) {
                  UE::GC::MarkAsReachable((UObject *)local_b28);
                }
              }
            }
          }
          else {
            uVar44 = (ulonglong)(int)local_600;
            local_b48 = local_780;
            FVar43 = (ForElementType<FAnimNode_LinkedAnimLayer_*>)&local_628;
            if (local_628.SecondaryData != (ForElementType<FAnimNode_LinkedAnimLayer_*>)0x0) {
              FVar43 = local_628.SecondaryData;
            }
            local_b3c = local_600;
            FVar48 = (ForElementType<FAnimNode_LinkedAnimLayer_*>)&local_628;
            if (local_628.SecondaryData != (ForElementType<FAnimNode_LinkedAnimLayer_*>)0x0) {
              FVar48 = local_628.SecondaryData;
            }
            lVar38 = uVar44 * 8;
            pUVar15 = local_780;
            uVar45 = uVar44;
            while( true ) {
              local_b38 = FVar48;
              if ((int)uVar44 != (int)uVar45) {
                local_b65 = 0;
                `TCheckedPointerIterator<FAnimNode_LinkedAnimLayer_*,int,0>::operator!='::__l2::
                <lambda_1>::operator()(&local_b65);
              }
              pUVar31 = local_b58;
              if (FVar48 == (ForElementType<FAnimNode_LinkedAnimLayer_*>)((longlong)FVar43 + lVar38)
                 ) break;
              this_00 = *(FAnimNode_LinkedAnimLayer **)FVar48;
              local_a40 = this_00;
              if ((pUVar15 == (UClass *)0x0) || (pUVar15 == *(UClass **)&local_b58->field_0x10)) {
                FAnimNode_LinkedAnimLayer::SetLinkedLayerInstance
                          (this_00,local_b58,(UAnimInstance *)0x0);
                if (!param_3) {
                  if (((this_00->_padding_ == 0) ||
                      ((*(uint *)(this_00->_padding_ + 8) >> 0x1e & 1) != 0)) ||
                     (this_00->_padding_ == 0)) {
LAB_14746dc5a:
                    pUVar25 = (UAnimInstance *)0x0;
                  }
                  else {
                    pUVar24 = StaticClass();
                    bVar11 = FObjectPtr::IsA((FObjectPtr *)&this_00->_padding_,pUVar24);
                    if (!bVar11) goto LAB_14746dc5a;
                    pUVar25 = (UAnimInstance *)this_00->_padding_;
                  }
                  if ((this_00->_padding_ != 0) && (pUVar25 != (UAnimInstance *)0x0)) {
                    lVar46 = *(longlong *)&pUVar31->field_0x20;
                    if (lVar46 != 0) {
                      pUVar15 = Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
                      lVar46 = *(longlong *)(lVar46 + 0x10);
                      iVar13 = (int)pUVar15->_padding_;
                      if (((iVar13 <= *(int *)(lVar46 + 0x38)) &&
                          ((longlong *)
                           *(undefined1 **)(*(longlong *)(lVar46 + 0x30) + (longlong)iVar13 * 8) ==
                           &pUVar15->_padding_)) && (bVar11 = IsInGameThread(), bVar11)) {
                        pUVar27 = GetSkelMeshComponent(pUVar31);
                        USkeletalMeshComponent::HandleExistingParallelEvaluationTask
                                  (pUVar27,true,true);
                      }
                    }
                    pFVar28 = pUVar31->AnimInstanceProxy;
                    if (pFVar28 == (FAnimInstanceProxy *)0x0) {
                      pFVar28 = (FAnimInstanceProxy *)
                                (**(code **)(*(longlong *)pUVar31 + 0x378))(pUVar31);
                      pUVar31->AnimInstanceProxy = pFVar28;
                    }
                    lVar46 = *(longlong *)&pUVar25->field_0x20;
                    if (lVar46 != 0) {
                      pUVar15 = Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
                      lVar46 = *(longlong *)(lVar46 + 0x10);
                      iVar13 = (int)pUVar15->_padding_;
                      if (((iVar13 <= *(int *)(lVar46 + 0x38)) &&
                          ((longlong *)
                           *(undefined1 **)(*(longlong *)(lVar46 + 0x30) + (longlong)iVar13 * 8) ==
                           &pUVar15->_padding_)) && (bVar11 = IsInGameThread(), bVar11)) {
                        pUVar27 = GetSkelMeshComponent(pUVar25);
                        USkeletalMeshComponent::HandleExistingParallelEvaluationTask
                                  (pUVar27,true,true);
                      }
                    }
                    pFVar29 = pUVar25->AnimInstanceProxy;
                    if (pFVar29 == (FAnimInstanceProxy *)0x0) {
                      pFVar29 = (FAnimInstanceProxy *)
                                (**(code **)(*(longlong *)pUVar25 + 0x378))(pUVar25);
                      pUVar25->AnimInstanceProxy = pFVar29;
                    }
                    (**(code **)(*(longlong *)pFVar29 + 0x80))(pFVar29,pUVar25);
                    pUVar27 = GetSkelMeshComponent(pUVar25);
                    pUVar30 = USkeletalMeshComponent::GetSkeletalMeshAsset(pUVar27);
                    pUVar15 = local_b48;
                    if (pUVar30 != (USkeletalMesh *)0x0) {
                      FAnimationBaseContext::FAnimationBaseContext
                                (&local_8c0,pFVar28,(FAnimationUpdateSharedContext *)0x0);
                      FAnimNode_LinkedAnimGraph::InitializeSubGraph_AnyThread
                                ((FAnimNode_LinkedAnimGraph *)this_00,
                                 (FAnimationInitializeContext *)&local_8c0);
                      FAnimationBaseContext::FAnimationBaseContext
                                (&local_8a0,pFVar28,(FAnimationUpdateSharedContext *)0x0);
                      pFVar37 = &local_8a0;
                      goto LAB_14746ddaa;
                    }
                  }
                }
              }
              else {
                if ((this_00->_padding_ != 0) &&
                   ((*(uint *)(this_00->_padding_ + 8) >> 0x1e & 1) == 0)) {
                  if (this_00->_padding_ == 0) {
LAB_14746d932:
                    lVar46 = 0;
                  }
                  else {
                    pUVar24 = StaticClass();
                    bVar11 = FObjectPtr::IsA((FObjectPtr *)&this_00->_padding_,pUVar24);
                    if (!bVar11) goto LAB_14746d932;
                    lVar46 = this_00->_padding_;
                  }
                  if ((lVar46 != 0) && (pUVar15 == *(UClass **)(lVar46 + 0x10))) goto LAB_14746ddbb;
                }
                (**(code **)(this_00->_padding_ + 0xb8))(this_00,&local_a50);
                FVar4 = local_a50;
                local_a48 = pUVar15;
                if (UE::GC::GIsIncrementalReachabilityPending != false) {
                  UE::GC::MarkAsReachable((UObject *)pUVar15);
                }
                pUVar25 = FAnimSubsystem_SharedLinkedAnimLayers::AddLinkedFunction
                                    ((FAnimSubsystem_SharedLinkedAnimLayers *)pFVar23,pUVar31,
                                     (TSubclassOf<UAnimInstance>)&local_a48,FVar4,local_b64);
                if (local_b64[0] != false) {
                  lVar46 = (longlong)(int)local_600;
                  FVar21 = (ForElementType<FAnimNode_LinkedAnimLayer_*>)&local_628;
                  if (local_628.SecondaryData != (ForElementType<FAnimNode_LinkedAnimLayer_*>)0x0) {
                    FVar21 = local_628.SecondaryData;
                  }
                  if (((int)local_600 < 0) &&
                     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                         ("InCount >= 0",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                          ,0xeb,L""), bVar11)) {
                    pcVar6 = (code *)swi(3);
                    (*pcVar6)();
                    return;
                  }
                  pIVar14 = IAnimClassInterface::GetFromClass(*(UClass **)&pUVar25->field_0x10);
                  plVar17 = (longlong *)(**(code **)((longlong)*pIVar14 + 0x40))(pIVar14);
                  puVar39 = (undefined8 *)*plVar17;
                  lVar7 = plVar17[1];
                  puVar2 = puVar39 + (int)lVar7;
                  while( true ) {
                    if ((int)plVar17[1] != (int)lVar7) {
                      local_b64[1] = false;
                      `TCheckedPointerIterator<FStructProperty_*_const,int,0>::operator!='::__l2::
                      <lambda_1>::operator()(local_b64 + 1);
                    }
                    pUVar31 = local_b58;
                    pFVar23 = local_b10;
                    this_00 = local_a40;
                    FVar48 = local_b38;
                    if (puVar39 == puVar2) break;
                    pFVar26 = FProperty::ContainerUObjectPtrToValuePtrInternal
                                        ((FProperty *)*puVar39,(UObject *)pUVar25,0);
                    FVar48 = (ForElementType<FAnimNode_LinkedAnimLayer_*>)
                             ((longlong)FVar21 + lVar46 * 8);
                    if (FVar21 == FVar48) {
LAB_14746da67:
                      puVar39 = puVar39 + 1;
                    }
                    else {
                      FVar36 = FVar21;
                      do {
                        if (*(longlong *)(*(longlong *)FVar36 + 0xc0) == pFVar26[1]._padding_) {
                          FAnimNode_LinkedAnimGraph::DynamicUnlink(pFVar26,pUVar25);
                          goto LAB_14746da67;
                        }
                        FVar36 = (ForElementType<FAnimNode_LinkedAnimLayer_*>)((longlong)FVar36 + 8)
                        ;
                      } while (FVar36 != FVar48);
                      puVar39 = puVar39 + 1;
                    }
                  }
                }
                FAnimNode_LinkedAnimLayer::SetLinkedLayerInstance(this_00,pUVar31,pUVar25);
                bVar35 = ((char)this_00->_padding_ << 4 | pUVar25->field_0x31) & 0x20U ^
                         pUVar25->field_0x31 & 0xdf;
                pUVar25->field_0x31 = bVar35;
                pUVar25->field_0x31 =
                     ((char)this_00->_padding_ << 4 | bVar35) & 0x10 ^ bVar35 & 0xef;
                pUVar15 = local_b48;
                if (!param_3) {
                  lVar46 = *(longlong *)&pUVar31->field_0x20;
                  if (lVar46 != 0) {
                    pUVar15 = Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
                    lVar46 = *(longlong *)(lVar46 + 0x10);
                    iVar13 = (int)pUVar15->_padding_;
                    if (((iVar13 <= *(int *)(lVar46 + 0x38)) &&
                        ((longlong *)
                         *(undefined1 **)(*(longlong *)(lVar46 + 0x30) + (longlong)iVar13 * 8) ==
                         &pUVar15->_padding_)) && (bVar11 = IsInGameThread(), bVar11)) {
                      pUVar27 = GetSkelMeshComponent(pUVar31);
                      USkeletalMeshComponent::HandleExistingParallelEvaluationTask
                                (pUVar27,true,true);
                    }
                  }
                  pFVar28 = pUVar31->AnimInstanceProxy;
                  if (pFVar28 == (FAnimInstanceProxy *)0x0) {
                    pFVar28 = (FAnimInstanceProxy *)
                              (**(code **)(*(longlong *)pUVar31 + 0x378))(pUVar31);
                    pUVar31->AnimInstanceProxy = pFVar28;
                  }
                  lVar46 = *(longlong *)&pUVar25->field_0x20;
                  if (lVar46 != 0) {
                    pUVar15 = Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
                    lVar46 = *(longlong *)(lVar46 + 0x10);
                    iVar13 = (int)pUVar15->_padding_;
                    if (((iVar13 <= *(int *)(lVar46 + 0x38)) &&
                        ((longlong *)
                         *(undefined1 **)(*(longlong *)(lVar46 + 0x30) + (longlong)iVar13 * 8) ==
                         &pUVar15->_padding_)) && (bVar11 = IsInGameThread(), bVar11)) {
                      pUVar27 = GetSkelMeshComponent(pUVar25);
                      USkeletalMeshComponent::HandleExistingParallelEvaluationTask
                                (pUVar27,true,true);
                    }
                  }
                  pFVar29 = pUVar25->AnimInstanceProxy;
                  if (pFVar29 == (FAnimInstanceProxy *)0x0) {
                    pFVar29 = (FAnimInstanceProxy *)
                              (**(code **)(*(longlong *)pUVar25 + 0x378))(pUVar25);
                    pUVar25->AnimInstanceProxy = pFVar29;
                  }
                  (**(code **)(*(longlong *)pFVar29 + 0x80))(pFVar29,pUVar25);
                  pUVar27 = GetSkelMeshComponent(pUVar25);
                  pUVar30 = USkeletalMeshComponent::GetSkeletalMeshAsset(pUVar27);
                  pUVar15 = local_b48;
                  if (pUVar30 != (USkeletalMesh *)0x0) {
                    FAnimationBaseContext::FAnimationBaseContext
                              (&local_900,pFVar28,(FAnimationUpdateSharedContext *)0x0);
                    FAnimNode_LinkedAnimGraph::InitializeSubGraph_AnyThread
                              ((FAnimNode_LinkedAnimGraph *)this_00,
                               (FAnimationInitializeContext *)&local_900);
                    FAnimationBaseContext::FAnimationBaseContext
                              (&local_8e0,pFVar28,(FAnimationUpdateSharedContext *)0x0);
                    pFVar37 = &local_8e0;
LAB_14746ddaa:
                    FAnimNode_LinkedAnimGraph::CacheBonesSubGraph_AnyThread
                              ((FAnimNode_LinkedAnimGraph *)this_00,
                               (FAnimationCacheBonesContext *)pFVar37);
                    pUVar15 = local_b48;
                  }
                }
              }
LAB_14746ddbb:
              uVar44 = (ulonglong)local_600;
              FVar48 = (ForElementType<FAnimNode_LinkedAnimLayer_*>)((longlong)FVar48 + 8);
              uVar45 = (ulonglong)local_b3c;
            }
          }
LAB_14746e87a:
          if (local_628.SecondaryData != (ForElementType<FAnimNode_LinkedAnimLayer_*>)0x0) {
            FMemory::Free((void *)local_628.SecondaryData);
          }
          TStack_9f8.UnvisitedBitMask = TStack_9f8.UnvisitedBitMask & ~TStack_9f8._padding_._4_4_;
          TConstSetBitIterator<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::
          FindFirstSetBit(&TStack_9f8);
        }
        local_638 = 0;
        if (local_640 != (ForElementType<FSetElementId>)0x0) {
          FMemory::Free((void *)local_640);
        }
        TSparseArray<TSparseSetElement<TTuple<FName,TArray<FAnimNode_LinkedAnimLayer_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_>_>,TInlineSparseArrayAllocator<4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
        ::Empty((TSparseArray<TSparseSetElement<TTuple<FName,TArray<FAnimNode_LinkedAnimLayer_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_>_>,TInlineSparseArrayAllocator<4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
                 *)local_778,0);
        if (local_668.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
          FMemory::Free((void *)local_668.AllocatorInstance.SecondaryData);
        }
        if (local_678 != (void *)0x0) {
          FMemory::Free(local_678);
        }
        TStack_9c8.UnvisitedBitMask = TStack_9c8.UnvisitedBitMask & ~TStack_9c8._padding_._4_4_;
        TConstSetBitIterator<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::
        FindFirstSetBit(&TStack_9c8);
      }
      if (((GIsReinstancing == (atomic<bool>)0x0) &&
          (pUVar31 = USkeletalMeshComponent::GetAnimInstance(local_b20),
          pUVar31 != (UAnimInstance *)0x0)) && (pUVar27->bRequiredBonesUpToDate != '\0')) {
        pUVar31 = USkeletalMeshComponent::GetAnimInstance(pUVar27);
        pFVar34 = GetRequiredBones(pUVar31);
        pFVar41 = (pUVar27->LinkedInstances).AllocatorInstance.Data;
        iVar13 = (pUVar27->LinkedInstances).ArrayNum;
        iVar3 = pFVar34->CalculatedForLOD;
        pFVar5 = pFVar41 + (longlong)iVar13 * 8;
        while( true ) {
          if ((pUVar27->LinkedInstances).ArrayNum != iVar13) {
            local_b64[8] = false;
            `TCheckedPointerIterator<TObjectPtr<UAnimInstance>,int,0>::operator!='::__l2::<lambda_1>
            ::operator()(local_b64 + 8);
          }
          if (pFVar41 == pFVar5) break;
          pFVar34 = GetRequiredBones(*(UAnimInstance **)pFVar41);
          if ((iVar3 != pFVar34->CalculatedForLOD) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("RootLOD == LinkedInstance->GetRequiredBones().GetCalculatedForLOD()"
                                  ,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimInstance.cpp"
                                  ,0xe90,L""), bVar11)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          pFVar41 = pFVar41 + 8;
        }
        pUVar31 = USkeletalMeshComponent::GetPostProcessInstance(pUVar27);
        if (pUVar31 != (UAnimInstance *)0x0) {
          pUVar31 = USkeletalMeshComponent::GetPostProcessInstance(pUVar27);
          pFVar34 = GetRequiredBones(pUVar31);
          if ((iVar3 != pFVar34->CalculatedForLOD) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("RootLOD == MeshComp->GetPostProcessInstance()->GetRequiredBones().GetCalculatedForLOD()"
                                  ,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimInstance.cpp"
                                  ,0xe95,L""), bVar11)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
        }
      }
      local_58 = 0;
      if (local_60 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_60);
      }
      TSparseArray<TSparseSetElement<TTuple<UClass_*,TMap<FName,TArray<FAnimNode_LinkedAnimLayer_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FAnimNode_LinkedAnimLayer_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,0>_>_>_>,TInlineSparseArrayAllocator<4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<UClass_*,TMap<FName,TArray<FAnimNode_LinkedAnimLayer_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FAnimNode_LinkedAnimLayer_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,0>_>_>_>,TInlineSparseArrayAllocator<4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
                ((TSparseArray<TSparseSetElement<TTuple<UClass_*,TMap<FName,TArray<FAnimNode_LinkedAnimLayer_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FAnimNode_LinkedAnimLayer_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,0>_>_>_>,TInlineSparseArrayAllocator<4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
                  *)local_5f8);
    }
    else if (2 < (byte)LogAnimation._0_1_) {
      local_a38 = (FName)pUVar15->_padding_;
      ::FName::ToString(&local_a38,&local_a30);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAnimation);
      if (local_a30.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a30.Data.AllocatorInstance.Data);
      }
    }
  }
  return;
}

// PlaySlotAnimationAsDynamicMontage @ 14746ec50

UAnimMontage * __thiscall
UAnimInstance::PlaySlotAnimationAsDynamicMontage
          (UAnimInstance *this,UAnimSequenceBase *param_1,FName param_2,float param_3,float param_4,
          float param_5,int param_6,float param_7,float param_8)

{
  UAnimMontage *pUVar1;
  UAnimMontage *pUVar2;
  float fVar3;
  FMontageBlendSettings local_58;
  FMontageBlendSettings local_38;
  
  FMontageBlendSettings::FMontageBlendSettings(&local_38,param_3);
  FMontageBlendSettings::FMontageBlendSettings(&local_58,param_4);
  if (((param_1 == (UAnimSequenceBase *)0x0) || (param_1->_padding_ == 0)) ||
     (pUVar1 = UAnimMontage::CreateSlotAnimationAsDynamicMontage_WithBlendSettings
                         (param_1,param_2,&local_38,&local_58,param_5,param_6,param_7),
     pUVar1 == (UAnimMontage *)0x0)) {
    pUVar2 = (UAnimMontage *)0x0;
  }
  else {
    fVar3 = Montage_Play(this,pUVar1,param_5,MontageLength,param_8,true);
    pUVar2 = (UAnimMontage *)0x0;
    if (0.0 < fVar3) {
      pUVar2 = pUVar1;
    }
  }
  return pUVar2;
}

// PlaySlotAnimationAsDynamicMontage_WithBlendArgs @ 14746ed40

UAnimMontage * __thiscall
UAnimInstance::PlaySlotAnimationAsDynamicMontage_WithBlendArgs
          (UAnimInstance *this,UAnimSequenceBase *param_1,FName param_2,FAlphaBlendArgs *param_3,
          FAlphaBlendArgs *param_4,float param_5,int param_6,float param_7,float param_8)

{
  UAnimMontage *pUVar1;
  UAnimMontage *pUVar2;
  float fVar3;
  FMontageBlendSettings local_58;
  FMontageBlendSettings local_38;
  
  FMontageBlendSettings::FMontageBlendSettings(&local_38,param_3);
  FMontageBlendSettings::FMontageBlendSettings(&local_58,param_4);
  if (((param_1 == (UAnimSequenceBase *)0x0) || (param_1->_padding_ == 0)) ||
     (pUVar1 = UAnimMontage::CreateSlotAnimationAsDynamicMontage_WithBlendSettings
                         (param_1,param_2,&local_38,&local_58,param_5,param_6,param_7),
     pUVar1 == (UAnimMontage *)0x0)) {
    pUVar2 = (UAnimMontage *)0x0;
  }
  else {
    fVar3 = Montage_Play(this,pUVar1,param_5,MontageLength,param_8,true);
    pUVar2 = (UAnimMontage *)0x0;
    if (0.0 < fVar3) {
      pUVar2 = pUVar1;
    }
  }
  return pUVar2;
}

// PlaySlotAnimationAsDynamicMontage_WithBlendSettings @ 14746ee30

UAnimMontage * __thiscall
UAnimInstance::PlaySlotAnimationAsDynamicMontage_WithBlendSettings
          (UAnimInstance *this,UAnimSequenceBase *param_1,FName param_2,
          FMontageBlendSettings *param_3,FMontageBlendSettings *param_4,float param_5,int param_6,
          float param_7,float param_8)

{
  UAnimMontage *pUVar1;
  UAnimMontage *pUVar2;
  float fVar3;
  
  if ((param_1 != (UAnimSequenceBase *)0x0) && (param_1->_padding_ != 0)) {
    pUVar1 = UAnimMontage::CreateSlotAnimationAsDynamicMontage_WithBlendSettings
                       (param_1,param_2,param_3,param_4,param_5,param_6,param_7);
    if (pUVar1 != (UAnimMontage *)0x0) {
      fVar3 = Montage_Play(this,pUVar1,param_5,MontageLength,param_8,true);
      pUVar2 = (UAnimMontage *)0x0;
      if (0.0 < fVar3) {
        pUVar2 = pUVar1;
      }
      return pUVar2;
    }
  }
  return (UAnimMontage *)0x0;
}

// PostEvaluateAnimation @ 14746f050

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UAnimInstance::PostEvaluateAnimation(UAnimInstance *this)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  FName *pFVar5;
  FThreadSafeStaticStat<FStat_STAT_BlueprintPostEvaluateAnimation> FVar6;
  UFunction *pUVar7;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FAnimInstanceProxy *pFVar8;
  uint uVar9;
  FNameEntryId FVar10;
  FName FVar11;
  FNameEntryId FVar12;
  FLLMScope local_res8 [2];
  LARGE_INTEGER local_res10;
  FMemScope local_res18;
  FName local_res20;
  FStatMessage local_38;
  
  FLLMScope::FLLMScope(local_res8,Animation,false,None,Default,true);
  FMemScope::FMemScope(&local_res18,Animation,true);
  (**(code **)(*(longlong *)this + 0x338))(this);
  FVar12.Value = 0;
  FVar6 = StatPtr_STAT_BlueprintPostEvaluateAnimation;
  if (StatPtr_STAT_BlueprintPostEvaluateAnimation ==
      (FThreadSafeStaticStat<FStat_STAT_BlueprintPostEvaluateAnimation>)0x0) {
    pFVar5 = ::FName::FName(&local_res20,"STAT_BlueprintPostEvaluateAnimation");
    FVar6 = (FThreadSafeStaticStat<FStat_STAT_BlueprintPostEvaluateAnimation>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_BlueprintPostEvaluateAnimation,
                       *pFVar5,L"BlueprintPostEvaluateAnimation","STATGROUP_Anim","STATCAT_Advanced"
                       ,L"Anim",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar11 = *(FName *)FVar6;
  bVar2 = false;
  bVar4 = false;
  FVar10 = FVar11.ComparisonIndex.Value;
  uVar9 = FVar11.Number;
  if ((FVar10.Value != 0) || (uVar9 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10.s,(char *)*(FName *)((longlong)FVar6 + 0x10));
      bVar2 = false;
      bVar4 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res10.s.LowPart = FVar10.Value;
        local_res10.s.HighPart = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res10.s,(wchar_t *)*(FName *)((longlong)FVar6 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimInstance.cpp"
                   ,0x3a8);
        bVar2 = true;
        bVar4 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res10.s.LowPart = FVar10.Value;
      local_res10.s.HighPart = uVar9;
      FThreadStats::AddMessage(FVar11,CycleScopeStart);
      bVar3 = true;
      FVar12.Value = FVar10.Value;
      goto LAB_14746f1e5;
    }
  }
  bVar3 = false;
  FVar11.ComparisonIndex.Value = 0;
  FVar11.Number = 0;
LAB_14746f1e5:
  pUVar7 = UObject::FindFunctionChecked
                     ((UObject *)this,NAME_UAnimInstance_BlueprintPostEvaluateAnimation);
  (**(code **)(*(longlong *)this + 0x260))(this,pUVar7);
  if (bVar4) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar3) && (FVar11 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_38.NameAndInfo.Number = FVar11.Number & 0xffff6fff | 0x6000;
      local_38.NameAndInfo.Index.Value = FVar12.Value;
      QueryPerformanceCounter(&local_res10);
      local_38.StatData.Pad[4] = '\0';
      local_38.StatData.Pad[5] = '\0';
      local_38.StatData.Pad[6] = '\0';
      local_38.StatData.Pad[7] = '\0';
      local_38.StatData.Pad[0] = local_res10.s.LowPart._0_1_;
      local_38.StatData.Pad[1] = local_res10.s.LowPart._1_1_;
      local_38.StatData.Pad[2] = local_res10.s.LowPart._2_1_;
      local_38.StatData.Pad[3] = local_res10.s.LowPart._3_1_;
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
  pFVar8 = GetProxyOnGameThread<FAnimInstanceProxy>(this);
  (**(code **)(*(longlong *)pFVar8 + 0x78))(pFVar8,this);
  FMemScope::~FMemScope(&local_res18);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// PostInitProperties @ 14746f330

void __thiscall UAnimInstance::PostInitProperties(UAnimInstance *this)

{
  code *pcVar1;
  bool bVar2;
  FAnimInstanceProxy *pFVar3;
  
  UObject::PostInitProperties((UObject *)this);
  if (this->AnimInstanceProxy == (FAnimInstanceProxy *)0x0) {
    pFVar3 = (FAnimInstanceProxy *)(**(code **)(*(longlong *)this + 0x378))(this);
    this->AnimInstanceProxy = pFVar3;
    if (pFVar3 == (FAnimInstanceProxy *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("AnimInstanceProxy != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimInstance.cpp"
                         ,0x5e7,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  return;
}

// PostUpdateAnimation @ 147470100

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UAnimInstance::PostUpdateAnimation(UAnimInstance *this)

{
  TTransform<double> *pTVar1;
  code *pcVar2;
  undefined1 auVar3 [16];
  double dVar4;
  double dVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  double dVar8;
  double dVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  bool bVar20;
  bool bVar21;
  bool bVar22;
  bool bVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  bool bVar26;
  bool bVar27;
  bool bVar28;
  USkeletalMeshComponent *pUVar29;
  FName *pFVar30;
  FThreadSafeStaticStat<FStat_STAT_PostUpdateAnimation> FVar31;
  UAnimInstance *pUVar32;
  FAnimInstanceProxy *pFVar33;
  uint *puVar34;
  int iVar35;
  ulonglong uVar36;
  FNameEntryId FVar37;
  FScriptContainerElement *pFVar38;
  FName FVar39;
  FScriptContainerElement *pFVar40;
  FScriptContainerElement *pFVar41;
  ulonglong uVar42;
  ulonglong uVar43;
  ulonglong uVar44;
  ulonglong uVar45;
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  double dVar58;
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  double dVar68;
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  double dVar59;
  double dVar69;
  undefined1 auVar67 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  uint uVar75;
  uint uVar76;
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  float fVar77;
  undefined4 uVar78;
  undefined4 uVar79;
  undefined4 uVar80;
  undefined4 uVar81;
  undefined1 auStackY_298 [32];
  undefined1 local_236;
  undefined1 local_235;
  FLLMScope local_234;
  uint local_230;
  uint uStack_22c;
  FColor_u_0 local_228 [2];
  FName local_220;
  FName local_218;
  FName local_210;
  FString local_200;
  FName local_1f0;
  FName local_1e8;
  FMemScope local_1e0;
  FString local_1d8;
  FName local_1c8 [2];
  TTransform<double> local_1b8;
  TTransform<double> local_158;
  TTransform<double> local_f8;
  ulonglong local_98;
  
  local_98 = __security_cookie.value ^ (ulonglong)auStackY_298;
  FLLMScope::FLLMScope(&local_234,Animation,false,None,Default,true);
  FMemScope::FMemScope(&local_1e0,Animation,true);
  if (this->bPostUpdatingAnimation != false) {
    local_1f0.ComparisonIndex.Value = *(uint *)&this->field_0x18;
    local_1f0.Number = *(uint *)&this->field_0x1c;
    ::FName::ToString(&local_1f0,&local_1d8);
    pUVar29 = GetSkelMeshComponent(this);
    if (pUVar29 == (USkeletalMeshComponent *)0x0) {
      ::FString::FString(&local_200,L"None");
    }
    else {
      local_1e8 = (FName)pUVar29->_padding_;
      ::FName::ToString(&local_1e8,&local_200);
    }
    bVar27 = ::FDebug::CheckVerifyFailedImpl2
                       ("!bPostUpdatingAnimation",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimInstance.cpp"
                        ,0x2be,
                        L"PostUpdateAnimation already in progress, recursion detected for SkeletalMeshComponent [%s], AnimInstance [%s]"
                       );
    if (local_200.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_200.Data.AllocatorInstance.Data);
    }
    if (local_1d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1d8.Data.AllocatorInstance.Data);
    }
    if (bVar27) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  bVar27 = this->bPostUpdatingAnimation;
  this->bPostUpdatingAnimation = true;
  FVar31 = StatPtr_STAT_PostUpdateAnimation;
  if (StatPtr_STAT_PostUpdateAnimation == (FThreadSafeStaticStat<FStat_STAT_PostUpdateAnimation>)0x0
     ) {
    pFVar30 = ::FName::FName(local_1c8,"STAT_PostUpdateAnimation");
    FVar31 = (FThreadSafeStaticStat<FStat_STAT_PostUpdateAnimation>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_PostUpdateAnimation,*pFVar30,
                        L"PostUpdateAnimation","STATGROUP_Anim","STATCAT_Advanced",L"Anim",true,true
                        ,ST_int64,true,false,MCR_Invalid);
  }
  FVar39 = *(FName *)FVar31;
  bVar21 = false;
  bVar23 = false;
  local_210.ComparisonIndex.Value = 0;
  local_210.Number = 0;
  bVar26 = false;
  bVar28 = false;
  FVar37 = FVar39.ComparisonIndex.Value;
  uVar75 = FVar39.Number;
  if ((FVar37.Value != 0) || (bVar20 = bVar21, bVar22 = bVar23, uVar75 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_228[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_228[0]._s_0,(char *)*(FName *)((longlong)FVar31 + 0x10));
      bVar21 = false;
      bVar23 = true;
      bVar26 = false;
      bVar28 = true;
      if (-1 < CpuChannel->Enabled) {
        local_220.ComparisonIndex.Value = FVar37.Value;
        local_220.Number = uVar75;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_220,(wchar_t *)*(FName *)((longlong)FVar31 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimInstance.cpp"
                   ,0x2c2);
        bVar21 = true;
        bVar23 = true;
        bVar26 = true;
        bVar28 = true;
      }
    }
    bVar20 = bVar21;
    bVar22 = bVar23;
    if (FThreadStats::bPrimaryEnable != false) {
      local_230 = FVar37.Value;
      uStack_22c = uVar75;
      local_218 = FVar39;
      FThreadStats::AddMessage(FVar39,CycleScopeStart);
      bVar26 = true;
      goto LAB_14747036f;
    }
  }
  bVar23 = bVar28;
  bVar21 = bVar26;
  bVar26 = false;
  local_218 = local_210;
  FVar39 = local_210;
LAB_14747036f:
  pUVar29 = GetSkelMeshComponent(this);
  if ((((pUVar29 != (USkeletalMeshComponent *)0x0) &&
       (pUVar32 = USkeletalMeshComponent::GetAnimInstance(pUVar29), pUVar32 == this)) &&
      ((pUVar29->ParallelAnimationEvaluationTask).Reference != (FBaseGraphTask *)0x0)) &&
     (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                         ("!IsRunningParallelEvaluation()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimInstance.cpp"
                          ,0x2c3,L""), bVar28)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pUVar29 = GetSkelMeshComponent(this);
  pUVar32 = USkeletalMeshComponent::GetAnimInstance(pUVar29);
  if (pUVar32 == this) {
    pUVar29 = GetSkelMeshComponent(this);
    pFVar40 = (pUVar29->LinkedInstances).AllocatorInstance.Data;
    iVar35 = (pUVar29->LinkedInstances).ArrayNum;
    pFVar41 = pFVar40 + (longlong)iVar35 * 8;
    while( true ) {
      if ((pUVar29->LinkedInstances).ArrayNum != iVar35) {
        local_236 = 0;
        `TCheckedPointerIterator<TObjectPtr<UAnimInstance>,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_236);
      }
      if (pFVar40 == pFVar41) break;
      if ((*(UAnimInstance **)pFVar40)->bNeedsUpdate != '\0') {
        PostUpdateAnimation(*(UAnimInstance **)pFVar40);
      }
      pFVar40 = pFVar40 + 8;
    }
  }
  if (this->bNeedsUpdate != '\0') {
    this->field_0x31 = this->field_0x31 & 0xfb;
    pFVar33 = GetProxyOnGameThread<FAnimInstanceProxy>(this);
    pFVar33->BufferWriteIndex = 1 - pFVar33->BufferWriteIndex;
    (**(code **)(*(longlong *)pFVar33 + 0x70))(pFVar33,this);
    if ((pFVar33->ExtractedRootMotion).bHasRootMotion != false) {
      pTVar1 = &(this->ExtractedRootMotion).RootMotionTransform;
      dVar8 = (pFVar33->ExtractedRootMotion).RootMotionTransform.Rotation.XY.m128d_f64[0];
      dVar9 = (pFVar33->ExtractedRootMotion).RootMotionTransform.Rotation.XY.m128d_f64[1];
      dVar12 = (pFVar33->ExtractedRootMotion).RootMotionTransform.Rotation.ZW.m128d_f64[0];
      dVar13 = (pFVar33->ExtractedRootMotion).RootMotionTransform.Rotation.ZW.m128d_f64[1];
      local_f8.Translation.XY.m128d_f64[0] =
           (pFVar33->ExtractedRootMotion).RootMotionTransform.Translation.XY.m128d_f64[0];
      local_f8.Translation.XY.m128d_f64[1] =
           (pFVar33->ExtractedRootMotion).RootMotionTransform.Translation.XY.m128d_f64[1];
      local_f8.Translation.ZW.m128d_f64[0] =
           (pFVar33->ExtractedRootMotion).RootMotionTransform.Translation.ZW.m128d_f64[0];
      local_f8.Translation.ZW.m128d_f64[1] =
           (pFVar33->ExtractedRootMotion).RootMotionTransform.Translation.ZW.m128d_f64[1];
      local_f8.Scale3D.XY.m128d_f64[0] =
           (pFVar33->ExtractedRootMotion).RootMotionTransform.Scale3D.XY.m128d_f64[0];
      local_f8.Scale3D.XY.m128d_f64[1] =
           (pFVar33->ExtractedRootMotion).RootMotionTransform.Scale3D.XY.m128d_f64[1];
      local_f8.Scale3D.ZW.m128d_f64[0] =
           (pFVar33->ExtractedRootMotion).RootMotionTransform.Scale3D.ZW.m128d_f64[0];
      local_f8.Scale3D.ZW.m128d_f64[1] =
           (pFVar33->ExtractedRootMotion).RootMotionTransform.Scale3D.ZW.m128d_f64[1];
      auVar60._0_8_ = dVar8 * dVar8 + dVar12 * dVar12;
      auVar60._8_8_ = dVar9 * dVar9 + dVar13 * dVar13;
      auVar61._8_4_ = SUB84(auVar60._8_8_,0);
      auVar61._0_8_ = auVar60._0_8_;
      auVar61._12_4_ = (int)((ulonglong)auVar60._8_8_ >> 0x20);
      auVar46._0_8_ = auVar61._8_8_ + auVar60._0_8_;
      auVar46._8_8_ = auVar60._0_8_ + auVar60._8_8_;
      uVar42 = -(ulonglong)
                (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[0] <= auVar46._0_8_)
      ;
      uVar44 = -(ulonglong)
                (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[1] <= auVar46._8_8_)
      ;
      auVar61 = sqrtpd(auVar60,auVar46);
      uVar43 = -(ulonglong)
                (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[0] <= auVar46._0_8_)
      ;
      uVar45 = -(ulonglong)
                (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[1] <= auVar46._8_8_)
      ;
      auVar47 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar61);
      auVar48._0_8_ = (ulonglong)(auVar47._0_8_ * dVar8) & uVar42;
      uVar36 = uVar44 & (ulonglong)(auVar47._8_8_ * dVar9);
      auVar48._8_4_ = (undefined4)uVar36;
      auVar48._12_4_ = (undefined4)(uVar36 >> 0x20);
      auVar70._0_4_ = ~(uint)uVar42 & GlobalVectorConstants::Double0001.XY.m128d_f64[0]._0_4_;
      auVar70._4_4_ =
           ~(uint)(uVar42 >> 0x20) & GlobalVectorConstants::Double0001.XY.m128d_f64[0]._4_4_;
      auVar70._8_4_ = ~(uint)uVar44 & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._0_4_;
      auVar70._12_4_ =
           ~(uint)(uVar44 >> 0x20) & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._4_4_;
      local_f8.Rotation.XY.m128d_f64 = (double  [2])(auVar48 | auVar70);
      auVar47 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar61);
      auVar71._0_8_ = uVar43 & (ulonglong)(auVar47._0_8_ * dVar12);
      uVar36 = uVar45 & (ulonglong)(auVar47._8_8_ * dVar13);
      auVar71._8_4_ = (undefined4)uVar36;
      auVar71._12_4_ = (undefined4)(uVar36 >> 0x20);
      auVar47._4_4_ =
           ~(uint)(uVar43 >> 0x20) & GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._4_4_;
      auVar47._0_4_ = ~(uint)uVar43 & GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._0_4_;
      auVar47._8_4_ = ~(uint)uVar45 & GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._0_4_;
      auVar47._12_4_ =
           ~(uint)(uVar45 >> 0x20) & GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._4_4_;
      local_f8.Rotation.ZW.m128d_f64 = (double  [2])(auVar71 | auVar47);
      if ((this->ExtractedRootMotion).bHasRootMotion == false) {
        *&(pTVar1->Rotation).XY.m128d_f64 = local_f8.Rotation.XY.m128d_f64;
        (this->ExtractedRootMotion).bHasRootMotion = true;
        *&(this->ExtractedRootMotion).RootMotionTransform.Rotation.ZW.m128d_f64 =
             local_f8.Rotation.ZW.m128d_f64;
        (this->ExtractedRootMotion).RootMotionTransform.Translation.XY.m128d_f64[0] =
             local_f8.Translation.XY.m128d_f64[0];
        (this->ExtractedRootMotion).RootMotionTransform.Translation.XY.m128d_f64[1] =
             local_f8.Translation.XY.m128d_f64[1];
        (this->ExtractedRootMotion).RootMotionTransform.Translation.ZW.m128d_f64[0] =
             local_f8.Translation.ZW.m128d_f64[0];
        (this->ExtractedRootMotion).RootMotionTransform.Translation.ZW.m128d_f64[1] =
             local_f8.Translation.ZW.m128d_f64[1];
        (this->ExtractedRootMotion).RootMotionTransform.Scale3D.XY.m128d_f64[0] =
             local_f8.Scale3D.XY.m128d_f64[0];
        (this->ExtractedRootMotion).RootMotionTransform.Scale3D.XY.m128d_f64[1] =
             local_f8.Scale3D.XY.m128d_f64[1];
        (this->ExtractedRootMotion).RootMotionTransform.Scale3D.ZW.m128d_f64[0] =
             local_f8.Scale3D.ZW.m128d_f64[0];
        (this->ExtractedRootMotion).RootMotionTransform.Scale3D.ZW.m128d_f64[1] =
             local_f8.Scale3D.ZW.m128d_f64[1];
        uVar25 = FRootMotionMovementParams::RootMotionScale.field0_0x0._s_0.Z;
        uVar24 = FRootMotionMovementParams::RootMotionScale.field0_0x0._s_0.Y;
        (this->ExtractedRootMotion).RootMotionTransform.Scale3D.XY.m128d_f64[0] =
             FRootMotionMovementParams::RootMotionScale.field0_0x0._s_0.X;
        (this->ExtractedRootMotion).RootMotionTransform.Scale3D.XY.m128d_f64[1] = (double)uVar24;
        (this->ExtractedRootMotion).RootMotionTransform.Scale3D.ZW.m128d_f64[0] = (double)uVar25;
        (this->ExtractedRootMotion).RootMotionTransform.Scale3D.ZW.m128d_f64[1] = 0.0;
        (this->ExtractedRootMotion).BlendWeight = 1.0;
      }
      else {
        local_158.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
        local_158.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
        local_158.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
        local_158.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
        local_158.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0]
        ;
        local_158.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1]
        ;
        local_158.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2]
        ;
        local_158.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3]
        ;
        local_158.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
        local_158.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
        local_158.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
        local_158.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
        UE::Math::TTransform<double>::Multiply(&local_158,&local_f8,pTVar1);
        (pTVar1->Rotation).XY.m128d_f64[0] = local_158.Rotation.XY.m128d_f64[0];
        (this->ExtractedRootMotion).RootMotionTransform.Rotation.XY.m128d_f64[1] =
             local_158.Rotation.XY.m128d_f64[1];
        (this->ExtractedRootMotion).RootMotionTransform.Rotation.ZW.m128d_f64[0] =
             local_158.Rotation.ZW.m128d_f64[0];
        (this->ExtractedRootMotion).RootMotionTransform.Rotation.ZW.m128d_f64[1] =
             local_158.Rotation.ZW.m128d_f64[1];
        (this->ExtractedRootMotion).RootMotionTransform.Translation.XY.m128d_f64[0] =
             local_158.Translation.XY.m128d_f64[0];
        (this->ExtractedRootMotion).RootMotionTransform.Translation.XY.m128d_f64[1] =
             local_158.Translation.XY.m128d_f64[1];
        (this->ExtractedRootMotion).RootMotionTransform.Translation.ZW.m128d_f64[0] =
             local_158.Translation.ZW.m128d_f64[0];
        (this->ExtractedRootMotion).RootMotionTransform.Translation.ZW.m128d_f64[1] =
             local_158.Translation.ZW.m128d_f64[1];
        (this->ExtractedRootMotion).RootMotionTransform.Scale3D.XY.m128d_f64[0] =
             local_158.Scale3D.XY.m128d_f64[0];
        (this->ExtractedRootMotion).RootMotionTransform.Scale3D.XY.m128d_f64[1] =
             local_158.Scale3D.XY.m128d_f64[1];
        (this->ExtractedRootMotion).RootMotionTransform.Scale3D.ZW.m128d_f64[0] =
             local_158.Scale3D.ZW.m128d_f64[0];
        (this->ExtractedRootMotion).RootMotionTransform.Scale3D.ZW.m128d_f64[1] =
             local_158.Scale3D.ZW.m128d_f64[1];
        uVar25 = FRootMotionMovementParams::RootMotionScale.field0_0x0._s_0.Z;
        uVar24 = FRootMotionMovementParams::RootMotionScale.field0_0x0._s_0.Y;
        (this->ExtractedRootMotion).RootMotionTransform.Scale3D.XY.m128d_f64[0] =
             FRootMotionMovementParams::RootMotionScale.field0_0x0._s_0.X;
        (this->ExtractedRootMotion).RootMotionTransform.Scale3D.XY.m128d_f64[1] = (double)uVar24;
        (this->ExtractedRootMotion).RootMotionTransform.Scale3D.ZW.m128d_f64[0] = (double)uVar25;
        (this->ExtractedRootMotion).RootMotionTransform.Scale3D.ZW.m128d_f64[1] = 0.0;
      }
      (pFVar33->ExtractedRootMotion).bHasRootMotion = false;
      (pFVar33->ExtractedRootMotion).BlendWeight = 0.0;
    }
    local_230 = (this->RootMotionBlendQueue).ArrayNum;
    uVar36 = (ulonglong)(int)local_230;
    pFVar40 = (this->RootMotionBlendQueue).AllocatorInstance.Data;
    pFVar41 = pFVar40 + 0x40;
    pFVar38 = pFVar40 + uVar36 * 0x70;
    while( true ) {
      if ((this->RootMotionBlendQueue).ArrayNum != (int)uVar36) {
        local_235 = 0;
        `TCheckedPointerIterator<UAnimInstance::FQueuedRootMotionBlend,int,0>::operator!='::__l2::
        <lambda_1>::operator()(&local_235);
      }
      FVar39 = local_218;
      if (pFVar40 == pFVar38) break;
      pFVar33 = GetProxyOnGameThread<FAnimInstanceProxy>(this);
      puVar34 = (uint *)TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                        ::Find((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                                *)&pFVar33->SlotNameToTrackerIndex,*(FName *)(pFVar41 + 0x20));
      if (puVar34 == (uint *)0x0) {
        fVar77 = 0.0;
      }
      else {
        uVar75 = *puVar34;
        iVar35 = 1 - pFVar33->BufferWriteIndex;
        uVar76 = 0;
        if ((int)uVar75 < pFVar33->SlotWeightTracker[iVar35].ArrayNum) {
          uVar76 = ~uVar75 >> 0x1f;
        }
        if ((uVar76 == 0) &&
           (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar28)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        fVar77 = *(float *)(pFVar33->SlotWeightTracker[iVar35].AllocatorInstance.Data +
                           (longlong)(int)uVar75 * 0xc + 4);
      }
      fVar77 = fVar77 * *(float *)(pFVar41 + 0x28);
      dVar8 = (double)fVar77;
      dVar9 = (double)fVar77;
      uVar78 = SUB84(dVar9,0);
      uVar79 = (undefined4)((ulonglong)dVar9 >> 0x20);
      dVar12 = (double)fVar77;
      dVar13 = (double)fVar77;
      uVar80 = SUB84(dVar13,0);
      uVar81 = (undefined4)((ulonglong)dVar13 >> 0x20);
      if ((this->ExtractedRootMotion).bHasRootMotion == false) {
        dVar59 = *(double *)pFVar40;
        dVar69 = *(double *)(pFVar40 + 8);
        auVar53._8_4_ = uVar78;
        auVar53._0_8_ = dVar8;
        auVar53._12_4_ = uVar79;
        dVar4 = *(double *)(pFVar40 + 0x10);
        dVar5 = *(double *)(pFVar40 + 0x18);
        dVar58 = *(double *)pFVar41;
        dVar68 = *(double *)(pFVar41 + 8);
        dVar14 = *(double *)(pFVar41 + 0x10);
        dVar15 = *(double *)(pFVar41 + 0x18);
        dVar16 = *(double *)(pFVar41 + -0x20);
        dVar17 = *(double *)(pFVar41 + -0x18);
        dVar18 = *(double *)(pFVar41 + -0x10);
        dVar19 = *(double *)(pFVar41 + -8);
        (this->ExtractedRootMotion).bHasRootMotion = true;
        auVar65._8_4_ = uVar80;
        auVar65._0_8_ = dVar12;
        auVar65._12_4_ = uVar81;
        (this->ExtractedRootMotion).RootMotionTransform.Rotation.XY.m128d_f64[0] = dVar8 * dVar59;
        (this->ExtractedRootMotion).RootMotionTransform.Rotation.XY.m128d_f64[1] =
             auVar53._8_8_ * dVar69;
        auVar54._8_4_ = uVar78;
        auVar54._0_8_ = dVar8;
        auVar54._12_4_ = uVar79;
        (this->ExtractedRootMotion).RootMotionTransform.Rotation.ZW.m128d_f64[0] = dVar12 * dVar4;
        (this->ExtractedRootMotion).RootMotionTransform.Rotation.ZW.m128d_f64[1] =
             auVar65._8_8_ * dVar5;
        auVar66._8_4_ = uVar80;
        auVar66._0_8_ = dVar12;
        auVar66._12_4_ = uVar81;
        (this->ExtractedRootMotion).RootMotionTransform.Translation.XY.m128d_f64[0] = dVar8 * dVar16
        ;
        (this->ExtractedRootMotion).RootMotionTransform.Translation.XY.m128d_f64[1] =
             auVar54._8_8_ * dVar17;
        (this->ExtractedRootMotion).RootMotionTransform.Translation.ZW.m128d_f64[0] =
             dVar12 * dVar18;
        (this->ExtractedRootMotion).RootMotionTransform.Translation.ZW.m128d_f64[1] =
             auVar66._8_8_ * dVar19;
        auVar7._8_4_ = SUB84(dVar9 * dVar68,0);
        auVar7._0_8_ = dVar8 * dVar58;
        auVar7._12_4_ = (int)((ulonglong)(dVar9 * dVar68) >> 0x20);
        *(undefined1 (*) [16])(this->ExtractedRootMotion).RootMotionTransform.Scale3D.XY.m128d_f64 =
             auVar7;
        auVar11._8_4_ = SUB84(dVar13 * dVar15,0);
        auVar11._0_8_ = dVar12 * dVar14;
        auVar11._12_4_ = (int)((ulonglong)(dVar13 * dVar15) >> 0x20);
        *(undefined1 (*) [16])(this->ExtractedRootMotion).RootMotionTransform.Scale3D.ZW.m128d_f64 =
             auVar11;
        uVar25 = FRootMotionMovementParams::RootMotionScale.field0_0x0._s_0.Z;
        uVar24 = FRootMotionMovementParams::RootMotionScale.field0_0x0._s_0.Y;
        (this->ExtractedRootMotion).RootMotionTransform.Scale3D.XY.m128d_f64[0] =
             FRootMotionMovementParams::RootMotionScale.field0_0x0._s_0.X;
        (this->ExtractedRootMotion).RootMotionTransform.Scale3D.XY.m128d_f64[1] = (double)uVar24;
        (this->ExtractedRootMotion).RootMotionTransform.Scale3D.ZW.m128d_f64[0] = (double)uVar25;
        (this->ExtractedRootMotion).RootMotionTransform.Scale3D.ZW.m128d_f64[1] = 0.0;
      }
      else {
        dVar59 = dVar8 * *(double *)pFVar40;
        dVar69 = dVar9 * *(double *)(pFVar40 + 8);
        dVar4 = dVar12 * *(double *)(pFVar40 + 0x10);
        dVar5 = dVar13 * *(double *)(pFVar40 + 0x18);
        auVar49._8_4_ = SUB84(dVar69,0);
        auVar49._0_8_ = dVar59;
        auVar49._12_4_ = (int)((ulonglong)dVar69 >> 0x20);
        auVar62._8_4_ = SUB84(dVar5,0);
        auVar62._0_8_ = dVar4;
        auVar62._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
        dVar58 = dVar4 * (this->ExtractedRootMotion).RootMotionTransform.Rotation.ZW.m128d_f64[0] +
                 dVar59 * (this->ExtractedRootMotion).RootMotionTransform.Rotation.XY.m128d_f64[0];
        dVar68 = auVar62._8_8_ *
                 (this->ExtractedRootMotion).RootMotionTransform.Rotation.ZW.m128d_f64[1] +
                 auVar49._8_8_ *
                 (this->ExtractedRootMotion).RootMotionTransform.Rotation.XY.m128d_f64[1];
        auVar50._8_4_ = SUB84(dVar68,0);
        auVar50._0_8_ = dVar58;
        auVar50._12_4_ = (int)((ulonglong)dVar68 >> 0x20);
        uVar36 = -(ulonglong)(0.0 <= auVar50._8_8_ + dVar58);
        uVar42 = -(ulonglong)(0.0 <= dVar58 + dVar68);
        uVar75 = (uint)(uVar36 >> 0x20);
        uVar76 = (uint)(uVar42 >> 0x20);
        auVar72._0_4_ = ~(uint)uVar36 & SUB84(0.0 - dVar59,0);
        auVar72._4_4_ = ~uVar75 & (uint)((ulonglong)(0.0 - dVar59) >> 0x20);
        auVar72._8_4_ = ~(uint)uVar42 & SUB84(0.0 - dVar69,0);
        auVar72._12_4_ = ~uVar76 & (uint)((ulonglong)(0.0 - dVar69) >> 0x20);
        auVar63._0_8_ = uVar36 & (ulonglong)dVar59;
        auVar63._8_4_ = (undefined4)((ulonglong)dVar69 & uVar42);
        auVar63._12_4_ = (undefined4)(((ulonglong)dVar69 & uVar42) >> 0x20);
        dVar59 = (this->ExtractedRootMotion).RootMotionTransform.Rotation.XY.m128d_f64[1];
        auVar51._0_4_ = ~(uint)uVar36 & SUB84(0.0 - dVar4,0);
        auVar51._4_4_ = ~uVar75 & (uint)((ulonglong)(0.0 - dVar4) >> 0x20);
        auVar51._8_4_ = ~(uint)uVar42 & SUB84(0.0 - dVar5,0);
        auVar51._12_4_ = ~uVar76 & (uint)((ulonglong)(0.0 - dVar5) >> 0x20);
        auVar64._8_4_ = uVar80;
        auVar64._0_8_ = dVar12;
        auVar64._12_4_ = uVar81;
        (this->ExtractedRootMotion).RootMotionTransform.Rotation.XY.m128d_f64[0] =
             SUB168(auVar72 | auVar63,0) +
             (this->ExtractedRootMotion).RootMotionTransform.Rotation.XY.m128d_f64[0];
        (this->ExtractedRootMotion).RootMotionTransform.Rotation.XY.m128d_f64[1] =
             SUB168(auVar72 | auVar63,8) + dVar59;
        auVar73._0_8_ = uVar36 & (ulonglong)dVar4;
        auVar73._8_4_ = (undefined4)(uVar42 & (ulonglong)dVar5);
        auVar73._12_4_ = (undefined4)((uVar42 & (ulonglong)dVar5) >> 0x20);
        dVar59 = (this->ExtractedRootMotion).RootMotionTransform.Rotation.ZW.m128d_f64[1];
        (this->ExtractedRootMotion).RootMotionTransform.Rotation.ZW.m128d_f64[0] =
             SUB168(auVar51 | auVar73,0) +
             (this->ExtractedRootMotion).RootMotionTransform.Rotation.ZW.m128d_f64[0];
        (this->ExtractedRootMotion).RootMotionTransform.Rotation.ZW.m128d_f64[1] =
             SUB168(auVar51 | auVar73,8) + dVar59;
        dVar69 = *(double *)(pFVar41 + -0x10);
        dVar4 = *(double *)(pFVar41 + -8);
        auVar52._8_4_ = uVar78;
        auVar52._0_8_ = dVar8;
        auVar52._12_4_ = uVar79;
        dVar5 = *(double *)(pFVar41 + -0x18);
        dVar59 = (this->ExtractedRootMotion).RootMotionTransform.Translation.XY.m128d_f64[1];
        (this->ExtractedRootMotion).RootMotionTransform.Translation.XY.m128d_f64[0] =
             dVar8 * *(double *)(pFVar41 + -0x20) +
             (this->ExtractedRootMotion).RootMotionTransform.Translation.XY.m128d_f64[0];
        (this->ExtractedRootMotion).RootMotionTransform.Translation.XY.m128d_f64[1] =
             auVar52._8_8_ * dVar5 + dVar59;
        dVar59 = (this->ExtractedRootMotion).RootMotionTransform.Translation.ZW.m128d_f64[1];
        (this->ExtractedRootMotion).RootMotionTransform.Translation.ZW.m128d_f64[0] =
             dVar12 * dVar69 +
             (this->ExtractedRootMotion).RootMotionTransform.Translation.ZW.m128d_f64[0];
        (this->ExtractedRootMotion).RootMotionTransform.Translation.ZW.m128d_f64[1] =
             auVar64._8_8_ * dVar4 + dVar59;
        dVar59 = *(double *)(pFVar41 + 0x10);
        dVar69 = *(double *)(pFVar41 + 0x18);
        dVar9 = dVar9 * *(double *)(pFVar41 + 8) +
                (this->ExtractedRootMotion).RootMotionTransform.Scale3D.XY.m128d_f64[1];
        auVar6._8_4_ = SUB84(dVar9,0);
        auVar6._0_8_ = dVar8 * *(double *)pFVar41 +
                       (this->ExtractedRootMotion).RootMotionTransform.Scale3D.XY.m128d_f64[0];
        auVar6._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
        *(undefined1 (*) [16])(this->ExtractedRootMotion).RootMotionTransform.Scale3D.XY.m128d_f64 =
             auVar6;
        dVar8 = dVar13 * dVar69 +
                (this->ExtractedRootMotion).RootMotionTransform.Scale3D.ZW.m128d_f64[1];
        auVar10._8_4_ = SUB84(dVar8,0);
        auVar10._0_8_ =
             dVar12 * dVar59 +
             (this->ExtractedRootMotion).RootMotionTransform.Scale3D.ZW.m128d_f64[0];
        auVar10._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
        *(undefined1 (*) [16])(this->ExtractedRootMotion).RootMotionTransform.Scale3D.ZW.m128d_f64 =
             auVar10;
        uVar25 = FRootMotionMovementParams::RootMotionScale.field0_0x0._s_0.Z;
        uVar24 = FRootMotionMovementParams::RootMotionScale.field0_0x0._s_0.Y;
        (this->ExtractedRootMotion).RootMotionTransform.Scale3D.XY.m128d_f64[0] =
             FRootMotionMovementParams::RootMotionScale.field0_0x0._s_0.X;
        (this->ExtractedRootMotion).RootMotionTransform.Scale3D.XY.m128d_f64[1] = (double)uVar24;
        (this->ExtractedRootMotion).RootMotionTransform.Scale3D.ZW.m128d_f64[0] = (double)uVar25;
        (this->ExtractedRootMotion).RootMotionTransform.Scale3D.ZW.m128d_f64[1] = 0.0;
        fVar77 = fVar77 + (this->ExtractedRootMotion).BlendWeight;
      }
      uVar36 = (ulonglong)local_230;
      pFVar40 = pFVar40 + 0x70;
      pFVar41 = pFVar41 + 0x70;
      (this->ExtractedRootMotion).BlendWeight = fVar77;
    }
    bVar20 = bVar21;
    bVar22 = bVar23;
    if ((this->ExtractedRootMotion).bHasRootMotion != false) {
      fVar77 = __real_3f800000 - (this->ExtractedRootMotion).BlendWeight;
      auVar47 = ZEXT416((uint)fVar77);
      if (fVar77 <= 0.0) {
        auVar47 = ZEXT816(0) << 0x20;
      }
      if (__real_38d1b717 < auVar47._0_4_) {
        local_1b8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
        local_1b8.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
        local_1b8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
        local_1b8.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
        local_1b8.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0]
        ;
        local_1b8.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1]
        ;
        local_1b8.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2]
        ;
        local_1b8.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3]
        ;
        local_1b8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
        local_1b8.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
        local_1b8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
        local_1b8.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
        FRootMotionMovementParams::AccumulateWithBlend
                  (&this->ExtractedRootMotion,&local_1b8,auVar47._0_4_);
      }
      dVar8 = (this->ExtractedRootMotion).RootMotionTransform.Rotation.XY.m128d_f64[0];
      dVar9 = (this->ExtractedRootMotion).RootMotionTransform.Rotation.XY.m128d_f64[1];
      dVar12 = (this->ExtractedRootMotion).RootMotionTransform.Rotation.ZW.m128d_f64[0];
      dVar13 = (this->ExtractedRootMotion).RootMotionTransform.Rotation.ZW.m128d_f64[1];
      dVar59 = dVar12 * dVar12 + dVar8 * dVar8;
      dVar69 = dVar13 * dVar13 + dVar9 * dVar9;
      auVar55._8_4_ = SUB84(dVar69,0);
      auVar55._0_8_ = dVar59;
      auVar55._12_4_ = (int)((ulonglong)dVar69 >> 0x20);
      auVar56._0_8_ = auVar55._8_8_ + dVar59;
      auVar56._8_8_ = dVar59 + dVar69;
      auVar61 = sqrtpd(auVar47,auVar56);
      uVar42 = -(ulonglong)
                (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[0] <= auVar56._0_8_)
      ;
      uVar44 = -(ulonglong)
                (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[1] <= auVar56._8_8_)
      ;
      uVar43 = -(ulonglong)
                (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[0] <= auVar56._0_8_)
      ;
      uVar45 = -(ulonglong)
                (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[1] <= auVar56._8_8_)
      ;
      auVar47 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar61);
      auVar61 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar61);
      auVar57._0_8_ = uVar43 & (ulonglong)(auVar47._0_8_ * dVar8);
      uVar36 = uVar45 & (ulonglong)(auVar47._8_8_ * dVar9);
      auVar57._8_4_ = (undefined4)uVar36;
      auVar57._12_4_ = (undefined4)(uVar36 >> 0x20);
      auVar74._0_8_ = uVar42 & (ulonglong)(auVar61._0_8_ * dVar12);
      uVar36 = uVar44 & (ulonglong)(auVar61._8_8_ * dVar13);
      auVar74._8_4_ = (undefined4)uVar36;
      auVar74._12_4_ = (undefined4)(uVar36 >> 0x20);
      auVar3._4_4_ = ~(uint)(uVar43 >> 0x20) &
                     GlobalVectorConstants::Double0001.XY.m128d_f64[0]._4_4_;
      auVar3._0_4_ = ~(uint)uVar43 & GlobalVectorConstants::Double0001.XY.m128d_f64[0]._0_4_;
      auVar3._8_4_ = ~(uint)uVar45 & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._0_4_;
      auVar3._12_4_ =
           ~(uint)(uVar45 >> 0x20) & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._4_4_;
      auVar67._0_4_ = ~(uint)uVar42 & GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._0_4_;
      auVar67._4_4_ =
           ~(uint)(uVar42 >> 0x20) & GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._4_4_;
      auVar67._8_4_ = ~(uint)uVar44 & GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._0_4_;
      auVar67._12_4_ =
           ~(uint)(uVar44 >> 0x20) & GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._4_4_;
      *(undefined1 (*) [16])(this->ExtractedRootMotion).RootMotionTransform.Rotation.XY.m128d_f64 =
           auVar57 | auVar3;
      *(undefined1 (*) [16])(this->ExtractedRootMotion).RootMotionTransform.Rotation.ZW.m128d_f64 =
           auVar74 | auVar67;
    }
  }
  if (bVar22) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar20) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar26) {
    FThreadStats::AddMessage(FVar39,CycleScopeEnd);
  }
  this->bPostUpdatingAnimation = bVar27;
  FMemScope::~FMemScope(&local_1e0);
  FLLMScope::~FLLMScope(&local_234);
  return;
}

// PreEvaluateAnimation @ 147470d30

void __thiscall UAnimInstance::PreEvaluateAnimation(UAnimInstance *this)

{
  FAnimInstanceProxy *pFVar1;
  
  pFVar1 = GetProxyOnGameThread<FAnimInstanceProxy>(this);
                    /* WARNING: Could not recover jumptable at 0x000147470d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)pFVar1 + 0x38))(pFVar1,this,*(code **)(*(longlong *)pFVar1 + 0x38));
  return;
}

// PreUpdateAnimation @ 1474712b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UAnimInstance::PreUpdateAnimation(UAnimInstance *this,float param_1)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  FName *pFVar5;
  FThreadSafeStaticStat<FStat_STAT_PreUpdateAnimation> FVar6;
  FAnimInstanceProxy *pFVar7;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar8;
  FNameEntryId FVar9;
  FName FVar10;
  FNameEntryId FVar11;
  FLLMScope local_res8 [2];
  LARGE_INTEGER local_res18;
  FMemScope local_res20;
  FStatMessage local_58;
  FName local_48;
  
  FLLMScope::FLLMScope(local_res8,Animation,false,None,Default,true);
  FMemScope::FMemScope(&local_res20,Animation,true);
  FVar11.Value = 0;
  FVar6 = StatPtr_STAT_PreUpdateAnimation;
  if (StatPtr_STAT_PreUpdateAnimation == (FThreadSafeStaticStat<FStat_STAT_PreUpdateAnimation>)0x0)
  {
    pFVar5 = ::FName::FName((FName *)&local_58,"STAT_PreUpdateAnimation");
    FVar6 = (FThreadSafeStaticStat<FStat_STAT_PreUpdateAnimation>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_PreUpdateAnimation,*pFVar5,
                       L"PreUpdateAnimation","STATGROUP_Anim","STATCAT_Advanced",L"Anim",true,true,
                       ST_int64,true,false,MCR_Invalid);
  }
  FVar10 = *(FName *)FVar6;
  bVar2 = false;
  bVar4 = false;
  local_48.ComparisonIndex.Value = 0;
  local_48.Number = 0;
  FVar9 = FVar10.ComparisonIndex.Value;
  uVar8 = FVar10.Number;
  if ((FVar9.Value != 0) || (uVar8 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res18.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res18.s,(char *)*(FName *)((longlong)FVar6 + 0x10));
      bVar2 = false;
      bVar4 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res18.s.LowPart = FVar9.Value;
        local_res18.s.HighPart = uVar8;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res18.s,(wchar_t *)*(FName *)((longlong)FVar6 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimInstance.cpp"
                   ,0x2af);
        bVar2 = true;
        bVar4 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res18.s.LowPart = FVar9.Value;
      local_res18.s.HighPart = uVar8;
      local_48 = FVar10;
      FThreadStats::AddMessage(FVar10,CycleScopeStart);
      bVar3 = true;
      FVar11.Value = local_48.ComparisonIndex.Value;
      goto LAB_147471447;
    }
  }
  bVar3 = false;
  FVar10 = local_48;
LAB_147471447:
  this->bNeedsUpdate = '\x01';
  ClearQueuedAnimEvents(this,true);
  (this->RootMotionBlendQueue).ArrayNum = 0;
  if ((this->RootMotionBlendQueue).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x70,0x10,0,&(this->RootMotionBlendQueue).AllocatorInstance,0,
               &(this->RootMotionBlendQueue).ArrayMax);
  }
  pFVar7 = GetProxyOnGameThread<FAnimInstanceProxy>(this);
  (**(code **)(*(longlong *)pFVar7 + 0x18))(pFVar7,this,param_1);
  if (bVar4) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar3) && (FVar10 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_58.NameAndInfo.Number = FVar10.Number & 0xffff6fff | 0x6000;
      local_58.NameAndInfo.Index.Value = FVar11.Value;
      QueryPerformanceCounter(&local_res18);
      local_58.StatData.Pad[4] = '\0';
      local_58.StatData.Pad[5] = '\0';
      local_58.StatData.Pad[6] = '\0';
      local_58.StatData.Pad[7] = '\0';
      local_58.StatData.Pad[0] = local_res18.s.LowPart._0_1_;
      local_58.StatData.Pad[1] = local_res18.s.LowPart._1_1_;
      local_58.StatData.Pad[2] = local_res18.s.LowPart._2_1_;
      local_58.StatData.Pad[3] = local_res18.s.LowPart._3_1_;
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
  FMemScope::~FMemScope(&local_res20);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// QueryAndMarkTransitionEvent @ 147471790

bool __thiscall
UAnimInstance::QueryAndMarkTransitionEvent
          (UAnimInstance *this,int param_1,int param_2,FName param_3)

{
  int iVar1;
  FProperty *this_00;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  FAnimInstanceProxy *pFVar6;
  longlong *plVar7;
  UScriptStruct *pUVar8;
  FAnimNode_StateMachine *this_01;
  uint uVar9;
  uint uVar10;
  FName local_res20;
  
  local_res20 = param_3;
  pFVar6 = GetProxyOnAnyThread<FAnimInstanceProxy>(this);
  if (pFVar6->AnimClassInterface != (IAnimClassInterface *)0x0) {
    plVar7 = (longlong *)(**(code **)((longlong)*pFVar6->AnimClassInterface + 0x20))();
    uVar10 = ~param_1 + (int)plVar7[1];
    uVar9 = 0;
    if ((int)uVar10 < (int)plVar7[1]) {
      uVar9 = ~uVar10 >> 0x1f;
    }
    if ((uVar9 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    this_00 = *(FProperty **)(*plVar7 + (longlong)(int)uVar10 * 8);
    if (this_00 != (FProperty *)0x0) {
      lVar2 = this_00[1]._padding_;
      pUVar8 = FAnimNode_StateMachine::StaticStruct();
      if (pUVar8 != (UScriptStruct *)0x0) {
        iVar1 = (int)pUVar8->_padding_;
        if ((*(int *)(lVar2 + 0x38) < iVar1) ||
           ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
            &pUVar8->_padding_)) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        if ((bVar4) &&
           (this_01 = FProperty::ContainerUObjectPtrToValuePtrInternal
                                (this_00,pFVar6->AnimInstanceObject,0),
           this_01 != (FAnimNode_StateMachine *)0x0)) {
          bVar4 = FAnimNode_StateMachine::QueryAndMarkTransitionEvent(this_01,param_2,&local_res20);
          return bVar4;
        }
      }
    }
  }
  return false;
}

// QueryTransitionEvent @ 147471900

bool __thiscall
UAnimInstance::QueryTransitionEvent(UAnimInstance *this,int param_1,int param_2,FName param_3)

{
  bool bVar1;
  FAnimInstanceProxy *this_00;
  FAnimNode_StateMachine *this_01;
  FName local_res20;
  
  local_res20 = param_3;
  this_00 = GetProxyOnAnyThread<FAnimInstanceProxy>(this);
  this_01 = FAnimInstanceProxy::GetStateMachineInstance(this_00,param_1);
  if (this_01 != (FAnimNode_StateMachine *)0x0) {
    bVar1 = FAnimNode_StateMachine::QueryTransitionEvent(this_01,param_2,&local_res20);
    return bVar1;
  }
  return false;
}

// QueueMontageBlendedInEvent @ 147471960

void __thiscall
UAnimInstance::QueueMontageBlendedInEvent(UAnimInstance *this,FQueuedMontageBlendedInEvent *param_1)

{
  int *piVar1;
  TArray<FQueuedMontageBlendedInEvent,TSizedDefaultAllocator<32>_> *pTVar2;
  FQueuedMontageBlendedInEvent *pFVar3;
  UAnimMontage *pUVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  FScriptContainerElement *pFVar8;
  
  if (this->bQueueMontageEvents == 0) {
    TriggerMontageBlendedInEvent(this,param_1);
    return;
  }
  pTVar2 = &this->QueuedMontageBlendedInEvents;
  pFVar3 = (FQueuedMontageBlendedInEvent *)(pTVar2->AllocatorInstance).Data;
  if ((pFVar3 <= param_1) && (param_1 < pFVar3 + (this->QueuedMontageBlendedInEvents).ArrayMax)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  iVar7 = (this->QueuedMontageBlendedInEvents).ArrayNum;
  piVar1 = &(this->QueuedMontageBlendedInEvents).ArrayMax;
  if (iVar7 == *piVar1) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x820,&pTVar2->AllocatorInstance,piVar1);
  }
  (this->QueuedMontageBlendedInEvents).ArrayNum = iVar7 + 1;
  pFVar8 = (pTVar2->AllocatorInstance).Data + (longlong)iVar7 * 0x20;
  pUVar4 = (param_1->Montage).field0_0x0.DebugPtr;
  *(UAnimMontage **)pFVar8 = pUVar4;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UAnimMontage *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar4);
  }
  *(undefined8 *)(pFVar8 + 8) = 0;
  *(undefined8 *)(pFVar8 + 0x10) = 0;
  *(undefined4 *)(pFVar8 + 0x18) = 0;
  TDelegate<void___cdecl(UAnimMontage_*),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<void___cdecl(UAnimMontage_*),FDefaultDelegateUserPolicy> *)(pFVar8 + 8),
             &param_1->Delegate);
  return;
}

// QueueMontageBlendingOutEvent @ 147471a60

void __thiscall
UAnimInstance::QueueMontageBlendingOutEvent
          (UAnimInstance *this,FQueuedMontageBlendingOutEvent *param_1)

{
  int *piVar1;
  TArray<FQueuedMontageBlendingOutEvent,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  FQueuedMontageBlendingOutEvent *pFVar4;
  UAnimMontage *pUVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  
  if (this->bQueueMontageEvents == 0) {
    TriggerMontageBlendingOutEvent(this,param_1);
    return;
  }
  pTVar2 = &this->QueuedMontageBlendingOutEvents;
  pFVar4 = (FQueuedMontageBlendingOutEvent *)(pTVar2->AllocatorInstance).Data;
  if ((pFVar4 <= param_1) && (param_1 < pFVar4 + (this->QueuedMontageBlendingOutEvents).ArrayMax)) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  iVar8 = (this->QueuedMontageBlendingOutEvents).ArrayNum;
  piVar1 = &(this->QueuedMontageBlendingOutEvents).ArrayMax;
  if (iVar8 == *piVar1) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x828,&pTVar2->AllocatorInstance,piVar1);
  }
  (this->QueuedMontageBlendingOutEvents).ArrayNum = iVar8 + 1;
  pFVar3 = (pTVar2->AllocatorInstance).Data + (longlong)iVar8 * 0x28;
  pUVar5 = (param_1->Montage).field0_0x0.DebugPtr;
  *(UAnimMontage **)pFVar3 = pUVar5;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UAnimMontage *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar5);
  }
  pFVar3[8] = (FScriptContainerElement)param_1->bInterrupted;
  *(undefined8 *)(pFVar3 + 0x10) = 0;
  *(undefined8 *)(pFVar3 + 0x18) = 0;
  *(undefined4 *)(pFVar3 + 0x20) = 0;
  TDelegate<void___cdecl(UAnimMontage_*,bool),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<void___cdecl(UAnimMontage_*,bool),FDefaultDelegateUserPolicy> *)
             (pFVar3 + 0x10),&param_1->Delegate);
  return;
}

// QueueMontageEndedEvent @ 147471b60

void __thiscall
UAnimInstance::QueueMontageEndedEvent(UAnimInstance *this,FQueuedMontageEndedEvent *param_1)

{
  int *piVar1;
  TArray<FQueuedMontageEndedEvent,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  FQueuedMontageEndedEvent *pFVar4;
  UAnimMontage *pUVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  
  if (this->bQueueMontageEvents == 0) {
    TriggerMontageEndedEvent(this,param_1);
    return;
  }
  pTVar2 = &this->QueuedMontageEndedEvents;
  pFVar4 = (FQueuedMontageEndedEvent *)(pTVar2->AllocatorInstance).Data;
  if ((pFVar4 <= param_1) && (param_1 < pFVar4 + (this->QueuedMontageEndedEvents).ArrayMax)) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  iVar8 = (this->QueuedMontageEndedEvents).ArrayNum;
  piVar1 = &(this->QueuedMontageEndedEvents).ArrayMax;
  if (iVar8 == *piVar1) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x828,&pTVar2->AllocatorInstance,piVar1);
  }
  (this->QueuedMontageEndedEvents).ArrayNum = iVar8 + 1;
  pFVar3 = (pTVar2->AllocatorInstance).Data + (longlong)iVar8 * 0x28;
  pUVar5 = (param_1->Montage).field0_0x0.DebugPtr;
  *(UAnimMontage **)pFVar3 = pUVar5;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UAnimMontage *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar5);
  }
  *(int *)(pFVar3 + 8) = param_1->MontageInstanceID;
  pFVar3[0xc] = (FScriptContainerElement)param_1->bInterrupted;
  *(undefined8 *)(pFVar3 + 0x10) = 0;
  *(undefined8 *)(pFVar3 + 0x18) = 0;
  *(undefined4 *)(pFVar3 + 0x20) = 0;
  TDelegate<void___cdecl(UAnimMontage_*,bool),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<void___cdecl(UAnimMontage_*,bool),FDefaultDelegateUserPolicy> *)
             (pFVar3 + 0x10),&param_1->Delegate);
  return;
}

// QueueMontageSectionChangedEvent @ 147471c70

void __thiscall
UAnimInstance::QueueMontageSectionChangedEvent
          (UAnimInstance *this,FQueuedMontageSectionChangedEvent *param_1)

{
  int *piVar1;
  TArray<FQueuedMontageSectionChangedEvent,TSizedDefaultAllocator<32>_> *pTVar2;
  FQueuedMontageSectionChangedEvent *pFVar3;
  UAnimMontage *pUVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  FScriptContainerElement *pFVar8;
  
  if (this->bQueueMontageEvents == 0) {
    TriggerMontageSectionChangedEvent(this,param_1);
    return;
  }
  pTVar2 = &this->QueuedMontageSectionChangedEvents;
  pFVar3 = (FQueuedMontageSectionChangedEvent *)(pTVar2->AllocatorInstance).Data;
  if ((pFVar3 <= param_1) && (param_1 < pFVar3 + (this->QueuedMontageSectionChangedEvents).ArrayMax)
     ) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  iVar7 = (this->QueuedMontageSectionChangedEvents).ArrayNum;
  piVar1 = &(this->QueuedMontageSectionChangedEvents).ArrayMax;
  if (iVar7 == *piVar1) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&pTVar2->AllocatorInstance,piVar1);
  }
  (this->QueuedMontageSectionChangedEvents).ArrayNum = iVar7 + 1;
  pFVar8 = (pTVar2->AllocatorInstance).Data + (longlong)iVar7 * 0x30;
  pUVar4 = (param_1->Montage).field0_0x0.DebugPtr;
  *(UAnimMontage **)pFVar8 = pUVar4;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UAnimMontage *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar4);
  }
  *(int *)(pFVar8 + 8) = param_1->MontageInstanceID;
  *(FName *)(pFVar8 + 0xc) = param_1->SectionName;
  pFVar8[0x14] = (FScriptContainerElement)param_1->bLooped;
  *(undefined8 *)(pFVar8 + 0x18) = 0;
  *(undefined8 *)(pFVar8 + 0x20) = 0;
  *(undefined4 *)(pFVar8 + 0x28) = 0;
  TDelegate<void___cdecl(UAnimMontage_*,FName,bool),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<void___cdecl(UAnimMontage_*,FName,bool),FDefaultDelegateUserPolicy> *)
             (pFVar8 + 0x18),&param_1->Delegate);
  return;
}

// QueueRootMotionBlend @ 147471d90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UAnimInstance::QueueRootMotionBlend
          (UAnimInstance *this,TTransform<double> *param_1,FName *param_2,float param_3)

{
  int *piVar1;
  TArray<UAnimInstance::FQueuedRootMotionBlend,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  FName FVar5;
  bool bVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_d8 [32];
  double *local_b8;
  FScriptContainerElement *local_b0;
  longlong local_a8;
  longlong local_a0;
  undefined8 local_98;
  double local_88;
  double dStack_80;
  double local_78;
  double dStack_70;
  double local_68;
  double dStack_60;
  double local_58;
  double dStack_50;
  double local_48;
  double dStack_40;
  double local_38;
  double dStack_30;
  FName local_28;
  FNameEntryId FStack_20;
  uint uStack_1c;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_d8;
  local_88 = (param_1->Rotation).XY.m128d_f64[0];
  dStack_80 = (param_1->Rotation).XY.m128d_f64[1];
  pTVar2 = &this->RootMotionBlendQueue;
  local_78 = (param_1->Rotation).ZW.m128d_f64[0];
  dStack_70 = (param_1->Rotation).ZW.m128d_f64[1];
  local_28 = *param_2;
  local_68 = (param_1->Translation).XY.m128d_f64[0];
  dStack_60 = (param_1->Translation).XY.m128d_f64[1];
  local_58 = (param_1->Translation).ZW.m128d_f64[0];
  dStack_50 = (param_1->Translation).ZW.m128d_f64[1];
  local_48 = (param_1->Scale3D).XY.m128d_f64[0];
  dStack_40 = (param_1->Scale3D).XY.m128d_f64[1];
  local_38 = (param_1->Scale3D).ZW.m128d_f64[0];
  dStack_30 = (param_1->Scale3D).ZW.m128d_f64[1];
  pFVar3 = (pTVar2->AllocatorInstance).Data;
  FStack_20.Value = (uint)param_3;
  if ((pFVar3 <= (FScriptContainerElement *)&local_88) &&
     (lVar8 = (longlong)(this->RootMotionBlendQueue).ArrayMax,
     (FScriptContainerElement *)&local_88 < pFVar3 + lVar8 * 0x70)) {
    local_a0 = (longlong)(this->RootMotionBlendQueue).ArrayNum;
    local_98 = 0x70;
    local_b8 = &local_88;
    local_b0 = pFVar3;
    local_a8 = lVar8;
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar7 = (this->RootMotionBlendQueue).ArrayNum;
  piVar1 = &(this->RootMotionBlendQueue).ArrayMax;
  if (iVar7 == *piVar1) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x1070,&pTVar2->AllocatorInstance,piVar1);
  }
  (this->RootMotionBlendQueue).ArrayNum = iVar7 + 1;
  lVar8 = (longlong)iVar7 * 0x70;
  pFVar3 = (pTVar2->AllocatorInstance).Data;
  *(double *)(pFVar3 + lVar8) = local_88;
  *(double *)(pFVar3 + lVar8 + 8) = dStack_80;
  *(double *)(pFVar3 + lVar8 + 0x10) = local_78;
  *(double *)(pFVar3 + lVar8 + 0x10 + 8) = dStack_70;
  *(double *)(pFVar3 + lVar8 + 0x20) = local_68;
  *(double *)(pFVar3 + lVar8 + 0x20 + 8) = dStack_60;
  *(double *)(pFVar3 + lVar8 + 0x30) = local_58;
  *(double *)(pFVar3 + lVar8 + 0x30 + 8) = dStack_50;
  *(double *)(pFVar3 + lVar8 + 0x40) = local_48;
  *(double *)(pFVar3 + lVar8 + 0x40 + 8) = dStack_40;
  *(double *)(pFVar3 + lVar8 + 0x50) = local_38;
  *(double *)(pFVar3 + lVar8 + 0x50 + 8) = dStack_30;
  FVar5.Number = uStack_1c;
  FVar5.ComparisonIndex.Value = FStack_20.Value;
  *(FName *)(pFVar3 + lVar8 + 0x60) = local_28;
  ((FName *)(pFVar3 + lVar8 + 0x60))[1] = FVar5;
  return;
}

// RecalcRequiredBones @ 1474721d0

void __thiscall UAnimInstance::RecalcRequiredBones(UAnimInstance *this)

{
  code *pcVar1;
  bool bVar2;
  USkeletalMeshComponent *this_00;
  USkeletalMesh *pUVar3;
  longlong lVar4;
  FAnimInstanceProxy *this_01;
  FLLMScope local_res10 [2];
  FMemScope local_res18 [2];
  
  FLLMScope::FLLMScope(local_res10,Animation,false,None,Default,true);
  FMemScope::FMemScope(local_res18,Animation,true);
  this_00 = GetSkelMeshComponent(this);
  if (this_00 == (USkeletalMeshComponent *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("SkelMeshComp",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimInstance.cpp"
                       ,0x595,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  pUVar3 = USkeletalMeshComponent::GetSkeletalMeshAsset(this_00);
  if (pUVar3 == (USkeletalMesh *)0x0) {
LAB_147472282:
    if ((this->CurrentSkeleton).field0_0x0.DebugPtr == (USkeleton *)0x0) goto LAB_1474722a0;
    this_01 = GetProxyOnGameThread<FAnimInstanceProxy>(this);
    pUVar3 = (USkeletalMesh *)(this->CurrentSkeleton).field0_0x0.DebugPtr;
  }
  else {
    pUVar3 = USkeletalMeshComponent::GetSkeletalMeshAsset(this_00);
    lVar4 = (**(code **)(pUVar3->_padding_ + 0x408))(pUVar3);
    if (lVar4 == 0) goto LAB_147472282;
    this_01 = GetProxyOnGameThread<FAnimInstanceProxy>(this);
    pUVar3 = USkeletalMeshComponent::GetSkeletalMeshAsset(this_00);
  }
  FAnimInstanceProxy::RecalcRequiredBones(this_01,this_00,(UObject *)pUVar3);
LAB_1474722a0:
  FMemScope::~FMemScope(local_res18);
  FLLMScope::~FLLMScope(local_res10);
  return;
}

// RecalcRequiredCurves @ 1474723f0

void __thiscall
UAnimInstance::RecalcRequiredCurves(UAnimInstance *this,FCurveEvaluationOption *param_1)

{
  code *pcVar1;
  bool bVar2;
  FAnimInstanceProxy *pFVar3;
  FCurveFilterSettings local_18;
  
  pFVar3 = GetProxyOnGameThread<FAnimInstanceProxy>(this);
  FStatsHierarchical::BeginMeasurement("FAnimInstanceProxy::RecalcRequiredCurves");
  if ((pFVar3->RequiredBones).Object == (FBoneContainer *)0x0) {
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
  local_18.FilterCurves = param_1->DisallowedList;
  local_18.FilterMode = param_1->bAllowCurveEvaluation == false;
  local_18.LODIndex = param_1->LODIndex;
  FBoneContainer::CacheRequiredAnimCurves((pFVar3->RequiredBones).Object,&local_18);
  pFVar3->bBoneCachesInvalidated = '\x01';
  FStatsHierarchical::EndMeasurement();
  return;
}

// RecalcRequiredCurves @ 147472490

void __thiscall
UAnimInstance::RecalcRequiredCurves(UAnimInstance *this,FCurveFilterSettings *param_1)

{
  code *pcVar1;
  bool bVar2;
  FAnimInstanceProxy *pFVar3;
  
  pFVar3 = GetProxyOnGameThread<FAnimInstanceProxy>(this);
  FStatsHierarchical::BeginMeasurement("FAnimInstanceProxy::RecalcRequiredCurves");
  if ((pFVar3->RequiredBones).Object == (FBoneContainer *)0x0) {
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
  FBoneContainer::CacheRequiredAnimCurves((pFVar3->RequiredBones).Object,param_1);
  pFVar3->bBoneCachesInvalidated = '\x01';
  FStatsHierarchical::EndMeasurement();
  return;
}

// RecordMachineWeight @ 1474725b0

void __thiscall UAnimInstance::RecordMachineWeight(UAnimInstance *this,int param_1,float param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FAnimInstanceProxy *pFVar5;
  
  pFVar5 = GetProxyOnAnyThread<FAnimInstanceProxy>(this);
  iVar1 = pFVar5->BufferWriteIndex;
  uVar4 = 0;
  if (param_1 < pFVar5->MachineWeightArrays[iVar1].ArrayNum) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  *(float *)(pFVar5->MachineWeightArrays[iVar1].AllocatorInstance.Data + (longlong)param_1 * 4) =
       param_2;
  return;
}

// RecordStateWeight @ 147472780

void __thiscall
UAnimInstance::RecordStateWeight
          (UAnimInstance *this,int param_1,int param_2,float param_3,float param_4)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FAnimInstanceProxy *pFVar4;
  int *piVar5;
  int *piVar6;
  uint uVar7;
  uint uVar8;
  undefined1 *puVar9;
  
  pFVar4 = GetProxyOnAnyThread<FAnimInstanceProxy>(this);
  if (*(int *)&(pFVar4->StateMachineClassIndexToWeightOffset).field_0x8 !=
      *(int *)&(pFVar4->StateMachineClassIndexToWeightOffset).field_0x34) {
    puVar9 = *(undefined1 **)&(pFVar4->StateMachineClassIndexToWeightOffset).field_0x40;
    if (puVar9 == (undefined1 *)0x0) {
      puVar9 = &(pFVar4->StateMachineClassIndexToWeightOffset).field_0x38;
    }
    iVar3 = *(int *)(puVar9 + (ulonglong)
                              (*(int *)&(pFVar4->StateMachineClassIndexToWeightOffset).field_0x48 -
                               1U & param_1) * 4);
    if (iVar3 != -1) {
      do {
        piVar6 = (int *)((longlong)iVar3 * 0x10 +
                        *(longlong *)&pFVar4->StateMachineClassIndexToWeightOffset);
        if (*piVar6 == param_1) {
          piVar5 = piVar6 + 1;
          if (piVar6 == (int *)0x0) {
            piVar5 = (int *)0x0;
          }
          if (piVar5 == (int *)0x0) {
            return;
          }
          uVar8 = *piVar5 + param_2;
          iVar3 = pFVar4->BufferWriteIndex;
          uVar7 = 0;
          if ((int)uVar8 < pFVar4->StateWeightArrays[iVar3].ArrayNum) {
            uVar7 = ~uVar8 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar2)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          *(float *)(pFVar4->StateWeightArrays[iVar3].AllocatorInstance.Data +
                    (longlong)(int)uVar8 * 4) = param_3;
          return;
        }
        iVar3 = piVar6[2];
      } while (iVar3 != -1);
    }
  }
  return;
}

// RefreshCurves @ 147472b10

void __thiscall UAnimInstance::RefreshCurves(UAnimInstance *this,USkeletalMeshComponent *param_1)

{
  FAnimInstanceProxy *pFVar1;
  
  if (param_1 != (USkeletalMeshComponent *)0x0) {
    pFVar1 = GetProxyOnGameThread<FAnimInstanceProxy>(this);
    USkeletalMeshComponent::ApplyAnimationCurvesToComponent
              (param_1,pFVar1->AnimationCurves + 1,pFVar1->AnimationCurves + 2);
  }
  return;
}

// RemoveExternalNotifyHandler @ 147474610

void __thiscall
UAnimInstance::RemoveExternalNotifyHandler(UAnimInstance *this,UObject *param_1,FName param_2)

{
  TMulticastDelegateBase<FDefaultDelegateUserPolicy> *this_00;
  
  this_00 = (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
            TMapBase<FName,TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,0>_>
            ::Find((TMapBase<FName,TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,0>_>
                    *)&this->ExternalNotifyHandlers,param_2);
  if (this_00 != (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll(this_00,param_1);
    return;
  }
  return;
}

// RemovePoseSnapshot @ 147474740

void __thiscall UAnimInstance::RemovePoseSnapshot(UAnimInstance *this,FName param_1)

{
  TArray<FPoseSnapshot,TSizedDefaultAllocator<32>_> *this_00;
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  uint uVar4;
  bool bVar5;
  uint uVar6;
  FAnimInstanceProxy *pFVar7;
  FScriptContainerElement *pFVar8;
  
  pFVar7 = GetProxyOnGameThread<FAnimInstanceProxy>(this);
  this_00 = &pFVar7->PoseSnapshots;
  pFVar2 = (this_00->AllocatorInstance).Data;
  iVar1 = (pFVar7->PoseSnapshots).ArrayNum;
  pFVar8 = pFVar2;
  if (pFVar2 != pFVar2 + (longlong)iVar1 * 0x38) {
    while (*(FName *)(pFVar8 + 0x28) != param_1) {
      pFVar8 = pFVar8 + 0x38;
      if (pFVar8 == pFVar2 + (longlong)iVar1 * 0x38) {
        return;
      }
    }
    uVar4 = (uint)(((longlong)pFVar8 - (longlong)pFVar2) / 0x38);
    if (uVar4 != 0xffffffff) {
      uVar6 = 0;
      if ((int)uVar4 < iVar1) {
        uVar6 = ~uVar4 >> 0x1f;
      }
      if (uVar6 == 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      TArray<FPoseSnapshot,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl(this_00,uVar4);
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x38,8,&this_00->AllocatorInstance,(pFVar7->PoseSnapshots).ArrayNum,
                 &(pFVar7->PoseSnapshots).ArrayMax);
    }
  }
  return;
}

// RequestMontageInertialization @ 147474850

void __thiscall
UAnimInstance::RequestMontageInertialization
          (UAnimInstance *this,UAnimMontage *param_1,FInertializationRequest *param_2)

{
  undefined8 uVar1;
  uint uVar2;
  FName FVar3;
  FInertializationRequest *this_00;
  
  if (param_1 != (UAnimMontage *)0x0) {
    FVar3 = UAnimMontage::GetGroupName(param_1);
    uVar1 = *(undefined8 *)FVar3;
    uVar2 = ::GetTypeHash((FNameEntryId)(uint)uVar1);
    this_00 = TMapBase<FName,FInertializationRequest,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FInertializationRequest,0>_>
              ::FindOrAddImpl<FName>
                        ((TMapBase<FName,FInertializationRequest,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FInertializationRequest,0>_>
                          *)&this->SlotGroupInertializationRequestDataMap,
                         uVar2 + (int)((ulonglong)uVar1 >> 0x20),(FName *)FVar3);
    FInertializationRequest::operator=(this_00,param_2);
  }
  return;
}

// RequestMontageInertialization @ 1474748d0

void __thiscall
UAnimInstance::RequestMontageInertialization
          (UAnimInstance *this,UAnimMontage *param_1,float param_2,UBlendProfile *param_3)

{
  undefined8 uVar1;
  uint uVar2;
  FName FVar3;
  FInertializationRequest *this_00;
  FInertializationRequest local_78;
  
  FInertializationRequest::FInertializationRequest(&local_78);
  local_78.Duration = param_2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_3 != (UBlendProfile *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_3);
  }
  local_78.BlendProfile.field0_0x0 = (TObjectPtr<UBlendProfile_const_>_u_0)param_3;
  if (param_1 != (UAnimMontage *)0x0) {
    FVar3 = UAnimMontage::GetGroupName(param_1);
    uVar1 = *(undefined8 *)FVar3;
    uVar2 = ::GetTypeHash((FNameEntryId)(uint)uVar1);
    this_00 = TMapBase<FName,FInertializationRequest,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FInertializationRequest,0>_>
              ::FindOrAddImpl<FName>
                        ((TMapBase<FName,FInertializationRequest,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FInertializationRequest,0>_>
                          *)&this->SlotGroupInertializationRequestDataMap,
                         uVar2 + (int)((ulonglong)uVar1 >> 0x20),(FName *)FVar3);
    FInertializationRequest::operator=(this_00,&local_78);
  }
  if (local_78.DescriptionString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.DescriptionString.Data.AllocatorInstance.Data);
  }
  if (local_78.Description_DEPRECATED.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_78.Description_DEPRECATED.TextData.Reference + 0x10))();
  }
  return;
}

// RequestSlotGroupInertialization @ 1474749b0

void __thiscall
UAnimInstance::RequestSlotGroupInertialization
          (UAnimInstance *this,FName param_1,float param_2,UBlendProfile *param_3)

{
  FName FVar1;
  uint uVar2;
  FInertializationRequest *pFVar3;
  FAnimInstanceProxy *pFVar4;
  FName *pFVar5;
  FAnimInstanceProxy *pFVar6;
  undefined1 *puVar7;
  uint uVar8;
  FName local_res10;
  FInertializationRequest local_78;
  
  local_res10 = param_1;
  FInertializationRequest::FInertializationRequest(&local_78);
  local_78.Duration = param_2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_3 != (UBlendProfile *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_3);
  }
  FVar1 = local_res10;
  local_78.BlendProfile.field0_0x0 = (TObjectPtr<UBlendProfile_const_>_u_0)param_3;
  uVar2 = ::GetTypeHash(local_res10.ComparisonIndex.Value);
  uVar2 = uVar2 + FVar1.Number;
  if (*(int *)&(this->SlotGroupInertializationRequestDataMap).field_0x8 !=
      *(int *)&(this->SlotGroupInertializationRequestDataMap).field_0x34) {
    puVar7 = *(undefined1 **)&(this->SlotGroupInertializationRequestDataMap).field_0x40;
    if (puVar7 == (undefined1 *)0x0) {
      puVar7 = &(this->SlotGroupInertializationRequestDataMap).field_0x38;
    }
    uVar8 = *(uint *)(puVar7 + (ulonglong)
                               (*(int *)&(this->SlotGroupInertializationRequestDataMap).field_0x48 -
                                1U & uVar2) * 4);
    if (uVar8 != 0xffffffff) {
      do {
        pFVar5 = (FName *)((longlong)(int)uVar8 * 0x68 +
                          *(longlong *)&this->SlotGroupInertializationRequestDataMap);
        if (*pFVar5 == local_res10) {
          if (pFVar5 != (FName *)0x0) {
            pFVar3 = (FInertializationRequest *)(pFVar5 + 1);
            goto LAB_147474a90;
          }
          break;
        }
        uVar8 = pFVar5[0xc].ComparisonIndex.Value;
      } while (uVar8 != 0xffffffff);
    }
  }
  pFVar3 = TMapBase<FName,FInertializationRequest,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FInertializationRequest,0>_>
           ::EmplaceByHash<FName_const_&>
                     ((TMapBase<FName,FInertializationRequest,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FInertializationRequest,0>_>
                       *)&this->SlotGroupInertializationRequestDataMap,uVar2,&local_res10);
LAB_147474a90:
  FInertializationRequest::operator=(pFVar3,&local_78);
  pFVar4 = GetProxyOnAnyThread<FAnimInstanceProxy>(this);
  FVar1 = local_res10;
  if ((pFVar4->bUseMainInstanceMontageEvaluationData == '\0') ||
     (pFVar6 = pFVar4->MainInstanceProxy, pFVar4->MainInstanceProxy == (FAnimInstanceProxy *)0x0)) {
    pFVar6 = pFVar4;
  }
  uVar2 = ::GetTypeHash(local_res10.ComparisonIndex.Value);
  uVar2 = uVar2 + FVar1.Number;
  if (*(int *)&(pFVar6->SlotGroupInertializationRequestDataMap).field_0x8 !=
      *(int *)&(pFVar6->SlotGroupInertializationRequestDataMap).field_0x34) {
    puVar7 = *(undefined1 **)&(pFVar6->SlotGroupInertializationRequestDataMap).field_0x40;
    if (puVar7 == (undefined1 *)0x0) {
      puVar7 = &(pFVar6->SlotGroupInertializationRequestDataMap).field_0x38;
    }
    uVar8 = *(uint *)(puVar7 + (ulonglong)
                               (*(int *)&(pFVar6->SlotGroupInertializationRequestDataMap).field_0x48
                                - 1U & uVar2) * 4);
    if (uVar8 != 0xffffffff) {
      do {
        pFVar5 = (FName *)((longlong)(int)uVar8 * 0x68 +
                          *(longlong *)&pFVar6->SlotGroupInertializationRequestDataMap);
        if (*pFVar5 == local_res10) {
          if (pFVar5 != (FName *)0x0) {
            pFVar3 = (FInertializationRequest *)(pFVar5 + 1);
            goto LAB_147474b4c;
          }
          break;
        }
        uVar8 = pFVar5[0xc].ComparisonIndex.Value;
      } while (uVar8 != 0xffffffff);
    }
  }
  pFVar3 = TMapBase<FName,FInertializationRequest,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FInertializationRequest,0>_>
           ::EmplaceByHash<FName_const_&>
                     ((TMapBase<FName,FInertializationRequest,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FInertializationRequest,0>_>
                       *)&pFVar6->SlotGroupInertializationRequestDataMap,uVar2,&local_res10);
LAB_147474b4c:
  FInertializationRequest::operator=(pFVar3,&local_78);
  if (local_78.DescriptionString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.DescriptionString.Data.AllocatorInstance.Data);
  }
  if (local_78.Description_DEPRECATED.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_78.Description_DEPRECATED.TextData.Reference + 0x10))();
  }
  return;
}

// RequestTransitionEvent @ 147474cd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
UAnimInstance::RequestTransitionEvent
          (UAnimInstance *this,FName param_1,double param_2,ETransitionRequestQueueMode param_3,
          ETransitionRequestOverwriteMode param_4)

{
  bool bVar1;
  FAnimInstanceProxy *this_00;
  undefined1 auStack_a8 [32];
  LARGE_INTEGER local_88;
  undefined1 *local_80;
  undefined1 local_78 [32];
  void *local_58;
  undefined4 local_50;
  undefined4 local_4c;
  double local_48;
  double local_40;
  FName local_38;
  ETransitionRequestQueueMode local_30;
  ETransitionRequestOverwriteMode local_2f;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_a8;
  this_00 = GetProxyOnAnyThread<FAnimInstanceProxy>(this);
  QueryPerformanceCounter(&local_88);
  local_48 = (double)local_88.QuadPart * FGenericPlatformTime::SecondsPerCycle +
             __real_4170000000000000;
  if (0.0 < param_2) {
    local_58 = (void *)0x0;
    local_50 = 0;
    local_2f = param_4;
    local_80 = local_78;
    local_88.QuadPart =
         (LONGLONG)
         UE::Core::Private::Function::
         TFunctionRefCaller<`FAnimInstanceProxy::RequestTransitionEvent'::__l2::<lambda_1>,void,FAnimNode_StateMachine_&>
         ::Call;
    local_4c = 8;
    local_40 = param_2;
    local_38 = param_1;
    local_30 = param_3;
    FAnimInstanceProxy::ForEachStateMachine
              (this_00,(TFunctionRef<void___cdecl(FAnimNode_StateMachine_&)> *)&local_88.s);
    if (local_58 != (void *)0x0) {
      FMemory::Free(local_58);
    }
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}

// ResetAnimationCurves @ 147475410

void __thiscall UAnimInstance::ResetAnimationCurves(UAnimInstance *this)

{
  FAnimInstanceProxy *pFVar1;
  TSet<TTuple<FName,float>,TDefaultMapHashableKeyFuncs<FName,float,0>,FDefaultSetAllocator> *this_00
  ;
  longlong lVar2;
  
  pFVar1 = GetProxyOnAnyThread<FAnimInstanceProxy>(this);
  FStatsHierarchical::BeginMeasurement("FAnimInstanceProxy::ResetAnimationCurves");
  this_00 = (TSet<TTuple<FName,float>,TDefaultMapHashableKeyFuncs<FName,float,0>,FDefaultSetAllocator>
             *)pFVar1->AnimationCurves;
  lVar2 = 3;
  do {
    TSet<TTuple<FName,float>,TDefaultMapHashableKeyFuncs<FName,float,0>,FDefaultSetAllocator>::Reset
              (this_00);
    this_00 = this_00 + 1;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  FStatsHierarchical::EndMeasurement();
  return;
}

// ResetDynamics @ 1474756c0

void __thiscall UAnimInstance::ResetDynamics(UAnimInstance *this,ETeleportType param_1)

{
  ETeleportType EVar1;
  
  EVar1 = this->PendingDynamicResetTeleportType;
  if (this->PendingDynamicResetTeleportType < param_1) {
    EVar1 = param_1;
  }
  this->PendingDynamicResetTeleportType = EVar1;
  return;
}

// ResetDynamics @ 1474756e0

void __thiscall UAnimInstance::ResetDynamics(UAnimInstance *this)

{
  ETeleportType EVar1;
  FLLMScope local_res8 [2];
  FMemScope local_res10 [3];
  
  FLLMScope::FLLMScope(local_res8,Animation,false,None,Default,true);
  FMemScope::FMemScope(local_res10,Animation,true);
  EVar1 = this->PendingDynamicResetTeleportType;
  if (this->PendingDynamicResetTeleportType < ResetPhysics) {
    EVar1 = ResetPhysics;
  }
  this->PendingDynamicResetTeleportType = EVar1;
  FMemScope::~FMemScope(local_res10);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// SavePoseSnapshot @ 147475e20

void __thiscall UAnimInstance::SavePoseSnapshot(UAnimInstance *this,FName param_1)

{
  FAnimInstanceProxy *this_00;
  USkeletalMeshComponent *this_01;
  FPoseSnapshot *pFVar1;
  
  this_00 = GetProxyOnGameThread<FAnimInstanceProxy>(this);
  this_01 = GetSkelMeshComponent(this);
  if (this_01 != (USkeletalMeshComponent *)0x0) {
    FStatsHierarchical::BeginMeasurement("FAnimInstanceProxy::SavePoseSnapshot");
    pFVar1 = FAnimInstanceProxy::AddPoseSnapshot(this_00,param_1);
    USkeletalMeshComponent::SnapshotPose(this_01,pFVar1);
    FStatsHierarchical::EndMeasurement();
  }
  return;
}

// Serialize @ 147476300

void __thiscall UAnimInstance::Serialize(UAnimInstance *this,FArchive *param_1)

{
  code *pcVar1;
  bool bVar2;
  FAnimInstanceProxy *pFVar3;
  
  UObject::Serialize((UObject *)this,param_1);
  if ((param_1->field_0x28 & 5) != 5) {
    pFVar3 = GetProxyOnAnyThread<FAnimInstanceProxy>(this);
    if ((pFVar3->RequiredBones).Object == (FBoneContainer *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    ::operator<<(param_1,(pFVar3->RequiredBones).Object);
  }
  return;
}

// Serialize @ 147476380

void __thiscall UAnimInstance::Serialize(UAnimInstance *this,FStructuredArchiveRecord param_1)

{
  code *pcVar1;
  bool bVar2;
  FArchive *pFVar3;
  FAnimInstanceProxy *pFVar4;
  FSlotBase local_res10 [3];
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  pFVar3 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  UObject::Serialize((UObject *)this,pFVar3);
  if ((pFVar3->field_0x28 & 5) != 5) {
    pFVar4 = GetProxyOnAnyThread<FAnimInstanceProxy>(this);
    if ((pFVar4->RequiredBones).Object == (FBoneContainer *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    ::operator<<(pFVar3,(pFVar4->RequiredBones).Object);
  }
  return;
}

// SetMorphTarget @ 147476480

void __thiscall UAnimInstance::SetMorphTarget(UAnimInstance *this,FName param_1,float param_2)

{
  USkeletalMeshComponent *this_00;
  
  this_00 = GetSkelMeshComponent(this);
  if (this_00 != (USkeletalMeshComponent *)0x0) {
    USkeletalMeshComponent::SetMorphTarget(this_00,param_1,param_2,true);
  }
  return;
}

// SetRootMotionMode @ 1474765f0

void __thiscall
UAnimInstance::SetRootMotionMode(UAnimInstance *this,TEnumAsByte<ERootMotionMode::Type> param_1)

{
  (this->RootMotionMode).Value = param_1.Value;
  return;
}

// ShouldTriggerAnimNotifyState @ 147476600

bool __thiscall
UAnimInstance::ShouldTriggerAnimNotifyState(UAnimInstance *this,UAnimNotifyState *param_1)

{
  bool bVar1;
  UAnimInstance *local_res10 [3];
  
  if (param_1 == (UAnimNotifyState *)0x0) {
    local_res10[0] = this;
    bVar1 = `UAnimInstance::ShouldTriggerAnimNotifyState'::__l3::<lambda_1>::operator()(local_res10)
    ;
    return bVar1;
  }
  return true;
}

// SnapshotPose @ 14747b220

void __thiscall UAnimInstance::SnapshotPose(UAnimInstance *this,FPoseSnapshot *param_1)

{
  USkeletalMeshComponent *this_00;
  
  this_00 = GetSkelMeshComponent(this);
  if (this_00 != (USkeletalMeshComponent *)0x0) {
    USkeletalMeshComponent::SnapshotPose(this_00,param_1);
    return;
  }
  return;
}

// StaticRegisterNativesUAnimInstance @ 14747b310

void __cdecl UAnimInstance::StaticRegisterNativesUAnimInstance(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0x6a;
  local_18.DataPtr = Z_Construct_UClass_UAnimInstance_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// StopAllMontages @ 14747b3d0

void __thiscall UAnimInstance::StopAllMontages(UAnimInstance *this,float param_1)

{
  FAnimMontageInstance *this_00;
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FAlphaBlend *pFVar4;
  longlong lVar5;
  uint uVar6;
  FAlphaBlend local_48;
  
  uVar6 = (this->MontageInstances).ArrayNum - 1;
  if (-1 < (int)uVar6) {
    lVar5 = (longlong)(int)uVar6 * 8;
    do {
      uVar3 = 0;
      if ((int)uVar6 < (this->MontageInstances).ArrayNum) {
        uVar3 = ~uVar6 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      this_00 = *(FAnimMontageInstance **)((this->MontageInstances).AllocatorInstance.Data + lVar5);
      pFVar4 = FAlphaBlend::FAlphaBlend(&local_48,param_1);
      FAnimMontageInstance::Stop(this_00,pFVar4,true);
      if ((this->bUninitialized != '\0') &&
         (MontageCVars::bEarlyOutMontageWhenUninitialized != false)) {
        return;
      }
      lVar5 = lVar5 + -8;
      uVar6 = uVar6 - 1;
    } while (-1 < (int)uVar6);
  }
  return;
}

// StopAllMontagesByGroupName @ 14747b4d0

void __thiscall
UAnimInstance::StopAllMontagesByGroupName(UAnimInstance *this,FName param_1,FAlphaBlend *param_2)

{
  TObjectPtr<UCurveFloat>_u_0 local_38;
  float local_30;
  EAlphaBlendOption local_2c;
  FMontageBlendSettings local_28;
  
  FMontageBlendSettings::FMontageBlendSettings(&local_28);
  FAlphaBlendArgs::FAlphaBlendArgs((FAlphaBlendArgs *)&local_38.ObjectPtr,param_2);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_38.DebugPtr != (UCurveFloat *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_38.DebugPtr);
  }
  local_28.Blend.BlendOption = local_2c;
  local_28.Blend.BlendTime = local_30;
  StopAllMontagesByGroupName(this,param_1,&local_28);
  return;
}

// StopAllMontagesByGroupName @ 14747b560

void __thiscall
UAnimInstance::StopAllMontagesByGroupName
          (UAnimInstance *this,FName param_1,FMontageBlendSettings *param_2)

{
  FAnimMontageInstance *this_00;
  UAnimMontage *this_01;
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FName FVar4;
  uint uVar5;
  longlong lVar6;
  
  uVar5 = (this->MontageInstances).ArrayNum - 1;
  if (-1 < (int)uVar5) {
    lVar6 = (longlong)(int)uVar5 * 8;
    do {
      uVar3 = 0;
      if ((int)uVar5 < (this->MontageInstances).ArrayNum) {
        uVar3 = ~uVar5 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      this_00 = *(FAnimMontageInstance **)((this->MontageInstances).AllocatorInstance.Data + lVar6);
      if ((((this_00 != (FAnimMontageInstance *)0x0) &&
           (this_01 = (this_00->Montage).field0_0x0.DebugPtr, this_01 != (UAnimMontage *)0x0)) &&
          (FVar4 = UAnimMontage::GetGroupName(this_01), *(FName *)FVar4 == param_1)) &&
         ((FAnimMontageInstance::Stop(this_00,param_2,true), this->bUninitialized != '\0' &&
          (MontageCVars::bEarlyOutMontageWhenUninitialized != false)))) {
        return;
      }
      lVar6 = lVar6 + -8;
      uVar5 = uVar5 - 1;
    } while (-1 < (int)uVar5);
  }
  return;
}

// StopSlotAnimation @ 14747b660

void __thiscall UAnimInstance::StopSlotAnimation(UAnimInstance *this,float param_1,FName param_2)

{
  FAnimMontageInstance *this_00;
  UAnimMontage *pUVar1;
  UPackage *pUVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  UPackage *pUVar6;
  FAlphaBlend *pFVar7;
  FName *pFVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  longlong lVar12;
  FAlphaBlend local_78;
  
  if (param_2 == (FName)0x0) {
    Montage_Stop(this,param_1,(UAnimMontage *)0x0);
    return;
  }
  uVar9 = 0;
  if (0 < (this->MontageInstances).ArrayNum) {
    lVar11 = 0;
    do {
      uVar10 = 0;
      if ((int)uVar9 < (this->MontageInstances).ArrayNum) {
        uVar10 = ~uVar9 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      this_00 = *(FAnimMontageInstance **)((this->MontageInstances).AllocatorInstance.Data + lVar11)
      ;
      if (((((this_00 != (FAnimMontageInstance *)0x0) &&
            (pUVar1 = (this_00->Montage).field0_0x0.DebugPtr, pUVar1 != (UAnimMontage *)0x0)) &&
           ((this_00->Blend).DesiredValue != 0.0)) &&
          ((this_00->bPlaying != false &&
           (pUVar2 = (UPackage *)pUVar1->_padding_, pUVar6 = GetTransientPackage(), pUVar2 == pUVar6
           )))) && (uVar10 = 0, 0 < (pUVar1->SlotAnimTracks).ArrayNum)) {
        lVar12 = 0;
        do {
          uVar5 = 0;
          if ((int)uVar10 < (pUVar1->SlotAnimTracks).ArrayNum) {
            uVar5 = ~uVar10 >> 0x1f;
          }
          if ((uVar5 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          pFVar8 = (FName *)((pUVar1->SlotAnimTracks).AllocatorInstance.Data + lVar12);
          if ((pFVar8 != (FName *)0x0) && (*pFVar8 == param_2)) {
            pFVar7 = FAlphaBlend::FAlphaBlend(&local_78,param_1);
            FAnimMontageInstance::Stop(this_00,pFVar7,true);
            break;
          }
          uVar10 = uVar10 + 1;
          lVar12 = lVar12 + 0x18;
        } while ((int)uVar10 < (pUVar1->SlotAnimTracks).ArrayNum);
      }
      uVar9 = uVar9 + 1;
      lVar11 = lVar11 + 8;
    } while ((int)uVar9 < (this->MontageInstances).ArrayNum);
  }
  return;
}

// TriggerAnimNotifies @ 14747bda0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UAnimInstance::TriggerAnimNotifies(UAnimInstance *this,float param_1)

{
  TArray<FAnimNotifyEvent,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<FAnimNotifyEventReference,TSizedDefaultAllocator<32>_> *pTVar2;
  int *piVar3;
  FName FVar4;
  FScriptContainerElement *pFVar5;
  UAnimNotifyState *pUVar6;
  undefined8 uVar7;
  code *pcVar8;
  bool bVar9;
  char cVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  FName *pFVar14;
  FThreadSafeStaticStat<FStat_STAT_AnimTriggerAnimNotifies> FVar15;
  USkeletalMeshComponent *pUVar16;
  UClass *pUVar17;
  uint uVar18;
  FAnimNotifyEventReference *pFVar19;
  ulonglong uVar20;
  longlong lVar21;
  ulonglong uVar22;
  FAnimNotifyEvent *pFVar23;
  longlong lVar24;
  float fVar25;
  FColor_u_0 local_res8 [2];
  FName local_res20;
  ForAnyElementType local_d8;
  undefined8 local_d0;
  ForAnyElementType local_c8;
  undefined8 local_c0;
  ForAnyElementType local_b8;
  int local_b0;
  int iStack_ac;
  FName local_a8;
  byte local_a0;
  ForAnyElementType local_98;
  undefined8 local_90;
  FAnimNotifyEvent *local_88;
  FScriptContainerElement *local_80;
  int *local_78;
  UAnimInstance *local_70;
  code *local_68;
  FName local_60 [5];
  
  uVar20 = 0;
  FVar15 = StatPtr_STAT_AnimTriggerAnimNotifies;
  if (StatPtr_STAT_AnimTriggerAnimNotifies ==
      (FThreadSafeStaticStat<FStat_STAT_AnimTriggerAnimNotifies>)0x0) {
    pFVar14 = ::FName::FName(local_60,"STAT_AnimTriggerAnimNotifies");
    FVar15 = (FThreadSafeStaticStat<FStat_STAT_AnimTriggerAnimNotifies>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AnimTriggerAnimNotifies,*pFVar14,
                        L"Trigger Notifies","STATGROUP_Anim","STATCAT_Advanced",L"Anim",true,true,
                        ST_int64,true,false,MCR_Invalid);
  }
  local_a8.ComparisonIndex.Value = 0;
  local_a8.Number = 0;
  local_a0 = 0;
  FVar4 = *(FName *)FVar15;
  if ((FVar4.ComparisonIndex.Value.Value != 0) || (FVar4.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8[0]._s_0,(char *)*(FName *)((longlong)FVar15 + 0x10));
      local_a0 = local_a0 | 1;
      if (-1 < CpuChannel->Enabled) {
        local_res20.ComparisonIndex.Value = FVar4.ComparisonIndex.Value.Value;
        local_res20.Number = FVar4.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res20,(wchar_t *)*(FName *)((longlong)FVar15 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimInstance.cpp"
                   ,0x63c);
        local_a0 = local_a0 | 2;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_a8 = FVar4;
      FThreadStats::AddMessage(FVar4,CycleScopeStart);
      local_a0 = local_a0 | 4;
    }
  }
  pUVar16 = GetSkelMeshComponent(this);
  uVar11 = (this->NotifyQueue).AnimNotifies.ArrayNum;
  local_d8.Data = (FScriptContainerElement *)0x0;
  local_d0 = 0;
  if ((int)uVar11 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar11);
  }
  if (0 < (int)uVar11) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xb8,8,uVar11,&local_d8,0,(int *)((longlong)&local_d0 + 4));
  }
  uVar11 = (this->NotifyQueue).AnimNotifies.ArrayNum;
  local_c8.Data = (FScriptContainerElement *)0x0;
  local_c0 = 0;
  if ((int)uVar11 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar11);
  }
  if (0 < (int)uVar11) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,8,uVar11,&local_c8,0,(int *)((longlong)&local_c0 + 4));
  }
  local_b8.Data = (FScriptContainerElement *)0x0;
  local_b0 = 0;
  iStack_ac = 0;
  local_98.Data = (FScriptContainerElement *)0x0;
  local_90 = 0;
  piVar3 = &(this->NotifyQueue).AnimNotifies.ArrayNum;
  uVar22 = uVar20;
  if (0 < *piVar3) {
    do {
      uVar18 = (uint)uVar22;
      uVar11 = 0;
      if ((int)uVar18 < (this->NotifyQueue).AnimNotifies.ArrayNum) {
        uVar11 = ~uVar18 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pFVar5 = (this->NotifyQueue).AnimNotifies.AllocatorInstance.Data;
      if (*(longlong *)(pFVar5 + uVar20 + 0x20) == 0) {
        local_88 = (FAnimNotifyEvent *)0x0;
      }
      else {
        local_88 = *(FAnimNotifyEvent **)(pFVar5 + uVar20 + 0x10);
        if (local_88 != (FAnimNotifyEvent *)0x0) {
          if ((local_88->NotifyStateClass).field0_0x0.DebugPtr == (UAnimNotifyState *)0x0) {
            uVar11 = 0;
            if ((int)uVar18 < (this->NotifyQueue).AnimNotifies.ArrayNum) {
              uVar11 = ~uVar18 >> 0x1f;
            }
            if ((uVar11 == 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar9)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            TriggerSingleAnimNotify
                      (this,(FAnimNotifyEventReference *)
                            ((this->NotifyQueue).AnimNotifies.AllocatorInstance.Data +
                            (longlong)(int)uVar18 * 0x30));
          }
          else {
            uVar11 = TArray<FAnimNotifyEvent,TSizedDefaultAllocator<32>_>::Find
                               (&this->ActiveAnimNotifyState,local_88);
            if (uVar11 == 0xffffffff) {
              if (((local_b8.Data <= (FScriptContainerElement *)&local_88) &&
                  ((FScriptContainerElement *)&local_88 < local_b8.Data + (longlong)iStack_ac * 8))
                 && (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x7a5,
                                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                       ), bVar9)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              if (local_b0 == iStack_ac) {
                local_b0 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x808,&local_b8,&iStack_ac);
              }
              lVar21 = (longlong)local_b0;
              local_b0 = local_b0 + 1;
              *(FAnimNotifyEvent **)(local_b8.Data + lVar21 * 8) = local_88;
              uVar11 = 0;
              if ((int)uVar18 < (this->NotifyQueue).AnimNotifies.ArrayNum) {
                uVar11 = ~uVar18 >> 0x1f;
              }
              if ((uVar11 == 0) &&
                 (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar9)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              local_80 = (this->NotifyQueue).AnimNotifies.AllocatorInstance.Data +
                         (longlong)(int)uVar18 * 0x30;
              if (((local_98.Data <= (FScriptContainerElement *)&local_80) &&
                  ((FScriptContainerElement *)&local_80 <
                   local_98.Data + (longlong)local_90._4_4_ * 8)) &&
                 (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar9)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              iVar13 = (int)local_90;
              if ((int)local_90 == local_90._4_4_) {
                iVar13 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x808,&local_98,(int *)((longlong)&local_90 + 4));
              }
              local_90 = CONCAT44(local_90._4_4_,iVar13 + 1);
              *(FScriptContainerElement **)(local_98.Data + (longlong)iVar13 * 8) = local_80;
            }
            else {
              if (((this->ActiveAnimNotifyState).ArrayNum !=
                   (this->ActiveAnimNotifyEventReference).ArrayNum) &&
                 (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                    ("ActiveAnimNotifyState.Num() == ActiveAnimNotifyEventReference.Num()"
                                     ,
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimInstance.cpp"
                                     ,0x656,L""), bVar9)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              uVar12 = 0;
              if ((int)uVar11 < (this->ActiveAnimNotifyState).ArrayNum) {
                uVar12 = ~uVar11 >> 0x1f;
              }
              if ((uVar12 == 0) &&
                 (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar9)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              TArray<FAnimNotifyEvent,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl
                        (&this->ActiveAnimNotifyState,uVar11);
              uVar12 = 0;
              if ((int)uVar11 < (this->ActiveAnimNotifyEventReference).ArrayNum) {
                uVar12 = ~uVar11 >> 0x1f;
              }
              if ((uVar12 == 0) &&
                 (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar9)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              TArray<FAnimNotifyEventReference,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl
                        (&this->ActiveAnimNotifyEventReference,uVar11);
            }
            pFVar23 = local_88;
            if (((local_d8.Data <= local_88) &&
                (local_88 < (FAnimNotifyEvent *)(local_d8.Data + (longlong)local_d0._4_4_ * 0xb8)))
               && (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar9)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            iVar13 = (int)local_d0;
            if ((int)local_d0 == local_d0._4_4_) {
              iVar13 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x8b8,&local_d8,(int *)((longlong)&local_d0 + 4));
            }
            local_d0 = CONCAT44(local_d0._4_4_,iVar13 + 1);
            FAnimNotifyEvent::FAnimNotifyEvent
                      ((FAnimNotifyEvent *)(local_d8.Data + (longlong)iVar13 * 0xb8),pFVar23);
            uVar11 = 0;
            if ((int)uVar18 < (this->NotifyQueue).AnimNotifies.ArrayNum) {
              uVar11 = ~uVar18 >> 0x1f;
            }
            if ((uVar11 == 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar9)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            pFVar19 = (FAnimNotifyEventReference *)
                      ((this->NotifyQueue).AnimNotifies.AllocatorInstance.Data +
                      (longlong)(int)uVar18 * 0x30);
            if (((local_c8.Data <= pFVar19) &&
                (pFVar19 < (FAnimNotifyEventReference *)
                           (local_c8.Data + (longlong)local_c0._4_4_ * 0x30))) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar9)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            iVar13 = (int)local_c0;
            if ((int)local_c0 == local_c0._4_4_) {
              iVar13 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x830,&local_c8,(int *)((longlong)&local_c0 + 4));
            }
            local_c0 = CONCAT44(local_c0._4_4_,iVar13 + 1);
            pFVar19 = FAnimNotifyEventReference::FAnimNotifyEventReference
                                ((FAnimNotifyEventReference *)
                                 (local_c8.Data + (longlong)iVar13 * 0x30),pFVar19);
            uVar11 = 0;
            if ((int)((int)local_d0 - 1U) < (int)local_d0) {
              uVar11 = ~((int)local_d0 - 1U) >> 0x1f;
            }
            if (uVar11 == 0) {
              bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar9) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
            }
            if ((pFVar19->NotifySource).field0_0x0.DebugPtr != (UObject *)0x0) {
              pFVar19->Notify =
                   (FAnimNotifyEvent *)(local_d8.Data + (longlong)((int)local_d0 + -1) * 0xb8);
            }
          }
        }
      }
      uVar20 = uVar20 + 0x30;
      uVar22 = (ulonglong)(uVar18 + 1);
    } while ((int)(uVar18 + 1) < *piVar3);
  }
  lVar21 = 0;
  uVar11 = 0;
  if (0 < (this->ActiveAnimNotifyState).ArrayNum) {
    do {
      uVar18 = 0;
      if ((int)uVar11 < (this->ActiveAnimNotifyState).ArrayNum) {
        uVar18 = ~uVar11 >> 0x1f;
      }
      if ((uVar18 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pFVar23 = (FAnimNotifyEvent *)((this->ActiveAnimNotifyState).AllocatorInstance.Data + lVar21);
      uVar18 = 0;
      if ((int)uVar11 < (this->ActiveAnimNotifyEventReference).ArrayNum) {
        uVar18 = ~uVar11 >> 0x1f;
      }
      if ((uVar18 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pFVar5 = (this->ActiveAnimNotifyEventReference).AllocatorInstance.Data;
      if (((pFVar23->NotifyStateClass).field0_0x0.DebugPtr != (UAnimNotifyState *)0x0) &&
         (cVar10 = (**(code **)(*(longlong *)this + 0x388))(this), cVar10 != '\0')) {
        FAnimTrace::OutputAnimNotify(this,pFVar23,End);
        pUVar6 = (pFVar23->NotifyStateClass).field0_0x0.DebugPtr;
        lVar24 = pUVar6->_padding_;
        pcVar8 = *(code **)(pUVar6->_padding_ + 0x2e0);
        if (lVar24 == 0) {
LAB_14747c6a6:
          lVar24 = 0;
        }
        else {
          pUVar17 = Z_Construct_UClass_UAnimSequenceBase_NoRegister();
          iVar13 = (int)pUVar17->_padding_;
          if ((*(int *)(*(longlong *)(lVar24 + 0x10) + 0x38) < iVar13) ||
             ((longlong *)
              *(undefined1 **)
               (*(longlong *)(*(longlong *)(lVar24 + 0x10) + 0x30) + (longlong)iVar13 * 8) !=
              &pUVar17->_padding_)) goto LAB_14747c6a6;
        }
        (*pcVar8)(pUVar6,pUVar16,lVar24,pFVar5 + (longlong)(int)uVar11 * 0x30);
      }
      if (((int)uVar11 < 0) || ((this->ActiveAnimNotifyState).ArrayNum <= (int)uVar11)) {
        local_70 = this;
        `UAnimInstance::TriggerAnimNotifies'::__l31::<lambda_1>::operator()(&local_70);
        goto LAB_14747ca9f;
      }
      uVar11 = uVar11 + 1;
      lVar21 = lVar21 + 0xb8;
    } while ((int)uVar11 < (this->ActiveAnimNotifyState).ArrayNum);
  }
  uVar20 = 0;
  if (((int)local_90 != local_b0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("NotifyStateBeginEventReference.Num() == NotifyStateBeginEvent.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimInstance.cpp"
                         ,0x685,L""), bVar9)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  uVar22 = uVar20;
  if (0 < local_b0) {
    do {
      uVar18 = (uint)uVar20;
      uVar11 = 0;
      if ((int)uVar18 < local_b0) {
        uVar11 = ~uVar18 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pFVar23 = *(FAnimNotifyEvent **)(local_b8.Data + uVar22);
      uVar11 = 0;
      if ((int)uVar18 < (int)local_90) {
        uVar11 = ~uVar18 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      uVar7 = *(undefined8 *)(local_98.Data + uVar22);
      cVar10 = (**(code **)(*(longlong *)this + 0x388))
                         (this,(pFVar23->NotifyStateClass).field0_0x0.DebugPtr);
      if (cVar10 != '\0') {
        FAnimTrace::OutputAnimNotify(this,pFVar23,Begin);
        pUVar6 = (pFVar23->NotifyStateClass).field0_0x0.DebugPtr;
        local_78 = *(int **)(pUVar6->_padding_ + 0x2c0);
        fVar25 = FAnimNotifyEvent::GetDuration(pFVar23);
        lVar21 = ((pFVar23->NotifyStateClass).field0_0x0.DebugPtr)->_padding_;
        if (lVar21 == 0) {
LAB_14747c841:
          lVar21 = 0;
        }
        else {
          pUVar17 = Z_Construct_UClass_UAnimSequenceBase_NoRegister();
          iVar13 = (int)pUVar17->_padding_;
          if ((*(int *)(*(longlong *)(lVar21 + 0x10) + 0x38) < iVar13) ||
             ((longlong *)
              *(undefined1 **)
               (*(longlong *)(*(longlong *)(lVar21 + 0x10) + 0x30) + (longlong)iVar13 * 8) !=
              &pUVar17->_padding_)) goto LAB_14747c841;
        }
        (*(code *)local_78)(pUVar6,pUVar16,lVar21,fVar25,uVar7);
      }
      uVar20 = (ulonglong)(uVar18 + 1);
      uVar22 = uVar22 + 8;
    } while ((int)(uVar18 + 1) < local_b0);
  }
  pTVar1 = &this->ActiveAnimNotifyState;
  if (pTVar1 != (TArray<FAnimNotifyEvent,TSizedDefaultAllocator<32>_> *)&local_d8) {
    DestructItems<FAnimNotifyEvent,int>
              ((FAnimNotifyEvent *)(pTVar1->AllocatorInstance).Data,
               (this->ActiveAnimNotifyState).ArrayNum);
    pFVar5 = (pTVar1->AllocatorInstance).Data;
    if (pFVar5 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar5);
    }
    (pTVar1->AllocatorInstance).Data = local_d8.Data;
    (this->ActiveAnimNotifyState).ArrayNum = (int)local_d0;
    (this->ActiveAnimNotifyState).ArrayMax = local_d0._4_4_;
    local_d0 = 0;
    local_d8.Data = (FScriptContainerElement *)0x0;
  }
  pTVar2 = &this->ActiveAnimNotifyEventReference;
  piVar3 = &(this->ActiveAnimNotifyEventReference).ArrayNum;
  local_78 = piVar3;
  if (pTVar2 != (TArray<FAnimNotifyEventReference,TSizedDefaultAllocator<32>_> *)&local_c8) {
    DestructItems<FAnimNotifyEventReference,int>
              ((FAnimNotifyEventReference *)(pTVar2->AllocatorInstance).Data,*piVar3);
    pFVar5 = (pTVar2->AllocatorInstance).Data;
    if (pFVar5 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar5);
    }
    (pTVar2->AllocatorInstance).Data = local_c8.Data;
    *piVar3 = (int)local_c0;
    (this->ActiveAnimNotifyEventReference).ArrayMax = local_c0._4_4_;
    local_c0 = 0;
    local_c8.Data = (FScriptContainerElement *)0x0;
  }
  uVar11 = 0;
  if (0 < (this->ActiveAnimNotifyState).ArrayNum) {
    lVar21 = 0;
    do {
      uVar18 = 0;
      if ((int)uVar11 < (this->ActiveAnimNotifyState).ArrayNum) {
        uVar18 = ~uVar11 >> 0x1f;
      }
      if ((uVar18 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pFVar23 = (FAnimNotifyEvent *)((this->ActiveAnimNotifyState).AllocatorInstance.Data + lVar21);
      uVar18 = 0;
      if ((int)uVar11 < *local_78) {
        uVar18 = ~uVar11 >> 0x1f;
      }
      if ((uVar18 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pFVar5 = (this->ActiveAnimNotifyEventReference).AllocatorInstance.Data;
      cVar10 = (**(code **)(*(longlong *)this + 0x388))
                         (this,(pFVar23->NotifyStateClass).field0_0x0.DebugPtr);
      if (cVar10 != '\0') {
        FAnimTrace::OutputAnimNotify(this,pFVar23,Tick);
        pUVar6 = (pFVar23->NotifyStateClass).field0_0x0.DebugPtr;
        lVar24 = pUVar6->_padding_;
        local_68 = *(code **)(pUVar6->_padding_ + 0x2d0);
        if (lVar24 == 0) {
LAB_14747ca6b:
          lVar24 = 0;
        }
        else {
          pUVar17 = Z_Construct_UClass_UAnimSequenceBase_NoRegister();
          iVar13 = (int)pUVar17->_padding_;
          if ((*(int *)(*(longlong *)(lVar24 + 0x10) + 0x38) < iVar13) ||
             ((longlong *)
              *(undefined1 **)
               (*(longlong *)(*(longlong *)(lVar24 + 0x10) + 0x30) + (longlong)iVar13 * 8) !=
              &pUVar17->_padding_)) goto LAB_14747ca6b;
        }
        (*local_68)(pUVar6,pUVar16,lVar24,param_1,pFVar5 + (longlong)(int)uVar11 * 0x30);
      }
      uVar11 = uVar11 + 1;
      lVar21 = lVar21 + 0xb8;
    } while ((int)uVar11 < (this->ActiveAnimNotifyState).ArrayNum);
  }
LAB_14747ca9f:
  if (local_98.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data);
  }
  if (local_b8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Data);
  }
  DestructItems<FAnimNotifyEventReference,int>
            ((FAnimNotifyEventReference *)local_c8.Data,(int)local_c0);
  if ((FAnimNotifyEventReference *)local_c8.Data != (FAnimNotifyEventReference *)0x0) {
    FMemory::Free(local_c8.Data);
  }
  DestructItems<FAnimNotifyEvent,int>((FAnimNotifyEvent *)local_d8.Data,(int)local_d0);
  if ((FAnimNotifyEvent *)local_d8.Data != (FAnimNotifyEvent *)0x0) {
    FMemory::Free(local_d8.Data);
  }
  if ((local_a0 & 1) != 0) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if ((local_a0 & 2) != 0) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((local_a0 & 4) != 0) {
    FThreadStats::AddMessage(local_a8,CycleScopeEnd);
  }
  return;
}

// TriggerMontageBlendedInEvent @ 14747cb70

void __thiscall
UAnimInstance::TriggerMontageBlendedInEvent
          (UAnimInstance *this,FQueuedMontageBlendedInEvent *param_1)

{
  UAnimMontage *pUVar1;
  longlong *plVar2;
  TObjectPtr<UAnimMontage>_u_0 local_res8;
  FReadAccessScope local_28;
  
  pUVar1 = (param_1->Montage).field0_0x0.DebugPtr;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&param_1->Delegate,&local_28)
  ;
  if ((*(int *)&(param_1->Delegate).field_0x10 != 0) &&
     (plVar2 = *(longlong **)&(param_1->Delegate).field_0x8, plVar2 != (longlong *)0x0)) {
    (**(code **)(*plVar2 + 0x68))(plVar2,pUVar1);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  local_res8 = (param_1->Montage).field0_0x0;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->OnMontageBlendedIn,
             &local_res8);
  return;
}

// TriggerMontageBlendingOutEvent @ 14747cbf0

void __thiscall
UAnimInstance::TriggerMontageBlendingOutEvent
          (UAnimInstance *this,FQueuedMontageBlendingOutEvent *param_1)

{
  bool bVar1;
  UAnimMontage *pUVar2;
  longlong *plVar3;
  TObjectPtr<UAnimMontage>_u_0 local_28;
  undefined1 local_20;
  
  bVar1 = param_1->bInterrupted;
  pUVar2 = (param_1->Montage).field0_0x0.DebugPtr;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&param_1->Delegate,
             (FReadAccessScope *)&local_28.ObjectPtr);
  if ((*(int *)&(param_1->Delegate).field_0x10 != 0) &&
     (plVar3 = *(longlong **)&(param_1->Delegate).field_0x8, plVar3 != (longlong *)0x0)) {
    (**(code **)(*plVar3 + 0x68))(plVar3,pUVar2,bVar1);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            ((FReadAccessScope *)&local_28.ObjectPtr);
  local_20 = param_1->bInterrupted != false;
  local_28 = (param_1->Montage).field0_0x0;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->OnMontageBlendingOut,
             &local_28);
  return;
}

// TriggerMontageEndedEvent @ 14747cc90

void __thiscall
UAnimInstance::TriggerMontageEndedEvent(UAnimInstance *this,FQueuedMontageEndedEvent *param_1)

{
  TArray<FAnimNotifyEvent,TSizedDefaultAllocator<32>_> *this_00;
  TArray<FAnimNotifyEventReference,TSizedDefaultAllocator<32>_> *this_01;
  longlong *plVar1;
  UAnimNotifyState *pUVar2;
  UAnimMontage *pUVar3;
  longlong *plVar4;
  code *pcVar5;
  longlong lVar6;
  FName FVar7;
  bool bVar8;
  char cVar9;
  int iVar10;
  USkeletalMeshComponent *pUVar11;
  UClass *pUVar12;
  FName *pFVar13;
  longlong lVar14;
  FAnimNotifyEvent *pFVar15;
  int iVar16;
  FScriptContainerElement *pFVar17;
  longlong *plVar18;
  longlong lVar19;
  longlong lVar20;
  undefined1 local_res18 [8];
  int local_res20;
  TObjectPtr<UAnimMontage>_u_0 local_78;
  undefined1 local_70;
  undefined1 local_68 [8];
  FReadAccessScope local_60;
  
  pUVar11 = GetSkelMeshComponent(this);
  if (pUVar11 != (USkeletalMeshComponent *)0x0) {
    this_00 = &this->ActiveAnimNotifyState;
    iVar16 = (this->ActiveAnimNotifyState).ArrayNum + -1;
    lVar20 = (longlong)iVar16 * 0x30;
    lVar14 = (longlong)iVar16 * 0xb8;
    for (; (-1 < iVar16 && (iVar16 < (this->ActiveAnimNotifyState).ArrayNum)); iVar16 = iVar16 + -1)
    {
      this_01 = &this->ActiveAnimNotifyEventReference;
      pFVar15 = (FAnimNotifyEvent *)((this_00->AllocatorInstance).Data + lVar14);
      if (((this->ActiveAnimNotifyEventReference).ArrayNum <= iVar16) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar17 = (this_01->AllocatorInstance).Data + lVar20;
      lVar19 = ((pFVar15->NotifyStateClass).field0_0x0.DebugPtr)->_padding_;
      if (lVar19 == 0) {
LAB_14747cd92:
        lVar19 = 0;
      }
      else {
        pUVar12 = Z_Construct_UClass_UAnimMontage_NoRegister();
        iVar10 = (int)pUVar12->_padding_;
        if ((*(int *)(*(longlong *)(lVar19 + 0x10) + 0x38) < iVar10) ||
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)(*(longlong *)(lVar19 + 0x10) + 0x30) + (longlong)iVar10 * 8) !=
            &pUVar12->_padding_)) goto LAB_14747cd92;
      }
      local_res20 = -1;
      iVar10 = -1;
      if (*(longlong *)pFVar17 != 0) {
        plVar1 = *(longlong **)pFVar17;
        plVar18 = (longlong *)*plVar1;
        lVar6 = plVar1[1];
        plVar4 = plVar18 + (int)lVar6;
        while( true ) {
          if ((int)plVar1[1] != (int)lVar6) {
            local_res18[0] = 0;
            `TCheckedPointerIterator<TUniquePtr<UE::Anim::IAnimNotifyEventContextDataInterface_const_,TDefaultDelete<UE::Anim::IAnimNotifyEventContextDataInterface_const_>_>,int,0>
            ::operator!='::__l2::<lambda_1>::operator()(local_res18);
          }
          FVar7 = UE::Anim::FAnimNotifyMontageInstanceContext::TypeName;
          iVar10 = local_res20;
          if (plVar18 == plVar4) goto LAB_14747ce4c;
          pFVar13 = (FName *)(**(code **)(*(longlong *)*plVar18 + 8))((longlong *)*plVar18,local_68)
          ;
          if (*pFVar13 == FVar7) break;
          plVar18 = plVar18 + 1;
        }
        iVar10 = local_res20;
        if (*plVar18 != 0) {
          iVar10 = *(int *)(*plVar18 + 8);
        }
      }
LAB_14747ce4c:
      if ((lVar19 != 0) && (iVar10 == param_1->MontageInstanceID)) {
        cVar9 = (**(code **)(*(longlong *)this + 0x388))
                          (this,(pFVar15->NotifyStateClass).field0_0x0.DebugPtr);
        if (cVar9 != '\0') {
          FAnimTrace::OutputAnimNotify(this,pFVar15,End);
          pUVar2 = (pFVar15->NotifyStateClass).field0_0x0.DebugPtr;
          (**(code **)(pUVar2->_padding_ + 0x2e0))(pUVar2,pUVar11,lVar19,pFVar17);
        }
        iVar10 = (this->ActiveAnimNotifyState).ArrayNum;
        if (iVar10 <= iVar16) {
          return;
        }
        if ((iVar10 != (this->ActiveAnimNotifyEventReference).ArrayNum) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("ActiveAnimNotifyState.Num() == ActiveAnimNotifyEventReference.Num()"
                               ,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimInstance.cpp"
                               ,0x8a0,L""), bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        if (((this->ActiveAnimNotifyState).ArrayNum <= iVar16) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        TArray<FAnimNotifyEvent,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl(this_00,iVar16);
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xb8,8,&this_00->AllocatorInstance,(this->ActiveAnimNotifyState).ArrayNum,
                   &(this->ActiveAnimNotifyState).ArrayMax);
        if (((this->ActiveAnimNotifyEventReference).ArrayNum <= iVar16) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        TArray<FAnimNotifyEventReference,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl
                  (this_01,iVar16);
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x30,8,&this_01->AllocatorInstance,
                   (this->ActiveAnimNotifyEventReference).ArrayNum,
                   &(this->ActiveAnimNotifyEventReference).ArrayMax);
      }
      lVar14 = lVar14 + -0xb8;
      lVar20 = lVar20 + -0x30;
    }
  }
  bVar8 = param_1->bInterrupted;
  pUVar3 = (param_1->Montage).field0_0x0.DebugPtr;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&param_1->Delegate,&local_60)
  ;
  if ((*(int *)&(param_1->Delegate).field_0x10 != 0) &&
     (plVar4 = *(longlong **)&(param_1->Delegate).field_0x8, plVar4 != (longlong *)0x0)) {
    (**(code **)(*plVar4 + 0x68))(plVar4,pUVar3,bVar8);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_60);
  local_70 = param_1->bInterrupted != false;
  local_78 = (param_1->Montage).field0_0x0;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->OnMontageEnded,&local_78
            );
  return;
}

// TriggerMontageSectionChangedEvent @ 14747d050

void __thiscall
UAnimInstance::TriggerMontageSectionChangedEvent
          (UAnimInstance *this,FQueuedMontageSectionChangedEvent *param_1)

{
  bool bVar1;
  FName FVar2;
  UAnimMontage *pUVar3;
  longlong *plVar4;
  TObjectPtr<UAnimMontage>_u_0 local_38;
  FName local_30;
  undefined1 local_28;
  
  bVar1 = param_1->bLooped;
  FVar2 = param_1->SectionName;
  pUVar3 = (param_1->Montage).field0_0x0.DebugPtr;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&param_1->Delegate,
             (FReadAccessScope *)&local_38.ObjectPtr);
  if ((*(int *)&(param_1->Delegate).field_0x10 != 0) &&
     (plVar4 = *(longlong **)&(param_1->Delegate).field_0x8, plVar4 != (longlong *)0x0)) {
    (**(code **)(*plVar4 + 0x68))(plVar4,pUVar3,FVar2,bVar1);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            ((FReadAccessScope *)&local_38.ObjectPtr);
  local_38 = (param_1->Montage).field0_0x0;
  local_28 = param_1->bLooped != false;
  local_30 = param_1->SectionName;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->OnMontageSectionChanged,
             &local_38);
  return;
}

// TriggerQueuedMontageEvents @ 14747d100

void __thiscall UAnimInstance::TriggerQueuedMontageEvents(UAnimInstance *this)

{
  int *piVar1;
  TArray<FQueuedMontageBlendingOutEvent,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<FQueuedMontageBlendedInEvent,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<FQueuedMontageSectionChangedEvent,TSizedDefaultAllocator<32>_> *pTVar4;
  TArray<FQueuedMontageEndedEvent,TSizedDefaultAllocator<32>_> *pTVar5;
  int iVar6;
  FQueuedMontageBlendingOutEvent *pFVar7;
  undefined8 uVar8;
  longlong *plVar9;
  FQueuedMontageBlendedInEvent *pFVar10;
  FQueuedMontageEndedEvent *pFVar11;
  FQueuedMontageBlendingOutEvent *pFVar12;
  FScriptContainerElement *pFVar13;
  FQueuedMontageSectionChangedEvent *pFVar14;
  FQueuedMontageEndedEvent *pFVar15;
  FScriptContainerElement *pFVar16;
  FScriptContainerElement *pFVar17;
  FQueuedMontageSectionChangedEvent *pFVar18;
  undefined8 local_res8;
  FReadAccessScope local_48;
  
  this->bQueueMontageEvents = '\0';
  iVar6 = (this->QueuedMontageBlendingOutEvents).ArrayNum;
  if (0 < iVar6) {
    pTVar2 = &this->QueuedMontageBlendingOutEvents;
    pFVar12 = (FQueuedMontageBlendingOutEvent *)(pTVar2->AllocatorInstance).Data;
    pFVar7 = pFVar12 + iVar6;
    while( true ) {
      if ((this->QueuedMontageBlendingOutEvents).ArrayNum != iVar6) {
        `TCheckedPointerIterator<FQueuedMontageBlendingOutEvent,int,0>::operator!='::__l2::
        <lambda_1>::operator()(&local_res8);
      }
      if (pFVar12 == pFVar7) break;
      TriggerMontageBlendingOutEvent(this,pFVar12);
      pFVar12 = pFVar12 + 1;
    }
    piVar1 = &(this->QueuedMontageBlendingOutEvents).ArrayMax;
    pFVar7 = (FQueuedMontageBlendingOutEvent *)(pTVar2->AllocatorInstance).Data;
    iVar6 = (this->QueuedMontageBlendingOutEvents).ArrayNum;
    if (*piVar1 < 0) {
      DestructItems<FQueuedMontageBlendingOutEvent,int>(pFVar7,iVar6);
      (this->QueuedMontageBlendingOutEvents).ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x28,8,0,&pTVar2->AllocatorInstance,0,piVar1);
      }
    }
    else {
      DestructItems<FQueuedMontageBlendingOutEvent,int>(pFVar7,iVar6);
      (this->QueuedMontageBlendingOutEvents).ArrayNum = 0;
    }
  }
  iVar6 = (this->QueuedMontageBlendedInEvents).ArrayNum;
  if (0 < iVar6) {
    pTVar3 = &this->QueuedMontageBlendedInEvents;
    pFVar13 = (pTVar3->AllocatorInstance).Data;
    pFVar17 = pFVar13 + (longlong)iVar6 * 0x20;
    pFVar16 = pFVar13 + 0x10;
    while( true ) {
      if ((this->QueuedMontageBlendedInEvents).ArrayNum != iVar6) {
        `TCheckedPointerIterator<FQueuedMontageBlendedInEvent,int,0>::operator!='::__l2::<lambda_1>
        ::operator()(&local_res8);
      }
      if (pFVar13 == pFVar17) break;
      uVar8 = *(undefined8 *)pFVar13;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(pFVar16 + -8),&local_48)
      ;
      if ((*(int *)(pFVar16 + 8) != 0) &&
         (plVar9 = *(longlong **)pFVar16, plVar9 != (longlong *)0x0)) {
        (**(code **)(*plVar9 + 0x68))(plVar9,uVar8);
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_48);
      local_res8 = *(undefined8 *)pFVar13;
      TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
                ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->OnMontageBlendedIn,
                 &local_res8);
      pFVar13 = pFVar13 + 0x20;
      pFVar16 = pFVar16 + 0x20;
    }
    piVar1 = &(this->QueuedMontageBlendedInEvents).ArrayMax;
    pFVar10 = (FQueuedMontageBlendedInEvent *)(pTVar3->AllocatorInstance).Data;
    iVar6 = (this->QueuedMontageBlendedInEvents).ArrayNum;
    if (*piVar1 < 0) {
      DestructItems<FQueuedMontageBlendedInEvent,int>(pFVar10,iVar6);
      (this->QueuedMontageBlendedInEvents).ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x20,8,0,&pTVar3->AllocatorInstance,0,piVar1);
      }
    }
    else {
      DestructItems<FQueuedMontageBlendedInEvent,int>(pFVar10,iVar6);
      (this->QueuedMontageBlendedInEvents).ArrayNum = 0;
    }
  }
  iVar6 = (this->QueuedMontageSectionChangedEvents).ArrayNum;
  if (0 < iVar6) {
    pTVar4 = &this->QueuedMontageSectionChangedEvents;
    pFVar14 = (FQueuedMontageSectionChangedEvent *)(pTVar4->AllocatorInstance).Data;
    pFVar18 = pFVar14 + iVar6;
    while( true ) {
      if ((this->QueuedMontageSectionChangedEvents).ArrayNum != iVar6) {
        `TCheckedPointerIterator<FQueuedMontageSectionChangedEvent,int,0>::operator!='::__l2::
        <lambda_1>::operator()(&local_res8);
      }
      if (pFVar14 == pFVar18) break;
      TriggerMontageSectionChangedEvent(this,pFVar14);
      pFVar14 = pFVar14 + 1;
    }
    piVar1 = &(this->QueuedMontageSectionChangedEvents).ArrayMax;
    pFVar14 = (FQueuedMontageSectionChangedEvent *)(pTVar4->AllocatorInstance).Data;
    iVar6 = (this->QueuedMontageSectionChangedEvents).ArrayNum;
    if (*piVar1 < 0) {
      DestructItems<FQueuedMontageSectionChangedEvent,int>(pFVar14,iVar6);
      (this->QueuedMontageSectionChangedEvents).ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x30,8,0,&pTVar4->AllocatorInstance,0,piVar1);
      }
    }
    else {
      DestructItems<FQueuedMontageSectionChangedEvent,int>(pFVar14,iVar6);
      (this->QueuedMontageSectionChangedEvents).ArrayNum = 0;
    }
  }
  iVar6 = (this->QueuedMontageEndedEvents).ArrayNum;
  if (0 < iVar6) {
    pTVar5 = &this->QueuedMontageEndedEvents;
    pFVar15 = (FQueuedMontageEndedEvent *)(pTVar5->AllocatorInstance).Data;
    pFVar11 = pFVar15 + iVar6;
    while( true ) {
      if ((this->QueuedMontageEndedEvents).ArrayNum != iVar6) {
        `TCheckedPointerIterator<FQueuedMontageEndedEvent,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_res8);
      }
      if (pFVar15 == pFVar11) break;
      TriggerMontageEndedEvent(this,pFVar15);
      pFVar15 = pFVar15 + 1;
    }
    piVar1 = &(this->QueuedMontageEndedEvents).ArrayMax;
    pFVar11 = (FQueuedMontageEndedEvent *)(pTVar5->AllocatorInstance).Data;
    iVar6 = (this->QueuedMontageEndedEvents).ArrayNum;
    if (*piVar1 < 0) {
      DestructItems<FQueuedMontageEndedEvent,int>(pFVar11,iVar6);
      (this->QueuedMontageEndedEvents).ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x28,8,0,&pTVar5->AllocatorInstance,0,piVar1);
      }
    }
    else {
      DestructItems<FQueuedMontageEndedEvent,int>(pFVar11,iVar6);
      (this->QueuedMontageEndedEvents).ArrayNum = 0;
    }
  }
  return;
}

// TriggerSingleAnimNotify @ 14747d410

void __thiscall
UAnimInstance::TriggerSingleAnimNotify(UAnimInstance *this,FAnimNotifyEventReference *param_1)

{
  int iVar1;
  FAnimNotifyEvent *this_00;
  UAnimNotify *pUVar2;
  code *pcVar3;
  char cVar4;
  UClass *pUVar5;
  USkeletalMeshComponent *pUVar6;
  TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *this_01;
  longlong lVar7;
  FName local_res10;
  code *local_48;
  UAnimInstance **local_40;
  UAnimInstance *local_38;
  FAnimNotifyEvent *local_30;
  FName local_28;
  
  if ((param_1->NotifySource).field0_0x0.DebugPtr == (UObject *)0x0) {
    return;
  }
  this_00 = param_1->Notify;
  if (this_00 == (FAnimNotifyEvent *)0x0) {
    return;
  }
  if ((this_00->NotifyStateClass).field0_0x0.DebugPtr != (UAnimNotifyState *)0x0) {
    return;
  }
  cVar4 = (**(code **)(*(longlong *)this + 0x368))(this,this_00);
  if (cVar4 != '\0') {
    return;
  }
  if ((this_00->Notify).field0_0x0.DebugPtr == (UAnimNotify *)0x0) {
    local_res10.ComparisonIndex.Value = 0;
    local_res10.Number = 0;
    if (this_00->NotifyName == (FName)0x0) {
      return;
    }
    FAnimNotifyEvent::GetNotifyEventName(this_00,(UMirrorDataTable *)&local_res10);
    local_28 = local_res10;
    local_38 = this;
    local_30 = this_00;
    this_01 = TMapBase<FName,TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,0>_>
              ::Find((TMapBase<FName,TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,0>_>
                      *)&this->ExternalNotifyHandlers,local_res10);
    if (this_01 != (TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)0x0) {
      TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast(this_01);
    }
    if (this->bPropagateNotifiesToLinkedInstances != '\0') {
      pUVar6 = GetSkelMeshComponent(this);
      local_40 = &local_38;
      local_48 = UE::Core::Private::Function::
                 TFunctionRefCaller<`UAnimInstance::TriggerSingleAnimNotify'::__l16::<lambda_1>,void,UAnimInstance_*>
                 ::Call;
      USkeletalMeshComponent::ForEachAnimInstance
                (pUVar6,(TFunctionRef<void___cdecl(UAnimInstance_*)> *)&local_48);
      return;
    }
    `UAnimInstance::TriggerSingleAnimNotify'::__l16::<lambda_1>::operator()(&local_38,this);
    return;
  }
  FAnimTrace::OutputAnimNotify(this,this_00,Event);
  pUVar2 = (this_00->Notify).field0_0x0.DebugPtr;
  lVar7 = pUVar2->_padding_;
  pcVar3 = *(code **)(pUVar2->_padding_ + 0x2c0);
  if (lVar7 != 0) {
    pUVar5 = Z_Construct_UClass_UAnimSequenceBase_NoRegister();
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)(lVar7 + 0x10) + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar5->_padding_)) goto LAB_14747d4b7;
  }
  lVar7 = 0;
LAB_14747d4b7:
  pUVar6 = GetSkelMeshComponent(this);
  (*pcVar3)(pUVar2,pUVar6,lVar7,param_1);
  return;
}

// TriggerSingleAnimNotify @ 14747d580

void __thiscall
UAnimInstance::TriggerSingleAnimNotify(UAnimInstance *this,FAnimNotifyEvent *param_1)

{
  FAnimNotifyEventReference local_38;
  
  local_38.ContextData.Object =
       (TArray<TUniquePtr<UE::Anim::IAnimNotifyEventContextDataInterface_const_,TDefaultDelete<UE::Anim::IAnimNotifyEventContextDataInterface_const_>_>,TSizedDefaultAllocator<32>_>
        *)0x0;
  local_38.ContextData.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0
  ;
  local_38.MirrorTable.field0_0x0.DebugPtr = (TObjectPtr<UMirrorDataTable_const_>_u_0)0x0;
  local_38.Notify = param_1;
  local_38.NotifySource.field0_0x0 = (TObjectPtr<UObject_const_>_u_0)this;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (this != (UAnimInstance *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)this);
  }
  local_38.CurrentAnimTime = 0.0;
  local_38.bActiveContext = false;
  TriggerSingleAnimNotify(this,&local_38);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38.ContextData.SharedReferenceCount.ReferenceController);
  return;
}

// TryGetPawnOwner @ 14747d610

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

APawn * __thiscall UAnimInstance::TryGetPawnOwner(UAnimInstance *this)

{
  int iVar1;
  USkeletalMeshComponent *pUVar2;
  UClass *pUVar3;
  APawn *pAVar4;
  
  pUVar2 = GetSkelMeshComponent(this);
  pAVar4 = (APawn *)pUVar2->_padding_;
  if (pAVar4 != (APawn *)0x0) {
    pUVar3 = Z_Construct_UClass_APawn_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((*(int *)(pAVar4->_padding_ + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pAVar4->_padding_ + 0x30) + (longlong)iVar1 * 8)
        != &pUVar3->_padding_)) {
      pAVar4 = (APawn *)0x0;
    }
    return pAVar4;
  }
  return (APawn *)0x0;
}

// UninitializeAnimation @ 14747ece0

void __thiscall UAnimInstance::UninitializeAnimation(UAnimInstance *this)

{
  undefined1 *puVar1;
  int *piVar2;
  TMap<UAnimMontage_*,FAnimMontageInstance_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UAnimMontage_*,FAnimMontageInstance_*,0>_>
  *this_00;
  undefined8 *puVar3;
  FAnimMontageInstance *pFVar4;
  FScriptContainerElement *pFVar5;
  UAnimNotifyState *pUVar6;
  FAnimNotifyEventReference *pFVar7;
  code *pcVar8;
  bool bVar9;
  char cVar10;
  uint uVar11;
  FAnimInstanceProxy *pFVar12;
  FAlphaBlend *pFVar13;
  USkeletalMeshComponent *pUVar14;
  FUObjectItem *pFVar15;
  UClass *pUVar16;
  IAnimClassInterface *pIVar17;
  longlong *plVar18;
  FAnimNode_LinkedAnimLayer *this_01;
  UScriptStruct *pUVar19;
  uint uVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  undefined8 *puVar23;
  FAnimNotifyEvent *pFVar24;
  int iVar25;
  longlong lVar26;
  ulonglong uVar27;
  undefined1 local_res8 [8];
  FAnimSubsystem_SharedLinkedAnimLayers *local_res10;
  FAnimSubsystem_SharedLinkedAnimLayers **local_98;
  UScriptStruct *local_90;
  code *local_88;
  FAnimSubsystem_SharedLinkedAnimLayers ***local_80;
  FAlphaBlend local_78;
  
  this->bUninitialized = '\x01';
  (**(code **)(*(longlong *)this + 0x340))();
  if (this->AnimInstanceProxy != (FAnimInstanceProxy *)0x0) {
    pFVar12 = GetProxyOnGameThread<FAnimInstanceProxy>(this);
    (**(code **)(*(longlong *)pFVar12 + 0x10))(pFVar12,this);
  }
  iVar25 = (this->MontageInstances).ArrayNum + -1;
  if (-1 < iVar25) {
    lVar26 = (longlong)iVar25 * 8;
    do {
      if (((this->MontageInstances).ArrayNum <= iVar25) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pFVar4 = *(FAnimMontageInstance **)((this->MontageInstances).AllocatorInstance.Data + lVar26);
      pFVar13 = FAlphaBlend::FAlphaBlend(&local_78,0.0);
      FAnimMontageInstance::Stop(pFVar4,pFVar13,true);
      if ((this->bUninitialized != '\0') &&
         (MontageCVars::bEarlyOutMontageWhenUninitialized != false)) break;
      lVar26 = lVar26 + -8;
      iVar25 = iVar25 + -1;
    } while (-1 < iVar25);
  }
  uVar22 = 0;
  uVar21 = uVar22;
  uVar27 = uVar22;
  if (0 < (this->MontageInstances).ArrayNum) {
    do {
      uVar20 = (uint)uVar21;
      uVar11 = 0;
      if ((int)uVar20 < (this->MontageInstances).ArrayNum) {
        uVar11 = ~uVar20 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pFVar4 = *(FAnimMontageInstance **)((this->MontageInstances).AllocatorInstance.Data + uVar27);
      if (pFVar4 == (FAnimMontageInstance *)0x0) {
        bVar9 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_8124036945119542938>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimInstance.cpp"
                           ,0x166,"MontageInstance != nullptr");
        if (bVar9) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
      }
      else {
        ClearMontageInstanceReferences(this,pFVar4);
        FAnimMontageInstance::_scalar_deleting_destructor_(pFVar4,1);
      }
      uVar21 = (ulonglong)(uVar20 + 1);
      uVar27 = uVar27 + 8;
    } while ((int)(uVar20 + 1) < (this->MontageInstances).ArrayNum);
    piVar2 = &(this->MontageInstances).ArrayMax;
    (this->MontageInstances).ArrayNum = 0;
    if (*piVar2 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,&(this->MontageInstances).AllocatorInstance,0,piVar2);
    }
    this_00 = &this->ActiveMontagesMap;
    bVar9 = 1 < *(int *)&(this->ActiveMontagesMap).field_0x48;
    if (!bVar9) {
      TSet<TTuple<UAnimMontage_*,FAnimMontageInstance_*>,TDefaultMapHashableKeyFuncs<UAnimMontage_*,FAnimMontageInstance_*,0>,FDefaultSetAllocator>
      ::UnhashElements((TSet<TTuple<UAnimMontage_*,FAnimMontageInstance_*>,TDefaultMapHashableKeyFuncs<UAnimMontage_*,FAnimMontageInstance_*,0>,FDefaultSetAllocator>
                        *)this_00);
    }
    puVar1 = &(this->ActiveMontagesMap).field_0xc;
    *(undefined4 *)&(this->ActiveMontagesMap).field_0x8 = 0;
    if (*(int *)puVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,0,(ForAnyElementType *)this_00,0,(int *)puVar1);
    }
    *(undefined4 *)&(this->ActiveMontagesMap).field_0x30 = 0xffffffff;
    *(undefined4 *)&(this->ActiveMontagesMap).field_0x34 = 0;
    iVar25 = *(int *)&(this->ActiveMontagesMap).field_0x2c;
    *(undefined4 *)&(this->ActiveMontagesMap).field_0x28 = 0;
    if ((iVar25 < 0) || (0x80 < iVar25)) {
      *(undefined4 *)&(this->ActiveMontagesMap).field_0x2c = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)&(this->ActiveMontagesMap).field_0x10,0);
    }
    if (bVar9) {
      *(undefined4 *)&(this->ActiveMontagesMap).field_0x48 = 1;
      TSet<TTuple<UAnimMontage_*,FAnimMontageInstance_*>,TDefaultMapHashableKeyFuncs<UAnimMontage_*,FAnimMontageInstance_*,0>,FDefaultSetAllocator>
      ::Rehash((TSet<TTuple<UAnimMontage_*,FAnimMontageInstance_*>,TDefaultMapHashableKeyFuncs<UAnimMontage_*,FAnimMontageInstance_*,0>,FDefaultSetAllocator>
                *)this_00);
    }
    TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
              ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)
               &this->OnAllMontageInstancesEnded,(void *)0x0);
  }
  pUVar14 = GetSkelMeshComponent(this);
  if (((GIsReinstancing == (atomic<bool>)0x0) && (pUVar14 != (USkeletalMeshComponent *)0x0)) &&
     (uVar21 = uVar22, 0 < (this->ActiveAnimNotifyState).ArrayNum)) {
    do {
      uVar20 = (uint)uVar22;
      uVar11 = 0;
      if ((int)uVar20 < (this->ActiveAnimNotifyState).ArrayNum) {
        uVar11 = ~uVar20 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pFVar24 = (FAnimNotifyEvent *)((this->ActiveAnimNotifyState).AllocatorInstance.Data + uVar21);
      uVar11 = 0;
      if ((int)uVar20 < (this->ActiveAnimNotifyEventReference).ArrayNum) {
        uVar11 = ~uVar20 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pFVar5 = (this->ActiveAnimNotifyEventReference).AllocatorInstance.Data;
      cVar10 = (**(code **)(*(longlong *)this + 0x388))
                         (this,(pFVar24->NotifyStateClass).field0_0x0.DebugPtr);
      if ((cVar10 != '\0') &&
         (pFVar15 = FUObjectArray::IndexToObject
                              (&GUObjectArray,
                               *(int *)((longlong)
                                        &((pFVar24->NotifyStateClass).field0_0x0.DebugPtr)->
                                         _padding_ + 4)),
         ((ulonglong)((pFVar15->field0_0x0).FlagsAndRefCount >> 0x20) >> 0x1c & 1) == 0)) {
        FAnimTrace::OutputAnimNotify(this,pFVar24,End);
        pUVar6 = (pFVar24->NotifyStateClass).field0_0x0.DebugPtr;
        lVar26 = pUVar6->_padding_;
        pcVar8 = *(code **)(pUVar6->_padding_ + 0x2e0);
        if (lVar26 == 0) {
LAB_14747f0f1:
          lVar26 = 0;
        }
        else {
          pUVar16 = Z_Construct_UClass_UAnimSequenceBase_NoRegister();
          iVar25 = (int)pUVar16->_padding_;
          if ((*(int *)(*(longlong *)(lVar26 + 0x10) + 0x38) < iVar25) ||
             ((longlong *)
              *(undefined1 **)
               (*(longlong *)(*(longlong *)(lVar26 + 0x10) + 0x30) + (longlong)iVar25 * 8) !=
              &pUVar16->_padding_)) goto LAB_14747f0f1;
        }
        (*pcVar8)(pUVar6,pUVar14,lVar26,pFVar5 + (longlong)(int)uVar20 * 0x30);
      }
      uVar22 = (ulonglong)(uVar20 + 1);
      uVar21 = uVar21 + 0xb8;
    } while ((int)(uVar20 + 1) < (this->ActiveAnimNotifyState).ArrayNum);
  }
  piVar2 = &(this->ActiveAnimNotifyState).ArrayMax;
  pFVar24 = (FAnimNotifyEvent *)(this->ActiveAnimNotifyState).AllocatorInstance.Data;
  iVar25 = (this->ActiveAnimNotifyState).ArrayNum;
  if ((this->ActiveAnimNotifyState).ArrayMax < 0) {
    DestructItems<FAnimNotifyEvent,int>(pFVar24,iVar25);
    (this->ActiveAnimNotifyState).ArrayNum = 0;
    if (*piVar2 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xb8,8,0,&(this->ActiveAnimNotifyState).AllocatorInstance,0,piVar2);
    }
  }
  else {
    DestructItems<FAnimNotifyEvent,int>(pFVar24,iVar25);
    (this->ActiveAnimNotifyState).ArrayNum = 0;
  }
  piVar2 = &(this->ActiveAnimNotifyEventReference).ArrayMax;
  pFVar7 = (FAnimNotifyEventReference *)
           (this->ActiveAnimNotifyEventReference).AllocatorInstance.Data;
  iVar25 = (this->ActiveAnimNotifyEventReference).ArrayNum;
  if ((this->ActiveAnimNotifyEventReference).ArrayMax < 0) {
    DestructItems<FAnimNotifyEventReference,int>(pFVar7,iVar25);
    (this->ActiveAnimNotifyEventReference).ArrayNum = 0;
    if (*piVar2 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x30,8,0,&(this->ActiveAnimNotifyEventReference).AllocatorInstance,0,piVar2);
    }
  }
  else {
    DestructItems<FAnimNotifyEventReference,int>(pFVar7,iVar25);
    (this->ActiveAnimNotifyEventReference).ArrayNum = 0;
  }
  FAnimNotifyQueue::Reset(&this->NotifyQueue,pUVar14);
  TSet<TTuple<FName,FInertializationRequest>,TDefaultMapHashableKeyFuncs<FName,FInertializationRequest,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<FName,FInertializationRequest>,TDefaultMapHashableKeyFuncs<FName,FInertializationRequest,0>,FDefaultSetAllocator>
           *)&this->SlotGroupInertializationRequestDataMap);
  pIVar17 = IAnimClassInterface::GetFromClass(*(UClass **)&this->field_0x10);
  if (pIVar17 != (IAnimClassInterface *)0x0) {
    plVar18 = (longlong *)(**(code **)((longlong)*pIVar17 + 0x40))(pIVar17);
    puVar23 = (undefined8 *)*plVar18;
    lVar26 = plVar18[1];
    puVar3 = puVar23 + (int)lVar26;
    while( true ) {
      if ((int)plVar18[1] != (int)lVar26) {
        `TCheckedPointerIterator<FStructProperty_*_const,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      if (puVar23 == puVar3) break;
      this_01 = FProperty::ContainerUObjectPtrToValuePtrInternal
                          ((FProperty *)*puVar23,(UObject *)this,0);
      if (this_01 != (FAnimNode_LinkedAnimLayer *)0x0) {
        FAnimNode_LinkedAnimLayer::OnUninitializeAnimInstance(this_01,this);
      }
      puVar23 = puVar23 + 1;
    }
  }
  if (GIsReinstancing == (atomic<bool>)0x0) {
    pUVar19 = FAnimSubsystem_SharedLinkedAnimLayers::StaticStruct();
    pIVar17 = IAnimClassInterface::GetFromClass(*(UClass **)&this->field_0x10);
    if (pIVar17 != (IAnimClassInterface *)0x0) {
      local_98 = &local_res10;
      local_res10 = (FAnimSubsystem_SharedLinkedAnimLayers *)0x0;
      local_80 = &local_98;
      local_88 = UE::Core::Private::Function::
                 TFunctionRefCaller<`UAnimInstance::FindSubsystem'::__l5::<lambda_1>,enum_EAnimSubsystemEnumeration,FAnimSubsystemInstanceContext_const_&>
                 ::Call;
      local_90 = pUVar19;
      (**(code **)((longlong)*pIVar17 + 0xb0))(pIVar17,this,&local_88);
      if (local_res10 != (FAnimSubsystem_SharedLinkedAnimLayers *)0x0) {
        FAnimSubsystem_SharedLinkedAnimLayers::Reset(local_res10);
      }
    }
  }
  return;
}

// UnlinkAnimClassLayers @ 14747f2f0

void __thiscall
UAnimInstance::UnlinkAnimClassLayers(UAnimInstance *this,TSubclassOf<UAnimInstance> param_1)

{
  USkeletalMeshComponent *pUVar1;
  undefined1 local_res18 [8];
  UObject *local_res20;
  code *local_18;
  undefined1 *local_10;
  
  pUVar1 = GetSkelMeshComponent(this);
  if ((pUVar1->_padding_ & 1) != 0) {
    local_10 = local_res18;
    local_res20 = *(UObject **)param_1.Class.field0_0x0;
    local_18 = UE::Core::Private::Function::
               TFunctionRefCaller<`UAnimInstance::UnlinkAnimClassLayers'::__l2::<lambda_1>,UClass_*,UClass_*,FAnimNode_LinkedAnimLayer_*>
               ::Call;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res20 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_res20);
    }
    PerformLinkedLayerOverlayOperation
              (this,(TSubclassOf<UAnimInstance>)&local_res20,
               (TFunctionRef<UClass_*___cdecl(UClass_*,FAnimNode_LinkedAnimLayer_*)> *)&local_18,
               false);
  }
  return;
}

// UnlockAIResources @ 14747f370

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UAnimInstance::UnlockAIResources(UAnimInstance *this,bool param_1,bool param_2)

{
  FName local_res20;
  FString local_18;
  
  if (1 < (byte)LogAnimation._0_1_) {
    local_res20.ComparisonIndex.Value = *(uint *)&this->field_0x18;
    local_res20.Number = *(uint *)&this->field_0x1c;
    ::FName::ToString(&local_res20,&local_18);
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAnimation);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// UpdateAnimation @ 14747f9f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UAnimInstance::UpdateAnimation
          (UAnimInstance *this,float param_1,bool param_2,EUpdateAnimationFlag param_3)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  TConsoleVariableData<int> *pTVar10;
  TConsoleVariableData<int> *pTVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  char cVar15;
  bool bVar16;
  USkeletalMeshComponent *pUVar17;
  FName *pFVar18;
  FThreadSafeStaticStat<FStat_STAT_UpdateAnimation> FVar19;
  FAnimInstanceProxy *pFVar20;
  IAnimClassInterface *pIVar21;
  FThreadSafeStaticStat<FStat_STAT_NativeUpdateAnimation> FVar22;
  FThreadStats *pFVar23;
  FThreadStatsPool *pFVar24;
  FThreadSafeStaticStat<FStat_STAT_BlueprintUpdateAnimation> FVar25;
  UFunction *pUVar26;
  UClass *this_00;
  FScriptContainerElement *pFVar27;
  FName FVar28;
  FName FVar29;
  undefined1 local_180 [4];
  float local_17c;
  FLLMScope local_178;
  FColor_u_0 local_174;
  FColor_u_0 local_170;
  FColor_u_0 local_16c;
  FName local_168;
  byte local_160;
  FName local_158;
  FName local_150;
  FName local_148;
  FName local_140;
  FName local_130;
  FName local_120;
  FString local_110;
  FName local_100;
  FName local_f8;
  LARGE_INTEGER local_f0;
  LARGE_INTEGER local_e8;
  FMemScope local_e0;
  FString local_d8;
  FStatMessage local_c8;
  FStatMessage local_b8;
  UAnimInstance *local_a8;
  float local_a0;
  code *local_98;
  UAnimInstance **local_90;
  UAnimInstance *local_88;
  float local_80;
  code *local_78;
  UAnimInstance **local_70;
  FName local_68;
  FName local_60;
  FName local_58 [4];
  
  FLLMScope::FLLMScope(&local_178,Animation,false,None,Default,true);
  FMemScope::FMemScope(&local_e0,Animation,true);
  if (this->bUpdatingAnimation != false) {
    local_100.ComparisonIndex.Value = *(uint *)&this->field_0x18;
    local_100.Number = *(uint *)&this->field_0x1c;
    ::FName::ToString(&local_100,&local_d8);
    pUVar17 = GetSkelMeshComponent(this);
    if (pUVar17 == (USkeletalMeshComponent *)0x0) {
      ::FString::FString(&local_110,L"None");
    }
    else {
      local_f8 = (FName)pUVar17->_padding_;
      ::FName::ToString(&local_f8,&local_110);
    }
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("!bUpdatingAnimation",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimInstance.cpp"
                        ,0x215,
                        L"UpdateAnimation already in progress, circular detected for SkeletalMeshComponent [%s], AnimInstance [%s]"
                       );
    if (local_110.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_110.Data.AllocatorInstance.Data);
    }
    if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d8.Data.AllocatorInstance.Data);
    }
    if (bVar12) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  bVar12 = this->bUpdatingAnimation;
  this->bUpdatingAnimation = true;
  if (this->bUpdateAnimationEnabled == '\0') goto LAB_1474804a5;
  bVar16 = false;
  bVar14 = false;
  FVar19 = StatPtr_STAT_UpdateAnimation;
  if (StatPtr_STAT_UpdateAnimation == (FThreadSafeStaticStat<FStat_STAT_UpdateAnimation>)0x0) {
    pFVar18 = ::FName::FName(&local_68,"STAT_UpdateAnimation");
    FVar19 = (FThreadSafeStaticStat<FStat_STAT_UpdateAnimation>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_UpdateAnimation,*pFVar18,
                        L"UpdateAnimation","STATGROUP_Anim","STATCAT_Advanced",L"Anim",true,true,
                        ST_int64,true,false,MCR_Invalid);
  }
  FVar29 = *(FName *)FVar19;
  bVar6 = false;
  bVar8 = false;
  local_140.ComparisonIndex.Value = 0;
  local_140.Number = 0;
  if ((FVar29.ComparisonIndex.Value.Value == 0) && (FVar29.Number == 0)) {
LAB_14747fc58:
    bVar7 = false;
    FVar29 = local_140;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_174.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_174._s_0,(char *)*(FName *)((longlong)FVar19 + 0x10));
      bVar6 = false;
      bVar8 = true;
      if (-1 < CpuChannel->Enabled) {
        local_158.ComparisonIndex.Value = FVar29.ComparisonIndex.Value.Value;
        local_158.Number = FVar29.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_158,(wchar_t *)*(FName *)((longlong)FVar19 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimInstance.cpp"
                   ,0x21e);
        bVar6 = true;
        bVar8 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14747fc58;
    FThreadStats::AddMessage(FVar29,CycleScopeStart);
    bVar7 = true;
  }
  FScopeCycleCounterUObject::FScopeCycleCounterUObject
            ((FScopeCycleCounterUObject *)&local_168,(UObjectBaseUtility *)this);
  pFVar20 = GetProxyOnGameThread<FAnimInstanceProxy>(this);
  if (this->PendingDynamicResetTeleportType != None) {
    FAnimInstanceProxy::ResetDynamics(pFVar20,this->PendingDynamicResetTeleportType);
    this->PendingDynamicResetTeleportType = None;
  }
  pUVar17 = GetSkelMeshComponent(this);
  if ((pUVar17 == (USkeletalMeshComponent *)0x0) ||
     ((bVar13 = USkeletalMeshComponent::ShouldOnlyTickMontages(pUVar17,param_1), !bVar13 &&
      ((bVar13 = USkeletalMeshComponent::ShouldOnlyTickMontagesAndRefreshBones(pUVar17,param_1),
       !bVar13 || (0 < (this->MontageInstances).ArrayNum)))))) {
    (**(code **)(*(longlong *)this + 0x370))(this,param_1);
    UpdateMontage(this,param_1);
    UpdateMontageSyncGroup(this);
    UpdateMontageEvaluationData(this);
    pIVar21 = IAnimClassInterface::GetFromClass(*(UClass **)&this->field_0x10);
    if (pIVar21 != (IAnimClassInterface *)0x0) {
      local_90 = &local_a8;
      local_98 = UE::Core::Private::Function::
                 TFunctionRefCaller<`UAnimInstance::UpdateAnimation'::__l31::<lambda_1>,enum_EAnimSubsystemEnumeration,FAnimSubsystemInstanceContext_const_&>
                 ::Call;
      local_a8 = this;
      local_a0 = param_1;
      (**(code **)((longlong)*pIVar21 + 0xb0))(pIVar21,this,&local_98);
    }
    FVar22 = StatPtr_STAT_NativeUpdateAnimation;
    if (StatPtr_STAT_NativeUpdateAnimation ==
        (FThreadSafeStaticStat<FStat_STAT_NativeUpdateAnimation>)0x0) {
      pFVar18 = ::FName::FName(&local_60,"STAT_NativeUpdateAnimation");
      FVar22 = (FThreadSafeStaticStat<FStat_STAT_NativeUpdateAnimation>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NativeUpdateAnimation,*pFVar18,
                          L"NativeUpdateAnimation","STATGROUP_Anim","STATCAT_Advanced",L"Anim",true,
                          true,ST_int64,true,false,MCR_Invalid);
    }
    FVar28 = *(FName *)FVar22;
    local_130.ComparisonIndex.Value = 0;
    local_130.Number = 0;
    if ((FVar28.ComparisonIndex.Value.Value == 0) && (FVar28.Number == 0)) {
LAB_14747ff06:
      bVar13 = false;
      FVar28 = local_130;
    }
    else {
      if (GCycleStatsShouldEmitNamedEvents != 0) {
        local_170.Bits = 0;
        FGenericPlatformMisc::BeginNamedEvent
                  ((FColor *)&local_170._s_0,(char *)*(FName *)((longlong)FVar22 + 0x10));
        bVar16 = false;
        bVar14 = true;
        if (-1 < CpuChannel->Enabled) {
          local_150.ComparisonIndex.Value = FVar28.ComparisonIndex.Value.Value;
          local_150.Number = FVar28.Number;
          FCpuProfilerTrace::OutputBeginDynamicEventWithId
                    (&local_150,(wchar_t *)*(FName *)((longlong)FVar22 + 8),
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimInstance.cpp"
                     ,0x282);
          bVar16 = true;
          bVar14 = true;
        }
      }
      if (FThreadStats::bPrimaryEnable == false) goto LAB_14747ff06;
      FThreadStats::AddMessage(FVar28,CycleScopeStart);
      bVar16 = false;
      bVar13 = true;
    }
    if (__CsvProfilerStat643 == false) {
      FCsvProfilerTrace::OutputInlineStat("NativeUpdate",_GCsvCategory_Animation.Index);
      __CsvProfilerStat643 = true;
    }
    uVar9 = _GCsvCategory_Animation.Index;
    FCsvProfiler::BeginStat("NativeUpdate",_GCsvCategory_Animation.Index,"CSV_NativeUpdate");
    (**(code **)(*(longlong *)this + 0x328))(this,param_1);
    FCsvProfiler::EndStat("NativeUpdate",uVar9);
    if (bVar14) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if (bVar16) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if ((((bVar13) && (FVar28 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar23 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar23 == (FThreadStats *)0x0) {
        pFVar24 = FThreadStatsPool::Get();
        pFVar23 = FThreadStatsPool::GetFromPool(pFVar24);
      }
      if (pFVar23->bWaitForExplicitFlush < pFVar23->ScopeCount) {
        local_c8.NameAndInfo.Index = FVar28.ComparisonIndex.Value;
        local_c8.NameAndInfo.Number = FVar28.Number & 0xffff6fff | 0x6000;
        QueryPerformanceCounter(&local_f0);
        local_c8.StatData.Pad[4] = '\0';
        local_c8.StatData.Pad[5] = '\0';
        local_c8.StatData.Pad[6] = '\0';
        local_c8.StatData.Pad[7] = '\0';
        local_c8.StatData.Pad[0] = local_f0.s.LowPart._0_1_;
        local_c8.StatData.Pad[1] = local_f0.s.LowPart._1_1_;
        local_c8.StatData.Pad[2] = local_f0.s.LowPart._2_1_;
        local_c8.StatData.Pad[3] = local_f0.s.LowPart._3_1_;
        FThreadStats::AddStatMessage(pFVar23,&local_c8);
        piVar1 = &pFVar23->ScopeCount;
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FThreadStats::Flush(pFVar23,false,false);
        }
        else if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(pFVar23,false,false);
        }
      }
    }
    FVar25 = StatPtr_STAT_BlueprintUpdateAnimation;
    if (StatPtr_STAT_BlueprintUpdateAnimation ==
        (FThreadSafeStaticStat<FStat_STAT_BlueprintUpdateAnimation>)0x0) {
      pFVar18 = ::FName::FName(local_58,"STAT_BlueprintUpdateAnimation");
      FVar25 = (FThreadSafeStaticStat<FStat_STAT_BlueprintUpdateAnimation>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_BlueprintUpdateAnimation,
                          *pFVar18,L"BlueprintUpdateAnimation","STATGROUP_Anim","STATCAT_Advanced",
                          L"Anim",true,true,ST_int64,true,false,MCR_Invalid);
    }
    FVar28 = *(FName *)FVar25;
    bVar14 = false;
    bVar16 = false;
    local_120.ComparisonIndex.Value = 0;
    local_120.Number = 0;
    if ((FVar28.ComparisonIndex.Value.Value == 0) && (FVar28.Number == 0)) {
LAB_147480148:
      bVar13 = false;
      FVar28 = local_120;
    }
    else {
      if (GCycleStatsShouldEmitNamedEvents != 0) {
        local_16c.Bits = 0;
        FGenericPlatformMisc::BeginNamedEvent
                  ((FColor *)&local_16c._s_0,(char *)*(FName *)((longlong)FVar25 + 0x10));
        bVar14 = false;
        bVar16 = true;
        if (-1 < CpuChannel->Enabled) {
          local_148.ComparisonIndex.Value = FVar28.ComparisonIndex.Value.Value;
          local_148.Number = FVar28.Number;
          FCpuProfilerTrace::OutputBeginDynamicEventWithId
                    (&local_148,(wchar_t *)*(FName *)((longlong)FVar25 + 8),
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimInstance.cpp"
                     ,0x287);
          bVar14 = true;
          bVar16 = true;
        }
      }
      if (FThreadStats::bPrimaryEnable == false) goto LAB_147480148;
      FThreadStats::AddMessage(FVar28,CycleScopeStart);
      bVar13 = true;
    }
    if (__CsvProfilerStat648 == false) {
      FCsvProfilerTrace::OutputInlineStat("BlueprintUpdate",_GCsvCategory_Animation.Index);
      __CsvProfilerStat648 = true;
    }
    uVar9 = _GCsvCategory_Animation.Index;
    FCsvProfiler::BeginStat("BlueprintUpdate",_GCsvCategory_Animation.Index,"CSV_BlueprintUpdate");
    local_17c = param_1;
    pUVar26 = UObject::FindFunctionChecked
                        ((UObject *)this,NAME_UAnimInstance_BlueprintUpdateAnimation);
    (**(code **)(*(longlong *)this + 0x260))(this,pUVar26);
    FCsvProfiler::EndStat("BlueprintUpdate",uVar9);
    if (bVar16) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if (bVar14) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if (((bVar13) && (FVar28 != (FName)0x0)) &&
       ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
      pFVar23 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar23 == (FThreadStats *)0x0) {
        pFVar24 = FThreadStatsPool::Get();
        pFVar23 = FThreadStatsPool::GetFromPool(pFVar24);
      }
      if (pFVar23->bWaitForExplicitFlush < pFVar23->ScopeCount) {
        local_b8.NameAndInfo.Index = FVar28.ComparisonIndex.Value;
        local_b8.NameAndInfo.Number = FVar28.Number & 0xffff6fff | 0x6000;
        QueryPerformanceCounter(&local_e8);
        local_b8.StatData.Pad[4] = '\0';
        local_b8.StatData.Pad[5] = '\0';
        local_b8.StatData.Pad[6] = '\0';
        local_b8.StatData.Pad[7] = '\0';
        local_b8.StatData.Pad[0] = local_e8.s.LowPart._0_1_;
        local_b8.StatData.Pad[1] = local_e8.s.LowPart._1_1_;
        local_b8.StatData.Pad[2] = local_e8.s.LowPart._2_1_;
        local_b8.StatData.Pad[3] = local_e8.s.LowPart._3_1_;
        FThreadStats::AddStatMessage(pFVar23,&local_b8);
        piVar1 = &pFVar23->ScopeCount;
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FThreadStats::Flush(pFVar23,false,false);
        }
        else if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(pFVar23,false,false);
        }
      }
    }
    pIVar21 = IAnimClassInterface::GetFromClass(*(UClass **)&this->field_0x10);
    if (pIVar21 != (IAnimClassInterface *)0x0) {
      local_70 = &local_88;
      local_78 = UE::Core::Private::Function::
                 TFunctionRefCaller<`UAnimInstance::UpdateAnimation'::__l42::<lambda_2>,enum_EAnimSubsystemEnumeration,FAnimSubsystemInstanceContext_const_&>
                 ::Call;
      local_88 = this;
      local_80 = param_1;
      (**(code **)((longlong)*pIVar21 + 0xb0))(pIVar21,this,&local_78);
    }
    this_00 = Z_Construct_UClass_UEngine_NoRegister();
    if ((this_00->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
      UClass::InternalCreateDefaultObjectWrapper(this_00);
    }
    pTVar11 = CVarForceUseParallelAnimUpdate.Ref;
    if ((((this_00->ClassDefaultObject).field0_0x0.DebugPtr[0x51].field_0x4 & 4) == 0) ||
       (this->bUseMultiThreadedAnimationUpdate == 0)) {
      bVar14 = IsInParallelGameThread();
      if ((!bVar14) &&
         ((bVar14 = IsInGameThread(), !bVar14 &&
          (bVar14 = UE::Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<6409875433831007945>,false,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                               ,0x6c9,"GetShadowIndex() == 0"), bVar14)))) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if (pTVar11->ShadowedValue[0] != 0) goto LAB_14748034e;
      bVar14 = false;
    }
    else {
LAB_14748034e:
      bVar14 = true;
    }
    if (((!param_2) || ((this->RootMotionMode).Value != '\x02')) &&
       (cVar15 = (**(code **)(*(longlong *)this + 0x2c8))(this),
       pTVar11 = CVarUseParallelAnimUpdate.Ref, cVar15 != '\0')) {
      bVar16 = IsInParallelGameThread();
      if (((!bVar16) && (bVar16 = IsInGameThread(), !bVar16)) &&
         (bVar16 = UE::Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<6409875433831007945>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                              ,0x6c9,"GetShadowIndex() == 0"), bVar16)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pTVar10 = CVarUseParallelAnimationEvaluation.Ref;
      if (pTVar11->ShadowedValue[0] != 0) {
        bVar16 = IsInParallelGameThread();
        if (((!bVar16) && (bVar16 = IsInGameThread(), !bVar16)) &&
           (bVar16 = UE::Assert::Private::ExecCheckImplInternal
                               (&bGEnsureHasExecuted<6409875433831007945>,false,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                                ,0x6c9,"GetShadowIndex() == 0"), bVar16)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        if (((pTVar10->ShadowedValue[0] != 0) && (bVar14)) && (param_1 != 0.0)) goto LAB_147480429;
      }
    }
    if (param_3 != ForceParallelUpdate) {
      pFVar20 = GetProxyOnAnyThread<FAnimInstanceProxy>(this);
      FAnimInstanceProxy::UpdateAnimation(pFVar20);
      PostUpdateAnimation(this);
    }
  }
  else {
    ClearQueuedAnimEvents(this,true);
    (pFVar20->UpdateCounter).Counter = -1;
    (pFVar20->UpdateCounter).SkipFrames = 0;
    (pFVar20->UpdateCounter).LastSyncronizedFrame = 0xffffffffffffffff;
    UpdateMontage(this,param_1);
    pFVar27 = (this->MontageInstances).AllocatorInstance.Data;
    iVar3 = (this->MontageInstances).ArrayNum;
    pFVar2 = pFVar27 + (longlong)iVar3 * 8;
    while( true ) {
      if ((this->MontageInstances).ArrayNum != iVar3) {
        `TCheckedPointerIterator<FAnimMontageInstance_*,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_180);
      }
      if (pFVar27 == pFVar2) break;
      lVar4 = *(longlong *)pFVar27;
      *(undefined1 *)(lVar4 + 0xa0) = 0;
      *(undefined4 *)(lVar4 + 0x7c) = 0xfffffffe;
      *(undefined4 *)(lVar4 + 0x84) = 0xfffffffe;
      *(undefined4 *)(lVar4 + 0x98) = 0;
      if (*(int *)(lVar4 + 0x9c) < 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xc,4,0,(ForAnyElementType *)(lVar4 + 0x90),0,(int *)(lVar4 + 0x9c));
      }
      pFVar27 = pFVar27 + 8;
    }
  }
LAB_147480429:
  if ((local_160 & 1) != 0) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if ((local_160 & 2) != 0) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((local_160 & 4) != 0) {
    FThreadStats::AddMessage(local_168,CycleScopeEnd);
  }
  local_160 = 0;
  if (bVar8) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar7) {
    FThreadStats::AddMessage(FVar29,CycleScopeEnd);
  }
LAB_1474804a5:
  this->bUpdatingAnimation = bVar12;
  FMemScope::~FMemScope(&local_e0);
  FLLMScope::~FLLMScope(&local_178);
  return;
}

// UpdateCurvesPostEvaluation @ 147481c30

void __thiscall UAnimInstance::UpdateCurvesPostEvaluation(UAnimInstance *this)

{
  FAnimInstanceProxy *this_00;
  USkeletalMeshComponent *pUVar1;
  
  this_00 = GetProxyOnAnyThread<FAnimInstanceProxy>(this);
  pUVar1 = GetSkelMeshComponent(this);
  FAnimInstanceProxy::UpdateCurvesPostEvaluation(this_00,pUVar1);
  return;
}

// UpdateCurvesToComponents @ 147481c70

void __thiscall
UAnimInstance::UpdateCurvesToComponents(UAnimInstance *this,USkeletalMeshComponent *param_1)

{
  FAnimInstanceProxy *pFVar1;
  
  if (param_1 != (USkeletalMeshComponent *)0x0) {
    pFVar1 = GetProxyOnGameThread<FAnimInstanceProxy>(this);
    USkeletalMeshComponent::ApplyAnimationCurvesToComponent
              (param_1,pFVar1->AnimationCurves + 1,pFVar1->AnimationCurves + 2);
  }
  return;
}

// UpdateCurvesToEvaluationContext @ 147482050

void __thiscall
UAnimInstance::UpdateCurvesToEvaluationContext
          (UAnimInstance *this,FAnimationEvaluationContext *param_1)

{
  FAnimInstanceProxy *this_00;
  
  this_00 = GetProxyOnAnyThread<FAnimInstanceProxy>(this);
  FAnimInstanceProxy::UpdateCurvesToEvaluationContext(this_00,param_1);
  return;
}

// UpdateMontage @ 1474820a0

void __thiscall UAnimInstance::UpdateMontage(UAnimInstance *this,float param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  USkeletalMeshComponent *this_00;
  UAnimInstance *pUVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res8 [8];
  
  if (this->bUseMainInstanceMontageEvaluationData != '\0') {
    this_00 = GetSkelMeshComponent(this);
    pUVar3 = USkeletalMeshComponent::GetAnimInstance(this_00);
    if (pUVar3 != this) {
      return;
    }
  }
  (**(code **)(*(longlong *)this + 0x2e8))(this,param_1);
  (**(code **)(*(longlong *)this + 0x2f0))(this,param_1);
  pFVar4 = (this->MontageInstances).AllocatorInstance.Data;
  iVar2 = (this->MontageInstances).ArrayNum;
  pFVar1 = pFVar4 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->MontageInstances).ArrayNum != iVar2) {
      `TCheckedPointerIterator<FAnimMontageInstance_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar4 == pFVar1) break;
    FAnimTrace::OutputMontage(this,*(FAnimMontageInstance **)pFVar4);
    pFVar4 = pFVar4 + 8;
  }
  return;
}

// UpdateMontageEvaluationData @ 147482150

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UAnimInstance::UpdateMontageEvaluationData(UAnimInstance *this)

{
  int *piVar1;
  TMap<FName,FInertializationRequest,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FInertializationRequest,0>_>
  *this_00;
  float fVar2;
  float fVar3;
  longlong lVar4;
  uint uVar5;
  undefined4 uVar6;
  longlong *plVar7;
  UObject *pUVar8;
  FMontageEvaluationState *pFVar9;
  code *pcVar10;
  float fVar11;
  FScriptContainerElement *pFVar12;
  bool bVar13;
  int iVar14;
  USkeletalMeshComponent *pUVar15;
  UAnimInstance *pUVar16;
  FAnimInstanceProxy *pFVar17;
  FAnimInstanceProxy *pFVar18;
  ulonglong uVar19;
  TArray<FMontageEvaluationState,TSizedDefaultAllocator<32>_> *pTVar20;
  FScriptContainerElement *pFVar21;
  undefined1 local_res8 [8];
  undefined1 local_res10;
  uint local_res18;
  FName local_res20;
  FString local_138;
  FName local_128;
  UObject *local_120;
  FAlphaBlend *local_118;
  UBlendProfile *local_110;
  FScriptContainerElement *local_108;
  FString local_100;
  FMontageEvaluationState local_f0 [2];
  
  if (((this->bUseMainInstanceMontageEvaluationData == '\0') ||
      (pUVar15 = GetSkelMeshComponent(this), pUVar15 == (USkeletalMeshComponent *)0x0)) ||
     (pUVar16 = USkeletalMeshComponent::GetAnimInstance(pUVar15), pUVar16 == this)) {
    pFVar17 = GetProxyOnGameThread<FAnimInstanceProxy>(this);
    if ((pFVar17->bUseMainInstanceMontageEvaluationData == '\0') ||
       (pFVar18 = pFVar17->MainInstanceProxy,
       pFVar17->MainInstanceProxy == (FAnimInstanceProxy *)0x0)) {
      pFVar18 = pFVar17;
    }
    uVar5 = (this->MontageInstances).ArrayNum;
    if ((int)uVar5 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar5);
    }
    (pFVar18->MontageEvaluationData).ArrayNum = 0;
    if ((pFVar18->MontageEvaluationData).ArrayMax < (int)uVar5) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x58,8,uVar5,&(pFVar18->MontageEvaluationData).AllocatorInstance,0,
                 &(pFVar18->MontageEvaluationData).ArrayMax);
    }
    if (5 < (byte)LogAnimMontage._0_1_) {
      pUVar15 = GetSkelMeshComponent(this);
      if (pUVar15->_padding_ == 0) {
        ::FString::FString(&local_138,L"None");
      }
      else {
        local_res20 = *(FName *)(pUVar15->_padding_ + 0x18);
        ::FName::ToString(&local_res20,&local_138);
      }
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogAnimMontage);
      if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_138.Data.AllocatorInstance.Data);
      }
    }
    fVar11 = __real_3727c5ac;
    local_res18 = (this->MontageInstances).ArrayNum;
    uVar19 = (ulonglong)(int)local_res18;
    pFVar21 = (this->MontageInstances).AllocatorInstance.Data;
    local_108 = pFVar21 + uVar19 * 8;
    while( true ) {
      pFVar12 = local_108;
      if ((this->MontageInstances).ArrayNum != (int)uVar19) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<FAnimMontageInstance_*,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      if (pFVar21 == pFVar12) break;
      plVar7 = *(longlong **)pFVar21;
      if ((*plVar7 != 0) &&
         (local_118 = (FAlphaBlend *)(plVar7 + 0x30), fVar11 < *(float *)(plVar7 + 0x33))) {
        if (5 < (byte)LogAnimMontage._0_1_) {
          local_128 = *(FName *)(*plVar7 + 0x18);
          ::FName::ToString(&local_128,&local_100);
          UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogAnimMontage);
          if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_100.Data.AllocatorInstance.Data);
          }
        }
        if ((pFVar17->bUseMainInstanceMontageEvaluationData == '\0') ||
           (pFVar18 = pFVar17->MainInstanceProxy,
           pFVar17->MainInstanceProxy == (FAnimInstanceProxy *)0x0)) {
          pFVar18 = pFVar17;
        }
        pUVar8 = (UObject *)*plVar7;
        pTVar20 = &pFVar18->MontageEvaluationData;
        local_110 = (UBlendProfile *)plVar7[0x39];
        fVar2 = *(float *)((longlong)plVar7 + 0x1bc);
        if ((pUVar8 == (UObject *)0x0) || (*(float *)(plVar7 + 0x34) == 0.0)) {
          bVar13 = false;
        }
        else {
          bVar13 = true;
        }
        local_res10 = (undefined1)plVar7[0xd];
        fVar3 = *(float *)(plVar7 + 0x2f);
        lVar4 = plVar7[0xe];
        uVar6 = *(undefined4 *)(plVar7 + 0xf);
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar8 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar8);
        }
        local_f0[0].Montage.WeakPtr.ObjectIndex = 0;
        local_f0[0].Montage.WeakPtr.ObjectSerialNumber = 0;
        local_120 = pUVar8;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar8 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar8);
        }
        FWeakObjectPtr::operator=((FWeakObjectPtr *)local_f0,(FObjectPtr)&local_120);
        FAlphaBlend::FAlphaBlend(&local_f0[0].BlendInfo,local_118);
        local_f0[0].ActiveBlendProfile = local_110;
        local_f0[0].bIsPlaying = (bool)local_res10;
        pFVar9 = (FMontageEvaluationState *)(pTVar20->AllocatorInstance).Data;
        local_f0[0].MontagePosition = fVar3;
        local_f0[0].DeltaTimeRecord._0_8_ = lVar4;
        local_f0[0].DeltaTimeRecord._8_4_ = uVar6;
        local_f0[0].BlendStartAlpha = fVar2;
        local_f0[0].bIsActive = bVar13;
        if (((pFVar9 <= local_f0) && (local_f0 < pFVar9 + (pFVar18->MontageEvaluationData).ArrayMax)
            ) && (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar13)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        iVar14 = (pFVar18->MontageEvaluationData).ArrayNum;
        piVar1 = &(pFVar18->MontageEvaluationData).ArrayMax;
        if (iVar14 == *piVar1) {
          iVar14 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x858,&pTVar20->AllocatorInstance,piVar1);
        }
        (pFVar18->MontageEvaluationData).ArrayNum = iVar14 + 1;
        FMontageEvaluationState::FMontageEvaluationState
                  ((FMontageEvaluationState *)
                   ((pTVar20->AllocatorInstance).Data + (longlong)iVar14 * 0x58),local_f0);
      }
      uVar19 = (ulonglong)local_res18;
      pFVar21 = pFVar21 + 8;
    }
    if ((pFVar17->bUseMainInstanceMontageEvaluationData == '\0') ||
       (pFVar18 = pFVar17->MainInstanceProxy,
       pFVar17->MainInstanceProxy == (FAnimInstanceProxy *)0x0)) {
      pFVar18 = pFVar17;
    }
    this_00 = &this->SlotGroupInertializationRequestDataMap;
    if (&pFVar18->SlotGroupInertializationRequestDataMap != this_00) {
      UE::Core::Private::
      CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
                ((ForElementType<FSetElementId> *)
                 &(pFVar18->SlotGroupInertializationRequestDataMap).field_0x38,
                 (int *)&(pFVar18->SlotGroupInertializationRequestDataMap).field_0x48,
                 (ForElementType<FSetElementId> *)
                 &(this->SlotGroupInertializationRequestDataMap).field_0x38,
                 *(int *)&(this->SlotGroupInertializationRequestDataMap).field_0x48);
      TSparseArray<TSparseSetElement<TTuple<FName,FInertializationRequest>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::operator=((TSparseArray<TSparseSetElement<TTuple<FName,FInertializationRequest>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)&pFVar18->SlotGroupInertializationRequestDataMap,
                  (TSparseArray<TSparseSetElement<TTuple<FName,FInertializationRequest>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this_00);
    }
    TSet<TTuple<FName,FInertializationRequest>,TDefaultMapHashableKeyFuncs<FName,FInertializationRequest,0>,FDefaultSetAllocator>
    ::Reset((TSet<TTuple<FName,FInertializationRequest>,TDefaultMapHashableKeyFuncs<FName,FInertializationRequest,0>,FDefaultSetAllocator>
             *)this_00);
  }
  return;
}

// UpdateMontageSyncGroup @ 147482610

void __thiscall UAnimInstance::UpdateMontageSyncGroup(UAnimInstance *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  FName FVar5;
  longlong lVar6;
  code *pcVar7;
  bool bVar8;
  UClass *pUVar9;
  USkeletalMeshComponent *pUVar10;
  FAnimInstanceProxy *pFVar11;
  FScriptContainerElement *pFVar12;
  undefined1 local_res8 [8];
  undefined8 local_res10;
  FAnimSyncParams local_f8;
  FAnimationBaseContext local_e8;
  undefined4 local_c8;
  undefined8 local_c4;
  FAnimTickRecord local_b8;
  
  pFVar12 = (this->MontageInstances).AllocatorInstance.Data;
  iVar2 = (this->MontageInstances).ArrayNum;
  pFVar1 = pFVar12 + (longlong)iVar2 * 8;
  do {
    while( true ) {
      if ((this->MontageInstances).ArrayNum != iVar2) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<FAnimMontageInstance_*,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      if (pFVar12 == pFVar1) {
        return;
      }
      puVar4 = *(undefined8 **)pFVar12;
      if (*(char *)(puVar4 + 0x14) != '\0') break;
LAB_1474826c3:
      *(undefined4 *)((longlong)puVar4 + 0x7c) = 0xfffffffe;
      pFVar12 = pFVar12 + 8;
      *(undefined4 *)((longlong)puVar4 + 0x84) = 0xfffffffe;
    }
    FVar5 = *(FName *)(puVar4 + 0x38);
    local_res10 = 0;
    if (FVar5 == (FName)0x0) {
      bVar8 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_8124036945119542804>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Animation\\AnimInstance.cpp"
                         ,0x1ec,"GroupNameToUse != NAME_None");
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      *(undefined1 *)(puVar4 + 0x14) = 0;
      goto LAB_1474826c3;
    }
    FAnimTickRecord::FAnimTickRecord
              (&local_b8,(UAnimMontage *)*puVar4,*(float *)(puVar4 + 0x2f),*(float *)(puVar4 + 0x33)
               ,(TArray<FPassedMarker,TSizedDefaultAllocator<32>_> *)(puVar4 + 0x12),
               (FMarkerTickRecord *)((longlong)puVar4 + 0x7c));
    local_b8.DeltaTimeRecord = (FDeltaTimeRecord *)(puVar4 + 0xe);
    local_f8.Role = CanBeLeader;
    local_f8.Method = DoNotSync;
    local_f8.bOverridePositionWhenJoiningSyncGroupAsLeader = false;
    local_f8.GroupName = FVar5;
    if (this == (UAnimInstance *)0x0) {
      UE::Anim::FAnimSync::AddTickRecord((FAnimSync *)0x1e0,&local_b8,&local_f8);
      pFVar11 = (FAnimInstanceProxy *)0x0;
    }
    else {
      bVar8 = IsInGameThread();
      if (!bVar8) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsInGameThread()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AnimInstance.h"
                           ,0x687,L"");
        if (bVar8) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
      lVar6 = *(longlong *)&this->field_0x20;
      if (lVar6 != 0) {
        pUVar9 = Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
        lVar6 = *(longlong *)(lVar6 + 0x10);
        iVar3 = (int)pUVar9->_padding_;
        if ((iVar3 <= *(int *)(lVar6 + 0x38)) &&
           ((longlong *)*(undefined1 **)(*(longlong *)(lVar6 + 0x30) + (longlong)iVar3 * 8) ==
            &pUVar9->_padding_)) {
          pUVar10 = GetSkelMeshComponent(this);
          USkeletalMeshComponent::HandleExistingParallelEvaluationTask(pUVar10,true,true);
        }
      }
      pFVar11 = this->AnimInstanceProxy;
      if (pFVar11 == (FAnimInstanceProxy *)0x0) {
        pFVar11 = (FAnimInstanceProxy *)(**(code **)(*(longlong *)this + 0x378))(this);
        this->AnimInstanceProxy = pFVar11;
      }
      UE::Anim::FAnimSync::AddTickRecord(&pFVar11->Sync,&local_b8,&local_f8);
      bVar8 = IsInGameThread();
      if (!bVar8) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsInGameThread()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AnimInstance.h"
                           ,0x687,L"");
        if (bVar8) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
      lVar6 = *(longlong *)&this->field_0x20;
      if (lVar6 != 0) {
        pUVar9 = Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
        lVar6 = *(longlong *)(lVar6 + 0x10);
        iVar3 = (int)pUVar9->_padding_;
        if ((iVar3 <= *(int *)(lVar6 + 0x38)) &&
           ((longlong *)*(undefined1 **)(*(longlong *)(lVar6 + 0x30) + (longlong)iVar3 * 8) ==
            &pUVar9->_padding_)) {
          pUVar10 = GetSkelMeshComponent(this);
          USkeletalMeshComponent::HandleExistingParallelEvaluationTask(pUVar10,true,true);
        }
      }
      pFVar11 = this->AnimInstanceProxy;
      if (this->AnimInstanceProxy == (FAnimInstanceProxy *)0x0) {
        pFVar11 = (FAnimInstanceProxy *)(**(code **)(*(longlong *)this + 0x378))(this);
        this->AnimInstanceProxy = pFVar11;
      }
    }
    FAnimationBaseContext::FAnimationBaseContext
              (&local_e8,pFVar11,(FAnimationUpdateSharedContext *)0x0);
    local_c8 = 0x3f800000;
    local_c4 = 0x3f800000;
    FAnimTrace::OutputAnimTickRecord(&local_e8,&local_b8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_b8.ContextData.SharedReferenceCount.ReferenceController);
    pFVar12 = pFVar12 + 8;
    *(undefined1 *)(puVar4 + 0x14) = 0;
  } while( true );
}

// WasAnimNotifyNameTriggeredInAnyState @ 147482e70

bool __thiscall
UAnimInstance::WasAnimNotifyNameTriggeredInAnyState(UAnimInstance *this,FName param_1)

{
  bool bVar1;
  FName local_res10;
  FName *local_res18 [2];
  code *local_18;
  undefined8 **local_10;
  
  local_res18[0] = &local_res10;
  local_10 = local_res18;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`UAnimInstance::WasAnimNotifyNameTriggeredInAnyState'::__l2::<lambda_1>,bool,FAnimInstanceProxy_*>
             ::Call;
  local_res10 = param_1;
  bVar1 = CheckOnInstanceAndMainInstance
                    (this,(TFunctionRef<bool___cdecl(FAnimInstanceProxy_*)> *)&local_18);
  return bVar1;
}

// WasAnimNotifyNameTriggeredInSourceState @ 147482f80

bool __thiscall
UAnimInstance::WasAnimNotifyNameTriggeredInSourceState
          (UAnimInstance *this,int param_1,int param_2,FName param_3)

{
  bool bVar1;
  int local_res10 [2];
  int local_res18 [2];
  FName local_res20;
  code *local_38;
  undefined4 **local_30;
  int *local_28;
  int *local_20;
  FName *local_18;
  
  local_28 = local_res10;
  local_20 = local_res18;
  local_18 = &local_res20;
  local_30 = &local_28;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`UAnimInstance::WasAnimNotifyNameTriggeredInSourceState'::__l2::<lambda_1>,bool,FAnimInstanceProxy_*>
             ::Call;
  local_res10[0] = param_1;
  local_res18[0] = param_2;
  local_res20 = param_3;
  bVar1 = CheckOnInstanceAndMainInstance
                    (this,(TFunctionRef<bool___cdecl(FAnimInstanceProxy_*)> *)&local_38);
  return bVar1;
}

// WasAnimNotifyNameTriggeredInStateMachine @ 1474830b0

bool __thiscall
UAnimInstance::WasAnimNotifyNameTriggeredInStateMachine
          (UAnimInstance *this,int param_1,FName param_2)

{
  bool bVar1;
  int local_res10 [2];
  FName local_res18 [2];
  int *local_28;
  FName *local_20;
  code *local_18;
  undefined4 **local_10;
  
  local_28 = local_res10;
  local_20 = local_res18;
  local_10 = &local_28;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`UAnimInstance::WasAnimNotifyNameTriggeredInStateMachine'::__l2::<lambda_1>,bool,FAnimInstanceProxy_*>
             ::Call;
  local_res10[0] = param_1;
  local_res18[0] = param_2;
  bVar1 = CheckOnInstanceAndMainInstance
                    (this,(TFunctionRef<bool___cdecl(FAnimInstanceProxy_*)> *)&local_18);
  return bVar1;
}

// WasAnimNotifyStateActiveInAnyState @ 147483210

bool __thiscall
UAnimInstance::WasAnimNotifyStateActiveInAnyState
          (UAnimInstance *this,TSubclassOf<UAnimNotifyState> param_1)

{
  bool bVar1;
  TObjectPtr<UClass> local_res10 [3];
  code *local_18;
  TObjectPtr<UClass> *local_10;
  
  local_10 = local_res10;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`UAnimInstance::WasAnimNotifyStateActiveInAnyState'::__l2::<lambda_1>,bool,FAnimInstanceProxy_*>
             ::Call;
  local_res10[0].field0_0x0 = (TObjectPtr<UClass>_u_0)param_1.Class.field0_0x0;
  bVar1 = CheckOnInstanceAndMainInstance
                    (this,(TFunctionRef<bool___cdecl(FAnimInstanceProxy_*)> *)&local_18);
  return bVar1;
}

// WasAnimNotifyStateActiveInSourceState @ 147483370

bool __thiscall
UAnimInstance::WasAnimNotifyStateActiveInSourceState
          (UAnimInstance *this,int param_1,int param_2,TSubclassOf<UAnimNotifyState> param_3)

{
  bool bVar1;
  int local_res10 [2];
  int local_res18 [4];
  code *local_38;
  undefined4 **local_30;
  int *local_28;
  int *local_20;
  TObjectPtr<UClass> local_18;
  
  local_28 = local_res10;
  local_20 = local_res18;
  local_30 = &local_28;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`UAnimInstance::WasAnimNotifyStateActiveInSourceState'::__l2::<lambda_1>,bool,FAnimInstanceProxy_*>
             ::Call;
  local_res10[0] = param_1;
  local_res18[0] = param_2;
  local_18.field0_0x0 = (TObjectPtr<UClass>_u_0)param_3.Class.field0_0x0;
  bVar1 = CheckOnInstanceAndMainInstance
                    (this,(TFunctionRef<bool___cdecl(FAnimInstanceProxy_*)> *)&local_38);
  return bVar1;
}

// WasAnimNotifyStateActiveInStateMachine @ 1474834e0

bool __thiscall
UAnimInstance::WasAnimNotifyStateActiveInStateMachine
          (UAnimInstance *this,int param_1,TSubclassOf<UAnimNotifyState> param_2)

{
  bool bVar1;
  int local_res10 [6];
  int *local_28;
  TObjectPtr<UClass> local_20;
  code *local_18;
  undefined4 **local_10;
  
  local_28 = local_res10;
  local_10 = &local_28;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`UAnimInstance::WasAnimNotifyStateActiveInStateMachine'::__l2::<lambda_1>,bool,FAnimInstanceProxy_*>
             ::Call;
  local_res10[0] = param_1;
  local_20.field0_0x0 = (TObjectPtr<UClass>_u_0)param_2.Class.field0_0x0;
  bVar1 = CheckOnInstanceAndMainInstance
                    (this,(TFunctionRef<bool___cdecl(FAnimInstanceProxy_*)> *)&local_18);
  return bVar1;
}

// WasAnimNotifyTriggeredInAnyState @ 147483630

bool __thiscall
UAnimInstance::WasAnimNotifyTriggeredInAnyState
          (UAnimInstance *this,TSubclassOf<UAnimNotify> param_1)

{
  bool bVar1;
  TObjectPtr<UClass> local_res10 [3];
  code *local_18;
  TObjectPtr<UClass> *local_10;
  
  local_10 = local_res10;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`UAnimInstance::WasAnimNotifyTriggeredInAnyState'::__l2::<lambda_1>,bool,FAnimInstanceProxy_*>
             ::Call;
  local_res10[0].field0_0x0 = (TObjectPtr<UClass>_u_0)param_1.Class.field0_0x0;
  bVar1 = CheckOnInstanceAndMainInstance
                    (this,(TFunctionRef<bool___cdecl(FAnimInstanceProxy_*)> *)&local_18);
  return bVar1;
}

// WasAnimNotifyTriggeredInSourceState @ 147483790

bool __thiscall
UAnimInstance::WasAnimNotifyTriggeredInSourceState
          (UAnimInstance *this,int param_1,int param_2,TSubclassOf<UAnimNotify> param_3)

{
  bool bVar1;
  int local_res10 [2];
  int local_res18 [4];
  code *local_38;
  undefined4 **local_30;
  int *local_28;
  int *local_20;
  TObjectPtr<UClass> local_18;
  
  local_28 = local_res10;
  local_20 = local_res18;
  local_30 = &local_28;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`UAnimInstance::WasAnimNotifyTriggeredInSourceState'::__l2::<lambda_1>,bool,FAnimInstanceProxy_*>
             ::Call;
  local_res10[0] = param_1;
  local_res18[0] = param_2;
  local_18.field0_0x0 = (TObjectPtr<UClass>_u_0)param_3.Class.field0_0x0;
  bVar1 = CheckOnInstanceAndMainInstance
                    (this,(TFunctionRef<bool___cdecl(FAnimInstanceProxy_*)> *)&local_38);
  return bVar1;
}

// WasAnimNotifyTriggeredInStateMachine @ 147483900

bool __thiscall
UAnimInstance::WasAnimNotifyTriggeredInStateMachine
          (UAnimInstance *this,int param_1,TSubclassOf<UAnimNotify> param_2)

{
  bool bVar1;
  int local_res10 [6];
  int *local_28;
  TObjectPtr<UClass> local_20;
  code *local_18;
  undefined4 **local_10;
  
  local_28 = local_res10;
  local_10 = &local_28;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`UAnimInstance::WasAnimNotifyTriggeredInStateMachine'::__l2::<lambda_1>,bool,FAnimInstanceProxy_*>
             ::Call;
  local_res10[0] = param_1;
  local_20.field0_0x0 = (TObjectPtr<UClass>_u_0)param_2.Class.field0_0x0;
  bVar1 = CheckOnInstanceAndMainInstance
                    (this,(TFunctionRef<bool___cdecl(FAnimInstanceProxy_*)> *)&local_18);
  return bVar1;
}

// execBlueprint_GetMainAnimInstance @ 147484b10

void __cdecl
UAnimInstance::execBlueprint_GetMainAnimInstance(UObject *param_1,FFrame *param_2,void *param_3)

{
  USkeletalMeshComponent *this;
  UAnimInstance *pUVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  this = GetSkelMeshComponent((UAnimInstance *)param_1);
  pUVar1 = USkeletalMeshComponent::GetAnimInstance(this);
  *(UAnimInstance **)param_3 = pUVar1;
  return;
}

// execBlueprint_GetSlotMontageLocalWeight @ 147484b50

void __cdecl
UAnimInstance::execBlueprint_GetSlotMontageLocalWeight
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FAnimInstanceProxy *this;
  float fVar2;
  FName local_res10;
  FName local_res18 [2];
  
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_res18[0] = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  this = GetProxyOnAnyThread<FAnimInstanceProxy>((UAnimInstance *)param_1);
  fVar2 = FAnimInstanceProxy::GetSlotMontageLocalWeight(this,local_res18);
  *(float *)param_3 = fVar2;
  return;
}

// execCalculateDirection @ 147484bf0

void __cdecl UAnimInstance::execCalculateDirection(UObject *param_1,FFrame *param_2,void *param_3)

{
  TVector<double> *pTVar1;
  FProperty *pFVar2;
  TVector<double> *pTVar3;
  TRotator<double> *pTVar4;
  float fVar5;
  TVector<double> local_38;
  TRotator<double> local_20;
  
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  pTVar1 = (TVector<double> *)param_2->MostRecentPropertyAddress;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  pTVar3 = &local_38;
  if (pTVar1 != (TVector<double> *)0x0) {
    pTVar3 = pTVar1;
  }
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_20,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_20);
  }
  pTVar4 = &local_20;
  if ((TRotator<double> *)param_2->MostRecentPropertyAddress != (TRotator<double> *)0x0) {
    pTVar4 = (TRotator<double> *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  fVar5 = CalculateDirection((UAnimInstance *)param_1,pTVar3,pTVar4);
  *(float *)param_3 = fVar5;
  return;
}

// execClearAllTransitionEvents @ 147484d00

void __cdecl
UAnimInstance::execClearAllTransitionEvents(UObject *param_1,FFrame *param_2,void *param_3)

{
  FAnimInstanceProxy *this;
  undefined1 local_res10 [24];
  code *local_18;
  undefined1 *local_10;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  this = GetProxyOnAnyThread<FAnimInstanceProxy>((UAnimInstance *)param_1);
  local_10 = local_res10;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`FAnimInstanceProxy::ClearAllTransitionEvents'::__l2::<lambda_1>,void,FAnimNode_StateMachine_&>
             ::Call;
  FAnimInstanceProxy::ForEachStateMachine
            (this,(TFunctionRef<void___cdecl(FAnimNode_StateMachine_&)> *)&local_18);
  return;
}

// execClearMorphTargets @ 147484d50

void __cdecl UAnimInstance::execClearMorphTargets(UObject *param_1,FFrame *param_2,void *param_3)

{
  USkeletalMeshComponent *this;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  this = GetSkelMeshComponent((UAnimInstance *)param_1);
  if (this != (USkeletalMeshComponent *)0x0) {
    USkeletalMeshComponent::ClearMorphTargets(this);
    return;
  }
  return;
}

// execClearTransitionEvents @ 147484d90

void __cdecl
UAnimInstance::execClearTransitionEvents(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 uVar2;
  FAnimInstanceProxy *this;
  undefined8 local_res10;
  undefined8 local_res20;
  code *local_18;
  undefined8 *local_10;
  
  local_res10 = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  uVar2 = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  this = GetProxyOnAnyThread<FAnimInstanceProxy>((UAnimInstance *)param_1);
  local_10 = &local_res20;
  local_res20 = uVar2;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`FAnimInstanceProxy::ClearTransitionEvents'::__l2::<lambda_1>,void,FAnimNode_StateMachine_&>
             ::Call;
  FAnimInstanceProxy::ForEachStateMachine
            (this,(TFunctionRef<void___cdecl(FAnimNode_StateMachine_&)> *)&local_18);
  return;
}

// execDynamicMontage_IsPlayingFrom @ 147485200

void __cdecl
UAnimInstance::execDynamicMontage_IsPlayingFrom(UObject *param_1,FFrame *param_2,void *param_3)

{
  ulonglong uVar1;
  undefined1 *puVar2;
  int iVar3;
  uint uVar4;
  FProperty *pFVar5;
  FAnimMontageInstance *pFVar6;
  longlong lVar7;
  longlong *plVar8;
  code *pcVar9;
  UAnimMontage *pUVar10;
  bool bVar11;
  undefined1 uVar12;
  UClass *pUVar13;
  FAnimMontageInstance **ppFVar14;
  longlong lVar15;
  UAnimMontage *pUVar16;
  int iVar17;
  int iVar18;
  uint uVar19;
  uint uVar20;
  undefined1 *puVar21;
  uint *puVar22;
  undefined1 *puVar23;
  undefined1 local_res10 [8];
  undefined1 *local_res18;
  int local_res20;
  UAnimMontage *local_a8;
  undefined1 *local_a0;
  int iStack_98;
  uint uStack_94;
  undefined1 *local_90;
  undefined4 uStack_88;
  int iStack_84;
  int local_80;
  int iStack_7c;
  int iStack_78;
  undefined4 uStack_74;
  longlong *local_70;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_68;
  undefined8 uStack_48;
  
  iVar17 = 0;
  local_a8 = (UAnimMontage *)0x0;
  local_res18 = param_3;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar5 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar5->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_a8,pFVar5);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_a8);
  }
  pUVar10 = local_a8;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_a8 == (UAnimMontage *)0x0) {
    *(undefined1 *)param_3 = 0;
    return;
  }
  pUVar13 = Z_Construct_UClass_UAnimMontage_NoRegister();
  iVar3 = (int)pUVar13->_padding_;
  if ((iVar3 <= *(int *)(pUVar10->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(pUVar10->_padding_ + 0x30) + (longlong)iVar3 * 8)
      == &pUVar13->_padding_)) {
    ppFVar14 = TMapBase<UAnimMontage_*,FAnimMontageInstance_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UAnimMontage_*,FAnimMontageInstance_*,0>_>
               ::Find((TMapBase<UAnimMontage_*,FAnimMontageInstance_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UAnimMontage_*,FAnimMontageInstance_*,0>_>
                       *)&param_1[5].field_0x10,pUVar10);
    if ((ppFVar14 != (FAnimMontageInstance **)0x0) &&
       (((pFVar6 = *ppFVar14, pFVar6 != (FAnimMontageInstance *)0x0 &&
         ((pFVar6->Montage).field0_0x0.DebugPtr != (UAnimMontage *)0x0)) &&
        (pFVar6->bPlaying != false)))) {
      *(undefined1 *)param_3 = 1;
      return;
    }
    *(undefined1 *)param_3 = 0;
    return;
  }
  puVar23 = &param_1[5].field_0x10;
  iVar3 = *(int *)&param_1[6].field_0x10;
  uStack_94 = 1;
  puVar2 = &param_1[5].field_0x20;
  local_80 = 0;
  iStack_84 = iVar17;
  if (iVar3 != 0) {
    puVar22 = *(uint **)&param_1[6].field_0x8;
    if (*(uint **)&param_1[6].field_0x8 == (uint *)0x0) {
      puVar22 = (uint *)puVar2;
    }
    uVar20 = *puVar22;
    iVar17 = 0;
    local_80 = 0;
    while (uVar20 == 0) {
      iVar17 = iVar17 + 1;
      local_80 = local_80 + 0x20;
      iStack_84 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar17) goto LAB_147485390;
      uVar20 = puVar22[iVar17];
    }
    uStack_94 = -uVar20 & uVar20;
    uVar1 = (ulonglong)uStack_94 * 2 + 1;
    lVar15 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    local_res20 = (int)lVar15;
    iStack_84 = local_res20 + -1 + local_80;
    if (iVar3 < iStack_84) {
      iStack_84 = iVar3;
    }
  }
LAB_147485390:
  uVar20 = *(uint *)&param_1[6].field_0x10;
  uVar19 = uVar20 & 0xffffffe0;
  iStack_78 = *(int *)&param_1[5].field_0x18 - *(int *)&param_1[6].field_0x1c;
  uStack_88 = 0xffffffff;
  TStack_68._padding_ = CONCAT44(uStack_94,iVar17);
  TStack_68.CurrentBitIndex = iStack_84;
  TStack_68.UnvisitedBitMask = 0xffffffff;
  iVar18 = (int)uVar20 >> 5;
  TStack_68._28_4_ = iStack_84;
  TStack_68.BaseBitIndex = local_80;
  uStack_48 = CONCAT44(uStack_74,iStack_78);
  local_a0 = puVar23;
  iStack_98 = iVar17;
  local_90 = puVar2;
  iStack_7c = iStack_84;
  local_70 = (longlong *)puVar23;
  TStack_68.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
  if ((((int)uVar20 < 0) || (iVar3 < (int)uVar20)) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar11)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  uVar4 = *(uint *)&param_1[6].field_0x10;
  if (uVar20 != uVar4) {
    puVar21 = puVar2;
    if (*(undefined1 **)&param_1[6].field_0x8 != (undefined1 *)0x0) {
      puVar21 = *(undefined1 **)&param_1[6].field_0x8;
    }
    uVar20 = -1 << ((byte)uVar20 & 0x1f) & *(uint *)(puVar21 + (longlong)iVar18 * 4);
    while (uVar20 == 0) {
      iVar18 = iVar18 + 1;
      uVar19 = uVar19 + 0x20;
      uVar20 = uVar4;
      if ((int)(((int)(uVar4 - 1) >> 0x1f & 0x1fU) + (uVar4 - 1)) >> 5 < iVar18) goto LAB_147485490;
      uVar20 = *(uint *)(puVar21 + (longlong)iVar18 * 4);
    }
    uVar1 = (ulonglong)(-uVar20 & uVar20) * 2 + 1;
    lVar15 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    uVar20 = (int)lVar15 + -1 + uVar19;
    if ((int)uVar4 < (int)uVar20) {
      uVar20 = uVar4;
    }
  }
LAB_147485490:
  while( true ) {
    plVar8 = local_70;
    if ((int)local_70[1] - *(int *)((longlong)local_70 + 0x34) != (int)uStack_48) {
      `TSparseArray<TSparseSetElement<TTuple<UAnimMontage_*,FAnimMontageInstance_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    lVar15 = (longlong)TStack_68.CurrentBitIndex;
    if (((TStack_68.CurrentBitIndex == uVar20) &&
        (TStack_68.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) &&
       (plVar8 == (longlong *)puVar23)) break;
    lVar7 = *plVar8;
    bVar11 = UAnimMontage::IsDynamicMontage(*(UAnimMontage **)(lVar7 + lVar15 * 0x18));
    if ((bVar11) &&
       (pUVar16 = (UAnimMontage *)
                  UAnimMontage::GetFirstAnimReference(*(UAnimMontage **)(lVar7 + lVar15 * 0x18)),
       pUVar16 == pUVar10)) {
      plVar8 = *(longlong **)(lVar7 + 8 + lVar15 * 0x18);
      if ((*plVar8 == 0) || ((char)plVar8[0xd] == '\0')) {
        uVar12 = 0;
      }
      else {
        uVar12 = 1;
      }
      *local_res18 = uVar12;
      return;
    }
    TStack_68.UnvisitedBitMask = TStack_68.UnvisitedBitMask & ~TStack_68._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_68);
  }
  *local_res18 = 0;
  return;
}

// execGetActiveCurveNames @ 147485650

void __cdecl UAnimInstance::execGetActiveCurveNames(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar2;
  EAnimCurveType local_res10 [8];
  TArray<FName,TSizedDefaultAllocator<32>_> local_18;
  
  local_res10[0] = AttributeCurve;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  pTVar2 = &local_18;
  if ((TArray<FName,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress !=
      (TArray<FName,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar2 = (TArray<FName,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  GetActiveCurveNames((UAnimInstance *)param_1,local_res10[0],pTVar2);
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// execGetAllCurveNames @ 147485750

void __cdecl UAnimInstance::execGetAllCurveNames(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<FName,TSizedDefaultAllocator<32>_> local_18;
  
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  pTVar2 = &local_18;
  if ((TArray<FName,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress !=
      (TArray<FName,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar2 = (TArray<FName,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  GetActiveCurveNames((UAnimInstance *)param_1,AttributeCurve,pTVar2);
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// execGetBlendProfileByName @ 147485840

void __cdecl
UAnimInstance::execGetBlendProfileByName(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UBlendProfile *pUVar2;
  FName local_res8;
  FName local_res10;
  
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_res10 = local_res8;
  if (*(USkeleton **)(param_1 + 1) != (USkeleton *)0x0) {
    pUVar2 = USkeleton::GetBlendProfile(*(USkeleton **)(param_1 + 1),&local_res10);
    *(UBlendProfile **)param_3 = pUVar2;
    return;
  }
  *(undefined8 *)param_3 = 0;
  return;
}

// execGetCurrentActiveMontage @ 147485d80

void __cdecl
UAnimInstance::execGetCurrentActiveMontage(UObject *param_1,FFrame *param_2,void *param_3)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar5 = *(int *)&param_1[5].field_0x8 - 1;
  if (-1 < (int)uVar5) {
    lVar6 = (longlong)(int)uVar5 * 8;
    do {
      uVar4 = 0;
      if ((int)uVar5 < *(int *)&param_1[5].field_0x8) {
        uVar4 = ~uVar5 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      plVar1 = *(longlong **)(lVar6 + *(longlong *)(param_1 + 5));
      if (((plVar1 != (longlong *)0x0) && (*plVar1 != 0)) && (*(float *)(plVar1 + 0x34) != 0.0)) {
        *(longlong *)param_3 = *plVar1;
        return;
      }
      lVar6 = lVar6 + -8;
      uVar5 = uVar5 - 1;
    } while (-1 < (int)uVar5);
  }
  *(undefined8 *)param_3 = 0;
  return;
}

// execGetCurrentStateName @ 147485e80

void __cdecl UAnimInstance::execGetCurrentStateName(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  FProperty *pFVar2;
  code *pcVar3;
  bool bVar4;
  IAnimClassInterface *pIVar5;
  longlong *plVar6;
  FAnimNode_StateMachine *this;
  uint uVar7;
  uint uVar8;
  uint local_res8 [2];
  undefined8 local_res10;
  
  local_res8[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  uVar8 = local_res8[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pIVar5 = IAnimClassInterface::GetFromClass(*(UClass **)&param_1->field_0x10);
  if (pIVar5 != (IAnimClassInterface *)0x0) {
    plVar6 = (longlong *)(**(code **)((longlong)*pIVar5 + 0x20))(pIVar5);
    if (-1 < (int)uVar8) {
      iVar1 = (int)plVar6[1];
      if ((int)uVar8 < iVar1) {
        uVar7 = ~uVar8 + iVar1;
        uVar8 = 0;
        if ((int)uVar7 < iVar1) {
          uVar8 = ~uVar7 >> 0x1f;
        }
        if (uVar8 == 0) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        this = FProperty::ContainerUObjectPtrToValuePtrInternal
                         (*(FProperty **)(*plVar6 + (longlong)(int)uVar7 * 8),param_1,0);
        FAnimNode_StateMachine::GetCurrentStateName(this);
        goto LAB_147485f93;
      }
    }
  }
  local_res10 = 0;
LAB_147485f93:
  *(undefined8 *)param_3 = local_res10;
  return;
}

// execGetCurveValue @ 147485fc0

void __cdecl UAnimInstance::execGetCurveValue(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FName FVar2;
  FAnimInstanceProxy *pFVar3;
  TTuple<FName,float> *pTVar4;
  undefined4 *puVar5;
  FName local_res10;
  
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  FVar2 = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar3 = GetProxyOnAnyThread<FAnimInstanceProxy>((UAnimInstance *)param_1);
  pTVar4 = TSet<TTuple<FName,float>,TDefaultMapHashableKeyFuncs<FName,float,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FName,float>,TDefaultMapHashableKeyFuncs<FName,float,0>,FDefaultSetAllocator>
                   *)pFVar3->AnimationCurves,FVar2);
  puVar5 = (undefined4 *)&pTVar4->field_0x8;
  if (pTVar4 == (TTuple<FName,float> *)0x0) {
    puVar5 = (undefined4 *)0x0;
  }
  if (puVar5 == (undefined4 *)0x0) {
    *(undefined4 *)param_3 = 0;
  }
  else {
    *(undefined4 *)param_3 = *puVar5;
  }
  return;
}

// execGetCurveValueWithDefault @ 1474860a0

void __cdecl
UAnimInstance::execGetCurveValueWithDefault(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FName FVar2;
  FAnimInstanceProxy *pFVar3;
  TTuple<FName,float> *pTVar4;
  undefined4 *puVar5;
  uchar *puVar6;
  uchar local_res10 [8];
  undefined4 local_res18 [2];
  FName local_res20;
  
  local_res20.ComparisonIndex.Value = 0;
  local_res20.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res18[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  local_res10[0] = '\0';
  local_res10[1] = '\0';
  local_res10[2] = '\0';
  local_res10[3] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  FVar2 = local_res20;
  puVar6 = local_res10;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar6 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined4 *)puVar6 = local_res18[0];
  pFVar3 = GetProxyOnAnyThread<FAnimInstanceProxy>((UAnimInstance *)param_1);
  pTVar4 = TSet<TTuple<FName,float>,TDefaultMapHashableKeyFuncs<FName,float,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FName,float>,TDefaultMapHashableKeyFuncs<FName,float,0>,FDefaultSetAllocator>
                   *)pFVar3->AnimationCurves,FVar2);
  puVar5 = (undefined4 *)&pTVar4->field_0x8;
  if (pTVar4 == (TTuple<FName,float> *)0x0) {
    puVar5 = (undefined4 *)0x0;
  }
  if (puVar5 != (undefined4 *)0x0) {
    *(undefined4 *)puVar6 = *puVar5;
    *(undefined1 *)param_3 = 1;
    return;
  }
  *(undefined1 *)param_3 = 0;
  return;
}

// execGetDeltaSeconds @ 147486200

void __cdecl UAnimInstance::execGetDeltaSeconds(UObject *param_1,FFrame *param_2,void *param_3)

{
  FAnimInstanceProxy *pFVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar1 = GetProxyOnAnyThread<FAnimInstanceProxy>((UAnimInstance *)param_1);
  *(float *)param_3 = pFVar1->CurrentDeltaSeconds;
  return;
}

// execGetInstanceAssetPlayerLength @ 147486280

void __cdecl
UAnimInstance::execGetInstanceAssetPlayerLength(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int iVar2;
  FAnimInstanceProxy *this;
  UScriptStruct *pUVar3;
  FAnimNode_Base *pFVar4;
  undefined4 uVar5;
  int local_res10 [2];
  
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  iVar2 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  this = GetProxyOnAnyThread<FAnimInstanceProxy>((UAnimInstance *)param_1);
  pUVar3 = FAnimNode_AssetPlayerBase::StaticStruct();
  pFVar4 = FAnimInstanceProxy::GetNodeFromIndexUntyped(this,iVar2,pUVar3);
  if (pFVar4 == (FAnimNode_Base *)0x0) {
    uVar5 = 0;
  }
  else {
    uVar5 = (**(code **)(pFVar4->_padding_ + 0xb8))(pFVar4);
  }
  *(undefined4 *)param_3 = uVar5;
  return;
}

// execGetInstanceAssetPlayerTime @ 147486350

void __cdecl
UAnimInstance::execGetInstanceAssetPlayerTime(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int iVar2;
  FAnimInstanceProxy *this;
  UScriptStruct *pUVar3;
  FAnimNode_Base *pFVar4;
  undefined4 uVar5;
  int local_res10 [2];
  
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  iVar2 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  this = GetProxyOnAnyThread<FAnimInstanceProxy>((UAnimInstance *)param_1);
  pUVar3 = FAnimNode_AssetPlayerBase::StaticStruct();
  pFVar4 = FAnimInstanceProxy::GetNodeFromIndexUntyped(this,iVar2,pUVar3);
  if (pFVar4 == (FAnimNode_Base *)0x0) {
    uVar5 = 0;
  }
  else {
    uVar5 = (**(code **)(pFVar4->_padding_ + 200))(pFVar4);
  }
  *(undefined4 *)param_3 = uVar5;
  return;
}

// execGetInstanceAssetPlayerTimeFraction @ 147486420

void __cdecl
UAnimInstance::execGetInstanceAssetPlayerTimeFraction
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int iVar2;
  FAnimInstanceProxy *this;
  UScriptStruct *pUVar3;
  FAnimNode_Base *pFVar4;
  float fVar5;
  float fVar6;
  int local_res10 [2];
  
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  iVar2 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  this = GetProxyOnAnyThread<FAnimInstanceProxy>((UAnimInstance *)param_1);
  pUVar3 = FAnimNode_AssetPlayerBase::StaticStruct();
  pFVar4 = FAnimInstanceProxy::GetNodeFromIndexUntyped(this,iVar2,pUVar3);
  if ((pFVar4 != (FAnimNode_Base *)0x0) &&
     (fVar5 = (float)(**(code **)(pFVar4->_padding_ + 0xb8))(pFVar4), 0.0 < fVar5)) {
    fVar6 = (float)(**(code **)(pFVar4->_padding_ + 200))(pFVar4);
    *(float *)param_3 = fVar6 / fVar5;
    return;
  }
  *(undefined4 *)param_3 = 0;
  return;
}

// execGetInstanceAssetPlayerTimeFromEnd @ 147486520

void __cdecl
UAnimInstance::execGetInstanceAssetPlayerTimeFromEnd(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  int iVar3;
  FAnimInstanceProxy *this;
  UScriptStruct *pUVar4;
  FAnimNode_Base *pFVar5;
  float fVar6;
  float fVar7;
  int local_res10 [2];
  
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  iVar3 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  this = GetProxyOnAnyThread<FAnimInstanceProxy>((UAnimInstance *)param_1);
  pUVar4 = FAnimNode_AssetPlayerBase::StaticStruct();
  pFVar5 = FAnimInstanceProxy::GetNodeFromIndexUntyped(this,iVar3,pUVar4);
  if (pFVar5 != (FAnimNode_Base *)0x0) {
    pcVar2 = *(code **)(pFVar5->_padding_ + 200);
    fVar6 = (float)(**(code **)(pFVar5->_padding_ + 0xb8))(pFVar5);
    fVar7 = (float)(*pcVar2)(pFVar5);
    *(float *)param_3 = fVar6 - fVar7;
    return;
  }
  *(undefined4 *)param_3 = __real_7f7fffff;
  return;
}

// execGetInstanceAssetPlayerTimeFromEndFraction @ 147486620

void __cdecl
UAnimInstance::execGetInstanceAssetPlayerTimeFromEndFraction
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int iVar2;
  FAnimInstanceProxy *this;
  UScriptStruct *pUVar3;
  FAnimNode_Base *pFVar4;
  float fVar5;
  float fVar6;
  int local_res10 [2];
  
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  iVar2 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  this = GetProxyOnAnyThread<FAnimInstanceProxy>((UAnimInstance *)param_1);
  pUVar3 = FAnimNode_AssetPlayerBase::StaticStruct();
  pFVar4 = FAnimInstanceProxy::GetNodeFromIndexUntyped(this,iVar2,pUVar3);
  if (pFVar4 != (FAnimNode_Base *)0x0) {
    fVar5 = (float)(**(code **)(pFVar4->_padding_ + 0xb8))(pFVar4);
    if (0.0 < fVar5) {
      fVar6 = (float)(**(code **)(pFVar4->_padding_ + 200))(pFVar4);
      *(float *)param_3 = (fVar5 - fVar6) / fVar5;
      return;
    }
  }
  *(undefined4 *)param_3 = __real_3f800000;
  return;
}

// execGetInstanceCurrentStateElapsedTime @ 147486740

void __cdecl
UAnimInstance::execGetInstanceCurrentStateElapsedTime
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int iVar2;
  FAnimInstanceProxy *this;
  FAnimNode_StateMachine *pFVar3;
  float fVar4;
  int local_res10 [2];
  
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  iVar2 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  this = GetProxyOnAnyThread<FAnimInstanceProxy>((UAnimInstance *)param_1);
  pFVar3 = FAnimInstanceProxy::GetStateMachineInstance(this,iVar2);
  if (pFVar3 == (FAnimNode_StateMachine *)0x0) {
    fVar4 = 0.0;
  }
  else {
    fVar4 = pFVar3->ElapsedTime;
  }
  *(float *)param_3 = fVar4;
  return;
}

// execGetInstanceMachineWeight @ 147486800

void __cdecl
UAnimInstance::execGetInstanceMachineWeight(UObject *param_1,FFrame *param_2,void *param_3)

{
  uint uVar1;
  FProperty *pFVar2;
  code *pcVar3;
  bool bVar4;
  FAnimInstanceProxy *this;
  FAnimNode_StateMachine *pFVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  int local_res10 [2];
  
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  iVar6 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  this = GetProxyOnAnyThread<FAnimInstanceProxy>((UAnimInstance *)param_1);
  pFVar5 = FAnimInstanceProxy::GetStateMachineInstance(this,iVar6);
  if (pFVar5 == (FAnimNode_StateMachine *)0x0) {
    uVar8 = 0;
  }
  else {
    uVar1 = pFVar5->StateMachineIndexInClass;
    iVar6 = 1 - this->BufferWriteIndex;
    uVar7 = 0;
    if ((int)uVar1 < this->MachineWeightArrays[iVar6].ArrayNum) {
      uVar7 = ~uVar1 >> 0x1f;
    }
    if (uVar7 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    uVar8 = *(undefined4 *)
             (this->MachineWeightArrays[iVar6].AllocatorInstance.Data + (longlong)(int)uVar1 * 4);
  }
  *(undefined4 *)param_3 = uVar8;
  return;
}

// execGetInstanceStateWeight @ 147486920

void __cdecl
UAnimInstance::execGetInstanceStateWeight(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  int iVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  FAnimInstanceProxy *this;
  FAnimNode_StateMachine *pFVar7;
  uint *puVar8;
  uint *puVar9;
  undefined1 *puVar10;
  uint uVar11;
  undefined4 uVar12;
  int local_res10 [2];
  int local_res18 [4];
  
  local_res18[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  iVar6 = local_res18[0];
  iVar3 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  this = GetProxyOnAnyThread<FAnimInstanceProxy>((UAnimInstance *)param_1);
  pFVar7 = FAnimInstanceProxy::GetStateMachineInstance(this,iVar6);
  if ((pFVar7 != (FAnimNode_StateMachine *)0x0) &&
     (*(int *)&(this->StateMachineClassIndexToWeightOffset).field_0x8 !=
      *(int *)&(this->StateMachineClassIndexToWeightOffset).field_0x34)) {
    puVar10 = *(undefined1 **)&(this->StateMachineClassIndexToWeightOffset).field_0x40;
    if (puVar10 == (undefined1 *)0x0) {
      puVar10 = &(this->StateMachineClassIndexToWeightOffset).field_0x38;
    }
    uVar5 = *(uint *)(puVar10 +
                     (ulonglong)
                     (*(int *)&(this->StateMachineClassIndexToWeightOffset).field_0x48 - 1U &
                     pFVar7->StateMachineIndexInClass) * 4);
    if (uVar5 != 0xffffffff) {
      do {
        puVar9 = (uint *)((longlong)(int)uVar5 * 0x10 +
                         *(longlong *)&this->StateMachineClassIndexToWeightOffset);
        if (*puVar9 == pFVar7->StateMachineIndexInClass) {
          puVar8 = puVar9 + 1;
          if (puVar9 == (uint *)0x0) {
            puVar8 = (uint *)0x0;
          }
          if (puVar8 != (uint *)0x0) {
            iVar6 = 1 - this->BufferWriteIndex;
            uVar11 = *puVar8 + iVar3;
            uVar5 = 0;
            if ((int)uVar11 < this->StateWeightArrays[iVar6].ArrayNum) {
              uVar5 = ~uVar11 >> 0x1f;
            }
            if (uVar5 == 0) {
              bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar4) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
            }
            uVar12 = *(undefined4 *)
                      (this->StateWeightArrays[iVar6].AllocatorInstance.Data +
                      (longlong)(int)uVar11 * 4);
            goto LAB_147486a4a;
          }
          break;
        }
        uVar5 = puVar9[2];
      } while (uVar5 != 0xffffffff);
    }
  }
  uVar12 = 0;
LAB_147486a4a:
  *(undefined4 *)param_3 = uVar12;
  return;
}

// execGetInstanceTransitionCrossfadeDuration @ 147486af0

void __cdecl
UAnimInstance::execGetInstanceTransitionCrossfadeDuration
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  FAnimInstanceProxy *this;
  FAnimNode_StateMachine *this_00;
  FAnimationTransitionBetweenStates *pFVar5;
  int local_res10 [2];
  int local_res18 [4];
  
  local_res18[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  iVar3 = local_res18[0];
  iVar2 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  this = GetProxyOnAnyThread<FAnimInstanceProxy>((UAnimInstance *)param_1);
  this_00 = FAnimInstanceProxy::GetStateMachineInstance(this,iVar3);
  if (this_00 != (FAnimNode_StateMachine *)0x0) {
    bVar4 = FAnimNode_StateMachine::IsValidTransitionIndex(this_00,iVar2);
    if (bVar4) {
      pFVar5 = FAnimNode_StateMachine::GetTransitionInfo(this_00,iVar2);
      *(float *)param_3 = pFVar5->CrossfadeDuration;
      return;
    }
  }
  *(undefined4 *)param_3 = 0;
  return;
}

// execGetInstanceTransitionTimeElapsed @ 147486c00

void __cdecl
UAnimInstance::execGetInstanceTransitionTimeElapsed(UObject *param_1,FFrame *param_2,void *param_3)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FProperty *pFVar3;
  int iVar4;
  bool bVar5;
  FAnimInstanceProxy *this;
  FAnimNode_StateMachine *this_00;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  undefined4 uVar10;
  undefined1 local_res10 [8];
  int local_res18 [2];
  int local_res20 [2];
  
  local_res20[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  local_res18[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  iVar2 = local_res20[0];
  iVar4 = local_res18[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  this = GetProxyOnAnyThread<FAnimInstanceProxy>((UAnimInstance *)param_1);
  this_00 = FAnimInstanceProxy::GetStateMachineInstance(this,iVar2);
  if ((this_00 != (FAnimNode_StateMachine *)0x0) &&
     (bVar5 = FAnimNode_StateMachine::IsValidTransitionIndex(this_00,iVar4), bVar5)) {
    pFVar8 = (this_00->ActiveTransitionArray).AllocatorInstance.Data;
    iVar2 = (this_00->ActiveTransitionArray).ArrayNum;
    pFVar7 = pFVar8 + 0x80;
    pFVar9 = pFVar8 + (longlong)iVar2 * 200;
    while( true ) {
      if ((this_00->ActiveTransitionArray).ArrayNum != iVar2) {
        `TCheckedPointerIterator<FAnimationActiveTransitionEntry_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res10);
      }
      if (pFVar8 == pFVar9) break;
      pFVar6 = *(FScriptContainerElement **)(pFVar7 + -8);
      if (pFVar6 == (FScriptContainerElement *)0x0) {
        pFVar6 = pFVar7 + -0x18;
      }
      pFVar1 = pFVar6 + (longlong)*(int *)pFVar7 * 4;
      for (; pFVar6 != pFVar1; pFVar6 = pFVar6 + 4) {
        if (*(int *)pFVar6 == iVar4) {
          uVar10 = *(undefined4 *)pFVar8;
          goto LAB_147486d48;
        }
      }
      pFVar8 = pFVar8 + 200;
      pFVar7 = pFVar7 + 200;
    }
  }
  uVar10 = 0;
LAB_147486d48:
  *(undefined4 *)param_3 = uVar10;
  return;
}

// execGetInstanceTransitionTimeElapsedFraction @ 147486d70

void __cdecl
UAnimInstance::execGetInstanceTransitionTimeElapsedFraction
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FProperty *pFVar3;
  bool bVar4;
  FAnimInstanceProxy *this;
  FAnimNode_StateMachine *this_00;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  float fVar9;
  undefined1 local_res10 [8];
  float local_res18 [2];
  int local_res20 [2];
  
  local_res20[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  local_res18[0] = 0.0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  iVar2 = local_res20[0];
  fVar9 = local_res18[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  this = GetProxyOnAnyThread<FAnimInstanceProxy>((UAnimInstance *)param_1);
  this_00 = FAnimInstanceProxy::GetStateMachineInstance(this,iVar2);
  if ((this_00 != (FAnimNode_StateMachine *)0x0) &&
     (bVar4 = FAnimNode_StateMachine::IsValidTransitionIndex(this_00,(int)fVar9), bVar4)) {
    pFVar7 = (this_00->ActiveTransitionArray).AllocatorInstance.Data;
    iVar2 = (this_00->ActiveTransitionArray).ArrayNum;
    pFVar6 = pFVar7 + 0x80;
    pFVar8 = pFVar7 + (longlong)iVar2 * 200;
    while( true ) {
      if ((this_00->ActiveTransitionArray).ArrayNum != iVar2) {
        `TCheckedPointerIterator<FAnimationActiveTransitionEntry_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res10);
      }
      if (pFVar7 == pFVar8) break;
      pFVar5 = *(FScriptContainerElement **)(pFVar6 + -8);
      if (pFVar5 == (FScriptContainerElement *)0x0) {
        pFVar5 = pFVar6 + -0x18;
      }
      pFVar1 = pFVar5 + (longlong)(int)*(float *)pFVar6 * 4;
      for (; pFVar5 != pFVar1; pFVar5 = pFVar5 + 4) {
        if (*(float *)pFVar5 == fVar9) {
          fVar9 = *(float *)pFVar7 / *(float *)(pFVar7 + 8);
          goto LAB_147486ebd;
        }
      }
      pFVar7 = pFVar7 + 200;
      pFVar6 = pFVar6 + 200;
    }
  }
  fVar9 = 0.0;
LAB_147486ebd:
  *(float *)param_3 = fVar9;
  return;
}

// execGetLODLevel @ 147486ee0

void __cdecl UAnimInstance::execGetLODLevel(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined4 uVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar1 = (**(code **)(*(longlong *)param_1 + 0x360))();
  *(undefined4 *)param_3 = uVar1;
  return;
}

// execGetLinkedAnimGraphInstanceByTag @ 147486f20

void __cdecl
UAnimInstance::execGetLinkedAnimGraphInstanceByTag(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UAnimInstance *pUVar2;
  FName local_res10;
  
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar2 = GetLinkedAnimGraphInstanceByTag((UAnimInstance *)param_1,local_res10);
  *(UAnimInstance **)param_3 = pUVar2;
  return;
}

// execGetLinkedAnimGraphInstancesByTag @ 147486fc0

void __cdecl
UAnimInstance::execGetLinkedAnimGraphInstancesByTag(UObject *param_1,FFrame *param_2,void *param_3)

{
  int *piVar1;
  FProperty *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  ForAnyElementType *pFVar6;
  FName local_res10;
  UAnimInstance *local_28;
  ForAnyElementType local_20;
  undefined8 local_18;
  
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_20.Data = (FScriptContainerElement *)0x0;
  local_18 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_20,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_20);
  }
  pFVar6 = &local_20;
  if ((ForAnyElementType *)param_2->MostRecentPropertyAddress != (ForAnyElementType *)0x0) {
    pFVar6 = (ForAnyElementType *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_28 = GetLinkedAnimGraphInstanceByTag((UAnimInstance *)param_1,local_res10);
  if (local_28 != (UAnimInstance *)0x0) {
    if ((pFVar6->Data <= (FScriptContainerElement *)&local_28) &&
       ((FScriptContainerElement *)&local_28 <
        pFVar6->Data + (longlong)*(int *)((longlong)&pFVar6[1].Data + 4) * 8)) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    iVar5 = *(int *)&pFVar6[1].Data;
    piVar1 = (int *)((longlong)&pFVar6[1].Data + 4);
    if (iVar5 == *piVar1) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,pFVar6,piVar1);
    }
    *(int *)&pFVar6[1].Data = iVar5 + 1;
    *(UAnimInstance **)(pFVar6->Data + (longlong)iVar5 * 8) = local_28;
  }
  if (local_20.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_20.Data);
  }
  return;
}

// execGetLinkedAnimLayerInstanceByClass @ 147487170

void __cdecl
UAnimInstance::execGetLinkedAnimLayerInstanceByClass(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UAnimInstance *pUVar2;
  bool bVar3;
  int local_res10 [2];
  UObject *local_res18;
  UObject *local_res20;
  
  local_res18 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  bVar3 = local_res10[0] != 0;
  local_res20 = local_res18;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res18 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res18);
  }
  pUVar2 = GetLinkedAnimLayerInstanceByClass
                     ((UAnimInstance *)param_1,(TSubclassOf<UAnimInstance>)&local_res20,bVar3);
  *(UAnimInstance **)param_3 = pUVar2;
  return;
}

// execGetLinkedAnimLayerInstanceByGroup @ 147487260

void __cdecl
UAnimInstance::execGetLinkedAnimLayerInstanceByGroup(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UAnimInstance *pUVar2;
  FName local_res10;
  
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar2 = GetLinkedAnimLayerInstanceByGroup((UAnimInstance *)param_1,local_res10);
  *(UAnimInstance **)param_3 = pUVar2;
  return;
}

// execGetLinkedAnimLayerInstanceByGroupAndClass @ 147487300

void __cdecl
UAnimInstance::execGetLinkedAnimLayerInstanceByGroupAndClass
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UAnimInstance *pUVar2;
  FName local_res10;
  UObject *local_res18;
  UObject *local_res20;
  
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_res18 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  local_res20 = local_res18;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res18 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res18);
  }
  pUVar2 = GetLinkedAnimLayerInstanceByGroupAndClass
                     ((UAnimInstance *)param_1,local_res10,(TSubclassOf<UAnimInstance>)&local_res20)
  ;
  *(UAnimInstance **)param_3 = pUVar2;
  return;
}

// execGetLinkedAnimLayerInstancesByGroup @ 1474873f0

void __cdecl
UAnimInstance::execGetLinkedAnimLayerInstancesByGroup
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TArray<UAnimInstance_*,TSizedDefaultAllocator<32>_> *pTVar2;
  FName local_res10;
  TArray<UAnimInstance_*,TSizedDefaultAllocator<32>_> local_18;
  
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  pTVar2 = &local_18;
  if ((TArray<UAnimInstance_*,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress !=
      (TArray<UAnimInstance_*,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar2 = (TArray<UAnimInstance_*,TSizedDefaultAllocator<32>_> *)
             param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  GetLinkedAnimLayerInstancesByGroup((UAnimInstance *)param_1,local_res10,pTVar2);
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// execGetOwningActor @ 1474876a0

void __cdecl UAnimInstance::execGetOwningActor(UObject *param_1,FFrame *param_2,void *param_3)

{
  USkeletalMeshComponent *pUVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar1 = GetSkelMeshComponent((UAnimInstance *)param_1);
  *(longlong *)param_3 = pUVar1->_padding_;
  return;
}

// execGetOwningComponent @ 1474876e0

void __cdecl UAnimInstance::execGetOwningComponent(UObject *param_1,FFrame *param_2,void *param_3)

{
  USkeletalMeshComponent *pUVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar1 = GetSkelMeshComponent((UAnimInstance *)param_1);
  *(USkeletalMeshComponent **)param_3 = pUVar1;
  return;
}

// execGetPropagateNotifiesToLinkedInstances @ 147487760

void __cdecl
UAnimInstance::execGetPropagateNotifiesToLinkedInstances
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(byte *)param_3 = (byte)param_1[1].field_0x9 >> 5 & 1;
  return;
}

// execGetReceiveNotifiesFromLinkedInstances @ 147487790

void __cdecl
UAnimInstance::execGetReceiveNotifiesFromLinkedInstances
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(byte *)param_3 = (byte)param_1[1].field_0x9 >> 4 & 1;
  return;
}

// execGetRelevantAnimLength @ 1474877c0

void __cdecl
UAnimInstance::execGetRelevantAnimLength(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int iVar2;
  int iVar3;
  FAnimInstanceProxy *this;
  FAnimNode_StateMachine *this_00;
  FBakedAnimationState *pFVar4;
  FAnimNode_AssetPlayerRelevancyBase *pFVar5;
  longlong lVar6;
  undefined4 uVar7;
  int local_res10 [2];
  int local_res18 [4];
  
  local_res18[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  iVar3 = local_res18[0];
  iVar2 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  this = GetProxyOnAnyThread<FAnimInstanceProxy>((UAnimInstance *)param_1);
  this_00 = FAnimInstanceProxy::GetStateMachineInstance(this,iVar3);
  if (this_00 != (FAnimNode_StateMachine *)0x0) {
    pFVar4 = FAnimNode_StateMachine::GetStateInfo(this_00,iVar2);
    pFVar5 = FAnimNode_StateMachine::GetRelevantAssetPlayerInterfaceFromState(this_00,this,pFVar4);
    if (pFVar5 != (FAnimNode_AssetPlayerRelevancyBase *)0x0) {
      lVar6 = (**(code **)(*(longlong *)pFVar5 + 0xa0))(pFVar5);
      if (lVar6 != 0) {
        uVar7 = (**(code **)(*(longlong *)pFVar5 + 0xb8))(pFVar5);
        goto LAB_1474878d6;
      }
    }
  }
  uVar7 = 0;
LAB_1474878d6:
  *(undefined4 *)param_3 = uVar7;
  return;
}

// execGetRelevantAnimTime @ 147487900

void __cdecl UAnimInstance::execGetRelevantAnimTime(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int iVar2;
  int iVar3;
  FAnimInstanceProxy *this;
  FAnimNode_StateMachine *this_00;
  FBakedAnimationState *pFVar4;
  FAnimNode_AssetPlayerRelevancyBase *pFVar5;
  undefined4 uVar6;
  int local_res10 [2];
  int local_res18 [4];
  
  local_res18[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  iVar3 = local_res18[0];
  iVar2 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  this = GetProxyOnAnyThread<FAnimInstanceProxy>((UAnimInstance *)param_1);
  this_00 = FAnimInstanceProxy::GetStateMachineInstance(this,iVar3);
  if (this_00 != (FAnimNode_StateMachine *)0x0) {
    pFVar4 = FAnimNode_StateMachine::GetStateInfo(this_00,iVar2);
    pFVar5 = FAnimNode_StateMachine::GetRelevantAssetPlayerInterfaceFromState(this_00,this,pFVar4);
    if (pFVar5 != (FAnimNode_AssetPlayerRelevancyBase *)0x0) {
      uVar6 = (**(code **)(*(longlong *)pFVar5 + 200))(pFVar5);
      goto LAB_1474879ff;
    }
  }
  uVar6 = 0;
LAB_1474879ff:
  *(undefined4 *)param_3 = uVar6;
  return;
}

// execGetRelevantAnimTimeFraction @ 147487a20

void __cdecl
UAnimInstance::execGetRelevantAnimTimeFraction(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int iVar2;
  int iVar3;
  FAnimInstanceProxy *this;
  FAnimNode_StateMachine *this_00;
  FBakedAnimationState *pFVar4;
  FAnimNode_AssetPlayerRelevancyBase *pFVar5;
  float fVar6;
  float fVar7;
  int local_res10 [2];
  int local_res18 [4];
  
  local_res18[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  iVar3 = local_res18[0];
  iVar2 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  this = GetProxyOnAnyThread<FAnimInstanceProxy>((UAnimInstance *)param_1);
  this_00 = FAnimInstanceProxy::GetStateMachineInstance(this,iVar3);
  if (this_00 != (FAnimNode_StateMachine *)0x0) {
    pFVar4 = FAnimNode_StateMachine::GetStateInfo(this_00,iVar2);
    pFVar5 = FAnimNode_StateMachine::GetRelevantAssetPlayerInterfaceFromState(this_00,this,pFVar4);
    if ((pFVar5 != (FAnimNode_AssetPlayerRelevancyBase *)0x0) &&
       (fVar6 = (float)(**(code **)(*(longlong *)pFVar5 + 0xb8))(pFVar5), 0.0 < fVar6)) {
      fVar7 = (float)(**(code **)(*(longlong *)pFVar5 + 200))(pFVar5);
      *(float *)param_3 = fVar7 / fVar6;
      return;
    }
  }
  *(undefined4 *)param_3 = 0;
  return;
}

// execGetRelevantAnimTimeRemaining @ 147487b80

void __cdecl
UAnimInstance::execGetRelevantAnimTimeRemaining(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int iVar2;
  int iVar3;
  FAnimInstanceProxy *this;
  FAnimNode_StateMachine *this_00;
  float fVar4;
  int local_res10 [2];
  int local_res18 [2];
  
  local_res18[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  iVar3 = local_res18[0];
  iVar2 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  this = GetProxyOnAnyThread<FAnimInstanceProxy>((UAnimInstance *)param_1);
  this_00 = FAnimInstanceProxy::GetStateMachineInstance(this,iVar3);
  fVar4 = __real_7f7fffff;
  if (this_00 != (FAnimNode_StateMachine *)0x0) {
    fVar4 = FAnimNode_StateMachine::GetRelevantAnimTimeRemaining(this_00,this,iVar2);
  }
  *(float *)param_3 = fVar4;
  return;
}

// execGetRelevantAnimTimeRemainingFraction @ 147487c90

void __cdecl
UAnimInstance::execGetRelevantAnimTimeRemainingFraction
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int iVar2;
  int iVar3;
  FAnimInstanceProxy *this;
  FAnimNode_StateMachine *this_00;
  float fVar4;
  int local_res10 [2];
  int local_res18 [2];
  
  local_res18[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  iVar3 = local_res18[0];
  iVar2 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  this = GetProxyOnAnyThread<FAnimInstanceProxy>((UAnimInstance *)param_1);
  this_00 = FAnimInstanceProxy::GetStateMachineInstance(this,iVar3);
  fVar4 = __real_3f800000;
  if (this_00 != (FAnimNode_StateMachine *)0x0) {
    fVar4 = FAnimNode_StateMachine::GetRelevantAnimTimeRemainingFraction(this_00,this,iVar2);
  }
  *(float *)param_3 = fVar4;
  return;
}

// execGetSyncGroupPosition @ 147487da0

void __cdecl UAnimInstance::execGetSyncGroupPosition(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FName FVar2;
  FAnimInstanceProxy *pFVar3;
  FName local_res10;
  FMarkerSyncAnimPosition local_28;
  
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  FVar2 = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar3 = GetProxyOnAnyThread<FAnimInstanceProxy>((UAnimInstance *)param_1);
  UE::Anim::FAnimSync::GetSyncGroupPosition(&pFVar3->Sync,&local_28,FVar2);
  *(FName *)param_3 = local_28.PreviousMarkerName;
  *(FName *)((longlong)param_3 + 8) = local_28.NextMarkerName;
  *(float *)((longlong)param_3 + 0x10) = local_28.PositionBetweenMarkers;
  return;
}

// execGetTimeToClosestMarker @ 147487e60

void __cdecl
UAnimInstance::execGetTimeToClosestMarker(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FName FVar2;
  FName FVar3;
  bool bVar4;
  FAnimInstanceProxy *pFVar5;
  float *pfVar6;
  float local_res10 [2];
  FName local_res18;
  FName local_res20;
  
  local_res20.ComparisonIndex.Value = 0;
  local_res20.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res18.ComparisonIndex.Value = 0;
  local_res18.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  local_res10[0] = 0.0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  FVar3 = local_res20;
  FVar2 = local_res18;
  pfVar6 = local_res10;
  if ((float *)param_2->MostRecentPropertyAddress != (float *)0x0) {
    pfVar6 = (float *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar5 = GetProxyOnAnyThread<FAnimInstanceProxy>((UAnimInstance *)param_1);
  bVar4 = UE::Anim::FAnimSync::GetTimeToClosestMarker(&pFVar5->Sync,FVar3,FVar2,pfVar6);
  *(bool *)param_3 = bVar4;
  return;
}

// execHasMarkerBeenHitThisFrame @ 147487fa0

void __cdecl
UAnimInstance::execHasMarkerBeenHitThisFrame(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FName FVar2;
  FName FVar3;
  bool bVar4;
  FAnimInstanceProxy *pFVar5;
  FName local_res10;
  FName local_res18 [2];
  
  local_res18[0].ComparisonIndex.Value = 0;
  local_res18[0].Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  FVar3 = local_res18[0];
  FVar2 = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar5 = GetProxyOnAnyThread<FAnimInstanceProxy>((UAnimInstance *)param_1);
  bVar4 = UE::Anim::FAnimSync::HasMarkerBeenHitThisFrame(&pFVar5->Sync,FVar3,FVar2);
  *(bool *)param_3 = bVar4;
  return;
}

// execIsAnyMontagePlaying @ 1474881a0

void __cdecl UAnimInstance::execIsAnyMontagePlaying(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(bool *)param_3 = 0 < *(int *)&param_1[5].field_0x8;
  return;
}

// execIsPlayingSlotAnimation @ 1474881d0

void __cdecl
UAnimInstance::execIsPlayingSlotAnimation(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 *puVar2;
  UAnimMontage *this;
  UPackage *pUVar3;
  code *pcVar4;
  FName FVar5;
  longlong lVar6;
  bool bVar7;
  uint uVar8;
  UPackage *pUVar9;
  FAnimTrack *pFVar10;
  uint uVar11;
  longlong lVar12;
  FName local_res8;
  longlong local_res10;
  
  local_res10 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  lVar6 = local_res10;
  FVar5 = local_res8;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar11 = 0;
  if (0 < *(int *)&param_1[5].field_0x8) {
    lVar12 = 0;
    do {
      uVar8 = 0;
      if ((int)uVar11 < *(int *)&param_1[5].field_0x8) {
        uVar8 = ~uVar11 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      puVar2 = *(undefined8 **)(lVar12 + *(longlong *)(param_1 + 5));
      if ((((puVar2 != (undefined8 *)0x0) &&
           (this = (UAnimMontage *)*puVar2, this != (UAnimMontage *)0x0)) &&
          (*(float *)(puVar2 + 0x34) != 0.0)) &&
         (((*(char *)(puVar2 + 0xd) != '\0' &&
           (pUVar3 = (UPackage *)this->_padding_, pUVar9 = GetTransientPackage(), pUVar3 == pUVar9))
          && ((pFVar10 = UAnimMontage::GetAnimationData(this,FVar5), pFVar10 != (FAnimTrack *)0x0 &&
              ((pFVar10->AnimSegments).ArrayNum == 1)))))) {
        lVar12 = *(longlong *)(pFVar10->AnimSegments).AllocatorInstance.Data;
        if (lVar12 == 0) {
          *(bool *)param_3 = lVar6 == 0;
          return;
        }
        *(bool *)param_3 = lVar12 == lVar6;
        return;
      }
      uVar11 = uVar11 + 1;
      lVar12 = lVar12 + 8;
    } while ((int)uVar11 < *(int *)&param_1[5].field_0x8);
  }
  *(undefined1 *)param_3 = 0;
  return;
}

// execIsSlotActive @ 1474883d0

void __cdecl UAnimInstance::execIsSlotActive(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  FProperty *pFVar2;
  FName FVar3;
  bool bVar4;
  FAnimInstanceProxy *pFVar5;
  UAnimMontage *this;
  FWeakObjectPtr *pFVar6;
  FAnimInstanceProxy *pFVar7;
  FWeakObjectPtr *this_00;
  undefined1 local_res10 [8];
  FName local_res18 [2];
  
  local_res18[0].ComparisonIndex.Value = 0;
  local_res18[0].Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  FVar3 = local_res18[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res18[0] != (FName)0x0) {
    pFVar5 = GetProxyOnAnyThread<FAnimInstanceProxy>((UAnimInstance *)param_1);
    if ((pFVar5->bUseMainInstanceMontageEvaluationData == '\0') ||
       (pFVar7 = pFVar5->MainInstanceProxy, pFVar5->MainInstanceProxy == (FAnimInstanceProxy *)0x0))
    {
      pFVar7 = pFVar5;
    }
    iVar1 = (pFVar7->MontageEvaluationData).ArrayNum;
    this_00 = (FWeakObjectPtr *)(pFVar7->MontageEvaluationData).AllocatorInstance.Data;
    pFVar6 = this_00 + (longlong)iVar1 * 0xb;
    while( true ) {
      if ((pFVar7->MontageEvaluationData).ArrayNum != iVar1) {
        `TCheckedPointerIterator<FMontageEvaluationState_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res10);
      }
      if (this_00 == pFVar6) break;
      bVar4 = FWeakObjectPtr::IsValid(this_00);
      if (bVar4) {
        this = (UAnimMontage *)FWeakObjectPtr::Get(this_00);
        bVar4 = UAnimMontage::IsValidSlot(this,FVar3);
        if ((bVar4) && (*(char *)((longlong)&this_00[10].ObjectSerialNumber + 1) != '\0')) {
          *(undefined1 *)param_3 = 1;
          return;
        }
      }
      this_00 = this_00 + 0xb;
    }
  }
  *(undefined1 *)param_3 = 0;
  return;
}

// execIsSyncGroupBetweenMarkers @ 1474884f0

void __cdecl
UAnimInstance::execIsSyncGroupBetweenMarkers(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FName FVar2;
  FName FVar3;
  FName FVar4;
  FAnimInstanceProxy *pFVar5;
  bool bVar6;
  int local_res10 [2];
  FName local_res18;
  FName local_res20;
  FName local_38 [2];
  
  local_38[0].ComparisonIndex.Value = 0;
  local_38[0].Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_38);
  }
  local_res20.ComparisonIndex.Value = 0;
  local_res20.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res18.ComparisonIndex.Value = 0;
  local_res18.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  FVar4 = local_38[0];
  FVar3 = local_res20;
  FVar2 = local_res18;
  bVar6 = local_res10[0] != 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar5 = GetProxyOnAnyThread<FAnimInstanceProxy>((UAnimInstance *)param_1);
  bVar6 = UE::Anim::FAnimSync::IsSyncGroupBetweenMarkers(&pFVar5->Sync,FVar4,FVar3,FVar2,bVar6);
  *(bool *)param_3 = bVar6;
  return;
}

// execIsUsingMainInstanceMontageEvaluationData @ 147488690

void __cdecl
UAnimInstance::execIsUsingMainInstanceMontageEvaluationData
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(byte *)param_3 = (byte)param_1[1].field_0x9 >> 6 & 1;
  return;
}

// execLinkAnimClassLayers @ 147488810

void __cdecl UAnimInstance::execLinkAnimClassLayers(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  UObject *local_res8;
  UObject *local_res10;
  
  local_res8 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  local_res10 = local_res8;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pcVar2 = *(code **)(*(longlong *)param_1 + 0x2d8);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res8);
  }
  (*pcVar2)(param_1,&local_res10);
  return;
}

// execLinkAnimGraphByTag @ 1474888c0

void __cdecl UAnimInstance::execLinkAnimGraphByTag(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  FName FVar3;
  UObject *pUVar4;
  IAnimClassInterface *pIVar5;
  UScriptStruct *pUVar6;
  FAnimSubsystem_Tag *this;
  FAnimNode_LinkedAnimGraph *this_00;
  FName local_res8;
  UObject *local_res10 [2];
  UObject *local_res20;
  
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  local_res10[0] = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  pUVar4 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res10[0] != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res10[0]);
  }
  FVar3 = local_res8;
  pIVar5 = IAnimClassInterface::GetFromClass(*(UClass **)&param_1->field_0x10);
  if (pIVar5 != (IAnimClassInterface *)0x0) {
    pcVar2 = *(code **)((longlong)*pIVar5 + 0xc0);
    pUVar6 = FAnimSubsystem_Tag::StaticStruct();
    this = (FAnimSubsystem_Tag *)(*pcVar2)(pIVar5,pUVar6);
    if (this != (FAnimSubsystem_Tag *)0x0) {
      pUVar6 = FAnimNode_LinkedAnimGraph::StaticStruct();
      this_00 = (FAnimNode_LinkedAnimGraph *)
                FAnimSubsystem_Tag::FindNodeByTag_Internal
                          (this,FVar3,(UAnimInstance *)param_1,pUVar6);
      if (this_00 != (FAnimNode_LinkedAnimGraph *)0x0) {
        local_res20 = pUVar4;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar4);
        }
        FAnimNode_LinkedAnimGraph::SetAnimClass
                  (this_00,(TSubclassOf<UAnimInstance>)&local_res20,(UAnimInstance *)param_1);
      }
    }
  }
  return;
}

// execLockAIResources @ 147488a20

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UAnimInstance::execLockAIResources(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 local_res10 [2];
  undefined4 local_res20 [2];
  FName local_28;
  FString local_20;
  
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res20[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (1 < (byte)LogAnimation._0_1_) {
    local_28.ComparisonIndex.Value = *(uint *)&param_1->field_0x18;
    local_28.Number = *(uint *)&param_1->field_0x1c;
    ::FName::ToString(&local_28,&local_20);
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAnimation);
    if (local_20.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_20.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// execMontageSync_Follow @ 147488b30

void __cdecl UAnimInstance::execMontageSync_Follow(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  longlong lVar2;
  FAnimMontageInstance **ppFVar3;
  FAnimMontageInstance *this;
  FAnimMontageInstance *pFVar4;
  UAnimMontage *local_res10 [2];
  UAnimMontage *local_res20;
  longlong local_28 [2];
  
  pFVar4 = (FAnimMontageInstance *)0x0;
  local_res20 = (UAnimMontage *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_28[0] = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_28);
  }
  local_res10[0] = (UAnimMontage *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  lVar2 = local_28[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (((local_res20 != (UAnimMontage *)0x0) && (local_28[0] != 0)) &&
     (local_res10[0] != (UAnimMontage *)0x0)) {
    ppFVar3 = TMapBase<UAnimMontage_*,FAnimMontageInstance_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UAnimMontage_*,FAnimMontageInstance_*,0>_>
              ::Find((TMapBase<UAnimMontage_*,FAnimMontageInstance_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UAnimMontage_*,FAnimMontageInstance_*,0>_>
                      *)&param_1[5].field_0x10,local_res20);
    this = pFVar4;
    if (ppFVar3 != (FAnimMontageInstance **)0x0) {
      this = *ppFVar3;
    }
    ppFVar3 = TMapBase<UAnimMontage_*,FAnimMontageInstance_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UAnimMontage_*,FAnimMontageInstance_*,0>_>
              ::Find((TMapBase<UAnimMontage_*,FAnimMontageInstance_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UAnimMontage_*,FAnimMontageInstance_*,0>_>
                      *)(lVar2 + 0xd8),local_res10[0]);
    if (ppFVar3 != (FAnimMontageInstance **)0x0) {
      pFVar4 = *ppFVar3;
    }
    if ((this != (FAnimMontageInstance *)0x0) && (pFVar4 != (FAnimMontageInstance *)0x0)) {
      FAnimMontageInstance::MontageSync_Follow(this,pFVar4);
    }
  }
  return;
}

// execMontageSync_StopFollowing @ 147488c90

void __cdecl
UAnimInstance::execMontageSync_StopFollowing(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FAnimMontageInstance **ppFVar2;
  UAnimMontage *local_res10;
  
  local_res10 = (UAnimMontage *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res10 != (UAnimMontage *)0x0) {
    ppFVar2 = TMapBase<UAnimMontage_*,FAnimMontageInstance_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UAnimMontage_*,FAnimMontageInstance_*,0>_>
              ::Find((TMapBase<UAnimMontage_*,FAnimMontageInstance_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UAnimMontage_*,FAnimMontageInstance_*,0>_>
                      *)&param_1[5].field_0x10,local_res10);
    if ((ppFVar2 != (FAnimMontageInstance **)0x0) && (*ppFVar2 != (FAnimMontageInstance *)0x0)) {
      FAnimMontageInstance::MontageSync_StopFollowing(*ppFVar2);
    }
  }
  return;
}

// execMontage_GetBlendTime @ 147488d40

void __cdecl UAnimInstance::execMontage_GetBlendTime(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FAnimMontageInstance **ppFVar6;
  uint uVar7;
  longlong lVar8;
  UAnimMontage *local_res10;
  
  local_res10 = (UAnimMontage *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res10 == (UAnimMontage *)0x0) {
    uVar7 = 0;
    if (0 < *(int *)&param_1[5].field_0x8) {
      lVar8 = 0;
      do {
        uVar5 = 0;
        if ((int)uVar7 < *(int *)&param_1[5].field_0x8) {
          uVar5 = ~uVar7 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        plVar2 = *(longlong **)(lVar8 + *(longlong *)(param_1 + 5));
        if (((plVar2 != (longlong *)0x0) && (*plVar2 != 0)) && (*(float *)(plVar2 + 0x34) != 0.0)) {
          *(int *)param_3 = (int)plVar2[0x31];
          return;
        }
        uVar7 = uVar7 + 1;
        lVar8 = lVar8 + 8;
      } while ((int)uVar7 < *(int *)&param_1[5].field_0x8);
    }
  }
  else {
    ppFVar6 = TMapBase<UAnimMontage_*,FAnimMontageInstance_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UAnimMontage_*,FAnimMontageInstance_*,0>_>
              ::Find((TMapBase<UAnimMontage_*,FAnimMontageInstance_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UAnimMontage_*,FAnimMontageInstance_*,0>_>
                      *)&param_1[5].field_0x10,local_res10);
    if ((ppFVar6 != (FAnimMontageInstance **)0x0) && (*ppFVar6 != (FAnimMontageInstance *)0x0)) {
      *(float *)param_3 = ((*ppFVar6)->Blend).BlendTime;
      return;
    }
  }
  *(undefined4 *)param_3 = 0;
  return;
}

// execMontage_GetCurrentSection @ 147488ec0

void __cdecl
UAnimInstance::execMontage_GetCurrentSection(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FAnimMontageInstance **ppFVar5;
  FAnimMontageInstance *this;
  uint uVar6;
  longlong lVar7;
  undefined8 local_res10;
  UAnimMontage *local_res18 [2];
  
  local_res18[0] = (UAnimMontage *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res18[0] == (UAnimMontage *)0x0) {
    uVar6 = 0;
    if (0 < *(int *)&param_1[5].field_0x8) {
      lVar7 = 0;
      do {
        uVar4 = 0;
        if ((int)uVar6 < *(int *)&param_1[5].field_0x8) {
          uVar4 = ~uVar6 >> 0x1f;
        }
        if (uVar4 == 0) {
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar3) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
        }
        this = *(FAnimMontageInstance **)(lVar7 + *(longlong *)(param_1 + 5));
        if (((this != (FAnimMontageInstance *)0x0) &&
            ((this->Montage).field0_0x0.DebugPtr != (UAnimMontage *)0x0)) &&
           ((this->Blend).DesiredValue != 0.0)) goto LAB_147488f5e;
        uVar6 = uVar6 + 1;
        lVar7 = lVar7 + 8;
      } while ((int)uVar6 < *(int *)&param_1[5].field_0x8);
    }
  }
  else {
    ppFVar5 = TMapBase<UAnimMontage_*,FAnimMontageInstance_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UAnimMontage_*,FAnimMontageInstance_*,0>_>
              ::Find((TMapBase<UAnimMontage_*,FAnimMontageInstance_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UAnimMontage_*,FAnimMontageInstance_*,0>_>
                      *)&param_1[5].field_0x10,local_res18[0]);
    if ((ppFVar5 != (FAnimMontageInstance **)0x0) &&
       (this = *ppFVar5, this != (FAnimMontageInstance *)0x0)) {
LAB_147488f5e:
      FAnimMontageInstance::GetCurrentSection(this);
      goto LAB_147489006;
    }
  }
  local_res10 = 0;
LAB_147489006:
  *(undefined8 *)param_3 = local_res10;
  return;
}

// execMontage_GetEffectivePlayRate @ 147489030

void __cdecl
UAnimInstance::execMontage_GetEffectivePlayRate(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  longlong *plVar2;
  code *pcVar3;
  UAnimMontage *pUVar4;
  bool bVar5;
  uint uVar6;
  FAnimMontageInstance **ppFVar7;
  uint uVar8;
  longlong lVar9;
  UAnimMontage *local_res10;
  
  local_res10 = (UAnimMontage *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  pUVar4 = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res10 == (UAnimMontage *)0x0) {
    if (0 < *(int *)&param_1[5].field_0x8) {
      lVar9 = 0;
      uVar8 = 0;
      do {
        uVar6 = 0;
        if ((int)uVar8 < *(int *)&param_1[5].field_0x8) {
          uVar6 = ~uVar8 >> 0x1f;
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
        plVar2 = *(longlong **)(lVar9 + *(longlong *)(param_1 + 5));
        if (((plVar2 != (longlong *)0x0) && (*plVar2 != 0)) && (*(float *)(plVar2 + 0x34) != 0.0)) {
          *(float *)param_3 = *(float *)(*plVar2 + 0xa8) * *(float *)((longlong)plVar2 + 0x17c);
          return;
        }
        uVar8 = uVar8 + 1;
        lVar9 = lVar9 + 8;
      } while ((int)uVar8 < *(int *)&param_1[5].field_0x8);
    }
  }
  else {
    ppFVar7 = TMapBase<UAnimMontage_*,FAnimMontageInstance_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UAnimMontage_*,FAnimMontageInstance_*,0>_>
              ::Find((TMapBase<UAnimMontage_*,FAnimMontageInstance_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UAnimMontage_*,FAnimMontageInstance_*,0>_>
                      *)&param_1[5].field_0x10,local_res10);
    if ((ppFVar7 != (FAnimMontageInstance **)0x0) && (*ppFVar7 != (FAnimMontageInstance *)0x0)) {
      *(float *)param_3 = (*ppFVar7)->PlayRate * *(float *)&pUVar4->_padding_;
      return;
    }
  }
  *(undefined4 *)param_3 = 0;
  return;
}

// execMontage_GetIsStopped @ 1474891d0

void __cdecl UAnimInstance::execMontage_GetIsStopped(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FAnimMontageInstance **ppFVar2;
  FAnimMontageInstance *pFVar3;
  UAnimMontage *local_res10;
  
  pFVar3 = (FAnimMontageInstance *)0x0;
  local_res10 = (UAnimMontage *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res10 == (UAnimMontage *)0x0) {
    *(undefined1 *)param_3 = 1;
  }
  else {
    ppFVar2 = TMapBase<UAnimMontage_*,FAnimMontageInstance_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UAnimMontage_*,FAnimMontageInstance_*,0>_>
              ::Find((TMapBase<UAnimMontage_*,FAnimMontageInstance_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UAnimMontage_*,FAnimMontageInstance_*,0>_>
                      *)&param_1[5].field_0x10,local_res10);
    if (ppFVar2 != (FAnimMontageInstance **)0x0) {
      pFVar3 = *ppFVar2;
    }
    *(bool *)param_3 = pFVar3 == (FAnimMontageInstance *)0x0;
  }
  return;
}

// execMontage_GetPlayRate @ 147489290

void __cdecl UAnimInstance::execMontage_GetPlayRate(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FAnimMontageInstance **ppFVar6;
  uint uVar7;
  longlong lVar8;
  UAnimMontage *local_res10;
  
  local_res10 = (UAnimMontage *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res10 == (UAnimMontage *)0x0) {
    uVar7 = 0;
    if (0 < *(int *)&param_1[5].field_0x8) {
      lVar8 = 0;
      do {
        uVar5 = 0;
        if ((int)uVar7 < *(int *)&param_1[5].field_0x8) {
          uVar5 = ~uVar7 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        plVar2 = *(longlong **)(lVar8 + *(longlong *)(param_1 + 5));
        if (((plVar2 != (longlong *)0x0) && (*plVar2 != 0)) && (*(float *)(plVar2 + 0x34) != 0.0)) {
          *(undefined4 *)param_3 = *(undefined4 *)((longlong)plVar2 + 0x17c);
          return;
        }
        uVar7 = uVar7 + 1;
        lVar8 = lVar8 + 8;
      } while ((int)uVar7 < *(int *)&param_1[5].field_0x8);
    }
  }
  else {
    ppFVar6 = TMapBase<UAnimMontage_*,FAnimMontageInstance_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UAnimMontage_*,FAnimMontageInstance_*,0>_>
              ::Find((TMapBase<UAnimMontage_*,FAnimMontageInstance_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UAnimMontage_*,FAnimMontageInstance_*,0>_>
                      *)&param_1[5].field_0x10,local_res10);
    if ((ppFVar6 != (FAnimMontageInstance **)0x0) && (*ppFVar6 != (FAnimMontageInstance *)0x0)) {
      *(float *)param_3 = (*ppFVar6)->PlayRate;
      return;
    }
  }
  *(undefined4 *)param_3 = 0;
  return;
}

// execMontage_GetPosition @ 147489410

void __cdecl UAnimInstance::execMontage_GetPosition(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FAnimMontageInstance **ppFVar6;
  uint uVar7;
  longlong lVar8;
  UAnimMontage *local_res10;
  
  local_res10 = (UAnimMontage *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res10 == (UAnimMontage *)0x0) {
    uVar7 = 0;
    if (0 < *(int *)&param_1[5].field_0x8) {
      lVar8 = 0;
      do {
        uVar5 = 0;
        if ((int)uVar7 < *(int *)&param_1[5].field_0x8) {
          uVar5 = ~uVar7 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        plVar2 = *(longlong **)(lVar8 + *(longlong *)(param_1 + 5));
        if (((plVar2 != (longlong *)0x0) && (*plVar2 != 0)) && (*(float *)(plVar2 + 0x34) != 0.0)) {
          *(int *)param_3 = (int)plVar2[0x2f];
          return;
        }
        uVar7 = uVar7 + 1;
        lVar8 = lVar8 + 8;
      } while ((int)uVar7 < *(int *)&param_1[5].field_0x8);
    }
  }
  else {
    ppFVar6 = TMapBase<UAnimMontage_*,FAnimMontageInstance_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UAnimMontage_*,FAnimMontageInstance_*,0>_>
              ::Find((TMapBase<UAnimMontage_*,FAnimMontageInstance_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UAnimMontage_*,FAnimMontageInstance_*,0>_>
                      *)&param_1[5].field_0x10,local_res10);
    if ((ppFVar6 != (FAnimMontageInstance **)0x0) && (*ppFVar6 != (FAnimMontageInstance *)0x0)) {
      *(float *)param_3 = (*ppFVar6)->Position;
      return;
    }
  }
  *(undefined4 *)param_3 = 0;
  return;
}

// execMontage_IsActive @ 147489590

void __cdecl UAnimInstance::execMontage_IsActive(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FAnimMontageInstance **ppFVar6;
  uint uVar7;
  longlong lVar8;
  UAnimMontage *local_res10;
  
  local_res10 = (UAnimMontage *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res10 == (UAnimMontage *)0x0) {
    uVar7 = 0;
    if (0 < *(int *)&param_1[5].field_0x8) {
      lVar8 = 0;
      do {
        uVar5 = 0;
        if ((int)uVar7 < *(int *)&param_1[5].field_0x8) {
          uVar5 = ~uVar7 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        plVar2 = *(longlong **)(lVar8 + *(longlong *)(param_1 + 5));
        if (((plVar2 != (longlong *)0x0) && (*plVar2 != 0)) && (*(float *)(plVar2 + 0x34) != 0.0))
        goto LAB_147489633;
        uVar7 = uVar7 + 1;
        lVar8 = lVar8 + 8;
      } while ((int)uVar7 < *(int *)&param_1[5].field_0x8);
    }
  }
  else {
    ppFVar6 = TMapBase<UAnimMontage_*,FAnimMontageInstance_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UAnimMontage_*,FAnimMontageInstance_*,0>_>
              ::Find((TMapBase<UAnimMontage_*,FAnimMontageInstance_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UAnimMontage_*,FAnimMontageInstance_*,0>_>
                      *)&param_1[5].field_0x10,local_res10);
    if ((ppFVar6 != (FAnimMontageInstance **)0x0) && (*ppFVar6 != (FAnimMontageInstance *)0x0)) {
LAB_147489633:
      *(undefined1 *)param_3 = 1;
      return;
    }
  }
  *(undefined1 *)param_3 = 0;
  return;
}

// execMontage_IsPlaying @ 147489700

void __cdecl UAnimInstance::execMontage_IsPlaying(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  UAnimMontage *local_res10;
  
  local_res10 = (UAnimMontage *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = Montage_IsPlaying((UAnimInstance *)param_1,local_res10);
  *(bool *)param_3 = bVar2;
  return;
}

// execMontage_JumpToSection @ 1474897a0

void __cdecl
UAnimInstance::execMontage_JumpToSection(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FAnimMontageInstance *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FAnimMontageInstance **ppFVar6;
  uint uVar7;
  longlong lVar8;
  FName local_res10 [2];
  UAnimMontage *local_res20;
  FName local_38 [4];
  
  local_res10[0].ComparisonIndex.Value = 0;
  local_res10[0].Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res20 = (UAnimMontage *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_38[0] = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res20 == (UAnimMontage *)0x0) {
    uVar7 = 0;
    if (0 < *(int *)&param_1[5].field_0x8) {
      lVar8 = 0;
      do {
        uVar5 = 0;
        if ((int)uVar7 < *(int *)&param_1[5].field_0x8) {
          uVar5 = ~uVar7 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar2 = *(FAnimMontageInstance **)(lVar8 + *(longlong *)(param_1 + 5));
        if (((pFVar2 != (FAnimMontageInstance *)0x0) &&
            ((pFVar2->Montage).field0_0x0.DebugPtr != (UAnimMontage *)0x0)) &&
           ((pFVar2->Blend).DesiredValue != 0.0)) {
          FAnimMontageInstance::JumpToSectionName
                    (pFVar2,local_38,pFVar2->PlayRate <= 0.0 && pFVar2->PlayRate != 0.0);
        }
        uVar7 = uVar7 + 1;
        lVar8 = lVar8 + 8;
      } while ((int)uVar7 < *(int *)&param_1[5].field_0x8);
    }
  }
  else {
    ppFVar6 = TMapBase<UAnimMontage_*,FAnimMontageInstance_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UAnimMontage_*,FAnimMontageInstance_*,0>_>
              ::Find((TMapBase<UAnimMontage_*,FAnimMontageInstance_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UAnimMontage_*,FAnimMontageInstance_*,0>_>
                      *)&param_1[5].field_0x10,local_res20);
    if ((ppFVar6 != (FAnimMontageInstance **)0x0) &&
       (pFVar2 = *ppFVar6, pFVar2 != (FAnimMontageInstance *)0x0)) {
      FAnimMontageInstance::JumpToSectionName
                (pFVar2,local_38,pFVar2->PlayRate <= 0.0 && pFVar2->PlayRate != 0.0);
      return;
    }
  }
  return;
}

// execMontage_JumpToSectionsEnd @ 147489980

void __cdecl
UAnimInstance::execMontage_JumpToSectionsEnd(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FAnimMontageInstance *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FAnimMontageInstance **ppFVar6;
  uint uVar7;
  longlong lVar8;
  FName local_res10 [2];
  UAnimMontage *local_res20;
  FName local_38 [4];
  
  local_res10[0].ComparisonIndex.Value = 0;
  local_res10[0].Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res20 = (UAnimMontage *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_38[0] = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res20 == (UAnimMontage *)0x0) {
    uVar7 = 0;
    if (0 < *(int *)&param_1[5].field_0x8) {
      lVar8 = 0;
      do {
        uVar5 = 0;
        if ((int)uVar7 < *(int *)&param_1[5].field_0x8) {
          uVar5 = ~uVar7 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar2 = *(FAnimMontageInstance **)(lVar8 + *(longlong *)(param_1 + 5));
        if (((pFVar2 != (FAnimMontageInstance *)0x0) &&
            ((pFVar2->Montage).field0_0x0.DebugPtr != (UAnimMontage *)0x0)) &&
           ((pFVar2->Blend).DesiredValue != 0.0)) {
          FAnimMontageInstance::JumpToSectionName
                    (pFVar2,local_38,0.0 < pFVar2->PlayRate || pFVar2->PlayRate == 0.0);
        }
        uVar7 = uVar7 + 1;
        lVar8 = lVar8 + 8;
      } while ((int)uVar7 < *(int *)&param_1[5].field_0x8);
    }
  }
  else {
    ppFVar6 = TMapBase<UAnimMontage_*,FAnimMontageInstance_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UAnimMontage_*,FAnimMontageInstance_*,0>_>
              ::Find((TMapBase<UAnimMontage_*,FAnimMontageInstance_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UAnimMontage_*,FAnimMontageInstance_*,0>_>
                      *)&param_1[5].field_0x10,local_res20);
    if ((ppFVar6 != (FAnimMontageInstance **)0x0) &&
       (pFVar2 = *ppFVar6, pFVar2 != (FAnimMontageInstance *)0x0)) {
      FAnimMontageInstance::JumpToSectionName
                (pFVar2,local_38,0.0 < pFVar2->PlayRate || pFVar2->PlayRate == 0.0);
      return;
    }
  }
  return;
}

// execMontage_Pause @ 147489b60

void __cdecl UAnimInstance::execMontage_Pause(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FAnimMontageInstance *this;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FAnimMontageInstance **ppFVar5;
  uint uVar6;
  longlong lVar7;
  UAnimMontage *local_res10;
  
  local_res10 = (UAnimMontage *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res10 == (UAnimMontage *)0x0) {
    uVar6 = 0;
    if (0 < *(int *)&param_1[5].field_0x8) {
      lVar7 = 0;
      do {
        uVar4 = 0;
        if ((int)uVar6 < *(int *)&param_1[5].field_0x8) {
          uVar4 = ~uVar6 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        this = *(FAnimMontageInstance **)(lVar7 + *(longlong *)(param_1 + 5));
        if (((this != (FAnimMontageInstance *)0x0) &&
            ((this->Montage).field0_0x0.DebugPtr != (UAnimMontage *)0x0)) &&
           ((this->Blend).DesiredValue != 0.0)) {
          FAnimMontageInstance::Pause(this);
        }
        uVar6 = uVar6 + 1;
        lVar7 = lVar7 + 8;
      } while ((int)uVar6 < *(int *)&param_1[5].field_0x8);
    }
  }
  else {
    ppFVar5 = TMapBase<UAnimMontage_*,FAnimMontageInstance_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UAnimMontage_*,FAnimMontageInstance_*,0>_>
              ::Find((TMapBase<UAnimMontage_*,FAnimMontageInstance_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UAnimMontage_*,FAnimMontageInstance_*,0>_>
                      *)&param_1[5].field_0x10,local_res10);
    if ((ppFVar5 != (FAnimMontageInstance **)0x0) && (*ppFVar5 != (FAnimMontageInstance *)0x0)) {
      FAnimMontageInstance::Pause(*ppFVar5);
      return;
    }
  }
  return;
}

// execMontage_Play @ 147489cc0

void __cdecl UAnimInstance::execMontage_Play(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  bool bVar5;
  undefined4 uVar6;
  undefined1 local_res8 [8];
  int local_res10 [2];
  undefined4 local_res18 [2];
  undefined4 local_res20 [2];
  longlong local_98;
  TObjectPtr<UCurveFloat>_u_0 local_90;
  undefined4 local_88;
  undefined1 local_84;
  TObjectPtr<UBlendProfile>_u_0 local_80 [2];
  undefined4 local_70;
  undefined1 local_6c;
  undefined1 local_68;
  
  local_98 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_98,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_98);
  }
  local_res20[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  local_res8[0] = 0;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  local_res18[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  lVar4 = local_98;
  uVar3 = local_res20[0];
  uVar6 = local_res18[0];
  uVar2 = local_res8[0];
  bVar5 = local_res10[0] != 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FMontageBlendSettings::FMontageBlendSettings((FMontageBlendSettings *)&local_80[0].ObjectPtr);
  if (lVar4 != 0) {
    FAlphaBlendArgs::FAlphaBlendArgs
              ((FAlphaBlendArgs *)&local_90.ObjectPtr,(FAlphaBlend *)(lVar4 + 0xc0));
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_90.DebugPtr != (UCurveFloat *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_90.DebugPtr);
    }
    local_6c = local_84;
    local_68 = *(undefined1 *)(lVar4 + 0xb8);
    local_70 = local_88;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (*(UObject **)(lVar4 + 0x178) != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(*(UObject **)(lVar4 + 0x178));
    }
    local_80[0] = *(TObjectPtr<UBlendProfile>_u_0 *)(lVar4 + 0x178);
  }
  uVar6 = (**(code **)(*(longlong *)param_1 + 0x2f8))
                    (param_1,lVar4,local_80,uVar3,uVar2,uVar6,bVar5);
  *(undefined4 *)param_3 = uVar6;
  return;
}

// execMontage_PlayWithBlendIn @ 147489f20

void __cdecl
UAnimInstance::execMontage_PlayWithBlendIn(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UCurveFloat *pUVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  FAlphaBlendArgs *pFVar6;
  bool bVar7;
  undefined4 uVar8;
  undefined1 local_res8 [8];
  int local_res10 [2];
  undefined4 local_res18 [2];
  undefined4 local_res20 [2];
  longlong local_98;
  FAlphaBlendArgs local_90;
  TObjectPtr<UBlendProfile>_u_0 local_80;
  TObjectPtr<UCurveFloat>_u_0 local_78;
  float local_70;
  EAlphaBlendOption local_6c;
  undefined1 local_68;
  
  local_98 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_98,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_98);
  }
  FAlphaBlendArgs::FAlphaBlendArgs(&local_90);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_90,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_90);
  }
  local_res20[0] = 0;
  pFVar6 = &local_90;
  if ((FAlphaBlendArgs *)param_2->MostRecentPropertyAddress != (FAlphaBlendArgs *)0x0) {
    pFVar6 = (FAlphaBlendArgs *)param_2->MostRecentPropertyAddress;
  }
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  local_res8[0] = 0;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  local_res18[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  lVar5 = local_98;
  uVar4 = local_res20[0];
  uVar8 = local_res18[0];
  uVar3 = local_res8[0];
  bVar7 = local_res10[0] != 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FMontageBlendSettings::FMontageBlendSettings((FMontageBlendSettings *)&local_80.ObjectPtr);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar2 = (pFVar6->CustomCurve).field0_0x0.DebugPtr, pUVar2 != (UCurveFloat *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  local_70 = pFVar6->BlendTime;
  local_78.DebugPtr = (pFVar6->CustomCurve).field0_0x0;
  local_6c = pFVar6->BlendOption;
  if (lVar5 != 0) {
    local_68 = *(undefined1 *)(lVar5 + 0xb8);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (*(UObject **)(lVar5 + 0x178) != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(*(UObject **)(lVar5 + 0x178));
    }
    local_80 = *(TObjectPtr<UBlendProfile>_u_0 *)(lVar5 + 0x178);
  }
  uVar8 = (**(code **)(*(longlong *)param_1 + 0x2f8))
                    (param_1,lVar5,&local_80,uVar4,uVar3,uVar8,bVar7);
  *(undefined4 *)param_3 = uVar8;
  return;
}

// execMontage_PlayWithBlendSettings @ 14748a1c0

void __cdecl
UAnimInstance::execMontage_PlayWithBlendSettings(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FMontageBlendSettings *pFVar2;
  undefined4 uVar3;
  undefined1 local_res8 [8];
  undefined4 local_res10 [2];
  int local_res18 [2];
  undefined4 local_res20 [2];
  undefined8 local_68;
  FMontageBlendSettings local_60;
  
  local_68 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_68,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_68);
  }
  FMontageBlendSettings::FMontageBlendSettings(&local_60);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_60,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_60);
  }
  local_res20[0] = 0;
  pFVar2 = &local_60;
  if ((FMontageBlendSettings *)param_2->MostRecentPropertyAddress != (FMontageBlendSettings *)0x0) {
    pFVar2 = (FMontageBlendSettings *)param_2->MostRecentPropertyAddress;
  }
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  local_res8[0] = 0;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  local_res10[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res18[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar3 = (**(code **)(*(longlong *)param_1 + 0x2f8))
                    (param_1,local_68,pFVar2,local_res20[0],local_res8[0],local_res10[0],
                     local_res18[0] != 0);
  *(undefined4 *)param_3 = uVar3;
  return;
}

// execMontage_Resume @ 14748a3c0

void __cdecl UAnimInstance::execMontage_Resume(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FAnimMontageInstance *pFVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  FAnimMontageInstance **ppFVar7;
  uint uVar8;
  longlong lVar9;
  UAnimMontage *local_res10;
  
  local_res10 = (UAnimMontage *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res10 == (UAnimMontage *)0x0) {
    uVar8 = 0;
    if (0 < *(int *)&param_1[5].field_0x8) {
      lVar9 = 0;
      do {
        uVar6 = 0;
        if ((int)uVar8 < *(int *)&param_1[5].field_0x8) {
          uVar6 = ~uVar8 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        plVar3 = *(longlong **)(lVar9 + *(longlong *)(param_1 + 5));
        if ((((plVar3 != (longlong *)0x0) && (*plVar3 != 0)) && (*(float *)(plVar3 + 0x34) != 0.0))
           && ((char)plVar3[0xd] == '\0')) {
          *(undefined1 *)(plVar3 + 0xd) = 1;
        }
        uVar8 = uVar8 + 1;
        lVar9 = lVar9 + 8;
      } while ((int)uVar8 < *(int *)&param_1[5].field_0x8);
    }
  }
  else {
    ppFVar7 = TMapBase<UAnimMontage_*,FAnimMontageInstance_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UAnimMontage_*,FAnimMontageInstance_*,0>_>
              ::Find((TMapBase<UAnimMontage_*,FAnimMontageInstance_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UAnimMontage_*,FAnimMontageInstance_*,0>_>
                      *)&param_1[5].field_0x10,local_res10);
    if (((ppFVar7 != (FAnimMontageInstance **)0x0) &&
        (pFVar2 = *ppFVar7, pFVar2 != (FAnimMontageInstance *)0x0)) &&
       (((pFVar2->Montage).field0_0x0.DebugPtr == (UAnimMontage *)0x0 || (pFVar2->bPlaying == false)
        ))) {
      pFVar2->bPlaying = true;
      return;
    }
  }
  return;
}

// execMontage_SetNextSection @ 14748a540

void __cdecl
UAnimInstance::execMontage_SetNextSection(UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  FProperty *pFVar2;
  FAnimMontageInstance *this;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FAnimMontageInstance **ppFVar6;
  uint uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  FName local_res10;
  FName local_res20;
  UAnimMontage *local_48;
  FName local_40;
  FName local_38 [4];
  
  uVar8 = 0;
  local_res20.ComparisonIndex.Value = 0;
  local_res20.Number = 0;
  FNameProperty::StaticClass();
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_48 = (UAnimMontage *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  local_40 = local_res10;
  local_38[0] = local_res20;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_48 == (UAnimMontage *)0x0) {
    uVar9 = uVar8;
    if (0 < *(int *)&param_1[5].field_0x8) {
      do {
        uVar7 = (uint)uVar8;
        uVar5 = 0;
        if ((int)uVar7 < *(int *)&param_1[5].field_0x8) {
          uVar5 = ~uVar7 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        this = *(FAnimMontageInstance **)(uVar9 + *(longlong *)(param_1 + 5));
        if (((this != (FAnimMontageInstance *)0x0) &&
            ((this->Montage).field0_0x0.DebugPtr != (UAnimMontage *)0x0)) &&
           ((this->Blend).DesiredValue != 0.0)) {
          FAnimMontageInstance::SetNextSectionName(this,local_38,&local_40);
        }
        uVar8 = (ulonglong)(uVar7 + 1);
        uVar9 = uVar9 + 8;
      } while ((int)(uVar7 + 1) < *(int *)&param_1[5].field_0x8);
    }
  }
  else {
    ppFVar6 = TMapBase<UAnimMontage_*,FAnimMontageInstance_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UAnimMontage_*,FAnimMontageInstance_*,0>_>
              ::Find((TMapBase<UAnimMontage_*,FAnimMontageInstance_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UAnimMontage_*,FAnimMontageInstance_*,0>_>
                      *)&param_1[5].field_0x10,local_48);
    if ((ppFVar6 != (FAnimMontageInstance **)0x0) && (*ppFVar6 != (FAnimMontageInstance *)0x0)) {
      FAnimMontageInstance::SetNextSectionName(*ppFVar6,local_38,&local_40);
      return;
    }
  }
  return;
}

// execMontage_SetPlayRate @ 14748a760

void __cdecl UAnimInstance::execMontage_SetPlayRate(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  longlong *plVar2;
  code *pcVar3;
  float fVar4;
  bool bVar5;
  uint uVar6;
  FAnimMontageInstance **ppFVar7;
  uint uVar8;
  longlong lVar9;
  float local_res10 [4];
  UAnimMontage *local_res20;
  
  local_res20 = (UAnimMontage *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res10[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  fVar4 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res20 == (UAnimMontage *)0x0) {
    uVar8 = 0;
    if (0 < *(int *)&param_1[5].field_0x8) {
      lVar9 = 0;
      do {
        uVar6 = 0;
        if ((int)uVar8 < *(int *)&param_1[5].field_0x8) {
          uVar6 = ~uVar8 >> 0x1f;
        }
        if (uVar6 == 0) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar5) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        plVar2 = *(longlong **)(lVar9 + *(longlong *)(param_1 + 5));
        if (((plVar2 != (longlong *)0x0) && (*plVar2 != 0)) && (*(float *)(plVar2 + 0x34) != 0.0)) {
          *(float *)((longlong)plVar2 + 0x17c) = fVar4;
        }
        uVar8 = uVar8 + 1;
        lVar9 = lVar9 + 8;
      } while ((int)uVar8 < *(int *)&param_1[5].field_0x8);
    }
  }
  else {
    ppFVar7 = TMapBase<UAnimMontage_*,FAnimMontageInstance_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UAnimMontage_*,FAnimMontageInstance_*,0>_>
              ::Find((TMapBase<UAnimMontage_*,FAnimMontageInstance_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UAnimMontage_*,FAnimMontageInstance_*,0>_>
                      *)&param_1[5].field_0x10,local_res20);
    if ((ppFVar7 != (FAnimMontageInstance **)0x0) && (*ppFVar7 != (FAnimMontageInstance *)0x0)) {
      (*ppFVar7)->PlayRate = fVar4;
    }
  }
  return;
}

// execMontage_SetPosition @ 14748a920

void __cdecl UAnimInstance::execMontage_SetPosition(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FAnimMontageInstance *pFVar2;
  longlong *plVar3;
  code *pcVar4;
  float fVar5;
  bool bVar6;
  uint uVar7;
  FAnimMontageInstance **ppFVar8;
  uint uVar9;
  longlong lVar10;
  float local_res10 [4];
  UAnimMontage *local_res20;
  
  local_res20 = (UAnimMontage *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res10[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  fVar5 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res20 == (UAnimMontage *)0x0) {
    uVar9 = 0;
    if (0 < *(int *)&param_1[5].field_0x8) {
      lVar10 = 0;
      do {
        uVar7 = 0;
        if ((int)uVar9 < *(int *)&param_1[5].field_0x8) {
          uVar7 = ~uVar9 >> 0x1f;
        }
        if (uVar7 == 0) {
          bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar6) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        plVar3 = *(longlong **)(lVar10 + *(longlong *)(param_1 + 5));
        if (((plVar3 != (longlong *)0x0) && (*plVar3 != 0)) && (*(float *)(plVar3 + 0x34) != 0.0)) {
          *(float *)(plVar3 + 0x2f) = fVar5;
          *(undefined4 *)((longlong)plVar3 + 0x7c) = 0xfffffffe;
          *(undefined4 *)((longlong)plVar3 + 0x84) = 0xfffffffe;
        }
        uVar9 = uVar9 + 1;
        lVar10 = lVar10 + 8;
      } while ((int)uVar9 < *(int *)&param_1[5].field_0x8);
    }
  }
  else {
    ppFVar8 = TMapBase<UAnimMontage_*,FAnimMontageInstance_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UAnimMontage_*,FAnimMontageInstance_*,0>_>
              ::Find((TMapBase<UAnimMontage_*,FAnimMontageInstance_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UAnimMontage_*,FAnimMontageInstance_*,0>_>
                      *)&param_1[5].field_0x10,local_res20);
    if ((ppFVar8 != (FAnimMontageInstance **)0x0) &&
       (pFVar2 = *ppFVar8, pFVar2 != (FAnimMontageInstance *)0x0)) {
      pFVar2->Position = fVar5;
      (pFVar2->MarkerTickRecord).PreviousMarker.MarkerIndex = -2;
      (pFVar2->MarkerTickRecord).NextMarker.MarkerIndex = -2;
    }
  }
  return;
}

// execMontage_Stop @ 14748ab10

void __cdecl UAnimInstance::execMontage_Stop(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  float local_res10 [2];
  UAnimMontage *local_res20;
  
  local_res10[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res20 = (UAnimMontage *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  Montage_Stop((UAnimInstance *)param_1,local_res10[0],local_res20);
  return;
}

// execMontage_StopGroupByName @ 14748abf0

void __cdecl
UAnimInstance::execMontage_StopGroupByName(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  longlong *plVar2;
  FAnimMontageInstance *this;
  code *pcVar3;
  float fVar4;
  longlong lVar5;
  bool bVar6;
  uint uVar7;
  FName FVar8;
  FAlphaBlend *pFVar9;
  uint uVar10;
  longlong lVar11;
  float local_res8 [2];
  longlong local_res10;
  FAlphaBlend local_78;
  
  local_res8[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  local_res10 = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  lVar5 = local_res10;
  fVar4 = local_res8[0];
  uVar10 = 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (0 < *(int *)&param_1[5].field_0x8) {
    lVar11 = 0;
    do {
      uVar7 = 0;
      if ((int)uVar10 < *(int *)&param_1[5].field_0x8) {
        uVar7 = ~uVar10 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      plVar2 = *(longlong **)(lVar11 + *(longlong *)(param_1 + 5));
      if ((((plVar2 != (longlong *)0x0) && ((UAnimMontage *)*plVar2 != (UAnimMontage *)0x0)) &&
          (*(float *)(plVar2 + 0x34) != 0.0)) &&
         (FVar8 = UAnimMontage::GetGroupName((UAnimMontage *)*plVar2), *(longlong *)FVar8 == lVar5))
      {
        uVar7 = 0;
        if ((int)uVar10 < *(int *)&param_1[5].field_0x8) {
          uVar7 = ~uVar10 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        this = *(FAnimMontageInstance **)(lVar11 + *(longlong *)(param_1 + 5));
        pFVar9 = FAlphaBlend::FAlphaBlend(&local_78,(FAlphaBlend *)(*plVar2 + 0xf0),fVar4);
        FAnimMontageInstance::Stop(this,pFVar9,true);
      }
      uVar10 = uVar10 + 1;
      lVar11 = lVar11 + 8;
    } while ((int)uVar10 < *(int *)&param_1[5].field_0x8);
  }
  return;
}

// execMontage_StopWithBlendOut @ 14748ae40

void __cdecl
UAnimInstance::execMontage_StopWithBlendOut(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UAnimMontage *pUVar2;
  FAlphaBlendArgs *pFVar3;
  UAnimMontage *local_res10;
  FAlphaBlendArgs local_38;
  TObjectPtr<UCurveFloat>_u_0 local_28;
  float local_20;
  EAlphaBlendOption local_1c;
  code *local_18;
  TObjectPtr<UCurveFloat>_u_0 *local_10;
  
  FAlphaBlendArgs::FAlphaBlendArgs(&local_38);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  local_res10 = (UAnimMontage *)0x0;
  pFVar3 = &local_38;
  if ((FAlphaBlendArgs *)param_2->MostRecentPropertyAddress != (FAlphaBlendArgs *)0x0) {
    pFVar3 = (FAlphaBlendArgs *)param_2->MostRecentPropertyAddress;
  }
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  pUVar2 = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_28 = (TObjectPtr<UCurveFloat>_u_0)(pFVar3->CustomCurve).field0_0x0.DebugPtr;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_28.DebugPtr != (UCurveFloat *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_28.DebugPtr);
  }
  local_1c = pFVar3->BlendOption;
  local_20 = pFVar3->BlendTime;
  local_10 = &local_28;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`UAnimInstance::Montage_StopWithBlendOut'::__l2::<lambda_1>,FMontageBlendSettings,FAnimMontageInstance_const_*>
             ::Call;
  Montage_StopInternal
            ((UAnimInstance *)param_1,
             (TFunctionRef<FMontageBlendSettings___cdecl(FAnimMontageInstance_const_*)> *)&local_18,
             pUVar2);
  return;
}

// execMontage_StopWithBlendSettings @ 14748af80

void __cdecl
UAnimInstance::execMontage_StopWithBlendSettings(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FMontageBlendSettings *pFVar2;
  UAnimMontage *local_res10;
  FMontageBlendSettings local_28;
  
  FMontageBlendSettings::FMontageBlendSettings(&local_28);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  local_res10 = (UAnimMontage *)0x0;
  pFVar2 = &local_28;
  if ((FMontageBlendSettings *)param_2->MostRecentPropertyAddress != (FMontageBlendSettings *)0x0) {
    pFVar2 = (FMontageBlendSettings *)param_2->MostRecentPropertyAddress;
  }
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  Montage_StopWithBlendSettings((UAnimInstance *)param_1,pFVar2,local_res10);
  return;
}

// execPlaySlotAnimationAsDynamicMontage @ 14748b180

void __cdecl
UAnimInstance::execPlaySlotAnimationAsDynamicMontage(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  float fVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  FName FVar6;
  UAnimSequenceBase *pUVar7;
  UAnimMontage *pUVar8;
  UAnimMontage *pUVar9;
  float fVar10;
  float local_res10 [2];
  float local_res18 [2];
  int local_res20 [2];
  float local_e8;
  float local_e4;
  float local_e0 [2];
  FName local_d8;
  UAnimSequenceBase *local_d0;
  FMontageBlendSettings local_c8;
  FMontageBlendSettings local_a8 [3];
  
  pUVar9 = (UAnimMontage *)0x0;
  local_d0 = (UAnimSequenceBase *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_d0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_d0);
  }
  local_d8.ComparisonIndex.Value = 0;
  local_d8.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_d8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_d8);
  }
  local_e0[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_e0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_e0);
  }
  local_e4 = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_e4,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_e4);
  }
  local_e8 = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_e8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_e8);
  }
  local_res20[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  local_res18[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  local_res10[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  pUVar7 = local_d0;
  FVar6 = local_d8;
  fVar5 = local_e4;
  fVar4 = local_e8;
  iVar3 = local_res20[0];
  fVar2 = local_res18[0];
  fVar10 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FMontageBlendSettings::FMontageBlendSettings(local_a8,local_e0[0]);
  FMontageBlendSettings::FMontageBlendSettings(&local_c8,fVar5);
  if ((pUVar7 != (UAnimSequenceBase *)0x0) && (pUVar7->_padding_ != 0)) {
    pUVar8 = UAnimMontage::CreateSlotAnimationAsDynamicMontage_WithBlendSettings
                       (pUVar7,FVar6,local_a8,&local_c8,fVar4,iVar3,fVar2);
    if (pUVar8 != (UAnimMontage *)0x0) {
      fVar10 = Montage_Play((UAnimInstance *)param_1,pUVar8,fVar4,MontageLength,fVar10,true);
      pUVar9 = (UAnimMontage *)0x0;
      if (0.0 < fVar10) {
        pUVar9 = pUVar8;
      }
    }
  }
  *(UAnimMontage **)param_3 = pUVar9;
  return;
}

// execPlaySlotAnimationAsDynamicMontage_WithBlendArgs @ 14748b490

void __cdecl
UAnimInstance::execPlaySlotAnimationAsDynamicMontage_WithBlendArgs
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  float fVar2;
  int iVar3;
  float fVar4;
  FName FVar5;
  UAnimSequenceBase *pUVar6;
  UAnimMontage *pUVar7;
  UAnimMontage *pUVar8;
  FAlphaBlendArgs *pFVar9;
  FAlphaBlendArgs *pFVar10;
  float fVar11;
  float local_res10 [2];
  float local_res18 [2];
  int local_res20 [2];
  float local_108 [2];
  FName local_100;
  UAnimSequenceBase *local_f8;
  FAlphaBlendArgs local_f0;
  FAlphaBlendArgs local_e0;
  FMontageBlendSettings local_d0;
  FMontageBlendSettings local_b0 [3];
  
  pUVar8 = (UAnimMontage *)0x0;
  local_f8 = (UAnimSequenceBase *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_f8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_f8);
  }
  local_100.ComparisonIndex.Value = 0;
  local_100.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_100,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_100);
  }
  FAlphaBlendArgs::FAlphaBlendArgs(&local_f0);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_f0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_f0);
  }
  pFVar9 = &local_f0;
  if ((FAlphaBlendArgs *)param_2->MostRecentPropertyAddress != (FAlphaBlendArgs *)0x0) {
    pFVar9 = (FAlphaBlendArgs *)param_2->MostRecentPropertyAddress;
  }
  FAlphaBlendArgs::FAlphaBlendArgs(&local_e0);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_e0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_e0);
  }
  local_108[0] = 0.0;
  pFVar10 = &local_e0;
  if ((FAlphaBlendArgs *)param_2->MostRecentPropertyAddress != (FAlphaBlendArgs *)0x0) {
    pFVar10 = (FAlphaBlendArgs *)param_2->MostRecentPropertyAddress;
  }
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_108,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_108);
  }
  local_res20[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  local_res18[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  local_res10[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  pUVar6 = local_f8;
  FVar5 = local_100;
  fVar4 = local_108[0];
  iVar3 = local_res20[0];
  fVar2 = local_res18[0];
  fVar11 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FMontageBlendSettings::FMontageBlendSettings(local_b0,pFVar9);
  FMontageBlendSettings::FMontageBlendSettings(&local_d0,pFVar10);
  if ((pUVar6 != (UAnimSequenceBase *)0x0) && (pUVar6->_padding_ != 0)) {
    pUVar7 = UAnimMontage::CreateSlotAnimationAsDynamicMontage_WithBlendSettings
                       (pUVar6,FVar5,local_b0,&local_d0,fVar4,iVar3,fVar2);
    if (pUVar7 != (UAnimMontage *)0x0) {
      fVar11 = Montage_Play((UAnimInstance *)param_1,pUVar7,fVar4,MontageLength,fVar11,true);
      pUVar8 = (UAnimMontage *)0x0;
      if (0.0 < fVar11) {
        pUVar8 = pUVar7;
      }
    }
  }
  *(UAnimMontage **)param_3 = pUVar8;
  return;
}

// execPlaySlotAnimationAsDynamicMontage_WithBlendSettings @ 14748b7d0

void __cdecl
UAnimInstance::execPlaySlotAnimationAsDynamicMontage_WithBlendSettings
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  float fVar2;
  UAnimMontage *pUVar3;
  FMontageBlendSettings *pFVar4;
  UAnimMontage *pUVar5;
  FMontageBlendSettings *pFVar6;
  float fVar7;
  float local_res10 [2];
  float local_res18 [2];
  int local_res20 [2];
  float local_c8 [2];
  FName local_c0;
  UAnimSequenceBase *local_b8;
  FMontageBlendSettings local_b0;
  FMontageBlendSettings local_90 [2];
  
  pUVar5 = (UAnimMontage *)0x0;
  local_b8 = (UAnimSequenceBase *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_b8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_b8);
  }
  local_c0.ComparisonIndex.Value = 0;
  local_c0.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_c0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_c0);
  }
  FMontageBlendSettings::FMontageBlendSettings(&local_b0);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_b0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_b0);
  }
  pFVar6 = &local_b0;
  if ((FMontageBlendSettings *)param_2->MostRecentPropertyAddress != (FMontageBlendSettings *)0x0) {
    pFVar6 = (FMontageBlendSettings *)param_2->MostRecentPropertyAddress;
  }
  FMontageBlendSettings::FMontageBlendSettings(local_90);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_90,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_90);
  }
  local_c8[0] = 0.0;
  pFVar4 = local_90;
  if ((FMontageBlendSettings *)param_2->MostRecentPropertyAddress != (FMontageBlendSettings *)0x0) {
    pFVar4 = (FMontageBlendSettings *)param_2->MostRecentPropertyAddress;
  }
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_c8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_c8);
  }
  local_res20[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  local_res18[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  local_res10[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  fVar2 = local_c8[0];
  fVar7 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((local_b8 != (UAnimSequenceBase *)0x0) && (local_b8->_padding_ != 0)) {
    pUVar3 = UAnimMontage::CreateSlotAnimationAsDynamicMontage_WithBlendSettings
                       (local_b8,local_c0,pFVar6,pFVar4,local_c8[0],local_res20[0],local_res18[0]);
    if (pUVar3 != (UAnimMontage *)0x0) {
      fVar7 = Montage_Play((UAnimInstance *)param_1,pUVar3,fVar2,MontageLength,fVar7,true);
      pUVar5 = (UAnimMontage *)0x0;
      if (0.0 < fVar7) {
        pUVar5 = pUVar3;
      }
    }
  }
  *(UAnimMontage **)param_3 = pUVar5;
  return;
}

// execQueryAndMarkTransitionEvent @ 14748bac0

void __cdecl
UAnimInstance::execQueryAndMarkTransitionEvent(UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  int iVar2;
  FProperty *pFVar3;
  longlong lVar4;
  code *pcVar5;
  int iVar6;
  bool bVar7;
  FAnimInstanceProxy *pFVar8;
  longlong *plVar9;
  UScriptStruct *pUVar10;
  FAnimNode_StateMachine *this;
  uint uVar11;
  uint uVar12;
  int local_res10 [2];
  uint local_res18 [2];
  FName local_res20;
  FName local_38 [2];
  
  local_res18[0] = 0;
  FIntProperty::StaticClass();
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res20.ComparisonIndex.Value = 0;
  local_res20.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  uVar12 = local_res18[0];
  iVar6 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_38[0] = local_res20;
  pFVar8 = GetProxyOnAnyThread<FAnimInstanceProxy>((UAnimInstance *)param_1);
  if (pFVar8->AnimClassInterface != (IAnimClassInterface *)0x0) {
    plVar9 = (longlong *)(**(code **)((longlong)*pFVar8->AnimClassInterface + 0x20))();
    uVar11 = ~uVar12 + (int)plVar9[1];
    uVar12 = 0;
    if ((int)uVar11 < (int)plVar9[1]) {
      uVar12 = ~uVar11 >> 0x1f;
    }
    if (uVar12 == 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar7) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    pFVar3 = *(FProperty **)(*plVar9 + (longlong)(int)uVar11 * 8);
    if (pFVar3 != (FProperty *)0x0) {
      lVar4 = pFVar3[1]._padding_;
      pUVar10 = FAnimNode_StateMachine::StaticStruct();
      if (pUVar10 != (UScriptStruct *)0x0) {
        iVar2 = (int)pUVar10->_padding_;
        if ((*(int *)(lVar4 + 0x38) < iVar2) ||
           ((longlong *)*(undefined1 **)(*(longlong *)(lVar4 + 0x30) + (longlong)iVar2 * 8) !=
            &pUVar10->_padding_)) {
          bVar7 = false;
        }
        else {
          bVar7 = true;
        }
        if (bVar7) {
          this = FProperty::ContainerUObjectPtrToValuePtrInternal
                           (pFVar3,pFVar8->AnimInstanceObject,0);
          if (this != (FAnimNode_StateMachine *)0x0) {
            bVar7 = FAnimNode_StateMachine::QueryAndMarkTransitionEvent(this,iVar6,local_38);
            *(bool *)param_3 = bVar7;
            return;
          }
        }
      }
    }
  }
  *(undefined1 *)param_3 = 0;
  return;
}

// execQueryTransitionEvent @ 14748bcd0

void __cdecl UAnimInstance::execQueryTransitionEvent(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  FAnimInstanceProxy *this;
  FAnimNode_StateMachine *this_00;
  int local_res10 [2];
  int local_res18 [2];
  FName local_res20;
  FName local_28 [2];
  
  local_res18[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res20.ComparisonIndex.Value = 0;
  local_res20.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  iVar3 = local_res18[0];
  iVar2 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_28[0] = local_res20;
  this = GetProxyOnAnyThread<FAnimInstanceProxy>((UAnimInstance *)param_1);
  this_00 = FAnimInstanceProxy::GetStateMachineInstance(this,iVar3);
  if (this_00 != (FAnimNode_StateMachine *)0x0) {
    bVar4 = FAnimNode_StateMachine::QueryTransitionEvent(this_00,iVar2,local_28);
    *(bool *)param_3 = bVar4;
    return;
  }
  *(undefined1 *)param_3 = 0;
  return;
}

// execRemovePoseSnapshot @ 14748c720

void __cdecl UAnimInstance::execRemovePoseSnapshot(UObject *param_1,FFrame *param_2,void *param_3)

{
  TArray<FPoseSnapshot,TSizedDefaultAllocator<32>_> *this;
  int iVar1;
  FProperty *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  uint uVar5;
  longlong lVar6;
  bool bVar7;
  FAnimInstanceProxy *pFVar8;
  FScriptContainerElement *pFVar9;
  uint uVar10;
  longlong local_res10;
  
  local_res10 = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  lVar6 = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar8 = GetProxyOnGameThread<FAnimInstanceProxy>((UAnimInstance *)param_1);
  this = &pFVar8->PoseSnapshots;
  pFVar3 = (this->AllocatorInstance).Data;
  iVar1 = (pFVar8->PoseSnapshots).ArrayNum;
  pFVar9 = pFVar3;
  if (pFVar3 != pFVar3 + (longlong)iVar1 * 0x38) {
    while (*(longlong *)(pFVar9 + 0x28) != lVar6) {
      pFVar9 = pFVar9 + 0x38;
      if (pFVar9 == pFVar3 + (longlong)iVar1 * 0x38) {
        return;
      }
    }
    uVar5 = (uint)(((longlong)pFVar9 - (longlong)pFVar3) / 0x38);
    if (uVar5 != 0xffffffff) {
      uVar10 = 0;
      if ((int)uVar5 < iVar1) {
        uVar10 = ~uVar5 >> 0x1f;
      }
      if (uVar10 == 0) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar7) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      TArray<FPoseSnapshot,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl(this,uVar5);
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x38,8,&this->AllocatorInstance,(pFVar8->PoseSnapshots).ArrayNum,
                 &(pFVar8->PoseSnapshots).ArrayMax);
    }
  }
  return;
}

// execRequestSlotGroupInertialization @ 14748cb40

void __cdecl
UAnimInstance::execRequestSlotGroupInertialization(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  float local_res10 [2];
  FName local_res20;
  UBlendProfile *local_18 [2];
  
  local_res20.ComparisonIndex.Value = 0;
  local_res20.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res10[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_18[0] = (UBlendProfile *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_18);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  RequestSlotGroupInertialization((UAnimInstance *)param_1,local_res20,local_res10[0],local_18[0]);
  return;
}

// execRequestTransitionEvent @ 14748cc60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UAnimInstance::execRequestTransitionEvent(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  double dVar5;
  FAnimInstanceProxy *this;
  undefined1 auStack_108 [32];
  undefined1 local_e8;
  undefined1 local_e7 [7];
  undefined8 local_e0;
  double local_d8;
  LARGE_INTEGER local_d0;
  undefined1 *local_c8;
  undefined1 local_b8 [32];
  void *local_98;
  undefined4 local_90;
  undefined4 local_8c;
  double local_88;
  double local_80;
  undefined8 local_78;
  undefined1 local_70;
  undefined1 local_6f;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStack_108;
  local_e0 = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_e0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_e0);
  }
  local_d8 = 0.0;
  FDoubleProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_d8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_d8);
  }
  local_e7[0] = 0;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_e7,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_e7);
  }
  local_e8 = 0;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_e8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_e8);
  }
  dVar5 = local_d8;
  uVar4 = local_e0;
  uVar3 = local_e7[0];
  uVar2 = local_e8;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  this = GetProxyOnAnyThread<FAnimInstanceProxy>((UAnimInstance *)param_1);
  QueryPerformanceCounter(&local_d0);
  local_88 = (double)local_d0.QuadPart * FGenericPlatformTime::SecondsPerCycle +
             __real_4170000000000000;
  if (0.0 < dVar5) {
    local_c8 = local_b8;
    local_80 = dVar5;
    local_d0.QuadPart =
         (LONGLONG)
         UE::Core::Private::Function::
         TFunctionRefCaller<`FAnimInstanceProxy::RequestTransitionEvent'::__l2::<lambda_1>,void,FAnimNode_StateMachine_&>
         ::Call;
    local_98 = (void *)0x0;
    local_90 = 0;
    local_8c = 8;
    local_78 = uVar4;
    local_70 = uVar3;
    local_6f = uVar2;
    FAnimInstanceProxy::ForEachStateMachine
              (this,(TFunctionRef<void___cdecl(FAnimNode_StateMachine_&)> *)&local_d0.s);
    if (local_98 != (void *)0x0) {
      FMemory::Free(local_98);
    }
    *(undefined1 *)param_3 = 1;
  }
  else {
    *(undefined1 *)param_3 = 0;
  }
  return;
}

// execResetDynamics @ 14748ce90

void __cdecl UAnimInstance::execResetDynamics(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  byte bVar2;
  byte local_res8 [8];
  
  local_res8[0] = 0;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = *(byte *)(param_1 + 0xd);
  if (*(byte *)(param_1 + 0xd) < local_res8[0]) {
    bVar2 = local_res8[0];
  }
  *(byte *)(param_1 + 0xd) = bVar2;
  return;
}

// execSavePoseSnapshot @ 14748d480

void __cdecl UAnimInstance::execSavePoseSnapshot(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 local_res8;
  
  local_res8 = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0x2b8))(param_1,local_res8);
  return;
}

// execSetMorphTarget @ 14748e2d0

void __cdecl UAnimInstance::execSetMorphTarget(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  float fVar2;
  FName FVar3;
  USkeletalMeshComponent *this;
  float local_res10 [2];
  FName local_res20;
  
  local_res20.ComparisonIndex.Value = 0;
  local_res20.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res10[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  FVar3 = local_res20;
  fVar2 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  this = GetSkelMeshComponent((UAnimInstance *)param_1);
  if (this != (USkeletalMeshComponent *)0x0) {
    USkeletalMeshComponent::SetMorphTarget(this,FVar3,fVar2,true);
  }
  return;
}

// execSetPropagateNotifiesToLinkedInstances @ 14748e580

void __cdecl
UAnimInstance::execSetPropagateNotifiesToLinkedInstances
          (UObject *param_1,FFrame *param_2,void *param_3)

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
  param_1[1].field_0x9 = param_1[1].field_0x9 & 0xdf;
  param_1[1].field_0x9 = param_1[1].field_0x9 | -(local_res8[0] != 0) & 0x20U;
  return;
}

// execSetReceiveNotifiesFromLinkedInstances @ 14748e610

void __cdecl
UAnimInstance::execSetReceiveNotifiesFromLinkedInstances
          (UObject *param_1,FFrame *param_2,void *param_3)

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
  param_1[1].field_0x9 = param_1[1].field_0x9 & 0xef;
  param_1[1].field_0x9 = param_1[1].field_0x9 | -(local_res8[0] != 0) & 0x10U;
  return;
}

// execSetRootMotionMode @ 14748e6a0

void __cdecl UAnimInstance::execSetRootMotionMode(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 local_res8 [8];
  
  local_res8[0] = 0;
  FByteProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  param_1[1].field_0x8 = local_res8[0];
  return;
}

// execSetUseMainInstanceMontageEvaluationData @ 14748eaf0

void __cdecl
UAnimInstance::execSetUseMainInstanceMontageEvaluationData
          (UObject *param_1,FFrame *param_2,void *param_3)

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
  param_1[1].field_0x9 = param_1[1].field_0x9 & 0xbf;
  param_1[1].field_0x9 = param_1[1].field_0x9 | -(local_res8[0] != 0) & 0x40U;
  return;
}

// execSnapshotPose @ 14748eb80

void __cdecl UAnimInstance::execSnapshotPose(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  void **ppvVar2;
  void *local_48;
  undefined8 local_40;
  void *local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined1 local_18;
  
  local_48 = (void *)0x0;
  local_40 = 0;
  local_38 = (void *)0x0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  ppvVar2 = &local_48;
  if ((void **)param_2->MostRecentPropertyAddress != (void **)0x0) {
    ppvVar2 = (void **)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0x2c0))(param_1,ppvVar2);
  if (local_38 != (void *)0x0) {
    FMemory::Free(local_38);
  }
  if (local_48 != (void *)0x0) {
    FMemory::Free(local_48);
  }
  return;
}

// execStopSlotAnimation @ 14748ec50

void __cdecl UAnimInstance::execStopSlotAnimation(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FAnimMontageInstance *this;
  UAnimMontage *pUVar2;
  UPackage *pUVar3;
  code *pcVar4;
  float fVar5;
  longlong lVar6;
  bool bVar7;
  uint uVar8;
  UPackage *pUVar9;
  FAlphaBlend *pFVar10;
  FScriptContainerElement *pFVar11;
  uint uVar12;
  uint uVar13;
  longlong lVar14;
  longlong lVar15;
  float local_res10 [4];
  longlong local_res20;
  FAlphaBlend local_88;
  
  local_res10[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  uVar13 = 0;
  local_res20 = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  lVar6 = local_res20;
  fVar5 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res20 == 0) {
    Montage_Stop((UAnimInstance *)param_1,local_res10[0],(UAnimMontage *)0x0);
  }
  else if (0 < *(int *)&param_1[5].field_0x8) {
    lVar15 = 0;
    do {
      uVar12 = 0;
      if ((int)uVar13 < *(int *)&param_1[5].field_0x8) {
        uVar12 = ~uVar13 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      this = *(FAnimMontageInstance **)(lVar15 + *(longlong *)(param_1 + 5));
      if (((((this != (FAnimMontageInstance *)0x0) &&
            (pUVar2 = (this->Montage).field0_0x0.DebugPtr, pUVar2 != (UAnimMontage *)0x0)) &&
           ((this->Blend).DesiredValue != 0.0)) &&
          ((this->bPlaying != false &&
           (pUVar3 = (UPackage *)pUVar2->_padding_, pUVar9 = GetTransientPackage(), pUVar3 == pUVar9
           )))) && (uVar12 = 0, 0 < (pUVar2->SlotAnimTracks).ArrayNum)) {
        lVar14 = 0;
        do {
          uVar8 = 0;
          if ((int)uVar12 < (pUVar2->SlotAnimTracks).ArrayNum) {
            uVar8 = ~uVar12 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          pFVar11 = (pUVar2->SlotAnimTracks).AllocatorInstance.Data + lVar14;
          if ((pFVar11 != (FScriptContainerElement *)0x0) && (*(longlong *)pFVar11 == lVar6)) {
            pFVar10 = FAlphaBlend::FAlphaBlend(&local_88,fVar5);
            FAnimMontageInstance::Stop(this,pFVar10,true);
            break;
          }
          uVar12 = uVar12 + 1;
          lVar14 = lVar14 + 0x18;
        } while ((int)uVar12 < (pUVar2->SlotAnimTracks).ArrayNum);
      }
      uVar13 = uVar13 + 1;
      lVar15 = lVar15 + 8;
    } while ((int)uVar13 < *(int *)&param_1[5].field_0x8);
  }
  return;
}

// execTryGetPawnOwner @ 14748eef0

void __cdecl UAnimInstance::execTryGetPawnOwner(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined8 uVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar1 = (**(code **)(*(longlong *)param_1 + 0x2b0))();
  *(undefined8 *)param_3 = uVar1;
  return;
}

// execUnlinkAnimClassLayers @ 14748ef30

void __cdecl
UAnimInstance::execUnlinkAnimClassLayers(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  UObject *local_res8;
  UObject *local_res10;
  
  local_res8 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  local_res10 = local_res8;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pcVar2 = *(code **)(*(longlong *)param_1 + 0x2e0);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res8);
  }
  (*pcVar2)(param_1,&local_res10);
  return;
}

// execUnlockAIResources @ 14748efe0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UAnimInstance::execUnlockAIResources(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 local_res10 [2];
  undefined4 local_res20 [2];
  FName local_28;
  FString local_20;
  
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res20[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (1 < (byte)LogAnimation._0_1_) {
    local_28.ComparisonIndex.Value = *(uint *)&param_1->field_0x18;
    local_28.Number = *(uint *)&param_1->field_0x1c;
    ::FName::ToString(&local_28,&local_20);
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogAnimation);
    if (local_20.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_20.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// execWasAnimNotifyNameTriggeredInAnyState @ 14748f200

void __cdecl
UAnimInstance::execWasAnimNotifyNameTriggeredInAnyState
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  undefined8 local_res10;
  undefined8 local_res18;
  undefined8 *local_res20;
  code *local_28;
  undefined8 **local_20;
  
  local_res10 = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_res18 = local_res10;
  local_res20 = &local_res18;
  local_20 = &local_res20;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`UAnimInstance::WasAnimNotifyNameTriggeredInAnyState'::__l2::<lambda_1>,bool,FAnimInstanceProxy_*>
             ::Call;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = CheckOnInstanceAndMainInstance
                    ((UAnimInstance *)param_1,
                     (TFunctionRef<bool___cdecl(FAnimInstanceProxy_*)> *)&local_28);
  *(bool *)param_3 = bVar2;
  return;
}

// execWasAnimNotifyNameTriggeredInSourceState @ 14748f2c0

void __cdecl
UAnimInstance::execWasAnimNotifyNameTriggeredInSourceState
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  undefined4 local_res10 [2];
  undefined4 local_res18 [2];
  undefined4 local_res20 [2];
  undefined4 local_68 [2];
  undefined8 local_60;
  undefined8 local_58;
  code *local_50;
  undefined4 **local_48;
  undefined4 *local_40;
  undefined4 *local_38;
  undefined8 *local_30;
  
  local_res18[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_60 = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_60,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_60);
  }
  local_58 = local_60;
  local_68[0] = local_res10[0];
  local_res20[0] = local_res18[0];
  local_40 = local_res20;
  local_38 = local_68;
  local_30 = &local_58;
  local_48 = &local_40;
  local_50 = UE::Core::Private::Function::
             TFunctionRefCaller<`UAnimInstance::WasAnimNotifyNameTriggeredInSourceState'::__l2::<lambda_1>,bool,FAnimInstanceProxy_*>
             ::Call;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = CheckOnInstanceAndMainInstance
                    ((UAnimInstance *)param_1,
                     (TFunctionRef<bool___cdecl(FAnimInstanceProxy_*)> *)&local_50);
  *(bool *)param_3 = bVar2;
  return;
}

// execWasAnimNotifyNameTriggeredInStateMachine @ 14748f400

void __cdecl
UAnimInstance::execWasAnimNotifyNameTriggeredInStateMachine
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  undefined4 local_res10 [2];
  undefined4 local_res18 [2];
  undefined8 local_res20;
  undefined8 local_48;
  undefined4 *local_40;
  undefined8 *local_38;
  code *local_30;
  undefined4 **local_28;
  
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res20 = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_48 = local_res20;
  local_res18[0] = local_res10[0];
  local_40 = local_res18;
  local_38 = &local_48;
  local_28 = &local_40;
  local_30 = UE::Core::Private::Function::
             TFunctionRefCaller<`UAnimInstance::WasAnimNotifyNameTriggeredInStateMachine'::__l2::<lambda_1>,bool,FAnimInstanceProxy_*>
             ::Call;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = CheckOnInstanceAndMainInstance
                    ((UAnimInstance *)param_1,
                     (TFunctionRef<bool___cdecl(FAnimInstanceProxy_*)> *)&local_30);
  *(bool *)param_3 = bVar2;
  return;
}

// execWasAnimNotifyStateActiveInAnyState @ 14748f520

void __cdecl
UAnimInstance::execWasAnimNotifyStateActiveInAnyState
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  UObject *local_res10;
  UObject *local_res18;
  UObject **local_res20;
  code *local_28;
  undefined8 **local_20;
  
  local_res10 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_res18 = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res10 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res10);
  }
  local_res20 = &local_res18;
  local_20 = &local_res20;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`UAnimInstance::WasAnimNotifyStateActiveInAnyState'::__l2::<lambda_1>,bool,FAnimInstanceProxy_*>
             ::Call;
  bVar2 = CheckOnInstanceAndMainInstance
                    ((UAnimInstance *)param_1,
                     (TFunctionRef<bool___cdecl(FAnimInstanceProxy_*)> *)&local_28);
  *(bool *)param_3 = bVar2;
  return;
}

// execWasAnimNotifyStateActiveInSourceState @ 14748f5f0

void __cdecl
UAnimInstance::execWasAnimNotifyStateActiveInSourceState
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  undefined4 local_res10 [2];
  undefined4 local_res18 [2];
  undefined4 local_res20 [2];
  undefined4 local_68 [2];
  UObject *local_60;
  UObject *local_58;
  code *local_50;
  undefined4 **local_48;
  undefined4 *local_40;
  undefined4 *local_38;
  UObject **local_30;
  
  local_res18[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_60 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_60,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_60);
  }
  local_58 = local_60;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_60 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_60);
  }
  local_68[0] = local_res10[0];
  local_res20[0] = local_res18[0];
  local_40 = local_res20;
  local_38 = local_68;
  local_30 = &local_58;
  local_48 = &local_40;
  local_50 = UE::Core::Private::Function::
             TFunctionRefCaller<`UAnimInstance::WasAnimNotifyStateActiveInSourceState'::__l2::<lambda_1>,bool,FAnimInstanceProxy_*>
             ::Call;
  bVar2 = CheckOnInstanceAndMainInstance
                    ((UAnimInstance *)param_1,
                     (TFunctionRef<bool___cdecl(FAnimInstanceProxy_*)> *)&local_50);
  *(bool *)param_3 = bVar2;
  return;
}

// execWasAnimNotifyStateActiveInStateMachine @ 14748f740

void __cdecl
UAnimInstance::execWasAnimNotifyStateActiveInStateMachine
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  undefined4 local_res10 [2];
  undefined4 local_res18 [2];
  UObject *local_res20;
  UObject *local_48;
  undefined4 *local_40;
  UObject **local_38;
  code *local_30;
  undefined4 **local_28;
  
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res20 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_48 = local_res20;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res20 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res20);
  }
  local_res18[0] = local_res10[0];
  local_40 = local_res18;
  local_38 = &local_48;
  local_28 = &local_40;
  local_30 = UE::Core::Private::Function::
             TFunctionRefCaller<`UAnimInstance::WasAnimNotifyStateActiveInStateMachine'::__l2::<lambda_1>,bool,FAnimInstanceProxy_*>
             ::Call;
  bVar2 = CheckOnInstanceAndMainInstance
                    ((UAnimInstance *)param_1,
                     (TFunctionRef<bool___cdecl(FAnimInstanceProxy_*)> *)&local_30);
  *(bool *)param_3 = bVar2;
  return;
}

// execWasAnimNotifyTriggeredInAnyState @ 14748f870

void __cdecl
UAnimInstance::execWasAnimNotifyTriggeredInAnyState(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  UObject *local_res10;
  UObject *local_res18;
  UObject **local_res20;
  code *local_28;
  undefined8 **local_20;
  
  local_res10 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_res18 = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res10 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res10);
  }
  local_res20 = &local_res18;
  local_20 = &local_res20;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`UAnimInstance::WasAnimNotifyTriggeredInAnyState'::__l2::<lambda_1>,bool,FAnimInstanceProxy_*>
             ::Call;
  bVar2 = CheckOnInstanceAndMainInstance
                    ((UAnimInstance *)param_1,
                     (TFunctionRef<bool___cdecl(FAnimInstanceProxy_*)> *)&local_28);
  *(bool *)param_3 = bVar2;
  return;
}

// execWasAnimNotifyTriggeredInSourceState @ 14748f940

void __cdecl
UAnimInstance::execWasAnimNotifyTriggeredInSourceState
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  undefined4 local_res10 [2];
  undefined4 local_res18 [2];
  undefined4 local_res20 [2];
  undefined4 local_68 [2];
  UObject *local_60;
  UObject *local_58;
  code *local_50;
  undefined4 **local_48;
  undefined4 *local_40;
  undefined4 *local_38;
  UObject **local_30;
  
  local_res18[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_60 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_60,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_60);
  }
  local_58 = local_60;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_60 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_60);
  }
  local_68[0] = local_res10[0];
  local_res20[0] = local_res18[0];
  local_40 = local_res20;
  local_38 = local_68;
  local_30 = &local_58;
  local_48 = &local_40;
  local_50 = UE::Core::Private::Function::
             TFunctionRefCaller<`UAnimInstance::WasAnimNotifyTriggeredInSourceState'::__l2::<lambda_1>,bool,FAnimInstanceProxy_*>
             ::Call;
  bVar2 = CheckOnInstanceAndMainInstance
                    ((UAnimInstance *)param_1,
                     (TFunctionRef<bool___cdecl(FAnimInstanceProxy_*)> *)&local_50);
  *(bool *)param_3 = bVar2;
  return;
}

// execWasAnimNotifyTriggeredInStateMachine @ 14748fa90

void __cdecl
UAnimInstance::execWasAnimNotifyTriggeredInStateMachine
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  undefined4 local_res10 [2];
  undefined4 local_res18 [2];
  UObject *local_res20;
  UObject *local_48;
  undefined4 *local_40;
  UObject **local_38;
  code *local_30;
  undefined4 **local_28;
  
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res20 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_48 = local_res20;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res20 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res20);
  }
  local_res18[0] = local_res10[0];
  local_40 = local_res18;
  local_38 = &local_48;
  local_28 = &local_40;
  local_30 = UE::Core::Private::Function::
             TFunctionRefCaller<`UAnimInstance::WasAnimNotifyTriggeredInStateMachine'::__l2::<lambda_1>,bool,FAnimInstanceProxy_*>
             ::Call;
  bVar2 = CheckOnInstanceAndMainInstance
                    ((UAnimInstance *)param_1,
                     (TFunctionRef<bool___cdecl(FAnimInstanceProxy_*)> *)&local_30);
  *(bool *)param_3 = bVar2;
  return;
}

// GetSubsystem<FAnimSubsystemInstance_NodeRelevancy> @ 1474a7ab0

FAnimSubsystemInstance_NodeRelevancy * __thiscall
UAnimInstance::GetSubsystem<FAnimSubsystemInstance_NodeRelevancy>(UAnimInstance *this)

{
  code *pcVar1;
  bool bVar2;
  UScriptStruct *pUVar3;
  FAnimSubsystemInstance_NodeRelevancy *pFVar4;
  
  pUVar3 = FAnimSubsystemInstance_NodeRelevancy::StaticStruct();
  pFVar4 = (FAnimSubsystemInstance_NodeRelevancy *)FindSubsystem(this,pUVar3);
  if ((pFVar4 == (FAnimSubsystemInstance_NodeRelevancy *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Subsystem",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AnimInstance.h"
                         ,0x39d,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar4 = (FAnimSubsystemInstance_NodeRelevancy *)(*pcVar1)();
    return pFVar4;
  }
  return pFVar4;
}

// GetProxyOnGameThread<FAnimSingleNodeInstanceProxy> @ 147527fd0

FAnimSingleNodeInstanceProxy * __thiscall
UAnimInstance::GetProxyOnGameThread<FAnimSingleNodeInstanceProxy>(UAnimInstance *this)

{
  code *pcVar1;
  bool bVar2;
  FAnimSingleNodeInstanceProxy *pFVar3;
  USkeletalMeshComponent *pUVar4;
  
  if (this == (UAnimInstance *)0x0) {
    pFVar3 = (FAnimSingleNodeInstanceProxy *)0x0;
  }
  else {
    bVar2 = IsInGameThread();
    if (!bVar2) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AnimInstance.h"
                         ,0x687,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar3 = (FAnimSingleNodeInstanceProxy *)(*pcVar1)();
        return pFVar3;
      }
    }
    bVar2 = IsSkeletalMeshComponent(*(UObject **)&this->field_0x20);
    if (bVar2) {
      pUVar4 = GetSkelMeshComponentChecked(this);
      HandleExistingParallelEvaluationTask(pUVar4);
    }
    pFVar3 = (FAnimSingleNodeInstanceProxy *)this->AnimInstanceProxy;
    if (pFVar3 == (FAnimSingleNodeInstanceProxy *)0x0) {
      pFVar3 = (FAnimSingleNodeInstanceProxy *)(**(code **)(*(longlong *)this + 0x378))(this);
      this->AnimInstanceProxy = (FAnimInstanceProxy *)pFVar3;
      return pFVar3;
    }
  }
  return pFVar3;
}

// GetProxyOnGameThread<FAnimSingleNodeInstanceProxy> @ 147528060

FAnimSingleNodeInstanceProxy * __thiscall
UAnimInstance::GetProxyOnGameThread<FAnimSingleNodeInstanceProxy>(UAnimInstance *this)

{
  code *pcVar1;
  bool bVar2;
  FAnimSingleNodeInstanceProxy *pFVar3;
  USkeletalMeshComponent *pUVar4;
  
  bVar2 = IsInGameThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AnimInstance.h"
                       ,0x6a1,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FAnimSingleNodeInstanceProxy *)(*pcVar1)();
      return pFVar3;
    }
  }
  bVar2 = IsSkeletalMeshComponent(*(UObject **)&this->field_0x20);
  if (bVar2) {
    pUVar4 = GetSkelMeshComponentChecked(this);
    HandleExistingParallelEvaluationTask(pUVar4);
  }
  pFVar3 = (FAnimSingleNodeInstanceProxy *)this->AnimInstanceProxy;
  if (pFVar3 == (FAnimSingleNodeInstanceProxy *)0x0) {
    pFVar3 = (FAnimSingleNodeInstanceProxy *)(**(code **)(*(longlong *)this + 0x378))(this);
    this->AnimInstanceProxy = (FAnimInstanceProxy *)pFVar3;
  }
  return pFVar3;
}

// operator() @ 1505092b0

bool __thiscall `UAnimInstance::GetAnimationCurves'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_8124036945119543049>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_8124036945119543049>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1505093a0

bool __thiscall
`UAnimInstance::ShouldTriggerAnimNotifyState'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FName local_res10 [3];
  FString local_18;
  
  bVar4 = false;
  local_res10[0] = (FName)((ulonglong)local_res10[0] & 0xffffffff00000000);
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_8124036945119538800>);
  if (bVar2) {
    if (*(longlong *)this == 0) {
      ::FString::FString(&local_18,L"None");
    }
    else {
      local_res10[0] = *(FName *)(*(longlong *)this + 0x18);
      ::FName::ToString(local_res10,&local_18);
    }
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_8124036945119538800>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_150509436;
    }
  }
  bVar2 = false;
LAB_150509436:
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

// operator() @ 150509470

bool __thiscall `UAnimInstance::TriggerAnimNotifies'::__l31::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  undefined1 uVar6;
  USkeletalMeshComponent *pUVar7;
  FName local_res10;
  FName local_res18;
  FName local_res20;
  FString local_58;
  FString local_48;
  FString local_38;
  
  bVar4 = false;
  bVar3 = false;
  bVar2 = false;
  local_res10 = (FName)((ulonglong)local_res10 & 0xffffffff00000000);
  bVar5 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_8124036945119541632>);
  if (bVar5) {
    pUVar7 = UAnimInstance::GetSkelMeshComponent(*(UAnimInstance **)this);
    if (pUVar7->_padding_ == 0) {
      ::FString::FString(&local_38,L"None");
    }
    else {
      local_res10 = *(FName *)(pUVar7->_padding_ + 0x18);
      ::FName::ToString(&local_res10,&local_38);
    }
    pUVar7 = UAnimInstance::GetSkelMeshComponent(*(UAnimInstance **)this);
    if (pUVar7 == (USkeletalMeshComponent *)0x0) {
      ::FString::FString(&local_48,L"None");
    }
    else {
      local_res18 = (FName)pUVar7->_padding_;
      ::FName::ToString(&local_res18,&local_48);
    }
    if (*(longlong *)this == 0) {
      ::FString::FString(&local_58,L"None");
    }
    else {
      local_res20 = *(FName *)(*(longlong *)this + 0x18);
      ::FName::ToString(&local_res20,&local_58);
    }
    bVar4 = true;
    bVar3 = true;
    bVar2 = true;
    bVar5 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_8124036945119541632>,&::ENSURE_Static);
    if (bVar5) {
      bVar5 = true;
      goto LAB_1505095da;
    }
  }
  bVar5 = false;
LAB_1505095da:
  if ((bVar2) && (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if ((bVar3) && (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if ((bVar4) && (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (bVar5) {
    pcVar1 = (code *)swi(3);
    uVar6 = (*pcVar1)();
    return (bool)uVar6;
  }
  return false;
}

