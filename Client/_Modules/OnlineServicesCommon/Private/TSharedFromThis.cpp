// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineServicesCommon
// Functions: 80

// AsShared @ 14ee574d0

TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FAddSessionMember>,1> * __thiscall
TSharedFromThis<UE::Online::TOnlineAsyncOp<UE::Online::FAddSessionMember>,1>::AsShared
          (TSharedFromThis<UE::Online::TOnlineAsyncOp<UE::Online::FAddSessionMember>,1> *this,
          TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FAddSessionMember>,1>
          *__return_storage_ptr__)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  TOnlineAsyncOp<UE::Online::FAddSessionMember> *pTVar4;
  TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FAddSessionMember>,1> *pTVar5;
  TOnlineAsyncOp<UE::Online::FAddSessionMember> *pTVar6;
  TOnlineAsyncOp<UE::Online::FAddSessionMember> *pTVar7;
  TOnlineAsyncOp<UE::Online::FAddSessionMember> *pTVar8;
  bool bVar9;
  
  pTVar4 = (TOnlineAsyncOp<UE::Online::FAddSessionMember> *)
           (this->WeakThis).WeakReferenceCount.ReferenceController;
  pTVar8 = (TOnlineAsyncOp<UE::Online::FAddSessionMember> *)0x0;
  pTVar6 = pTVar4;
  pTVar7 = pTVar8;
  if (pTVar4 != (TOnlineAsyncOp<UE::Online::FAddSessionMember> *)0x0) {
    iVar2 = *(int *)&((FWeakReferencer<1> *)&pTVar4->_padding_)->ReferenceController;
    do {
      pTVar6 = pTVar8;
      pTVar7 = (TOnlineAsyncOp<UE::Online::FAddSessionMember> *)0x0;
      if (iVar2 == 0) goto LAB_14ee57511;
      LOCK();
      iVar3 = *(int *)&((FWeakReferencer<1> *)&pTVar4->_padding_)->ReferenceController;
      bVar9 = iVar2 == iVar3;
      if (bVar9) {
        *(int *)&((FWeakReferencer<1> *)&pTVar4->_padding_)->ReferenceController = iVar2 + 1;
        iVar3 = iVar2;
      }
      UNLOCK();
      iVar2 = iVar3;
    } while (!bVar9);
    pTVar6 = pTVar4;
    pTVar7 = (this->WeakThis).Object;
  }
