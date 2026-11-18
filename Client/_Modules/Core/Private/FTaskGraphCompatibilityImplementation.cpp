// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 23

// FTaskGraphCompatibilityImplementation @ 14147ed90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FTaskGraphCompatibilityImplementation * __thiscall
FTaskGraphCompatibilityImplementation::FTaskGraphCompatibilityImplementation
          (FTaskGraphCompatibilityImplementation *this,int param_1)

{
  int *piVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  DWORD DVar7;
  uint uVar8;
  uint uVar9;
  FTaskGraphCompatibilityImplementation *pFVar10;
  undefined8 *puVar11;
  FEvent *pFVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  undefined8 *puVar16;
  uint uVar17;
  ulonglong uVar18;
  longlong lVar19;
  undefined8 *puVar20;
  ulonglong uVar21;
  undefined1 auStackY_88 [32];
  undefined4 *local_48;
  longlong local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_88;
  uVar18 = 0;
  this->_padding_ = (longlong)&___7FTaskGraphCompatibilityImplementation__6B_;
  (this->ShutdownCallbacks).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ShutdownCallbacks).ArrayNum = 0;
  (this->ShutdownCallbacks).ArrayMax = 0;
  bVar5 = FForkProcessHelper::IsForkedMultithreadInstance();
  piVar1 = &(this->NamedThreads).ArrayNum;
  piVar2 = &(this->NamedThreads).ArrayMax;
  if (bVar5) {
    param_1 = CVar_ForkedProcess_MaxWorkerThreads;
  }
  this->NumWorkerThreads = param_1;
  (this->NamedThreads).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar6 = 0;
  *piVar1 = 0;
  *piVar2 = 0;
  (this->ReentrancyCheck).Counter = 0;
  this->bReserveWorkersEnabled = (atomic<bool>)0x0;
  if (-1 < TaskTrace::TaskChannel->Enabled) {
    UE::Trace::Private::FLogScope::Enter<TaskTrace::FTaskTraceInitFields>((TLogScope<0> *)&local_48)
    ;
    *local_48 = 0;
    *(undefined8 *)(local_40 + 0x28) = *(undefined8 *)(local_40 + 0x20);
  }
  TaskTrace::bGTaskTraceInitialized = true;
  if (-1 < CpuChannel->Enabled) {
    TaskTrace::ExecuteTaskSpecId =
         (atomic<unsigned_int>)
         FCpuProfilerTrace::OutputEventType
                   ("ExecuteTask",
                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Async\\TaskTrace.cpp"
                    ,0x60);
    LOCK();
    UNLOCK();
  }
  bVar5 = FGenericPlatformProcess::SupportsMultithreading();
  if ((bVar5) ||
     ((bVar5 = FForkProcessHelper::IsForkedMultithreadInstance(), bVar5 &&
      (GAllowTaskGraphForkMultithreading != false)))) {
    iVar6 = 1;
    if (this->NumWorkerThreads < 4) {
      GNumForegroundWorkers = 1;
    }
    iVar14 = this->NumWorkerThreads;
    iVar13 = iVar14;
    if (GNumForegroundWorkers < iVar14) {
      iVar13 = GNumForegroundWorkers;
    }
    iVar13 = iVar14 - iVar13;
    if (iVar13 < 1) {
      iVar13 = 1;
    }
    iVar14 = iVar14 - iVar13;
    this->NumBackgroundWorkers = iVar13;
    if (iVar14 < 1) {
      iVar14 = 1;
    }
    this->NumForegroundWorkers = iVar14;
    bVar5 = FForkProcessHelper::IsForkedMultithreadInstance();
    LowLevelTasks::FScheduler::StartWorkers
              (&LowLevelTasks::FScheduler::Singleton,this->NumForegroundWorkers,
               this->NumBackgroundWorkers,bVar5 ^ NonForkable,TPri_SlightlyBelowNormal,
               TPri_BelowNormal,0,0);
    iVar14 = 3;
  }
  else {
    LowLevelTasks::FScheduler::StopWorkers(&LowLevelTasks::FScheduler::Singleton,true);
    iVar14 = 2;
  }
  this->NumNamedThreads = iVar14;
  iVar14 = this->NumNamedThreads;
  ENamedThreads::bHasBackgroundThreads = iVar6;
  ENamedThreads::bHasHighPriorityThreads = iVar6;
  iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x18,8,iVar14,&(this->NamedThreads).AllocatorInstance,piVar1,piVar2);
  DefaultConstructItems<FWorkerThread,int>
            ((this->NamedThreads).AllocatorInstance.Data + (longlong)iVar6 * 0x18,iVar14);
  if (((this->ReentrancyCheck).Counter != 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("!ReentrancyCheck.GetValue()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Async\\TaskGraph.cpp"
                         ,0x506,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pFVar10 = (FTaskGraphCompatibilityImplementation *)(*pcVar4)();
    return pFVar10;
  }
  LOCK();
  (this->ReentrancyCheck).Counter = (this->ReentrancyCheck).Counter + 1;
  UNLOCK();
  DVar7 = TlsAlloc();
  this->PerThreadIDTLSSlot = DVar7;
  uVar21 = uVar18;
  if (0 < this->NumNamedThreads) {
    do {
      puVar11 = ::operator_new(0x340,0x40);
      puVar20 = (undefined8 *)0x0;
      if (puVar11 != (undefined8 *)0x0) {
        *(undefined4 *)(puVar11 + 2) = 0xff;
        *(undefined4 *)((longlong)puVar11 + 0x14) = 0xffffffff;
        *puVar11 = &FTaskThreadBase::_vftable__for__FRunnable__;
        puVar11[1] = &FTaskThreadBase::_vftable__for__FSingleThreadRunnable__;
        *(int *)((longlong)puVar11 + 0x2c) = 0;
        *(undefined4 *)(puVar11 + 3) = 0;
        ((ForAnyElementType *)(puVar11 + 4))->Data = (FScriptContainerElement *)0x0;
        puVar11[6] = 0;
        *(undefined4 *)(puVar11 + 5) = 0;
        if (*(int *)((longlong)puVar11 + 0x2c) != 0x80) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,0x80,(ForAnyElementType *)(puVar11 + 4),0,(int *)((longlong)puVar11 + 0x2c)
                    );
        }
        *puVar11 = &FNamedTaskThread::_vftable__for__FRunnable__;
        puVar11[1] = &FNamedTaskThread::_vftable__for__FSingleThreadRunnable__;
        puVar16 = puVar11 + 8;
        lVar19 = 2;
        do {
          _vector_constructor_iterator_
                    (puVar16,0x80,2,
                     FLockFreePointerFIFOBase<FBaseGraphTask,64,1>::
                     FLockFreePointerFIFOBase<FBaseGraphTask,64,1>);
          puVar16[0x20] = 0;
          puVar16[0x20] = 0;
          *(undefined4 *)(puVar16 + 0x28) = 0;
          *(undefined2 *)((longlong)puVar16 + 0x144) = 0;
          pFVar12 = FGenericPlatformProcess::GetSynchEventFromPool(false);
          puVar16[0x29] = pFVar12;
          puVar16 = puVar16 + 0x30;
          lVar19 = lVar19 + -1;
          puVar20 = puVar11;
        } while (lVar19 != 0);
      }
      uVar17 = (uint)uVar18;
      uVar15 = ~uVar17 >> 0x1f;
      uVar8 = 0;
      uVar9 = uVar8;
      if ((int)uVar17 < *piVar1) {
        uVar9 = uVar15;
      }
      if ((uVar9 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        pFVar10 = (FTaskGraphCompatibilityImplementation *)(*pcVar4)();
        return pFVar10;
      }
      *(undefined8 **)((this->NamedThreads).AllocatorInstance.Data + uVar21) = puVar20;
      uVar9 = uVar8;
      if ((int)uVar17 < *piVar1) {
        uVar9 = uVar15;
      }
      if ((uVar9 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        pFVar10 = (FTaskGraphCompatibilityImplementation *)(*pcVar4)();
        return pFVar10;
      }
      lVar19 = *(longlong *)((this->NamedThreads).AllocatorInstance.Data + uVar21);
      if ((int)uVar17 < *piVar1) {
        uVar8 = uVar15;
      }
      if ((uVar8 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        pFVar10 = (FTaskGraphCompatibilityImplementation *)(*pcVar4)();
        return pFVar10;
      }
      uVar9 = this->PerThreadIDTLSSlot;
      pFVar3 = (this->NamedThreads).AllocatorInstance.Data;
      *(uint *)(lVar19 + 0x10) = uVar17;
      if (((int)uVar17 < 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("ThreadId >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Async\\TaskGraph.cpp"
                             ,0x204,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        pFVar10 = (FTaskGraphCompatibilityImplementation *)(*pcVar4)();
        return pFVar10;
      }
      *(uint *)(lVar19 + 0x14) = uVar9;
      uVar18 = (ulonglong)(uVar17 + 1);
      *(FScriptContainerElement **)(lVar19 + 0x30) = pFVar3 + (longlong)(int)uVar17 * 0x18;
      uVar21 = uVar21 + 0x18;
    } while ((int)(uVar17 + 1) < this->NumNamedThreads);
  }
  return this;
}

// ~FTaskGraphCompatibilityImplementation @ 141481890

void __thiscall
FTaskGraphCompatibilityImplementation::~FTaskGraphCompatibilityImplementation
          (FTaskGraphCompatibilityImplementation *this)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  longlong *plVar4;
  bool bVar5;
  uint uVar6;
  TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *this_00;
  undefined8 uVar7;
  FScriptContainerElement *pFVar8;
  uint uVar9;
  FScriptContainerElement *pFVar10;
  ulonglong uVar11;
  FScriptContainerElement *pFVar12;
  ulonglong uVar13;
  undefined1 local_res8 [8];
  
  this->_padding_ = (longlong)&___7FTaskGraphCompatibilityImplementation__6B_;
  this_00 = (TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)
            FCoreDelegates::TSConfigReadyForUse();
  TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::RemoveAll(this_00,this);
  iVar2 = (this->ShutdownCallbacks).ArrayNum;
  pFVar10 = (this->ShutdownCallbacks).AllocatorInstance.Data;
  pFVar12 = pFVar10 + (longlong)iVar2 * 0x30;
  while( true ) {
    if ((this->ShutdownCallbacks).ArrayNum != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TFunction<void___cdecl(void)>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar10 == pFVar12) break;
    UE::Core::Private::Function::CheckCallable(*(void **)pFVar10);
    pFVar8 = *(FScriptContainerElement **)(pFVar10 + 0x28);
    pcVar3 = *(code **)pFVar10;
    if (pFVar8 == (FScriptContainerElement *)0x0) {
      pFVar8 = pFVar10 + 0x10;
    }
    uVar7 = (**(code **)(*(longlong *)pFVar8 + 8))();
    (*pcVar3)(uVar7);
    pFVar10 = pFVar10 + 0x30;
  }
  DestructItems<TFunction<void___cdecl(void)>,int>
            ((TFunction<void___cdecl(void)> *)(this->ShutdownCallbacks).AllocatorInstance.Data,
             (this->ShutdownCallbacks).ArrayNum);
  uVar11 = 0;
  piVar1 = &(this->ShutdownCallbacks).ArrayMax;
  (this->ShutdownCallbacks).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,0x10,0,&(this->ShutdownCallbacks).AllocatorInstance,0,piVar1);
  }
  uVar13 = uVar11;
  if (0 < this->NumNamedThreads) {
    do {
      uVar9 = (uint)uVar11;
      uVar6 = 0;
      if ((int)uVar9 < (this->NamedThreads).ArrayNum) {
        uVar6 = ~uVar9 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      plVar4 = *(longlong **)((this->NamedThreads).AllocatorInstance.Data + uVar13);
      (**(code **)(*plVar4 + 0x48))(plVar4,0xffffffff);
      uVar6 = 0;
      if ((int)uVar9 < (this->NamedThreads).ArrayNum) {
        uVar6 = ~uVar9 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      uVar11 = (ulonglong)(uVar9 + 1);
      (this->NamedThreads).AllocatorInstance.Data[uVar13 + 0x10] = (FScriptContainerElement)0x0;
      uVar13 = uVar13 + 0x18;
    } while ((int)(uVar9 + 1) < this->NumNamedThreads);
  }
  LowLevelTasks::FScheduler::StopWorkers(&LowLevelTasks::FScheduler::Singleton,true);
  TlsFree(this->PerThreadIDTLSSlot);
  pFVar10 = (this->NamedThreads).AllocatorInstance.Data;
  if (pFVar10 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar10);
  }
  DestructItems<TFunction<void___cdecl(void)>,int>
            ((TFunction<void___cdecl(void)> *)(this->ShutdownCallbacks).AllocatorInstance.Data,
             (this->ShutdownCallbacks).ArrayNum);
  pFVar10 = (this->ShutdownCallbacks).AllocatorInstance.Data;
  if (pFVar10 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar10);
  }
  this->_padding_ = (longlong)&___7FTaskGraphInterface__6B_;
  return;
}

// AddShutdownCallback @ 141485600

void __thiscall
FTaskGraphCompatibilityImplementation::AddShutdownCallback
          (FTaskGraphCompatibilityImplementation *this,TFunction<void___cdecl(void)> *param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  FScriptContainerElement *pFVar4;
  
  iVar2 = (this->ShutdownCallbacks).ArrayNum;
  piVar1 = &(this->ShutdownCallbacks).ArrayMax;
  if (iVar2 == *piVar1) {
    iVar2 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x1030,&(this->ShutdownCallbacks).AllocatorInstance,piVar1);
  }
  (this->ShutdownCallbacks).ArrayNum = iVar2 + 1;
  pFVar4 = (this->ShutdownCallbacks).AllocatorInstance.Data + (longlong)iVar2 * 0x30;
  *(longlong *)pFVar4 = *(longlong *)param_1;
  *(longlong *)(pFVar4 + 0x28) = 0;
  if (*(longlong *)pFVar4 != 0) {
    puVar3 = (undefined8 *)&param_1->field_0x10;
    if (*(undefined8 **)&param_1->field_0x28 != (undefined8 *)0x0) {
      puVar3 = *(undefined8 **)&param_1->field_0x28;
    }
    (**(code **)*puVar3)();
  }
  return;
}

