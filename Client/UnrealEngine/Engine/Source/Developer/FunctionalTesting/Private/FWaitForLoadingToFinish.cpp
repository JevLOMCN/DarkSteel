// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: FunctionalTesting
// Functions: 5

// FWaitForLoadingToFinish @ 148c7fc30

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FWaitForLoadingToFinish * __thiscall
FWaitForLoadingToFinish::FWaitForLoadingToFinish
          (FWaitForLoadingToFinish *this,FLatentActionInfo *param_1,UObject *param_2,
          FAutomationWaitForLoadingOptions *param_3)

{
  LARGE_INTEGER LVar1;
  LARGE_INTEGER LVar2;
  UWorld *this_00;
  undefined8 *puVar3;
  ulong64 uVar4;
  FDelegateHandle FVar5;
  LARGE_INTEGER local_res8;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_68;
  FDelegateAllocation local_60;
  FDestructionSentinel local_50;
  FDelegateAllocation *local_38;
  
  this->_padding_ = (longlong)&___7FWaitForLoadingToFinish__6B_;
  this->ExecutionFunction = param_1->ExecutionFunction;
  this->OutputLink = param_1->Linkage;
  LVar1 = (LARGE_INTEGER)(param_1->CallbackTarget).field0_0x0.DebugPtr;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    if ((UObject *)LVar1.QuadPart != (UObject *)0x0) {
      UE::GC::MarkAsReachable((UObject *)LVar1);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       ((UObject *)LVar1.QuadPart != (UObject *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)LVar1);
    }
  }
  LVar2.QuadPart = 0;
  (this->CallbackTarget).ObjectIndex = 0;
  (this->CallbackTarget).ObjectSerialNumber = 0;
  local_res8 = LVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     ((UObject *)LVar1.QuadPart != (UObject *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)LVar1);
  }
  FWeakObjectPtr::operator=(&this->CallbackTarget,(FObjectPtr)&local_res8);
  if (param_2 != (UObject *)0x0) {
    LVar2.QuadPart = (**(code **)(*(longlong *)param_2 + 0x180))(param_2);
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     ((UObject *)LVar2.QuadPart != (UObject *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)LVar2);
  }
  (this->WorldPtr).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8 = LVar2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     ((UObject *)LVar2.QuadPart != (UObject *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)LVar2);
  }
  FWeakObjectPtr::operator=(&(this->WorldPtr).WeakPtr,(FObjectPtr)&local_res8);
  (this->ActorSpawnedDelegateHandle).ID = 0;
  (this->Options).WaitForReplicationToSettle = param_3->WaitForReplicationToSettle;
  this->WaitingFrames = 0;
  this->LastLoadTime = 0.0;
  this->bActorReplicationDetected = false;
  UAutomationBlueprintFunctionLibrary::FinishLoadingBeforeScreenshot();
  this->WaitingFrames = 0;
  QueryPerformanceCounter(&local_res8);
  this->LastLoadTime =
       (double)local_res8.QuadPart * FGenericPlatformTime::SecondsPerCycle + __real_4170000000000000
  ;
  if (((this->Options).WaitForReplicationToSettle != false) &&
     (this_00 = GetWorld(this), this_00 != (UWorld *)0x0)) {
    local_68.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_60.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_68,(FWriteAccessScope *)&local_50);
    local_38 = &local_60;
    puVar3 = UE::Core::Private::DelegateAllocate(0x28,&local_60);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = &
                ___7__TCommonDelegateInstanceState___A6AXPEAVAActor___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar4 = FDelegateHandle::GenerateNewID();
      puVar3[2] = uVar4;
      *puVar3 = &
                ___7__TBaseRawMethodDelegateInstance__0A_VFWaitForLoadingToFinish____A6AXPEAVAActor___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      puVar3[4] = OnActorSpawned;
      puVar3[3] = this;
    }
    if (local_50.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
    }
    FVar5 = UWorld::AddOnActorSpawnedHandler
                      (this_00,(TDelegate<void___cdecl(AActor_*),FDefaultDelegateUserPolicy> *)
                               &local_res8.s);
                    /* WARNING: Load size is inaccurate */
    (this->ActorSpawnedDelegateHandle).ID = *FVar5.ID;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_68,(FWriteAccessScope *)&local_50);
    if ((local_60.DelegateSize != 0) &&
       (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_60.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_60,0,0,0x10);
      local_60.DelegateSize = 0;
    }
    if (local_50.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
    }
    if (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_60.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_68.AccessDetector);
  }
  return this;
}

