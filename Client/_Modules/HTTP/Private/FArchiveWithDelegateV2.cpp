// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HTTP
// Functions: 2

// ~FArchiveWithDelegateV2 @ 14314ff90

void __thiscall FArchiveWithDelegateV2::~FArchiveWithDelegateV2(FArchiveWithDelegateV2 *this)

{
  TDelegate<void___cdecl(void_*,__int64_&),FDefaultTSDelegateUserPolicy> *lpCriticalSection;
  undefined8 *puVar1;
  void *pvVar2;
  code *pcVar3;
  bool bVar4;
  
  lpCriticalSection = &this->StreamDelegateV2;
  if (lpCriticalSection ==
      (TDelegate<void___cdecl(void_*,__int64_&),FDefaultTSDelegateUserPolicy> *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Mutex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                       ,0x1b,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if ((*(int *)&(this->StreamDelegateV2).field_0x30 != 0) &&
     (puVar1 = *(undefined8 **)&(this->StreamDelegateV2).field_0x28, puVar1 != (undefined8 *)0x0)) {
    (**(code **)*puVar1)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&(this->StreamDelegateV2).field_0x28,0,0,0x10);
    *(undefined4 *)&(this->StreamDelegateV2).field_0x30 = 0;
  }
  if (lpCriticalSection !=
      (TDelegate<void___cdecl(void_*,__int64_&),FDefaultTSDelegateUserPolicy> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  pvVar2 = *(void **)&(this->StreamDelegateV2).field_0x28;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  FArchive::~FArchive((FArchive *)this);
  return;
}

// Serialize @ 14317ca60

void __thiscall
FArchiveWithDelegateV2::Serialize(FArchiveWithDelegateV2 *this,void *param_1,long64 param_2)

{
  TDelegate<void___cdecl(void_*,__int64_&),FDefaultTSDelegateUserPolicy> *lpCriticalSection;
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  long64 local_res8;
  
  lpCriticalSection = &this->StreamDelegateV2;
  local_res8 = param_2;
  if ((lpCriticalSection ==
       (TDelegate<void___cdecl(void_*,__int64_&),FDefaultTSDelegateUserPolicy> *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if ((*(int *)&(this->StreamDelegateV2).field_0x30 != 0) &&
     (plVar1 = *(longlong **)&(this->StreamDelegateV2).field_0x28, plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x68))(plVar1,param_1,&local_res8);
  }
  if (lpCriticalSection !=
      (TDelegate<void___cdecl(void_*,__int64_&),FDefaultTSDelegateUserPolicy> *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  if (local_res8 != param_2) {
    FArchiveState::SetError((FArchiveState *)this);
  }
  return;
}