// AttachToThread @ 141486fc0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FTaskGraphCompatibilityImplementation::AttachToThread
          (FTaskGraphCompatibilityImplementation *this,Type param_1)

{
  code *pcVar1;
  bool bVar2;
  FTaskThreadBase *pFVar3;
  int iVar4;
  ulonglong uVar5;
  
  uVar5 = 0xff;
  if ((int)((ulonglong)param_1 & 0xff) != 0xff) {
    uVar5 = (ulonglong)param_1 & 0xff;
  }
  iVar4 = (int)uVar5;
  if (this->NumNamedThreads <= iVar4) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("CurrentThread >= 0 && CurrentThread < NumNamedThreads",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Async\\TaskGraph.cpp"
                       ,0x58c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((this->NamedThreads).ArrayNum <= iVar4) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((this->NamedThreads).AllocatorInstance.Data[uVar5 * 0x18 + 0x10] !=
      (FScriptContainerElement)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!NamedThreads[CurrentThread].bAttached",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Async\\TaskGraph.cpp"
                       ,0x58d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  pFVar3 = Thread(this,iVar4);
                    /* WARNING: Could not recover jumptable at 0x00014148708f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  TlsSetValue(pFVar3->PerThreadIDTLSSlot,pFVar3->OwnerWorker);
  return;
}

// FindWork @ 141495750

/* WARNING: Enum "Type": Some values do not have unique names */

FBaseGraphTask * __thiscall
FTaskGraphCompatibilityImplementation::FindWork
          (FTaskGraphCompatibilityImplementation *this,Type param_1)

{
  code *pcVar1;
  bool bVar2;
  FBaseGraphTask *pFVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Async\\TaskGraph.cpp"
                     ,0x6a1,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FBaseGraphTask *)(*pcVar1)();
    return pFVar3;
  }
  return (FBaseGraphTask *)0x0;
}

// GetCurrentThread @ 141498690

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

Type __thiscall
FTaskGraphCompatibilityImplementation::GetCurrentThread(FTaskGraphCompatibilityImplementation *this)

{
  longlong lVar1;
  Type TVar2;
  LPVOID pvVar3;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined8 local_20;
  undefined8 uStack_18;
  undefined4 local_10;
  
  pvVar3 = TlsGetValue(this->PerThreadIDTLSSlot);
  if (pvVar3 == (LPVOID)0x0) {
    lVar1 = *(longlong *)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x40)
    ;
    if (lVar1 != 0) {
      local_28 = 0;
      local_38 = ___xmm_00000000000002000000000000000000;
      uStack_30 = _UNK_15061ca38;
      local_10 = 0x800;
      local_20 = ___xmm_00000800000008000000000000000400;
      uStack_18 = _UNK_15061ca48;
      return *(Type *)((longlong)&local_38 +
                      (ulonglong)((uint)((ulonglong)*(undefined8 *)(lVar1 + 0x38) >> 0x3b) & 7) * 4)
             | *(Type *)((longlong)&local_20 +
                        (ulonglong)((uint)((ulonglong)*(undefined8 *)(lVar1 + 0x38) >> 0x3b) & 7) *
                        4) | AnyNormalThreadNormalTask;
    }
  }
  else {
    TVar2 = (Type)(((longlong)pvVar3 - (longlong)(this->NamedThreads).AllocatorInstance.Data) / 0x18
                  );
    if ((int)TVar2 < this->NumNamedThreads) {
      return TVar2;
    }
  }
  return AnyNormalThreadNormalTask;
}

