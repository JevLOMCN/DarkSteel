// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineSubsystemUtils
// Functions: 1

// Broadcast @ 14ecddd40

void __thiscall
TMulticastDelegate<void___cdecl(TSharedRef<FUniqueNetId_const_,1>,bool),FDefaultDelegateUserPolicy>
::Broadcast(TMulticastDelegate<void___cdecl(TSharedRef<FUniqueNetId_const_,1>,bool),FDefaultDelegateUserPolicy>
            *this,TSharedRef<FUniqueNetId_const_,1> *param_1,bool param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  FUniqueNetId *pFVar2;
  longlong *plVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  char cVar8;
  uint uVar9;
  longlong lVar10;
  uint uVar11;
  FUniqueNetId *local_68;
  TReferenceControllerBase<1> *local_60;
  FDestructionSentinel local_58;
  
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  pFVar2 = param_1->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,
             (FWriteAccessScope *)&local_58);
  *(int *)&this->field_0x1c = *(int *)&this->field_0x1c + 1;
  bVar6 = false;
  uVar11 = *(int *)&this->field_0x10 - 1;
  if (-1 < (int)uVar11) {
    lVar10 = (longlong)(int)uVar11 << 4;
    bVar6 = false;
    do {
      uVar9 = 0;
      if ((int)uVar11 < *(int *)&this->field_0x10) {
        uVar9 = ~uVar11 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if ((*(int *)(*(longlong *)&this->field_0x8 + 8 + lVar10) == 0) ||
         (plVar3 = *(longlong **)(*(longlong *)&this->field_0x8 + lVar10), plVar3 == (longlong *)0x0
         )) {
LAB_14ecdde40:
        bVar6 = true;
      }
      else {
        lVar4 = *plVar3;
        if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_68 = pFVar2;
        local_60 = pTVar1;
        cVar8 = (**(code **)(lVar4 + 0x68))(plVar3,&local_68,param_2);
        if (cVar8 == '\0') goto LAB_14ecdde40;
      }
      lVar10 = lVar10 + -0x10;
      uVar11 = uVar11 - 1;
    } while (-1 < (int)uVar11);
  }
  *(int *)&this->field_0x1c = *(int *)&this->field_0x1c + -1;
  if (bVar6) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this,false);
  }
  if (local_58.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_58.Accessor,&local_58);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

