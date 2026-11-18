// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StateTreeModule
// Functions: 59

// FStateTreeDebugger @ 14d4b1810

FStateTreeDebugger * __thiscall FStateTreeDebugger::FStateTreeDebugger(FStateTreeDebugger *this)

{
  code *pcVar1;
  bool bVar2;
  FName *pFVar3;
  FModuleManager *this_00;
  FStateTreeDebugger *pFVar4;
  IModuleInterface *pIVar5;
  FDelegateHandle FVar6;
  FName local_res8;
  FStateTreeDebugger *local_res10;
  FStateTreeDebugger *local_res18;
  FStateTreeDebugger *local_res20;
  FName local_58;
  <lambda_1> local_50;
  <lambda_2> local_48;
  <lambda_3> local_40;
  FString local_38;
  
  FTickableGameObject::FTickableGameObject((FTickableGameObject *)this,NewObject);
  this->_padding_ = (longlong)&_vftable__for__FTickableGameObject__;
  *(undefined8 *)&this->OnNewSession = 0;
  this->_padding_ = (longlong)&_vftable__for__UE__StateTreeDebugger__ITraceReader__;
  *(undefined8 *)&(this->OnNewSession).field_0x8 = 0;
  *(undefined4 *)&(this->OnNewSession).field_0x10 = 0;
  *(undefined8 *)&this->OnNewInstance = 0;
  *(undefined8 *)&(this->OnNewInstance).field_0x8 = 0;
  *(undefined4 *)&(this->OnNewInstance).field_0x10 = 0;
  *(undefined8 *)&this->OnSelectedInstanceCleared = 0;
  *(undefined8 *)&(this->OnSelectedInstanceCleared).field_0x8 = 0;
  *(undefined4 *)&(this->OnSelectedInstanceCleared).field_0x10 = 0;
  *(undefined8 *)&this->OnScrubStateChanged = 0;
  *(undefined8 *)&(this->OnScrubStateChanged).field_0x8 = 0;
  *(undefined4 *)&(this->OnScrubStateChanged).field_0x10 = 0;
  *(undefined8 *)&this->OnBreakpointHit = 0;
  *(undefined8 *)&(this->OnBreakpointHit).field_0x8 = 0;
  *(undefined4 *)&(this->OnBreakpointHit).field_0x10 = 0;
  *(undefined8 *)&this->OnActiveStatesChanged = 0;
  *(undefined8 *)&(this->OnActiveStatesChanged).field_0x8 = 0;
  *(undefined4 *)&(this->OnActiveStatesChanged).field_0x10 = 0;
  pFVar3 = ::FName::FName(&local_58,"StateTreeModule");
  local_res8 = *pFVar3;
  this_00 = FModuleManager::Get();
  bVar2 = FModuleManager::IsModuleLoaded(this_00,local_res8);
  if (!bVar2) {
    ::FName::ToString(&local_res8,&local_38);
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ModuleManager.IsModuleLoaded(ModuleName)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Modules\\ModuleManager.h"
                       ,0x15a,L"Tried to get module interface for unloaded module: \'%s\'");
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FStateTreeDebugger *)(*pcVar1)();
      return pFVar4;
    }
  }
  pIVar5 = FModuleManager::GetModule(this_00,local_res8);
  (this->StateTreeAsset).WeakPtr = (FWeakObjectPtr)0x0;
  (this->AnalysisSession).Object = (IAnalysisSession *)0x0;
  (this->AnalysisSession).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->ActiveSessionTraceDescriptor).Name.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->ActiveSessionTraceDescriptor).Name.Data.ArrayNum = 0;
  (this->ActiveSessionTraceDescriptor).Name.Data.ArrayMax = 0;
  (this->ActiveSessionTraceDescriptor).TraceId = 0xffffffff;
  (this->ActiveSessionTraceDescriptor).SessionInfo.Platform.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->ActiveSessionTraceDescriptor).SessionInfo.Platform.Data.ArrayNum = 0;
  (this->ActiveSessionTraceDescriptor).SessionInfo.Platform.Data.ArrayMax = 0;
  (this->ActiveSessionTraceDescriptor).SessionInfo.AppName.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->ActiveSessionTraceDescriptor).SessionInfo.AppName.Data.ArrayNum = 0;
  (this->ActiveSessionTraceDescriptor).SessionInfo.AppName.Data.ArrayMax = 0;
  (this->ActiveSessionTraceDescriptor).SessionInfo.ProjectName.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->ActiveSessionTraceDescriptor).SessionInfo.ProjectName.Data.ArrayNum = 0;
  (this->ActiveSessionTraceDescriptor).SessionInfo.ProjectName.Data.ArrayMax = 0;
  (this->ActiveSessionTraceDescriptor).SessionInfo.CommandLine.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->ActiveSessionTraceDescriptor).SessionInfo.CommandLine.Data.ArrayNum = 0;
  (this->ActiveSessionTraceDescriptor).SessionInfo.CommandLine.Data.ArrayMax = 0;
  (this->ActiveSessionTraceDescriptor).SessionInfo.Branch.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->ActiveSessionTraceDescriptor).SessionInfo.Branch.Data.ArrayNum = 0;
  (this->ActiveSessionTraceDescriptor).SessionInfo.Branch.Data.ArrayMax = 0;
  (this->ActiveSessionTraceDescriptor).SessionInfo.BuildVersion.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->ActiveSessionTraceDescriptor).SessionInfo.BuildVersion.Data.ArrayNum = 0;
  (this->ActiveSessionTraceDescriptor).SessionInfo.BuildVersion.Data.ArrayMax = 0;
  (this->ActiveSessionTraceDescriptor).SessionInfo.VFSPaths.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->ActiveSessionTraceDescriptor).SessionInfo.VFSPaths.Data.ArrayNum = 0;
  (this->ActiveSessionTraceDescriptor).SessionInfo.VFSPaths.Data.ArrayMax = 0;
  (this->ActiveSessionTraceDescriptor).SessionInfo.Changelist = 0;
  (this->ActiveSessionTraceDescriptor).SessionInfo.ConfigurationType = Unknown;
  (this->ActiveSessionTraceDescriptor).SessionInfo.TargetType = Unknown;
  (this->ActiveSessionTraceDescriptor).SessionInfo.InstanceId.A = 0;
  (this->ActiveSessionTraceDescriptor).SessionInfo.InstanceId.B = 0;
  (this->ActiveSessionTraceDescriptor).SessionInfo.InstanceId.C = 0;
  (this->ActiveSessionTraceDescriptor).SessionInfo.InstanceId.D = 0;
  (this->EventCollections).Array.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->EventCollections).Array.ArrayNum = 0;
  (this->EventCollections).Array.ArrayMax = 0;
  (this->SelectedInstanceId).Id = 0xffffffff;
  (this->SelectedInstanceId).SerialNumber = 0xffffffff;
  (this->Breakpoints).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Breakpoints).ArrayNum = 0;
  (this->Breakpoints).ArrayMax = 0;
  (this->ActiveStates).PerAssetStates.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ActiveStates).PerAssetStates.ArrayNum = 0;
  (this->ActiveStates).PerAssetStates.ArrayMax = 0;
  (this->ScrubState).EventCollection = (FInstanceEventCollection *)0x0;
  (this->ScrubState).ScrubTime = 0.0;
  (this->ScrubState).TraceFrameIndex = 0xffffffffffffffff;
  (this->ScrubState).FrameSpanIndex = -1;
  (this->ScrubState).ActiveStatesIndex = -1;
  (this->ScrubState).ScrubTimeBoundState = Unset;
  this->StateTreeModule = (IStateTreeModule *)pIVar5;
  this->LastLiveSessionId = -1;
  this->RetryLoadNextLiveSessionTimer = 0.0;
  this->LastProcessedRecordedWorldTime = 0.0;
  this->AnalysisDuration = 0.0;
  this->LastTraceReadTime = 0.0;
  (this->HitBreakpoint).InstanceId = FStateTreeInstanceDebugId::Invalid;
  (this->HitBreakpoint).Time = 0.0;
  (this->HitBreakpoint).Index = -1;
  (this->NewInstances).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NewInstances).ArrayNum = 0;
  (this->NewInstances).ArrayMax = 0;
  this->bSessionAnalysisActive = false;
  this->bSessionAnalysisPaused = false;
  this->AnalysisTransitionType = Unset;
  (this->TracingStateChangedHandle).ID = 0;
  (this->TraceAnalysisStateChangedHandle).ID = 0;
  (this->TracingTimelineScrubbedHandle).ID = 0;
  local_res10 = this;
  FVar6 = TMulticastDelegateRegistration<void___cdecl(enum_EStateTreeTraceStatus),FDefaultDelegateUserPolicy>
          ::AddLambda<_FStateTreeDebugger::FStateTreeDebugger_::__l2::<lambda_1>_>
                    (&UE::StateTree::Delegates::OnTracingStateChanged,&local_50);
                    /* WARNING: Load size is inaccurate */
  (this->TracingStateChangedHandle).ID = *FVar6.ID;
  local_res18 = this;
  FVar6 = TMulticastDelegateRegistration<void___cdecl(enum_EStateTreeTraceAnalysisStatus),FDefaultDelegateUserPolicy>
          ::AddLambda<_FStateTreeDebugger::FStateTreeDebugger_::__l2::<lambda_2>_>
                    (&UE::StateTree::Delegates::OnTraceAnalysisStateChanged,&local_48);
                    /* WARNING: Load size is inaccurate */
  (this->TraceAnalysisStateChangedHandle).ID = *FVar6.ID;
  local_res20 = this;
  FVar6 = TMulticastDelegateRegistration<void___cdecl(double),FDefaultDelegateUserPolicy>::
          AddLambda<_FStateTreeDebugger::FStateTreeDebugger_::__l2::<lambda_3>_>
                    ((TMulticastDelegateRegistration<void___cdecl(double),FDefaultDelegateUserPolicy>
                      *)&UE::StateTree::Delegates::OnTracingTimelineScrubbed,&local_40);
                    /* WARNING: Load size is inaccurate */
  (this->TracingTimelineScrubbedHandle).ID = *FVar6.ID;
  return this;
}

// ~FStateTreeDebugger @ 14d4b3890

void __thiscall FStateTreeDebugger::~FStateTreeDebugger(FStateTreeDebugger *this)

{
  int *piVar1;
  FDelegateHandle FVar2;
  FScriptContainerElement *pFVar3;
  
  FVar2.ID = (this->TracingStateChangedHandle).ID;
  this->_padding_ = (longlong)&_vftable__for__FTickableGameObject__;
  this->_padding_ = (longlong)&_vftable__for__UE__StateTreeDebugger__ITraceReader__;
  if (FVar2.ID != 0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &UE::StateTree::Delegates::OnTracingStateChanged,FVar2);
  }
  FVar2.ID = (this->TraceAnalysisStateChangedHandle).ID;
  if (FVar2.ID != 0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &UE::StateTree::Delegates::OnTraceAnalysisStateChanged,FVar2);
  }
  FVar2.ID = (this->TracingTimelineScrubbedHandle).ID;
  if (FVar2.ID != 0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &UE::StateTree::Delegates::OnTracingTimelineScrubbed,FVar2);
  }
  StopSessionAnalysis(this);
  pFVar3 = (this->NewInstances).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  DestructItems<FStateTreeTraceActiveStates::FAssetActiveStates,int>
            ((FAssetActiveStates *)(this->ActiveStates).PerAssetStates.AllocatorInstance.Data,
             (this->ActiveStates).PerAssetStates.ArrayNum);
  pFVar3 = (this->ActiveStates).PerAssetStates.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->Breakpoints).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  TIndirectArray<UE::StateTreeDebugger::FInstanceEventCollection,TSizedDefaultAllocator<32>_>::
  DestructAndFreeItems(&this->EventCollections);
  piVar1 = &(this->EventCollections).Array.ArrayMax;
  (this->EventCollections).Array.ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,(ForAnyElementType *)&this->EventCollections,0,piVar1);
  }
  pFVar3 = (this->EventCollections).Array.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  TraceServices::FSessionInfo::~FSessionInfo(&(this->ActiveSessionTraceDescriptor).SessionInfo);
  pFVar3 = (this->ActiveSessionTraceDescriptor).Name.Data.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->AnalysisSession).SharedReferenceCount.ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnActiveStatesChanged);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnBreakpointHit);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnScrubStateChanged);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnSelectedInstanceCleared);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnNewInstance);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnNewSession);
  FTickableGameObject::~FTickableGameObject((FTickableGameObject *)this);
  return;
}

// CanStepBackToPreviousStateChange @ 14d4b7940

bool __thiscall FStateTreeDebugger::CanStepBackToPreviousStateChange(FStateTreeDebugger *this)

{
  FInstanceEventCollection *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  
  pFVar1 = (this->ScrubState).EventCollection;
  if (pFVar1 != (FInstanceEventCollection *)0x0) {
    iVar5 = (this->ScrubState).ActiveStatesIndex;
    if (iVar5 != -1) {
      if (((this->ScrubState).ScrubTimeBoundState != AfterHigherBound) ||
         ((pFVar1->ActiveStatesChanges).ArrayNum < 1)) {
        if ((-1 < iVar5) && (iVar5 < (pFVar1->ActiveStatesChanges).ArrayNum)) {
          if ((iVar5 < 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            uVar4 = (*pcVar2)();
            return (bool)uVar4;
          }
          if (*(int *)((pFVar1->ActiveStatesChanges).AllocatorInstance.Data + (longlong)iVar5 * 8) <
              (this->ScrubState).FrameSpanIndex) {
            return true;
          }
        }
        iVar5 = (this->ScrubState).ActiveStatesIndex + -1;
        if (iVar5 < 0) {
          return false;
        }
        if ((pFVar1->ActiveStatesChanges).ArrayNum <= iVar5) {
          return false;
        }
      }
      return true;
    }
  }
  return false;
}

// CanStepBackToPreviousStateWithEvents @ 14d4b7a10

bool __thiscall FStateTreeDebugger::CanStepBackToPreviousStateWithEvents(FStateTreeDebugger *this)

{
  EScrubTimeBoundState EVar1;
  FInstanceEventCollection *pFVar2;
  int iVar3;
  
  pFVar2 = (this->ScrubState).EventCollection;
  if (pFVar2 != (FInstanceEventCollection *)0x0) {
    EVar1 = (this->ScrubState).ScrubTimeBoundState;
    if (EVar1 != InBounds) {
      return EVar1 == AfterHigherBound;
    }
    iVar3 = (this->ScrubState).FrameSpanIndex + -1;
    if ((-1 < iVar3) && (iVar3 < (pFVar2->FrameSpans).ArrayNum)) {
      return true;
    }
  }
  return false;
}

// CanStepForwardToNextStateChange @ 14d4b7a50

bool __thiscall FStateTreeDebugger::CanStepForwardToNextStateChange(FStateTreeDebugger *this)

{
  FInstanceEventCollection *pFVar1;
  int iVar2;
  
  pFVar1 = (this->ScrubState).EventCollection;
  if ((pFVar1 != (FInstanceEventCollection *)0x0) &&
     ((((this->ScrubState).ScrubTimeBoundState == BeforeLowerBound &&
       (0 < (pFVar1->ActiveStatesChanges).ArrayNum)) ||
      ((iVar2 = (this->ScrubState).ActiveStatesIndex, iVar2 != -1 &&
       ((iVar2 = iVar2 + 1, -1 < iVar2 && (iVar2 < (pFVar1->ActiveStatesChanges).ArrayNum)))))))) {
    return true;
  }
  return false;
}

// CanStepForwardToNextStateWithEvents @ 14d4b7a90

bool __thiscall FStateTreeDebugger::CanStepForwardToNextStateWithEvents(FStateTreeDebugger *this)

{
  EScrubTimeBoundState EVar1;
  FInstanceEventCollection *pFVar2;
  int iVar3;
  
  pFVar2 = (this->ScrubState).EventCollection;
  if (pFVar2 != (FInstanceEventCollection *)0x0) {
    EVar1 = (this->ScrubState).ScrubTimeBoundState;
    if (EVar1 != InBounds) {
      return EVar1 == BeforeLowerBound;
    }
    iVar3 = (this->ScrubState).FrameSpanIndex + 1;
    if ((-1 < iVar3) && (iVar3 < (pFVar2->FrameSpans).ArrayNum)) {
      return true;
    }
  }
  return false;
}

// ClearAllBreakpoints @ 14d4b7ad0

void __thiscall FStateTreeDebugger::ClearAllBreakpoints(FStateTreeDebugger *this)

{
  int *piVar1;
  
  piVar1 = &(this->Breakpoints).ArrayMax;
  (this->Breakpoints).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (6,2,0,&(this->Breakpoints).AllocatorInstance,0,piVar1);
  }
  return;
}

