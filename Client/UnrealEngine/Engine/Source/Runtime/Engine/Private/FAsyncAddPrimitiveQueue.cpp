// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 9

// FAsyncAddPrimitiveQueue @ 14733f540

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FAsyncAddPrimitiveQueue * __thiscall
FAsyncAddPrimitiveQueue::FAsyncAddPrimitiveQueue
          (FAsyncAddPrimitiveQueue *this,FAsyncRegisterLevelContext *param_1)

{
  this->Context = param_1;
  (this->NextBatch).AllocatorInstance.Data =
       (TWeakObjectPtr<UPrimitiveComponent,FWeakObjectPtr> *)0x0;
  (this->NextBatch).ArrayNum = 0;
  (this->NextBatch).ArrayMax = 0;
  (this->AddPrimitivesArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AddPrimitivesArray).ArrayNum = 0;
  (this->AddPrimitivesArray).ArrayMax = 0;
  (this->AsyncTask).Batches.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AsyncTask).Batches.ArrayNum = 0;
  (this->AsyncTask).Batches.ArrayMax = 0;
  (this->AsyncTask).Task = (TTask<void>)0x0;
  return this;
}

// ~FAsyncAddPrimitiveQueue @ 1473419b0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall FAsyncAddPrimitiveQueue::~FAsyncAddPrimitiveQueue(FAsyncAddPrimitiveQueue *this)

{
  int *piVar1;
  int iVar2;
  TTask<void> TVar3;
  FScriptContainerElement *pFVar4;
  TWeakObjectPtr<UPrimitiveComponent,FWeakObjectPtr> *pTVar5;
  code *pcVar6;
  bool bVar7;
  
  TVar3 = (this->AsyncTask).Task;
  if ((((TVar3 != (TTask<void>)0x0) && (*(char *)((longlong)TVar3 + 0xd0) == '\0')) ||
      ((this->AddPrimitivesArray).ArrayNum != 0)) || ((this->NextBatch).ArrayNum != 0)) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("!HasRemainingWork()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Internal\\Streaming\\AsyncRegisterLevelContext.cpp"
                       ,0x87,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  TVar3 = (this->AsyncTask).Task;
  if (TVar3 != (TTask<void>)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)TVar3 + 0x30);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (*(code *)**(undefined8 **)TVar3)(TVar3,1);
    }
  }
  DestructItems<TArray<TWeakObjectPtr<UPrimitiveComponent,FWeakObjectPtr>,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>,int>
            ((TArray<TWeakObjectPtr<UPrimitiveComponent,FWeakObjectPtr>,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>
              *)(this->AsyncTask).Batches.AllocatorInstance.Data,(this->AsyncTask).Batches.ArrayNum)
  ;
  pFVar4 = (this->AsyncTask).Batches.AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  DestructItems<TArray<TWeakObjectPtr<UPrimitiveComponent,FWeakObjectPtr>,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>,int>
            ((TArray<TWeakObjectPtr<UPrimitiveComponent,FWeakObjectPtr>,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>
              *)(this->AddPrimitivesArray).AllocatorInstance.Data,
             (this->AddPrimitivesArray).ArrayNum);
  pFVar4 = (this->AddPrimitivesArray).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  pTVar5 = (this->NextBatch).AllocatorInstance.Data;
  if (pTVar5 != (TWeakObjectPtr<UPrimitiveComponent,FWeakObjectPtr> *)0x0) {
    TLinearAllocatorBase<FDefaultBlockAllocationTag,0>::Free(pTVar5);
    return;
  }
  return;
}

// AddPrimitive @ 147345400

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FAsyncAddPrimitiveQueue::AddPrimitive(FAsyncAddPrimitiveQueue *this,UPrimitiveComponent *param_1)

