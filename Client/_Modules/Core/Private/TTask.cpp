// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 4

// ~TTask<void> @ 141d6d0d0

void __thiscall UE::Tasks::TTask<void>::~TTask<void>(TTask<void> *this)

{
  int *piVar1;
  int iVar2;
  TTask<void> TVar3;
  
  TVar3 = *this;
  if (TVar3 != (TTask<void>)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)TVar3 + 0x30);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x000141d6d0ef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)**(undefined8 **)TVar3)(TVar3,1);
      return;
    }
  }
  return;
}

// ~TTask<bool> @ 141d6d100

void __thiscall UE::Tasks::TTask<bool>::~TTask<bool>(TTask<bool> *this)

{
  int *piVar1;
  int iVar2;
  TTask<bool> TVar3;
  
  TVar3 = *this;
  if (TVar3 != (TTask<bool>)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)TVar3 + 0x30);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x000141d6d11f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)**(undefined8 **)TVar3)(TVar3,1);
      return;
    }
  }
  return;
}

// GetResult @ 141d7a000

FMoveConstructable * __thiscall
UE::Tasks::TTask<`UE::TasksTests::FTasksBasicTest::TestBody'::__l119::FMoveConstructable>::GetResult
          (void *this)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  FMoveConstructable *pFVar4;
  
  if (*(longlong *)this == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Tasks\\Task.h"
                       ,0xc6,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FMoveConstructable *)(*pcVar2)();
      return pFVar4;
    }
  }
  if (*(FTaskBase **)this != (FTaskBase *)0x0) {
    Tasks::Private::FTaskBase::Wait(*(FTaskBase **)this);
  }
  lVar1 = *(longlong *)this;
  if (*(char *)(lVar1 + 0xd0) == '\0') {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsCompleted()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Tasks\\TaskPrivate.h"
                       ,0x353,L"The task must be completed to obtain its result");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FMoveConstructable *)(*pcVar2)();
      return pFVar4;
    }
  }
  return (FMoveConstructable *)(lVar1 + 0xd8);
}

// GetResult @ 141d7a090

bool * __thiscall UE::Tasks::TTask<bool>::GetResult(TTask<bool> *this)

{
  TTask<bool> TVar1;
  code *pcVar2;
  bool bVar3;
  bool *pbVar4;
  
  if (*this == (TTask<bool>)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Tasks\\Task.h"
                       ,0xc6,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pbVar4 = (bool *)(*pcVar2)();
      return pbVar4;
    }
  }
  if (*this != (TTask<bool>)0x0) {
    Tasks::Private::FTaskBase::Wait((FTaskBase *)*this);
  }
  TVar1 = *this;
  if (*(char *)((longlong)TVar1 + 0xd0) == '\0') {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsCompleted()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Tasks\\TaskPrivate.h"
                       ,0x353,L"The task must be completed to obtain its result");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pbVar4 = (bool *)(*pcVar2)();
      return pbVar4;
    }
  }
  return (bool *)((longlong)TVar1 + 0xd8);
}

