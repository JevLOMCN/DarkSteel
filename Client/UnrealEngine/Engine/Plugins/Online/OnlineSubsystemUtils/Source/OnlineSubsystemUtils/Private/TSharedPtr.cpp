// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineSubsystemUtils
// Functions: 40

// TSharedPtr<FFindTurnBasedMatchCallbackProxyMatchmakerDelegate,1><FFindTurnBasedMatchCallbackProxyMatchmakerDelegate> @ 14ec48ec0

TSharedPtr<FFindTurnBasedMatchCallbackProxyMatchmakerDelegate,1> * __thiscall
TSharedPtr<FFindTurnBasedMatchCallbackProxyMatchmakerDelegate,1>::
TSharedPtr<FFindTurnBasedMatchCallbackProxyMatchmakerDelegate,1><FFindTurnBasedMatchCallbackProxyMatchmakerDelegate>
          (TSharedPtr<FFindTurnBasedMatchCallbackProxyMatchmakerDelegate,1> *this,
          FFindTurnBasedMatchCallbackProxyMatchmakerDelegate *param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  TReferenceControllerBase<1> *pTVar4;
  
  this->Object = param_1;
  pTVar4 = ::operator_new(0x18);
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    pTVar4->SharedReferenceCount = (atomic<int>)0x1;
    pTVar4->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VFFindTurnBasedMatchCallbackProxyMatchmakerDelegate__U__DefaultDeleter_VFFindTurnBasedMatchCallbackProxyMatchmakerDelegate___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar4->WeakReferenceCount = (atomic<int>)0x1;
    pTVar4[1]._padding_ = (longlong)param_1;
  }
  (this->SharedReferenceCount).ReferenceController = pTVar4;
  if (param_1 != (FFindTurnBasedMatchCallbackProxyMatchmakerDelegate *)0x0) {
    if (((param_1->_padding_ != 0) && (param_1->_padding_ != 0)) &&
       (0 < *(int *)(param_1->_padding_ + 8))) {
      return this;
    }
    pTVar4 = (this->SharedReferenceCount).ReferenceController;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
      UNLOCK();
    }
    param_1->_padding_ = (longlong)param_1;
    if (pTVar4 != (TReferenceControllerBase<1> *)param_1->_padding_) {
      if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar4->WeakReferenceCount = (atomic<int>)((int)pTVar4->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = (longlong *)param_1->_padding_;
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar3 + 8))(plVar3,1);
        }
      }
      param_1->_padding_ = (longlong)pTVar4;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
    return this;
  }
  return this;
}

// TSharedPtr<FSocket,1><FSocket,FSocketDeleter> @ 14ec48fc0

TSharedPtr<FSocket,1> * __thiscall
TSharedPtr<FSocket,1>::TSharedPtr<FSocket,1><FSocket,FSocketDeleter>
          (TSharedPtr<FSocket,1> *this,FSocket *param_1,FSocketDeleter *param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  TReferenceControllerBase<1> *pTVar4;
  
  this->Object = param_1;
  pTVar4 = ::operator_new(0x20);
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    pTVar4[1]._padding_ = (longlong)param_2->Subsystem;
    pTVar4->SharedReferenceCount = (atomic<int>)0x1;
    pTVar4->WeakReferenceCount = (atomic<int>)0x1;
    pTVar4->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VFSocket__VFSocketDeleter___00_SharedPointerInternals__6B_
    ;
    *(FSocket **)&pTVar4[1].SharedReferenceCount = param_1;
  }
  (this->SharedReferenceCount).ReferenceController = pTVar4;
  if (param_1 != (FSocket *)0x0) {
    if (((param_1->_padding_ == 0) || (param_1->_padding_ == 0)) ||
       (*(int *)(param_1->_padding_ + 8) < 1)) {
      pTVar4 = (this->SharedReferenceCount).ReferenceController;
      if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
        UNLOCK();
      }
      param_1->_padding_ = (longlong)param_1;
      if (pTVar4 != (TReferenceControllerBase<1> *)param_1->_padding_) {
        if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar4->WeakReferenceCount = (atomic<int>)((int)pTVar4->WeakReferenceCount + 1);
          UNLOCK();
        }
        plVar3 = (longlong *)param_1->_padding_;
        if (plVar3 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)plVar3 + 0xc);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            (**(code **)(*plVar3 + 8))(plVar3,1);
          }
        }
        param_1->_padding_ = (longlong)pTVar4;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
    }
    return this;
  }
  return this;
}

