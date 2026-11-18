// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 95

// DestroyObject @ 147550630

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FSortedPerBoneInterpolationData,SharedPointerInternals::DefaultDeleter<FSortedPerBoneInterpolationData>,1>
::DestroyObject(TReferenceControllerWithDeleter<FSortedPerBoneInterpolationData,SharedPointerInternals::DefaultDeleter<FSortedPerBoneInterpolationData>,1>
                *this)

{
  FSortedPerBoneInterpolationData *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FSortedPerBoneInterpolationData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147550641. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)pFVar1->_padding_)(pFVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 1475bf940

/* WARNING: Enum "EPrimaryAssetCookRule": Some values do not have unique names */

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FPrimaryAssetTypeData,SharedPointerInternals::DefaultDeleter<FPrimaryAssetTypeData>,1>
::DestroyObject(TReferenceControllerWithDeleter<FPrimaryAssetTypeData,SharedPointerInternals::DefaultDeleter<FPrimaryAssetTypeData>,1>
                *this)

{
  if (this->Object != (FPrimaryAssetTypeData *)0x0) {
    FPrimaryAssetTypeData::_scalar_deleting_destructor_(this->Object,1);
    return;
  }
  return;
}

// DestroyObject @ 1476fbd30

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FFineGrainedPerformanceTracker,SharedPointerInternals::DefaultDeleter<FFineGrainedPerformanceTracker>,1>
::DestroyObject(TReferenceControllerWithDeleter<FFineGrainedPerformanceTracker,SharedPointerInternals::DefaultDeleter<FFineGrainedPerformanceTracker>,1>
                *this)

{
  FFineGrainedPerformanceTracker *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FFineGrainedPerformanceTracker *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001476fbd41. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(pFVar1->_padding_ + 0x18))(pFVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 1476fbd50

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<Chaos::FLevelSet,SharedPointerInternals::DefaultDeleter<Chaos::FLevelSet>,1>
::DestroyObject(TReferenceControllerWithDeleter<Chaos::FLevelSet,SharedPointerInternals::DefaultDeleter<Chaos::FLevelSet>,1>
                *this)

{
  FLevelSet *this_00;
  
  this_00 = this->Object;
  if (this_00 != (FLevelSet *)0x0) {
    Chaos::FLevelSet::~FLevelSet(this_00);
    ::operator_delete(this_00,0x120);
    return;
  }
  return;
}

// DestroyObject @ 1476fbd90

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<Chaos::FMLLevelSet,SharedPointerInternals::DefaultDeleter<Chaos::FMLLevelSet>,1>
::DestroyObject(TReferenceControllerWithDeleter<Chaos::FMLLevelSet,SharedPointerInternals::DefaultDeleter<Chaos::FMLLevelSet>,1>
                *this)

{
  FMLLevelSet *this_00;
  
  this_00 = this->Object;
  if (this_00 != (FMLLevelSet *)0x0) {
    Chaos::FMLLevelSet::~FMLLevelSet(this_00);
    ::operator_delete(this_00,0x1d8);
    return;
  }
  return;
}

// DestroyObject @ 1476fbdd0

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FName,SharedPointerInternals::DefaultDeleter<FName>,1>::
DestroyObject(TReferenceControllerWithDeleter<FName,SharedPointerInternals::DefaultDeleter<FName>,1>
              *this)

{
  ::operator_delete(this->Object,8);
  return;
}

// DestroyObject @ 1476fbdf0

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FPerformanceTrackingChart,SharedPointerInternals::DefaultDeleter<FPerformanceTrackingChart>,1>
::DestroyObject(TReferenceControllerWithDeleter<FPerformanceTrackingChart,SharedPointerInternals::DefaultDeleter<FPerformanceTrackingChart>,1>
                *this)

{
  FPerformanceTrackingChart *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FPerformanceTrackingChart *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001476fbe01. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(pFVar1->_padding_ + 0x18))(pFVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 14781c060

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
SharedPointerInternals::
TReferenceControllerWithDeleter<FSavedMove_Character,SharedPointerInternals::DefaultDeleter<FSavedMove_Character>,1>
::DestroyObject(TReferenceControllerWithDeleter<FSavedMove_Character,SharedPointerInternals::DefaultDeleter<FSavedMove_Character>,1>
                *this)

{
  FSavedMove_Character *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FSavedMove_Character *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014781c071. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)**(undefined8 **)pFVar1)(pFVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 1479bcac0

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FTextRenderComponentCultureChangedFixUp::FImpl,SharedPointerInternals::DefaultDeleter<FTextRenderComponentCultureChangedFixUp::FImpl>,1>
::DestroyObject(TReferenceControllerWithDeleter<FTextRenderComponentCultureChangedFixUp::FImpl,SharedPointerInternals::DefaultDeleter<FTextRenderComponentCultureChangedFixUp::FImpl>,1>
                *this)

{
  int *piVar1;
  int iVar2;
  FImpl *pFVar3;
  longlong *plVar4;
  
  pFVar3 = this->Object;
  if (pFVar3 != (FImpl *)0x0) {
    plVar4 = *(longlong **)&pFVar3->field_0x8;
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4,1);
      }
    }
    ::operator_delete(pFVar3,0x10);
    return;
  }
  return;
}

// DestroyObject @ 1479bcb10

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FTextRenderComponentMIDCache::FMIDData,SharedPointerInternals::DefaultDeleter<FTextRenderComponentMIDCache::FMIDData>,1>
::DestroyObject(TReferenceControllerWithDeleter<FTextRenderComponentMIDCache::FMIDData,SharedPointerInternals::DefaultDeleter<FTextRenderComponentMIDCache::FMIDData>,1>
                *this)

{
  FMIDData *pFVar1;
  FScriptContainerElement *pFVar2;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FMIDData *)0x0) {
    pFVar2 = (pFVar1->FontParameters).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    pFVar2 = (pFVar1->MIDs).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    ::operator_delete(pFVar1,0x28);
    return;
  }
  return;
}

// DestroyObject @ 147aa4da0

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FInternetAddrDemo,SharedPointerInternals::DefaultDeleter<FInternetAddrDemo>,1>
::DestroyObject(TReferenceControllerWithDeleter<FInternetAddrDemo,SharedPointerInternals::DefaultDeleter<FInternetAddrDemo>,1>
                *this)

