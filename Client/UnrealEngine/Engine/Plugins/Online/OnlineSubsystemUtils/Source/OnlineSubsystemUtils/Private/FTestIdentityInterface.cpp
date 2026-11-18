// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineSubsystemUtils
// Functions: 8

// FinishTest @ 14ecb8f70

void __thiscall FTestIdentityInterface::FinishTest(FTestIdentityInterface *this)

{
  IOnlineIdentity *pIVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  
  pIVar1 = (this->OnlineIdentity).Object;
  if (pIVar1 != (IOnlineIdentity *)0x0) {
    (**(code **)(pIVar1->_padding_ + 0x98))
              (pIVar1,this->LocalUserIdx,&this->OnLoginCompleteDelegateHandle);
    if ((this->OnlineIdentity).Object == (IOnlineIdentity *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pIVar1 = (this->OnlineIdentity).Object;
    (**(code **)(pIVar1->_padding_ + 0xc0))
              (pIVar1,this->LocalUserIdx,&this->OnLogoutCompleteDelegateHandle);
  }
  this->bIsTestFinished = true;
  pFVar2 = (this->AccountCredentials).Token.Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->AccountCredentials).Id.Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->AccountCredentials).Type.Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->UserInfo).SharedReferenceCount.ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnLogoutCompleteDelegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnLoginCompleteDelegate);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->OnlineIdentity).SharedReferenceCount.ReferenceController);
  pFVar2 = (this->SubsystemName).Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  ::operator_delete(this,0xb0);
  return;
}

// GetTestStatus @ 14ecbc7b0

bool __thiscall FTestIdentityInterface::GetTestStatus(FTestIdentityInterface *this)

{
  return this->bIsTestFinished;
}

