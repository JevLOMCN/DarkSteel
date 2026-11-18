// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineServicesCommon
// Functions: 2

// FLobbyEvents @ 14ee0d630

FLobbyEvents * __thiscall UE::Online::FLobbyEvents::FLobbyEvents(FLobbyEvents *this)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  FLobbyEvents *pFVar4;
  
  pTVar3 = ::operator_new(0x30);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    (this->OnLobbyJoined).DelegateRef.Object =
         (TMulticastDelegate<void___cdecl(UE::Online::FLobbyJoined_const_&),FDefaultDelegateUserPolicy>
          *)0x10;
    (this->OnLobbyJoined).DelegateRef.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TMulticastDelegate___A6AXAEBUFLobbyJoined_Online_UE___ZUFDefaultDelegateUserPolicy_____00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ = 0;
    pTVar3[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[2]._padding_ = 0;
    pTVar3[2].SharedReferenceCount = (atomic<int>)0x2;
    pTVar3[2].WeakReferenceCount = (atomic<int>)0x0;
    (this->OnLobbyJoined).DelegateRef.Object =
         (TMulticastDelegate<void___cdecl(UE::Online::FLobbyJoined_const_&),FDefaultDelegateUserPolicy>
          *)(pTVar3 + 1);
    (this->OnLobbyJoined).DelegateRef.SharedReferenceCount.ReferenceController = pTVar3;
    if ((TMulticastDelegate<void___cdecl(UE::Online::FLobbyJoined_const_&),FDefaultDelegateUserPolicy>
         *)(pTVar3 + 1) ==
        (TMulticastDelegate<void___cdecl(UE::Online::FLobbyJoined_const_&),FDefaultDelegateUserPolicy>
         *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FLobbyEvents *)(*pcVar1)();
        return pFVar4;
      }
    }
  }
  pTVar3 = ::operator_new(0x30);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    (this->OnLobbyLeft).DelegateRef.Object =
         (TMulticastDelegate<void___cdecl(UE::Online::FLobbyLeft_const_&),FDefaultDelegateUserPolicy>
          *)0x10;
    (this->OnLobbyLeft).DelegateRef.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TMulticastDelegate___A6AXAEBUFLobbyLeft_Online_UE___ZUFDefaultDelegateUserPolicy_____00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ = 0;
    pTVar3[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[2]._padding_ = 0;
    pTVar3[2].SharedReferenceCount = (atomic<int>)0x2;
    pTVar3[2].WeakReferenceCount = (atomic<int>)0x0;
    (this->OnLobbyLeft).DelegateRef.Object =
         (TMulticastDelegate<void___cdecl(UE::Online::FLobbyLeft_const_&),FDefaultDelegateUserPolicy>
          *)(pTVar3 + 1);
    (this->OnLobbyLeft).DelegateRef.SharedReferenceCount.ReferenceController = pTVar3;
    if ((TMulticastDelegate<void___cdecl(UE::Online::FLobbyLeft_const_&),FDefaultDelegateUserPolicy>
         *)(pTVar3 + 1) ==
        (TMulticastDelegate<void___cdecl(UE::Online::FLobbyLeft_const_&),FDefaultDelegateUserPolicy>
         *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FLobbyEvents *)(*pcVar1)();
        return pFVar4;
      }
    }
  }
  pTVar3 = ::operator_new(0x30);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    (this->OnLobbyMemberJoined).DelegateRef.Object =
         (TMulticastDelegate<void___cdecl(UE::Online::FLobbyMemberJoined_const_&),FDefaultDelegateUserPolicy>
          *)0x10;
    (this->OnLobbyMemberJoined).DelegateRef.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TMulticastDelegate___A6AXAEBUFLobbyMemberJoined_Online_UE___ZUFDefaultDelegateUserPolicy_____00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ = 0;
    pTVar3[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[2]._padding_ = 0;
    pTVar3[2].SharedReferenceCount = (atomic<int>)0x2;
    pTVar3[2].WeakReferenceCount = (atomic<int>)0x0;
    (this->OnLobbyMemberJoined).DelegateRef.Object =
         (TMulticastDelegate<void___cdecl(UE::Online::FLobbyMemberJoined_const_&),FDefaultDelegateUserPolicy>
          *)(pTVar3 + 1);
    (this->OnLobbyMemberJoined).DelegateRef.SharedReferenceCount.ReferenceController = pTVar3;
    if ((TMulticastDelegate<void___cdecl(UE::Online::FLobbyMemberJoined_const_&),FDefaultDelegateUserPolicy>
         *)(pTVar3 + 1) ==
        (TMulticastDelegate<void___cdecl(UE::Online::FLobbyMemberJoined_const_&),FDefaultDelegateUserPolicy>
         *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FLobbyEvents *)(*pcVar1)();
        return pFVar4;
      }
    }
  }
  pTVar3 = ::operator_new(0x30);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    (this->OnLobbyMemberLeft).DelegateRef.Object =
         (TMulticastDelegate<void___cdecl(UE::Online::FLobbyMemberLeft_const_&),FDefaultDelegateUserPolicy>
          *)0x10;
    (this->OnLobbyMemberLeft).DelegateRef.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TMulticastDelegate___A6AXAEBUFLobbyMemberLeft_Online_UE___ZUFDefaultDelegateUserPolicy_____00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ = 0;
    pTVar3[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[2]._padding_ = 0;
    pTVar3[2].SharedReferenceCount = (atomic<int>)0x2;
    pTVar3[2].WeakReferenceCount = (atomic<int>)0x0;
    (this->OnLobbyMemberLeft).DelegateRef.Object =
         (TMulticastDelegate<void___cdecl(UE::Online::FLobbyMemberLeft_const_&),FDefaultDelegateUserPolicy>
          *)(pTVar3 + 1);
    (this->OnLobbyMemberLeft).DelegateRef.SharedReferenceCount.ReferenceController = pTVar3;
    if ((TMulticastDelegate<void___cdecl(UE::Online::FLobbyMemberLeft_const_&),FDefaultDelegateUserPolicy>
         *)(pTVar3 + 1) ==
        (TMulticastDelegate<void___cdecl(UE::Online::FLobbyMemberLeft_const_&),FDefaultDelegateUserPolicy>
         *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FLobbyEvents *)(*pcVar1)();
        return pFVar4;
      }
    }
  }
  pTVar3 = ::operator_new(0x30);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    (this->OnLobbyLeaderChanged).DelegateRef.Object =
         (TMulticastDelegate<void___cdecl(UE::Online::FLobbyLeaderChanged_const_&),FDefaultDelegateUserPolicy>
          *)0x10;
    (this->OnLobbyLeaderChanged).DelegateRef.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TMulticastDelegate___A6AXAEBUFLobbyLeaderChanged_Online_UE___ZUFDefaultDelegateUserPolicy_____00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ = 0;
    pTVar3[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[2]._padding_ = 0;
    pTVar3[2].SharedReferenceCount = (atomic<int>)0x2;
    pTVar3[2].WeakReferenceCount = (atomic<int>)0x0;
    (this->OnLobbyLeaderChanged).DelegateRef.Object =
         (TMulticastDelegate<void___cdecl(UE::Online::FLobbyLeaderChanged_const_&),FDefaultDelegateUserPolicy>
          *)(pTVar3 + 1);
    (this->OnLobbyLeaderChanged).DelegateRef.SharedReferenceCount.ReferenceController = pTVar3;
    if ((TMulticastDelegate<void___cdecl(UE::Online::FLobbyLeaderChanged_const_&),FDefaultDelegateUserPolicy>
         *)(pTVar3 + 1) ==
        (TMulticastDelegate<void___cdecl(UE::Online::FLobbyLeaderChanged_const_&),FDefaultDelegateUserPolicy>
         *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FLobbyEvents *)(*pcVar1)();
        return pFVar4;
      }
    }
  }
  pTVar3 = ::operator_new(0x30);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    (this->OnLobbySchemaChanged).DelegateRef.Object =
         (TMulticastDelegate<void___cdecl(UE::Online::FLobbySchemaChanged_const_&),FDefaultDelegateUserPolicy>
          *)0x10;
    (this->OnLobbySchemaChanged).DelegateRef.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TMulticastDelegate___A6AXAEBUFLobbySchemaChanged_Online_UE___ZUFDefaultDelegateUserPolicy_____00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ = 0;
    pTVar3[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[2]._padding_ = 0;
    pTVar3[2].SharedReferenceCount = (atomic<int>)0x2;
    pTVar3[2].WeakReferenceCount = (atomic<int>)0x0;
    (this->OnLobbySchemaChanged).DelegateRef.Object =
         (TMulticastDelegate<void___cdecl(UE::Online::FLobbySchemaChanged_const_&),FDefaultDelegateUserPolicy>
          *)(pTVar3 + 1);
    (this->OnLobbySchemaChanged).DelegateRef.SharedReferenceCount.ReferenceController = pTVar3;
    if ((TMulticastDelegate<void___cdecl(UE::Online::FLobbySchemaChanged_const_&),FDefaultDelegateUserPolicy>
         *)(pTVar3 + 1) ==
        (TMulticastDelegate<void___cdecl(UE::Online::FLobbySchemaChanged_const_&),FDefaultDelegateUserPolicy>
         *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FLobbyEvents *)(*pcVar1)();
        return pFVar4;
      }
    }
  }
  pTVar3 = ::operator_new(0x30);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    (this->OnLobbyAttributesChanged).DelegateRef.Object =
         (TMulticastDelegate<void___cdecl(UE::Online::FLobbyAttributesChanged_const_&),FDefaultDelegateUserPolicy>
          *)0x10;
    (this->OnLobbyAttributesChanged).DelegateRef.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TMulticastDelegate___A6AXAEBUFLobbyAttributesChanged_Online_UE___ZUFDefaultDelegateUserPolicy_____00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ = 0;
    pTVar3[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[2]._padding_ = 0;
    pTVar3[2].SharedReferenceCount = (atomic<int>)0x2;
    pTVar3[2].WeakReferenceCount = (atomic<int>)0x0;
    (this->OnLobbyAttributesChanged).DelegateRef.Object =
         (TMulticastDelegate<void___cdecl(UE::Online::FLobbyAttributesChanged_const_&),FDefaultDelegateUserPolicy>
          *)(pTVar3 + 1);
    (this->OnLobbyAttributesChanged).DelegateRef.SharedReferenceCount.ReferenceController = pTVar3;
    if ((TMulticastDelegate<void___cdecl(UE::Online::FLobbyAttributesChanged_const_&),FDefaultDelegateUserPolicy>
         *)(pTVar3 + 1) ==
        (TMulticastDelegate<void___cdecl(UE::Online::FLobbyAttributesChanged_const_&),FDefaultDelegateUserPolicy>
         *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FLobbyEvents *)(*pcVar1)();
        return pFVar4;
      }
    }
  }
  pTVar3 = ::operator_new(0x30);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    (this->OnLobbyMemberAttributesChanged).DelegateRef.Object =
         (TMulticastDelegate<void___cdecl(UE::Online::FLobbyMemberAttributesChanged_const_&),FDefaultDelegateUserPolicy>
          *)0x10;
    (this->OnLobbyMemberAttributesChanged).DelegateRef.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TMulticastDelegate___A6AXAEBUFLobbyMemberAttributesChanged_Online_UE___ZUFDefaultDelegateUserPolicy_____00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ = 0;
    pTVar3[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[2]._padding_ = 0;
    pTVar3[2].SharedReferenceCount = (atomic<int>)0x2;
    pTVar3[2].WeakReferenceCount = (atomic<int>)0x0;
    (this->OnLobbyMemberAttributesChanged).DelegateRef.Object =
         (TMulticastDelegate<void___cdecl(UE::Online::FLobbyMemberAttributesChanged_const_&),FDefaultDelegateUserPolicy>
          *)(pTVar3 + 1);
    (this->OnLobbyMemberAttributesChanged).DelegateRef.SharedReferenceCount.ReferenceController =
         pTVar3;
    if ((TMulticastDelegate<void___cdecl(UE::Online::FLobbyMemberAttributesChanged_const_&),FDefaultDelegateUserPolicy>
         *)(pTVar3 + 1) ==
        (TMulticastDelegate<void___cdecl(UE::Online::FLobbyMemberAttributesChanged_const_&),FDefaultDelegateUserPolicy>
         *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FLobbyEvents *)(*pcVar1)();
        return pFVar4;
      }
    }
  }
  pTVar3 = ::operator_new(0x30);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    (this->OnLobbyInvitationAdded).DelegateRef.Object =
         (TMulticastDelegate<void___cdecl(UE::Online::FLobbyInvitationAdded_const_&),FDefaultDelegateUserPolicy>
          *)0x10;
    (this->OnLobbyInvitationAdded).DelegateRef.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TMulticastDelegate___A6AXAEBUFLobbyInvitationAdded_Online_UE___ZUFDefaultDelegateUserPolicy_____00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ = 0;
    pTVar3[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[2]._padding_ = 0;
    pTVar3[2].SharedReferenceCount = (atomic<int>)0x2;
    pTVar3[2].WeakReferenceCount = (atomic<int>)0x0;
    (this->OnLobbyInvitationAdded).DelegateRef.Object =
         (TMulticastDelegate<void___cdecl(UE::Online::FLobbyInvitationAdded_const_&),FDefaultDelegateUserPolicy>
          *)(pTVar3 + 1);
    (this->OnLobbyInvitationAdded).DelegateRef.SharedReferenceCount.ReferenceController = pTVar3;
    if ((TMulticastDelegate<void___cdecl(UE::Online::FLobbyInvitationAdded_const_&),FDefaultDelegateUserPolicy>
         *)(pTVar3 + 1) ==
        (TMulticastDelegate<void___cdecl(UE::Online::FLobbyInvitationAdded_const_&),FDefaultDelegateUserPolicy>
         *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FLobbyEvents *)(*pcVar1)();
        return pFVar4;
      }
    }
  }
  pTVar3 = ::operator_new(0x30);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    (this->OnLobbyInvitationRemoved).DelegateRef.Object =
         (TMulticastDelegate<void___cdecl(UE::Online::FLobbyInvitationRemoved_const_&),FDefaultDelegateUserPolicy>
          *)0x10;
    (this->OnLobbyInvitationRemoved).DelegateRef.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TMulticastDelegate___A6AXAEBUFLobbyInvitationRemoved_Online_UE___ZUFDefaultDelegateUserPolicy_____00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ = 0;
    pTVar3[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[2]._padding_ = 0;
    pTVar3[2].SharedReferenceCount = (atomic<int>)0x2;
    pTVar3[2].WeakReferenceCount = (atomic<int>)0x0;
    (this->OnLobbyInvitationRemoved).DelegateRef.Object =
         (TMulticastDelegate<void___cdecl(UE::Online::FLobbyInvitationRemoved_const_&),FDefaultDelegateUserPolicy>
          *)(pTVar3 + 1);
    (this->OnLobbyInvitationRemoved).DelegateRef.SharedReferenceCount.ReferenceController = pTVar3;
    if ((TMulticastDelegate<void___cdecl(UE::Online::FLobbyInvitationRemoved_const_&),FDefaultDelegateUserPolicy>
         *)(pTVar3 + 1) ==
        (TMulticastDelegate<void___cdecl(UE::Online::FLobbyInvitationRemoved_const_&),FDefaultDelegateUserPolicy>
         *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FLobbyEvents *)(*pcVar1)();
        return pFVar4;
      }
    }
  }
  pTVar3 = ::operator_new(0x30);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    (this->OnUILobbyJoinRequested).DelegateRef.Object =
         (TMulticastDelegate<void___cdecl(UE::Online::FUILobbyJoinRequested_const_&),FDefaultDelegateUserPolicy>
          *)0x10;
    (this->OnUILobbyJoinRequested).DelegateRef.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TMulticastDelegate___A6AXAEBUFUILobbyJoinRequested_Online_UE___ZUFDefaultDelegateUserPolicy_____00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ = 0;
    pTVar3[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[2]._padding_ = 0;
    pTVar3[2].SharedReferenceCount = (atomic<int>)0x2;
    pTVar3[2].WeakReferenceCount = (atomic<int>)0x0;
    (this->OnUILobbyJoinRequested).DelegateRef.Object =
         (TMulticastDelegate<void___cdecl(UE::Online::FUILobbyJoinRequested_const_&),FDefaultDelegateUserPolicy>
          *)(pTVar3 + 1);
    (this->OnUILobbyJoinRequested).DelegateRef.SharedReferenceCount.ReferenceController = pTVar3;
    if ((TMulticastDelegate<void___cdecl(UE::Online::FUILobbyJoinRequested_const_&),FDefaultDelegateUserPolicy>
         *)(pTVar3 + 1) ==
        (TMulticastDelegate<void___cdecl(UE::Online::FUILobbyJoinRequested_const_&),FDefaultDelegateUserPolicy>
         *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FLobbyEvents *)(*pcVar1)();
        return pFVar4;
      }
    }
  }
  return this;
}

// ~FLobbyEvents @ 14ee24960

void __thiscall UE::Online::FLobbyEvents::~FLobbyEvents(FLobbyEvents *this)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->OnUILobbyJoinRequested).DelegateRef.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->OnLobbyInvitationRemoved).DelegateRef.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->OnLobbyInvitationAdded).DelegateRef.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->OnLobbyMemberAttributesChanged).DelegateRef.SharedReferenceCount.
             ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->OnLobbyAttributesChanged).DelegateRef.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->OnLobbySchemaChanged).DelegateRef.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->OnLobbyLeaderChanged).DelegateRef.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->OnLobbyMemberLeft).DelegateRef.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->OnLobbyMemberJoined).DelegateRef.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->OnLobbyLeft).DelegateRef.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->OnLobbyJoined).DelegateRef.SharedReferenceCount.ReferenceController);
  return;
}