{
  FInternetAddrDemo *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FInternetAddrDemo *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147aa4db1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*pFVar1)(pFVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 147ad0330

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FObjectReplicator,SharedPointerInternals::DefaultDeleter<FObjectReplicator>,1>
::DestroyObject(TReferenceControllerWithDeleter<FObjectReplicator,SharedPointerInternals::DefaultDeleter<FObjectReplicator>,1>
                *this)

{
  FObjectReplicator *this_00;
  
  this_00 = this->Object;
  if (this_00 != (FObjectReplicator *)0x0) {
    FObjectReplicator::~FObjectReplicator(this_00);
    ::operator_delete(this_00,0xf0);
    return;
  }
  return;
}

// DestroyObject @ 147ad0370

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FQueuedReplayTask,SharedPointerInternals::DefaultDeleter<FQueuedReplayTask>,1>
::DestroyObject(TReferenceControllerWithDeleter<FQueuedReplayTask,SharedPointerInternals::DefaultDeleter<FQueuedReplayTask>,1>
                *this)

{
  FQueuedReplayTask *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FQueuedReplayTask *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147ad0381. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)pFVar1->_padding_)(pFVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 147ad0390

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FRepState,SharedPointerInternals::DefaultDeleter<FRepState>,1>::
DestroyObject(TReferenceControllerWithDeleter<FRepState,SharedPointerInternals::DefaultDeleter<FRepState>,1>
              *this)

{
  if (this->Object != (FRepState *)0x0) {
    FRepState::_scalar_deleting_destructor_(this->Object,1);
    return;
  }
  return;
}

// DestroyObject @ 147b51400

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<TRawMessageHandler<FEngineServiceAuthDeny,FEngineService>,SharedPointerInternals::DefaultDeleter<TRawMessageHandler<FEngineServiceAuthDeny,FEngineService>_>,1>
::DestroyObject(TReferenceControllerWithDeleter<TRawMessageHandler<FEngineServiceAuthDeny,FEngineService>,SharedPointerInternals::DefaultDeleter<TRawMessageHandler<FEngineServiceAuthDeny,FEngineService>_>,1>
                *this)

{
  TRawMessageHandler<FEngineServiceAuthDeny,FEngineService> *pTVar1;
  
  pTVar1 = this->Object;
  if (pTVar1 != (TRawMessageHandler<FEngineServiceAuthDeny,FEngineService> *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147b51411. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(pTVar1->_padding_ + 8))(pTVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 147b51420

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<TRawMessageHandler<FEngineServiceAuthGrant,FEngineService>,SharedPointerInternals::DefaultDeleter<TRawMessageHandler<FEngineServiceAuthGrant,FEngineService>_>,1>
::DestroyObject(TReferenceControllerWithDeleter<TRawMessageHandler<FEngineServiceAuthGrant,FEngineService>,SharedPointerInternals::DefaultDeleter<TRawMessageHandler<FEngineServiceAuthGrant,FEngineService>_>,1>
                *this)

{
  TRawMessageHandler<FEngineServiceAuthGrant,FEngineService> *pTVar1;
  
  pTVar1 = this->Object;
  if (pTVar1 != (TRawMessageHandler<FEngineServiceAuthGrant,FEngineService> *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147b51431. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(pTVar1->_padding_ + 8))(pTVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 147b51440

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<TRawMessageHandler<FEngineServiceExecuteCommand,FEngineService>,SharedPointerInternals::DefaultDeleter<TRawMessageHandler<FEngineServiceExecuteCommand,FEngineService>_>,1>
::DestroyObject(TReferenceControllerWithDeleter<TRawMessageHandler<FEngineServiceExecuteCommand,FEngineService>,SharedPointerInternals::DefaultDeleter<TRawMessageHandler<FEngineServiceExecuteCommand,FEngineService>_>,1>
                *this)

{
  TRawMessageHandler<FEngineServiceExecuteCommand,FEngineService> *pTVar1;
  
  pTVar1 = this->Object;
  if (pTVar1 != (TRawMessageHandler<FEngineServiceExecuteCommand,FEngineService> *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147b51451. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(pTVar1->_padding_ + 8))(pTVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 147b51460

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<TRawMessageHandler<FEngineServicePing,FEngineService>,SharedPointerInternals::DefaultDeleter<TRawMessageHandler<FEngineServicePing,FEngineService>_>,1>
::DestroyObject(TReferenceControllerWithDeleter<TRawMessageHandler<FEngineServicePing,FEngineService>,SharedPointerInternals::DefaultDeleter<TRawMessageHandler<FEngineServicePing,FEngineService>_>,1>
                *this)

{
  TRawMessageHandler<FEngineServicePing,FEngineService> *pTVar1;
  
  pTVar1 = this->Object;
  if (pTVar1 != (TRawMessageHandler<FEngineServicePing,FEngineService> *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147b51471. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(pTVar1->_padding_ + 8))(pTVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 147b51480

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<TRawMessageHandler<FEngineServiceTerminate,FEngineService>,SharedPointerInternals::DefaultDeleter<TRawMessageHandler<FEngineServiceTerminate,FEngineService>_>,1>
::DestroyObject(TReferenceControllerWithDeleter<TRawMessageHandler<FEngineServiceTerminate,FEngineService>,SharedPointerInternals::DefaultDeleter<TRawMessageHandler<FEngineServiceTerminate,FEngineService>_>,1>
                *this)

{
  TRawMessageHandler<FEngineServiceTerminate,FEngineService> *pTVar1;
  
  pTVar1 = this->Object;
  if (pTVar1 != (TRawMessageHandler<FEngineServiceTerminate,FEngineService> *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147b51491. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(pTVar1->_padding_ + 8))(pTVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 147b514a0

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FDefaultDynamicResolutionState,SharedPointerInternals::DefaultDeleter<FDefaultDynamicResolutionState>,1>
::DestroyObject(TReferenceControllerWithDeleter<FDefaultDynamicResolutionState,SharedPointerInternals::DefaultDeleter<FDefaultDynamicResolutionState>,1>
                *this)

{
  FDefaultDynamicResolutionState *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FDefaultDynamicResolutionState *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147b514b1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)pFVar1->_padding_)(pFVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 147bd7520

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FFontFaceData,SharedPointerInternals::DefaultDeleter<FFontFaceData>,1>
::DestroyObject(TReferenceControllerWithDeleter<FFontFaceData,SharedPointerInternals::DefaultDeleter<FFontFaceData>,1>
                *this)

{
  FFontFaceData *this_00;
  
  this_00 = this->Object;
  if (this_00 != (FFontFaceData *)0x0) {
    FFontFaceData::~FFontFaceData(this_00);
    ::operator_delete(this_00,0x20);
    return;
  }
  return;
}

// DestroyObject @ 147bd7560

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FReplayPlaylistTracker,SharedPointerInternals::DefaultDeleter<FReplayPlaylistTracker>,1>
::DestroyObject(TReferenceControllerWithDeleter<FReplayPlaylistTracker,SharedPointerInternals::DefaultDeleter<FReplayPlaylistTracker>,1>
                *this)

{
  if (this->Object != (FReplayPlaylistTracker *)0x0) {
    FReplayPlaylistTracker::_scalar_deleting_destructor_(this->Object,1);
    return;
  }
  return;
}

// DestroyObject @ 147bd7580

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FRootMotionSource,SharedPointerInternals::DefaultDeleter<FRootMotionSource>,1>
::DestroyObject(TReferenceControllerWithDeleter<FRootMotionSource,SharedPointerInternals::DefaultDeleter<FRootMotionSource>,1>
                *this)

{
  FRootMotionSource *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FRootMotionSource *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147bd7591. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)pFVar1->_padding_)(pFVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 147bd75a0

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FRootMotionSource,FRootMotionSourceDeleter,1>::DestroyObject
          (TReferenceControllerWithDeleter<FRootMotionSource,FRootMotionSourceDeleter,1> *this)

{
  FRootMotionSource *pFVar1;
  code *pcVar2;
  bool bVar3;
  longlong *plVar4;
  
  pFVar1 = this->Object;
  if (pFVar1 == (FRootMotionSource *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\GameFramework\\RootMotionSource.cpp"
                       ,0x7e2,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  plVar4 = (longlong *)(**(code **)(pFVar1->_padding_ + 0x58))(pFVar1);
  if (plVar4 == (longlong *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("ScriptStruct",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\GameFramework\\RootMotionSource.cpp"
                       ,0x7e4,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  (**(code **)(*plVar4 + 0x300))(plVar4,pFVar1,1);
  FMemory::Free(pFVar1);
  return;
}

// DestroyObject @ 147bd7640

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FRootMotionSource,UE::Net::TPolymorphicArrayStructNetSerializerImpl<FRootMotionSourceGroup,FRootMotionSource,&UE::Net::FRootMotionSourceGroupNetSerializer::GetPendingRootMotionSources,&UE::Net::FRootMotionSourceGroupNetSerializer::SetPendingRootMotionSourcesNum>::FSourceArrayItemTypeDeleter,1>
::DestroyObject(void *this)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  longlong *plVar4;
  
  plVar1 = *(longlong **)((longlong)this + 0x10);
  if (plVar1 == (longlong *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Public\\Iris\\Serialization\\PolymorphicNetSerializerImpl.h"
                       ,0xbd,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  plVar4 = (longlong *)(**(code **)(*plVar1 + 0x58))(plVar1);
  if (plVar4 == (longlong *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("ScriptStruct",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Public\\Iris\\Serialization\\PolymorphicNetSerializerImpl.h"
                       ,0xbf,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  (**(code **)(*plVar4 + 0x300))(plVar4,plVar1,1);
  FMemory::Free(plVar1);
  return;
}

// DestroyObject @ 147bd76e0

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FRootMotionSource,UE::Net::TPolymorphicArrayStructNetSerializerImpl<FRootMotionSourceGroup,FRootMotionSource,&UE::Net::FRootMotionSourceGroupNetSerializer::GetRootMotionSources,&UE::Net::FRootMotionSourceGroupNetSerializer::SetRootMotionSourcesNum>::FSourceArrayItemTypeDeleter,1>
::DestroyObject(void *this)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  longlong *plVar4;
  
  plVar1 = *(longlong **)((longlong)this + 0x10);
  if (plVar1 == (longlong *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Public\\Iris\\Serialization\\PolymorphicNetSerializerImpl.h"
                       ,0xbd,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  plVar4 = (longlong *)(**(code **)(*plVar1 + 0x58))(plVar1);
  if (plVar4 == (longlong *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("ScriptStruct",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Public\\Iris\\Serialization\\PolymorphicNetSerializerImpl.h"
                       ,0xbf,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  (**(code **)(*plVar4 + 0x300))(plVar4,plVar1,1);
  FMemory::Free(plVar1);
  return;
}

// DestroyObject @ 147bd7780

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FPlayAmplitudeFrequencyHapticLatentCommand,SharedPointerInternals::DefaultDeleter<FPlayAmplitudeFrequencyHapticLatentCommand>,1>
::DestroyObject(TReferenceControllerWithDeleter<FPlayAmplitudeFrequencyHapticLatentCommand,SharedPointerInternals::DefaultDeleter<FPlayAmplitudeFrequencyHapticLatentCommand>,1>
                *this)

{
  FPlayAmplitudeFrequencyHapticLatentCommand *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FPlayAmplitudeFrequencyHapticLatentCommand *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147bd7791. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)pFVar1->_padding_)(pFVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 147bd77a0

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FSceneViewExtensions,SharedPointerInternals::DefaultDeleter<FSceneViewExtensions>,1>
::DestroyObject(TReferenceControllerWithDeleter<FSceneViewExtensions,SharedPointerInternals::DefaultDeleter<FSceneViewExtensions>,1>
                *this)

{
  FSceneViewExtensions *pFVar1;
  FScriptContainerElement *pFVar2;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FSceneViewExtensions *)0x0) {
    DestructItems<TWeakPtr<ISceneViewExtension,1>,int>
              ((TWeakPtr<ISceneViewExtension,1> *)(pFVar1->KnownExtensions).AllocatorInstance.Data,
               (pFVar1->KnownExtensions).ArrayNum);
    pFVar2 = (pFVar1->KnownExtensions).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    ::operator_delete(pFVar1,0x10);
    return;
  }
  return;
}

// DestroyObject @ 147bd77f0

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FWaitLatentCommand,SharedPointerInternals::DefaultDeleter<FWaitLatentCommand>,1>
::DestroyObject(TReferenceControllerWithDeleter<FWaitLatentCommand,SharedPointerInternals::DefaultDeleter<FWaitLatentCommand>,1>
                *this)

{
  FWaitLatentCommand *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FWaitLatentCommand *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147bd7801. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)pFVar1->_padding_)(pFVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 147c42630

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<TArray<unsigned_char,TSizedDefaultAllocator<32>_>,SharedPointerInternals::DefaultDeleter<TArray<unsigned_char,TSizedDefaultAllocator<32>_>_>,1>
::DestroyObject(TReferenceControllerWithDeleter<TArray<unsigned_char,TSizedDefaultAllocator<32>_>,SharedPointerInternals::DefaultDeleter<TArray<unsigned_char,TSizedDefaultAllocator<32>_>_>,1>
                *this)

{
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar1;
  FScriptContainerElement *pFVar2;
  
  pTVar1 = this->Object;
  if (pTVar1 != (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)0x0) {
    pFVar2 = (pTVar1->AllocatorInstance).Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    ::operator_delete(pTVar1,0x10);
    return;
  }
  return;
}

// DestroyObject @ 147cede20

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<UHierarchicalInstancedStaticMeshComponent::FClusterBuilder,SharedPointerInternals::DefaultDeleter<UHierarchicalInstancedStaticMeshComponent::FClusterBuilder>,1>
::DestroyObject(TReferenceControllerWithDeleter<UHierarchicalInstancedStaticMeshComponent::FClusterBuilder,SharedPointerInternals::DefaultDeleter<UHierarchicalInstancedStaticMeshComponent::FClusterBuilder>,1>
                *this)

{
  FClusterBuilder *this_00;
  
  this_00 = this->Object;
  if (this_00 != (FClusterBuilder *)0x0) {
    UHierarchicalInstancedStaticMeshComponent::FClusterBuilder::~FClusterBuilder(this_00);
    ::operator_delete(this_00,0xd8);
    return;
  }
  return;
}

// DestroyObject @ 147e63ac0

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FLatentActionManager::FObjectActions,SharedPointerInternals::DefaultDeleter<FLatentActionManager::FObjectActions>,1>
::DestroyObject(TReferenceControllerWithDeleter<FLatentActionManager::FObjectActions,SharedPointerInternals::DefaultDeleter<FLatentActionManager::FObjectActions>,1>
                *this)

{
  FObjectActions *this_00;
  void *pvVar1;
  
  this_00 = this->Object;
  if (this_00 != (FObjectActions *)0x0) {
    *(undefined4 *)&(this_00->ActionList).field_0x48 = 0;
    pvVar1 = *(void **)&(this_00->ActionList).field_0x40;
    if (pvVar1 != (void *)0x0) {
      FMemory::Free(pvVar1);
    }
    TSparseArray<TSparseSetElement<TTuple<int,FPendingLatentAction_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<int,FPendingLatentAction_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<int,FPendingLatentAction_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)this_00);
    ::operator_delete(this_00,0x58);
    return;
  }
  return;
}

// DestroyObject @ 147e63b10

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<TArray<TTuple<int,FPendingLatentAction_*>,TSizedDefaultAllocator<32>_>,SharedPointerInternals::DefaultDeleter<TArray<TTuple<int,FPendingLatentAction_*>,TSizedDefaultAllocator<32>_>_>,1>
::DestroyObject(TReferenceControllerWithDeleter<TArray<TTuple<int,FPendingLatentAction_*>,TSizedDefaultAllocator<32>_>,SharedPointerInternals::DefaultDeleter<TArray<TTuple<int,FPendingLatentAction_*>,TSizedDefaultAllocator<32>_>_>,1>
                *this)

{
  TArray<TTuple<int,FPendingLatentAction_*>,TSizedDefaultAllocator<32>_> *pTVar1;
  FScriptContainerElement *pFVar2;
  
  pTVar1 = this->Object;
  if (pTVar1 != (TArray<TTuple<int,FPendingLatentAction_*>,TSizedDefaultAllocator<32>_> *)0x0) {
    pFVar2 = (pTVar1->AllocatorInstance).Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    ::operator_delete(pTVar1,0x10);
    return;
  }
  return;
}

// DestroyObject @ 147eb7740

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FLightWeightInstanceSubsystem,SharedPointerInternals::DefaultDeleter<FLightWeightInstanceSubsystem>,1>
::DestroyObject(TReferenceControllerWithDeleter<FLightWeightInstanceSubsystem,SharedPointerInternals::DefaultDeleter<FLightWeightInstanceSubsystem>,1>
                *this)

{
  FLightWeightInstanceSubsystem *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  BOOLEAN BVar4;
  bool bVar5;
  
  pFVar1 = this->Object;
  if (pFVar1 == (FLightWeightInstanceSubsystem *)0x0) {
    return;
  }
  BVar4 = TryAcquireSRWLockExclusive((PSRWLOCK)&pFVar1->LWIManagersRWLock);
  if (BVar4 == '\0') {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsLocked()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Windows\\WindowsPlatformMutex.h"
                       ,0x48,L"Destroying a lock that is still held!");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else {
    ReleaseSRWLockExclusive((PSRWLOCK)&pFVar1->LWIManagersRWLock);
  }
  pFVar2 = (pFVar1->LWInstanceManagers).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  ::operator_delete(pFVar1,0x28);
  return;
}

// DestroyObject @ 147ef6fc0

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<`UMaterial::CheckMaterialUsage_Concurrent'::__l13::FCallSMU,SharedPointerInternals::DefaultDeleter<`UMaterial::CheckMaterialUsage_Concurrent'::__l13::FCallSMU>,1>
::DestroyObject(void *this)

{
  ::operator_delete(*(void **)((longlong)this + 0x10),0x10);
  return;
}

// DestroyObject @ 147f377b0

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<`UMaterialInstance::CheckMaterialUsage_Concurrent'::__l13::FCallSMU,SharedPointerInternals::DefaultDeleter<`UMaterialInstance::CheckMaterialUsage_Concurrent'::__l13::FCallSMU>,1>
::DestroyObject(void *this)

{
  ::operator_delete(*(void **)((longlong)this + 0x10),0x10);
  return;
}

// DestroyObject @ 147fc2450

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FNetConnAnalyticsData,FNetAnalyticsDataDeleter,1>::DestroyObject
          (TReferenceControllerWithDeleter<FNetConnAnalyticsData,FNetAnalyticsDataDeleter,1> *this)

{
  FNetConnAnalyticsData *pFVar1;
  
  pFVar1 = this->Object;
  if (*(longlong *)&pFVar1->field_0x18 != 0) {
    (**(code **)(*(longlong *)pFVar1 + 0x18))(pFVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x000147fc247a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)pFVar1)(pFVar1,1);
  return;
}

// DestroyObject @ 14802ba90

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
SharedPointerInternals::
TReferenceControllerWithDeleter<FNetworkObjectInfo,SharedPointerInternals::DefaultDeleter<FNetworkObjectInfo>,1>
::DestroyObject(TReferenceControllerWithDeleter<FNetworkObjectInfo,SharedPointerInternals::DefaultDeleter<FNetworkObjectInfo>,1>
                *this)

{
  FNetworkObjectInfo *pFVar1;
  ForElementType<FSetElementId> FVar2;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FNetworkObjectInfo *)0x0) {
    (pFVar1->RecentlyDormantConnections).HashSize = 0;
    FVar2 = (pFVar1->RecentlyDormantConnections).Hash.SecondaryData;
    if (FVar2 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)FVar2);
    }
    TSparseArray<TSparseSetElement<TWeakObjectPtr<UNetConnection,FWeakObjectPtr>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TWeakObjectPtr<UNetConnection,FWeakObjectPtr>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&(pFVar1->RecentlyDormantConnections).Elements);
    (pFVar1->DormantConnections).HashSize = 0;
    FVar2 = (pFVar1->DormantConnections).Hash.SecondaryData;
    if (FVar2 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)FVar2);
    }
    TSparseArray<TSparseSetElement<TWeakObjectPtr<UNetConnection,FWeakObjectPtr>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TWeakObjectPtr<UNetConnection,FWeakObjectPtr>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&(pFVar1->DormantConnections).Elements);
    ::operator_delete(pFVar1,0xd8);
  }
  return;
}

// DestroyObject @ 14802bb10

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FClassNetCacheMgr,SharedPointerInternals::DefaultDeleter<FClassNetCacheMgr>,1>
::DestroyObject(TReferenceControllerWithDeleter<FClassNetCacheMgr,SharedPointerInternals::DefaultDeleter<FClassNetCacheMgr>,1>
                *this)

{
  FClassNetCacheMgr *this_00;
  void *pvVar1;
  
  this_00 = this->Object;
  if (this_00 != (FClassNetCacheMgr *)0x0) {
    FClassNetCacheMgr::ClearClassNetCache(this_00);
    *(undefined4 *)&(this_00->ClassFieldIndices).field_0x48 = 0;
    pvVar1 = *(void **)&(this_00->ClassFieldIndices).field_0x40;
    if (pvVar1 != (void *)0x0) {
      FMemory::Free(pvVar1);
    }
    TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UClass_const_,FWeakObjectPtr>,FClassNetCache_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UClass_const_,FWeakObjectPtr>,FClassNetCache_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UClass_const_,FWeakObjectPtr>,FClassNetCache_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)&this_00->ClassFieldIndices);
    ::operator_delete(this_00,0x58);
  }
  return;
}

// DestroyObject @ 14802bb70

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FNetAnalyticsAggregator,SharedPointerInternals::DefaultDeleter<FNetAnalyticsAggregator>,1>
::DestroyObject(TReferenceControllerWithDeleter<FNetAnalyticsAggregator,SharedPointerInternals::DefaultDeleter<FNetAnalyticsAggregator>,1>
                *this)

{
  if (this->Object != (FNetAnalyticsAggregator *)0x0) {
    FNetAnalyticsAggregator::_scalar_deleting_destructor_(this->Object,1);
    return;
  }
  return;
}

// DestroyObject @ 14802bb90

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FNetGUIDCache,SharedPointerInternals::DefaultDeleter<FNetGUIDCache>,1>
::DestroyObject(TReferenceControllerWithDeleter<FNetGUIDCache,SharedPointerInternals::DefaultDeleter<FNetGUIDCache>,1>
                *this)

{
  FNetGUIDCache *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FNetGUIDCache *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014802bba1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)pFVar1->_padding_)(pFVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 14802bbb0

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FNetworkObjectList,SharedPointerInternals::DefaultDeleter<FNetworkObjectList>,1>
::DestroyObject(TReferenceControllerWithDeleter<FNetworkObjectList,SharedPointerInternals::DefaultDeleter<FNetworkObjectList>,1>
                *this)

{
  if (this->Object != (FNetworkObjectList *)0x0) {
    FNetworkObjectList::_scalar_deleting_destructor_(this->Object,1);
    return;
  }
  return;
}

// DestroyObject @ 14809f120

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FQueuedBunchObjectReference,SharedPointerInternals::DefaultDeleter<FQueuedBunchObjectReference>,1>
::DestroyObject(TReferenceControllerWithDeleter<FQueuedBunchObjectReference,SharedPointerInternals::DefaultDeleter<FQueuedBunchObjectReference>,1>
                *this)

{
  ::operator_delete(this->Object,0x10);
  return;
}

// DestroyObject @ 14809f140

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FRPCDoSAnalyticsData,FNetAnalyticsDataDeleter,1>::DestroyObject
          (TReferenceControllerWithDeleter<FRPCDoSAnalyticsData,FNetAnalyticsDataDeleter,1> *this)

{
  FRPCDoSAnalyticsData *pFVar1;
  
  pFVar1 = this->Object;
  if (*(longlong *)&pFVar1->field_0x18 != 0) {
    (**(code **)(*(longlong *)pFVar1 + 0x18))(pFVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00014809f16a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)pFVar1)(pFVar1,1);
  return;
}

// DestroyObject @ 14809f180

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<StatelessConnectHandlerComponent,SharedPointerInternals::DefaultDeleter<StatelessConnectHandlerComponent>,1>
::DestroyObject(TReferenceControllerWithDeleter<StatelessConnectHandlerComponent,SharedPointerInternals::DefaultDeleter<StatelessConnectHandlerComponent>,1>
                *this)

{
  StatelessConnectHandlerComponent *pSVar1;
  
  pSVar1 = this->Object;
  if (pSVar1 != (StatelessConnectHandlerComponent *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014809f191. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)**(undefined8 **)pSVar1)(pSVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 148107200

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FFXSystem,FFXSystemInterface::FFXInterfaceDeletor,1>::DestroyObject
          (TReferenceControllerWithDeleter<FFXSystem,FFXSystemInterface::FFXInterfaceDeletor,1>
           *this)

{
  FFXSystemInterface::FFXInterfaceDeletor::operator()
            ((FFXInterfaceDeletor *)&this->Object,(FFXSystemInterface *)this->Object);
  return;
}

// DestroyObject @ 148107220

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FFXSystemInterface,FFXSystemInterface::FFXInterfaceDeletor,1>::
DestroyObject(TReferenceControllerWithDeleter<FFXSystemInterface,FFXSystemInterface::FFXInterfaceDeletor,1>
              *this)

{
  FFXSystemInterface::FFXInterfaceDeletor::operator()
            ((FFXInterfaceDeletor *)&this->Object,this->Object);
  return;
}

// DestroyObject @ 1481e0c60

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<TMap<FPhysicsShapeReference_Chaos,FBodyInstance::FWeldInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPhysicsShapeReference_Chaos,FBodyInstance::FWeldInfo,0>_>,SharedPointerInternals::DefaultDeleter<TMap<FPhysicsShapeReference_Chaos,FBodyInstance::FWeldInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPhysicsShapeReference_Chaos,FBodyInstance::FWeldInfo,0>_>_>,1>
::DestroyObject(TReferenceControllerWithDeleter<TMap<FPhysicsShapeReference_Chaos,FBodyInstance::FWeldInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPhysicsShapeReference_Chaos,FBodyInstance::FWeldInfo,0>_>,SharedPointerInternals::DefaultDeleter<TMap<FPhysicsShapeReference_Chaos,FBodyInstance::FWeldInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPhysicsShapeReference_Chaos,FBodyInstance::FWeldInfo,0>_>_>,1>
                *this)

{
  TMap<FPhysicsShapeReference_Chaos,FBodyInstance::FWeldInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPhysicsShapeReference_Chaos,FBodyInstance::FWeldInfo,0>_>
  *this_00;
  
  this_00 = this->Object;
  if (this_00 !=
      (TMap<FPhysicsShapeReference_Chaos,FBodyInstance::FWeldInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPhysicsShapeReference_Chaos,FBodyInstance::FWeldInfo,0>_>
       *)0x0) {
    *(undefined4 *)&this_00->field_0x48 = 0;
    if (*(void **)&this_00->field_0x40 != (void *)0x0) {
      FMemory::Free(*(void **)&this_00->field_0x40);
    }
    TSparseArray<TSparseSetElement<TTuple<FPhysicsShapeReference_Chaos,FBodyInstance::FWeldInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FPhysicsShapeReference_Chaos,FBodyInstance::FWeldInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<FPhysicsShapeReference_Chaos,FBodyInstance::FWeldInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)this_00);
    ::operator_delete(this_00,0x50);
    return;
  }
  return;
}

// DestroyObject @ 1482f4860

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<Chaos::FBaseRewindHistory,SharedPointerInternals::DefaultDeleter<Chaos::FBaseRewindHistory>,1>
::DestroyObject(TReferenceControllerWithDeleter<Chaos::FBaseRewindHistory,SharedPointerInternals::DefaultDeleter<Chaos::FBaseRewindHistory>,1>
                *this)

{
  FBaseRewindHistory *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FBaseRewindHistory *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001482f4871. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*pFVar1)(pFVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 14836ae00

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FActiveHapticFeedbackEffect,SharedPointerInternals::DefaultDeleter<FActiveHapticFeedbackEffect>,1>
::DestroyObject(TReferenceControllerWithDeleter<FActiveHapticFeedbackEffect,SharedPointerInternals::DefaultDeleter<FActiveHapticFeedbackEffect>,1>
                *this)

{
  ::operator_delete(this->Object,0x48);
  return;
}

// DestroyObject @ 1484d46b0

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FRepLayout,SharedPointerInternals::DefaultDeleter<FRepLayout>,1>::
DestroyObject(TReferenceControllerWithDeleter<FRepLayout,SharedPointerInternals::DefaultDeleter<FRepLayout>,1>
              *this)

{
  FRepLayout *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FRepLayout *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001484d46c1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)pFVar1->_padding_)(pFVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 1484d46d0

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FReplicationChangelistMgr,SharedPointerInternals::DefaultDeleter<FReplicationChangelistMgr>,1>
::DestroyObject(TReferenceControllerWithDeleter<FReplicationChangelistMgr,SharedPointerInternals::DefaultDeleter<FReplicationChangelistMgr>,1>
                *this)

{
  FReplicationChangelistMgr *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FReplicationChangelistMgr *)0x0) {
    FRepChangelistState::~FRepChangelistState(&pFVar1->RepChangelistState);
    ::operator_delete(pFVar1,0x880);
    return;
  }
  return;
}

// DestroyObject @ 1486b06e0

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<SGameLayerManager::FPlayerLayer,SharedPointerInternals::DefaultDeleter<SGameLayerManager::FPlayerLayer>,1>
::DestroyObject(TReferenceControllerWithDeleter<SGameLayerManager::FPlayerLayer,SharedPointerInternals::DefaultDeleter<SGameLayerManager::FPlayerLayer>,1>
                *this)

{
  int *piVar1;
  int iVar2;
  FPlayerLayer *pFVar3;
  void *pvVar4;
  longlong *plVar5;
  
  pFVar3 = this->Object;
  if (pFVar3 != (FPlayerLayer *)0x0) {
    *(undefined4 *)&(pFVar3->Layers).field_0x48 = 0;
    pvVar4 = *(void **)&(pFVar3->Layers).field_0x40;
    if (pvVar4 != (void *)0x0) {
      FMemory::Free(pvVar4);
    }
    TSparseArray<TSparseSetElement<TTuple<FName,TSharedPtr<IGameLayer,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FName,TSharedPtr<IGameLayer,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<FName,TSharedPtr<IGameLayer,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)&pFVar3->Layers);
    TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((pFVar3->Widget).SharedReferenceCount.ReferenceController);
    plVar5 = (longlong *)pFVar3->_padding_;
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5,1);
      }
    }
    ::operator_delete(pFVar3,0x78);
    return;
  }
  return;
}

// DestroyObject @ 1486b0770

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FDebugCanvasDrawer,SharedPointerInternals::DefaultDeleter<FDebugCanvasDrawer>,1>
::DestroyObject(TReferenceControllerWithDeleter<FDebugCanvasDrawer,SharedPointerInternals::DefaultDeleter<FDebugCanvasDrawer>,1>
                *this)

{
  FDebugCanvasDrawer *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FDebugCanvasDrawer *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001486b0781. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)pFVar1->_padding_)(pFVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 1486b0790

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FDeferredCleanupSlateBrush,`FDeferredCleanupSlateBrush::CreateBrush'::__l2::<lambda_1>,1>
::DestroyObject(void *this)

{
  FDeferredCleanupInterface *pFVar1;
  
  pFVar1 = (FDeferredCleanupInterface *)(*(longlong *)((longlong)this + 0x10) + 8);
  if (*(longlong *)((longlong)this + 0x10) == 0) {
    pFVar1 = (FDeferredCleanupInterface *)0x0;
  }
  BeginCleanup(pFVar1);
  return;
}

// DestroyObject @ 1486b07b0

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FDeferredCleanupSlateBrush,`FDeferredCleanupSlateBrush::CreateBrush'::__l2::<lambda_1>,1>
::DestroyObject(void *this)

{
  FDeferredCleanupInterface *pFVar1;
  
  pFVar1 = (FDeferredCleanupInterface *)(*(longlong *)((longlong)this + 0x10) + 8);
  if (*(longlong *)((longlong)this + 0x10) == 0) {
    pFVar1 = (FDeferredCleanupInterface *)0x0;
  }
  BeginCleanup(pFVar1);
  return;
}

// DestroyObject @ 1486b07d0

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FDeferredCleanupSlateBrush,`FDeferredCleanupSlateBrush::CreateBrush'::__l2::<lambda_1>,1>
::DestroyObject(void *this)

{
  FDeferredCleanupInterface *pFVar1;
  
  pFVar1 = (FDeferredCleanupInterface *)(*(longlong *)((longlong)this + 0x10) + 8);
  if (*(longlong *)((longlong)this + 0x10) == 0) {
    pFVar1 = (FDeferredCleanupInterface *)0x0;
  }
  BeginCleanup(pFVar1);
  return;
}

// DestroyObject @ 1486b07f0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FNavigationMetaData,SharedPointerInternals::DefaultDeleter<FNavigationMetaData>,1>
::DestroyObject(TReferenceControllerWithDeleter<FNavigationMetaData,SharedPointerInternals::DefaultDeleter<FNavigationMetaData>,1>
                *this)

{
  FNavigationMetaData *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FNavigationMetaData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001486b0801. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)pFVar1->_padding_)(pFVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 1486b0810

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FSlateGameResources,SharedPointerInternals::DefaultDeleter<FSlateGameResources>,1>
::DestroyObject(TReferenceControllerWithDeleter<FSlateGameResources,SharedPointerInternals::DefaultDeleter<FSlateGameResources>,1>
                *this)

{
  FSlateGameResources *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FSlateGameResources *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001486b0821. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)pFVar1->_padding_)(pFVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 14872fd40

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FSpeedTreeWind,SharedPointerInternals::DefaultDeleter<FSpeedTreeWind>,1>
::DestroyObject(TReferenceControllerWithDeleter<FSpeedTreeWind,SharedPointerInternals::DefaultDeleter<FSpeedTreeWind>,1>
                *this)

{
  ::operator_delete(this->Object,0x890);
  return;
}

// DestroyObject @ 14882f790

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FScopedTestEnvironment,SharedPointerInternals::DefaultDeleter<FScopedTestEnvironment>,1>
::DestroyObject(TReferenceControllerWithDeleter<FScopedTestEnvironment,SharedPointerInternals::DefaultDeleter<FScopedTestEnvironment>,1>
                *this)

{
  if (this->Object != (FScopedTestEnvironment *)0x0) {
    FScopedTestEnvironment::_scalar_deleting_destructor_(this->Object,1);
    return;
  }
  return;
}

// DestroyObject @ 14882f7b0

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<AutomationCommon::FAutomationImageComparisonRequest,SharedPointerInternals::DefaultDeleter<AutomationCommon::FAutomationImageComparisonRequest>,1>
::DestroyObject(TReferenceControllerWithDeleter<AutomationCommon::FAutomationImageComparisonRequest,SharedPointerInternals::DefaultDeleter<AutomationCommon::FAutomationImageComparisonRequest>,1>
                *this)

{
  FAutomationImageComparisonRequest *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FAutomationImageComparisonRequest *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014882f7c1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)pFVar1->_padding_)(pFVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 14882f7d0

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FEngineWaitLatentCommand,SharedPointerInternals::DefaultDeleter<FEngineWaitLatentCommand>,1>
::DestroyObject(TReferenceControllerWithDeleter<FEngineWaitLatentCommand,SharedPointerInternals::DefaultDeleter<FEngineWaitLatentCommand>,1>
                *this)

{
  FEngineWaitLatentCommand *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FEngineWaitLatentCommand *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014882f7e1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)pFVar1->_padding_)(pFVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 14882f7f0

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FExecStringLatentCommand,SharedPointerInternals::DefaultDeleter<FExecStringLatentCommand>,1>
::DestroyObject(TReferenceControllerWithDeleter<FExecStringLatentCommand,SharedPointerInternals::DefaultDeleter<FExecStringLatentCommand>,1>
                *this)

{
  FExecStringLatentCommand *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FExecStringLatentCommand *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014882f801. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)pFVar1->_padding_)(pFVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 14882f810

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FWaitForMapToLoadCommand,SharedPointerInternals::DefaultDeleter<FWaitForMapToLoadCommand>,1>
::DestroyObject(TReferenceControllerWithDeleter<FWaitForMapToLoadCommand,SharedPointerInternals::DefaultDeleter<FWaitForMapToLoadCommand>,1>
                *this)

{
  FWaitForMapToLoadCommand *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FWaitForMapToLoadCommand *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014882f821. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)**(undefined8 **)pFVar1)(pFVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 14882f830

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<IAutomationLatentCommand,SharedPointerInternals::DefaultDeleter<IAutomationLatentCommand>,1>
::DestroyObject(TReferenceControllerWithDeleter<IAutomationLatentCommand,SharedPointerInternals::DefaultDeleter<IAutomationLatentCommand>,1>
                *this)

{
  IAutomationLatentCommand *pIVar1;
  
  pIVar1 = this->Object;
  if (pIVar1 != (IAutomationLatentCommand *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014882f841. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)pIVar1->_padding_)(pIVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 1488891d0

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<`FMultiplayer4PlayerTest::RunTest'::__l25::FInvitePlayers,SharedPointerInternals::DefaultDeleter<`FMultiplayer4PlayerTest::RunTest'::__l25::FInvitePlayers>,1>
::DestroyObject(void *this)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)((longlong)this + 0x10);
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001488891e1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 1488891f0

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<`FMultiplayer4PlayerTest::RunTest'::__l2::FOpenMap,SharedPointerInternals::DefaultDeleter<`FMultiplayer4PlayerTest::RunTest'::__l2::FOpenMap>,1>
::DestroyObject(void *this)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)((longlong)this + 0x10);
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148889201. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 148889210

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FWaitForProcessToCompleteLatentCommand,SharedPointerInternals::DefaultDeleter<FWaitForProcessToCompleteLatentCommand>,1>
::DestroyObject(TReferenceControllerWithDeleter<FWaitForProcessToCompleteLatentCommand,SharedPointerInternals::DefaultDeleter<FWaitForProcessToCompleteLatentCommand>,1>
                *this)

{
  FWaitForProcessToCompleteLatentCommand *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FWaitForProcessToCompleteLatentCommand *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148889221. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)pFVar1->_padding_)(pFVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 1488bc290

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<TRawMessageHandler<FTraceControlBookmark,FTraceService>,SharedPointerInternals::DefaultDeleter<TRawMessageHandler<FTraceControlBookmark,FTraceService>_>,1>
::DestroyObject(TReferenceControllerWithDeleter<TRawMessageHandler<FTraceControlBookmark,FTraceService>,SharedPointerInternals::DefaultDeleter<TRawMessageHandler<FTraceControlBookmark,FTraceService>_>,1>
                *this)

{
  TRawMessageHandler<FTraceControlBookmark,FTraceService> *pTVar1;
  
  pTVar1 = this->Object;
  if (pTVar1 != (TRawMessageHandler<FTraceControlBookmark,FTraceService> *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001488bc2a1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(pTVar1->_padding_ + 8))(pTVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 1488bc2b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<TRawMessageHandler<FTraceControlChannelsPing,FTraceService>,SharedPointerInternals::DefaultDeleter<TRawMessageHandler<FTraceControlChannelsPing,FTraceService>_>,1>
::DestroyObject(TReferenceControllerWithDeleter<TRawMessageHandler<FTraceControlChannelsPing,FTraceService>,SharedPointerInternals::DefaultDeleter<TRawMessageHandler<FTraceControlChannelsPing,FTraceService>_>,1>
                *this)

{
  TRawMessageHandler<FTraceControlChannelsPing,FTraceService> *pTVar1;
  
  pTVar1 = this->Object;
  if (pTVar1 != (TRawMessageHandler<FTraceControlChannelsPing,FTraceService> *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001488bc2c1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(pTVar1->_padding_ + 8))(pTVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 1488bc2d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<TRawMessageHandler<FTraceControlChannelsSet,FTraceService>,SharedPointerInternals::DefaultDeleter<TRawMessageHandler<FTraceControlChannelsSet,FTraceService>_>,1>
::DestroyObject(TReferenceControllerWithDeleter<TRawMessageHandler<FTraceControlChannelsSet,FTraceService>,SharedPointerInternals::DefaultDeleter<TRawMessageHandler<FTraceControlChannelsSet,FTraceService>_>,1>
                *this)

{
  TRawMessageHandler<FTraceControlChannelsSet,FTraceService> *pTVar1;
  
  pTVar1 = this->Object;
  if (pTVar1 != (TRawMessageHandler<FTraceControlChannelsSet,FTraceService> *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001488bc2e1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(pTVar1->_padding_ + 8))(pTVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 1488bc2f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<TRawMessageHandler<FTraceControlDiscoveryPing,FTraceService>,SharedPointerInternals::DefaultDeleter<TRawMessageHandler<FTraceControlDiscoveryPing,FTraceService>_>,1>
::DestroyObject(TReferenceControllerWithDeleter<TRawMessageHandler<FTraceControlDiscoveryPing,FTraceService>,SharedPointerInternals::DefaultDeleter<TRawMessageHandler<FTraceControlDiscoveryPing,FTraceService>_>,1>
                *this)

{
  TRawMessageHandler<FTraceControlDiscoveryPing,FTraceService> *pTVar1;
  
  pTVar1 = this->Object;
  if (pTVar1 != (TRawMessageHandler<FTraceControlDiscoveryPing,FTraceService> *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001488bc301. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(pTVar1->_padding_ + 8))(pTVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 1488bc310

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<TRawMessageHandler<FTraceControlFile,FTraceService>,SharedPointerInternals::DefaultDeleter<TRawMessageHandler<FTraceControlFile,FTraceService>_>,1>
::DestroyObject(TReferenceControllerWithDeleter<TRawMessageHandler<FTraceControlFile,FTraceService>,SharedPointerInternals::DefaultDeleter<TRawMessageHandler<FTraceControlFile,FTraceService>_>,1>
                *this)

{
  TRawMessageHandler<FTraceControlFile,FTraceService> *pTVar1;
  
  pTVar1 = this->Object;
  if (pTVar1 != (TRawMessageHandler<FTraceControlFile,FTraceService> *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001488bc321. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(pTVar1->_padding_ + 8))(pTVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 1488bc330

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<TRawMessageHandler<FTraceControlPause,FTraceService>,SharedPointerInternals::DefaultDeleter<TRawMessageHandler<FTraceControlPause,FTraceService>_>,1>
::DestroyObject(TReferenceControllerWithDeleter<TRawMessageHandler<FTraceControlPause,FTraceService>,SharedPointerInternals::DefaultDeleter<TRawMessageHandler<FTraceControlPause,FTraceService>_>,1>
                *this)

{
  TRawMessageHandler<FTraceControlPause,FTraceService> *pTVar1;
  
  pTVar1 = this->Object;
  if (pTVar1 != (TRawMessageHandler<FTraceControlPause,FTraceService> *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001488bc341. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(pTVar1->_padding_ + 8))(pTVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 1488bc350

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<TRawMessageHandler<FTraceControlResume,FTraceService>,SharedPointerInternals::DefaultDeleter<TRawMessageHandler<FTraceControlResume,FTraceService>_>,1>
::DestroyObject(TReferenceControllerWithDeleter<TRawMessageHandler<FTraceControlResume,FTraceService>,SharedPointerInternals::DefaultDeleter<TRawMessageHandler<FTraceControlResume,FTraceService>_>,1>
                *this)

{
  TRawMessageHandler<FTraceControlResume,FTraceService> *pTVar1;
  
  pTVar1 = this->Object;
  if (pTVar1 != (TRawMessageHandler<FTraceControlResume,FTraceService> *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001488bc361. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(pTVar1->_padding_ + 8))(pTVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 1488bc370

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<TRawMessageHandler<FTraceControlScreenshot,FTraceService>,SharedPointerInternals::DefaultDeleter<TRawMessageHandler<FTraceControlScreenshot,FTraceService>_>,1>
::DestroyObject(TReferenceControllerWithDeleter<TRawMessageHandler<FTraceControlScreenshot,FTraceService>,SharedPointerInternals::DefaultDeleter<TRawMessageHandler<FTraceControlScreenshot,FTraceService>_>,1>
                *this)

{
  TRawMessageHandler<FTraceControlScreenshot,FTraceService> *pTVar1;
  
  pTVar1 = this->Object;
  if (pTVar1 != (TRawMessageHandler<FTraceControlScreenshot,FTraceService> *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001488bc381. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(pTVar1->_padding_ + 8))(pTVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 1488bc390

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<TRawMessageHandler<FTraceControlSend,FTraceService>,SharedPointerInternals::DefaultDeleter<TRawMessageHandler<FTraceControlSend,FTraceService>_>,1>
::DestroyObject(TReferenceControllerWithDeleter<TRawMessageHandler<FTraceControlSend,FTraceService>,SharedPointerInternals::DefaultDeleter<TRawMessageHandler<FTraceControlSend,FTraceService>_>,1>
                *this)

{
  TRawMessageHandler<FTraceControlSend,FTraceService> *pTVar1;
  
  pTVar1 = this->Object;
  if (pTVar1 != (TRawMessageHandler<FTraceControlSend,FTraceService> *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001488bc3a1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(pTVar1->_padding_ + 8))(pTVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 1488bc3b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<TRawMessageHandler<FTraceControlSetStatNamedEvents,FTraceService>,SharedPointerInternals::DefaultDeleter<TRawMessageHandler<FTraceControlSetStatNamedEvents,FTraceService>_>,1>
::DestroyObject(TReferenceControllerWithDeleter<TRawMessageHandler<FTraceControlSetStatNamedEvents,FTraceService>,SharedPointerInternals::DefaultDeleter<TRawMessageHandler<FTraceControlSetStatNamedEvents,FTraceService>_>,1>
                *this)

{
  TRawMessageHandler<FTraceControlSetStatNamedEvents,FTraceService> *pTVar1;
  
  pTVar1 = this->Object;
  if (pTVar1 != (TRawMessageHandler<FTraceControlSetStatNamedEvents,FTraceService> *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001488bc3c1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(pTVar1->_padding_ + 8))(pTVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 1488bc3d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<TRawMessageHandler<FTraceControlSettingsPing,FTraceService>,SharedPointerInternals::DefaultDeleter<TRawMessageHandler<FTraceControlSettingsPing,FTraceService>_>,1>
::DestroyObject(TReferenceControllerWithDeleter<TRawMessageHandler<FTraceControlSettingsPing,FTraceService>,SharedPointerInternals::DefaultDeleter<TRawMessageHandler<FTraceControlSettingsPing,FTraceService>_>,1>
                *this)

{
  TRawMessageHandler<FTraceControlSettingsPing,FTraceService> *pTVar1;
  
  pTVar1 = this->Object;
  if (pTVar1 != (TRawMessageHandler<FTraceControlSettingsPing,FTraceService> *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001488bc3e1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(pTVar1->_padding_ + 8))(pTVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 1488bc3f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<TRawMessageHandler<FTraceControlSnapshotFile,FTraceService>,SharedPointerInternals::DefaultDeleter<TRawMessageHandler<FTraceControlSnapshotFile,FTraceService>_>,1>
::DestroyObject(TReferenceControllerWithDeleter<TRawMessageHandler<FTraceControlSnapshotFile,FTraceService>,SharedPointerInternals::DefaultDeleter<TRawMessageHandler<FTraceControlSnapshotFile,FTraceService>_>,1>
                *this)

{
  TRawMessageHandler<FTraceControlSnapshotFile,FTraceService> *pTVar1;
  
  pTVar1 = this->Object;
  if (pTVar1 != (TRawMessageHandler<FTraceControlSnapshotFile,FTraceService> *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001488bc401. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(pTVar1->_padding_ + 8))(pTVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 1488bc410

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<TRawMessageHandler<FTraceControlSnapshotSend,FTraceService>,SharedPointerInternals::DefaultDeleter<TRawMessageHandler<FTraceControlSnapshotSend,FTraceService>_>,1>
::DestroyObject(TReferenceControllerWithDeleter<TRawMessageHandler<FTraceControlSnapshotSend,FTraceService>,SharedPointerInternals::DefaultDeleter<TRawMessageHandler<FTraceControlSnapshotSend,FTraceService>_>,1>
                *this)

{
  TRawMessageHandler<FTraceControlSnapshotSend,FTraceService> *pTVar1;
  
  pTVar1 = this->Object;
  if (pTVar1 != (TRawMessageHandler<FTraceControlSnapshotSend,FTraceService> *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001488bc421. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(pTVar1->_padding_ + 8))(pTVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 1488bc430

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<TRawMessageHandler<FTraceControlStatusPing,FTraceService>,SharedPointerInternals::DefaultDeleter<TRawMessageHandler<FTraceControlStatusPing,FTraceService>_>,1>
::DestroyObject(TReferenceControllerWithDeleter<TRawMessageHandler<FTraceControlStatusPing,FTraceService>,SharedPointerInternals::DefaultDeleter<TRawMessageHandler<FTraceControlStatusPing,FTraceService>_>,1>
                *this)

{
  TRawMessageHandler<FTraceControlStatusPing,FTraceService> *pTVar1;
  
  pTVar1 = this->Object;
  if (pTVar1 != (TRawMessageHandler<FTraceControlStatusPing,FTraceService> *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001488bc441. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(pTVar1->_padding_ + 8))(pTVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 1488bc450

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<TRawMessageHandler<FTraceControlStop,FTraceService>,SharedPointerInternals::DefaultDeleter<TRawMessageHandler<FTraceControlStop,FTraceService>_>,1>
::DestroyObject(TReferenceControllerWithDeleter<TRawMessageHandler<FTraceControlStop,FTraceService>,SharedPointerInternals::DefaultDeleter<TRawMessageHandler<FTraceControlStop,FTraceService>_>,1>
                *this)

{
  TRawMessageHandler<FTraceControlStop,FTraceService> *pTVar1;
  
  pTVar1 = this->Object;
  if (pTVar1 != (TRawMessageHandler<FTraceControlStop,FTraceService> *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001488bc461. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(pTVar1->_padding_ + 8))(pTVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 148925ba0

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FRTInfo,SharedPointerInternals::DefaultDeleter<FRTInfo>,1>::
DestroyObject(TReferenceControllerWithDeleter<FRTInfo,SharedPointerInternals::DefaultDeleter<FRTInfo>,1>
              *this)

{
  FRTInfo *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FRTInfo *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148925bb1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)pFVar1->_padding_)(pFVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 148925bc0

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FCanvasWordWrapper,SharedPointerInternals::DefaultDeleter<FCanvasWordWrapper>,1>
::DestroyObject(TReferenceControllerWithDeleter<FCanvasWordWrapper,SharedPointerInternals::DefaultDeleter<FCanvasWordWrapper>,1>
                *this)

{
  FCanvasWordWrapper *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FCanvasWordWrapper *)0x0) {
    TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((pFVar1->LineBreakIterator).SharedReferenceCount.ReferenceController);
    TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((pFVar1->GraphemeBreakIterator).SharedReferenceCount.ReferenceController);
    ::operator_delete(pFVar1,0x20);
    return;
  }
  return;
}

// DestroyObject @ 148925c00

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FOutputDeviceFile,SharedPointerInternals::DefaultDeleter<FOutputDeviceFile>,1>
::DestroyObject(TReferenceControllerWithDeleter<FOutputDeviceFile,SharedPointerInternals::DefaultDeleter<FOutputDeviceFile>,1>
                *this)

{
  FOutputDeviceFile *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FOutputDeviceFile *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148925c11. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)pFVar1->_padding_)(pFVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 148925c20

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FStringOutputDevice,SharedPointerInternals::DefaultDeleter<FStringOutputDevice>,1>
::DestroyObject(TReferenceControllerWithDeleter<FStringOutputDevice,SharedPointerInternals::DefaultDeleter<FStringOutputDevice>,1>
                *this)

{
  FStringOutputDevice *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FStringOutputDevice *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148925c31. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)**(undefined8 **)pFVar1)(pFVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 148a298d0

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FNetFastTArrayBaseState,SharedPointerInternals::DefaultDeleter<FNetFastTArrayBaseState>,1>
::DestroyObject(TReferenceControllerWithDeleter<FNetFastTArrayBaseState,SharedPointerInternals::DefaultDeleter<FNetFastTArrayBaseState>,1>
                *this)

{
  FNetFastTArrayBaseState *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FNetFastTArrayBaseState *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148a298e1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)pFVar1->_padding_)(pFVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 148a8d5e0

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FHLODResourcesResidencySceneViewExtension,SharedPointerInternals::DefaultDeleter<FHLODResourcesResidencySceneViewExtension>,1>
::DestroyObject(TReferenceControllerWithDeleter<FHLODResourcesResidencySceneViewExtension,SharedPointerInternals::DefaultDeleter<FHLODResourcesResidencySceneViewExtension>,1>
                *this)

{
  FHLODResourcesResidencySceneViewExtension *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FHLODResourcesResidencySceneViewExtension *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148a8d5f1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)pFVar1 + 0xb8))(pFVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 148b32a00

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<TTypeContainer<1>::TSharedInstanceProvider<IMessageRpcClient>,SharedPointerInternals::DefaultDeleter<TTypeContainer<1>::TSharedInstanceProvider<IMessageRpcClient>_>,1>
::DestroyObject(TReferenceControllerWithDeleter<TTypeContainer<1>::TSharedInstanceProvider<IMessageRpcClient>,SharedPointerInternals::DefaultDeleter<TTypeContainer<1>::TSharedInstanceProvider<IMessageRpcClient>_>,1>
                *this)

{
  TSharedInstanceProvider<IMessageRpcClient> *pTVar1;
  
  pTVar1 = this->Object;
  if (pTVar1 != (TSharedInstanceProvider<IMessageRpcClient> *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148b32a11. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)pTVar1->_padding_)(pTVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 148b32a20

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FFakeStereoRenderingDevice,SharedPointerInternals::DefaultDeleter<FFakeStereoRenderingDevice>,1>
::DestroyObject(TReferenceControllerWithDeleter<FFakeStereoRenderingDevice,SharedPointerInternals::DefaultDeleter<FFakeStereoRenderingDevice>,1>
                *this)

{
  FFakeStereoRenderingDevice *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FFakeStereoRenderingDevice *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148b32a31. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)pFVar1->_padding_)(pFVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 148b32a40

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<`UEngine::InitializePortalServices'::__l11::FNullPortalServiceLocator,SharedPointerInternals::DefaultDeleter<`UEngine::InitializePortalServices'::__l11::FNullPortalServiceLocator>,1>
::DestroyObject(void *this)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)((longlong)this + 0x10);
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148b32a51. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))(plVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 148b32a60

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FSlateSoundDevice,SharedPointerInternals::DefaultDeleter<FSlateSoundDevice>,1>
::DestroyObject(TReferenceControllerWithDeleter<FSlateSoundDevice,SharedPointerInternals::DefaultDeleter<FSlateSoundDevice>,1>
                *this)

{
  FSlateSoundDevice *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FSlateSoundDevice *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148b32a71. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*pFVar1 + 0x10))(pFVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 148b32a80

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FTypeContainer,SharedPointerInternals::DefaultDeleter<FTypeContainer>,1>
::DestroyObject(TReferenceControllerWithDeleter<FTypeContainer,SharedPointerInternals::DefaultDeleter<FTypeContainer>,1>
                *this)

{
  FTypeContainer *lpCriticalSection;
  
  lpCriticalSection = this->Object;
  if (lpCriticalSection != (FTypeContainer *)0x0) {
    *(undefined4 *)&lpCriticalSection->field_0x70 = 0;
    if (*(void **)&lpCriticalSection->field_0x68 != (void *)0x0) {
      FMemory::Free(*(void **)&lpCriticalSection->field_0x68);
    }
    TSparseArray<TSparseSetElement<TTuple<FString,TSharedPtr<TTypeContainer<1>::IInstanceProvider,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FString,TSharedPtr<TTypeContainer<1>::IInstanceProvider,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<FString,TSharedPtr<TTypeContainer<1>::IInstanceProvider,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)&lpCriticalSection->field_0x28);
    DeleteCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    ::operator_delete(lpCriticalSection,0x78);
  }
  return;
}