// GetCurrentThreadIfKnown @ 141498830

/* WARNING: Enum "Type": Some values do not have unique names */

Type __thiscall
FTaskGraphCompatibilityImplementation::GetCurrentThreadIfKnown
          (FTaskGraphCompatibilityImplementation *this,bool param_1)

{
  Type TVar1;
  Type TVar2;
  
  TVar1 = GetCurrentThread(this);
  if (param_1) {
    TVar2 = AnyNormalThreadNormalTask;
    if ((TVar1 & AnyNormalThreadNormalTask) != AnyNormalThreadNormalTask) {
      TVar2 = TVar1 & AnyNormalThreadNormalTask;
    }
    if ((int)TVar2 < this->NumNamedThreads) {
      TVar1 = TVar1 | LocalQueue;
    }
  }
  return TVar1;
}

// GetNumBackgroundThreads @ 141499610

int __thiscall
FTaskGraphCompatibilityImplementation::GetNumBackgroundThreads
          (FTaskGraphCompatibilityImplementation *this)

{
  return this->NumBackgroundWorkers;
}

// GetNumForegroundThreads @ 141499670

int __thiscall
FTaskGraphCompatibilityImplementation::GetNumForegroundThreads
          (FTaskGraphCompatibilityImplementation *this)

{
  return this->NumForegroundWorkers;
}

// GetNumWorkerThreads @ 1414996d0

int __thiscall
FTaskGraphCompatibilityImplementation::GetNumWorkerThreads
          (FTaskGraphCompatibilityImplementation *this)

{
  return (int)LowLevelTasks::FScheduler::Singleton.ActiveWorkers;
}

// IsCurrentThreadKnown @ 14149db00

bool __thiscall
FTaskGraphCompatibilityImplementation::IsCurrentThreadKnown
          (FTaskGraphCompatibilityImplementation *this)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(this->PerThreadIDTLSSlot);
  if ((pvVar1 == (LPVOID)0x0) &&
     (*(longlong *)
       (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x40) == 0)
     ) {
    return false;
  }
  return true;
}