LAB_14ee57511:
  pTVar4 = (TOnlineAsyncOp<UE::Online::FAddSessionMember> *)&pTVar7->_padding_;
  if (pTVar7 == (TOnlineAsyncOp<UE::Online::FAddSessionMember> *)0x0) {
    pTVar4 = pTVar8;
  }
  if ((pTVar4 != (TOnlineAsyncOp<UE::Online::FAddSessionMember> *)this) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("SharedThis.Get() == this",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x67f,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FAddSessionMember>,1> *)(*pcVar1)();
    return pTVar5;
  }
  if ((pTVar7 == (TOnlineAsyncOp<UE::Online::FAddSessionMember> *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x416,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FAddSessionMember>,1> *)(*pcVar1)();
    return pTVar5;
  }
  __return_storage_ptr__->Object = pTVar7;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)pTVar6;
  if ((pTVar7 == (TOnlineAsyncOp<UE::Online::FAddSessionMember> *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x26c,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FAddSessionMember>,1> *)(*pcVar1)();
    return pTVar5;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return __return_storage_ptr__;
}

// AsShared @ 14ee575e0

TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FAuthBeginVerifiedAuthSession>,1> * __thiscall
TSharedFromThis<UE::Online::TOnlineAsyncOp<UE::Online::FAuthBeginVerifiedAuthSession>,1>::AsShared
          (TSharedFromThis<UE::Online::TOnlineAsyncOp<UE::Online::FAuthBeginVerifiedAuthSession>,1>
           *this,TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FAuthBeginVerifiedAuthSession>,1>
                 *__return_storage_ptr__)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  TOnlineAsyncOp<UE::Online::FAuthBeginVerifiedAuthSession> *pTVar4;
  TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FAuthBeginVerifiedAuthSession>,1> *pTVar5;
  TOnlineAsyncOp<UE::Online::FAuthBeginVerifiedAuthSession> *pTVar6;
  TOnlineAsyncOp<UE::Online::FAuthBeginVerifiedAuthSession> *pTVar7;
  TOnlineAsyncOp<UE::Online::FAuthBeginVerifiedAuthSession> *pTVar8;
  bool bVar9;
  
  pTVar4 = (TOnlineAsyncOp<UE::Online::FAuthBeginVerifiedAuthSession> *)
           (this->WeakThis).WeakReferenceCount.ReferenceController;
  pTVar8 = (TOnlineAsyncOp<UE::Online::FAuthBeginVerifiedAuthSession> *)0x0;
  pTVar6 = pTVar4;
  pTVar7 = pTVar8;
  if (pTVar4 != (TOnlineAsyncOp<UE::Online::FAuthBeginVerifiedAuthSession> *)0x0) {
    iVar2 = *(int *)&((FWeakReferencer<1> *)&pTVar4->_padding_)->ReferenceController;
    do {
      pTVar6 = pTVar8;
      pTVar7 = (TOnlineAsyncOp<UE::Online::FAuthBeginVerifiedAuthSession> *)0x0;
      if (iVar2 == 0) goto LAB_14ee57621;
      LOCK();
      iVar3 = *(int *)&((FWeakReferencer<1> *)&pTVar4->_padding_)->ReferenceController;
      bVar9 = iVar2 == iVar3;
      if (bVar9) {
        *(int *)&((FWeakReferencer<1> *)&pTVar4->_padding_)->ReferenceController = iVar2 + 1;
        iVar3 = iVar2;
      }
      UNLOCK();
      iVar2 = iVar3;
    } while (!bVar9);
    pTVar6 = pTVar4;
    pTVar7 = (this->WeakThis).Object;
  }
LAB_14ee57621:
  pTVar4 = (TOnlineAsyncOp<UE::Online::FAuthBeginVerifiedAuthSession> *)&pTVar7->_padding_;
  if (pTVar7 == (TOnlineAsyncOp<UE::Online::FAuthBeginVerifiedAuthSession> *)0x0) {
    pTVar4 = pTVar8;
  }
  if ((pTVar4 != (TOnlineAsyncOp<UE::Online::FAuthBeginVerifiedAuthSession> *)this) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("SharedThis.Get() == this",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x67f,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FAuthBeginVerifiedAuthSession>,1> *)
             (*pcVar1)();
    return pTVar5;
  }
  if ((pTVar7 == (TOnlineAsyncOp<UE::Online::FAuthBeginVerifiedAuthSession> *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x416,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FAuthBeginVerifiedAuthSession>,1> *)
             (*pcVar1)();
    return pTVar5;
  }
  __return_storage_ptr__->Object = pTVar7;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)pTVar6;
  if ((pTVar7 == (TOnlineAsyncOp<UE::Online::FAuthBeginVerifiedAuthSession> *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x26c,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FAuthBeginVerifiedAuthSession>,1> *)
             (*pcVar1)();
    return pTVar5;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return __return_storage_ptr__;
}

// AsShared @ 14ee576f0

TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FAuthCancelVerifiedAuthTicket>,1> * __thiscall
TSharedFromThis<UE::Online::TOnlineAsyncOp<UE::Online::FAuthCancelVerifiedAuthTicket>,1>::AsShared
          (TSharedFromThis<UE::Online::TOnlineAsyncOp<UE::Online::FAuthCancelVerifiedAuthTicket>,1>
           *this,TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FAuthCancelVerifiedAuthTicket>,1>
                 *__return_storage_ptr__)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  TOnlineAsyncOp<UE::Online::FAuthCancelVerifiedAuthTicket> *pTVar4;
  TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FAuthCancelVerifiedAuthTicket>,1> *pTVar5;
  TOnlineAsyncOp<UE::Online::FAuthCancelVerifiedAuthTicket> *pTVar6;
  TOnlineAsyncOp<UE::Online::FAuthCancelVerifiedAuthTicket> *pTVar7;
  TOnlineAsyncOp<UE::Online::FAuthCancelVerifiedAuthTicket> *pTVar8;
  bool bVar9;
  
  pTVar4 = (TOnlineAsyncOp<UE::Online::FAuthCancelVerifiedAuthTicket> *)
           (this->WeakThis).WeakReferenceCount.ReferenceController;
  pTVar8 = (TOnlineAsyncOp<UE::Online::FAuthCancelVerifiedAuthTicket> *)0x0;
  pTVar6 = pTVar4;
  pTVar7 = pTVar8;
  if (pTVar4 != (TOnlineAsyncOp<UE::Online::FAuthCancelVerifiedAuthTicket> *)0x0) {
    iVar2 = *(int *)&((FWeakReferencer<1> *)&pTVar4->_padding_)->ReferenceController;
    do {
      pTVar6 = pTVar8;
      pTVar7 = (TOnlineAsyncOp<UE::Online::FAuthCancelVerifiedAuthTicket> *)0x0;
      if (iVar2 == 0) goto LAB_14ee57731;
      LOCK();
      iVar3 = *(int *)&((FWeakReferencer<1> *)&pTVar4->_padding_)->ReferenceController;
      bVar9 = iVar2 == iVar3;
      if (bVar9) {
        *(int *)&((FWeakReferencer<1> *)&pTVar4->_padding_)->ReferenceController = iVar2 + 1;
        iVar3 = iVar2;
      }
      UNLOCK();
      iVar2 = iVar3;
    } while (!bVar9);
    pTVar6 = pTVar4;
    pTVar7 = (this->WeakThis).Object;
  }
LAB_14ee57731:
  pTVar4 = (TOnlineAsyncOp<UE::Online::FAuthCancelVerifiedAuthTicket> *)&pTVar7->_padding_;
  if (pTVar7 == (TOnlineAsyncOp<UE::Online::FAuthCancelVerifiedAuthTicket> *)0x0) {
    pTVar4 = pTVar8;
  }
  if ((pTVar4 != (TOnlineAsyncOp<UE::Online::FAuthCancelVerifiedAuthTicket> *)this) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("SharedThis.Get() == this",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x67f,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FAuthCancelVerifiedAuthTicket>,1> *)
             (*pcVar1)();
    return pTVar5;
  }
  if ((pTVar7 == (TOnlineAsyncOp<UE::Online::FAuthCancelVerifiedAuthTicket> *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x416,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FAuthCancelVerifiedAuthTicket>,1> *)
             (*pcVar1)();
    return pTVar5;
  }
  __return_storage_ptr__->Object = pTVar7;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)pTVar6;
  if ((pTVar7 == (TOnlineAsyncOp<UE::Online::FAuthCancelVerifiedAuthTicket> *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x26c,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FAuthCancelVerifiedAuthTicket>,1> *)
             (*pcVar1)();
    return pTVar5;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return __return_storage_ptr__;
}

// AsShared @ 14ee57800

TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FAuthCreateAccount>,1> * __thiscall
TSharedFromThis<UE::Online::TOnlineAsyncOp<UE::Online::FAuthCreateAccount>,1>::AsShared
          (TSharedFromThis<UE::Online::TOnlineAsyncOp<UE::Online::FAuthCreateAccount>,1> *this,
          TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FAuthCreateAccount>,1>
          *__return_storage_ptr__)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  TOnlineAsyncOp<UE::Online::FAuthCreateAccount> *pTVar4;
  TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FAuthCreateAccount>,1> *pTVar5;
  TOnlineAsyncOp<UE::Online::FAuthCreateAccount> *pTVar6;
  TOnlineAsyncOp<UE::Online::FAuthCreateAccount> *pTVar7;
  TOnlineAsyncOp<UE::Online::FAuthCreateAccount> *pTVar8;
  bool bVar9;
  
  pTVar4 = (TOnlineAsyncOp<UE::Online::FAuthCreateAccount> *)
           (this->WeakThis).WeakReferenceCount.ReferenceController;
  pTVar8 = (TOnlineAsyncOp<UE::Online::FAuthCreateAccount> *)0x0;
  pTVar6 = pTVar4;
  pTVar7 = pTVar8;
  if (pTVar4 != (TOnlineAsyncOp<UE::Online::FAuthCreateAccount> *)0x0) {
    iVar2 = *(int *)&((FWeakReferencer<1> *)&pTVar4->_padding_)->ReferenceController;
    do {
      pTVar6 = pTVar8;
      pTVar7 = (TOnlineAsyncOp<UE::Online::FAuthCreateAccount> *)0x0;
      if (iVar2 == 0) goto LAB_14ee57841;
      LOCK();
      iVar3 = *(int *)&((FWeakReferencer<1> *)&pTVar4->_padding_)->ReferenceController;
      bVar9 = iVar2 == iVar3;
      if (bVar9) {
        *(int *)&((FWeakReferencer<1> *)&pTVar4->_padding_)->ReferenceController = iVar2 + 1;
        iVar3 = iVar2;
      }
      UNLOCK();
      iVar2 = iVar3;
    } while (!bVar9);
    pTVar6 = pTVar4;
    pTVar7 = (this->WeakThis).Object;
  }
LAB_14ee57841:
  pTVar4 = (TOnlineAsyncOp<UE::Online::FAuthCreateAccount> *)&pTVar7->_padding_;
  if (pTVar7 == (TOnlineAsyncOp<UE::Online::FAuthCreateAccount> *)0x0) {
    pTVar4 = pTVar8;
  }
  if ((pTVar4 != (TOnlineAsyncOp<UE::Online::FAuthCreateAccount> *)this) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("SharedThis.Get() == this",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x67f,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FAuthCreateAccount>,1> *)(*pcVar1)()
    ;
    return pTVar5;
  }
  if ((pTVar7 == (TOnlineAsyncOp<UE::Online::FAuthCreateAccount> *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x416,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FAuthCreateAccount>,1> *)(*pcVar1)()
    ;
    return pTVar5;
  }
  __return_storage_ptr__->Object = pTVar7;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)pTVar6;
  if ((pTVar7 == (TOnlineAsyncOp<UE::Online::FAuthCreateAccount> *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x26c,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FAuthCreateAccount>,1> *)(*pcVar1)()
    ;
    return pTVar5;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return __return_storage_ptr__;
}

// AsShared @ 14ee57910

TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FAuthEndVerifiedAuthSession>,1> * __thiscall
TSharedFromThis<UE::Online::TOnlineAsyncOp<UE::Online::FAuthEndVerifiedAuthSession>,1>::AsShared
          (TSharedFromThis<UE::Online::TOnlineAsyncOp<UE::Online::FAuthEndVerifiedAuthSession>,1>
           *this,TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FAuthEndVerifiedAuthSession>,1>
                 *__return_storage_ptr__)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  TOnlineAsyncOp<UE::Online::FAuthEndVerifiedAuthSession> *pTVar4;
  TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FAuthEndVerifiedAuthSession>,1> *pTVar5;
  TOnlineAsyncOp<UE::Online::FAuthEndVerifiedAuthSession> *pTVar6;
  TOnlineAsyncOp<UE::Online::FAuthEndVerifiedAuthSession> *pTVar7;
  TOnlineAsyncOp<UE::Online::FAuthEndVerifiedAuthSession> *pTVar8;
  bool bVar9;
  
  pTVar4 = (TOnlineAsyncOp<UE::Online::FAuthEndVerifiedAuthSession> *)
           (this->WeakThis).WeakReferenceCount.ReferenceController;
  pTVar8 = (TOnlineAsyncOp<UE::Online::FAuthEndVerifiedAuthSession> *)0x0;
  pTVar6 = pTVar4;
  pTVar7 = pTVar8;
  if (pTVar4 != (TOnlineAsyncOp<UE::Online::FAuthEndVerifiedAuthSession> *)0x0) {
    iVar2 = *(int *)&((FWeakReferencer<1> *)&pTVar4->_padding_)->ReferenceController;
    do {
      pTVar6 = pTVar8;
      pTVar7 = (TOnlineAsyncOp<UE::Online::FAuthEndVerifiedAuthSession> *)0x0;
      if (iVar2 == 0) goto LAB_14ee57951;
      LOCK();
      iVar3 = *(int *)&((FWeakReferencer<1> *)&pTVar4->_padding_)->ReferenceController;
      bVar9 = iVar2 == iVar3;
      if (bVar9) {
        *(int *)&((FWeakReferencer<1> *)&pTVar4->_padding_)->ReferenceController = iVar2 + 1;
        iVar3 = iVar2;
      }
      UNLOCK();
      iVar2 = iVar3;
    } while (!bVar9);
    pTVar6 = pTVar4;
    pTVar7 = (this->WeakThis).Object;
  }
LAB_14ee57951:
  pTVar4 = (TOnlineAsyncOp<UE::Online::FAuthEndVerifiedAuthSession> *)&pTVar7->_padding_;
  if (pTVar7 == (TOnlineAsyncOp<UE::Online::FAuthEndVerifiedAuthSession> *)0x0) {
    pTVar4 = pTVar8;
  }
  if ((pTVar4 != (TOnlineAsyncOp<UE::Online::FAuthEndVerifiedAuthSession> *)this) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("SharedThis.Get() == this",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x67f,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FAuthEndVerifiedAuthSession>,1> *)
             (*pcVar1)();
    return pTVar5;
  }
  if ((pTVar7 == (TOnlineAsyncOp<UE::Online::FAuthEndVerifiedAuthSession> *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x416,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FAuthEndVerifiedAuthSession>,1> *)
             (*pcVar1)();
    return pTVar5;
  }
  __return_storage_ptr__->Object = pTVar7;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)pTVar6;
  if ((pTVar7 == (TOnlineAsyncOp<UE::Online::FAuthEndVerifiedAuthSession> *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x26c,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FAuthEndVerifiedAuthSession>,1> *)
             (*pcVar1)();
    return pTVar5;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return __return_storage_ptr__;
}

// AsShared @ 14ee57a20

TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FAuthLinkAccount>,1> * __thiscall
TSharedFromThis<UE::Online::TOnlineAsyncOp<UE::Online::FAuthLinkAccount>,1>::AsShared
          (TSharedFromThis<UE::Online::TOnlineAsyncOp<UE::Online::FAuthLinkAccount>,1> *this,
          TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FAuthLinkAccount>,1>
          *__return_storage_ptr__)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  TOnlineAsyncOp<UE::Online::FAuthLinkAccount> *pTVar4;
  TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FAuthLinkAccount>,1> *pTVar5;
  TOnlineAsyncOp<UE::Online::FAuthLinkAccount> *pTVar6;
  TOnlineAsyncOp<UE::Online::FAuthLinkAccount> *pTVar7;
  TOnlineAsyncOp<UE::Online::FAuthLinkAccount> *pTVar8;
  bool bVar9;
  
  pTVar4 = (TOnlineAsyncOp<UE::Online::FAuthLinkAccount> *)
           (this->WeakThis).WeakReferenceCount.ReferenceController;
  pTVar8 = (TOnlineAsyncOp<UE::Online::FAuthLinkAccount> *)0x0;
  pTVar6 = pTVar4;
  pTVar7 = pTVar8;
  if (pTVar4 != (TOnlineAsyncOp<UE::Online::FAuthLinkAccount> *)0x0) {
    iVar2 = *(int *)&((FWeakReferencer<1> *)&pTVar4->_padding_)->ReferenceController;
    do {
      pTVar6 = pTVar8;
      pTVar7 = (TOnlineAsyncOp<UE::Online::FAuthLinkAccount> *)0x0;
      if (iVar2 == 0) goto LAB_14ee57a61;
      LOCK();
      iVar3 = *(int *)&((FWeakReferencer<1> *)&pTVar4->_padding_)->ReferenceController;
      bVar9 = iVar2 == iVar3;
      if (bVar9) {
        *(int *)&((FWeakReferencer<1> *)&pTVar4->_padding_)->ReferenceController = iVar2 + 1;
        iVar3 = iVar2;
      }
      UNLOCK();
      iVar2 = iVar3;
    } while (!bVar9);
    pTVar6 = pTVar4;
    pTVar7 = (this->WeakThis).Object;
  }
LAB_14ee57a61:
  pTVar4 = (TOnlineAsyncOp<UE::Online::FAuthLinkAccount> *)&pTVar7->_padding_;
  if (pTVar7 == (TOnlineAsyncOp<UE::Online::FAuthLinkAccount> *)0x0) {
    pTVar4 = pTVar8;
  }
  if ((pTVar4 != (TOnlineAsyncOp<UE::Online::FAuthLinkAccount> *)this) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("SharedThis.Get() == this",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x67f,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FAuthLinkAccount>,1> *)(*pcVar1)();
    return pTVar5;
  }
  if ((pTVar7 == (TOnlineAsyncOp<UE::Online::FAuthLinkAccount> *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x416,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FAuthLinkAccount>,1> *)(*pcVar1)();
    return pTVar5;
  }
  __return_storage_ptr__->Object = pTVar7;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)pTVar6;
  if ((pTVar7 == (TOnlineAsyncOp<UE::Online::FAuthLinkAccount> *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x26c,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FAuthLinkAccount>,1> *)(*pcVar1)();
    return pTVar5;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return __return_storage_ptr__;
}

// AsShared @ 14ee57b30

TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FAuthLogin>,1> * __thiscall
TSharedFromThis<UE::Online::TOnlineAsyncOp<UE::Online::FAuthLogin>,1>::AsShared
          (TSharedFromThis<UE::Online::TOnlineAsyncOp<UE::Online::FAuthLogin>,1> *this,
          TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FAuthLogin>,1> *__return_storage_ptr__)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  TOnlineAsyncOp<UE::Online::FAuthLogin> *pTVar4;
  TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FAuthLogin>,1> *pTVar5;
  TOnlineAsyncOp<UE::Online::FAuthLogin> *pTVar6;
  TOnlineAsyncOp<UE::Online::FAuthLogin> *pTVar7;
  TOnlineAsyncOp<UE::Online::FAuthLogin> *pTVar8;
  bool bVar9;
  
  pTVar4 = (TOnlineAsyncOp<UE::Online::FAuthLogin> *)
           (this->WeakThis).WeakReferenceCount.ReferenceController;
  pTVar8 = (TOnlineAsyncOp<UE::Online::FAuthLogin> *)0x0;
  pTVar6 = pTVar4;
  pTVar7 = pTVar8;
  if (pTVar4 != (TOnlineAsyncOp<UE::Online::FAuthLogin> *)0x0) {
    iVar2 = *(int *)&((FWeakReferencer<1> *)&pTVar4->_padding_)->ReferenceController;
    do {
      pTVar6 = pTVar8;
      pTVar7 = (TOnlineAsyncOp<UE::Online::FAuthLogin> *)0x0;
      if (iVar2 == 0) goto LAB_14ee57b71;
      LOCK();
      iVar3 = *(int *)&((FWeakReferencer<1> *)&pTVar4->_padding_)->ReferenceController;
      bVar9 = iVar2 == iVar3;
      if (bVar9) {
        *(int *)&((FWeakReferencer<1> *)&pTVar4->_padding_)->ReferenceController = iVar2 + 1;
        iVar3 = iVar2;
      }
      UNLOCK();
      iVar2 = iVar3;
    } while (!bVar9);
    pTVar6 = pTVar4;
    pTVar7 = (this->WeakThis).Object;
  }
LAB_14ee57b71:
  pTVar4 = (TOnlineAsyncOp<UE::Online::FAuthLogin> *)&pTVar7->_padding_;
  if (pTVar7 == (TOnlineAsyncOp<UE::Online::FAuthLogin> *)0x0) {
    pTVar4 = pTVar8;
  }
  if ((pTVar4 != (TOnlineAsyncOp<UE::Online::FAuthLogin> *)this) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("SharedThis.Get() == this",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x67f,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FAuthLogin>,1> *)(*pcVar1)();
    return pTVar5;
  }
  if ((pTVar7 == (TOnlineAsyncOp<UE::Online::FAuthLogin> *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x416,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FAuthLogin>,1> *)(*pcVar1)();
    return pTVar5;
  }
  __return_storage_ptr__->Object = pTVar7;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)pTVar6;
  if ((pTVar7 == (TOnlineAsyncOp<UE::Online::FAuthLogin> *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x26c,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FAuthLogin>,1> *)(*pcVar1)();
    return pTVar5;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return __return_storage_ptr__;
}

// AsShared @ 14ee57c40

TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FAuthLogout>,1> * __thiscall
TSharedFromThis<UE::Online::TOnlineAsyncOp<UE::Online::FAuthLogout>,1>::AsShared
          (TSharedFromThis<UE::Online::TOnlineAsyncOp<UE::Online::FAuthLogout>,1> *this,
          TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FAuthLogout>,1> *__return_storage_ptr__)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  TOnlineAsyncOp<UE::Online::FAuthLogout> *pTVar4;
  TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FAuthLogout>,1> *pTVar5;
  TOnlineAsyncOp<UE::Online::FAuthLogout> *pTVar6;
  TOnlineAsyncOp<UE::Online::FAuthLogout> *pTVar7;
  TOnlineAsyncOp<UE::Online::FAuthLogout> *pTVar8;
  bool bVar9;
  
  pTVar4 = (TOnlineAsyncOp<UE::Online::FAuthLogout> *)
           (this->WeakThis).WeakReferenceCount.ReferenceController;
  pTVar8 = (TOnlineAsyncOp<UE::Online::FAuthLogout> *)0x0;
  pTVar6 = pTVar4;
  pTVar7 = pTVar8;
  if (pTVar4 != (TOnlineAsyncOp<UE::Online::FAuthLogout> *)0x0) {
    iVar2 = *(int *)&((FWeakReferencer<1> *)&pTVar4->_padding_)->ReferenceController;
    do {
      pTVar6 = pTVar8;
      pTVar7 = (TOnlineAsyncOp<UE::Online::FAuthLogout> *)0x0;
      if (iVar2 == 0) goto LAB_14ee57c81;
      LOCK();
      iVar3 = *(int *)&((FWeakReferencer<1> *)&pTVar4->_padding_)->ReferenceController;
      bVar9 = iVar2 == iVar3;
      if (bVar9) {
        *(int *)&((FWeakReferencer<1> *)&pTVar4->_padding_)->ReferenceController = iVar2 + 1;
        iVar3 = iVar2;
      }
      UNLOCK();
      iVar2 = iVar3;
    } while (!bVar9);
    pTVar6 = pTVar4;
    pTVar7 = (this->WeakThis).Object;
  }
LAB_14ee57c81:
  pTVar4 = (TOnlineAsyncOp<UE::Online::FAuthLogout> *)&pTVar7->_padding_;
  if (pTVar7 == (TOnlineAsyncOp<UE::Online::FAuthLogout> *)0x0) {
    pTVar4 = pTVar8;
  }
  if ((pTVar4 != (TOnlineAsyncOp<UE::Online::FAuthLogout> *)this) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("SharedThis.Get() == this",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x67f,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FAuthLogout>,1> *)(*pcVar1)();
    return pTVar5;
  }
  if ((pTVar7 == (TOnlineAsyncOp<UE::Online::FAuthLogout> *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x416,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FAuthLogout>,1> *)(*pcVar1)();
    return pTVar5;
  }
  __return_storage_ptr__->Object = pTVar7;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)pTVar6;
  if ((pTVar7 == (TOnlineAsyncOp<UE::Online::FAuthLogout> *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x26c,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FAuthLogout>,1> *)(*pcVar1)();
    return pTVar5;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return __return_storage_ptr__;
}

// AsShared @ 14ee57d50

TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FAuthModifyAccountAttributes>,1> * __thiscall
TSharedFromThis<UE::Online::TOnlineAsyncOp<UE::Online::FAuthModifyAccountAttributes>,1>::AsShared
          (TSharedFromThis<UE::Online::TOnlineAsyncOp<UE::Online::FAuthModifyAccountAttributes>,1>
           *this,TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FAuthModifyAccountAttributes>,1>
                 *__return_storage_ptr__)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  TOnlineAsyncOp<UE::Online::FAuthModifyAccountAttributes> *pTVar4;
  TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FAuthModifyAccountAttributes>,1> *pTVar5;
  TOnlineAsyncOp<UE::Online::FAuthModifyAccountAttributes> *pTVar6;
  TOnlineAsyncOp<UE::Online::FAuthModifyAccountAttributes> *pTVar7;
  TOnlineAsyncOp<UE::Online::FAuthModifyAccountAttributes> *pTVar8;
  bool bVar9;
  
  pTVar4 = (TOnlineAsyncOp<UE::Online::FAuthModifyAccountAttributes> *)
           (this->WeakThis).WeakReferenceCount.ReferenceController;
  pTVar8 = (TOnlineAsyncOp<UE::Online::FAuthModifyAccountAttributes> *)0x0;
  pTVar6 = pTVar4;
  pTVar7 = pTVar8;
  if (pTVar4 != (TOnlineAsyncOp<UE::Online::FAuthModifyAccountAttributes> *)0x0) {
    iVar2 = *(int *)&((FWeakReferencer<1> *)&pTVar4->_padding_)->ReferenceController;
    do {
      pTVar6 = pTVar8;
      pTVar7 = (TOnlineAsyncOp<UE::Online::FAuthModifyAccountAttributes> *)0x0;
      if (iVar2 == 0) goto LAB_14ee57d91;
      LOCK();
      iVar3 = *(int *)&((FWeakReferencer<1> *)&pTVar4->_padding_)->ReferenceController;
      bVar9 = iVar2 == iVar3;
      if (bVar9) {
        *(int *)&((FWeakReferencer<1> *)&pTVar4->_padding_)->ReferenceController = iVar2 + 1;
        iVar3 = iVar2;
      }
      UNLOCK();
      iVar2 = iVar3;
    } while (!bVar9);
    pTVar6 = pTVar4;
    pTVar7 = (this->WeakThis).Object;
  }
LAB_14ee57d91:
  pTVar4 = (TOnlineAsyncOp<UE::Online::FAuthModifyAccountAttributes> *)&pTVar7->_padding_;
  if (pTVar7 == (TOnlineAsyncOp<UE::Online::FAuthModifyAccountAttributes> *)0x0) {
    pTVar4 = pTVar8;
  }
  if ((pTVar4 != (TOnlineAsyncOp<UE::Online::FAuthModifyAccountAttributes> *)this) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("SharedThis.Get() == this",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x67f,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FAuthModifyAccountAttributes>,1> *)
             (*pcVar1)();
    return pTVar5;
  }
  if ((pTVar7 == (TOnlineAsyncOp<UE::Online::FAuthModifyAccountAttributes> *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x416,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FAuthModifyAccountAttributes>,1> *)
             (*pcVar1)();
    return pTVar5;
  }
  __return_storage_ptr__->Object = pTVar7;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)pTVar6;
  if ((pTVar7 == (TOnlineAsyncOp<UE::Online::FAuthModifyAccountAttributes> *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x26c,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FAuthModifyAccountAttributes>,1> *)
             (*pcVar1)();
    return pTVar5;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return __return_storage_ptr__;
}

// AsShared @ 14ee57e60

TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FAuthQueryExternalAuthToken>,1> * __thiscall
TSharedFromThis<UE::Online::TOnlineAsyncOp<UE::Online::FAuthQueryExternalAuthToken>,1>::AsShared
          (TSharedFromThis<UE::Online::TOnlineAsyncOp<UE::Online::FAuthQueryExternalAuthToken>,1>
           *this,TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FAuthQueryExternalAuthToken>,1>
                 *__return_storage_ptr__)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  TOnlineAsyncOp<UE::Online::FAuthQueryExternalAuthToken> *pTVar4;
  TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FAuthQueryExternalAuthToken>,1> *pTVar5;
  TOnlineAsyncOp<UE::Online::FAuthQueryExternalAuthToken> *pTVar6;
  TOnlineAsyncOp<UE::Online::FAuthQueryExternalAuthToken> *pTVar7;
  TOnlineAsyncOp<UE::Online::FAuthQueryExternalAuthToken> *pTVar8;
  bool bVar9;
  
  pTVar4 = (TOnlineAsyncOp<UE::Online::FAuthQueryExternalAuthToken> *)
           (this->WeakThis).WeakReferenceCount.ReferenceController;
  pTVar8 = (TOnlineAsyncOp<UE::Online::FAuthQueryExternalAuthToken> *)0x0;
  pTVar6 = pTVar4;
  pTVar7 = pTVar8;
  if (pTVar4 != (TOnlineAsyncOp<UE::Online::FAuthQueryExternalAuthToken> *)0x0) {
    iVar2 = *(int *)&((FWeakReferencer<1> *)&pTVar4->_padding_)->ReferenceController;
    do {
      pTVar6 = pTVar8;
      pTVar7 = (TOnlineAsyncOp<UE::Online::FAuthQueryExternalAuthToken> *)0x0;
      if (iVar2 == 0) goto LAB_14ee57ea1;
      LOCK();
      iVar3 = *(int *)&((FWeakReferencer<1> *)&pTVar4->_padding_)->ReferenceController;
      bVar9 = iVar2 == iVar3;
      if (bVar9) {
        *(int *)&((FWeakReferencer<1> *)&pTVar4->_padding_)->ReferenceController = iVar2 + 1;
        iVar3 = iVar2;
      }
      UNLOCK();
      iVar2 = iVar3;
    } while (!bVar9);
    pTVar6 = pTVar4;
    pTVar7 = (this->WeakThis).Object;
  }
LAB_14ee57ea1:
  pTVar4 = (TOnlineAsyncOp<UE::Online::FAuthQueryExternalAuthToken> *)&pTVar7->_padding_;
  if (pTVar7 == (TOnlineAsyncOp<UE::Online::FAuthQueryExternalAuthToken> *)0x0) {
    pTVar4 = pTVar8;
  }
  if ((pTVar4 != (TOnlineAsyncOp<UE::Online::FAuthQueryExternalAuthToken> *)this) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("SharedThis.Get() == this",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x67f,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FAuthQueryExternalAuthToken>,1> *)
             (*pcVar1)();
    return pTVar5;
  }
  if ((pTVar7 == (TOnlineAsyncOp<UE::Online::FAuthQueryExternalAuthToken> *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x416,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FAuthQueryExternalAuthToken>,1> *)
             (*pcVar1)();
    return pTVar5;
  }
  __return_storage_ptr__->Object = pTVar7;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)pTVar6;
  if ((pTVar7 == (TOnlineAsyncOp<UE::Online::FAuthQueryExternalAuthToken> *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x26c,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FAuthQueryExternalAuthToken>,1> *)
             (*pcVar1)();
    return pTVar5;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return __return_storage_ptr__;
}

// AsShared @ 14ee57f70

TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FAuthQueryExternalServerAuthTicket>,1> *
__thiscall
TSharedFromThis<UE::Online::TOnlineAsyncOp<UE::Online::FAuthQueryExternalServerAuthTicket>,1>::
AsShared(TSharedFromThis<UE::Online::TOnlineAsyncOp<UE::Online::FAuthQueryExternalServerAuthTicket>,1>
         *this,TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FAuthQueryExternalServerAuthTicket>,1>
               *__return_storage_ptr__)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  TOnlineAsyncOp<UE::Online::FAuthQueryExternalServerAuthTicket> *pTVar4;
  TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FAuthQueryExternalServerAuthTicket>,1> *pTVar5;
  TOnlineAsyncOp<UE::Online::FAuthQueryExternalServerAuthTicket> *pTVar6;
  TOnlineAsyncOp<UE::Online::FAuthQueryExternalServerAuthTicket> *pTVar7;
  TOnlineAsyncOp<UE::Online::FAuthQueryExternalServerAuthTicket> *pTVar8;
  bool bVar9;
  
  pTVar4 = (TOnlineAsyncOp<UE::Online::FAuthQueryExternalServerAuthTicket> *)
           (this->WeakThis).WeakReferenceCount.ReferenceController;
  pTVar8 = (TOnlineAsyncOp<UE::Online::FAuthQueryExternalServerAuthTicket> *)0x0;
  pTVar6 = pTVar4;
  pTVar7 = pTVar8;
  if (pTVar4 != (TOnlineAsyncOp<UE::Online::FAuthQueryExternalServerAuthTicket> *)0x0) {
    iVar2 = *(int *)&((FWeakReferencer<1> *)&pTVar4->_padding_)->ReferenceController;
    do {
      pTVar6 = pTVar8;
      pTVar7 = (TOnlineAsyncOp<UE::Online::FAuthQueryExternalServerAuthTicket> *)0x0;
      if (iVar2 == 0) goto LAB_14ee57fb1;
      LOCK();
      iVar3 = *(int *)&((FWeakReferencer<1> *)&pTVar4->_padding_)->ReferenceController;
      bVar9 = iVar2 == iVar3;
      if (bVar9) {
        *(int *)&((FWeakReferencer<1> *)&pTVar4->_padding_)->ReferenceController = iVar2 + 1;
        iVar3 = iVar2;
      }
      UNLOCK();
      iVar2 = iVar3;
    } while (!bVar9);
    pTVar6 = pTVar4;
    pTVar7 = (this->WeakThis).Object;
  }
LAB_14ee57fb1:
  pTVar4 = (TOnlineAsyncOp<UE::Online::FAuthQueryExternalServerAuthTicket> *)&pTVar7->_padding_;
  if (pTVar7 == (TOnlineAsyncOp<UE::Online::FAuthQueryExternalServerAuthTicket> *)0x0) {
    pTVar4 = pTVar8;
  }
  if ((pTVar4 != (TOnlineAsyncOp<UE::Online::FAuthQueryExternalServerAuthTicket> *)this) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("SharedThis.Get() == this",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x67f,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FAuthQueryExternalServerAuthTicket>,1>
              *)(*pcVar1)();
    return pTVar5;
  }
  if ((pTVar7 == (TOnlineAsyncOp<UE::Online::FAuthQueryExternalServerAuthTicket> *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x416,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FAuthQueryExternalServerAuthTicket>,1>
              *)(*pcVar1)();
    return pTVar5;
  }
  __return_storage_ptr__->Object = pTVar7;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)pTVar6;
  if ((pTVar7 == (TOnlineAsyncOp<UE::Online::FAuthQueryExternalServerAuthTicket> *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x26c,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FAuthQueryExternalServerAuthTicket>,1>
              *)(*pcVar1)();
    return pTVar5;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return __return_storage_ptr__;
}

// AsShared @ 14ee58080

TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FAuthQueryVerifiedAuthTicket>,1> * __thiscall
TSharedFromThis<UE::Online::TOnlineAsyncOp<UE::Online::FAuthQueryVerifiedAuthTicket>,1>::AsShared
          (TSharedFromThis<UE::Online::TOnlineAsyncOp<UE::Online::FAuthQueryVerifiedAuthTicket>,1>
           *this,TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FAuthQueryVerifiedAuthTicket>,1>
                 *__return_storage_ptr__)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  TOnlineAsyncOp<UE::Online::FAuthQueryVerifiedAuthTicket> *pTVar4;
  TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FAuthQueryVerifiedAuthTicket>,1> *pTVar5;
  TOnlineAsyncOp<UE::Online::FAuthQueryVerifiedAuthTicket> *pTVar6;
  TOnlineAsyncOp<UE::Online::FAuthQueryVerifiedAuthTicket> *pTVar7;
  TOnlineAsyncOp<UE::Online::FAuthQueryVerifiedAuthTicket> *pTVar8;
  bool bVar9;
  
  pTVar4 = (TOnlineAsyncOp<UE::Online::FAuthQueryVerifiedAuthTicket> *)
           (this->WeakThis).WeakReferenceCount.ReferenceController;
  pTVar8 = (TOnlineAsyncOp<UE::Online::FAuthQueryVerifiedAuthTicket> *)0x0;
  pTVar6 = pTVar4;
  pTVar7 = pTVar8;
  if (pTVar4 != (TOnlineAsyncOp<UE::Online::FAuthQueryVerifiedAuthTicket> *)0x0) {
    iVar2 = *(int *)&((FWeakReferencer<1> *)&pTVar4->_padding_)->ReferenceController;
    do {
      pTVar6 = pTVar8;
      pTVar7 = (TOnlineAsyncOp<UE::Online::FAuthQueryVerifiedAuthTicket> *)0x0;
      if (iVar2 == 0) goto LAB_14ee580c1;
      LOCK();
      iVar3 = *(int *)&((FWeakReferencer<1> *)&pTVar4->_padding_)->ReferenceController;
      bVar9 = iVar2 == iVar3;
      if (bVar9) {
        *(int *)&((FWeakReferencer<1> *)&pTVar4->_padding_)->ReferenceController = iVar2 + 1;
        iVar3 = iVar2;
      }
      UNLOCK();
      iVar2 = iVar3;
    } while (!bVar9);
    pTVar6 = pTVar4;
    pTVar7 = (this->WeakThis).Object;
  }
LAB_14ee580c1:
  pTVar4 = (TOnlineAsyncOp<UE::Online::FAuthQueryVerifiedAuthTicket> *)&pTVar7->_padding_;
  if (pTVar7 == (TOnlineAsyncOp<UE::Online::FAuthQueryVerifiedAuthTicket> *)0x0) {
    pTVar4 = pTVar8;
  }
  if ((pTVar4 != (TOnlineAsyncOp<UE::Online::FAuthQueryVerifiedAuthTicket> *)this) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("SharedThis.Get() == this",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x67f,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FAuthQueryVerifiedAuthTicket>,1> *)
             (*pcVar1)();
    return pTVar5;
  }
  if ((pTVar7 == (TOnlineAsyncOp<UE::Online::FAuthQueryVerifiedAuthTicket> *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x416,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FAuthQueryVerifiedAuthTicket>,1> *)
             (*pcVar1)();
    return pTVar5;
  }
  __return_storage_ptr__->Object = pTVar7;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)pTVar6;
  if ((pTVar7 == (TOnlineAsyncOp<UE::Online::FAuthQueryVerifiedAuthTicket> *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x26c,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FAuthQueryVerifiedAuthTicket>,1> *)
             (*pcVar1)();
    return pTVar5;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return __return_storage_ptr__;
}

// AsShared @ 14ee58190

TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FBatchQueryPresence>,1> * __thiscall
TSharedFromThis<UE::Online::TOnlineAsyncOp<UE::Online::FBatchQueryPresence>,1>::AsShared
          (TSharedFromThis<UE::Online::TOnlineAsyncOp<UE::Online::FBatchQueryPresence>,1> *this,
          TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FBatchQueryPresence>,1>
          *__return_storage_ptr__)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  TOnlineAsyncOp<UE::Online::FBatchQueryPresence> *pTVar4;
  TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FBatchQueryPresence>,1> *pTVar5;
  TOnlineAsyncOp<UE::Online::FBatchQueryPresence> *pTVar6;
  TOnlineAsyncOp<UE::Online::FBatchQueryPresence> *pTVar7;
  TOnlineAsyncOp<UE::Online::FBatchQueryPresence> *pTVar8;
  bool bVar9;
  
  pTVar4 = (TOnlineAsyncOp<UE::Online::FBatchQueryPresence> *)
           (this->WeakThis).WeakReferenceCount.ReferenceController;
  pTVar8 = (TOnlineAsyncOp<UE::Online::FBatchQueryPresence> *)0x0;
  pTVar6 = pTVar4;
  pTVar7 = pTVar8;
  if (pTVar4 != (TOnlineAsyncOp<UE::Online::FBatchQueryPresence> *)0x0) {
    iVar2 = *(int *)&((FWeakReferencer<1> *)&pTVar4->_padding_)->ReferenceController;
    do {
      pTVar6 = pTVar8;
      pTVar7 = (TOnlineAsyncOp<UE::Online::FBatchQueryPresence> *)0x0;
      if (iVar2 == 0) goto LAB_14ee581d1;
      LOCK();
      iVar3 = *(int *)&((FWeakReferencer<1> *)&pTVar4->_padding_)->ReferenceController;
      bVar9 = iVar2 == iVar3;
      if (bVar9) {
        *(int *)&((FWeakReferencer<1> *)&pTVar4->_padding_)->ReferenceController = iVar2 + 1;
        iVar3 = iVar2;
      }
      UNLOCK();
      iVar2 = iVar3;
    } while (!bVar9);
    pTVar6 = pTVar4;
    pTVar7 = (this->WeakThis).Object;
  }
LAB_14ee581d1:
  pTVar4 = (TOnlineAsyncOp<UE::Online::FBatchQueryPresence> *)&pTVar7->_padding_;
  if (pTVar7 == (TOnlineAsyncOp<UE::Online::FBatchQueryPresence> *)0x0) {
    pTVar4 = pTVar8;
  }
  if ((pTVar4 != (TOnlineAsyncOp<UE::Online::FBatchQueryPresence> *)this) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("SharedThis.Get() == this",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x67f,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FBatchQueryPresence>,1> *)
             (*pcVar1)();
    return pTVar5;
  }
  if ((pTVar7 == (TOnlineAsyncOp<UE::Online::FBatchQueryPresence> *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x416,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FBatchQueryPresence>,1> *)
             (*pcVar1)();
    return pTVar5;
  }
  __return_storage_ptr__->Object = pTVar7;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)pTVar6;
  if ((pTVar7 == (TOnlineAsyncOp<UE::Online::FBatchQueryPresence> *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x26c,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FBatchQueryPresence>,1> *)
             (*pcVar1)();
    return pTVar5;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return __return_storage_ptr__;
}

// AsShared @ 14ee582a0

TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FCommerceCheckout>,1> * __thiscall
TSharedFromThis<UE::Online::TOnlineAsyncOp<UE::Online::FCommerceCheckout>,1>::AsShared
          (TSharedFromThis<UE::Online::TOnlineAsyncOp<UE::Online::FCommerceCheckout>,1> *this,
          TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FCommerceCheckout>,1>
          *__return_storage_ptr__)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  TOnlineAsyncOp<UE::Online::FCommerceCheckout> *pTVar4;
  TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FCommerceCheckout>,1> *pTVar5;
  TOnlineAsyncOp<UE::Online::FCommerceCheckout> *pTVar6;
  TOnlineAsyncOp<UE::Online::FCommerceCheckout> *pTVar7;
  TOnlineAsyncOp<UE::Online::FCommerceCheckout> *pTVar8;
  bool bVar9;
  
  pTVar4 = (TOnlineAsyncOp<UE::Online::FCommerceCheckout> *)
           (this->WeakThis).WeakReferenceCount.ReferenceController;
  pTVar8 = (TOnlineAsyncOp<UE::Online::FCommerceCheckout> *)0x0;
  pTVar6 = pTVar4;
  pTVar7 = pTVar8;
  if (pTVar4 != (TOnlineAsyncOp<UE::Online::FCommerceCheckout> *)0x0) {
    iVar2 = *(int *)&((FWeakReferencer<1> *)&pTVar4->_padding_)->ReferenceController;
    do {
      pTVar6 = pTVar8;
      pTVar7 = (TOnlineAsyncOp<UE::Online::FCommerceCheckout> *)0x0;
      if (iVar2 == 0) goto LAB_14ee582e1;
      LOCK();
      iVar3 = *(int *)&((FWeakReferencer<1> *)&pTVar4->_padding_)->ReferenceController;
      bVar9 = iVar2 == iVar3;
      if (bVar9) {
        *(int *)&((FWeakReferencer<1> *)&pTVar4->_padding_)->ReferenceController = iVar2 + 1;
        iVar3 = iVar2;
      }
      UNLOCK();
      iVar2 = iVar3;
    } while (!bVar9);
    pTVar6 = pTVar4;
    pTVar7 = (this->WeakThis).Object;
  }
LAB_14ee582e1:
  pTVar4 = (TOnlineAsyncOp<UE::Online::FCommerceCheckout> *)&pTVar7->_padding_;
  if (pTVar7 == (TOnlineAsyncOp<UE::Online::FCommerceCheckout> *)0x0) {
    pTVar4 = pTVar8;
  }
  if ((pTVar4 != (TOnlineAsyncOp<UE::Online::FCommerceCheckout> *)this) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("SharedThis.Get() == this",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x67f,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FCommerceCheckout>,1> *)(*pcVar1)();
    return pTVar5;
  }
  if ((pTVar7 == (TOnlineAsyncOp<UE::Online::FCommerceCheckout> *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x416,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FCommerceCheckout>,1> *)(*pcVar1)();
    return pTVar5;
  }
  __return_storage_ptr__->Object = pTVar7;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)pTVar6;
  if ((pTVar7 == (TOnlineAsyncOp<UE::Online::FCommerceCheckout> *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x26c,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FCommerceCheckout>,1> *)(*pcVar1)();
    return pTVar5;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return __return_storage_ptr__;
}

// AsShared @ 14ee583b0

TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FCommerceQueryEntitlements>,1> * __thiscall
TSharedFromThis<UE::Online::TOnlineAsyncOp<UE::Online::FCommerceQueryEntitlements>,1>::AsShared
          (TSharedFromThis<UE::Online::TOnlineAsyncOp<UE::Online::FCommerceQueryEntitlements>,1>
           *this,TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FCommerceQueryEntitlements>,1>
                 *__return_storage_ptr__)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  TOnlineAsyncOp<UE::Online::FCommerceQueryEntitlements> *pTVar4;
  TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FCommerceQueryEntitlements>,1> *pTVar5;
  TOnlineAsyncOp<UE::Online::FCommerceQueryEntitlements> *pTVar6;
  TOnlineAsyncOp<UE::Online::FCommerceQueryEntitlements> *pTVar7;
  TOnlineAsyncOp<UE::Online::FCommerceQueryEntitlements> *pTVar8;
  bool bVar9;
  
  pTVar4 = (TOnlineAsyncOp<UE::Online::FCommerceQueryEntitlements> *)
           (this->WeakThis).WeakReferenceCount.ReferenceController;
  pTVar8 = (TOnlineAsyncOp<UE::Online::FCommerceQueryEntitlements> *)0x0;
  pTVar6 = pTVar4;
  pTVar7 = pTVar8;
  if (pTVar4 != (TOnlineAsyncOp<UE::Online::FCommerceQueryEntitlements> *)0x0) {
    iVar2 = *(int *)&((FWeakReferencer<1> *)&pTVar4->_padding_)->ReferenceController;
    do {
      pTVar6 = pTVar8;
      pTVar7 = (TOnlineAsyncOp<UE::Online::FCommerceQueryEntitlements> *)0x0;
      if (iVar2 == 0) goto LAB_14ee583f1;
      LOCK();
      iVar3 = *(int *)&((FWeakReferencer<1> *)&pTVar4->_padding_)->ReferenceController;
      bVar9 = iVar2 == iVar3;
      if (bVar9) {
        *(int *)&((FWeakReferencer<1> *)&pTVar4->_padding_)->ReferenceController = iVar2 + 1;
        iVar3 = iVar2;
      }
      UNLOCK();
      iVar2 = iVar3;
    } while (!bVar9);
    pTVar6 = pTVar4;
    pTVar7 = (this->WeakThis).Object;
  }
LAB_14ee583f1:
  pTVar4 = (TOnlineAsyncOp<UE::Online::FCommerceQueryEntitlements> *)&pTVar7->_padding_;
  if (pTVar7 == (TOnlineAsyncOp<UE::Online::FCommerceQueryEntitlements> *)0x0) {
    pTVar4 = pTVar8;
  }
  if ((pTVar4 != (TOnlineAsyncOp<UE::Online::FCommerceQueryEntitlements> *)this) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("SharedThis.Get() == this",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x67f,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FCommerceQueryEntitlements>,1> *)
             (*pcVar1)();
    return pTVar5;
  }
  if ((pTVar7 == (TOnlineAsyncOp<UE::Online::FCommerceQueryEntitlements> *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x416,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FCommerceQueryEntitlements>,1> *)
             (*pcVar1)();
    return pTVar5;
  }
  __return_storage_ptr__->Object = pTVar7;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)pTVar6;
  if ((pTVar7 == (TOnlineAsyncOp<UE::Online::FCommerceQueryEntitlements> *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x26c,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FCommerceQueryEntitlements>,1> *)
             (*pcVar1)();
    return pTVar5;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return __return_storage_ptr__;
}

// AsShared @ 14ee584c0

TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FCommerceQueryOffers>,1> * __thiscall
TSharedFromThis<UE::Online::TOnlineAsyncOp<UE::Online::FCommerceQueryOffers>,1>::AsShared
          (TSharedFromThis<UE::Online::TOnlineAsyncOp<UE::Online::FCommerceQueryOffers>,1> *this,
          TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FCommerceQueryOffers>,1>
          *__return_storage_ptr__)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  TOnlineAsyncOp<UE::Online::FCommerceQueryOffers> *pTVar4;
  TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FCommerceQueryOffers>,1> *pTVar5;
  TOnlineAsyncOp<UE::Online::FCommerceQueryOffers> *pTVar6;
  TOnlineAsyncOp<UE::Online::FCommerceQueryOffers> *pTVar7;
  TOnlineAsyncOp<UE::Online::FCommerceQueryOffers> *pTVar8;
  bool bVar9;
  
  pTVar4 = (TOnlineAsyncOp<UE::Online::FCommerceQueryOffers> *)
           (this->WeakThis).WeakReferenceCount.ReferenceController;
  pTVar8 = (TOnlineAsyncOp<UE::Online::FCommerceQueryOffers> *)0x0;
  pTVar6 = pTVar4;
  pTVar7 = pTVar8;
  if (pTVar4 != (TOnlineAsyncOp<UE::Online::FCommerceQueryOffers> *)0x0) {
    iVar2 = *(int *)&((FWeakReferencer<1> *)&pTVar4->_padding_)->ReferenceController;
    do {
      pTVar6 = pTVar8;
      pTVar7 = (TOnlineAsyncOp<UE::Online::FCommerceQueryOffers> *)0x0;
      if (iVar2 == 0) goto LAB_14ee58501;
      LOCK();
      iVar3 = *(int *)&((FWeakReferencer<1> *)&pTVar4->_padding_)->ReferenceController;
      bVar9 = iVar2 == iVar3;
      if (bVar9) {
        *(int *)&((FWeakReferencer<1> *)&pTVar4->_padding_)->ReferenceController = iVar2 + 1;
        iVar3 = iVar2;
      }
      UNLOCK();
      iVar2 = iVar3;
    } while (!bVar9);
    pTVar6 = pTVar4;
    pTVar7 = (this->WeakThis).Object;
  }
LAB_14ee58501:
  pTVar4 = (TOnlineAsyncOp<UE::Online::FCommerceQueryOffers> *)&pTVar7->_padding_;
  if (pTVar7 == (TOnlineAsyncOp<UE::Online::FCommerceQueryOffers> *)0x0) {
    pTVar4 = pTVar8;
  }
  if ((pTVar4 != (TOnlineAsyncOp<UE::Online::FCommerceQueryOffers> *)this) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("SharedThis.Get() == this",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x67f,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FCommerceQueryOffers>,1> *)
             (*pcVar1)();
    return pTVar5;
  }
  if ((pTVar7 == (TOnlineAsyncOp<UE::Online::FCommerceQueryOffers> *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x416,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FCommerceQueryOffers>,1> *)
             (*pcVar1)();
    return pTVar5;
  }
  __return_storage_ptr__->Object = pTVar7;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)pTVar6;
  if ((pTVar7 == (TOnlineAsyncOp<UE::Online::FCommerceQueryOffers> *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x26c,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FCommerceQueryOffers>,1> *)
             (*pcVar1)();
    return pTVar5;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return __return_storage_ptr__;
}

// AsShared @ 14ee585d0

TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FCommerceQueryOffersById>,1> * __thiscall
TSharedFromThis<UE::Online::TOnlineAsyncOp<UE::Online::FCommerceQueryOffersById>,1>::AsShared
          (TSharedFromThis<UE::Online::TOnlineAsyncOp<UE::Online::FCommerceQueryOffersById>,1> *this
          ,TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FCommerceQueryOffersById>,1>
           *__return_storage_ptr__)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  TOnlineAsyncOp<UE::Online::FCommerceQueryOffersById> *pTVar4;
  TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FCommerceQueryOffersById>,1> *pTVar5;
  TOnlineAsyncOp<UE::Online::FCommerceQueryOffersById> *pTVar6;
  TOnlineAsyncOp<UE::Online::FCommerceQueryOffersById> *pTVar7;
  TOnlineAsyncOp<UE::Online::FCommerceQueryOffersById> *pTVar8;
  bool bVar9;
  
  pTVar4 = (TOnlineAsyncOp<UE::Online::FCommerceQueryOffersById> *)
           (this->WeakThis).WeakReferenceCount.ReferenceController;
  pTVar8 = (TOnlineAsyncOp<UE::Online::FCommerceQueryOffersById> *)0x0;
  pTVar6 = pTVar4;
  pTVar7 = pTVar8;
  if (pTVar4 != (TOnlineAsyncOp<UE::Online::FCommerceQueryOffersById> *)0x0) {
    iVar2 = *(int *)&((FWeakReferencer<1> *)&pTVar4->_padding_)->ReferenceController;
    do {
      pTVar6 = pTVar8;
      pTVar7 = (TOnlineAsyncOp<UE::Online::FCommerceQueryOffersById> *)0x0;
      if (iVar2 == 0) goto LAB_14ee58611;
      LOCK();
      iVar3 = *(int *)&((FWeakReferencer<1> *)&pTVar4->_padding_)->ReferenceController;
      bVar9 = iVar2 == iVar3;
      if (bVar9) {
        *(int *)&((FWeakReferencer<1> *)&pTVar4->_padding_)->ReferenceController = iVar2 + 1;
        iVar3 = iVar2;
      }
      UNLOCK();
      iVar2 = iVar3;
    } while (!bVar9);
    pTVar6 = pTVar4;
    pTVar7 = (this->WeakThis).Object;
  }
LAB_14ee58611:
  pTVar4 = (TOnlineAsyncOp<UE::Online::FCommerceQueryOffersById> *)&pTVar7->_padding_;
  if (pTVar7 == (TOnlineAsyncOp<UE::Online::FCommerceQueryOffersById> *)0x0) {
    pTVar4 = pTVar8;
  }
  if ((pTVar4 != (TOnlineAsyncOp<UE::Online::FCommerceQueryOffersById> *)this) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("SharedThis.Get() == this",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x67f,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FCommerceQueryOffersById>,1> *)
             (*pcVar1)();
    return pTVar5;
  }
  if ((pTVar7 == (TOnlineAsyncOp<UE::Online::FCommerceQueryOffersById> *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x416,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FCommerceQueryOffersById>,1> *)
             (*pcVar1)();
    return pTVar5;
  }
  __return_storage_ptr__->Object = pTVar7;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)pTVar6;
  if ((pTVar7 == (TOnlineAsyncOp<UE::Online::FCommerceQueryOffersById> *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x26c,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FCommerceQueryOffersById>,1> *)
             (*pcVar1)();
    return pTVar5;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return __return_storage_ptr__;
}

// AsShared @ 14ee586e0

TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FCommerceQueryTransactionEntitlements>,1> *
__thiscall
TSharedFromThis<UE::Online::TOnlineAsyncOp<UE::Online::FCommerceQueryTransactionEntitlements>,1>::
AsShared(TSharedFromThis<UE::Online::TOnlineAsyncOp<UE::Online::FCommerceQueryTransactionEntitlements>,1>
         *this,TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FCommerceQueryTransactionEntitlements>,1>
               *__return_storage_ptr__)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  TOnlineAsyncOp<UE::Online::FCommerceQueryTransactionEntitlements> *pTVar4;
  TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FCommerceQueryTransactionEntitlements>,1>
  *pTVar5;
  TOnlineAsyncOp<UE::Online::FCommerceQueryTransactionEntitlements> *pTVar6;
  TOnlineAsyncOp<UE::Online::FCommerceQueryTransactionEntitlements> *pTVar7;
  TOnlineAsyncOp<UE::Online::FCommerceQueryTransactionEntitlements> *pTVar8;
  bool bVar9;
  
  pTVar4 = (TOnlineAsyncOp<UE::Online::FCommerceQueryTransactionEntitlements> *)
           (this->WeakThis).WeakReferenceCount.ReferenceController;
  pTVar8 = (TOnlineAsyncOp<UE::Online::FCommerceQueryTransactionEntitlements> *)0x0;
  pTVar6 = pTVar4;
  pTVar7 = pTVar8;
  if (pTVar4 != (TOnlineAsyncOp<UE::Online::FCommerceQueryTransactionEntitlements> *)0x0) {
    iVar2 = *(int *)&((FWeakReferencer<1> *)&pTVar4->_padding_)->ReferenceController;
    do {
      pTVar6 = pTVar8;
      pTVar7 = (TOnlineAsyncOp<UE::Online::FCommerceQueryTransactionEntitlements> *)0x0;
      if (iVar2 == 0) goto LAB_14ee58721;
      LOCK();
      iVar3 = *(int *)&((FWeakReferencer<1> *)&pTVar4->_padding_)->ReferenceController;
      bVar9 = iVar2 == iVar3;
      if (bVar9) {
        *(int *)&((FWeakReferencer<1> *)&pTVar4->_padding_)->ReferenceController = iVar2 + 1;
        iVar3 = iVar2;
      }
      UNLOCK();
      iVar2 = iVar3;
    } while (!bVar9);
    pTVar6 = pTVar4;
    pTVar7 = (this->WeakThis).Object;
  }
LAB_14ee58721:
  pTVar4 = (TOnlineAsyncOp<UE::Online::FCommerceQueryTransactionEntitlements> *)&pTVar7->_padding_;
  if (pTVar7 == (TOnlineAsyncOp<UE::Online::FCommerceQueryTransactionEntitlements> *)0x0) {
    pTVar4 = pTVar8;
  }
  if ((pTVar4 != (TOnlineAsyncOp<UE::Online::FCommerceQueryTransactionEntitlements> *)this) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("SharedThis.Get() == this",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x67f,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FCommerceQueryTransactionEntitlements>,1>
              *)(*pcVar1)();
    return pTVar5;
  }
  if ((pTVar7 == (TOnlineAsyncOp<UE::Online::FCommerceQueryTransactionEntitlements> *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x416,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FCommerceQueryTransactionEntitlements>,1>
              *)(*pcVar1)();
    return pTVar5;
  }
  __return_storage_ptr__->Object = pTVar7;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)pTVar6;
  if ((pTVar7 == (TOnlineAsyncOp<UE::Online::FCommerceQueryTransactionEntitlements> *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x26c,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FCommerceQueryTransactionEntitlements>,1>
              *)(*pcVar1)();
    return pTVar5;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return __return_storage_ptr__;
}

// AsShared @ 14ee587f0

TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FCommerceRedeemEntitlement>,1> * __thiscall
TSharedFromThis<UE::Online::TOnlineAsyncOp<UE::Online::FCommerceRedeemEntitlement>,1>::AsShared
          (TSharedFromThis<UE::Online::TOnlineAsyncOp<UE::Online::FCommerceRedeemEntitlement>,1>
           *this,TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FCommerceRedeemEntitlement>,1>
                 *__return_storage_ptr__)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  TOnlineAsyncOp<UE::Online::FCommerceRedeemEntitlement> *pTVar4;
  TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FCommerceRedeemEntitlement>,1> *pTVar5;
  TOnlineAsyncOp<UE::Online::FCommerceRedeemEntitlement> *pTVar6;
  TOnlineAsyncOp<UE::Online::FCommerceRedeemEntitlement> *pTVar7;
  TOnlineAsyncOp<UE::Online::FCommerceRedeemEntitlement> *pTVar8;
  bool bVar9;
  
  pTVar4 = (TOnlineAsyncOp<UE::Online::FCommerceRedeemEntitlement> *)
           (this->WeakThis).WeakReferenceCount.ReferenceController;
  pTVar8 = (TOnlineAsyncOp<UE::Online::FCommerceRedeemEntitlement> *)0x0;
  pTVar6 = pTVar4;
  pTVar7 = pTVar8;
  if (pTVar4 != (TOnlineAsyncOp<UE::Online::FCommerceRedeemEntitlement> *)0x0) {
    iVar2 = *(int *)&((FWeakReferencer<1> *)&pTVar4->_padding_)->ReferenceController;
    do {
      pTVar6 = pTVar8;
      pTVar7 = (TOnlineAsyncOp<UE::Online::FCommerceRedeemEntitlement> *)0x0;
      if (iVar2 == 0) goto LAB_14ee58831;
      LOCK();
      iVar3 = *(int *)&((FWeakReferencer<1> *)&pTVar4->_padding_)->ReferenceController;
      bVar9 = iVar2 == iVar3;
      if (bVar9) {
        *(int *)&((FWeakReferencer<1> *)&pTVar4->_padding_)->ReferenceController = iVar2 + 1;
        iVar3 = iVar2;
      }
      UNLOCK();
      iVar2 = iVar3;
    } while (!bVar9);
    pTVar6 = pTVar4;
    pTVar7 = (this->WeakThis).Object;
  }
LAB_14ee58831:
  pTVar4 = (TOnlineAsyncOp<UE::Online::FCommerceRedeemEntitlement> *)&pTVar7->_padding_;
  if (pTVar7 == (TOnlineAsyncOp<UE::Online::FCommerceRedeemEntitlement> *)0x0) {
    pTVar4 = pTVar8;
  }
  if ((pTVar4 != (TOnlineAsyncOp<UE::Online::FCommerceRedeemEntitlement> *)this) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("SharedThis.Get() == this",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x67f,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FCommerceRedeemEntitlement>,1> *)
             (*pcVar1)();
    return pTVar5;
  }
  if ((pTVar7 == (TOnlineAsyncOp<UE::Online::FCommerceRedeemEntitlement> *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x416,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FCommerceRedeemEntitlement>,1> *)
             (*pcVar1)();
    return pTVar5;
  }
  __return_storage_ptr__->Object = pTVar7;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)pTVar6;
  if ((pTVar7 == (TOnlineAsyncOp<UE::Online::FCommerceRedeemEntitlement> *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x26c,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FCommerceRedeemEntitlement>,1> *)
             (*pcVar1)();
    return pTVar5;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return __return_storage_ptr__;
}

// AsShared @ 14ee58900

TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FCommerceRetrieveS2SToken>,1> * __thiscall
TSharedFromThis<UE::Online::TOnlineAsyncOp<UE::Online::FCommerceRetrieveS2SToken>,1>::AsShared
          (TSharedFromThis<UE::Online::TOnlineAsyncOp<UE::Online::FCommerceRetrieveS2SToken>,1>
           *this,TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FCommerceRetrieveS2SToken>,1>
                 *__return_storage_ptr__)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  TOnlineAsyncOp<UE::Online::FCommerceRetrieveS2SToken> *pTVar4;
  TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FCommerceRetrieveS2SToken>,1> *pTVar5;
  TOnlineAsyncOp<UE::Online::FCommerceRetrieveS2SToken> *pTVar6;
  TOnlineAsyncOp<UE::Online::FCommerceRetrieveS2SToken> *pTVar7;
  TOnlineAsyncOp<UE::Online::FCommerceRetrieveS2SToken> *pTVar8;
  bool bVar9;
  
  pTVar4 = (TOnlineAsyncOp<UE::Online::FCommerceRetrieveS2SToken> *)
           (this->WeakThis).WeakReferenceCount.ReferenceController;
  pTVar8 = (TOnlineAsyncOp<UE::Online::FCommerceRetrieveS2SToken> *)0x0;
  pTVar6 = pTVar4;
  pTVar7 = pTVar8;
  if (pTVar4 != (TOnlineAsyncOp<UE::Online::FCommerceRetrieveS2SToken> *)0x0) {
    iVar2 = *(int *)&((FWeakReferencer<1> *)&pTVar4->_padding_)->ReferenceController;
    do {
      pTVar6 = pTVar8;
      pTVar7 = (TOnlineAsyncOp<UE::Online::FCommerceRetrieveS2SToken> *)0x0;
      if (iVar2 == 0) goto LAB_14ee58941;
      LOCK();
      iVar3 = *(int *)&((FWeakReferencer<1> *)&pTVar4->_padding_)->ReferenceController;
      bVar9 = iVar2 == iVar3;
      if (bVar9) {
        *(int *)&((FWeakReferencer<1> *)&pTVar4->_padding_)->ReferenceController = iVar2 + 1;
        iVar3 = iVar2;
      }
      UNLOCK();
      iVar2 = iVar3;
    } while (!bVar9);
    pTVar6 = pTVar4;
    pTVar7 = (this->WeakThis).Object;
  }
LAB_14ee58941:
  pTVar4 = (TOnlineAsyncOp<UE::Online::FCommerceRetrieveS2SToken> *)&pTVar7->_padding_;
  if (pTVar7 == (TOnlineAsyncOp<UE::Online::FCommerceRetrieveS2SToken> *)0x0) {
    pTVar4 = pTVar8;
  }
  if ((pTVar4 != (TOnlineAsyncOp<UE::Online::FCommerceRetrieveS2SToken> *)this) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("SharedThis.Get() == this",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x67f,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FCommerceRetrieveS2SToken>,1> *)
             (*pcVar1)();
    return pTVar5;
  }
  if ((pTVar7 == (TOnlineAsyncOp<UE::Online::FCommerceRetrieveS2SToken> *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x416,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FCommerceRetrieveS2SToken>,1> *)
             (*pcVar1)();
    return pTVar5;
  }
  __return_storage_ptr__->Object = pTVar7;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)pTVar6;
  if ((pTVar7 == (TOnlineAsyncOp<UE::Online::FCommerceRetrieveS2SToken> *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x26c,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FCommerceRetrieveS2SToken>,1> *)
             (*pcVar1)();
    return pTVar5;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return __return_storage_ptr__;
}

// AsShared @ 14ee58a10

TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FCommerceShowStoreUI>,1> * __thiscall
TSharedFromThis<UE::Online::TOnlineAsyncOp<UE::Online::FCommerceShowStoreUI>,1>::AsShared
          (TSharedFromThis<UE::Online::TOnlineAsyncOp<UE::Online::FCommerceShowStoreUI>,1> *this,
          TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FCommerceShowStoreUI>,1>
          *__return_storage_ptr__)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  TOnlineAsyncOp<UE::Online::FCommerceShowStoreUI> *pTVar4;
  TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FCommerceShowStoreUI>,1> *pTVar5;
  TOnlineAsyncOp<UE::Online::FCommerceShowStoreUI> *pTVar6;
  TOnlineAsyncOp<UE::Online::FCommerceShowStoreUI> *pTVar7;
  TOnlineAsyncOp<UE::Online::FCommerceShowStoreUI> *pTVar8;
  bool bVar9;
  
  pTVar4 = (TOnlineAsyncOp<UE::Online::FCommerceShowStoreUI> *)
           (this->WeakThis).WeakReferenceCount.ReferenceController;
  pTVar8 = (TOnlineAsyncOp<UE::Online::FCommerceShowStoreUI> *)0x0;
  pTVar6 = pTVar4;
  pTVar7 = pTVar8;
  if (pTVar4 != (TOnlineAsyncOp<UE::Online::FCommerceShowStoreUI> *)0x0) {
    iVar2 = *(int *)&((FWeakReferencer<1> *)&pTVar4->_padding_)->ReferenceController;
    do {
      pTVar6 = pTVar8;
      pTVar7 = (TOnlineAsyncOp<UE::Online::FCommerceShowStoreUI> *)0x0;
      if (iVar2 == 0) goto LAB_14ee58a51;
      LOCK();
      iVar3 = *(int *)&((FWeakReferencer<1> *)&pTVar4->_padding_)->ReferenceController;
      bVar9 = iVar2 == iVar3;
      if (bVar9) {
        *(int *)&((FWeakReferencer<1> *)&pTVar4->_padding_)->ReferenceController = iVar2 + 1;
        iVar3 = iVar2;
      }
      UNLOCK();
      iVar2 = iVar3;
    } while (!bVar9);
    pTVar6 = pTVar4;
    pTVar7 = (this->WeakThis).Object;
  }
LAB_14ee58a51:
  pTVar4 = (TOnlineAsyncOp<UE::Online::FCommerceShowStoreUI> *)&pTVar7->_padding_;
  if (pTVar7 == (TOnlineAsyncOp<UE::Online::FCommerceShowStoreUI> *)0x0) {
    pTVar4 = pTVar8;
  }
  if ((pTVar4 != (TOnlineAsyncOp<UE::Online::FCommerceShowStoreUI> *)this) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("SharedThis.Get() == this",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x67f,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FCommerceShowStoreUI>,1> *)
             (*pcVar1)();
    return pTVar5;
  }
  if ((pTVar7 == (TOnlineAsyncOp<UE::Online::FCommerceShowStoreUI> *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x416,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FCommerceShowStoreUI>,1> *)
             (*pcVar1)();
    return pTVar5;
  }
  __return_storage_ptr__->Object = pTVar7;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)pTVar6;
  if ((pTVar7 == (TOnlineAsyncOp<UE::Online::FCommerceShowStoreUI> *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x26c,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FCommerceShowStoreUI>,1> *)
             (*pcVar1)();
    return pTVar5;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return __return_storage_ptr__;
}

// AsShared @ 14ee58b20

TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FCreateLobby>,1> * __thiscall
TSharedFromThis<UE::Online::TOnlineAsyncOp<UE::Online::FCreateLobby>,1>::AsShared
          (TSharedFromThis<UE::Online::TOnlineAsyncOp<UE::Online::FCreateLobby>,1> *this,
          TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FCreateLobby>,1> *__return_storage_ptr__
          )

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  TOnlineAsyncOp<UE::Online::FCreateLobby> *pTVar4;
  TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FCreateLobby>,1> *pTVar5;
  TOnlineAsyncOp<UE::Online::FCreateLobby> *pTVar6;
  TOnlineAsyncOp<UE::Online::FCreateLobby> *pTVar7;
  TOnlineAsyncOp<UE::Online::FCreateLobby> *pTVar8;
  bool bVar9;
  
  pTVar4 = (TOnlineAsyncOp<UE::Online::FCreateLobby> *)
           (this->WeakThis).WeakReferenceCount.ReferenceController;
  pTVar8 = (TOnlineAsyncOp<UE::Online::FCreateLobby> *)0x0;
  pTVar6 = pTVar4;
  pTVar7 = pTVar8;
  if (pTVar4 != (TOnlineAsyncOp<UE::Online::FCreateLobby> *)0x0) {
    iVar2 = *(int *)&((FWeakReferencer<1> *)&pTVar4->_padding_)->ReferenceController;
    do {
      pTVar6 = pTVar8;
      pTVar7 = (TOnlineAsyncOp<UE::Online::FCreateLobby> *)0x0;
      if (iVar2 == 0) goto LAB_14ee58b61;
      LOCK();
      iVar3 = *(int *)&((FWeakReferencer<1> *)&pTVar4->_padding_)->ReferenceController;
      bVar9 = iVar2 == iVar3;
      if (bVar9) {
        *(int *)&((FWeakReferencer<1> *)&pTVar4->_padding_)->ReferenceController = iVar2 + 1;
        iVar3 = iVar2;
      }
      UNLOCK();
      iVar2 = iVar3;
    } while (!bVar9);
    pTVar6 = pTVar4;
    pTVar7 = (this->WeakThis).Object;
  }
LAB_14ee58b61:
  pTVar4 = (TOnlineAsyncOp<UE::Online::FCreateLobby> *)&pTVar7->_padding_;
  if (pTVar7 == (TOnlineAsyncOp<UE::Online::FCreateLobby> *)0x0) {
    pTVar4 = pTVar8;
  }
  if ((pTVar4 != (TOnlineAsyncOp<UE::Online::FCreateLobby> *)this) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("SharedThis.Get() == this",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x67f,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FCreateLobby>,1> *)(*pcVar1)();
    return pTVar5;
  }
  if ((pTVar7 == (TOnlineAsyncOp<UE::Online::FCreateLobby> *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x416,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FCreateLobby>,1> *)(*pcVar1)();
    return pTVar5;
  }
  __return_storage_ptr__->Object = pTVar7;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)pTVar6;
  if ((pTVar7 == (TOnlineAsyncOp<UE::Online::FCreateLobby> *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x26c,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FCreateLobby>,1> *)(*pcVar1)();
    return pTVar5;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return __return_storage_ptr__;
}

// AsShared @ 14ee58c30

TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FCreateSession>,1> * __thiscall
TSharedFromThis<UE::Online::TOnlineAsyncOp<UE::Online::FCreateSession>,1>::AsShared
          (TSharedFromThis<UE::Online::TOnlineAsyncOp<UE::Online::FCreateSession>,1> *this,
          TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FCreateSession>,1>
          *__return_storage_ptr__)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  TOnlineAsyncOp<UE::Online::FCreateSession> *pTVar4;
  TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FCreateSession>,1> *pTVar5;
  TOnlineAsyncOp<UE::Online::FCreateSession> *pTVar6;
  TOnlineAsyncOp<UE::Online::FCreateSession> *pTVar7;
  TOnlineAsyncOp<UE::Online::FCreateSession> *pTVar8;
  bool bVar9;
  
  pTVar4 = (TOnlineAsyncOp<UE::Online::FCreateSession> *)
           (this->WeakThis).WeakReferenceCount.ReferenceController;
  pTVar8 = (TOnlineAsyncOp<UE::Online::FCreateSession> *)0x0;
  pTVar6 = pTVar4;
  pTVar7 = pTVar8;
  if (pTVar4 != (TOnlineAsyncOp<UE::Online::FCreateSession> *)0x0) {
    iVar2 = *(int *)&((FWeakReferencer<1> *)&pTVar4->_padding_)->ReferenceController;
    do {
      pTVar6 = pTVar8;
      pTVar7 = (TOnlineAsyncOp<UE::Online::FCreateSession> *)0x0;
      if (iVar2 == 0) goto LAB_14ee58c71;
      LOCK();
      iVar3 = *(int *)&((FWeakReferencer<1> *)&pTVar4->_padding_)->ReferenceController;
      bVar9 = iVar2 == iVar3;
      if (bVar9) {
        *(int *)&((FWeakReferencer<1> *)&pTVar4->_padding_)->ReferenceController = iVar2 + 1;
        iVar3 = iVar2;
      }
      UNLOCK();
      iVar2 = iVar3;
    } while (!bVar9);
    pTVar6 = pTVar4;
    pTVar7 = (this->WeakThis).Object;
  }
LAB_14ee58c71:
  pTVar4 = (TOnlineAsyncOp<UE::Online::FCreateSession> *)&pTVar7->_padding_;
  if (pTVar7 == (TOnlineAsyncOp<UE::Online::FCreateSession> *)0x0) {
    pTVar4 = pTVar8;
  }
  if ((pTVar4 != (TOnlineAsyncOp<UE::Online::FCreateSession> *)this) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("SharedThis.Get() == this",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x67f,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FCreateSession>,1> *)(*pcVar1)();
    return pTVar5;
  }
  if ((pTVar7 == (TOnlineAsyncOp<UE::Online::FCreateSession> *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x416,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FCreateSession>,1> *)(*pcVar1)();
    return pTVar5;
  }
  __return_storage_ptr__->Object = pTVar7;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)pTVar6;
  if ((pTVar7 == (TOnlineAsyncOp<UE::Online::FCreateSession> *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x26c,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FCreateSession>,1> *)(*pcVar1)();
    return pTVar5;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return __return_storage_ptr__;
}

// AsShared @ 14ee58d40

TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FDeclineLobbyInvitation>,1> * __thiscall
TSharedFromThis<UE::Online::TOnlineAsyncOp<UE::Online::FDeclineLobbyInvitation>,1>::AsShared
          (TSharedFromThis<UE::Online::TOnlineAsyncOp<UE::Online::FDeclineLobbyInvitation>,1> *this,
          TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FDeclineLobbyInvitation>,1>
          *__return_storage_ptr__)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  TOnlineAsyncOp<UE::Online::FDeclineLobbyInvitation> *pTVar4;
  TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FDeclineLobbyInvitation>,1> *pTVar5;
  TOnlineAsyncOp<UE::Online::FDeclineLobbyInvitation> *pTVar6;
  TOnlineAsyncOp<UE::Online::FDeclineLobbyInvitation> *pTVar7;
  TOnlineAsyncOp<UE::Online::FDeclineLobbyInvitation> *pTVar8;
  bool bVar9;
  
  pTVar4 = (TOnlineAsyncOp<UE::Online::FDeclineLobbyInvitation> *)
           (this->WeakThis).WeakReferenceCount.ReferenceController;
  pTVar8 = (TOnlineAsyncOp<UE::Online::FDeclineLobbyInvitation> *)0x0;
  pTVar6 = pTVar4;
  pTVar7 = pTVar8;
  if (pTVar4 != (TOnlineAsyncOp<UE::Online::FDeclineLobbyInvitation> *)0x0) {
    iVar2 = *(int *)&((FWeakReferencer<1> *)&pTVar4->_padding_)->ReferenceController;
    do {
      pTVar6 = pTVar8;
      pTVar7 = (TOnlineAsyncOp<UE::Online::FDeclineLobbyInvitation> *)0x0;
      if (iVar2 == 0) goto LAB_14ee58d81;
      LOCK();
      iVar3 = *(int *)&((FWeakReferencer<1> *)&pTVar4->_padding_)->ReferenceController;
      bVar9 = iVar2 == iVar3;
      if (bVar9) {
        *(int *)&((FWeakReferencer<1> *)&pTVar4->_padding_)->ReferenceController = iVar2 + 1;
        iVar3 = iVar2;
      }
      UNLOCK();
      iVar2 = iVar3;
    } while (!bVar9);
    pTVar6 = pTVar4;
    pTVar7 = (this->WeakThis).Object;
  }
LAB_14ee58d81:
  pTVar4 = (TOnlineAsyncOp<UE::Online::FDeclineLobbyInvitation> *)&pTVar7->_padding_;
  if (pTVar7 == (TOnlineAsyncOp<UE::Online::FDeclineLobbyInvitation> *)0x0) {
    pTVar4 = pTVar8;
  }
  if ((pTVar4 != (TOnlineAsyncOp<UE::Online::FDeclineLobbyInvitation> *)this) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("SharedThis.Get() == this",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x67f,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FDeclineLobbyInvitation>,1> *)
             (*pcVar1)();
    return pTVar5;
  }
  if ((pTVar7 == (TOnlineAsyncOp<UE::Online::FDeclineLobbyInvitation> *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x416,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FDeclineLobbyInvitation>,1> *)
             (*pcVar1)();
    return pTVar5;
  }
  __return_storage_ptr__->Object = pTVar7;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)pTVar6;
  if ((pTVar7 == (TOnlineAsyncOp<UE::Online::FDeclineLobbyInvitation> *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x26c,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FDeclineLobbyInvitation>,1> *)
             (*pcVar1)();
    return pTVar5;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return __return_storage_ptr__;
}

// AsShared @ 14ee58e50

TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FExternalUIShowFriendsUI>,1> * __thiscall
TSharedFromThis<UE::Online::TOnlineAsyncOp<UE::Online::FExternalUIShowFriendsUI>,1>::AsShared
          (TSharedFromThis<UE::Online::TOnlineAsyncOp<UE::Online::FExternalUIShowFriendsUI>,1> *this
          ,TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FExternalUIShowFriendsUI>,1>
           *__return_storage_ptr__)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  TOnlineAsyncOp<UE::Online::FExternalUIShowFriendsUI> *pTVar4;
  TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FExternalUIShowFriendsUI>,1> *pTVar5;
  TOnlineAsyncOp<UE::Online::FExternalUIShowFriendsUI> *pTVar6;
  TOnlineAsyncOp<UE::Online::FExternalUIShowFriendsUI> *pTVar7;
  TOnlineAsyncOp<UE::Online::FExternalUIShowFriendsUI> *pTVar8;
  bool bVar9;
  
  pTVar4 = (TOnlineAsyncOp<UE::Online::FExternalUIShowFriendsUI> *)
           (this->WeakThis).WeakReferenceCount.ReferenceController;
  pTVar8 = (TOnlineAsyncOp<UE::Online::FExternalUIShowFriendsUI> *)0x0;
  pTVar6 = pTVar4;
  pTVar7 = pTVar8;
  if (pTVar4 != (TOnlineAsyncOp<UE::Online::FExternalUIShowFriendsUI> *)0x0) {
    iVar2 = *(int *)&((FWeakReferencer<1> *)&pTVar4->_padding_)->ReferenceController;
    do {
      pTVar6 = pTVar8;
      pTVar7 = (TOnlineAsyncOp<UE::Online::FExternalUIShowFriendsUI> *)0x0;
      if (iVar2 == 0) goto LAB_14ee58e91;
      LOCK();
      iVar3 = *(int *)&((FWeakReferencer<1> *)&pTVar4->_padding_)->ReferenceController;
      bVar9 = iVar2 == iVar3;
      if (bVar9) {
        *(int *)&((FWeakReferencer<1> *)&pTVar4->_padding_)->ReferenceController = iVar2 + 1;
        iVar3 = iVar2;
      }
      UNLOCK();
      iVar2 = iVar3;
    } while (!bVar9);
    pTVar6 = pTVar4;
    pTVar7 = (this->WeakThis).Object;
  }
LAB_14ee58e91:
  pTVar4 = (TOnlineAsyncOp<UE::Online::FExternalUIShowFriendsUI> *)&pTVar7->_padding_;
  if (pTVar7 == (TOnlineAsyncOp<UE::Online::FExternalUIShowFriendsUI> *)0x0) {
    pTVar4 = pTVar8;
  }
  if ((pTVar4 != (TOnlineAsyncOp<UE::Online::FExternalUIShowFriendsUI> *)this) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("SharedThis.Get() == this",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x67f,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FExternalUIShowFriendsUI>,1> *)
             (*pcVar1)();
    return pTVar5;
  }
  if ((pTVar7 == (TOnlineAsyncOp<UE::Online::FExternalUIShowFriendsUI> *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x416,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FExternalUIShowFriendsUI>,1> *)
             (*pcVar1)();
    return pTVar5;
  }
  __return_storage_ptr__->Object = pTVar7;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)pTVar6;
  if ((pTVar7 == (TOnlineAsyncOp<UE::Online::FExternalUIShowFriendsUI> *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x26c,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FExternalUIShowFriendsUI>,1> *)
             (*pcVar1)();
    return pTVar5;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return __return_storage_ptr__;
}

// AsShared @ 14ee58f60

TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FExternalUIShowLoginUI>,1> * __thiscall
TSharedFromThis<UE::Online::TOnlineAsyncOp<UE::Online::FExternalUIShowLoginUI>,1>::AsShared
          (TSharedFromThis<UE::Online::TOnlineAsyncOp<UE::Online::FExternalUIShowLoginUI>,1> *this,
          TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FExternalUIShowLoginUI>,1>
          *__return_storage_ptr__)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  TOnlineAsyncOp<UE::Online::FExternalUIShowLoginUI> *pTVar4;
  TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FExternalUIShowLoginUI>,1> *pTVar5;
  TOnlineAsyncOp<UE::Online::FExternalUIShowLoginUI> *pTVar6;
  TOnlineAsyncOp<UE::Online::FExternalUIShowLoginUI> *pTVar7;
  TOnlineAsyncOp<UE::Online::FExternalUIShowLoginUI> *pTVar8;
  bool bVar9;
  
  pTVar4 = (TOnlineAsyncOp<UE::Online::FExternalUIShowLoginUI> *)
           (this->WeakThis).WeakReferenceCount.ReferenceController;
  pTVar8 = (TOnlineAsyncOp<UE::Online::FExternalUIShowLoginUI> *)0x0;
  pTVar6 = pTVar4;
  pTVar7 = pTVar8;
  if (pTVar4 != (TOnlineAsyncOp<UE::Online::FExternalUIShowLoginUI> *)0x0) {
    iVar2 = *(int *)&((FWeakReferencer<1> *)&pTVar4->_padding_)->ReferenceController;
    do {
      pTVar6 = pTVar8;
      pTVar7 = (TOnlineAsyncOp<UE::Online::FExternalUIShowLoginUI> *)0x0;
      if (iVar2 == 0) goto LAB_14ee58fa1;
      LOCK();
      iVar3 = *(int *)&((FWeakReferencer<1> *)&pTVar4->_padding_)->ReferenceController;
      bVar9 = iVar2 == iVar3;
      if (bVar9) {
        *(int *)&((FWeakReferencer<1> *)&pTVar4->_padding_)->ReferenceController = iVar2 + 1;
        iVar3 = iVar2;
      }
      UNLOCK();
      iVar2 = iVar3;
    } while (!bVar9);
    pTVar6 = pTVar4;
    pTVar7 = (this->WeakThis).Object;
  }
LAB_14ee58fa1:
  pTVar4 = (TOnlineAsyncOp<UE::Online::FExternalUIShowLoginUI> *)&pTVar7->_padding_;
  if (pTVar7 == (TOnlineAsyncOp<UE::Online::FExternalUIShowLoginUI> *)0x0) {
    pTVar4 = pTVar8;
  }
  if ((pTVar4 != (TOnlineAsyncOp<UE::Online::FExternalUIShowLoginUI> *)this) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("SharedThis.Get() == this",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x67f,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FExternalUIShowLoginUI>,1> *)
             (*pcVar1)();
    return pTVar5;
  }
  if ((pTVar7 == (TOnlineAsyncOp<UE::Online::FExternalUIShowLoginUI> *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x416,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FExternalUIShowLoginUI>,1> *)
             (*pcVar1)();
    return pTVar5;
  }
  __return_storage_ptr__->Object = pTVar7;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)pTVar6;
  if ((pTVar7 == (TOnlineAsyncOp<UE::Online::FExternalUIShowLoginUI> *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x26c,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FExternalUIShowLoginUI>,1> *)
             (*pcVar1)();
    return pTVar5;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return __return_storage_ptr__;
}

// AsShared @ 14ee59070

TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FFindLobbies>,1> * __thiscall
TSharedFromThis<UE::Online::TOnlineAsyncOp<UE::Online::FFindLobbies>,1>::AsShared
          (TSharedFromThis<UE::Online::TOnlineAsyncOp<UE::Online::FFindLobbies>,1> *this,
          TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FFindLobbies>,1> *__return_storage_ptr__
          )

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  TOnlineAsyncOp<UE::Online::FFindLobbies> *pTVar4;
  TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FFindLobbies>,1> *pTVar5;
  TOnlineAsyncOp<UE::Online::FFindLobbies> *pTVar6;
  TOnlineAsyncOp<UE::Online::FFindLobbies> *pTVar7;
  TOnlineAsyncOp<UE::Online::FFindLobbies> *pTVar8;
  bool bVar9;
  
  pTVar4 = (TOnlineAsyncOp<UE::Online::FFindLobbies> *)
           (this->WeakThis).WeakReferenceCount.ReferenceController;
  pTVar8 = (TOnlineAsyncOp<UE::Online::FFindLobbies> *)0x0;
  pTVar6 = pTVar4;
  pTVar7 = pTVar8;
  if (pTVar4 != (TOnlineAsyncOp<UE::Online::FFindLobbies> *)0x0) {
    iVar2 = *(int *)&((FWeakReferencer<1> *)&pTVar4->_padding_)->ReferenceController;
    do {
      pTVar6 = pTVar8;
      pTVar7 = (TOnlineAsyncOp<UE::Online::FFindLobbies> *)0x0;
      if (iVar2 == 0) goto LAB_14ee590b1;
      LOCK();
      iVar3 = *(int *)&((FWeakReferencer<1> *)&pTVar4->_padding_)->ReferenceController;
      bVar9 = iVar2 == iVar3;
      if (bVar9) {
        *(int *)&((FWeakReferencer<1> *)&pTVar4->_padding_)->ReferenceController = iVar2 + 1;
        iVar3 = iVar2;
      }
      UNLOCK();
      iVar2 = iVar3;
    } while (!bVar9);
    pTVar6 = pTVar4;
    pTVar7 = (this->WeakThis).Object;
  }
LAB_14ee590b1:
  pTVar4 = (TOnlineAsyncOp<UE::Online::FFindLobbies> *)&pTVar7->_padding_;
  if (pTVar7 == (TOnlineAsyncOp<UE::Online::FFindLobbies> *)0x0) {
    pTVar4 = pTVar8;
  }
  if ((pTVar4 != (TOnlineAsyncOp<UE::Online::FFindLobbies> *)this) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("SharedThis.Get() == this",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x67f,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FFindLobbies>,1> *)(*pcVar1)();
    return pTVar5;
  }
  if ((pTVar7 == (TOnlineAsyncOp<UE::Online::FFindLobbies> *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x416,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FFindLobbies>,1> *)(*pcVar1)();
    return pTVar5;
  }
  __return_storage_ptr__->Object = pTVar7;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)pTVar6;
  if ((pTVar7 == (TOnlineAsyncOp<UE::Online::FFindLobbies> *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x26c,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FFindLobbies>,1> *)(*pcVar1)();
    return pTVar5;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return __return_storage_ptr__;
}

// AsShared @ 14ee59180

TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FFindSessions>,1> * __thiscall
TSharedFromThis<UE::Online::TOnlineAsyncOp<UE::Online::FFindSessions>,1>::AsShared
          (TSharedFromThis<UE::Online::TOnlineAsyncOp<UE::Online::FFindSessions>,1> *this,
          TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FFindSessions>,1>
          *__return_storage_ptr__)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  TOnlineAsyncOp<UE::Online::FFindSessions> *pTVar4;
  TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FFindSessions>,1> *pTVar5;
  TOnlineAsyncOp<UE::Online::FFindSessions> *pTVar6;
  TOnlineAsyncOp<UE::Online::FFindSessions> *pTVar7;
  TOnlineAsyncOp<UE::Online::FFindSessions> *pTVar8;
  bool bVar9;
  
  pTVar4 = (TOnlineAsyncOp<UE::Online::FFindSessions> *)
           (this->WeakThis).WeakReferenceCount.ReferenceController;
  pTVar8 = (TOnlineAsyncOp<UE::Online::FFindSessions> *)0x0;
  pTVar6 = pTVar4;
  pTVar7 = pTVar8;
  if (pTVar4 != (TOnlineAsyncOp<UE::Online::FFindSessions> *)0x0) {
    iVar2 = *(int *)&((FWeakReferencer<1> *)&pTVar4->_padding_)->ReferenceController;
    do {
      pTVar6 = pTVar8;
      pTVar7 = (TOnlineAsyncOp<UE::Online::FFindSessions> *)0x0;
      if (iVar2 == 0) goto LAB_14ee591c1;
      LOCK();
      iVar3 = *(int *)&((FWeakReferencer<1> *)&pTVar4->_padding_)->ReferenceController;
      bVar9 = iVar2 == iVar3;
      if (bVar9) {
        *(int *)&((FWeakReferencer<1> *)&pTVar4->_padding_)->ReferenceController = iVar2 + 1;
        iVar3 = iVar2;
      }
      UNLOCK();
      iVar2 = iVar3;
    } while (!bVar9);
    pTVar6 = pTVar4;
    pTVar7 = (this->WeakThis).Object;
  }
LAB_14ee591c1:
  pTVar4 = (TOnlineAsyncOp<UE::Online::FFindSessions> *)&pTVar7->_padding_;
  if (pTVar7 == (TOnlineAsyncOp<UE::Online::FFindSessions> *)0x0) {
    pTVar4 = pTVar8;
  }
  if ((pTVar4 != (TOnlineAsyncOp<UE::Online::FFindSessions> *)this) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("SharedThis.Get() == this",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x67f,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FFindSessions>,1> *)(*pcVar1)();
    return pTVar5;
  }
  if ((pTVar7 == (TOnlineAsyncOp<UE::Online::FFindSessions> *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x416,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FFindSessions>,1> *)(*pcVar1)();
    return pTVar5;
  }
  __return_storage_ptr__->Object = pTVar7;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)pTVar6;
  if ((pTVar7 == (TOnlineAsyncOp<UE::Online::FFindSessions> *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x26c,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FFindSessions>,1> *)(*pcVar1)();
    return pTVar5;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return __return_storage_ptr__;
}

// AsShared @ 14ee59290

TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>,1> * __thiscall
TSharedFromThis<UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>,1>::AsShared
          (TSharedFromThis<UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>,1> *this,
          TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>,1>
          *__return_storage_ptr__)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *pTVar4;
  TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>,1> *pTVar5;
  TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *pTVar6;
  TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *pTVar7;
  TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *pTVar8;
  bool bVar9;
  
  pTVar4 = (TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *)
           (this->WeakThis).WeakReferenceCount.ReferenceController;
  pTVar8 = (TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *)0x0;
  pTVar6 = pTVar4;
  pTVar7 = pTVar8;
  if (pTVar4 != (TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *)0x0) {
    iVar2 = *(int *)&((FWeakReferencer<1> *)&pTVar4->_padding_)->ReferenceController;
    do {
      pTVar6 = pTVar8;
      pTVar7 = (TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *)0x0;
      if (iVar2 == 0) goto LAB_14ee592d1;
      LOCK();
      iVar3 = *(int *)&((FWeakReferencer<1> *)&pTVar4->_padding_)->ReferenceController;
      bVar9 = iVar2 == iVar3;
      if (bVar9) {
        *(int *)&((FWeakReferencer<1> *)&pTVar4->_padding_)->ReferenceController = iVar2 + 1;
        iVar3 = iVar2;
      }
      UNLOCK();
      iVar2 = iVar3;
    } while (!bVar9);
    pTVar6 = pTVar4;
    pTVar7 = (this->WeakThis).Object;
  }
LAB_14ee592d1:
  pTVar4 = (TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *)&pTVar7->_padding_;
  if (pTVar7 == (TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *)0x0) {
    pTVar4 = pTVar8;
  }
  if ((pTVar4 != (TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *)this) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("SharedThis.Get() == this",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x67f,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>,1> *)
             (*pcVar1)();
    return pTVar5;
  }
  if ((pTVar7 == (TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x416,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>,1> *)
             (*pcVar1)();
    return pTVar5;
  }
  __return_storage_ptr__->Object = pTVar7;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)pTVar6;
  if ((pTVar7 == (TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x26c,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>,1> *)
             (*pcVar1)();
    return pTVar5;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return __return_storage_ptr__;
}

// AsShared @ 14ee593a0

TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FInviteLobbyMember>,1> * __thiscall
TSharedFromThis<UE::Online::TOnlineAsyncOp<UE::Online::FInviteLobbyMember>,1>::AsShared
          (TSharedFromThis<UE::Online::TOnlineAsyncOp<UE::Online::FInviteLobbyMember>,1> *this,
          TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FInviteLobbyMember>,1>
          *__return_storage_ptr__)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  TOnlineAsyncOp<UE::Online::FInviteLobbyMember> *pTVar4;
  TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FInviteLobbyMember>,1> *pTVar5;
  TOnlineAsyncOp<UE::Online::FInviteLobbyMember> *pTVar6;
  TOnlineAsyncOp<UE::Online::FInviteLobbyMember> *pTVar7;
  TOnlineAsyncOp<UE::Online::FInviteLobbyMember> *pTVar8;
  bool bVar9;
  
  pTVar4 = (TOnlineAsyncOp<UE::Online::FInviteLobbyMember> *)
           (this->WeakThis).WeakReferenceCount.ReferenceController;
  pTVar8 = (TOnlineAsyncOp<UE::Online::FInviteLobbyMember> *)0x0;
  pTVar6 = pTVar4;
  pTVar7 = pTVar8;
  if (pTVar4 != (TOnlineAsyncOp<UE::Online::FInviteLobbyMember> *)0x0) {
    iVar2 = *(int *)&((FWeakReferencer<1> *)&pTVar4->_padding_)->ReferenceController;
    do {
      pTVar6 = pTVar8;
      pTVar7 = (TOnlineAsyncOp<UE::Online::FInviteLobbyMember> *)0x0;
      if (iVar2 == 0) goto LAB_14ee593e1;
      LOCK();
      iVar3 = *(int *)&((FWeakReferencer<1> *)&pTVar4->_padding_)->ReferenceController;
      bVar9 = iVar2 == iVar3;
      if (bVar9) {
        *(int *)&((FWeakReferencer<1> *)&pTVar4->_padding_)->ReferenceController = iVar2 + 1;
        iVar3 = iVar2;
      }
      UNLOCK();
      iVar2 = iVar3;
    } while (!bVar9);
    pTVar6 = pTVar4;
    pTVar7 = (this->WeakThis).Object;
  }
LAB_14ee593e1:
  pTVar4 = (TOnlineAsyncOp<UE::Online::FInviteLobbyMember> *)&pTVar7->_padding_;
  if (pTVar7 == (TOnlineAsyncOp<UE::Online::FInviteLobbyMember> *)0x0) {
    pTVar4 = pTVar8;
  }
  if ((pTVar4 != (TOnlineAsyncOp<UE::Online::FInviteLobbyMember> *)this) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("SharedThis.Get() == this",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x67f,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FInviteLobbyMember>,1> *)(*pcVar1)()
    ;
    return pTVar5;
  }
  if ((pTVar7 == (TOnlineAsyncOp<UE::Online::FInviteLobbyMember> *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x416,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FInviteLobbyMember>,1> *)(*pcVar1)()
    ;
    return pTVar5;
  }
  __return_storage_ptr__->Object = pTVar7;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)pTVar6;
  if ((pTVar7 == (TOnlineAsyncOp<UE::Online::FInviteLobbyMember> *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x26c,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FInviteLobbyMember>,1> *)(*pcVar1)()
    ;
    return pTVar5;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return __return_storage_ptr__;
}

// AsShared @ 14ee594b0

TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FJoinLobby>,1> * __thiscall
TSharedFromThis<UE::Online::TOnlineAsyncOp<UE::Online::FJoinLobby>,1>::AsShared
          (TSharedFromThis<UE::Online::TOnlineAsyncOp<UE::Online::FJoinLobby>,1> *this,
          TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FJoinLobby>,1> *__return_storage_ptr__)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  TOnlineAsyncOp<UE::Online::FJoinLobby> *pTVar4;
  TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FJoinLobby>,1> *pTVar5;
  TOnlineAsyncOp<UE::Online::FJoinLobby> *pTVar6;
  TOnlineAsyncOp<UE::Online::FJoinLobby> *pTVar7;
  TOnlineAsyncOp<UE::Online::FJoinLobby> *pTVar8;
  bool bVar9;
  
  pTVar4 = (TOnlineAsyncOp<UE::Online::FJoinLobby> *)
           (this->WeakThis).WeakReferenceCount.ReferenceController;
  pTVar8 = (TOnlineAsyncOp<UE::Online::FJoinLobby> *)0x0;
  pTVar6 = pTVar4;
  pTVar7 = pTVar8;
  if (pTVar4 != (TOnlineAsyncOp<UE::Online::FJoinLobby> *)0x0) {
    iVar2 = *(int *)&((FWeakReferencer<1> *)&pTVar4->_padding_)->ReferenceController;
    do {
      pTVar6 = pTVar8;
      pTVar7 = (TOnlineAsyncOp<UE::Online::FJoinLobby> *)0x0;
      if (iVar2 == 0) goto LAB_14ee594f1;
      LOCK();
      iVar3 = *(int *)&((FWeakReferencer<1> *)&pTVar4->_padding_)->ReferenceController;
      bVar9 = iVar2 == iVar3;
      if (bVar9) {
        *(int *)&((FWeakReferencer<1> *)&pTVar4->_padding_)->ReferenceController = iVar2 + 1;
        iVar3 = iVar2;
      }
      UNLOCK();
      iVar2 = iVar3;
    } while (!bVar9);
    pTVar6 = pTVar4;
    pTVar7 = (this->WeakThis).Object;
  }
LAB_14ee594f1:
  pTVar4 = (TOnlineAsyncOp<UE::Online::FJoinLobby> *)&pTVar7->_padding_;
  if (pTVar7 == (TOnlineAsyncOp<UE::Online::FJoinLobby> *)0x0) {
    pTVar4 = pTVar8;
  }
  if ((pTVar4 != (TOnlineAsyncOp<UE::Online::FJoinLobby> *)this) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("SharedThis.Get() == this",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x67f,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FJoinLobby>,1> *)(*pcVar1)();
    return pTVar5;
  }
  if ((pTVar7 == (TOnlineAsyncOp<UE::Online::FJoinLobby> *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x416,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FJoinLobby>,1> *)(*pcVar1)();
    return pTVar5;
  }
  __return_storage_ptr__->Object = pTVar7;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)pTVar6;
  if ((pTVar7 == (TOnlineAsyncOp<UE::Online::FJoinLobby> *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x26c,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FJoinLobby>,1> *)(*pcVar1)();
    return pTVar5;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return __return_storage_ptr__;
}

// AsShared @ 14ee595c0

TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FJoinSession>,1> * __thiscall
TSharedFromThis<UE::Online::TOnlineAsyncOp<UE::Online::FJoinSession>,1>::AsShared
          (TSharedFromThis<UE::Online::TOnlineAsyncOp<UE::Online::FJoinSession>,1> *this,
          TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FJoinSession>,1> *__return_storage_ptr__
          )

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  TOnlineAsyncOp<UE::Online::FJoinSession> *pTVar4;
  TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FJoinSession>,1> *pTVar5;
  TOnlineAsyncOp<UE::Online::FJoinSession> *pTVar6;
  TOnlineAsyncOp<UE::Online::FJoinSession> *pTVar7;
  TOnlineAsyncOp<UE::Online::FJoinSession> *pTVar8;
  bool bVar9;
  
  pTVar4 = (TOnlineAsyncOp<UE::Online::FJoinSession> *)
           (this->WeakThis).WeakReferenceCount.ReferenceController;
  pTVar8 = (TOnlineAsyncOp<UE::Online::FJoinSession> *)0x0;
  pTVar6 = pTVar4;
  pTVar7 = pTVar8;
  if (pTVar4 != (TOnlineAsyncOp<UE::Online::FJoinSession> *)0x0) {
    iVar2 = *(int *)&((FWeakReferencer<1> *)&pTVar4->_padding_)->ReferenceController;
    do {
      pTVar6 = pTVar8;
      pTVar7 = (TOnlineAsyncOp<UE::Online::FJoinSession> *)0x0;
      if (iVar2 == 0) goto LAB_14ee59601;
      LOCK();
      iVar3 = *(int *)&((FWeakReferencer<1> *)&pTVar4->_padding_)->ReferenceController;
      bVar9 = iVar2 == iVar3;
      if (bVar9) {
        *(int *)&((FWeakReferencer<1> *)&pTVar4->_padding_)->ReferenceController = iVar2 + 1;
        iVar3 = iVar2;
      }
      UNLOCK();
      iVar2 = iVar3;
    } while (!bVar9);
    pTVar6 = pTVar4;
    pTVar7 = (this->WeakThis).Object;
  }
LAB_14ee59601:
  pTVar4 = (TOnlineAsyncOp<UE::Online::FJoinSession> *)&pTVar7->_padding_;
  if (pTVar7 == (TOnlineAsyncOp<UE::Online::FJoinSession> *)0x0) {
    pTVar4 = pTVar8;
  }
  if ((pTVar4 != (TOnlineAsyncOp<UE::Online::FJoinSession> *)this) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("SharedThis.Get() == this",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x67f,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FJoinSession>,1> *)(*pcVar1)();
    return pTVar5;
  }
  if ((pTVar7 == (TOnlineAsyncOp<UE::Online::FJoinSession> *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x416,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FJoinSession>,1> *)(*pcVar1)();
    return pTVar5;
  }
  __return_storage_ptr__->Object = pTVar7;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)pTVar6;
  if ((pTVar7 == (TOnlineAsyncOp<UE::Online::FJoinSession> *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x26c,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FJoinSession>,1> *)(*pcVar1)();
    return pTVar5;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return __return_storage_ptr__;
}

// AsShared @ 14ee596d0

TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FKickLobbyMember>,1> * __thiscall
TSharedFromThis<UE::Online::TOnlineAsyncOp<UE::Online::FKickLobbyMember>,1>::AsShared
          (TSharedFromThis<UE::Online::TOnlineAsyncOp<UE::Online::FKickLobbyMember>,1> *this,
          TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FKickLobbyMember>,1>
          *__return_storage_ptr__)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  TOnlineAsyncOp<UE::Online::FKickLobbyMember> *pTVar4;
  TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FKickLobbyMember>,1> *pTVar5;
  TOnlineAsyncOp<UE::Online::FKickLobbyMember> *pTVar6;
  TOnlineAsyncOp<UE::Online::FKickLobbyMember> *pTVar7;
  TOnlineAsyncOp<UE::Online::FKickLobbyMember> *pTVar8;
  bool bVar9;
  
  pTVar4 = (TOnlineAsyncOp<UE::Online::FKickLobbyMember> *)
           (this->WeakThis).WeakReferenceCount.ReferenceController;
  pTVar8 = (TOnlineAsyncOp<UE::Online::FKickLobbyMember> *)0x0;
  pTVar6 = pTVar4;
  pTVar7 = pTVar8;
  if (pTVar4 != (TOnlineAsyncOp<UE::Online::FKickLobbyMember> *)0x0) {
    iVar2 = *(int *)&((FWeakReferencer<1> *)&pTVar4->_padding_)->ReferenceController;
    do {
      pTVar6 = pTVar8;
      pTVar7 = (TOnlineAsyncOp<UE::Online::FKickLobbyMember> *)0x0;
      if (iVar2 == 0) goto LAB_14ee59711;
      LOCK();
      iVar3 = *(int *)&((FWeakReferencer<1> *)&pTVar4->_padding_)->ReferenceController;
      bVar9 = iVar2 == iVar3;
      if (bVar9) {
        *(int *)&((FWeakReferencer<1> *)&pTVar4->_padding_)->ReferenceController = iVar2 + 1;
        iVar3 = iVar2;
      }
      UNLOCK();
      iVar2 = iVar3;
    } while (!bVar9);
    pTVar6 = pTVar4;
    pTVar7 = (this->WeakThis).Object;
  }
LAB_14ee59711:
  pTVar4 = (TOnlineAsyncOp<UE::Online::FKickLobbyMember> *)&pTVar7->_padding_;
  if (pTVar7 == (TOnlineAsyncOp<UE::Online::FKickLobbyMember> *)0x0) {
    pTVar4 = pTVar8;
  }
  if ((pTVar4 != (TOnlineAsyncOp<UE::Online::FKickLobbyMember> *)this) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("SharedThis.Get() == this",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x67f,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FKickLobbyMember>,1> *)(*pcVar1)();
    return pTVar5;
  }
  if ((pTVar7 == (TOnlineAsyncOp<UE::Online::FKickLobbyMember> *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x416,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FKickLobbyMember>,1> *)(*pcVar1)();
    return pTVar5;
  }
  __return_storage_ptr__->Object = pTVar7;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)pTVar6;
  if ((pTVar7 == (TOnlineAsyncOp<UE::Online::FKickLobbyMember> *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x26c,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FKickLobbyMember>,1> *)(*pcVar1)();
    return pTVar5;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return __return_storage_ptr__;
}

// AsShared @ 14ee597e0

TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FLeaveLobby>,1> * __thiscall
TSharedFromThis<UE::Online::TOnlineAsyncOp<UE::Online::FLeaveLobby>,1>::AsShared
          (TSharedFromThis<UE::Online::TOnlineAsyncOp<UE::Online::FLeaveLobby>,1> *this,
          TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FLeaveLobby>,1> *__return_storage_ptr__)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  TOnlineAsyncOp<UE::Online::FLeaveLobby> *pTVar4;
  TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FLeaveLobby>,1> *pTVar5;
  TOnlineAsyncOp<UE::Online::FLeaveLobby> *pTVar6;
  TOnlineAsyncOp<UE::Online::FLeaveLobby> *pTVar7;
  TOnlineAsyncOp<UE::Online::FLeaveLobby> *pTVar8;
  bool bVar9;
  
  pTVar4 = (TOnlineAsyncOp<UE::Online::FLeaveLobby> *)
           (this->WeakThis).WeakReferenceCount.ReferenceController;
  pTVar8 = (TOnlineAsyncOp<UE::Online::FLeaveLobby> *)0x0;
  pTVar6 = pTVar4;
  pTVar7 = pTVar8;
  if (pTVar4 != (TOnlineAsyncOp<UE::Online::FLeaveLobby> *)0x0) {
    iVar2 = *(int *)&((FWeakReferencer<1> *)&pTVar4->_padding_)->ReferenceController;
    do {
      pTVar6 = pTVar8;
      pTVar7 = (TOnlineAsyncOp<UE::Online::FLeaveLobby> *)0x0;
      if (iVar2 == 0) goto LAB_14ee59821;
      LOCK();
      iVar3 = *(int *)&((FWeakReferencer<1> *)&pTVar4->_padding_)->ReferenceController;
      bVar9 = iVar2 == iVar3;
      if (bVar9) {
        *(int *)&((FWeakReferencer<1> *)&pTVar4->_padding_)->ReferenceController = iVar2 + 1;
        iVar3 = iVar2;
      }
      UNLOCK();
      iVar2 = iVar3;
    } while (!bVar9);
    pTVar6 = pTVar4;
    pTVar7 = (this->WeakThis).Object;
  }
LAB_14ee59821:
  pTVar4 = (TOnlineAsyncOp<UE::Online::FLeaveLobby> *)&pTVar7->_padding_;
  if (pTVar7 == (TOnlineAsyncOp<UE::Online::FLeaveLobby> *)0x0) {
    pTVar4 = pTVar8;
  }
  if ((pTVar4 != (TOnlineAsyncOp<UE::Online::FLeaveLobby> *)this) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("SharedThis.Get() == this",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x67f,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FLeaveLobby>,1> *)(*pcVar1)();
    return pTVar5;
  }
  if ((pTVar7 == (TOnlineAsyncOp<UE::Online::FLeaveLobby> *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x416,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FLeaveLobby>,1> *)(*pcVar1)();
    return pTVar5;
  }
  __return_storage_ptr__->Object = pTVar7;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)pTVar6;
  if ((pTVar7 == (TOnlineAsyncOp<UE::Online::FLeaveLobby> *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x26c,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FLeaveLobby>,1> *)(*pcVar1)();
    return pTVar5;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return __return_storage_ptr__;
}

// AsShared @ 14ee598f0

TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FLeaveSession>,1> * __thiscall
TSharedFromThis<UE::Online::TOnlineAsyncOp<UE::Online::FLeaveSession>,1>::AsShared
          (TSharedFromThis<UE::Online::TOnlineAsyncOp<UE::Online::FLeaveSession>,1> *this,
          TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FLeaveSession>,1>
          *__return_storage_ptr__)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  TOnlineAsyncOp<UE::Online::FLeaveSession> *pTVar4;
  TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FLeaveSession>,1> *pTVar5;
  TOnlineAsyncOp<UE::Online::FLeaveSession> *pTVar6;
  TOnlineAsyncOp<UE::Online::FLeaveSession> *pTVar7;
  TOnlineAsyncOp<UE::Online::FLeaveSession> *pTVar8;
  bool bVar9;
  
  pTVar4 = (TOnlineAsyncOp<UE::Online::FLeaveSession> *)
           (this->WeakThis).WeakReferenceCount.ReferenceController;
  pTVar8 = (TOnlineAsyncOp<UE::Online::FLeaveSession> *)0x0;
  pTVar6 = pTVar4;
  pTVar7 = pTVar8;
  if (pTVar4 != (TOnlineAsyncOp<UE::Online::FLeaveSession> *)0x0) {
    iVar2 = *(int *)&((FWeakReferencer<1> *)&pTVar4->_padding_)->ReferenceController;
    do {
      pTVar6 = pTVar8;
      pTVar7 = (TOnlineAsyncOp<UE::Online::FLeaveSession> *)0x0;
      if (iVar2 == 0) goto LAB_14ee59931;
      LOCK();
      iVar3 = *(int *)&((FWeakReferencer<1> *)&pTVar4->_padding_)->ReferenceController;
      bVar9 = iVar2 == iVar3;
      if (bVar9) {
        *(int *)&((FWeakReferencer<1> *)&pTVar4->_padding_)->ReferenceController = iVar2 + 1;
        iVar3 = iVar2;
      }
      UNLOCK();
      iVar2 = iVar3;
    } while (!bVar9);
    pTVar6 = pTVar4;
    pTVar7 = (this->WeakThis).Object;
  }
LAB_14ee59931:
  pTVar4 = (TOnlineAsyncOp<UE::Online::FLeaveSession> *)&pTVar7->_padding_;
  if (pTVar7 == (TOnlineAsyncOp<UE::Online::FLeaveSession> *)0x0) {
    pTVar4 = pTVar8;
  }
  if ((pTVar4 != (TOnlineAsyncOp<UE::Online::FLeaveSession> *)this) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("SharedThis.Get() == this",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x67f,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FLeaveSession>,1> *)(*pcVar1)();
    return pTVar5;
  }
  if ((pTVar7 == (TOnlineAsyncOp<UE::Online::FLeaveSession> *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x416,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FLeaveSession>,1> *)(*pcVar1)();
    return pTVar5;
  }
  __return_storage_ptr__->Object = pTVar7;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)pTVar6;
  if ((pTVar7 == (TOnlineAsyncOp<UE::Online::FLeaveSession> *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x26c,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FLeaveSession>,1> *)(*pcVar1)();
    return pTVar5;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return __return_storage_ptr__;
}

// AsShared @ 14ee59a00

TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FModifyLobbyAttributes>,1> * __thiscall
TSharedFromThis<UE::Online::TOnlineAsyncOp<UE::Online::FModifyLobbyAttributes>,1>::AsShared
          (TSharedFromThis<UE::Online::TOnlineAsyncOp<UE::Online::FModifyLobbyAttributes>,1> *this,
          TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FModifyLobbyAttributes>,1>
          *__return_storage_ptr__)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  TOnlineAsyncOp<UE::Online::FModifyLobbyAttributes> *pTVar4;
  TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FModifyLobbyAttributes>,1> *pTVar5;
  TOnlineAsyncOp<UE::Online::FModifyLobbyAttributes> *pTVar6;
  TOnlineAsyncOp<UE::Online::FModifyLobbyAttributes> *pTVar7;
  TOnlineAsyncOp<UE::Online::FModifyLobbyAttributes> *pTVar8;
  bool bVar9;
  
  pTVar4 = (TOnlineAsyncOp<UE::Online::FModifyLobbyAttributes> *)
           (this->WeakThis).WeakReferenceCount.ReferenceController;
  pTVar8 = (TOnlineAsyncOp<UE::Online::FModifyLobbyAttributes> *)0x0;
  pTVar6 = pTVar4;
  pTVar7 = pTVar8;
  if (pTVar4 != (TOnlineAsyncOp<UE::Online::FModifyLobbyAttributes> *)0x0) {
    iVar2 = *(int *)&((FWeakReferencer<1> *)&pTVar4->_padding_)->ReferenceController;
    do {
      pTVar6 = pTVar8;
      pTVar7 = (TOnlineAsyncOp<UE::Online::FModifyLobbyAttributes> *)0x0;
      if (iVar2 == 0) goto LAB_14ee59a41;
      LOCK();
      iVar3 = *(int *)&((FWeakReferencer<1> *)&pTVar4->_padding_)->ReferenceController;
      bVar9 = iVar2 == iVar3;
      if (bVar9) {
        *(int *)&((FWeakReferencer<1> *)&pTVar4->_padding_)->ReferenceController = iVar2 + 1;
        iVar3 = iVar2;
      }
      UNLOCK();
      iVar2 = iVar3;
    } while (!bVar9);
    pTVar6 = pTVar4;
    pTVar7 = (this->WeakThis).Object;
  }
LAB_14ee59a41:
  pTVar4 = (TOnlineAsyncOp<UE::Online::FModifyLobbyAttributes> *)&pTVar7->_padding_;
  if (pTVar7 == (TOnlineAsyncOp<UE::Online::FModifyLobbyAttributes> *)0x0) {
    pTVar4 = pTVar8;
  }
  if ((pTVar4 != (TOnlineAsyncOp<UE::Online::FModifyLobbyAttributes> *)this) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("SharedThis.Get() == this",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x67f,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FModifyLobbyAttributes>,1> *)
             (*pcVar1)();
    return pTVar5;
  }
  if ((pTVar7 == (TOnlineAsyncOp<UE::Online::FModifyLobbyAttributes> *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x416,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FModifyLobbyAttributes>,1> *)
             (*pcVar1)();
    return pTVar5;
  }
  __return_storage_ptr__->Object = pTVar7;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)pTVar6;
  if ((pTVar7 == (TOnlineAsyncOp<UE::Online::FModifyLobbyAttributes> *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x26c,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FModifyLobbyAttributes>,1> *)
             (*pcVar1)();
    return pTVar5;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return __return_storage_ptr__;
}

// AsShared @ 14ee59b10

TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FModifyLobbyJoinPolicy>,1> * __thiscall
TSharedFromThis<UE::Online::TOnlineAsyncOp<UE::Online::FModifyLobbyJoinPolicy>,1>::AsShared
          (TSharedFromThis<UE::Online::TOnlineAsyncOp<UE::Online::FModifyLobbyJoinPolicy>,1> *this,
          TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FModifyLobbyJoinPolicy>,1>
          *__return_storage_ptr__)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  TOnlineAsyncOp<UE::Online::FModifyLobbyJoinPolicy> *pTVar4;
  TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FModifyLobbyJoinPolicy>,1> *pTVar5;
  TOnlineAsyncOp<UE::Online::FModifyLobbyJoinPolicy> *pTVar6;
  TOnlineAsyncOp<UE::Online::FModifyLobbyJoinPolicy> *pTVar7;
  TOnlineAsyncOp<UE::Online::FModifyLobbyJoinPolicy> *pTVar8;
  bool bVar9;
  
  pTVar4 = (TOnlineAsyncOp<UE::Online::FModifyLobbyJoinPolicy> *)
           (this->WeakThis).WeakReferenceCount.ReferenceController;
  pTVar8 = (TOnlineAsyncOp<UE::Online::FModifyLobbyJoinPolicy> *)0x0;
  pTVar6 = pTVar4;
  pTVar7 = pTVar8;
  if (pTVar4 != (TOnlineAsyncOp<UE::Online::FModifyLobbyJoinPolicy> *)0x0) {
    iVar2 = *(int *)&((FWeakReferencer<1> *)&pTVar4->_padding_)->ReferenceController;
    do {
      pTVar6 = pTVar8;
      pTVar7 = (TOnlineAsyncOp<UE::Online::FModifyLobbyJoinPolicy> *)0x0;
      if (iVar2 == 0) goto LAB_14ee59b51;
      LOCK();
      iVar3 = *(int *)&((FWeakReferencer<1> *)&pTVar4->_padding_)->ReferenceController;
      bVar9 = iVar2 == iVar3;
      if (bVar9) {
        *(int *)&((FWeakReferencer<1> *)&pTVar4->_padding_)->ReferenceController = iVar2 + 1;
        iVar3 = iVar2;
      }
      UNLOCK();
      iVar2 = iVar3;
    } while (!bVar9);
    pTVar6 = pTVar4;
    pTVar7 = (this->WeakThis).Object;
  }
LAB_14ee59b51:
  pTVar4 = (TOnlineAsyncOp<UE::Online::FModifyLobbyJoinPolicy> *)&pTVar7->_padding_;
  if (pTVar7 == (TOnlineAsyncOp<UE::Online::FModifyLobbyJoinPolicy> *)0x0) {
    pTVar4 = pTVar8;
  }
  if ((pTVar4 != (TOnlineAsyncOp<UE::Online::FModifyLobbyJoinPolicy> *)this) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("SharedThis.Get() == this",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x67f,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FModifyLobbyJoinPolicy>,1> *)
             (*pcVar1)();
    return pTVar5;
  }
  if ((pTVar7 == (TOnlineAsyncOp<UE::Online::FModifyLobbyJoinPolicy> *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x416,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FModifyLobbyJoinPolicy>,1> *)
             (*pcVar1)();
    return pTVar5;
  }
  __return_storage_ptr__->Object = pTVar7;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)pTVar6;
  if ((pTVar7 == (TOnlineAsyncOp<UE::Online::FModifyLobbyJoinPolicy> *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x26c,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FModifyLobbyJoinPolicy>,1> *)
             (*pcVar1)();
    return pTVar5;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return __return_storage_ptr__;
}

// AsShared @ 14ee59c20

TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FModifyLobbyMemberAttributes>,1> * __thiscall
TSharedFromThis<UE::Online::TOnlineAsyncOp<UE::Online::FModifyLobbyMemberAttributes>,1>::AsShared
          (TSharedFromThis<UE::Online::TOnlineAsyncOp<UE::Online::FModifyLobbyMemberAttributes>,1>
           *this,TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FModifyLobbyMemberAttributes>,1>
                 *__return_storage_ptr__)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  TOnlineAsyncOp<UE::Online::FModifyLobbyMemberAttributes> *pTVar4;
  TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FModifyLobbyMemberAttributes>,1> *pTVar5;
  TOnlineAsyncOp<UE::Online::FModifyLobbyMemberAttributes> *pTVar6;
  TOnlineAsyncOp<UE::Online::FModifyLobbyMemberAttributes> *pTVar7;
  TOnlineAsyncOp<UE::Online::FModifyLobbyMemberAttributes> *pTVar8;
  bool bVar9;
  
  pTVar4 = (TOnlineAsyncOp<UE::Online::FModifyLobbyMemberAttributes> *)
           (this->WeakThis).WeakReferenceCount.ReferenceController;
  pTVar8 = (TOnlineAsyncOp<UE::Online::FModifyLobbyMemberAttributes> *)0x0;
  pTVar6 = pTVar4;
  pTVar7 = pTVar8;
  if (pTVar4 != (TOnlineAsyncOp<UE::Online::FModifyLobbyMemberAttributes> *)0x0) {
    iVar2 = *(int *)&((FWeakReferencer<1> *)&pTVar4->_padding_)->ReferenceController;
    do {
      pTVar6 = pTVar8;
      pTVar7 = (TOnlineAsyncOp<UE::Online::FModifyLobbyMemberAttributes> *)0x0;
      if (iVar2 == 0) goto LAB_14ee59c61;
      LOCK();
      iVar3 = *(int *)&((FWeakReferencer<1> *)&pTVar4->_padding_)->ReferenceController;
      bVar9 = iVar2 == iVar3;
      if (bVar9) {
        *(int *)&((FWeakReferencer<1> *)&pTVar4->_padding_)->ReferenceController = iVar2 + 1;
        iVar3 = iVar2;
      }
      UNLOCK();
      iVar2 = iVar3;
    } while (!bVar9);
    pTVar6 = pTVar4;
    pTVar7 = (this->WeakThis).Object;
  }
LAB_14ee59c61:
  pTVar4 = (TOnlineAsyncOp<UE::Online::FModifyLobbyMemberAttributes> *)&pTVar7->_padding_;
  if (pTVar7 == (TOnlineAsyncOp<UE::Online::FModifyLobbyMemberAttributes> *)0x0) {
    pTVar4 = pTVar8;
  }
  if ((pTVar4 != (TOnlineAsyncOp<UE::Online::FModifyLobbyMemberAttributes> *)this) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("SharedThis.Get() == this",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x67f,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FModifyLobbyMemberAttributes>,1> *)
             (*pcVar1)();
    return pTVar5;
  }
  if ((pTVar7 == (TOnlineAsyncOp<UE::Online::FModifyLobbyMemberAttributes> *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x416,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FModifyLobbyMemberAttributes>,1> *)
             (*pcVar1)();
    return pTVar5;
  }
  __return_storage_ptr__->Object = pTVar7;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)pTVar6;
  if ((pTVar7 == (TOnlineAsyncOp<UE::Online::FModifyLobbyMemberAttributes> *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x26c,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FModifyLobbyMemberAttributes>,1> *)
             (*pcVar1)();
    return pTVar5;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return __return_storage_ptr__;
}

// AsShared @ 14ee59d30

TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FModifyLobbySchema>,1> * __thiscall
TSharedFromThis<UE::Online::TOnlineAsyncOp<UE::Online::FModifyLobbySchema>,1>::AsShared
          (TSharedFromThis<UE::Online::TOnlineAsyncOp<UE::Online::FModifyLobbySchema>,1> *this,
          TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FModifyLobbySchema>,1>
          *__return_storage_ptr__)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  TOnlineAsyncOp<UE::Online::FModifyLobbySchema> *pTVar4;
  TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FModifyLobbySchema>,1> *pTVar5;
  TOnlineAsyncOp<UE::Online::FModifyLobbySchema> *pTVar6;
  TOnlineAsyncOp<UE::Online::FModifyLobbySchema> *pTVar7;
  TOnlineAsyncOp<UE::Online::FModifyLobbySchema> *pTVar8;
  bool bVar9;
  
  pTVar4 = (TOnlineAsyncOp<UE::Online::FModifyLobbySchema> *)
           (this->WeakThis).WeakReferenceCount.ReferenceController;
  pTVar8 = (TOnlineAsyncOp<UE::Online::FModifyLobbySchema> *)0x0;
  pTVar6 = pTVar4;
  pTVar7 = pTVar8;
  if (pTVar4 != (TOnlineAsyncOp<UE::Online::FModifyLobbySchema> *)0x0) {
    iVar2 = *(int *)&((FWeakReferencer<1> *)&pTVar4->_padding_)->ReferenceController;
    do {
      pTVar6 = pTVar8;
      pTVar7 = (TOnlineAsyncOp<UE::Online::FModifyLobbySchema> *)0x0;
      if (iVar2 == 0) goto LAB_14ee59d71;
      LOCK();
      iVar3 = *(int *)&((FWeakReferencer<1> *)&pTVar4->_padding_)->ReferenceController;
      bVar9 = iVar2 == iVar3;
      if (bVar9) {
        *(int *)&((FWeakReferencer<1> *)&pTVar4->_padding_)->ReferenceController = iVar2 + 1;
        iVar3 = iVar2;
      }
      UNLOCK();
      iVar2 = iVar3;
    } while (!bVar9);
    pTVar6 = pTVar4;
    pTVar7 = (this->WeakThis).Object;
  }
LAB_14ee59d71:
  pTVar4 = (TOnlineAsyncOp<UE::Online::FModifyLobbySchema> *)&pTVar7->_padding_;
  if (pTVar7 == (TOnlineAsyncOp<UE::Online::FModifyLobbySchema> *)0x0) {
    pTVar4 = pTVar8;
  }
  if ((pTVar4 != (TOnlineAsyncOp<UE::Online::FModifyLobbySchema> *)this) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("SharedThis.Get() == this",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x67f,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FModifyLobbySchema>,1> *)(*pcVar1)()
    ;
    return pTVar5;
  }
  if ((pTVar7 == (TOnlineAsyncOp<UE::Online::FModifyLobbySchema> *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x416,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FModifyLobbySchema>,1> *)(*pcVar1)()
    ;
    return pTVar5;
  }
  __return_storage_ptr__->Object = pTVar7;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)pTVar6;
  if ((pTVar7 == (TOnlineAsyncOp<UE::Online::FModifyLobbySchema> *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x26c,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FModifyLobbySchema>,1> *)(*pcVar1)()
    ;
    return pTVar5;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return __return_storage_ptr__;
}

// AsShared @ 14ee59e40

TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FPartialUpdatePresence>,1> * __thiscall
TSharedFromThis<UE::Online::TOnlineAsyncOp<UE::Online::FPartialUpdatePresence>,1>::AsShared
          (TSharedFromThis<UE::Online::TOnlineAsyncOp<UE::Online::FPartialUpdatePresence>,1> *this,
          TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FPartialUpdatePresence>,1>
          *__return_storage_ptr__)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  TOnlineAsyncOp<UE::Online::FPartialUpdatePresence> *pTVar4;
  TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FPartialUpdatePresence>,1> *pTVar5;
  TOnlineAsyncOp<UE::Online::FPartialUpdatePresence> *pTVar6;
  TOnlineAsyncOp<UE::Online::FPartialUpdatePresence> *pTVar7;
  TOnlineAsyncOp<UE::Online::FPartialUpdatePresence> *pTVar8;
  bool bVar9;
  
  pTVar4 = (TOnlineAsyncOp<UE::Online::FPartialUpdatePresence> *)
           (this->WeakThis).WeakReferenceCount.ReferenceController;
  pTVar8 = (TOnlineAsyncOp<UE::Online::FPartialUpdatePresence> *)0x0;
  pTVar6 = pTVar4;
  pTVar7 = pTVar8;
  if (pTVar4 != (TOnlineAsyncOp<UE::Online::FPartialUpdatePresence> *)0x0) {
    iVar2 = *(int *)&((FWeakReferencer<1> *)&pTVar4->_padding_)->ReferenceController;
    do {
      pTVar6 = pTVar8;
      pTVar7 = (TOnlineAsyncOp<UE::Online::FPartialUpdatePresence> *)0x0;
      if (iVar2 == 0) goto LAB_14ee59e81;
      LOCK();
      iVar3 = *(int *)&((FWeakReferencer<1> *)&pTVar4->_padding_)->ReferenceController;
      bVar9 = iVar2 == iVar3;
      if (bVar9) {
        *(int *)&((FWeakReferencer<1> *)&pTVar4->_padding_)->ReferenceController = iVar2 + 1;
        iVar3 = iVar2;
      }
      UNLOCK();
      iVar2 = iVar3;
    } while (!bVar9);
    pTVar6 = pTVar4;
    pTVar7 = (this->WeakThis).Object;
  }
LAB_14ee59e81:
  pTVar4 = (TOnlineAsyncOp<UE::Online::FPartialUpdatePresence> *)&pTVar7->_padding_;
  if (pTVar7 == (TOnlineAsyncOp<UE::Online::FPartialUpdatePresence> *)0x0) {
    pTVar4 = pTVar8;
  }
  if ((pTVar4 != (TOnlineAsyncOp<UE::Online::FPartialUpdatePresence> *)this) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("SharedThis.Get() == this",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x67f,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FPartialUpdatePresence>,1> *)
             (*pcVar1)();
    return pTVar5;
  }
  if ((pTVar7 == (TOnlineAsyncOp<UE::Online::FPartialUpdatePresence> *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x416,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FPartialUpdatePresence>,1> *)
             (*pcVar1)();
    return pTVar5;
  }
  __return_storage_ptr__->Object = pTVar7;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)pTVar6;
  if ((pTVar7 == (TOnlineAsyncOp<UE::Online::FPartialUpdatePresence> *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x26c,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FPartialUpdatePresence>,1> *)
             (*pcVar1)();
    return pTVar5;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return __return_storage_ptr__;
}

// AsShared @ 14ee59f50

TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FPromoteLobbyMember>,1> * __thiscall
TSharedFromThis<UE::Online::TOnlineAsyncOp<UE::Online::FPromoteLobbyMember>,1>::AsShared
          (TSharedFromThis<UE::Online::TOnlineAsyncOp<UE::Online::FPromoteLobbyMember>,1> *this,
          TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FPromoteLobbyMember>,1>
          *__return_storage_ptr__)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  TOnlineAsyncOp<UE::Online::FPromoteLobbyMember> *pTVar4;
  TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FPromoteLobbyMember>,1> *pTVar5;
  TOnlineAsyncOp<UE::Online::FPromoteLobbyMember> *pTVar6;
  TOnlineAsyncOp<UE::Online::FPromoteLobbyMember> *pTVar7;
  TOnlineAsyncOp<UE::Online::FPromoteLobbyMember> *pTVar8;
  bool bVar9;
  
  pTVar4 = (TOnlineAsyncOp<UE::Online::FPromoteLobbyMember> *)
           (this->WeakThis).WeakReferenceCount.ReferenceController;
  pTVar8 = (TOnlineAsyncOp<UE::Online::FPromoteLobbyMember> *)0x0;
  pTVar6 = pTVar4;
  pTVar7 = pTVar8;
  if (pTVar4 != (TOnlineAsyncOp<UE::Online::FPromoteLobbyMember> *)0x0) {
    iVar2 = *(int *)&((FWeakReferencer<1> *)&pTVar4->_padding_)->ReferenceController;
    do {
      pTVar6 = pTVar8;
      pTVar7 = (TOnlineAsyncOp<UE::Online::FPromoteLobbyMember> *)0x0;
      if (iVar2 == 0) goto LAB_14ee59f91;
      LOCK();
      iVar3 = *(int *)&((FWeakReferencer<1> *)&pTVar4->_padding_)->ReferenceController;
      bVar9 = iVar2 == iVar3;
      if (bVar9) {
        *(int *)&((FWeakReferencer<1> *)&pTVar4->_padding_)->ReferenceController = iVar2 + 1;
        iVar3 = iVar2;
      }
      UNLOCK();
      iVar2 = iVar3;
    } while (!bVar9);
    pTVar6 = pTVar4;
    pTVar7 = (this->WeakThis).Object;
  }
LAB_14ee59f91:
  pTVar4 = (TOnlineAsyncOp<UE::Online::FPromoteLobbyMember> *)&pTVar7->_padding_;
  if (pTVar7 == (TOnlineAsyncOp<UE::Online::FPromoteLobbyMember> *)0x0) {
    pTVar4 = pTVar8;
  }
  if ((pTVar4 != (TOnlineAsyncOp<UE::Online::FPromoteLobbyMember> *)this) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("SharedThis.Get() == this",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x67f,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FPromoteLobbyMember>,1> *)
             (*pcVar1)();
    return pTVar5;
  }
  if ((pTVar7 == (TOnlineAsyncOp<UE::Online::FPromoteLobbyMember> *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x416,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FPromoteLobbyMember>,1> *)
             (*pcVar1)();
    return pTVar5;
  }
  __return_storage_ptr__->Object = pTVar7;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)pTVar6;
  if ((pTVar7 == (TOnlineAsyncOp<UE::Online::FPromoteLobbyMember> *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x26c,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FPromoteLobbyMember>,1> *)
             (*pcVar1)();
    return pTVar5;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return __return_storage_ptr__;
}

// AsShared @ 14ee5a060

TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FQueryAchievementDefinitions>,1> * __thiscall
TSharedFromThis<UE::Online::TOnlineAsyncOp<UE::Online::FQueryAchievementDefinitions>,1>::AsShared
          (TSharedFromThis<UE::Online::TOnlineAsyncOp<UE::Online::FQueryAchievementDefinitions>,1>
           *this,TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FQueryAchievementDefinitions>,1>
                 *__return_storage_ptr__)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  TOnlineAsyncOp<UE::Online::FQueryAchievementDefinitions> *pTVar4;
  TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FQueryAchievementDefinitions>,1> *pTVar5;
  TOnlineAsyncOp<UE::Online::FQueryAchievementDefinitions> *pTVar6;
  TOnlineAsyncOp<UE::Online::FQueryAchievementDefinitions> *pTVar7;
  TOnlineAsyncOp<UE::Online::FQueryAchievementDefinitions> *pTVar8;
  bool bVar9;
  
  pTVar4 = (TOnlineAsyncOp<UE::Online::FQueryAchievementDefinitions> *)
           (this->WeakThis).WeakReferenceCount.ReferenceController;
  pTVar8 = (TOnlineAsyncOp<UE::Online::FQueryAchievementDefinitions> *)0x0;
  pTVar6 = pTVar4;
  pTVar7 = pTVar8;
  if (pTVar4 != (TOnlineAsyncOp<UE::Online::FQueryAchievementDefinitions> *)0x0) {
    iVar2 = *(int *)&((FWeakReferencer<1> *)&pTVar4->_padding_)->ReferenceController;
    do {
      pTVar6 = pTVar8;
      pTVar7 = (TOnlineAsyncOp<UE::Online::FQueryAchievementDefinitions> *)0x0;
      if (iVar2 == 0) goto LAB_14ee5a0a1;
      LOCK();
      iVar3 = *(int *)&((FWeakReferencer<1> *)&pTVar4->_padding_)->ReferenceController;
      bVar9 = iVar2 == iVar3;
      if (bVar9) {
        *(int *)&((FWeakReferencer<1> *)&pTVar4->_padding_)->ReferenceController = iVar2 + 1;
        iVar3 = iVar2;
      }
      UNLOCK();
      iVar2 = iVar3;
    } while (!bVar9);
    pTVar6 = pTVar4;
    pTVar7 = (this->WeakThis).Object;
  }
LAB_14ee5a0a1:
  pTVar4 = (TOnlineAsyncOp<UE::Online::FQueryAchievementDefinitions> *)&pTVar7->_padding_;
  if (pTVar7 == (TOnlineAsyncOp<UE::Online::FQueryAchievementDefinitions> *)0x0) {
    pTVar4 = pTVar8;
  }
  if ((pTVar4 != (TOnlineAsyncOp<UE::Online::FQueryAchievementDefinitions> *)this) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("SharedThis.Get() == this",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x67f,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FQueryAchievementDefinitions>,1> *)
             (*pcVar1)();
    return pTVar5;
  }
  if ((pTVar7 == (TOnlineAsyncOp<UE::Online::FQueryAchievementDefinitions> *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x416,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FQueryAchievementDefinitions>,1> *)
             (*pcVar1)();
    return pTVar5;
  }
  __return_storage_ptr__->Object = pTVar7;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)pTVar6;
  if ((pTVar7 == (TOnlineAsyncOp<UE::Online::FQueryAchievementDefinitions> *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x26c,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FQueryAchievementDefinitions>,1> *)
             (*pcVar1)();
    return pTVar5;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return __return_storage_ptr__;
}

// AsShared @ 14ee5a170

TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FQueryAchievementStates>,1> * __thiscall
TSharedFromThis<UE::Online::TOnlineAsyncOp<UE::Online::FQueryAchievementStates>,1>::AsShared
          (TSharedFromThis<UE::Online::TOnlineAsyncOp<UE::Online::FQueryAchievementStates>,1> *this,
          TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FQueryAchievementStates>,1>
          *__return_storage_ptr__)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  TOnlineAsyncOp<UE::Online::FQueryAchievementStates> *pTVar4;
  TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FQueryAchievementStates>,1> *pTVar5;
  TOnlineAsyncOp<UE::Online::FQueryAchievementStates> *pTVar6;
  TOnlineAsyncOp<UE::Online::FQueryAchievementStates> *pTVar7;
  TOnlineAsyncOp<UE::Online::FQueryAchievementStates> *pTVar8;
  bool bVar9;
  
  pTVar4 = (TOnlineAsyncOp<UE::Online::FQueryAchievementStates> *)
           (this->WeakThis).WeakReferenceCount.ReferenceController;
  pTVar8 = (TOnlineAsyncOp<UE::Online::FQueryAchievementStates> *)0x0;
  pTVar6 = pTVar4;
  pTVar7 = pTVar8;
  if (pTVar4 != (TOnlineAsyncOp<UE::Online::FQueryAchievementStates> *)0x0) {
    iVar2 = *(int *)&((FWeakReferencer<1> *)&pTVar4->_padding_)->ReferenceController;
    do {
      pTVar6 = pTVar8;
      pTVar7 = (TOnlineAsyncOp<UE::Online::FQueryAchievementStates> *)0x0;
      if (iVar2 == 0) goto LAB_14ee5a1b1;
      LOCK();
      iVar3 = *(int *)&((FWeakReferencer<1> *)&pTVar4->_padding_)->ReferenceController;
      bVar9 = iVar2 == iVar3;
      if (bVar9) {
        *(int *)&((FWeakReferencer<1> *)&pTVar4->_padding_)->ReferenceController = iVar2 + 1;
        iVar3 = iVar2;
      }
      UNLOCK();
      iVar2 = iVar3;
    } while (!bVar9);
    pTVar6 = pTVar4;
    pTVar7 = (this->WeakThis).Object;
  }
LAB_14ee5a1b1:
  pTVar4 = (TOnlineAsyncOp<UE::Online::FQueryAchievementStates> *)&pTVar7->_padding_;
  if (pTVar7 == (TOnlineAsyncOp<UE::Online::FQueryAchievementStates> *)0x0) {
    pTVar4 = pTVar8;
  }
  if ((pTVar4 != (TOnlineAsyncOp<UE::Online::FQueryAchievementStates> *)this) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("SharedThis.Get() == this",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x67f,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FQueryAchievementStates>,1> *)
             (*pcVar1)();
    return pTVar5;
  }
  if ((pTVar7 == (TOnlineAsyncOp<UE::Online::FQueryAchievementStates> *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x416,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FQueryAchievementStates>,1> *)
             (*pcVar1)();
    return pTVar5;
  }
  __return_storage_ptr__->Object = pTVar7;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)pTVar6;
  if ((pTVar7 == (TOnlineAsyncOp<UE::Online::FQueryAchievementStates> *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x26c,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FQueryAchievementStates>,1> *)
             (*pcVar1)();
    return pTVar5;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return __return_storage_ptr__;
}

// AsShared @ 14ee5a280

TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FQueryPresence>,1> * __thiscall
TSharedFromThis<UE::Online::TOnlineAsyncOp<UE::Online::FQueryPresence>,1>::AsShared
          (TSharedFromThis<UE::Online::TOnlineAsyncOp<UE::Online::FQueryPresence>,1> *this,
          TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FQueryPresence>,1>
          *__return_storage_ptr__)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  TOnlineAsyncOp<UE::Online::FQueryPresence> *pTVar4;
  TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FQueryPresence>,1> *pTVar5;
  TOnlineAsyncOp<UE::Online::FQueryPresence> *pTVar6;
  TOnlineAsyncOp<UE::Online::FQueryPresence> *pTVar7;
  TOnlineAsyncOp<UE::Online::FQueryPresence> *pTVar8;
  bool bVar9;
  
  pTVar4 = (TOnlineAsyncOp<UE::Online::FQueryPresence> *)
           (this->WeakThis).WeakReferenceCount.ReferenceController;
  pTVar8 = (TOnlineAsyncOp<UE::Online::FQueryPresence> *)0x0;
  pTVar6 = pTVar4;
  pTVar7 = pTVar8;
  if (pTVar4 != (TOnlineAsyncOp<UE::Online::FQueryPresence> *)0x0) {
    iVar2 = *(int *)&((FWeakReferencer<1> *)&pTVar4->_padding_)->ReferenceController;
    do {
      pTVar6 = pTVar8;
      pTVar7 = (TOnlineAsyncOp<UE::Online::FQueryPresence> *)0x0;
      if (iVar2 == 0) goto LAB_14ee5a2c1;
      LOCK();
      iVar3 = *(int *)&((FWeakReferencer<1> *)&pTVar4->_padding_)->ReferenceController;
      bVar9 = iVar2 == iVar3;
      if (bVar9) {
        *(int *)&((FWeakReferencer<1> *)&pTVar4->_padding_)->ReferenceController = iVar2 + 1;
        iVar3 = iVar2;
      }
      UNLOCK();
      iVar2 = iVar3;
    } while (!bVar9);
    pTVar6 = pTVar4;
    pTVar7 = (this->WeakThis).Object;
  }
LAB_14ee5a2c1:
  pTVar4 = (TOnlineAsyncOp<UE::Online::FQueryPresence> *)&pTVar7->_padding_;
  if (pTVar7 == (TOnlineAsyncOp<UE::Online::FQueryPresence> *)0x0) {
    pTVar4 = pTVar8;
  }
  if ((pTVar4 != (TOnlineAsyncOp<UE::Online::FQueryPresence> *)this) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("SharedThis.Get() == this",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x67f,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FQueryPresence>,1> *)(*pcVar1)();
    return pTVar5;
  }
  if ((pTVar7 == (TOnlineAsyncOp<UE::Online::FQueryPresence> *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x416,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FQueryPresence>,1> *)(*pcVar1)();
    return pTVar5;
  }
  __return_storage_ptr__->Object = pTVar7;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)pTVar6;
  if ((pTVar7 == (TOnlineAsyncOp<UE::Online::FQueryPresence> *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x26c,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FQueryPresence>,1> *)(*pcVar1)();
    return pTVar5;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return __return_storage_ptr__;
}

// AsShared @ 14ee5a390

TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FQueryUserPrivilege>,1> * __thiscall
TSharedFromThis<UE::Online::TOnlineAsyncOp<UE::Online::FQueryUserPrivilege>,1>::AsShared
          (TSharedFromThis<UE::Online::TOnlineAsyncOp<UE::Online::FQueryUserPrivilege>,1> *this,
          TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FQueryUserPrivilege>,1>
          *__return_storage_ptr__)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  TOnlineAsyncOp<UE::Online::FQueryUserPrivilege> *pTVar4;
  TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FQueryUserPrivilege>,1> *pTVar5;
  TOnlineAsyncOp<UE::Online::FQueryUserPrivilege> *pTVar6;
  TOnlineAsyncOp<UE::Online::FQueryUserPrivilege> *pTVar7;
  TOnlineAsyncOp<UE::Online::FQueryUserPrivilege> *pTVar8;
  bool bVar9;
  
  pTVar4 = (TOnlineAsyncOp<UE::Online::FQueryUserPrivilege> *)
           (this->WeakThis).WeakReferenceCount.ReferenceController;
  pTVar8 = (TOnlineAsyncOp<UE::Online::FQueryUserPrivilege> *)0x0;
  pTVar6 = pTVar4;
  pTVar7 = pTVar8;
  if (pTVar4 != (TOnlineAsyncOp<UE::Online::FQueryUserPrivilege> *)0x0) {
    iVar2 = *(int *)&((FWeakReferencer<1> *)&pTVar4->_padding_)->ReferenceController;
    do {
      pTVar6 = pTVar8;
      pTVar7 = (TOnlineAsyncOp<UE::Online::FQueryUserPrivilege> *)0x0;
      if (iVar2 == 0) goto LAB_14ee5a3d1;
      LOCK();
      iVar3 = *(int *)&((FWeakReferencer<1> *)&pTVar4->_padding_)->ReferenceController;
      bVar9 = iVar2 == iVar3;
      if (bVar9) {
        *(int *)&((FWeakReferencer<1> *)&pTVar4->_padding_)->ReferenceController = iVar2 + 1;
        iVar3 = iVar2;
      }
      UNLOCK();
      iVar2 = iVar3;
    } while (!bVar9);
    pTVar6 = pTVar4;
    pTVar7 = (this->WeakThis).Object;
  }
LAB_14ee5a3d1:
  pTVar4 = (TOnlineAsyncOp<UE::Online::FQueryUserPrivilege> *)&pTVar7->_padding_;
  if (pTVar7 == (TOnlineAsyncOp<UE::Online::FQueryUserPrivilege> *)0x0) {
    pTVar4 = pTVar8;
  }
  if ((pTVar4 != (TOnlineAsyncOp<UE::Online::FQueryUserPrivilege> *)this) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("SharedThis.Get() == this",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x67f,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FQueryUserPrivilege>,1> *)
             (*pcVar1)();
    return pTVar5;
  }
  if ((pTVar7 == (TOnlineAsyncOp<UE::Online::FQueryUserPrivilege> *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x416,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FQueryUserPrivilege>,1> *)
             (*pcVar1)();
    return pTVar5;
  }
  __return_storage_ptr__->Object = pTVar7;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)pTVar6;
  if ((pTVar7 == (TOnlineAsyncOp<UE::Online::FQueryUserPrivilege> *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x26c,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FQueryUserPrivilege>,1> *)
             (*pcVar1)();
    return pTVar5;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return __return_storage_ptr__;
}

// AsShared @ 14ee5a4a0

TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FReadEntriesAroundRank>,1> * __thiscall
TSharedFromThis<UE::Online::TOnlineAsyncOp<UE::Online::FReadEntriesAroundRank>,1>::AsShared
          (TSharedFromThis<UE::Online::TOnlineAsyncOp<UE::Online::FReadEntriesAroundRank>,1> *this,
          TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FReadEntriesAroundRank>,1>
          *__return_storage_ptr__)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  TOnlineAsyncOp<UE::Online::FReadEntriesAroundRank> *pTVar4;
  TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FReadEntriesAroundRank>,1> *pTVar5;
  TOnlineAsyncOp<UE::Online::FReadEntriesAroundRank> *pTVar6;
  TOnlineAsyncOp<UE::Online::FReadEntriesAroundRank> *pTVar7;
  TOnlineAsyncOp<UE::Online::FReadEntriesAroundRank> *pTVar8;
  bool bVar9;
  
  pTVar4 = (TOnlineAsyncOp<UE::Online::FReadEntriesAroundRank> *)
           (this->WeakThis).WeakReferenceCount.ReferenceController;
  pTVar8 = (TOnlineAsyncOp<UE::Online::FReadEntriesAroundRank> *)0x0;
  pTVar6 = pTVar4;
  pTVar7 = pTVar8;
  if (pTVar4 != (TOnlineAsyncOp<UE::Online::FReadEntriesAroundRank> *)0x0) {
    iVar2 = *(int *)&((FWeakReferencer<1> *)&pTVar4->_padding_)->ReferenceController;
    do {
      pTVar6 = pTVar8;
      pTVar7 = (TOnlineAsyncOp<UE::Online::FReadEntriesAroundRank> *)0x0;
      if (iVar2 == 0) goto LAB_14ee5a4e1;
      LOCK();
      iVar3 = *(int *)&((FWeakReferencer<1> *)&pTVar4->_padding_)->ReferenceController;
      bVar9 = iVar2 == iVar3;
      if (bVar9) {
        *(int *)&((FWeakReferencer<1> *)&pTVar4->_padding_)->ReferenceController = iVar2 + 1;
        iVar3 = iVar2;
      }
      UNLOCK();
      iVar2 = iVar3;
    } while (!bVar9);
    pTVar6 = pTVar4;
    pTVar7 = (this->WeakThis).Object;
  }
LAB_14ee5a4e1:
  pTVar4 = (TOnlineAsyncOp<UE::Online::FReadEntriesAroundRank> *)&pTVar7->_padding_;
  if (pTVar7 == (TOnlineAsyncOp<UE::Online::FReadEntriesAroundRank> *)0x0) {
    pTVar4 = pTVar8;
  }
  if ((pTVar4 != (TOnlineAsyncOp<UE::Online::FReadEntriesAroundRank> *)this) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("SharedThis.Get() == this",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x67f,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FReadEntriesAroundRank>,1> *)
             (*pcVar1)();
    return pTVar5;
  }
  if ((pTVar7 == (TOnlineAsyncOp<UE::Online::FReadEntriesAroundRank> *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x416,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FReadEntriesAroundRank>,1> *)
             (*pcVar1)();
    return pTVar5;
  }
  __return_storage_ptr__->Object = pTVar7;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)pTVar6;
  if ((pTVar7 == (TOnlineAsyncOp<UE::Online::FReadEntriesAroundRank> *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x26c,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FReadEntriesAroundRank>,1> *)
             (*pcVar1)();
    return pTVar5;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return __return_storage_ptr__;
}

// AsShared @ 14ee5a5b0

TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FReadEntriesAroundUser>,1> * __thiscall
TSharedFromThis<UE::Online::TOnlineAsyncOp<UE::Online::FReadEntriesAroundUser>,1>::AsShared
          (TSharedFromThis<UE::Online::TOnlineAsyncOp<UE::Online::FReadEntriesAroundUser>,1> *this,
          TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FReadEntriesAroundUser>,1>
          *__return_storage_ptr__)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  TOnlineAsyncOp<UE::Online::FReadEntriesAroundUser> *pTVar4;
  TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FReadEntriesAroundUser>,1> *pTVar5;
  TOnlineAsyncOp<UE::Online::FReadEntriesAroundUser> *pTVar6;
  TOnlineAsyncOp<UE::Online::FReadEntriesAroundUser> *pTVar7;
  TOnlineAsyncOp<UE::Online::FReadEntriesAroundUser> *pTVar8;
  bool bVar9;
  
  pTVar4 = (TOnlineAsyncOp<UE::Online::FReadEntriesAroundUser> *)
           (this->WeakThis).WeakReferenceCount.ReferenceController;
  pTVar8 = (TOnlineAsyncOp<UE::Online::FReadEntriesAroundUser> *)0x0;
  pTVar6 = pTVar4;
  pTVar7 = pTVar8;
  if (pTVar4 != (TOnlineAsyncOp<UE::Online::FReadEntriesAroundUser> *)0x0) {
    iVar2 = *(int *)&((FWeakReferencer<1> *)&pTVar4->_padding_)->ReferenceController;
    do {
      pTVar6 = pTVar8;
      pTVar7 = (TOnlineAsyncOp<UE::Online::FReadEntriesAroundUser> *)0x0;
      if (iVar2 == 0) goto LAB_14ee5a5f1;
      LOCK();
      iVar3 = *(int *)&((FWeakReferencer<1> *)&pTVar4->_padding_)->ReferenceController;
      bVar9 = iVar2 == iVar3;
      if (bVar9) {
        *(int *)&((FWeakReferencer<1> *)&pTVar4->_padding_)->ReferenceController = iVar2 + 1;
        iVar3 = iVar2;
      }
      UNLOCK();
      iVar2 = iVar3;
    } while (!bVar9);
    pTVar6 = pTVar4;
    pTVar7 = (this->WeakThis).Object;
  }
LAB_14ee5a5f1:
  pTVar4 = (TOnlineAsyncOp<UE::Online::FReadEntriesAroundUser> *)&pTVar7->_padding_;
  if (pTVar7 == (TOnlineAsyncOp<UE::Online::FReadEntriesAroundUser> *)0x0) {
    pTVar4 = pTVar8;
  }
  if ((pTVar4 != (TOnlineAsyncOp<UE::Online::FReadEntriesAroundUser> *)this) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("SharedThis.Get() == this",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x67f,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FReadEntriesAroundUser>,1> *)
             (*pcVar1)();
    return pTVar5;
  }
  if ((pTVar7 == (TOnlineAsyncOp<UE::Online::FReadEntriesAroundUser> *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x416,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FReadEntriesAroundUser>,1> *)
             (*pcVar1)();
    return pTVar5;
  }
  __return_storage_ptr__->Object = pTVar7;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)pTVar6;
  if ((pTVar7 == (TOnlineAsyncOp<UE::Online::FReadEntriesAroundUser> *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x26c,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FReadEntriesAroundUser>,1> *)
             (*pcVar1)();
    return pTVar5;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return __return_storage_ptr__;
}

// AsShared @ 14ee5a6c0

TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FReadEntriesForUsers>,1> * __thiscall
TSharedFromThis<UE::Online::TOnlineAsyncOp<UE::Online::FReadEntriesForUsers>,1>::AsShared
          (TSharedFromThis<UE::Online::TOnlineAsyncOp<UE::Online::FReadEntriesForUsers>,1> *this,
          TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FReadEntriesForUsers>,1>
          *__return_storage_ptr__)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  TOnlineAsyncOp<UE::Online::FReadEntriesForUsers> *pTVar4;
  TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FReadEntriesForUsers>,1> *pTVar5;
  TOnlineAsyncOp<UE::Online::FReadEntriesForUsers> *pTVar6;
  TOnlineAsyncOp<UE::Online::FReadEntriesForUsers> *pTVar7;
  TOnlineAsyncOp<UE::Online::FReadEntriesForUsers> *pTVar8;
  bool bVar9;
  
  pTVar4 = (TOnlineAsyncOp<UE::Online::FReadEntriesForUsers> *)
           (this->WeakThis).WeakReferenceCount.ReferenceController;
  pTVar8 = (TOnlineAsyncOp<UE::Online::FReadEntriesForUsers> *)0x0;
  pTVar6 = pTVar4;
  pTVar7 = pTVar8;
  if (pTVar4 != (TOnlineAsyncOp<UE::Online::FReadEntriesForUsers> *)0x0) {
    iVar2 = *(int *)&((FWeakReferencer<1> *)&pTVar4->_padding_)->ReferenceController;
    do {
      pTVar6 = pTVar8;
      pTVar7 = (TOnlineAsyncOp<UE::Online::FReadEntriesForUsers> *)0x0;
      if (iVar2 == 0) goto LAB_14ee5a701;
      LOCK();
      iVar3 = *(int *)&((FWeakReferencer<1> *)&pTVar4->_padding_)->ReferenceController;
      bVar9 = iVar2 == iVar3;
      if (bVar9) {
        *(int *)&((FWeakReferencer<1> *)&pTVar4->_padding_)->ReferenceController = iVar2 + 1;
        iVar3 = iVar2;
      }
      UNLOCK();
      iVar2 = iVar3;
    } while (!bVar9);
    pTVar6 = pTVar4;
    pTVar7 = (this->WeakThis).Object;
  }
LAB_14ee5a701:
  pTVar4 = (TOnlineAsyncOp<UE::Online::FReadEntriesForUsers> *)&pTVar7->_padding_;
  if (pTVar7 == (TOnlineAsyncOp<UE::Online::FReadEntriesForUsers> *)0x0) {
    pTVar4 = pTVar8;
  }
  if ((pTVar4 != (TOnlineAsyncOp<UE::Online::FReadEntriesForUsers> *)this) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("SharedThis.Get() == this",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x67f,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FReadEntriesForUsers>,1> *)
             (*pcVar1)();
    return pTVar5;
  }
  if ((pTVar7 == (TOnlineAsyncOp<UE::Online::FReadEntriesForUsers> *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x416,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FReadEntriesForUsers>,1> *)
             (*pcVar1)();
    return pTVar5;
  }
  __return_storage_ptr__->Object = pTVar7;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)pTVar6;
  if ((pTVar7 == (TOnlineAsyncOp<UE::Online::FReadEntriesForUsers> *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x26c,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FReadEntriesForUsers>,1> *)
             (*pcVar1)();
    return pTVar5;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return __return_storage_ptr__;
}

// AsShared @ 14ee5a7d0

TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FRejectSessionInvite>,1> * __thiscall
TSharedFromThis<UE::Online::TOnlineAsyncOp<UE::Online::FRejectSessionInvite>,1>::AsShared
          (TSharedFromThis<UE::Online::TOnlineAsyncOp<UE::Online::FRejectSessionInvite>,1> *this,
          TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FRejectSessionInvite>,1>
          *__return_storage_ptr__)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  TOnlineAsyncOp<UE::Online::FRejectSessionInvite> *pTVar4;
  TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FRejectSessionInvite>,1> *pTVar5;
  TOnlineAsyncOp<UE::Online::FRejectSessionInvite> *pTVar6;
  TOnlineAsyncOp<UE::Online::FRejectSessionInvite> *pTVar7;
  TOnlineAsyncOp<UE::Online::FRejectSessionInvite> *pTVar8;
  bool bVar9;
  
  pTVar4 = (TOnlineAsyncOp<UE::Online::FRejectSessionInvite> *)
           (this->WeakThis).WeakReferenceCount.ReferenceController;
  pTVar8 = (TOnlineAsyncOp<UE::Online::FRejectSessionInvite> *)0x0;
  pTVar6 = pTVar4;
  pTVar7 = pTVar8;
  if (pTVar4 != (TOnlineAsyncOp<UE::Online::FRejectSessionInvite> *)0x0) {
    iVar2 = *(int *)&((FWeakReferencer<1> *)&pTVar4->_padding_)->ReferenceController;
    do {
      pTVar6 = pTVar8;
      pTVar7 = (TOnlineAsyncOp<UE::Online::FRejectSessionInvite> *)0x0;
      if (iVar2 == 0) goto LAB_14ee5a811;
      LOCK();
      iVar3 = *(int *)&((FWeakReferencer<1> *)&pTVar4->_padding_)->ReferenceController;
      bVar9 = iVar2 == iVar3;
      if (bVar9) {
        *(int *)&((FWeakReferencer<1> *)&pTVar4->_padding_)->ReferenceController = iVar2 + 1;
        iVar3 = iVar2;
      }
      UNLOCK();
      iVar2 = iVar3;
    } while (!bVar9);
    pTVar6 = pTVar4;
    pTVar7 = (this->WeakThis).Object;
  }
LAB_14ee5a811:
  pTVar4 = (TOnlineAsyncOp<UE::Online::FRejectSessionInvite> *)&pTVar7->_padding_;
  if (pTVar7 == (TOnlineAsyncOp<UE::Online::FRejectSessionInvite> *)0x0) {
    pTVar4 = pTVar8;
  }
  if ((pTVar4 != (TOnlineAsyncOp<UE::Online::FRejectSessionInvite> *)this) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("SharedThis.Get() == this",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x67f,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FRejectSessionInvite>,1> *)
             (*pcVar1)();
    return pTVar5;
  }
  if ((pTVar7 == (TOnlineAsyncOp<UE::Online::FRejectSessionInvite> *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x416,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FRejectSessionInvite>,1> *)
             (*pcVar1)();
    return pTVar5;
  }
  __return_storage_ptr__->Object = pTVar7;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)pTVar6;
  if ((pTVar7 == (TOnlineAsyncOp<UE::Online::FRejectSessionInvite> *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x26c,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FRejectSessionInvite>,1> *)
             (*pcVar1)();
    return pTVar5;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return __return_storage_ptr__;
}

// AsShared @ 14ee5a8e0

TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FRemoveSessionMember>,1> * __thiscall
TSharedFromThis<UE::Online::TOnlineAsyncOp<UE::Online::FRemoveSessionMember>,1>::AsShared
          (TSharedFromThis<UE::Online::TOnlineAsyncOp<UE::Online::FRemoveSessionMember>,1> *this,
          TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FRemoveSessionMember>,1>
          *__return_storage_ptr__)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  TOnlineAsyncOp<UE::Online::FRemoveSessionMember> *pTVar4;
  TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FRemoveSessionMember>,1> *pTVar5;
  TOnlineAsyncOp<UE::Online::FRemoveSessionMember> *pTVar6;
  TOnlineAsyncOp<UE::Online::FRemoveSessionMember> *pTVar7;
  TOnlineAsyncOp<UE::Online::FRemoveSessionMember> *pTVar8;
  bool bVar9;
  
  pTVar4 = (TOnlineAsyncOp<UE::Online::FRemoveSessionMember> *)
           (this->WeakThis).WeakReferenceCount.ReferenceController;
  pTVar8 = (TOnlineAsyncOp<UE::Online::FRemoveSessionMember> *)0x0;
  pTVar6 = pTVar4;
  pTVar7 = pTVar8;
  if (pTVar4 != (TOnlineAsyncOp<UE::Online::FRemoveSessionMember> *)0x0) {
    iVar2 = *(int *)&((FWeakReferencer<1> *)&pTVar4->_padding_)->ReferenceController;
    do {
      pTVar6 = pTVar8;
      pTVar7 = (TOnlineAsyncOp<UE::Online::FRemoveSessionMember> *)0x0;
      if (iVar2 == 0) goto LAB_14ee5a921;
      LOCK();
      iVar3 = *(int *)&((FWeakReferencer<1> *)&pTVar4->_padding_)->ReferenceController;
      bVar9 = iVar2 == iVar3;
      if (bVar9) {
        *(int *)&((FWeakReferencer<1> *)&pTVar4->_padding_)->ReferenceController = iVar2 + 1;
        iVar3 = iVar2;
      }
      UNLOCK();
      iVar2 = iVar3;
    } while (!bVar9);
    pTVar6 = pTVar4;
    pTVar7 = (this->WeakThis).Object;
  }
LAB_14ee5a921:
  pTVar4 = (TOnlineAsyncOp<UE::Online::FRemoveSessionMember> *)&pTVar7->_padding_;
  if (pTVar7 == (TOnlineAsyncOp<UE::Online::FRemoveSessionMember> *)0x0) {
    pTVar4 = pTVar8;
  }
  if ((pTVar4 != (TOnlineAsyncOp<UE::Online::FRemoveSessionMember> *)this) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("SharedThis.Get() == this",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x67f,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FRemoveSessionMember>,1> *)
             (*pcVar1)();
    return pTVar5;
  }
  if ((pTVar7 == (TOnlineAsyncOp<UE::Online::FRemoveSessionMember> *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x416,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FRemoveSessionMember>,1> *)
             (*pcVar1)();
    return pTVar5;
  }
  __return_storage_ptr__->Object = pTVar7;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)pTVar6;
  if ((pTVar7 == (TOnlineAsyncOp<UE::Online::FRemoveSessionMember> *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x26c,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FRemoveSessionMember>,1> *)
             (*pcVar1)();
    return pTVar5;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return __return_storage_ptr__;
}

// AsShared @ 14ee5a9f0

TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FRestoreLobbies>,1> * __thiscall
TSharedFromThis<UE::Online::TOnlineAsyncOp<UE::Online::FRestoreLobbies>,1>::AsShared
          (TSharedFromThis<UE::Online::TOnlineAsyncOp<UE::Online::FRestoreLobbies>,1> *this,
          TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FRestoreLobbies>,1>
          *__return_storage_ptr__)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  TOnlineAsyncOp<UE::Online::FRestoreLobbies> *pTVar4;
  TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FRestoreLobbies>,1> *pTVar5;
  TOnlineAsyncOp<UE::Online::FRestoreLobbies> *pTVar6;
  TOnlineAsyncOp<UE::Online::FRestoreLobbies> *pTVar7;
  TOnlineAsyncOp<UE::Online::FRestoreLobbies> *pTVar8;
  bool bVar9;
  
  pTVar4 = (TOnlineAsyncOp<UE::Online::FRestoreLobbies> *)
           (this->WeakThis).WeakReferenceCount.ReferenceController;
  pTVar8 = (TOnlineAsyncOp<UE::Online::FRestoreLobbies> *)0x0;
  pTVar6 = pTVar4;
  pTVar7 = pTVar8;
  if (pTVar4 != (TOnlineAsyncOp<UE::Online::FRestoreLobbies> *)0x0) {
    iVar2 = *(int *)&((FWeakReferencer<1> *)&pTVar4->_padding_)->ReferenceController;
    do {
      pTVar6 = pTVar8;
      pTVar7 = (TOnlineAsyncOp<UE::Online::FRestoreLobbies> *)0x0;
      if (iVar2 == 0) goto LAB_14ee5aa31;
      LOCK();
      iVar3 = *(int *)&((FWeakReferencer<1> *)&pTVar4->_padding_)->ReferenceController;
      bVar9 = iVar2 == iVar3;
      if (bVar9) {
        *(int *)&((FWeakReferencer<1> *)&pTVar4->_padding_)->ReferenceController = iVar2 + 1;
        iVar3 = iVar2;
      }
      UNLOCK();
      iVar2 = iVar3;
    } while (!bVar9);
    pTVar6 = pTVar4;
    pTVar7 = (this->WeakThis).Object;
  }
LAB_14ee5aa31:
  pTVar4 = (TOnlineAsyncOp<UE::Online::FRestoreLobbies> *)&pTVar7->_padding_;
  if (pTVar7 == (TOnlineAsyncOp<UE::Online::FRestoreLobbies> *)0x0) {
    pTVar4 = pTVar8;
  }
  if ((pTVar4 != (TOnlineAsyncOp<UE::Online::FRestoreLobbies> *)this) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("SharedThis.Get() == this",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x67f,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FRestoreLobbies>,1> *)(*pcVar1)();
    return pTVar5;
  }
  if ((pTVar7 == (TOnlineAsyncOp<UE::Online::FRestoreLobbies> *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x416,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FRestoreLobbies>,1> *)(*pcVar1)();
    return pTVar5;
  }
  __return_storage_ptr__->Object = pTVar7;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)pTVar6;
  if ((pTVar7 == (TOnlineAsyncOp<UE::Online::FRestoreLobbies> *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x26c,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FRestoreLobbies>,1> *)(*pcVar1)();
    return pTVar5;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return __return_storage_ptr__;
}

// AsShared @ 14ee5ab00

TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FSendSessionInvite>,1> * __thiscall
TSharedFromThis<UE::Online::TOnlineAsyncOp<UE::Online::FSendSessionInvite>,1>::AsShared
          (TSharedFromThis<UE::Online::TOnlineAsyncOp<UE::Online::FSendSessionInvite>,1> *this,
          TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FSendSessionInvite>,1>
          *__return_storage_ptr__)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  TOnlineAsyncOp<UE::Online::FSendSessionInvite> *pTVar4;
  TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FSendSessionInvite>,1> *pTVar5;
  TOnlineAsyncOp<UE::Online::FSendSessionInvite> *pTVar6;
  TOnlineAsyncOp<UE::Online::FSendSessionInvite> *pTVar7;
  TOnlineAsyncOp<UE::Online::FSendSessionInvite> *pTVar8;
  bool bVar9;
  
  pTVar4 = (TOnlineAsyncOp<UE::Online::FSendSessionInvite> *)
           (this->WeakThis).WeakReferenceCount.ReferenceController;
  pTVar8 = (TOnlineAsyncOp<UE::Online::FSendSessionInvite> *)0x0;
  pTVar6 = pTVar4;
  pTVar7 = pTVar8;
  if (pTVar4 != (TOnlineAsyncOp<UE::Online::FSendSessionInvite> *)0x0) {
    iVar2 = *(int *)&((FWeakReferencer<1> *)&pTVar4->_padding_)->ReferenceController;
    do {
      pTVar6 = pTVar8;
      pTVar7 = (TOnlineAsyncOp<UE::Online::FSendSessionInvite> *)0x0;
      if (iVar2 == 0) goto LAB_14ee5ab41;
      LOCK();
      iVar3 = *(int *)&((FWeakReferencer<1> *)&pTVar4->_padding_)->ReferenceController;
      bVar9 = iVar2 == iVar3;
      if (bVar9) {
        *(int *)&((FWeakReferencer<1> *)&pTVar4->_padding_)->ReferenceController = iVar2 + 1;
        iVar3 = iVar2;
      }
      UNLOCK();
      iVar2 = iVar3;
    } while (!bVar9);
    pTVar6 = pTVar4;
    pTVar7 = (this->WeakThis).Object;
  }
LAB_14ee5ab41:
  pTVar4 = (TOnlineAsyncOp<UE::Online::FSendSessionInvite> *)&pTVar7->_padding_;
  if (pTVar7 == (TOnlineAsyncOp<UE::Online::FSendSessionInvite> *)0x0) {
    pTVar4 = pTVar8;
  }
  if ((pTVar4 != (TOnlineAsyncOp<UE::Online::FSendSessionInvite> *)this) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("SharedThis.Get() == this",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x67f,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FSendSessionInvite>,1> *)(*pcVar1)()
    ;
    return pTVar5;
  }
  if ((pTVar7 == (TOnlineAsyncOp<UE::Online::FSendSessionInvite> *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x416,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FSendSessionInvite>,1> *)(*pcVar1)()
    ;
    return pTVar5;
  }
  __return_storage_ptr__->Object = pTVar7;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)pTVar6;
  if ((pTVar7 == (TOnlineAsyncOp<UE::Online::FSendSessionInvite> *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x26c,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FSendSessionInvite>,1> *)(*pcVar1)()
    ;
    return pTVar5;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return __return_storage_ptr__;
}

// AsShared @ 14ee5ac10

TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FStartMatchmaking>,1> * __thiscall
TSharedFromThis<UE::Online::TOnlineAsyncOp<UE::Online::FStartMatchmaking>,1>::AsShared
          (TSharedFromThis<UE::Online::TOnlineAsyncOp<UE::Online::FStartMatchmaking>,1> *this,
          TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FStartMatchmaking>,1>
          *__return_storage_ptr__)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  TOnlineAsyncOp<UE::Online::FStartMatchmaking> *pTVar4;
  TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FStartMatchmaking>,1> *pTVar5;
  TOnlineAsyncOp<UE::Online::FStartMatchmaking> *pTVar6;
  TOnlineAsyncOp<UE::Online::FStartMatchmaking> *pTVar7;
  TOnlineAsyncOp<UE::Online::FStartMatchmaking> *pTVar8;
  bool bVar9;
  
  pTVar4 = (TOnlineAsyncOp<UE::Online::FStartMatchmaking> *)
           (this->WeakThis).WeakReferenceCount.ReferenceController;
  pTVar8 = (TOnlineAsyncOp<UE::Online::FStartMatchmaking> *)0x0;
  pTVar6 = pTVar4;
  pTVar7 = pTVar8;
  if (pTVar4 != (TOnlineAsyncOp<UE::Online::FStartMatchmaking> *)0x0) {
    iVar2 = *(int *)&((FWeakReferencer<1> *)&pTVar4->_padding_)->ReferenceController;
    do {
      pTVar6 = pTVar8;
      pTVar7 = (TOnlineAsyncOp<UE::Online::FStartMatchmaking> *)0x0;
      if (iVar2 == 0) goto LAB_14ee5ac51;
      LOCK();
      iVar3 = *(int *)&((FWeakReferencer<1> *)&pTVar4->_padding_)->ReferenceController;
      bVar9 = iVar2 == iVar3;
      if (bVar9) {
        *(int *)&((FWeakReferencer<1> *)&pTVar4->_padding_)->ReferenceController = iVar2 + 1;
        iVar3 = iVar2;
      }
      UNLOCK();
      iVar2 = iVar3;
    } while (!bVar9);
    pTVar6 = pTVar4;
    pTVar7 = (this->WeakThis).Object;
  }
LAB_14ee5ac51:
  pTVar4 = (TOnlineAsyncOp<UE::Online::FStartMatchmaking> *)&pTVar7->_padding_;
  if (pTVar7 == (TOnlineAsyncOp<UE::Online::FStartMatchmaking> *)0x0) {
    pTVar4 = pTVar8;
  }
  if ((pTVar4 != (TOnlineAsyncOp<UE::Online::FStartMatchmaking> *)this) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("SharedThis.Get() == this",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x67f,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FStartMatchmaking>,1> *)(*pcVar1)();
    return pTVar5;
  }
  if ((pTVar7 == (TOnlineAsyncOp<UE::Online::FStartMatchmaking> *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x416,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FStartMatchmaking>,1> *)(*pcVar1)();
    return pTVar5;
  }
  __return_storage_ptr__->Object = pTVar7;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)pTVar6;
  if ((pTVar7 == (TOnlineAsyncOp<UE::Online::FStartMatchmaking> *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x26c,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FStartMatchmaking>,1> *)(*pcVar1)();
    return pTVar5;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return __return_storage_ptr__;
}

// AsShared @ 14ee5ad20

TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FUnlockAchievements>,1> * __thiscall
TSharedFromThis<UE::Online::TOnlineAsyncOp<UE::Online::FUnlockAchievements>,1>::AsShared
          (TSharedFromThis<UE::Online::TOnlineAsyncOp<UE::Online::FUnlockAchievements>,1> *this,
          TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FUnlockAchievements>,1>
          *__return_storage_ptr__)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  TOnlineAsyncOp<UE::Online::FUnlockAchievements> *pTVar4;
  TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FUnlockAchievements>,1> *pTVar5;
  TOnlineAsyncOp<UE::Online::FUnlockAchievements> *pTVar6;
  TOnlineAsyncOp<UE::Online::FUnlockAchievements> *pTVar7;
  TOnlineAsyncOp<UE::Online::FUnlockAchievements> *pTVar8;
  bool bVar9;
  
  pTVar4 = (TOnlineAsyncOp<UE::Online::FUnlockAchievements> *)
           (this->WeakThis).WeakReferenceCount.ReferenceController;
  pTVar8 = (TOnlineAsyncOp<UE::Online::FUnlockAchievements> *)0x0;
  pTVar6 = pTVar4;
  pTVar7 = pTVar8;
  if (pTVar4 != (TOnlineAsyncOp<UE::Online::FUnlockAchievements> *)0x0) {
    iVar2 = *(int *)&((FWeakReferencer<1> *)&pTVar4->_padding_)->ReferenceController;
    do {
      pTVar6 = pTVar8;
      pTVar7 = (TOnlineAsyncOp<UE::Online::FUnlockAchievements> *)0x0;
      if (iVar2 == 0) goto LAB_14ee5ad61;
      LOCK();
      iVar3 = *(int *)&((FWeakReferencer<1> *)&pTVar4->_padding_)->ReferenceController;
      bVar9 = iVar2 == iVar3;
      if (bVar9) {
        *(int *)&((FWeakReferencer<1> *)&pTVar4->_padding_)->ReferenceController = iVar2 + 1;
        iVar3 = iVar2;
      }
      UNLOCK();
      iVar2 = iVar3;
    } while (!bVar9);
    pTVar6 = pTVar4;
    pTVar7 = (this->WeakThis).Object;
  }
LAB_14ee5ad61:
  pTVar4 = (TOnlineAsyncOp<UE::Online::FUnlockAchievements> *)&pTVar7->_padding_;
  if (pTVar7 == (TOnlineAsyncOp<UE::Online::FUnlockAchievements> *)0x0) {
    pTVar4 = pTVar8;
  }
  if ((pTVar4 != (TOnlineAsyncOp<UE::Online::FUnlockAchievements> *)this) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("SharedThis.Get() == this",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x67f,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FUnlockAchievements>,1> *)
             (*pcVar1)();
    return pTVar5;
  }
  if ((pTVar7 == (TOnlineAsyncOp<UE::Online::FUnlockAchievements> *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x416,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FUnlockAchievements>,1> *)
             (*pcVar1)();
    return pTVar5;
  }
  __return_storage_ptr__->Object = pTVar7;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)pTVar6;
  if ((pTVar7 == (TOnlineAsyncOp<UE::Online::FUnlockAchievements> *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x26c,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FUnlockAchievements>,1> *)
             (*pcVar1)();
    return pTVar5;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return __return_storage_ptr__;
}

// AsShared @ 14ee5ae30

TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FUpdatePresence>,1> * __thiscall
TSharedFromThis<UE::Online::TOnlineAsyncOp<UE::Online::FUpdatePresence>,1>::AsShared
          (TSharedFromThis<UE::Online::TOnlineAsyncOp<UE::Online::FUpdatePresence>,1> *this,
          TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FUpdatePresence>,1>
          *__return_storage_ptr__)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  TOnlineAsyncOp<UE::Online::FUpdatePresence> *pTVar4;
  TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FUpdatePresence>,1> *pTVar5;
  TOnlineAsyncOp<UE::Online::FUpdatePresence> *pTVar6;
  TOnlineAsyncOp<UE::Online::FUpdatePresence> *pTVar7;
  TOnlineAsyncOp<UE::Online::FUpdatePresence> *pTVar8;
  bool bVar9;
  
  pTVar4 = (TOnlineAsyncOp<UE::Online::FUpdatePresence> *)
           (this->WeakThis).WeakReferenceCount.ReferenceController;
  pTVar8 = (TOnlineAsyncOp<UE::Online::FUpdatePresence> *)0x0;
  pTVar6 = pTVar4;
  pTVar7 = pTVar8;
  if (pTVar4 != (TOnlineAsyncOp<UE::Online::FUpdatePresence> *)0x0) {
    iVar2 = *(int *)&((FWeakReferencer<1> *)&pTVar4->_padding_)->ReferenceController;
    do {
      pTVar6 = pTVar8;
      pTVar7 = (TOnlineAsyncOp<UE::Online::FUpdatePresence> *)0x0;
      if (iVar2 == 0) goto LAB_14ee5ae71;
      LOCK();
      iVar3 = *(int *)&((FWeakReferencer<1> *)&pTVar4->_padding_)->ReferenceController;
      bVar9 = iVar2 == iVar3;
      if (bVar9) {
        *(int *)&((FWeakReferencer<1> *)&pTVar4->_padding_)->ReferenceController = iVar2 + 1;
        iVar3 = iVar2;
      }
      UNLOCK();
      iVar2 = iVar3;
    } while (!bVar9);
    pTVar6 = pTVar4;
    pTVar7 = (this->WeakThis).Object;
  }
LAB_14ee5ae71:
  pTVar4 = (TOnlineAsyncOp<UE::Online::FUpdatePresence> *)&pTVar7->_padding_;
  if (pTVar7 == (TOnlineAsyncOp<UE::Online::FUpdatePresence> *)0x0) {
    pTVar4 = pTVar8;
  }
  if ((pTVar4 != (TOnlineAsyncOp<UE::Online::FUpdatePresence> *)this) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("SharedThis.Get() == this",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x67f,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FUpdatePresence>,1> *)(*pcVar1)();
    return pTVar5;
  }
  if ((pTVar7 == (TOnlineAsyncOp<UE::Online::FUpdatePresence> *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x416,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FUpdatePresence>,1> *)(*pcVar1)();
    return pTVar5;
  }
  __return_storage_ptr__->Object = pTVar7;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)pTVar6;
  if ((pTVar7 == (TOnlineAsyncOp<UE::Online::FUpdatePresence> *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x26c,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FUpdatePresence>,1> *)(*pcVar1)();
    return pTVar5;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return __return_storage_ptr__;
}

// AsShared @ 14ee5af40

TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FUpdateSessionSettings>,1> * __thiscall
TSharedFromThis<UE::Online::TOnlineAsyncOp<UE::Online::FUpdateSessionSettings>,1>::AsShared
          (TSharedFromThis<UE::Online::TOnlineAsyncOp<UE::Online::FUpdateSessionSettings>,1> *this,
          TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FUpdateSessionSettings>,1>
          *__return_storage_ptr__)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  TOnlineAsyncOp<UE::Online::FUpdateSessionSettings> *pTVar4;
  TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FUpdateSessionSettings>,1> *pTVar5;
  TOnlineAsyncOp<UE::Online::FUpdateSessionSettings> *pTVar6;
  TOnlineAsyncOp<UE::Online::FUpdateSessionSettings> *pTVar7;
  TOnlineAsyncOp<UE::Online::FUpdateSessionSettings> *pTVar8;
  bool bVar9;
  
  pTVar4 = (TOnlineAsyncOp<UE::Online::FUpdateSessionSettings> *)
           (this->WeakThis).WeakReferenceCount.ReferenceController;
  pTVar8 = (TOnlineAsyncOp<UE::Online::FUpdateSessionSettings> *)0x0;
  pTVar6 = pTVar4;
  pTVar7 = pTVar8;
  if (pTVar4 != (TOnlineAsyncOp<UE::Online::FUpdateSessionSettings> *)0x0) {
    iVar2 = *(int *)&((FWeakReferencer<1> *)&pTVar4->_padding_)->ReferenceController;
    do {
      pTVar6 = pTVar8;
      pTVar7 = (TOnlineAsyncOp<UE::Online::FUpdateSessionSettings> *)0x0;
      if (iVar2 == 0) goto LAB_14ee5af81;
      LOCK();
      iVar3 = *(int *)&((FWeakReferencer<1> *)&pTVar4->_padding_)->ReferenceController;
      bVar9 = iVar2 == iVar3;
      if (bVar9) {
        *(int *)&((FWeakReferencer<1> *)&pTVar4->_padding_)->ReferenceController = iVar2 + 1;
        iVar3 = iVar2;
      }
      UNLOCK();
      iVar2 = iVar3;
    } while (!bVar9);
    pTVar6 = pTVar4;
    pTVar7 = (this->WeakThis).Object;
  }
LAB_14ee5af81:
  pTVar4 = (TOnlineAsyncOp<UE::Online::FUpdateSessionSettings> *)&pTVar7->_padding_;
  if (pTVar7 == (TOnlineAsyncOp<UE::Online::FUpdateSessionSettings> *)0x0) {
    pTVar4 = pTVar8;
  }
  if ((pTVar4 != (TOnlineAsyncOp<UE::Online::FUpdateSessionSettings> *)this) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("SharedThis.Get() == this",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x67f,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FUpdateSessionSettings>,1> *)
             (*pcVar1)();
    return pTVar5;
  }
  if ((pTVar7 == (TOnlineAsyncOp<UE::Online::FUpdateSessionSettings> *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x416,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FUpdateSessionSettings>,1> *)
             (*pcVar1)();
    return pTVar5;
  }
  __return_storage_ptr__->Object = pTVar7;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)pTVar6;
  if ((pTVar7 == (TOnlineAsyncOp<UE::Online::FUpdateSessionSettings> *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x26c,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FUpdateSessionSettings>,1> *)
             (*pcVar1)();
    return pTVar5;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return __return_storage_ptr__;
}

// AsShared @ 14ee5b050

TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FWriteLeaderboardScores>,1> * __thiscall
TSharedFromThis<UE::Online::TOnlineAsyncOp<UE::Online::FWriteLeaderboardScores>,1>::AsShared
          (TSharedFromThis<UE::Online::TOnlineAsyncOp<UE::Online::FWriteLeaderboardScores>,1> *this,
          TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FWriteLeaderboardScores>,1>
          *__return_storage_ptr__)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  TOnlineAsyncOp<UE::Online::FWriteLeaderboardScores> *pTVar4;
  TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FWriteLeaderboardScores>,1> *pTVar5;
  TOnlineAsyncOp<UE::Online::FWriteLeaderboardScores> *pTVar6;
  TOnlineAsyncOp<UE::Online::FWriteLeaderboardScores> *pTVar7;
  TOnlineAsyncOp<UE::Online::FWriteLeaderboardScores> *pTVar8;
  bool bVar9;
  
  pTVar4 = (TOnlineAsyncOp<UE::Online::FWriteLeaderboardScores> *)
           (this->WeakThis).WeakReferenceCount.ReferenceController;
  pTVar8 = (TOnlineAsyncOp<UE::Online::FWriteLeaderboardScores> *)0x0;
  pTVar6 = pTVar4;
  pTVar7 = pTVar8;
  if (pTVar4 != (TOnlineAsyncOp<UE::Online::FWriteLeaderboardScores> *)0x0) {
    iVar2 = *(int *)&((FWeakReferencer<1> *)&pTVar4->_padding_)->ReferenceController;
    do {
      pTVar6 = pTVar8;
      pTVar7 = (TOnlineAsyncOp<UE::Online::FWriteLeaderboardScores> *)0x0;
      if (iVar2 == 0) goto LAB_14ee5b091;
      LOCK();
      iVar3 = *(int *)&((FWeakReferencer<1> *)&pTVar4->_padding_)->ReferenceController;
      bVar9 = iVar2 == iVar3;
      if (bVar9) {
        *(int *)&((FWeakReferencer<1> *)&pTVar4->_padding_)->ReferenceController = iVar2 + 1;
        iVar3 = iVar2;
      }
      UNLOCK();
      iVar2 = iVar3;
    } while (!bVar9);
    pTVar6 = pTVar4;
    pTVar7 = (this->WeakThis).Object;
  }
LAB_14ee5b091:
  pTVar4 = (TOnlineAsyncOp<UE::Online::FWriteLeaderboardScores> *)&pTVar7->_padding_;
  if (pTVar7 == (TOnlineAsyncOp<UE::Online::FWriteLeaderboardScores> *)0x0) {
    pTVar4 = pTVar8;
  }
  if ((pTVar4 != (TOnlineAsyncOp<UE::Online::FWriteLeaderboardScores> *)this) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("SharedThis.Get() == this",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x67f,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FWriteLeaderboardScores>,1> *)
             (*pcVar1)();
    return pTVar5;
  }
  if ((pTVar7 == (TOnlineAsyncOp<UE::Online::FWriteLeaderboardScores> *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x416,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FWriteLeaderboardScores>,1> *)
             (*pcVar1)();
    return pTVar5;
  }
  __return_storage_ptr__->Object = pTVar7;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)pTVar6;
  if ((pTVar7 == (TOnlineAsyncOp<UE::Online::FWriteLeaderboardScores> *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x26c,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FWriteLeaderboardScores>,1> *)
             (*pcVar1)();
    return pTVar5;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return __return_storage_ptr__;
}

// AsShared @ 14ee5b160

TSharedRef<UE::Online::IOnlineServices,1> * __thiscall
TSharedFromThis<UE::Online::IOnlineServices,1>::AsShared
          (TSharedFromThis<UE::Online::IOnlineServices,1> *this,
          TSharedRef<UE::Online::IOnlineServices,1> *__return_storage_ptr__)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  IOnlineServices *pIVar4;
  TSharedRef<UE::Online::IOnlineServices,1> *pTVar5;
  IOnlineServices *pIVar6;
  IOnlineServices *pIVar7;
  IOnlineServices *pIVar8;
  bool bVar9;
  
  pIVar4 = (IOnlineServices *)(this->WeakThis).WeakReferenceCount.ReferenceController;
  pIVar8 = (IOnlineServices *)0x0;
  pIVar6 = pIVar4;
  pIVar7 = pIVar8;
  if (pIVar4 != (IOnlineServices *)0x0) {
    iVar2 = *(int *)&((FWeakReferencer<1> *)&pIVar4->field_0x8)->ReferenceController;
    do {
      pIVar6 = pIVar8;
      pIVar7 = (IOnlineServices *)0x0;
      if (iVar2 == 0) goto LAB_14ee5b1a1;
      LOCK();
      iVar3 = *(int *)&((FWeakReferencer<1> *)&pIVar4->field_0x8)->ReferenceController;
      bVar9 = iVar2 == iVar3;
      if (bVar9) {
        *(int *)&((FWeakReferencer<1> *)&pIVar4->field_0x8)->ReferenceController = iVar2 + 1;
        iVar3 = iVar2;
      }
      UNLOCK();
      iVar2 = iVar3;
    } while (!bVar9);
    pIVar6 = pIVar4;
    pIVar7 = (this->WeakThis).Object;
  }
LAB_14ee5b1a1:
  pIVar4 = (IOnlineServices *)&pIVar7->field_0x8;
  if (pIVar7 == (IOnlineServices *)0x0) {
    pIVar4 = pIVar8;
  }
  if ((pIVar4 != (IOnlineServices *)this) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("SharedThis.Get() == this",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x67f,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<UE::Online::IOnlineServices,1> *)(*pcVar1)();
    return pTVar5;
  }
  if ((pIVar7 == (IOnlineServices *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x416,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<UE::Online::IOnlineServices,1> *)(*pcVar1)();
    return pTVar5;
  }
  __return_storage_ptr__->Object = pIVar7;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)pIVar6;
  if ((pIVar7 == (IOnlineServices *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x26c,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<UE::Online::IOnlineServices,1> *)(*pcVar1)();
    return pTVar5;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return __return_storage_ptr__;
}

// AsWeak @ 14ee5b270

TWeakPtr<UE::Online::IOnlineServices,1> * __thiscall
TSharedFromThis<UE::Online::IOnlineServices,1>::AsWeak
          (TSharedFromThis<UE::Online::IOnlineServices,1> *this,
          TWeakPtr<UE::Online::IOnlineServices,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  atomic<int> aVar3;
  atomic<int> aVar4;
  IOnlineServices *pIVar5;
  TWeakPtr<UE::Online::IOnlineServices,1> *pTVar6;
  IOnlineServices *pIVar7;
  bool bVar8;
  
  __return_storage_ptr__->Object = (this->WeakThis).Object;
  pTVar1 = (this->WeakThis).WeakReferenceCount.ReferenceController;
  (__return_storage_ptr__->WeakReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
    UNLOCK();
  }
  pTVar1 = (__return_storage_ptr__->WeakReferenceCount).ReferenceController;
  pIVar7 = (IOnlineServices *)0x0;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    aVar3 = pTVar1->SharedReferenceCount;
    do {
      if (aVar3 == (atomic<int>)0x0) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)0x0);
        goto LAB_14ee5b2e7;
      }
      LOCK();
      aVar4 = pTVar1->SharedReferenceCount;
      bVar8 = aVar3 == aVar4;
      if (bVar8) {
        pTVar1->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar4 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar4;
    } while (!bVar8);
    pIVar7 = __return_storage_ptr__->Object;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  pIVar5 = (IOnlineServices *)
           &((TWeakPtr<UE::Online::IOnlineServices,1> *)&pIVar7->field_0x0)->WeakReferenceCount;
  if (pIVar7 == (IOnlineServices *)0x0) {
    pIVar5 = (IOnlineServices *)0x0;
  }
  if (pIVar5 != (IOnlineServices *)this) {
LAB_14ee5b2e7:
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Result.Pin().Get() == this",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x6c3,L"");
    if (bVar8) {
      pcVar2 = (code *)swi(3);
      pTVar6 = (TWeakPtr<UE::Online::IOnlineServices,1> *)(*pcVar2)();
      return pTVar6;
    }
  }
  return __return_storage_ptr__;
}

// AsShared @ 14ef850c0

TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FAcceptFriendInvite>,1> * __thiscall
TSharedFromThis<UE::Online::TOnlineAsyncOp<UE::Online::FAcceptFriendInvite>,1>::AsShared
          (TSharedFromThis<UE::Online::TOnlineAsyncOp<UE::Online::FAcceptFriendInvite>,1> *this,
          TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FAcceptFriendInvite>,1>
          *__return_storage_ptr__)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  TOnlineAsyncOp<UE::Online::FAcceptFriendInvite> *pTVar4;
  TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FAcceptFriendInvite>,1> *pTVar5;
  TOnlineAsyncOp<UE::Online::FAcceptFriendInvite> *pTVar6;
  TOnlineAsyncOp<UE::Online::FAcceptFriendInvite> *pTVar7;
  TOnlineAsyncOp<UE::Online::FAcceptFriendInvite> *pTVar8;
  bool bVar9;
  
  pTVar4 = (TOnlineAsyncOp<UE::Online::FAcceptFriendInvite> *)
           (this->WeakThis).WeakReferenceCount.ReferenceController;
  pTVar8 = (TOnlineAsyncOp<UE::Online::FAcceptFriendInvite> *)0x0;
  pTVar6 = pTVar4;
  pTVar7 = pTVar8;
  if (pTVar4 != (TOnlineAsyncOp<UE::Online::FAcceptFriendInvite> *)0x0) {
    iVar2 = *(int *)&((FWeakReferencer<1> *)&pTVar4->_padding_)->ReferenceController;
    do {
      pTVar6 = pTVar8;
      pTVar7 = (TOnlineAsyncOp<UE::Online::FAcceptFriendInvite> *)0x0;
      if (iVar2 == 0) goto LAB_14ef85101;
      LOCK();
      iVar3 = *(int *)&((FWeakReferencer<1> *)&pTVar4->_padding_)->ReferenceController;
      bVar9 = iVar2 == iVar3;
      if (bVar9) {
        *(int *)&((FWeakReferencer<1> *)&pTVar4->_padding_)->ReferenceController = iVar2 + 1;
        iVar3 = iVar2;
      }
      UNLOCK();
      iVar2 = iVar3;
    } while (!bVar9);
    pTVar6 = pTVar4;
    pTVar7 = (this->WeakThis).Object;
  }
LAB_14ef85101:
  pTVar4 = (TOnlineAsyncOp<UE::Online::FAcceptFriendInvite> *)&pTVar7->_padding_;
  if (pTVar7 == (TOnlineAsyncOp<UE::Online::FAcceptFriendInvite> *)0x0) {
    pTVar4 = pTVar8;
  }
  if ((pTVar4 != (TOnlineAsyncOp<UE::Online::FAcceptFriendInvite> *)this) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("SharedThis.Get() == this",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x67f,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FAcceptFriendInvite>,1> *)
             (*pcVar1)();
    return pTVar5;
  }
  if ((pTVar7 == (TOnlineAsyncOp<UE::Online::FAcceptFriendInvite> *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x416,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FAcceptFriendInvite>,1> *)
             (*pcVar1)();
    return pTVar5;
  }
  __return_storage_ptr__->Object = pTVar7;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)pTVar6;
  if ((pTVar7 == (TOnlineAsyncOp<UE::Online::FAcceptFriendInvite> *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x26c,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FAcceptFriendInvite>,1> *)
             (*pcVar1)();
    return pTVar5;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return __return_storage_ptr__;
}

// AsShared @ 14ef851d0

TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FBatchQueryStats>,1> * __thiscall
TSharedFromThis<UE::Online::TOnlineAsyncOp<UE::Online::FBatchQueryStats>,1>::AsShared
          (TSharedFromThis<UE::Online::TOnlineAsyncOp<UE::Online::FBatchQueryStats>,1> *this,
          TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FBatchQueryStats>,1>
          *__return_storage_ptr__)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  TOnlineAsyncOp<UE::Online::FBatchQueryStats> *pTVar4;
  TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FBatchQueryStats>,1> *pTVar5;
  TOnlineAsyncOp<UE::Online::FBatchQueryStats> *pTVar6;
  TOnlineAsyncOp<UE::Online::FBatchQueryStats> *pTVar7;
  TOnlineAsyncOp<UE::Online::FBatchQueryStats> *pTVar8;
  bool bVar9;
  
  pTVar4 = (TOnlineAsyncOp<UE::Online::FBatchQueryStats> *)
           (this->WeakThis).WeakReferenceCount.ReferenceController;
  pTVar8 = (TOnlineAsyncOp<UE::Online::FBatchQueryStats> *)0x0;
  pTVar6 = pTVar4;
  pTVar7 = pTVar8;
  if (pTVar4 != (TOnlineAsyncOp<UE::Online::FBatchQueryStats> *)0x0) {
    iVar2 = *(int *)&((FWeakReferencer<1> *)&pTVar4->_padding_)->ReferenceController;
    do {
      pTVar6 = pTVar8;
      pTVar7 = (TOnlineAsyncOp<UE::Online::FBatchQueryStats> *)0x0;
      if (iVar2 == 0) goto LAB_14ef85211;
      LOCK();
      iVar3 = *(int *)&((FWeakReferencer<1> *)&pTVar4->_padding_)->ReferenceController;
      bVar9 = iVar2 == iVar3;
      if (bVar9) {
        *(int *)&((FWeakReferencer<1> *)&pTVar4->_padding_)->ReferenceController = iVar2 + 1;
        iVar3 = iVar2;
      }
      UNLOCK();
      iVar2 = iVar3;
    } while (!bVar9);
    pTVar6 = pTVar4;
    pTVar7 = (this->WeakThis).Object;
  }
LAB_14ef85211:
  pTVar4 = (TOnlineAsyncOp<UE::Online::FBatchQueryStats> *)&pTVar7->_padding_;
  if (pTVar7 == (TOnlineAsyncOp<UE::Online::FBatchQueryStats> *)0x0) {
    pTVar4 = pTVar8;
  }
  if ((pTVar4 != (TOnlineAsyncOp<UE::Online::FBatchQueryStats> *)this) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("SharedThis.Get() == this",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x67f,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FBatchQueryStats>,1> *)(*pcVar1)();
    return pTVar5;
  }
  if ((pTVar7 == (TOnlineAsyncOp<UE::Online::FBatchQueryStats> *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x416,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FBatchQueryStats>,1> *)(*pcVar1)();
    return pTVar5;
  }
  __return_storage_ptr__->Object = pTVar7;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)pTVar6;
  if ((pTVar7 == (TOnlineAsyncOp<UE::Online::FBatchQueryStats> *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x26c,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FBatchQueryStats>,1> *)(*pcVar1)();
    return pTVar5;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return __return_storage_ptr__;
}

// AsShared @ 14ef852e0

TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FBlockUser>,1> * __thiscall
TSharedFromThis<UE::Online::TOnlineAsyncOp<UE::Online::FBlockUser>,1>::AsShared
          (TSharedFromThis<UE::Online::TOnlineAsyncOp<UE::Online::FBlockUser>,1> *this,
          TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FBlockUser>,1> *__return_storage_ptr__)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  TOnlineAsyncOp<UE::Online::FBlockUser> *pTVar4;
  TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FBlockUser>,1> *pTVar5;
  TOnlineAsyncOp<UE::Online::FBlockUser> *pTVar6;
  TOnlineAsyncOp<UE::Online::FBlockUser> *pTVar7;
  TOnlineAsyncOp<UE::Online::FBlockUser> *pTVar8;
  bool bVar9;
  
  pTVar4 = (TOnlineAsyncOp<UE::Online::FBlockUser> *)
           (this->WeakThis).WeakReferenceCount.ReferenceController;
  pTVar8 = (TOnlineAsyncOp<UE::Online::FBlockUser> *)0x0;
  pTVar6 = pTVar4;
  pTVar7 = pTVar8;
  if (pTVar4 != (TOnlineAsyncOp<UE::Online::FBlockUser> *)0x0) {
    iVar2 = *(int *)&((FWeakReferencer<1> *)&pTVar4->_padding_)->ReferenceController;
    do {
      pTVar6 = pTVar8;
      pTVar7 = (TOnlineAsyncOp<UE::Online::FBlockUser> *)0x0;
      if (iVar2 == 0) goto LAB_14ef85321;
      LOCK();
      iVar3 = *(int *)&((FWeakReferencer<1> *)&pTVar4->_padding_)->ReferenceController;
      bVar9 = iVar2 == iVar3;
      if (bVar9) {
        *(int *)&((FWeakReferencer<1> *)&pTVar4->_padding_)->ReferenceController = iVar2 + 1;
        iVar3 = iVar2;
      }
      UNLOCK();
      iVar2 = iVar3;
    } while (!bVar9);
    pTVar6 = pTVar4;
    pTVar7 = (this->WeakThis).Object;
  }
LAB_14ef85321:
  pTVar4 = (TOnlineAsyncOp<UE::Online::FBlockUser> *)&pTVar7->_padding_;
  if (pTVar7 == (TOnlineAsyncOp<UE::Online::FBlockUser> *)0x0) {
    pTVar4 = pTVar8;
  }
  if ((pTVar4 != (TOnlineAsyncOp<UE::Online::FBlockUser> *)this) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("SharedThis.Get() == this",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x67f,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FBlockUser>,1> *)(*pcVar1)();
    return pTVar5;
  }
  if ((pTVar7 == (TOnlineAsyncOp<UE::Online::FBlockUser> *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x416,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FBlockUser>,1> *)(*pcVar1)();
    return pTVar5;
  }
  __return_storage_ptr__->Object = pTVar7;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)pTVar6;
  if ((pTVar7 == (TOnlineAsyncOp<UE::Online::FBlockUser> *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x26c,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FBlockUser>,1> *)(*pcVar1)();
    return pTVar5;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return __return_storage_ptr__;
}

// AsShared @ 14ef853f0

TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FQueryBlockedUsers>,1> * __thiscall
TSharedFromThis<UE::Online::TOnlineAsyncOp<UE::Online::FQueryBlockedUsers>,1>::AsShared
          (TSharedFromThis<UE::Online::TOnlineAsyncOp<UE::Online::FQueryBlockedUsers>,1> *this,
          TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FQueryBlockedUsers>,1>
          *__return_storage_ptr__)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  TOnlineAsyncOp<UE::Online::FQueryBlockedUsers> *pTVar4;
  TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FQueryBlockedUsers>,1> *pTVar5;
  TOnlineAsyncOp<UE::Online::FQueryBlockedUsers> *pTVar6;
  TOnlineAsyncOp<UE::Online::FQueryBlockedUsers> *pTVar7;
  TOnlineAsyncOp<UE::Online::FQueryBlockedUsers> *pTVar8;
  bool bVar9;
  
  pTVar4 = (TOnlineAsyncOp<UE::Online::FQueryBlockedUsers> *)
           (this->WeakThis).WeakReferenceCount.ReferenceController;
  pTVar8 = (TOnlineAsyncOp<UE::Online::FQueryBlockedUsers> *)0x0;
  pTVar6 = pTVar4;
  pTVar7 = pTVar8;
  if (pTVar4 != (TOnlineAsyncOp<UE::Online::FQueryBlockedUsers> *)0x0) {
    iVar2 = *(int *)&((FWeakReferencer<1> *)&pTVar4->_padding_)->ReferenceController;
    do {
      pTVar6 = pTVar8;
      pTVar7 = (TOnlineAsyncOp<UE::Online::FQueryBlockedUsers> *)0x0;
      if (iVar2 == 0) goto LAB_14ef85431;
      LOCK();
      iVar3 = *(int *)&((FWeakReferencer<1> *)&pTVar4->_padding_)->ReferenceController;
      bVar9 = iVar2 == iVar3;
      if (bVar9) {
        *(int *)&((FWeakReferencer<1> *)&pTVar4->_padding_)->ReferenceController = iVar2 + 1;
        iVar3 = iVar2;
      }
      UNLOCK();
      iVar2 = iVar3;
    } while (!bVar9);
    pTVar6 = pTVar4;
    pTVar7 = (this->WeakThis).Object;
  }
LAB_14ef85431:
  pTVar4 = (TOnlineAsyncOp<UE::Online::FQueryBlockedUsers> *)&pTVar7->_padding_;
  if (pTVar7 == (TOnlineAsyncOp<UE::Online::FQueryBlockedUsers> *)0x0) {
    pTVar4 = pTVar8;
  }
  if ((pTVar4 != (TOnlineAsyncOp<UE::Online::FQueryBlockedUsers> *)this) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("SharedThis.Get() == this",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x67f,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FQueryBlockedUsers>,1> *)(*pcVar1)()
    ;
    return pTVar5;
  }
  if ((pTVar7 == (TOnlineAsyncOp<UE::Online::FQueryBlockedUsers> *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x416,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FQueryBlockedUsers>,1> *)(*pcVar1)()
    ;
    return pTVar5;
  }
  __return_storage_ptr__->Object = pTVar7;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)pTVar6;
  if ((pTVar7 == (TOnlineAsyncOp<UE::Online::FQueryBlockedUsers> *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x26c,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FQueryBlockedUsers>,1> *)(*pcVar1)()
    ;
    return pTVar5;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return __return_storage_ptr__;
}

// AsShared @ 14ef85500

TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FQueryFriends>,1> * __thiscall
TSharedFromThis<UE::Online::TOnlineAsyncOp<UE::Online::FQueryFriends>,1>::AsShared
          (TSharedFromThis<UE::Online::TOnlineAsyncOp<UE::Online::FQueryFriends>,1> *this,
          TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FQueryFriends>,1>
          *__return_storage_ptr__)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  TOnlineAsyncOp<UE::Online::FQueryFriends> *pTVar4;
  TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FQueryFriends>,1> *pTVar5;
  TOnlineAsyncOp<UE::Online::FQueryFriends> *pTVar6;
  TOnlineAsyncOp<UE::Online::FQueryFriends> *pTVar7;
  TOnlineAsyncOp<UE::Online::FQueryFriends> *pTVar8;
  bool bVar9;
  
  pTVar4 = (TOnlineAsyncOp<UE::Online::FQueryFriends> *)
           (this->WeakThis).WeakReferenceCount.ReferenceController;
  pTVar8 = (TOnlineAsyncOp<UE::Online::FQueryFriends> *)0x0;
  pTVar6 = pTVar4;
  pTVar7 = pTVar8;
  if (pTVar4 != (TOnlineAsyncOp<UE::Online::FQueryFriends> *)0x0) {
    iVar2 = *(int *)&((FWeakReferencer<1> *)&pTVar4->_padding_)->ReferenceController;
    do {
      pTVar6 = pTVar8;
      pTVar7 = (TOnlineAsyncOp<UE::Online::FQueryFriends> *)0x0;
      if (iVar2 == 0) goto LAB_14ef85541;
      LOCK();
      iVar3 = *(int *)&((FWeakReferencer<1> *)&pTVar4->_padding_)->ReferenceController;
      bVar9 = iVar2 == iVar3;
      if (bVar9) {
        *(int *)&((FWeakReferencer<1> *)&pTVar4->_padding_)->ReferenceController = iVar2 + 1;
        iVar3 = iVar2;
      }
      UNLOCK();
      iVar2 = iVar3;
    } while (!bVar9);
    pTVar6 = pTVar4;
    pTVar7 = (this->WeakThis).Object;
  }
LAB_14ef85541:
  pTVar4 = (TOnlineAsyncOp<UE::Online::FQueryFriends> *)&pTVar7->_padding_;
  if (pTVar7 == (TOnlineAsyncOp<UE::Online::FQueryFriends> *)0x0) {
    pTVar4 = pTVar8;
  }
  if ((pTVar4 != (TOnlineAsyncOp<UE::Online::FQueryFriends> *)this) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("SharedThis.Get() == this",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x67f,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FQueryFriends>,1> *)(*pcVar1)();
    return pTVar5;
  }
  if ((pTVar7 == (TOnlineAsyncOp<UE::Online::FQueryFriends> *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x416,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FQueryFriends>,1> *)(*pcVar1)();
    return pTVar5;
  }
  __return_storage_ptr__->Object = pTVar7;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)pTVar6;
  if ((pTVar7 == (TOnlineAsyncOp<UE::Online::FQueryFriends> *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x26c,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FQueryFriends>,1> *)(*pcVar1)();
    return pTVar5;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return __return_storage_ptr__;
}

// AsShared @ 14ef85610

TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FQueryStats>,1> * __thiscall
TSharedFromThis<UE::Online::TOnlineAsyncOp<UE::Online::FQueryStats>,1>::AsShared
          (TSharedFromThis<UE::Online::TOnlineAsyncOp<UE::Online::FQueryStats>,1> *this,
          TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FQueryStats>,1> *__return_storage_ptr__)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  TOnlineAsyncOp<UE::Online::FQueryStats> *pTVar4;
  TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FQueryStats>,1> *pTVar5;
  TOnlineAsyncOp<UE::Online::FQueryStats> *pTVar6;
  TOnlineAsyncOp<UE::Online::FQueryStats> *pTVar7;
  TOnlineAsyncOp<UE::Online::FQueryStats> *pTVar8;
  bool bVar9;
  
  pTVar4 = (TOnlineAsyncOp<UE::Online::FQueryStats> *)
           (this->WeakThis).WeakReferenceCount.ReferenceController;
  pTVar8 = (TOnlineAsyncOp<UE::Online::FQueryStats> *)0x0;
  pTVar6 = pTVar4;
  pTVar7 = pTVar8;
  if (pTVar4 != (TOnlineAsyncOp<UE::Online::FQueryStats> *)0x0) {
    iVar2 = *(int *)&((FWeakReferencer<1> *)&pTVar4->_padding_)->ReferenceController;
    do {
      pTVar6 = pTVar8;
      pTVar7 = (TOnlineAsyncOp<UE::Online::FQueryStats> *)0x0;
      if (iVar2 == 0) goto LAB_14ef85651;
      LOCK();
      iVar3 = *(int *)&((FWeakReferencer<1> *)&pTVar4->_padding_)->ReferenceController;
      bVar9 = iVar2 == iVar3;
      if (bVar9) {
        *(int *)&((FWeakReferencer<1> *)&pTVar4->_padding_)->ReferenceController = iVar2 + 1;
        iVar3 = iVar2;
      }
      UNLOCK();
      iVar2 = iVar3;
    } while (!bVar9);
    pTVar6 = pTVar4;
    pTVar7 = (this->WeakThis).Object;
  }
LAB_14ef85651:
  pTVar4 = (TOnlineAsyncOp<UE::Online::FQueryStats> *)&pTVar7->_padding_;
  if (pTVar7 == (TOnlineAsyncOp<UE::Online::FQueryStats> *)0x0) {
    pTVar4 = pTVar8;
  }
  if ((pTVar4 != (TOnlineAsyncOp<UE::Online::FQueryStats> *)this) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("SharedThis.Get() == this",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x67f,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FQueryStats>,1> *)(*pcVar1)();
    return pTVar5;
  }
  if ((pTVar7 == (TOnlineAsyncOp<UE::Online::FQueryStats> *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x416,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FQueryStats>,1> *)(*pcVar1)();
    return pTVar5;
  }
  __return_storage_ptr__->Object = pTVar7;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)pTVar6;
  if ((pTVar7 == (TOnlineAsyncOp<UE::Online::FQueryStats> *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x26c,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FQueryStats>,1> *)(*pcVar1)();
    return pTVar5;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return __return_storage_ptr__;
}

// AsShared @ 14ef85720

TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FQueryUserAvatar>,1> * __thiscall
TSharedFromThis<UE::Online::TOnlineAsyncOp<UE::Online::FQueryUserAvatar>,1>::AsShared
          (TSharedFromThis<UE::Online::TOnlineAsyncOp<UE::Online::FQueryUserAvatar>,1> *this,
          TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FQueryUserAvatar>,1>
          *__return_storage_ptr__)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  TOnlineAsyncOp<UE::Online::FQueryUserAvatar> *pTVar4;
  TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FQueryUserAvatar>,1> *pTVar5;
  TOnlineAsyncOp<UE::Online::FQueryUserAvatar> *pTVar6;
  TOnlineAsyncOp<UE::Online::FQueryUserAvatar> *pTVar7;
  TOnlineAsyncOp<UE::Online::FQueryUserAvatar> *pTVar8;
  bool bVar9;
  
  pTVar4 = (TOnlineAsyncOp<UE::Online::FQueryUserAvatar> *)
           (this->WeakThis).WeakReferenceCount.ReferenceController;
  pTVar8 = (TOnlineAsyncOp<UE::Online::FQueryUserAvatar> *)0x0;
  pTVar6 = pTVar4;
  pTVar7 = pTVar8;
  if (pTVar4 != (TOnlineAsyncOp<UE::Online::FQueryUserAvatar> *)0x0) {
    iVar2 = *(int *)&((FWeakReferencer<1> *)&pTVar4->_padding_)->ReferenceController;
    do {
      pTVar6 = pTVar8;
      pTVar7 = (TOnlineAsyncOp<UE::Online::FQueryUserAvatar> *)0x0;
      if (iVar2 == 0) goto LAB_14ef85761;
      LOCK();
      iVar3 = *(int *)&((FWeakReferencer<1> *)&pTVar4->_padding_)->ReferenceController;
      bVar9 = iVar2 == iVar3;
      if (bVar9) {
        *(int *)&((FWeakReferencer<1> *)&pTVar4->_padding_)->ReferenceController = iVar2 + 1;
        iVar3 = iVar2;
      }
      UNLOCK();
      iVar2 = iVar3;
    } while (!bVar9);
    pTVar6 = pTVar4;
    pTVar7 = (this->WeakThis).Object;
  }
LAB_14ef85761:
  pTVar4 = (TOnlineAsyncOp<UE::Online::FQueryUserAvatar> *)&pTVar7->_padding_;
  if (pTVar7 == (TOnlineAsyncOp<UE::Online::FQueryUserAvatar> *)0x0) {
    pTVar4 = pTVar8;
  }
  if ((pTVar4 != (TOnlineAsyncOp<UE::Online::FQueryUserAvatar> *)this) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("SharedThis.Get() == this",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x67f,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FQueryUserAvatar>,1> *)(*pcVar1)();
    return pTVar5;
  }
  if ((pTVar7 == (TOnlineAsyncOp<UE::Online::FQueryUserAvatar> *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x416,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FQueryUserAvatar>,1> *)(*pcVar1)();
    return pTVar5;
  }
  __return_storage_ptr__->Object = pTVar7;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)pTVar6;
  if ((pTVar7 == (TOnlineAsyncOp<UE::Online::FQueryUserAvatar> *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x26c,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FQueryUserAvatar>,1> *)(*pcVar1)();
    return pTVar5;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return __return_storage_ptr__;
}

// AsShared @ 14ef85830

TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FQueryUserInfo>,1> * __thiscall
TSharedFromThis<UE::Online::TOnlineAsyncOp<UE::Online::FQueryUserInfo>,1>::AsShared
          (TSharedFromThis<UE::Online::TOnlineAsyncOp<UE::Online::FQueryUserInfo>,1> *this,
          TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FQueryUserInfo>,1>
          *__return_storage_ptr__)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  TOnlineAsyncOp<UE::Online::FQueryUserInfo> *pTVar4;
  TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FQueryUserInfo>,1> *pTVar5;
  TOnlineAsyncOp<UE::Online::FQueryUserInfo> *pTVar6;
  TOnlineAsyncOp<UE::Online::FQueryUserInfo> *pTVar7;
  TOnlineAsyncOp<UE::Online::FQueryUserInfo> *pTVar8;
  bool bVar9;
  
  pTVar4 = (TOnlineAsyncOp<UE::Online::FQueryUserInfo> *)
           (this->WeakThis).WeakReferenceCount.ReferenceController;
  pTVar8 = (TOnlineAsyncOp<UE::Online::FQueryUserInfo> *)0x0;
  pTVar6 = pTVar4;
  pTVar7 = pTVar8;
  if (pTVar4 != (TOnlineAsyncOp<UE::Online::FQueryUserInfo> *)0x0) {
    iVar2 = *(int *)&((FWeakReferencer<1> *)&pTVar4->_padding_)->ReferenceController;
    do {
      pTVar6 = pTVar8;
      pTVar7 = (TOnlineAsyncOp<UE::Online::FQueryUserInfo> *)0x0;
      if (iVar2 == 0) goto LAB_14ef85871;
      LOCK();
      iVar3 = *(int *)&((FWeakReferencer<1> *)&pTVar4->_padding_)->ReferenceController;
      bVar9 = iVar2 == iVar3;
      if (bVar9) {
        *(int *)&((FWeakReferencer<1> *)&pTVar4->_padding_)->ReferenceController = iVar2 + 1;
        iVar3 = iVar2;
      }
      UNLOCK();
      iVar2 = iVar3;
    } while (!bVar9);
    pTVar6 = pTVar4;
    pTVar7 = (this->WeakThis).Object;
  }
LAB_14ef85871:
  pTVar4 = (TOnlineAsyncOp<UE::Online::FQueryUserInfo> *)&pTVar7->_padding_;
  if (pTVar7 == (TOnlineAsyncOp<UE::Online::FQueryUserInfo> *)0x0) {
    pTVar4 = pTVar8;
  }
  if ((pTVar4 != (TOnlineAsyncOp<UE::Online::FQueryUserInfo> *)this) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("SharedThis.Get() == this",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x67f,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FQueryUserInfo>,1> *)(*pcVar1)();
    return pTVar5;
  }
  if ((pTVar7 == (TOnlineAsyncOp<UE::Online::FQueryUserInfo> *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x416,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FQueryUserInfo>,1> *)(*pcVar1)();
    return pTVar5;
  }
  __return_storage_ptr__->Object = pTVar7;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)pTVar6;
  if ((pTVar7 == (TOnlineAsyncOp<UE::Online::FQueryUserInfo> *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x26c,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FQueryUserInfo>,1> *)(*pcVar1)();
    return pTVar5;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return __return_storage_ptr__;
}

// AsShared @ 14ef85940

TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FRejectFriendInvite>,1> * __thiscall
TSharedFromThis<UE::Online::TOnlineAsyncOp<UE::Online::FRejectFriendInvite>,1>::AsShared
          (TSharedFromThis<UE::Online::TOnlineAsyncOp<UE::Online::FRejectFriendInvite>,1> *this,
          TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FRejectFriendInvite>,1>
          *__return_storage_ptr__)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  TOnlineAsyncOp<UE::Online::FRejectFriendInvite> *pTVar4;
  TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FRejectFriendInvite>,1> *pTVar5;
  TOnlineAsyncOp<UE::Online::FRejectFriendInvite> *pTVar6;
  TOnlineAsyncOp<UE::Online::FRejectFriendInvite> *pTVar7;
  TOnlineAsyncOp<UE::Online::FRejectFriendInvite> *pTVar8;
  bool bVar9;
  
  pTVar4 = (TOnlineAsyncOp<UE::Online::FRejectFriendInvite> *)
           (this->WeakThis).WeakReferenceCount.ReferenceController;
  pTVar8 = (TOnlineAsyncOp<UE::Online::FRejectFriendInvite> *)0x0;
  pTVar6 = pTVar4;
  pTVar7 = pTVar8;
  if (pTVar4 != (TOnlineAsyncOp<UE::Online::FRejectFriendInvite> *)0x0) {
    iVar2 = *(int *)&((FWeakReferencer<1> *)&pTVar4->_padding_)->ReferenceController;
    do {
      pTVar6 = pTVar8;
      pTVar7 = (TOnlineAsyncOp<UE::Online::FRejectFriendInvite> *)0x0;
      if (iVar2 == 0) goto LAB_14ef85981;
      LOCK();
      iVar3 = *(int *)&((FWeakReferencer<1> *)&pTVar4->_padding_)->ReferenceController;
      bVar9 = iVar2 == iVar3;
      if (bVar9) {
        *(int *)&((FWeakReferencer<1> *)&pTVar4->_padding_)->ReferenceController = iVar2 + 1;
        iVar3 = iVar2;
      }
      UNLOCK();
      iVar2 = iVar3;
    } while (!bVar9);
    pTVar6 = pTVar4;
    pTVar7 = (this->WeakThis).Object;
  }
LAB_14ef85981:
  pTVar4 = (TOnlineAsyncOp<UE::Online::FRejectFriendInvite> *)&pTVar7->_padding_;
  if (pTVar7 == (TOnlineAsyncOp<UE::Online::FRejectFriendInvite> *)0x0) {
    pTVar4 = pTVar8;
  }
  if ((pTVar4 != (TOnlineAsyncOp<UE::Online::FRejectFriendInvite> *)this) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("SharedThis.Get() == this",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x67f,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FRejectFriendInvite>,1> *)
             (*pcVar1)();
    return pTVar5;
  }
  if ((pTVar7 == (TOnlineAsyncOp<UE::Online::FRejectFriendInvite> *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x416,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FRejectFriendInvite>,1> *)
             (*pcVar1)();
    return pTVar5;
  }
  __return_storage_ptr__->Object = pTVar7;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)pTVar6;
  if ((pTVar7 == (TOnlineAsyncOp<UE::Online::FRejectFriendInvite> *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x26c,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FRejectFriendInvite>,1> *)
             (*pcVar1)();
    return pTVar5;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return __return_storage_ptr__;
}

// AsShared @ 14ef85a50

TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FResetStats>,1> * __thiscall
TSharedFromThis<UE::Online::TOnlineAsyncOp<UE::Online::FResetStats>,1>::AsShared
          (TSharedFromThis<UE::Online::TOnlineAsyncOp<UE::Online::FResetStats>,1> *this,
          TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FResetStats>,1> *__return_storage_ptr__)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  TOnlineAsyncOp<UE::Online::FResetStats> *pTVar4;
  TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FResetStats>,1> *pTVar5;
  TOnlineAsyncOp<UE::Online::FResetStats> *pTVar6;
  TOnlineAsyncOp<UE::Online::FResetStats> *pTVar7;
  TOnlineAsyncOp<UE::Online::FResetStats> *pTVar8;
  bool bVar9;
  
  pTVar4 = (TOnlineAsyncOp<UE::Online::FResetStats> *)
           (this->WeakThis).WeakReferenceCount.ReferenceController;
  pTVar8 = (TOnlineAsyncOp<UE::Online::FResetStats> *)0x0;
  pTVar6 = pTVar4;
  pTVar7 = pTVar8;
  if (pTVar4 != (TOnlineAsyncOp<UE::Online::FResetStats> *)0x0) {
    iVar2 = *(int *)&((FWeakReferencer<1> *)&pTVar4->_padding_)->ReferenceController;
    do {
      pTVar6 = pTVar8;
      pTVar7 = (TOnlineAsyncOp<UE::Online::FResetStats> *)0x0;
      if (iVar2 == 0) goto LAB_14ef85a91;
      LOCK();
      iVar3 = *(int *)&((FWeakReferencer<1> *)&pTVar4->_padding_)->ReferenceController;
      bVar9 = iVar2 == iVar3;
      if (bVar9) {
        *(int *)&((FWeakReferencer<1> *)&pTVar4->_padding_)->ReferenceController = iVar2 + 1;
        iVar3 = iVar2;
      }
      UNLOCK();
      iVar2 = iVar3;
    } while (!bVar9);
    pTVar6 = pTVar4;
    pTVar7 = (this->WeakThis).Object;
  }
LAB_14ef85a91:
  pTVar4 = (TOnlineAsyncOp<UE::Online::FResetStats> *)&pTVar7->_padding_;
  if (pTVar7 == (TOnlineAsyncOp<UE::Online::FResetStats> *)0x0) {
    pTVar4 = pTVar8;
  }
  if ((pTVar4 != (TOnlineAsyncOp<UE::Online::FResetStats> *)this) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("SharedThis.Get() == this",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x67f,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FResetStats>,1> *)(*pcVar1)();
    return pTVar5;
  }
  if ((pTVar7 == (TOnlineAsyncOp<UE::Online::FResetStats> *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x416,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FResetStats>,1> *)(*pcVar1)();
    return pTVar5;
  }
  __return_storage_ptr__->Object = pTVar7;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)pTVar6;
  if ((pTVar7 == (TOnlineAsyncOp<UE::Online::FResetStats> *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x26c,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FResetStats>,1> *)(*pcVar1)();
    return pTVar5;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return __return_storage_ptr__;
}

// AsShared @ 14ef85b60

TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FSendFriendInvite>,1> * __thiscall
TSharedFromThis<UE::Online::TOnlineAsyncOp<UE::Online::FSendFriendInvite>,1>::AsShared
          (TSharedFromThis<UE::Online::TOnlineAsyncOp<UE::Online::FSendFriendInvite>,1> *this,
          TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FSendFriendInvite>,1>
          *__return_storage_ptr__)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  TOnlineAsyncOp<UE::Online::FSendFriendInvite> *pTVar4;
  TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FSendFriendInvite>,1> *pTVar5;
  TOnlineAsyncOp<UE::Online::FSendFriendInvite> *pTVar6;
  TOnlineAsyncOp<UE::Online::FSendFriendInvite> *pTVar7;
  TOnlineAsyncOp<UE::Online::FSendFriendInvite> *pTVar8;
  bool bVar9;
  
  pTVar4 = (TOnlineAsyncOp<UE::Online::FSendFriendInvite> *)
           (this->WeakThis).WeakReferenceCount.ReferenceController;
  pTVar8 = (TOnlineAsyncOp<UE::Online::FSendFriendInvite> *)0x0;
  pTVar6 = pTVar4;
  pTVar7 = pTVar8;
  if (pTVar4 != (TOnlineAsyncOp<UE::Online::FSendFriendInvite> *)0x0) {
    iVar2 = *(int *)&((FWeakReferencer<1> *)&pTVar4->_padding_)->ReferenceController;
    do {
      pTVar6 = pTVar8;
      pTVar7 = (TOnlineAsyncOp<UE::Online::FSendFriendInvite> *)0x0;
      if (iVar2 == 0) goto LAB_14ef85ba1;
      LOCK();
      iVar3 = *(int *)&((FWeakReferencer<1> *)&pTVar4->_padding_)->ReferenceController;
      bVar9 = iVar2 == iVar3;
      if (bVar9) {
        *(int *)&((FWeakReferencer<1> *)&pTVar4->_padding_)->ReferenceController = iVar2 + 1;
        iVar3 = iVar2;
      }
      UNLOCK();
      iVar2 = iVar3;
    } while (!bVar9);
    pTVar6 = pTVar4;
    pTVar7 = (this->WeakThis).Object;
  }
LAB_14ef85ba1:
  pTVar4 = (TOnlineAsyncOp<UE::Online::FSendFriendInvite> *)&pTVar7->_padding_;
  if (pTVar7 == (TOnlineAsyncOp<UE::Online::FSendFriendInvite> *)0x0) {
    pTVar4 = pTVar8;
  }
  if ((pTVar4 != (TOnlineAsyncOp<UE::Online::FSendFriendInvite> *)this) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("SharedThis.Get() == this",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x67f,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FSendFriendInvite>,1> *)(*pcVar1)();
    return pTVar5;
  }
  if ((pTVar7 == (TOnlineAsyncOp<UE::Online::FSendFriendInvite> *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x416,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FSendFriendInvite>,1> *)(*pcVar1)();
    return pTVar5;
  }
  __return_storage_ptr__->Object = pTVar7;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)pTVar6;
  if ((pTVar7 == (TOnlineAsyncOp<UE::Online::FSendFriendInvite> *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x26c,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FSendFriendInvite>,1> *)(*pcVar1)();
    return pTVar5;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return __return_storage_ptr__;
}

// AsShared @ 14ef85c70

TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FShowUserProfile>,1> * __thiscall
TSharedFromThis<UE::Online::TOnlineAsyncOp<UE::Online::FShowUserProfile>,1>::AsShared
          (TSharedFromThis<UE::Online::TOnlineAsyncOp<UE::Online::FShowUserProfile>,1> *this,
          TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FShowUserProfile>,1>
          *__return_storage_ptr__)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  TOnlineAsyncOp<UE::Online::FShowUserProfile> *pTVar4;
  TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FShowUserProfile>,1> *pTVar5;
  TOnlineAsyncOp<UE::Online::FShowUserProfile> *pTVar6;
  TOnlineAsyncOp<UE::Online::FShowUserProfile> *pTVar7;
  TOnlineAsyncOp<UE::Online::FShowUserProfile> *pTVar8;
  bool bVar9;
  
  pTVar4 = (TOnlineAsyncOp<UE::Online::FShowUserProfile> *)
           (this->WeakThis).WeakReferenceCount.ReferenceController;
  pTVar8 = (TOnlineAsyncOp<UE::Online::FShowUserProfile> *)0x0;
  pTVar6 = pTVar4;
  pTVar7 = pTVar8;
  if (pTVar4 != (TOnlineAsyncOp<UE::Online::FShowUserProfile> *)0x0) {
    iVar2 = *(int *)&((FWeakReferencer<1> *)&pTVar4->_padding_)->ReferenceController;
    do {
      pTVar6 = pTVar8;
      pTVar7 = (TOnlineAsyncOp<UE::Online::FShowUserProfile> *)0x0;
      if (iVar2 == 0) goto LAB_14ef85cb1;
      LOCK();
      iVar3 = *(int *)&((FWeakReferencer<1> *)&pTVar4->_padding_)->ReferenceController;
      bVar9 = iVar2 == iVar3;
      if (bVar9) {
        *(int *)&((FWeakReferencer<1> *)&pTVar4->_padding_)->ReferenceController = iVar2 + 1;
        iVar3 = iVar2;
      }
      UNLOCK();
      iVar2 = iVar3;
    } while (!bVar9);
    pTVar6 = pTVar4;
    pTVar7 = (this->WeakThis).Object;
  }
LAB_14ef85cb1:
  pTVar4 = (TOnlineAsyncOp<UE::Online::FShowUserProfile> *)&pTVar7->_padding_;
  if (pTVar7 == (TOnlineAsyncOp<UE::Online::FShowUserProfile> *)0x0) {
    pTVar4 = pTVar8;
  }
  if ((pTVar4 != (TOnlineAsyncOp<UE::Online::FShowUserProfile> *)this) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("SharedThis.Get() == this",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x67f,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FShowUserProfile>,1> *)(*pcVar1)();
    return pTVar5;
  }
  if ((pTVar7 == (TOnlineAsyncOp<UE::Online::FShowUserProfile> *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x416,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FShowUserProfile>,1> *)(*pcVar1)();
    return pTVar5;
  }
  __return_storage_ptr__->Object = pTVar7;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)pTVar6;
  if ((pTVar7 == (TOnlineAsyncOp<UE::Online::FShowUserProfile> *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x26c,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FShowUserProfile>,1> *)(*pcVar1)();
    return pTVar5;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return __return_storage_ptr__;
}

// AsShared @ 14ef85d80

TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FTitleFileEnumerateFiles>,1> * __thiscall
TSharedFromThis<UE::Online::TOnlineAsyncOp<UE::Online::FTitleFileEnumerateFiles>,1>::AsShared
          (TSharedFromThis<UE::Online::TOnlineAsyncOp<UE::Online::FTitleFileEnumerateFiles>,1> *this
          ,TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FTitleFileEnumerateFiles>,1>
           *__return_storage_ptr__)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  TOnlineAsyncOp<UE::Online::FTitleFileEnumerateFiles> *pTVar4;
  TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FTitleFileEnumerateFiles>,1> *pTVar5;
  TOnlineAsyncOp<UE::Online::FTitleFileEnumerateFiles> *pTVar6;
  TOnlineAsyncOp<UE::Online::FTitleFileEnumerateFiles> *pTVar7;
  TOnlineAsyncOp<UE::Online::FTitleFileEnumerateFiles> *pTVar8;
  bool bVar9;
  
  pTVar4 = (TOnlineAsyncOp<UE::Online::FTitleFileEnumerateFiles> *)
           (this->WeakThis).WeakReferenceCount.ReferenceController;
  pTVar8 = (TOnlineAsyncOp<UE::Online::FTitleFileEnumerateFiles> *)0x0;
  pTVar6 = pTVar4;
  pTVar7 = pTVar8;
  if (pTVar4 != (TOnlineAsyncOp<UE::Online::FTitleFileEnumerateFiles> *)0x0) {
    iVar2 = *(int *)&((FWeakReferencer<1> *)&pTVar4->_padding_)->ReferenceController;
    do {
      pTVar6 = pTVar8;
      pTVar7 = (TOnlineAsyncOp<UE::Online::FTitleFileEnumerateFiles> *)0x0;
      if (iVar2 == 0) goto LAB_14ef85dc1;
      LOCK();
      iVar3 = *(int *)&((FWeakReferencer<1> *)&pTVar4->_padding_)->ReferenceController;
      bVar9 = iVar2 == iVar3;
      if (bVar9) {
        *(int *)&((FWeakReferencer<1> *)&pTVar4->_padding_)->ReferenceController = iVar2 + 1;
        iVar3 = iVar2;
      }
      UNLOCK();
      iVar2 = iVar3;
    } while (!bVar9);
    pTVar6 = pTVar4;
    pTVar7 = (this->WeakThis).Object;
  }
LAB_14ef85dc1:
  pTVar4 = (TOnlineAsyncOp<UE::Online::FTitleFileEnumerateFiles> *)&pTVar7->_padding_;
  if (pTVar7 == (TOnlineAsyncOp<UE::Online::FTitleFileEnumerateFiles> *)0x0) {
    pTVar4 = pTVar8;
  }
  if ((pTVar4 != (TOnlineAsyncOp<UE::Online::FTitleFileEnumerateFiles> *)this) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("SharedThis.Get() == this",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x67f,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FTitleFileEnumerateFiles>,1> *)
             (*pcVar1)();
    return pTVar5;
  }
  if ((pTVar7 == (TOnlineAsyncOp<UE::Online::FTitleFileEnumerateFiles> *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x416,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FTitleFileEnumerateFiles>,1> *)
             (*pcVar1)();
    return pTVar5;
  }
  __return_storage_ptr__->Object = pTVar7;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)pTVar6;
  if ((pTVar7 == (TOnlineAsyncOp<UE::Online::FTitleFileEnumerateFiles> *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x26c,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FTitleFileEnumerateFiles>,1> *)
             (*pcVar1)();
    return pTVar5;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return __return_storage_ptr__;
}

// AsShared @ 14ef85e90

TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FTitleFileReadFile>,1> * __thiscall
TSharedFromThis<UE::Online::TOnlineAsyncOp<UE::Online::FTitleFileReadFile>,1>::AsShared
          (TSharedFromThis<UE::Online::TOnlineAsyncOp<UE::Online::FTitleFileReadFile>,1> *this,
          TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FTitleFileReadFile>,1>
          *__return_storage_ptr__)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  TOnlineAsyncOp<UE::Online::FTitleFileReadFile> *pTVar4;
  TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FTitleFileReadFile>,1> *pTVar5;
  TOnlineAsyncOp<UE::Online::FTitleFileReadFile> *pTVar6;
  TOnlineAsyncOp<UE::Online::FTitleFileReadFile> *pTVar7;
  TOnlineAsyncOp<UE::Online::FTitleFileReadFile> *pTVar8;
  bool bVar9;
  
  pTVar4 = (TOnlineAsyncOp<UE::Online::FTitleFileReadFile> *)
           (this->WeakThis).WeakReferenceCount.ReferenceController;
  pTVar8 = (TOnlineAsyncOp<UE::Online::FTitleFileReadFile> *)0x0;
  pTVar6 = pTVar4;
  pTVar7 = pTVar8;
  if (pTVar4 != (TOnlineAsyncOp<UE::Online::FTitleFileReadFile> *)0x0) {
    iVar2 = *(int *)&((FWeakReferencer<1> *)&pTVar4->_padding_)->ReferenceController;
    do {
      pTVar6 = pTVar8;
      pTVar7 = (TOnlineAsyncOp<UE::Online::FTitleFileReadFile> *)0x0;
      if (iVar2 == 0) goto LAB_14ef85ed1;
      LOCK();
      iVar3 = *(int *)&((FWeakReferencer<1> *)&pTVar4->_padding_)->ReferenceController;
      bVar9 = iVar2 == iVar3;
      if (bVar9) {
        *(int *)&((FWeakReferencer<1> *)&pTVar4->_padding_)->ReferenceController = iVar2 + 1;
        iVar3 = iVar2;
      }
      UNLOCK();
      iVar2 = iVar3;
    } while (!bVar9);
    pTVar6 = pTVar4;
    pTVar7 = (this->WeakThis).Object;
  }
LAB_14ef85ed1:
  pTVar4 = (TOnlineAsyncOp<UE::Online::FTitleFileReadFile> *)&pTVar7->_padding_;
  if (pTVar7 == (TOnlineAsyncOp<UE::Online::FTitleFileReadFile> *)0x0) {
    pTVar4 = pTVar8;
  }
  if ((pTVar4 != (TOnlineAsyncOp<UE::Online::FTitleFileReadFile> *)this) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("SharedThis.Get() == this",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x67f,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FTitleFileReadFile>,1> *)(*pcVar1)()
    ;
    return pTVar5;
  }
  if ((pTVar7 == (TOnlineAsyncOp<UE::Online::FTitleFileReadFile> *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x416,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FTitleFileReadFile>,1> *)(*pcVar1)()
    ;
    return pTVar5;
  }
  __return_storage_ptr__->Object = pTVar7;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)pTVar6;
  if ((pTVar7 == (TOnlineAsyncOp<UE::Online::FTitleFileReadFile> *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x26c,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FTitleFileReadFile>,1> *)(*pcVar1)()
    ;
    return pTVar5;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return __return_storage_ptr__;
}

// AsShared @ 14ef85fa0

TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FTriggerEvent>,1> * __thiscall
TSharedFromThis<UE::Online::TOnlineAsyncOp<UE::Online::FTriggerEvent>,1>::AsShared
          (TSharedFromThis<UE::Online::TOnlineAsyncOp<UE::Online::FTriggerEvent>,1> *this,
          TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FTriggerEvent>,1>
          *__return_storage_ptr__)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  TOnlineAsyncOp<UE::Online::FTriggerEvent> *pTVar4;
  TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FTriggerEvent>,1> *pTVar5;
  TOnlineAsyncOp<UE::Online::FTriggerEvent> *pTVar6;
  TOnlineAsyncOp<UE::Online::FTriggerEvent> *pTVar7;
  TOnlineAsyncOp<UE::Online::FTriggerEvent> *pTVar8;
  bool bVar9;
  
  pTVar4 = (TOnlineAsyncOp<UE::Online::FTriggerEvent> *)
           (this->WeakThis).WeakReferenceCount.ReferenceController;
  pTVar8 = (TOnlineAsyncOp<UE::Online::FTriggerEvent> *)0x0;
  pTVar6 = pTVar4;
  pTVar7 = pTVar8;
  if (pTVar4 != (TOnlineAsyncOp<UE::Online::FTriggerEvent> *)0x0) {
    iVar2 = *(int *)&((FWeakReferencer<1> *)&pTVar4->_padding_)->ReferenceController;
    do {
      pTVar6 = pTVar8;
      pTVar7 = (TOnlineAsyncOp<UE::Online::FTriggerEvent> *)0x0;
      if (iVar2 == 0) goto LAB_14ef85fe1;
      LOCK();
      iVar3 = *(int *)&((FWeakReferencer<1> *)&pTVar4->_padding_)->ReferenceController;
      bVar9 = iVar2 == iVar3;
      if (bVar9) {
        *(int *)&((FWeakReferencer<1> *)&pTVar4->_padding_)->ReferenceController = iVar2 + 1;
        iVar3 = iVar2;
      }
      UNLOCK();
      iVar2 = iVar3;
    } while (!bVar9);
    pTVar6 = pTVar4;
    pTVar7 = (this->WeakThis).Object;
  }
LAB_14ef85fe1:
  pTVar4 = (TOnlineAsyncOp<UE::Online::FTriggerEvent> *)&pTVar7->_padding_;
  if (pTVar7 == (TOnlineAsyncOp<UE::Online::FTriggerEvent> *)0x0) {
    pTVar4 = pTVar8;
  }
  if ((pTVar4 != (TOnlineAsyncOp<UE::Online::FTriggerEvent> *)this) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("SharedThis.Get() == this",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x67f,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FTriggerEvent>,1> *)(*pcVar1)();
    return pTVar5;
  }
  if ((pTVar7 == (TOnlineAsyncOp<UE::Online::FTriggerEvent> *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x416,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FTriggerEvent>,1> *)(*pcVar1)();
    return pTVar5;
  }
  __return_storage_ptr__->Object = pTVar7;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)pTVar6;
  if ((pTVar7 == (TOnlineAsyncOp<UE::Online::FTriggerEvent> *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x26c,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FTriggerEvent>,1> *)(*pcVar1)();
    return pTVar5;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return __return_storage_ptr__;
}

// AsShared @ 14ef860b0

TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FUpdateStats>,1> * __thiscall
TSharedFromThis<UE::Online::TOnlineAsyncOp<UE::Online::FUpdateStats>,1>::AsShared
          (TSharedFromThis<UE::Online::TOnlineAsyncOp<UE::Online::FUpdateStats>,1> *this,
          TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FUpdateStats>,1> *__return_storage_ptr__
          )

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  TOnlineAsyncOp<UE::Online::FUpdateStats> *pTVar4;
  TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FUpdateStats>,1> *pTVar5;
  TOnlineAsyncOp<UE::Online::FUpdateStats> *pTVar6;
  TOnlineAsyncOp<UE::Online::FUpdateStats> *pTVar7;
  TOnlineAsyncOp<UE::Online::FUpdateStats> *pTVar8;
  bool bVar9;
  
  pTVar4 = (TOnlineAsyncOp<UE::Online::FUpdateStats> *)
           (this->WeakThis).WeakReferenceCount.ReferenceController;
  pTVar8 = (TOnlineAsyncOp<UE::Online::FUpdateStats> *)0x0;
  pTVar6 = pTVar4;
  pTVar7 = pTVar8;
  if (pTVar4 != (TOnlineAsyncOp<UE::Online::FUpdateStats> *)0x0) {
    iVar2 = *(int *)&((FWeakReferencer<1> *)&pTVar4->_padding_)->ReferenceController;
    do {
      pTVar6 = pTVar8;
      pTVar7 = (TOnlineAsyncOp<UE::Online::FUpdateStats> *)0x0;
      if (iVar2 == 0) goto LAB_14ef860f1;
      LOCK();
      iVar3 = *(int *)&((FWeakReferencer<1> *)&pTVar4->_padding_)->ReferenceController;
      bVar9 = iVar2 == iVar3;
      if (bVar9) {
        *(int *)&((FWeakReferencer<1> *)&pTVar4->_padding_)->ReferenceController = iVar2 + 1;
        iVar3 = iVar2;
      }
      UNLOCK();
      iVar2 = iVar3;
    } while (!bVar9);
    pTVar6 = pTVar4;
    pTVar7 = (this->WeakThis).Object;
  }
LAB_14ef860f1:
  pTVar4 = (TOnlineAsyncOp<UE::Online::FUpdateStats> *)&pTVar7->_padding_;
  if (pTVar7 == (TOnlineAsyncOp<UE::Online::FUpdateStats> *)0x0) {
    pTVar4 = pTVar8;
  }
  if ((pTVar4 != (TOnlineAsyncOp<UE::Online::FUpdateStats> *)this) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("SharedThis.Get() == this",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x67f,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FUpdateStats>,1> *)(*pcVar1)();
    return pTVar5;
  }
  if ((pTVar7 == (TOnlineAsyncOp<UE::Online::FUpdateStats> *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x416,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FUpdateStats>,1> *)(*pcVar1)();
    return pTVar5;
  }
  __return_storage_ptr__->Object = pTVar7;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)pTVar6;
  if ((pTVar7 == (TOnlineAsyncOp<UE::Online::FUpdateStats> *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x26c,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FUpdateStats>,1> *)(*pcVar1)();
    return pTVar5;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return __return_storage_ptr__;
}

// AsShared @ 14ef861c0

TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FUserFileCopyFile>,1> * __thiscall
TSharedFromThis<UE::Online::TOnlineAsyncOp<UE::Online::FUserFileCopyFile>,1>::AsShared
          (TSharedFromThis<UE::Online::TOnlineAsyncOp<UE::Online::FUserFileCopyFile>,1> *this,
          TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FUserFileCopyFile>,1>
          *__return_storage_ptr__)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  TOnlineAsyncOp<UE::Online::FUserFileCopyFile> *pTVar4;
  TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FUserFileCopyFile>,1> *pTVar5;
  TOnlineAsyncOp<UE::Online::FUserFileCopyFile> *pTVar6;
  TOnlineAsyncOp<UE::Online::FUserFileCopyFile> *pTVar7;
  TOnlineAsyncOp<UE::Online::FUserFileCopyFile> *pTVar8;
  bool bVar9;
  
  pTVar4 = (TOnlineAsyncOp<UE::Online::FUserFileCopyFile> *)
           (this->WeakThis).WeakReferenceCount.ReferenceController;
  pTVar8 = (TOnlineAsyncOp<UE::Online::FUserFileCopyFile> *)0x0;
  pTVar6 = pTVar4;
  pTVar7 = pTVar8;
  if (pTVar4 != (TOnlineAsyncOp<UE::Online::FUserFileCopyFile> *)0x0) {
    iVar2 = *(int *)&((FWeakReferencer<1> *)&pTVar4->_padding_)->ReferenceController;
    do {
      pTVar6 = pTVar8;
      pTVar7 = (TOnlineAsyncOp<UE::Online::FUserFileCopyFile> *)0x0;
      if (iVar2 == 0) goto LAB_14ef86201;
      LOCK();
      iVar3 = *(int *)&((FWeakReferencer<1> *)&pTVar4->_padding_)->ReferenceController;
      bVar9 = iVar2 == iVar3;
      if (bVar9) {
        *(int *)&((FWeakReferencer<1> *)&pTVar4->_padding_)->ReferenceController = iVar2 + 1;
        iVar3 = iVar2;
      }
      UNLOCK();
      iVar2 = iVar3;
    } while (!bVar9);
    pTVar6 = pTVar4;
    pTVar7 = (this->WeakThis).Object;
  }
LAB_14ef86201:
  pTVar4 = (TOnlineAsyncOp<UE::Online::FUserFileCopyFile> *)&pTVar7->_padding_;
  if (pTVar7 == (TOnlineAsyncOp<UE::Online::FUserFileCopyFile> *)0x0) {
    pTVar4 = pTVar8;
  }
  if ((pTVar4 != (TOnlineAsyncOp<UE::Online::FUserFileCopyFile> *)this) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("SharedThis.Get() == this",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x67f,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FUserFileCopyFile>,1> *)(*pcVar1)();
    return pTVar5;
  }
  if ((pTVar7 == (TOnlineAsyncOp<UE::Online::FUserFileCopyFile> *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x416,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FUserFileCopyFile>,1> *)(*pcVar1)();
    return pTVar5;
  }
  __return_storage_ptr__->Object = pTVar7;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)pTVar6;
  if ((pTVar7 == (TOnlineAsyncOp<UE::Online::FUserFileCopyFile> *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x26c,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FUserFileCopyFile>,1> *)(*pcVar1)();
    return pTVar5;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return __return_storage_ptr__;
}

// AsShared @ 14ef862d0

TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FUserFileDeleteFile>,1> * __thiscall
TSharedFromThis<UE::Online::TOnlineAsyncOp<UE::Online::FUserFileDeleteFile>,1>::AsShared
          (TSharedFromThis<UE::Online::TOnlineAsyncOp<UE::Online::FUserFileDeleteFile>,1> *this,
          TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FUserFileDeleteFile>,1>
          *__return_storage_ptr__)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  TOnlineAsyncOp<UE::Online::FUserFileDeleteFile> *pTVar4;
  TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FUserFileDeleteFile>,1> *pTVar5;
  TOnlineAsyncOp<UE::Online::FUserFileDeleteFile> *pTVar6;
  TOnlineAsyncOp<UE::Online::FUserFileDeleteFile> *pTVar7;
  TOnlineAsyncOp<UE::Online::FUserFileDeleteFile> *pTVar8;
  bool bVar9;
  
  pTVar4 = (TOnlineAsyncOp<UE::Online::FUserFileDeleteFile> *)
           (this->WeakThis).WeakReferenceCount.ReferenceController;
  pTVar8 = (TOnlineAsyncOp<UE::Online::FUserFileDeleteFile> *)0x0;
  pTVar6 = pTVar4;
  pTVar7 = pTVar8;
  if (pTVar4 != (TOnlineAsyncOp<UE::Online::FUserFileDeleteFile> *)0x0) {
    iVar2 = *(int *)&((FWeakReferencer<1> *)&pTVar4->_padding_)->ReferenceController;
    do {
      pTVar6 = pTVar8;
      pTVar7 = (TOnlineAsyncOp<UE::Online::FUserFileDeleteFile> *)0x0;
      if (iVar2 == 0) goto LAB_14ef86311;
      LOCK();
      iVar3 = *(int *)&((FWeakReferencer<1> *)&pTVar4->_padding_)->ReferenceController;
      bVar9 = iVar2 == iVar3;
      if (bVar9) {
        *(int *)&((FWeakReferencer<1> *)&pTVar4->_padding_)->ReferenceController = iVar2 + 1;
        iVar3 = iVar2;
      }
      UNLOCK();
      iVar2 = iVar3;
    } while (!bVar9);
    pTVar6 = pTVar4;
    pTVar7 = (this->WeakThis).Object;
  }
LAB_14ef86311:
  pTVar4 = (TOnlineAsyncOp<UE::Online::FUserFileDeleteFile> *)&pTVar7->_padding_;
  if (pTVar7 == (TOnlineAsyncOp<UE::Online::FUserFileDeleteFile> *)0x0) {
    pTVar4 = pTVar8;
  }
  if ((pTVar4 != (TOnlineAsyncOp<UE::Online::FUserFileDeleteFile> *)this) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("SharedThis.Get() == this",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x67f,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FUserFileDeleteFile>,1> *)
             (*pcVar1)();
    return pTVar5;
  }
  if ((pTVar7 == (TOnlineAsyncOp<UE::Online::FUserFileDeleteFile> *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x416,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FUserFileDeleteFile>,1> *)
             (*pcVar1)();
    return pTVar5;
  }
  __return_storage_ptr__->Object = pTVar7;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)pTVar6;
  if ((pTVar7 == (TOnlineAsyncOp<UE::Online::FUserFileDeleteFile> *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x26c,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FUserFileDeleteFile>,1> *)
             (*pcVar1)();
    return pTVar5;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return __return_storage_ptr__;
}

// AsShared @ 14ef863e0

TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FUserFileEnumerateFiles>,1> * __thiscall
TSharedFromThis<UE::Online::TOnlineAsyncOp<UE::Online::FUserFileEnumerateFiles>,1>::AsShared
          (TSharedFromThis<UE::Online::TOnlineAsyncOp<UE::Online::FUserFileEnumerateFiles>,1> *this,
          TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FUserFileEnumerateFiles>,1>
          *__return_storage_ptr__)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  TOnlineAsyncOp<UE::Online::FUserFileEnumerateFiles> *pTVar4;
  TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FUserFileEnumerateFiles>,1> *pTVar5;
  TOnlineAsyncOp<UE::Online::FUserFileEnumerateFiles> *pTVar6;
  TOnlineAsyncOp<UE::Online::FUserFileEnumerateFiles> *pTVar7;
  TOnlineAsyncOp<UE::Online::FUserFileEnumerateFiles> *pTVar8;
  bool bVar9;
  
  pTVar4 = (TOnlineAsyncOp<UE::Online::FUserFileEnumerateFiles> *)
           (this->WeakThis).WeakReferenceCount.ReferenceController;
  pTVar8 = (TOnlineAsyncOp<UE::Online::FUserFileEnumerateFiles> *)0x0;
  pTVar6 = pTVar4;
  pTVar7 = pTVar8;
  if (pTVar4 != (TOnlineAsyncOp<UE::Online::FUserFileEnumerateFiles> *)0x0) {
    iVar2 = *(int *)&((FWeakReferencer<1> *)&pTVar4->_padding_)->ReferenceController;
    do {
      pTVar6 = pTVar8;
      pTVar7 = (TOnlineAsyncOp<UE::Online::FUserFileEnumerateFiles> *)0x0;
      if (iVar2 == 0) goto LAB_14ef86421;
      LOCK();
      iVar3 = *(int *)&((FWeakReferencer<1> *)&pTVar4->_padding_)->ReferenceController;
      bVar9 = iVar2 == iVar3;
      if (bVar9) {
        *(int *)&((FWeakReferencer<1> *)&pTVar4->_padding_)->ReferenceController = iVar2 + 1;
        iVar3 = iVar2;
      }
      UNLOCK();
      iVar2 = iVar3;
    } while (!bVar9);
    pTVar6 = pTVar4;
    pTVar7 = (this->WeakThis).Object;
  }
LAB_14ef86421:
  pTVar4 = (TOnlineAsyncOp<UE::Online::FUserFileEnumerateFiles> *)&pTVar7->_padding_;
  if (pTVar7 == (TOnlineAsyncOp<UE::Online::FUserFileEnumerateFiles> *)0x0) {
    pTVar4 = pTVar8;
  }
  if ((pTVar4 != (TOnlineAsyncOp<UE::Online::FUserFileEnumerateFiles> *)this) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("SharedThis.Get() == this",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x67f,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FUserFileEnumerateFiles>,1> *)
             (*pcVar1)();
    return pTVar5;
  }
  if ((pTVar7 == (TOnlineAsyncOp<UE::Online::FUserFileEnumerateFiles> *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x416,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FUserFileEnumerateFiles>,1> *)
             (*pcVar1)();
    return pTVar5;
  }
  __return_storage_ptr__->Object = pTVar7;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)pTVar6;
  if ((pTVar7 == (TOnlineAsyncOp<UE::Online::FUserFileEnumerateFiles> *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x26c,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FUserFileEnumerateFiles>,1> *)
             (*pcVar1)();
    return pTVar5;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return __return_storage_ptr__;
}

// AsShared @ 14ef864f0

TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FUserFileReadFile>,1> * __thiscall
TSharedFromThis<UE::Online::TOnlineAsyncOp<UE::Online::FUserFileReadFile>,1>::AsShared
          (TSharedFromThis<UE::Online::TOnlineAsyncOp<UE::Online::FUserFileReadFile>,1> *this,
          TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FUserFileReadFile>,1>
          *__return_storage_ptr__)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  TOnlineAsyncOp<UE::Online::FUserFileReadFile> *pTVar4;
  TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FUserFileReadFile>,1> *pTVar5;
  TOnlineAsyncOp<UE::Online::FUserFileReadFile> *pTVar6;
  TOnlineAsyncOp<UE::Online::FUserFileReadFile> *pTVar7;
  TOnlineAsyncOp<UE::Online::FUserFileReadFile> *pTVar8;
  bool bVar9;
  
  pTVar4 = (TOnlineAsyncOp<UE::Online::FUserFileReadFile> *)
           (this->WeakThis).WeakReferenceCount.ReferenceController;
  pTVar8 = (TOnlineAsyncOp<UE::Online::FUserFileReadFile> *)0x0;
  pTVar6 = pTVar4;
  pTVar7 = pTVar8;
  if (pTVar4 != (TOnlineAsyncOp<UE::Online::FUserFileReadFile> *)0x0) {
    iVar2 = *(int *)&((FWeakReferencer<1> *)&pTVar4->_padding_)->ReferenceController;
    do {
      pTVar6 = pTVar8;
      pTVar7 = (TOnlineAsyncOp<UE::Online::FUserFileReadFile> *)0x0;
      if (iVar2 == 0) goto LAB_14ef86531;
      LOCK();
      iVar3 = *(int *)&((FWeakReferencer<1> *)&pTVar4->_padding_)->ReferenceController;
      bVar9 = iVar2 == iVar3;
      if (bVar9) {
        *(int *)&((FWeakReferencer<1> *)&pTVar4->_padding_)->ReferenceController = iVar2 + 1;
        iVar3 = iVar2;
      }
      UNLOCK();
      iVar2 = iVar3;
    } while (!bVar9);
    pTVar6 = pTVar4;
    pTVar7 = (this->WeakThis).Object;
  }
LAB_14ef86531:
  pTVar4 = (TOnlineAsyncOp<UE::Online::FUserFileReadFile> *)&pTVar7->_padding_;
  if (pTVar7 == (TOnlineAsyncOp<UE::Online::FUserFileReadFile> *)0x0) {
    pTVar4 = pTVar8;
  }
  if ((pTVar4 != (TOnlineAsyncOp<UE::Online::FUserFileReadFile> *)this) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("SharedThis.Get() == this",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x67f,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FUserFileReadFile>,1> *)(*pcVar1)();
    return pTVar5;
  }
  if ((pTVar7 == (TOnlineAsyncOp<UE::Online::FUserFileReadFile> *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x416,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FUserFileReadFile>,1> *)(*pcVar1)();
    return pTVar5;
  }
  __return_storage_ptr__->Object = pTVar7;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)pTVar6;
  if ((pTVar7 == (TOnlineAsyncOp<UE::Online::FUserFileReadFile> *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x26c,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FUserFileReadFile>,1> *)(*pcVar1)();
    return pTVar5;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return __return_storage_ptr__;
}

// AsShared @ 14ef86600

TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FUserFileWriteFile>,1> * __thiscall
TSharedFromThis<UE::Online::TOnlineAsyncOp<UE::Online::FUserFileWriteFile>,1>::AsShared
          (TSharedFromThis<UE::Online::TOnlineAsyncOp<UE::Online::FUserFileWriteFile>,1> *this,
          TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FUserFileWriteFile>,1>
          *__return_storage_ptr__)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  TOnlineAsyncOp<UE::Online::FUserFileWriteFile> *pTVar4;
  TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FUserFileWriteFile>,1> *pTVar5;
  TOnlineAsyncOp<UE::Online::FUserFileWriteFile> *pTVar6;
  TOnlineAsyncOp<UE::Online::FUserFileWriteFile> *pTVar7;
  TOnlineAsyncOp<UE::Online::FUserFileWriteFile> *pTVar8;
  bool bVar9;
  
  pTVar4 = (TOnlineAsyncOp<UE::Online::FUserFileWriteFile> *)
           (this->WeakThis).WeakReferenceCount.ReferenceController;
  pTVar8 = (TOnlineAsyncOp<UE::Online::FUserFileWriteFile> *)0x0;
  pTVar6 = pTVar4;
  pTVar7 = pTVar8;
  if (pTVar4 != (TOnlineAsyncOp<UE::Online::FUserFileWriteFile> *)0x0) {
    iVar2 = *(int *)&((FWeakReferencer<1> *)&pTVar4->_padding_)->ReferenceController;
    do {
      pTVar6 = pTVar8;
      pTVar7 = (TOnlineAsyncOp<UE::Online::FUserFileWriteFile> *)0x0;
      if (iVar2 == 0) goto LAB_14ef86641;
      LOCK();
      iVar3 = *(int *)&((FWeakReferencer<1> *)&pTVar4->_padding_)->ReferenceController;
      bVar9 = iVar2 == iVar3;
      if (bVar9) {
        *(int *)&((FWeakReferencer<1> *)&pTVar4->_padding_)->ReferenceController = iVar2 + 1;
        iVar3 = iVar2;
      }
      UNLOCK();
      iVar2 = iVar3;
    } while (!bVar9);
    pTVar6 = pTVar4;
    pTVar7 = (this->WeakThis).Object;
  }
LAB_14ef86641:
  pTVar4 = (TOnlineAsyncOp<UE::Online::FUserFileWriteFile> *)&pTVar7->_padding_;
  if (pTVar7 == (TOnlineAsyncOp<UE::Online::FUserFileWriteFile> *)0x0) {
    pTVar4 = pTVar8;
  }
  if ((pTVar4 != (TOnlineAsyncOp<UE::Online::FUserFileWriteFile> *)this) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("SharedThis.Get() == this",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x67f,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FUserFileWriteFile>,1> *)(*pcVar1)()
    ;
    return pTVar5;
  }
  if ((pTVar7 == (TOnlineAsyncOp<UE::Online::FUserFileWriteFile> *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x416,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FUserFileWriteFile>,1> *)(*pcVar1)()
    ;
    return pTVar5;
  }
  __return_storage_ptr__->Object = pTVar7;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)pTVar6;
  if ((pTVar7 == (TOnlineAsyncOp<UE::Online::FUserFileWriteFile> *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x26c,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<UE::Online::TOnlineAsyncOp<UE::Online::FUserFileWriteFile>,1> *)(*pcVar1)()
    ;
    return pTVar5;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return __return_storage_ptr__;
}

