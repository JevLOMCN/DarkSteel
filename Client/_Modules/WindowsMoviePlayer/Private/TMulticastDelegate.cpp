// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WindowsMoviePlayer
// Functions: 1

// Broadcast @ 14f129240

void __thiscall
TMulticastDelegate<void___cdecl(TSharedPtr<IMovieStreamer,1>),FDefaultDelegateUserPolicy>::Broadcast
          (TMulticastDelegate<void___cdecl(TSharedPtr<IMovieStreamer,1>),FDefaultDelegateUserPolicy>
           *this,TSharedPtr<IMovieStreamer,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  longlong *plVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  uint uVar8;
  longlong lVar9;
  uint uVar10;
  FDestructionSentinel local_48;
  
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,
             (FWriteAccessScope *)&local_48);
  *(int *)&this->field_0x1c = *(int *)&this->field_0x1c + 1;
  bVar5 = false;
  uVar10 = *(int *)&this->field_0x10 - 1;
  if (-1 < (int)uVar10) {
    lVar9 = (longlong)(int)uVar10 << 4;
    bVar5 = false;
    do {
      uVar8 = 0;
      if ((int)uVar10 < *(int *)&this->field_0x10) {
        uVar8 = ~uVar10 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if ((*(int *)(*(longlong *)&this->field_0x8 + 8 + lVar9) == 0) ||
         (plVar2 = *(longlong **)(*(longlong *)&this->field_0x8 + lVar9), plVar2 == (longlong *)0x0)
         ) {
LAB_14f12931f:
        bVar5 = true;
      }
      else {
        lVar3 = *plVar2;
        if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
          UNLOCK();
        }
        cVar7 = (**(code **)(lVar3 + 0x68))();
        if (cVar7 == '\0') goto LAB_14f12931f;
      }
      lVar9 = lVar9 + -0x10;
      uVar10 = uVar10 - 1;
    } while (-1 < (int)uVar10);
  }
  *(int *)&this->field_0x1c = *(int *)&this->field_0x1c + -1;
  if (bVar5) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this,false);
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