{
  int *piVar1;
  FWeakObjectPtr *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  UPrimitiveComponent *local_res8;
  FWeakObjectPtr local_18 [2];
  
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UPrimitiveComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  local_18[0].ObjectIndex = 0;
  local_18[0].ObjectSerialNumber = 0;
  local_res8 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (param_1 != (UPrimitiveComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=(local_18,(FObjectPtr)&local_res8);
  pFVar2 = &((this->NextBatch).AllocatorInstance.Data)->WeakPtr;
  if ((pFVar2 <= local_18) && (local_18 < pFVar2 + (this->NextBatch).ArrayMax)) {
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
  iVar5 = (this->NextBatch).ArrayNum;
  piVar1 = &(this->NextBatch).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::ForElementType<TWeakObjectPtr<UPrimitiveComponent,FWeakObjectPtr>_>_>
                      (0x408,&(this->NextBatch).AllocatorInstance,piVar1);
  }
  (this->NextBatch).ArrayNum = iVar5 + 1;
  (this->NextBatch).AllocatorInstance.Data[iVar5].WeakPtr = local_18[0];
  if (LevelStreaming::AsyncRegisterLevelContext::PrimitiveBatchSize <= (this->NextBatch).ArrayNum) {
    Flush(this);
  }
  return;
}

// Flush @ 14734d6b0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall FAsyncAddPrimitiveQueue::Flush(FAsyncAddPrimitiveQueue *this)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  
  if ((this->NextBatch).ArrayNum != 0) {
    iVar2 = (this->AddPrimitivesArray).ArrayNum;
    piVar1 = &(this->AddPrimitivesArray).ArrayMax;
    if (iVar2 == *piVar1) {
      iVar2 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&(this->AddPrimitivesArray).AllocatorInstance,piVar1);
    }
    (this->AddPrimitivesArray).ArrayNum = iVar2 + 1;
    pFVar3 = (this->AddPrimitivesArray).AllocatorInstance.Data + (longlong)iVar2 * 0x10;
    *(undefined8 *)pFVar3 = 0;
    *(TWeakObjectPtr<UPrimitiveComponent,FWeakObjectPtr> **)pFVar3 =
         (this->NextBatch).AllocatorInstance.Data;
    (this->NextBatch).AllocatorInstance.Data =
         (TWeakObjectPtr<UPrimitiveComponent,FWeakObjectPtr> *)0x0;
    *(int *)(pFVar3 + 8) = (this->NextBatch).ArrayNum;
    *(int *)(pFVar3 + 0xc) = (this->NextBatch).ArrayMax;
    (this->NextBatch).ArrayNum = 0;
    (this->NextBatch).ArrayMax = 0;
  }
  return;
}

// HasRemainingWork @ 1473515b0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall FAsyncAddPrimitiveQueue::HasRemainingWork(FAsyncAddPrimitiveQueue *this)

{
  TTask<void> TVar1;
  
  TVar1 = (this->AsyncTask).Task;
  if ((((TVar1 == (TTask<void>)0x0) || (*(char *)((longlong)TVar1 + 0xd0) != '\0')) &&
      ((this->AddPrimitivesArray).ArrayNum == 0)) && ((this->NextBatch).ArrayNum == 0)) {
    return false;
  }
  return true;
}

// IsRunningAsync @ 147351860

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall FAsyncAddPrimitiveQueue::IsRunningAsync(FAsyncAddPrimitiveQueue *this)

{
  TTask<void> TVar1;
  
  TVar1 = (this->AsyncTask).Task;
  if ((TVar1 != (TTask<void>)0x0) && (*(char *)((longlong)TVar1 + 0xd0) == '\0')) {
    return true;
  }
  return false;
}

// Push @ 147353150

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FAsyncAddPrimitiveQueue::Push
          (FAsyncAddPrimitiveQueue *this,
          TArray<TWeakObjectPtr<UPrimitiveComponent,FWeakObjectPtr>,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>
          *param_1)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  
  if (param_1->ArrayNum == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!InAddPrimitives.IsEmpty()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Internal\\Streaming\\AsyncRegisterLevelContext.cpp"
                       ,0x10a,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar4 = (this->AddPrimitivesArray).ArrayNum;
  piVar1 = &(this->AddPrimitivesArray).ArrayMax;
  if (iVar4 == *piVar1) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&(this->AddPrimitivesArray).AllocatorInstance,piVar1);
  }
  (this->AddPrimitivesArray).ArrayNum = iVar4 + 1;
  pFVar5 = (this->AddPrimitivesArray).AllocatorInstance.Data + (longlong)iVar4 * 0x10;
  *(undefined8 *)pFVar5 = 0;
  *(TWeakObjectPtr<UPrimitiveComponent,FWeakObjectPtr> **)pFVar5 = (param_1->AllocatorInstance).Data
  ;
  (param_1->AllocatorInstance).Data = (TWeakObjectPtr<UPrimitiveComponent,FWeakObjectPtr> *)0x0;
  *(int *)(pFVar5 + 8) = param_1->ArrayNum;
  *(int *)(pFVar5 + 0xc) = param_1->ArrayMax;
  param_1->ArrayNum = 0;
  param_1->ArrayMax = 0;
  return;
}

// Tick @ 147358f70

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall FAsyncAddPrimitiveQueue::Tick(FAsyncAddPrimitiveQueue *this)

