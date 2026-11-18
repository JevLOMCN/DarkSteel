// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 5

// FAbandonedRenderAssetUpdateManager @ 148776970

FAbandonedRenderAssetUpdateManager * __thiscall
FAbandonedRenderAssetUpdateManager::FAbandonedRenderAssetUpdateManager
          (FAbandonedRenderAssetUpdateManager *this)

{
  TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *this_00;
  FAbandonedRenderAssetUpdateManager local_res8 [2];
  
  (this->AbandonedRenderAssetUpdates).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AbandonedRenderAssetUpdates).ArrayNum = 0;
  (this->AbandonedRenderAssetUpdates).ArrayMax = 0;
  this_00 = FCoreUObjectDelegates::GetPostGarbageCollect();
  TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
  AddRaw<FAbandonedRenderAssetUpdateManager>
            ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
             this_00,local_res8,(pmf_6b7b928a)this);
  return this;
}

// ~FAbandonedRenderAssetUpdateManager @ 14877ea00

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FAbandonedRenderAssetUpdateManager::~FAbandonedRenderAssetUpdateManager
          (FAbandonedRenderAssetUpdateManager *this)

{
  FScriptContainerElement *pFVar1;
  TMulticastDelegateBase<FDefaultDelegateUserPolicy> *this_00;
  
  if ((2 < (byte)LogContentStreaming._0_1_) && ((this->AbandonedRenderAssetUpdates).ArrayNum != 0))
  {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogContentStreaming);
  }
  this_00 = (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
            FCoreUObjectDelegates::GetPostGarbageCollect();
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll(this_00,this);
  DestructItems<TRefCountPtr<FRenderAssetUpdate>,int>
            ((TRefCountPtr<FRenderAssetUpdate> *)
             (this->AbandonedRenderAssetUpdates).AllocatorInstance.Data,
             (this->AbandonedRenderAssetUpdates).ArrayNum);
  pFVar1 = (this->AbandonedRenderAssetUpdates).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// OnAbandoned @ 1487b10d0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FAbandonedRenderAssetUpdateManager::OnAbandoned
          (FAbandonedRenderAssetUpdateManager *this,UStreamableRenderAsset *param_1,
          TRefCountPtr<FRenderAssetUpdate> param_2)

{
  int *piVar1;
  FRenderAssetUpdate *pFVar2;
  FScriptContainerElement *pFVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  FName local_res8;
  FString local_18;
  
  bVar6 = IsInGameThread();
  if (!bVar6) {
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogContentStreaming);
  }
  (**(code **)(*(longlong *)(param_2.Reference)->_padding_ + 0x30))();
  pFVar2 = (FRenderAssetUpdate *)(this->AbandonedRenderAssetUpdates).AllocatorInstance.Data;
  if (((pFVar2 <= param_2.Reference) &&
      (param_2.Reference <
       (FRenderAssetUpdate *)
       ((pFVar2->CS).CriticalSection.Opaque1 +
       (longlong)(this->AbandonedRenderAssetUpdates).ArrayMax + 0xfffffffffffffffd))) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  iVar7 = (this->AbandonedRenderAssetUpdates).ArrayNum;
  piVar1 = &(this->AbandonedRenderAssetUpdates).ArrayMax;
  if (iVar7 == *piVar1) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)this,piVar1);
  }
  (this->AbandonedRenderAssetUpdates).ArrayNum = iVar7 + 1;
  pFVar3 = (this->AbandonedRenderAssetUpdates).AllocatorInstance.Data;
  *(undefined8 *)(pFVar3 + (longlong)iVar7 * 8) = 0;
  lVar4 = (param_2.Reference)->_padding_;
  *(longlong *)(pFVar3 + (longlong)iVar7 * 8) = lVar4;
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 100) = *(int *)(lVar4 + 100) + 1;
    UNLOCK();
  }
  if (4 < (byte)LogContentStreaming._0_1_) {
    local_res8 = (FName)param_1->_padding_;
    ::FName::ToString(&local_res8,&local_18);
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogContentStreaming);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  if ((FRenderAssetUpdate *)(param_2.Reference)->_padding_ != (FRenderAssetUpdate *)0x0) {
    FRenderAssetUpdate::Release((FRenderAssetUpdate *)(param_2.Reference)->_padding_);
  }
  return;
}

