// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 1

// CopyFrom<FDefaultTSDelegateUserPolicy> @ 145e3abc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
TDelegate<void___cdecl(FSHAHash_const_&,FArchive_*),FDefaultTSDelegateUserPolicy>::
CopyFrom<FDefaultTSDelegateUserPolicy>
          (TDelegate<void___cdecl(FSHAHash_const_&,FArchive_*),FDefaultTSDelegateUserPolicy> *this,
          TDelegate<void___cdecl(FSHAHash_const_&,FArchive_*),FDefaultTSDelegateUserPolicy> *param_1
          )

{
  code *pcVar1;
  ForAnyElementType FVar2;
  int iVar3;
  bool bVar4;
  undefined1 auStack_78 [32];
  _RTL_CRITICAL_SECTION local_58;
  ForAnyElementType local_30;
  int local_28;
  ulonglong local_20;
  
  if (param_1 != this) {
    local_20 = __security_cookie.value ^ (ulonglong)auStack_78;
    InitializeCriticalSectionAndSpinCount(&local_58,4000);
    local_30.Data = (FScriptContainerElement *)0x0;
    local_28 = 0;
    if (param_1 ==
        (TDelegate<void___cdecl(FSHAHash_const_&,FArchive_*),FDefaultTSDelegateUserPolicy> *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L"");
      if (bVar4) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    EnterCriticalSection((LPCRITICAL_SECTION)param_1);
    if ((*(int *)&param_1->field_0x30 != 0) &&
       (*(longlong **)&param_1->field_0x28 != (longlong *)0x0)) {
      (**(code **)(**(longlong **)&param_1->field_0x28 + 0x58))();
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1);
    EnterCriticalSection(&local_58);
    iVar3 = local_28;
    FVar2.Data = local_30.Data;
    local_30.Data = (FScriptContainerElement *)0x0;
    local_28 = 0;
    LeaveCriticalSection(&local_58);
    if (this == (TDelegate<void___cdecl(FSHAHash_const_&,FArchive_*),FDefaultTSDelegateUserPolicy> *
                )0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L"");
      if (bVar4) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    EnterCriticalSection((LPCRITICAL_SECTION)this);
    if ((*(int *)&this->field_0x30 != 0) && (*(undefined8 **)&this->field_0x28 != (undefined8 *)0x0)
       ) {
      (**(code **)**(undefined8 **)&this->field_0x28)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&this->field_0x28,0,0,0x10);
      *(undefined4 *)&this->field_0x30 = 0;
    }
    if (*(void **)&this->field_0x28 != (void *)0x0) {
      FMemory::Free(*(void **)&this->field_0x28);
    }
    *(FScriptContainerElement **)&this->field_0x28 = FVar2.Data;
    *(int *)&this->field_0x30 = iVar3;
    LeaveCriticalSection((LPCRITICAL_SECTION)this);
    EnterCriticalSection(&local_58);
    if ((local_28 != 0) && (local_30.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)local_30.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_30,0,0,0x10);
      local_28 = 0;
    }
    LeaveCriticalSection(&local_58);
    if (local_30.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_30.Data);
    }
    DeleteCriticalSection(&local_58);
  }
  return;
}

