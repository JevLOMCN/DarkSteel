// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 7

// Call @ 141489750

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTask * __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::TTaskDelegateBase::Call
          (TTaskDelegateBase *this,void *param_1,bool param_2)

{
  code *pcVar1;
  bool bVar2;
  FTask *pFVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("!\"Enclosing block should never be called\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Fundamental\\TaskDelegate.h"
                     ,0x3a,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FTask *)(*pcVar1)();
    return pFVar3;
  }
  return _DAT_00000001;
}

// CallAndMove @ 14148b750

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTask * __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::TTaskDelegateBase::
CallAndMove(TTaskDelegateBase *this,TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48> *param_1,
           void *param_2,uint param_3,bool param_4)

{
  code *pcVar1;
  bool bVar2;
  FTask *pFVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("!\"Enclosing block should never be called\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Fundamental\\TaskDelegate.h"
                     ,0x40,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FTask *)(*pcVar1)();
    return pFVar3;
  }
  return _DAT_00000001;
}

// DelegateSize @ 141490e80

uint __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::TTaskDelegateBase::
DelegateSize(TTaskDelegateBase *this)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("!\"Enclosing block should never be called\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Fundamental\\TaskDelegate.h"
                     ,0x57,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return uVar3;
  }
  return 0;
}

// Destroy @ 141492190

void __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::TTaskDelegateBase::Destroy
          (TTaskDelegateBase *this,void *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("!\"Enclosing block should never be called\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Fundamental\\TaskDelegate.h"
                     ,0x46,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// IsHeapAllocated @ 14149df00

bool __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::TTaskDelegateBase::
IsHeapAllocated(TTaskDelegateBase *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("!\"Enclosing block should never be called\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Fundamental\\TaskDelegate.h"
                     ,0x4b,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    bVar2 = (bool)(*pcVar1)();
    return bVar2;
  }
  return false;
}

// IsSet @ 14149e750

bool __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::TTaskDelegateBase::IsSet
          (TTaskDelegateBase *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("!\"Enclosing block should never be called\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Fundamental\\TaskDelegate.h"
                     ,0x51,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    bVar2 = (bool)(*pcVar1)();
    return bVar2;
  }
  return false;
}

// Move @ 1414a5d40

void __thiscall
LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::TTaskDelegateBase::Move
          (TTaskDelegateBase *this,TTaskDelegateBase *param_1,void *param_2,void *param_3,
          uint param_4)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("!\"Enclosing block should never be called\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Fundamental\\TaskDelegate.h"
                     ,0x35,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