// operator=<FOnlineAchievementsWrite> @ 14ec491c0

TSharedPtr<FOnlineAchievementsWrite,1> * __thiscall
TSharedPtr<FOnlineAchievementsWrite,1>::operator=<FOnlineAchievementsWrite>
          (TSharedPtr<FOnlineAchievementsWrite,1> *this,
          TRawPtrProxy<FOnlineAchievementsWrite> *param_1)

{
  FOnlineAchievementsWrite *pFVar1;
  TSharedPtr<FOnlineAchievementsWrite,1> local_18;
  
  pFVar1 = param_1->Object;
  local_18.Object = pFVar1;
  local_18.SharedReferenceCount.ReferenceController = ::operator_new(0x18);
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount = (atomic<int>)0x1;
    (local_18.SharedReferenceCount.ReferenceController)->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VFOnlineAchievementsWrite__U__DefaultDeleter_VFOnlineAchievementsWrite___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    (local_18.SharedReferenceCount.ReferenceController)->WeakReferenceCount = (atomic<int>)0x1;
    local_18.SharedReferenceCount.ReferenceController[1]._padding_ = (longlong)pFVar1;
  }
  if (this != &local_18) {
    this->Object = pFVar1;
    local_18.Object = (FOnlineAchievementsWrite *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&this->SharedReferenceCount,&local_18.SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return this;
}

// operator=<FOnlineLeaderboardRead> @ 14ec49250

TSharedPtr<FOnlineLeaderboardRead,1> * __thiscall
TSharedPtr<FOnlineLeaderboardRead,1>::operator=<FOnlineLeaderboardRead>
          (TSharedPtr<FOnlineLeaderboardRead,1> *this,TRawPtrProxy<FOnlineLeaderboardRead> *param_1)

{
  FOnlineLeaderboardRead *pFVar1;
  TSharedPtr<FOnlineLeaderboardRead,1> local_18;
  
  pFVar1 = param_1->Object;
  local_18.Object = pFVar1;
  local_18.SharedReferenceCount.ReferenceController = ::operator_new(0x18);
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount = (atomic<int>)0x1;
    (local_18.SharedReferenceCount.ReferenceController)->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VFOnlineLeaderboardRead__U__DefaultDeleter_VFOnlineLeaderboardRead___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    (local_18.SharedReferenceCount.ReferenceController)->WeakReferenceCount = (atomic<int>)0x1;
    local_18.SharedReferenceCount.ReferenceController[1]._padding_ = (longlong)pFVar1;
  }
  if (this != &local_18) {
    this->Object = pFVar1;
    local_18.Object = (FOnlineLeaderboardRead *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&this->SharedReferenceCount,&local_18.SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return this;
}

// operator=<FOnlineSessionSearch> @ 14ec492e0

TSharedPtr<FOnlineSessionSearch,1> * __thiscall
TSharedPtr<FOnlineSessionSearch,1>::operator=<FOnlineSessionSearch>
          (TSharedPtr<FOnlineSessionSearch,1> *this,TRawPtrProxy<FOnlineSessionSearch> *param_1)

{
  FOnlineSessionSearch *pFVar1;
  TSharedPtr<FOnlineSessionSearch,1> local_18;
  
  pFVar1 = param_1->Object;
  local_18.Object = pFVar1;
  local_18.SharedReferenceCount.ReferenceController = ::operator_new(0x18);
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount = (atomic<int>)0x1;
    (local_18.SharedReferenceCount.ReferenceController)->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VFOnlineSessionSearch__U__DefaultDeleter_VFOnlineSessionSearch___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    (local_18.SharedReferenceCount.ReferenceController)->WeakReferenceCount = (atomic<int>)0x1;
    local_18.SharedReferenceCount.ReferenceController[1]._padding_ = (longlong)pFVar1;
  }
  if (this != &local_18) {
    this->Object = pFVar1;
    local_18.Object = (FOnlineSessionSearch *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&this->SharedReferenceCount,&local_18.SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return this;
}

// operator*<FInternetAddr_const_> @ 14ec49370

FInternetAddr * __thiscall
TSharedPtr<FInternetAddr_const_,1>::operator*<FInternetAddr_const_>
          (TSharedPtr<FInternetAddr_const_,1> *this)

{
  code *pcVar1;
  bool bVar2;
  FInternetAddr *pFVar3;
  
  if (this->Object != (FInternetAddr *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x44d,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FInternetAddr *)(*pcVar1)();
    return pFVar3;
  }
  return this->Object;
}

// operator-> @ 14ec58070

FOnlineLeaderboardRead * __thiscall
TSharedPtr<FOnlineLeaderboardRead,1>::operator->(TSharedPtr<FOnlineLeaderboardRead,1> *this)

{
  code *pcVar1;
  bool bVar2;
  FOnlineLeaderboardRead *pFVar3;
  
  if (this->Object != (FOnlineLeaderboardRead *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FOnlineLeaderboardRead *)(*pcVar1)();
    return pFVar3;
  }
  return this->Object;
}

// operator-> @ 14ec580c0

FOnlineSessionSearch * __thiscall
TSharedPtr<FOnlineSessionSearch,1>::operator->(TSharedPtr<FOnlineSessionSearch,1> *this)

{
  code *pcVar1;
  bool bVar2;
  FOnlineSessionSearch *pFVar3;
  
  if (this->Object != (FOnlineSessionSearch *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FOnlineSessionSearch *)(*pcVar1)();
    return pFVar3;
  }
  return this->Object;
}

// operator-> @ 14ec58110

FUserOnlineAccount * __thiscall
TSharedPtr<FUserOnlineAccount,1>::operator->(TSharedPtr<FUserOnlineAccount,1> *this)

{
  code *pcVar1;
  bool bVar2;
  FUserOnlineAccount *pFVar3;
  
  if (this->Object != (FUserOnlineAccount *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FUserOnlineAccount *)(*pcVar1)();
    return pFVar3;
  }
  return this->Object;
}

// operator-> @ 14ec58160

IOnlinePurchase * __thiscall
TSharedPtr<IOnlinePurchase,1>::operator->(TSharedPtr<IOnlinePurchase,1> *this)

{
  code *pcVar1;
  bool bVar2;
  IOnlinePurchase *pIVar3;
  
  if (this->Object != (IOnlinePurchase *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pIVar3 = (IOnlinePurchase *)(*pcVar1)();
    return pIVar3;
  }
  return this->Object;
}

// ToSharedRef @ 14ec9ba90

TSharedRef<FInternetAddr,1> * __thiscall
TSharedPtr<FInternetAddr,1>::ToSharedRef
          (TSharedPtr<FInternetAddr,1> *this,TSharedRef<FInternetAddr,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  TSharedRef<FInternetAddr,1> *pTVar4;
  
  if (this->Object == (FInternetAddr *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x408,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TSharedRef<FInternetAddr,1> *)(*pcVar2)();
      return pTVar4;
    }
  }
  __return_storage_ptr__->Object = this->Object;
  pTVar1 = (this->SharedReferenceCount).ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (__return_storage_ptr__->Object == (FInternetAddr *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x25d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TSharedRef<FInternetAddr,1> *)(*pcVar2)();
      return pTVar4;
    }
  }
  return __return_storage_ptr__;
}

// TSharedPtr<IAutomationLatentCommand,1><FTestIdentityInterfaceLoginOut> @ 14eca9840

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TSharedPtr<IAutomationLatentCommand,1> * __thiscall
TSharedPtr<IAutomationLatentCommand,1>::
TSharedPtr<IAutomationLatentCommand,1><FTestIdentityInterfaceLoginOut>
          (TSharedPtr<IAutomationLatentCommand,1> *this,
          TRawPtrProxy<FTestIdentityInterfaceLoginOut> *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  FTestIdentityInterfaceLoginOut *pFVar4;
  longlong *plVar5;
  TReferenceControllerBase<1> *pTVar6;
  
  this->Object = (IAutomationLatentCommand *)param_1->Object;
  pFVar4 = param_1->Object;
  pTVar6 = ::operator_new(0x18);
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VFTestIdentityInterfaceLoginOut__U__DefaultDeleter_VFTestIdentityInterfaceLoginOut___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6[1]._padding_ = (longlong)pFVar4;
  }
  (this->SharedReferenceCount).ReferenceController = pTVar6;
  pFVar4 = param_1->Object;
  if ((pFVar4 != (FTestIdentityInterfaceLoginOut *)0x0) &&
     (((plVar1 = &pFVar4->_padding_, pFVar4->_padding_ == 0 || (*plVar1 == 0)) ||
      (*(int *)(*plVar1 + 8) < 1)))) {
    pTVar6 = (this->SharedReferenceCount).ReferenceController;
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    pFVar4->_padding_ = (longlong)pFVar4;
    if (pTVar6 != (TReferenceControllerBase<1> *)*plVar1) {
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar6->WeakReferenceCount = (atomic<int>)((int)pTVar6->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar5 = (longlong *)*plVar1;
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar5 + 8))(plVar5,1);
        }
      }
      *plVar1 = (longlong)pTVar6;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  }
  return this;
}

