// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DataflowEngine
// Functions: 1

// Broadcast<IBaseDelegateInstance<void___cdecl(TArray<FRichCurve_*,TSizedDefaultAllocator<32>_>),FDefaultDelegateUserPolicy>,TArray<FRichCurve_*,TSizedDefaultAllocator<32>_>_> @ 1462c83b0

void __thiscall
TMulticastDelegateBase<FDefaultDelegateUserPolicy>::
Broadcast<IBaseDelegateInstance<void___cdecl(TArray<FRichCurve_*,TSizedDefaultAllocator<32>_>),FDefaultDelegateUserPolicy>,TArray<FRichCurve_*,TSizedDefaultAllocator<32>_>_>
          (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *this,
          TArray<FRichCurve_*,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  ForAnyElementType local_68;
  int local_60;
  int local_5c;
  FDestructionSentinel local_58;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,
             (FWriteAccessScope *)&local_58);
  this->InvocationListLockCount = this->InvocationListLockCount + 1;
  bVar4 = false;
  uVar8 = (this->InvocationList).ArrayNum - 1;
  if (-1 < (int)uVar8) {
    lVar10 = (longlong)(int)uVar8 << 4;
    bVar4 = false;
    do {
      uVar7 = 0;
      if ((int)uVar8 < (this->InvocationList).ArrayNum) {
        uVar7 = ~uVar8 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar1 = (this->InvocationList).AllocatorInstance.Data;
      if ((*(int *)(pFVar1 + lVar10 + 8) == 0) ||
         (plVar2 = *(longlong **)(pFVar1 + lVar10), plVar2 == (longlong *)0x0)) {
LAB_1462c84ee:
        bVar4 = true;
      }
      else {
        local_60 = param_1->ArrayNum;
        lVar9 = (longlong)local_60;
        pFVar1 = (param_1->AllocatorInstance).Data;
        local_68.Data = (FScriptContainerElement *)0x0;
        pcVar3 = *(code **)(*plVar2 + 0x68);
        if (local_60 == 0) {
          local_5c = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,local_60,0,&local_68,local_60,&local_5c);
          memcpy(local_68.Data,pFVar1,lVar9 << 3);
        }
        cVar6 = (*pcVar3)(plVar2);
        if (cVar6 == '\0') goto LAB_1462c84ee;
      }
      lVar10 = lVar10 + -0x10;
      uVar8 = uVar8 - 1;
    } while (-1 < (int)uVar8);
  }
  this->InvocationListLockCount = this->InvocationListLockCount + -1;
  if (bVar4) {
    CompactInvocationList(this,false);
  }
  if (local_58.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_58.Accessor,&local_58);
  }
  pFVar1 = (param_1->AllocatorInstance).Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

