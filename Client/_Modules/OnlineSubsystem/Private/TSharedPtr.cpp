// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineSubsystem
// Functions: 5

// TSharedPtr<FOnlineAchievementsWrite,1><FOnlineAchievementsWrite> @ 14eb26c90

TSharedPtr<FOnlineAchievementsWrite,1> * __thiscall
TSharedPtr<FOnlineAchievementsWrite,1>::
TSharedPtr<FOnlineAchievementsWrite,1><FOnlineAchievementsWrite>
          (TSharedPtr<FOnlineAchievementsWrite,1> *this,
          TRawPtrProxy<FOnlineAchievementsWrite> *param_1)

{
  FOnlineAchievementsWrite *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  
  this->Object = param_1->Object;
  pFVar1 = param_1->Object;
  pTVar2 = ::operator_new(0x18);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    pTVar2->SharedReferenceCount = (atomic<int>)0x1;
    pTVar2->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VFOnlineAchievementsWrite__U__DefaultDeleter_VFOnlineAchievementsWrite___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar2->WeakReferenceCount = (atomic<int>)0x1;
    pTVar2[1]._padding_ = (longlong)pFVar1;
    (this->SharedReferenceCount).ReferenceController = pTVar2;
    return this;
  }
  (this->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return this;
}

// TSharedPtr<FOnlineLeaderboardRead,1><FOnlineLeaderboardRead> @ 14eb26d00

TSharedPtr<FOnlineLeaderboardRead,1> * __thiscall
TSharedPtr<FOnlineLeaderboardRead,1>::TSharedPtr<FOnlineLeaderboardRead,1><FOnlineLeaderboardRead>
          (TSharedPtr<FOnlineLeaderboardRead,1> *this,TRawPtrProxy<FOnlineLeaderboardRead> *param_1)

{
  FOnlineLeaderboardRead *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  
  this->Object = param_1->Object;
  pFVar1 = param_1->Object;
  pTVar2 = ::operator_new(0x18);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    pTVar2->SharedReferenceCount = (atomic<int>)0x1;
    pTVar2->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VFOnlineLeaderboardRead__U__DefaultDeleter_VFOnlineLeaderboardRead___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar2->WeakReferenceCount = (atomic<int>)0x1;
    pTVar2[1]._padding_ = (longlong)pFVar1;
    (this->SharedReferenceCount).ReferenceController = pTVar2;
    return this;
  }
  (this->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return this;
}

// operator-> @ 14eb374a0

FOnlineSessionInfo * __thiscall
TSharedPtr<FOnlineSessionInfo,1>::operator->(TSharedPtr<FOnlineSessionInfo,1> *this)

{
  code *pcVar1;
  bool bVar2;
  FOnlineSessionInfo *pFVar3;
  
  if (this->Object != (FOnlineSessionInfo *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FOnlineSessionInfo *)(*pcVar1)();
    return pFVar3;
  }
  return this->Object;
}

// ToSharedRef @ 14ec16a30

TSharedRef<FOnlineAchievementsWrite,1> * __thiscall
TSharedPtr<FOnlineAchievementsWrite,1>::ToSharedRef
          (TSharedPtr<FOnlineAchievementsWrite,1> *this,
          TSharedRef<FOnlineAchievementsWrite,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  TSharedRef<FOnlineAchievementsWrite,1> *pTVar4;
  
  if (this->Object == (FOnlineAchievementsWrite *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x408,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TSharedRef<FOnlineAchievementsWrite,1> *)(*pcVar2)();
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
  if (__return_storage_ptr__->Object == (FOnlineAchievementsWrite *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x25d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TSharedRef<FOnlineAchievementsWrite,1> *)(*pcVar2)();
      return pTVar4;
    }
  }
  return __return_storage_ptr__;
}

// ToSharedRef @ 14ec16ad0

TSharedRef<FOnlineLeaderboardRead,1> * __thiscall
TSharedPtr<FOnlineLeaderboardRead,1>::ToSharedRef
          (TSharedPtr<FOnlineLeaderboardRead,1> *this,
          TSharedRef<FOnlineLeaderboardRead,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  TSharedRef<FOnlineLeaderboardRead,1> *pTVar4;
  
  if (this->Object == (FOnlineLeaderboardRead *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x408,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TSharedRef<FOnlineLeaderboardRead,1> *)(*pcVar2)();
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
  if (__return_storage_ptr__->Object == (FOnlineLeaderboardRead *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x25d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TSharedRef<FOnlineLeaderboardRead,1> *)(*pcVar2)();
      return pTVar4;
    }
  }
  return __return_storage_ptr__;
}

