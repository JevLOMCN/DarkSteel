// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 61

// SetVisibility_Login_WrapperImpl @ 14b73ce50

void __cdecl UDS_VM_W_LoginMenu::SetVisibility_Login_WrapperImpl(void *param_1,void *param_2)

{
  SetVisibility_Login(param_1,*(ESlateVisibility *)param_2);
  return;
}

// SetVisibility_AccountList_WrapperImpl @ 14b73ce60

void __cdecl UDS_VM_W_LoginMenu::SetVisibility_AccountList_WrapperImpl(void *param_1,void *param_2)

{
  SetVisibility_AccountList(param_1,*(ESlateVisibility *)param_2);
  return;
}

// SetVisibility_APIServerSelect_WrapperImpl @ 14b73ce70

void __cdecl
UDS_VM_W_LoginMenu::SetVisibility_APIServerSelect_WrapperImpl(void *param_1,void *param_2)

{
  SetVisibility_APIServerSelect(param_1,*(ESlateVisibility *)param_2);
  return;
}

// SetVisibility_AccessBtn_WrapperImpl @ 14b73ce80

void __cdecl UDS_VM_W_LoginMenu::SetVisibility_AccessBtn_WrapperImpl(void *param_1,void *param_2)

{
  SetVisibility_AccessBtn(param_1,*(ESlateVisibility *)param_2);
  return;
}

// SetVisibility_Logout_WrapperImpl @ 14b73ce90

void __cdecl UDS_VM_W_LoginMenu::SetVisibility_Logout_WrapperImpl(void *param_1,void *param_2)

{
  SetVisibility_Logout(param_1,*(ESlateVisibility *)param_2);
  return;
}

// SetVisibility_LoginLoading_WrapperImpl @ 14b73cea0

void __cdecl UDS_VM_W_LoginMenu::SetVisibility_LoginLoading_WrapperImpl(void *param_1,void *param_2)

{
  SetVisibility_LoginLoading(param_1,*(ESlateVisibility *)param_2);
  return;
}

// SetVisibility_Alert_Text_WrapperImpl @ 14b73ceb0

void __cdecl UDS_VM_W_LoginMenu::SetVisibility_Alert_Text_WrapperImpl(void *param_1,void *param_2)

{
  SetVisibility_Alert_Text(param_1,*(ESlateVisibility *)param_2);
  return;
}

// SetVisibility_SettingBtn_WrapperImpl @ 14b73cec0

void __cdecl UDS_VM_W_LoginMenu::SetVisibility_SettingBtn_WrapperImpl(void *param_1,void *param_2)

{
  SetVisibility_SettingBtn(param_1,*(ESlateVisibility *)param_2);
  return;
}

// SetVisibility_LoginAniDeco_WrapperImpl @ 14b73ced0

void __cdecl UDS_VM_W_LoginMenu::SetVisibility_LoginAniDeco_WrapperImpl(void *param_1,void *param_2)

{
  SetVisibility_LoginAniDeco(param_1,*(ESlateVisibility *)param_2);
  return;
}

// SetIdTextChangedEvent_WrapperImpl @ 14b73cee0

void __cdecl UDS_VM_W_LoginMenu::SetIdTextChangedEvent_WrapperImpl(void *param_1,void *param_2)

{
  bool bVar1;
  
  bVar1 = FText::EqualTo((FText *)((longlong)param_1 + 0x188),param_2,Default);
  if (!bVar1) {
    SetPlayerIdText(param_1,param_2);
  }
  return;
}

// SetClick_Login_WrapperImpl @ 14b73cef0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UDS_VM_W_LoginMenu::SetClick_Login_WrapperImpl(void *param_1,void *param_2)

{
  FDS_EventDelegate<FString_const_&,int_const_> *this;
  undefined1 *puVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  char cVar8;
  uint uVar9;
  UDS_WindowManager *this_00;
  UDS_LoginEvent *pUVar10;
  FString *pFVar11;
  uint uVar12;
  longlong lVar13;
  float afStackX_18 [2];
  uint auStackX_20 [2];
  FDestructionSentinel FStack_48;
  
  this_00 = UDS_WindowManager::GetInst();
  if (this_00 != (UDS_WindowManager *)0x0) {
    afStackX_18[0] = 0.0;
    auStackX_20[0] = 0;
    UDS_WindowManager::CloseWindow(this_00,APIServerList,auStackX_20,afStackX_18);
    pUVar10 = UDS_LoginEvent::GetEvent();
    if (pUVar10 != (UDS_LoginEvent *)0x0) {
      this = &pUVar10->OnRequestLogin;
      uVar2 = *(undefined4 *)((longlong)param_1 + 0x350);
      pFVar11 = FText::ToString((FText *)((longlong)param_1 + 0x188));
      bVar6 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                        ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this);
      if (bVar6) {
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,
                   (FWriteAccessScope *)&FStack_48);
        puVar1 = &(pUVar10->OnRequestLogin).Delegate.field_0x1c;
        *(int *)puVar1 = *(int *)puVar1 + 1;
        bVar6 = false;
        uVar12 = *(int *)&(pUVar10->OnRequestLogin).Delegate.field_0x10 - 1;
        if (-1 < (int)uVar12) {
          lVar13 = (longlong)(int)uVar12 << 4;
          bVar6 = false;
          do {
            uVar9 = 0;
            if ((int)uVar12 < *(int *)&(pUVar10->OnRequestLogin).Delegate.field_0x10) {
              uVar9 = ~uVar12 >> 0x1f;
            }
            if ((uVar9 == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar7)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            lVar3 = *(longlong *)&(pUVar10->OnRequestLogin).Delegate.field_0x8;
            if (((*(int *)(lVar13 + 8 + lVar3) == 0) ||
                (plVar4 = *(longlong **)(lVar13 + lVar3), plVar4 == (longlong *)0x0)) ||
               (cVar8 = (**(code **)(*plVar4 + 0x68))(plVar4,pFVar11,uVar2), cVar8 == '\0')) {
              bVar6 = true;
            }
            lVar13 = lVar13 + -0x10;
            uVar12 = uVar12 - 1;
          } while (-1 < (int)uVar12);
        }
        puVar1 = &(pUVar10->OnRequestLogin).Delegate.field_0x1c;
        *(int *)puVar1 = *(int *)puVar1 + -1;
        if (bVar6) {
          TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                    ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this,false);
        }
        if (FStack_48.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_48.Accessor,&FStack_48);
        }
      }
    }
  }
  return;
}

// SetClick_Access_WrapperImpl @ 14b73cf00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __cdecl UDS_VM_W_LoginMenu::SetClick_Access_WrapperImpl(void *param_1,void *param_2)

