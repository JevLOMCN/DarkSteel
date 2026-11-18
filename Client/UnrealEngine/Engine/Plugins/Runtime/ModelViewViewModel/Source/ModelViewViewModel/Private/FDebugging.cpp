// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelViewViewModel
// Functions: 6

// BroadcastLibraryBindingExecuted @ 14a744180

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __cdecl
UE::MVVM::FDebugging::BroadcastLibraryBindingExecuted
          (UMVVMView *param_1,FLibraryBindingExecutedArgs *param_2)

{
  code *pcVar1;
  bool bVar2;
  FView local_18;
  
  if (param_1 == (UMVVMView *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InView",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ModelViewViewModel\\Source\\ModelViewViewModel\\Private\\Debugging\\MVVMDebugging.cpp"
                       ,0x48,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((param_1->_padding_ & 0x10) == 0) {
    local_18.UserWidget = (UUserWidget *)param_1->_padding_;
  }
  else {
    bVar2 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<1637797074370035733>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Public\\Extensions\\UserWidgetExtension.h"
                       ,0x15,"false || !HasAnyFlags(RF_ClassDefaultObject)");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    local_18.UserWidget = (UUserWidget *)0x0;
  }
  local_18.View = param_1;
  TMulticastDelegate<void___cdecl(UE::MVVM::FDebugging::FView_const_&,UE::MVVM::FDebugging::FLibraryBindingExecutedArgs_const_&),FDefaultDelegateUserPolicy>
  ::Broadcast((TMulticastDelegate<void___cdecl(UE::MVVM::FDebugging::FView_const_&,UE::MVVM::FDebugging::FLibraryBindingExecutedArgs_const_&),FDefaultDelegateUserPolicy>
               *)&OnLibraryBindingExecuted,&local_18,param_2);
  return;
}

// BroadcastLibraryBindingExecuted @ 14a744230

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __cdecl
UE::MVVM::FDebugging::BroadcastLibraryBindingExecuted
          (UMVVMView *param_1,FMVVMViewClass_BindingKey param_2)

{
  code *pcVar1;
  bool bVar2;
  FLibraryBindingExecutedArgs local_28;
  FView local_18;
  
  bVar2 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                    ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&OnLibraryBindingExecuted
                    );
  if (bVar2) {
    if (param_1 == (UMVVMView *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InView",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ModelViewViewModel\\Source\\ModelViewViewModel\\Private\\Debugging\\MVVMDebugging.cpp"
                         ,0x50,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    local_28.FailingReason.bIsSet = false;
    local_28.Binding.Index = param_2.Index;
    if ((param_1->_padding_ & 0x10) == 0) {
      local_18.UserWidget = (UUserWidget *)param_1->_padding_;
    }
    else {
      bVar2 = Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<1637797074370035733>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Public\\Extensions\\UserWidgetExtension.h"
                         ,0x15,"false || !HasAnyFlags(RF_ClassDefaultObject)");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      local_18.UserWidget = (UUserWidget *)0x0;
    }
    local_18.View = param_1;
    TMulticastDelegate<void___cdecl(UE::MVVM::FDebugging::FView_const_&,UE::MVVM::FDebugging::FLibraryBindingExecutedArgs_const_&),FDefaultDelegateUserPolicy>
    ::Broadcast((TMulticastDelegate<void___cdecl(UE::MVVM::FDebugging::FView_const_&,UE::MVVM::FDebugging::FLibraryBindingExecutedArgs_const_&),FDefaultDelegateUserPolicy>
                 *)&OnLibraryBindingExecuted,&local_18,&local_28);
  }
  return;
}

// BroadcastLibraryBindingExecuted @ 14a744300

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __cdecl
UE::MVVM::FDebugging::BroadcastLibraryBindingExecuted
          (UMVVMView *param_1,FMVVMViewClass_BindingKey param_2,EExecutionFailingReason param_3)

{
  code *pcVar1;
  bool bVar2;
  FLibraryBindingExecutedArgs local_28;
  FView local_18;
  
  bVar2 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                    ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&OnLibraryBindingExecuted
                    );
  if (bVar2) {
    if (param_1 == (UMVVMView *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InView",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ModelViewViewModel\\Source\\ModelViewViewModel\\Private\\Debugging\\MVVMDebugging.cpp"
                         ,0x59,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    local_28.FailingReason.bIsSet = true;
    local_28.Binding.Index = param_2.Index;
    local_28.FailingReason.TypedValue = param_3;
    if ((param_1->_padding_ & 0x10) == 0) {
      local_18.UserWidget = (UUserWidget *)param_1->_padding_;
    }
    else {
      bVar2 = Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<1637797074370035733>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Public\\Extensions\\UserWidgetExtension.h"
                         ,0x15,"false || !HasAnyFlags(RF_ClassDefaultObject)");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      local_18.UserWidget = (UUserWidget *)0x0;
    }
    local_18.View = param_1;
    TMulticastDelegate<void___cdecl(UE::MVVM::FDebugging::FView_const_&,UE::MVVM::FDebugging::FLibraryBindingExecutedArgs_const_&),FDefaultDelegateUserPolicy>
    ::Broadcast((TMulticastDelegate<void___cdecl(UE::MVVM::FDebugging::FView_const_&,UE::MVVM::FDebugging::FLibraryBindingExecutedArgs_const_&),FDefaultDelegateUserPolicy>
                 *)&OnLibraryBindingExecuted,&local_18,&local_28);
  }
  return;
}

// BroadcastViewBeginDestruction @ 14a7443e0

void __cdecl UE::MVVM::FDebugging::BroadcastViewBeginDestruction(UMVVMView *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  undefined1 local_res8 [8];
  longlong local_38;
  UMVVMView *local_30;
  FDestructionSentinel local_28;
  
  if ((param_1->_padding_ & 0x10) == 0) {
    local_38 = param_1->_padding_;
  }
  else {
    bVar3 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<1637797074370035733>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Public\\Extensions\\UserWidgetExtension.h"
                       ,0x15,"false || !HasAnyFlags(RF_ClassDefaultObject)");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    local_38 = 0;
  }
  local_30 = param_1;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&OnViewBeginDestruction,
             (FWriteAccessScope *)&local_28);
  bVar3 = false;
  OnViewBeginDestruction._28_4_ = OnViewBeginDestruction._28_4_ + 1;
  uVar7 = OnViewBeginDestruction._16_4_ - 1;
  if (-1 < (int)uVar7) {
    lVar8 = (longlong)(int)uVar7 << 4;
    bVar3 = false;
    do {
      uVar6 = 0;
      if ((int)uVar7 < (int)OnViewBeginDestruction._16_4_) {
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
      if (((*(int *)(lVar8 + 8 + OnViewBeginDestruction._8_8_) == 0) ||
          (plVar1 = *(longlong **)(lVar8 + OnViewBeginDestruction._8_8_), plVar1 == (longlong *)0x0)
          ) || (cVar5 = (**(code **)(*plVar1 + 0x68))(plVar1,&local_38,local_res8), cVar5 == '\0'))
      {
        bVar3 = true;
      }
      lVar8 = lVar8 + -0x10;
      uVar7 = uVar7 - 1;
    } while (-1 < (int)uVar7);
  }
  OnViewBeginDestruction._28_4_ = OnViewBeginDestruction._28_4_ + -1;
  if (bVar3) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&OnViewBeginDestruction,false);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// BroadcastViewConstructed @ 14a744580