{
  int *piVar1;
  TArray<TArray<TWeakObjectPtr<UPrimitiveComponent,FWeakObjectPtr>,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>,TSizedDefaultAllocator<32>_>
  *this_00;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  TTask<void> TVar5;
  FSceneInterface *pFVar6;
  undefined8 uVar7;
  void *_Src;
  code *pcVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  undefined1 uVar12;
  bool bVar13;
  int iVar14;
  uint uVar15;
  FName *pFVar16;
  FThreadSafeStaticStat<_private:_bool___cdecl_FAsyncAddPrimitiveQueue::Tick(void)_::_11_::FStat_STAT_AddPrimitivesTask_Execute_One_GameThread>
  FVar17;
  UWorld *pUVar18;
  wchar_t *pwVar19;
  UObject *pUVar20;
  FThreadStats *pFVar21;
  FThreadStatsPool *pFVar22;
  TStatId TVar23;
  FScriptContainerElement *pFVar24;
  longlong lVar25;
  int iVar26;
  uint uVar27;
  FName FVar28;
  FScriptContainerElement *pFVar29;
  ulonglong uVar30;
  FColor_u_0 local_res18 [2];
  FWeakObjectPtr local_res20;
  TArray<TArray<TWeakObjectPtr<UPrimitiveComponent,FWeakObjectPtr>,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>,TSizedDefaultAllocator<32>_>
  local_108;
  TArray<TArray<TWeakObjectPtr<UPrimitiveComponent,FWeakObjectPtr>,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>,TSizedDefaultAllocator<32>_>
  local_f8;
  FName local_e8;
  byte local_e0;
  FName local_d8;
  FSceneInterface *local_d0;
  FName local_c8;
  LARGE_INTEGER local_b8;
  LARGE_INTEGER local_b0;
  FStatMessage local_a8;
  FStatMessage local_98;
  FSourceLocation local_88;
  FName local_68;
  FName local_60;
  FName local_58;
  FName local_50 [2];
  
  TVar5 = (this->AsyncTask).Task;
  if ((TVar5 == (TTask<void>)0x0) || (*(char *)((longlong)TVar5 + 0xd0) != '\0')) {
    FAddPrimitivesTask::Reset(&this->AsyncTask);
    this_00 = &this->AddPrimitivesArray;
    if ((this->AddPrimitivesArray).ArrayNum == 0) {
      TVar5 = (this->AsyncTask).Task;
      if ((TVar5 != (TTask<void>)0x0) && (*(char *)((longlong)TVar5 + 0xd0) == '\0')) {
        return false;
      }
      if ((this->AddPrimitivesArray).ArrayNum != 0) {
        return false;
      }
      if ((this->NextBatch).ArrayNum != 0) {
        return false;
      }
      return true;
    }
    if (this->Context->bCanLaunchNewTasks == false) {
      return false;
    }
    pUVar18 = ULevel::GetWorld(this->Context->Level);
    iVar14 = 0;
    local_d0 = pUVar18->Scene;
    if (this->Context->bIncrementalRegisterComponentsDone == false) {
      if (((this->AddPrimitivesArray).ArrayNum < 1) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar8 = (code *)swi(3);
        uVar12 = (*pcVar8)();
        return (bool)uVar12;
      }
      pFVar29 = (this_00->AllocatorInstance).Data;
      uVar7 = *(undefined8 *)pFVar29;
      *(undefined8 *)pFVar29 = 0;
      uVar2 = *(undefined4 *)(pFVar29 + 8);
      uVar3 = *(undefined4 *)(pFVar29 + 0xc);
      *(undefined8 *)(pFVar29 + 8) = 0;
      TArray<TArray<TWeakObjectPtr<UPrimitiveComponent,FWeakObjectPtr>,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>,TSizedDefaultAllocator<32>_>
      ::RemoveAt(this_00,0,No);
      local_f8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_f8.ArrayNum = 0;
      local_f8.ArrayMax = 0;
      iVar14 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x810,&local_f8.AllocatorInstance,&local_f8.ArrayMax);
      local_f8.ArrayNum = iVar14 + 1;
      lVar25 = (longlong)iVar14;
      *(undefined8 *)&local_f8.AllocatorInstance.Data[lVar25 * 0x10].field_0x0 = uVar7;
      *(undefined4 *)(local_f8.AllocatorInstance.Data + lVar25 * 0x10 + 8) = uVar2;
      *(undefined4 *)(local_f8.AllocatorInstance.Data + lVar25 * 0x10 + 0xc) = uVar3;
      FAddPrimitivesTask::Launch(&this->AsyncTask,&local_f8,local_d0);
      DestructItems<TArray<TWeakObjectPtr<UPrimitiveComponent,FWeakObjectPtr>,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>,int>
                ((TArray<TWeakObjectPtr<UPrimitiveComponent,FWeakObjectPtr>,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>
                  *)local_f8.AllocatorInstance.Data,local_f8.ArrayNum);
      if ((TArray<TWeakObjectPtr<UPrimitiveComponent,FWeakObjectPtr>,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>
           *)local_f8.AllocatorInstance.Data ==
          (TArray<TWeakObjectPtr<UPrimitiveComponent,FWeakObjectPtr>,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>
           *)0x0) {
        return false;
      }
      FMemory::Free(local_f8.AllocatorInstance.Data);
      return false;
    }
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
      StatPtr_STAT_AddPrimitivesTask_Execute_GameThread =
           (FThreadSafeStaticStat<_private:_bool___cdecl_FAsyncAddPrimitiveQueue::Tick(void)_::_32_::FStat_STAT_AddPrimitivesTask_Execute_GameThread>
            )0x0;
      pFVar16 = ::FName::FName(&local_58,"STAT_AddPrimitivesTask_Execute_GameThread");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AddPrimitivesTask_Execute_GameThread,
                 *pFVar16,L"STAT_AddPrimitivesTask_Execute_GameThread","STATGROUP_Quick",
                 "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
      _Init_thread_footer(&::_TSS1);
    }
    TVar23.StatIdPtr = (TStatIdData *)StatPtr_STAT_AddPrimitivesTask_Execute_GameThread;
    if (StatPtr_STAT_AddPrimitivesTask_Execute_GameThread ==
        (FThreadSafeStaticStat<_private:_bool___cdecl_FAsyncAddPrimitiveQueue::Tick(void)_::_32_::FStat_STAT_AddPrimitivesTask_Execute_GameThread>
         )0x0) {
      pFVar16 = ::FName::FName(local_50,"STAT_AddPrimitivesTask_Execute_GameThread");
      TVar23.StatIdPtr =
           FThreadSafeStaticStatBase::DoSetup
                     ((FThreadSafeStaticStatBase *)
                      &StatPtr_STAT_AddPrimitivesTask_Execute_GameThread,*pFVar16,
                      L"STAT_AddPrimitivesTask_Execute_GameThread","STATGROUP_Quick",
                      "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
    }
    local_88.Impl._Line = 0xd7;
    local_88.Impl._File =
         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Internal\\Streaming\\AsyncRegisterLevelContext.cpp"
    ;
    local_88.Impl._Column = 5;
    local_88.Impl._Function = "bool __cdecl FAsyncAddPrimitiveQueue::Tick(void)";
    FScopeCycleCounter::FScopeCycleCounter
              ((FScopeCycleCounter *)&local_e8,TVar23,CycleStat|ClearEveryFrame,false,&local_88);
    local_108.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_108.ArrayNum = 0;
    local_108.ArrayMax = 0;
    iVar26 = 0x7fffffff;
    if (GLevelStreamingAddPrimitiveGranularity != 0) {
      iVar26 = GLevelStreamingAddPrimitiveGranularity;
    }
    iVar4 = (this->AddPrimitivesArray).ArrayNum;
    do {
      if ((iVar4 == 0) || (iVar26 <= iVar14)) {
        FAddPrimitivesTask::Execute(&local_108,local_d0);
        DestructItems<TArray<TWeakObjectPtr<UPrimitiveComponent,FWeakObjectPtr>,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>,int>
                  ((TArray<TWeakObjectPtr<UPrimitiveComponent,FWeakObjectPtr>,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>
                    *)local_108.AllocatorInstance.Data,local_108.ArrayNum);
        if ((TArray<TWeakObjectPtr<UPrimitiveComponent,FWeakObjectPtr>,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>
             *)local_108.AllocatorInstance.Data !=
            (TArray<TWeakObjectPtr<UPrimitiveComponent,FWeakObjectPtr>,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>
             *)0x0) {
          FMemory::Free(local_108.AllocatorInstance.Data);
        }
        if ((local_e0 & 1) != 0) {
          FGenericPlatformMisc::EndNamedEvent();
        }
        if ((local_e0 & 2) != 0) {
          FCpuProfilerTrace::OutputEndEvent();
        }
        if ((local_e0 & 4) == 0) {
          return false;
        }
        FThreadStats::AddMessage(local_e8,CycleScopeEnd);
        return false;
      }
      if (((this->AddPrimitivesArray).ArrayNum < 1) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar8 = (code *)swi(3);
        uVar12 = (*pcVar8)();
        return (bool)uVar12;
      }
      if (iVar26 < *(int *)((this_00->AllocatorInstance).Data + 8) + iVar14) {
        uVar27 = iVar26 - iVar14;
        if (local_108.ArrayNum == local_108.ArrayMax) {
          local_108.ArrayNum =
               UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x810,&local_108.AllocatorInstance,&local_108.ArrayMax);
        }
        pFVar29 = local_108.AllocatorInstance.Data + (longlong)local_108.ArrayNum * 0x10;
        local_108.ArrayNum = local_108.ArrayNum + 1;
        *(TWeakObjectPtr<UPrimitiveComponent,FWeakObjectPtr> **)&pFVar29->field_0x0 =
             (TWeakObjectPtr<UPrimitiveComponent,FWeakObjectPtr> *)0x0;
        *(int *)(pFVar29 + 8) = 0;
        *(int *)(pFVar29 + 0xc) = 0;
        if (((this->AddPrimitivesArray).ArrayNum < 1) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar8 = (code *)swi(3);
          uVar12 = (*pcVar8)();
          return (bool)uVar12;
        }
        _Src = *(void **)(this_00->AllocatorInstance).Data;
        if (((_Src == (void *)0x0) && (uVar27 != 0)) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("Ptr != nullptr || Count == 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x9c1,L""), bVar13)) {
          pcVar8 = (code *)swi(3);
          uVar12 = (*pcVar8)();
          return (bool)uVar12;
        }
        iVar14 = UE::Core::Private::
                 ReallocGrow<0,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::ForElementType<TWeakObjectPtr<UPrimitiveComponent,FWeakObjectPtr>_>_>
                           (8,4,uVar27,
                            (ForElementType<TWeakObjectPtr<UPrimitiveComponent,FWeakObjectPtr>_> *)
                            pFVar29,(int *)(pFVar29 + 8),(int *)(pFVar29 + 0xc));
        if (uVar27 != 0) {
          memcpy(*(TWeakObjectPtr<UPrimitiveComponent,FWeakObjectPtr> **)&pFVar29->field_0x0 +
                 iVar14,_Src,(longlong)(int)uVar27 << 3);
        }
        if (((this->AddPrimitivesArray).ArrayNum < 1) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar8 = (code *)swi(3);
          uVar12 = (*pcVar8)();
          return (bool)uVar12;
        }
        pFVar29 = (this_00->AllocatorInstance).Data;
        uVar15 = 0;
        if ((int)uVar27 <= *(int *)(pFVar29 + 8)) {
          uVar15 = ~uVar27 >> 0x1f;
        }
        if ((uVar15 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x458,
                                L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar8 = (code *)swi(3);
          uVar12 = (*pcVar8)();
          return (bool)uVar12;
        }
        iVar14 = iVar26;
        if (uVar27 != 0) {
          if (*(int *)(pFVar29 + 8) - uVar27 != 0) {
            memmove(*(void **)pFVar29,
                    (void *)((longlong)*(void **)pFVar29 + (longlong)(int)uVar27 * 8),
                    (longlong)(int)(*(int *)(pFVar29 + 8) - uVar27) << 3);
          }
          *(uint *)(pFVar29 + 8) = *(int *)(pFVar29 + 8) - uVar27;
        }
      }
      else {
        if (((this->AddPrimitivesArray).ArrayNum < 1) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar8 = (code *)swi(3);
          uVar12 = (*pcVar8)();
          return (bool)uVar12;
        }
        iVar4 = *(int *)((this_00->AllocatorInstance).Data + 8);
        if (((this->AddPrimitivesArray).ArrayNum < 1) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar8 = (code *)swi(3);
          uVar12 = (*pcVar8)();
          return (bool)uVar12;
        }
        pFVar29 = (this_00->AllocatorInstance).Data;
        if (local_108.ArrayNum == local_108.ArrayMax) {
          local_108.ArrayNum =
               UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x810,&local_108.AllocatorInstance,&local_108.ArrayMax);
        }
        lVar25 = (longlong)local_108.ArrayNum;
        local_108.ArrayNum = local_108.ArrayNum + 1;
        pFVar24 = local_108.AllocatorInstance.Data + lVar25 * 0x10;
        *(undefined8 *)&pFVar24->field_0x0 = 0;
        *(undefined8 *)&pFVar24->field_0x0 = *(undefined8 *)pFVar29;
        *(undefined8 *)pFVar29 = 0;
        *(undefined4 *)(pFVar24 + 8) = *(undefined4 *)(pFVar29 + 8);
        *(undefined4 *)(pFVar24 + 0xc) = *(undefined4 *)(pFVar29 + 0xc);
        *(undefined8 *)(pFVar29 + 8) = 0;
        TArray<TArray<TWeakObjectPtr<UPrimitiveComponent,FWeakObjectPtr>,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>,TSizedDefaultAllocator<32>_>
        ::RemoveAt(this_00,0,No);
        iVar14 = iVar14 + iVar4;
      }
      iVar4 = (this->AddPrimitivesArray).ArrayNum;
    } while( true );
  }
  if (this->Context->bIncrementalRegisterComponentsDone == false) {
    return false;
  }
  if ((this->AddPrimitivesArray).ArrayNum == 0) goto LAB_1473595a2;
  uVar30 = (ulonglong)_tls_index;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar30 * 8) + 0x9d4c) < ::_TSS0)
     && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    StatPtr_STAT_AddPrimitivesTask_Execute_One_GameThread =
         (FThreadSafeStaticStat<_private:_bool___cdecl_FAsyncAddPrimitiveQueue::Tick(void)_::_11_::FStat_STAT_AddPrimitivesTask_Execute_One_GameThread>
          )0x0;
    pFVar16 = ::FName::FName(&local_68,"STAT_AddPrimitivesTask_Execute_One_GameThread");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AddPrimitivesTask_Execute_One_GameThread,
               *pFVar16,L"STAT_AddPrimitivesTask_Execute_One_GameThread","STATGROUP_Quick",
               "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
    _Init_thread_footer(&::_TSS0);
  }
  FVar17 = StatPtr_STAT_AddPrimitivesTask_Execute_One_GameThread;
  if (StatPtr_STAT_AddPrimitivesTask_Execute_One_GameThread ==
      (FThreadSafeStaticStat<_private:_bool___cdecl_FAsyncAddPrimitiveQueue::Tick(void)_::_11_::FStat_STAT_AddPrimitivesTask_Execute_One_GameThread>
       )0x0) {
    pFVar16 = ::FName::FName(&local_60,"STAT_AddPrimitivesTask_Execute_One_GameThread");
    FVar17 = (FThreadSafeStaticStat<_private:_bool___cdecl_FAsyncAddPrimitiveQueue::Tick(void)_::_11_::FStat_STAT_AddPrimitivesTask_Execute_One_GameThread>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &StatPtr_STAT_AddPrimitivesTask_Execute_One_GameThread,*pFVar16,
                          L"STAT_AddPrimitivesTask_Execute_One_GameThread","STATGROUP_Quick",
                          "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar28 = *(FName *)FVar17;
  bVar13 = false;
  bVar10 = false;
  local_c8.ComparisonIndex.Value = 0;
  local_c8.Number = 0;
  if ((FVar28.ComparisonIndex.Value.Value == 0) && (FVar28.Number == 0)) {
LAB_14735919f:
    bVar9 = false;
    FVar28 = local_c8;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res18[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res18[0]._s_0,(char *)*(FName *)((longlong)FVar17 + 0x10));
      bVar13 = false;
      bVar10 = true;
      if (-1 < CpuChannel->Enabled) {
        local_d8.ComparisonIndex.Value = FVar28.ComparisonIndex.Value.Value;
        local_d8.Number = FVar28.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_d8,(wchar_t *)*(FName *)((longlong)FVar17 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Internal\\Streaming\\AsyncRegisterLevelContext.cpp"
                   ,0xa6);
        bVar13 = true;
        bVar10 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14735919f;
    FThreadStats::AddMessage(FVar28,CycleScopeStart);
    bVar9 = true;
  }
  local_res20.ObjectIndex = 0;
  local_res20.ObjectSerialNumber = 0;
  if ((this->AddPrimitivesArray).ArrayNum != 0) {
    do {
      bVar11 = FWeakObjectPtr::IsValid(&local_res20);
      if (bVar11) break;
      if (((this->AddPrimitivesArray).ArrayNum < 1) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar8 = (code *)swi(3);
        uVar12 = (*pcVar8)();
        return (bool)uVar12;
      }
      pFVar29 = (this->AddPrimitivesArray).AllocatorInstance.Data;
      if (*(int *)(pFVar29 + 8) == 0) {
LAB_1473592ea:
        TArray<TArray<TWeakObjectPtr<UPrimitiveComponent,FWeakObjectPtr>,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>,TSizedDefaultAllocator<32>_>
        ::RemoveAt(&this->AddPrimitivesArray,0,No);
      }
      else {
        do {
          bVar11 = FWeakObjectPtr::IsValid(&local_res20);
          if (bVar11) break;
          if ((*(int *)(pFVar29 + 8) < 1) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar11)) {
            pcVar8 = (code *)swi(3);
            uVar12 = (*pcVar8)();
            return (bool)uVar12;
          }
          local_res20 = **(FWeakObjectPtr **)pFVar29;
          if ((*(int *)(pFVar29 + 8) < 1) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar11)) {
            pcVar8 = (code *)swi(3);
            uVar12 = (*pcVar8)();
            return (bool)uVar12;
          }
          iVar14 = *(int *)(pFVar29 + 8) + -1;
          if (1 < iVar14) {
            iVar14 = 1;
          }
          if (iVar14 != 0) {
            memmove(*(void **)pFVar29,
                    (void *)((longlong)*(void **)pFVar29 +
                            (longlong)(*(int *)(pFVar29 + 8) - iVar14) * 8),(longlong)iVar14 << 3);
          }
          pFVar24 = pFVar29 + 8;
          *(int *)pFVar24 = *(int *)pFVar24 + -1;
        } while (*(int *)pFVar24 != 0);
        if (*(int *)(pFVar29 + 8) == 0) goto LAB_1473592ea;
      }
    } while ((this->AddPrimitivesArray).ArrayNum != 0);
    uVar30 = (ulonglong)_tls_index;
  }
  bVar11 = FWeakObjectPtr::IsValid(&local_res20);
  if (bVar11) {
    pUVar18 = ULevel::GetWorld(this->Context->Level);
    pFVar6 = pUVar18->Scene;
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar30 * 8) + 0x9d4c) <
         `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
         _thread_safe_static_guard_0__) &&
       (_Init_thread_header(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                             _thread_safe_static_guard_0__),
       `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::_thread_safe_static_guard_0__
       == -1)) {
      pwVar19 = FCommandLine::Get();
      `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline =
           FParse::Param(pwVar19,L"nullrhi");
      _Init_thread_footer(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                           _thread_safe_static_guard_0__);
    }
    if (((PRIVATE_GIsRunningCommandlet == false) || (PRIVATE_GAllowCommandletRendering != false)) &&
       (`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline ==
        false)) {
      bVar11 = true;
    }
    else {
      bVar11 = false;
    }
    pUVar20 = FWeakObjectPtr::Get(&local_res20);
    if ((pUVar20 != (UObject *)0x0) && ((pUVar20[3].field_0x20 & 1) != 0)) {
      if (((pUVar20[3].field_0x20 & 2) == 0) && (bVar11)) {
        (**(code **)(*(longlong *)pUVar20 + 0x388))(pUVar20,0);
      }
      else if (*(longlong *)&pUVar20[0x21].field_0x8 == 0) {
        (**(code **)(pFVar6->_padding_ + 8))(pFVar6,pUVar20);
      }
    }
    if (bVar10) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if (bVar13) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if (!bVar9) {
      return false;
    }
    if (FVar28 == (FName)0x0) {
      return false;
    }
    if (FThreadStats::bPrimaryDisableForever != false) {
      return false;
    }
    if (FThreadStats::TlsSlot == 0xffffffff) {
      return false;
    }
    pFVar21 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar21 == (FThreadStats *)0x0) {
      pFVar22 = FThreadStatsPool::Get();
      pFVar21 = FThreadStatsPool::GetFromPool(pFVar22);
    }
    if (pFVar21->ScopeCount <= pFVar21->bWaitForExplicitFlush) {
      return false;
    }
    local_a8.NameAndInfo.Number = FVar28.Number & 0xffff6fff | 0x6000;
    local_a8.NameAndInfo.Index.Value = FVar28.ComparisonIndex.Value.Value;
    QueryPerformanceCounter(&local_b8);
    local_a8.StatData.Pad[4] = '\0';
    local_a8.StatData.Pad[5] = '\0';
    local_a8.StatData.Pad[6] = '\0';
    local_a8.StatData.Pad[7] = '\0';
    local_a8.StatData.Pad[0] = local_b8.s.LowPart._0_1_;
    local_a8.StatData.Pad[1] = local_b8.s.LowPart._1_1_;
    local_a8.StatData.Pad[2] = local_b8.s.LowPart._2_1_;
    local_a8.StatData.Pad[3] = local_b8.s.LowPart._3_1_;
    FThreadStats::AddStatMessage(pFVar21,&local_a8);
    piVar1 = &pFVar21->ScopeCount;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FThreadStats::Flush(pFVar21,false,false);
      return false;
    }
    if (FThreadStats::bIsRawStatsActive == false) {
      return false;
    }
    FThreadStats::FlushRawStats(pFVar21,false,false);
    return false;
  }
  if (bVar10) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar13) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((bVar9) && (FVar28 != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    pFVar21 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar21 == (FThreadStats *)0x0) {
      pFVar22 = FThreadStatsPool::Get();
      pFVar21 = FThreadStatsPool::GetFromPool(pFVar22);
    }
    if (pFVar21->bWaitForExplicitFlush < pFVar21->ScopeCount) {
      local_98.NameAndInfo.Number = FVar28.Number & 0xffff6fff | 0x6000;
      local_98.NameAndInfo.Index.Value = FVar28.ComparisonIndex.Value.Value;
      QueryPerformanceCounter(&local_b0);
      local_98.StatData.Pad[4] = '\0';
      local_98.StatData.Pad[5] = '\0';
      local_98.StatData.Pad[6] = '\0';
      local_98.StatData.Pad[7] = '\0';
      local_98.StatData.Pad[0] = local_b0.s.LowPart._0_1_;
      local_98.StatData.Pad[1] = local_b0.s.LowPart._1_1_;
      local_98.StatData.Pad[2] = local_b0.s.LowPart._2_1_;
      local_98.StatData.Pad[3] = local_b0.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(pFVar21,&local_98);
      piVar1 = &pFVar21->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(pFVar21,false,false);
        WaitForAsyncTask(this);
        return false;
      }
      if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar21,false,false);
      }
    }
  }
