// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 12

// FWorkQueueTickFunction @ 1488095c0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FWorkQueueTickFunction * __thiscall
UE::Tick::FWorkQueueTickFunction::FWorkQueueTickFunction(FWorkQueueTickFunction *this)

{
  byte *pbVar1;
  void *pvVar2;
  ulonglong uVar3;
  
  FTickFunction::FTickFunction((FTickFunction *)this);
  pbVar1 = (byte *)((longlong)&this->_padding_ + 3);
  *pbVar1 = *pbVar1 | 1;
  pbVar1 = (byte *)((longlong)&this->_padding_ + 2);
  *pbVar1 = *pbVar1 | 6;
  uVar3 = (ulonglong)_tls_index;
  this->_padding_ = (longlong)&___7FWorkQueueTickFunction_Tick_UE__6B_;
  (this->DebugName).ComparisonIndex = 0;
  (this->DebugName).Number = 0;
  (this->DebugDetailString).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DebugDetailString).Data.ArrayNum = 0;
  (this->DebugDetailString).Data.ArrayMax = 0;
  (this->QueuedWork).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->QueuedWork).ArrayNum = 0;
  pvVar2 = ThreadLocalStoragePointer;
  (this->QueuedWork).ArrayMax = 0;
  this->bSetAsOpen = true;
  this->bClearAfterExecute = true;
  this->bOpenAfterExecute = true;
  this->WorkExecutionIndex = -1;
  if (*(int *)(*(longlong *)((longlong)pvVar2 + uVar3 * 8) + 0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&QueueWorkTickFunction,"QueueWorkTickFunction");
      _Init_thread_footer(&::_TSS0);
    }
  }
  this->DebugName = QueueWorkTickFunction;
  return this;
}

// ~FWorkQueueTickFunction @ 14880d0b0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UE::Tick::FWorkQueueTickFunction::~FWorkQueueTickFunction(FWorkQueueTickFunction *this)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  
  this->_padding_ = (longlong)&___7FWorkQueueTickFunction_Tick_UE__6B_;
  if (this->WorkExecutionIndex != -1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsWorkExecuting()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TaskSyncManager.cpp"
                       ,0xc2,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  DestructItems<TUniqueFunction<void___cdecl(void)>,int>
            ((TUniqueFunction<void___cdecl(void)> *)(this->QueuedWork).AllocatorInstance.Data,
             (this->QueuedWork).ArrayNum);
  pFVar1 = (this->QueuedWork).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->DebugDetailString).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FTickFunction::~FTickFunction((FTickFunction *)this);
  return;
}

// AddWork @ 14881a360

bool __thiscall
UE::Tick::FWorkQueueTickFunction::AddWork
          (FWorkQueueTickFunction *this,TUniqueFunction<void___cdecl(void)> *param_1)

{
  int *piVar1;
  TUniqueFunction<void___cdecl(void)> *pTVar2;
  code *pcVar3;
  longlong lVar4;
  bool bVar5;
  undefined1 uVar6;
  int iVar7;
  FScriptContainerElement *pFVar8;
  
  if (this->WorkExecutionIndex != -1) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsWorkExecuting()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TaskSyncManager.cpp"
                       ,0xcc,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      uVar6 = (*pcVar3)();
      return (bool)uVar6;
    }
  }
  if ((this->WorkExecutionIndex == -1) && (this->bSetAsOpen != false)) {
    pTVar2 = (TUniqueFunction<void___cdecl(void)> *)(this->QueuedWork).AllocatorInstance.Data;
    if ((pTVar2 <= param_1) && (param_1 < pTVar2 + (this->QueuedWork).ArrayMax)) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        uVar6 = (*pcVar3)();
        return (bool)uVar6;
      }
    }
    iVar7 = (this->QueuedWork).ArrayNum;
    piVar1 = &(this->QueuedWork).ArrayMax;
    if (iVar7 == *piVar1) {
      iVar7 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x1030,&(this->QueuedWork).AllocatorInstance,piVar1);
    }
    (this->QueuedWork).ArrayNum = iVar7 + 1;
    pFVar8 = (this->QueuedWork).AllocatorInstance.Data + (longlong)iVar7 * 0x30;
    *(longlong *)pFVar8 = *(longlong *)param_1;
    *(longlong *)(pFVar8 + 0x28) = *(longlong *)&param_1->field_0x28;
    *(undefined8 *)&param_1->field_0x28 = 0;
    lVar4 = *(longlong *)&param_1->field_0x18;
    *(longlong *)(pFVar8 + 0x10) = *(longlong *)&param_1->field_0x10;
    *(longlong *)(pFVar8 + 0x18) = lVar4;
    *(longlong *)(pFVar8 + 0x20) = *(longlong *)&param_1->field_0x20;
    if (*(longlong *)pFVar8 != 0) {
      *(undefined8 *)param_1 = 0;
    }
    return true;
  }
  return false;
}