{
  bool bVar1;
  UDS_LogManager *pUVar2;
  FDS_AuthData *pFVar3;
  TMap<int,FDS_WorldInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_WorldInfo,0>_>
  *pTVar4;
  UDS_WindowManager *this;
  FName FVar5;
  UDS_GameInstance *pUVar6;
  FDS_WorldInfo *pFVar7;
  FString *pFVar8;
  UDS_SyncServer *pUVar9;
  UDS_AccountLocalSave *this_00;
  TWeakObjectPtr<UDS_SyncServer,FWeakObjectPtr> this_01;
  UDS_LoginState *pUVar10;
  int iVar11;
  void *pvVar12;
  int iVar13;
  undefined1 *puVar14;
  undefined1 auStackY_378 [32];
  uint uVar15;
  wchar_t *pwVar16;
  FString FStack_338;
  float afStack_328 [2];
  FWeakObjectPtr FStack_320;
  FWeakObjectPtr FStack_318;
  FWeakObjectPtr FStack_310;
  FWeakObjectPtr FStack_308;
  FDS_AccountKey FStack_300;
  int iStack_2e8;
  int iStack_2e4;
  int iStack_2e0;
  FDS_AccountInfo FStack_2d8;
  FString FStack_278;
  TStringConversion<TStringConvert<char,wchar_t>,128> TStack_268;
  TStringConversion<TStringConvert<char,wchar_t>,128> TStack_148;
  ulonglong uStack_28;
  
  uStack_28 = __security_cookie.value ^ (ulonglong)auStackY_378;
  UDS_LoginState::GetInst();
  bVar1 = TWeakObjectPtr<UDS_LoginState,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_LoginState,FWeakObjectPtr> *)&FStack_318,(void *)0x0);
  if (bVar1) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar2 = UDS_LogManager::GetInst();
    TStack_148._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&TStack_148,"UDS_VM_W_LoginMenu::OnClick_Access",0x22,Yes);
    pwVar16 = L"loginState is nullptr.";
    uVar15 = 0xad;
  }
  else {
    pFVar3 = TDS_Singleton<FDS_AuthData>::GetInst();
    if (pFVar3->IsReceiveLoginData != false) {
      pFVar3 = TDS_Singleton<FDS_AuthData>::GetInst();
      bVar1 = FDS_AuthData::CheckServerDataConnection(pFVar3);
      if (!bVar1) {
        FDS_UIMessageInfo::FDS_UIMessageInfo((FDS_UIMessageInfo *)&TStack_148,Popup_LogOut);
        ::FString::FString(&FStack_338,
                           "ServerData is invalid: address is empty or port number is 0.");
        FDS_Text::SetTextFromUniqueString((FDS_Text *)&TStack_148,&FStack_338);
        if ((FName)FStack_338.Data.AllocatorInstance.Data != (FName)0x0) {
          FMemory::Free(FStack_338.Data.AllocatorInstance.Data);
        }
        UDS_UIMessageManager::OpenMsgByMsgInfo((FDS_UIMessageInfo *)&TStack_148);
        FDS_UIMessageInfo::~FDS_UIMessageInfo((FDS_UIMessageInfo *)&TStack_148);
        return;
      }
      pFVar3 = TDS_Singleton<FDS_AuthData>::GetInst();
      uVar15 = pFVar3->WorldId;
      pTVar4 = UDS_SyncServer::GetWorldInfos();
      if (*(int *)&pTVar4->field_0x8 != *(int *)&pTVar4->field_0x34) {
        puVar14 = *(undefined1 **)&pTVar4->field_0x40;
        if (*(undefined1 **)&pTVar4->field_0x40 == (undefined1 *)0x0) {
          puVar14 = &pTVar4->field_0x38;
        }
        iVar11 = *(int *)(puVar14 + (ulonglong)(*(int *)&pTVar4->field_0x48 - 1U & uVar15) * 4);
        if (iVar11 != -1) {
          do {
            if (*(uint *)((longlong)iVar11 * 0x38 + *(longlong *)pTVar4) == uVar15) {
              if (iVar11 != -1) {
                pTVar4 = UDS_SyncServer::GetWorldInfos();
                pFVar7 = TMapBase<int,FDS_WorldInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_WorldInfo,0>_>
                         ::FindChecked((TMapBase<int,FDS_WorldInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_WorldInfo,0>_>
                                        *)pTVar4,uVar15);
                ::FString::FString((FString *)&FStack_300,&pFVar7->WorldName);
                FStack_300.AccountID.Data.ArrayNum = pFVar7->WorldType;
                FStack_300.AccountID.Data.ArrayMax = pFVar7->WorldState;
                iStack_2e8 = pFVar7->WorldId;
                iStack_2e4 = pFVar7->RegionIndex;
                iStack_2e0 = pFVar7->CharCount;
                if (FStack_300.AccountID.Data.ArrayMax != 0) {
                  pUVar10 = (UDS_LoginState *)FWeakObjectPtr::Get(&FStack_318);
                  UDS_LoginState::StartSystemModule(pUVar10);
                  FDS_UIMessageInfo::FDS_UIMessageInfo((FDS_UIMessageInfo *)&TStack_148,Popup_Close)
                  ;
                  ::FString::FString(&FStack_338,"The server is under maintenance.");
                  FDS_Text::SetTextFromUniqueString((FDS_Text *)&TStack_148,&FStack_338);
                  if ((FName)FStack_338.Data.AllocatorInstance.Data != (FName)0x0) {
                    FMemory::Free(FStack_338.Data.AllocatorInstance.Data);
                  }
                  UDS_UIMessageManager::OpenMsgByMsgInfo((FDS_UIMessageInfo *)&TStack_148);
                  pUVar2 = UDS_LogManager::GetInst();
                  if (pUVar2 != (UDS_LogManager *)0x0) {
                    pUVar2 = UDS_LogManager::GetInst();
                    TStack_268._padding_ = 0;
                    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                              (&TStack_268,"UDS_VM_W_LoginMenu::OnClick_Access",0x22,Yes);
                    UDS_LogManager::PrintLog
                              (pUVar2,1,Warning,TStack_268.Ptr,0xce,
                               L"The server is under maintenance.");
                    if ((void *)TStack_268._padding_ != (void *)0x0) {
                      FMemory::Free((void *)TStack_268._padding_);
                    }
                  }
                  FDS_UIMessageInfo::~FDS_UIMessageInfo((FDS_UIMessageInfo *)&TStack_148);
                  pvVar12 = (void *)CONCAT44(FStack_300._4_4_,FStack_300.APIServerIndex);
                  goto LAB_14c027704;
                }
                if ((void *)CONCAT44(FStack_300._4_4_,FStack_300.APIServerIndex) != (void *)0x0) {
                  FMemory::Free((void *)CONCAT44(FStack_300._4_4_,FStack_300.APIServerIndex));
                }
              }
              break;
            }
            iVar11 = *(int *)((longlong)iVar11 * 0x38 + 0x30 + *(longlong *)pTVar4);
          } while (iVar11 != -1);
        }
      }
      iVar11 = FFieldNotificationClassDescriptor::Visibility_LoginLoading.BitNumber;
      FVar5 = FFieldNotificationClassDescriptor::Visibility_LoginLoading.FieldName;
      if (*(char *)((longlong)param_1 + 0xa5) != '\0') {
        *(undefined1 *)((longlong)param_1 + 0xa5) = 0;
        FStack_338.Data.ArrayNum = iVar11;
        FStack_338.Data.AllocatorInstance.Data = (FScriptContainerElement *)FVar5;
        (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
                  ((longlong *)((longlong)param_1 + 0x28),&FStack_338);
      }
      this = UDS_WindowManager::GetInst();
      if (this == (UDS_WindowManager *)0x0) {
        return;
      }
      afStack_328[0] = 0.0;
      FStack_338.Data.AllocatorInstance.Data =
           FStack_338.Data.AllocatorInstance.Data & 0xffffffff00000000;
      UDS_WindowManager::CloseWindow(this,LoginLocalList,(uint *)&FStack_338,afStack_328);
      FStack_338.Data.AllocatorInstance.Data =
           FStack_338.Data.AllocatorInstance.Data & 0xffffffff00000000;
      afStack_328[0] = 0.0;
      UDS_WindowManager::CloseWindow(this,ServerList,(uint *)afStack_328,(float *)&FStack_338);
      SetVisibility_SettingBtn(param_1,Hidden);
      SetVisibility_Logout(param_1,Hidden);
      UDS_AccountLocalSave::GetInst();
      bVar1 = FWeakObjectPtr::IsValid(&FStack_308);
      if (bVar1) {
        FVar5 = (FName)UDS_GameInstance::GetInst();
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (FVar5 != (FName)0x0)) {
          UE::GC::MarkAsReachable((UObject *)FVar5);
        }
        FStack_320.ObjectIndex = 0;
        FStack_320.ObjectSerialNumber = 0;
        FStack_338.Data.AllocatorInstance.Data = (FScriptContainerElement *)FVar5;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (FVar5 != (FName)0x0)) {
          UE::GC::MarkAsReachable((UObject *)FVar5);
        }
        FWeakObjectPtr::operator=(&FStack_320,(FObjectPtr)&FStack_338);
        bVar1 = FWeakObjectPtr::IsValid(&FStack_320);
        if (bVar1) {
          pUVar6 = (UDS_GameInstance *)FWeakObjectPtr::Get(&FStack_320);
          UDS_GameInstance::GetServerInfoObject(pUVar6);
          bVar1 = FWeakObjectPtr::IsValid(&FStack_310);
          if (bVar1) {
            pTVar4 = UDS_SyncServer::GetWorldInfos();
            if (*(int *)&pTVar4->field_0x8 != *(int *)&pTVar4->field_0x34) {
              puVar14 = *(undefined1 **)&pTVar4->field_0x40;
              if (*(undefined1 **)&pTVar4->field_0x40 == (undefined1 *)0x0) {
                puVar14 = &pTVar4->field_0x38;
              }
              iVar11 = *(int *)(puVar14 + (ulonglong)(*(int *)&pTVar4->field_0x48 - 1U & uVar15) * 4
                               );
              if (iVar11 != -1) {
                do {
                  if (*(uint *)((longlong)iVar11 * 0x38 + *(longlong *)pTVar4) == uVar15) {
                    if (iVar11 != -1) {
                      pTVar4 = UDS_SyncServer::GetWorldInfos();
                      pFVar7 = TMapBase<int,FDS_WorldInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_WorldInfo,0>_>
                               ::FindChecked((TMapBase<int,FDS_WorldInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_WorldInfo,0>_>
                                              *)pTVar4,uVar15);
                      ::FString::FString(&FStack_2d8.AccountID,"");
                      ::FString::FString(&FStack_2d8.AccountPW,"");
                      FText::FromString(&FStack_2d8.AccountMemo,"Memo");
                      ::FString::FString(&FStack_2d8.ServerName,"None");
                      FStack_2d8.RecentLoginTime.Ticks = 0;
                      FStack_2d8.CharSlotIndex = 0;
                      FStack_2d8.APIServerIndex = -1;
                      FStack_2d8.ServerIndex = -1;
                      FStack_2d8.CharID = 0;
                      pFVar8 = FText::ToString((FText *)((longlong)param_1 + 0x188));
                      ::FString::operator=(&FStack_2d8.AccountID,pFVar8);
                      FStack_2d8.RecentLoginTime = FDateTime::Now();
                    /* WARNING: Load size is inaccurate */
                      FStack_2d8.RecentLoginTime.Ticks = *FStack_2d8.RecentLoginTime.Ticks;
                      FStack_2d8.ServerIndex = uVar15;
                      iVar11 = (pFVar7->WorldName).Data.ArrayNum;
                      iVar13 = iVar11 + -1;
                      if (iVar11 == 0) {
                        iVar13 = 0;
                      }
                      ::FString::AssignRange
                                (&FStack_2d8.ServerName,
                                 (wchar_t *)(pFVar7->WorldName).Data.AllocatorInstance.Data,iVar13);
                      FStack_300.APIServerIndex = 0;
                      ::FString::FString(&FStack_300.AccountID,"");
                      pFVar8 = FText::ToString((FText *)((longlong)param_1 + 0x188));
                      ::FString::operator=(&FStack_300.AccountID,pFVar8);
                      pUVar9 = (UDS_SyncServer *)FWeakObjectPtr::Get(&FStack_310);
                      FStack_300.APIServerIndex = UDS_SyncServer::GetServerInfoIndex(pUVar9);
                      this_00 = (UDS_AccountLocalSave *)FWeakObjectPtr::Get(&FStack_308);
                      UDS_AccountLocalSave::OnSuccessAccess(this_00,&FStack_300,&FStack_2d8);
                      pUVar2 = UDS_LogManager::GetInst();
                      if (pUVar2 != (UDS_LogManager *)0x0) {
                        pUVar2 = UDS_LogManager::GetInst();
                        pUVar6 = (UDS_GameInstance *)FWeakObjectPtr::Get(&FStack_320);
                        this_01 = UDS_GameInstance::GetServerInfoObject(pUVar6);
                        pUVar9 = (UDS_SyncServer *)
                                 FWeakObjectPtr::Get((FWeakObjectPtr *)this_01.WeakPtr);
                        UDS_SyncServer::GetServerInfoURL(pUVar9,&FStack_278);
                        TStack_268._padding_ = 0;
                        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                                  (&TStack_268,"UDS_VM_W_LoginMenu::OnClick_Access",0x22,Yes);
                        UDS_LogManager::PrintLog
                                  (pUVar2,1,Warning,TStack_268.Ptr,0x103,L"====Login %s");
                        if ((void *)TStack_268._padding_ != (void *)0x0) {
                          FMemory::Free((void *)TStack_268._padding_);
                        }
                        if (FStack_278.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0
                           ) {
                          FMemory::Free(FStack_278.Data.AllocatorInstance.Data);
                        }
                      }
                      if (FStack_300.AccountID.Data.AllocatorInstance.Data !=
                          (FScriptContainerElement *)0x0) {
                        FMemory::Free(FStack_300.AccountID.Data.AllocatorInstance.Data);
                      }
                      if (FStack_2d8.ServerName.Data.AllocatorInstance.Data !=
                          (FScriptContainerElement *)0x0) {
                        FMemory::Free(FStack_2d8.ServerName.Data.AllocatorInstance.Data);
                      }
                      if (FStack_2d8.AccountMemo.TextData.Reference != (ITextData *)0x0) {
                        (**(code **)((longlong)*FStack_2d8.AccountMemo.TextData.Reference + 0x10))()
                        ;
                      }
                      if (FStack_2d8.AccountPW.Data.AllocatorInstance.Data !=
                          (FScriptContainerElement *)0x0) {
                        FMemory::Free(FStack_2d8.AccountPW.Data.AllocatorInstance.Data);
                      }
                      if (FStack_2d8.AccountID.Data.AllocatorInstance.Data !=
                          (FScriptContainerElement *)0x0) {
                        FMemory::Free(FStack_2d8.AccountID.Data.AllocatorInstance.Data);
                      }
                    }
                    break;
                  }
                  iVar11 = *(int *)((longlong)iVar11 * 0x38 + 0x30 + *(longlong *)pTVar4);
                } while (iVar11 != -1);
              }
            }
            SetVisibility_AccessBtn(param_1,Hidden);
            pUVar10 = (UDS_LoginState *)FWeakObjectPtr::Get(&FStack_318);
            UDS_LoginState::ConnectGameServer(pUVar10);
            return;
          }
          pUVar2 = UDS_LogManager::GetInst();
          if (pUVar2 == (UDS_LogManager *)0x0) {
            return;
          }
          pUVar2 = UDS_LogManager::GetInst();
          TStack_268._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&TStack_268,"UDS_VM_W_LoginMenu::OnClick_Access",0x22,Yes);
          pwVar16 = L"syncServer is not valid.";
          uVar15 = 0xf0;
        }
        else {
          pUVar2 = UDS_LogManager::GetInst();
          if (pUVar2 == (UDS_LogManager *)0x0) {
            return;
          }
          pUVar2 = UDS_LogManager::GetInst();
          TStack_268._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&TStack_268,"UDS_VM_W_LoginMenu::OnClick_Access",0x22,Yes);
          pwVar16 = L"gameInst is not valid.";
          uVar15 = 0xea;
        }
      }
      else {
        pUVar2 = UDS_LogManager::GetInst();
        if (pUVar2 == (UDS_LogManager *)0x0) {
          return;
        }
        pUVar2 = UDS_LogManager::GetInst();
        TStack_268._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&TStack_268,"UDS_VM_W_LoginMenu::OnClick_Access",0x22,Yes);
        pwVar16 = L"accountSave is not valid.";
        uVar15 = 0xe3;
      }
      UDS_LogManager::PrintLog(pUVar2,1,Warning,TStack_268.Ptr,uVar15,pwVar16);
      pvVar12 = (void *)TStack_268._padding_;
LAB_14c027704:
      if (pvVar12 == (void *)0x0) {
        return;
      }
      FMemory::Free(pvVar12);
      return;
    }
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar2 = UDS_LogManager::GetInst();
    TStack_148._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&TStack_148,"UDS_VM_W_LoginMenu::OnClick_Access",0x22,Yes);
    pwVar16 = L"Not Receive Server Data";
    uVar15 = 0xb3;
  }
  UDS_LogManager::PrintLog(pUVar2,1,Warning,TStack_148.Ptr,uVar15,pwVar16);
  if ((void *)TStack_148._padding_ != (void *)0x0) {
    FMemory::Free((void *)TStack_148._padding_);
  }
  return;
}

// SetClick_AccountList_WrapperImpl @ 14b73cf10

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UDS_VM_W_LoginMenu::SetClick_AccountList_WrapperImpl(void *param_1,void *param_2)

{
  bool bVar1;
  char cVar2;
  UDS_WindowManager *this;
  UObject *pUVar3;
  undefined8 *puVar4;
  ulong64 uVar5;
  TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *pTVar6;
  void *pvStackX_18;
  uint auStackX_20 [2];
  FWeakObjectPtr aFStack_98 [2];
  code *pcStack_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  bool bStack_78;
  undefined1 auStack_68 [8];
  FDelegateAllocation FStack_60;
  FDestructionSentinel FStack_50;
  FDelegateAllocation *pFStack_38;
  
  this = UDS_WindowManager::GetInst();
  if (this != (UDS_WindowManager *)0x0) {
    UDS_WindowManager::GetWindowInfo(this,(EDS_WindowWidget)aFStack_98);
    bVar1 = FWeakObjectPtr::IsValid(aFStack_98);
    if (bVar1) {
      pUVar3 = FWeakObjectPtr::Get(aFStack_98);
      cVar2 = (**(code **)(*(longlong *)pUVar3 + 0x2c8))(pUVar3);
      if (cVar2 == '\0') {
        pcStack_88 = OnOpenAccountListWidget;
        uStack_80 = 0;
        auStack_68 = (undefined1  [8])0x0;
        FStack_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
        FStack_60.DelegateSize = 0;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)auStack_68,
                   (FWriteAccessScope *)&FStack_50);
        pFStack_38 = &FStack_60;
        puVar4 = UE::Core::Private::DelegateAllocate(0x30,&FStack_60);
        if (puVar4 != (undefined8 *)0x0) {
          *puVar4 = &
                    ___7__TCommonDelegateInstanceState___A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy____V__6B_
          ;
          uVar5 = FDelegateHandle::GenerateNewID();
          puVar4[2] = uVar5;
          *puVar4 = &
                    ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_W_LoginMenu____A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy____V__6B_
          ;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (void *)0x0)) {
            UE::GC::MarkAsReachable(param_1);
          }
          puVar4[3] = 0;
          pvStackX_18 = param_1;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (void *)0x0)) {
            UE::GC::MarkAsReachable(param_1);
          }
          FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar4 + 3),(FObjectPtr)&pvStackX_18);
          puVar4[4] = pcStack_88;
          puVar4[5] = CONCAT44(uStack_7c,uStack_80);
        }
        if (FStack_50.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_50.Accessor,&FStack_50);
        }
        pTVar6 = TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>::
                 TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>
                           ((TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *)
                            &pcStack_88,
                            (TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *)
                            auStack_68);
        UDS_WindowManager::OpenWindow(this,LoginLocalList,pTVar6);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)auStack_68,
                   (FWriteAccessScope *)&pcStack_88);
        if ((FStack_60.DelegateSize != 0) &&
           (FStack_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
          (*(code *)**(undefined8 **)FStack_60.DelegateAllocator)();
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                    ((ForAnyElementType *)&FStack_60,0,0,0x10);
          FStack_60.DelegateSize = 0;
        }
        if (bStack_78 == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                    ((FMRSWRecursiveAccessDetector *)CONCAT44(uStack_7c,uStack_80),
                     (FDestructionSentinel *)&pcStack_88);
        }
        if (FStack_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
          FMemory::Free((void *)FStack_60.DelegateAllocator);
        }
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                  ((FMRSWRecursiveAccessDetector *)auStack_68);
      }
      else {
        pvStackX_18 = (void *)((ulonglong)pvStackX_18 & 0xffffffff00000000);
        auStackX_20[0] = 0;
        UDS_WindowManager::CloseWindow(this,LoginLocalList,auStackX_20,(float *)&pvStackX_18);
      }
    }
  }
  return;
}

