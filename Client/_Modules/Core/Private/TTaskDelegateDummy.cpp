// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 7

// Call @ 141489790

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTask * __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::TTaskDelegateDummy::Call
          (TTaskDelegateDummy *this,void *param_1,bool param_2)

{
  code *pcVar1;
  bool bVar2;
  FTask *pFVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Fundamental\\TaskDelegate.h"
                     ,100,L"trying to Call a dummy TaskDelegate");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FTask *)(*pcVar1)();
    return pFVar3;
  }
  return _DAT_00000001;
}

// CallAndMove @ 14148b790

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTask * __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::TTaskDelegateDummy::
CallAndMove(TTaskDelegateDummy *this,TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48> *param_1
           ,void *param_2,uint param_3,bool param_4)

{
  code *pcVar1;
  bool bVar2;
  FTask *pFVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Fundamental\\TaskDelegate.h"
                     ,0x6a,L"trying to Call a dummy TaskDelegate");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FTask *)(*pcVar1)();
    return pFVar3;
  }
  return _DAT_00000001;
}

// DelegateSize @ 141490ec0

uint __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::TTaskDelegateDummy::
DelegateSize(TTaskDelegateDummy *this)

{
  return 0;
}

// Destroy @ 1414921d0

void __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::TTaskDelegateDummy::Destroy
          (TTaskDelegateDummy *this,void *param_1)

{
  return;
}

// IsHeapAllocated @ 14149df40

bool __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::TTaskDelegateDummy::
IsHeapAllocated(TTaskDelegateDummy *this)

{
  return false;
}

// IsSet @ 14149e790

bool __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::TTaskDelegateDummy::IsSet
          (TTaskDelegateDummy *this)

{
  return false;
}

// Move @ 1414a5d80

void __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::TTaskDelegateDummy::Move
          (TTaskDelegateDummy *this,TTaskDelegateBase *param_1,void *param_2,void *param_3,
          uint param_4)

{
  return;
}

