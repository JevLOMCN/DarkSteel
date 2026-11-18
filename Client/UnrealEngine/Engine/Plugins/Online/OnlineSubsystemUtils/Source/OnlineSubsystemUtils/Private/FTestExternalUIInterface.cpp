// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineSubsystemUtils
// Functions: 18

// FinishTest @ 14ecb8c00

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FTestExternalUIInterface::FinishTest(FTestExternalUIInterface *this)

{
  IOnlineExternalUI *pIVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  FString local_18;
  
  if (4 < (byte)LogOnlineExternalUI._0_1_) {
    ::FString::PrintfImpl(&local_18,L"FTestExternalUIInterface::FinishTest -- completed testing");
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineExternalUI);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  if (((this->ExternalUI).Object == (IOnlineExternalUI *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pIVar1 = (this->ExternalUI).Object;
  (**(code **)(pIVar1->_padding_ + 0x90))(pIVar1,&this->ExternalUIChangeDelegateHandle);
  if (this != (FTestExternalUIInterface *)0x0) {
    TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->ExternalUIChangeDelegate);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((this->ExternalUI).SharedReferenceCount.ReferenceController);
    pFVar2 = (this->SubsystemName).Data.AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    ::operator_delete(this,0x58);
    return;
  }
  return;
}

// OnExternalUIChange @ 14ecbf460

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FTestExternalUIInterface::OnExternalUIChange(FTestExternalUIInterface *this,bool param_1)

{
  FString local_18;
  
  if (4 < (byte)LogOnlineExternalUI._0_1_) {
    ::FString::PrintfImpl(&local_18,L"OnExternalUIChange delegate invoked. bIsOpening = %d");
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineExternalUI);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  if (!param_1) {
    if (this->bIsolatedTest != false) {
      FinishTest(this);
      return;
    }
    StartNextTest(this);
  }
  return;
}

// OnLoginUIClosed @ 14ecbf760

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FTestExternalUIInterface::OnLoginUIClosed
          (FTestExternalUIInterface *this,TSharedPtr<FUniqueNetId_const_,1> *param_1,int param_2,
          FOnlineError *param_3)

{
  code *pcVar1;
  bool bVar2;
  FString local_38;
  void *local_28 [2];
  FString local_18;
  
  if (4 < (byte)LogOnlineExternalUI._0_1_) {
    FOnlineError::ToLogString(param_3,&local_18);
    if ((param_1->Object == (FUniqueNetId *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    (**(code **)(*(longlong *)param_1->Object + 0x30))(param_1->Object,local_28);
    ::FString::PrintfImpl
              (&local_38,L"Login UI closed by local user %d. Logged-in user = %s. Error = %s");
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineExternalUI);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (local_28[0] != (void *)0x0) {
      FMemory::Free(local_28[0]);
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// OnProfileUIClosed @ 14ecbfa40

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FTestExternalUIInterface::OnProfileUIClosed(FTestExternalUIInterface *this)

{
  FString local_18;
  
  if (4 < (byte)LogOnlineExternalUI._0_1_) {
    ::FString::PrintfImpl(&local_18,L"Profile UI closed by user.");
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineExternalUI);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// OnSendMessageUIClosed @ 14ecc2060

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FTestExternalUIInterface::OnSendMessageUIClosed(FTestExternalUIInterface *this,bool param_1)

{
  FString local_18;
  
  if (4 < (byte)LogOnlineExternalUI._0_1_) {
    ::FString::PrintfImpl(&local_18,L"Send Message UI closed. Message sent: %d");
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineExternalUI);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// OnShowWebUrlClosed @ 14ecc2320

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FTestExternalUIInterface::OnShowWebUrlClosed(FTestExternalUIInterface *this,FString *param_1)

{
  FString local_18;
  
  if (4 < (byte)LogOnlineExternalUI._0_1_) {
    ::FString::PrintfImpl(&local_18,L"Show Web Url closed with FinalUrl=%s.");
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineExternalUI);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// OnStoreUIClosed @ 14ecc23a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FTestExternalUIInterface::OnStoreUIClosed(FTestExternalUIInterface *this,bool param_1)

{
  FString local_18;
  
  if (4 < (byte)LogOnlineExternalUI._0_1_) {
    ::FString::PrintfImpl(&local_18,L"Store UI was closed. Purchase Made: %d");
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineExternalUI);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// PrepareTests @ 14ecc3040

void __thiscall FTestExternalUIInterface::PrepareTests(FTestExternalUIInterface *this)

{
  TSharedPtr<IOnlineExternalUI,1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  FName *pFVar4;
  IOnlineSubsystem *pIVar5;
  undefined8 *puVar6;
  ulong64 uVar7;
  ulong64 *puVar8;
  wchar_t *pwVar9;
  FName local_res8;
  undefined1 local_res10 [8];
  undefined1 local_78 [8];
  TReferenceControllerBase<1> *local_70;
  undefined1 local_68 [8];
  FDelegateAllocation local_60;
  FDestructionSentinel local_50;
  FDestructionSentinel local_38;
  FDelegateAllocation *local_20;
  
  if ((this->SubsystemName).Data.ArrayNum == 0) {
    pwVar9 = L"";
  }
  else {
    pwVar9 = (wchar_t *)(this->SubsystemName).Data.AllocatorInstance.Data;
  }
  pFVar4 = ::FName::FName(&local_res8,pwVar9);
  pIVar5 = IOnlineSubsystem::Get(pFVar4);
  this->OnlineSub = pIVar5;
  if (pIVar5 == (IOnlineSubsystem *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("OnlineSub",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineSubsystemUtils\\Source\\OnlineSubsystemUtils\\Private\\Tests\\TestExternalUIInterface.cpp"
                       ,0xd,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  puVar6 = (undefined8 *)(**(code **)(this->OnlineSub->_padding_ + 0x70))(this->OnlineSub,local_78);
  pTVar1 = &this->ExternalUI;
  if (pTVar1 != (TSharedPtr<IOnlineExternalUI,1> *)puVar6) {
    pTVar1->Object = (IOnlineExternalUI *)*puVar6;
    *puVar6 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->ExternalUI).SharedReferenceCount,(FSharedReferencer<1> *)(puVar6 + 1));
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_70);
  if (pTVar1->Object == (IOnlineExternalUI *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("ExternalUI.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineSubsystemUtils\\Source\\OnlineSubsystemUtils\\Private\\Tests\\TestExternalUIInterface.cpp"
                       ,0x10,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  local_68 = (undefined1  [8])0x0;
  local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_60.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_68,
             (FWriteAccessScope *)&local_38);
  local_20 = &local_60;
  puVar6 = UE::Core::Private::DelegateAllocate(0x28,&local_60);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &___7__TCommonDelegateInstanceState___A6AX_N_ZUFDefaultDelegateUserPolicy____V__6B_;
    uVar7 = FDelegateHandle::GenerateNewID();
    puVar6[2] = uVar7;
    *puVar6 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFTestExternalUIInterface____A6AX_N_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar6[4] = OnExternalUIChange;
    puVar6[3] = this;
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->ExternalUIChangeDelegate,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_68);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_68,
             (FWriteAccessScope *)&local_50);
  if ((local_60.DelegateSize != 0) &&
     (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_60.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_60,0,0,0x10);
    local_60.DelegateSize = 0;
  }
  if (local_50.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
  }
  if (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_60.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_68);
  if (pTVar1->Object == (IOnlineExternalUI *)0x0) {
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
  puVar8 = (ulong64 *)
           (**(code **)(pTVar1->Object->_padding_ + 0x88))
                     (pTVar1->Object,local_res10,&this->ExternalUIChangeDelegate);
  (this->ExternalUIChangeDelegateHandle).ID = *puVar8;
  return;
}

// StartNextTest @ 14ecc9210

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FTestExternalUIInterface::StartNextTest(FTestExternalUIInterface *this)

{
  IOnlineExternalUI *pIVar1;
  code *pcVar2;
  char cVar3;
  bool bVar4;
  Type TVar5;
  FNameEntryId FVar6;
  undefined4 extraout_var;
  ForAnyElementType FVar7;
  undefined1 local_res8 [8];
  undefined4 local_res10;
  undefined4 uStackX_14;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  FString local_28;
  
  TVar5 = this->State + ShowLoginUI;
  this->State = TVar5;
  do {
    if (6 < (int)TVar5) {
      FinishTest(this);
      return;
    }
    if (TVar5 == ShowLoginUI) {
      cVar3 = TestLoginUI(this);
LAB_14ecc9580:
      if (cVar3 != '\0') {
        return;
      }
    }
    else {
      if (TVar5 == ShowFriendsUI) {
        if (this->bTestFriendsUI == false) {
          if (4 < (byte)LogOnlineExternalUI._0_1_) {
            ::FString::PrintfImpl(&local_78,L"TestFriendsUI (skipping)");
            UE::Logging::Private::BasicLog<5>
                      (&::LOG_Static,(FLogCategoryBase *)&LogOnlineExternalUI);
            FVar7.Data = local_78.Data.AllocatorInstance.Data;
LAB_14ecc92a8:
            if (FVar7.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(FVar7.Data);
            }
          }
LAB_14ecc92b2:
          cVar3 = '\0';
        }
        else {
          if (((this->ExternalUI).Object == (IOnlineExternalUI *)0x0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar4)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          cVar3 = (**(code **)(((this->ExternalUI).Object)->_padding_ + 0x18))();
          if (4 < (byte)LogOnlineExternalUI._0_1_) {
            ::FString::PrintfImpl(&local_68,L"TestFriendsUI bShowingUI: %d");
            UE::Logging::Private::BasicLog<5>
                      (&::LOG_Static,(FLogCategoryBase *)&LogOnlineExternalUI);
            if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_68.Data.AllocatorInstance.Data);
            }
          }
        }
        goto LAB_14ecc9580;
      }
      if (TVar5 == ShowInviteUI) {
        if (this->bTestInviteUI == false) {
          if (4 < (byte)LogOnlineExternalUI._0_1_) {
            ::FString::PrintfImpl(&local_58,L"TestInviteUI (skipping)");
            UE::Logging::Private::BasicLog<5>
                      (&::LOG_Static,(FLogCategoryBase *)&LogOnlineExternalUI);
            FVar7.Data = local_58.Data.AllocatorInstance.Data;
            goto LAB_14ecc92a8;
          }
          goto LAB_14ecc92b2;
        }
        if (((this->ExternalUI).Object == (IOnlineExternalUI *)0x0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pIVar1 = (this->ExternalUI).Object;
        pcVar2 = *(code **)(pIVar1->_padding_ + 0x20);
        FVar6 = FNameEntryId::FromValidEName((EName)local_res8);
        uStackX_14 = 0;
        local_res10 = *(undefined4 *)CONCAT44(extraout_var,FVar6.Value);
        cVar3 = (*pcVar2)(pIVar1,0,local_res10);
        if (4 < (byte)LogOnlineExternalUI._0_1_) {
          ::FString::PrintfImpl(&local_48,L"TestInviteUI bShowingUI: %d");
          UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineExternalUI);
          if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_48.Data.AllocatorInstance.Data);
          }
        }
        goto LAB_14ecc9580;
      }
      if (TVar5 == ShowAchievementsUI) {
        if (this->bTestAchievementsUI == false) {
          if (4 < (byte)LogOnlineExternalUI._0_1_) {
            ::FString::PrintfImpl(&local_38,L"TestAchievementsUI (skipping)");
            UE::Logging::Private::BasicLog<5>
                      (&::LOG_Static,(FLogCategoryBase *)&LogOnlineExternalUI);
            FVar7.Data = local_38.Data.AllocatorInstance.Data;
            goto LAB_14ecc92a8;
          }
          goto LAB_14ecc92b2;
        }
        if (((this->ExternalUI).Object == (IOnlineExternalUI *)0x0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pIVar1 = (this->ExternalUI).Object;
        cVar3 = (**(code **)(pIVar1->_padding_ + 0x28))(pIVar1,0);
        if (4 < (byte)LogOnlineExternalUI._0_1_) {
          ::FString::PrintfImpl(&local_28,L"TestAchievementsUI bShowingUI: %d");
          UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineExternalUI);
          if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_28.Data.AllocatorInstance.Data);
          }
        }
        goto LAB_14ecc9580;
      }
      if (TVar5 == ShowWebURL) {
        cVar3 = TestWebURL(this);
        goto LAB_14ecc9580;
      }
      if (TVar5 == ShowProfileUI) {
        cVar3 = TestProfileUI(this);
        goto LAB_14ecc9580;
      }
    }
    this->State = this->State + ShowLoginUI;
    TVar5 = this->State;
  } while( true );
}

// Test @ 14eccb6b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FTestExternalUIInterface::Test(FTestExternalUIInterface *this)

{
  FString local_18;
  
  PrepareTests(this);
  if ((((this->bTestLoginUI == false) && (this->bTestFriendsUI == false)) &&
      (this->bTestInviteUI == false)) &&
     (((this->bTestAchievementsUI == false && (this->bTestWebURL == false)) &&
      (this->bTestProfileUI == false)))) {
    if (1 < (byte)LogOnlineExternalUI._0_1_) {
      ::FString::PrintfImpl(&local_18,L"ExternalUI test -- No UIs selected to test");
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineExternalUI);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
    FinishTest(this);
    return;
  }
  StartNextTest(this);
  return;
}

// TestAchievementsUI @ 14eccc270

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FTestExternalUIInterface::TestAchievementsUI(FTestExternalUIInterface *this)

{
  IOnlineExternalUI *pIVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  FString local_28;
  FString local_18;
  
  if (this->bTestAchievementsUI == false) {
    if (4 < (byte)LogOnlineExternalUI._0_1_) {
      ::FString::PrintfImpl(&local_28,L"TestAchievementsUI (skipping)");
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineExternalUI);
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
    }
    return false;
  }
  if (((this->ExternalUI).Object == (IOnlineExternalUI *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  pIVar1 = (this->ExternalUI).Object;
  uVar4 = (**(code **)(pIVar1->_padding_ + 0x28))(pIVar1,0);
  if (4 < (byte)LogOnlineExternalUI._0_1_) {
    ::FString::PrintfImpl(&local_18,L"TestAchievementsUI bShowingUI: %d");
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineExternalUI);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return (bool)uVar4;
}

// TestFriendsUI @ 14eccc390

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FTestExternalUIInterface::TestFriendsUI(FTestExternalUIInterface *this)

{
  IOnlineExternalUI *pIVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  FString local_28;
  FString local_18;
  
  if (this->bTestFriendsUI == false) {
    if (4 < (byte)LogOnlineExternalUI._0_1_) {
      ::FString::PrintfImpl(&local_28,L"TestFriendsUI (skipping)");
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineExternalUI);
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
    }
    return false;
  }
  if (((this->ExternalUI).Object == (IOnlineExternalUI *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  pIVar1 = (this->ExternalUI).Object;
  uVar4 = (**(code **)(pIVar1->_padding_ + 0x18))(pIVar1,0);
  if (4 < (byte)LogOnlineExternalUI._0_1_) {
    ::FString::PrintfImpl(&local_18,L"TestFriendsUI bShowingUI: %d");
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineExternalUI);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return (bool)uVar4;
}

// TestInviteUI @ 14eccc4b0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FTestExternalUIInterface::TestInviteUI(FTestExternalUIInterface *this)

{
  IOnlineExternalUI *pIVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  FNameEntryId FVar5;
  undefined4 extraout_var;
  undefined1 local_res8 [8];
  undefined4 local_res10;
  undefined4 uStackX_14;
  FString local_28;
  FString local_18;
  
  if (this->bTestInviteUI == false) {
    if (4 < (byte)LogOnlineExternalUI._0_1_) {
      ::FString::PrintfImpl(&local_28,L"TestInviteUI (skipping)");
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineExternalUI);
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
    }
    return false;
  }
  if (((this->ExternalUI).Object == (IOnlineExternalUI *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  pIVar1 = (this->ExternalUI).Object;
  pcVar2 = *(code **)(pIVar1->_padding_ + 0x20);
  FVar5 = FNameEntryId::FromValidEName((EName)local_res8);
  uStackX_14 = 0;
  local_res10 = *(undefined4 *)CONCAT44(extraout_var,FVar5.Value);
  uVar4 = (*pcVar2)(pIVar1,0,local_res10);
  if (4 < (byte)LogOnlineExternalUI._0_1_) {
    ::FString::PrintfImpl(&local_18,L"TestInviteUI bShowingUI: %d");
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineExternalUI);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return (bool)uVar4;
}

// TestLoginUI @ 14eccc600

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FTestExternalUIInterface::TestLoginUI(FTestExternalUIInterface *this)

{
  IOnlineExternalUI *pIVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  undefined8 *puVar5;
  ulong64 uVar6;
  FString local_88;
  FString local_78;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_68;
  FDelegateAllocation local_60;
  FDestructionSentinel local_50;
  FDestructionSentinel local_38;
  FDelegateAllocation *local_20;
  
  if (this->bTestLoginUI == false) {
    if (4 < (byte)LogOnlineExternalUI._0_1_) {
      ::FString::PrintfImpl(&local_88,L"TestLoginUI (skipping)");
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineExternalUI);
      if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88.Data.AllocatorInstance.Data);
      }
    }
    return false;
  }
  if (((this->ExternalUI).Object == (IOnlineExternalUI *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  pIVar1 = (this->ExternalUI).Object;
  local_68.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_60.DelegateSize = 0;
  pcVar2 = *(code **)(pIVar1->_padding_ + 8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_68,(FWriteAccessScope *)&local_38);
  local_20 = &local_60;
  puVar5 = UE::Core::Private::DelegateAllocate(0x28,&local_60);
  if (puVar5 != (undefined8 *)0x0) {
    *puVar5 = &
              ___7__TCommonDelegateInstanceState___A6AXV__TSharedPtr___CBVFUniqueNetId___00__HAEBUFOnlineError___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar6 = FDelegateHandle::GenerateNewID();
    puVar5[2] = uVar6;
    *puVar5 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFTestExternalUIInterface____A6AXV__TSharedPtr___CBVFUniqueNetId___00__HAEBUFOnlineError___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar5[4] = OnLoginUIClosed;
    puVar5[3] = this;
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  uVar4 = (*pcVar2)(pIVar1,0,1,0,&local_68);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_68,(FWriteAccessScope *)&local_50);
  if ((local_60.DelegateSize != 0) &&
     (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_60.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_60,0,0,0x10);
    local_60.DelegateSize = 0;
  }
  if (local_50.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
  }
  if (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_60.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_68.AccessDetector);
  if (4 < (byte)LogOnlineExternalUI._0_1_) {
    ::FString::PrintfImpl(&local_78,L"TestLoginUI bShowingUI: %d");
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineExternalUI);
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
  }
  return (bool)uVar4;
}

// TestProfileUI @ 14eccc860

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FTestExternalUIInterface::TestProfileUI(FTestExternalUIInterface *this)

{
  IOnlineExternalUI *pIVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  ulong64 uVar7;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_a8;
  FDelegateAllocation local_a0;
  FString local_90;
  FString local_80;
  undefined8 local_70;
  TReferenceControllerBase<1> *local_68;
  FDestructionSentinel local_60;
  FDestructionSentinel local_48;
  FDelegateAllocation *local_30;
  undefined1 local_28 [8];
  TReferenceControllerBase<1> *local_20;
  
  if (this->bTestProfileUI == false) {
    if (4 < (byte)LogOnlineExternalUI._0_1_) {
      ::FString::PrintfImpl(&local_90,L"TestProfileUI (skipping)");
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineExternalUI);
      if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_90.Data.AllocatorInstance.Data);
      }
    }
    return false;
  }
  plVar5 = (longlong *)(**(code **)(this->OnlineSub->_padding_ + 0x80))(this->OnlineSub,local_28);
  if ((*plVar5 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  (**(code **)(*(longlong *)*plVar5 + 0x110))((longlong *)*plVar5,&local_70,0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_20);
  if (((this->ExternalUI).Object == (IOnlineExternalUI *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  pIVar1 = (this->ExternalUI).Object;
  local_a8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_a0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_a0.DelegateSize = 0;
  pcVar2 = *(code **)(pIVar1->_padding_ + 0x48);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_a8,(FWriteAccessScope *)&local_48);
  local_30 = &local_a0;
  puVar6 = UE::Core::Private::DelegateAllocate(0x28,&local_a0);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar7 = FDelegateHandle::GenerateNewID();
    puVar6[2] = uVar7;
    *puVar6 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFTestExternalUIInterface____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar6[4] = OnProfileUIClosed;
    puVar6[3] = this;
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  uVar4 = (*pcVar2)(pIVar1,local_70,local_70,&local_a8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_a8,(FWriteAccessScope *)&local_60);
  if ((local_a0.DelegateSize != 0) &&
     (local_a0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_a0.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_a0,0,0,0x10);
    local_a0.DelegateSize = 0;
  }
  if (local_60.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_60.Accessor,&local_60);
  }
  if (local_a0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_a0.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_a8.AccessDetector);
  if (4 < (byte)LogOnlineExternalUI._0_1_) {
    ::FString::PrintfImpl(&local_80,L"TestProfileUI bShowingUI: %d");
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineExternalUI);
    if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_80.Data.AllocatorInstance.Data);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_68);
  return (bool)uVar4;
}

// TestSendMessage @ 14ecccb20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FTestExternalUIInterface::TestSendMessage
          (FTestExternalUIInterface *this,FString *param_1,FString *param_2)

{
  IOnlineExternalUI *pIVar1;
  code *pcVar2;
  int iVar3;
  bool bVar4;
  char cVar5;
  longlong *plVar6;
  FText *pFVar7;
  undefined8 *puVar8;
  ulong64 uVar9;
  undefined1 auStackY_268 [32];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_238;
  FDelegateAllocation local_230;
  longlong local_220;
  TReferenceControllerBase<1> *local_218;
  FString local_210;
  FString local_200;
  FString local_1f0;
  FDestructionSentinel local_1e0;
  FDestructionSentinel local_1c8;
  FDelegateAllocation *local_1b0;
  undefined1 local_1a8 [8];
  TReferenceControllerBase<1> *local_1a0;
  FText local_198;
  FText local_188;
  undefined1 local_178 [32];
  void *local_158;
  undefined4 local_150;
  uint local_14c;
  undefined4 local_148;
  undefined4 local_144;
  void *local_138;
  undefined4 local_130;
  FText local_128;
  FText local_118;
  undefined1 local_108 [32];
  void *local_e8;
  undefined4 local_e0;
  uint local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  void *local_c8;
  undefined4 local_c0;
  void *local_b8;
  undefined8 local_b0;
  undefined1 local_a8 [32];
  void *local_88;
  undefined4 local_80;
  uint local_7c;
  undefined4 local_78;
  undefined4 local_74;
  void *local_68;
  undefined4 local_60;
  undefined4 local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_268;
  PrepareTests(this);
  this->bIsolatedTest = true;
  if ((param_1->Data).ArrayNum < 2) {
    if (1 < (byte)LogOnlineExternalUI._0_1_) {
      ::FString::PrintfImpl
                (&local_210,L"ExternalUI TestSendMessage -- InMsgRecepient must not be empty!");
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineExternalUI);
      if (local_210.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_210.Data.AllocatorInstance.Data);
      }
    }
    FinishTest(this);
  }
  else {
    plVar6 = (longlong *)(**(code **)(this->OnlineSub->_padding_ + 0x80))(this->OnlineSub,local_1a8)
    ;
    if ((*plVar6 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    (**(code **)(*(longlong *)*plVar6 + 0x120))((longlong *)*plVar6,&local_220,param_1);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_1a0);
    if (local_220 == 0) {
      if (1 < (byte)LogOnlineExternalUI._0_1_) {
        ::FString::PrintfImpl
                  (&local_200,L"ExternalUI TestSendMessage -- Message target user is invalid!");
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineExternalUI);
        if (local_200.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_200.Data.AllocatorInstance.Data);
        }
      }
      FinishTest(this);
    }
    else {
      FText::FText(&local_188);
      local_14c = 0x80;
      local_178._0_8_ = (FScriptContainerElement *)0x0;
      local_178._8_8_ = 0;
      local_158 = (void *)0x0;
      local_150 = 0;
      local_144 = 0;
      local_138 = (void *)0x0;
      local_130 = 0;
      local_148 = 0xffffffff;
      FText::FText(&local_128);
      FText::FText(&local_118);
      local_108._0_8_ = (FScriptContainerElement *)0x0;
      local_108._8_8_ = 0;
      local_e8 = (void *)0x0;
      local_e0 = 0;
      local_dc = 0x80;
      local_d8 = 0xffffffff;
      local_d4 = 0;
      local_c8 = (void *)0x0;
      local_c0 = 0;
      local_b8 = (void *)0x0;
      local_b0 = 0;
      local_a8._0_8_ = (FScriptContainerElement *)0x0;
      local_a8._8_8_ = 0;
      local_88 = (void *)0x0;
      local_80 = 0;
      local_7c = 0x80;
      local_78 = 0xffffffff;
      local_74 = 0;
      local_68 = (void *)0x0;
      local_60 = 0;
      local_58 = 1;
      pFVar7 = FText::FromString(&local_198,param_2);
      FText::operator=(&local_128,pFVar7);
      if (local_198.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_198.TextData.Reference + 0x10))();
      }
      if (((this->ExternalUI).Object == (IOnlineExternalUI *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pIVar1 = (this->ExternalUI).Object;
      local_238.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
      local_230.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      local_230.DelegateSize = 0;
      pcVar2 = *(code **)(pIVar1->_padding_ + 0x68);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_238,(FWriteAccessScope *)&local_1c8);
      local_1b0 = &local_230;
      puVar8 = UE::Core::Private::DelegateAllocate(0x28,&local_230);
      if (puVar8 != (undefined8 *)0x0) {
        *puVar8 = &
                  ___7__TCommonDelegateInstanceState___A6AX_N_ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        uVar9 = FDelegateHandle::GenerateNewID();
        puVar8[2] = uVar9;
        *puVar8 = &
                  ___7__TBaseRawMethodDelegateInstance__0A_VFTestExternalUIInterface____A6AX_N_ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        puVar8[4] = OnSendMessageUIClosed;
        puVar8[3] = this;
      }
      if (local_1c8.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1c8.Accessor,&local_1c8);
      }
      if ((local_220 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x44d,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      cVar5 = (*pcVar2)(pIVar1,0,local_220,&local_188);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_238,(FWriteAccessScope *)&local_1e0);
      if ((local_230.DelegateSize != 0) &&
         (local_230.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
        (*(code *)**(undefined8 **)local_230.DelegateAllocator)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                  ((ForAnyElementType *)&local_230,0,0,0x10);
        local_230.DelegateSize = 0;
      }
      if (local_1e0.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1e0.Accessor,&local_1e0);
      }
      if (local_230.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
        FMemory::Free((void *)local_230.DelegateAllocator);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_238.AccessDetector);
      if (4 < (byte)LogOnlineExternalUI._0_1_) {
        ::FString::PrintfImpl(&local_1f0,L"ExternalUI TestSendMessage -- Message test opened %d");
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineExternalUI);
        if (local_1f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1f0.Data.AllocatorInstance.Data);
        }
      }
      if (cVar5 == '\0') {
        FinishTest(this);
      }
      local_60 = 0;
      if (local_68 != (void *)0x0) {
        FMemory::Free(local_68);
      }
      TSparseArray<TSparseSetElement<TTuple<FString,FVariantData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,FVariantData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)local_a8,0,local_a8._8_4_);
      iVar3 = SUB84(local_a8._8_8_,4);
      local_a8._8_8_ = local_a8._8_8_ & 0xffffffff00000000;
      if (iVar3 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x38,8,0,(ForAnyElementType *)local_a8,0,(int *)(local_a8 + 0xc));
      }
      local_78 = 0xffffffff;
      local_74 = 0;
      local_80 = 0;
      if (0x80 < local_7c) {
        local_7c = 0x80;
        TBitArray<FDefaultBitArrayAllocator>::Realloc
                  ((TBitArray<FDefaultBitArrayAllocator> *)(local_a8 + 0x10),0);
      }
      if (local_88 != (void *)0x0) {
        FMemory::Free(local_88);
      }
      if ((FScriptContainerElement *)local_a8._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_a8._0_8_);
      }
      if (local_b8 != (void *)0x0) {
        FMemory::Free(local_b8);
      }
      local_c0 = 0;
      if (local_c8 != (void *)0x0) {
        FMemory::Free(local_c8);
      }
      TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)local_108,0,local_108._8_4_);
      iVar3 = SUB84(local_108._8_8_,4);
      local_108._8_8_ = local_108._8_8_ & 0xffffffff00000000;
      if (iVar3 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x28,8,0,(ForAnyElementType *)local_108,0,(int *)(local_108 + 0xc));
      }
      local_d8 = 0xffffffff;
      local_d4 = 0;
      local_e0 = 0;
      if (0x80 < local_dc) {
        local_dc = 0x80;
        TBitArray<FDefaultBitArrayAllocator>::Realloc
                  ((TBitArray<FDefaultBitArrayAllocator> *)(local_108 + 0x10),0);
      }
      if (local_e8 != (void *)0x0) {
        FMemory::Free(local_e8);
      }
      if ((FScriptContainerElement *)local_108._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_108._0_8_);
      }
      if (local_118.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_118.TextData.Reference + 0x10))();
      }
      if (local_128.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_128.TextData.Reference + 0x10))();
      }
      local_130 = 0;
      if (local_138 != (void *)0x0) {
        FMemory::Free(local_138);
      }
      TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)local_178,0,local_178._8_4_);
      iVar3 = SUB84(local_178._8_8_,4);
      local_178._8_8_ = local_178._8_8_ & 0xffffffff00000000;
      if (iVar3 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x28,8,0,(ForAnyElementType *)local_178,0,(int *)(local_178 + 0xc));
      }
      local_144 = 0;
      local_150 = 0;
      local_148 = 0xffffffff;
      if (0x80 < local_14c) {
        local_14c = 0x80;
        TBitArray<FDefaultBitArrayAllocator>::Realloc
                  ((TBitArray<FDefaultBitArrayAllocator> *)(local_178 + 0x10),0);
      }
      if (local_158 != (void *)0x0) {
        FMemory::Free(local_158);
      }
      if ((FScriptContainerElement *)local_178._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_178._0_8_);
      }
      if (local_188.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_188.TextData.Reference + 0x10))();
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_218);
  }
  return;
}