// SetClick_Logout_WrapperImpl @ 14b73cf20

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UDS_VM_W_LoginMenu::SetClick_Logout_WrapperImpl(void *param_1,void *param_2)

{
  UDS_WindowManager *this;
  FDS_AuthData *this_00;
  float afStackX_18 [2];
  uint auStackX_20 [2];
  
  this = UDS_WindowManager::GetInst();
  if (this != (UDS_WindowManager *)0x0) {
    afStackX_18[0] = 0.0;
    auStackX_20[0] = 0;
    UDS_WindowManager::CloseWindow(this,ServerList,auStackX_20,afStackX_18);
    this_00 = TDS_Singleton<FDS_AuthData>::GetInst();
    FDS_AuthData::ResetData(this_00);
    InitProperties(param_1);
    return;
  }
  return;
}

// SetClick_Setting_WrapperImpl @ 14b73cf30

void __cdecl UDS_VM_W_LoginMenu::SetClick_Setting_WrapperImpl(void *param_1,void *param_2)

{
  return;
}

// SetPlayerIdText_WrapperImpl @ 14b73cf40

void __cdecl UDS_VM_W_LoginMenu::SetPlayerIdText_WrapperImpl(void *param_1,void *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  FName FVar3;
  int iVar4;
  bool bVar5;
  undefined1 auStackX_8 [8];
  FName FStack_28;
  int iStack_20;
  
  iVar4 = FFieldNotificationClassDescriptor::PlayerIdText.BitNumber;
  FVar3 = FFieldNotificationClassDescriptor::PlayerIdText.FieldName;
  bVar5 = FText::IdenticalTo((FText *)((longlong)param_1 + 0x188),param_2,None);
  if (!bVar5) {
    plVar1 = *(longlong **)param_2;
    plVar2 = *(longlong **)((longlong)param_1 + 0x188);
    if (plVar2 != plVar1) {
      *(longlong **)((longlong)param_1 + 0x188) = plVar1;
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 8))(plVar1,auStackX_8);
      }
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
    *(undefined4 *)((longlong)param_1 + 400) = *(undefined4 *)((longlong)param_2 + 8);
    FStack_28 = FVar3;
    iStack_20 = iVar4;
    (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
              ((longlong *)((longlong)param_1 + 0x28),&FStack_28);
  }
  return;
}

// SetBtnText_APIServer_WrapperImpl @ 14b73cf50

void __cdecl UDS_VM_W_LoginMenu::SetBtnText_APIServer_WrapperImpl(void *param_1,void *param_2)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  int iVar3;
  FString *pFVar4;
  FName FStack_18;
  int iStack_10;
  
  if (*(int *)((longlong)param_2 + 8) != 0) {
    pFVar2 = (ForAnyElementType *)((longlong)param_1 + 0x198);
    if (pFVar2 != param_2) {
      DestructItems<FString,int>((FString *)pFVar2->Data,*(int *)((longlong)param_1 + 0x1a0));
      iVar3 = *(int *)((longlong)param_2 + 8);
      piVar1 = (int *)((longlong)param_1 + 0x1a4);
      pFVar4 = *(FString **)param_2;
      *(int *)((longlong)param_1 + 0x1a0) = iVar3;
      if ((iVar3 == 0) && (*piVar1 == 0)) {
        *piVar1 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,iVar3,*piVar1,pFVar2,iVar3,piVar1);
        ConstructItems<FString,FString,int>(pFVar2->Data,pFVar4,iVar3);
      }
    }
    iStack_10 = FFieldNotificationClassDescriptor::BtnText_APIServer.BitNumber;
    FStack_18 = FFieldNotificationClassDescriptor::BtnText_APIServer.FieldName;
    (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
              ((longlong *)((longlong)param_1 + 0x28),&FStack_18);
  }
  return;
}

// SetAlertText_WrapperImpl @ 14b73cf60

void __cdecl UDS_VM_W_LoginMenu::SetAlertText_WrapperImpl(void *param_1,void *param_2)

{
  FName FVar1;
  int iVar2;
  FName FStack_18;
  int iStack_10;
  
  iVar2 = FFieldNotificationClassDescriptor::AlertText.BitNumber;
  FVar1 = FFieldNotificationClassDescriptor::AlertText.FieldName;
  FDS_Text::operator=((FDS_Text *)((longlong)param_1 + 0x1a8),param_2);
  FStack_18 = FVar1;
  iStack_10 = iVar2;
  (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
            ((longlong *)((longlong)param_1 + 0x28),&FStack_18);
  return;
}

// SetOpenAnimationFinishEvent_WrapperImpl @ 14b73cf70

void __cdecl
UDS_VM_W_LoginMenu::SetOpenAnimationFinishEvent_WrapperImpl(void *param_1,void *param_2)

{
  bool bVar1;
  FName *pFVar2;
  FName aFStackX_10 [3];
  FName FStack_18;
  int iStack_10;
  
  bVar1 = ::FName::Equals(*(FName *)param_2,"Open_ani");
  if (bVar1) {
    pFVar2 = ::FName::FName(aFStackX_10,"Start_ani");
    *(FName *)((longlong)param_1 + 0x200) = *pFVar2;
    *(undefined1 *)((longlong)param_1 + 0x20c) = 2;
    *(undefined4 *)((longlong)param_1 + 0x210) = 0;
    iStack_10 = FFieldNotificationClassDescriptor::OpenAnimationEvent.BitNumber;
    FStack_18 = FFieldNotificationClassDescriptor::OpenAnimationEvent.FieldName;
    (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
              ((longlong)param_1 + 0x28,&FStack_18);
    iStack_10 = FFieldNotificationClassDescriptor::InitLoginButtonOpacityVlaue.BitNumber;
    FStack_18 = FFieldNotificationClassDescriptor::InitLoginButtonOpacityVlaue.FieldName;
    (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
              ((longlong)param_1 + 0x28,&FStack_18);
  }
  return;
}

// StaticClass @ 14b73cfc0

UClass * __cdecl UDS_VM_W_LoginMenu::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_W_LoginMenu.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_W_LoginMenu",
               &Z_Registration_Info_UClass_UDS_VM_W_LoginMenu.InnerSingleton,
               StaticRegisterNativesUDS_VM_W_LoginMenu,0x358,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_W_LoginMenu>,
               InternalVTableHelperCtorCaller<UDS_VM_W_LoginMenu>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_W_LoginMenu.InnerSingleton;
}

// UDS_VM_W_LoginMenu @ 14b7422d0

UDS_VM_W_LoginMenu * __thiscall
UDS_VM_W_LoginMenu::UDS_VM_W_LoginMenu(UDS_VM_W_LoginMenu *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_W_LoginMenu__6B_;
  FText::FText(&(this->IdTextChangedEvent).NewText);
  (this->Click_Login)._padding_ = '\0';
  (this->Click_Login).bIsCustomSelected = false;
  (this->Click_Login).bIsLacked = false;
  (this->Click_Login).bIsCustomDisabled = false;
  *(undefined8 *)&(this->Click_Login).Delegate = 0;
  *(undefined8 *)&(this->Click_Login).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->Click_Login).Delegate.field_0x10 = 0;
  (this->Click_Access)._padding_ = '\0';
  (this->Click_Access).bIsCustomSelected = false;
  (this->Click_Access).bIsLacked = false;
  (this->Click_Access).bIsCustomDisabled = false;
  *(undefined8 *)&(this->Click_Access).Delegate = 0;
  *(undefined8 *)&(this->Click_Access).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->Click_Access).Delegate.field_0x10 = 0;
  (this->Click_AccountList)._padding_ = '\0';
  (this->Click_AccountList).bIsCustomSelected = false;
  (this->Click_AccountList).bIsLacked = false;
  (this->Click_AccountList).bIsCustomDisabled = false;
  *(undefined8 *)&(this->Click_AccountList).Delegate = 0;
  *(undefined8 *)&(this->Click_AccountList).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->Click_AccountList).Delegate.field_0x10 = 0;
  (this->Click_Logout)._padding_ = '\0';
  (this->Click_Logout).bIsCustomSelected = false;
  (this->Click_Logout).bIsLacked = false;
  (this->Click_Logout).bIsCustomDisabled = false;
  *(undefined8 *)&(this->Click_Logout).Delegate = 0;
  *(undefined8 *)&(this->Click_Logout).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->Click_Logout).Delegate.field_0x10 = 0;
  (this->Click_Setting)._padding_ = '\0';
  (this->Click_Setting).bIsCustomSelected = false;
  (this->Click_Setting).bIsLacked = false;
  (this->Click_Setting).bIsCustomDisabled = false;
  *(undefined8 *)&(this->Click_Setting).Delegate = 0;
  *(undefined8 *)&(this->Click_Setting).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->Click_Setting).Delegate.field_0x10 = 0;
  (this->Click_CreateCharacter)._padding_ = '\0';
  (this->Click_CreateCharacter).bIsCustomSelected = false;
  (this->Click_CreateCharacter).bIsLacked = false;
  (this->Click_CreateCharacter).bIsCustomDisabled = false;
  *(undefined8 *)&(this->Click_CreateCharacter).Delegate = 0;
  *(undefined8 *)&(this->Click_CreateCharacter).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->Click_CreateCharacter).Delegate.field_0x10 = 0;
  FText::FText(&this->PlayerIdText);
  (this->BtnText_APIServer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BtnText_APIServer).ArrayNum = 0;
  (this->BtnText_APIServer).ArrayMax = 0;
  (this->AlertText).StringTableType = None;
  (this->AlertText).StringTableID = 0;
  (this->AlertText).StringEnumTableNameID.ComparisonIndex = 0;
  (this->AlertText).StringEnumTableNameID.Number = 0;
  (this->AlertText).DateTime.Ticks = 0;
  (this->AlertText).TimeSpan.Ticks = 0;
  (this->AlertText).TimeExpressionType = None;
  (this->AlertText).IsExpression = false;
  (this->AlertText).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AlertText).UniqueString.Data.ArrayNum = 0;
  (this->AlertText).UniqueString.Data.ArrayMax = 0;
  (this->AlertText).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AlertText).FormatArgs.ArrayNum = 0;
  (this->AlertText).FormatArgs.ArrayMax = 0;
  this->LoginSwitcher = 0;
  this->InitLoginButtonOpacityVlaue = 1.0;
  (this->OpenAnimationEvent).AnimationName.ComparisonIndex = 0;
  *(undefined8 *)&(this->OpenAnimationEvent).AnimationName.Number = 0;
  (this->OpenAnimationEvent).AnimationEventType = None;
  (this->OpenAnimationEvent).AnimationStateType = None;
  (this->OpenAnimationEvent).NumberOfLoops = 1;
  *(undefined8 *)&(this->OpenAnimationEvent).Delegate_AnimationFinish = 0;
  *(undefined8 *)&(this->OpenAnimationEvent).Delegate_AnimationFinish.field_0x8 = 0;
  *(undefined4 *)&(this->OpenAnimationEvent).Delegate_AnimationFinish.field_0x10 = 0;
  *(undefined8 *)&(this->OpenAnimationEvent).Delegate_ValidAnimation = 0;
  *(undefined8 *)&(this->OpenAnimationEvent).Delegate_ValidAnimation.field_0x8 = 0;
  *(undefined4 *)&(this->OpenAnimationEvent).Delegate_ValidAnimation.field_0x10 = 0;
  (this->OpenAnimationFinishEvent).AnimationName.ComparisonIndex = 0;
  (this->OpenAnimationFinishEvent).AnimationName.Number = 0;
  (this->OpenAnimationFinishEvent).AnimationPlayTime = 0.0;
  (this->OpenAnimationFinishEvent).AnimationEventType = None;
  (this->OpenAnimationFinishEvent).AnimationStateType = None;
  (this->OpenAnimationFinishEvent).NumberOfLoops = 1;
  *(undefined8 *)&(this->OpenAnimationFinishEvent).Delegate_AnimationFinish = 0;
  *(undefined8 *)&(this->OpenAnimationFinishEvent).Delegate_AnimationFinish.field_0x8 = 0;
  *(undefined4 *)&(this->OpenAnimationFinishEvent).Delegate_AnimationFinish.field_0x10 = 0;
  *(undefined8 *)&(this->OpenAnimationFinishEvent).Delegate_ValidAnimation = 0;
  *(undefined8 *)&(this->OpenAnimationFinishEvent).Delegate_ValidAnimation.field_0x8 = 0;
  *(undefined4 *)&(this->OpenAnimationFinishEvent).Delegate_ValidAnimation.field_0x10 = 0;
  (this->FixedText_Right).StringTableType = StringUi;
  (this->FixedText_Right).StringTableID = 0x7df;
  (this->FixedText_Right).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_Right).StringEnumTableNameID.Number = 0;
  (this->FixedText_Right).DateTime.Ticks = 0;
  (this->FixedText_Right).TimeSpan.Ticks = 0;
  (this->FixedText_Right).TimeExpressionType = None;
  (this->FixedText_Right).IsExpression = false;
  (this->FixedText_Right).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_Right).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_Right).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_Right).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_Right).FormatArgs.ArrayNum = 0;
  (this->FixedText_Right).FormatArgs.ArrayMax = 0;
  (this->FixedText_Hint_Enter).StringTableType = StringUi;
  (this->FixedText_Hint_Enter).StringTableID = 0x7e0;
  (this->FixedText_Hint_Enter).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_Hint_Enter).StringEnumTableNameID.Number = 0;
  (this->FixedText_Hint_Enter).DateTime.Ticks = 0;
  (this->FixedText_Hint_Enter).TimeSpan.Ticks = 0;
  (this->FixedText_Hint_Enter).TimeExpressionType = None;
  (this->FixedText_Hint_Enter).IsExpression = false;
  (this->FixedText_Hint_Enter).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_Hint_Enter).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_Hint_Enter).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_Hint_Enter).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_Hint_Enter).FormatArgs.ArrayNum = 0;
  (this->FixedText_Hint_Enter).FormatArgs.ArrayMax = 0;
  (this->VM_CharDropdown).field0_0x0.DebugPtr = (UDS_VM_Dropdown *)0x0;
  this->AbnormalConnectedAPIServer = 0x7dd;
  this->TempAmbientVolume = 0.0;
  (this->CharIDList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CharIDList).ArrayNum = 0;
  (this->CharIDList).ArrayMax = 0;
  this->SelectedCharID = 0;
  return this;
}