// ClearBreakpoint @ 14d4b7b10

void __thiscall
FStateTreeDebugger::ClearBreakpoint
          (FStateTreeDebugger *this,FStateTreeIndex16 param_1,EStateTreeBreakpointType param_2)

{
  int *piVar1;
  TArray<FStateTreeDebuggerBreakpoint,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  uint uVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  FScriptContainerElement *pFVar10;
  
  pTVar2 = &this->Breakpoints;
  pFVar4 = (pTVar2->AllocatorInstance).Data;
  pFVar10 = pFVar4;
  if (pFVar4 != pFVar4 + (longlong)(this->Breakpoints).ArrayNum * 6) {
    while (((pFVar10[2] != (FScriptContainerElement)0x1 || (*(ushort *)pFVar10 != param_1.Value)) ||
           (pFVar10[4] != (FScriptContainerElement)param_2))) {
      pFVar10 = pFVar10 + 6;
      if (pFVar10 == pFVar4 + (longlong)(this->Breakpoints).ArrayNum * 6) {
        return;
      }
    }
    uVar6 = (uint)(((longlong)pFVar10 - (longlong)pFVar4) / 6);
    if (uVar6 != 0xffffffff) {
      uVar8 = 0;
      if ((int)uVar6 < (this->Breakpoints).ArrayNum) {
        uVar8 = ~uVar6 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar3 = (this->Breakpoints).ArrayNum;
      pFVar4 = (pTVar2->AllocatorInstance).Data;
      iVar9 = iVar3 + ~uVar6;
      if (1 < iVar9) {
        iVar9 = 1;
      }
      if (iVar9 != 0) {
        memmove(pFVar4 + (longlong)(int)uVar6 * 6,pFVar4 + (longlong)(iVar3 - iVar9) * 6,
                (longlong)iVar9 * 6);
      }
      piVar1 = &(this->Breakpoints).ArrayNum;
      *piVar1 = *piVar1 + -1;
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (6,2,&pTVar2->AllocatorInstance,(this->Breakpoints).ArrayNum,
                 &(this->Breakpoints).ArrayMax);
    }
  }
  return;
}

// DescribeInstance @ 14d4ba610

FText * __cdecl
FStateTreeDebugger::DescribeInstance(FText *__return_storage_ptr__,FInstanceDescriptor *param_1)

{
  int iVar1;
  bool bVar2;
  UObject *pUVar3;
  int iVar4;
  FName local_res10;
  FString local_48;
  FString local_38;
  FString local_28;
  
  bVar2 = FWeakObjectPtr::IsValid(&(param_1->StateTree).WeakPtr);
  if (bVar2) {
    iVar1 = (param_1->Name).Data.ArrayNum;
    iVar4 = iVar1 + -1;
    if (iVar1 == 0) {
      iVar4 = 0;
    }
    if (((iVar4 != 0) && ((param_1->Id).Id != 0xffffffff)) &&
       ((param_1->Id).SerialNumber != 0xffffffff)) {
      ::FString::PrintfImpl(&local_38,L"0x%llx");
      pUVar3 = FWeakObjectPtr::Get(&(param_1->StateTree).WeakPtr);
      if (pUVar3 == (UObject *)0x0) {
        ::FString::FString(&local_48,L"None");
      }
      else {
        local_res10.ComparisonIndex.Value = *(uint *)&pUVar3->field_0x18;
        local_res10.Number = *(uint *)&pUVar3->field_0x1c;
        ::FName::ToString(&local_res10,&local_48);
      }
      ::FString::PrintfImpl(&local_28,L"%s | %s | %s");
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
      FText::FromString(__return_storage_ptr__,&local_28);
      if (local_28.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
        return __return_storage_ptr__;
      }
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
      return __return_storage_ptr__;
    }
  }
  FText::AsLocalizable_Advanced_LocText
            (__return_storage_ptr__,L"StateTreeDebugger",L"NoSelectedInstanceDescriptor",
             L"No instance selected");
  return __return_storage_ptr__;
}

// DescribeTrace @ 14d4ba7a0

FText * __cdecl
FStateTreeDebugger::DescribeTrace(FText *__return_storage_ptr__,FTraceDescriptor *param_1)

{
  FString local_38;
  FString local_28;
  
  if (param_1->TraceId == 0xffffffff) {
    FText::AsLocalizable_Advanced_LocText
              (__return_storage_ptr__,L"StateTreeDebugger",L"InvalidTraceDescriptor",L"Invalid");
  }
  else {
    ::LexToString((param_1->SessionInfo).TargetType);
    ::LexToString((param_1->SessionInfo).ConfigurationType);
    ::FString::PrintfImpl(&local_38,L"%u");
    ::FString::PrintfImpl(&local_28,L"%s-%s-%s-%s-%s");
    FText::FromString(__return_storage_ptr__,&local_28);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
      return __return_storage_ptr__;
    }
  }
  return __return_storage_ptr__;
}

// EvaluateBreakpoints @ 14d4bb850

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
FStateTreeDebugger::EvaluateBreakpoints
          (FStateTreeDebugger *this,FStateTreeInstanceDebugId param_1,
          TVariant<FStateTreeTracePhaseEvent,FStateTreeTraceLogEvent,FStateTreeTracePropertyEvent,FStateTreeTraceNodeEvent,FStateTreeTraceStateEvent,FStateTreeTraceTaskEvent,FStateTreeTraceEvaluatorEvent,FStateTreeTraceTransitionEvent,FStateTreeTraceConditionEvent,FStateTreeTraceActiveStatesEvent,FStateTreeTraceInstanceFrameEvent>
          *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  short *psVar6;
  uint uVar7;
  short *psVar8;
  short *psVar9;
  ulonglong uVar10;
  FScriptContainerElement *pFVar11;
  uint uStackX_14;
  undefined1 auStack_88 [32];
  longlong local_68;
  longlong local_60;
  FScriptContainerElement local_58 [8];
  FScriptContainerElement *local_50;
  short local_48;
  FScriptContainerElement local_46;
  FScriptContainerElement local_44;
  FScriptContainerElement local_43;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_88;
  bVar3 = TWeakObjectPtr<UStateTree_const_,FWeakObjectPtr>::UEOpEquals
                    (&this->StateTreeAsset,(void *)0x0);
  if ((((bVar3) || ((this->HitBreakpoint).Index != -1)) ||
      (iVar1 = (this->Breakpoints).ArrayNum, iVar1 == 0)) ||
     (((uVar5 = (this->SelectedInstanceId).Id, uVar5 != 0xffffffff &&
       ((this->SelectedInstanceId).SerialNumber != 0xffffffff)) &&
      ((param_1.Id != uVar5 ||
       (uStackX_14 = param_1.SerialNumber, uStackX_14 != (this->SelectedInstanceId).SerialNumber))))
     )) {
    bVar3 = false;
  }
  else {
    psVar9 = (short *)0x0;
    psVar6 = psVar9;
    psVar8 = psVar9;
    if (0 < iVar1) {
      do {
        iVar1 = (this->Breakpoints).ArrayNum;
        uVar7 = (uint)psVar6;
        uVar5 = 0;
        if ((int)uVar7 < iVar1) {
          uVar5 = ~uVar7 >> 0x1f;
        }
        if (uVar5 == 0) {
          local_68 = (longlong)(int)uVar7;
          local_60 = (longlong)iVar1;
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar3) {
            pcVar2 = (code *)swi(3);
            uVar4 = (*pcVar2)();
            return (bool)uVar4;
          }
        }
        pFVar11 = (this->Breakpoints).AllocatorInstance.Data + (longlong)psVar8;
        local_46 = pFVar11[2];
        uVar10 = (ulonglong)(byte)local_46;
        if ((2 < (byte)local_46) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("TypeIndex < (sizeof(UEArrayCountHelper(CopyConstructors)) - 1)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                               ,0xec,L""), bVar3)) {
          pcVar2 = (code *)swi(3);
          uVar4 = (*pcVar2)();
          return (bool)uVar4;
        }
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TCopyConstructorLookup<FStateTreeStateHandle,FStateTreeDebuggerBreakpoint::FStateTreeTaskIndex,FStateTreeDebuggerBreakpoint::FStateTreeTransitionIndex>::Construct(unsigned___int64,void*___ptr64,void_const*___ptr64)'
                    ::__l2::CopyConstructors)[uVar10])(&local_48,pFVar11);
        local_44 = pFVar11[4];
        local_43 = pFVar11[5];
        local_50 = local_58;
        local_58[0] = (FScriptContainerElement)0x0;
        (*(code *)(&
                  PTR_VisitApplyEncoded<0,0,_FStateTreeDebuggerBreakpoint::IsMatchingEvent_::__l2::<lambda_1>,TVariant<FStateTreeTracePhaseEvent,FStateTreeTraceLogEvent,FStateTreeTracePropertyEvent,FStateTreeTraceNodeEvent,FStateTreeTraceStateEvent,FStateTreeTraceTaskEvent,FStateTreeTraceEvaluatorEvent,FStateTreeTraceTransitionEvent,FStateTreeTraceConditionEvent,FStateTreeTraceActiveStatesEvent,FStateTreeTraceInstanceFrameEvent>_const_&>_152b2d430
                  )[param_2->TypeIndex])(&local_50,param_2);
        if (local_43 == local_58[0]) {
          psVar6 = &local_48;
          if (local_46 != (FScriptContainerElement)0x0) {
            psVar6 = psVar9;
          }
          if (psVar6 == (short *)0x0) {
            psVar6 = &local_48;
            if (local_46 != (FScriptContainerElement)0x1) {
              psVar6 = psVar9;
            }
            if (psVar6 != (short *)0x0) {
              bVar3 = param_2->TypeIndex == '\x05';
              goto LAB_14d4bba07;
            }
            psVar6 = &local_48;
            if (local_46 != (FScriptContainerElement)0x2) {
              psVar6 = psVar9;
            }
            if (((psVar6 == (short *)0x0) || (param_2->TypeIndex != '\a')) ||
               (*(short *)((longlong)&param_2->_padding_ + 2) != *psVar6)) goto LAB_14d4bba66;
          }
          else {
            bVar3 = param_2->TypeIndex == '\x04';
LAB_14d4bba07:
            if ((!bVar3) || ((short)param_2->_padding_ != *psVar6)) goto LAB_14d4bba66;
          }
          (this->HitBreakpoint).Time = this->LastProcessedRecordedWorldTime;
          (this->HitBreakpoint).Index = uVar7;
          (this->HitBreakpoint).InstanceId = param_1;
        }
LAB_14d4bba66:
        psVar6 = (short *)(ulonglong)(uVar7 + 1);
        psVar8 = psVar8 + 3;
      } while ((int)(uVar7 + 1) < (this->Breakpoints).ArrayNum);
    }
    bVar3 = (this->HitBreakpoint).Index != -1;
  }
  return bVar3;
}

// GetAnalysisSession @ 14d4bd3b0

IAnalysisSession * __thiscall FStateTreeDebugger::GetAnalysisSession(FStateTreeDebugger *this)

{
  return (this->AnalysisSession).Object;
}

// GetDescriptor @ 14d4bd5f0

TSharedPtr<UE::StateTreeDebugger::FInstanceDescriptor_const_,1> * __thiscall
FStateTreeDebugger::GetDescriptor
          (FStateTreeDebugger *this,
          TSharedPtr<UE::StateTreeDebugger::FInstanceDescriptor_const_,1> *__return_storage_ptr__,
          FStateTreeInstanceDebugId param_1)

