// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AppFramework
// Functions: 1

// Broadcast @ 142f58e00

void __thiscall
TMulticastDelegate<void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<int,1>_>),FDefaultDelegateUserPolicy>
::Broadcast(TMulticastDelegate<void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<TSharedPtr<int,1>_>),FDefaultDelegateUserPolicy>
            *this,TObservableArrayChangedArgs<TSharedPtr<int,1>_> *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  TSharedPtr<int,1> *pTVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  bool bVar8;
  bool bVar9;
  char cVar10;
  uint uVar11;
  uint uVar12;
  longlong lVar13;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  FDestructionSentinel local_48;
  TSharedPtr<int,1> *local_28;
  undefined8 uStack_20;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  pTVar3 = (param_1->Array).DataPtr;
  uVar4 = *(undefined8 *)&(param_1->Array).ArrayNum;
  uVar5 = param_1->StartIndex;
  uVar6 = param_1->MoveIndex;
  uVar7 = *(undefined8 *)&param_1->Action;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,
             (FWriteAccessScope *)&local_48);
  *(int *)&this->field_0x1c = *(int *)&this->field_0x1c + 1;
  bVar8 = false;
  uVar12 = *(int *)&this->field_0x10 - 1;
  if (-1 < (int)uVar12) {
    lVar13 = (longlong)(int)uVar12 << 4;
    bVar8 = false;
    do {
      uVar11 = 0;
      if ((int)uVar12 < *(int *)&this->field_0x10) {
        uVar11 = ~uVar12 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if ((*(int *)(lVar13 + 8 + *(longlong *)&this->field_0x8) == 0) ||
         (plVar1 = *(longlong **)(lVar13 + *(longlong *)&this->field_0x8), plVar1 == (longlong *)0x0
         )) {
LAB_142f58ee0:
        bVar8 = true;
      }
      else {
        uStack_50 = (undefined4)uVar7;
        uStack_4c = (undefined4)((ulonglong)uVar7 >> 0x20);
        local_18 = uVar5;
        uStack_14 = uVar6;
        uStack_10 = uStack_50;
        uStack_c = uStack_4c;
        local_28 = pTVar3;
        uStack_20 = uVar4;
        cVar10 = (**(code **)(*plVar1 + 0x68))();
        if (cVar10 == '\0') goto LAB_142f58ee0;
      }
      lVar13 = lVar13 + -0x10;
      uVar12 = uVar12 - 1;
    } while (-1 < (int)uVar12);
  }
  *(int *)&this->field_0x1c = *(int *)&this->field_0x1c + -1;
  if (bVar8) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this,false);
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  return;
}

