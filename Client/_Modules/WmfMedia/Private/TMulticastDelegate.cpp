// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WmfMedia
// Functions: 1

// Broadcast @ 14eaa0b90

void __thiscall
TMulticastDelegate<void___cdecl(enum_EWmfMediaSamplerClockEvent),FDefaultDelegateUserPolicy>::
Broadcast(void *this,EWmfMediaSamplerClockEvent param_1)

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
            (this,(FWriteAccessScope *)&local_38);
  bVar3 = false;
  *(int *)((longlong)this + 0x1c) = *(int *)((longlong)this + 0x1c) + 1;
  uVar7 = *(int *)((longlong)this + 0x10) - 1;
  if (-1 < (int)uVar7) {
    lVar8 = (longlong)(int)uVar7 << 4;
    bVar3 = false;
    do {
      uVar6 = 0;
      if ((int)uVar7 < *(int *)((longlong)this + 0x10)) {
        uVar6 = ~uVar7 >> 0x1f;
      }
      if (uVar6 == 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      if ((*(int *)(*(longlong *)((longlong)this + 8) + 8 + lVar8) == 0) ||
         (plVar1 = *(longlong **)(*(longlong *)((longlong)this + 8) + lVar8),
         plVar1 == (longlong *)0x0)) {
LAB_14eaa0c47:
        bVar3 = true;
      }
      else {
        cVar5 = (**(code **)(*plVar1 + 0x68))();
        if (cVar5 == '\0') goto LAB_14eaa0c47;
      }
      lVar8 = lVar8 + -0x10;
      uVar7 = uVar7 - 1;
    } while (-1 < (int)uVar7);
  }
  *(int *)((longlong)this + 0x1c) = *(int *)((longlong)this + 0x1c) + -1;
  if (bVar3) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList(this,false);
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  return;
}