// ~FWaitForLoadingToFinish @ 148c810a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall FWaitForLoadingToFinish::~FWaitForLoadingToFinish(FWaitForLoadingToFinish *this)

{
  UWorld *this_00;
  
  this->_padding_ = (longlong)&___7FWaitForLoadingToFinish__6B_;
  this_00 = GetWorld(this);
  if (this_00 != (UWorld *)0x0) {
    UWorld::RemoveOnActorSpawnedHandler
              (this_00,(FDelegateHandle)(this->ActorSpawnedDelegateHandle).ID);
  }
  this->_padding_ = (longlong)&___7FPendingLatentAction__6B_;
  return;
}

// GetWorld @ 148c92b60

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UWorld * __thiscall FWaitForLoadingToFinish::GetWorld(FWaitForLoadingToFinish *this)

{
  int iVar1;
  longlong lVar2;
  UEngine *this_00;
  UWorld *pUVar3;
  UClass *pUVar4;
  
  pUVar3 = (UWorld *)FWeakObjectPtr::Get(&(this->WorldPtr).WeakPtr);
  this_00 = GEngine;
  if (pUVar3 == (UWorld *)0x0) {
    if (GEngine != (UEngine *)0x0) {
      pUVar4 = Z_Construct_UClass_UGameEngine_NoRegister();
      lVar2 = this_00->_padding_;
      iVar1 = (int)pUVar4->_padding_;
      if ((iVar1 <= *(int *)(lVar2 + 0x38)) &&
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar4->_padding_)) {
        pUVar3 = UGameEngine::GetGameWorld((UGameEngine *)this_00);
        return pUVar3;
      }
    }
    pUVar3 = (UWorld *)0x0;
  }
  return pUVar3;
}

// OnActorSpawned @ 148c95330

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
FWaitForLoadingToFinish::OnActorSpawned(FWaitForLoadingToFinish *this,AActor *param_1)

{
  if ((param_1->Role).Value != '\x03') {
    this->bActorReplicationDetected = true;
  }
  return;
}

// UpdateOperation @ 148ca1120

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
FWaitForLoadingToFinish::UpdateOperation(FWaitForLoadingToFinish *this,FLatentResponse *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  bool bVar3;
  UWorld *pUVar4;
  FScriptContainerElement *pFVar5;
  LARGE_INTEGER local_res8;
  
  bVar3 = (*IsAsyncLoading)();
  if (!bVar3) {
    pUVar4 = GetWorld(this);
    if (pUVar4 == (UWorld *)0x0) {
LAB_148ca119e:
      if (this->bActorReplicationDetected == false) {
        this->WaitingFrames = this->WaitingFrames + 1;
        goto LAB_148ca11de;
      }
      this->bActorReplicationDetected = false;
    }
    else {
      pFVar5 = (pUVar4->StreamingLevels).AllocatorInstance.Data;
      iVar2 = (pUVar4->StreamingLevels).ArrayNum;
      pFVar1 = pFVar5 + (longlong)iVar2 * 8;
      while( true ) {
        if ((pUVar4->StreamingLevels).ArrayNum != iVar2) {
          `TCheckedPointerIterator<ULevelStreaming_*_const,int,0>::operator!='::__l2::<lambda_1>::
          operator()(&local_res8);
        }
        if (pFVar5 == pFVar1) goto LAB_148ca119e;
        if ((*(longlong *)pFVar5 != 0) && (*(char *)(*(longlong *)pFVar5 + 0x120) == '\x03')) break;
        pFVar5 = pFVar5 + 8;
      }
    }
  }
  this->WaitingFrames = 0;
  QueryPerformanceCounter(&local_res8);
  this->LastLoadTime =
       (double)local_res8.QuadPart * FGenericPlatformTime::SecondsPerCycle + __real_4170000000000000
  ;
LAB_148ca11de:
  QueryPerformanceCounter(&local_res8);
  if ((0x3c < this->WaitingFrames) &&
     (__real_4014000000000000 <
      ((double)local_res8.QuadPart * FGenericPlatformTime::SecondsPerCycle + __real_4170000000000000
      ) - this->LastLoadTime)) {
    FLatentResponse::FinishAndTriggerIf
              (param_1,true,this->ExecutionFunction,this->OutputLink,this->CallbackTarget);
  }
  return;
}

