// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 4

// CreateGraphEvent @ 14148f1c0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

TRefCountPtr<FBaseGraphTask> __cdecl FBaseGraphTask::CreateGraphEvent(void)

{
  FMutex *this;
  atomic<unsigned_char> aVar1;
  TLockFreeFixedSizeAllocator_TLSCacheBase<216,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
  *this_00;
  FTaskBase *this_01;
  FBaseGraphTask *in_RCX;
  
  this_00 = (TLockFreeFixedSizeAllocator_TLSCacheBase<216,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
             *)GetGraphEventImplAllocator();
  this_01 = TLockFreeFixedSizeAllocator_TLSCacheBase<216,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
            ::Allocate(this_00);
  if (this_01 != (FTaskBase *)0x0) {
    UE::Tasks::Private::FTaskBase::FTaskBase(this_01,1,false);
    this_01->_padding_ = (longlong)&___7FBaseGraphTask__6B_;
    this = &(this_01->Prerequisites).Mutex;
    LOCK();
    aVar1 = this->State;
    this->State = (atomic<unsigned_char>)((char)this->State + -1);
    UNLOCK();
    if (((byte)aVar1 & 2) != 0) {
      UE::FMutex::WakeWaitingThread(this);
    }
    this_01->_padding_ = (longlong)&___7FGraphEventImpl__6B_;
    TaskTrace::Created((ulong64)this_01->TraceId,0xd8);
    UE::Tasks::Private::FTaskBase::Init(this_01,L"GraphEvent",Default,TaskEvent,None);
    *(FTaskBase **)in_RCX = this_01;
    return (TRefCountPtr<FBaseGraphTask>)in_RCX;
  }
  *(undefined8 *)in_RCX = 0;
  return (TRefCountPtr<FBaseGraphTask>)in_RCX;
}

// FBaseGraphTask @ 141583b50

FBaseGraphTask * __thiscall
FBaseGraphTask::FBaseGraphTask
          (FBaseGraphTask *this,
          TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
          *param_1)

{
  undefined1 *puVar1;
  byte bVar2;
  ulong64 uVar3;
  
  *(undefined ***)this = &___7FTaskBase_Private_Tasks_UE__6B_;
  *(undefined4 *)&this->field_0x30 = 1;
  *(undefined4 *)&this->field_0x34 = 1;
  *(undefined4 *)&this->field_0x40 = 0;
  this->field_0x45 = 0;
  *(undefined4 *)&this->field_0x48 = 0xffffffff;
  *(undefined8 *)&this->field_0x38 = 0;
  uVar3 = TaskTrace::GenerateTaskId();
  *(ulong64 *)&this->field_0x50 = uVar3;
  *(undefined8 *)&this->field_0x60 = 0;
  *(undefined4 *)&this->field_0x68 = 0;
  *(undefined4 *)&this->field_0x6c = 1;
  this->field_0x70 = 1;
  *(undefined ***)&this->field_0xa0 =
       &
       ___7TTaskDelegateDummy___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
  ;
  *(undefined8 *)&this->field_0xb0 = 0xe800000000000020;
  *(undefined8 *)&this->field_0xa8 = 0;
  *(undefined8 *)&this->field_0xc0 = 0;
  *(undefined4 *)&this->field_0xc8 = 0;
  *(undefined4 *)&this->field_0xcc = 1;
  *(undefined2 *)&this->field_0xd0 = 0;
  *(undefined ***)this = &___7FBaseGraphTask__6B_;
  if (param_1 !=
      (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
       *)0x0) {
    UE::Tasks::Private::FTaskBase::
    AddPrerequisites<TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,0>
              ((FTaskBase *)this,param_1,false);
  }
  LOCK();
  puVar1 = &this->field_0x70;
  bVar2 = *puVar1;
  *puVar1 = *puVar1 + -1;
  UNLOCK();
  if ((bVar2 & 2) != 0) {
    UE::FMutex::WakeWaitingThread((FMutex *)&this->field_0x70);
  }
  return this;
}

// Init @ 1415c8470

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
FBaseGraphTask::Init
          (FBaseGraphTask *this,wchar_t *param_1,ETaskPriority param_2,EExtendedTaskPriority param_3
          ,ETaskFlags param_4)