{
  IAnalysisSession *pIVar1;
  longlong *plVar2;
  
  pIVar1 = (this->AnalysisSession).Object;
  if (pIVar1 != (IAnalysisSession *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x88))(pIVar1);
    plVar2 = (longlong *)
             (**(code **)((longlong)*pIVar1 + 0xf8))(pIVar1,&FStateTreeTraceProvider::ProviderName);
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x20))(plVar2,__return_storage_ptr__,param_1);
      (**(code **)((longlong)*pIVar1 + 0x90))(pIVar1);
      return __return_storage_ptr__;
    }
    (**(code **)((longlong)*pIVar1 + 0x90))(pIVar1);
  }
  __return_storage_ptr__->Object = (FInstanceDescriptor *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// GetEventCollection @ 14d4bd730

FInstanceEventCollection * __thiscall
FStateTreeDebugger::GetEventCollection(FStateTreeDebugger *this,FStateTreeInstanceDebugId param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  FInstanceEventCollection *pFVar4;
  uint uVar5;
  FScriptContainerElement *pFVar6;
  undefined1 local_res8 [8];
  FStateTreeInstanceDebugId local_res10;
  
  pFVar6 = (this->EventCollections).Array.AllocatorInstance.Data;
  local_res10.SerialNumber = param_1.SerialNumber;
  uVar5 = local_res10.SerialNumber;
  piVar1 = &(this->EventCollections).Array.ArrayNum;
  iVar3 = *piVar1;
  pFVar2 = pFVar6 + (longlong)iVar3 * 8;
  local_res10 = param_1;
  while( true ) {
    if (*piVar1 != iVar3) {
      `TCheckedPointerIterator<void_*_const,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar6 == pFVar2) break;
    pFVar4 = *(FInstanceEventCollection **)pFVar6;
    if (((pFVar4->InstanceId).Id == param_1.Id) && ((pFVar4->InstanceId).SerialNumber == uVar5)) {
      return pFVar4;
    }
    pFVar6 = pFVar6 + 8;
  }
  return &UE::StateTreeDebugger::FInstanceEventCollection::Invalid;
}

// GetInstanceDescription @ 14d4bdc50

FText * __thiscall
FStateTreeDebugger::GetInstanceDescription
          (FStateTreeDebugger *this,FText *__return_storage_ptr__,FStateTreeInstanceDebugId param_1)

{
  IAnalysisSession *pIVar1;
  longlong lVar2;
  bool bVar3;
  longlong *plVar4;
  UObject *pUVar5;
  FText *pFVar6;
  int iVar7;
  FName local_res8;
  FString local_78;
  FString local_68;
  FText local_58;
  longlong local_48;
  TReferenceControllerBase<1> *pTStack_40;
  FString local_38;
  FText local_28;
  
  pIVar1 = (this->AnalysisSession).Object;
  if (pIVar1 == (IAnalysisSession *)0x0) {
LAB_14d4bde32:
    local_48 = 0;
    pTStack_40 = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    (**(code **)((longlong)*pIVar1 + 0x88))(pIVar1);
    plVar4 = (longlong *)
             (**(code **)((longlong)*pIVar1 + 0xf8))(pIVar1,&FStateTreeTraceProvider::ProviderName);
    if (plVar4 == (longlong *)0x0) {
      (**(code **)((longlong)*pIVar1 + 0x90))(pIVar1);
      goto LAB_14d4bde32;
    }
    (**(code **)(*plVar4 + 0x20))(plVar4,&local_48,param_1);
    (**(code **)((longlong)*pIVar1 + 0x90))(pIVar1);
    lVar2 = local_48;
    if (local_48 != 0) {
      bVar3 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)(local_48 + 0x30));
      if (bVar3) {
        iVar7 = *(int *)(lVar2 + 0x40) + -1;
        if (*(int *)(lVar2 + 0x40) == 0) {
          iVar7 = 0;
        }
        if (((iVar7 == 0) || (*(int *)(lVar2 + 0x48) == -1)) || (*(int *)(lVar2 + 0x4c) == -1))
        goto LAB_14d4bddf6;
        ::FString::PrintfImpl(&local_68,L"0x%llx");
        pUVar5 = FWeakObjectPtr::Get((FWeakObjectPtr *)(lVar2 + 0x30));
        if (pUVar5 == (UObject *)0x0) {
          ::FString::FString(&local_78,L"None");
        }
        else {
          local_res8.ComparisonIndex.Value = *(uint *)&pUVar5->field_0x18;
          local_res8.Number = *(uint *)&pUVar5->field_0x1c;
          ::FName::ToString(&local_res8,&local_78);
        }
        ::FString::PrintfImpl(&local_38,L"%s | %s | %s");
        if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_78.Data.AllocatorInstance.Data);
        }
        if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_68.Data.AllocatorInstance.Data);
        }
        FText::FromString(&local_58,&local_38);
        if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.Data.AllocatorInstance.Data);
        }
      }
      else {
LAB_14d4bddf6:
        FText::AsLocalizable_Advanced_LocText
                  (&local_58,L"StateTreeDebugger",L"NoSelectedInstanceDescriptor",
                   L"No instance selected");
      }
      FText::FText(__return_storage_ptr__,&local_58);
      goto LAB_14d4bde67;
    }
  }
  pFVar6 = FText::AsLocalizable_Advanced_LocText
                     (&local_28,L"StateTreeDebugger",L"InstanceNotFound",L"Instance not found");
  FText::FText(__return_storage_ptr__,pFVar6);
  local_58.TextData.Reference = local_28.TextData.Reference;
LAB_14d4bde67:
  if (local_58.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_58.TextData.Reference + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_40);
  return __return_storage_ptr__;
}

// GetInstanceName @ 14d4bdf20

FText * __thiscall
FStateTreeDebugger::GetInstanceName
          (FStateTreeDebugger *this,FText *__return_storage_ptr__,FStateTreeInstanceDebugId param_1)

{
  IAnalysisSession *pIVar1;
  longlong *plVar2;
  FText *pFVar3;
  longlong local_38;
  TReferenceControllerBase<1> *pTStack_30;
  FText local_28;
  FText local_18;
  
  pIVar1 = (this->AnalysisSession).Object;
  if (pIVar1 == (IAnalysisSession *)0x0) {
LAB_14d4bdfbc:
    local_38 = 0;
    pTStack_30 = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    (**(code **)((longlong)*pIVar1 + 0x88))(pIVar1);
    plVar2 = (longlong *)
             (**(code **)((longlong)*pIVar1 + 0xf8))(pIVar1,&FStateTreeTraceProvider::ProviderName);
    if (plVar2 == (longlong *)0x0) {
      (**(code **)((longlong)*pIVar1 + 0x90))(pIVar1);
      goto LAB_14d4bdfbc;
    }
    (**(code **)(*plVar2 + 0x20))(plVar2,&local_38,param_1);
    (**(code **)((longlong)*pIVar1 + 0x90))(pIVar1);
    if (local_38 != 0) {
      pFVar3 = FText::FromString(&local_28,(FString *)(local_38 + 0x38));
      FText::FText(__return_storage_ptr__,pFVar3);
      goto LAB_14d4bdff4;
    }
  }
  pFVar3 = FText::AsLocalizable_Advanced_LocText
                     (&local_18,L"StateTreeDebugger",L"InstanceNotFound",L"Instance not found");
  FText::FText(__return_storage_ptr__,pFVar3);
  local_28.TextData.Reference = local_18.TextData.Reference;
LAB_14d4bdff4:
  if (local_28.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_30);
  return __return_storage_ptr__;
}

// GetLiveTraces @ 14d4be210

void __thiscall
FStateTreeDebugger::GetLiveTraces
          (FStateTreeDebugger *this,
          TArray<FStateTreeDebugger::FTraceDescriptor,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  FStoreClient *this_00;
  FSessionInfo *this_01;
  FTraceInfo *this_02;
  TStringView<char8_t> *pTVar6;
  FString *pFVar7;
  FTraceDescriptor *pFVar8;
  FScriptContainerElement *pFVar9;
  FScriptContainerElement *pFVar10;
  int local_res18;
  FString local_68;
  undefined1 local_58 [32];
  
  this_00 = (FStoreClient *)(**(code **)((longlong)*this->StateTreeModule + 0x58))();
  if (this_00 != (FStoreClient *)0x0) {
    pFVar8 = (FTraceDescriptor *)(param_1->AllocatorInstance).Data;
    piVar1 = &param_1->ArrayMax;
    if (param_1->ArrayMax < 0) {
      DestructItems<FStateTreeDebugger::FTraceDescriptor,int>(pFVar8,param_1->ArrayNum);
      param_1->ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xa0,8,0,&param_1->AllocatorInstance,0,piVar1);
      }
    }
    else {
      DestructItems<FStateTreeDebugger::FTraceDescriptor,int>(pFVar8,param_1->ArrayNum);
      param_1->ArrayNum = 0;
    }
    uVar3 = UE::Trace::FStoreClient::GetSessionCount(this_00);
    pFVar9 = (FScriptContainerElement *)0x0;
    if (uVar3 != 0) {
      do {
        this_01 = UE::Trace::FStoreClient::GetSessionInfo(this_00,(uint)pFVar9);
        if (this_01 != (FSessionInfo *)0x0) {
          uVar4 = UE::Trace::FStoreClient::FSessionInfo::GetTraceId(this_01);
          this_02 = UE::Trace::FStoreClient::GetTraceInfoById(this_00,uVar4);
          if (this_02 != (FTraceInfo *)0x0) {
            iVar5 = param_1->ArrayNum;
            if (iVar5 == *piVar1) {
              iVar5 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x8a0,&param_1->AllocatorInstance,piVar1);
            }
            param_1->ArrayNum = iVar5 + 1;
            pFVar8 = (FTraceDescriptor *)
                     ((param_1->AllocatorInstance).Data + (longlong)iVar5 * 0xa0);
            DefaultConstructItems<FStateTreeDebugger::FTraceDescriptor,int>(pFVar8,1);
            pFVar8->TraceId = uVar4;
            pTVar6 = UE::Trace::FStoreClient::FTraceInfo::GetName
                               (this_02,(TStringView<char8_t> *)(local_58 + 0x10));
            pFVar7 = ::FString::ConstructFromPtrSize
                               (&local_68,pTVar6->DataPtr,(int)*(undefined8 *)&pTVar6->Size);
            local_res18 = 0;
            pFVar10 = (FScriptContainerElement *)0x0;
            iVar5 = 0;
            if ((FString *)local_58 != pFVar7) {
              pFVar10 = (pFVar7->Data).AllocatorInstance.Data;
              (pFVar7->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              local_res18 = (pFVar7->Data).ArrayMax;
              iVar5 = (pFVar7->Data).ArrayNum;
              (pFVar7->Data).ArrayNum = 0;
              (pFVar7->Data).ArrayMax = 0;
            }
            if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_68.Data.AllocatorInstance.Data);
            }
            if (pFVar8 == (FTraceDescriptor *)local_58) {
              if (pFVar10 != (FScriptContainerElement *)0x0) {
                FMemory::Free(pFVar10);
              }
            }
            else {
              pFVar2 = (pFVar8->Name).Data.AllocatorInstance.Data;
              if (pFVar2 != (FScriptContainerElement *)0x0) {
                FMemory::Free(pFVar2);
              }
              (pFVar8->Name).Data.AllocatorInstance.Data = pFVar10;
              (pFVar8->Name).Data.ArrayNum = iVar5;
              (pFVar8->Name).Data.ArrayMax = local_res18;
            }
            UpdateMetadata(this,pFVar8);
          }
        }
        uVar4 = (uint)pFVar9 + 1;
        pFVar9 = (FScriptContainerElement *)(ulonglong)uVar4;
      } while (uVar4 < uVar3);
    }
  }
  return;
}

// GetMutableEventCollection @ 14d4be550

FInstanceEventCollection * __thiscall
FStateTreeDebugger::GetMutableEventCollection
          (FStateTreeDebugger *this,FStateTreeInstanceDebugId param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  FInstanceEventCollection *pFVar4;
  uint uVar5;
  FScriptContainerElement *pFVar6;
  undefined1 local_res8 [8];
  FStateTreeInstanceDebugId local_res10;
  
  pFVar6 = (this->EventCollections).Array.AllocatorInstance.Data;
  local_res10.SerialNumber = param_1.SerialNumber;
  uVar5 = local_res10.SerialNumber;
  piVar1 = &(this->EventCollections).Array.ArrayNum;
  iVar3 = *piVar1;
  pFVar2 = pFVar6 + (longlong)iVar3 * 8;
  local_res10 = param_1;
  while( true ) {
    if (*piVar1 != iVar3) {
      `TCheckedPointerIterator<void_*,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar6 == pFVar2) break;
    pFVar4 = *(FInstanceEventCollection **)pFVar6;
    if (((pFVar4->InstanceId).Id == param_1.Id) && ((pFVar4->InstanceId).SerialNumber == uVar5)) {
      return pFVar4;
    }
    pFVar6 = pFVar6 + 8;
  }
  return (FInstanceEventCollection *)0x0;
}

// GetOrCreateEventCollection @ 14d4beb40

FInstanceEventCollection * __thiscall
FStateTreeDebugger::GetOrCreateEventCollection
          (FStateTreeDebugger *this,FStateTreeInstanceDebugId param_1)

{
  int *piVar1;
  int *piVar2;
  uint *puVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FInstanceEventCollection *pFVar7;
  FInstanceEventCollection *pFVar8;
  FStateTreeInstanceDebugId local_res10;
  FInstanceEventCollection *local_28 [2];
  
  local_res10 = param_1;
  pFVar7 = GetMutableEventCollection
                     ((FStateTreeDebugger *)&this[-1].TracingTimelineScrubbedHandle,param_1);
  if (pFVar7 == (FInstanceEventCollection *)0x0) {
    piVar2 = &(this->HitBreakpoint).Index;
    if (((*(FStateTreeInstanceDebugId **)piVar2 <= &local_res10) &&
        (&local_res10 <
         *(FStateTreeInstanceDebugId **)piVar2 +
         *(int *)((longlong)&(this->NewInstances).AllocatorInstance.Data + 4))) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) {
      pcVar4 = (code *)swi(3);
      pFVar7 = (FInstanceEventCollection *)(*pcVar4)();
      return pFVar7;
    }
    iVar6 = *(int *)&(this->NewInstances).AllocatorInstance.Data;
    piVar1 = (int *)((longlong)&(this->NewInstances).AllocatorInstance.Data + 4);
    if (iVar6 == *piVar1) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x408,(ForAnyElementType *)piVar2,piVar1);
    }
    *(int *)&(this->NewInstances).AllocatorInstance.Data = iVar6 + 1;
    *(FStateTreeInstanceDebugId *)(*(longlong *)piVar2 + (longlong)iVar6 * 8) = local_res10;
    pFVar7 = ::operator_new(0x48);
    if (pFVar7 != (FInstanceEventCollection *)0x0) {
      pFVar7->InstanceId = local_res10;
      (pFVar7->Events).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pFVar7->Events).ArrayNum = 0;
      (pFVar7->Events).ArrayMax = 0;
      (pFVar7->FrameSpans).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pFVar7->FrameSpans).ArrayNum = 0;
      (pFVar7->FrameSpans).ArrayMax = 0;
      (pFVar7->ContiguousTracesData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pFVar7->ContiguousTracesData).ArrayNum = 0;
      (pFVar7->ContiguousTracesData).ArrayMax = 0;
      (pFVar7->ActiveStatesChanges).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pFVar7->ActiveStatesChanges).ArrayNum = 0;
      (pFVar7->ActiveStatesChanges).ArrayMax = 0;
    }
    puVar3 = &(this->ActiveSessionTraceDescriptor).SessionInfo.InstanceId.C;
    local_28[0] = pFVar7;
    if (((*(FInstanceEventCollection ***)puVar3 <= local_28) &&
        (local_28 <
         *(FInstanceEventCollection ***)puVar3 +
         *(int *)((longlong)&(this->EventCollections).Array.AllocatorInstance.Data + 4))) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) {
      pcVar4 = (code *)swi(3);
      pFVar7 = (FInstanceEventCollection *)(*pcVar4)();
      return pFVar7;
    }
    iVar6 = *(int *)&(this->EventCollections).Array.AllocatorInstance.Data;
    piVar2 = (int *)((longlong)&(this->EventCollections).Array.AllocatorInstance.Data + 4);
    if (iVar6 == *piVar2) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,(ForAnyElementType *)puVar3,piVar2);
    }
    *(int *)&(this->EventCollections).Array.AllocatorInstance.Data = iVar6 + 1;
    *(FInstanceEventCollection **)(*(longlong *)puVar3 + (longlong)iVar6 * 8) = local_28[0];
    if (((this->EventCollections).Array.ArrayNum == local_res10.Id) &&
       ((this->EventCollections).Array.ArrayMax == local_res10.SerialNumber)) {
      pFVar8 = &UE::StateTreeDebugger::FInstanceEventCollection::Invalid;
      if ((FInstanceEventCollection *)this->LastTraceReadTime != (FInstanceEventCollection *)0x0) {
        pFVar8 = (FInstanceEventCollection *)this->LastTraceReadTime;
      }
      if (((pFVar8->InstanceId).Id == 0xffffffff) ||
         ((pFVar8->InstanceId).SerialNumber == 0xffffffff)) {
        SetScrubStateCollection
                  ((FStateTreeDebugger *)&this[-1].TracingTimelineScrubbedHandle,pFVar7);
      }
    }
  }
  return pFVar7;
}

// GetSelectedTraceDescription @ 14d4bf530

FText * __thiscall
FStateTreeDebugger::GetSelectedTraceDescription
          (FStateTreeDebugger *this,FText *__return_storage_ptr__)

{
  FString local_38;
  FString local_28;
  
  if ((this->ActiveSessionTraceDescriptor).TraceId == 0xffffffff) {
    FText::AsLocalizable_Advanced_LocText
              (__return_storage_ptr__,L"StateTreeDebugger",L"NoSelectedTraceDescriptor",
               L"No trace selected");
  }
  else {
    ::LexToString((this->ActiveSessionTraceDescriptor).SessionInfo.TargetType);
    ::LexToString((this->ActiveSessionTraceDescriptor).SessionInfo.ConfigurationType);
    ::FString::PrintfImpl(&local_38,L"%u");
    ::FString::PrintfImpl(&local_28,L"%s-%s-%s-%s-%s");
    FText::FromString(__return_storage_ptr__,&local_28);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
      return __return_storage_ptr__;
    }
  }
  return __return_storage_ptr__;
}

// GetSessionInstanceDescriptors @ 14d4bf680

void __thiscall
FStateTreeDebugger::GetSessionInstanceDescriptors
          (FStateTreeDebugger *this,
          TArray<TSharedRef<UE::StateTreeDebugger::FInstanceDescriptor_const_,1>_const_,TSizedDefaultAllocator<32>_>
          *param_1)

