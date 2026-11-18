// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WNTask
// Functions: 9

// FWN_TaskModule @ 14a6ac2b0

FWN_TaskModule * __thiscall FWN_TaskModule::FWN_TaskModule(FWN_TaskModule *this)

{
  *this = (FWN_TaskModule)&___7FWN_TaskModule__6B_;
  return this;
}

// ~FWN_TaskModule @ 14a6ac9a0

void __thiscall FWN_TaskModule::~FWN_TaskModule(FWN_TaskModule *this)

{
  *this = (FWN_TaskModule)IModuleInterface::vftable;
  return;
}

// CreateAndExecuteTask @ 14a6ad270

/* WARNING: Enum "Type": Some values do not have unique names */

FWN_TaskHandle __thiscall
FWN_TaskModule::CreateAndExecuteTask(FWN_TaskModule *this,FWN_TaskCreateInfo *param_1)

{
  bool bVar1;
  FWN_TaskManager *pFVar2;
  FWN_Task *pFVar3;
  FWN_TaskCreateInfo *in_R8;
  
  pFVar2 = FWN_TaskManager::Get();
  pFVar3 = FWN_TaskManager::CreateTask(pFVar2,in_R8);
  pFVar2 = FWN_TaskManager::Get();
  bVar1 = FWN_TaskManager::ExecuteTask(pFVar2,pFVar3);
  if (!bVar1) {
    (param_1->TaskName).ComparisonIndex = 0xffffffff;
    (param_1->TaskName).Number = 0xffffffff;
    return (FWN_TaskHandle)(ulong64)param_1;
  }
  param_1->TaskName = (FName)(pFVar3->Handle).Identifier;
  return (FWN_TaskHandle)(ulong64)param_1;
}

// CreateTask @ 14a6ad4a0

/* WARNING: Enum "Type": Some values do not have unique names */

FWN_TaskHandle __thiscall
FWN_TaskModule::CreateTask(FWN_TaskModule *this,FWN_TaskCreateInfo *param_1)

{
  longlong *plVar1;
  char cVar2;
  FWN_TaskManager *this_00;
  FWN_Task *pFVar3;
  FWN_TaskCreateInfo *in_R8;
  undefined1 local_res18 [16];
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&in_R8->Processing,&local_28)
  ;
  if ((*(int *)&(in_R8->Processing).Callback.field_0x10 != 0) &&
     (plVar1 = *(longlong **)&(in_R8->Processing).Callback.field_0x8, plVar1 != (longlong *)0x0)) {
    cVar2 = (**(code **)(*plVar1 + 0x38))();
    if (cVar2 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      this_00 = FWN_TaskManager::Get();
      pFVar3 = FWN_TaskManager::CreateTask(this_00,in_R8);
      param_1->TaskName = (FName)(pFVar3->Handle).Identifier;
      return (FWN_TaskHandle)(ulong64)param_1;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  `FWN_TaskModule::CreateTask'::__l5::<lambda_1>::operator()(local_res18);
  (param_1->TaskName).ComparisonIndex = 0xffffffff;
  (param_1->TaskName).Number = 0xffffffff;
  return (FWN_TaskHandle)(ulong64)param_1;
}

// ExecuteTask @ 14a6ada90

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FWN_TaskModule::ExecuteTask(FWN_TaskModule *this,FWN_TaskHandle *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  bool bVar1;
  FWN_TaskManager *pFVar2;
  FWN_Task **ppFVar3;
  FWN_Task *pFVar4;
  undefined1 local_res18 [16];
  
  pFVar2 = FWN_TaskManager::Get();
  lpCriticalSection = &pFVar2->TaskMapCS;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  ppFVar3 = TMapBase<FWN_TaskHandle,FWN_Task_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FWN_TaskHandle,FWN_Task_*,0>_>
            ::Find((TMapBase<FWN_TaskHandle,FWN_Task_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FWN_TaskHandle,FWN_Task_*,0>_>
                    *)&pFVar2->TaskMap,param_1);
  if (ppFVar3 == (FWN_Task **)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    pFVar4 = (FWN_Task *)0x0;
  }
  else {
    LOCK();
    (*ppFVar3)->NumAccessors = (*ppFVar3)->NumAccessors + 1;
    UNLOCK();
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    pFVar4 = *ppFVar3;
    if ((pFVar4 != (FWN_Task *)0x0) && (pFVar4->Step < GCed)) {
      pFVar2 = FWN_TaskManager::Get();
      bVar1 = FWN_TaskManager::ExecuteTask(pFVar2,pFVar4);
      goto LAB_14a6adb24;
    }
  }
  `FWN_TaskModule::ExecuteTask'::__l5::<lambda_1>::operator()(local_res18);
  bVar1 = false;
  if (pFVar4 == (FWN_Task *)0x0) {
    return false;
  }
LAB_14a6adb24:
  FWN_TaskManager::Get();
  LOCK();
  pFVar4->NumAccessors = pFVar4->NumAccessors + -1;
  UNLOCK();
  return bVar1;
}

// ShutdownModule @ 14a6b2160

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FWN_TaskModule::ShutdownModule(FWN_TaskModule *this)

{
  char cVar1;
  FWN_TaskScheduler *pFVar2;
  code *pcVar3;
  FWN_TaskManager *pFVar4;
  bool bVar5;
  int local_res10 [2];
  int *local_res18 [2];
  
  pFVar4 = FWN_TaskManager::Get();
  LOCK();
  bVar5 = FWN_Task::S_Statistics.NumTasks == 0;
  if (bVar5) {
    FWN_Task::S_Statistics.NumTasks = 0;
  }
  UNLOCK();
  local_res10[0] = FWN_Task::S_Statistics.NumTasks;
  if (!bVar5) {
    local_res18[0] = local_res10;
    `FWN_TaskManager::Deinitialize'::__l2::<lambda_1>::operator()(local_res18);
  }
  if (((pFVar4->Scheduler).Object == (FWN_TaskScheduler *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar2 = (pFVar4->Scheduler).Object;
  cVar1 = pFVar2->bIsStopped;
  pFVar2->bShouldStop = true;
  while (cVar1 == '\0') {
    (**(code **)(pFVar2->Event->_padding_ + 0x10))();
    cVar1 = pFVar2->bIsStopped;
  }
  return;
}

// StartupModule @ 14a6b2260

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FWN_TaskModule::StartupModule(FWN_TaskModule *this)

{
  FWN_TaskManager *this_00;
  
  this_00 = FWN_TaskManager::Get();
  FWN_TaskManager::Initialize(this_00);
  return;
}

// operator() @ 150550810

bool __thiscall `FWN_TaskModule::CreateTask'::__l5::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<4162883406536900648>);
  if (bVar2) {
    ::FName::ToString(*(FName **)this,&local_18);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<4162883406536900648>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_150550877;
    }
  }
  bVar2 = false;
LAB_150550877:
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

// operator() @ 150550950

bool __thiscall `FWN_TaskModule::ExecuteTask'::__l5::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<4162883406536900661>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<4162883406536900661>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