// IsThreadProcessingTasks @ 14149e7a0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FTaskGraphCompatibilityImplementation::IsThreadProcessingTasks
          (FTaskGraphCompatibilityImplementation *this,Type param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  bool bVar1;
  undefined1 uVar2;
  FTaskThreadBase *pFVar3;
  Type TVar4;
  
  TVar4 = AnyNormalThreadNormalTask;
  if ((param_1 & AnyNormalThreadNormalTask) != AnyNormalThreadNormalTask) {
    TVar4 = param_1 & AnyNormalThreadNormalTask;
  }
  if (this->NumNamedThreads <= (int)TVar4) {
    bVar1 = ::FDebug::CheckVerifyFailedImpl2
                      ("ThreadToCheck >= 0 && ThreadToCheck < NumNamedThreads",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Async\\TaskGraph.cpp"
                       ,0x583,L"");
    if (bVar1) {
      UNRECOVERED_JUMPTABLE = (code *)swi(3);
      uVar2 = (*UNRECOVERED_JUMPTABLE)();
      return (bool)uVar2;
    }
  }
  pFVar3 = Thread(this,TVar4);
  UNRECOVERED_JUMPTABLE = *(code **)(pFVar3->_padding_ + 0x60);
                    /* WARNING: Could not recover jumptable at 0x00014149e817. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*UNRECOVERED_JUMPTABLE)(pFVar3,(int)param_1 >> 8 & 1,UNRECOVERED_JUMPTABLE);
  return (bool)uVar2;
}

// ProcessThreadUntilIdle @ 1414aac90

/* WARNING: Enum "Type": Some values do not have unique names */

ulong64 __thiscall
FTaskGraphCompatibilityImplementation::ProcessThreadUntilIdle
          (FTaskGraphCompatibilityImplementation *this,Type param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  bool bVar1;
  Type TVar2;
  ulong64 uVar3;
  FTaskThreadBase *pFVar4;
  Type TVar5;
  
  TVar5 = AnyNormalThreadNormalTask;
  if ((param_1 & AnyNormalThreadNormalTask) != AnyNormalThreadNormalTask) {
    TVar5 = param_1 & AnyNormalThreadNormalTask;
  }
  if (this->NumNamedThreads <= (int)TVar5) {
    bVar1 = ::FDebug::CheckVerifyFailedImpl2
                      ("CurrentThread >= 0 && CurrentThread < NumNamedThreads",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Async\\TaskGraph.cpp"
                       ,0x595,L"");
    if (bVar1) {
      UNRECOVERED_JUMPTABLE = (code *)swi(3);
      uVar3 = (*UNRECOVERED_JUMPTABLE)();
      return uVar3;
    }
  }
  TVar2 = GetCurrentThread(this);
  if (TVar5 != TVar2) {
    bVar1 = ::FDebug::CheckVerifyFailedImpl2
                      ("CurrentThread == GetCurrentThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Async\\TaskGraph.cpp"
                       ,0x596,L"");
    if (bVar1) {
      UNRECOVERED_JUMPTABLE = (code *)swi(3);
      uVar3 = (*UNRECOVERED_JUMPTABLE)();
      return uVar3;
    }
  }
  pFVar4 = Thread(this,TVar5);
  UNRECOVERED_JUMPTABLE = *(code **)(pFVar4->_padding_ + 0x38);
                    /* WARNING: Could not recover jumptable at 0x0001414aad39. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (*UNRECOVERED_JUMPTABLE)(pFVar4,(int)param_1 >> 8 & 1,UNRECOVERED_JUMPTABLE);
  return uVar3;
}

// ProcessThreadUntilRequestReturn @ 1414aad50

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FTaskGraphCompatibilityImplementation::ProcessThreadUntilRequestReturn
          (FTaskGraphCompatibilityImplementation *this,Type param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  bool bVar1;
  Type TVar2;
  FTaskThreadBase *pFVar3;
  Type TVar4;
  
  TVar4 = AnyNormalThreadNormalTask;
  if ((param_1 & AnyNormalThreadNormalTask) != AnyNormalThreadNormalTask) {
    TVar4 = param_1 & AnyNormalThreadNormalTask;
  }
  if (this->NumNamedThreads <= (int)TVar4) {
    bVar1 = ::FDebug::CheckVerifyFailedImpl2
                      ("CurrentThread >= 0 && CurrentThread < NumNamedThreads",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Async\\TaskGraph.cpp"
                       ,0x59e,L"");
    if (bVar1) {
      UNRECOVERED_JUMPTABLE = (code *)swi(3);
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
  }
  TVar2 = GetCurrentThread(this);
  if (TVar4 != TVar2) {
    bVar1 = ::FDebug::CheckVerifyFailedImpl2
                      ("CurrentThread == GetCurrentThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Async\\TaskGraph.cpp"
                       ,0x59f,L"");
    if (bVar1) {
      UNRECOVERED_JUMPTABLE = (code *)swi(3);
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
  }
  pFVar3 = Thread(this,TVar4);
  UNRECOVERED_JUMPTABLE = *(code **)(pFVar3->_padding_ + 0x30);
                    /* WARNING: Could not recover jumptable at 0x0001414aadf9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(pFVar3,(int)param_1 >> 8 & 1,UNRECOVERED_JUMPTABLE);
  return;
}

// ProcessUntilTasksComplete @ 1414aae10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FTaskGraphCompatibilityImplementation::ProcessUntilTasksComplete
          (FTaskGraphCompatibilityImplementation *this,
          TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
          *param_1,Type param_2,
          TFunction<FTaskGraphInterface::EProcessTasksOperation___cdecl(int)> *param_3)

{
  FScriptContainerElement *pFVar1;
  TRefCountPtr<FBaseGraphTask> *pTVar2;
  code *pcVar3;
  FTaskGraphCompatibilityImplementation *this_00;
  TFunction<FTaskGraphInterface::EProcessTasksOperation___cdecl(int)> *pTVar4;
  bool bVar5;
  undefined1 uVar6;
  bool bVar7;
  byte bVar8;
  Type TVar9;
  Type TVar10;
  uint uVar11;
  int iVar12;
  FTaskThreadBase *pFVar13;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> FVar14;
  undefined8 uVar15;
  TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *pTVar16;
  Type TVar17;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> FVar18;
  longlong *plVar19;
  int iVar20;
  uint uVar21;
  uint uVar22;
  ForAnyElementType FVar23;
  longlong lVar24;
  longlong lVar25;
  bool bVar26;
  undefined1 auStackY_198 [32];
  undefined1 local_147 [7];
  ForAnyElementType local_140;
  int local_138 [4];
  TRefCountPtr<FBaseGraphTask> local_128;
  int local_120 [2];
  FTaskGraphCompatibilityImplementation *local_118;
  LARGE_INTEGER local_110;
  TFunction<FTaskGraphInterface::EProcessTasksOperation___cdecl(int)> *local_108;
  LARGE_INTEGER local_100;
  LARGE_INTEGER local_f8 [2];
  LARGE_INTEGER local_e8;
  undefined8 uStack_e0;
  LARGE_INTEGER local_d8;
  undefined8 uStack_d0;
  TArray<unsigned___int64,TSizedDefaultAllocator<32>_> local_c8;
  TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
  local_b8;
  FLogScope local_88;
  LARGE_INTEGER *local_78;
  longlong local_70;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_198;
  bVar26 = -1 < CpuChannel->Enabled;
  local_118 = this;
  local_108 = param_3;
  if (bVar26) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`private:_virtual_bool___cdecl_FTaskGraphCompatibilityImplementation::ProcessUntilTasksComplete(TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_const&___ptr64,ENamedThreads::Type,TFunction<enum_FTaskGraphInterface::EProcessTasksOperation___cdecl(int)>_const&___ptr64)___ptr64'
                ::__l2::__CpuProfilerEventSpecId1527,"ProcessUntilTasksComplete",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Async\\TaskGraph.cpp"
               ,0x5f7);
    FCpuProfilerTrace::OutputBeginEvent
              (`private:_virtual_bool___cdecl_FTaskGraphCompatibilityImplementation::ProcessUntilTasksComplete(TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_const&___ptr64,ENamedThreads::Type,TFunction<enum_FTaskGraphInterface::EProcessTasksOperation___cdecl(int)>_const&___ptr64)___ptr64'
               ::__l2::__CpuProfilerEventSpecId1527);
  }
  TVar17 = param_2 & AnyNormalThreadNormalTask;
  TVar9 = AnyNormalThreadNormalTask;
  if (TVar17 != AnyNormalThreadNormalTask) {
    TVar9 = TVar17;
  }
  if (TVar9 == AnyNormalThreadNormalTask) {
    uVar22 = (int)param_2 >> 10 & 3;
    if ((2 < uVar22) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Result >= 0 && Result < NumThreadPriorities",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\TaskGraphInterfaces.h"
                           ,0xa6,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      uVar6 = (*pcVar3)();
      return (bool)uVar6;
    }
    if (((param_2 >> 8 & 1) != 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("!ENamedThreads::GetQueueIndex(CurrentThreadIfKnown)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Async\\TaskGraph.cpp"
                           ,0x5fe,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      uVar6 = (*pcVar3)();
      return (bool)uVar6;
    }
    TVar9 = GetCurrentThread(this);
    local_138[2] = AnyNormalThreadNormalTask;
    if ((TVar9 & AnyNormalThreadNormalTask) != AnyNormalThreadNormalTask) {
      local_138[2] = TVar9 & AnyNormalThreadNormalTask;
    }
    param_2 = ENamedThreads::SetPriorities
                        (local_138[2],uVar22,(bool)((byte)((int)param_2 >> 9) & 1));
  }
  else {
    TVar9 = AnyNormalThreadNormalTask;
    if (TVar17 != AnyNormalThreadNormalTask) {
      TVar9 = TVar17;
    }
    local_138[2] = TVar9;
    TVar10 = GetCurrentThread(this);
    TVar17 = AnyNormalThreadNormalTask;
    if ((TVar10 & AnyNormalThreadNormalTask) != AnyNormalThreadNormalTask) {
      TVar17 = TVar10 & AnyNormalThreadNormalTask;
    }
    if ((TVar9 != TVar17) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("CurrentThreadIfKnown == ENamedThreads::GetThreadIndex(GetCurrentThread())"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Async\\TaskGraph.cpp"
                           ,0x605,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      uVar6 = (*pcVar3)();
      return (bool)uVar6;
    }
  }
  uVar22 = param_1->ArrayNum;
  local_140.Data = (FScriptContainerElement *)0x0;
  local_138[0] = 0;
  local_138[1] = 0;
  if ((int)uVar22 < 1) {
    if ((int)uVar22 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar22);
    }
  }
  else {
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar22,&local_140,local_138,local_138 + 1);
  }
  iVar12 = param_1->ArrayNum;
  uVar22 = 0;
  if (0 < iVar12) {
    lVar24 = 0;
    do {
      uVar21 = ~uVar22 >> 0x1f;
      uVar11 = 0;
      if ((int)uVar22 < iVar12) {
        uVar11 = uVar21;
      }
      if ((uVar11 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        uVar6 = (*pcVar3)();
        return (bool)uVar6;
      }
      FVar14 = (param_1->AllocatorInstance).SecondaryData;
      FVar18 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)param_1;
      if (FVar14 != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
        FVar18 = FVar14;
      }
      uVar15 = *(undefined8 *)((longlong)FVar18 + lVar24);
      uVar11 = 0;
      if ((int)uVar22 < local_138[0]) {
        uVar11 = uVar21;
      }
      if ((uVar11 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        uVar6 = (*pcVar3)();
        return (bool)uVar6;
      }
      *(undefined8 *)(local_140.Data + lVar24) = uVar15;
      uVar11 = 0;
      if ((int)uVar22 < local_138[0]) {
        uVar11 = uVar21;
      }
      if ((uVar11 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        uVar6 = (*pcVar3)();
        return (bool)uVar6;
      }
      if (*(longlong *)(local_140.Data + lVar24) == 0) {
        bVar5 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<4765879935673828878>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Async\\TaskGraph.cpp"
                           ,0x60e,"RemainingTasks[TaskIndex] != nullptr");
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          uVar6 = (*pcVar3)();
          return (bool)uVar6;
        }
        if (1 < (byte)LogTaskGraph._0_1_) {
          UE::Logging::Private::BasicLog<2>
                    (&`private:_virtual_bool___cdecl_FTaskGraphCompatibilityImplementation::ProcessUntilTasksComplete(TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_const&___ptr64,ENamedThreads::Type,TFunction<enum_FTaskGraphInterface::EProcessTasksOperation___cdecl(int)>_const&___ptr64)___ptr64'
                      ::__l27::LOG_Static,(FLogCategoryBase *)&LogTaskGraph);
        }
        bVar5 = false;
        goto LAB_1414ab715;
      }
      iVar12 = param_1->ArrayNum;
      uVar22 = uVar22 + 1;
      lVar24 = lVar24 + 8;
    } while ((int)uVar22 < iVar12);
  }
  bVar8 = 2;
  QueryPerformanceCounter(&local_110);
  bVar5 = true;
  local_e8 = local_110;
  uStack_e0 = 0xffffffffffffffff;
  iVar12 = local_138[0];
LAB_1414ab141:
  do {
    this_00 = local_118;
    if (bVar8 == 2) {
      TVar9 = AnyNormalThreadNormalTask;
      if ((param_2 & AnyNormalThreadNormalTask) != AnyNormalThreadNormalTask) {
        TVar9 = param_2 & AnyNormalThreadNormalTask;
      }
      if ((local_118->NumNamedThreads <= (int)TVar9) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("CurrentThread >= 0 && CurrentThread < NumNamedThreads",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Async\\TaskGraph.cpp"
                             ,0x595,L""), bVar7)) {
        pcVar3 = (code *)swi(3);
        uVar6 = (*pcVar3)();
        return (bool)uVar6;
      }
      TVar17 = GetCurrentThread(this_00);
      if ((TVar9 != TVar17) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("CurrentThread == GetCurrentThread()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Async\\TaskGraph.cpp"
                             ,0x596,L""), bVar7)) {
        pcVar3 = (code *)swi(3);
        uVar6 = (*pcVar3)();
        return (bool)uVar6;
      }
      pFVar13 = Thread(this_00,TVar9);
      (**(code **)(pFVar13->_padding_ + 0x38))(pFVar13,(int)param_2 >> 8 & 1);
LAB_1414ab1dd:
      iVar12 = local_138[0];
    }
    else if (bVar8 < 2) {
      bVar5 = false;
      uVar22 = 0;
      if (0 < iVar12) {
        lVar24 = 0;
        do {
          uVar11 = 0;
          if ((int)uVar22 < iVar12) {
            uVar11 = ~uVar22 >> 0x1f;
          }
          if (uVar11 == 0) {
            bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar7) {
              pcVar3 = (code *)swi(3);
              uVar6 = (*pcVar3)();
              return (bool)uVar6;
            }
            iVar12 = local_138[0];
          }
          if ((char)(*(FTaskBase **)(local_140.Data + lVar24))->ExtendedPriority < '\x03') {
            local_d8 = local_110;
            uStack_d0 = 0xffffffffffffffff;
            bVar5 = true;
            bVar7 = UE::Tasks::Private::FTaskBase::TryRetractAndExecute
                              (*(FTaskBase **)(local_140.Data + lVar24),(FTimeout *)&local_d8.s,0);
            if ((bVar7) && (bVar8 == 1)) goto LAB_1414ab1dd;
            iVar12 = local_138[0];
          }
          uVar22 = uVar22 + 1;
          lVar24 = lVar24 + 8;
        } while ((int)uVar22 < iVar12);
      }
    }
    else if (bVar8 == 3) {
      local_b8.AllocatorInstance.SecondaryData = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0;
      local_b8.ArrayNum = 0;
      local_b8.ArrayMax = 4;
      pFVar1 = local_140.Data + (longlong)iVar12 * 8;
      FVar23.Data = local_140.Data;
      iVar20 = iVar12;
      while( true ) {
        if (iVar20 != iVar12) {
          local_147[0] = 0;
          `TCheckedPointerIterator<FBaseGraphTask_*,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_147);
        }
        if (FVar23.Data == pFVar1) break;
        local_128.Reference = *(FBaseGraphTask **)FVar23.Data;
        if (local_128.Reference != (FBaseGraphTask *)0x0) {
          LOCK();
          *(int *)&(local_128.Reference)->field_0x30 =
               *(int *)&(local_128.Reference)->field_0x30 + 1;
          UNLOCK();
        }
        FVar14 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)&local_b8;
        if (local_b8.AllocatorInstance.SecondaryData !=
            (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
          FVar14 = local_b8.AllocatorInstance.SecondaryData;
        }
        if ((ulonglong)FVar14 <= &local_128) {
          FVar14 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)&local_b8;
          if (local_b8.AllocatorInstance.SecondaryData !=
              (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
            FVar14 = local_b8.AllocatorInstance.SecondaryData;
          }
          if ((&local_128 <
               (TRefCountPtr<FBaseGraphTask> *)((longlong)FVar14 + (longlong)local_b8.ArrayMax * 8))
             && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar5)) {
            pcVar3 = (code *)swi(3);
            uVar6 = (*pcVar3)();
            return (bool)uVar6;
          }
        }
        if (local_b8.ArrayNum == local_b8.ArrayMax) {
          local_b8.ArrayNum =
               UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TRefCountPtr<FBaseGraphTask>_>_>
                         (0x808,&local_b8.AllocatorInstance,&local_b8.ArrayMax);
        }
        lVar24 = (longlong)local_b8.ArrayNum;
        FVar14 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)&local_b8;
        if (local_b8.AllocatorInstance.SecondaryData !=
            (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
          FVar14 = local_b8.AllocatorInstance.SecondaryData;
        }
        FVar23.Data = FVar23.Data + 8;
        local_b8.ArrayNum = local_b8.ArrayNum + 1;
        pTVar2 = (TRefCountPtr<FBaseGraphTask> *)((longlong)FVar14 + lVar24 * 8);
        pTVar2->Reference = (FBaseGraphTask *)0x0;
        pTVar2->Reference = local_128.Reference;
        local_128.Reference = (FBaseGraphTask *)0x0;
        iVar20 = local_138[0];
      }
      pTVar16 = GetTraceIds(&local_c8,&local_b8);
      if (((-1 < TaskTrace::TaskChannel->Enabled) && (TaskTrace::bGTaskTraceInitialized != false))
         && (-1 < TaskTrace::TaskChannel->Enabled)) {
        UE::Trace::Private::FLogScope::Enter<TaskTrace::FTaskTraceWaitingStartedFields>
                  ((TLogScope<1> *)&local_88);
        QueryPerformanceCounter(&local_100);
        *(LARGE_INTEGER *)local_88.Ptr = local_100;
        UE::Trace::Private::Field_WriteAuxData
                  (1,(uchar *)(pTVar16->AllocatorInstance).Data,(pTVar16->ArrayNum & 0xffffU) << 3);
        UE::Trace::Private::TLogScope<1>::operator+=((TLogScope<1> *)&local_88,&local_88);
      }
      if (local_c8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_c8.AllocatorInstance.Data);
      }
      WaitOnNamedThreadForTasks(local_118,&local_b8,local_138[2],param_2);
      if (((-1 < TaskTrace::TaskChannel->Enabled) && (TaskTrace::bGTaskTraceInitialized != false))
         && (-1 < TaskTrace::TaskChannel->Enabled)) {
        UE::Trace::Private::FLogScope::Enter<TaskTrace::FTaskTraceWaitingFinishedFields>
                  ((TLogScope<0> *)&local_78);
        QueryPerformanceCounter(local_f8);
        *local_78 = local_f8[0];
        *(undefined8 *)(local_70 + 0x28) = *(undefined8 *)(local_70 + 0x20);
      }
      FVar14 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)&local_b8;
      if (local_b8.AllocatorInstance.SecondaryData !=
          (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
        FVar14 = local_b8.AllocatorInstance.SecondaryData;
      }
      DestructItems<TRefCountPtr<FBaseGraphTask>,int>
                ((TRefCountPtr<FBaseGraphTask> *)FVar14,local_b8.ArrayNum);
      if (local_b8.AllocatorInstance.SecondaryData !=
          (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
        FMemory::Free((void *)local_b8.AllocatorInstance.SecondaryData);
      }
LAB_1414ab70a:
      bVar5 = true;
      goto LAB_1414ab715;
    }
    uVar22 = iVar12 - 1;
    if (-1 < (int)uVar22) {
      lVar25 = (longlong)(int)uVar22;
      lVar24 = lVar25 * 8;
      do {
        uVar11 = 0;
        if ((int)uVar22 < iVar12) {
          uVar11 = ~uVar22 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar3 = (code *)swi(3);
          uVar6 = (*pcVar3)();
          return (bool)uVar6;
        }
        iVar12 = local_138[0];
        if (*(char *)(*(longlong *)(local_140.Data + lVar24) + 0xd0) != '\0') {
          uVar11 = 0;
          if ((int)uVar22 < local_138[0]) {
            uVar11 = ~uVar22 >> 0x1f;
          }
          if (uVar11 == 0) {
            bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar7) {
              pcVar3 = (code *)swi(3);
              uVar6 = (*pcVar3)();
              return (bool)uVar6;
            }
          }
          iVar12 = (local_138[0] - uVar22) + -1;
          if (1 < iVar12) {
            iVar12 = 1;
          }
          iVar20 = local_138[0];
          if (iVar12 != 0) {
            memmove(local_140.Data + lVar25 * 8,
                    local_140.Data + (longlong)(local_138[0] - iVar12) * 8,(longlong)iVar12 << 3);
            iVar20 = local_138[0];
          }
          local_138[0] = iVar20 + -1;
          iVar12 = iVar20 + -1;
        }
        lVar25 = lVar25 + -1;
        lVar24 = lVar24 + -8;
        uVar22 = uVar22 - 1;
      } while (-1 < (int)uVar22);
    }
    pTVar4 = local_108;
    if (iVar12 == 0) goto LAB_1414ab70a;
    if (*(void **)local_108 == (void *)0x0) {
      bVar8 = 0;
LAB_1414ab5d7:
      if (!bVar5) {
        bVar8 = 3;
        goto LAB_1414ab141;
      }
    }
    else {
      local_120[0] = iVar12;
      UE::Core::Private::Function::CheckCallable(*(void **)local_108);
      pcVar3 = *(code **)pTVar4;
      plVar19 = *(longlong **)&pTVar4->field_0x28;
      if (*(longlong **)&pTVar4->field_0x28 == (longlong *)0x0) {
        plVar19 = (longlong *)&pTVar4->field_0x10;
      }
      uVar15 = (**(code **)(*plVar19 + 8))();
      bVar8 = (*pcVar3)(uVar15,local_120);
      if ((4 < bVar8) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("CurrentOperation >= EProcessTasksOperation::ProcessAllOtherTasks && CurrentOperation <= EProcessTasksOperation::StopProcessing"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Async\\TaskGraph.cpp"
                             ,0x656,L""), bVar7)) {
        pcVar3 = (code *)swi(3);
        uVar6 = (*pcVar3)();
        return (bool)uVar6;
      }
      iVar12 = local_138[0];
      if (bVar8 < 2) goto LAB_1414ab5d7;
    }
    if (bVar8 == 4) {
      bVar5 = false;
LAB_1414ab715:
      if (local_140.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_140.Data);
      }
      if (bVar26) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      return bVar5;
    }
  } while( true );
}

// QueueTask @ 1414ac080

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FTaskGraphCompatibilityImplementation::QueueTask
          (FTaskGraphCompatibilityImplementation *this,FBaseGraphTask *param_1,bool param_2,
          Type param_3,Type param_4)

{
  code *pcVar1;
  bool bVar2;
  Type TVar3;
  FTaskThreadBase *pFVar4;
  Type TVar5;
  Type TVar6;
  
  TVar6 = AnyNormalThreadNormalTask;
  if ((param_3 & AnyNormalThreadNormalTask) != AnyNormalThreadNormalTask) {
    TVar6 = param_3 & AnyNormalThreadNormalTask;
  }
  if (TVar6 == AnyNormalThreadNormalTask) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ENamedThreads::GetThreadIndex(InThreadToExecuteOn) != ENamedThreads::AnyThread"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Async\\TaskGraph.cpp"
                       ,0x546,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TVar3 = AnyNormalThreadNormalTask;
  if ((param_4 & AnyNormalThreadNormalTask) != AnyNormalThreadNormalTask) {
    TVar3 = param_4 & AnyNormalThreadNormalTask;
  }
  if (TVar3 == AnyNormalThreadNormalTask) {
    TVar3 = GetCurrentThread(this);
  }
  pFVar4 = Thread(this,TVar6);
  TVar5 = AnyNormalThreadNormalTask;
  if ((TVar3 & AnyNormalThreadNormalTask) != AnyNormalThreadNormalTask) {
    TVar5 = TVar3 & AnyNormalThreadNormalTask;
  }
  if (TVar6 == TVar5) {
    (**(code **)(pFVar4->_padding_ + 0x40))();
  }
  else {
    (**(code **)(pFVar4->_padding_ + 0x50))(pFVar4,(int)param_3 >> 8 & 1,param_1);
  }
  return;
}

// RequestReturn @ 1414ae520

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FTaskGraphCompatibilityImplementation::RequestReturn
          (FTaskGraphCompatibilityImplementation *this,Type param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  bool bVar1;
  FTaskThreadBase *pFVar2;
  Type TVar3;
  
  TVar3 = AnyNormalThreadNormalTask;
  if ((param_1 & AnyNormalThreadNormalTask) != AnyNormalThreadNormalTask) {
    TVar3 = param_1 & AnyNormalThreadNormalTask;
  }
  if (TVar3 == AnyNormalThreadNormalTask) {
    bVar1 = ::FDebug::CheckVerifyFailedImpl2
                      ("CurrentThread != ENamedThreads::AnyThread",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Async\\TaskGraph.cpp"
                       ,0x5a7,L"");
    if (bVar1) {
      UNRECOVERED_JUMPTABLE = (code *)swi(3);
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
  }
  pFVar2 = Thread(this,TVar3);
  UNRECOVERED_JUMPTABLE = *(code **)(pFVar2->_padding_ + 0x48);
                    /* WARNING: Could not recover jumptable at 0x0001414ae59a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(pFVar2,(int)param_1 >> 8 & 1,UNRECOVERED_JUMPTABLE);
  return;
}

// StallForTuning @ 1414b0b40

void __thiscall
FTaskGraphCompatibilityImplementation::StallForTuning
          (FTaskGraphCompatibilityImplementation *this,int param_1,bool param_2)

{
  return;
}

// Thread @ 1414b4870

/* WARNING: Enum "Type": Some values do not have unique names */

FTaskThreadBase * __thiscall
FTaskGraphCompatibilityImplementation::Thread
          (FTaskGraphCompatibilityImplementation *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FTaskThreadBase *pFVar4;
  
  uVar3 = 0;
  if (param_1 < (this->NamedThreads).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FTaskThreadBase *)(*pcVar1)();
      return pFVar4;
    }
  }
  return *(FTaskThreadBase **)
          ((this->NamedThreads).AllocatorInstance.Data + (longlong)param_1 * 0x18);
}

