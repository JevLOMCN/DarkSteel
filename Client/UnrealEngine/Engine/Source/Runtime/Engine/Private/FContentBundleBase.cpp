// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 15

// FContentBundleBase @ 148a41800

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FContentBundleBase * __thiscall
FContentBundleBase::FContentBundleBase
          (FContentBundleBase *this,TSharedPtr<FContentBundleClient,1> *param_1,UWorld *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  FContentBundleBase *pFVar4;
  UContentBundleDescriptor *pUVar5;
  
  this->_padding_ = (longlong)&___7FContentBundleBase__6B_;
  (this->Client).Object = param_1->Object;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  (this->Client).WeakReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
    UNLOCK();
  }
  this->InjectedWorld = param_2;
  if (param_1->Object == (FContentBundleClient *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FContentBundleBase *)(*pcVar2)();
      return pFVar4;
    }
  }
  pUVar5 = (UContentBundleDescriptor *)
           FWeakObjectPtr::Get(&(param_1->Object->ContentBundleDescriptor).WeakPtr);
  (this->Descriptor).field0_0x0.DebugPtr = pUVar5;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar5 != (UContentBundleDescriptor *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar5);
  }
  this->Status = Unknown;
  return this;
}

// ~FContentBundleBase @ 148a44100

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall FContentBundleBase::~FContentBundleBase(FContentBundleBase *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  code *pcVar4;
  bool bVar5;
  
  this->_padding_ = (longlong)&___7FContentBundleBase__6B_;
  if (this->Status != Unknown) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("GetStatus() == EContentBundleStatus::Unknown",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\ContentBundle\\ContentBundleBase.cpp"
                       ,0x14,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pTVar3 = (this->Client).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
                    /* WARNING: Could not recover jumptable at 0x000148a44164. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
      return;
    }
  }
  return;
}

// AddReferencedObjects @ 148a49a20

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
FContentBundleBase::AddReferencedObjects(FContentBundleBase *this,FReferenceCollector *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000148a49a33. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1->_padding_ + 0x88))(param_1,&this->Descriptor,0,0);
  return;
}

// GetClient @ 148a545f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TWeakPtr<FContentBundleClient,1> * __thiscall
FContentBundleBase::GetClient(FContentBundleBase *this)

{
  return &this->Client;
}

// GetDebugColor @ 148a57330

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FColor * __thiscall FContentBundleBase::GetDebugColor(FContentBundleBase *this)

{
  return &((this->Descriptor).field0_0x0.DebugPtr)->DebugColor;
}

// GetDescriptor @ 148a573c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UContentBundleDescriptor * __thiscall FContentBundleBase::GetDescriptor(FContentBundleBase *this)

{
  return (this->Descriptor).field0_0x0.DebugPtr;
}

// GetDisplayName @ 148a57410

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FString * __thiscall FContentBundleBase::GetDisplayName(FContentBundleBase *this)

{
  return &((this->Descriptor).field0_0x0.DebugPtr)->DisplayName;
}

// GetExternalStreamingObjectPackageName @ 148a58610

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FString * __thiscall
FContentBundleBase::GetExternalStreamingObjectPackageName
          (FContentBundleBase *this,FString *__return_storage_ptr__)

{
  FString local_18;
  
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  FGuid::AppendString(&((this->Descriptor).field0_0x0.DebugPtr)->Guid,&local_18,Base36Encoded);
  ::FString::ConcatCF(__return_storage_ptr__,L"StreamingObject_",&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetExternalStreamingObjectPackagePath @ 148a586e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FString * __thiscall
FContentBundleBase::GetExternalStreamingObjectPackagePath
          (FContentBundleBase *this,FString *__return_storage_ptr__)

{
  wchar_t *pwVar1;
  FString *pFVar2;
  FString local_58;
  FString local_48;
  FString local_38;
  FString local_28;
  FString local_18;
  
  local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.Data.ArrayNum = 0;
  local_58.Data.ArrayMax = 0;
  FGuid::AppendString(&((this->Descriptor).field0_0x0.DebugPtr)->Guid,&local_58,Base36Encoded);
  ::FString::ConcatCF(&local_28,L"StreamingObject_",&local_58);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  pwVar1 = ContentBundlePaths::GeneratedFolder.DataPtr;
  pFVar2 = ContentBundlePaths::GetCookedContentBundleLevelFolder(&local_18,this);
  ::FString::ConcatFR(&local_38,pFVar2,pwVar1 + 1,0xb);
  ::FString::ConcatFC(&local_48,&local_38,L"/");
  ::FString::ConcatFF(__return_storage_ptr__,&local_48,&local_28);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetInjectedWorld @ 148a58ab0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UWorld * __thiscall FContentBundleBase::GetInjectedWorld(FContentBundleBase *this)

{
  return this->InjectedWorld;
}

// Initialize @ 148a5b9a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall FContentBundleBase::Initialize(FContentBundleBase *this)

{
  FContentBundleClient *pFVar1;
  UWorld *pUVar2;
  code *pcVar3;
  atomic<int> aVar4;
  bool bVar5;
  atomic<int> aVar6;
  TReferenceControllerBase<1> *pTVar7;
  bool bVar8;
  
  bVar8 = -1 < CpuChannel->Enabled;
  if (bVar8) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId25,"FContentBundleBase::Initialize",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\ContentBundle\\ContentBundleBase.cpp"
               ,0x19);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId25);
  }
  if ((this->Status != Unknown) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("GetStatus() == EContentBundleStatus::Unknown",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\ContentBundle\\ContentBundleBase.cpp"
                         ,0x1b,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  (**(code **)(this->_padding_ + 0x20))(this);
  if ((this->Status != Registered) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("GetStatus() == EContentBundleStatus::Registered",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\ContentBundle\\ContentBundleBase.cpp"
                         ,0x1f,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pTVar7 = (this->Client).WeakReferenceCount.ReferenceController;
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    aVar4 = pTVar7->SharedReferenceCount;
    do {
      if (aVar4 == (atomic<int>)0x0) {
        pTVar7 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_148a5ba80;
      }
      LOCK();
      aVar6 = pTVar7->SharedReferenceCount;
      bVar5 = aVar4 == aVar6;
      if (bVar5) {
        pTVar7->SharedReferenceCount = (atomic<int>)((int)aVar4 + 1);
        aVar6 = aVar4;
      }
      UNLOCK();
      aVar4 = aVar6;
    } while (!bVar5);
    pFVar1 = (this->Client).Object;
    if (pFVar1 != (FContentBundleClient *)0x0) {
      pUVar2 = this->InjectedWorld;
      if ((this->Status != Registered) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("ContentBundleStatus == EContentBundleStatus::Registered",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\ContentBundle\\ContentBundleClient.cpp"
                             ,0x5b,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      (**(code **)(pFVar1->_padding_ + 0x18))(pFVar1,pUVar2);
    }
  }
LAB_148a5ba80:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
    return;
  }
  return;
}

// InjectContent @ 148a5d060

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall FContentBundleBase::InjectContent(FContentBundleBase *this)

{
  EContentBundleStatus EVar1;
  FContentBundleClient *this_00;
  UWorld *pUVar2;
  code *pcVar3;
  atomic<int> aVar4;
  bool bVar5;
  char cVar6;
  atomic<int> aVar7;
  TReferenceControllerBase<1> *pTVar8;
  bool bVar9;
  
  bVar9 = -1 < CpuChannel->Enabled;
  if (bVar9) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId57,"FContentBundleBase::InjectContent",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\ContentBundle\\ContentBundleBase.cpp"
               ,0x39);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId57);
  }
  if ((this->Status != Registered) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("GetStatus() == EContentBundleStatus::Registered",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\ContentBundle\\ContentBundleBase.cpp"
                         ,0x3b,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  (**(code **)(this->_padding_ + 0x30))(this);
  if (((this->Status != ReadyToInject) && (1 < this->Status - FailedToInject)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("GetStatus() == EContentBundleStatus::ReadyToInject || GetStatus() == EContentBundleStatus::ContentInjected || GetStatus() == EContentBundleStatus::FailedToInject"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\ContentBundle\\ContentBundleBase.cpp"
                         ,0x3f,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pTVar8 = (this->Client).WeakReferenceCount.ReferenceController;
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    aVar4 = pTVar8->SharedReferenceCount;
    do {
      if (aVar4 == (atomic<int>)0x0) {
        pTVar8 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_148a5d150;
      }
      LOCK();
      aVar7 = pTVar8->SharedReferenceCount;
      bVar5 = aVar4 == aVar7;
      if (bVar5) {
        pTVar8->SharedReferenceCount = (atomic<int>)((int)aVar4 + 1);
        aVar7 = aVar4;
      }
      UNLOCK();
      aVar4 = aVar7;
    } while (!bVar5);
    this_00 = (this->Client).Object;
    if (this_00 != (FContentBundleClient *)0x0) {
      pUVar2 = this->InjectedWorld;
      EVar1 = this->Status;
      cVar6 = (**(code **)(this_00->_padding_ + 8))(this_00,pUVar2);
      if ((cVar6 == '\0') &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("ShouldInjectContent(InjectedWorld)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\ContentBundle\\ContentBundleClient.cpp"
                             ,0x62,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if ((2 < EVar1 - ReadyToInject) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("InjectionStatus == EContentBundleStatus::ContentInjected || InjectionStatus == EContentBundleStatus::ReadyToInject || InjectionStatus == EContentBundleStatus::FailedToInject"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\ContentBundle\\ContentBundleClient.cpp"
                             ,0x65,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      FContentBundleClient::SetWorldContentState(this_00,pUVar2,ContentBundleInjected);
      (**(code **)(this_00->_padding_ + 0x20))(this_00,EVar1,pUVar2);
    }
  }
LAB_148a5d150:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  if (!bVar9) {
    return;
  }
  FCpuProfilerTrace::OutputEndEvent();
  return;
}

// RemoveContent @ 148a64fd0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall FContentBundleBase::RemoveContent(FContentBundleBase *this)

{
  EContentBundleStatus EVar1;
  FContentBundleClient *this_00;
  UWorld *pUVar2;
  UContentBundleManager *this_01;
  code *pcVar3;
  atomic<int> aVar4;
  bool bVar5;
  char cVar6;
  atomic<int> aVar7;
  UClass *pUVar8;
  UWorld *this_02;
  UWorldPartition *this_03;
  TReferenceControllerBase<1> *pTVar9;
  bool bVar10;
  
  bVar10 = -1 < CpuChannel->Enabled;
  if (bVar10) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId73,"FContentBundleBase::RemoveContent",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\ContentBundle\\ContentBundleBase.cpp"
               ,0x49);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId73);
  }
  if (((this->Status != ReadyToInject) && (1 < this->Status - FailedToInject)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("GetStatus() == EContentBundleStatus::ReadyToInject || GetStatus() == EContentBundleStatus::ContentInjected || GetStatus() == EContentBundleStatus::FailedToInject"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\ContentBundle\\ContentBundleBase.cpp"
                         ,0x4b,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if ((this->Status == ContentInjected) || (this->Status == ReadyToInject)) {
    (**(code **)(this->_padding_ + 0x38))(this);
  }
  if ((this->Status != Registered) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("GetStatus() == EContentBundleStatus::Registered",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\ContentBundle\\ContentBundleBase.cpp"
                         ,0x52,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pTVar9 = (this->Client).WeakReferenceCount.ReferenceController;
  if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
    aVar4 = pTVar9->SharedReferenceCount;
    do {
      if (aVar4 == (atomic<int>)0x0) {
        pTVar9 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_148a650c5;
      }
      LOCK();
      aVar7 = pTVar9->SharedReferenceCount;
      bVar5 = aVar4 == aVar7;
      if (bVar5) {
        pTVar9->SharedReferenceCount = (atomic<int>)((int)aVar4 + 1);
        aVar7 = aVar4;
      }
      UNLOCK();
      aVar4 = aVar7;
    } while (!bVar5);
    this_00 = (this->Client).Object;
    if (this_00 != (FContentBundleClient *)0x0) {
      pUVar2 = this->InjectedWorld;
      EVar1 = this->Status;
      cVar6 = (**(code **)(this_00->_padding_ + 0x10))(this_00,pUVar2);
      if (cVar6 == '\0') {
        this_01 = (pUVar2->ContentBundleManager).field0_0x0.DebugPtr;
        pUVar8 = Z_Construct_UClass_UWorld_NoRegister();
        this_02 = (UWorld *)UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this_01,pUVar8);
        this_03 = UWorld::GetWorldPartition(this_02);
        if (((this_03 != (UWorldPartition *)0x0) &&
            (bVar5 = UWorldPartition::IsInitialized(this_03), bVar5)) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("ShouldRemoveContent(InjectedWorld) || !InjectedWorld->ContentBundleManager->CanInject()"
                               ,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\ContentBundle\\ContentBundleClient.cpp"
                               ,0x6f,L""), bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      if ((EVar1 != Registered) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("RemovalStatus == EContentBundleStatus::Registered",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\ContentBundle\\ContentBundleClient.cpp"
                             ,0x70,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      FContentBundleClient::SetWorldContentState(this_00,pUVar2,NoContent);
      (**(code **)(this_00->_padding_ + 0x28))(this_00,pUVar2);
      bVar5 = FContentBundleClient::HasContentToRemove(this_00);
      if ((!bVar5) && (this_00->State == ContentRemovalRequested)) {
        FContentBundleClient::SetState(this_00,Registered);
      }
    }
  }
LAB_148a650c5:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  if (bVar10) {
    FCpuProfilerTrace::OutputEndEvent();
    return;
  }
  return;
}

// SetStatus @ 148a69510

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall FContentBundleBase::SetStatus(FContentBundleBase *this,EContentBundleStatus param_1)

{
  EContentBundleStatus EVar1;
  code *pcVar2;
  bool bVar3;
  UEnum *pUVar4;
  FString local_48;
  FText local_38;
  FText local_28;
  
  if ((param_1 == this->Status) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("NewStatus != Status",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\ContentBundle\\ContentBundleBase.cpp"
                         ,0x84,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (5 < (byte)LogContentBundle._0_1_) {
    pUVar4 = StaticEnum<enum_EContentBundleStatus>();
    if ((pUVar4 == (UEnum *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("EnumClass != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                           ,0xd13,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    UEnum::GetDisplayNameTextByValue(pUVar4,&local_28,(longlong)(int)param_1);
    FText::ToString(&local_28);
    EVar1 = this->Status;
    pUVar4 = StaticEnum<enum_EContentBundleStatus>();
    if ((pUVar4 == (UEnum *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("EnumClass != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                           ,0xd13,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    UEnum::GetDisplayNameTextByValue(pUVar4,&local_38,(longlong)(int)EVar1);
    FText::ToString(&local_38);
    ContentBundle::LogPrivate::MakeDebugInfoString
              (&local_48,(this->Descriptor).field0_0x0.DebugPtr,this->InjectedWorld);
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogContentBundle);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if (local_38.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
    }
    if (local_28.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
    }
  }
  this->Status = param_1;
  return;
}

// Uninitialize @ 148a6afd0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall FContentBundleBase::Uninitialize(FContentBundleBase *this)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  
  bVar3 = -1 < CpuChannel->Enabled;
  if (bVar3) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId41,"FContentBundleBase::Uninitialize",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\ContentBundle\\ContentBundleBase.cpp"
               ,0x29);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId41);
  }
  if ((this->Status == Unknown) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("GetStatus() != EContentBundleStatus::Unknown",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\ContentBundle\\ContentBundleBase.cpp"
                         ,0x2b,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if ((this->Status == ReadyToInject) || (this->Status == ContentInjected)) {
    RemoveContent(this);
  }
  (**(code **)(this->_padding_ + 0x28))(this);
  if ((this->Status != Unknown) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("GetStatus() == EContentBundleStatus::Unknown",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\ContentBundle\\ContentBundleBase.cpp"
                         ,0x34,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