// TestStorePage @ 14eccd1f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FTestExternalUIInterface::TestStorePage
          (FTestExternalUIInterface *this,FString *param_1,bool param_2)

{
  uint uVar1;
  FScriptContainerElement *_Src;
  IOnlineExternalUI *pIVar2;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  undefined8 *puVar6;
  ulong64 uVar7;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_b8;
  FDelegateAllocation local_b0;
  void *local_a0;
  undefined8 local_98;
  FString local_90;
  undefined1 local_80;
  FString local_78;
  FString local_68;
  FDestructionSentinel local_58;
  FDestructionSentinel local_40;
  FDelegateAllocation *local_28;
  
  PrepareTests(this);
  this->bIsolatedTest = true;
  uVar1 = (param_1->Data).ArrayNum;
  if ((int)uVar1 < 2) {
    if (1 < (byte)LogOnlineExternalUI._0_1_) {
      ::FString::PrintfImpl(&local_78,L"ExternalUI TestStorePage -- Product Id must not be empty!");
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineExternalUI);
      if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.Data.AllocatorInstance.Data);
      }
    }
    FinishTest(this);
  }
  else {
    local_a0 = (void *)0x0;
    local_98 = 0;
    local_90.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_90.Data.ArrayNum = 0;
    local_90.Data.ArrayMax = 0;
    local_80 = 0;
    if (&local_90 != param_1) {
      _Src = (param_1->Data).AllocatorInstance.Data;
      local_90.Data.ArrayMax = 0;
      local_90.Data.ArrayNum = uVar1;
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,uVar1,0,(ForAnyElementType *)&local_90,uVar1,&local_90.Data.ArrayMax);
      memcpy(local_90.Data.AllocatorInstance.Data,_Src,(longlong)(int)uVar1 * 2);
    }
    local_80 = param_2;
    if (((this->ExternalUI).Object == (IOnlineExternalUI *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pIVar2 = (this->ExternalUI).Object;
    local_b8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    local_b0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_b0.DelegateSize = 0;
    pcVar3 = *(code **)(pIVar2->_padding_ + 0x58);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_b8,(FWriteAccessScope *)&local_40);
    local_28 = &local_b0;
    puVar6 = UE::Core::Private::DelegateAllocate(0x28,&local_b0);
    if (puVar6 != (undefined8 *)0x0) {
      *puVar6 = &___7__TCommonDelegateInstanceState___A6AX_N_ZUFDefaultDelegateUserPolicy____V__6B_;
      uVar7 = FDelegateHandle::GenerateNewID();
      puVar6[2] = uVar7;
      *puVar6 = &
                ___7__TBaseRawMethodDelegateInstance__0A_VFTestExternalUIInterface____A6AX_N_ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      puVar6[4] = OnStoreUIClosed;
      puVar6[3] = this;
    }
    if (local_40.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
    }
    cVar5 = (*pcVar3)(pIVar2,0,&local_a0,&local_b8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_b8,(FWriteAccessScope *)&local_58);
    if ((local_b0.DelegateSize != 0) &&
       (local_b0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_b0.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_b0,0,0,0x10);
      local_b0.DelegateSize = 0;
    }
    if (local_58.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_58.Accessor,&local_58);
    }
    if (local_b0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_b0.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_b8.AccessDetector);
    if (4 < (byte)LogOnlineExternalUI._0_1_) {
      ::FString::PrintfImpl(&local_68,L"ExternalUI TestStorePage -- Store test opened %d");
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineExternalUI);
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
    }
    if (cVar5 == '\0') {
      FinishTest(this);
    }
    if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_90.Data.AllocatorInstance.Data);
    }
    if (local_a0 != (void *)0x0) {
      FMemory::Free(local_a0);
    }
  }
  return;
}

