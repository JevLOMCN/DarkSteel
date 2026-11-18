// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PakFile
// Functions: 2

// Broadcast @ 142a60020

void __thiscall
TMulticastDelegate<void___cdecl(FIoSignatureError_const_&),FDefaultDelegateUserPolicy>::Broadcast
          (TMulticastDelegate<void___cdecl(FIoSignatureError_const_&),FDefaultDelegateUserPolicy>
           *this,FIoSignatureError *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  FDestructionSentinel local_38;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,
             (FWriteAccessScope *)&local_38);
  *(int *)&this->field_0x1c = *(int *)&this->field_0x1c + 1;
  bVar3 = false;
  uVar7 = *(int *)&this->field_0x10 - 1;
  if (-1 < (int)uVar7) {
    lVar8 = (longlong)(int)uVar7 << 4;
    bVar3 = false;
    do {
      uVar6 = 0;
      if ((int)uVar7 < *(int *)&this->field_0x10) {
        uVar6 = ~uVar7 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (((*(int *)(*(longlong *)&this->field_0x8 + 8 + lVar8) == 0) ||
          (plVar1 = *(longlong **)(*(longlong *)&this->field_0x8 + lVar8), plVar1 == (longlong *)0x0
          )) || (cVar5 = (**(code **)(*plVar1 + 0x68))(), cVar5 == '\0')) {
        bVar3 = true;
      }
      lVar8 = lVar8 + -0x10;
      uVar7 = uVar7 - 1;
    } while (-1 < (int)uVar7);
  }
  *(int *)&this->field_0x1c = *(int *)&this->field_0x1c + -1;
  if (bVar3) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this,false);
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  return;
}

// Broadcast @ 142a60140

void __thiscall
TMulticastDelegate<void___cdecl(IPakFile_const_&),FDefaultTSDelegateUserPolicy>::Broadcast
          (TMulticastDelegate<void___cdecl(IPakFile_const_&),FDefaultTSDelegateUserPolicy> *this,
          IPakFile *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  uint uVar6;
  longlong lVar7;
  uint uVar8;
  
  if ((this == (TMulticastDelegate<void___cdecl(IPakFile_const_&),FDefaultTSDelegateUserPolicy> *)
               0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)this);
  *(int *)&this->field_0x3c = *(int *)&this->field_0x3c + 1;
  bVar3 = false;
  uVar8 = *(int *)&this->field_0x30 - 1;
  if (-1 < (int)uVar8) {
    lVar7 = (longlong)(int)uVar8 << 4;
    bVar3 = false;
    do {
      uVar6 = 0;
      if ((int)uVar8 < *(int *)&this->field_0x30) {
        uVar6 = ~uVar8 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (((*(int *)(*(longlong *)&this->field_0x28 + 8 + lVar7) == 0) ||
          (plVar1 = *(longlong **)(*(longlong *)&this->field_0x28 + lVar7),
          plVar1 == (longlong *)0x0)) || (cVar5 = (**(code **)(*plVar1 + 0x68))(), cVar5 == '\0')) {
        bVar3 = true;
      }
      lVar7 = lVar7 + -0x10;
      uVar8 = uVar8 - 1;
    } while (-1 < (int)uVar8);
  }
  *(int *)&this->field_0x3c = *(int *)&this->field_0x3c + -1;
  if (bVar3) {
    TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)this,false);
  }
                    /* WARNING: Could not recover jumptable at 0x000142a60269. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)this);
  return;
}

