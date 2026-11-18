// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineServicesCommon
// Functions: 1

// FSessionEvents @ 14ee0e760

FSessionEvents * __thiscall
UE::Online::FSessionsCommon::FSessionEvents::FSessionEvents(FSessionEvents *this)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  FSessionEvents *pFVar4;
  
  pTVar3 = ::operator_new(0x30);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    (this->OnSessionCreated).DelegateRef.Object =
         (TMulticastDelegate<void___cdecl(UE::Online::FSessionCreated_const_&),FDefaultDelegateUserPolicy>
          *)0x10;
    (this->OnSessionCreated).DelegateRef.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TMulticastDelegate___A6AXAEBUFSessionCreated_Online_UE___ZUFDefaultDelegateUserPolicy_____00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ = 0;
    pTVar3[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[2]._padding_ = 0;
    pTVar3[2].SharedReferenceCount = (atomic<int>)0x2;
    pTVar3[2].WeakReferenceCount = (atomic<int>)0x0;
    (this->OnSessionCreated).DelegateRef.Object =
         (TMulticastDelegate<void___cdecl(UE::Online::FSessionCreated_const_&),FDefaultDelegateUserPolicy>
          *)(pTVar3 + 1);
    (this->OnSessionCreated).DelegateRef.SharedReferenceCount.ReferenceController = pTVar3;
    if ((TMulticastDelegate<void___cdecl(UE::Online::FSessionCreated_const_&),FDefaultDelegateUserPolicy>
         *)(pTVar3 + 1) ==
        (TMulticastDelegate<void___cdecl(UE::Online::FSessionCreated_const_&),FDefaultDelegateUserPolicy>
         *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FSessionEvents *)(*pcVar1)();
        return pFVar4;
      }
    }
  }
  pTVar3 = ::operator_new(0x30);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    (this->OnSessionJoined).DelegateRef.Object =
         (TMulticastDelegate<void___cdecl(UE::Online::FSessionJoined_const_&),FDefaultDelegateUserPolicy>
          *)0x10;
    (this->OnSessionJoined).DelegateRef.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TMulticastDelegate___A6AXAEBUFSessionJoined_Online_UE___ZUFDefaultDelegateUserPolicy_____00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ = 0;
    pTVar3[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[2]._padding_ = 0;
    pTVar3[2].SharedReferenceCount = (atomic<int>)0x2;
    pTVar3[2].WeakReferenceCount = (atomic<int>)0x0;
    (this->OnSessionJoined).DelegateRef.Object =
         (TMulticastDelegate<void___cdecl(UE::Online::FSessionJoined_const_&),FDefaultDelegateUserPolicy>
          *)(pTVar3 + 1);
    (this->OnSessionJoined).DelegateRef.SharedReferenceCount.ReferenceController = pTVar3;
    if ((TMulticastDelegate<void___cdecl(UE::Online::FSessionJoined_const_&),FDefaultDelegateUserPolicy>
         *)(pTVar3 + 1) ==
        (TMulticastDelegate<void___cdecl(UE::Online::FSessionJoined_const_&),FDefaultDelegateUserPolicy>
         *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FSessionEvents *)(*pcVar1)();
        return pFVar4;
      }
    }
  }
  pTVar3 = ::operator_new(0x30);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    (this->OnSessionLeft).DelegateRef.Object =
         (TMulticastDelegate<void___cdecl(UE::Online::FSessionLeft_const_&),FDefaultDelegateUserPolicy>
          *)0x10;
    (this->OnSessionLeft).DelegateRef.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TMulticastDelegate___A6AXAEBUFSessionLeft_Online_UE___ZUFDefaultDelegateUserPolicy_____00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ = 0;
    pTVar3[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[2]._padding_ = 0;
    pTVar3[2].SharedReferenceCount = (atomic<int>)0x2;
    pTVar3[2].WeakReferenceCount = (atomic<int>)0x0;
    (this->OnSessionLeft).DelegateRef.Object =
         (TMulticastDelegate<void___cdecl(UE::Online::FSessionLeft_const_&),FDefaultDelegateUserPolicy>
          *)(pTVar3 + 1);
    (this->OnSessionLeft).DelegateRef.SharedReferenceCount.ReferenceController = pTVar3;
    if ((TMulticastDelegate<void___cdecl(UE::Online::FSessionLeft_const_&),FDefaultDelegateUserPolicy>
         *)(pTVar3 + 1) ==
        (TMulticastDelegate<void___cdecl(UE::Online::FSessionLeft_const_&),FDefaultDelegateUserPolicy>
         *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FSessionEvents *)(*pcVar1)();
        return pFVar4;
      }
    }
  }
  pTVar3 = ::operator_new(0x30);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    (this->OnSessionUpdated).DelegateRef.Object =
         (TMulticastDelegate<void___cdecl(UE::Online::FSessionUpdated_const_&),FDefaultDelegateUserPolicy>
          *)0x10;
    (this->OnSessionUpdated).DelegateRef.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TMulticastDelegate___A6AXAEBUFSessionUpdated_Online_UE___ZUFDefaultDelegateUserPolicy_____00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ = 0;
    pTVar3[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[2]._padding_ = 0;
    pTVar3[2].SharedReferenceCount = (atomic<int>)0x2;
    pTVar3[2].WeakReferenceCount = (atomic<int>)0x0;
    (this->OnSessionUpdated).DelegateRef.Object =
         (TMulticastDelegate<void___cdecl(UE::Online::FSessionUpdated_const_&),FDefaultDelegateUserPolicy>
          *)(pTVar3 + 1);
    (this->OnSessionUpdated).DelegateRef.SharedReferenceCount.ReferenceController = pTVar3;
    if ((TMulticastDelegate<void___cdecl(UE::Online::FSessionUpdated_const_&),FDefaultDelegateUserPolicy>
         *)(pTVar3 + 1) ==
        (TMulticastDelegate<void___cdecl(UE::Online::FSessionUpdated_const_&),FDefaultDelegateUserPolicy>
         *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FSessionEvents *)(*pcVar1)();
        return pFVar4;
      }
    }
  }
  pTVar3 = ::operator_new(0x30);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    (this->OnSessionInviteReceived).DelegateRef.Object =
         (TMulticastDelegate<void___cdecl(UE::Online::FSessionInviteReceived_const_&),FDefaultDelegateUserPolicy>
          *)0x10;
    (this->OnSessionInviteReceived).DelegateRef.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TMulticastDelegate___A6AXAEBUFSessionInviteReceived_Online_UE___ZUFDefaultDelegateUserPolicy_____00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ = 0;
    pTVar3[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[2]._padding_ = 0;
    pTVar3[2].SharedReferenceCount = (atomic<int>)0x2;
    pTVar3[2].WeakReferenceCount = (atomic<int>)0x0;
    (this->OnSessionInviteReceived).DelegateRef.Object =
         (TMulticastDelegate<void___cdecl(UE::Online::FSessionInviteReceived_const_&),FDefaultDelegateUserPolicy>
          *)(pTVar3 + 1);
    (this->OnSessionInviteReceived).DelegateRef.SharedReferenceCount.ReferenceController = pTVar3;
    if ((TMulticastDelegate<void___cdecl(UE::Online::FSessionInviteReceived_const_&),FDefaultDelegateUserPolicy>
         *)(pTVar3 + 1) ==
        (TMulticastDelegate<void___cdecl(UE::Online::FSessionInviteReceived_const_&),FDefaultDelegateUserPolicy>
         *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FSessionEvents *)(*pcVar1)();
        return pFVar4;
      }
    }
  }
  pTVar3 = ::operator_new(0x30);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    (this->OnUISessionJoinRequested).DelegateRef.Object =
         (TMulticastDelegate<void___cdecl(UE::Online::FUISessionJoinRequested_const_&),FDefaultDelegateUserPolicy>
          *)0x10;
    (this->OnUISessionJoinRequested).DelegateRef.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TMulticastDelegate___A6AXAEBUFUISessionJoinRequested_Online_UE___ZUFDefaultDelegateUserPolicy_____00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ = 0;
    pTVar3[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[2]._padding_ = 0;
    pTVar3[2].SharedReferenceCount = (atomic<int>)0x2;
    pTVar3[2].WeakReferenceCount = (atomic<int>)0x0;
    (this->OnUISessionJoinRequested).DelegateRef.Object =
         (TMulticastDelegate<void___cdecl(UE::Online::FUISessionJoinRequested_const_&),FDefaultDelegateUserPolicy>
          *)(pTVar3 + 1);
    (this->OnUISessionJoinRequested).DelegateRef.SharedReferenceCount.ReferenceController = pTVar3;
    if ((TMulticastDelegate<void___cdecl(UE::Online::FUISessionJoinRequested_const_&),FDefaultDelegateUserPolicy>
         *)(pTVar3 + 1) ==
        (TMulticastDelegate<void___cdecl(UE::Online::FUISessionJoinRequested_const_&),FDefaultDelegateUserPolicy>
         *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FSessionEvents *)(*pcVar1)();
        return pFVar4;
      }
    }
  }
  return this;
}

