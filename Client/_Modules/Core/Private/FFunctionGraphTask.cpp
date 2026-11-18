// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 3

// CreateAndDispatchWhenReady @ 14148eaa0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

TRefCountPtr<FBaseGraphTask> __cdecl
FFunctionGraphTask::CreateAndDispatchWhenReady
          (TUniqueFunction<void___cdecl(void)> *param_1,TStatId param_2,
          TRefCountPtr<FBaseGraphTask> *param_3,Type param_4)

{
  FMutex *this;
  atomic<unsigned_char> aVar1;
  TUniquePtr<char_[0],TDefaultDelete<char_[0]>_> *pTVar2;
  code *pcVar3;
  bool bVar4;
  TRefCountPtr<FBaseGraphTask> TVar5;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> FVar6;
  longlong lVar7;
  FTaskBase *this_00;
  char **ppcVar8;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> FVar9;
  TUniquePtr<char_[0],TDefaultDelete<char_[0]>_> *pTVar10;
  FTaskBase *this_01;
  undefined4 in_register_0000008c;
  atomic<unsigned_int> in_stack_00000028;
  undefined1 auStackY_f8 [32];
  EExtendedTaskPriority local_a8;
  ETaskPriority local_a7 [15];
  TAtomic<FMinimalName> local_98;
  char *local_88;
  TAtomic<FMinimalName> TStack_80;
  FPipe *local_78;
  char **local_70;
  TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
  local_68;
  ulonglong local_38;
  
  FVar9._4_4_ = in_register_0000008c;
  FVar9._0_4_ = param_4;
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_f8;
  this_01 = (FTaskBase *)0x0;
  local_68.ArrayMax = 4;
  local_68.ArrayNum = 0;
  local_68.AllocatorInstance.SecondaryData = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0;
  if ((*(FBaseGraphTask **)FVar9 == (FBaseGraphTask *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InPrerequisite.GetReference()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\TaskGraphInterfaces.h"
                         ,0x47d,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    TVar5.Reference = (FBaseGraphTask *)(*pcVar3)();
    return (TRefCountPtr<FBaseGraphTask>)TVar5.Reference;
  }
  FVar6 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)&local_68;
  if (local_68.AllocatorInstance.SecondaryData != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0
     ) {
    FVar6 = local_68.AllocatorInstance.SecondaryData;
  }
  if ((ulonglong)FVar6 <= (ulonglong)FVar9) {
    FVar6 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)&local_68;
    if (local_68.AllocatorInstance.SecondaryData !=
        (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
      FVar6 = local_68.AllocatorInstance.SecondaryData;
    }
    if (((ulonglong)FVar9 < (ulonglong)((longlong)FVar6 + (longlong)local_68.ArrayMax * 8)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar4)) {
      pcVar3 = (code *)swi(3);
      TVar5.Reference = (FBaseGraphTask *)(*pcVar3)();
      return (TRefCountPtr<FBaseGraphTask>)TVar5.Reference;
    }
  }
  if (local_68.ArrayNum == local_68.ArrayMax) {
    local_68.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TRefCountPtr<FBaseGraphTask>_>_>
                   (0x808,&local_68.AllocatorInstance,&local_68.ArrayMax);
  }
  lVar7 = (longlong)local_68.ArrayNum;
  local_68.ArrayNum = local_68.ArrayNum + 1;
  FVar6 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)&local_68;
  if (local_68.AllocatorInstance.SecondaryData != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0
     ) {
    FVar6 = local_68.AllocatorInstance.SecondaryData;
  }
  ((TRefCountPtr<FBaseGraphTask> *)((longlong)FVar6 + lVar7 * 8))->Reference = (FBaseGraphTask *)0x0
  ;
  TVar5.Reference = *(FBaseGraphTask **)FVar9;
  ((TRefCountPtr<FBaseGraphTask> *)((longlong)FVar6 + lVar7 * 8))->Reference = TVar5.Reference;
  if (TVar5.Reference != (FBaseGraphTask *)0x0) {
    LOCK();
    *(int *)&(TVar5.Reference)->field_0x30 = *(int *)&(TVar5.Reference)->field_0x30 + 1;
    UNLOCK();
  }
  local_98 = (param_2.StatIdPtr)->Name;
  local_70 = (char **)param_2.StatIdPtr[1].StatDescriptionAnsi.Ptr;
  param_2.StatIdPtr[1].StatDescriptionAnsi.Ptr = (char *)0x0;
  local_78 = (FPipe *)param_2.StatIdPtr[1].StatDescriptionWide.Ptr;
  local_88 = ((param_2.StatIdPtr)->StatDescriptionAnsi).Ptr;
  TStack_80 = param_2.StatIdPtr[1].Name;
  if (local_98 != (TAtomic<FMinimalName>)0x0) {
    (param_2.StatIdPtr)->Name = (TAtomic<FMinimalName>)0x0;
  }
  this_00 = TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Malloc(0x130,0x10);
  if (this_00 != (FTaskBase *)0x0) {
    UE::Tasks::Private::FTaskBase::FTaskBase(this_00,1,false);
    this_00->_padding_ = (longlong)&___7FBaseGraphTask__6B_;
    UE::Tasks::Private::FTaskBase::
    AddPrerequisites<TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,0>
              (this_00,&local_68,false);
    this = &(this_00->Prerequisites).Mutex;
    LOCK();
    aVar1 = this->State;
    this->State = (atomic<unsigned_char>)((char)this->State + -1);
    UNLOCK();
    if (((byte)aVar1 & 2) != 0) {
      UE::FMutex::WakeWaitingThread(this);
    }
    this_00->_padding_ = (longlong)&___7__TGraphTask_V__TFunctionGraphTaskImpl___A6AXXZ_0A_____6B_;
    this_01 = this_00;
  }
  this_01[1]._padding_ = (longlong)param_3;
  this_01[1]._padding_ = (longlong)local_98;
  *(char ***)&this_01[1].StateChangeEvent = local_70;
  local_70 = (char **)0x0;
  this_01[1]._padding_ = (longlong)local_88;
  *(TAtomic<FMinimalName> *)&this_01[1].RefCount = TStack_80;
  this_01[1].Pipe = local_78;
  if (this_01[1]._padding_ != 0) {
    local_98 = (TAtomic<FMinimalName>)0x0;
  }
  this_01[1].ExecutingThreadId = in_stack_00000028;
  UE::Tasks::Private::TranslatePriority((Type)in_stack_00000028,local_a7,&local_a8);
  UE::Tasks::Private::FTaskBase::Init(this_01,L"GraphTask",local_a7[0],local_a8,None);
  *(FTaskBase **)param_1 = this_01;
  if (this_01 != (FTaskBase *)0x0) {
    LOCK();
    this_01->RefCount = (atomic<unsigned_int>)((int)this_01->RefCount + 1);
    UNLOCK();
  }
  UE::Tasks::Private::FTaskBase::TryLaunch(*(FTaskBase **)param_1,0x130);
  if (local_98 != (TAtomic<FMinimalName>)0x0) {
    ppcVar8 = &local_88;
    if (local_70 != (char **)0x0) {
      ppcVar8 = local_70;
    }
    (**(code **)(*ppcVar8 + 0x10))();
  }
  FVar9 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)&local_68;
  if (local_68.AllocatorInstance.SecondaryData != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0
     ) {
    FVar9 = local_68.AllocatorInstance.SecondaryData;
  }
  DestructItems<TRefCountPtr<FBaseGraphTask>,int>
            ((TRefCountPtr<FBaseGraphTask> *)FVar9,local_68.ArrayNum);
  if (local_68.AllocatorInstance.SecondaryData != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0
     ) {
    FMemory::Free((void *)local_68.AllocatorInstance.SecondaryData);
  }
  if ((param_2.StatIdPtr)->Name != (TAtomic<FMinimalName>)0x0) {
    pTVar2 = (TUniquePtr<char_[0],TDefaultDelete<char_[0]>_> *)
             param_2.StatIdPtr[1].StatDescriptionAnsi.Ptr;
    pTVar10 = &(param_2.StatIdPtr)->StatDescriptionAnsi;
    if (pTVar2 != (TUniquePtr<char_[0],TDefaultDelete<char_[0]>_> *)0x0) {
      pTVar10 = pTVar2;
    }
    (**(code **)(pTVar10->Ptr + 0x10))();
  }
  return (TRefCountPtr<FBaseGraphTask>)(FBaseGraphTask *)param_1;
}