// UDS_VM_W_LoginMenu @ 14b742590

UDS_VM_W_LoginMenu * __thiscall
UDS_VM_W_LoginMenu::UDS_VM_W_LoginMenu(UDS_VM_W_LoginMenu *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_W_LoginMenu__6B_;
  FText::FText(&(this->IdTextChangedEvent).NewText);
  (this->Click_Login)._padding_ = '\0';
  (this->Click_Login).bIsCustomSelected = false;
  (this->Click_Login).bIsLacked = false;
  (this->Click_Login).bIsCustomDisabled = false;
  *(undefined8 *)&(this->Click_Login).Delegate = 0;
  *(undefined8 *)&(this->Click_Login).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->Click_Login).Delegate.field_0x10 = 0;
  (this->Click_Access)._padding_ = '\0';
  (this->Click_Access).bIsCustomSelected = false;
  (this->Click_Access).bIsLacked = false;
  (this->Click_Access).bIsCustomDisabled = false;
  *(undefined8 *)&(this->Click_Access).Delegate = 0;
  *(undefined8 *)&(this->Click_Access).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->Click_Access).Delegate.field_0x10 = 0;
  (this->Click_AccountList)._padding_ = '\0';
  (this->Click_AccountList).bIsCustomSelected = false;
  (this->Click_AccountList).bIsLacked = false;
  (this->Click_AccountList).bIsCustomDisabled = false;
  *(undefined8 *)&(this->Click_AccountList).Delegate = 0;
  *(undefined8 *)&(this->Click_AccountList).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->Click_AccountList).Delegate.field_0x10 = 0;
  (this->Click_Logout)._padding_ = '\0';
  (this->Click_Logout).bIsCustomSelected = false;
  (this->Click_Logout).bIsLacked = false;
  (this->Click_Logout).bIsCustomDisabled = false;
  *(undefined8 *)&(this->Click_Logout).Delegate = 0;
  *(undefined8 *)&(this->Click_Logout).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->Click_Logout).Delegate.field_0x10 = 0;
  (this->Click_Setting)._padding_ = '\0';
  (this->Click_Setting).bIsCustomSelected = false;
  (this->Click_Setting).bIsLacked = false;
  (this->Click_Setting).bIsCustomDisabled = false;
  *(undefined8 *)&(this->Click_Setting).Delegate = 0;
  *(undefined8 *)&(this->Click_Setting).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->Click_Setting).Delegate.field_0x10 = 0;
  (this->Click_CreateCharacter)._padding_ = '\0';
  (this->Click_CreateCharacter).bIsCustomSelected = false;
  (this->Click_CreateCharacter).bIsLacked = false;
  (this->Click_CreateCharacter).bIsCustomDisabled = false;
  *(undefined8 *)&(this->Click_CreateCharacter).Delegate = 0;
  *(undefined8 *)&(this->Click_CreateCharacter).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->Click_CreateCharacter).Delegate.field_0x10 = 0;
  FText::FText(&this->PlayerIdText);
  (this->BtnText_APIServer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BtnText_APIServer).ArrayNum = 0;
  (this->BtnText_APIServer).ArrayMax = 0;
  (this->AlertText).StringTableType = None;
  (this->AlertText).StringTableID = 0;
  (this->AlertText).StringEnumTableNameID.ComparisonIndex = 0;
  (this->AlertText).StringEnumTableNameID.Number = 0;
  (this->AlertText).DateTime.Ticks = 0;
  (this->AlertText).TimeSpan.Ticks = 0;
  (this->AlertText).TimeExpressionType = None;
  (this->AlertText).IsExpression = false;
  (this->AlertText).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AlertText).UniqueString.Data.ArrayNum = 0;
  (this->AlertText).UniqueString.Data.ArrayMax = 0;
  (this->AlertText).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AlertText).FormatArgs.ArrayNum = 0;
  (this->AlertText).FormatArgs.ArrayMax = 0;
  this->LoginSwitcher = 0;
  this->InitLoginButtonOpacityVlaue = 1.0;
  (this->OpenAnimationEvent).AnimationName.ComparisonIndex = 0;
  *(undefined8 *)&(this->OpenAnimationEvent).AnimationName.Number = 0;
  (this->OpenAnimationEvent).AnimationEventType = None;
  (this->OpenAnimationEvent).AnimationStateType = None;
  (this->OpenAnimationEvent).NumberOfLoops = 1;
  *(undefined8 *)&(this->OpenAnimationEvent).Delegate_AnimationFinish = 0;
  *(undefined8 *)&(this->OpenAnimationEvent).Delegate_AnimationFinish.field_0x8 = 0;
  *(undefined4 *)&(this->OpenAnimationEvent).Delegate_AnimationFinish.field_0x10 = 0;
  *(undefined8 *)&(this->OpenAnimationEvent).Delegate_ValidAnimation = 0;
  *(undefined8 *)&(this->OpenAnimationEvent).Delegate_ValidAnimation.field_0x8 = 0;
  *(undefined4 *)&(this->OpenAnimationEvent).Delegate_ValidAnimation.field_0x10 = 0;
  (this->OpenAnimationFinishEvent).AnimationName.ComparisonIndex = 0;
  (this->OpenAnimationFinishEvent).AnimationName.Number = 0;
  (this->OpenAnimationFinishEvent).AnimationPlayTime = 0.0;
  (this->OpenAnimationFinishEvent).AnimationEventType = None;
  (this->OpenAnimationFinishEvent).AnimationStateType = None;
  (this->OpenAnimationFinishEvent).NumberOfLoops = 1;
  *(undefined8 *)&(this->OpenAnimationFinishEvent).Delegate_AnimationFinish = 0;
  *(undefined8 *)&(this->OpenAnimationFinishEvent).Delegate_AnimationFinish.field_0x8 = 0;
  *(undefined4 *)&(this->OpenAnimationFinishEvent).Delegate_AnimationFinish.field_0x10 = 0;
  *(undefined8 *)&(this->OpenAnimationFinishEvent).Delegate_ValidAnimation = 0;
  *(undefined8 *)&(this->OpenAnimationFinishEvent).Delegate_ValidAnimation.field_0x8 = 0;
  *(undefined4 *)&(this->OpenAnimationFinishEvent).Delegate_ValidAnimation.field_0x10 = 0;
  (this->FixedText_Right).StringTableType = StringUi;
  (this->FixedText_Right).StringTableID = 0x7df;
  (this->FixedText_Right).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_Right).StringEnumTableNameID.Number = 0;
  (this->FixedText_Right).DateTime.Ticks = 0;
  (this->FixedText_Right).TimeSpan.Ticks = 0;
  (this->FixedText_Right).TimeExpressionType = None;
  (this->FixedText_Right).IsExpression = false;
  (this->FixedText_Right).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_Right).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_Right).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_Right).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_Right).FormatArgs.ArrayNum = 0;
  (this->FixedText_Right).FormatArgs.ArrayMax = 0;
  (this->FixedText_Hint_Enter).StringTableType = StringUi;
  (this->FixedText_Hint_Enter).StringTableID = 0x7e0;
  (this->FixedText_Hint_Enter).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_Hint_Enter).StringEnumTableNameID.Number = 0;
  (this->FixedText_Hint_Enter).DateTime.Ticks = 0;
  (this->FixedText_Hint_Enter).TimeSpan.Ticks = 0;
  (this->FixedText_Hint_Enter).TimeExpressionType = None;
  (this->FixedText_Hint_Enter).IsExpression = false;
  (this->FixedText_Hint_Enter).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_Hint_Enter).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_Hint_Enter).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_Hint_Enter).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_Hint_Enter).FormatArgs.ArrayNum = 0;
  (this->FixedText_Hint_Enter).FormatArgs.ArrayMax = 0;
  (this->VM_CharDropdown).field0_0x0.DebugPtr = (UDS_VM_Dropdown *)0x0;
  this->AbnormalConnectedAPIServer = 0x7dd;
  this->TempAmbientVolume = 0.0;
  (this->CharIDList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CharIDList).ArrayNum = 0;
  (this->CharIDList).ArrayMax = 0;
  this->SelectedCharID = 0;
  return this;
}

// ~UDS_VM_W_LoginMenu @ 14b7432e0

void __thiscall UDS_VM_W_LoginMenu::~UDS_VM_W_LoginMenu(UDS_VM_W_LoginMenu *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  ITextData *pIVar3;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_W_LoginMenu__6B_;
  pFVar1 = (this->CharIDList).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->FixedText_Hint_Enter).FormatArgs.AllocatorInstance.Data,
             (this->FixedText_Hint_Enter).FormatArgs.ArrayNum);
  pFVar1 = (this->FixedText_Hint_Enter).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FixedText_Hint_Enter).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->FixedText_Right).FormatArgs.AllocatorInstance.Data,
             (this->FixedText_Right).FormatArgs.ArrayNum);
  pFVar1 = (this->FixedText_Right).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FixedText_Right).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(this->OpenAnimationFinishEvent).Delegate_ValidAnimation);
  pvVar2 = *(void **)&(this->OpenAnimationFinishEvent).Delegate_ValidAnimation.field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)
             &(this->OpenAnimationFinishEvent).Delegate_ValidAnimation);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(this->OpenAnimationFinishEvent).Delegate_AnimationFinish);
  pvVar2 = *(void **)&(this->OpenAnimationFinishEvent).Delegate_AnimationFinish.field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)
             &(this->OpenAnimationFinishEvent).Delegate_AnimationFinish);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(this->OpenAnimationEvent).Delegate_ValidAnimation);
  pvVar2 = *(void **)&(this->OpenAnimationEvent).Delegate_ValidAnimation.field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->OpenAnimationEvent).Delegate_ValidAnimation);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(this->OpenAnimationEvent).Delegate_AnimationFinish);
  pvVar2 = *(void **)&(this->OpenAnimationEvent).Delegate_AnimationFinish.field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->OpenAnimationEvent).Delegate_AnimationFinish);
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->AlertText).FormatArgs.AllocatorInstance.Data,
             (this->AlertText).FormatArgs.ArrayNum);
  pFVar1 = (this->AlertText).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->AlertText).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FString,int>
            ((FString *)(this->BtnText_APIServer).AllocatorInstance.Data,
             (this->BtnText_APIServer).ArrayNum);
  pFVar1 = (this->BtnText_APIServer).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pIVar3 = (this->PlayerIdText).TextData.Reference;
  if (pIVar3 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar3 + 0x10))();
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->Click_CreateCharacter).Delegate);
  pvVar2 = *(void **)&(this->Click_CreateCharacter).Delegate.field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->Click_CreateCharacter).Delegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->Click_Setting).Delegate);
  pvVar2 = *(void **)&(this->Click_Setting).Delegate.field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->Click_Setting).Delegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->Click_Logout).Delegate);
  pvVar2 = *(void **)&(this->Click_Logout).Delegate.field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->Click_Logout).Delegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->Click_AccountList).Delegate);
  pvVar2 = *(void **)&(this->Click_AccountList).Delegate.field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->Click_AccountList).Delegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->Click_Access).Delegate);
  pvVar2 = *(void **)&(this->Click_Access).Delegate.field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->Click_Access).Delegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->Click_Login).Delegate);
  pvVar2 = *(void **)&(this->Click_Login).Delegate.field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->Click_Login).Delegate);
  pIVar3 = (this->IdTextChangedEvent).NewText.TextData.Reference;
  if (pIVar3 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar3 + 0x10))();
  }
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b7450d0