{
  code *pcVar1;
  bool bVar2;
  FTask *pFVar3;
  undefined8 uVar4;
  ETaskPriority EVar5;
  
  if (((*(ulonglong *)&this->field_0xb0 & 0x20) == 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsCompleted()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Fundamental\\Task.h"
                         ,0x1dd,L"State: %d"), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  (**(code **)(*(longlong *)&this->field_0xa0 + 0x18))(&this->field_0xa0);
  *(FBaseGraphTask **)&this->field_0x78 = this;
  *(undefined ***)&this->field_0xa0 =
       &
       ___7__TTaskDelegateImpl_V<lambda_1>__N_____Init_V<lambda_1>__1__0FTaskBase_Private_Tasks_UE__IEAAXPEB_WW4ETaskPriority_LowLevelTasks__W4EExtendedTaskPriority_45_W4ETaskFlags_45__Z__FTask_LowLevelTasks__QEAAXPEB_WW4ETaskPriority_3___QEAV1_1__Init_FTaskBase_Private_Tasks_UE__IEAAX01W4EExtendedTaskPriority_89_W4ETaskFlags_89__Z_W4ETaskFlags_3__Z__0A____TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
  ;
  *(FBaseGraphTask **)&this->field_0x80 = this;
  pFVar3 = LowLevelTasks::FTask::GetActiveTask();
  if (pFVar3 == (FTask *)0x0) {
    uVar4 = 0;
    EVar5 = Default;
    if (param_2 != Inherit) {
      EVar5 = param_2;
    }
  }
  else {
    if (param_2 == Inherit) {
      param_2 = (ETaskPriority)((ulonglong)*(undefined8 *)&pFVar3->field_0x38 >> 0x3b);
    }
    uVar4 = *(undefined8 *)&pFVar3->field_0x30;
    EVar5 = param_2;
  }
  *(undefined8 *)&this->field_0xa8 = uVar4;
  *(ulonglong *)&this->field_0xb0 =
       ((longlong)(char)EVar5 << 0x35 | (ulonglong)param_1 & 0x1fffffffffffff | 0xff00000000000000)
       << 6;
  this->field_0x44 = param_3;
  UE::FInheritedContextBase::CaptureInheritedContext((FInheritedContextBase *)&this->field_0x8);
  return;
}

// Wait @ 141bbdcf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FBaseGraphTask::Wait(FBaseGraphTask *this,Type param_1)

{
  undefined1 *puVar1;
  int iVar2;
  code *pcVar3;
  FTaskGraphInterface *pFVar4;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> FVar5;
  undefined1 auStackY_98 [32];
  TRefCountPtr<FBaseGraphTask> local_58;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> local_50;
  int local_28;
  int local_24;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStackY_98;
  if ((param_1 >> 8 & 1) == 0) {
    UE::Tasks::Private::FTaskBase::WaitWithNamedThreadsSupport((FTaskBase *)this);
  }
  else {
    pFVar4 = FTaskGraphInterface::Get();
    if (this != (FBaseGraphTask *)0x0) {
      LOCK();
      *(int *)&this->field_0x30 = *(int *)&this->field_0x30 + 1;
      UNLOCK();
    }
    pcVar3 = *(code **)((longlong)*pFVar4 + 0x60);
    local_50.SecondaryData = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0;
    local_28 = 1;
    local_58.Reference = this;
    UE::Core::Private::
    ReallocForCopy<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TRefCountPtr<FBaseGraphTask>_>_>
              (8,8,1,0,&local_50,1,&local_24);
    FVar5 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)&local_50;
    if (local_50.SecondaryData != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
      FVar5 = local_50.SecondaryData;
    }
    ConstructItems<TRefCountPtr<FBaseGraphTask>,TRefCountPtr<FBaseGraphTask>,int>
              ((void *)FVar5,&local_58,1);
    (*pcVar3)(pFVar4,&local_50,param_1);
    FVar5 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)&local_50;
    if (local_50.SecondaryData != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
      FVar5 = local_50.SecondaryData;
    }
    DestructItems<TRefCountPtr<FBaseGraphTask>,int>((TRefCountPtr<FBaseGraphTask> *)FVar5,local_28);
    if (local_50.SecondaryData != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
      FMemory::Free((void *)local_50.SecondaryData);
    }
    if (local_58.Reference != (FBaseGraphTask *)0x0) {
      LOCK();
      puVar1 = &(local_58.Reference)->field_0x30;
      iVar2 = *(int *)puVar1;
      *(int *)puVar1 = *(int *)puVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (*(code *)**(undefined8 **)local_58.Reference)(local_58.Reference,1);
      }
    }
  }
  return;
}

