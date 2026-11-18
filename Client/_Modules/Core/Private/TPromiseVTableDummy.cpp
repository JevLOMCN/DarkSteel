// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 14

// Finish @ 141496240

void __thiscall
AwaitableTask_Detail::TPromiseVTableDummy<void>::Finish(TPromiseVTableDummy<void> *this)

{
  return;
}

// Finish @ 141496250

void __thiscall
AwaitableTask_Detail::TPromiseVTableDummy<__int64>::Finish(TPromiseVTableDummy<__int64> *this)

{
  return;
}

// GetResult @ 14149a330

void __thiscall
AwaitableTask_Detail::TPromiseVTableDummy<void>::GetResult(TPromiseVTableDummy<void> *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Experimental\\Async\\AwaitableTask.h"
                     ,0x6d,L"trying to get the Result of an empty AwaitableTask");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// GetResult @ 14149a370

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long64 __thiscall
AwaitableTask_Detail::TPromiseVTableDummy<__int64>::GetResult(TPromiseVTableDummy<__int64> *this)

{
  code *pcVar1;
  bool bVar2;
  long64 lVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Experimental\\Async\\AwaitableTask.h"
                     ,0x6d,L"trying to get the Result of an empty AwaitableTask");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    lVar3 = (*pcVar1)();
    return lVar3;
  }
  return _DAT_00000001;
}

// IncrementRefCount @ 14149b5a0

void __thiscall
AwaitableTask_Detail::TPromiseVTableDummy<void>::IncrementRefCount(TPromiseVTableDummy<void> *this)

{
  return;
}

// IncrementRefCount @ 14149b5b0

void __thiscall
AwaitableTask_Detail::TPromiseVTableDummy<__int64>::IncrementRefCount
          (TPromiseVTableDummy<__int64> *this)

{
  return;
}

// IsCompleted @ 14149dae0

bool __thiscall
AwaitableTask_Detail::TPromiseVTableDummy<void>::IsCompleted(TPromiseVTableDummy<void> *this)

{
  return true;
}

// IsCompleted @ 14149daf0

bool __thiscall
AwaitableTask_Detail::TPromiseVTableDummy<__int64>::IsCompleted(TPromiseVTableDummy<__int64> *this)

{
  return true;
}

// IsLaunched @ 14149e0f0

bool __thiscall
AwaitableTask_Detail::TPromiseVTableDummy<void>::IsLaunched(TPromiseVTableDummy<void> *this)

{
  return false;
}

// IsLaunched @ 14149e100

bool __thiscall
AwaitableTask_Detail::TPromiseVTableDummy<__int64>::IsLaunched(TPromiseVTableDummy<__int64> *this)

{
  return false;
}

// IsValid @ 14149e930

bool __thiscall
AwaitableTask_Detail::TPromiseVTableDummy<void>::IsValid(TPromiseVTableDummy<void> *this)

{
  return false;
}

// IsValid @ 14149e940

bool __thiscall
AwaitableTask_Detail::TPromiseVTableDummy<__int64>::IsValid(TPromiseVTableDummy<__int64> *this)

{
  return false;
}

// TryLaunch @ 1414b6e60

bool __thiscall
AwaitableTask_Detail::TPromiseVTableDummy<void>::TryLaunch(TPromiseVTableDummy<void> *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Experimental\\Async\\AwaitableTask.h"
                     ,99,L"trying to Launch an empty AwaitableTask");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    bVar2 = (bool)(*pcVar1)();
    return bVar2;
  }
  return false;
}

// TryLaunch @ 1414b6ea0

bool __thiscall
AwaitableTask_Detail::TPromiseVTableDummy<__int64>::TryLaunch(TPromiseVTableDummy<__int64> *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Experimental\\Async\\AwaitableTask.h"
                     ,99,L"trying to Launch an empty AwaitableTask");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    bVar2 = (bool)(*pcVar1)();
    return bVar2;
  }
  return false;
}