// TriggerEventWhenTasksComplete @ 1414b4db0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
FTaskGraphCompatibilityImplementation::TriggerEventWhenTasksComplete
          (FTaskGraphCompatibilityImplementation *this,FEvent *param_1,
          TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
          *param_2,Type param_3,Type param_4)

{
  atomic<unsigned_int> *paVar1;
  float fVar2;
  atomic<unsigned_int> aVar3;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> FVar4;
  code *pcVar5;
  FChaosMode FVar6;
  bool bVar7;
  uint uVar8;
  FTaskBase *this_00;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> FVar9;
  int iVar10;
  uint uVar11;
  longlong lVar12;
  
  if (param_1 == (FEvent *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("InEvent",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Async\\TaskGraph.cpp"
                       ,0x66b,L"");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  iVar10 = param_2->ArrayNum;
  if (iVar10 < 8) {
    uVar11 = 0;
    if (0 < iVar10) {
      lVar12 = 0;
      do {
        uVar8 = 0;
        if ((int)uVar11 < iVar10) {
          uVar8 = ~uVar11 >> 0x1f;
        }
        if (uVar8 == 0) {
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
        FVar4 = (param_2->AllocatorInstance).SecondaryData;
        FVar9 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)param_2;
        if (FVar4 != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
          FVar9 = FVar4;
        }
        if ((*(longlong *)(lVar12 + (longlong)FVar9) != 0) &&
           (*(char *)(*(longlong *)(lVar12 + (longlong)FVar9) + 0xd0) == '\0')) goto LAB_1414b4edf;
        iVar10 = param_2->ArrayNum;
        uVar11 = uVar11 + 1;
        lVar12 = lVar12 + 8;
      } while ((int)uVar11 < iVar10);
    }
    FVar6.State = GChaosMode.State;
    if ((GChaosMode.State != (atomic<FChaosMode::FState_*>)0x0) &&
       (*(int *)((longlong)GChaosMode.State + 0x2cb34) != 0)) {
      LOCK();
      iVar10 = *(int *)GChaosMode.State;
      *(int *)GChaosMode.State = *(int *)GChaosMode.State + 1;
      UNLOCK();
      fVar2 = *(float *)((longlong)FVar6.State + 4 + (ulonglong)((iVar10 + 1U) % 0xb2cb) * 4);
      if (0.0 < fVar2) {
        FWindowsPlatformProcess::Sleep(fVar2);
      }
    }
    (**(code **)(param_1->_padding_ + 0x10))(param_1);
  }
  else {
LAB_1414b4edf:
    this_00 = TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
              ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                          *)&UE::Tasks::Private::SmallTaskAllocator);
    if (this_00 == (FTaskBase *)0x0) {
      UE::Tasks::Private::FTaskBase::
      AddPrerequisites<TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,0>
                ((FTaskBase *)0x0,param_2,true);
      UE::Tasks::Private::FTaskBase::TryLaunch((FTaskBase *)0x0,0x100);
    }
    else {
      UE::Tasks::Private::FTaskBase::FTaskBase(this_00,2,true);
      this_00->_padding_ =
           (longlong)
           &
           ___7__TExecutableTaskBase_V<lambda_1>__1__TriggerEventWhenTasksComplete_FTaskGraphCompatibilityImplementation__EEAAXPEAVFEvent__AEBV__TArray_V__TRefCountPtr_VFBaseGraphTask____V__TSizedInlineAllocator__03_0CA_V__TSizedDefaultAllocator__0CA_______W4Type_ENamedThreads__2_Z_XX_Private_Tasks_UE__6B_
      ;
      UE::Tasks::Private::FTaskBase::Init
                (this_00,L"TriggerEventWhenTaskComplete",Default,Inline,None);
      this_00[1]._padding_ = (longlong)param_1;
      this_00->_padding_ =
           (longlong)
           &
           ___7__TExecutableTask_V<lambda_1>__1__TriggerEventWhenTasksComplete_FTaskGraphCompatibilityImplementation__EEAAXPEAVFEvent__AEBV__TArray_V__TRefCountPtr_VFBaseGraphTask____V__TSizedInlineAllocator__03_0CA_V__TSizedDefaultAllocator__0CA_______W4Type_ENamedThreads__2_Z__Private_Tasks_UE__6B_
      ;
      UE::Tasks::Private::FTaskBase::
      AddPrerequisites<TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,0>
                (this_00,param_2,true);
      UE::Tasks::Private::FTaskBase::TryLaunch(this_00,0x100);
      LOCK();
      paVar1 = &this_00->RefCount;
      aVar3 = *paVar1;
      *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar3 == (atomic<unsigned_int>)0x1) {
        (**(code **)this_00->_padding_)(this_00,1);
      }
    }
  }
  return;
}