// IsTheUserLoggedIn @ 14ecbd930

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall FTestIdentityInterface::IsTheUserLoggedIn(FTestIdentityInterface *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  FName *pFVar6;
  IOnlineSubsystem *pIVar7;
  longlong *plVar8;
  FName FVar9;
  TReferenceControllerBase<1> *pTVar10;
  TReferenceControllerBase<1> *pTVar11;
  FName local_res8;
  FName local_res10;
  undefined1 local_28 [8];
  TReferenceControllerBase<1> *local_20;
  
  pTVar10 = (TReferenceControllerBase<1> *)0x0;
  iVar1 = (this->SubsystemName).Data.ArrayNum;
  iVar5 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar5 = 0;
  }
  if (iVar5 == 0) {
    FVar9.ComparisonIndex.Value = 0;
    FVar9.Number = 0;
  }
  else if (iVar1 == 0) {
    pFVar6 = ::FName::FName(&local_res10,L"",FNAME_Find);
    FVar9 = *pFVar6;
  }
  else {
    pFVar6 = ::FName::FName(&local_res10,
                            (wchar_t *)(this->SubsystemName).Data.AllocatorInstance.Data,FNAME_Find)
    ;
    FVar9 = *pFVar6;
  }
  (**(code **)(GEngine->_padding_ + 0x180))();
  local_res8 = FVar9;
  pIVar7 = IOnlineSubsystem::Get(&local_res8);
  if (pIVar7 == (IOnlineSubsystem *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    pTVar11 = pTVar10;
  }
  else {
    plVar8 = (longlong *)(**(code **)(pIVar7->_padding_ + 0x80))(pIVar7,local_28);
    pTVar11 = (TReferenceControllerBase<1> *)*plVar8;
    pTVar10 = (TReferenceControllerBase<1> *)plVar8[1];
    plVar8[1] = 0;
    *plVar8 = 0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_20);
    if (pTVar11 != (TReferenceControllerBase<1> *)0x0) goto LAB_14ecbda17;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
LAB_14ecbda17:
  iVar5 = (**(code **)(pTVar11->_padding_ + 0x138))(pTVar11,this->LocalUserIdx);
  this->bIsUserLoggedIn = false;
  if (iVar5 == 2) {
    this->bIsUserLoggedIn = true;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  return iVar5 == 2;
}

// OnLoginComplete @ 14ecbf570

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FTestIdentityInterface::OnLoginComplete
          (FTestIdentityInterface *this,int param_1,bool param_2,FUniqueNetId *param_3,
          FString *param_4)

{
  IOnlineIdentity *pIVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 *puVar4;
  FString local_48;
  FString local_38;
  void *local_28 [2];
  undefined1 local_18 [8];
  TReferenceControllerBase<1> *local_10;
  
  if (param_2) {
    if (3 < (byte)LogOnlineIdentity._0_1_) {
      (**(code **)(*(longlong *)param_3 + 0x38))(param_3,local_28);
      ::FString::PrintfImpl(&local_48,L"Successful logged in user. UserId=[%s] ");
      UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineIdentity);
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
      if (local_28[0] != (void *)0x0) {
        FMemory::Free(local_28[0]);
      }
    }
    if (((this->OnlineIdentity).Object == (IOnlineIdentity *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pIVar1 = (this->OnlineIdentity).Object;
    puVar4 = (undefined8 *)(**(code **)(pIVar1->_padding_ + 0x100))(pIVar1,local_18,param_3);
    if (&this->UserInfo != (TSharedPtr<FUserOnlineAccount,1> *)puVar4) {
      (this->UserInfo).Object = (FUserOnlineAccount *)*puVar4;
      *puVar4 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->UserInfo).SharedReferenceCount,(FSharedReferencer<1> *)(puVar4 + 1));
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_10);
  }
  else if (1 < (byte)LogOnlineIdentity._0_1_) {
    ::FString::PrintfImpl(&local_38,L"Failed to log in new user. Error=[%s]");
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineIdentity);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  this->bRunLoginTest = false;
  if (this->bRunLogoutTest == false) {
    FinishTest(this);
    return;
  }
  IsTheUserLoggedIn(this);
  if (((this->OnlineIdentity).Object == (IOnlineIdentity *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pIVar1 = (this->OnlineIdentity).Object;
                    /* WARNING: Could not recover jumptable at 0x00014ecbf740. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(pIVar1->_padding_ + 0xb0))(pIVar1,this->LocalUserIdx);
  return;
}

// OnLogoutComplete @ 14ecbf890

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FTestIdentityInterface::OnLogoutComplete(FTestIdentityInterface *this,int param_1,bool param_2)

{
  IOnlineIdentity *pIVar1;
  code *pcVar2;
  bool bVar3;
  FString local_48;
  FString local_38;
  FString local_28;
  undefined8 local_18;
  FSharedReferencer<1> FStack_10;
  
  if (param_2) {
    if ((byte)LogOnlineIdentity._0_1_ < 4) goto LAB_14ecbf9a1;
    ::FString::PrintfImpl(&local_48,L"Successful logged out user. LocalUserNum=[%d] ");
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineIdentity);
  }
  else if (this->bIsUserLoggedIn == false) {
    if ((byte)LogOnlineIdentity._0_1_ < 4) goto LAB_14ecbf9a1;
    ::FString::PrintfImpl(&local_38,L"User is not logged in to be able to be logged out.");
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineIdentity);
    local_48.Data.AllocatorInstance.Data = local_38.Data.AllocatorInstance.Data;
  }
  else {
    if ((byte)LogOnlineIdentity._0_1_ < 2) goto LAB_14ecbf9a1;
    ::FString::PrintfImpl(&local_28,L"Failed to log out user.");
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineIdentity);
    local_48.Data.AllocatorInstance.Data = local_28.Data.AllocatorInstance.Data;
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
LAB_14ecbf9a1:
  local_18 = 0;
  FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->UserInfo != (TSharedPtr<FUserOnlineAccount,1> *)&local_18) {
    (this->UserInfo).Object = (FUserOnlineAccount *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->UserInfo).SharedReferenceCount,&FStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_10.ReferenceController);
  this->bRunLogoutTest = false;
  if (this->bRunLoginTest != false) {
    if (((this->OnlineIdentity).Object == (IOnlineIdentity *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pIVar1 = (this->OnlineIdentity).Object;
                    /* WARNING: Could not recover jumptable at 0x00014ecbfa24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(pIVar1->_padding_ + 0x88))(pIVar1,this->LocalUserIdx,&this->AccountCredentials);
    return;
  }
  FinishTest(this);
  return;
}

// SetTestStatus @ 14ecc8fe0

void __thiscall FTestIdentityInterface::SetTestStatus(FTestIdentityInterface *this,bool *param_1)

{
  this->bIsTestFinished = *param_1;
  return;
}

// StartNextTest @ 14ecca290

void __thiscall FTestIdentityInterface::StartNextTest(FTestIdentityInterface *this)

{
  IOnlineIdentity *pIVar1;
  code *pcVar2;
  bool bVar3;
  
  if (this->bRunLoginTest == false) {
    if (this->bRunLogoutTest == false) {
      FinishTest(this);
      return;
    }
    IsTheUserLoggedIn(this);
    if ((this->OnlineIdentity).Object == (IOnlineIdentity *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    pIVar1 = (this->OnlineIdentity).Object;
                    /* WARNING: Could not recover jumptable at 0x00014ecca330. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(pIVar1->_padding_ + 0xb0))(pIVar1,this->LocalUserIdx);
    return;
  }
  if ((this->OnlineIdentity).Object == (IOnlineIdentity *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pIVar1 = (this->OnlineIdentity).Object;
                    /* WARNING: Could not recover jumptable at 0x00014ecca2e2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(pIVar1->_padding_ + 0x88))(pIVar1,this->LocalUserIdx,&this->AccountCredentials);
  return;
}

// Test @ 14eccbf70

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FTestIdentityInterface::Test
          (FTestIdentityInterface *this,UWorld *param_1,FOnlineAccountCredentials *param_2,
          bool param_3)

{
  TSharedPtr<IOnlineIdentity,1> *pTVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FName *pFVar6;
  IOnlineSubsystem *pIVar7;
  undefined8 *puVar8;
  ulong64 *puVar9;
  FSharedReferencer<1> FVar10;
  IOnlineIdentity *pIVar11;
  FName local_res8 [2];
  FName local_res18 [2];
  undefined1 local_88 [8];
  undefined1 local_80 [8];
  IOnlineIdentity *local_78;
  FSharedReferencer<1> local_70;
  FString local_68;
  undefined8 local_58;
  undefined8 local_50;
  undefined1 local_48 [8];
  TReferenceControllerBase<1> *local_40;
  
  FVar10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (param_3) {
    this->bRunLoginTest = false;
    this->bRunLogoutTest = true;
  }
  ::FString::operator=(&(this->AccountCredentials).Type,&param_2->Type);
  ::FString::operator=(&(this->AccountCredentials).Id,&param_2->Id);
  ::FString::operator=(&(this->AccountCredentials).Token,&param_2->Token);
  iVar2 = (this->SubsystemName).Data.ArrayNum;
  iVar5 = iVar2 + -1;
  if (iVar2 == 0) {
    iVar5 = 0;
  }
  if (iVar5 == 0) {
    local_res8[0].ComparisonIndex.Value = 0;
    local_res8[0].Number = 0;
  }
  else if (iVar2 == 0) {
    pFVar6 = ::FName::FName(local_res18,L"",FNAME_Find);
    local_res8[0] = *pFVar6;
  }
  else {
    pFVar6 = ::FName::FName(local_res18,(wchar_t *)(this->SubsystemName).Data.AllocatorInstance.Data
                            ,FNAME_Find);
    local_res8[0] = *pFVar6;
  }
  pIVar7 = IOnlineSubsystem::Get(local_res8);
  if (pIVar7 == (IOnlineSubsystem *)0x0) {
    local_50 = 0;
    local_78 = (IOnlineIdentity *)0x0;
    local_70.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    local_58 = 0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    pIVar11 = (IOnlineIdentity *)FVar10.ReferenceController;
  }
  else {
    puVar8 = (undefined8 *)(**(code **)(pIVar7->_padding_ + 0x80))(pIVar7,local_48);
    pIVar11 = (IOnlineIdentity *)*puVar8;
    FVar10.ReferenceController = (TReferenceControllerBase<1> *)puVar8[1];
    puVar8[1] = 0;
    *puVar8 = 0;
    local_78 = pIVar11;
    local_70.ReferenceController = FVar10.ReferenceController;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_40);
  }
  pTVar1 = &this->OnlineIdentity;
  if (pTVar1 != (TSharedPtr<IOnlineIdentity,1> *)&local_78) {
    pTVar1->Object = pIVar11;
    local_78 = (IOnlineIdentity *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->OnlineIdentity).SharedReferenceCount,&local_70);
    FVar10.ReferenceController = local_70.ReferenceController;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar10.ReferenceController);
  pIVar11 = pTVar1->Object;
  if (pIVar11 == (IOnlineIdentity *)0x0) {
    if (2 < (byte)LogOnlineIdentity._0_1_) {
      ::FString::PrintfImpl(&local_68,L"Failed to get online identity interface for %s");
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineIdentity);
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
    }
  }
  else {
    puVar9 = (ulong64 *)
             (**(code **)(pIVar11->_padding_ + 0x90))
                       (pIVar11,local_88,this->LocalUserIdx,&this->OnLoginCompleteDelegate);
    (this->OnLoginCompleteDelegateHandle).ID = *puVar9;
    if ((pTVar1->Object == (IOnlineIdentity *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    puVar9 = (ulong64 *)
             (**(code **)(pTVar1->Object->_padding_ + 0xb8))
                       (pTVar1->Object,local_80,this->LocalUserIdx,&this->OnLogoutCompleteDelegate);
    bVar4 = this->bRunLoginTest;
    (this->OnLogoutCompleteDelegateHandle).ID = *puVar9;
    if (bVar4 != false) {
      if ((pTVar1->Object == (IOnlineIdentity *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x00014eccc18c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(pTVar1->Object->_padding_ + 0x88))
                (pTVar1->Object,this->LocalUserIdx,&this->AccountCredentials);
      return;
    }
    if (this->bRunLogoutTest != false) {
      IsTheUserLoggedIn(this);
      if ((pTVar1->Object == (IOnlineIdentity *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x00014eccc1e2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(pTVar1->Object->_padding_ + 0xb0))(pTVar1->Object,this->LocalUserIdx);
      return;
    }
  }
  FinishTest(this);
  return;
}

