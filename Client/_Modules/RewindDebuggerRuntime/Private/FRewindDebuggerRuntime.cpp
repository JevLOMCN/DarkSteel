// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RewindDebuggerRuntime
// Functions: 13

// <lambda_invoker_cdecl> @ 14cd8ba30

void __cdecl
`RewindDebugger::FRewindDebuggerRuntime::StartRecording'::__l2::<lambda_1>::<lambda_invoker_cdecl>
          (IRewindDebuggerRuntimeExtension *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014cd8ba33. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*param_1 + 0x18))();
  return;
}

// <lambda_invoker_cdecl> @ 14cd8ba40

void __cdecl
`RewindDebugger::FRewindDebuggerRuntime::StopRecording'::__l5::<lambda_1>::<lambda_invoker_cdecl>
          (IRewindDebuggerRuntimeExtension *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014cd8ba43. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*param_1 + 0x10))();
  return;
}

// <lambda_invoker_cdecl> @ 14cd8ba50

void __cdecl
`RewindDebugger::FRewindDebuggerRuntime::StartRecording'::__l2::<lambda_2>::<lambda_invoker_cdecl>
          (IRewindDebuggerRuntimeExtension *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014cd8ba53. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*param_1 + 8))();
  return;
}

// Initialize @ 14cd8c550

void __cdecl RewindDebugger::FRewindDebuggerRuntime::Initialize(void)

{
  InternalInstance = ::operator_new(0x68);
  if (InternalInstance != (FRewindDebuggerRuntime *)0x0) {
    *(undefined4 *)&InternalInstance->field_0x61 = 0;
    *(undefined2 *)&InternalInstance->field_0x65 = 0;
    InternalInstance->field_0x67 = 0;
    *(undefined8 *)&InternalInstance->RecordingStarted = 0;
    *(undefined8 *)&(InternalInstance->RecordingStarted).field_0x8 = 0;
    *(undefined8 *)&(InternalInstance->RecordingStarted).field_0x10 = 0;
    *(undefined8 *)&(InternalInstance->RecordingStarted).field_0x18 = 2;
    *(undefined8 *)&InternalInstance->ClearRecording = 0;
    *(undefined8 *)&(InternalInstance->ClearRecording).field_0x8 = 0;
    *(undefined8 *)&(InternalInstance->ClearRecording).field_0x10 = 0;
    *(undefined8 *)&(InternalInstance->ClearRecording).field_0x18 = 2;
    *(undefined8 *)&InternalInstance->RecordingStopped = 0;
    *(undefined8 *)&(InternalInstance->RecordingStopped).field_0x8 = 0;
    *(undefined8 *)&(InternalInstance->RecordingStopped).field_0x10 = 0;
    *(undefined8 *)&(InternalInstance->RecordingStopped).field_0x18 = 2;
    InternalInstance->bIsRecording = false;
    return;
  }
  InternalInstance = (FRewindDebuggerRuntime *)0x0;
  return;
}

// Shutdown @ 14cd8c730

void __cdecl RewindDebugger::FRewindDebuggerRuntime::Shutdown(void)

{
  void *pvVar1;
  FRewindDebuggerRuntime *this;
  
  this = InternalInstance;
  if (InternalInstance != (FRewindDebuggerRuntime *)0x0) {
    DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
              (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
                &(InternalInstance->RecordingStopped).field_0x8,
               *(int *)&(InternalInstance->RecordingStopped).field_0x10);
    pvVar1 = *(void **)&(this->RecordingStopped).field_0x8;
    if (pvVar1 != (void *)0x0) {
      FMemory::Free(pvVar1);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)&this->RecordingStopped);
    DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
              (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
                &(this->ClearRecording).field_0x8,*(int *)&(this->ClearRecording).field_0x10);
    pvVar1 = *(void **)&(this->ClearRecording).field_0x8;
    if (pvVar1 != (void *)0x0) {
      FMemory::Free(pvVar1);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)&this->ClearRecording);
    DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
              (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
                &(this->RecordingStarted).field_0x8,*(int *)&(this->RecordingStarted).field_0x10);
    pvVar1 = *(void **)&(this->RecordingStarted).field_0x8;
    if (pvVar1 != (void *)0x0) {
      FMemory::Free(pvVar1);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)this);
    ::operator_delete(this,0x68);
  }
  InternalInstance = (FRewindDebuggerRuntime *)0x0;
  return;
}

// StartRecording @ 14cd8c7e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
RewindDebugger::FRewindDebuggerRuntime::StartRecording
          (FRewindDebuggerRuntime *this,EConnectionType param_1,wchar_t *param_2)

{
  UWorld *pUVar1;
  APawn *pAVar2;
  code *pcVar3;
  bool bVar4;
  EInternalObjectFlags EVar5;
  uint uVar6;
  UClass *pUVar7;
  AActor *pAVar8;
  AController *pAVar9;
  UObject *pUVar10;
  longlong lVar11;
  uint uVar12;
  FOptions local_res8 [2];
  UClass *local_res20;
  TObjectIterator<UWorld> local_108;
  TActorIteratorBase<TActorIterator<AController>_> local_e8;
  code *local_88 [2];
  undefined **local_78;
  code *local_70;
  undefined8 local_60;
  code *local_58 [2];
  undefined **local_48;
  code *local_40;
  undefined8 local_30;
  
  FObjectTrace::Reset();
  TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
            (&this->ClearRecording);
  local_70 = `RewindDebugger::FRewindDebuggerRuntime::StartRecording'::__l2::<lambda_1>::
             <lambda_invoker_cdecl>;
  local_60 = 0;
  local_78 = &
             ___7__TFunction_OwnedObject_P6AXPEAVIRewindDebuggerRuntimeExtension___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  local_88[0] = UE::Core::Private::Function::
                TFunctionRefCaller<void_(__cdecl*)(IRewindDebuggerRuntimeExtension_*),void,IRewindDebuggerRuntimeExtension_*>
                ::Call;
  IterateExtensions((TFunction<void___cdecl(IRewindDebuggerRuntimeExtension_*)> *)local_88);
  UE::Trace::EnumerateChannels
            (`RewindDebugger::DisableAllTraceChannels'::__l2::<lambda_1>::<lambda_invoker_cdecl>,
             (void *)0x0);
  local_res8[0].bNoWorkerThread = false;
  local_res8[0].bTruncateFile = false;
  local_res8[0].bExcludeTail = true;
  FTraceAuxiliary::Start
            (param_1,param_2,L"",local_res8,(FLogCategoryBase *)&LogRewindDebuggerRuntime);
  UE::Trace::ToggleChannel(L"Object",true);
  UE::Trace::ToggleChannel(L"ObjectProperties",true);
  UE::Trace::ToggleChannel(L"Frame",true);
  this->bIsRecording = true;
  local_40 = `RewindDebugger::FRewindDebuggerRuntime::StartRecording'::__l2::<lambda_2>::
             <lambda_invoker_cdecl>;
  local_30 = 0;
  local_48 = &
             ___7__TFunction_OwnedObject_P6AXPEAVIRewindDebuggerRuntimeExtension___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  local_58[0] = UE::Core::Private::Function::
                TFunctionRefCaller<void_(__cdecl*)(IRewindDebuggerRuntimeExtension_*),void,IRewindDebuggerRuntimeExtension_*>
                ::Call;
  IterateExtensions((TFunction<void___cdecl(IRewindDebuggerRuntimeExtension_*)> *)local_58);
  local_108.ObjectArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_108.ObjectArray.ArrayNum = 0;
  local_108.ObjectArray.ArrayMax = 0;
  local_108.Index = 0xffffffff;
  EVar5 = UE::GetAsyncLoadingInternalFlagsExclusion();
  pUVar7 = Z_Construct_UClass_UWorld_NoRegister();
  GetObjectsOfClass(pUVar7,&local_108.ObjectArray,true,RF_ClassDefaultObject,
                    EVar5 | (PendingConstruction|Unreachable|AutoRTFMConstructionAborted));
  while( true ) {
    TObjectIterator<UWorld>::Advance(&local_108);
    lVar11 = (longlong)local_108.Index;
    if (local_108.Index < 0) break;
    if (local_108.ObjectArray.ArrayNum <= local_108.Index) break;
    uVar12 = 0;
    uVar6 = uVar12;
    if (local_108.Index < local_108.ObjectArray.ArrayNum) {
      uVar6 = (uint)~local_108.Index >> 0x1f;
    }
    if (uVar6 == 0) {
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
    FObjectTrace::ResetWorldElapsedTime
              (*(UWorld **)(local_108.ObjectArray.AllocatorInstance.Data + lVar11 * 8));
    lVar11 = (longlong)local_108.Index;
    uVar6 = uVar12;
    if (local_108.Index < local_108.ObjectArray.ArrayNum) {
      uVar6 = (uint)~local_108.Index >> 0x1f;
    }
    if (uVar6 == 0) {
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
    FObjectTrace::OutputWorld
              (*(UWorld **)(local_108.ObjectArray.AllocatorInstance.Data + lVar11 * 8));
    pUVar7 = Z_Construct_UClass_AController_NoRegister();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar7);
    }
    lVar11 = (longlong)local_108.Index;
    if (local_108.Index < local_108.ObjectArray.ArrayNum) {
      uVar12 = (uint)~local_108.Index >> 0x1f;
    }
    if (uVar12 == 0) {
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
    pUVar1 = *(UWorld **)(local_108.ObjectArray.AllocatorInstance.Data + lVar11 * 8);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar7);
    }
    local_e8.Flags = OnlyActiveLevels|SkipPendingKill;
    local_e8.State.bIsSet = false;
    local_res20 = pUVar7;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar7);
    }
    FActorIteratorState::FActorIteratorState
              (&local_e8.State.TypedValue,pUVar1,(TSubclassOf<AActor>)&local_res20);
    local_e8.State.bIsSet = true;