// operator-> @ 14ecadd90

FOnlineAchievementsWrite * __thiscall
TSharedPtr<FOnlineAchievementsWrite,1>::operator->(TSharedPtr<FOnlineAchievementsWrite,1> *this)

{
  code *pcVar1;
  bool bVar2;
  FOnlineAchievementsWrite *pFVar3;
  
  if (this->Object != (FOnlineAchievementsWrite *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FOnlineAchievementsWrite *)(*pcVar1)();
    return pFVar3;
  }
  return this->Object;
}

// operator-> @ 14ecadde0

IOnlineEntitlements * __thiscall
TSharedPtr<IOnlineEntitlements,1>::operator->(TSharedPtr<IOnlineEntitlements,1> *this)

{
  code *pcVar1;
  bool bVar2;
  IOnlineEntitlements *pIVar3;
  
  if (this->Object != (IOnlineEntitlements *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pIVar3 = (IOnlineEntitlements *)(*pcVar1)();
    return pIVar3;
  }
  return this->Object;
}

// operator-> @ 14ecade30

IOnlineFriends * __thiscall
TSharedPtr<IOnlineFriends,1>::operator->(TSharedPtr<IOnlineFriends,1> *this)

{
  code *pcVar1;
  bool bVar2;
  IOnlineFriends *pIVar3;
  
  if (this->Object != (IOnlineFriends *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pIVar3 = (IOnlineFriends *)(*pcVar1)();
    return pIVar3;
  }
  return this->Object;
}

// operator-> @ 14ecade80

IOnlineIdentity * __thiscall
TSharedPtr<IOnlineIdentity,1>::operator->(TSharedPtr<IOnlineIdentity,1> *this)

{
  code *pcVar1;
  bool bVar2;
  IOnlineIdentity *pIVar3;
  
  if (this->Object != (IOnlineIdentity *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pIVar3 = (IOnlineIdentity *)(*pcVar1)();
    return pIVar3;
  }
  return this->Object;
}

// operator-> @ 14ecaded0

IOnlineSharedCloud * __thiscall
TSharedPtr<IOnlineSharedCloud,1>::operator->(TSharedPtr<IOnlineSharedCloud,1> *this)

{
  code *pcVar1;
  bool bVar2;
  IOnlineSharedCloud *pIVar3;
  
  if (this->Object != (IOnlineSharedCloud *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pIVar3 = (IOnlineSharedCloud *)(*pcVar1)();
    return pIVar3;
  }
  return this->Object;
}

// TSharedPtr<IVoiceEngine,1><FVoiceEngineImpl> @ 14ecd43a0

TSharedPtr<IVoiceEngine,1> * __thiscall
TSharedPtr<IVoiceEngine,1>::TSharedPtr<IVoiceEngine,1><FVoiceEngineImpl>
          (TSharedPtr<IVoiceEngine,1> *this,TRawPtrProxy<FVoiceEngineImpl> *param_1)

{
  FVoiceEngineImpl *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  
  this->Object = (IVoiceEngine *)param_1->Object;
  pFVar1 = param_1->Object;
  pTVar2 = ::operator_new(0x18);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    pTVar2->SharedReferenceCount = (atomic<int>)0x1;
    pTVar2->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VFVoiceEngineImpl__U__DefaultDeleter_VFVoiceEngineImpl___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar2->WeakReferenceCount = (atomic<int>)0x1;
    pTVar2[1]._padding_ = (longlong)pFVar1;
    (this->SharedReferenceCount).ReferenceController = pTVar2;
    return this;
  }
  (this->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return this;
}

// TSharedPtr<FVoicePacket,1><FVoicePacketImpl> @ 14ecd4410

TSharedPtr<FVoicePacket,1> * __thiscall
TSharedPtr<FVoicePacket,1>::TSharedPtr<FVoicePacket,1><FVoicePacketImpl>
          (TSharedPtr<FVoicePacket,1> *this,TRawPtrProxy<FVoicePacketImpl> *param_1)

{
  FVoicePacketImpl *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  
  this->Object = (FVoicePacket *)param_1->Object;
  pFVar1 = param_1->Object;
  pTVar2 = ::operator_new(0x18);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    pTVar2->SharedReferenceCount = (atomic<int>)0x1;
    pTVar2->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VFVoicePacketImpl__U__DefaultDeleter_VFVoicePacketImpl___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar2->WeakReferenceCount = (atomic<int>)0x1;
    pTVar2[1]._padding_ = (longlong)pFVar1;
    (this->SharedReferenceCount).ReferenceController = pTVar2;
    return this;
  }
  (this->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return this;
}

// TSharedPtr<FVoicePacketImpl,1><FVoicePacketImpl> @ 14ecd4480

TSharedPtr<FVoicePacketImpl,1> * __thiscall
TSharedPtr<FVoicePacketImpl,1>::TSharedPtr<FVoicePacketImpl,1><FVoicePacketImpl>
          (TSharedPtr<FVoicePacketImpl,1> *this,TRawPtrProxy<FVoicePacketImpl> *param_1)

{
  FVoicePacketImpl *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  
  this->Object = param_1->Object;
  pFVar1 = param_1->Object;
  pTVar2 = ::operator_new(0x18);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    pTVar2->SharedReferenceCount = (atomic<int>)0x1;
    pTVar2->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VFVoicePacketImpl__U__DefaultDeleter_VFVoicePacketImpl___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar2->WeakReferenceCount = (atomic<int>)0x1;
    pTVar2[1]._padding_ = (longlong)pFVar1;
    (this->SharedReferenceCount).ReferenceController = pTVar2;
    return this;
  }
  (this->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return this;
}

// operator=<TestLeaderboardRead> @ 14ecd44f0

TSharedPtr<FOnlineLeaderboardRead,1> * __thiscall
TSharedPtr<FOnlineLeaderboardRead,1>::operator=<TestLeaderboardRead>
          (TSharedPtr<FOnlineLeaderboardRead,1> *this,TRawPtrProxy<TestLeaderboardRead> *param_1)

{
  FOnlineLeaderboardRead *pFVar1;
  TSharedPtr<FOnlineLeaderboardRead,1> local_18;
  
  pFVar1 = (FOnlineLeaderboardRead *)param_1->Object;
  local_18.Object = pFVar1;
  local_18.SharedReferenceCount.ReferenceController = ::operator_new(0x18);
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount = (atomic<int>)0x1;
    (local_18.SharedReferenceCount.ReferenceController)->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VTestLeaderboardRead__U__DefaultDeleter_VTestLeaderboardRead___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    (local_18.SharedReferenceCount.ReferenceController)->WeakReferenceCount = (atomic<int>)0x1;
    local_18.SharedReferenceCount.ReferenceController[1]._padding_ = (longlong)pFVar1;
  }
  if (this != &local_18) {
    this->Object = pFVar1;
    local_18.Object = (FOnlineLeaderboardRead *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&this->SharedReferenceCount,&local_18.SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return this;
}

// operator=<TestOnlineGameSettings> @ 14ecd4580

TSharedPtr<TestOnlineGameSettings,1> * __thiscall
TSharedPtr<TestOnlineGameSettings,1>::operator=<TestOnlineGameSettings>
          (TSharedPtr<TestOnlineGameSettings,1> *this,TRawPtrProxy<TestOnlineGameSettings> *param_1)

{
  TestOnlineGameSettings *pTVar1;
  TSharedPtr<TestOnlineGameSettings,1> local_18;
  
  pTVar1 = param_1->Object;
  local_18.Object = pTVar1;
  local_18.SharedReferenceCount.ReferenceController = ::operator_new(0x18);
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount = (atomic<int>)0x1;
    (local_18.SharedReferenceCount.ReferenceController)->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VTestOnlineGameSettings__U__DefaultDeleter_VTestOnlineGameSettings___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    (local_18.SharedReferenceCount.ReferenceController)->WeakReferenceCount = (atomic<int>)0x1;
    local_18.SharedReferenceCount.ReferenceController[1]._padding_ = (longlong)pTVar1;
  }
  if (this != &local_18) {
    this->Object = pTVar1;
    local_18.Object = (TestOnlineGameSettings *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&this->SharedReferenceCount,&local_18.SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return this;
}

// operator=<TestOnlineSearchSettings> @ 14ecd4610

TSharedPtr<TestOnlineSearchSettings,1> * __thiscall
TSharedPtr<TestOnlineSearchSettings,1>::operator=<TestOnlineSearchSettings>
          (TSharedPtr<TestOnlineSearchSettings,1> *this,
          TRawPtrProxy<TestOnlineSearchSettings> *param_1)

{
  TestOnlineSearchSettings *pTVar1;
  TSharedPtr<TestOnlineSearchSettings,1> local_18;
  
  pTVar1 = param_1->Object;
  local_18.Object = pTVar1;
  local_18.SharedReferenceCount.ReferenceController = ::operator_new(0x18);
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount = (atomic<int>)0x1;
    (local_18.SharedReferenceCount.ReferenceController)->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VTestOnlineSearchSettings__U__DefaultDeleter_VTestOnlineSearchSettings___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    (local_18.SharedReferenceCount.ReferenceController)->WeakReferenceCount = (atomic<int>)0x1;
    local_18.SharedReferenceCount.ReferenceController[1]._padding_ = (longlong)pTVar1;
  }
  if (this != &local_18) {
    this->Object = pTVar1;
    local_18.Object = (TestOnlineSearchSettings *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&this->SharedReferenceCount,&local_18.SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return this;
}

// operator*<TestOnlineGameSettings> @ 14ecd4740

TestOnlineGameSettings * __thiscall
TSharedPtr<TestOnlineGameSettings,1>::operator*<TestOnlineGameSettings>
          (TSharedPtr<TestOnlineGameSettings,1> *this)

{
  code *pcVar1;
  bool bVar2;
  TestOnlineGameSettings *pTVar3;
  
  if (this->Object != (TestOnlineGameSettings *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x44d,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pTVar3 = (TestOnlineGameSettings *)(*pcVar1)();
    return pTVar3;
  }
  return this->Object;
}

// operator= @ 14ecdbf00

TSharedPtr<IVoiceCapture,1> * __thiscall
TSharedPtr<IVoiceCapture,1>::operator=(TSharedPtr<IVoiceCapture,1> *this,FNullTag *param_1)

{
  TSharedPtr<IVoiceCapture,1> local_18;
  
  local_18.Object = (IVoiceCapture *)0x0;
  local_18.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (this != &local_18) {
    this->Object = (IVoiceCapture *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&this->SharedReferenceCount,&local_18.SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return this;
}

// operator= @ 14ecdbf50

TSharedPtr<IVoiceDecoder,1> * __thiscall
TSharedPtr<IVoiceDecoder,1>::operator=(TSharedPtr<IVoiceDecoder,1> *this,FNullTag *param_1)

{
  TSharedPtr<IVoiceDecoder,1> local_18;
  
  local_18.Object = (IVoiceDecoder *)0x0;
  local_18.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (this != &local_18) {
    this->Object = (IVoiceDecoder *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&this->SharedReferenceCount,&local_18.SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return this;
}

// operator= @ 14ecdbfa0

TSharedPtr<IVoiceEncoder,1> * __thiscall
TSharedPtr<IVoiceEncoder,1>::operator=(TSharedPtr<IVoiceEncoder,1> *this,FNullTag *param_1)

{
  TSharedPtr<IVoiceEncoder,1> local_18;
  
  local_18.Object = (IVoiceEncoder *)0x0;
  local_18.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (this != &local_18) {
    this->Object = (IVoiceEncoder *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&this->SharedReferenceCount,&local_18.SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return this;
}

// operator= @ 14ecdbff0

TSharedPtr<IVoiceEngine,1> * __thiscall
TSharedPtr<IVoiceEngine,1>::operator=
          (TSharedPtr<IVoiceEngine,1> *this,TSharedPtr<IVoiceEngine,1> *param_1)

{
  if (this != param_1) {
    this->Object = param_1->Object;
    param_1->Object = (IVoiceEngine *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&this->SharedReferenceCount,&param_1->SharedReferenceCount);
  }
  return this;
}

// operator-> @ 14ecdc030

FOnlineUserPresence * __thiscall
TSharedPtr<FOnlineUserPresence,1>::operator->(TSharedPtr<FOnlineUserPresence,1> *this)

{
  code *pcVar1;
  bool bVar2;
  FOnlineUserPresence *pFVar3;
  
  if (this->Object != (FOnlineUserPresence *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FOnlineUserPresence *)(*pcVar1)();
    return pFVar3;
  }
  return this->Object;
}

// operator-> @ 14ecdc080

IOnlineMessage * __thiscall
TSharedPtr<IOnlineMessage,1>::operator->(TSharedPtr<IOnlineMessage,1> *this)

{
  code *pcVar1;
  bool bVar2;
  IOnlineMessage *pIVar3;
  
  if (this->Object != (IOnlineMessage *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pIVar3 = (IOnlineMessage *)(*pcVar1)();
    return pIVar3;
  }
  return this->Object;
}

// operator-> @ 14ecdc0d0

IOnlinePresence * __thiscall
TSharedPtr<IOnlinePresence,1>::operator->(TSharedPtr<IOnlinePresence,1> *this)

{
  code *pcVar1;
  bool bVar2;
  IOnlinePresence *pIVar3;
  
  if (this->Object != (IOnlinePresence *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pIVar3 = (IOnlinePresence *)(*pcVar1)();
    return pIVar3;
  }
  return this->Object;
}

// operator-> @ 14ecdc120

IOnlineSession * __thiscall
TSharedPtr<IOnlineSession,1>::operator->(TSharedPtr<IOnlineSession,1> *this)

{
  code *pcVar1;
  bool bVar2;
  IOnlineSession *pIVar3;
  
  if (this->Object != (IOnlineSession *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pIVar3 = (IOnlineSession *)(*pcVar1)();
    return pIVar3;
  }
  return this->Object;
}

// operator-> @ 14ecdc170

IVoiceCapture * __thiscall
TSharedPtr<IVoiceCapture,1>::operator->(TSharedPtr<IVoiceCapture,1> *this)

{
  code *pcVar1;
  bool bVar2;
  IVoiceCapture *pIVar3;
  
  if (this->Object != (IVoiceCapture *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pIVar3 = (IVoiceCapture *)(*pcVar1)();
    return pIVar3;
  }
  return this->Object;
}

// operator-> @ 14ecdc1c0

IVoiceDecoder * __thiscall
TSharedPtr<IVoiceDecoder,1>::operator->(TSharedPtr<IVoiceDecoder,1> *this)

{
  code *pcVar1;
  bool bVar2;
  IVoiceDecoder *pIVar3;
  
  if (this->Object != (IVoiceDecoder *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pIVar3 = (IVoiceDecoder *)(*pcVar1)();
    return pIVar3;
  }
  return this->Object;
}

// operator-> @ 14ecdc210

IVoiceEncoder * __thiscall
TSharedPtr<IVoiceEncoder,1>::operator->(TSharedPtr<IVoiceEncoder,1> *this)

{
  code *pcVar1;
  bool bVar2;
  IVoiceEncoder *pIVar3;
  
  if (this->Object != (IVoiceEncoder *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pIVar3 = (IVoiceEncoder *)(*pcVar1)();
    return pIVar3;
  }
  return this->Object;
}

// operator-> @ 14ecdc260

IVoiceEngine * __thiscall TSharedPtr<IVoiceEngine,1>::operator->(TSharedPtr<IVoiceEngine,1> *this)

{
  code *pcVar1;
  bool bVar2;
  IVoiceEngine *pIVar3;
  
  if (this->Object != (IVoiceEngine *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pIVar3 = (IVoiceEngine *)(*pcVar1)();
    return pIVar3;
  }
  return this->Object;
}

// operator-> @ 14ecdc2b0

TestOnlineGameSettings * __thiscall
TSharedPtr<TestOnlineGameSettings,1>::operator->(TSharedPtr<TestOnlineGameSettings,1> *this)

{
  code *pcVar1;
  bool bVar2;
  TestOnlineGameSettings *pTVar3;
  
  if (this->Object != (TestOnlineGameSettings *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pTVar3 = (TestOnlineGameSettings *)(*pcVar1)();
    return pTVar3;
  }
  return this->Object;
}

// operator-> @ 14ecdc300

TestOnlineSearchSettings * __thiscall
TSharedPtr<TestOnlineSearchSettings,1>::operator->(TSharedPtr<TestOnlineSearchSettings,1> *this)

{
  code *pcVar1;
  bool bVar2;
  TestOnlineSearchSettings *pTVar3;
  
  if (this->Object != (TestOnlineSearchSettings *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pTVar3 = (TestOnlineSearchSettings *)(*pcVar1)();
    return pTVar3;
  }
  return this->Object;
}

// ToSharedRef @ 14ed076c0

TSharedRef<FUniqueNetId_const_,1> * __thiscall
TSharedPtr<FUniqueNetId_const_,1>::ToSharedRef
          (TSharedPtr<FUniqueNetId_const_,1> *this,
          TSharedRef<FUniqueNetId_const_,1> *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TSharedRef<FUniqueNetId_const_,1> *pTVar3;
  
  if (this->Object == (FUniqueNetId *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x416,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TSharedRef<FUniqueNetId_const_,1> *)(*pcVar1)();
      return pTVar3;
    }
  }
  __return_storage_ptr__->Object = this->Object;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (this->SharedReferenceCount).ReferenceController;
  (this->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  this->Object = (FUniqueNetId *)0x0;
  if (__return_storage_ptr__->Object == (FUniqueNetId *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x26c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TSharedRef<FUniqueNetId_const_,1> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return __return_storage_ptr__;
}

// ToSharedRef @ 14ed07760

TSharedRef<TestOnlineSearchSettings,1> * __thiscall
TSharedPtr<TestOnlineSearchSettings,1>::ToSharedRef
          (TSharedPtr<TestOnlineSearchSettings,1> *this,
          TSharedRef<TestOnlineSearchSettings,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  TSharedRef<TestOnlineSearchSettings,1> *pTVar4;
  
  if (this->Object == (TestOnlineSearchSettings *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x408,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TSharedRef<TestOnlineSearchSettings,1> *)(*pcVar2)();
      return pTVar4;
    }
  }
  __return_storage_ptr__->Object = this->Object;
  pTVar1 = (this->SharedReferenceCount).ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (__return_storage_ptr__->Object == (TestOnlineSearchSettings *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x25d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TSharedRef<TestOnlineSearchSettings,1> *)(*pcVar2)();
      return pTVar4;
    }
  }
  return __return_storage_ptr__;
}