// ClearWork @ 148829fe0

void __thiscall UE::Tick::FWorkQueueTickFunction::ClearWork(FWorkQueueTickFunction *this)

{
  int *piVar1;
  int iVar2;
  TUniqueFunction<void___cdecl(void)> *pTVar3;
  code *pcVar4;
  bool bVar5;
  
  if (this->WorkExecutionIndex != -1) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsWorkExecuting()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TaskSyncManager.cpp"
                       ,0xd8,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  piVar1 = &(this->QueuedWork).ArrayMax;
  pTVar3 = (TUniqueFunction<void___cdecl(void)> *)(this->QueuedWork).AllocatorInstance.Data;
  iVar2 = (this->QueuedWork).ArrayNum;
  if (-1 < (this->QueuedWork).ArrayMax) {
    DestructItems<TUniqueFunction<void___cdecl(void)>,int>(pTVar3,iVar2);
    (this->QueuedWork).ArrayNum = 0;
    return;
  }
  DestructItems<TUniqueFunction<void___cdecl(void)>,int>(pTVar3,iVar2);
  (this->QueuedWork).ArrayNum = 0;
  if (*piVar1 != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,0x10,0,&(this->QueuedWork).AllocatorInstance,0,piVar1);
  }
  return;
}

// DiagnosticContext @ 14882f940

FName __thiscall
UE::Tick::FWorkQueueTickFunction::DiagnosticContext(FWorkQueueTickFunction *this,bool param_1)

{
  undefined8 *puVar1;
  undefined7 in_register_00000011;
  FName this_00;
  wchar_t *pwVar2;
  char in_R8B;
  void *local_18 [2];
  
  this_00._1_7_ = in_register_00000011;
  this_00.ComparisonIndex.Value._0_1_ = param_1;
  if ((in_R8B == '\0') || ((this->DebugDetailString).Data.ArrayNum < 2)) {
    *(FName *)this_00 = this->DebugName;
  }
  else {
    puVar1 = (undefined8 *)(**(code **)(this->_padding_ + 0x20))(this,local_18);
    if (*(int *)(puVar1 + 1) == 0) {
      pwVar2 = L"";
    }
    else {
      pwVar2 = (wchar_t *)*puVar1;
    }
    ::FName::FName((FName *)this_00,pwVar2);
    if (local_18[0] != (void *)0x0) {
      FMemory::Free(local_18[0]);
      return this_00;
    }
  }
  return this_00;
}

// DiagnosticMessage @ 14882fa10

FString * __thiscall
UE::Tick::FWorkQueueTickFunction::DiagnosticMessage
          (FWorkQueueTickFunction *this,FString *__return_storage_ptr__)