LAB_14cd8caa1:
    while( true ) {
      TActorIteratorBase<TActorIterator<AController>_>::operator++(&local_e8);
      if (local_e8.State.bIsSet == false) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x1bd,
                           L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                          );
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      if (local_e8.State.TypedValue.ReachedEnd != false) break;
      if (local_e8.State.bIsSet == false) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x1bd,
                           L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                          );
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      pAVar8 = FActorIteratorState::GetActorChecked(&local_e8.State.TypedValue);
      pAVar9 = CastChecked<AController,AActor>(pAVar8);
      pAVar2 = (pAVar9->Pawn).field0_0x0.DebugPtr;
      if (UE::GC::GIsIncrementalReachabilityPending == false) goto LAB_14cd8cb43;
      if (pAVar2 != (APawn *)0x0) {
        UE::GC::MarkAsReachable((UObject *)pAVar2);
        goto LAB_14cd8cb4c;
      }
    }
    if (local_e8.State.bIsSet != false) {
      UWorld::RemoveOnActorSpawnedHandler
                (local_e8.State.TypedValue.CurrentWorld,
                 local_e8.State.TypedValue.ActorSpawnedDelegateHandle);
      if (local_e8.State.TypedValue.SpawnedActorArray.AllocatorInstance.Data !=
          (FScriptContainerElement *)0x0) {
        FMemory::Free(local_e8.State.TypedValue.SpawnedActorArray.AllocatorInstance.Data);
      }
      if (local_e8.State.TypedValue.ActorArray.AllocatorInstance.Data !=
          (FScriptContainerElement *)0x0) {
        FMemory::Free(local_e8.State.TypedValue.ActorArray.AllocatorInstance.Data);
      }
    }
  }
  if (local_108.ObjectArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_108.ObjectArray.AllocatorInstance.Data);
  }
  TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
            (&this->RecordingStarted);
  return;