// CreateAndDispatchWhenReady @ 1415b9830

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

TRefCountPtr<FBaseGraphTask> __cdecl
FFunctionGraphTask::CreateAndDispatchWhenReady
          (TUniqueFunction<void___cdecl(void)> *param_1,TStatId param_2,
          TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
          *param_3,Type param_4)

{
  TUniquePtr<char_[0],TDefaultDelete<char_[0]>_> *pTVar1;
  TAtomic<FMinimalName> TVar2;
  FBaseGraphTask *this;
  TUniquePtr<char_[0],TDefaultDelete<char_[0]>_> *pTVar3;
  undefined4 in_register_0000008c;
  Type in_stack_00000028;
  EExtendedTaskPriority local_28;
  ETaskPriority local_27 [15];
  
  this = TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Malloc(0x130,0x10);
  if (this == (FBaseGraphTask *)0x0) {
    this = (FBaseGraphTask *)0x0;
  }
  else {
    FBaseGraphTask::FBaseGraphTask
              (this,(TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                     *)CONCAT44(in_register_0000008c,param_4));
    *(undefined ***)this = &___7__TGraphTask_V__TFunctionGraphTaskImpl___A6AXXZ_0A_____6B_;
  }
  *(TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> **
   )&this[1].field_0x8 = param_3;
  *(TAtomic<FMinimalName> *)&this[1].field_0x18 = (param_2.StatIdPtr)->Name;
  *(char **)&this[1].field_0x40 = param_2.StatIdPtr[1].StatDescriptionAnsi.Ptr;
  param_2.StatIdPtr[1].StatDescriptionAnsi.Ptr = (char *)0x0;
  TVar2 = param_2.StatIdPtr[1].Name;
  *(char **)&this[1].field_0x28 = ((param_2.StatIdPtr)->StatDescriptionAnsi).Ptr;
  *(TAtomic<FMinimalName> *)&this[1].field_0x30 = TVar2;
  *(wchar_t **)&this[1].field_0x38 = param_2.StatIdPtr[1].StatDescriptionWide.Ptr;
  if (*(longlong *)&this[1].field_0x18 != 0) {
    (param_2.StatIdPtr)->Name = (TAtomic<FMinimalName>)0x0;
  }
  *(Type *)&this[1].field_0x48 = in_stack_00000028;
  UE::Tasks::Private::TranslatePriority(in_stack_00000028,local_27,&local_28);
  FBaseGraphTask::Init(this,L"GraphTask",local_27[0],local_28,None);
  *(FBaseGraphTask **)param_1 = this;
  if (this != (FBaseGraphTask *)0x0) {
    LOCK();
    *(int *)&this->field_0x30 = *(int *)&this->field_0x30 + 1;
    UNLOCK();
  }
  UE::Tasks::Private::FTaskBase::TryLaunch(*(FTaskBase **)param_1,0x130);
  if ((param_2.StatIdPtr)->Name != (TAtomic<FMinimalName>)0x0) {
    pTVar1 = (TUniquePtr<char_[0],TDefaultDelete<char_[0]>_> *)
             param_2.StatIdPtr[1].StatDescriptionAnsi.Ptr;
    pTVar3 = &(param_2.StatIdPtr)->StatDescriptionAnsi;
    if (pTVar1 != (TUniquePtr<char_[0],TDefaultDelete<char_[0]>_> *)0x0) {
      pTVar3 = pTVar1;
    }
    (**(code **)(pTVar3->Ptr + 0x10))(pTVar3);
  }
  return (TRefCountPtr<FBaseGraphTask>)(FBaseGraphTask *)param_1;
}