// TestWebURL @ 14eccd4d0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FTestExternalUIInterface::TestWebURL(FTestExternalUIInterface *this)

{
  IOnlineExternalUI *pIVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  undefined8 *puVar5;
  ulong64 uVar6;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_d8;
  FDelegateAllocation local_d0;
  undefined4 local_c0;
  undefined1 local_bc;
  undefined8 local_b8;
  undefined8 uStack_b0;
  FString *local_a8;
  undefined8 local_a0;
  void *local_98;
  undefined8 local_90;
  FString local_88;
  FString local_78;
  FString local_68;
  FDestructionSentinel local_58;
  FDestructionSentinel local_40;
  FDelegateAllocation *local_28;
  
  if (this->bTestWebURL == false) {
    if (4 < (byte)LogOnlineExternalUI._0_1_) {
      ::FString::PrintfImpl(&local_88,L"TestWebURL (skipping)");
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineExternalUI);
      if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88.Data.AllocatorInstance.Data);
      }
    }
    return false;
  }
  if (((this->ExternalUI).Object == (IOnlineExternalUI *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  pIVar1 = (this->ExternalUI).Object;
  local_d8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_d0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_d0.DelegateSize = 0;
  pcVar2 = *(code **)(pIVar1->_padding_ + 0x38);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_d8,(FWriteAccessScope *)&local_40);
  local_28 = &local_d0;
  puVar5 = UE::Core::Private::DelegateAllocate(0x28,&local_d0);
  if (puVar5 != (undefined8 *)0x0) {
    *puVar5 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBVFString___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar6 = FDelegateHandle::GenerateNewID();
    puVar5[2] = uVar6;
    *puVar5 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFTestExternalUIInterface____A6AXAEBVFString___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar5[4] = OnShowWebUrlClosed;
    puVar5[3] = this;
  }
  if (local_40.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
  }
  local_c0 = 0;
  local_bc = 0;
  local_a8 = (FString *)0x0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_a0 = 0;
  local_98 = (void *)0x0;
  local_90 = 0;
  ::FString::FString(&local_68,L"https://www.unrealengine.com");
  uVar4 = (*pcVar2)(pIVar1,&local_68,&local_c0,&local_d8);
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  if (local_98 != (void *)0x0) {
    FMemory::Free(local_98);
  }
  DestructItems<FString,int>(local_a8,(int)local_a0);
  if (local_a8 != (FString *)0x0) {
    FMemory::Free(local_a8);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_d8,(FWriteAccessScope *)&local_58);
  if ((local_d0.DelegateSize != 0) &&
     (local_d0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_d0.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_d0,0,0,0x10);
    local_d0.DelegateSize = 0;
  }
  if (local_58.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_58.Accessor,&local_58);
  }
  if (local_d0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_d0.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_d8.AccessDetector);
  if (4 < (byte)LogOnlineExternalUI._0_1_) {
    ::FString::PrintfImpl(&local_78,L"TestWebURL bShowingUI: %d");
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineExternalUI);
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
  }
  return (bool)uVar4;
}

