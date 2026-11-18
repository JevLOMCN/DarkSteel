// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 11

// Broadcast @ 142433ee0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TMulticastDelegate<void___cdecl(FSlateDebuggingFocusEventArgs_const_&),FDefaultDelegateUserPolicy>::
Broadcast(TMulticastDelegate<void___cdecl(FSlateDebuggingFocusEventArgs_const_&),FDefaultDelegateUserPolicy>
          *this,FSlateDebuggingFocusEventArgs *param_1)

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

// Broadcast @ 142434000

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TMulticastDelegate<void___cdecl(FSlateDebuggingInputEventArgs_const_&),FDefaultDelegateUserPolicy>::
Broadcast(TMulticastDelegate<void___cdecl(FSlateDebuggingInputEventArgs_const_&),FDefaultDelegateUserPolicy>
          *this,FSlateDebuggingInputEventArgs *param_1)

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

// Broadcast @ 142434120

void __thiscall
TMulticastDelegate<void___cdecl(FSlateDebuggingInvalidateArgs_const_&),FDefaultDelegateUserPolicy>::
Broadcast(TMulticastDelegate<void___cdecl(FSlateDebuggingInvalidateArgs_const_&),FDefaultDelegateUserPolicy>
          *this,FSlateDebuggingInvalidateArgs *param_1)

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

// Broadcast @ 142434240

void __thiscall
TMulticastDelegate<void___cdecl(FSlateDebuggingMouseCaptureEventArgs_const_&),FDefaultDelegateUserPolicy>
::Broadcast(TMulticastDelegate<void___cdecl(FSlateDebuggingMouseCaptureEventArgs_const_&),FDefaultDelegateUserPolicy>
            *this,FSlateDebuggingMouseCaptureEventArgs *param_1)

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

// Broadcast @ 142434360

void __thiscall
TMulticastDelegate<void___cdecl(FSlateDebuggingWidgetUpdatedEventArgs_const_&),FDefaultDelegateUserPolicy>
::Broadcast(TMulticastDelegate<void___cdecl(FSlateDebuggingWidgetUpdatedEventArgs_const_&),FDefaultDelegateUserPolicy>
            *this,FSlateDebuggingWidgetUpdatedEventArgs *param_1)

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

// Broadcast @ 142434480

void __thiscall
TMulticastDelegate<void___cdecl(bool),FDefaultDelegateUserPolicy>::Broadcast
          (TMulticastDelegate<void___cdecl(bool),FDefaultDelegateUserPolicy> *this,bool param_1)

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

// Broadcast @ 142501e70

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TMulticastDelegate<void___cdecl(FSlateDebuggingElementTypeAddedEventArgs_const_&),FDefaultDelegateUserPolicy>
::Broadcast(TMulticastDelegate<void___cdecl(FSlateDebuggingElementTypeAddedEventArgs_const_&),FDefaultDelegateUserPolicy>
            *this,FSlateDebuggingElementTypeAddedEventArgs *param_1)

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

// Broadcast @ 142501f90

void __thiscall
TMulticastDelegate<void___cdecl(FHittestGrid_const_*,FHittestGrid::FDebuggingFindNextFocusableWidgetArgs_const_&),FDefaultDelegateUserPolicy>
::Broadcast(TMulticastDelegate<void___cdecl(FHittestGrid_const_*,FHittestGrid::FDebuggingFindNextFocusableWidgetArgs_const_&),FDefaultDelegateUserPolicy>
            *this,FHittestGrid *param_1,FDebuggingFindNextFocusableWidgetArgs *param_2)

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
      if (((*(int *)(lVar8 + 8 + *(longlong *)&this->field_0x8) == 0) ||
          (plVar1 = *(longlong **)(lVar8 + *(longlong *)&this->field_0x8), plVar1 == (longlong *)0x0
          )) || (cVar5 = (**(code **)(*plVar1 + 0x68))(plVar1,param_1,param_2), cVar5 == '\0')) {
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

// Broadcast @ 1425684d0

void __thiscall
TMulticastDelegate<void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<int>),FDefaultDelegateUserPolicy>
::Broadcast(TMulticastDelegate<void___cdecl(UE::Slate::Containers::TObservableArrayChangedArgs<int>),FDefaultDelegateUserPolicy>
            *this,TObservableArrayChangedArgs<int> *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  int *piVar3;
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
  int *local_28;
  undefined8 uStack_20;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  piVar3 = (param_1->Array).DataPtr;
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
LAB_1425685b0:
        bVar8 = true;
      }
      else {
        uStack_50 = (undefined4)uVar7;
        uStack_4c = (undefined4)((ulonglong)uVar7 >> 0x20);
        local_18 = uVar5;
        uStack_14 = uVar6;
        uStack_10 = uStack_50;
        uStack_c = uStack_4c;
        local_28 = piVar3;
        uStack_20 = uVar4;
        cVar10 = (**(code **)(*plVar1 + 0x68))();
        if (cVar10 == '\0') goto LAB_1425685b0;
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

// Broadcast @ 1425ce500

void __thiscall
TMulticastDelegate<void___cdecl(SWidget_const_*),FDefaultDelegateUserPolicy>::Broadcast
          (TMulticastDelegate<void___cdecl(SWidget_const_*),FDefaultDelegateUserPolicy> *this,
          SWidget *param_1)

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

// Broadcast @ 1425ce620

void __thiscall
TMulticastDelegate<void___cdecl(SWidget_const_*,FName_const_&,enum_ETrackedSlateWidgetOperations),FDefaultDelegateUserPolicy>
::Broadcast(void *this,SWidget *param_1,FName *param_2,ETrackedSlateWidgetOperations param_3)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  FDestructionSentinel local_48;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (this,(FWriteAccessScope *)&local_48);
  *(int *)((longlong)this + 0x1c) = *(int *)((longlong)this + 0x1c) + 1;
  bVar3 = false;
  uVar7 = *(int *)((longlong)this + 0x10) - 1;
  if (-1 < (int)uVar7) {
    lVar8 = (longlong)(int)uVar7 << 4;
    bVar3 = false;
    do {
      uVar6 = 0;
      if ((int)uVar7 < *(int *)((longlong)this + 0x10)) {
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
      if (((*(int *)(*(longlong *)((longlong)this + 8) + 8 + lVar8) == 0) ||
          (plVar1 = *(longlong **)(*(longlong *)((longlong)this + 8) + lVar8),
          plVar1 == (longlong *)0x0)) ||
         (cVar5 = (**(code **)(*plVar1 + 0x68))(plVar1,param_1,param_2,param_3), cVar5 == '\0')) {
        bVar3 = true;
      }
      lVar8 = lVar8 + -0x10;
      uVar7 = uVar7 - 1;
    } while (-1 < (int)uVar7);
  }
  *(int *)((longlong)this + 0x1c) = *(int *)((longlong)this + 0x1c) + -1;
  if (bVar3) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList(this,false);
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  return;
}