LAB_1473595a2:
  WaitForAsyncTask(this);
  return false;
}

// WaitForAsyncTask @ 14735ef00

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall FAsyncAddPrimitiveQueue::WaitForAsyncTask(FAsyncAddPrimitiveQueue *this)

{
  int *piVar1;
  TTask<void> TVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  FName *pFVar8;
  FThreadSafeStaticStat<_private:_void___cdecl_FAsyncAddPrimitiveQueue::WaitForAsyncTask(void)_::_5_::FStat_STAT_AddPrimitivesTask_Wait>
  FVar9;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar10;
  FNameEntryId FVar11;
  FName FVar12;
  FColor_u_0 local_res8 [2];
  FName local_res10;
  LARGE_INTEGER local_res18;
  FName local_res20;
  FName local_68;
  FName local_60;
  FStatMessage local_50 [2];
  
  if ((this->AsyncTask).Task == (TTask<void>)0x0) {
    return;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_AddPrimitivesTask_Wait ==
        (FThreadSafeStaticStat<_private:_void___cdecl_FAsyncAddPrimitiveQueue::WaitForAsyncTask(void)_::_5_::FStat_STAT_AddPrimitivesTask_Wait>
         )0x0) {
      pFVar8 = ::FName::FName(&local_res20,"STAT_AddPrimitivesTask_Wait");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AddPrimitivesTask_Wait,*pFVar8,
                 L"STAT_AddPrimitivesTask_Wait","STATGROUP_Quick","STATCAT_Advanced",L"Quick",true,
                 true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar9 = StatPtr_STAT_AddPrimitivesTask_Wait;
  if (StatPtr_STAT_AddPrimitivesTask_Wait ==
      (FThreadSafeStaticStat<_private:_void___cdecl_FAsyncAddPrimitiveQueue::WaitForAsyncTask(void)_::_5_::FStat_STAT_AddPrimitivesTask_Wait>
       )0x0) {
    pFVar8 = ::FName::FName(&local_68,"STAT_AddPrimitivesTask_Wait");
    FVar9 = (FThreadSafeStaticStat<_private:_void___cdecl_FAsyncAddPrimitiveQueue::WaitForAsyncTask(void)_::_5_::FStat_STAT_AddPrimitivesTask_Wait>
             )FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AddPrimitivesTask_Wait,*pFVar8,
                         L"STAT_AddPrimitivesTask_Wait","STATGROUP_Quick","STATCAT_Advanced",
                         L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar12 = *(FName *)FVar9;
  bVar4 = false;
  bVar6 = false;
  local_60.ComparisonIndex.Value = 0;
  local_60.Number = 0;
  FVar11 = FVar12.ComparisonIndex.Value;
  uVar10 = FVar12.Number;
  if ((FVar11.Value != 0) || (uVar10 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8[0]._s_0,(char *)*(FName *)((longlong)FVar9 + 0x10));
      bVar4 = false;
      bVar6 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res10.ComparisonIndex.Value = FVar11.Value;
        local_res10.Number = uVar10;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res10,(wchar_t *)*(FName *)((longlong)FVar9 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Internal\\Streaming\\AsyncRegisterLevelContext.cpp"
                   ,0x98);
        bVar4 = true;
        bVar6 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res18.s.LowPart = FVar11.Value;
      local_res18.s.HighPart = uVar10;
      FThreadStats::AddMessage(FVar12,CycleScopeStart);
      bVar5 = true;
      goto LAB_14735f090;
    }
  }
  bVar5 = false;
  FVar12 = local_60;
LAB_14735f090:
  TVar2 = (this->AsyncTask).Task;
  if (TVar2 != (TTask<void>)0x0) {
    UE::Tasks::Private::FTaskBase::Wait((FTaskBase *)TVar2);
  }
  TVar2 = (this->AsyncTask).Task;
  if (((TVar2 != (TTask<void>)0x0) && (*(char *)((longlong)TVar2 + 0xd0) == '\0')) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsCompleted()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Internal\\Streaming\\AsyncRegisterLevelContext.cpp"
                         ,0x161,L""), bVar7)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  FAddPrimitivesTask::Reset(&this->AsyncTask);
  if (bVar6) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((bVar5) && (FVar12 != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_50[0].NameAndInfo.Index = FVar12.ComparisonIndex.Value;
      local_50[0].NameAndInfo.Number = FVar12.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_res18);
      local_50[0].StatData.Pad[4] = '\0';
      local_50[0].StatData.Pad[5] = '\0';
      local_50[0].StatData.Pad[6] = '\0';
      local_50[0].StatData.Pad[7] = '\0';
      local_50[0].StatData.Pad[0] = local_res18.s.LowPart._0_1_;
      local_50[0].StatData.Pad[1] = local_res18.s.LowPart._1_1_;
      local_50[0].StatData.Pad[2] = local_res18.s.LowPart._2_1_;
      local_50[0].StatData.Pad[3] = local_res18.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,local_50);
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

