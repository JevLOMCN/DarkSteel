// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ImageWrapper
// Functions: 3

// ~<lambda_1> @ 142665020

void __thiscall
`LowLevelTasks::FTask::Init<`UE::Tasks::Private::FTaskBase::Init'::__l2::<lambda_1>_>'::__l13::
<lambda_1>::~<lambda_1>(void *this)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  
  puVar3 = *(undefined8 **)((longlong)this + 8);
  if (puVar3 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar3 + 6);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)*puVar3)(puVar3,1);
    }
  }
  return;
}

// ~<lambda_1> @ 142665060

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
`LowLevelTasks::FTask::
Init<`ParallelForImpl::ParallelForInternal<TFunctionRef<void___cdecl(int)>,`ParallelFor'::__l2::<lambda_1>,std::nullptr_t>'::__l2::FParallelExecutor>'
::__l13::<lambda_1>::~<lambda_1>(void *this)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  
  if ((*(longlong *)this != 0) && (*(char *)((longlong)this + 0xc) != '\0')) {
    `ParallelForImpl::
    ParallelForInternal<TFunctionRef<void___cdecl(int)>,`ParallelFor'::__l2::<lambda_1>,std::nullptr_t>'
    ::__l2::FParallelExecutor::LaunchTask(this,*(int *)((longlong)this + 8),true);
  }
  puVar3 = *(undefined8 **)this;
  if (puVar3 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar3 + 1);
    LOCK();
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar2 == 1) && (piVar1 != (int *)0x0)) {
      (**(code **)*puVar3)(puVar3,1);
    }
  }
  return;
}

// ~FTask @ 14266a3f0

void __thiscall LowLevelTasks::FTask::~FTask(FTask *this)

{
  code *pcVar1;
  bool bVar2;
  
  if ((*(ulonglong *)&this->field_0x38 & 0x20) == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsCompleted()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Fundamental\\Task.h"
                       ,0x204,L"State: %d");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  (**(code **)(*(longlong *)&this->field_0x28 + 0x18))(&this->field_0x28,this);
  return;
}