// OnPostGarbageCollect @ 1487b1320

void __thiscall
FAbandonedRenderAssetUpdateManager::OnPostGarbageCollect(FAbandonedRenderAssetUpdateManager *this)

{
  bool bVar1;
  
  bVar1 = -1 < CpuChannel->Enabled;
  if (bVar1) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId45,
               "FAbandonedRenderAssetUpdateManager::OnPostGarbageCollect",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\AbandonedRenderAssetUpdateManager.cpp"
               ,0x2d);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId45);
  }
  if (GTickAbandonedRenderAssetUpdatesOnStreamingUpdate == false) {
    TickAbandoned(this);
  }
  if (bVar1) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// TickAbandoned @ 1487c8b70

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FAbandonedRenderAssetUpdateManager::TickAbandoned(FAbandonedRenderAssetUpdateManager *this)

{
  int iVar1;
  ETaskState EVar2;
  FRenderAssetUpdate *this_00;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  EThreadType EVar7;
  uint uVar8;
  bool bVar9;
  
  bVar9 = -1 < CpuChannel->Enabled;
  if (bVar9) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId57,"FAbandonedRenderAssetUpdateManager::TickAbandoned",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\AbandonedRenderAssetUpdateManager.cpp"
               ,0x39);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId57);
  }
  bVar4 = IsInGameThread();
  if (!bVar4) {
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogContentStreaming);
  }
  iVar1 = (this->AbandonedRenderAssetUpdates).ArrayNum;
  for (uVar8 = 0; (-1 < (int)uVar8 && ((int)uVar8 < (this->AbandonedRenderAssetUpdates).ArrayNum));
      uVar8 = uVar8 + 1) {
    if (((int)uVar8 < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    this_00 = *(FRenderAssetUpdate **)
               ((this->AbandonedRenderAssetUpdates).AllocatorInstance.Data +
               (longlong)(int)uVar8 * 8);
    if (this_00 != (FRenderAssetUpdate *)0x0) {
      LOCK();
      (this_00->NumRefs).Counter = (this_00->NumRefs).Counter + 1;
      UNLOCK();
    }
    iVar5 = (**(code **)(this_00->_padding_ + 0x38))(this_00);
    if (iVar5 == 2) {
      EVar7 = TT_GameRunningAsync;
    }
    else {
      EVar7 = (EThreadType)(GIsThreadedRendering == false);
    }
    FRenderAssetUpdate::Tick(this_00,EVar7);
    EVar2 = this_00->TaskState;
    FRenderAssetUpdate::Release(this_00);
    if (EVar2 == TS_Done) {
      uVar6 = 0;
      if ((int)uVar8 < (this->AbandonedRenderAssetUpdates).ArrayNum) {
        uVar6 = ~uVar8 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      TArray<TRefCountPtr<FRenderAssetUpdate>,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl
                (&this->AbandonedRenderAssetUpdates,uVar8);
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,(ForAnyElementType *)this,(this->AbandonedRenderAssetUpdates).ArrayNum,
                 &(this->AbandonedRenderAssetUpdates).ArrayMax);
      uVar8 = uVar8 - 1;
    }
  }
  iVar5 = (this->AbandonedRenderAssetUpdates).ArrayNum;
  if (__CsvProfilerStat68 == false) {
    FCsvProfilerTrace::OutputInlineStat
              ("NumAbandonedRenderAssetUpdatesTotal",_GCsvCategory_TextureStreaming.Index);
    __CsvProfilerStat68 = true;
  }
  FCsvProfiler::RecordCustomStat
            ("NumAbandonedRenderAssetUpdatesTotal",_GCsvCategory_TextureStreaming.Index,iVar1,Set);
  if (__CsvProfilerStat69 == false) {
    FCsvProfilerTrace::OutputInlineStat
              ("NumAbandonedRenderAssetUpdatesCompleted",_GCsvCategory_TextureStreaming.Index);
    __CsvProfilerStat69 = true;
  }
  FCsvProfiler::RecordCustomStat
            ("NumAbandonedRenderAssetUpdatesCompleted",_GCsvCategory_TextureStreaming.Index,
             iVar1 - iVar5,Set);
  if (!bVar9) {
    return;
  }
  FCpuProfilerTrace::OutputEndEvent();
  return;
}