void __cdecl UE::MVVM::FDebugging::BroadcastViewConstructed(UMVVMView *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  undefined1 local_res8 [8];
  longlong local_38;
  UMVVMView *local_30;
  FDestructionSentinel local_28;
  
  if ((param_1->_padding_ & 0x10) == 0) {
    local_38 = param_1->_padding_;
  }
  else {
    bVar3 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<1637797074370035733>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Public\\Extensions\\UserWidgetExtension.h"
                       ,0x15,"false || !HasAnyFlags(RF_ClassDefaultObject)");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    local_38 = 0;
  }
  local_30 = param_1;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&OnViewConstructed,
             (FWriteAccessScope *)&local_28);
  bVar3 = false;
  OnViewConstructed._28_4_ = OnViewConstructed._28_4_ + 1;
  uVar7 = OnViewConstructed._16_4_ - 1;
  if (-1 < (int)uVar7) {
    lVar8 = (longlong)(int)uVar7 << 4;
    bVar3 = false;
    do {
      uVar6 = 0;
      if ((int)uVar7 < (int)OnViewConstructed._16_4_) {
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
      if (((*(int *)(lVar8 + 8 + OnViewConstructed._8_8_) == 0) ||
          (plVar1 = *(longlong **)(lVar8 + OnViewConstructed._8_8_), plVar1 == (longlong *)0x0)) ||
         (cVar5 = (**(code **)(*plVar1 + 0x68))(plVar1,&local_38,local_res8), cVar5 == '\0')) {
        bVar3 = true;
      }
      lVar8 = lVar8 + -0x10;
      uVar7 = uVar7 - 1;
    } while (-1 < (int)uVar7);
  }
  OnViewConstructed._28_4_ = OnViewConstructed._28_4_ + -1;
  if (bVar3) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&OnViewConstructed,false);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// BroadcastViewSourceValueChanged @ 14a744720

void __cdecl
UE::MVVM::FDebugging::BroadcastViewSourceValueChanged
          (UMVVMView *param_1,FMVVMViewClass_SourceKey param_2,FMVVMView_SourceKey param_3)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  int local_res8;
  int local_resc;
  longlong local_38;
  UMVVMView *local_30;
  FDestructionSentinel local_28;
  
  local_res8 = param_2.Index;
  local_resc = param_3.Index;
  if ((param_1->_padding_ & 0x10) == 0) {
    local_38 = param_1->_padding_;
  }
  else {
    bVar3 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<1637797074370035733>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Public\\Extensions\\UserWidgetExtension.h"
                       ,0x15,"false || !HasAnyFlags(RF_ClassDefaultObject)");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    local_38 = 0;
  }
  local_30 = param_1;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&OnViewSourceValueChanged,
             (FWriteAccessScope *)&local_28);
  bVar3 = false;
  OnViewSourceValueChanged._28_4_ = OnViewSourceValueChanged._28_4_ + 1;
  uVar7 = OnViewSourceValueChanged._16_4_ - 1;
  if (-1 < (int)uVar7) {
    lVar8 = (longlong)(int)uVar7 << 4;
    bVar3 = false;
    do {
      uVar6 = 0;
      if ((int)uVar7 < (int)OnViewSourceValueChanged._16_4_) {
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
      if (((*(int *)(lVar8 + 8 + OnViewSourceValueChanged._8_8_) == 0) ||
          (plVar1 = *(longlong **)(lVar8 + OnViewSourceValueChanged._8_8_),
          plVar1 == (longlong *)0x0)) ||
         (cVar5 = (**(code **)(*plVar1 + 0x68))(plVar1,&local_38,&local_res8), cVar5 == '\0')) {
        bVar3 = true;
      }
      lVar8 = lVar8 + -0x10;
      uVar7 = uVar7 - 1;
    } while (-1 < (int)uVar7);
  }
  OnViewSourceValueChanged._28_4_ = OnViewSourceValueChanged._28_4_ + -1;
  if (bVar3) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&OnViewSourceValueChanged,false
              );
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