{
  FString local_18;
  
  ::FName::ToString(&this->DebugName,&local_18);
  ::FString::PrintfImpl(__return_storage_ptr__,L"%s:%s");
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// ExecuteTick @ 148836580

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::Tick::FWorkQueueTickFunction::ExecuteTick
          (FWorkQueueTickFunction *this,float param_1,ELevelTick param_2,Type param_3,
          TRefCountPtr<FBaseGraphTask> *param_4)

{
  TArray<TUniqueFunction<void___cdecl(void)>,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  TUniqueFunction<void___cdecl(void)> *pTVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  undefined8 uVar8;
  FScriptContainerElement *pFVar9;
  uint uVar10;
  FScriptContainerElement *pFVar11;
  bool bVar12;
  
  bVar12 = -1 < CpuChannel->Enabled;
  if (bVar12) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId222,"WorkQueueTickFunction_ExecuteWork",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TaskSyncManager.cpp"
               ,0xde);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId222);
  }
  if ((this->WorkExecutionIndex != -1) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("!IsWorkExecuting()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TaskSyncManager.cpp"
                         ,0xdf,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pTVar1 = &this->QueuedWork;
  this->WorkExecutionIndex = 0;
  if (0 < (this->QueuedWork).ArrayNum) {
    uVar10 = 0;
    do {
      uVar7 = 0;
      if ((int)uVar10 < (this->QueuedWork).ArrayNum) {
        uVar7 = ~uVar10 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar11 = (pTVar1->AllocatorInstance).Data + (longlong)(int)uVar10 * 0x30;
      Core::Private::Function::CheckCallable(*(void **)pFVar11);
      pcVar5 = *(code **)pFVar11;
      pFVar9 = *(FScriptContainerElement **)(pFVar11 + 0x28);
      if (*(FScriptContainerElement **)(pFVar11 + 0x28) == (FScriptContainerElement *)0x0) {
        pFVar9 = pFVar11 + 0x10;
      }
      uVar8 = (**(code **)(*(longlong *)pFVar9 + 8))();
      (*pcVar5)(uVar8);
      this->WorkExecutionIndex = this->WorkExecutionIndex + 1;
      uVar10 = this->WorkExecutionIndex;
    } while ((int)uVar10 < (this->QueuedWork).ArrayNum);
  }
  this->WorkExecutionIndex = -1;
  if (this->bClearAfterExecute != false) {
    piVar2 = &(this->QueuedWork).ArrayMax;
    pTVar4 = (TUniqueFunction<void___cdecl(void)> *)(pTVar1->AllocatorInstance).Data;
    iVar3 = (this->QueuedWork).ArrayNum;
    if (*piVar2 < 0) {
      DestructItems<TUniqueFunction<void___cdecl(void)>,int>(pTVar4,iVar3);
      (this->QueuedWork).ArrayNum = 0;
      if (*piVar2 != 0) {
        Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x30,0x10,0,&pTVar1->AllocatorInstance,0,piVar2);
      }
    }
    else {
      DestructItems<TUniqueFunction<void___cdecl(void)>,int>(pTVar4,iVar3);
      (this->QueuedWork).ArrayNum = 0;
    }
  }
  if (this->bOpenAfterExecute != false) {
    this->bSetAsOpen = true;
  }
  if (!bVar12) {
    return;
  }
  FCpuProfilerTrace::OutputEndEvent();
  return;
}

// ExecuteWork @ 148836590

void __thiscall UE::Tick::FWorkQueueTickFunction::ExecuteWork(FWorkQueueTickFunction *this)

{
  TArray<TUniqueFunction<void___cdecl(void)>,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  TUniqueFunction<void___cdecl(void)> *pTVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  undefined8 uVar8;
  FScriptContainerElement *pFVar9;
  uint uVar10;
  FScriptContainerElement *pFVar11;
  bool bVar12;
  
  bVar12 = -1 < CpuChannel->Enabled;
  if (bVar12) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId222,"WorkQueueTickFunction_ExecuteWork",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TaskSyncManager.cpp"
               ,0xde);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId222);
  }
  if ((this->WorkExecutionIndex != -1) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("!IsWorkExecuting()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TaskSyncManager.cpp"
                         ,0xdf,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pTVar1 = &this->QueuedWork;
  this->WorkExecutionIndex = 0;
  if (0 < (this->QueuedWork).ArrayNum) {
    uVar10 = 0;
    do {
      uVar7 = 0;
      if ((int)uVar10 < (this->QueuedWork).ArrayNum) {
        uVar7 = ~uVar10 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar11 = (pTVar1->AllocatorInstance).Data + (longlong)(int)uVar10 * 0x30;
      Core::Private::Function::CheckCallable(*(void **)pFVar11);
      pcVar5 = *(code **)pFVar11;
      pFVar9 = *(FScriptContainerElement **)(pFVar11 + 0x28);
      if (*(FScriptContainerElement **)(pFVar11 + 0x28) == (FScriptContainerElement *)0x0) {
        pFVar9 = pFVar11 + 0x10;
      }
      uVar8 = (**(code **)(*(longlong *)pFVar9 + 8))();
      (*pcVar5)(uVar8);
      this->WorkExecutionIndex = this->WorkExecutionIndex + 1;
      uVar10 = this->WorkExecutionIndex;
    } while ((int)uVar10 < (this->QueuedWork).ArrayNum);
  }
  this->WorkExecutionIndex = -1;
  if (this->bClearAfterExecute != false) {
    piVar2 = &(this->QueuedWork).ArrayMax;
    pTVar4 = (TUniqueFunction<void___cdecl(void)> *)(pTVar1->AllocatorInstance).Data;
    iVar3 = (this->QueuedWork).ArrayNum;
    if (*piVar2 < 0) {
      DestructItems<TUniqueFunction<void___cdecl(void)>,int>(pTVar4,iVar3);
      (this->QueuedWork).ArrayNum = 0;
      if (*piVar2 != 0) {
        Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x30,0x10,0,&pTVar1->AllocatorInstance,0,piVar2);
      }
    }
    else {
      DestructItems<TUniqueFunction<void___cdecl(void)>,int>(pTVar4,iVar3);
      (this->QueuedWork).ArrayNum = 0;
    }
  }
  if (this->bOpenAfterExecute != false) {
    this->bSetAsOpen = true;
  }
  if (!bVar12) {
    return;
  }
  FCpuProfilerTrace::OutputEndEvent();
  return;
}

// SetClearAfterExecute @ 148858710

void __thiscall
UE::Tick::FWorkQueueTickFunction::SetClearAfterExecute(FWorkQueueTickFunction *this,bool param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (this->WorkExecutionIndex == -1) {
    this->bClearAfterExecute = param_1;
    return;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("!IsWorkExecuting()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TaskSyncManager.cpp"
                     ,0x10f,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  this->bClearAfterExecute = param_1;
  return;
}

// SetDebugName @ 1488589b0

void __thiscall
UE::Tick::FWorkQueueTickFunction::SetDebugName
          (FWorkQueueTickFunction *this,FName param_1,FString *param_2)

{
  this->DebugName = param_1;
  ::FString::operator=(&this->DebugDetailString,param_2);
  return;
}

// SetOpenAfterExecute @ 1488595c0

void __thiscall
UE::Tick::FWorkQueueTickFunction::SetOpenAfterExecute(FWorkQueueTickFunction *this,bool param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (this->WorkExecutionIndex == -1) {
    this->bClearAfterExecute = param_1;
    return;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("!IsWorkExecuting()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TaskSyncManager.cpp"
                     ,0x115,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  this->bClearAfterExecute = param_1;
  return;
}

// SetQueueOpen @ 1488597e0

void __thiscall
UE::Tick::FWorkQueueTickFunction::SetQueueOpen(FWorkQueueTickFunction *this,bool param_1)

{
  this->bSetAsOpen = param_1;
  return;
}