LAB_14cd8cb43:
  if (pAVar2 != (APawn *)0x0) {
LAB_14cd8cb4c:
    if (local_e8.State.bIsSet == false) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pAVar8 = FActorIteratorState::GetActorChecked(&local_e8.State.TypedValue);
    pAVar9 = CastChecked<AController,AActor>(pAVar8);
    bVar4 = FTraceFilter::IsObjectTraceable<1>((UObject *)pAVar9);
    if (!bVar4) {
      if (pAVar9 == (AController *)0x0) goto LAB_14cd8caa1;
      pUVar10 = (UObject *)(**(code **)(pAVar9->_padding_ + 0x180))(pAVar9);
      bVar4 = FTraceFilter::IsObjectTraceable<1>(pUVar10);
      if (!bVar4) goto LAB_14cd8caa1;
    }
    bVar4 = FTraceFilter::IsObjectTraceable<1>((UObject *)pAVar2);
    if (!bVar4) {
      pUVar10 = (UObject *)(**(code **)(pAVar2->_padding_ + 0x180))(pAVar2);
      bVar4 = FTraceFilter::IsObjectTraceable<1>(pUVar10);
      if (!bVar4) goto LAB_14cd8caa1;
    }
    if (local_e8.State.bIsSet == false) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pAVar8 = FActorIteratorState::GetActorChecked(&local_e8.State.TypedValue);
    pAVar9 = CastChecked<AController,AActor>(pAVar8);
    FObjectTrace::OutputPawnPossess((UObject *)pAVar9,(UObject *)pAVar2);
  }
  goto LAB_14cd8caa1;
}