// WaitOnNamedThreadForTasks @ 1414b8e00

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
FTaskGraphCompatibilityImplementation::WaitOnNamedThreadForTasks
          (FTaskGraphCompatibilityImplementation *this,
          TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
          *param_1,Type param_2,Type param_3)

{
  FMutex *this_00;
  atomic<unsigned_int> *paVar1;
  atomic<unsigned_char> aVar2;
  atomic<unsigned_int> aVar3;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> FVar4;
  code *pcVar5;
  bool bVar6;
  char cVar7;
  Type TVar8;
  uint uVar9;
  FTaskThreadBase *pFVar10;
  FTaskBase *this_01;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> FVar11;
  int iVar12;
  uint uVar13;
  Type TVar14;
  longlong lVar15;
  EExtendedTaskPriority local_res18 [8];
  ETaskPriority local_38 [8];
  FScopedEvent local_30;
  
  if ((param_2 != AnyNormalThreadNormalTask) && ((int)param_2 < this->NumNamedThreads)) {
    uVar13 = (int)param_3 >> 8 & 1;
    TVar14 = AnyNormalThreadNormalTask;
    if ((param_3 & AnyNormalThreadNormalTask) != AnyNormalThreadNormalTask) {
      TVar14 = param_3 & AnyNormalThreadNormalTask;
    }
    if ((this->NumNamedThreads <= (int)TVar14) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("ThreadToCheck >= 0 && ThreadToCheck < NumNamedThreads",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Async\\TaskGraph.cpp"
                           ,0x583,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pFVar10 = Thread(this,TVar14);
    cVar7 = (**(code **)(pFVar10->_padding_ + 0x60))(pFVar10,uVar13);
    if (cVar7 == '\0') {
      this_01 = TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Malloc(0xe0,8);
      if (this_01 == (FTaskBase *)0x0) {
        this_01 = (FTaskBase *)0x0;
      }
      else {
        UE::Tasks::Private::FTaskBase::FTaskBase(this_01,1,false);
        this_01->_padding_ = (longlong)&___7FBaseGraphTask__6B_;
        if (param_1 !=
            (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
             *)0x0) {
          UE::Tasks::Private::FTaskBase::
          AddPrerequisites<TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,0>
                    (this_01,param_1,false);
        }
        this_00 = &(this_01->Prerequisites).Mutex;
        LOCK();
        aVar2 = this_00->State;
        this_00->State = (atomic<unsigned_char>)((char)this_00->State + -1);
        UNLOCK();
        if (((byte)aVar2 & 2) != 0) {
          UE::FMutex::WakeWaitingThread(this_00);
        }
        this_01->_padding_ = (longlong)&___7__TGraphTask_VFReturnGraphTask____6B_;
      }
      *(Type *)&this_01[1]._padding_ = param_3;
      UE::Tasks::Private::TranslatePriority(param_3,local_38,local_res18);
      UE::Tasks::Private::FTaskBase::Init(this_01,L"GraphTask",local_38[0],local_res18[0],None);
      LOCK();
      this_01->RefCount = (atomic<unsigned_int>)((int)this_01->RefCount + 1);
      UNLOCK();
      UE::Tasks::Private::FTaskBase::TryLaunch(this_01,0xe0);
      LOCK();
      paVar1 = &this_01->RefCount;
      aVar3 = *paVar1;
      *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar3 == (atomic<unsigned_int>)0x1) {
        (**(code **)this_01->_padding_)(this_01,1);
      }
      if ((this->NumNamedThreads <= (int)TVar14) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("CurrentThread >= 0 && CurrentThread < NumNamedThreads",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Async\\TaskGraph.cpp"
                             ,0x59e,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      TVar8 = GetCurrentThread(this);
      if ((TVar14 != TVar8) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("CurrentThread == GetCurrentThread()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Async\\TaskGraph.cpp"
                             ,0x59f,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar10 = Thread(this,TVar14);
      (**(code **)(pFVar10->_padding_ + 0x30))(pFVar10,uVar13);
      return;
    }
  }
  bVar6 = FGenericPlatformProcess::SupportsMultithreading();
  if ((bVar6) ||
     ((bVar6 = FForkProcessHelper::IsForkedMultithreadInstance(), bVar6 &&
      (GAllowTaskGraphForkMultithreading != false)))) {
LAB_1414b90bd:
    FScopedEvent::FScopedEvent(&local_30);
    TriggerEventWhenTasksComplete(this,local_30.Event,param_1,param_2,AnyHiPriThreadHiPriTask);
    FScopedEvent::~FScopedEvent(&local_30);
  }
  else {
    iVar12 = param_1->ArrayNum;
    uVar13 = 0;
    if (0 < iVar12) {
      lVar15 = 0;
      do {
        uVar9 = 0;
        if ((int)uVar13 < iVar12) {
          uVar9 = ~uVar13 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        FVar4 = (param_1->AllocatorInstance).SecondaryData;
        FVar11 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)param_1;
        if (FVar4 != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
          FVar11 = FVar4;
        }
        if ((*(longlong *)(lVar15 + (longlong)FVar11) != 0) &&
           (*(char *)(*(longlong *)(lVar15 + (longlong)FVar11) + 0xd0) == '\0')) {
          UE::Logging::Private::BasicFatalLog
                    (&`private:_void___cdecl_FTaskGraphCompatibilityImplementation::WaitOnNamedThreadForTasks(TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_const&___ptr64,ENamedThreads::Type,ENamedThreads::Type)___ptr64'
                      ::__l17::LOG_Static,(FLogCategoryBase *)&LogTaskGraph);
          goto LAB_1414b90bd;
        }
        iVar12 = param_1->ArrayNum;
        uVar13 = uVar13 + 1;
        lVar15 = lVar15 + 8;
      } while ((int)uVar13 < iVar12);
    }
  }
  return;
}

// WaitUntilTasksComplete @ 1414b92f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FTaskGraphCompatibilityImplementation::WaitUntilTasksComplete
          (FTaskGraphCompatibilityImplementation *this,
          TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
          *param_1,Type param_2)

{
  int iVar1;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> FVar2;
  code *pcVar3;
  bool bVar4;
  Type TVar5;
  Type TVar6;
  TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *pTVar7;
  Type TVar8;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> FVar9;
  byte bVar10;
  bool bVar11;
  undefined1 auStack_d8 [32];
  undefined1 local_b8;
  FWaitingScope local_b7 [15];
  LARGE_INTEGER local_a8;
  undefined8 uStack_a0;
  LARGE_INTEGER local_98;
  TArray<unsigned___int64,TSizedDefaultAllocator<32>_> local_90;
  LARGE_INTEGER local_78;
  undefined8 uStack_70;
  LARGE_INTEGER *local_68;
  longlong local_60;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_d8;
  pTVar7 = GetTraceIds(&local_90,param_1);
  TaskTrace::FWaitingScope::FWaitingScope(local_b7,pTVar7);
  if (local_90.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_90.AllocatorInstance.Data);
  }
  bVar11 = -1 < CpuChannel->Enabled;
  if (bVar11) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`private:_virtual_void___cdecl_FTaskGraphCompatibilityImplementation::WaitUntilTasksComplete(TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_const&___ptr64,ENamedThreads::Type)___ptr64'
                ::__l2::__CpuProfilerEventSpecId1454,"WaitUntilTasksComplete",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Async\\TaskGraph.cpp"
               ,0x5ae);
    FCpuProfilerTrace::OutputBeginEvent
              (`private:_virtual_void___cdecl_FTaskGraphCompatibilityImplementation::WaitUntilTasksComplete(TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_const&___ptr64,ENamedThreads::Type)___ptr64'
               ::__l2::__CpuProfilerEventSpecId1454);
  }
  QueryPerformanceCounter(&local_98);
  bVar10 = 1;
  FVar2 = (param_1->AllocatorInstance).SecondaryData;
  local_a8 = local_98;
  iVar1 = param_1->ArrayNum;
  uStack_a0 = 0xffffffffffffffff;
  FVar9 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)param_1;
  if (FVar2 != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
    FVar9 = FVar2;
  }
  FVar2 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)((longlong)FVar9 + (longlong)iVar1 * 8);
  while( true ) {
    if (param_1->ArrayNum != iVar1) {
      local_b8 = 0;
      `TCheckedPointerIterator<TRefCountPtr<FBaseGraphTask>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(&local_b8);
    }
    if (FVar9 == FVar2) break;
    if (*(FTaskBase **)FVar9 != (FTaskBase *)0x0) {
      local_78 = local_98;
      uStack_70 = 0xffffffffffffffff;
      UE::Tasks::Private::FTaskBase::TryRetractAndExecute
                (*(FTaskBase **)FVar9,(FTimeout *)&local_78.s,0);
      bVar10 = bVar10 & *(byte *)(*(longlong *)FVar9 + 0xd0);
    }
    FVar9 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)((longlong)FVar9 + 8);
  }
  if (bVar10 == 0) {
    TVar8 = AnyNormalThreadNormalTask;
    if ((param_2 & AnyNormalThreadNormalTask) != AnyNormalThreadNormalTask) {
      TVar8 = param_2 & AnyNormalThreadNormalTask;
    }
    if (TVar8 == AnyNormalThreadNormalTask) {
      if (((BackgroundThreadPriority|HighTaskPriority|LocalQueue|AnyNormalThreadNormalTask) <
           (param_2 & ThreadPriorityMask)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Result >= 0 && Result < NumThreadPriorities",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\TaskGraphInterfaces.h"
                             ,0xa6,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (((param_2 >> 8 & 1) != 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("!ENamedThreads::GetQueueIndex(CurrentThreadIfKnown)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Async\\TaskGraph.cpp"
                             ,0x5c7,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      TVar5 = GetCurrentThread(this);
      TVar8 = AnyNormalThreadNormalTask;
      if ((TVar5 & AnyNormalThreadNormalTask) != AnyNormalThreadNormalTask) {
        TVar8 = TVar5 & AnyNormalThreadNormalTask;
      }
      if (((BackgroundThreadPriority|HighTaskPriority|LocalQueue|AnyNormalThreadNormalTask) <
           (param_2 & ThreadPriorityMask)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("!(ThreadAndIndex & ~ThreadIndexMask) && PriorityIndex >= 0 && PriorityIndex < NumThreadPriorities"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\TaskGraphInterfaces.h"
                             ,0xba,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      param_2 = param_2 & (ThreadPriorityMask|HighTaskPriority) | TVar8;
    }
    else {
      TVar6 = GetCurrentThread(this);
      TVar5 = AnyNormalThreadNormalTask;
      if ((TVar6 & AnyNormalThreadNormalTask) != AnyNormalThreadNormalTask) {
        TVar5 = TVar6 & AnyNormalThreadNormalTask;
      }
      if ((TVar8 != TVar5) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("CurrentThreadIfKnown == ENamedThreads::GetThreadIndex(GetCurrentThread())"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Async\\TaskGraph.cpp"
                             ,0x5ce,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    WaitOnNamedThreadForTasks(this,param_1,TVar8,param_2);
  }
  if (bVar11) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((-1 < TaskTrace::TaskChannel->Enabled) && (TaskTrace::bGTaskTraceInitialized != false)) &&
     (-1 < TaskTrace::TaskChannel->Enabled)) {
    UE::Trace::Private::FLogScope::Enter<TaskTrace::FTaskTraceWaitingFinishedFields>
              ((TLogScope<0> *)&local_68);
    QueryPerformanceCounter(&local_a8);
    *local_68 = local_a8;
    *(undefined8 *)(local_60 + 0x28) = *(undefined8 *)(local_60 + 0x20);
  }
  return;
}

// WakeNamedThread @ 1414b9980

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FTaskGraphCompatibilityImplementation::WakeNamedThread
          (FTaskGraphCompatibilityImplementation *this,Type param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  FTaskThreadBase *pFVar1;
  Type TVar2;
  
  TVar2 = AnyNormalThreadNormalTask;
  if ((param_1 & AnyNormalThreadNormalTask) != AnyNormalThreadNormalTask) {
    TVar2 = param_1 & AnyNormalThreadNormalTask;
  }
  if ((int)TVar2 < this->NumNamedThreads) {
    pFVar1 = Thread(this,TVar2);
    UNRECOVERED_JUMPTABLE = *(code **)(pFVar1->_padding_ + 0x58);
                    /* WARNING: Could not recover jumptable at 0x0001414b99b6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(pFVar1,(int)param_1 >> 8 & 1,UNRECOVERED_JUMPTABLE);
    return;
  }
  return;
}