{
  IAnalysisSession *pIVar1;
  longlong *plVar2;
  
  pIVar1 = (this->AnalysisSession).Object;
  if (pIVar1 != (IAnalysisSession *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x88))(pIVar1);
    plVar2 = (longlong *)
             (**(code **)((longlong)*pIVar1 + 0xf8))(pIVar1,&FStateTreeTraceProvider::ProviderName);
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x30))(plVar2,param_1);
    }
    (**(code **)((longlong)*pIVar1 + 0x90))(pIVar1);
  }
  return;
}

// GetSessionInstances @ 14d4bf6f0

void __thiscall
FStateTreeDebugger::GetSessionInstances
          (FStateTreeDebugger *this,
          TArray<UE::StateTreeDebugger::FInstanceDescriptor,TSizedDefaultAllocator<32>_> *param_1)

{
  IAnalysisSession *pIVar1;
  
  pIVar1 = (this->AnalysisSession).Object;
  if (pIVar1 != (IAnalysisSession *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x88))(pIVar1);
    (**(code **)((longlong)*pIVar1 + 0xf8))(pIVar1,&FStateTreeTraceProvider::ProviderName);
                    /* WARNING: Could not recover jumptable at 0x00014d4bf72c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*pIVar1 + 0x90))(pIVar1);
    return;
  }
  return;
}

// GetStatId @ 14d4bfbe0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

TStatId __thiscall FStateTreeDebugger::GetStatId(FStateTreeDebugger *this)

{
  FName *pFVar1;
  TAtomic<FMinimalName> TVar2;
  TStatIdData *in_RDX;
  FName local_res10;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `protected:_virtual_struct_TStatId___cdecl_FStateTreeDebugger::GetStatId(void)const___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`protected:_virtual_struct_TStatId___cdecl_FStateTreeDebugger::GetStatId(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `protected:_virtual_struct_TStatId___cdecl_FStateTreeDebugger::GetStatId(void)const___ptr64'::
     __l2::_thread_safe_static_guard_0__ == -1)) {
    _StatPtr_FStateTreeDebugger = (TAtomic<FMinimalName>)0x0;
    pFVar1 = ::FName::FName(&local_res10,"FStateTreeDebugger");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &`protected:_virtual_struct_TStatId___cdecl_FStateTreeDebugger::GetStatId(void)const___ptr64'
                ::__l2::StatPtr_FStateTreeDebugger,*pFVar1,L"FStateTreeDebugger",
               "STATGROUP_Tickables","STATCAT_Advanced",L"Tickables",true,true,ST_int64,true,false,
               MCR_Invalid);
    _Init_thread_footer(&`protected:_virtual_struct_TStatId___cdecl_FStateTreeDebugger::GetStatId(void)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  TVar2 = _StatPtr_FStateTreeDebugger;
  if (_StatPtr_FStateTreeDebugger == (TAtomic<FMinimalName>)0x0) {
    pFVar1 = ::FName::FName(&local_res10,"FStateTreeDebugger");
    TVar2 = (TAtomic<FMinimalName>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)
                       &`protected:_virtual_struct_TStatId___cdecl_FStateTreeDebugger::GetStatId(void)const___ptr64'
                        ::__l2::StatPtr_FStateTreeDebugger,*pFVar1,L"FStateTreeDebugger",
                       "STATGROUP_Tickables","STATCAT_Advanced",L"Tickables",true,true,ST_int64,true
                       ,false,MCR_Invalid);
  }
  in_RDX->Name = TVar2;
  return (TStatId)in_RDX;
}

// GetStoreClient @ 14d4c0140

FStoreClient * __thiscall FStateTreeDebugger::GetStoreClient(FStateTreeDebugger *this)

{
  FStoreClient *pFVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014d4c014a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pFVar1 = (FStoreClient *)(**(code **)((longlong)*this->StateTreeModule + 0x58))();
  return pFVar1;
}

// HasStateBreakpoint @ 14d4c2680

bool __thiscall
FStateTreeDebugger::HasStateBreakpoint
          (FStateTreeDebugger *this,FStateTreeStateHandle param_1,EStateTreeBreakpointType param_2)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  
  pFVar2 = (this->Breakpoints).AllocatorInstance.Data;
  pFVar1 = pFVar2 + (longlong)(this->Breakpoints).ArrayNum * 6;
  for (; pFVar2 != pFVar1; pFVar2 = pFVar2 + 6) {
    if (((pFVar2[4] == (FScriptContainerElement)param_2) &&
        (pFVar2[2] == (FScriptContainerElement)0x0)) && (*(ushort *)pFVar2 == param_1.Index))
    goto LAB_14d4c26bc;
  }
  pFVar2 = (FScriptContainerElement *)0x0;
LAB_14d4c26bc:
  return pFVar2 != (FScriptContainerElement *)0x0;
}

// HasTaskBreakpoint @ 14d4c26d0

bool __thiscall
FStateTreeDebugger::HasTaskBreakpoint
          (FStateTreeDebugger *this,FStateTreeIndex16 param_1,EStateTreeBreakpointType param_2)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  
  pFVar2 = (this->Breakpoints).AllocatorInstance.Data;
  pFVar1 = pFVar2 + (longlong)(this->Breakpoints).ArrayNum * 6;
  for (; pFVar2 != pFVar1; pFVar2 = pFVar2 + 6) {
    if (((pFVar2[4] == (FScriptContainerElement)param_2) &&
        (pFVar2[2] == (FScriptContainerElement)0x1)) && (*(ushort *)pFVar2 == param_1.Value))
    goto LAB_14d4c270c;
  }
  pFVar2 = (FScriptContainerElement *)0x0;
LAB_14d4c270c:
  return pFVar2 != (FScriptContainerElement *)0x0;
}

// HasTransitionBreakpoint @ 14d4c2720

bool __thiscall
FStateTreeDebugger::HasTransitionBreakpoint
          (FStateTreeDebugger *this,FStateTreeIndex16 param_1,EStateTreeBreakpointType param_2)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  
  pFVar2 = (this->Breakpoints).AllocatorInstance.Data;
  pFVar1 = pFVar2 + (longlong)(this->Breakpoints).ArrayNum * 6;
  for (; pFVar2 != pFVar1; pFVar2 = pFVar2 + 6) {
    if (((pFVar2[4] == (FScriptContainerElement)param_2) &&
        (pFVar2[2] == (FScriptContainerElement)0x2)) && (*(ushort *)pFVar2 == param_1.Value))
    goto LAB_14d4c275c;
  }
  pFVar2 = (FScriptContainerElement *)0x0;
LAB_14d4c275c:
  return pFVar2 != (FScriptContainerElement *)0x0;
}

// IsActiveInstance @ 14d4c3d30

bool __thiscall
FStateTreeDebugger::IsActiveInstance
          (FStateTreeDebugger *this,double param_1,FStateTreeInstanceDebugId param_2)

{
  double dVar1;
  char cVar2;
  IAnalysisSession *pIVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  longlong *plVar7;
  undefined1 *puVar8;
  longlong local_48;
  TReferenceControllerBase<1> *local_40;
  undefined1 local_38 [8];
  double local_30;
  undefined1 local_28 [8];
  double local_20;
  
  pIVar3 = (this->AnalysisSession).Object;
  if (pIVar3 == (IAnalysisSession *)0x0) {
    return false;
  }
  (**(code **)((longlong)*pIVar3 + 0x88))(pIVar3);
  plVar7 = (longlong *)
           (**(code **)((longlong)*pIVar3 + 0xf8))(pIVar3,&FStateTreeTraceProvider::ProviderName);
  if (plVar7 == (longlong *)0x0) {
    (**(code **)((longlong)*pIVar3 + 0x90))(pIVar3);
    return false;
  }
  (**(code **)(*plVar7 + 0x20))(plVar7,&local_48,param_2);
  if (local_48 == 0) goto LAB_14d4c3e05;
  if ((local_48 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
  cVar2 = *(char *)(local_48 + 0x10);
  local_30 = param_1;
  local_38[0] = 1;
  if (cVar2 == '\x02') {
LAB_14d4c3e41:
    puVar8 = (undefined1 *)(local_48 + 0x20);
    local_20 = param_1;
    local_28[0] = 1;
    if (*(char *)(local_48 + 0x20) != '\x02') {
      if (*(double *)(local_48 + 0x28) <= param_1) {
        if (*(double *)(local_48 + 0x28) < param_1) {
          puVar8 = local_28;
        }
        if (*(char *)(local_48 + 0x20) != '\x01') goto LAB_14d4c3e05;
      }
      if (*(double *)(local_48 + 0x28) != *(double *)(puVar8 + 8)) goto LAB_14d4c3e05;
    }
    bVar5 = true;
  }
  else {
    dVar1 = *(double *)(local_48 + 0x18);
    if (dVar1 < param_1) {
LAB_14d4c3e36:
      puVar8 = (undefined1 *)(local_48 + 0x10);
LAB_14d4c3e3a:
      if (dVar1 == *(double *)(puVar8 + 8)) goto LAB_14d4c3e41;
    }
    else if (dVar1 <= param_1) {
      if (cVar2 == '\x01') goto LAB_14d4c3e36;
    }
    else {
      puVar8 = local_38;
      if (cVar2 == '\x01') goto LAB_14d4c3e3a;
    }
LAB_14d4c3e05:
    bVar5 = false;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_40);
  (**(code **)((longlong)*pIVar3 + 0x90))(pIVar3);
  return bVar5;
}

// IsTickable @ 14d4c40c0

bool __thiscall FStateTreeDebugger::IsTickable(FStateTreeDebugger *this)

{
  return true;
}

// IsTickableInEditor @ 14d4c40d0

bool __thiscall FStateTreeDebugger::IsTickableInEditor(FStateTreeDebugger *this)

{
  return true;
}

// IsTickableWhenPaused @ 14d4c40e0

bool __thiscall FStateTreeDebugger::IsTickableWhenPaused(FStateTreeDebugger *this)

{
  return true;
}

// OnTraceEventProcessed @ 14d4c7f30

void __thiscall
FStateTreeDebugger::OnTraceEventProcessed
          (FStateTreeDebugger *this,FStateTreeInstanceDebugId param_1,
          TVariant<FStateTreeTracePhaseEvent,FStateTreeTraceLogEvent,FStateTreeTracePropertyEvent,FStateTreeTraceNodeEvent,FStateTreeTraceStateEvent,FStateTreeTraceTaskEvent,FStateTreeTraceEvaluatorEvent,FStateTreeTraceTransitionEvent,FStateTreeTraceConditionEvent,FStateTreeTraceActiveStatesEvent,FStateTreeTraceInstanceFrameEvent>
          *param_2)

{
  int *local_res8;
  
  local_res8 = &this->LastLiveSessionId;
  (*(code *)(&
            PTR_VisitApplyEncoded<0,0,_FStateTreeDebugger::OnTraceEventProcessed_::__l2::<lambda_1>,TVariant<FStateTreeTracePhaseEvent,FStateTreeTraceLogEvent,FStateTreeTracePropertyEvent,FStateTreeTraceNodeEvent,FStateTreeTraceStateEvent,FStateTreeTraceTaskEvent,FStateTreeTraceEvaluatorEvent,FStateTreeTraceTransitionEvent,FStateTreeTraceConditionEvent,FStateTreeTraceActiveStatesEvent,FStateTreeTraceInstanceFrameEvent>_const_&>_152b2d050
            )[param_2->TypeIndex])(&local_res8,param_2);
  EvaluateBreakpoints((FStateTreeDebugger *)&this[-1].TracingTimelineScrubbedHandle,param_1,param_2)
  ;
  return;
}

// ReadTrace @ 14d4cc870

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FStateTreeDebugger::ReadTrace(FStateTreeDebugger *this,double param_1)

{
  IAnalysisSession *pIVar1;
  char cVar2;
  TObjectPtr<UStateTree_const_>_u_0 TVar3;
  IFrameProvider *pIVar4;
  ulong64 *puVar5;
  TNotNull<UE::StateTreeDebugger::ITraceReader_*> TVar6;
  undefined1 auStackY_98 [32];
  TObjectPtr<UStateTree_const_>_u_0 local_68;
  undefined8 local_60;
  FFrame local_58;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_98;
  pIVar1 = (this->AnalysisSession).Object;
  if (pIVar1 == (IAnalysisSession *)0x0) {
    return;
  }
  TVar3.DebugPtr = (UStateTree *)FWeakObjectPtr::Get(&(this->StateTreeAsset).WeakPtr);
  if (TVar3.DebugPtr != (UStateTree *)0x0) {
    local_68.DebugPtr = TVar3.DebugPtr;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)TVar3.DebugPtr);
    }
    local_60 = 0xffffffffffffffff;
    TVar6.Val = (ITraceReader *)&this->_padding_;
    if (this == (FStateTreeDebugger *)0x0) {
      TVar6.Val = (ITraceReader *)0x0;
    }
    if (TVar6.Val != (ITraceReader *)0x0) {
      (**(code **)((longlong)*pIVar1 + 0x88))(pIVar1);
      pIVar4 = TraceServices::ReadFrameProvider(pIVar1);
      cVar2 = (**(code **)((longlong)*pIVar4 + 0x40))(pIVar4,0,SUB84(param_1,0),&local_58);
      if (cVar2 != '\0') {
        if (local_58.EndTime == __real_7ff0000000000000) {
          puVar5 = (ulong64 *)(**(code **)((longlong)*pIVar4 + 0x48))(pIVar4,0,local_58.Index - 1);
          if (puVar5 == (ulong64 *)0x0) goto LAB_14d4cc992;
          local_58.Index = *puVar5;
          local_58.StartTime = (double)puVar5[1];
          local_58.EndTime = (double)puVar5[2];
          local_58._24_8_ = puVar5[3];
        }
        UE::StateTreeDebugger::ReadTrace
                  (pIVar1,pIVar4,&local_58,TVar6,(FTraceFilter *)&local_68.ObjectPtr,
                   &this->LastTraceReadTime);
      }
LAB_14d4cc992:
      (**(code **)((longlong)*pIVar1 + 0x90))(pIVar1);
      SendNotifications(this);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// ReadTrace @ 14d4cc9e0

void __thiscall FStateTreeDebugger::ReadTrace(FStateTreeDebugger *this,ulong64 param_1)

{
  IAnalysisSession *pIVar1;
  IFrameProvider *pIVar2;
  FFrame *pFVar3;
  TObjectPtr<UStateTree_const_>_u_0 TVar4;
  TNotNull<UE::StateTreeDebugger::ITraceReader_*> TVar5;
  TObjectPtr<UStateTree_const_>_u_0 local_18;
  undefined8 local_10;
  
  pIVar1 = (this->AnalysisSession).Object;
  if (pIVar1 != (IAnalysisSession *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x88))(pIVar1);
    pIVar2 = TraceServices::ReadFrameProvider(pIVar1);
    pFVar3 = (FFrame *)(**(code **)((longlong)*pIVar2 + 0x48))(pIVar2,0,param_1);
    if (pFVar3 != (FFrame *)0x0) {
      TVar4.DebugPtr = (UStateTree *)FWeakObjectPtr::Get(&(this->StateTreeAsset).WeakPtr);
      if (TVar4.DebugPtr == (UStateTree *)0x0) {
LAB_14d4ccacb:
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::ReportNotNullPtr();
      }
      local_18.DebugPtr = TVar4.DebugPtr;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)TVar4.DebugPtr);
      }
      local_10 = 0xffffffffffffffff;
      TVar5.Val = (ITraceReader *)&this->_padding_;
      if (this == (FStateTreeDebugger *)0x0) {
        TVar5.Val = (ITraceReader *)0x0;
      }
      if (TVar5.Val == (ITraceReader *)0x0) goto LAB_14d4ccacb;
      UE::StateTreeDebugger::ReadTrace
                (pIVar1,pIVar2,pFVar3,TVar5,(FTraceFilter *)&local_18.ObjectPtr,
                 &this->LastTraceReadTime);
    }
    (**(code **)((longlong)*pIVar1 + 0x90))(pIVar1);
  }
  SendNotifications(this);
  return;
}

// RefreshActiveStates @ 14d4cd290

void __thiscall FStateTreeDebugger::RefreshActiveStates(FStateTreeDebugger *this)

{
  uint uVar1;
  FInstanceEventCollection *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  ForAnyElementType FVar5;
  bool bVar6;
  uint uVar7;
  FStateTreeTraceActiveStates local_18;
  
  pFVar2 = (this->ScrubState).EventCollection;
  if ((pFVar2 != (FInstanceEventCollection *)0x0) && ((this->ScrubState).ActiveStatesIndex != -1)) {
    uVar1 = (this->ScrubState).ActiveStatesIndex;
    uVar7 = 0;
    if ((int)uVar1 < (pFVar2->ActiveStatesChanges).ArrayNum) {
      uVar7 = ~uVar1 >> 0x1f;
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
    uVar1 = *(uint *)((pFVar2->ActiveStatesChanges).AllocatorInstance.Data +
                     (longlong)(int)uVar1 * 8 + 4);
    uVar7 = 0;
    if ((int)uVar1 < (pFVar2->Events).ArrayNum) {
      uVar7 = ~uVar1 >> 0x1f;
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
    pFVar3 = (pFVar2->Events).AllocatorInstance.Data;
    if (pFVar3[(longlong)(int)uVar1 * 0x58 + 0x50] != (FScriptContainerElement)0x9) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index == TypeIndex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                         ,0x97,L"");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    SetActiveStates(this,(FStateTreeTraceActiveStates *)
                         (pFVar3 + (longlong)(int)uVar1 * 0x58 + 0x10));
    return;
  }
  local_18.PerAssetStates.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.PerAssetStates.ArrayNum = 0;
  local_18.PerAssetStates.ArrayMax = 0;
  SetActiveStates(this,&local_18);
  FVar5.Data = local_18.PerAssetStates.AllocatorInstance.Data;
  DestructItems<FStateTreeTraceActiveStates::FAssetActiveStates,int>
            ((FAssetActiveStates *)local_18.PerAssetStates.AllocatorInstance.Data,
             local_18.PerAssetStates.ArrayNum);
  if ((FAssetActiveStates *)FVar5.Data != (FAssetActiveStates *)0x0) {
    FMemory::Free(FVar5.Data);
  }
  return;
}

// RequestAnalysisOfEditorSession @ 14d4ce380

bool __thiscall FStateTreeDebugger::RequestAnalysisOfEditorSession(FStateTreeDebugger *this)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  ForAnyElementType FVar8;
  undefined1 local_res8 [8];
  uint local_res10 [2];
  TArray<FStateTreeDebugger::FTraceDescriptor,TSizedDefaultAllocator<32>_> local_38;
  FReadAccessScope local_28;
  
  local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.ArrayNum = 0;
  local_38.ArrayMax = 0;
  GetLiveTraces(this,&local_38);
  if (local_38.ArrayNum == 0) {
    iVar7 = -1;
  }
  else {
    uVar6 = 0;
    if ((int)(local_38.ArrayNum - 1U) < local_38.ArrayNum) {
      uVar6 = ~(local_38.ArrayNum - 1U) >> 0x1f;
    }
    if (uVar6 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
    iVar7 = *(int *)(local_38.AllocatorInstance.Data +
                    (longlong)(local_38.ArrayNum + -1) * 0xa0 + 0x10);
  }
  this->LastLiveSessionId = iVar7;
  local_res10[0] = 0;
  cVar5 = (**(code **)((longlong)*this->StateTreeModule + 0x40))(this->StateTreeModule,local_res10);
  if (cVar5 == '\0') {
    if (local_res10[0] != 0) {
      for (FVar8.Data = local_38.AllocatorInstance.Data;
          (FTraceDescriptor *)FVar8.Data !=
          (FTraceDescriptor *)(local_38.AllocatorInstance.Data + (longlong)local_38.ArrayNum * 0xa0)
          ; FVar8.Data = FVar8.Data + 0xa0) {
        if (((FTraceDescriptor *)FVar8.Data)->TraceId == local_res10[0]) {
          bVar3 = StartSessionAnalysis(this,(FTraceDescriptor *)FVar8.Data);
          if (bVar3) {
            switch(this->AnalysisTransitionType) {
            case Unset:
              this->AnalysisTransitionType = NoneToSelected;
              break;
            case NoneToSelected:
            case EditorToSelected:
            case SelectedToSelected:
              this->AnalysisTransitionType = SelectedToSelected;
              break;
            case NoneToEditor:
            case EditorToEditor:
            case SelectedToEditor:
              this->AnalysisTransitionType = EditorToSelected;
              break;
            default:
              `FStateTreeDebugger::UpdateAnalysisTransitionType'::__l4::<lambda_1>::operator()
                        (local_res8);
            }
            SetScrubStateCollection(this,(FInstanceEventCollection *)0x0);
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                      ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnNewSession
                       ,&local_28);
            if ((*(int *)&(this->OnNewSession).field_0x10 != 0) &&
               (plVar1 = *(longlong **)&(this->OnNewSession).field_0x8, plVar1 != (longlong *)0x0))
            {
              (**(code **)(*plVar1 + 0x68))();
            }
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
            ~FReadAccessScope(&local_28);
            bVar3 = true;
          }
          else {
            bVar3 = false;
          }
          goto LAB_14d4ce484;
        }
      }
    }
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
LAB_14d4ce484:
  DestructItems<FStateTreeDebugger::FTraceDescriptor,int>
            ((FTraceDescriptor *)local_38.AllocatorInstance.Data,local_38.ArrayNum);
  if ((FTraceDescriptor *)local_38.AllocatorInstance.Data != (FTraceDescriptor *)0x0) {
    FMemory::Free(local_38.AllocatorInstance.Data);
  }
  return bVar3;
}

// RequestAnalysisOfLatestTrace @ 14d4ce580

void __thiscall FStateTreeDebugger::RequestAnalysisOfLatestTrace(FStateTreeDebugger *this)

{
  FTraceDescriptor *pFVar1;
  FScriptContainerElement *pFVar2;
  FInstanceEventCollection *pFVar3;
  void *local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined4 local_94;
  FSessionInfo local_90;
  
  local_98 = 0xffffffff;
  local_a8 = (void *)0x0;
  local_94 = 0;
  pFVar1 = &this->ActiveSessionTraceDescriptor;
  local_90.Changelist = 0;
  local_90.ConfigurationType = Unknown;
  local_90.TargetType = Unknown;
  local_90._118_2_ = 0;
  local_a0 = 0;
  local_90.Platform.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_90.Platform.Data.ArrayNum = 0;
  local_90.Platform.Data.ArrayMax = 0;
  local_90.AppName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_90.AppName.Data.ArrayNum = 0;
  local_90.AppName.Data.ArrayMax = 0;
  local_90.ProjectName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_90.ProjectName.Data.ArrayNum = 0;
  local_90.ProjectName.Data.ArrayMax = 0;
  local_90.CommandLine.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_90.CommandLine.Data.ArrayNum = 0;
  local_90.CommandLine.Data.ArrayMax = 0;
  local_90.Branch.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_90.Branch.Data.ArrayNum = 0;
  local_90.Branch.Data.ArrayMax = 0;
  local_90.BuildVersion.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_90.BuildVersion.Data.ArrayNum = 0;
  local_90.BuildVersion.Data.ArrayMax = 0;
  local_90.VFSPaths.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_90.VFSPaths.Data.ArrayNum = 0;
  local_90.VFSPaths.Data.ArrayMax = 0;
  local_90.InstanceId.A = 0;
  local_90.InstanceId.B = 0;
  local_90.InstanceId.C = 0;
  local_90.InstanceId.D = 0;
  if (pFVar1 != (FTraceDescriptor *)&local_a8) {
    pFVar2 = (pFVar1->Name).Data.AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar1->Name).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->ActiveSessionTraceDescriptor).Name.Data.ArrayNum = 0;
    (this->ActiveSessionTraceDescriptor).Name.Data.ArrayMax = 0;
  }
  (this->ActiveSessionTraceDescriptor).TraceId = 0xffffffff;
  TraceServices::FSessionInfo::operator=
            (&(this->ActiveSessionTraceDescriptor).SessionInfo,&local_90);
  if (local_90.VFSPaths.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_90.VFSPaths.Data.AllocatorInstance.Data);
  }
  if (local_90.BuildVersion.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_90.BuildVersion.Data.AllocatorInstance.Data);
  }
  if (local_90.Branch.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_90.Branch.Data.AllocatorInstance.Data);
  }
  if (local_90.CommandLine.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_90.CommandLine.Data.AllocatorInstance.Data);
  }
  if (local_90.ProjectName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_90.ProjectName.Data.AllocatorInstance.Data);
  }
  if (local_90.AppName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_90.AppName.Data.AllocatorInstance.Data);
  }
  if (local_90.Platform.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_90.Platform.Data.AllocatorInstance.Data);
  }
  if (local_a8 != (void *)0x0) {
    FMemory::Free(local_a8);
  }
  if (((this->SelectedInstanceId).Id != 0xffffffff) ||
     ((this->SelectedInstanceId).SerialNumber != 0xffffffff)) {
    (this->SelectedInstanceId).Id = 0xffffffff;
    (this->SelectedInstanceId).SerialNumber = 0xffffffff;
    pFVar3 = GetMutableEventCollection(this,(FStateTreeInstanceDebugId)0xffffffffffffffff);
    SetScrubStateCollection(this,pFVar3);
  }
  StopSessionAnalysis(this);
  TryStartNewLiveSessionAnalysis(this,__real_3f800000);
  return;
}

// RequestSessionAnalysis @ 14d4ce720

bool __thiscall
FStateTreeDebugger::RequestSessionAnalysis(FStateTreeDebugger *this,FTraceDescriptor *param_1)

{
  longlong *plVar1;
  bool bVar2;
  undefined1 local_res18 [16];
  FReadAccessScope local_28;
  
  bVar2 = StartSessionAnalysis(this,param_1);
  if (!bVar2) {
    return false;
  }
  switch(this->AnalysisTransitionType) {
  case Unset:
    this->AnalysisTransitionType = NoneToSelected;
    break;
  case NoneToSelected:
  case EditorToSelected:
  case SelectedToSelected:
    this->AnalysisTransitionType = SelectedToSelected;
    break;
  case NoneToEditor:
  case EditorToEditor:
  case SelectedToEditor:
    this->AnalysisTransitionType = EditorToSelected;
    break;
  default:
    `FStateTreeDebugger::UpdateAnalysisTransitionType'::__l4::<lambda_1>::operator()(local_res18);
  }
  SetScrubStateCollection(this,(FInstanceEventCollection *)0x0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnNewSession,&local_28
            );
  if ((*(int *)&(this->OnNewSession).field_0x10 != 0) &&
     (plVar1 = *(longlong **)&(this->OnNewSession).field_0x8, plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x68))();
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return true;
}

// ResetEventCollections @ 14d4cec70

void __thiscall FStateTreeDebugger::ResetEventCollections(FStateTreeDebugger *this)

{
  int *piVar1;
  int iVar2;
  
  TIndirectArray<UE::StateTreeDebugger::FInstanceEventCollection,TSizedDefaultAllocator<32>_>::
  DestructAndFreeItems(&this->EventCollections);
  piVar1 = &(this->EventCollections).Array.ArrayMax;
  iVar2 = *piVar1;
  (this->EventCollections).Array.ArrayNum = 0;
  if (iVar2 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,(ForAnyElementType *)&this->EventCollections,0,piVar1);
  }
  SetScrubStateCollection(this,(FInstanceEventCollection *)0x0);
  this->LastProcessedRecordedWorldTime = 0.0;
  return;
}

// SelectInstance @ 14d4cee90

void __thiscall
FStateTreeDebugger::SelectInstance(FStateTreeDebugger *this,FStateTreeInstanceDebugId param_1)

{
  FInstanceEventCollection *pFVar1;
  
  if (((this->SelectedInstanceId).Id == param_1.Id) &&
     ((this->SelectedInstanceId).SerialNumber == param_1.SerialNumber)) {
    return;
  }
  this->SelectedInstanceId = param_1;
  pFVar1 = GetMutableEventCollection(this,param_1);
  SetScrubStateCollection(this,pFVar1);
  return;
}

// SendNotifications @ 14d4cf140

void __thiscall FStateTreeDebugger::SendNotifications(FStateTreeDebugger *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  longlong *plVar6;
  FStateTreeInstanceDebugId FVar7;
  code *pcVar8;
  bool bVar9;
  FInstanceEventCollection *pFVar10;
  FStateTreeDebuggerBreakpoint *pFVar11;
  ulonglong uVar12;
  FScriptContainerElement *pFVar13;
  uint uVar14;
  undefined1 local_res8 [8];
  undefined1 local_res10 [2];
  byte local_res12;
  EStateTreeBreakpointType local_res14;
  EStateTreeTraceEventType local_res15;
  FStateTreeDebuggerBreakpoint local_res18;
  FReadAccessScope local_88;
  FReadAccessScope local_70;
  FReadAccessScope local_58;
  
  iVar3 = (this->NewInstances).ArrayNum;
  if (0 < iVar3) {
    pFVar13 = (this->NewInstances).AllocatorInstance.Data;
    pFVar2 = pFVar13 + (longlong)iVar3 * 8;
    while( true ) {
      if ((this->NewInstances).ArrayNum != iVar3) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<FStateTreeInstanceDebugId,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      if (pFVar13 == pFVar2) break;
      uVar5 = *(undefined8 *)pFVar13;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnNewInstance,
                 &local_70);
      if ((*(int *)&(this->OnNewInstance).field_0x10 != 0) &&
         (plVar6 = *(longlong **)&(this->OnNewInstance).field_0x8, plVar6 != (longlong *)0x0)) {
        (**(code **)(*plVar6 + 0x68))(plVar6,uVar5);
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_70);
      pFVar13 = pFVar13 + 8;
    }
    piVar1 = &(this->NewInstances).ArrayMax;
    (this->NewInstances).ArrayNum = 0;
    if (*piVar1 < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,0,&(this->NewInstances).AllocatorInstance,0,piVar1);
    }
  }
  if ((this->HitBreakpoint).Index != -1) {
    if (((this->HitBreakpoint).InstanceId.Id == 0xffffffff) ||
       ((this->HitBreakpoint).InstanceId.SerialNumber == 0xffffffff)) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("HitBreakpoint.InstanceId.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\StateTree\\Source\\StateTreeModule\\Private\\Debugger\\StateTreeDebugger.cpp"
                         ,0x319,L"");
      if (bVar9) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
    }
    iVar3 = (this->HitBreakpoint).Index;
    if ((iVar3 < 0) || ((this->Breakpoints).ArrayNum <= iVar3)) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Breakpoints.IsValidIndex(HitBreakpoint.Index)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\StateTree\\Source\\StateTreeModule\\Private\\Debugger\\StateTreeDebugger.cpp"
                         ,0x31a,L"");
      if (bVar9) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
    }
    bVar9 = UE::StateTreeDebugger::FScrubState::SetScrubTime
                      (&this->ScrubState,(this->HitBreakpoint).Time,false);
    if (bVar9) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                 &this->OnScrubStateChanged,&local_58);
      if ((*(int *)&(this->OnScrubStateChanged).field_0x10 != 0) &&
         (plVar6 = *(longlong **)&(this->OnScrubStateChanged).field_0x8, plVar6 != (longlong *)0x0))
      {
        (**(code **)(*plVar6 + 0x68))(plVar6,&this->ScrubState);
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_58);
      RefreshActiveStates(this);
    }
    uVar4 = (this->SelectedInstanceId).Id;
    if (((uVar4 != (this->HitBreakpoint).InstanceId.Id) ||
        ((this->SelectedInstanceId).SerialNumber != (this->HitBreakpoint).InstanceId.SerialNumber))
       && ((FVar7 = (this->HitBreakpoint).InstanceId, uVar4 != FVar7.Id ||
           ((this->SelectedInstanceId).SerialNumber != FVar7.SerialNumber)))) {
      this->SelectedInstanceId = FVar7;
      pFVar10 = GetMutableEventCollection(this,FVar7);
      SetScrubStateCollection(this,pFVar10);
    }
    uVar4 = (this->HitBreakpoint).Index;
    uVar14 = 0;
    if ((int)uVar4 < (this->Breakpoints).ArrayNum) {
      uVar14 = ~uVar4 >> 0x1f;
    }
    if (uVar14 == 0) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar9) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
    }
    pFVar11 = FStateTreeDebuggerBreakpoint::FStateTreeDebuggerBreakpoint
                        (&local_res18,
                         (FStateTreeDebuggerBreakpoint *)
                         ((this->Breakpoints).AllocatorInstance.Data + (longlong)(int)uVar4 * 6));
    FVar7 = (this->HitBreakpoint).InstanceId;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnBreakpointHit,
               &local_88);
    if ((*(int *)&(this->OnBreakpointHit).field_0x10 != 0) &&
       (plVar6 = *(longlong **)&(this->OnBreakpointHit).field_0x8, plVar6 != (longlong *)0x0)) {
      local_res12 = (pFVar11->ElementIdentifier).TypeIndex;
      uVar12 = (ulonglong)local_res12;
      pcVar8 = *(code **)(*plVar6 + 0x68);
      if (2 < local_res12) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(MoveConstructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0x105,L"");
        if (bVar9) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
      }
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TMoveConstructorLookup<FStateTreeStateHandle,FStateTreeDebuggerBreakpoint::FStateTreeTaskIndex,FStateTreeDebuggerBreakpoint::FStateTreeTransitionIndex>::Construct(unsigned___int64,void*___ptr64,void*___ptr64)'
                  ::__l2::MoveConstructors)[uVar12])(local_res10,pFVar11);
      local_res14 = pFVar11->BreakpointType;
      local_res15 = pFVar11->EventType;
      (*pcVar8)(plVar6,FVar7,local_res10);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_88);
    this->bSessionAnalysisPaused = true;
  }
  return;
}

// SetActiveStates @ 14d4cfa90

void __thiscall
FStateTreeDebugger::SetActiveStates(FStateTreeDebugger *this,FStateTreeTraceActiveStates *param_1)

{
  int *piVar1;
  FStateTreeTraceActiveStates *pFVar2;
  int iVar3;
  int iVar4;
  FAssetActiveStates *pFVar5;
  longlong *plVar6;
  FReadAccessScope local_28;
  
  pFVar2 = &this->ActiveStates;
  if (pFVar2 != param_1) {
    DestructItems<FStateTreeTraceActiveStates::FAssetActiveStates,int>
              ((FAssetActiveStates *)(pFVar2->PerAssetStates).AllocatorInstance.Data,
               (this->ActiveStates).PerAssetStates.ArrayNum);
    iVar3 = (param_1->PerAssetStates).ArrayNum;
    piVar1 = &(this->ActiveStates).PerAssetStates.ArrayMax;
    pFVar5 = (FAssetActiveStates *)(param_1->PerAssetStates).AllocatorInstance.Data;
    iVar4 = *piVar1;
    (this->ActiveStates).PerAssetStates.ArrayNum = iVar3;
    if ((iVar3 == 0) && (iVar4 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,iVar3,iVar4,(ForAnyElementType *)pFVar2,iVar3,piVar1);
      ConstructItems<FStateTreeTraceActiveStates::FAssetActiveStates,FStateTreeTraceActiveStates::FAssetActiveStates,int>
                ((pFVar2->PerAssetStates).AllocatorInstance.Data,pFVar5,iVar3);
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnActiveStatesChanged,
             &local_28);
  if ((*(int *)&(this->OnActiveStatesChanged).field_0x10 != 0) &&
     (plVar6 = *(longlong **)&(this->OnActiveStatesChanged).field_0x8, plVar6 != (longlong *)0x0)) {
    (**(code **)(*plVar6 + 0x68))(plVar6,pFVar2);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return;
}

// SetScrubStateCollection @ 14d4d0260

void __thiscall
FStateTreeDebugger::SetScrubStateCollection
          (FStateTreeDebugger *this,FInstanceEventCollection *param_1)

{
  longlong *plVar1;
  FReadAccessScope local_28;
  
  (this->ScrubState).EventCollection = param_1;
  UE::StateTreeDebugger::FScrubState::SetScrubTime
            (&this->ScrubState,(this->ScrubState).ScrubTime,true);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnScrubStateChanged,
             &local_28);
  if ((*(int *)&(this->OnScrubStateChanged).field_0x10 != 0) &&
     (plVar1 = *(longlong **)&(this->OnScrubStateChanged).field_0x8, plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x68))(plVar1,&this->ScrubState);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  RefreshActiveStates(this);
  return;
}

// SetScrubTime @ 14d4d0490

void __thiscall FStateTreeDebugger::SetScrubTime(FStateTreeDebugger *this,double param_1)

{
  longlong *plVar1;
  bool bVar2;
  FReadAccessScope local_28;
  
  bVar2 = UE::StateTreeDebugger::FScrubState::SetScrubTime(&this->ScrubState,param_1,false);
  if (bVar2) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnScrubStateChanged,
               &local_28);
    if ((*(int *)&(this->OnScrubStateChanged).field_0x10 != 0) &&
       (plVar1 = *(longlong **)&(this->OnScrubStateChanged).field_0x8, plVar1 != (longlong *)0x0)) {
      (**(code **)(*plVar1 + 0x68))(plVar1,&this->ScrubState);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_28);
    RefreshActiveStates(this);
  }
  return;
}

// SetStateBreakpoint @ 14d4d0510

void __thiscall
FStateTreeDebugger::SetStateBreakpoint
          (FStateTreeDebugger *this,FStateTreeStateHandle param_1,EStateTreeBreakpointType param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  longlong lVar4;
  
  iVar3 = (this->Breakpoints).ArrayNum;
  piVar1 = &(this->Breakpoints).ArrayMax;
  if (iVar3 == *piVar1) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x206,&(this->Breakpoints).AllocatorInstance,piVar1);
  }
  lVar4 = (longlong)iVar3;
  (this->Breakpoints).ArrayNum = iVar3 + 1;
  pFVar2 = (this->Breakpoints).AllocatorInstance.Data;
  *(ushort *)(pFVar2 + lVar4 * 6) = param_1.Index;
  pFVar2[lVar4 * 6 + 2] = (FScriptContainerElement)0x0;
  pFVar2[lVar4 * 6 + 4] = (FScriptContainerElement)param_2;
  if (param_2 == OnEnter) {
    pFVar2[lVar4 * 6 + 5] = (FScriptContainerElement)0x2;
    return;
  }
  if (param_2 == OnExit) {
    pFVar2[lVar4 * 6 + 5] = (FScriptContainerElement)0x4;
    return;
  }
  if (param_2 != OnTransition) {
    pFVar2[lVar4 * 6 + 5] = (FScriptContainerElement)0x0;
    return;
  }
  pFVar2[lVar4 * 6 + 5] = (FScriptContainerElement)0x13;
  return;
}

// SetTaskBreakpoint @ 14d4d06a0

void __thiscall
FStateTreeDebugger::SetTaskBreakpoint
          (FStateTreeDebugger *this,FStateTreeIndex16 param_1,EStateTreeBreakpointType param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  longlong lVar4;
  
  iVar3 = (this->Breakpoints).ArrayNum;
  piVar1 = &(this->Breakpoints).ArrayMax;
  if (iVar3 == *piVar1) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x206,&(this->Breakpoints).AllocatorInstance,piVar1);
  }
  lVar4 = (longlong)iVar3;
  (this->Breakpoints).ArrayNum = iVar3 + 1;
  pFVar2 = (this->Breakpoints).AllocatorInstance.Data;
  *(ushort *)(pFVar2 + lVar4 * 6) = param_1.Value;
  pFVar2[lVar4 * 6 + 2] = (FScriptContainerElement)0x1;
  pFVar2[lVar4 * 6 + 4] = (FScriptContainerElement)param_2;
  if (param_2 == OnEnter) {
    pFVar2[lVar4 * 6 + 5] = (FScriptContainerElement)0x2;
    return;
  }
  if (param_2 == OnExit) {
    pFVar2[lVar4 * 6 + 5] = (FScriptContainerElement)0x4;
    return;
  }
  if (param_2 != OnTransition) {
    pFVar2[lVar4 * 6 + 5] = (FScriptContainerElement)0x0;
    return;
  }
  pFVar2[lVar4 * 6 + 5] = (FScriptContainerElement)0x13;
  return;
}

// SetTransitionBreakpoint @ 14d4d0760

void __thiscall
FStateTreeDebugger::SetTransitionBreakpoint
          (FStateTreeDebugger *this,FStateTreeIndex16 param_1,EStateTreeBreakpointType param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  longlong lVar4;
  
  iVar3 = (this->Breakpoints).ArrayNum;
  piVar1 = &(this->Breakpoints).ArrayMax;
  if (iVar3 == *piVar1) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x206,&(this->Breakpoints).AllocatorInstance,piVar1);
  }
  lVar4 = (longlong)iVar3;
  (this->Breakpoints).ArrayNum = iVar3 + 1;
  pFVar2 = (this->Breakpoints).AllocatorInstance.Data;
  *(ushort *)(pFVar2 + lVar4 * 6) = param_1.Value;
  pFVar2[lVar4 * 6 + 2] = (FScriptContainerElement)0x2;
  pFVar2[lVar4 * 6 + 4] = (FScriptContainerElement)param_2;
  if (param_2 == OnEnter) {
    pFVar2[lVar4 * 6 + 5] = (FScriptContainerElement)0x2;
    return;
  }
  if (param_2 == OnExit) {
    pFVar2[lVar4 * 6 + 5] = (FScriptContainerElement)0x4;
    return;
  }
  if (param_2 != OnTransition) {
    pFVar2[lVar4 * 6 + 5] = (FScriptContainerElement)0x0;
    return;
  }
  pFVar2[lVar4 * 6 + 5] = (FScriptContainerElement)0x13;
  return;
}

// StartSessionAnalysis @ 14d4d0890

bool __thiscall
FStateTreeDebugger::StartSessionAnalysis(FStateTreeDebugger *this,FTraceDescriptor *param_1)

{
  FSessionInfo *this_00;
  FTraceDescriptor *pFVar1;
  uint uVar2;
  FScriptContainerElement *pFVar3;
  FName FVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  FStoreClient *this_01;
  FSessionInfo *pFVar8;
  FStatus *this_02;
  TStringView<char8_t> *pTVar9;
  FString *pFVar10;
  FTraceInfo *this_03;
  FName *pFVar11;
  FModuleManager *this_04;
  IModuleInterface *pIVar12;
  undefined8 *puVar13;
  ForAnyElementType FVar14;
  undefined8 *local_res8;
  FName local_res10;
  FString local_1a8;
  FString local_198;
  FString local_188;
  longlong *local_178;
  TReferenceControllerBase<1> *local_170;
  void *local_168;
  undefined8 local_160;
  undefined4 local_158;
  undefined4 local_154;
  FSessionInfo local_150;
  TStringView<wchar_t> local_c8;
  FScriptContainerElement *local_b8;
  int local_b0;
  FString local_a8;
  FString local_98;
  undefined1 local_88 [8];
  TReferenceControllerBase<1> *local_80;
  TStringView<char8_t> local_78;
  uchar *local_68;
  undefined8 uStack_60;
  TStringView<char8_t> local_58;
  uchar *local_48;
  undefined8 uStack_40;
  
  uVar2 = (this->ActiveSessionTraceDescriptor).TraceId;
  pFVar1 = &this->ActiveSessionTraceDescriptor;
  if (param_1->TraceId == uVar2) {
    return uVar2 != 0xffffffff;
  }
  local_154 = 0;
  local_150.Changelist = 0;
  local_150.ConfigurationType = Unknown;
  local_150.TargetType = Unknown;
  local_150._118_2_ = 0;
  local_168 = (void *)0x0;
  local_160 = 0;
  local_158 = 0xffffffff;
  local_150.Platform.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_150.Platform.Data.ArrayNum = 0;
  local_150.Platform.Data.ArrayMax = 0;
  local_150.AppName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_150.AppName.Data.ArrayNum = 0;
  local_150.AppName.Data.ArrayMax = 0;
  local_150.ProjectName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_150.ProjectName.Data.ArrayNum = 0;
  local_150.ProjectName.Data.ArrayMax = 0;
  local_150.CommandLine.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_150.CommandLine.Data.ArrayNum = 0;
  local_150.CommandLine.Data.ArrayMax = 0;
  local_150.Branch.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_150.Branch.Data.ArrayNum = 0;
  local_150.Branch.Data.ArrayMax = 0;
  local_150.BuildVersion.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_150.BuildVersion.Data.ArrayNum = 0;
  local_150.BuildVersion.Data.ArrayMax = 0;
  local_150.VFSPaths.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_150.VFSPaths.Data.ArrayNum = 0;
  local_150.VFSPaths.Data.ArrayMax = 0;
  local_150.InstanceId.A = 0;
  local_150.InstanceId.B = 0;
  local_150.InstanceId.C = 0;
  local_150.InstanceId.D = 0;
  if (pFVar1 != (FTraceDescriptor *)&local_168) {
    pFVar3 = (pFVar1->Name).Data.AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (pFVar1->Name).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->ActiveSessionTraceDescriptor).Name.Data.ArrayNum = 0;
    (this->ActiveSessionTraceDescriptor).Name.Data.ArrayMax = 0;
  }
  this_00 = &(this->ActiveSessionTraceDescriptor).SessionInfo;
  (this->ActiveSessionTraceDescriptor).TraceId = 0xffffffff;
  TraceServices::FSessionInfo::operator=(this_00,&local_150);
  if (local_150.VFSPaths.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_150.VFSPaths.Data.AllocatorInstance.Data);
  }
  if (local_150.BuildVersion.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_150.BuildVersion.Data.AllocatorInstance.Data);
  }
  if (local_150.Branch.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_150.Branch.Data.AllocatorInstance.Data);
  }
  if (local_150.CommandLine.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_150.CommandLine.Data.AllocatorInstance.Data);
  }
  if (local_150.ProjectName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_150.ProjectName.Data.AllocatorInstance.Data);
  }
  if (local_150.AppName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_150.AppName.Data.AllocatorInstance.Data);
  }
  if (local_150.Platform.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_150.Platform.Data.AllocatorInstance.Data);
  }
  if (local_168 != (void *)0x0) {
    FMemory::Free(local_168);
  }
  StopSessionAnalysis(this);
  this_01 = (FStoreClient *)(**(code **)((longlong)*this->StateTreeModule + 0x58))();
  if ((this_01 == (FStoreClient *)0x0) || (param_1->TraceId == 0xffffffff)) {
LAB_14d4d0da6:
    bVar6 = false;
  }
  else {
    this->AnalysisDuration = 0.0;
    this->LastTraceReadTime = 0.0;
    uVar2 = param_1->TraceId;
    pFVar8 = UE::Trace::FStoreClient::GetSessionInfoByTraceId(this_01,uVar2);
    if (pFVar8 != (FSessionInfo *)0x0) {
      UE::Trace::FStoreClient::ReadTrace(this_01,(uint)&local_res8);
      if (local_res8 == (undefined8 *)0x0) goto LAB_14d4d0da6;
      this_02 = UE::Trace::FStoreClient::GetStatus(this_01);
      pTVar9 = UE::Trace::FStoreClient::FStatus::GetStoreDir(this_02,&local_78);
      local_1a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1a8.Data.ArrayNum = 0;
      local_1a8.Data.ArrayMax = 0;
      local_68 = pTVar9->DataPtr;
      uStack_60 = *(undefined8 *)&pTVar9->Size;
      pFVar10 = ::FString::ConstructFromPtrSize
                          (&local_a8,pTVar9->DataPtr,(int)*(undefined8 *)&pTVar9->Size);
      if (&local_1a8 != pFVar10) {
        if (local_1a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1a8.Data.AllocatorInstance.Data);
        }
        local_1a8.Data.AllocatorInstance.Data = (pFVar10->Data).AllocatorInstance.Data;
        (pFVar10->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_1a8.Data.ArrayNum = (pFVar10->Data).ArrayNum;
        local_1a8.Data.ArrayMax = (pFVar10->Data).ArrayMax;
        (pFVar10->Data).ArrayNum = 0;
        (pFVar10->Data).ArrayMax = 0;
      }
      if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a8.Data.AllocatorInstance.Data);
      }
      this_03 = UE::Trace::FStoreClient::GetTraceInfoById(this_01,uVar2);
      if (this_03 != (FTraceInfo *)0x0) {
        pTVar9 = UE::Trace::FStoreClient::FTraceInfo::GetName(this_03,&local_58);
        local_198.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_198.Data.ArrayNum = 0;
        local_198.Data.ArrayMax = 0;
        local_48 = pTVar9->DataPtr;
        uStack_40 = *(undefined8 *)&pTVar9->Size;
        pFVar10 = ::FString::ConstructFromPtrSize
                            (&local_98,pTVar9->DataPtr,(int)*(undefined8 *)&pTVar9->Size);
        if (&local_198 != pFVar10) {
          if (local_198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_198.Data.AllocatorInstance.Data);
          }
          local_198.Data.AllocatorInstance.Data = (pFVar10->Data).AllocatorInstance.Data;
          (pFVar10->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_198.Data.ArrayNum = (pFVar10->Data).ArrayNum;
          local_198.Data.ArrayMax = (pFVar10->Data).ArrayMax;
          (pFVar10->Data).ArrayNum = 0;
          (pFVar10->Data).ArrayMax = 0;
        }
        if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_98.Data.AllocatorInstance.Data);
        }
        bVar6 = ::FString::EndsWith(&local_198,L".utrace",7,IgnoreCase);
        if (!bVar6) {
          ::FString::AppendChars(&local_198,L".utrace",7);
        }
        local_c8.DataPtr = (wchar_t *)local_1a8.Data.AllocatorInstance.Data;
        local_c8.Size = local_1a8.Data.ArrayNum + -1;
        if (local_1a8.Data.ArrayNum == 0) {
          local_c8.Size = 0;
        }
        local_b8 = local_198.Data.AllocatorInstance.Data;
        local_b0 = local_198.Data.ArrayNum + -1;
        if (local_198.Data.ArrayNum == 0) {
          local_b0 = 0;
        }
        FPaths::CombineInternal(&local_188,&local_c8,2);
        if (local_1a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1a8.Data.AllocatorInstance.Data);
        }
        local_1a8.Data.AllocatorInstance.Data = local_188.Data.AllocatorInstance.Data;
        local_1a8.Data.ArrayNum = local_188.Data.ArrayNum;
        local_1a8.Data.ArrayMax = local_188.Data.ArrayMax;
        local_188.Data.ArrayNum = 0;
        local_188.Data.ArrayMax = 0;
        local_188.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        FPaths::NormalizeFilename(&local_1a8);
        if (local_198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_198.Data.AllocatorInstance.Data);
        }
      }
      pFVar11 = ::FName::FName(&local_res10,"TraceServices");
      FVar4 = *pFVar11;
      this_04 = FModuleManager::Get();
      pIVar12 = FModuleManager::LoadModuleChecked(this_04,FVar4);
      (**(code **)((longlong)*pIVar12 + 0x40))(pIVar12,&local_178);
      if (local_178 != (longlong *)0x0) {
        if ((this->bSessionAnalysisActive != false) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("!IsAnalysisSessionActive()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\StateTree\\Source\\StateTreeModule\\Private\\Debugger\\StateTreeDebugger.cpp"
                               ,0x176,
                               L"Must make sure that current session was properly stopped before starting a new one otherwise it can cause threading issues"
                              ), bVar6)) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
        if ((local_178 == (longlong *)0x0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar6)) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
        FVar14.Data = (FScriptContainerElement *)L"";
        if (local_1a8.Data.ArrayNum != 0) {
          FVar14.Data = local_1a8.Data.AllocatorInstance.Data;
        }
        puVar13 = (undefined8 *)
                  (**(code **)(*local_178 + 8))(local_178,local_88,uVar2,FVar14.Data,&local_res8);
        if (&this->AnalysisSession !=
            (TSharedPtr<TraceServices::IAnalysisSession_const_,1> *)puVar13) {
          (this->AnalysisSession).Object = (IAnalysisSession *)*puVar13;
          *puVar13 = 0;
          SharedPointerInternals::FSharedReferencer<1>::operator=
                    (&(this->AnalysisSession).SharedReferenceCount,
                     (FSharedReferencer<1> *)(puVar13 + 1));
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_80);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_170)
      ;
      if ((this->AnalysisSession).Object != (IAnalysisSession *)0x0) {
        this->bSessionAnalysisActive = true;
        ::FString::operator=(&(this->ActiveSessionTraceDescriptor).Name,&param_1->Name);
        (this->ActiveSessionTraceDescriptor).TraceId = param_1->TraceId;
        TraceServices::FSessionInfo::operator=(this_00,&param_1->SessionInfo);
      }
      if (local_1a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1a8.Data.AllocatorInstance.Data);
      }
      if (local_res8 != (undefined8 *)0x0) {
        (**(code **)*local_res8)(local_res8,1);
      }
    }
    bVar6 = (this->ActiveSessionTraceDescriptor).TraceId != 0xffffffff;
  }
  return bVar6;
}

// StepBackToPreviousStateChange @ 14d4d10e0

void __thiscall FStateTreeDebugger::StepBackToPreviousStateChange(FStateTreeDebugger *this)

{
  FInstanceEventCollection *pFVar1;
  code *pcVar2;
  bool bVar3;
  longlong *plVar4;
  int iVar5;
  FReadAccessScope local_28;
  
  pFVar1 = (this->ScrubState).EventCollection;
  if ((this->ScrubState).ScrubTimeBoundState == AfterHigherBound) {
    iVar5 = (pFVar1->ActiveStatesChanges).ArrayNum + -1;
  }
  else {
    iVar5 = (this->ScrubState).ActiveStatesIndex;
    if ((-1 < iVar5) && (iVar5 < (pFVar1->ActiveStatesChanges).ArrayNum)) {
      if ((iVar5 < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (*(int *)((pFVar1->ActiveStatesChanges).AllocatorInstance.Data + (longlong)iVar5 * 8) <
          (this->ScrubState).FrameSpanIndex) {
        iVar5 = (this->ScrubState).ActiveStatesIndex;
        goto LAB_14d4d1171;
      }
    }
    iVar5 = (this->ScrubState).ActiveStatesIndex + -1;
  }
LAB_14d4d1171:
  UE::StateTreeDebugger::FScrubState::SetActiveStatesIndex(&this->ScrubState,iVar5);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnScrubStateChanged,
             &local_28);
  if (*(int *)&(this->OnScrubStateChanged).field_0x10 == 0) {
    plVar4 = (longlong *)0x0;
  }
  else {
    plVar4 = *(longlong **)&(this->OnScrubStateChanged).field_0x8;
  }
  (**(code **)(*plVar4 + 0x60))(plVar4,&this->ScrubState);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  RefreshActiveStates(this);
  return;
}

// StepBackToPreviousStateWithEvents @ 14d4d11d0

void __thiscall FStateTreeDebugger::StepBackToPreviousStateWithEvents(FStateTreeDebugger *this)

{
  longlong *plVar1;
  int iVar2;
  FReadAccessScope local_28;
  
  if ((this->ScrubState).ScrubTimeBoundState == InBounds) {
    iVar2 = (this->ScrubState).FrameSpanIndex;
  }
  else {
    iVar2 = (((this->ScrubState).EventCollection)->FrameSpans).ArrayNum;
  }
  UE::StateTreeDebugger::FScrubState::SetFrameSpanIndex(&this->ScrubState,iVar2 + -1);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnScrubStateChanged,
             &local_28);
  if (*(int *)&(this->OnScrubStateChanged).field_0x10 == 0) {
    plVar1 = (longlong *)0x0;
  }
  else {
    plVar1 = *(longlong **)&(this->OnScrubStateChanged).field_0x8;
  }
  (**(code **)(*plVar1 + 0x60))(plVar1,&this->ScrubState);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  RefreshActiveStates(this);
  return;
}

// StepForwardToNextStateChange @ 14d4d1260

void __thiscall FStateTreeDebugger::StepForwardToNextStateChange(FStateTreeDebugger *this)

{
  int iVar1;
  longlong *plVar2;
  FReadAccessScope local_28;
  
  plVar2 = (longlong *)0x0;
  iVar1 = 0;
  if ((this->ScrubState).ScrubTimeBoundState != BeforeLowerBound) {
    iVar1 = (this->ScrubState).ActiveStatesIndex + 1;
  }
  UE::StateTreeDebugger::FScrubState::SetActiveStatesIndex(&this->ScrubState,iVar1);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnScrubStateChanged,
             &local_28);
  if (*(int *)&(this->OnScrubStateChanged).field_0x10 != 0) {
    plVar2 = *(longlong **)&(this->OnScrubStateChanged).field_0x8;
  }
  (**(code **)(*plVar2 + 0x60))(plVar2,&this->ScrubState);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  RefreshActiveStates(this);
  return;
}

// StepForwardToNextStateWithEvents @ 14d4d12f0

void __thiscall FStateTreeDebugger::StepForwardToNextStateWithEvents(FStateTreeDebugger *this)

{
  int iVar1;
  longlong *plVar2;
  FReadAccessScope local_28;
  
  plVar2 = (longlong *)0x0;
  iVar1 = 0;
  if ((this->ScrubState).ScrubTimeBoundState == InBounds) {
    iVar1 = (this->ScrubState).FrameSpanIndex + 1;
  }
  UE::StateTreeDebugger::FScrubState::SetFrameSpanIndex(&this->ScrubState,iVar1);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnScrubStateChanged,
             &local_28);
  if (*(int *)&(this->OnScrubStateChanged).field_0x10 != 0) {
    plVar2 = *(longlong **)&(this->OnScrubStateChanged).field_0x8;
  }
  (**(code **)(*plVar2 + 0x60))(plVar2,&this->ScrubState);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  RefreshActiveStates(this);
  return;
}

// StopSessionAnalysis @ 14d4d1380

void __thiscall FStateTreeDebugger::StopSessionAnalysis(FStateTreeDebugger *this)

{
  IAnalysisSession *pIVar1;
  code *pcVar2;
  bool bVar3;
  
  (this->HitBreakpoint).InstanceId = FStateTreeInstanceDebugId::Invalid;
  (this->HitBreakpoint).Time = 0.0;
  (this->HitBreakpoint).Index = -1;
  if (this->bSessionAnalysisActive != false) {
    bVar3 = FWeakObjectPtr::IsValid(&(this->StateTreeAsset).WeakPtr);
    if (bVar3) {
      SyncToCurrentSessionDuration(this);
    }
    if ((this->AnalysisSession).Object == (IAnalysisSession *)0x0) {
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
    pIVar1 = (this->AnalysisSession).Object;
    (**(code **)((longlong)*pIVar1 + 8))(pIVar1,1);
  }
  this->bSessionAnalysisActive = false;
  this->bSessionAnalysisPaused = false;
  this->LastProcessedRecordedWorldTime = 0.0;
  return;
}

// SyncToCurrentSessionDuration @ 14d4d1430

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FStateTreeDebugger::SyncToCurrentSessionDuration(FStateTreeDebugger *this)

{
  IAnalysisSession *pIVar1;
  double dVar2;
  char cVar3;
  TObjectPtr<UStateTree_const_>_u_0 TVar4;
  IFrameProvider *pIVar5;
  ulong64 *puVar6;
  TNotNull<UE::StateTreeDebugger::ITraceReader_*> TVar7;
  undefined1 auStackY_88 [32];
  TObjectPtr<UStateTree_const_>_u_0 local_58;
  undefined8 local_50;
  FFrame local_48;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_88;
  pIVar1 = (this->AnalysisSession).Object;
  if (pIVar1 == (IAnalysisSession *)0x0) {
    return;
  }
  (**(code **)((longlong)*pIVar1 + 0x88))(pIVar1);
  dVar2 = (double)(**(code **)((longlong)*pIVar1 + 0x30))(pIVar1);
  this->AnalysisDuration = dVar2;
  (**(code **)((longlong)*pIVar1 + 0x90))(pIVar1);
  pIVar1 = (this->AnalysisSession).Object;
  dVar2 = this->AnalysisDuration;
  if (pIVar1 == (IAnalysisSession *)0x0) {
    return;
  }
  TVar4.DebugPtr = (UStateTree *)FWeakObjectPtr::Get(&(this->StateTreeAsset).WeakPtr);
  if (TVar4.DebugPtr != (UStateTree *)0x0) {
    local_58.DebugPtr = TVar4.DebugPtr;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)TVar4.DebugPtr);
    }
    local_50 = 0xffffffffffffffff;
    TVar7.Val = (ITraceReader *)&this->_padding_;
    if (this == (FStateTreeDebugger *)0x0) {
      TVar7.Val = (ITraceReader *)0x0;
    }
    if (TVar7.Val != (ITraceReader *)0x0) {
      (**(code **)((longlong)*pIVar1 + 0x88))(pIVar1);
      pIVar5 = TraceServices::ReadFrameProvider(pIVar1);
      cVar3 = (**(code **)((longlong)*pIVar5 + 0x40))(pIVar5,0,SUB84(dVar2,0),&local_48);
      if (cVar3 != '\0') {
        if (local_48.EndTime == __real_7ff0000000000000) {
          puVar6 = (ulong64 *)(**(code **)((longlong)*pIVar5 + 0x48))(pIVar5,0,local_48.Index - 1);
          if (puVar6 == (ulong64 *)0x0) goto LAB_14d4d1593;
          local_48.Index = *puVar6;
          local_48.StartTime = (double)puVar6[1];
          local_48.EndTime = (double)puVar6[2];
          local_48._24_8_ = puVar6[3];
        }
        UE::StateTreeDebugger::ReadTrace
                  (pIVar1,pIVar5,&local_48,TVar7,(FTraceFilter *)&local_58.ObjectPtr,
                   &this->LastTraceReadTime);
      }
LAB_14d4d1593:
      (**(code **)((longlong)*pIVar1 + 0x90))(pIVar1);
      SendNotifications(this);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// Tick @ 14d4d16f0

void __thiscall FStateTreeDebugger::Tick(FStateTreeDebugger *this,float param_1)

{
  bool bVar1;
  bool bVar2;
  
  bVar2 = -1 < CpuChannel->Enabled;
  if (bVar2) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId117,"FStateTreeDebugger::Tick",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\StateTree\\Source\\StateTreeModule\\Private\\Debugger\\StateTreeDebugger.cpp"
               ,0x75);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId117);
  }
  if ((0.0 < this->RetryLoadNextLiveSessionTimer) &&
     (bVar1 = TryStartNewLiveSessionAnalysis(this,this->RetryLoadNextLiveSessionTimer - param_1),
     bVar1)) {
    this->RetryLoadNextLiveSessionTimer = 0.0;
    this->LastLiveSessionId = -1;
  }
  bVar1 = FWeakObjectPtr::IsValid(&(this->StateTreeAsset).WeakPtr);
  if (((bVar1) && (this->bSessionAnalysisActive != false)) &&
     (this->bSessionAnalysisPaused == false)) {
    SyncToCurrentSessionDuration(this);
  }
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// TryStartNewLiveSessionAnalysis @ 14d4d33f0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FStateTreeDebugger::TryStartNewLiveSessionAnalysis(FStateTreeDebugger *this,float param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  undefined1 local_res18 [16];
  TArray<FStateTreeDebugger::FTraceDescriptor,TSizedDefaultAllocator<32>_> local_28 [2];
  
  bVar4 = false;
  local_28[0].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28[0].ArrayNum = 0;
  local_28[0].ArrayMax = 0;
  GetLiveTraces(this,local_28);
  iVar6 = local_28[0].ArrayNum;
  if (local_28[0].ArrayNum == 0) {
LAB_14d4d3566:
    this->RetryLoadNextLiveSessionTimer = param_1;
    if (((byte)LogStateTree._0_1_ < 5) || (param_1 <= 0.0)) goto LAB_14d4d3597;
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogStateTree);
  }
  else {
    uVar7 = 0;
    if ((int)(local_28[0].ArrayNum - 1U) < local_28[0].ArrayNum) {
      uVar7 = ~(local_28[0].ArrayNum - 1U) >> 0x1f;
    }
    if (uVar7 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
      iVar6 = local_28[0].ArrayNum;
    }
    uVar7 = iVar6 - 1;
    if (*(int *)(local_28[0].AllocatorInstance.Data + (longlong)(int)uVar7 * 0xa0 + 0x10) ==
        this->LastLiveSessionId) goto LAB_14d4d3566;
    uVar5 = 0;
    if ((int)uVar7 < iVar6) {
      uVar5 = ~uVar7 >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
      iVar6 = local_28[0].ArrayNum;
    }
    bVar4 = StartSessionAnalysis
                      (this,(FTraceDescriptor *)
                            (local_28[0].AllocatorInstance.Data + (longlong)(iVar6 + -1) * 0xa0));
    if (bVar4) {
      switch(this->AnalysisTransitionType) {
      case Unset:
        this->AnalysisTransitionType = NoneToEditor;
        break;
      case NoneToSelected:
      case EditorToSelected:
      case SelectedToSelected:
        this->AnalysisTransitionType = SelectedToEditor;
        break;
      case NoneToEditor:
      case EditorToEditor:
      case SelectedToEditor:
        this->AnalysisTransitionType = EditorToEditor;
        break;
      default:
        `FStateTreeDebugger::UpdateAnalysisTransitionType'::__l4::<lambda_1>::operator()
                  (local_res18);
      }
      SetScrubStateCollection(this,(FInstanceEventCollection *)0x0);
      TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::ExecuteIfBound(&this->OnNewSession);
    }
  }
  iVar6 = local_28[0].ArrayNum;
LAB_14d4d3597:
  DestructItems<FStateTreeDebugger::FTraceDescriptor,int>
            ((FTraceDescriptor *)local_28[0].AllocatorInstance.Data,iVar6);
  if ((FTraceDescriptor *)local_28[0].AllocatorInstance.Data != (FTraceDescriptor *)0x0) {
    FMemory::Free(local_28[0].AllocatorInstance.Data);
  }
  return bVar4;
}

// UpdateAnalysisTransitionType @ 14d4d3e20

void __thiscall
FStateTreeDebugger::UpdateAnalysisTransitionType
          (FStateTreeDebugger *this,EAnalysisSourceType param_1)

{
  undefined1 local_res8 [32];
  
  switch(this->AnalysisTransitionType) {
  case Unset:
    this->AnalysisTransitionType = (param_1 != SelectedSession) + NoneToSelected;
    return;
  case NoneToSelected:
  case EditorToSelected:
  case SelectedToSelected:
    this->AnalysisTransitionType = (param_1 != SelectedSession) + SelectedToSelected;
    return;
  case NoneToEditor:
  case EditorToEditor:
  case SelectedToEditor:
    this->AnalysisTransitionType = (param_1 != SelectedSession) + EditorToSelected;
    return;
  default:
    `FStateTreeDebugger::UpdateAnalysisTransitionType'::__l4::<lambda_1>::operator()(local_res8);
    return;
  }
}

// UpdateMetadata @ 14d4d3ea0

void __thiscall
FStateTreeDebugger::UpdateMetadata(FStateTreeDebugger *this,FTraceDescriptor *param_1)

{
  int *piVar1;
  FString *pFVar2;
  int iVar3;
  void *_Src;
  int iVar4;
  ForAnyElementType FVar5;
  FStoreClient *this_00;
  FAnalysisProcessor this_01;
  FSessionInfo *pFVar6;
  longlong lVar7;
  undefined8 *local_res8;
  FAnalysisProcessor local_res18 [2];
  IAnalyzer local_118;
  void *local_110;
  undefined8 local_108;
  ForAnyElementType local_100;
  undefined8 local_f8;
  ForAnyElementType local_f0;
  undefined8 local_e8;
  ForAnyElementType local_e0;
  undefined8 local_d8;
  ForAnyElementType local_d0;
  undefined8 local_c8;
  ForAnyElementType local_c0;
  undefined8 local_b8;
  ForAnyElementType local_b0;
  undefined8 local_a8;
  uint local_a0;
  undefined2 local_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined1 local_88 [16];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_78;
  ForAnyElementType FStack_70;
  int local_68;
  undefined **local_60;
  undefined8 *local_58;
  undefined8 local_50;
  FDestructionSentinel local_48;
  
  this_00 = (FStoreClient *)(**(code **)((longlong)*this->StateTreeModule + 0x58))();
  if (this_00 != (FStoreClient *)0x0) {
    UE::Trace::FStoreClient::ReadTrace(this_00,(uint)&local_res8);
    if (local_res8 != (undefined8 *)0x0) {
      local_60 = &`FStateTreeDebugger::UpdateMetadata'::`2'::FDataStream::_vftable_;
      local_58 = local_res8;
      local_118 = (IAnalyzer)&___7FDiagnosticsSessionAnalyzer_StateTreeDebugger_UE__6B_;
      local_50 = 0;
      local_110 = (void *)0x0;
      local_108 = 0;
      local_100.Data = (FScriptContainerElement *)0x0;
      local_f8 = 0;
      local_f0.Data = (FScriptContainerElement *)0x0;
      local_e8 = 0;
      local_e0.Data = (FScriptContainerElement *)0x0;
      local_d8 = 0;
      local_d0.Data = (FScriptContainerElement *)0x0;
      local_c8 = 0;
      local_c0.Data = (FScriptContainerElement *)0x0;
      local_b8 = 0;
      local_b0.Data = (FScriptContainerElement *)0x0;
      local_a8 = 0;
      local_a0 = 0;
      local_9c = 0;
      local_98 = 0;
      uStack_90 = 0;
      local_88._0_8_ = (FScriptContainerElement *)0x0;
      local_88._8_4_ = 0;
      local_88._12_4_ = 0;
      local_78.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
      FStack_70.Data = (FScriptContainerElement *)0x0;
      local_68 = 0;
      UE::Trace::FAnalysisContext::AddAnalyzer((FAnalysisContext *)local_88,&local_118);
      this_01 = UE::Trace::FAnalysisContext::Process
                          ((FAnalysisContext *)local_88,(IInDataStream *)local_res18);
      UE::Trace::FAnalysisProcessor::Wait((FAnalysisProcessor *)this_01.Impl);
      UE::Trace::FAnalysisProcessor::~FAnalysisProcessor(local_res18);
      _Src = local_110;
      pFVar6 = &param_1->SessionInfo;
      if (pFVar6 != (FSessionInfo *)&local_110) {
        iVar4 = (int)local_108;
        lVar7 = (longlong)(int)local_108;
        piVar1 = &(param_1->SessionInfo).Platform.Data.ArrayMax;
        iVar3 = *piVar1;
        (param_1->SessionInfo).Platform.Data.ArrayNum = (int)local_108;
        if (((int)local_108 == 0) && (iVar3 == 0)) {
          *piVar1 = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,(int)local_108,iVar3,(ForAnyElementType *)pFVar6,(int)local_108,piVar1);
          if (iVar4 != 0) {
            memcpy((pFVar6->Platform).Data.AllocatorInstance.Data,_Src,lVar7 * 2);
          }
        }
      }
      FVar5.Data = local_100.Data;
      pFVar2 = &(param_1->SessionInfo).AppName;
      if (pFVar2 != (FString *)&local_100) {
        iVar4 = (int)local_f8;
        lVar7 = (longlong)(int)local_f8;
        piVar1 = &(param_1->SessionInfo).AppName.Data.ArrayMax;
        iVar3 = *piVar1;
        (param_1->SessionInfo).AppName.Data.ArrayNum = (int)local_f8;
        if (((int)local_f8 == 0) && (iVar3 == 0)) {
          *piVar1 = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,(int)local_f8,iVar3,(ForAnyElementType *)pFVar2,(int)local_f8,piVar1);
          if (iVar4 != 0) {
            memcpy((pFVar2->Data).AllocatorInstance.Data,FVar5.Data,lVar7 * 2);
          }
        }
      }
      FVar5.Data = local_f0.Data;
      pFVar2 = &(param_1->SessionInfo).ProjectName;
      if (pFVar2 != (FString *)&local_f0) {
        iVar4 = (int)local_e8;
        lVar7 = (longlong)(int)local_e8;
        piVar1 = &(param_1->SessionInfo).ProjectName.Data.ArrayMax;
        iVar3 = *piVar1;
        (param_1->SessionInfo).ProjectName.Data.ArrayNum = (int)local_e8;
        if (((int)local_e8 == 0) && (iVar3 == 0)) {
          *piVar1 = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,(int)local_e8,iVar3,(ForAnyElementType *)pFVar2,(int)local_e8,piVar1);
          if (iVar4 != 0) {
            memcpy((pFVar2->Data).AllocatorInstance.Data,FVar5.Data,lVar7 * 2);
          }
        }
      }
      FVar5.Data = local_e0.Data;
      pFVar2 = &(param_1->SessionInfo).CommandLine;
      if (pFVar2 != (FString *)&local_e0) {
        iVar4 = (int)local_d8;
        lVar7 = (longlong)(int)local_d8;
        piVar1 = &(param_1->SessionInfo).CommandLine.Data.ArrayMax;
        iVar3 = *piVar1;
        (param_1->SessionInfo).CommandLine.Data.ArrayNum = (int)local_d8;
        if (((int)local_d8 == 0) && (iVar3 == 0)) {
          *piVar1 = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,(int)local_d8,iVar3,(ForAnyElementType *)pFVar2,(int)local_d8,piVar1);
          if (iVar4 != 0) {
            memcpy((pFVar2->Data).AllocatorInstance.Data,FVar5.Data,lVar7 * 2);
          }
        }
      }
      FVar5.Data = local_d0.Data;
      pFVar2 = &(param_1->SessionInfo).Branch;
      if (pFVar2 != (FString *)&local_d0) {
        iVar4 = (int)local_c8;
        lVar7 = (longlong)(int)local_c8;
        piVar1 = &(param_1->SessionInfo).Branch.Data.ArrayMax;
        iVar3 = *piVar1;
        (param_1->SessionInfo).Branch.Data.ArrayNum = (int)local_c8;
        if (((int)local_c8 == 0) && (iVar3 == 0)) {
          *piVar1 = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,(int)local_c8,iVar3,(ForAnyElementType *)pFVar2,(int)local_c8,piVar1);
          if (iVar4 != 0) {
            memcpy((pFVar2->Data).AllocatorInstance.Data,FVar5.Data,lVar7 * 2);
          }
        }
      }
      FVar5.Data = local_c0.Data;
      pFVar2 = &(param_1->SessionInfo).BuildVersion;
      if (pFVar2 != (FString *)&local_c0) {
        iVar4 = (int)local_b8;
        lVar7 = (longlong)(int)local_b8;
        piVar1 = &(param_1->SessionInfo).BuildVersion.Data.ArrayMax;
        iVar3 = *piVar1;
        (param_1->SessionInfo).BuildVersion.Data.ArrayNum = (int)local_b8;
        if (((int)local_b8 == 0) && (iVar3 == 0)) {
          *piVar1 = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,(int)local_b8,iVar3,(ForAnyElementType *)pFVar2,(int)local_b8,piVar1);
          if (iVar4 != 0) {
            memcpy((pFVar2->Data).AllocatorInstance.Data,FVar5.Data,lVar7 * 2);
          }
        }
      }
      FVar5.Data = local_b0.Data;
      pFVar2 = &(param_1->SessionInfo).VFSPaths;
      if (pFVar2 != (FString *)&local_b0) {
        iVar4 = (int)local_a8;
        lVar7 = (longlong)(int)local_a8;
        piVar1 = &(param_1->SessionInfo).VFSPaths.Data.ArrayMax;
        iVar3 = *piVar1;
        (param_1->SessionInfo).VFSPaths.Data.ArrayNum = (int)local_a8;
        if (((int)local_a8 == 0) && (iVar3 == 0)) {
          *piVar1 = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,(int)local_a8,iVar3,(ForAnyElementType *)pFVar2,(int)local_a8,piVar1);
          if (iVar4 != 0) {
            memcpy((pFVar2->Data).AllocatorInstance.Data,FVar5.Data,lVar7 * 2);
          }
        }
      }
      (param_1->SessionInfo).Changelist = local_a0;
      (param_1->SessionInfo).ConfigurationType = (EBuildConfiguration)local_9c;
      (param_1->SessionInfo).TargetType = local_9c._1_1_;
      (param_1->SessionInfo).InstanceId.A = (undefined4)local_98;
      (param_1->SessionInfo).InstanceId.B = local_98._4_4_;
      (param_1->SessionInfo).InstanceId.C = (undefined4)uStack_90;
      (param_1->SessionInfo).InstanceId.D = uStack_90._4_4_;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_78,(FWriteAccessScope *)&local_48);
      if ((local_68 != 0) && (FStack_70.Data != (FScriptContainerElement *)0x0)) {
        (*(code *)**(undefined8 **)FStack_70.Data)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_70,0,0,0x10);
        local_68 = 0;
      }
      if (local_48.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
      }
      if (FStack_70.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_70.Data);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_78.AccessDetector);
      if ((FScriptContainerElement *)local_88._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_88._0_8_);
      }
      if (local_b0.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b0.Data);
      }
      if (local_c0.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_c0.Data);
      }
      if (local_d0.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_d0.Data);
      }
      if (local_e0.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_e0.Data);
      }
      if (local_f0.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_f0.Data);
      }
      if (local_100.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_100.Data);
      }
      if (local_110 != (void *)0x0) {
        FMemory::Free(local_110);
      }
      if (local_res8 != (undefined8 *)0x0) {
        (**(code **)*local_res8)(local_res8,1);
      }
    }
  }
  return;
}

// operator() @ 15057de00

bool __thiscall
`FStateTreeDebugger::UpdateAnalysisTransitionType'::__l4::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<8421475245822575325>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<8421475245822575325>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