// StartRecording @ 14cd8ccb0

void __thiscall RewindDebugger::FRewindDebuggerRuntime::StartRecording(FRewindDebuggerRuntime *this)

{
  StartRecording(this,Network,L"127.0.0.1");
  return;
}

// StartRecordingWithArgs @ 14cd8ccd0

void __thiscall
RewindDebugger::FRewindDebuggerRuntime::StartRecordingWithArgs
          (FRewindDebuggerRuntime *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  bool bVar2;
  wchar_t *pwVar3;
  TArray<FString,TSizedDefaultAllocator<32>_> *this_00;
  EConnectionType EVar4;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar5;
  ForAnyElementType FVar6;
  TArray<FString,TSizedDefaultAllocator<32>_> *local_res10;
  FString local_58;
  FString local_48;
  TArray<FString,TSizedDefaultAllocator<32>_> local_38;
  
  iVar1 = param_1->ArrayNum;
  if (0 < iVar1) {
    this_00 = (TArray<FString,TSizedDefaultAllocator<32>_> *)(param_1->AllocatorInstance).Data;
    EVar4 = None;
    local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    pTVar5 = this_00 + iVar1;
    local_58.Data.ArrayNum = 0;
    local_58.Data.ArrayMax = 0;
LAB_14cd8cd22:
    do {
      if (param_1->ArrayNum != iVar1) {
        `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&local_res10);
      }
      if (this_00 == pTVar5) goto LAB_14cd8cea7;
      bVar2 = ::FString::StartsWith((FString *)this_00,L"-tracefile",10,IgnoreCase);
      if (bVar2) {
        if (EVar4 != None) {
          local_res10 = param_1;
          `RewindDebugger::FRewindDebuggerRuntime::StartRecordingWithArgs'::__l12::<lambda_1>::
          operator()(&local_res10);
        }
        EVar4 = File;
        if (this_00->ArrayNum == 0) {
          pwVar3 = L"";
        }
        else {
          pwVar3 = (wchar_t *)(this_00->AllocatorInstance).Data;
        }
        bVar2 = FParse::Value(pwVar3,L"-tracefile=",&local_58,true,(wchar_t **)0x0);
        if (bVar2) {
          FText::FText((FText *)&local_38);
          bVar2 = FFileHelper::IsFilenameValidForSaving(&local_58,(FText *)&local_38);
          if (!bVar2) {
            local_res10 = &local_38;
            `RewindDebugger::FRewindDebuggerRuntime::StartRecordingWithArgs'::__l18::<lambda_2>::
            operator()(&local_res10);
            ::FString::FString(&local_48,"");
            if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_58.Data.AllocatorInstance.Data);
            }
            local_58.Data.AllocatorInstance.Data = local_48.Data.AllocatorInstance.Data;
            local_58.Data.ArrayNum = local_48.Data.ArrayNum;
            local_58.Data.ArrayMax = local_48.Data.ArrayMax;
            local_48.Data.ArrayNum = 0;
            local_48.Data.ArrayMax = 0;
            local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          }
          if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            (**(code **)(*(longlong *)local_38.AllocatorInstance.Data + 0x10))();
            this_00 = this_00 + 1;
            goto LAB_14cd8cd22;
          }
        }
LAB_14cd8ce9e:
        this_00 = this_00 + 1;
        goto LAB_14cd8cd22;
      }
      bVar2 = ::FString::StartsWith((FString *)this_00,L"-tracehost",10,IgnoreCase);
      if (!bVar2) {
        local_res10 = this_00;
        `RewindDebugger::FRewindDebuggerRuntime::StartRecordingWithArgs'::__l27::<lambda_4>::
        operator()(&local_res10);
        goto LAB_14cd8ce9e;
      }
      if (EVar4 != None) {
        local_res10 = param_1;
        `RewindDebugger::FRewindDebuggerRuntime::StartRecordingWithArgs'::__l22::<lambda_3>::
        operator()(&local_res10);
      }
      EVar4 = Network;
      if (this_00->ArrayNum == 0) {
        pwVar3 = L"";
      }
      else {
        pwVar3 = (wchar_t *)(this_00->AllocatorInstance).Data;
      }
      FParse::Value(pwVar3,L"-tracehost=",&local_58,true,(wchar_t **)0x0);
      this_00 = this_00 + 1;
    } while( true );
  }
LAB_14cd8cef3:
  StartRecording(this,Network,L"127.0.0.1");
  return;
LAB_14cd8cea7:
  if (EVar4 != None) {
    FVar6.Data = (FScriptContainerElement *)L"";
    if (local_58.Data.ArrayNum != 0) {
      FVar6.Data = local_58.Data.AllocatorInstance.Data;
    }
    StartRecording(this,EVar4,(wchar_t *)FVar6.Data);
    if (local_58.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
      return;
    }
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
    return;
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  goto LAB_14cd8cef3;
}

// StopRecording @ 14cd8cf20

void __thiscall RewindDebugger::FRewindDebuggerRuntime::StopRecording(FRewindDebuggerRuntime *this)

{
  code *local_38 [2];
  undefined **local_28;
  code *local_20;
  undefined8 local_10;
  
  if (this->bIsRecording != false) {
    local_10 = 0;
    local_28 = &
               ___7__TFunction_OwnedObject_P6AXPEAVIRewindDebuggerRuntimeExtension___Z_0A__0A__Function_Private_Core_UE__6B_
    ;
    local_20 = `RewindDebugger::FRewindDebuggerRuntime::StopRecording'::__l5::<lambda_1>::
               <lambda_invoker_cdecl>;
    local_38[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<void_(__cdecl*)(IRewindDebuggerRuntimeExtension_*),void,IRewindDebuggerRuntimeExtension_*>
                  ::Call;
    IterateExtensions((TFunction<void___cdecl(IRewindDebuggerRuntimeExtension_*)> *)local_38);
    this->bIsRecording = false;
    UE::Trace::EnumerateChannels
              (`RewindDebugger::DisableAllTraceChannels'::__l2::<lambda_1>::<lambda_invoker_cdecl>,
               (void *)0x0);
    FTraceAuxiliary::Stop();
    TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
              (&this->RecordingStopped);
    return;
  }
  return;
}

// operator() @ 1505775d0

bool __thiscall
`RewindDebugger::FRewindDebuggerRuntime::StartRecordingWithArgs'::__l12::<lambda_1>::operator()
          (void *this)

{
  longlong *plVar1;
  code *pcVar2;
  longlong lVar3;
  bool bVar4;
  undefined1 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  bool bVar8;
  int iVar9;
  uint local_res10 [2];
  FString local_28;
  
  bVar8 = false;
  local_res10[0] = 0;
  bVar4 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<6660366692561977414>);
  if (bVar4) {
    plVar1 = *(longlong **)this;
    bVar4 = true;
    local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_28.Data.ArrayNum = 0;
    local_28.Data.ArrayMax = 0;
    puVar6 = (undefined8 *)*plVar1;
    lVar3 = plVar1[1];
    puVar7 = puVar6 + (longlong)(int)lVar3 * 2;
    while( true ) {
      if ((int)plVar1[1] != (int)lVar3) {
        local_res10[0] = local_res10[0] & 0xffffff00;
        `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res10);
      }
      if (puVar6 == puVar7) break;
      if (bVar4) {
        bVar4 = false;
      }
      else {
        ::FString::AppendChars(&local_28,L" ",1);
      }
      iVar9 = *(int *)(puVar6 + 1) + -1;
      if (*(int *)(puVar6 + 1) == 0) {
        iVar9 = 0;
      }
      ::FString::AppendChars(&local_28,(wchar_t *)*puVar6,iVar9);
      puVar6 = puVar6 + 2;
    }
    bVar8 = true;
    bVar4 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<6660366692561977414>,&::ENSURE_Static);
    if (bVar4) {
      bVar4 = true;
      goto LAB_1505776cd;
    }
  }
  bVar4 = false;
  if (!bVar8) {
    return false;
  }
LAB_1505776cd:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (!bVar4) {
    return false;
  }
  pcVar2 = (code *)swi(3);
  uVar5 = (*pcVar2)();
  return (bool)uVar5;
}

// operator() @ 150577700

bool __thiscall
`RewindDebugger::FRewindDebuggerRuntime::StartRecordingWithArgs'::__l18::<lambda_2>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<6660366692561977425>);
  if (bVar2) {
    FText::ToString(*(FText **)this);
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<6660366692561977425>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 150577760

bool __thiscall
`RewindDebugger::FRewindDebuggerRuntime::StartRecordingWithArgs'::__l22::<lambda_3>::operator()
          (void *this)

{
  longlong *plVar1;
  code *pcVar2;
  longlong lVar3;
  bool bVar4;
  undefined1 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  bool bVar8;
  int iVar9;
  uint local_res10 [2];
  FString local_28;
  
  bVar8 = false;
  local_res10[0] = 0;
  bVar4 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<6660366692561977432>);
  if (bVar4) {
    plVar1 = *(longlong **)this;
    bVar4 = true;
    local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_28.Data.ArrayNum = 0;
    local_28.Data.ArrayMax = 0;
    puVar6 = (undefined8 *)*plVar1;
    lVar3 = plVar1[1];
    puVar7 = puVar6 + (longlong)(int)lVar3 * 2;
    while( true ) {
      if ((int)plVar1[1] != (int)lVar3) {
        local_res10[0] = local_res10[0] & 0xffffff00;
        `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res10);
      }
      if (puVar6 == puVar7) break;
      if (bVar4) {
        bVar4 = false;
      }
      else {
        ::FString::AppendChars(&local_28,L" ",1);
      }
      iVar9 = *(int *)(puVar6 + 1) + -1;
      if (*(int *)(puVar6 + 1) == 0) {
        iVar9 = 0;
      }
      ::FString::AppendChars(&local_28,(wchar_t *)*puVar6,iVar9);
      puVar6 = puVar6 + 2;
    }
    bVar8 = true;
    bVar4 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<6660366692561977432>,&::ENSURE_Static);
    if (bVar4) {
      bVar4 = true;
      goto LAB_15057785d;
    }
  }
  bVar4 = false;
  if (!bVar8) {
    return false;
  }
LAB_15057785d:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (!bVar4) {
    return false;
  }
  pcVar2 = (code *)swi(3);
  uVar5 = (*pcVar2)();
  return (bool)uVar5;
}

// operator() @ 150577890

bool __thiscall
`RewindDebugger::FRewindDebuggerRuntime::StartRecordingWithArgs'::__l27::<lambda_4>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<6660366692561977443>);
  if ((bVar2) &&
     (bVar2 = UE::Assert::Private::EnsureFailed
                        (&bGEnsureHasExecuted<6660366692561977443>,&::ENSURE_Static), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