IClassDescriptor * __thiscall
UDS_VM_W_LoginMenu::GetFieldNotificationDescriptor(UDS_VM_W_LoginMenu *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_W_LoginMenu::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b745b00

UClass * __cdecl UDS_VM_W_LoginMenu::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_W_LoginMenu.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_W_LoginMenu",
               &Z_Registration_Info_UClass_UDS_VM_W_LoginMenu.InnerSingleton,
               StaticRegisterNativesUDS_VM_W_LoginMenu,0x358,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_W_LoginMenu>,
               InternalVTableHelperCtorCaller<UDS_VM_W_LoginMenu>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_W_LoginMenu.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_W_LoginMenu @ 14b745df0

void __cdecl UDS_VM_W_LoginMenu::StaticRegisterNativesUDS_VM_W_LoginMenu(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 4;
  local_18.DataPtr = Z_Construct_UClass_UDS_VM_W_LoginMenu_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execOnChangeGameState @ 14b7474c0

void __cdecl
UDS_VM_W_LoginMenu::execOnChangeGameState(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  EDS_GameStateType *pEVar2;
  EDS_GameStateType *pEVar3;
  EDS_GameStateType local_res10 [4];
  EDS_GameStateType local_res20 [2];
  
  local_res10[0] = None;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  pEVar3 = (EDS_GameStateType *)param_2->MostRecentPropertyAddress;
  local_res20[0] = None;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  pEVar2 = local_res10;
  if (pEVar3 != (EDS_GameStateType *)0x0) {
    pEVar2 = pEVar3;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  pEVar3 = local_res20;
  if ((EDS_GameStateType *)param_2->MostRecentPropertyAddress != (EDS_GameStateType *)0x0) {
    pEVar3 = (EDS_GameStateType *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  OnChangeGameState((UDS_VM_W_LoginMenu *)param_1,pEVar2,pEVar3);
  return;
}

// execOnLogout @ 14b747930

void __cdecl UDS_VM_W_LoginMenu::execOnLogout(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  OnLogout((UDS_VM_W_LoginMenu *)param_1);
  return;
}

// execOnOpenAccountListWidget @ 14b747950

void __cdecl
UDS_VM_W_LoginMenu::execOnOpenAccountListWidget(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UDS_UserWidget *local_res10;
  
  local_res10 = (UDS_UserWidget *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  OnOpenAccountListWidget((UDS_VM_W_LoginMenu *)param_1,local_res10);
  return;
}

// execSetPlayerID @ 14b747a60

void __cdecl UDS_VM_W_LoginMenu::execSetPlayerID(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FString local_18;
  
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  SetPlayerID((UDS_VM_W_LoginMenu *)param_1,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// AccessLobbyFailed @ 14c001e10

void __thiscall UDS_VM_W_LoginMenu::AccessLobbyFailed(UDS_VM_W_LoginMenu *this)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::Visibility_LoginLoading.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::Visibility_LoginLoading.FieldName;
  if (this->Visibility_LoginLoading != Hidden) {
    this->Visibility_LoginLoading = Hidden;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  local_10 = FFieldNotificationClassDescriptor::Visibility_SettingBtn.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::Visibility_SettingBtn.FieldName;
  if (this->Visibility_SettingBtn != Visible) {
    this->Visibility_SettingBtn = Visible;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  local_10 = FFieldNotificationClassDescriptor::Visibility_Logout.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::Visibility_Logout.FieldName;
  if (this->Visibility_Logout != Visible) {
    this->Visibility_Logout = Visible;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// BindModel @ 14c002ab0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall UDS_VM_W_LoginMenu::BindModel(UDS_VM_W_LoginMenu *this)

{
  code *pcVar1;
  bool bVar2;
  UObject *pUVar3;
  char *pcVar4;
  UObject *this_00;
  UFunction *pUVar5;
  UDS_LoginEvent *pUVar6;
  FDS_AuthData *pFVar7;
  char *pcVar8;
  <lambda_1> local_res10 [8];
  FWeakObjectPtr local_res18;
  FName local_res20;
  TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode> local_108;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_f8;
  FWeakObjectPtr local_f0;
  FName local_e8;
  FName local_e0;
  UDS_VM_W_LoginMenu *local_d8;
  FName *local_d0;
  FDestructionSentinel local_c8;
  undefined1 local_b0 [16];
  undefined1 local_a0 [80];
  FReadAccessScope local_50;
  
  UDS_ViewModelBase::BindModel((UDS_ViewModelBase *)this);
  UDS_AccountLocalSave::GetInst();
  bVar2 = FWeakObjectPtr::IsValid(&local_res18);
  if (!bVar2) goto LAB_14c002d10;
  pUVar3 = FWeakObjectPtr::Get(&local_res18);
  pcVar4 = strstr("&UDS_VM_W_LoginMenu::SetPlayerID","::");
  if (pcVar4 == (char *)0x0) {
LAB_14c002b4b:
    pcVar8 = &DAT_00000002;
LAB_14c002b50:
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Result && Result[2] != \'0\'",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\Delegate.h"
                       ,0x1da,L"\'%hs\' does not look like a member function");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    do {
      pcVar8 = pcVar4;
      pcVar4 = strstr(pcVar8 + 1,"::");
    } while (pcVar4 != (char *)0x0);
    if (pcVar8 == (char *)0x0) goto LAB_14c002b4b;
    pcVar8 = pcVar8 + 2;
    if (*pcVar8 == '0') goto LAB_14c002b50;
  }
  ::FName::FName(&local_e0,pcVar8);
  if ((this == (UDS_VM_W_LoginMenu *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InUserObject != nullptr && InMethodPtr != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateSignatureImpl.inl"
                         ,0x4c8,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  local_f8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_f0.ObjectIndex = 0;
  local_f0.ObjectSerialNumber = 0;
  local_e8.ComparisonIndex.Value = 0;
  local_e8.Number = 0;
  local_res20 = local_e0;
  if ((this == (UDS_VM_W_LoginMenu *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InUserObject != nullptr && InMethodPtr != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateSignatureImpl.inl"
                         ,0x46d,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  local_d8 = this;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UDS_VM_W_LoginMenu *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)this);
  }
  FWeakObjectPtr::operator=(&local_f0,(FObjectPtr)&local_d8);
  local_e8 = local_res20;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            (&local_f8,(FReadAccessScope *)(local_a0 + 0x38));
  if ((local_e8 == (FName)0x0) ||
     (this_00 = FWeakObjectPtr::Get(&local_f0), this_00 == (UObject *)0x0)) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)(local_a0 + 0x38));
LAB_14c002c81:
    local_d0 = &local_res20;
    `TBaseDynamicDelegate<FNotThreadSafeDelegateMode,void,FString_const_&>::
    __Internal_BindDynamic<UDS_VM_W_LoginMenu>'::__l2::<lambda_1>::operator()(&local_d0);
  }
  else {
    pUVar5 = UObject::FindFunction(this_00,local_e8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)(local_a0 + 0x38));
    if (pUVar5 == (UFunction *)0x0) goto LAB_14c002c81;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_f8,&local_50);
  local_108.Object = local_f0;
  local_108.FunctionName = local_e8;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_50);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(pUVar3 + 1),
             (FWriteAccessScope *)&local_c8);
  TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>::
  RemoveAllSwap<_TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::CompactInvocationList_::__l2::<lambda_1>_>
            ((TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>
              *)&pUVar3[1].field_0x8,local_res10,Default);
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::AddInternal
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)(pUVar3 + 1),&local_108);
  if (local_c8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_c8.Accessor,&local_c8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_f8.AccessDetector);
LAB_14c002d10:
  pUVar6 = UDS_LoginEvent::GetEvent();
  if (pUVar6 != (UDS_LoginEvent *)0x0) {
    local_108.FunctionName = (FName)((ulonglong)local_108.FunctionName & 0xffffffff00000000);
    local_108.Object = (FWeakObjectPtr)OnLoginCompleted;
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar6->OnLoginCompleted,this)
    ;
    local_a0._8_4_ = local_108.Object.ObjectIndex;
    local_a0._12_4_ = local_108.Object.ObjectSerialNumber;
    local_a0._16_4_ = local_108.FunctionName.ComparisonIndex.Value;
    local_a0._20_4_ = local_108.FunctionName.Number;
    TMulticastDelegateRegistration<void___cdecl(bool),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_VM_W_LoginMenu>
              ((TMulticastDelegateRegistration<void___cdecl(bool),FDefaultDelegateUserPolicy> *)
               &pUVar6->OnLoginCompleted,(UDS_VM_W_LoginMenu *)local_b0,(pmf_dc4b0eed *)this);
    local_108.FunctionName = (FName)((ulonglong)local_108.FunctionName & 0xffffffff00000000);
    local_108.Object = (FWeakObjectPtr)OnInGameLevelLoadCompleted;
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar6->OnInGameLevelLoadCompleted,this);
    local_a0._24_4_ = local_108.Object.ObjectIndex;
    local_a0._28_4_ = local_108.Object.ObjectSerialNumber;
    local_a0._32_4_ = local_108.FunctionName.ComparisonIndex.Value;
    local_a0._36_4_ = local_108.FunctionName.Number;
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_VM_W_LoginMenu>
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &pUVar6->OnInGameLevelLoadCompleted,(UDS_VM_W_LoginMenu *)(local_b0 + 8),
               (pmf_9a0ad689 *)this);
  }
  local_108.FunctionName = (FName)((ulonglong)local_108.FunctionName & 0xffffffff00000000);
  local_108.Object = (FWeakObjectPtr)OnLogout;
  local_a0._40_8_ = OnLogout;
  local_a0._48_4_ = local_108.FunctionName.ComparisonIndex.Value;
  local_a0._52_4_ = local_108.FunctionName.Number;
  pFVar7 = TDS_Singleton<FDS_AuthData>::GetInst();
  TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
  AddUObject<UDS_VM_W_LoginMenu>
            ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
             &pFVar7->OnStateChangedLogoutDelegate,(UDS_VM_W_LoginMenu *)local_a0,
             (pmf_9a0ad689 *)this);
  return;
}

// OnChangeGameState @ 14c0250b0

void __thiscall
UDS_VM_W_LoginMenu::OnChangeGameState
          (UDS_VM_W_LoginMenu *this,EDS_GameStateType *param_1,EDS_GameStateType *param_2)

{
  ESlateVisibility EVar1;
  
  EVar1 = Collapsed;
  if (*param_2 == LoginState) {
    EVar1 = SelfHitTestInvisible;
  }
  UDS_ViewModelBase::SetVisibility((UDS_ViewModelBase *)this,EVar1);
  return;
}

// OnClick_Access @ 14c027160

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
UDS_VM_W_LoginMenu::OnClick_Access(UDS_VM_W_LoginMenu *this,FDS_ButtonEventField *param_1)

{
  bool bVar1;
  UDS_LogManager *pUVar2;
  FDS_AuthData *pFVar3;
  TMap<int,FDS_WorldInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_WorldInfo,0>_>
  *pTVar4;
  UDS_WindowManager *this_00;
  FName FVar5;
  UDS_GameInstance *pUVar6;
  FDS_WorldInfo *pFVar7;
  FString *pFVar8;
  UDS_SyncServer *pUVar9;
  UDS_AccountLocalSave *this_01;
  TWeakObjectPtr<UDS_SyncServer,FWeakObjectPtr> this_02;
  UDS_LoginState *pUVar10;
  int iVar11;
  void *pvVar12;
  int iVar13;
  undefined1 *puVar14;
  undefined1 auStackY_378 [32];
  uint uVar15;
  wchar_t *pwVar16;
  FString local_338;
  float local_328 [2];
  FWeakObjectPtr local_320;
  FWeakObjectPtr local_318;
  FWeakObjectPtr local_310;
  FWeakObjectPtr local_308;
  FDS_AccountKey local_300;
  int local_2e8;
  int local_2e4;
  int local_2e0;
  FDS_AccountInfo local_2d8;
  FString local_278;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_268;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_378;
  UDS_LoginState::GetInst();
  bVar1 = TWeakObjectPtr<UDS_LoginState,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_LoginState,FWeakObjectPtr> *)&local_318,(void *)0x0);
  if (bVar1) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar2 = UDS_LogManager::GetInst();
    local_148._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_148,"UDS_VM_W_LoginMenu::OnClick_Access",0x22,Yes);
    pwVar16 = L"loginState is nullptr.";
    uVar15 = 0xad;
  }
  else {
    pFVar3 = TDS_Singleton<FDS_AuthData>::GetInst();
    if (pFVar3->IsReceiveLoginData != false) {
      pFVar3 = TDS_Singleton<FDS_AuthData>::GetInst();
      bVar1 = FDS_AuthData::CheckServerDataConnection(pFVar3);
      if (!bVar1) {
        FDS_UIMessageInfo::FDS_UIMessageInfo((FDS_UIMessageInfo *)&local_148,Popup_LogOut);
        ::FString::FString(&local_338,"ServerData is invalid: address is empty or port number is 0."
                          );
        FDS_Text::SetTextFromUniqueString((FDS_Text *)&local_148,&local_338);
        if ((FName)local_338.Data.AllocatorInstance.Data != (FName)0x0) {
          FMemory::Free(local_338.Data.AllocatorInstance.Data);
        }
        UDS_UIMessageManager::OpenMsgByMsgInfo((FDS_UIMessageInfo *)&local_148);
        FDS_UIMessageInfo::~FDS_UIMessageInfo((FDS_UIMessageInfo *)&local_148);
        return;
      }
      pFVar3 = TDS_Singleton<FDS_AuthData>::GetInst();
      uVar15 = pFVar3->WorldId;
      pTVar4 = UDS_SyncServer::GetWorldInfos();
      if (*(int *)&pTVar4->field_0x8 != *(int *)&pTVar4->field_0x34) {
        puVar14 = *(undefined1 **)&pTVar4->field_0x40;
        if (*(undefined1 **)&pTVar4->field_0x40 == (undefined1 *)0x0) {
          puVar14 = &pTVar4->field_0x38;
        }
        iVar11 = *(int *)(puVar14 + (ulonglong)(*(int *)&pTVar4->field_0x48 - 1U & uVar15) * 4);
        if (iVar11 != -1) {
          do {
            if (*(uint *)((longlong)iVar11 * 0x38 + *(longlong *)pTVar4) == uVar15) {
              if (iVar11 != -1) {
                pTVar4 = UDS_SyncServer::GetWorldInfos();
                pFVar7 = TMapBase<int,FDS_WorldInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_WorldInfo,0>_>
                         ::FindChecked((TMapBase<int,FDS_WorldInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_WorldInfo,0>_>
                                        *)pTVar4,uVar15);
                ::FString::FString((FString *)&local_300,&pFVar7->WorldName);
                local_300.AccountID.Data.ArrayNum = pFVar7->WorldType;
                local_300.AccountID.Data.ArrayMax = pFVar7->WorldState;
                local_2e8 = pFVar7->WorldId;
                local_2e4 = pFVar7->RegionIndex;
                local_2e0 = pFVar7->CharCount;
                if (local_300.AccountID.Data.ArrayMax != 0) {
                  pUVar10 = (UDS_LoginState *)FWeakObjectPtr::Get(&local_318);
                  UDS_LoginState::StartSystemModule(pUVar10);
                  FDS_UIMessageInfo::FDS_UIMessageInfo((FDS_UIMessageInfo *)&local_148,Popup_Close);
                  ::FString::FString(&local_338,"The server is under maintenance.");
                  FDS_Text::SetTextFromUniqueString((FDS_Text *)&local_148,&local_338);
                  if ((FName)local_338.Data.AllocatorInstance.Data != (FName)0x0) {
                    FMemory::Free(local_338.Data.AllocatorInstance.Data);
                  }
                  UDS_UIMessageManager::OpenMsgByMsgInfo((FDS_UIMessageInfo *)&local_148);
                  pUVar2 = UDS_LogManager::GetInst();
                  if (pUVar2 != (UDS_LogManager *)0x0) {
                    pUVar2 = UDS_LogManager::GetInst();
                    local_268._padding_ = 0;
                    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                              (&local_268,"UDS_VM_W_LoginMenu::OnClick_Access",0x22,Yes);
                    UDS_LogManager::PrintLog
                              (pUVar2,1,Warning,local_268.Ptr,0xce,
                               L"The server is under maintenance.");
                    if ((void *)local_268._padding_ != (void *)0x0) {
                      FMemory::Free((void *)local_268._padding_);
                    }
                  }
                  FDS_UIMessageInfo::~FDS_UIMessageInfo((FDS_UIMessageInfo *)&local_148);
                  pvVar12 = (void *)CONCAT44(local_300._4_4_,local_300.APIServerIndex);
                  goto LAB_14c027704;
                }
                if ((void *)CONCAT44(local_300._4_4_,local_300.APIServerIndex) != (void *)0x0) {
                  FMemory::Free((void *)CONCAT44(local_300._4_4_,local_300.APIServerIndex));
                }
              }
              break;
            }
            iVar11 = *(int *)((longlong)iVar11 * 0x38 + 0x30 + *(longlong *)pTVar4);
          } while (iVar11 != -1);
        }
      }
      iVar11 = FFieldNotificationClassDescriptor::Visibility_LoginLoading.BitNumber;
      FVar5 = FFieldNotificationClassDescriptor::Visibility_LoginLoading.FieldName;
      if (this->Visibility_LoginLoading != Visible) {
        this->Visibility_LoginLoading = Visible;
        local_338.Data.ArrayNum = iVar11;
        local_338.Data.AllocatorInstance.Data = (FScriptContainerElement *)FVar5;
        (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_338);
      }
      this_00 = UDS_WindowManager::GetInst();
      if (this_00 == (UDS_WindowManager *)0x0) {
        return;
      }
      local_328[0] = 0.0;
      local_338.Data.AllocatorInstance.Data =
           local_338.Data.AllocatorInstance.Data & 0xffffffff00000000;
      UDS_WindowManager::CloseWindow(this_00,LoginLocalList,(uint *)&local_338,local_328);
      local_338.Data.AllocatorInstance.Data =
           local_338.Data.AllocatorInstance.Data & 0xffffffff00000000;
      local_328[0] = 0.0;
      UDS_WindowManager::CloseWindow(this_00,ServerList,(uint *)local_328,(float *)&local_338);
      SetVisibility_SettingBtn(this,Hidden);
      SetVisibility_Logout(this,Hidden);
      UDS_AccountLocalSave::GetInst();
      bVar1 = FWeakObjectPtr::IsValid(&local_308);
      if (bVar1) {
        FVar5 = (FName)UDS_GameInstance::GetInst();
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (FVar5 != (FName)0x0)) {
          UE::GC::MarkAsReachable((UObject *)FVar5);
        }
        local_320.ObjectIndex = 0;
        local_320.ObjectSerialNumber = 0;
        local_338.Data.AllocatorInstance.Data = (FScriptContainerElement *)FVar5;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (FVar5 != (FName)0x0)) {
          UE::GC::MarkAsReachable((UObject *)FVar5);
        }
        FWeakObjectPtr::operator=(&local_320,(FObjectPtr)&local_338);
        bVar1 = FWeakObjectPtr::IsValid(&local_320);
        if (bVar1) {
          pUVar6 = (UDS_GameInstance *)FWeakObjectPtr::Get(&local_320);
          UDS_GameInstance::GetServerInfoObject(pUVar6);
          bVar1 = FWeakObjectPtr::IsValid(&local_310);
          if (bVar1) {
            pTVar4 = UDS_SyncServer::GetWorldInfos();
            if (*(int *)&pTVar4->field_0x8 != *(int *)&pTVar4->field_0x34) {
              puVar14 = *(undefined1 **)&pTVar4->field_0x40;
              if (*(undefined1 **)&pTVar4->field_0x40 == (undefined1 *)0x0) {
                puVar14 = &pTVar4->field_0x38;
              }
              iVar11 = *(int *)(puVar14 + (ulonglong)(*(int *)&pTVar4->field_0x48 - 1U & uVar15) * 4
                               );
              if (iVar11 != -1) {
                do {
                  if (*(uint *)((longlong)iVar11 * 0x38 + *(longlong *)pTVar4) == uVar15) {
                    if (iVar11 != -1) {
                      pTVar4 = UDS_SyncServer::GetWorldInfos();
                      pFVar7 = TMapBase<int,FDS_WorldInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_WorldInfo,0>_>
                               ::FindChecked((TMapBase<int,FDS_WorldInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_WorldInfo,0>_>
                                              *)pTVar4,uVar15);
                      ::FString::FString(&local_2d8.AccountID,"");
                      ::FString::FString(&local_2d8.AccountPW,"");
                      FText::FromString(&local_2d8.AccountMemo,"Memo");
                      ::FString::FString(&local_2d8.ServerName,"None");
                      local_2d8.RecentLoginTime.Ticks = 0;
                      local_2d8.CharSlotIndex = 0;
                      local_2d8.APIServerIndex = -1;
                      local_2d8.ServerIndex = -1;
                      local_2d8.CharID = 0;
                      pFVar8 = FText::ToString(&this->PlayerIdText);
                      ::FString::operator=(&local_2d8.AccountID,pFVar8);
                      local_2d8.RecentLoginTime = FDateTime::Now();
                    /* WARNING: Load size is inaccurate */
                      local_2d8.RecentLoginTime.Ticks = *local_2d8.RecentLoginTime.Ticks;
                      local_2d8.ServerIndex = uVar15;
                      iVar11 = (pFVar7->WorldName).Data.ArrayNum;
                      iVar13 = iVar11 + -1;
                      if (iVar11 == 0) {
                        iVar13 = 0;
                      }
                      ::FString::AssignRange
                                (&local_2d8.ServerName,
                                 (wchar_t *)(pFVar7->WorldName).Data.AllocatorInstance.Data,iVar13);
                      local_300.APIServerIndex = 0;
                      ::FString::FString(&local_300.AccountID,"");
                      pFVar8 = FText::ToString(&this->PlayerIdText);
                      ::FString::operator=(&local_300.AccountID,pFVar8);
                      pUVar9 = (UDS_SyncServer *)FWeakObjectPtr::Get(&local_310);
                      local_300.APIServerIndex = UDS_SyncServer::GetServerInfoIndex(pUVar9);
                      this_01 = (UDS_AccountLocalSave *)FWeakObjectPtr::Get(&local_308);
                      UDS_AccountLocalSave::OnSuccessAccess(this_01,&local_300,&local_2d8);
                      pUVar2 = UDS_LogManager::GetInst();
                      if (pUVar2 != (UDS_LogManager *)0x0) {
                        pUVar2 = UDS_LogManager::GetInst();
                        pUVar6 = (UDS_GameInstance *)FWeakObjectPtr::Get(&local_320);
                        this_02 = UDS_GameInstance::GetServerInfoObject(pUVar6);
                        pUVar9 = (UDS_SyncServer *)
                                 FWeakObjectPtr::Get((FWeakObjectPtr *)this_02.WeakPtr);
                        UDS_SyncServer::GetServerInfoURL(pUVar9,&local_278);
                        local_268._padding_ = 0;
                        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                                  (&local_268,"UDS_VM_W_LoginMenu::OnClick_Access",0x22,Yes);
                        UDS_LogManager::PrintLog
                                  (pUVar2,1,Warning,local_268.Ptr,0x103,L"====Login %s");
                        if ((void *)local_268._padding_ != (void *)0x0) {
                          FMemory::Free((void *)local_268._padding_);
                        }
                        if (local_278.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
                        {
                          FMemory::Free(local_278.Data.AllocatorInstance.Data);
                        }
                      }
                      if (local_300.AccountID.Data.AllocatorInstance.Data !=
                          (FScriptContainerElement *)0x0) {
                        FMemory::Free(local_300.AccountID.Data.AllocatorInstance.Data);
                      }
                      if (local_2d8.ServerName.Data.AllocatorInstance.Data !=
                          (FScriptContainerElement *)0x0) {
                        FMemory::Free(local_2d8.ServerName.Data.AllocatorInstance.Data);
                      }
                      if (local_2d8.AccountMemo.TextData.Reference != (ITextData *)0x0) {
                        (**(code **)((longlong)*local_2d8.AccountMemo.TextData.Reference + 0x10))();
                      }
                      if (local_2d8.AccountPW.Data.AllocatorInstance.Data !=
                          (FScriptContainerElement *)0x0) {
                        FMemory::Free(local_2d8.AccountPW.Data.AllocatorInstance.Data);
                      }
                      if (local_2d8.AccountID.Data.AllocatorInstance.Data !=
                          (FScriptContainerElement *)0x0) {
                        FMemory::Free(local_2d8.AccountID.Data.AllocatorInstance.Data);
                      }
                    }
                    break;
                  }
                  iVar11 = *(int *)((longlong)iVar11 * 0x38 + 0x30 + *(longlong *)pTVar4);
                } while (iVar11 != -1);
              }
            }
            SetVisibility_AccessBtn(this,Hidden);
            pUVar10 = (UDS_LoginState *)FWeakObjectPtr::Get(&local_318);
            UDS_LoginState::ConnectGameServer(pUVar10);
            return;
          }
          pUVar2 = UDS_LogManager::GetInst();
          if (pUVar2 == (UDS_LogManager *)0x0) {
            return;
          }
          pUVar2 = UDS_LogManager::GetInst();
          local_268._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_268,"UDS_VM_W_LoginMenu::OnClick_Access",0x22,Yes);
          pwVar16 = L"syncServer is not valid.";
          uVar15 = 0xf0;
        }
        else {
          pUVar2 = UDS_LogManager::GetInst();
          if (pUVar2 == (UDS_LogManager *)0x0) {
            return;
          }
          pUVar2 = UDS_LogManager::GetInst();
          local_268._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_268,"UDS_VM_W_LoginMenu::OnClick_Access",0x22,Yes);
          pwVar16 = L"gameInst is not valid.";
          uVar15 = 0xea;
        }
      }
      else {
        pUVar2 = UDS_LogManager::GetInst();
        if (pUVar2 == (UDS_LogManager *)0x0) {
          return;
        }
        pUVar2 = UDS_LogManager::GetInst();
        local_268._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_268,"UDS_VM_W_LoginMenu::OnClick_Access",0x22,Yes);
        pwVar16 = L"accountSave is not valid.";
        uVar15 = 0xe3;
      }
      UDS_LogManager::PrintLog(pUVar2,1,Warning,local_268.Ptr,uVar15,pwVar16);
      pvVar12 = (void *)local_268._padding_;
LAB_14c027704:
      if (pvVar12 == (void *)0x0) {
        return;
      }
      FMemory::Free(pvVar12);
      return;
    }
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar2 = UDS_LogManager::GetInst();
    local_148._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_148,"UDS_VM_W_LoginMenu::OnClick_Access",0x22,Yes);
    pwVar16 = L"Not Receive Server Data";
    uVar15 = 0xb3;
  }
  UDS_LogManager::PrintLog(pUVar2,1,Warning,local_148.Ptr,uVar15,pwVar16);
  if ((void *)local_148._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_148._padding_);
  }
  return;
}

// OnClick_AccountList @ 14c0279f0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_W_LoginMenu::OnClick_AccountList(UDS_VM_W_LoginMenu *this,FDS_ButtonEventField *param_1)

{
  bool bVar1;
  char cVar2;
  UDS_WindowManager *this_00;
  UObject *pUVar3;
  undefined8 *puVar4;
  ulong64 uVar5;
  TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *pTVar6;
  UDS_VM_W_LoginMenu *local_res18;
  uint local_res20 [2];
  FWeakObjectPtr local_98 [2];
  code *local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  bool local_78;
  undefined1 local_68 [8];
  FDelegateAllocation local_60;
  FDestructionSentinel local_50;
  FDelegateAllocation *local_38;
  
  this_00 = UDS_WindowManager::GetInst();
  if (this_00 != (UDS_WindowManager *)0x0) {
    UDS_WindowManager::GetWindowInfo(this_00,(EDS_WindowWidget)local_98);
    bVar1 = FWeakObjectPtr::IsValid(local_98);
    if (bVar1) {
      pUVar3 = FWeakObjectPtr::Get(local_98);
      cVar2 = (**(code **)(*(longlong *)pUVar3 + 0x2c8))(pUVar3);
      if (cVar2 == '\0') {
        local_88 = OnOpenAccountListWidget;
        uStack_80 = 0;
        local_68 = (undefined1  [8])0x0;
        local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
        local_60.DelegateSize = 0;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_68,
                   (FWriteAccessScope *)&local_50);
        local_38 = &local_60;
        puVar4 = UE::Core::Private::DelegateAllocate(0x30,&local_60);
        if (puVar4 != (undefined8 *)0x0) {
          *puVar4 = &
                    ___7__TCommonDelegateInstanceState___A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy____V__6B_
          ;
          uVar5 = FDelegateHandle::GenerateNewID();
          puVar4[2] = uVar5;
          *puVar4 = &
                    ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_W_LoginMenu____A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy____V__6B_
          ;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (this != (UDS_VM_W_LoginMenu *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)this);
          }
          puVar4[3] = 0;
          local_res18 = this;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (this != (UDS_VM_W_LoginMenu *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)this);
          }
          FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar4 + 3),(FObjectPtr)&local_res18);
          puVar4[4] = local_88;
          puVar4[5] = CONCAT44(uStack_7c,uStack_80);
        }
        if (local_50.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
        }
        pTVar6 = TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>::
                 TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>
                           ((TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *)
                            &local_88,
                            (TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *)
                            local_68);
        UDS_WindowManager::OpenWindow(this_00,LoginLocalList,pTVar6);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_68,
                   (FWriteAccessScope *)&local_88);
        if ((local_60.DelegateSize != 0) &&
           (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
          (*(code *)**(undefined8 **)local_60.DelegateAllocator)();
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                    ((ForAnyElementType *)&local_60,0,0,0x10);
          local_60.DelegateSize = 0;
        }
        if (local_78 == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                    ((FMRSWRecursiveAccessDetector *)CONCAT44(uStack_7c,uStack_80),
                     (FDestructionSentinel *)&local_88);
        }
        if (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
          FMemory::Free((void *)local_60.DelegateAllocator);
        }
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                  ((FMRSWRecursiveAccessDetector *)local_68);
      }
      else {
        local_res18 = (UDS_VM_W_LoginMenu *)((ulonglong)local_res18 & 0xffffffff00000000);
        local_res20[0] = 0;
        UDS_WindowManager::CloseWindow(this_00,LoginLocalList,local_res20,(float *)&local_res18);
      }
    }
  }
  return;
}

// OnClick_CreateCharacter @ 14c027c00

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
UDS_VM_W_LoginMenu::OnClick_CreateCharacter(UDS_VM_W_LoginMenu *this,UObject *param_1)

{
  UWorld *pUVar1;
  
  pUVar1 = (UWorld *)(**(code **)(this->_padding_ + 0x180))();
  ADS_CustomizeRenderRoom::SpawnRenderRoomAsync(pUVar1);
  return;
}

// OnClick_Login @ 14c027c20

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_W_LoginMenu::OnClick_Login(UDS_VM_W_LoginMenu *this,FDS_ButtonEventField *param_1)

{
  FDS_EventDelegate<FString_const_&,int_const_> *this_00;
  undefined1 *puVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  char cVar8;
  uint uVar9;
  UDS_WindowManager *this_01;
  UDS_LoginEvent *pUVar10;
  FString *pFVar11;
  uint uVar12;
  longlong lVar13;
  float local_res18 [2];
  uint local_res20 [2];
  FDestructionSentinel local_48;
  
  this_01 = UDS_WindowManager::GetInst();
  if (this_01 != (UDS_WindowManager *)0x0) {
    local_res18[0] = 0.0;
    local_res20[0] = 0;
    UDS_WindowManager::CloseWindow(this_01,APIServerList,local_res20,local_res18);
    pUVar10 = UDS_LoginEvent::GetEvent();
    if (pUVar10 != (UDS_LoginEvent *)0x0) {
      this_00 = &pUVar10->OnRequestLogin;
      iVar2 = this->SelectedCharID;
      pFVar11 = FText::ToString(&this->PlayerIdText);
      bVar6 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                        ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this_00);
      if (bVar6) {
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,
                   (FWriteAccessScope *)&local_48);
        puVar1 = &(pUVar10->OnRequestLogin).Delegate.field_0x1c;
        *(int *)puVar1 = *(int *)puVar1 + 1;
        bVar6 = false;
        uVar12 = *(int *)&(pUVar10->OnRequestLogin).Delegate.field_0x10 - 1;
        if (-1 < (int)uVar12) {
          lVar13 = (longlong)(int)uVar12 << 4;
          bVar6 = false;
          do {
            uVar9 = 0;
            if ((int)uVar12 < *(int *)&(pUVar10->OnRequestLogin).Delegate.field_0x10) {
              uVar9 = ~uVar12 >> 0x1f;
            }
            if ((uVar9 == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar7)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            lVar3 = *(longlong *)&(pUVar10->OnRequestLogin).Delegate.field_0x8;
            if (((*(int *)(lVar13 + 8 + lVar3) == 0) ||
                (plVar4 = *(longlong **)(lVar13 + lVar3), plVar4 == (longlong *)0x0)) ||
               (cVar8 = (**(code **)(*plVar4 + 0x68))(plVar4,pFVar11,iVar2), cVar8 == '\0')) {
              bVar6 = true;
            }
            lVar13 = lVar13 + -0x10;
            uVar12 = uVar12 - 1;
          } while (-1 < (int)uVar12);
        }
        puVar1 = &(pUVar10->OnRequestLogin).Delegate.field_0x1c;
        *(int *)puVar1 = *(int *)puVar1 + -1;
        if (bVar6) {
          TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                    ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this_00,false);
        }
        if (local_48.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
        }
      }
    }
  }
  return;
}

// OnClick_Logout @ 14c027dd0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_W_LoginMenu::OnClick_Logout(UDS_VM_W_LoginMenu *this,FDS_ButtonEventField *param_1)

{
  UDS_WindowManager *this_00;
  FDS_AuthData *this_01;
  float local_res18 [2];
  uint local_res20 [2];
  
  this_00 = UDS_WindowManager::GetInst();
  if (this_00 != (UDS_WindowManager *)0x0) {
    local_res18[0] = 0.0;
    local_res20[0] = 0;
    UDS_WindowManager::CloseWindow(this_00,ServerList,local_res20,local_res18);
    this_01 = TDS_Singleton<FDS_AuthData>::GetInst();
    FDS_AuthData::ResetData(this_01);
    InitProperties(this);
    return;
  }
  return;
}

// OnClick_Setting @ 14c027e30

void __thiscall
UDS_VM_W_LoginMenu::OnClick_Setting(UDS_VM_W_LoginMenu *this,FDS_ButtonEventField *param_1)

{
  return;
}

// OnIdTextChangedEvent @ 14c02b090

void __thiscall
UDS_VM_W_LoginMenu::OnIdTextChangedEvent
          (UDS_VM_W_LoginMenu *this,FDS_TextCommittedEventField *param_1)

{
  bool bVar1;
  
  bVar1 = FText::EqualTo(&this->PlayerIdText,&param_1->NewText,Default);
  if (!bVar1) {
    SetPlayerIdText(this,&param_1->NewText);
  }
  return;
}

// OnInGameLevelLoadCompleted @ 14c02b0d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_W_LoginMenu::OnInGameLevelLoadCompleted(UDS_VM_W_LoginMenu *this)

{
  bool bVar1;
  UDS_LogManager *pUVar2;
  UDS_WindowManager *this_00;
  undefined1 auStackY_188 [32];
  FWeakObjectPtr local_158;
  float local_150 [2];
  UDS_WindowManager *local_148 [2];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_188;
  local_148[0] = UDS_WindowManager::GetInst();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_148[0] != (UDS_WindowManager *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_148[0]);
  }
  local_158.ObjectIndex = 0;
  local_158.ObjectSerialNumber = 0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_148[0] != (UDS_WindowManager *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_148[0]);
  }
  FWeakObjectPtr::operator=(&local_158,(FObjectPtr)local_148);
  bVar1 = FWeakObjectPtr::IsValid(&local_158);
  if (bVar1) {
    this_00 = (UDS_WindowManager *)FWeakObjectPtr::Get(&local_158);
    local_150[0] = 0.0;
    local_148[0] = (UDS_WindowManager *)((ulonglong)local_148[0] & 0xffffffff00000000);
    UDS_WindowManager::CloseWindow(this_00,Login,(uint *)local_148,local_150);
  }
  else {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 != (UDS_LogManager *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_VM_W_LoginMenu::OnInGameLevelLoadCompleted",0x2e,Yes);
      UDS_LogManager::PrintLog(pUVar2,1,Warning,local_138.Ptr,0x219,L"windowManager is not valid.");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  return;
}

// OnLoginCompleted @ 14c02c160

void __thiscall UDS_VM_W_LoginMenu::OnLoginCompleted(UDS_VM_W_LoginMenu *this,bool param_1)

{
  FName FVar1;
  int iVar2;
  FName FVar3;
  int iVar4;
  FName *pFVar5;
  FName local_res8;
  FName local_18;
  int local_10;
  
  iVar2 = FFieldNotificationClassDescriptor::Visibility_LoginLoading.BitNumber;
  FVar1 = FFieldNotificationClassDescriptor::Visibility_LoginLoading.FieldName;
  if (this->Visibility_LoginLoading != Collapsed) {
    this->Visibility_LoginLoading = Collapsed;
    local_10 = iVar2;
    local_18 = FVar1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  iVar4 = FFieldNotificationClassDescriptor::Visibility_AccessBtn.BitNumber;
  FVar3 = FFieldNotificationClassDescriptor::Visibility_AccessBtn.FieldName;
  iVar2 = FFieldNotificationClassDescriptor::Visibility_Login.BitNumber;
  FVar1 = FFieldNotificationClassDescriptor::Visibility_Login.FieldName;
  if (param_1) {
    if (this->Visibility_Login != Hidden) {
      this->Visibility_Login = Hidden;
      local_10 = iVar2;
      local_18 = FVar1;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
    }
    iVar2 = FFieldNotificationClassDescriptor::Visibility_AccessBtn.BitNumber;
    FVar1 = FFieldNotificationClassDescriptor::Visibility_AccessBtn.FieldName;
    if (this->Visibility_AccessBtn != SelfHitTestInvisible) {
      this->Visibility_AccessBtn = SelfHitTestInvisible;
      local_10 = iVar2;
      local_18 = FVar1;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
    }
    iVar2 = FFieldNotificationClassDescriptor::Visibility_Logout.BitNumber;
    FVar1 = FFieldNotificationClassDescriptor::Visibility_Logout.FieldName;
    if (this->Visibility_Logout != SelfHitTestInvisible) {
      this->Visibility_Logout = SelfHitTestInvisible;
      local_10 = iVar2;
      local_18 = FVar1;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
    }
    iVar2 = FFieldNotificationClassDescriptor::Visibility_LoginAniDeco.BitNumber;
    FVar1 = FFieldNotificationClassDescriptor::Visibility_LoginAniDeco.FieldName;
    if (this->Visibility_LoginAniDeco != SelfHitTestInvisible) {
      this->Visibility_LoginAniDeco = SelfHitTestInvisible;
      local_10 = iVar2;
      local_18 = FVar1;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
    }
    pFVar5 = ::FName::FName(&local_res8,"Open_ani");
    (this->OpenAnimationEvent).AnimationName = *pFVar5;
    (this->OpenAnimationEvent).AnimationEventType = PlayForward;
    (this->OpenAnimationEvent).NumberOfLoops = 1;
    local_18 = FFieldNotificationClassDescriptor::OpenAnimationEvent.FieldName;
    local_10 = FFieldNotificationClassDescriptor::OpenAnimationEvent.BitNumber;
  }
  else {
    if (this->Visibility_AccessBtn != Hidden) {
      this->Visibility_AccessBtn = Hidden;
      local_10 = iVar4;
      local_18 = FVar3;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
    }
    local_10 = FFieldNotificationClassDescriptor::Visibility_Logout.BitNumber;
    local_18 = FFieldNotificationClassDescriptor::Visibility_Logout.FieldName;
    if (this->Visibility_Logout == Hidden) {
      return;
    }
    this->Visibility_Logout = Hidden;
  }
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// OnLogout @ 14c02c350

void __thiscall UDS_VM_W_LoginMenu::OnLogout(UDS_VM_W_LoginMenu *this)

{
  int iVar1;
  int iVar2;
  FDS_AuthData *pFVar3;
  FName local_18;
  int local_10;
  
  pFVar3 = TDS_Singleton<FDS_AuthData>::GetInst();
  local_10 = FFieldNotificationClassDescriptor::Visibility_Logout.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::Visibility_Logout.FieldName;
  iVar1 = (pFVar3->SessionUID).Data.ArrayNum;
  iVar2 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar2 = 0;
  }
  if (iVar2 == 0) {
    if (this->Visibility_Logout != Collapsed) {
      this->Visibility_Logout = Collapsed;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
    }
    local_10 = FFieldNotificationClassDescriptor::Visibility_LoginLoading.BitNumber;
    local_18 = FFieldNotificationClassDescriptor::Visibility_LoginLoading.FieldName;
    if (this->Visibility_LoginLoading != Collapsed) {
      this->Visibility_LoginLoading = Collapsed;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
    }
    local_10 = FFieldNotificationClassDescriptor::Visibility_AccessBtn.BitNumber;
    local_18 = FFieldNotificationClassDescriptor::Visibility_AccessBtn.FieldName;
    if (this->Visibility_AccessBtn != Collapsed) {
      this->Visibility_AccessBtn = Collapsed;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
    }
    local_10 = FFieldNotificationClassDescriptor::LoginSwitcher.BitNumber;
    local_18 = FFieldNotificationClassDescriptor::LoginSwitcher.FieldName;
    if (this->LoginSwitcher != 0) {
      this->LoginSwitcher = 0;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
    }
  }
  return;
}

// OnOpenAccountListWidget @ 14c02d380

void __thiscall
UDS_VM_W_LoginMenu::OnOpenAccountListWidget(UDS_VM_W_LoginMenu *this,UDS_UserWidget *param_1)

{
  code *pcVar1;
  bool bVar2;
  FWeakObjectPtr local_res10;
  UDS_UserWidget *local_res18 [2];
  TSharedPtr<FDS_ViewModelContext,1> local_28;
  TSharedPtr<FDS_ViewModelContext,1> local_18;
  
  if (param_1 != (UDS_UserWidget *)0x0) {
    MakeContext<FDS_ViewModelContext>(&local_28);
    if (local_28.Object == (FDS_ViewModelContext *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    (local_28.Object)->ViewModelTemplateKey = W_Account;
    local_18.Object = local_28.Object;
    local_18.SharedReferenceCount.ReferenceController =
         local_28.SharedReferenceCount.ReferenceController;
    if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    local_res10.ObjectIndex = 0;
    local_res10.ObjectSerialNumber = 0;
    local_res18[0] = param_1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=(&local_res10,(FObjectPtr)local_res18);
    DS_ViewModelTemplateUtil::BindViewModel
              ((TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr>)local_res10,&local_18,false);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
  }
  return;
}

// OnOpenAnimationFinished @ 14c02d460

void __thiscall
UDS_VM_W_LoginMenu::OnOpenAnimationFinished
          (UDS_VM_W_LoginMenu *this,FDS_WidgetAnimationEventField *param_1)

{
  bool bVar1;
  FName *pFVar2;
  FName local_res10 [3];
  FName local_18;
  int local_10;
  
  bVar1 = ::FName::Equals(param_1->AnimationName,"Open_ani");
  if (bVar1) {
    pFVar2 = ::FName::FName(local_res10,"Start_ani");
    (this->OpenAnimationEvent).AnimationName = *pFVar2;
    (this->OpenAnimationEvent).AnimationEventType = PlayForward;
    (this->OpenAnimationEvent).NumberOfLoops = 0;
    local_10 = FFieldNotificationClassDescriptor::OpenAnimationEvent.BitNumber;
    local_18 = FFieldNotificationClassDescriptor::OpenAnimationEvent.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
    local_10 = FFieldNotificationClassDescriptor::InitLoginButtonOpacityVlaue.BitNumber;
    local_18 = FFieldNotificationClassDescriptor::InitLoginButtonOpacityVlaue.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// OnSelectCharChanged @ 14c02f670

void __thiscall UDS_VM_W_LoginMenu::OnSelectCharChanged(UDS_VM_W_LoginMenu *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  
  if ((-1 < param_1) && (param_1 < (this->CharIDList).ArrayNum)) {
    uVar3 = 0;
    if (param_1 < (this->CharIDList).ArrayNum) {
      uVar3 = (uint)~param_1 >> 0x1f;
    }
    if ((uVar3 == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    this->SelectedCharID =
         *(int *)((this->CharIDList).AllocatorInstance.Data + (longlong)param_1 * 4);
  }
  return;
}

// OnSetViewModel @ 14c032440

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
UDS_VM_W_LoginMenu::OnSetViewModel
          (UDS_VM_W_LoginMenu *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  UDS_SoundManager *this_00;
  undefined8 *puVar2;
  ulong64 uVar3;
  UDS_VM_W_LoginMenu *local_res8;
  uint uStack_2c;
  FDestructionSentinel local_28;
  undefined1 *local_10;
  
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  InitProperties(this);
  this_00 = UDS_SoundManager::GetInst();
  if (this_00 != (UDS_SoundManager *)0x0) {
    UDS_SoundManager::MuteSound(this_00,AMBIENT,true,__real_3f800000);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &(this->Click_CreateCharacter).Delegate,(FWriteAccessScope *)&local_28);
  local_10 = &(this->Click_CreateCharacter).Delegate.field_0x8;
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_10);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar3 = FDelegateHandle::GenerateNewID();
    puVar2[2] = uVar3;
    *puVar2 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_W_LoginMenu____A6AXPEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UDS_VM_W_LoginMenu *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar2[3] = 0;
    local_res8 = this;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UDS_VM_W_LoginMenu *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar2 + 3),(FObjectPtr)&local_res8);
    puVar2[4] = OnClick_CreateCharacter;
    puVar2[5] = (ulonglong)uStack_2c << 0x20;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// SetAlertText @ 14c03fe40

void __thiscall UDS_VM_W_LoginMenu::SetAlertText(UDS_VM_W_LoginMenu *this,FDS_Text *param_1)

{
  FName FVar1;
  int iVar2;
  FName local_18;
  int local_10;
  
  iVar2 = FFieldNotificationClassDescriptor::AlertText.BitNumber;
  FVar1 = FFieldNotificationClassDescriptor::AlertText.FieldName;
  FDS_Text::operator=(&this->AlertText,param_1);
  local_18 = FVar1;
  local_10 = iVar2;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// SetBtnText_APIServer @ 14c0409f0

void __thiscall
UDS_VM_W_LoginMenu::SetBtnText_APIServer
          (UDS_VM_W_LoginMenu *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  FName local_18;
  int local_10;
  
  if (param_1->ArrayNum != 0) {
    pTVar2 = &this->BtnText_APIServer;
    if (pTVar2 != param_1) {
      DestructItems<FString,int>
                ((FString *)(pTVar2->AllocatorInstance).Data,(this->BtnText_APIServer).ArrayNum);
      iVar3 = param_1->ArrayNum;
      piVar1 = &(this->BtnText_APIServer).ArrayMax;
      pFVar4 = (param_1->AllocatorInstance).Data;
      (this->BtnText_APIServer).ArrayNum = iVar3;
      if ((iVar3 == 0) && (*piVar1 == 0)) {
        *piVar1 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,iVar3,*piVar1,&pTVar2->AllocatorInstance,iVar3,piVar1);
        ConstructItems<FString,FString,int>
                  ((pTVar2->AllocatorInstance).Data,(FString *)pFVar4,iVar3);
      }
    }
    local_10 = FFieldNotificationClassDescriptor::BtnText_APIServer.BitNumber;
    local_18 = FFieldNotificationClassDescriptor::BtnText_APIServer.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetPlayerID @ 14c0429f0

void __thiscall UDS_VM_W_LoginMenu::SetPlayerID(UDS_VM_W_LoginMenu *this,FString *param_1)

{
  FText *pFVar1;
  FText local_18;
  
  pFVar1 = FText::FromString(&local_18,param_1);
  SetPlayerIdText(this,pFVar1);
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  return;
}

// SetPlayerIdText @ 14c042a30

void __thiscall UDS_VM_W_LoginMenu::SetPlayerIdText(UDS_VM_W_LoginMenu *this,FText *param_1)

{
  ITextData *pIVar1;
  ITextData *pIVar2;
  FName FVar3;
  int iVar4;
  bool bVar5;
  undefined1 local_res8 [8];
  FName local_28;
  int local_20;
  
  iVar4 = FFieldNotificationClassDescriptor::PlayerIdText.BitNumber;
  FVar3 = FFieldNotificationClassDescriptor::PlayerIdText.FieldName;
  bVar5 = FText::IdenticalTo(&this->PlayerIdText,param_1,None);
  if (!bVar5) {
    pIVar1 = (param_1->TextData).Reference;
    pIVar2 = (this->PlayerIdText).TextData.Reference;
    if (pIVar2 != pIVar1) {
      (this->PlayerIdText).TextData.Reference = pIVar1;
      if (pIVar1 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
      }
      if (pIVar2 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
      }
    }
    (this->PlayerIdText).Flags = param_1->Flags;
    local_28 = FVar3;
    local_20 = iVar4;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_28);
  }
  return;
}

// SetVisibility_APIServerSelect @ 14c045a20

void __thiscall
UDS_VM_W_LoginMenu::SetVisibility_APIServerSelect(UDS_VM_W_LoginMenu *this,ESlateVisibility param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::Visibility_APIServerSelect.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::Visibility_APIServerSelect.FieldName;
  if (this->Visibility_APIServerSelect != param_1) {
    this->Visibility_APIServerSelect = param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetVisibility_AccessBtn @ 14c045ac0

void __thiscall
UDS_VM_W_LoginMenu::SetVisibility_AccessBtn(UDS_VM_W_LoginMenu *this,ESlateVisibility param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::Visibility_AccessBtn.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::Visibility_AccessBtn.FieldName;
  if (this->Visibility_AccessBtn != param_1) {
    this->Visibility_AccessBtn = param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetVisibility_AccountList @ 14c045b10

void __thiscall
UDS_VM_W_LoginMenu::SetVisibility_AccountList(UDS_VM_W_LoginMenu *this,ESlateVisibility param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::Visibility_AccountList.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::Visibility_AccountList.FieldName;
  if (this->Visibility_AccountList != param_1) {
    this->Visibility_AccountList = param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetVisibility_Alert_Text @ 14c045b60

void __thiscall
UDS_VM_W_LoginMenu::SetVisibility_Alert_Text(UDS_VM_W_LoginMenu *this,ESlateVisibility param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::Visibility_Alert_Text.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::Visibility_Alert_Text.FieldName;
  if (this->Visibility_Alert_Text != param_1) {
    this->Visibility_Alert_Text = param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetVisibility_Login @ 14c045c90

void __thiscall
UDS_VM_W_LoginMenu::SetVisibility_Login(UDS_VM_W_LoginMenu *this,ESlateVisibility param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::Visibility_Login.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::Visibility_Login.FieldName;
  if (this->Visibility_Login != param_1) {
    this->Visibility_Login = param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetVisibility_LoginAniDeco @ 14c045ce0

void __thiscall
UDS_VM_W_LoginMenu::SetVisibility_LoginAniDeco(UDS_VM_W_LoginMenu *this,ESlateVisibility param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::Visibility_LoginAniDeco.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::Visibility_LoginAniDeco.FieldName;
  if (this->Visibility_LoginAniDeco != param_1) {
    this->Visibility_LoginAniDeco = param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetVisibility_LoginLoading @ 14c045d30

void __thiscall
UDS_VM_W_LoginMenu::SetVisibility_LoginLoading(UDS_VM_W_LoginMenu *this,ESlateVisibility param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::Visibility_LoginLoading.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::Visibility_LoginLoading.FieldName;
  if (this->Visibility_LoginLoading != param_1) {
    this->Visibility_LoginLoading = param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetVisibility_Logout @ 14c045d80

void __thiscall
UDS_VM_W_LoginMenu::SetVisibility_Logout(UDS_VM_W_LoginMenu *this,ESlateVisibility param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::Visibility_Logout.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::Visibility_Logout.FieldName;
  if (this->Visibility_Logout != param_1) {
    this->Visibility_Logout = param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetVisibility_SettingBtn @ 14c045e20

void __thiscall
UDS_VM_W_LoginMenu::SetVisibility_SettingBtn(UDS_VM_W_LoginMenu *this,ESlateVisibility param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::Visibility_SettingBtn.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::Visibility_SettingBtn.FieldName;
  if (this->Visibility_SettingBtn != param_1) {
    this->Visibility_SettingBtn = param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// UnbindModel @ 14c048980

void __thiscall UDS_VM_W_LoginMenu::UnbindModel(UDS_VM_W_LoginMenu *this)

{
  bool bVar1;
  UObject *pUVar2;
  UDS_LoginEvent *pUVar3;
  FDS_AuthData *pFVar4;
  FWeakObjectPtr local_res10 [3];
  
  UDS_ViewModelBase::UnbindModel((UDS_ViewModelBase *)this);
  UDS_AccountLocalSave::GetInst();
  bVar1 = TWeakObjectPtr<UDS_AccountLocalSave,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_AccountLocalSave,FWeakObjectPtr> *)local_res10,(void *)0x0)
  ;
  if (!bVar1) {
    pUVar2 = FWeakObjectPtr::Get(local_res10);
    TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::RemoveAll
              ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)(pUVar2 + 1),(UObject *)this)
    ;
  }
  pUVar3 = UDS_LoginEvent::GetEvent();
  if (pUVar3 != (UDS_LoginEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar3->OnLoginCompleted,this)
    ;
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar3->OnInGameLevelLoadCompleted,this);
  }
  pFVar4 = TDS_Singleton<FDS_AuthData>::GetInst();
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             &pFVar4->OnStateChangedLogoutDelegate,this);
  return;
}

