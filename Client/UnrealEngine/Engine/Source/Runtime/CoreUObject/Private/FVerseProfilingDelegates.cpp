// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 2

// RaiseBeginProfilingEvent @ 1422b1050

void __cdecl FVerseProfilingDelegates::RaiseBeginProfilingEvent(void)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  FDestructionSentinel local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&OnBeginProfilingEvent,
             (FWriteAccessScope *)&local_28);
  bVar2 = false;
  OnBeginProfilingEvent._28_4_ = OnBeginProfilingEvent._28_4_ + 1;
  uVar6 = OnBeginProfilingEvent._16_4_ - 1;
  if (-1 < (int)uVar6) {
    lVar7 = (longlong)(int)uVar6 << 4;
    bVar2 = false;
    do {
      uVar5 = 0;
      if ((int)uVar6 < (int)OnBeginProfilingEvent._16_4_) {
        uVar5 = ~uVar6 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if (((*(int *)(lVar7 + 8 + OnBeginProfilingEvent._8_8_) == 0) ||
          (*(longlong **)(lVar7 + OnBeginProfilingEvent._8_8_) == (longlong *)0x0)) ||
         (cVar4 = (**(code **)(**(longlong **)(lVar7 + OnBeginProfilingEvent._8_8_) + 0x68))(),
         cVar4 == '\0')) {
        bVar2 = true;
      }
      lVar7 = lVar7 + -0x10;
      uVar6 = uVar6 - 1;
    } while (-1 < (int)uVar6);
  }
  OnBeginProfilingEvent._28_4_ = OnBeginProfilingEvent._28_4_ + -1;
  if (bVar2) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&OnBeginProfilingEvent,false);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// RaiseEndProfilingEvent @ 1422b1180

void __cdecl
FVerseProfilingDelegates::RaiseEndProfilingEvent
          (char *param_1,double param_2,FProfileLocus *param_3)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  FDestructionSentinel local_48 [2];
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&OnEndProfilingEvent,
             (FWriteAccessScope *)local_48);
  bVar3 = false;
  OnEndProfilingEvent._28_4_ = OnEndProfilingEvent._28_4_ + 1;
  uVar7 = OnEndProfilingEvent._16_4_ - 1;
  if (-1 < (int)uVar7) {
    lVar8 = (longlong)(int)uVar7 << 4;
    bVar3 = false;
    do {
      uVar6 = 0;
      if ((int)uVar7 < (int)OnEndProfilingEvent._16_4_) {
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
      if (((*(int *)(lVar8 + 8 + OnEndProfilingEvent._8_8_) == 0) ||
          (plVar1 = *(longlong **)(lVar8 + OnEndProfilingEvent._8_8_), plVar1 == (longlong *)0x0))
         || (cVar5 = (**(code **)(*plVar1 + 0x68))(plVar1,param_1,SUB84(param_2,0),param_3),
            cVar5 == '\0')) {
        bVar3 = true;
      }
      lVar8 = lVar8 + -0x10;
      uVar7 = uVar7 - 1;
    } while (-1 < (int)uVar7);
  }
  OnEndProfilingEvent._28_4_ = OnEndProfilingEvent._28_4_ + -1;
  if (bVar3) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&OnEndProfilingEvent,false);
  }
  if (local_48[0].bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48[0].Accessor,local_48);
  }
  return;
}