// CreateAndDispatchWhenReady @ 141b3cbc0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

TRefCountPtr<FBaseGraphTask> __cdecl
FFunctionGraphTask::CreateAndDispatchWhenReady
          (TUniqueFunction<void___cdecl(ENamedThreads::Type,TRefCountPtr<FBaseGraphTask>_const_&)>
           *param_1,TStatId param_2,
          TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
          *param_3,Type param_4)

{
  TUniquePtr<char_[0],TDefaultDelete<char_[0]>_> *pTVar1;
  TAtomic<FMinimalName> TVar2;
  FBaseGraphTask *this;
  TUniquePtr<char_[0],TDefaultDelete<char_[0]>_> *pTVar3;
  undefined4 in_register_0000008c;
  Type in_stack_00000028;
  EExtendedTaskPriority local_28;
  ETaskPriority local_27 [15];
  
  this = TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Malloc(0x130,0x10);
  if (this == (FBaseGraphTask *)0x0) {
    this = (FBaseGraphTask *)0x0;
  }
  else {
    FBaseGraphTask::FBaseGraphTask
              (this,(TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                     *)CONCAT44(in_register_0000008c,param_4));
    *(undefined ***)this =
         &
         ___7__TGraphTask_V__TFunctionGraphTaskImpl___A6AXW4Type_ENamedThreads__AEBV__TRefCountPtr_VFBaseGraphTask_____Z_0A_____6B_
    ;
  }
  *(TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> **
   )&this[1].field_0x8 = param_3;
  *(TAtomic<FMinimalName> *)&this[1].field_0x18 = (param_2.StatIdPtr)->Name;
  *(char **)&this[1].field_0x40 = param_2.StatIdPtr[1].StatDescriptionAnsi.Ptr;
  param_2.StatIdPtr[1].StatDescriptionAnsi.Ptr = (char *)0x0;
  TVar2 = param_2.StatIdPtr[1].Name;
  *(char **)&this[1].field_0x28 = ((param_2.StatIdPtr)->StatDescriptionAnsi).Ptr;
  *(TAtomic<FMinimalName> *)&this[1].field_0x30 = TVar2;
  *(wchar_t **)&this[1].field_0x38 = param_2.StatIdPtr[1].StatDescriptionWide.Ptr;
  if (*(longlong *)&this[1].field_0x18 != 0) {
    (param_2.StatIdPtr)->Name = (TAtomic<FMinimalName>)0x0;
  }
  *(Type *)&this[1].field_0x48 = in_stack_00000028;
  UE::Tasks::Private::TranslatePriority(in_stack_00000028,local_27,&local_28);
  FBaseGraphTask::Init(this,L"GraphTask",local_27[0],local_28,None);
  *(FBaseGraphTask **)param_1 = this;
  if (this != (FBaseGraphTask *)0x0) {
    LOCK();
    *(int *)&this->field_0x30 = *(int *)&this->field_0x30 + 1;
    UNLOCK();
  }
  UE::Tasks::Private::FTaskBase::TryLaunch(*(FTaskBase **)param_1,0x130);
  if ((param_2.StatIdPtr)->Name != (TAtomic<FMinimalName>)0x0) {
    pTVar1 = (TUniquePtr<char_[0],TDefaultDelete<char_[0]>_> *)
             param_2.StatIdPtr[1].StatDescriptionAnsi.Ptr;
    pTVar3 = &(param_2.StatIdPtr)->StatDescriptionAnsi;
    if (pTVar1 != (TUniquePtr<char_[0],TDefaultDelete<char_[0]>_> *)0x0) {
      pTVar3 = pTVar1;
    }
    (**(code **)(pTVar3->Ptr + 0x10))(pTVar3);
  }
  return (TRefCountPtr<FBaseGraphTask>)(FBaseGraphTask *)param_1;
}

