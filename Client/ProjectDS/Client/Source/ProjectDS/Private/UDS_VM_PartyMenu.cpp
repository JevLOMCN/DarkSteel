// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 53

// SetStatePartyMenuButton1_WrapperImpl @ 14b6ae9a0

void __cdecl UDS_VM_PartyMenu::SetStatePartyMenuButton1_WrapperImpl(void *param_1,void *param_2)

{
  SetStatePartyMenuButton1(param_1,*(bool *)param_2);
  return;
}

// SetStatePartyMenuButton2_WrapperImpl @ 14b6ae9b0

void __cdecl UDS_VM_PartyMenu::SetStatePartyMenuButton2_WrapperImpl(void *param_1,void *param_2)

{
  SetStatePartyMenuButton2(param_1,*(bool *)param_2);
  return;
}

// SetStatePartyMenuButton3_WrapperImpl @ 14b6ae9c0

void __cdecl UDS_VM_PartyMenu::SetStatePartyMenuButton3_WrapperImpl(void *param_1,void *param_2)

{
  SetStatePartyMenuButton3(param_1,*(bool *)param_2);
  return;
}

// SetStatePartyMenuButton4_WrapperImpl @ 14b6ae9d0

void __cdecl UDS_VM_PartyMenu::SetStatePartyMenuButton4_WrapperImpl(void *param_1,void *param_2)

{
  SetStatePartyMenuButton4(param_1,*(bool *)param_2);
  return;
}

// SetClickClose_WrapperImpl @ 14b6ae9e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UDS_VM_PartyMenu::SetClickClose_WrapperImpl(void *param_1,void *param_2)

{
  UDS_WindowManager *this;
  UDS_LogManager *pUVar1;
  undefined1 auStackY_178 [32];
  float fStack_148;
  uint auStack_144 [3];
  TStringConversion<TStringConvert<char,wchar_t>,128> TStack_138;
  ulonglong uStack_18;
  
  uStack_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  this = UDS_WindowManager::GetInst();
  if (this == (UDS_WindowManager *)0x0) {
    pUVar1 = UDS_LogManager::GetInst();
    if (pUVar1 != (UDS_LogManager *)0x0) {
      pUVar1 = UDS_LogManager::GetInst();
      TStack_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&TStack_138,"FDS_PartyService::ClosePartyMenuPopup",0x25,Yes);
      UDS_LogManager::PrintLog(pUVar1,1,Warning,TStack_138.Ptr,0x241,L"windowManager == nullptr");
      if ((void *)TStack_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)TStack_138._padding_);
        return;
      }
    }
  }
  else {
    fStack_148 = 0.0;
    auStack_144[0] = 0;
    UDS_WindowManager::CloseWindow(this,PartyMenu,auStack_144,&fStack_148);
  }
  return;
}

// SetClickPartyInviteLink_WrapperImpl @ 14b6ae9f0

void __cdecl UDS_VM_PartyMenu::SetClickPartyInviteLink_WrapperImpl(void *param_1,void *param_2)

{
  TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy> TStack_28;
  
  if (*(int *)((longlong)param_1 + 0x294) == 1) {
    FDS_PartyService::SendPartyInviteLink();
    return;
  }
  if (*(int *)((longlong)param_1 + 0x294) == 2) {
    TStack_28._0_8_ = 0;
    TStack_28._8_8_ = 0;
    TStack_28._16_4_ = 0;
    UDS_UIMessageManager::OpenMsgByStringUi(0x347e6,Complete_System_01,&TStack_28);
  }
  return;
}

// SetClickPartyInvite_WrapperImpl @ 14b6aea00

void __cdecl UDS_VM_PartyMenu::SetClickPartyInvite_WrapperImpl(void *param_1,void *param_2)

{
  TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy> TStack_28;
  
  if (*(int *)((longlong)param_1 + 0x294) == 1) {
    FDS_PartyService::OpenPartyInvitePopup();
    return;
  }
  if (*(int *)((longlong)param_1 + 0x294) == 2) {
    TStack_28._0_8_ = 0;
    TStack_28._8_8_ = 0;
    TStack_28._16_4_ = 0;
    UDS_UIMessageManager::OpenMsgByStringUi(0x347e6,Complete_System_01,&TStack_28);
  }
  return;
}

// SetClickPartyLeave_WrapperImpl @ 14b6aea10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UDS_VM_PartyMenu::SetClickPartyLeave_WrapperImpl(void *param_1,void *param_2)

{
  bool bVar1;
  FDS_PartyRepo *pFVar2;
  FDS_RaidPartyRepo *pFVar3;
  UDS_CommonPopupManager *pUVar4;
  UDS_LogManager *pUVar5;
  UDS_M_CommonPopup *pUVar6;
  undefined8 *puVar7;
  ulong64 uVar8;
  undefined1 auStackY_208 [16];
  uint uVar9;
  wchar_t *pwVar10;
  FWeakObjectPtr FStack_1d8;
  undefined1 auStack_1d0 [8];
  undefined1 auStack_1c8 [8];
  undefined1 auStack_1c0 [16];
  FDestructionSentinel FStack_1b0;
  undefined1 *puStack_198;
  undefined1 auStack_190 [44];
  bool bStack_164;
  ForAnyElementType FStack_160;
  undefined8 uStack_158;
  ForAnyElementType FStack_150;
  undefined1 auStack_148 [256];
  void *pvStack_48;
  wchar_t *pwStack_40;
  void *pvStack_38;
  wchar_t *pwStack_30;
  ulonglong uStack_28;
  
  if (*(int *)((longlong)param_1 + 0x294) != 1) {
    if (*(int *)((longlong)param_1 + 0x294) != 2) {
      return;
    }
    pUVar4 = UDS_CommonPopupManager::GetInst();
    if (pUVar4 == (UDS_CommonPopupManager *)0x0) {
      pUVar5 = UDS_LogManager::GetInst();
      if (pUVar5 == (UDS_LogManager *)0x0) {
        return;
      }
      pUVar5 = UDS_LogManager::GetInst();
      pvStack_38 = (void *)0x0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                ((TStringConversion<TStringConvert<char,wchar_t>,128> *)(auStack_148 + 0x10),
                 "FDS_RaidPartyService::OpenRaidPartyLeavePopup",0x2d,Yes);
      pwVar10 = L"commonPopupManager == nullptr";
      uVar9 = 0x581;
    }
    else {
      UDS_CommonPopupManager::CreateCommonPopup(pUVar4);
      bVar1 = TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>::UEOpEquals
                        ((TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr> *)
                         &stack0xfffffffffffffe18,(void *)0x0);
      if (!bVar1) {
        pUVar6 = (UDS_M_CommonPopup *)
                 FWeakObjectPtr::Get((FWeakObjectPtr *)&stack0xfffffffffffffe18);
        auStack_190._0_4_ = auStack_190._0_4_ & 0xffffff00;
        auStack_190._8_8_ = 0;
        auStack_190._16_4_ = 0;
        auStack_190._20_4_ = 0;
        auStack_190._40_4_ = None;
        bStack_164 = false;
        auStack_190._24_8_ = 0;
        auStack_190._32_8_ = 0;
        FStack_160.Data = (FScriptContainerElement *)0x0;
        uStack_158._0_4_ = 0;
        uStack_158._4_4_ = 0;
        FStack_150.Data = (FScriptContainerElement *)0x0;
        auStack_148._0_8_ = 0;
        FDS_Text::SetTextFromStringTable((FDS_Text *)auStack_190,StringUi,0x33469);
        UDS_M_CommonPopup::SetTitle(pUVar6,(FDS_Text *)auStack_190);
        pUVar6 = (UDS_M_CommonPopup *)
                 FWeakObjectPtr::Get((FWeakObjectPtr *)&stack0xfffffffffffffe18);
        auStack_190._0_4_ = auStack_190._0_4_ & 0xffffff00;
        auStack_190._8_8_ = 0;
        auStack_190._16_4_ = 0;
        auStack_190._20_4_ = 0;
        auStack_190._40_4_ = None;
        auStack_190._24_8_ = 0;
        auStack_190._32_8_ = 0;
        bStack_164 = false;
        FStack_160.Data = (FScriptContainerElement *)0x0;
        uStack_158._0_4_ = 0;
        uStack_158._4_4_ = 0;
        FStack_150.Data = (FScriptContainerElement *)0x0;
        auStack_148._0_8_ = 0;
        FDS_Text::SetTextFromStringTable((FDS_Text *)auStack_190,StringUi,0x3346a);
        UDS_M_CommonPopup::SetMainContent(pUVar6,(FDS_Text *)auStack_190);
        pUVar6 = (UDS_M_CommonPopup *)
                 FWeakObjectPtr::Get((FWeakObjectPtr *)&stack0xfffffffffffffe18);
        UDS_M_CommonPopup::SetButton(pUVar6,ButtonCancel,StringUi,0x66,false);
        pUVar6 = (UDS_M_CommonPopup *)
                 FWeakObjectPtr::Get((FWeakObjectPtr *)&stack0xfffffffffffffe18);
        UDS_M_CommonPopup::SetButton(pUVar6,ButtonConfirm,StringUi,0x67,false);
        pUVar6 = (UDS_M_CommonPopup *)
                 FWeakObjectPtr::Get((FWeakObjectPtr *)&stack0xfffffffffffffe18);
        auStack_1d0 = (undefined1  [8])0x0;
        FStack_1d8.ObjectIndex = 0;
        FStack_1d8.ObjectSerialNumber = 0;
        auStack_1c8 = (undefined1  [8])0x0;
        auStack_1c0._0_8_ = (ForElementType<TAlignedBytes<16,16>_>)0x0;
        auStack_1c0._8_4_ = 0;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)auStack_1c8,
                   (FWriteAccessScope *)&FStack_1b0);
        puStack_198 = auStack_1c0;
        puVar7 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)auStack_1c0);
        if (puVar7 != (undefined8 *)0x0) {
          *puVar7 = &
                    ___7__TCommonDelegateInstanceState___A6AXU__TWeakObjectPtr_VUDS_M_CommonPopup__UFWeakObjectPtr_____ZUFDefaultDelegateUserPolicy___NV__TDelegate___A6AXXZUFDefaultDelegateUserPolicy______6B_
          ;
          *(undefined1 *)(puVar7 + 1) = 0;
          TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
                    ((TDelegateBase<FNotThreadSafeDelegateMode> *)(puVar7 + 2),
                     (TDelegateBase<FNotThreadSafeDelegateMode> *)&stack0xfffffffffffffe20);
          uVar8 = FDelegateHandle::GenerateNewID();
          puVar7[5] = uVar8;
          *puVar7 = &
                    ___7__TBaseStaticDelegateInstance___A6AXU__TWeakObjectPtr_VUDS_M_CommonPopup__UFWeakObjectPtr_____ZUFDefaultDelegateUserPolicy___NV__TDelegate___A6AXXZUFDefaultDelegateUserPolicy______6B_
          ;
          puVar7[6] = FDS_RaidPartyService::OnCommonPopup_MsgRes;
        }
        if (FStack_1b0.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_1b0.Accessor,&FStack_1b0);
        }
        UDS_M_CommonPopup::SetDelegate
                  (pUVar6,ButtonCancel,
                   (TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
                    *)auStack_1c8);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                   &stack0xfffffffffffffe20,(FWriteAccessScope *)&FStack_1b0);
        if ((auStack_1d0._0_4_ != 0) && (FStack_1d8 != (FWeakObjectPtr)0x0)) {
          (*(code *)**(undefined8 **)FStack_1d8)();
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                    ((ForAnyElementType *)&FStack_1d8,0,0,0x10);
          auStack_1d0 = (undefined1  [8])((ulonglong)auStack_1d0 & 0xffffffff00000000);
        }
        if (FStack_1b0.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_1b0.Accessor,&FStack_1b0);
        }
        if (FStack_1d8 != (FWeakObjectPtr)0x0) {
          FMemory::Free((void *)FStack_1d8);
        }
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                  ((FMRSWRecursiveAccessDetector *)&stack0xfffffffffffffe20);
        pUVar6 = (UDS_M_CommonPopup *)
                 FWeakObjectPtr::Get((FWeakObjectPtr *)&stack0xfffffffffffffe18);
        auStack_1c8 = (undefined1  [8])0x0;
        auStack_1c0._0_8_ = (ForElementType<TAlignedBytes<16,16>_>)0x0;
        auStack_1c0._8_4_ = 0;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)auStack_1c8,
                   (FWriteAccessScope *)&FStack_1b0);
        puStack_198 = auStack_1c0;
        puVar7 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)auStack_1c0);
        if (puVar7 != (undefined8 *)0x0) {
          *puVar7 = &
                    ___7__TCommonDelegateInstanceState___A6AXU__TWeakObjectPtr_VUDS_M_CommonPopup__UFWeakObjectPtr_____ZUFDefaultDelegateUserPolicy____V__6B_
          ;
          uVar8 = FDelegateHandle::GenerateNewID();
          puVar7[2] = uVar8;
          *puVar7 = &
                    ___7__TBaseStaticDelegateInstance___A6AXU__TWeakObjectPtr_VUDS_M_CommonPopup__UFWeakObjectPtr_____ZUFDefaultDelegateUserPolicy____V__6B_
          ;
          puVar7[3] = FDS_RaidPartyService::OnConfirmRaidPartyLeave;
        }
        if (FStack_1b0.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_1b0.Accessor,&FStack_1b0);
        }
        UDS_M_CommonPopup::SetDelegate
                  (pUVar6,ButtonConfirm,
                   (TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
                    *)auStack_1c8);
        pUVar6 = (UDS_M_CommonPopup *)
                 FWeakObjectPtr::Get((FWeakObjectPtr *)&stack0xfffffffffffffe18);
        UDS_M_CommonPopup::OpenCommonPopup(pUVar6);
        return;
      }
      pUVar5 = UDS_LogManager::GetInst();
      if (pUVar5 == (UDS_LogManager *)0x0) {
        return;
      }
      pUVar5 = UDS_LogManager::GetInst();
      pvStack_38 = (void *)0x0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                ((TStringConversion<TStringConvert<char,wchar_t>,128> *)(auStack_148 + 0x10),
                 "FDS_RaidPartyService::OpenRaidPartyLeavePopup",0x2d,Yes);
      pwVar10 = L"CommonPopupModel == nullptr";
      uVar9 = 0x588;
    }
    UDS_LogManager::PrintLog(pUVar5,1,Warning,pwStack_30,uVar9,pwVar10);
    if (pvStack_38 != (void *)0x0) {
      FMemory::Free(pvStack_38);
    }
    return;
  }
  uStack_28 = __security_cookie.value ^ (ulonglong)auStackY_208;
  pFVar2 = TDS_Singleton<FDS_PartyRepo>::GetInst();
  if (((pFVar2->PartyInfo).PartyUID < 1) || ((pFVar2->PartyInfo).PartyType == None)) {
    pFVar3 = TDS_Singleton<FDS_RaidPartyRepo>::GetInst();
    if ((pFVar3->RaidPartyInfo).RaidPartyUID < 1) {
      auStack_1d0 = (undefined1  [8])0x0;
      auStack_1c8 = (undefined1  [8])0x0;
      auStack_1c0._0_8_ = auStack_1c0._0_8_ & 0xffffffff00000000;
      UDS_UIMessageManager::OpenMsgByStringUi
                (0x41ec5,Alert_System_01,
                 (TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy>
                  *)auStack_1d0);
      return;
    }
  }
  pUVar4 = UDS_CommonPopupManager::GetInst();
  if (pUVar4 == (UDS_CommonPopupManager *)0x0) {
    pUVar5 = UDS_LogManager::GetInst();
    if (pUVar5 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar5 = UDS_LogManager::GetInst();
    pvStack_48 = (void *)0x0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              ((TStringConversion<TStringConvert<char,wchar_t>,128> *)auStack_148,
               "FDS_PartyService::OpenPartyLeavePopup",0x25,Yes);
    pwVar10 = L"commonPopupManager == nullptr";
    uVar9 = 0x32f;
  }
  else {
    UDS_CommonPopupManager::CreateCommonPopup(pUVar4);
    bVar1 = TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr> *)&FStack_1d8,(void *)0x0);
    if (!bVar1) {
      pUVar6 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&FStack_1d8);
      auStack_1c0._8_4_ = auStack_1c0._8_4_ & 0xffffff00;
      FStack_1b0.AccessType = Reader;
      FStack_1b0._4_4_ = 0;
      FStack_1b0.Accessor = (FMRSWRecursiveAccessDetector *)0x0;
      auStack_190._0_4_ = 0;
      auStack_190[4] = 0;
      FStack_1b0.bDestroyed = false;
      FStack_1b0._17_7_ = 0;
      puStack_198 = (undefined1 *)0x0;
      auStack_190._8_8_ = 0;
      auStack_190._16_4_ = 0;
      auStack_190._20_4_ = 0;
      auStack_190._24_8_ = 0;
      auStack_190._32_8_ = 0;
      FDS_Text::SetTextFromStringTable((FDS_Text *)(auStack_1c0 + 8),StringUi,0x41ee2);
      UDS_M_CommonPopup::SetTitle(pUVar6,(FDS_Text *)(auStack_1c0 + 8));
      pUVar6 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&FStack_1d8);
      UDS_M_CommonPopup::SetButton(pUVar6,ButtonCancel,StringUi,0x66,false);
      pUVar6 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&FStack_1d8);
      UDS_M_CommonPopup::SetButton(pUVar6,ButtonConfirm,StringUi,0x67,false);
      pUVar6 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&FStack_1d8);
      auStack_1c0._8_4_ = auStack_1c0._8_4_ & 0xffffff00;
      FStack_1b0.AccessType = Reader;
      FStack_1b0._4_4_ = 0;
      FStack_1b0.Accessor = (FMRSWRecursiveAccessDetector *)0x0;
      auStack_190._0_4_ = 0;
      FStack_1b0.bDestroyed = false;
      FStack_1b0._17_7_ = 0;
      puStack_198 = (undefined1 *)0x0;
      auStack_190[4] = 0;
      auStack_190._8_8_ = 0;
      auStack_190._16_4_ = 0;
      auStack_190._20_4_ = 0;
      auStack_190._24_8_ = 0;
      auStack_190._32_8_ = 0;
      FDS_Text::SetTextFromStringTable((FDS_Text *)(auStack_1c0 + 8),StringUi,0x41ee3);
      UDS_M_CommonPopup::SetMainContent(pUVar6,(FDS_Text *)(auStack_1c0 + 8));
      pUVar6 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&FStack_1d8);
      auStack_1d0 = (undefined1  [8])0x0;
      auStack_1c8 = (undefined1  [8])0x0;
      auStack_1c0._0_8_ = (ulonglong)(uint)auStack_1c0._4_4_ << 0x20;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)auStack_1d0,
                 (FWriteAccessScope *)(auStack_190 + 0x28));
      FStack_150.Data = (FScriptContainerElement *)auStack_1c8;
      puVar7 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)auStack_1c8);
      if (puVar7 != (undefined8 *)0x0) {
        *puVar7 = &
                  ___7__TCommonDelegateInstanceState___A6AXU__TWeakObjectPtr_VUDS_M_CommonPopup__UFWeakObjectPtr_____ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        uVar8 = FDelegateHandle::GenerateNewID();
        puVar7[2] = uVar8;
        puVar7[3] = FDS_PartyService::OnClosePartyPopup;
        *puVar7 = &
                  ___7__TBaseStaticDelegateInstance___A6AXU__TWeakObjectPtr_VUDS_M_CommonPopup__UFWeakObjectPtr_____ZUFDefaultDelegateUserPolicy____V__6B_
        ;
      }
      if ((char)uStack_158 == '\0') {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                  ((FMRSWRecursiveAccessDetector *)FStack_160.Data,
                   (FDestructionSentinel *)(auStack_190 + 0x28));
      }
      UDS_M_CommonPopup::SetDelegate
                (pUVar6,ButtonCancel,
                 (TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
                  *)auStack_1d0);
      pUVar6 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&FStack_1d8);
      auStack_1d0 = (undefined1  [8])0x0;
      auStack_1c8 = (undefined1  [8])0x0;
      auStack_1c0._0_8_ = auStack_1c0._0_8_ & 0xffffffff00000000;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)auStack_1d0,
                 (FWriteAccessScope *)(auStack_190 + 0x28));
      FStack_150.Data = (FScriptContainerElement *)auStack_1c8;
      puVar7 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)auStack_1c8);
      if (puVar7 != (undefined8 *)0x0) {
        *puVar7 = &
                  ___7__TCommonDelegateInstanceState___A6AXU__TWeakObjectPtr_VUDS_M_CommonPopup__UFWeakObjectPtr_____ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        uVar8 = FDelegateHandle::GenerateNewID();
        puVar7[2] = uVar8;
        puVar7[3] = FDS_PartyService::OnConfirmPartyLeave;
        *puVar7 = &
                  ___7__TBaseStaticDelegateInstance___A6AXU__TWeakObjectPtr_VUDS_M_CommonPopup__UFWeakObjectPtr_____ZUFDefaultDelegateUserPolicy____V__6B_
        ;
      }
      if ((char)uStack_158 == '\0') {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                  ((FMRSWRecursiveAccessDetector *)FStack_160.Data,
                   (FDestructionSentinel *)(auStack_190 + 0x28));
      }
      UDS_M_CommonPopup::SetDelegate
                (pUVar6,ButtonConfirm,
                 (TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
                  *)auStack_1d0);
      pUVar6 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&FStack_1d8);
      UDS_M_CommonPopup::OpenCommonPopup(pUVar6);
      return;
    }
    pUVar5 = UDS_LogManager::GetInst();
    if (pUVar5 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar5 = UDS_LogManager::GetInst();
    pvStack_48 = (void *)0x0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              ((TStringConversion<TStringConvert<char,wchar_t>,128> *)auStack_148,
               "FDS_PartyService::OpenPartyLeavePopup",0x25,Yes);
    pwVar10 = L"CommonPopupModel == nullptr";
    uVar9 = 0x336;
  }
  UDS_LogManager::PrintLog(pUVar5,1,Warning,pwStack_40,uVar9,pwVar10);
  if (pvStack_48 != (void *)0x0) {
    FMemory::Free(pvStack_48);
  }
  return;
}

// SetClickPartyDismiss_WrapperImpl @ 14b6aea20

void __cdecl UDS_VM_PartyMenu::SetClickPartyDismiss_WrapperImpl(void *param_1,void *param_2)

{
  TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy> TStack_28;
  
  if (*(int *)((longlong)param_1 + 0x294) == 1) {
    FDS_PartyService::OpenPartyDismissPopup();
    return;
  }
  if (*(int *)((longlong)param_1 + 0x294) == 2) {
    TStack_28._0_8_ = 0;
    TStack_28._8_8_ = 0;
    TStack_28._16_4_ = 0;
    UDS_UIMessageManager::OpenMsgByStringUi(0x347e6,Complete_System_01,&TStack_28);
  }
  return;
}

// SetClickPartyInfo_WrapperImpl @ 14b6aea30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __cdecl UDS_VM_PartyMenu::SetClickPartyInfo_WrapperImpl(void *param_1,void *param_2)

{
  EDS_DungeonType EVar1;
  uint uVar2;
  int iVar3;
  FDS_RaidPartyRepo *pFVar4;
  UDS_LogManager *pUVar5;
  UDS_ContentManager *pUVar6;
  UDS_ContentManager *this;
  UObject *pUVar7;
  UClass *pUVar8;
  longlong *plVar9;
  undefined1 *puVar10;
  undefined1 auStackY_238 [32];
  TPairInitializer<FName_const_&,int_const_&> TStack_1f8;
  int aiStack_1e8 [2];
  int **ppiStack_1e0;
  int *piStack_1d8;
  undefined1 auStack_1c8 [128];
  TStringConversion<TStringConvert<char,wchar_t>,128> TStack_148;
  ulonglong uStack_28;
  
  if ((*(int *)((longlong)param_1 + 0x294) == 1) || (*(int *)((longlong)param_1 + 0x294) != 2)) {
    return;
  }
  uStack_28 = __security_cookie.value ^ (ulonglong)auStackY_238;
  pFVar4 = TDS_Singleton<FDS_RaidPartyRepo>::GetInst();
  aiStack_1e8[0] = (pFVar4->RaidPartyInfo).DungeonId;
  if (aiStack_1e8[0] < 1) {
    pUVar5 = UDS_LogManager::GetInst();
    if (pUVar5 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar5 = UDS_LogManager::GetInst();
    TStack_148._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&TStack_148,"FDS_PartyService::OpenRaidPartyInfo",0x23,Yes);
    UDS_LogManager::PrintLog(pUVar5,1,Warning,TStack_148.Ptr,0x3ff,L"dungeonID <= 0");
    if ((void *)TStack_148._padding_ == (void *)0x0) {
      return;
    }
    FMemory::Free((void *)TStack_148._padding_);
    return;
  }
  pUVar6 = (UDS_ContentManager *)FDS_DungeonBaseTableRow::Get((longlong)aiStack_1e8[0],true);
  if (pUVar6 == (UDS_ContentManager *)0x0) {
    pUVar5 = UDS_LogManager::GetInst();
    if (pUVar5 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar5 = UDS_LogManager::GetInst();
    TStack_148._padding_ = (longlong)pUVar6;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&TStack_148,"FDS_PartyService::OpenRaidPartyInfo",0x23,Yes);
    UDS_LogManager::PrintLog
              (pUVar5,1,Warning,TStack_148.Ptr,0x406,
               L"dungeonBaseTableRow == nullptr - DungeonID : %d");
  }
  else {
    this = UDS_ContentManager::GetInst();
    if (this != (UDS_ContentManager *)0x0) {
      pUVar7 = GetTransientPackageAsObject();
      FObjectInitializer::AssertIfInConstructor
                (pUVar7,
                 L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                );
      pUVar8 = Z_Construct_UClass_UDS_ContentArguments_NoRegister();
      FStaticConstructObjectParameters::FStaticConstructObjectParameters
                ((FStaticConstructObjectParameters *)auStack_1c8,pUVar8);
      auStack_1c8._8_8_ = pUVar7;
      pUVar7 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)auStack_1c8);
      if (auStack_1c8._64_8_ != 0) {
        plVar9 = (longlong *)(auStack_1c8 + 0x50);
        if ((longlong *)auStack_1c8._104_8_ != (longlong *)0x0) {
          plVar9 = (longlong *)auStack_1c8._104_8_;
        }
        (**(code **)(*plVar9 + 0x10))();
      }
      ::FName::FName((FName *)&TStack_1f8.Value,"DungeonBaseID");
      uVar2 = ::GetTypeHash((FNameEntryId)(uint)TStack_1f8.Value);
      if (*(int *)&pUVar7[3].field_0x8 != *(int *)&pUVar7[4].field_0xc) {
        puVar10 = *(undefined1 **)&pUVar7[4].field_0x18;
        if (*(undefined1 **)&pUVar7[4].field_0x18 == (undefined1 *)0x0) {
          puVar10 = &pUVar7[4].field_0x10;
        }
        iVar3 = *(int *)(puVar10 +
                        (ulonglong)
                        (*(int *)&pUVar7[4].field_0x20 - 1U &
                        (int)((ulonglong)TStack_1f8.Value >> 0x20) + uVar2) * 4);
        if (iVar3 != -1) {
          do {
            if (*(int **)(*(longlong *)(pUVar7 + 3) + (longlong)iVar3 * 0x14) == TStack_1f8.Value)
            goto LAB_14b8de7af;
            iVar3 = *(int *)(*(longlong *)(pUVar7 + 3) + 0xc + (longlong)iVar3 * 0x14);
          } while (iVar3 != -1);
        }
      }
      ppiStack_1e0 = &TStack_1f8.Value;
      piStack_1d8 = aiStack_1e8;
      TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>::
      Emplace<TPairInitializer<FName_const_&,int_const_&>_>
                ((TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
                  *)(pUVar7 + 3),&TStack_1f8,(bool *)&ppiStack_1e0);
LAB_14b8de7af:
      EVar1 = *(EDS_DungeonType *)&pUVar6->_padding_;
      TStack_1f8.Value = (int *)pUVar7;
      if (EVar1 == Normal) {
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar7);
        }
        TStack_1f8.Key._0_4_ = 6000;
      }
      else if (EVar1 == Heroic) {
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar7);
        }
        TStack_1f8.Key._0_4_ = 0x177a;
      }
      else {
        if (EVar1 != Raid) {
          return;
        }
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar7);
        }
        TStack_1f8.Key._0_4_ = 0x1784;
      }
      UDS_ContentManager::OpenContent
                (this,(EDS_ContentsTabFrameType *)&TStack_1f8,
                 (TObjectPtr<UDS_ContentArguments>)&TStack_1f8.Value);
      return;
    }
    pUVar5 = UDS_LogManager::GetInst();
    if (pUVar5 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar5 = UDS_LogManager::GetInst();
    TStack_148._padding_ = (longlong)this;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&TStack_148,"FDS_PartyService::OpenRaidPartyInfo",0x23,Yes);
    UDS_LogManager::PrintLog(pUVar5,1,Warning,TStack_148.Ptr,0x40d,L"contentManager == nullptr");
  }
  if ((UDS_ContentManager *)TStack_148._padding_ != (UDS_ContentManager *)0x0) {
    FMemory::Free((void *)TStack_148._padding_);
  }
  return;
}

// SetClickPartyMemberInfo_WrapperImpl @ 14b6aea40

void __cdecl UDS_VM_PartyMenu::SetClickPartyMemberInfo_WrapperImpl(void *param_1,void *param_2)

{
  return;
}

// SetClickPartyKick_WrapperImpl @ 14b6aea50

void __cdecl UDS_VM_PartyMenu::SetClickPartyKick_WrapperImpl(void *param_1,void *param_2)

{
  if (*(int *)((longlong)param_1 + 0x294) == 1) {
    FDS_PartyService::OpenPartyKickPopup(*(long64 *)((longlong)param_1 + 0x2a0));
    return;
  }
  if (*(int *)((longlong)param_1 + 0x294) == 2) {
    FDS_RaidPartyService::OpenRaidPartyKickPopup(*(long64 *)((longlong)param_1 + 0x2a0));
    return;
  }
  return;
}

// SetClickPartyLeaderChange_WrapperImpl @ 14b6aea60

void __cdecl UDS_VM_PartyMenu::SetClickPartyLeaderChange_WrapperImpl(void *param_1,void *param_2)

{
  if (*(int *)((longlong)param_1 + 0x294) == 1) {
    FDS_PartyService::OpenPartyLeaderChangePopup(*(long64 *)((longlong)param_1 + 0x2a0));
    return;
  }
  if (*(int *)((longlong)param_1 + 0x294) == 2) {
    FDS_RaidPartyService::OpenRaidPartyChangeLeaderPopup(*(long64 *)((longlong)param_1 + 0x2a0));
    return;
  }
  return;
}

// SetMenuTitle_WrapperImpl @ 14b6aea70

void __cdecl UDS_VM_PartyMenu::SetMenuTitle_WrapperImpl(void *param_1,void *param_2)

{
  FName FStack_18;
  int iStack_10;
  
  FDS_Text::operator=((FDS_Text *)((longlong)param_1 + 0x1f0),param_2);
  iStack_10 = FFieldNotificationClassDescriptor::MenuTitle.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::MenuTitle.FieldName;
  (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
            ((longlong *)((longlong)param_1 + 0x28),&FStack_18);
  return;
}

// SetMenuSubTitle_WrapperImpl @ 14b6aea80

void __cdecl UDS_VM_PartyMenu::SetMenuSubTitle_WrapperImpl(void *param_1,void *param_2)

{
  FName FVar1;
  int iVar2;
  FName FStack_18;
  int iStack_10;
  
  iVar2 = FFieldNotificationClassDescriptor::MenuSubTitle.BitNumber;
  FVar1 = FFieldNotificationClassDescriptor::MenuSubTitle.FieldName;
  FDS_Text::operator=((FDS_Text *)((longlong)param_1 + 0x240),param_2);
  FStack_18 = FVar1;
  iStack_10 = iVar2;
  (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
            ((longlong *)((longlong)param_1 + 0x28),&FStack_18);
  return;
}

// SetMenuSubTitleVisibility_WrapperImpl @ 14b6aea90

void __cdecl UDS_VM_PartyMenu::SetMenuSubTitleVisibility_WrapperImpl(void *param_1,void *param_2)

{
  SetMenuSubTitleVisibility(param_1,*(ESlateVisibility *)param_2);
  return;
}

// StaticClass @ 14b6aeaa0

UClass * __cdecl UDS_VM_PartyMenu::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_PartyMenu.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_PartyMenu",
               &Z_Registration_Info_UClass_UDS_VM_PartyMenu.InnerSingleton,
               StaticRegisterNativesUDS_VM_PartyMenu,0x2b0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_PartyMenu>,
               InternalVTableHelperCtorCaller<UDS_VM_PartyMenu>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_PartyMenu.InnerSingleton;
}

// UDS_VM_PartyMenu @ 14b6b34a0

UDS_VM_PartyMenu * __thiscall
UDS_VM_PartyMenu::UDS_VM_PartyMenu(UDS_VM_PartyMenu *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_PartyMenu__6B_;
  (this->VM_PartyMenuButton1).field0_0x0.DebugPtr = (UDS_VM_CommonIconTextButton *)0x0;
  (this->VM_PartyMenuButton2).field0_0x0.DebugPtr = (UDS_VM_CommonIconTextButton *)0x0;
  (this->VM_PartyMenuButton3).field0_0x0.DebugPtr = (UDS_VM_CommonIconTextButton *)0x0;
  (this->VM_PartyMenuButton4).field0_0x0.DebugPtr = (UDS_VM_CommonIconTextButton *)0x0;
  (this->VM_InputKey).field0_0x0.DebugPtr = (UDS_VM_InputKey *)0x0;
  (this->ClickClose)._padding_ = '\0';
  (this->ClickClose).bIsCustomSelected = false;
  (this->ClickClose).bIsLacked = false;
  (this->ClickClose).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickClose).Delegate = 0;
  *(undefined8 *)&(this->ClickClose).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickClose).Delegate.field_0x10 = 0;
  (this->ClickPartyInviteLink)._padding_ = '\0';
  (this->ClickPartyInviteLink).bIsCustomSelected = false;
  (this->ClickPartyInviteLink).bIsLacked = false;
  (this->ClickPartyInviteLink).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickPartyInviteLink).Delegate = 0;
  *(undefined8 *)&(this->ClickPartyInviteLink).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickPartyInviteLink).Delegate.field_0x10 = 0;
  (this->ClickPartyInvite)._padding_ = '\0';
  (this->ClickPartyInvite).bIsCustomSelected = false;
  (this->ClickPartyInvite).bIsLacked = false;
  (this->ClickPartyInvite).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickPartyInvite).Delegate = 0;
  *(undefined8 *)&(this->ClickPartyInvite).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickPartyInvite).Delegate.field_0x10 = 0;
  (this->ClickPartyLeave)._padding_ = '\0';
  (this->ClickPartyLeave).bIsCustomSelected = false;
  (this->ClickPartyLeave).bIsLacked = false;
  (this->ClickPartyLeave).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickPartyLeave).Delegate = 0;
  *(undefined8 *)&(this->ClickPartyLeave).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickPartyLeave).Delegate.field_0x10 = 0;
  (this->ClickPartyDismiss)._padding_ = '\0';
  (this->ClickPartyDismiss).bIsCustomSelected = false;
  (this->ClickPartyDismiss).bIsLacked = false;
  (this->ClickPartyDismiss).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickPartyDismiss).Delegate = 0;
  *(undefined8 *)&(this->ClickPartyDismiss).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickPartyDismiss).Delegate.field_0x10 = 0;
  (this->ClickPartyInfo)._padding_ = '\0';
  (this->ClickPartyInfo).bIsCustomSelected = false;
  (this->ClickPartyInfo).bIsLacked = false;
  (this->ClickPartyInfo).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickPartyInfo).Delegate = 0;
  *(undefined8 *)&(this->ClickPartyInfo).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickPartyInfo).Delegate.field_0x10 = 0;
  (this->ClickPartyMemberInfo)._padding_ = '\0';
  (this->ClickPartyMemberInfo).bIsCustomSelected = false;
  (this->ClickPartyMemberInfo).bIsLacked = false;
  (this->ClickPartyMemberInfo).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickPartyMemberInfo).Delegate = 0;
  *(undefined8 *)&(this->ClickPartyMemberInfo).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickPartyMemberInfo).Delegate.field_0x10 = 0;
  (this->ClickPartyKick)._padding_ = '\0';
  (this->ClickPartyKick).bIsCustomSelected = false;
  (this->ClickPartyKick).bIsLacked = false;
  (this->ClickPartyKick).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickPartyKick).Delegate = 0;
  *(undefined8 *)&(this->ClickPartyKick).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickPartyKick).Delegate.field_0x10 = 0;
  (this->ClickPartyLeaderChange)._padding_ = '\0';
  (this->ClickPartyLeaderChange).bIsCustomSelected = false;
  (this->ClickPartyLeaderChange).bIsLacked = false;
  (this->ClickPartyLeaderChange).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickPartyLeaderChange).Delegate = 0;
  *(undefined8 *)&(this->ClickPartyLeaderChange).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickPartyLeaderChange).Delegate.field_0x10 = 0;
  (this->MenuTitle).StringTableType = None;
  (this->MenuTitle).StringTableID = 0;
  (this->MenuTitle).StringEnumTableNameID.ComparisonIndex = 0;
  (this->MenuTitle).StringEnumTableNameID.Number = 0;
  (this->MenuTitle).DateTime.Ticks = 0;
  (this->MenuTitle).TimeSpan.Ticks = 0;
  (this->MenuTitle).TimeExpressionType = None;
  (this->MenuTitle).IsExpression = false;
  (this->MenuTitle).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MenuTitle).UniqueString.Data.ArrayNum = 0;
  (this->MenuTitle).UniqueString.Data.ArrayMax = 0;
  (this->MenuTitle).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MenuTitle).FormatArgs.ArrayNum = 0;
  (this->MenuTitle).FormatArgs.ArrayMax = 0;
  (this->MenuSubTitle).StringTableType = None;
  (this->MenuSubTitle).StringTableID = 0;
  (this->MenuSubTitle).StringEnumTableNameID.ComparisonIndex = 0;
  (this->MenuSubTitle).StringEnumTableNameID.Number = 0;
  (this->MenuSubTitle).DateTime.Ticks = 0;
  (this->MenuSubTitle).TimeSpan.Ticks = 0;
  (this->MenuSubTitle).TimeExpressionType = None;
  (this->MenuSubTitle).IsExpression = false;
  (this->MenuSubTitle).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MenuSubTitle).UniqueString.Data.ArrayNum = 0;
  (this->MenuSubTitle).UniqueString.Data.ArrayMax = 0;
  (this->MenuSubTitle).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MenuSubTitle).FormatArgs.ArrayNum = 0;
  (this->MenuSubTitle).FormatArgs.ArrayMax = 0;
  return this;
}

// UDS_VM_PartyMenu @ 14b6b3680

UDS_VM_PartyMenu * __thiscall
UDS_VM_PartyMenu::UDS_VM_PartyMenu(UDS_VM_PartyMenu *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_PartyMenu__6B_;
  (this->VM_PartyMenuButton1).field0_0x0.DebugPtr = (UDS_VM_CommonIconTextButton *)0x0;
  (this->VM_PartyMenuButton2).field0_0x0.DebugPtr = (UDS_VM_CommonIconTextButton *)0x0;
  (this->VM_PartyMenuButton3).field0_0x0.DebugPtr = (UDS_VM_CommonIconTextButton *)0x0;
  (this->VM_PartyMenuButton4).field0_0x0.DebugPtr = (UDS_VM_CommonIconTextButton *)0x0;
  (this->VM_InputKey).field0_0x0.DebugPtr = (UDS_VM_InputKey *)0x0;
  (this->ClickClose)._padding_ = '\0';
  (this->ClickClose).bIsCustomSelected = false;
  (this->ClickClose).bIsLacked = false;
  (this->ClickClose).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickClose).Delegate = 0;
  *(undefined8 *)&(this->ClickClose).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickClose).Delegate.field_0x10 = 0;
  (this->ClickPartyInviteLink)._padding_ = '\0';
  (this->ClickPartyInviteLink).bIsCustomSelected = false;
  (this->ClickPartyInviteLink).bIsLacked = false;
  (this->ClickPartyInviteLink).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickPartyInviteLink).Delegate = 0;
  *(undefined8 *)&(this->ClickPartyInviteLink).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickPartyInviteLink).Delegate.field_0x10 = 0;
  (this->ClickPartyInvite)._padding_ = '\0';
  (this->ClickPartyInvite).bIsCustomSelected = false;
  (this->ClickPartyInvite).bIsLacked = false;
  (this->ClickPartyInvite).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickPartyInvite).Delegate = 0;
  *(undefined8 *)&(this->ClickPartyInvite).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickPartyInvite).Delegate.field_0x10 = 0;
  (this->ClickPartyLeave)._padding_ = '\0';
  (this->ClickPartyLeave).bIsCustomSelected = false;
  (this->ClickPartyLeave).bIsLacked = false;
  (this->ClickPartyLeave).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickPartyLeave).Delegate = 0;
  *(undefined8 *)&(this->ClickPartyLeave).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickPartyLeave).Delegate.field_0x10 = 0;
  (this->ClickPartyDismiss)._padding_ = '\0';
  (this->ClickPartyDismiss).bIsCustomSelected = false;
  (this->ClickPartyDismiss).bIsLacked = false;
  (this->ClickPartyDismiss).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickPartyDismiss).Delegate = 0;
  *(undefined8 *)&(this->ClickPartyDismiss).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickPartyDismiss).Delegate.field_0x10 = 0;
  (this->ClickPartyInfo)._padding_ = '\0';
  (this->ClickPartyInfo).bIsCustomSelected = false;
  (this->ClickPartyInfo).bIsLacked = false;
  (this->ClickPartyInfo).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickPartyInfo).Delegate = 0;
  *(undefined8 *)&(this->ClickPartyInfo).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickPartyInfo).Delegate.field_0x10 = 0;
  (this->ClickPartyMemberInfo)._padding_ = '\0';
  (this->ClickPartyMemberInfo).bIsCustomSelected = false;
  (this->ClickPartyMemberInfo).bIsLacked = false;
  (this->ClickPartyMemberInfo).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickPartyMemberInfo).Delegate = 0;
  *(undefined8 *)&(this->ClickPartyMemberInfo).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickPartyMemberInfo).Delegate.field_0x10 = 0;
  (this->ClickPartyKick)._padding_ = '\0';
  (this->ClickPartyKick).bIsCustomSelected = false;
  (this->ClickPartyKick).bIsLacked = false;
  (this->ClickPartyKick).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickPartyKick).Delegate = 0;
  *(undefined8 *)&(this->ClickPartyKick).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickPartyKick).Delegate.field_0x10 = 0;
  (this->ClickPartyLeaderChange)._padding_ = '\0';
  (this->ClickPartyLeaderChange).bIsCustomSelected = false;
  (this->ClickPartyLeaderChange).bIsLacked = false;
  (this->ClickPartyLeaderChange).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickPartyLeaderChange).Delegate = 0;
  *(undefined8 *)&(this->ClickPartyLeaderChange).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickPartyLeaderChange).Delegate.field_0x10 = 0;
  (this->MenuTitle).StringTableType = None;
  (this->MenuTitle).StringTableID = 0;
  (this->MenuTitle).StringEnumTableNameID.ComparisonIndex = 0;
  (this->MenuTitle).StringEnumTableNameID.Number = 0;
  (this->MenuTitle).DateTime.Ticks = 0;
  (this->MenuTitle).TimeSpan.Ticks = 0;
  (this->MenuTitle).TimeExpressionType = None;
  (this->MenuTitle).IsExpression = false;
  (this->MenuTitle).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MenuTitle).UniqueString.Data.ArrayNum = 0;
  (this->MenuTitle).UniqueString.Data.ArrayMax = 0;
  (this->MenuTitle).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MenuTitle).FormatArgs.ArrayNum = 0;
  (this->MenuTitle).FormatArgs.ArrayMax = 0;
  (this->MenuSubTitle).StringTableType = None;
  (this->MenuSubTitle).StringTableID = 0;
  (this->MenuSubTitle).StringEnumTableNameID.ComparisonIndex = 0;
  (this->MenuSubTitle).StringEnumTableNameID.Number = 0;
  (this->MenuSubTitle).DateTime.Ticks = 0;
  (this->MenuSubTitle).TimeSpan.Ticks = 0;
  (this->MenuSubTitle).TimeExpressionType = None;
  (this->MenuSubTitle).IsExpression = false;
  (this->MenuSubTitle).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MenuSubTitle).UniqueString.Data.ArrayNum = 0;
  (this->MenuSubTitle).UniqueString.Data.ArrayMax = 0;
  (this->MenuSubTitle).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MenuSubTitle).FormatArgs.ArrayNum = 0;
  (this->MenuSubTitle).FormatArgs.ArrayMax = 0;
  return this;
}

// ~UDS_VM_PartyMenu @ 14b6b4740

void __thiscall UDS_VM_PartyMenu::~UDS_VM_PartyMenu(UDS_VM_PartyMenu *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_PartyMenu__6B_;
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->MenuSubTitle).FormatArgs.AllocatorInstance.Data,
             (this->MenuSubTitle).FormatArgs.ArrayNum);
  pFVar1 = (this->MenuSubTitle).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->MenuSubTitle).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->MenuTitle).FormatArgs.AllocatorInstance.Data,
             (this->MenuTitle).FormatArgs.ArrayNum);
  pFVar1 = (this->MenuTitle).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->MenuTitle).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ClickPartyLeaderChange).Delegate);
  pvVar2 = *(void **)&(this->ClickPartyLeaderChange).Delegate.field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ClickPartyLeaderChange).Delegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ClickPartyKick).Delegate);
  pvVar2 = *(void **)&(this->ClickPartyKick).Delegate.field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ClickPartyKick).Delegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ClickPartyMemberInfo).Delegate);
  pvVar2 = *(void **)&(this->ClickPartyMemberInfo).Delegate.field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ClickPartyMemberInfo).Delegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ClickPartyInfo).Delegate);
  pvVar2 = *(void **)&(this->ClickPartyInfo).Delegate.field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ClickPartyInfo).Delegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ClickPartyDismiss).Delegate);
  pvVar2 = *(void **)&(this->ClickPartyDismiss).Delegate.field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ClickPartyDismiss).Delegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ClickPartyLeave).Delegate);
  pvVar2 = *(void **)&(this->ClickPartyLeave).Delegate.field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ClickPartyLeave).Delegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ClickPartyInvite).Delegate);
  pvVar2 = *(void **)&(this->ClickPartyInvite).Delegate.field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ClickPartyInvite).Delegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ClickPartyInviteLink).Delegate);
  pvVar2 = *(void **)&(this->ClickPartyInviteLink).Delegate.field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ClickPartyInviteLink).Delegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ClickClose).Delegate);
  pvVar2 = *(void **)&(this->ClickClose).Delegate.field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ClickClose).Delegate);
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b6b6d30

IClassDescriptor * __thiscall
UDS_VM_PartyMenu::GetFieldNotificationDescriptor(UDS_VM_PartyMenu *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_PartyMenu::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b6b7be0

UClass * __cdecl UDS_VM_PartyMenu::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_PartyMenu.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_PartyMenu",
               &Z_Registration_Info_UClass_UDS_VM_PartyMenu.InnerSingleton,
               StaticRegisterNativesUDS_VM_PartyMenu,0x2b0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_PartyMenu>,
               InternalVTableHelperCtorCaller<UDS_VM_PartyMenu>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_PartyMenu.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_PartyMenu @ 14b6b7ed0

void __cdecl UDS_VM_PartyMenu::StaticRegisterNativesUDS_VM_PartyMenu(void)

{
  return;
}

// BindModel @ 14bed9990

void __thiscall UDS_VM_PartyMenu::BindModel(UDS_VM_PartyMenu *this)

{
  UDS_PartyEvent *pUVar1;
  UDS_DungeonEvent *pUVar2;
  
  UDS_ViewModelBase::BindModel((UDS_ViewModelBase *)this);
  pUVar1 = UDS_PartyEvent::GetEvent();
  if (pUVar1 != (UDS_PartyEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->OnLeftParty,this);
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_VM_PartyMenu>
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &pUVar1->OnLeftParty,(UDS_VM_PartyMenu *)&stack0x00000010,(pmf_292c24a4 *)this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->OnLeftPartyMember,this
              );
    TMulticastDelegateRegistration<void___cdecl(__int64),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_VM_PartyMenu>
              ((TMulticastDelegateRegistration<void___cdecl(__int64),FDefaultDelegateUserPolicy> *)
               &pUVar1->OnLeftPartyMember,(UDS_VM_PartyMenu *)&stack0x00000010,(pmf_73d1b353 *)this)
    ;
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->OnPartyLeaderChanged,
               this);
    TMulticastDelegateRegistration<void___cdecl(__int64),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_VM_PartyMenu>
              ((TMulticastDelegateRegistration<void___cdecl(__int64),FDefaultDelegateUserPolicy> *)
               &pUVar1->OnPartyLeaderChanged,(UDS_VM_PartyMenu *)&stack0x00000010,
               (pmf_73d1b353 *)this);
  }
  pUVar2 = UDS_DungeonEvent::GetEvent();
  if (pUVar2 != (UDS_DungeonEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar2->OnChangedRaidPartyInfo
               ,this);
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_VM_PartyMenu>
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &pUVar2->OnChangedRaidPartyInfo,(UDS_VM_PartyMenu *)&stack0x00000010,
               (pmf_292c24a4 *)this);
  }
  return;
}

// InitViewModel @ 14bef3c20

void __thiscall UDS_VM_PartyMenu::InitViewModel(UDS_VM_PartyMenu *this)

{
  code *pcVar1;
  FDS_ViewModelContext_InputKey *pFVar2;
  bool bVar3;
  UDS_VM_InputKey *pUVar4;
  UDS_VM_CommonIconTextButton *pUVar5;
  TSharedPtr<FDS_ViewModelContext_InputKey,1> local_28;
  TSharedPtr<FDS_ViewModelContext,1> local_18;
  
  if ((this->VM_InputKey).field0_0x0.DebugPtr == (UDS_VM_InputKey *)0x0) {
    MakeContext<FDS_ViewModelContext_InputKey>(&local_28);
    pFVar2 = local_28.Object;
    if (local_28.Object == (FDS_ViewModelContext_InputKey *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    *(undefined4 *)&pFVar2->_padding_ = 0x15d;
    local_18.Object = (FDS_ViewModelContext *)local_28.Object;
    local_18.SharedReferenceCount.ReferenceController =
         local_28.SharedReferenceCount.ReferenceController;
    pFVar2->KeyActionType = IA_UI_Escape;
    if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    pUVar4 = UDS_ViewModelBase::CreateViewModel<UDS_VM_InputKey>((UObject *)this,&local_18);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UDS_VM_InputKey *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)pUVar4);
    }
    (this->VM_InputKey).field0_0x0.DebugPtr = pUVar4;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
  }
  if ((this->VM_PartyMenuButton1).field0_0x0.DebugPtr == (UDS_VM_CommonIconTextButton *)0x0) {
    pUVar5 = UDS_ViewModelBase::CreateViewModel<UDS_VM_CommonIconTextButton>((UObject *)this);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar5 != (UDS_VM_CommonIconTextButton *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar5);
    }
    (this->VM_PartyMenuButton1).field0_0x0.DebugPtr = pUVar5;
  }
  if ((this->VM_PartyMenuButton2).field0_0x0.DebugPtr == (UDS_VM_CommonIconTextButton *)0x0) {
    pUVar5 = UDS_ViewModelBase::CreateViewModel<UDS_VM_CommonIconTextButton>((UObject *)this);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar5 != (UDS_VM_CommonIconTextButton *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar5);
    }
    (this->VM_PartyMenuButton2).field0_0x0.DebugPtr = pUVar5;
  }
  if ((this->VM_PartyMenuButton3).field0_0x0.DebugPtr == (UDS_VM_CommonIconTextButton *)0x0) {
    pUVar5 = UDS_ViewModelBase::CreateViewModel<UDS_VM_CommonIconTextButton>((UObject *)this);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar5 != (UDS_VM_CommonIconTextButton *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar5);
    }
    (this->VM_PartyMenuButton3).field0_0x0.DebugPtr = pUVar5;
  }
  if ((this->VM_PartyMenuButton4).field0_0x0.DebugPtr == (UDS_VM_CommonIconTextButton *)0x0) {
    pUVar5 = UDS_ViewModelBase::CreateViewModel<UDS_VM_CommonIconTextButton>((UObject *)this);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar5 != (UDS_VM_CommonIconTextButton *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar5);
    }
    (this->VM_PartyMenuButton4).field0_0x0.DebugPtr = pUVar5;
  }
  return;
}

// OnClickClose @ 14bef8ea0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_PartyMenu::OnClickClose(UDS_VM_PartyMenu *this,FDS_ButtonEventField *param_1)

{
  UDS_WindowManager *this_00;
  UDS_LogManager *pUVar1;
  undefined1 auStackY_178 [32];
  float fStack_148;
  uint auStack_144 [3];
  TStringConversion<TStringConvert<char,wchar_t>,128> TStack_138;
  ulonglong uStack_18;
  
  uStack_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  this_00 = UDS_WindowManager::GetInst();
  if (this_00 == (UDS_WindowManager *)0x0) {
    pUVar1 = UDS_LogManager::GetInst();
    if (pUVar1 != (UDS_LogManager *)0x0) {
      pUVar1 = UDS_LogManager::GetInst();
      TStack_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&TStack_138,"FDS_PartyService::ClosePartyMenuPopup",0x25,Yes);
      UDS_LogManager::PrintLog(pUVar1,1,Warning,TStack_138.Ptr,0x241,L"windowManager == nullptr");
      if ((void *)TStack_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)TStack_138._padding_);
        return;
      }
    }
  }
  else {
    fStack_148 = 0.0;
    auStack_144[0] = 0;
    UDS_WindowManager::CloseWindow(this_00,PartyMenu,auStack_144,&fStack_148);
  }
  return;
}

// OnClickPartyDismiss @ 14befa320

void __thiscall
UDS_VM_PartyMenu::OnClickPartyDismiss(UDS_VM_PartyMenu *this,FDS_ButtonEventField *param_1)

{
  TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy> local_28;
  
  if (this->PartyType == Party) {
    FDS_PartyService::OpenPartyDismissPopup();
    return;
  }
  if (this->PartyType == RaidParty) {
    local_28._0_8_ = 0;
    local_28._8_8_ = 0;
    local_28._16_4_ = 0;
    UDS_UIMessageManager::OpenMsgByStringUi(0x347e6,Complete_System_01,&local_28);
  }
  return;
}

// OnClickPartyInfo @ 14befa370

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
UDS_VM_PartyMenu::OnClickPartyInfo(UDS_VM_PartyMenu *this,FDS_ButtonEventField *param_1)

{
  EDS_DungeonType EVar1;
  uint uVar2;
  int iVar3;
  FDS_RaidPartyRepo *pFVar4;
  UDS_LogManager *pUVar5;
  UDS_ContentManager *pUVar6;
  UDS_ContentManager *this_00;
  UObject *pUVar7;
  UClass *pUVar8;
  longlong *plVar9;
  undefined1 *puVar10;
  undefined1 auStackY_238 [32];
  TPairInitializer<FName_const_&,int_const_&> TStack_1f8;
  int aiStack_1e8 [2];
  int **ppiStack_1e0;
  int *piStack_1d8;
  undefined1 auStack_1c8 [128];
  TStringConversion<TStringConvert<char,wchar_t>,128> TStack_148;
  ulonglong uStack_28;
  
  if ((this->PartyType == Party) || (this->PartyType != RaidParty)) {
    return;
  }
  uStack_28 = __security_cookie.value ^ (ulonglong)auStackY_238;
  pFVar4 = TDS_Singleton<FDS_RaidPartyRepo>::GetInst();
  aiStack_1e8[0] = (pFVar4->RaidPartyInfo).DungeonId;
  if (aiStack_1e8[0] < 1) {
    pUVar5 = UDS_LogManager::GetInst();
    if (pUVar5 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar5 = UDS_LogManager::GetInst();
    TStack_148._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&TStack_148,"FDS_PartyService::OpenRaidPartyInfo",0x23,Yes);
    UDS_LogManager::PrintLog(pUVar5,1,Warning,TStack_148.Ptr,0x3ff,L"dungeonID <= 0");
    if ((void *)TStack_148._padding_ == (void *)0x0) {
      return;
    }
    FMemory::Free((void *)TStack_148._padding_);
    return;
  }
  pUVar6 = (UDS_ContentManager *)FDS_DungeonBaseTableRow::Get((longlong)aiStack_1e8[0],true);
  if (pUVar6 == (UDS_ContentManager *)0x0) {
    pUVar5 = UDS_LogManager::GetInst();
    if (pUVar5 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar5 = UDS_LogManager::GetInst();
    TStack_148._padding_ = (longlong)pUVar6;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&TStack_148,"FDS_PartyService::OpenRaidPartyInfo",0x23,Yes);
    UDS_LogManager::PrintLog
              (pUVar5,1,Warning,TStack_148.Ptr,0x406,
               L"dungeonBaseTableRow == nullptr - DungeonID : %d");
  }
  else {
    this_00 = UDS_ContentManager::GetInst();
    if (this_00 != (UDS_ContentManager *)0x0) {
      pUVar7 = GetTransientPackageAsObject();
      FObjectInitializer::AssertIfInConstructor
                (pUVar7,
                 L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                );
      pUVar8 = Z_Construct_UClass_UDS_ContentArguments_NoRegister();
      FStaticConstructObjectParameters::FStaticConstructObjectParameters
                ((FStaticConstructObjectParameters *)auStack_1c8,pUVar8);
      auStack_1c8._8_8_ = pUVar7;
      pUVar7 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)auStack_1c8);
      if (auStack_1c8._64_8_ != 0) {
        plVar9 = (longlong *)(auStack_1c8 + 0x50);
        if ((longlong *)auStack_1c8._104_8_ != (longlong *)0x0) {
          plVar9 = (longlong *)auStack_1c8._104_8_;
        }
        (**(code **)(*plVar9 + 0x10))();
      }
      ::FName::FName((FName *)&TStack_1f8.Value,"DungeonBaseID");
      uVar2 = ::GetTypeHash((FNameEntryId)(uint)TStack_1f8.Value);
      if (*(int *)&pUVar7[3].field_0x8 != *(int *)&pUVar7[4].field_0xc) {
        puVar10 = *(undefined1 **)&pUVar7[4].field_0x18;
        if (*(undefined1 **)&pUVar7[4].field_0x18 == (undefined1 *)0x0) {
          puVar10 = &pUVar7[4].field_0x10;
        }
        iVar3 = *(int *)(puVar10 +
                        (ulonglong)
                        (*(int *)&pUVar7[4].field_0x20 - 1U &
                        (int)((ulonglong)TStack_1f8.Value >> 0x20) + uVar2) * 4);
        if (iVar3 != -1) {
          do {
            if (*(int **)(*(longlong *)(pUVar7 + 3) + (longlong)iVar3 * 0x14) == TStack_1f8.Value)
            goto LAB_14b8de7af;
            iVar3 = *(int *)(*(longlong *)(pUVar7 + 3) + 0xc + (longlong)iVar3 * 0x14);
          } while (iVar3 != -1);
        }
      }
      ppiStack_1e0 = &TStack_1f8.Value;
      piStack_1d8 = aiStack_1e8;
      TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>::
      Emplace<TPairInitializer<FName_const_&,int_const_&>_>
                ((TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
                  *)(pUVar7 + 3),&TStack_1f8,(bool *)&ppiStack_1e0);
LAB_14b8de7af:
      EVar1 = *(EDS_DungeonType *)&pUVar6->_padding_;
      TStack_1f8.Value = (int *)pUVar7;
      if (EVar1 == Normal) {
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar7);
        }
        TStack_1f8.Key._0_4_ = 6000;
      }
      else if (EVar1 == Heroic) {
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar7);
        }
        TStack_1f8.Key._0_4_ = 0x177a;
      }
      else {
        if (EVar1 != Raid) {
          return;
        }
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar7);
        }
        TStack_1f8.Key._0_4_ = 0x1784;
      }
      UDS_ContentManager::OpenContent
                (this_00,(EDS_ContentsTabFrameType *)&TStack_1f8,
                 (TObjectPtr<UDS_ContentArguments>)&TStack_1f8.Value);
      return;
    }
    pUVar5 = UDS_LogManager::GetInst();
    if (pUVar5 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar5 = UDS_LogManager::GetInst();
    TStack_148._padding_ = (longlong)this_00;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&TStack_148,"FDS_PartyService::OpenRaidPartyInfo",0x23,Yes);
    UDS_LogManager::PrintLog(pUVar5,1,Warning,TStack_148.Ptr,0x40d,L"contentManager == nullptr");
  }
  if ((UDS_ContentManager *)TStack_148._padding_ != (UDS_ContentManager *)0x0) {
    FMemory::Free((void *)TStack_148._padding_);
  }
  return;
}

// OnClickPartyInvite @ 14befa390

void __thiscall
UDS_VM_PartyMenu::OnClickPartyInvite(UDS_VM_PartyMenu *this,FDS_ButtonEventField *param_1)

{
  TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy> local_28;
  
  if (this->PartyType == Party) {
    FDS_PartyService::OpenPartyInvitePopup();
    return;
  }
  if (this->PartyType == RaidParty) {
    local_28._0_8_ = 0;
    local_28._8_8_ = 0;
    local_28._16_4_ = 0;
    UDS_UIMessageManager::OpenMsgByStringUi(0x347e6,Complete_System_01,&local_28);
  }
  return;
}

// OnClickPartyInviteLink @ 14befa3e0

void __thiscall
UDS_VM_PartyMenu::OnClickPartyInviteLink(UDS_VM_PartyMenu *this,FDS_ButtonEventField *param_1)

{
  TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy> local_28;
  
  if (this->PartyType == Party) {
    FDS_PartyService::SendPartyInviteLink();
    return;
  }
  if (this->PartyType == RaidParty) {
    local_28._0_8_ = 0;
    local_28._8_8_ = 0;
    local_28._16_4_ = 0;
    UDS_UIMessageManager::OpenMsgByStringUi(0x347e6,Complete_System_01,&local_28);
  }
  return;
}

// OnClickPartyKick @ 14befa430

void __thiscall
UDS_VM_PartyMenu::OnClickPartyKick(UDS_VM_PartyMenu *this,FDS_ButtonEventField *param_1)

{
  if (this->PartyType == Party) {
    FDS_PartyService::OpenPartyKickPopup(this->PlayerUID);
    return;
  }
  if (this->PartyType == RaidParty) {
    FDS_RaidPartyService::OpenRaidPartyKickPopup(this->PlayerUID);
    return;
  }
  return;
}

// OnClickPartyLeaderChange @ 14befa460

void __thiscall
UDS_VM_PartyMenu::OnClickPartyLeaderChange(UDS_VM_PartyMenu *this,FDS_ButtonEventField *param_1)

{
  if (this->PartyType == Party) {
    FDS_PartyService::OpenPartyLeaderChangePopup(this->PlayerUID);
    return;
  }
  if (this->PartyType == RaidParty) {
    FDS_RaidPartyService::OpenRaidPartyChangeLeaderPopup(this->PlayerUID);
    return;
  }
  return;
}

// OnClickPartyLeave @ 14befa490

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_PartyMenu::OnClickPartyLeave(UDS_VM_PartyMenu *this,FDS_ButtonEventField *param_1)

{
  bool bVar1;
  FDS_PartyRepo *pFVar2;
  FDS_RaidPartyRepo *pFVar3;
  UDS_CommonPopupManager *pUVar4;
  UDS_LogManager *pUVar5;
  UDS_M_CommonPopup *pUVar6;
  undefined8 *puVar7;
  ulong64 uVar8;
  undefined1 auStackY_208 [16];
  uint uVar9;
  wchar_t *pwVar10;
  FWeakObjectPtr FStack_1d8;
  undefined1 auStack_1d0 [8];
  undefined1 auStack_1c8 [8];
  undefined1 auStack_1c0 [16];
  FDestructionSentinel FStack_1b0;
  undefined1 *puStack_198;
  undefined1 auStack_190 [44];
  bool bStack_164;
  ForAnyElementType FStack_160;
  undefined8 uStack_158;
  ForAnyElementType FStack_150;
  undefined1 auStack_148 [256];
  void *pvStack_48;
  wchar_t *pwStack_40;
  void *pvStack_38;
  wchar_t *pwStack_30;
  ulonglong uStack_28;
  
  if (this->PartyType != Party) {
    if (this->PartyType != RaidParty) {
      return;
    }
    pUVar4 = UDS_CommonPopupManager::GetInst();
    if (pUVar4 == (UDS_CommonPopupManager *)0x0) {
      pUVar5 = UDS_LogManager::GetInst();
      if (pUVar5 == (UDS_LogManager *)0x0) {
        return;
      }
      pUVar5 = UDS_LogManager::GetInst();
      pvStack_38 = (void *)0x0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                ((TStringConversion<TStringConvert<char,wchar_t>,128> *)(auStack_148 + 0x10),
                 "FDS_RaidPartyService::OpenRaidPartyLeavePopup",0x2d,Yes);
      pwVar10 = L"commonPopupManager == nullptr";
      uVar9 = 0x581;
    }
    else {
      UDS_CommonPopupManager::CreateCommonPopup(pUVar4);
      bVar1 = TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>::UEOpEquals
                        ((TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr> *)
                         &stack0xfffffffffffffe18,(void *)0x0);
      if (!bVar1) {
        pUVar6 = (UDS_M_CommonPopup *)
                 FWeakObjectPtr::Get((FWeakObjectPtr *)&stack0xfffffffffffffe18);
        auStack_190._0_4_ = auStack_190._0_4_ & 0xffffff00;
        auStack_190._8_8_ = 0;
        auStack_190._16_4_ = 0;
        auStack_190._20_4_ = 0;
        auStack_190._40_4_ = None;
        bStack_164 = false;
        auStack_190._24_8_ = 0;
        auStack_190._32_8_ = 0;
        FStack_160.Data = (FScriptContainerElement *)0x0;
        uStack_158._0_4_ = 0;
        uStack_158._4_4_ = 0;
        FStack_150.Data = (FScriptContainerElement *)0x0;
        auStack_148._0_8_ = 0;
        FDS_Text::SetTextFromStringTable((FDS_Text *)auStack_190,StringUi,0x33469);
        UDS_M_CommonPopup::SetTitle(pUVar6,(FDS_Text *)auStack_190);
        pUVar6 = (UDS_M_CommonPopup *)
                 FWeakObjectPtr::Get((FWeakObjectPtr *)&stack0xfffffffffffffe18);
        auStack_190._0_4_ = auStack_190._0_4_ & 0xffffff00;
        auStack_190._8_8_ = 0;
        auStack_190._16_4_ = 0;
        auStack_190._20_4_ = 0;
        auStack_190._40_4_ = None;
        auStack_190._24_8_ = 0;
        auStack_190._32_8_ = 0;
        bStack_164 = false;
        FStack_160.Data = (FScriptContainerElement *)0x0;
        uStack_158._0_4_ = 0;
        uStack_158._4_4_ = 0;
        FStack_150.Data = (FScriptContainerElement *)0x0;
        auStack_148._0_8_ = 0;
        FDS_Text::SetTextFromStringTable((FDS_Text *)auStack_190,StringUi,0x3346a);
        UDS_M_CommonPopup::SetMainContent(pUVar6,(FDS_Text *)auStack_190);
        pUVar6 = (UDS_M_CommonPopup *)
                 FWeakObjectPtr::Get((FWeakObjectPtr *)&stack0xfffffffffffffe18);
        UDS_M_CommonPopup::SetButton(pUVar6,ButtonCancel,StringUi,0x66,false);
        pUVar6 = (UDS_M_CommonPopup *)
                 FWeakObjectPtr::Get((FWeakObjectPtr *)&stack0xfffffffffffffe18);
        UDS_M_CommonPopup::SetButton(pUVar6,ButtonConfirm,StringUi,0x67,false);
        pUVar6 = (UDS_M_CommonPopup *)
                 FWeakObjectPtr::Get((FWeakObjectPtr *)&stack0xfffffffffffffe18);
        auStack_1d0 = (undefined1  [8])0x0;
        FStack_1d8.ObjectIndex = 0;
        FStack_1d8.ObjectSerialNumber = 0;
        auStack_1c8 = (undefined1  [8])0x0;
        auStack_1c0._0_8_ = (ForElementType<TAlignedBytes<16,16>_>)0x0;
        auStack_1c0._8_4_ = 0;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)auStack_1c8,
                   (FWriteAccessScope *)&FStack_1b0);
        puStack_198 = auStack_1c0;
        puVar7 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)auStack_1c0);
        if (puVar7 != (undefined8 *)0x0) {
          *puVar7 = &
                    ___7__TCommonDelegateInstanceState___A6AXU__TWeakObjectPtr_VUDS_M_CommonPopup__UFWeakObjectPtr_____ZUFDefaultDelegateUserPolicy___NV__TDelegate___A6AXXZUFDefaultDelegateUserPolicy______6B_
          ;
          *(undefined1 *)(puVar7 + 1) = 0;
          TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
                    ((TDelegateBase<FNotThreadSafeDelegateMode> *)(puVar7 + 2),
                     (TDelegateBase<FNotThreadSafeDelegateMode> *)&stack0xfffffffffffffe20);
          uVar8 = FDelegateHandle::GenerateNewID();
          puVar7[5] = uVar8;
          *puVar7 = &
                    ___7__TBaseStaticDelegateInstance___A6AXU__TWeakObjectPtr_VUDS_M_CommonPopup__UFWeakObjectPtr_____ZUFDefaultDelegateUserPolicy___NV__TDelegate___A6AXXZUFDefaultDelegateUserPolicy______6B_
          ;
          puVar7[6] = FDS_RaidPartyService::OnCommonPopup_MsgRes;
        }
        if (FStack_1b0.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_1b0.Accessor,&FStack_1b0);
        }
        UDS_M_CommonPopup::SetDelegate
                  (pUVar6,ButtonCancel,
                   (TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
                    *)auStack_1c8);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                   &stack0xfffffffffffffe20,(FWriteAccessScope *)&FStack_1b0);
        if ((auStack_1d0._0_4_ != 0) && (FStack_1d8 != (FWeakObjectPtr)0x0)) {
          (*(code *)**(undefined8 **)FStack_1d8)();
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                    ((ForAnyElementType *)&FStack_1d8,0,0,0x10);
          auStack_1d0 = (undefined1  [8])((ulonglong)auStack_1d0 & 0xffffffff00000000);
        }
        if (FStack_1b0.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_1b0.Accessor,&FStack_1b0);
        }
        if (FStack_1d8 != (FWeakObjectPtr)0x0) {
          FMemory::Free((void *)FStack_1d8);
        }
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                  ((FMRSWRecursiveAccessDetector *)&stack0xfffffffffffffe20);
        pUVar6 = (UDS_M_CommonPopup *)
                 FWeakObjectPtr::Get((FWeakObjectPtr *)&stack0xfffffffffffffe18);
        auStack_1c8 = (undefined1  [8])0x0;
        auStack_1c0._0_8_ = (ForElementType<TAlignedBytes<16,16>_>)0x0;
        auStack_1c0._8_4_ = 0;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)auStack_1c8,
                   (FWriteAccessScope *)&FStack_1b0);
        puStack_198 = auStack_1c0;
        puVar7 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)auStack_1c0);
        if (puVar7 != (undefined8 *)0x0) {
          *puVar7 = &
                    ___7__TCommonDelegateInstanceState___A6AXU__TWeakObjectPtr_VUDS_M_CommonPopup__UFWeakObjectPtr_____ZUFDefaultDelegateUserPolicy____V__6B_
          ;
          uVar8 = FDelegateHandle::GenerateNewID();
          puVar7[2] = uVar8;
          *puVar7 = &
                    ___7__TBaseStaticDelegateInstance___A6AXU__TWeakObjectPtr_VUDS_M_CommonPopup__UFWeakObjectPtr_____ZUFDefaultDelegateUserPolicy____V__6B_
          ;
          puVar7[3] = FDS_RaidPartyService::OnConfirmRaidPartyLeave;
        }
        if (FStack_1b0.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_1b0.Accessor,&FStack_1b0);
        }
        UDS_M_CommonPopup::SetDelegate
                  (pUVar6,ButtonConfirm,
                   (TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
                    *)auStack_1c8);
        pUVar6 = (UDS_M_CommonPopup *)
                 FWeakObjectPtr::Get((FWeakObjectPtr *)&stack0xfffffffffffffe18);
        UDS_M_CommonPopup::OpenCommonPopup(pUVar6);
        return;
      }
      pUVar5 = UDS_LogManager::GetInst();
      if (pUVar5 == (UDS_LogManager *)0x0) {
        return;
      }
      pUVar5 = UDS_LogManager::GetInst();
      pvStack_38 = (void *)0x0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                ((TStringConversion<TStringConvert<char,wchar_t>,128> *)(auStack_148 + 0x10),
                 "FDS_RaidPartyService::OpenRaidPartyLeavePopup",0x2d,Yes);
      pwVar10 = L"CommonPopupModel == nullptr";
      uVar9 = 0x588;
    }
    UDS_LogManager::PrintLog(pUVar5,1,Warning,pwStack_30,uVar9,pwVar10);
    if (pvStack_38 != (void *)0x0) {
      FMemory::Free(pvStack_38);
    }
    return;
  }
  uStack_28 = __security_cookie.value ^ (ulonglong)auStackY_208;
  pFVar2 = TDS_Singleton<FDS_PartyRepo>::GetInst();
  if (((pFVar2->PartyInfo).PartyUID < 1) || ((pFVar2->PartyInfo).PartyType == None)) {
    pFVar3 = TDS_Singleton<FDS_RaidPartyRepo>::GetInst();
    if ((pFVar3->RaidPartyInfo).RaidPartyUID < 1) {
      auStack_1d0 = (undefined1  [8])0x0;
      auStack_1c8 = (undefined1  [8])0x0;
      auStack_1c0._0_8_ = auStack_1c0._0_8_ & 0xffffffff00000000;
      UDS_UIMessageManager::OpenMsgByStringUi
                (0x41ec5,Alert_System_01,
                 (TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy>
                  *)auStack_1d0);
      return;
    }
  }
  pUVar4 = UDS_CommonPopupManager::GetInst();
  if (pUVar4 == (UDS_CommonPopupManager *)0x0) {
    pUVar5 = UDS_LogManager::GetInst();
    if (pUVar5 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar5 = UDS_LogManager::GetInst();
    pvStack_48 = (void *)0x0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              ((TStringConversion<TStringConvert<char,wchar_t>,128> *)auStack_148,
               "FDS_PartyService::OpenPartyLeavePopup",0x25,Yes);
    pwVar10 = L"commonPopupManager == nullptr";
    uVar9 = 0x32f;
  }
  else {
    UDS_CommonPopupManager::CreateCommonPopup(pUVar4);
    bVar1 = TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr> *)&FStack_1d8,(void *)0x0);
    if (!bVar1) {
      pUVar6 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&FStack_1d8);
      auStack_1c0._8_4_ = auStack_1c0._8_4_ & 0xffffff00;
      FStack_1b0.AccessType = Reader;
      FStack_1b0._4_4_ = 0;
      FStack_1b0.Accessor = (FMRSWRecursiveAccessDetector *)0x0;
      auStack_190._0_4_ = 0;
      auStack_190[4] = 0;
      FStack_1b0.bDestroyed = false;
      FStack_1b0._17_7_ = 0;
      puStack_198 = (undefined1 *)0x0;
      auStack_190._8_8_ = 0;
      auStack_190._16_4_ = 0;
      auStack_190._20_4_ = 0;
      auStack_190._24_8_ = 0;
      auStack_190._32_8_ = 0;
      FDS_Text::SetTextFromStringTable((FDS_Text *)(auStack_1c0 + 8),StringUi,0x41ee2);
      UDS_M_CommonPopup::SetTitle(pUVar6,(FDS_Text *)(auStack_1c0 + 8));
      pUVar6 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&FStack_1d8);
      UDS_M_CommonPopup::SetButton(pUVar6,ButtonCancel,StringUi,0x66,false);
      pUVar6 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&FStack_1d8);
      UDS_M_CommonPopup::SetButton(pUVar6,ButtonConfirm,StringUi,0x67,false);
      pUVar6 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&FStack_1d8);
      auStack_1c0._8_4_ = auStack_1c0._8_4_ & 0xffffff00;
      FStack_1b0.AccessType = Reader;
      FStack_1b0._4_4_ = 0;
      FStack_1b0.Accessor = (FMRSWRecursiveAccessDetector *)0x0;
      auStack_190._0_4_ = 0;
      FStack_1b0.bDestroyed = false;
      FStack_1b0._17_7_ = 0;
      puStack_198 = (undefined1 *)0x0;
      auStack_190[4] = 0;
      auStack_190._8_8_ = 0;
      auStack_190._16_4_ = 0;
      auStack_190._20_4_ = 0;
      auStack_190._24_8_ = 0;
      auStack_190._32_8_ = 0;
      FDS_Text::SetTextFromStringTable((FDS_Text *)(auStack_1c0 + 8),StringUi,0x41ee3);
      UDS_M_CommonPopup::SetMainContent(pUVar6,(FDS_Text *)(auStack_1c0 + 8));
      pUVar6 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&FStack_1d8);
      auStack_1d0 = (undefined1  [8])0x0;
      auStack_1c8 = (undefined1  [8])0x0;
      auStack_1c0._0_8_ = (ulonglong)(uint)auStack_1c0._4_4_ << 0x20;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)auStack_1d0,
                 (FWriteAccessScope *)(auStack_190 + 0x28));
      FStack_150.Data = (FScriptContainerElement *)auStack_1c8;
      puVar7 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)auStack_1c8);
      if (puVar7 != (undefined8 *)0x0) {
        *puVar7 = &
                  ___7__TCommonDelegateInstanceState___A6AXU__TWeakObjectPtr_VUDS_M_CommonPopup__UFWeakObjectPtr_____ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        uVar8 = FDelegateHandle::GenerateNewID();
        puVar7[2] = uVar8;
        puVar7[3] = FDS_PartyService::OnClosePartyPopup;
        *puVar7 = &
                  ___7__TBaseStaticDelegateInstance___A6AXU__TWeakObjectPtr_VUDS_M_CommonPopup__UFWeakObjectPtr_____ZUFDefaultDelegateUserPolicy____V__6B_
        ;
      }
      if ((char)uStack_158 == '\0') {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                  ((FMRSWRecursiveAccessDetector *)FStack_160.Data,
                   (FDestructionSentinel *)(auStack_190 + 0x28));
      }
      UDS_M_CommonPopup::SetDelegate
                (pUVar6,ButtonCancel,
                 (TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
                  *)auStack_1d0);
      pUVar6 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&FStack_1d8);
      auStack_1d0 = (undefined1  [8])0x0;
      auStack_1c8 = (undefined1  [8])0x0;
      auStack_1c0._0_8_ = auStack_1c0._0_8_ & 0xffffffff00000000;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)auStack_1d0,
                 (FWriteAccessScope *)(auStack_190 + 0x28));
      FStack_150.Data = (FScriptContainerElement *)auStack_1c8;
      puVar7 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)auStack_1c8);
      if (puVar7 != (undefined8 *)0x0) {
        *puVar7 = &
                  ___7__TCommonDelegateInstanceState___A6AXU__TWeakObjectPtr_VUDS_M_CommonPopup__UFWeakObjectPtr_____ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        uVar8 = FDelegateHandle::GenerateNewID();
        puVar7[2] = uVar8;
        puVar7[3] = FDS_PartyService::OnConfirmPartyLeave;
        *puVar7 = &
                  ___7__TBaseStaticDelegateInstance___A6AXU__TWeakObjectPtr_VUDS_M_CommonPopup__UFWeakObjectPtr_____ZUFDefaultDelegateUserPolicy____V__6B_
        ;
      }
      if ((char)uStack_158 == '\0') {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                  ((FMRSWRecursiveAccessDetector *)FStack_160.Data,
                   (FDestructionSentinel *)(auStack_190 + 0x28));
      }
      UDS_M_CommonPopup::SetDelegate
                (pUVar6,ButtonConfirm,
                 (TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
                  *)auStack_1d0);
      pUVar6 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&FStack_1d8);
      UDS_M_CommonPopup::OpenCommonPopup(pUVar6);
      return;
    }
    pUVar5 = UDS_LogManager::GetInst();
    if (pUVar5 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar5 = UDS_LogManager::GetInst();
    pvStack_48 = (void *)0x0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              ((TStringConversion<TStringConvert<char,wchar_t>,128> *)auStack_148,
               "FDS_PartyService::OpenPartyLeavePopup",0x25,Yes);
    pwVar10 = L"CommonPopupModel == nullptr";
    uVar9 = 0x336;
  }
  UDS_LogManager::PrintLog(pUVar5,1,Warning,pwStack_40,uVar9,pwVar10);
  if (pvStack_48 != (void *)0x0) {
    FMemory::Free(pvStack_48);
  }
  return;
}

// OnClickPartyMemberInfo @ 14befa4d0

void __thiscall
UDS_VM_PartyMenu::OnClickPartyMemberInfo(UDS_VM_PartyMenu *this,FDS_ButtonEventField *param_1)

{
  return;
}

// OnLeftParty @ 14befec00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_PartyMenu::OnLeftParty(UDS_VM_PartyMenu *this)

{
  UDS_WindowManager *this_00;
  UDS_LogManager *pUVar1;
  undefined1 auStackY_178 [32];
  float fStack_148;
  uint auStack_144 [3];
  TStringConversion<TStringConvert<char,wchar_t>,128> TStack_138;
  ulonglong uStack_18;
  
  uStack_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  this_00 = UDS_WindowManager::GetInst();
  if (this_00 == (UDS_WindowManager *)0x0) {
    pUVar1 = UDS_LogManager::GetInst();
    if (pUVar1 != (UDS_LogManager *)0x0) {
      pUVar1 = UDS_LogManager::GetInst();
      TStack_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&TStack_138,"FDS_PartyService::ClosePartyMenuPopup",0x25,Yes);
      UDS_LogManager::PrintLog(pUVar1,1,Warning,TStack_138.Ptr,0x241,L"windowManager == nullptr");
      if ((void *)TStack_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)TStack_138._padding_);
        return;
      }
    }
  }
  else {
    fStack_148 = 0.0;
    auStack_144[0] = 0;
    UDS_WindowManager::CloseWindow(this_00,PartyMenu,auStack_144,&fStack_148);
  }
  return;
}

// OnLeftPartyMember @ 14befec10

void __thiscall UDS_VM_PartyMenu::OnLeftPartyMember(UDS_VM_PartyMenu *this,long64 param_1)

{
  if (this->PlayerUID == param_1) {
    this->PlayerUID = 0;
  }
  UpdatePartyMenu(this);
  return;
}

// OnPartyLeaderChanged @ 14bf02c40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_PartyMenu::OnPartyLeaderChanged(UDS_VM_PartyMenu *this,long64 param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  UDS_LogManager *pUVar4;
  FDS_PartyRepo *pFVar5;
  long64 lVar6;
  UObject *pUVar7;
  FDS_PartyMemberInfo *pFVar8;
  undefined1 auStackY_278 [32];
  FWeakObjectPtr aFStack_238 [2];
  undefined1 auStack_228 [200];
  undefined4 uStack_160;
  TStringConversion<TStringConvert<char,wchar_t>,128> TStack_148;
  ulonglong uStack_28;
  
  uStack_28 = __security_cookie.value ^ (ulonglong)auStackY_278;
  UDS_PlayerData::GetMainPlayerData();
  bVar2 = FWeakObjectPtr::IsValid(aFStack_238);
  if (bVar2) {
    pFVar5 = TDS_Singleton<FDS_PartyRepo>::GetInst();
    auStack_228._0_4_ = (pFVar5->PartyInfo).PartyType;
    auStack_228._8_8_ = (pFVar5->PartyInfo).PartyUID;
    auStack_228._16_8_ = (pFVar5->PartyInfo).PartyLeaderUID;
    auStack_228._24_8_ = (FDS_PartyMemberInfo *)0x0;
    iVar3 = (pFVar5->PartyInfo).PartyMemberInfos.ArrayNum;
    pFVar8 = (FDS_PartyMemberInfo *)(pFVar5->PartyInfo).PartyMemberInfos.AllocatorInstance.Data;
    auStack_228._32_4_ = iVar3;
    if (iVar3 == 0) {
      auStack_228._36_4_ = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xa8,8,iVar3,0,(ForAnyElementType *)(auStack_228 + 0x18),iVar3,
                 (int *)(auStack_228 + 0x24));
      ConstructItems<FDS_PartyMemberInfo,FDS_PartyMemberInfo,int>
                ((void *)auStack_228._24_8_,pFVar8,iVar3);
    }
    auStack_228._40_4_ = (pFVar5->PartyInfo).MySlotIndex;
    auStack_228._44_4_ = (pFVar5->PartyInfo).PartyMemberCount;
    FDS_PartyMemberInfo::FDS_PartyMemberInfo
              ((FDS_PartyMemberInfo *)(auStack_228 + 0x30),
               &(pFVar5->PartyInfo).DefaultPartyMemberInfo);
    lVar6 = FDS_PartyInfo::GetPartyLeaderUID((FDS_PartyInfo *)auStack_228);
    pUVar7 = FWeakObjectPtr::Get(aFStack_238);
    this->bIsPartyLeader = lVar6 == *(longlong *)&pUVar7[6].field_0x8;
    iVar3 = FDS_PartyInfo::GetPartyMemberCount((FDS_PartyInfo *)auStack_228);
    this->MemberCount = (longlong)iVar3;
    UpdatePartyMenuTitle(this);
    if (this->PartyMenuType == PartyMenu) {
      UpdatePartyManageMenu(this);
    }
    else {
      UpdatePartyMemberMenu(this);
    }
    uStack_160 = 0;
    if ((void *)auStack_228._192_8_ != (void *)0x0) {
      FMemory::Free((void *)auStack_228._192_8_);
    }
    TSparseArray<TSparseSetElement<TTuple<enum_EDS_StatusType,FDS_PartyMemberStat>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<enum_EDS_StatusType,FDS_PartyMemberStat>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (auStack_228 + 0x80);
    if ((FScriptContainerElement *)auStack_228._72_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)auStack_228._72_8_);
    }
    DestructItems<FDS_PartyMemberInfo,int>
              ((FDS_PartyMemberInfo *)auStack_228._24_8_,auStack_228._32_4_);
    pFVar8 = (FDS_PartyMemberInfo *)auStack_228._24_8_;
  }
  else {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4174273084280275204>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\Party\\DS_VM_PartyMenu.cpp"
                       ,0x104,"myPlayerData.IsValid()");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar4 = UDS_LogManager::GetInst();
    TStack_148._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&TStack_148,"UDS_VM_PartyMenu::UpdatePartyMenu",0x21,Yes);
    UDS_LogManager::PrintLog(pUVar4,1,Warning,TStack_148.Ptr,0x106,L"myPlayerData is Invalid");
    pFVar8 = (FDS_PartyMemberInfo *)TStack_148._padding_;
  }
  if (pFVar8 != (FDS_PartyMemberInfo *)0x0) {
    FMemory::Free(pFVar8);
  }
  return;
}

// OnSetViewModel @ 14bf0a3c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_PartyMenu::OnSetViewModel(UDS_VM_PartyMenu *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  EDS_PartyType EVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  UDS_LogManager *pUVar5;
  undefined1 auStackY_188 [32];
  TSharedPtr<FDS_ViewModelContext_PartyInformation,1> local_158;
  TSharedPtr<FDS_ViewModelContext,1> local_148;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_188;
  pTVar2 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  local_148.Object = param_1->Object;
  local_148.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_148.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_148.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_148.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SafeCast<FDS_ViewModelContext_PartyInformation>(&local_158,&local_148);
  if (local_158.Object == (FDS_ViewModelContext_PartyInformation *)0x0) {
    pUVar5 = UDS_LogManager::GetInst();
    if (pUVar5 != (UDS_LogManager *)0x0) {
      pUVar5 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_VM_PartyMenu::OnSetViewModel",0x20,Yes);
      UDS_LogManager::PrintLog
                (pUVar5,1,Warning,local_138.Ptr,0x22,L"partyMenuContext.IsValid() == false");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  else {
    if (local_158.Object == (FDS_ViewModelContext_PartyInformation *)0x0) {
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
    EVar1 = (local_158.Object)->PartyType;
    this->PartyType = EVar1;
    this->PartyMenuType = (local_158.Object)->PartyMenuType;
    this->PlayerUID = (local_158.Object)->PlayerUID;
    if (EVar1 == Party) {
      UpdatePartyMenu(this);
    }
    else if (EVar1 == RaidParty) {
      UpdateRaidPartyMenu(this);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_158.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// SetMenuSubTitle @ 14bf167b0

void __thiscall UDS_VM_PartyMenu::SetMenuSubTitle(UDS_VM_PartyMenu *this,FDS_Text *param_1)

{
  FName FVar1;
  int iVar2;
  FName local_18;
  int local_10;
  
  iVar2 = FFieldNotificationClassDescriptor::MenuSubTitle.BitNumber;
  FVar1 = FFieldNotificationClassDescriptor::MenuSubTitle.FieldName;
  FDS_Text::operator=(&this->MenuSubTitle,param_1);
  local_18 = FVar1;
  local_10 = iVar2;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// SetMenuSubTitleVisibility @ 14bf16810

void __thiscall
UDS_VM_PartyMenu::SetMenuSubTitleVisibility(UDS_VM_PartyMenu *this,ESlateVisibility param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::MenuSubTitleVisibility.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::MenuSubTitleVisibility.FieldName;
  if (this->MenuSubTitleVisibility != param_1) {
    this->MenuSubTitleVisibility = param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetMenuTitle @ 14bf16860

void __thiscall UDS_VM_PartyMenu::SetMenuTitle(UDS_VM_PartyMenu *this,FDS_Text *param_1)

{
  FName local_18;
  int local_10;
  
  FDS_Text::operator=(&this->MenuTitle,param_1);
  local_10 = FFieldNotificationClassDescriptor::MenuTitle.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::MenuTitle.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// SetStatePartyMenuButton1 @ 14bf18bf0

void __thiscall UDS_VM_PartyMenu::SetStatePartyMenuButton1(UDS_VM_PartyMenu *this,bool param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::StatePartyMenuButton1.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::StatePartyMenuButton1.FieldName;
  if (this->StatePartyMenuButton1 != param_1) {
    this->StatePartyMenuButton1 = param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetStatePartyMenuButton2 @ 14bf18c40

void __thiscall UDS_VM_PartyMenu::SetStatePartyMenuButton2(UDS_VM_PartyMenu *this,bool param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::StatePartyMenuButton2.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::StatePartyMenuButton2.FieldName;
  if (this->StatePartyMenuButton2 != param_1) {
    this->StatePartyMenuButton2 = param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetStatePartyMenuButton3 @ 14bf18c90

void __thiscall UDS_VM_PartyMenu::SetStatePartyMenuButton3(UDS_VM_PartyMenu *this,bool param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::StatePartyMenuButton3.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::StatePartyMenuButton3.FieldName;
  if (this->StatePartyMenuButton3 != param_1) {
    this->StatePartyMenuButton3 = param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetStatePartyMenuButton4 @ 14bf18ce0

void __thiscall UDS_VM_PartyMenu::SetStatePartyMenuButton4(UDS_VM_PartyMenu *this,bool param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::StatePartyMenuButton4.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::StatePartyMenuButton4.FieldName;
  if (this->StatePartyMenuButton4 != param_1) {
    this->StatePartyMenuButton4 = param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// UnbindModel @ 14bf1e7e0

void __thiscall UDS_VM_PartyMenu::UnbindModel(UDS_VM_PartyMenu *this)

{
  UDS_PartyEvent *pUVar1;
  
  UDS_ViewModelBase::UnbindModel((UDS_ViewModelBase *)this);
  pUVar1 = UDS_PartyEvent::GetEvent();
  if (pUVar1 != (UDS_PartyEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->OnLeftPartyMember,this
              );
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->OnPartyLeaderChanged,
               this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->OnLeftParty,this);
  }
  return;
}

// UpdatePartyManageMenu @ 14bf21c40

void __thiscall UDS_VM_PartyMenu::UpdatePartyManageMenu(UDS_VM_PartyMenu *this)

{
  UDS_VM_CommonIconTextButton *pUVar1;
  code *pcVar2;
  TReferenceControllerBase<1> *pTVar3;
  FName FVar4;
  int iVar5;
  FDS_ViewModelContext_CommonIconTextButton *pFVar6;
  FSharedReferencer<1> FVar7;
  bool bVar8;
  undefined8 *puVar9;
  ulong64 uVar10;
  UDS_VM_PartyMenu *local_res8;
  UDS_VM_PartyMenu *local_res10;
  UDS_VM_PartyMenu *local_res18;
  UDS_VM_PartyMenu *local_res20;
  TSharedPtr<FDS_ViewModelContext_CommonIconTextButton,1> local_2b8;
  TSharedPtr<FDS_ViewModelContext,1> local_2a8;
  FName local_298;
  int local_290;
  FName local_288;
  int local_280;
  FName local_278;
  int local_270;
  FName local_268;
  int local_260;
  TSharedPtr<FDS_ViewModelContext_CommonIconTextButton,1> local_258;
  TSharedPtr<FDS_ViewModelContext_CommonIconTextButton,1> local_248;
  TSharedPtr<FDS_ViewModelContext_CommonIconTextButton,1> local_238;
  FDS_Text local_228;
  FDS_Text local_1d8;
  FDS_Text local_188;
  FDS_Text local_138;
  FDestructionSentinel local_e8;
  undefined1 *local_d0;
  FDestructionSentinel local_c8;
  undefined1 *local_b0;
  FDestructionSentinel local_a8;
  undefined1 *local_90;
  FDestructionSentinel local_88;
  undefined1 *local_70;
  TSharedPtr<FDS_ViewModelContext,1> local_68;
  TSharedPtr<FDS_ViewModelContext,1> local_58;
  TSharedPtr<FDS_ViewModelContext,1> local_48;
  
  MakeContext<FDS_ViewModelContext_CommonIconTextButton>(&local_258);
  pFVar6 = local_258.Object;
  if (local_258.Object == (FDS_ViewModelContext_CommonIconTextButton *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar8) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  *(undefined4 *)&pFVar6->_padding_ = 0x15b;
  local_228.StringTableID = 0;
  local_228.StringEnumTableNameID.ComparisonIndex.Value = 0;
  local_228.StringEnumTableNameID.Number = 0;
  local_228.TimeExpressionType = None;
  local_228.IsExpression = false;
  local_228.DateTime.Ticks = 0;
  local_228.TimeSpan.Ticks = 0;
  local_228.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_228.UniqueString.Data.ArrayNum = 0;
  local_228.UniqueString.Data.ArrayMax = 0;
  local_228.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_228.FormatArgs.ArrayNum = 0;
  local_228.FormatArgs.ArrayMax = 0;
  local_228.StringTableType = None;
  FDS_Text::SetTextFromStringTable(&local_228,StringUi,0x41eeb);
  FDS_Text::operator=(&pFVar6->DSText,&local_228);
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)local_228.FormatArgs.AllocatorInstance.Data,
             local_228.FormatArgs.ArrayNum);
  if ((FDS_TextFormatArg *)local_228.FormatArgs.AllocatorInstance.Data != (FDS_TextFormatArg *)0x0)
  {
    FMemory::Free(local_228.FormatArgs.AllocatorInstance.Data);
  }
  if (local_228.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_228.UniqueString.Data.AllocatorInstance.Data);
  }
  FVar7.ReferenceController = local_2a8.SharedReferenceCount.ReferenceController;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar6->OnClickDelegate,
             (FWriteAccessScope *)&local_e8);
  local_d0 = &(pFVar6->OnClickDelegate).field_0x8;
  puVar9 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_d0);
  if (puVar9 != (undefined8 *)0x0) {
    *puVar9 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBUFDS_ButtonEventField___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar10 = FDelegateHandle::GenerateNewID();
    puVar9[2] = uVar10;
    *puVar9 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_PartyMenu____A6AXAEBUFDS_ButtonEventField___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UDS_VM_PartyMenu *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar9[3] = 0;
    local_res8 = this;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UDS_VM_PartyMenu *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar9 + 3),(FObjectPtr)&local_res8);
    puVar9[4] = OnClickPartyInviteLink;
    puVar9[5] = (ulonglong)FVar7.ReferenceController & 0xffffffff00000000;
  }
  if (local_e8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_e8.Accessor,&local_e8);
  }
  pUVar1 = (this->VM_PartyMenuButton1).field0_0x0.DebugPtr;
  local_68.Object = (FDS_ViewModelContext *)local_258.Object;
  local_68.SharedReferenceCount.ReferenceController =
       local_258.SharedReferenceCount.ReferenceController;
  if (local_258.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_258.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_258.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)pUVar1,&local_68);
  iVar5 = FFieldNotificationClassDescriptor::StatePartyMenuButton1.BitNumber;
  FVar4 = FFieldNotificationClassDescriptor::StatePartyMenuButton1.FieldName;
  if (this->StatePartyMenuButton1 != true) {
    this->StatePartyMenuButton1 = true;
    local_290 = iVar5;
    local_298 = FVar4;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_298);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_258.SharedReferenceCount.ReferenceController);
  MakeContext<FDS_ViewModelContext_CommonIconTextButton>(&local_248);
  pFVar6 = local_248.Object;
  if (local_248.Object == (FDS_ViewModelContext_CommonIconTextButton *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar8) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  *(undefined4 *)&pFVar6->_padding_ = 0x15b;
  local_1d8.StringTableType = None;
  local_1d8.StringTableID = 0;
  local_1d8.StringEnumTableNameID.ComparisonIndex.Value = 0;
  local_1d8.StringEnumTableNameID.Number = 0;
  local_1d8.DateTime.Ticks = 0;
  local_1d8.TimeSpan.Ticks = 0;
  local_1d8.TimeExpressionType = None;
  local_1d8.IsExpression = false;
  local_1d8.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1d8.UniqueString.Data.ArrayNum = 0;
  local_1d8.UniqueString.Data.ArrayMax = 0;
  local_1d8.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1d8.FormatArgs.ArrayNum = 0;
  local_1d8.FormatArgs.ArrayMax = 0;
  FDS_Text::SetTextFromStringTable(&local_1d8,StringUi,0x41eec);
  FDS_Text::operator=(&pFVar6->DSText,&local_1d8);
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)local_1d8.FormatArgs.AllocatorInstance.Data,
             local_1d8.FormatArgs.ArrayNum);
  if ((FDS_TextFormatArg *)local_1d8.FormatArgs.AllocatorInstance.Data != (FDS_TextFormatArg *)0x0)
  {
    FMemory::Free(local_1d8.FormatArgs.AllocatorInstance.Data);
  }
  if (local_1d8.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1d8.UniqueString.Data.AllocatorInstance.Data);
  }
  FVar7.ReferenceController = local_2a8.SharedReferenceCount.ReferenceController;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar6->OnClickDelegate,
             (FWriteAccessScope *)&local_c8);
  local_b0 = &(pFVar6->OnClickDelegate).field_0x8;
  puVar9 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_b0);
  if (puVar9 != (undefined8 *)0x0) {
    *puVar9 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBUFDS_ButtonEventField___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar10 = FDelegateHandle::GenerateNewID();
    puVar9[2] = uVar10;
    *puVar9 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_PartyMenu____A6AXAEBUFDS_ButtonEventField___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar9[3] = 0;
    local_res10 = this;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar9 + 3),(FObjectPtr)&local_res10);
    puVar9[4] = OnClickPartyInvite;
    puVar9[5] = (ulonglong)FVar7.ReferenceController & 0xffffffff00000000;
  }
  if (local_c8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_c8.Accessor,&local_c8);
  }
  pUVar1 = (this->VM_PartyMenuButton2).field0_0x0.DebugPtr;
  local_58.Object = (FDS_ViewModelContext *)local_248.Object;
  local_58.SharedReferenceCount.ReferenceController =
       local_248.SharedReferenceCount.ReferenceController;
  if (local_248.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_248.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_248.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)pUVar1,&local_58);
  iVar5 = FFieldNotificationClassDescriptor::StatePartyMenuButton2.BitNumber;
  FVar4 = FFieldNotificationClassDescriptor::StatePartyMenuButton2.FieldName;
  if (this->StatePartyMenuButton2 != true) {
    this->StatePartyMenuButton2 = true;
    local_280 = iVar5;
    local_288 = FVar4;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_288);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_248.SharedReferenceCount.ReferenceController);
  MakeContext<FDS_ViewModelContext_CommonIconTextButton>(&local_2b8);
  pFVar6 = local_2b8.Object;
  if (local_2b8.Object == (FDS_ViewModelContext_CommonIconTextButton *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar8) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  *(undefined4 *)&pFVar6->_padding_ = 0x15b;
  local_188.StringTableType = None;
  local_188.StringTableID = 0;
  local_188.StringEnumTableNameID.ComparisonIndex.Value = 0;
  local_188.StringEnumTableNameID.Number = 0;
  local_188.DateTime.Ticks = 0;
  local_188.TimeSpan.Ticks = 0;
  local_188.TimeExpressionType = None;
  local_188.IsExpression = false;
  local_188.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_188.UniqueString.Data.ArrayNum = 0;
  local_188.UniqueString.Data.ArrayMax = 0;
  local_188.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_188.FormatArgs.ArrayNum = 0;
  local_188.FormatArgs.ArrayMax = 0;
  FDS_Text::SetTextFromStringTable(&local_188,StringUi,0x41eed);
  FDS_Text::operator=(&pFVar6->DSText,&local_188);
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)local_188.FormatArgs.AllocatorInstance.Data,
             local_188.FormatArgs.ArrayNum);
  if ((FDS_TextFormatArg *)local_188.FormatArgs.AllocatorInstance.Data != (FDS_TextFormatArg *)0x0)
  {
    FMemory::Free(local_188.FormatArgs.AllocatorInstance.Data);
  }
  if (local_188.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_188.UniqueString.Data.AllocatorInstance.Data);
  }
  FVar7.ReferenceController = local_2a8.SharedReferenceCount.ReferenceController;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar6->OnClickDelegate,
             (FWriteAccessScope *)&local_a8);
  local_90 = &(pFVar6->OnClickDelegate).field_0x8;
  puVar9 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_90);
  if (puVar9 != (undefined8 *)0x0) {
    *puVar9 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBUFDS_ButtonEventField___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar10 = FDelegateHandle::GenerateNewID();
    puVar9[2] = uVar10;
    *puVar9 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_PartyMenu____A6AXAEBUFDS_ButtonEventField___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar9[3] = 0;
    local_res18 = this;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar9 + 3),(FObjectPtr)&local_res18);
    puVar9[4] = OnClickPartyLeave;
    puVar9[5] = (ulonglong)FVar7.ReferenceController & 0xffffffff00000000;
  }
  if (local_a8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_a8.Accessor,&local_a8);
  }
  pTVar3 = (TReferenceControllerBase<1> *)
           CONCAT44(local_2b8.SharedReferenceCount.ReferenceController._4_4_,
                    local_2b8.SharedReferenceCount.ReferenceController._0_4_);
  pUVar1 = (this->VM_PartyMenuButton3).field0_0x0.DebugPtr;
  local_48.Object = (FDS_ViewModelContext *)local_2b8.Object;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)pUVar1,&local_48);
  FVar4 = FFieldNotificationClassDescriptor::StatePartyMenuButton3.FieldName;
  if ((this->bIsPartyLeader == false) || (1 < this->MemberCount)) {
    bVar8 = true;
  }
  else {
    bVar8 = false;
  }
  if (this->StatePartyMenuButton3 != bVar8) {
    local_270 = FFieldNotificationClassDescriptor::StatePartyMenuButton3.BitNumber;
    this->StatePartyMenuButton3 = bVar8;
    local_278 = FVar4;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_278);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  MakeContext<FDS_ViewModelContext_CommonIconTextButton>(&local_238);
  pFVar6 = local_238.Object;
  if (local_238.Object == (FDS_ViewModelContext_CommonIconTextButton *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar8) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  *(undefined4 *)&pFVar6->_padding_ = 0x15b;
  local_138.StringTableType = None;
  local_138.StringTableID = 0;
  local_138.StringEnumTableNameID.ComparisonIndex.Value = 0;
  local_138.StringEnumTableNameID.Number = 0;
  local_138.DateTime.Ticks = 0;
  local_138.TimeSpan.Ticks = 0;
  local_138.TimeExpressionType = None;
  local_138.IsExpression = false;
  local_138.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_138.UniqueString.Data.ArrayNum = 0;
  local_138.UniqueString.Data.ArrayMax = 0;
  local_138.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_138.FormatArgs.ArrayNum = 0;
  local_138.FormatArgs.ArrayMax = 0;
  FDS_Text::SetTextFromStringTable(&local_138,StringUi,0x41eee);
  FDS_Text::operator=(&pFVar6->DSText,&local_138);
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)local_138.FormatArgs.AllocatorInstance.Data,
             local_138.FormatArgs.ArrayNum);
  if ((FDS_TextFormatArg *)local_138.FormatArgs.AllocatorInstance.Data != (FDS_TextFormatArg *)0x0)
  {
    FMemory::Free(local_138.FormatArgs.AllocatorInstance.Data);
  }
  if (local_138.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_138.UniqueString.Data.AllocatorInstance.Data);
  }
  local_2b8.SharedReferenceCount.ReferenceController._0_4_ = 0;
  local_2b8.Object = (FDS_ViewModelContext_CommonIconTextButton *)OnClickPartyDismiss;
  local_2b8.SharedReferenceCount.ReferenceController._4_4_ =
       local_2a8.SharedReferenceCount.ReferenceController._4_4_;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar6->OnClickDelegate,
             (FWriteAccessScope *)&local_88);
  local_70 = &(pFVar6->OnClickDelegate).field_0x8;
  puVar9 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_70);
  if (puVar9 != (undefined8 *)0x0) {
    *puVar9 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBUFDS_ButtonEventField___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar10 = FDelegateHandle::GenerateNewID();
    puVar9[2] = uVar10;
    *puVar9 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_PartyMenu____A6AXAEBUFDS_ButtonEventField___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar9[3] = 0;
    local_res20 = this;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar9 + 3),(FObjectPtr)&local_res20);
    puVar9[4] = local_2b8.Object;
    puVar9[5] = CONCAT44(local_2b8.SharedReferenceCount.ReferenceController._4_4_,
                         local_2b8.SharedReferenceCount.ReferenceController._0_4_);
  }
  if (local_88.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_88.Accessor,&local_88);
  }
  pUVar1 = (this->VM_PartyMenuButton4).field0_0x0.DebugPtr;
  local_2a8.Object = (FDS_ViewModelContext *)local_238.Object;
  local_2a8.SharedReferenceCount.ReferenceController =
       local_238.SharedReferenceCount.ReferenceController;
  if (local_238.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_238.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_238.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)pUVar1,&local_2a8);
  FVar4 = FFieldNotificationClassDescriptor::StatePartyMenuButton4.FieldName;
  if ((this->bIsPartyLeader == true) && (this->MemberCount == 1)) {
    bVar8 = true;
  }
  else {
    bVar8 = false;
  }
  if (this->StatePartyMenuButton4 != bVar8) {
    local_260 = FFieldNotificationClassDescriptor::StatePartyMenuButton4.BitNumber;
    this->StatePartyMenuButton4 = bVar8;
    local_268 = FVar4;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_268);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_238.SharedReferenceCount.ReferenceController);
  return;
}

// UpdatePartyMemberMenu @ 14bf22740

void __thiscall UDS_VM_PartyMenu::UpdatePartyMemberMenu(UDS_VM_PartyMenu *this)

{
  UDS_VM_CommonIconTextButton *pUVar1;
  code *pcVar2;
  TReferenceControllerBase<1> *pTVar3;
  FName FVar4;
  int iVar5;
  FDS_ViewModelContext_CommonIconTextButton *pFVar6;
  FSharedReferencer<1> FVar7;
  bool bVar8;
  undefined8 *puVar9;
  ulong64 uVar10;
  UDS_VM_PartyMenu *local_res8;
  UDS_VM_PartyMenu *local_res10;
  UDS_VM_PartyMenu *local_res18;
  UDS_VM_PartyMenu *local_res20;
  TSharedPtr<FDS_ViewModelContext_CommonIconTextButton,1> local_2b8;
  TSharedPtr<FDS_ViewModelContext,1> local_2a8;
  FName local_298;
  int local_290;
  FName local_288;
  int local_280;
  FName local_278;
  int local_270;
  FName local_268;
  int local_260;
  TSharedPtr<FDS_ViewModelContext_CommonIconTextButton,1> local_258;
  TSharedPtr<FDS_ViewModelContext_CommonIconTextButton,1> local_248;
  TSharedPtr<FDS_ViewModelContext_CommonIconTextButton,1> local_238;
  FDS_Text local_228;
  FDS_Text local_1d8;
  FDS_Text local_188;
  FDS_Text local_138;
  FDestructionSentinel local_e8;
  undefined1 *local_d0;
  FDestructionSentinel local_c8;
  undefined1 *local_b0;
  FDestructionSentinel local_a8;
  undefined1 *local_90;
  FDestructionSentinel local_88;
  undefined1 *local_70;
  TSharedPtr<FDS_ViewModelContext,1> local_68;
  TSharedPtr<FDS_ViewModelContext,1> local_58;
  TSharedPtr<FDS_ViewModelContext,1> local_48;
  
  MakeContext<FDS_ViewModelContext_CommonIconTextButton>(&local_258);
  pFVar6 = local_258.Object;
  if (local_258.Object == (FDS_ViewModelContext_CommonIconTextButton *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar8) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  *(undefined4 *)&pFVar6->_padding_ = 0x15b;
  local_228.StringTableID = 0;
  local_228.StringEnumTableNameID.ComparisonIndex.Value = 0;
  local_228.StringEnumTableNameID.Number = 0;
  local_228.TimeExpressionType = None;
  local_228.IsExpression = false;
  local_228.DateTime.Ticks = 0;
  local_228.TimeSpan.Ticks = 0;
  local_228.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_228.UniqueString.Data.ArrayNum = 0;
  local_228.UniqueString.Data.ArrayMax = 0;
  local_228.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_228.FormatArgs.ArrayNum = 0;
  local_228.FormatArgs.ArrayMax = 0;
  local_228.StringTableType = None;
  FDS_Text::SetTextFromStringTable(&local_228,StringUi,0x41ef0);
  FDS_Text::operator=(&pFVar6->DSText,&local_228);
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)local_228.FormatArgs.AllocatorInstance.Data,
             local_228.FormatArgs.ArrayNum);
  if ((FDS_TextFormatArg *)local_228.FormatArgs.AllocatorInstance.Data != (FDS_TextFormatArg *)0x0)
  {
    FMemory::Free(local_228.FormatArgs.AllocatorInstance.Data);
  }
  if (local_228.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_228.UniqueString.Data.AllocatorInstance.Data);
  }
  FVar7.ReferenceController = local_2a8.SharedReferenceCount.ReferenceController;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar6->OnClickDelegate,
             (FWriteAccessScope *)&local_e8);
  local_d0 = &(pFVar6->OnClickDelegate).field_0x8;
  puVar9 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_d0);
  if (puVar9 != (undefined8 *)0x0) {
    *puVar9 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBUFDS_ButtonEventField___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar10 = FDelegateHandle::GenerateNewID();
    puVar9[2] = uVar10;
    *puVar9 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_PartyMenu____A6AXAEBUFDS_ButtonEventField___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UDS_VM_PartyMenu *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar9[3] = 0;
    local_res8 = this;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UDS_VM_PartyMenu *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar9 + 3),(FObjectPtr)&local_res8);
    puVar9[4] = OnClickPartyMemberInfo;
    puVar9[5] = (ulonglong)FVar7.ReferenceController & 0xffffffff00000000;
  }
  if (local_e8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_e8.Accessor,&local_e8);
  }
  pUVar1 = (this->VM_PartyMenuButton1).field0_0x0.DebugPtr;
  local_68.Object = (FDS_ViewModelContext *)local_258.Object;
  local_68.SharedReferenceCount.ReferenceController =
       local_258.SharedReferenceCount.ReferenceController;
  if (local_258.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_258.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_258.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)pUVar1,&local_68);
  iVar5 = FFieldNotificationClassDescriptor::StatePartyMenuButton1.BitNumber;
  FVar4 = FFieldNotificationClassDescriptor::StatePartyMenuButton1.FieldName;
  if (this->StatePartyMenuButton1 != true) {
    this->StatePartyMenuButton1 = true;
    local_290 = iVar5;
    local_298 = FVar4;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_298);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_258.SharedReferenceCount.ReferenceController);
  MakeContext<FDS_ViewModelContext_CommonIconTextButton>(&local_248);
  pFVar6 = local_248.Object;
  if (local_248.Object == (FDS_ViewModelContext_CommonIconTextButton *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar8) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  *(undefined4 *)&pFVar6->_padding_ = 0x15b;
  local_1d8.StringTableType = None;
  local_1d8.StringTableID = 0;
  local_1d8.StringEnumTableNameID.ComparisonIndex.Value = 0;
  local_1d8.StringEnumTableNameID.Number = 0;
  local_1d8.DateTime.Ticks = 0;
  local_1d8.TimeSpan.Ticks = 0;
  local_1d8.TimeExpressionType = None;
  local_1d8.IsExpression = false;
  local_1d8.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1d8.UniqueString.Data.ArrayNum = 0;
  local_1d8.UniqueString.Data.ArrayMax = 0;
  local_1d8.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1d8.FormatArgs.ArrayNum = 0;
  local_1d8.FormatArgs.ArrayMax = 0;
  FDS_Text::SetTextFromStringTable(&local_1d8,StringUi,0x41eec);
  FDS_Text::operator=(&pFVar6->DSText,&local_1d8);
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)local_1d8.FormatArgs.AllocatorInstance.Data,
             local_1d8.FormatArgs.ArrayNum);
  if ((FDS_TextFormatArg *)local_1d8.FormatArgs.AllocatorInstance.Data != (FDS_TextFormatArg *)0x0)
  {
    FMemory::Free(local_1d8.FormatArgs.AllocatorInstance.Data);
  }
  if (local_1d8.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1d8.UniqueString.Data.AllocatorInstance.Data);
  }
  FVar7.ReferenceController = local_2a8.SharedReferenceCount.ReferenceController;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar6->OnClickDelegate,
             (FWriteAccessScope *)&local_c8);
  local_b0 = &(pFVar6->OnClickDelegate).field_0x8;
  puVar9 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_b0);
  if (puVar9 != (undefined8 *)0x0) {
    *puVar9 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBUFDS_ButtonEventField___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar10 = FDelegateHandle::GenerateNewID();
    puVar9[2] = uVar10;
    *puVar9 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_PartyMenu____A6AXAEBUFDS_ButtonEventField___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar9[3] = 0;
    local_res10 = this;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar9 + 3),(FObjectPtr)&local_res10);
    puVar9[4] = OnClickPartyInvite;
    puVar9[5] = (ulonglong)FVar7.ReferenceController & 0xffffffff00000000;
  }
  if (local_c8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_c8.Accessor,&local_c8);
  }
  pUVar1 = (this->VM_PartyMenuButton2).field0_0x0.DebugPtr;
  local_58.Object = (FDS_ViewModelContext *)local_248.Object;
  local_58.SharedReferenceCount.ReferenceController =
       local_248.SharedReferenceCount.ReferenceController;
  if (local_248.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_248.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_248.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)pUVar1,&local_58);
  iVar5 = FFieldNotificationClassDescriptor::StatePartyMenuButton2.BitNumber;
  FVar4 = FFieldNotificationClassDescriptor::StatePartyMenuButton2.FieldName;
  if (this->StatePartyMenuButton2 != true) {
    this->StatePartyMenuButton2 = true;
    local_280 = iVar5;
    local_288 = FVar4;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_288);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_248.SharedReferenceCount.ReferenceController);
  MakeContext<FDS_ViewModelContext_CommonIconTextButton>(&local_2b8);
  pFVar6 = local_2b8.Object;
  if (local_2b8.Object == (FDS_ViewModelContext_CommonIconTextButton *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar8) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  *(undefined4 *)&pFVar6->_padding_ = 0x15b;
  local_188.StringTableType = None;
  local_188.StringTableID = 0;
  local_188.StringEnumTableNameID.ComparisonIndex.Value = 0;
  local_188.StringEnumTableNameID.Number = 0;
  local_188.DateTime.Ticks = 0;
  local_188.TimeSpan.Ticks = 0;
  local_188.TimeExpressionType = None;
  local_188.IsExpression = false;
  local_188.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_188.UniqueString.Data.ArrayNum = 0;
  local_188.UniqueString.Data.ArrayMax = 0;
  local_188.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_188.FormatArgs.ArrayNum = 0;
  local_188.FormatArgs.ArrayMax = 0;
  FDS_Text::SetTextFromStringTable(&local_188,StringUi,0x41eee);
  FDS_Text::operator=(&pFVar6->DSText,&local_188);
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)local_188.FormatArgs.AllocatorInstance.Data,
             local_188.FormatArgs.ArrayNum);
  if ((FDS_TextFormatArg *)local_188.FormatArgs.AllocatorInstance.Data != (FDS_TextFormatArg *)0x0)
  {
    FMemory::Free(local_188.FormatArgs.AllocatorInstance.Data);
  }
  if (local_188.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_188.UniqueString.Data.AllocatorInstance.Data);
  }
  FVar7.ReferenceController = local_2a8.SharedReferenceCount.ReferenceController;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar6->OnClickDelegate,
             (FWriteAccessScope *)&local_a8);
  local_90 = &(pFVar6->OnClickDelegate).field_0x8;
  puVar9 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_90);
  if (puVar9 != (undefined8 *)0x0) {
    *puVar9 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBUFDS_ButtonEventField___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar10 = FDelegateHandle::GenerateNewID();
    puVar9[2] = uVar10;
    *puVar9 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_PartyMenu____A6AXAEBUFDS_ButtonEventField___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar9[3] = 0;
    local_res18 = this;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar9 + 3),(FObjectPtr)&local_res18);
    puVar9[4] = OnClickPartyKick;
    puVar9[5] = (ulonglong)FVar7.ReferenceController & 0xffffffff00000000;
  }
  if (local_a8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_a8.Accessor,&local_a8);
  }
  pTVar3 = (TReferenceControllerBase<1> *)
           CONCAT44(local_2b8.SharedReferenceCount.ReferenceController._4_4_,
                    local_2b8.SharedReferenceCount.ReferenceController._0_4_);
  pUVar1 = (this->VM_PartyMenuButton3).field0_0x0.DebugPtr;
  local_48.Object = (FDS_ViewModelContext *)local_2b8.Object;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)pUVar1,&local_48);
  FVar4 = FFieldNotificationClassDescriptor::StatePartyMenuButton3.FieldName;
  if ((this->bIsPartyLeader == true) && (0 < this->PlayerUID)) {
    bVar8 = true;
  }
  else {
    bVar8 = false;
  }
  if (this->StatePartyMenuButton3 != bVar8) {
    local_270 = FFieldNotificationClassDescriptor::StatePartyMenuButton3.BitNumber;
    this->StatePartyMenuButton3 = bVar8;
    local_278 = FVar4;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_278);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  MakeContext<FDS_ViewModelContext_CommonIconTextButton>(&local_238);
  pFVar6 = local_238.Object;
  if (local_238.Object == (FDS_ViewModelContext_CommonIconTextButton *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar8) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  *(undefined4 *)&pFVar6->_padding_ = 0x15b;
  local_138.StringTableType = None;
  local_138.StringTableID = 0;
  local_138.StringEnumTableNameID.ComparisonIndex.Value = 0;
  local_138.StringEnumTableNameID.Number = 0;
  local_138.DateTime.Ticks = 0;
  local_138.TimeSpan.Ticks = 0;
  local_138.TimeExpressionType = None;
  local_138.IsExpression = false;
  local_138.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_138.UniqueString.Data.ArrayNum = 0;
  local_138.UniqueString.Data.ArrayMax = 0;
  local_138.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_138.FormatArgs.ArrayNum = 0;
  local_138.FormatArgs.ArrayMax = 0;
  FDS_Text::SetTextFromStringTable(&local_138,StringUi,0x41ef2);
  FDS_Text::operator=(&pFVar6->DSText,&local_138);
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)local_138.FormatArgs.AllocatorInstance.Data,
             local_138.FormatArgs.ArrayNum);
  if ((FDS_TextFormatArg *)local_138.FormatArgs.AllocatorInstance.Data != (FDS_TextFormatArg *)0x0)
  {
    FMemory::Free(local_138.FormatArgs.AllocatorInstance.Data);
  }
  if (local_138.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_138.UniqueString.Data.AllocatorInstance.Data);
  }
  local_2b8.SharedReferenceCount.ReferenceController._0_4_ = 0;
  local_2b8.Object = (FDS_ViewModelContext_CommonIconTextButton *)OnClickPartyLeaderChange;
  local_2b8.SharedReferenceCount.ReferenceController._4_4_ =
       local_2a8.SharedReferenceCount.ReferenceController._4_4_;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar6->OnClickDelegate,
             (FWriteAccessScope *)&local_88);
  local_70 = &(pFVar6->OnClickDelegate).field_0x8;
  puVar9 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_70);
  if (puVar9 != (undefined8 *)0x0) {
    *puVar9 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBUFDS_ButtonEventField___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar10 = FDelegateHandle::GenerateNewID();
    puVar9[2] = uVar10;
    *puVar9 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_PartyMenu____A6AXAEBUFDS_ButtonEventField___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar9[3] = 0;
    local_res20 = this;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar9 + 3),(FObjectPtr)&local_res20);
    puVar9[4] = local_2b8.Object;
    puVar9[5] = CONCAT44(local_2b8.SharedReferenceCount.ReferenceController._4_4_,
                         local_2b8.SharedReferenceCount.ReferenceController._0_4_);
  }
  if (local_88.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_88.Accessor,&local_88);
  }
  pUVar1 = (this->VM_PartyMenuButton4).field0_0x0.DebugPtr;
  local_2a8.Object = (FDS_ViewModelContext *)local_238.Object;
  local_2a8.SharedReferenceCount.ReferenceController =
       local_238.SharedReferenceCount.ReferenceController;
  if (local_238.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_238.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_238.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)pUVar1,&local_2a8);
  FVar4 = FFieldNotificationClassDescriptor::StatePartyMenuButton4.FieldName;
  if ((this->bIsPartyLeader == true) && (0 < this->PlayerUID)) {
    bVar8 = true;
  }
  else {
    bVar8 = false;
  }
  if (this->StatePartyMenuButton4 != bVar8) {
    local_260 = FFieldNotificationClassDescriptor::StatePartyMenuButton4.BitNumber;
    this->StatePartyMenuButton4 = bVar8;
    local_268 = FVar4;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_268);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_238.SharedReferenceCount.ReferenceController);
  return;
}

// UpdatePartyMenu @ 14bf22fc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_PartyMenu::UpdatePartyMenu(UDS_VM_PartyMenu *this)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  UDS_LogManager *pUVar4;
  FDS_PartyRepo *pFVar5;
  long64 lVar6;
  UObject *pUVar7;
  FDS_PartyMemberInfo *pFVar8;
  undefined1 auStackY_278 [32];
  FWeakObjectPtr local_238 [2];
  undefined1 local_228 [200];
  undefined4 local_160;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_278;
  UDS_PlayerData::GetMainPlayerData();
  bVar2 = FWeakObjectPtr::IsValid(local_238);
  if (bVar2) {
    pFVar5 = TDS_Singleton<FDS_PartyRepo>::GetInst();
    local_228._0_4_ = (pFVar5->PartyInfo).PartyType;
    local_228._8_8_ = (pFVar5->PartyInfo).PartyUID;
    local_228._16_8_ = (pFVar5->PartyInfo).PartyLeaderUID;
    local_228._24_8_ = (FDS_PartyMemberInfo *)0x0;
    iVar3 = (pFVar5->PartyInfo).PartyMemberInfos.ArrayNum;
    pFVar8 = (FDS_PartyMemberInfo *)(pFVar5->PartyInfo).PartyMemberInfos.AllocatorInstance.Data;
    local_228._32_4_ = iVar3;
    if (iVar3 == 0) {
      local_228._36_4_ = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xa8,8,iVar3,0,(ForAnyElementType *)(local_228 + 0x18),iVar3,
                 (int *)(local_228 + 0x24));
      ConstructItems<FDS_PartyMemberInfo,FDS_PartyMemberInfo,int>
                ((void *)local_228._24_8_,pFVar8,iVar3);
    }
    local_228._40_4_ = (pFVar5->PartyInfo).MySlotIndex;
    local_228._44_4_ = (pFVar5->PartyInfo).PartyMemberCount;
    FDS_PartyMemberInfo::FDS_PartyMemberInfo
              ((FDS_PartyMemberInfo *)(local_228 + 0x30),&(pFVar5->PartyInfo).DefaultPartyMemberInfo
              );
    lVar6 = FDS_PartyInfo::GetPartyLeaderUID((FDS_PartyInfo *)local_228);
    pUVar7 = FWeakObjectPtr::Get(local_238);
    this->bIsPartyLeader = lVar6 == *(longlong *)&pUVar7[6].field_0x8;
    iVar3 = FDS_PartyInfo::GetPartyMemberCount((FDS_PartyInfo *)local_228);
    this->MemberCount = (longlong)iVar3;
    UpdatePartyMenuTitle(this);
    if (this->PartyMenuType == PartyMenu) {
      UpdatePartyManageMenu(this);
    }
    else {
      UpdatePartyMemberMenu(this);
    }
    local_160 = 0;
    if ((void *)local_228._192_8_ != (void *)0x0) {
      FMemory::Free((void *)local_228._192_8_);
    }
    TSparseArray<TSparseSetElement<TTuple<enum_EDS_StatusType,FDS_PartyMemberStat>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<enum_EDS_StatusType,FDS_PartyMemberStat>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (local_228 + 0x80);
    if ((FScriptContainerElement *)local_228._72_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_228._72_8_);
    }
    DestructItems<FDS_PartyMemberInfo,int>((FDS_PartyMemberInfo *)local_228._24_8_,local_228._32_4_)
    ;
    pFVar8 = (FDS_PartyMemberInfo *)local_228._24_8_;
  }
  else {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4174273084280275204>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\Party\\DS_VM_PartyMenu.cpp"
                       ,0x104,"myPlayerData.IsValid()");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar4 = UDS_LogManager::GetInst();
    local_148._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_148,"UDS_VM_PartyMenu::UpdatePartyMenu",0x21,Yes);
    UDS_LogManager::PrintLog(pUVar4,1,Warning,local_148.Ptr,0x106,L"myPlayerData is Invalid");
    pFVar8 = (FDS_PartyMemberInfo *)local_148._padding_;
  }
  if (pFVar8 != (FDS_PartyMemberInfo *)0x0) {
    FMemory::Free(pFVar8);
  }
  return;
}

// UpdatePartyMenuTitle @ 14bf23230

void __thiscall UDS_VM_PartyMenu::UpdatePartyMenuTitle(UDS_VM_PartyMenu *this)

{
  FName FVar1;
  ForAnyElementType FVar2;
  bool bVar3;
  FDS_RaidPartyRepo *pFVar4;
  FDS_RaidPartyMemberInfo *this_00;
  FDS_CharacterBaseTableRow *pFVar5;
  FDS_PartyRepo *pFVar6;
  FDS_PartyMemberInfo *this_01;
  int iVar7;
  FName local_98;
  int local_90;
  FString local_88;
  FDS_StringBaseID local_78;
  FDS_Text local_68;
  
  if ((this->PartyMenuType == PartyMenu) || (this->PlayerUID < 1)) {
    local_68.StringTableType = None;
    local_68.StringTableID = 0;
    local_68.StringEnumTableNameID.ComparisonIndex.Value = 0;
    local_68.StringEnumTableNameID.Number = 0;
    local_68.TimeExpressionType = None;
    local_68.IsExpression = false;
    local_68.DateTime.Ticks = 0;
    local_68.TimeSpan.Ticks = 0;
    local_68.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_68.UniqueString.Data.ArrayNum = 0;
    local_68.UniqueString.Data.ArrayMax = 0;
    local_68.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_68.FormatArgs.ArrayNum = 0;
    local_68.FormatArgs.ArrayMax = 0;
    FDS_Text::SetTextFromStringTable(&local_68,StringUi,0x41eea);
    FDS_Text::operator=(&this->MenuTitle,&local_68);
    local_90 = FFieldNotificationClassDescriptor::MenuTitle.BitNumber;
    local_98 = FFieldNotificationClassDescriptor::MenuTitle.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_98);
    DestructItems<FDS_TextFormatArg,int>
              ((FDS_TextFormatArg *)local_68.FormatArgs.AllocatorInstance.Data,
               local_68.FormatArgs.ArrayNum);
    if ((FDS_TextFormatArg *)local_68.FormatArgs.AllocatorInstance.Data != (FDS_TextFormatArg *)0x0)
    {
      FMemory::Free(local_68.FormatArgs.AllocatorInstance.Data);
    }
    if (local_68.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.UniqueString.Data.AllocatorInstance.Data);
    }
    iVar7 = FFieldNotificationClassDescriptor::MenuSubTitle.BitNumber;
    FVar1 = FFieldNotificationClassDescriptor::MenuSubTitle.FieldName;
    local_68.StringTableType = None;
    local_68.StringTableID = 0;
    local_68.StringEnumTableNameID.ComparisonIndex.Value = 0;
    local_68.StringEnumTableNameID.Number = 0;
    local_68.TimeExpressionType = None;
    local_68.IsExpression = false;
    local_68.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_68.UniqueString.Data.ArrayNum = 0;
    local_68.UniqueString.Data.ArrayMax = 0;
    local_68.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_68.FormatArgs.ArrayNum = 0;
    local_68.FormatArgs.ArrayMax = 0;
    local_68.DateTime.Ticks = 0;
    local_68.TimeSpan.Ticks = 0;
    FDS_Text::operator=(&this->MenuSubTitle,&local_68);
    local_98 = FVar1;
    local_90 = iVar7;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_98);
    FVar2.Data = local_68.FormatArgs.AllocatorInstance.Data;
    DestructItems<FDS_TextFormatArg,int>
              ((FDS_TextFormatArg *)local_68.FormatArgs.AllocatorInstance.Data,
               local_68.FormatArgs.ArrayNum);
    if ((FDS_TextFormatArg *)FVar2.Data != (FDS_TextFormatArg *)0x0) {
      FMemory::Free(FVar2.Data);
    }
    if (local_68.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.UniqueString.Data.AllocatorInstance.Data);
    }
    local_90 = FFieldNotificationClassDescriptor::MenuSubTitleVisibility.BitNumber;
    local_98 = FFieldNotificationClassDescriptor::MenuSubTitleVisibility.FieldName;
    if (this->MenuSubTitleVisibility == Collapsed) {
      return;
    }
    this->MenuSubTitleVisibility = Collapsed;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_98);
    return;
  }
  local_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.Data.ArrayNum = 0;
  local_88.Data.ArrayMax = 0;
  local_78._padding_ = (longlong)&___7FDS_StringBaseID__6B_;
  local_78.ID = 0;
  pFVar4 = TDS_Singleton<FDS_RaidPartyRepo>::GetInst();
  bVar3 = FDS_RaidPartyRepo::IsValidRaidPartyInfo(pFVar4);
  if (bVar3) {
    pFVar4 = TDS_Singleton<FDS_RaidPartyRepo>::GetInst();
    this_00 = FDS_RaidPartyRepo::GetRaidPartyMemberInfoByPlayerUID(pFVar4,this->PlayerUID);
    ::FString::operator=(&local_88,&this_00->NickName);
    iVar7 = (this_00->RaidPartyMemberSyncData).CharId;
    if ((iVar7 < 1) && (bVar3 = FDS_RaidPartyMemberInfo::IsValidCharInfo(this_00), bVar3)) {
      iVar7 = (this_00->CharInfo).CharId;
    }
    pFVar5 = FDS_CharacterBaseTableRow::Get((longlong)iVar7,true);
  }
  else {
    pFVar6 = TDS_Singleton<FDS_PartyRepo>::GetInst();
    bVar3 = FDS_PartyInfo::IsValid(&pFVar6->PartyInfo);
    if (!bVar3) goto LAB_14bf23348;
    this_01 = FDS_PartyInfo::GetPartyMemberInfo(&pFVar6->PartyInfo,this->PlayerUID);
    bVar3 = FDS_PartyMemberInfo::IsValid(this_01);
    if (!bVar3) goto LAB_14bf23348;
    ::FString::operator=(&local_88,&this_01->Nickname);
    pFVar5 = FDS_CharacterBaseTableRow::Get((longlong)this_01->CharID,true);
  }
  if (pFVar5 != (FDS_CharacterBaseTableRow *)0x0) {
    local_78.ID = (pFVar5->ID_Name).ID;
  }
LAB_14bf23348:
  local_68.StringTableType = None;
  local_68.StringTableID = 0;
  local_68.StringEnumTableNameID.ComparisonIndex.Value = 0;
  local_68.StringEnumTableNameID.Number = 0;
  local_68.DateTime.Ticks = 0;
  local_68.TimeSpan.Ticks = 0;
  local_68.TimeExpressionType = None;
  local_68.IsExpression = false;
  local_68.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.UniqueString.Data.ArrayNum = 0;
  local_68.UniqueString.Data.ArrayMax = 0;
  local_68.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.FormatArgs.ArrayNum = 0;
  local_68.FormatArgs.ArrayMax = 0;
  FDS_Text::SetTextFromUniqueString(&local_68,&local_88);
  FDS_Text::operator=(&this->MenuTitle,&local_68);
  local_90 = FFieldNotificationClassDescriptor::MenuTitle.BitNumber;
  local_98 = FFieldNotificationClassDescriptor::MenuTitle.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_98);
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)local_68.FormatArgs.AllocatorInstance.Data,
             local_68.FormatArgs.ArrayNum);
  if ((FDS_TextFormatArg *)local_68.FormatArgs.AllocatorInstance.Data != (FDS_TextFormatArg *)0x0) {
    FMemory::Free(local_68.FormatArgs.AllocatorInstance.Data);
  }
  if (local_68.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.UniqueString.Data.AllocatorInstance.Data);
  }
  local_68.StringTableType = None;
  local_68.StringTableID = 0;
  local_68.StringEnumTableNameID.ComparisonIndex.Value = 0;
  local_68.StringEnumTableNameID.Number = 0;
  local_68.DateTime.Ticks = 0;
  local_68.TimeSpan.Ticks = 0;
  local_68.TimeExpressionType = None;
  local_68.IsExpression = false;
  local_68.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.UniqueString.Data.ArrayNum = 0;
  local_68.UniqueString.Data.ArrayMax = 0;
  local_68.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.FormatArgs.ArrayNum = 0;
  local_68.FormatArgs.ArrayMax = 0;
  FDS_Text::SetTextFromStringID(&local_68,&local_78);
  iVar7 = FFieldNotificationClassDescriptor::MenuSubTitle.BitNumber;
  FVar1 = FFieldNotificationClassDescriptor::MenuSubTitle.FieldName;
  FDS_Text::operator=(&this->MenuSubTitle,&local_68);
  local_98 = FVar1;
  local_90 = iVar7;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_98);
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)local_68.FormatArgs.AllocatorInstance.Data,
             local_68.FormatArgs.ArrayNum);
  if ((FDS_TextFormatArg *)local_68.FormatArgs.AllocatorInstance.Data != (FDS_TextFormatArg *)0x0) {
    FMemory::Free(local_68.FormatArgs.AllocatorInstance.Data);
  }
  if (local_68.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.UniqueString.Data.AllocatorInstance.Data);
  }
  iVar7 = FFieldNotificationClassDescriptor::MenuSubTitleVisibility.BitNumber;
  FVar1 = FFieldNotificationClassDescriptor::MenuSubTitleVisibility.FieldName;
  if (this->MenuSubTitleVisibility != SelfHitTestInvisible) {
    this->MenuSubTitleVisibility = SelfHitTestInvisible;
    local_90 = iVar7;
    local_98 = FVar1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_98);
  }
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  return;
}

// UpdateRaidPartyManageMenu @ 14bf24230

void __thiscall UDS_VM_PartyMenu::UpdateRaidPartyManageMenu(UDS_VM_PartyMenu *this)

{
  UDS_VM_CommonIconTextButton *pUVar1;
  code *pcVar2;
  TReferenceControllerBase<1> *pTVar3;
  FName FVar4;
  int iVar5;
  FDS_ViewModelContext_CommonIconTextButton *pFVar6;
  FSharedReferencer<1> FVar7;
  bool bVar8;
  undefined8 *puVar9;
  ulong64 uVar10;
  UDS_VM_PartyMenu *local_res8;
  UDS_VM_PartyMenu *local_res10;
  UDS_VM_PartyMenu *local_res18;
  UDS_VM_PartyMenu *local_res20;
  TSharedPtr<FDS_ViewModelContext_CommonIconTextButton,1> local_2b8;
  TSharedPtr<FDS_ViewModelContext,1> local_2a8;
  FName local_298;
  int local_290;
  FName local_288;
  int local_280;
  FName local_278;
  int local_270;
  FName local_268;
  int local_260;
  TSharedPtr<FDS_ViewModelContext_CommonIconTextButton,1> local_258;
  TSharedPtr<FDS_ViewModelContext_CommonIconTextButton,1> local_248;
  TSharedPtr<FDS_ViewModelContext_CommonIconTextButton,1> local_238;
  FDS_Text local_228;
  FDS_Text local_1d8;
  FDS_Text local_188;
  FDS_Text local_138;
  FDestructionSentinel local_e8;
  undefined1 *local_d0;
  FDestructionSentinel local_c8;
  undefined1 *local_b0;
  FDestructionSentinel local_a8;
  undefined1 *local_90;
  FDestructionSentinel local_88;
  undefined1 *local_70;
  TSharedPtr<FDS_ViewModelContext,1> local_68;
  TSharedPtr<FDS_ViewModelContext,1> local_58;
  TSharedPtr<FDS_ViewModelContext,1> local_48;
  
  MakeContext<FDS_ViewModelContext_CommonIconTextButton>(&local_258);
  pFVar6 = local_258.Object;
  if (local_258.Object == (FDS_ViewModelContext_CommonIconTextButton *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar8) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  *(undefined4 *)&pFVar6->_padding_ = 0x15b;
  local_228.StringTableID = 0;
  local_228.StringEnumTableNameID.ComparisonIndex.Value = 0;
  local_228.StringEnumTableNameID.Number = 0;
  local_228.TimeExpressionType = None;
  local_228.IsExpression = false;
  local_228.DateTime.Ticks = 0;
  local_228.TimeSpan.Ticks = 0;
  local_228.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_228.UniqueString.Data.ArrayNum = 0;
  local_228.UniqueString.Data.ArrayMax = 0;
  local_228.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_228.FormatArgs.ArrayNum = 0;
  local_228.FormatArgs.ArrayMax = 0;
  local_228.StringTableType = None;
  FDS_Text::SetTextFromStringTable(&local_228,StringUi,0x41eeb);
  FDS_Text::operator=(&pFVar6->DSText,&local_228);
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)local_228.FormatArgs.AllocatorInstance.Data,
             local_228.FormatArgs.ArrayNum);
  if ((FDS_TextFormatArg *)local_228.FormatArgs.AllocatorInstance.Data != (FDS_TextFormatArg *)0x0)
  {
    FMemory::Free(local_228.FormatArgs.AllocatorInstance.Data);
  }
  if (local_228.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_228.UniqueString.Data.AllocatorInstance.Data);
  }
  FVar7.ReferenceController = local_2a8.SharedReferenceCount.ReferenceController;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar6->OnClickDelegate,
             (FWriteAccessScope *)&local_e8);
  local_d0 = &(pFVar6->OnClickDelegate).field_0x8;
  puVar9 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_d0);
  if (puVar9 != (undefined8 *)0x0) {
    *puVar9 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBUFDS_ButtonEventField___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar10 = FDelegateHandle::GenerateNewID();
    puVar9[2] = uVar10;
    *puVar9 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_PartyMenu____A6AXAEBUFDS_ButtonEventField___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UDS_VM_PartyMenu *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar9[3] = 0;
    local_res8 = this;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UDS_VM_PartyMenu *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar9 + 3),(FObjectPtr)&local_res8);
    puVar9[4] = OnClickPartyInviteLink;
    puVar9[5] = (ulonglong)FVar7.ReferenceController & 0xffffffff00000000;
  }
  if (local_e8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_e8.Accessor,&local_e8);
  }
  pUVar1 = (this->VM_PartyMenuButton1).field0_0x0.DebugPtr;
  local_68.Object = (FDS_ViewModelContext *)local_258.Object;
  local_68.SharedReferenceCount.ReferenceController =
       local_258.SharedReferenceCount.ReferenceController;
  if (local_258.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_258.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_258.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)pUVar1,&local_68);
  iVar5 = FFieldNotificationClassDescriptor::StatePartyMenuButton1.BitNumber;
  FVar4 = FFieldNotificationClassDescriptor::StatePartyMenuButton1.FieldName;
  if (this->StatePartyMenuButton1 != false) {
    this->StatePartyMenuButton1 = false;
    local_290 = iVar5;
    local_298 = FVar4;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_298);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_258.SharedReferenceCount.ReferenceController);
  MakeContext<FDS_ViewModelContext_CommonIconTextButton>(&local_248);
  pFVar6 = local_248.Object;
  if (local_248.Object == (FDS_ViewModelContext_CommonIconTextButton *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar8) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  *(undefined4 *)&pFVar6->_padding_ = 0x15b;
  local_1d8.StringTableType = None;
  local_1d8.StringTableID = 0;
  local_1d8.StringEnumTableNameID.ComparisonIndex.Value = 0;
  local_1d8.StringEnumTableNameID.Number = 0;
  local_1d8.DateTime.Ticks = 0;
  local_1d8.TimeSpan.Ticks = 0;
  local_1d8.TimeExpressionType = None;
  local_1d8.IsExpression = false;
  local_1d8.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1d8.UniqueString.Data.ArrayNum = 0;
  local_1d8.UniqueString.Data.ArrayMax = 0;
  local_1d8.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1d8.FormatArgs.ArrayNum = 0;
  local_1d8.FormatArgs.ArrayMax = 0;
  FDS_Text::SetTextFromStringTable(&local_1d8,StringUi,0x41eec);
  FDS_Text::operator=(&pFVar6->DSText,&local_1d8);
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)local_1d8.FormatArgs.AllocatorInstance.Data,
             local_1d8.FormatArgs.ArrayNum);
  if ((FDS_TextFormatArg *)local_1d8.FormatArgs.AllocatorInstance.Data != (FDS_TextFormatArg *)0x0)
  {
    FMemory::Free(local_1d8.FormatArgs.AllocatorInstance.Data);
  }
  if (local_1d8.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1d8.UniqueString.Data.AllocatorInstance.Data);
  }
  FVar7.ReferenceController = local_2a8.SharedReferenceCount.ReferenceController;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar6->OnClickDelegate,
             (FWriteAccessScope *)&local_c8);
  local_b0 = &(pFVar6->OnClickDelegate).field_0x8;
  puVar9 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_b0);
  if (puVar9 != (undefined8 *)0x0) {
    *puVar9 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBUFDS_ButtonEventField___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar10 = FDelegateHandle::GenerateNewID();
    puVar9[2] = uVar10;
    *puVar9 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_PartyMenu____A6AXAEBUFDS_ButtonEventField___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar9[3] = 0;
    local_res10 = this;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar9 + 3),(FObjectPtr)&local_res10);
    puVar9[4] = OnClickPartyInvite;
    puVar9[5] = (ulonglong)FVar7.ReferenceController & 0xffffffff00000000;
  }
  if (local_c8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_c8.Accessor,&local_c8);
  }
  pUVar1 = (this->VM_PartyMenuButton2).field0_0x0.DebugPtr;
  local_58.Object = (FDS_ViewModelContext *)local_248.Object;
  local_58.SharedReferenceCount.ReferenceController =
       local_248.SharedReferenceCount.ReferenceController;
  if (local_248.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_248.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_248.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)pUVar1,&local_58);
  iVar5 = FFieldNotificationClassDescriptor::StatePartyMenuButton2.BitNumber;
  FVar4 = FFieldNotificationClassDescriptor::StatePartyMenuButton2.FieldName;
  if (this->StatePartyMenuButton2 != false) {
    this->StatePartyMenuButton2 = false;
    local_280 = iVar5;
    local_288 = FVar4;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_288);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_248.SharedReferenceCount.ReferenceController);
  MakeContext<FDS_ViewModelContext_CommonIconTextButton>(&local_2b8);
  pFVar6 = local_2b8.Object;
  if (local_2b8.Object == (FDS_ViewModelContext_CommonIconTextButton *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar8) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  *(undefined4 *)&pFVar6->_padding_ = 0x15b;
  local_188.StringTableType = None;
  local_188.StringTableID = 0;
  local_188.StringEnumTableNameID.ComparisonIndex.Value = 0;
  local_188.StringEnumTableNameID.Number = 0;
  local_188.DateTime.Ticks = 0;
  local_188.TimeSpan.Ticks = 0;
  local_188.TimeExpressionType = None;
  local_188.IsExpression = false;
  local_188.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_188.UniqueString.Data.ArrayNum = 0;
  local_188.UniqueString.Data.ArrayMax = 0;
  local_188.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_188.FormatArgs.ArrayNum = 0;
  local_188.FormatArgs.ArrayMax = 0;
  FDS_Text::SetTextFromStringTable(&local_188,StringUi,0x41eed);
  FDS_Text::operator=(&pFVar6->DSText,&local_188);
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)local_188.FormatArgs.AllocatorInstance.Data,
             local_188.FormatArgs.ArrayNum);
  if ((FDS_TextFormatArg *)local_188.FormatArgs.AllocatorInstance.Data != (FDS_TextFormatArg *)0x0)
  {
    FMemory::Free(local_188.FormatArgs.AllocatorInstance.Data);
  }
  if (local_188.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_188.UniqueString.Data.AllocatorInstance.Data);
  }
  FVar7.ReferenceController = local_2a8.SharedReferenceCount.ReferenceController;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar6->OnClickDelegate,
             (FWriteAccessScope *)&local_a8);
  local_90 = &(pFVar6->OnClickDelegate).field_0x8;
  puVar9 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_90);
  if (puVar9 != (undefined8 *)0x0) {
    *puVar9 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBUFDS_ButtonEventField___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar10 = FDelegateHandle::GenerateNewID();
    puVar9[2] = uVar10;
    *puVar9 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_PartyMenu____A6AXAEBUFDS_ButtonEventField___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar9[3] = 0;
    local_res18 = this;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar9 + 3),(FObjectPtr)&local_res18);
    puVar9[4] = OnClickPartyLeave;
    puVar9[5] = (ulonglong)FVar7.ReferenceController & 0xffffffff00000000;
  }
  if (local_a8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_a8.Accessor,&local_a8);
  }
  pTVar3 = (TReferenceControllerBase<1> *)
           CONCAT44(local_2b8.SharedReferenceCount.ReferenceController._4_4_,
                    local_2b8.SharedReferenceCount.ReferenceController._0_4_);
  pUVar1 = (this->VM_PartyMenuButton3).field0_0x0.DebugPtr;
  local_48.Object = (FDS_ViewModelContext *)local_2b8.Object;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)pUVar1,&local_48);
  iVar5 = FFieldNotificationClassDescriptor::StatePartyMenuButton3.BitNumber;
  FVar4 = FFieldNotificationClassDescriptor::StatePartyMenuButton3.FieldName;
  if (this->StatePartyMenuButton3 != true) {
    this->StatePartyMenuButton3 = true;
    local_270 = iVar5;
    local_278 = FVar4;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_278);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  MakeContext<FDS_ViewModelContext_CommonIconTextButton>(&local_238);
  pFVar6 = local_238.Object;
  if (local_238.Object == (FDS_ViewModelContext_CommonIconTextButton *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar8) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  *(undefined4 *)&pFVar6->_padding_ = 0x15b;
  local_138.StringTableType = None;
  local_138.StringTableID = 0;
  local_138.StringEnumTableNameID.ComparisonIndex.Value = 0;
  local_138.StringEnumTableNameID.Number = 0;
  local_138.DateTime.Ticks = 0;
  local_138.TimeSpan.Ticks = 0;
  local_138.TimeExpressionType = None;
  local_138.IsExpression = false;
  local_138.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_138.UniqueString.Data.ArrayNum = 0;
  local_138.UniqueString.Data.ArrayMax = 0;
  local_138.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_138.FormatArgs.ArrayNum = 0;
  local_138.FormatArgs.ArrayMax = 0;
  FDS_Text::SetTextFromStringTable(&local_138,StringUi,0x41eef);
  FDS_Text::operator=(&pFVar6->DSText,&local_138);
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)local_138.FormatArgs.AllocatorInstance.Data,
             local_138.FormatArgs.ArrayNum);
  if ((FDS_TextFormatArg *)local_138.FormatArgs.AllocatorInstance.Data != (FDS_TextFormatArg *)0x0)
  {
    FMemory::Free(local_138.FormatArgs.AllocatorInstance.Data);
  }
  if (local_138.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_138.UniqueString.Data.AllocatorInstance.Data);
  }
  local_2b8.SharedReferenceCount.ReferenceController._0_4_ = 0;
  local_2b8.Object = (FDS_ViewModelContext_CommonIconTextButton *)OnClickPartyInfo;
  local_2b8.SharedReferenceCount.ReferenceController._4_4_ =
       local_2a8.SharedReferenceCount.ReferenceController._4_4_;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar6->OnClickDelegate,
             (FWriteAccessScope *)&local_88);
  local_70 = &(pFVar6->OnClickDelegate).field_0x8;
  puVar9 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_70);
  if (puVar9 != (undefined8 *)0x0) {
    *puVar9 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBUFDS_ButtonEventField___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar10 = FDelegateHandle::GenerateNewID();
    puVar9[2] = uVar10;
    *puVar9 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_PartyMenu____A6AXAEBUFDS_ButtonEventField___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar9[3] = 0;
    local_res20 = this;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar9 + 3),(FObjectPtr)&local_res20);
    puVar9[4] = local_2b8.Object;
    puVar9[5] = CONCAT44(local_2b8.SharedReferenceCount.ReferenceController._4_4_,
                         local_2b8.SharedReferenceCount.ReferenceController._0_4_);
  }
  if (local_88.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_88.Accessor,&local_88);
  }
  pUVar1 = (this->VM_PartyMenuButton4).field0_0x0.DebugPtr;
  local_2a8.Object = (FDS_ViewModelContext *)local_238.Object;
  local_2a8.SharedReferenceCount.ReferenceController =
       local_238.SharedReferenceCount.ReferenceController;
  if (local_238.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_238.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_238.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)pUVar1,&local_2a8);
  iVar5 = FFieldNotificationClassDescriptor::StatePartyMenuButton4.BitNumber;
  FVar4 = FFieldNotificationClassDescriptor::StatePartyMenuButton4.FieldName;
  if (this->StatePartyMenuButton4 != true) {
    this->StatePartyMenuButton4 = true;
    local_260 = iVar5;
    local_268 = FVar4;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_268);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_238.SharedReferenceCount.ReferenceController);
  return;
}

// UpdateRaidPartyMemberMenu @ 14bf24a80

void __thiscall UDS_VM_PartyMenu::UpdateRaidPartyMemberMenu(UDS_VM_PartyMenu *this)

{
  UDS_VM_CommonIconTextButton *pUVar1;
  code *pcVar2;
  TReferenceControllerBase<1> *pTVar3;
  FName FVar4;
  FDS_ViewModelContext_CommonIconTextButton *pFVar5;
  FSharedReferencer<1> FVar6;
  bool bVar7;
  int iVar8;
  undefined8 *puVar9;
  ulong64 uVar10;
  FDS_RaidPartyRepo *pFVar11;
  FDS_DungeonBaseTableRow *pFVar12;
  UDS_VM_PartyMenu *local_res8;
  UDS_VM_PartyMenu *local_res10;
  UDS_VM_PartyMenu *local_res18;
  UDS_VM_PartyMenu *local_res20;
  TSharedPtr<FDS_ViewModelContext_CommonIconTextButton,1> local_2c8;
  TSharedPtr<FDS_ViewModelContext,1> local_2b8;
  FName local_2a8;
  int local_2a0;
  FName local_298;
  int local_290;
  FName local_288;
  int local_280;
  FName local_278;
  int local_270;
  TSharedPtr<FDS_ViewModelContext_CommonIconTextButton,1> local_268;
  TSharedPtr<FDS_ViewModelContext_CommonIconTextButton,1> local_258;
  TSharedPtr<FDS_ViewModelContext_CommonIconTextButton,1> local_248;
  FDS_Text local_238;
  FDS_Text local_1e8;
  FDS_Text local_198;
  FDS_Text local_148;
  FDestructionSentinel local_f8;
  undefined1 *local_e0;
  FDestructionSentinel local_d8;
  undefined1 *local_c0;
  FDestructionSentinel local_b8;
  undefined1 *local_a0;
  FDestructionSentinel local_98;
  undefined1 *local_80;
  TSharedPtr<FDS_ViewModelContext,1> local_78;
  TSharedPtr<FDS_ViewModelContext,1> local_68;
  TSharedPtr<FDS_ViewModelContext,1> local_58;
  
  MakeContext<FDS_ViewModelContext_CommonIconTextButton>(&local_268);
  pFVar5 = local_268.Object;
  if (local_268.Object == (FDS_ViewModelContext_CommonIconTextButton *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar7) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  *(undefined4 *)&pFVar5->_padding_ = 0x15b;
  local_238.StringTableID = 0;
  local_238.StringEnumTableNameID.ComparisonIndex.Value = 0;
  local_238.StringEnumTableNameID.Number = 0;
  local_238.TimeExpressionType = None;
  local_238.IsExpression = false;
  local_238.DateTime.Ticks = 0;
  local_238.TimeSpan.Ticks = 0;
  local_238.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_238.UniqueString.Data.ArrayNum = 0;
  local_238.UniqueString.Data.ArrayMax = 0;
  local_238.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_238.FormatArgs.ArrayNum = 0;
  local_238.FormatArgs.ArrayMax = 0;
  local_238.StringTableType = None;
  FDS_Text::SetTextFromStringTable(&local_238,StringUi,0x41ef0);
  FDS_Text::operator=(&pFVar5->DSText,&local_238);
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)local_238.FormatArgs.AllocatorInstance.Data,
             local_238.FormatArgs.ArrayNum);
  if ((FDS_TextFormatArg *)local_238.FormatArgs.AllocatorInstance.Data != (FDS_TextFormatArg *)0x0)
  {
    FMemory::Free(local_238.FormatArgs.AllocatorInstance.Data);
  }
  if (local_238.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_238.UniqueString.Data.AllocatorInstance.Data);
  }
  FVar6.ReferenceController = local_2b8.SharedReferenceCount.ReferenceController;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar5->OnClickDelegate,
             (FWriteAccessScope *)&local_f8);
  local_e0 = &(pFVar5->OnClickDelegate).field_0x8;
  puVar9 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_e0);
  if (puVar9 != (undefined8 *)0x0) {
    *puVar9 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBUFDS_ButtonEventField___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar10 = FDelegateHandle::GenerateNewID();
    puVar9[2] = uVar10;
    *puVar9 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_PartyMenu____A6AXAEBUFDS_ButtonEventField___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UDS_VM_PartyMenu *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar9[3] = 0;
    local_res8 = this;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UDS_VM_PartyMenu *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar9 + 3),(FObjectPtr)&local_res8);
    puVar9[4] = OnClickPartyMemberInfo;
    puVar9[5] = (ulonglong)FVar6.ReferenceController & 0xffffffff00000000;
  }
  if (local_f8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_f8.Accessor,&local_f8);
  }
  pUVar1 = (this->VM_PartyMenuButton1).field0_0x0.DebugPtr;
  local_78.Object = (FDS_ViewModelContext *)local_268.Object;
  local_78.SharedReferenceCount.ReferenceController =
       local_268.SharedReferenceCount.ReferenceController;
  if (local_268.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_268.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_268.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)pUVar1,&local_78);
  iVar8 = FFieldNotificationClassDescriptor::StatePartyMenuButton1.BitNumber;
  FVar4 = FFieldNotificationClassDescriptor::StatePartyMenuButton1.FieldName;
  if (this->StatePartyMenuButton1 != true) {
    this->StatePartyMenuButton1 = true;
    local_2a0 = iVar8;
    local_2a8 = FVar4;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_2a8);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_268.SharedReferenceCount.ReferenceController);
  MakeContext<FDS_ViewModelContext_CommonIconTextButton>(&local_258);
  pFVar5 = local_258.Object;
  if (local_258.Object == (FDS_ViewModelContext_CommonIconTextButton *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar7) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  *(undefined4 *)&pFVar5->_padding_ = 0x15b;
  local_1e8.StringTableType = None;
  local_1e8.StringTableID = 0;
  local_1e8.StringEnumTableNameID.ComparisonIndex.Value = 0;
  local_1e8.StringEnumTableNameID.Number = 0;
  local_1e8.DateTime.Ticks = 0;
  local_1e8.TimeSpan.Ticks = 0;
  local_1e8.TimeExpressionType = None;
  local_1e8.IsExpression = false;
  local_1e8.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1e8.UniqueString.Data.ArrayNum = 0;
  local_1e8.UniqueString.Data.ArrayMax = 0;
  local_1e8.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1e8.FormatArgs.ArrayNum = 0;
  local_1e8.FormatArgs.ArrayMax = 0;
  FDS_Text::SetTextFromStringTable(&local_1e8,StringUi,0x41eec);
  FDS_Text::operator=(&pFVar5->DSText,&local_1e8);
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)local_1e8.FormatArgs.AllocatorInstance.Data,
             local_1e8.FormatArgs.ArrayNum);
  if ((FDS_TextFormatArg *)local_1e8.FormatArgs.AllocatorInstance.Data != (FDS_TextFormatArg *)0x0)
  {
    FMemory::Free(local_1e8.FormatArgs.AllocatorInstance.Data);
  }
  if (local_1e8.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1e8.UniqueString.Data.AllocatorInstance.Data);
  }
  FVar6.ReferenceController = local_2b8.SharedReferenceCount.ReferenceController;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar5->OnClickDelegate,
             (FWriteAccessScope *)&local_d8);
  local_c0 = &(pFVar5->OnClickDelegate).field_0x8;
  puVar9 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_c0);
  if (puVar9 != (undefined8 *)0x0) {
    *puVar9 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBUFDS_ButtonEventField___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar10 = FDelegateHandle::GenerateNewID();
    puVar9[2] = uVar10;
    *puVar9 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_PartyMenu____A6AXAEBUFDS_ButtonEventField___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar9[3] = 0;
    local_res10 = this;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar9 + 3),(FObjectPtr)&local_res10);
    puVar9[4] = OnClickPartyInvite;
    puVar9[5] = (ulonglong)FVar6.ReferenceController & 0xffffffff00000000;
  }
  if (local_d8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_d8.Accessor,&local_d8);
  }
  pUVar1 = (this->VM_PartyMenuButton2).field0_0x0.DebugPtr;
  local_68.Object = (FDS_ViewModelContext *)local_258.Object;
  local_68.SharedReferenceCount.ReferenceController =
       local_258.SharedReferenceCount.ReferenceController;
  if (local_258.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_258.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_258.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)pUVar1,&local_68);
  iVar8 = FFieldNotificationClassDescriptor::StatePartyMenuButton2.BitNumber;
  FVar4 = FFieldNotificationClassDescriptor::StatePartyMenuButton2.FieldName;
  if (this->StatePartyMenuButton2 != false) {
    this->StatePartyMenuButton2 = false;
    local_290 = iVar8;
    local_298 = FVar4;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_298);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_258.SharedReferenceCount.ReferenceController);
  MakeContext<FDS_ViewModelContext_CommonIconTextButton>(&local_2c8);
  pFVar5 = local_2c8.Object;
  if (local_2c8.Object == (FDS_ViewModelContext_CommonIconTextButton *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar7) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  *(undefined4 *)&pFVar5->_padding_ = 0x15b;
  local_198.StringTableType = None;
  local_198.StringTableID = 0;
  local_198.StringEnumTableNameID.ComparisonIndex.Value = 0;
  local_198.StringEnumTableNameID.Number = 0;
  local_198.DateTime.Ticks = 0;
  local_198.TimeSpan.Ticks = 0;
  local_198.TimeExpressionType = None;
  local_198.IsExpression = false;
  local_198.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_198.UniqueString.Data.ArrayNum = 0;
  local_198.UniqueString.Data.ArrayMax = 0;
  local_198.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_198.FormatArgs.ArrayNum = 0;
  local_198.FormatArgs.ArrayMax = 0;
  FDS_Text::SetTextFromStringTable(&local_198,StringUi,0x41eee);
  FDS_Text::operator=(&pFVar5->DSText,&local_198);
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)local_198.FormatArgs.AllocatorInstance.Data,
             local_198.FormatArgs.ArrayNum);
  if ((FDS_TextFormatArg *)local_198.FormatArgs.AllocatorInstance.Data != (FDS_TextFormatArg *)0x0)
  {
    FMemory::Free(local_198.FormatArgs.AllocatorInstance.Data);
  }
  if (local_198.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_198.UniqueString.Data.AllocatorInstance.Data);
  }
  FVar6.ReferenceController = local_2b8.SharedReferenceCount.ReferenceController;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar5->OnClickDelegate,
             (FWriteAccessScope *)&local_b8);
  local_a0 = &(pFVar5->OnClickDelegate).field_0x8;
  puVar9 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_a0);
  if (puVar9 != (undefined8 *)0x0) {
    *puVar9 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBUFDS_ButtonEventField___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar10 = FDelegateHandle::GenerateNewID();
    puVar9[2] = uVar10;
    *puVar9 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_PartyMenu____A6AXAEBUFDS_ButtonEventField___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar9[3] = 0;
    local_res18 = this;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar9 + 3),(FObjectPtr)&local_res18);
    puVar9[4] = OnClickPartyKick;
    puVar9[5] = (ulonglong)FVar6.ReferenceController & 0xffffffff00000000;
  }
  if (local_b8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_b8.Accessor,&local_b8);
  }
  pTVar3 = (TReferenceControllerBase<1> *)
           CONCAT44(local_2c8.SharedReferenceCount.ReferenceController._4_4_,
                    local_2c8.SharedReferenceCount.ReferenceController._0_4_);
  pUVar1 = (this->VM_PartyMenuButton3).field0_0x0.DebugPtr;
  local_58.Object = (FDS_ViewModelContext *)local_2c8.Object;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)pUVar1,&local_58);
  iVar8 = DS_CommonDataHelper::RequiredVotesForKick4();
  pFVar11 = TDS_Singleton<FDS_RaidPartyRepo>::GetInst();
  pFVar12 = FDS_DungeonBaseTableRow::Get((longlong)(pFVar11->RaidPartyInfo).DungeonId,true);
  if ((pFVar12 != (FDS_DungeonBaseTableRow *)0x0) && (pFVar12->DungeonType == Raid)) {
    iVar8 = DS_CommonDataHelper::RequiredVotesForKick12();
  }
  FVar4 = FFieldNotificationClassDescriptor::StatePartyMenuButton3.FieldName;
  if ((this->PlayerUID < 1) || ((pFVar11->RaidPartyInfo).MemberCount < iVar8)) {
    bVar7 = false;
  }
  else {
    bVar7 = true;
  }
  if (this->StatePartyMenuButton3 != bVar7) {
    local_280 = FFieldNotificationClassDescriptor::StatePartyMenuButton3.BitNumber;
    this->StatePartyMenuButton3 = bVar7;
    local_288 = FVar4;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_288);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  MakeContext<FDS_ViewModelContext_CommonIconTextButton>(&local_248);
  pFVar5 = local_248.Object;
  if (local_248.Object == (FDS_ViewModelContext_CommonIconTextButton *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar7) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  *(undefined4 *)&pFVar5->_padding_ = 0x15b;
  local_148.StringTableType = None;
  local_148.StringTableID = 0;
  local_148.StringEnumTableNameID.ComparisonIndex.Value = 0;
  local_148.StringEnumTableNameID.Number = 0;
  local_148.DateTime.Ticks = 0;
  local_148.TimeSpan.Ticks = 0;
  local_148.TimeExpressionType = None;
  local_148.IsExpression = false;
  local_148.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_148.UniqueString.Data.ArrayNum = 0;
  local_148.UniqueString.Data.ArrayMax = 0;
  local_148.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_148.FormatArgs.ArrayNum = 0;
  local_148.FormatArgs.ArrayMax = 0;
  FDS_Text::SetTextFromStringTable(&local_148,StringUi,0x41ef2);
  FDS_Text::operator=(&pFVar5->DSText,&local_148);
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)local_148.FormatArgs.AllocatorInstance.Data,
             local_148.FormatArgs.ArrayNum);
  if ((FDS_TextFormatArg *)local_148.FormatArgs.AllocatorInstance.Data != (FDS_TextFormatArg *)0x0)
  {
    FMemory::Free(local_148.FormatArgs.AllocatorInstance.Data);
  }
  if (local_148.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_148.UniqueString.Data.AllocatorInstance.Data);
  }
  local_2c8.SharedReferenceCount.ReferenceController._0_4_ = 0;
  local_2c8.Object = (FDS_ViewModelContext_CommonIconTextButton *)OnClickPartyLeaderChange;
  local_2c8.SharedReferenceCount.ReferenceController._4_4_ =
       local_2b8.SharedReferenceCount.ReferenceController._4_4_;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar5->OnClickDelegate,
             (FWriteAccessScope *)&local_98);
  local_80 = &(pFVar5->OnClickDelegate).field_0x8;
  puVar9 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_80);
  if (puVar9 != (undefined8 *)0x0) {
    *puVar9 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBUFDS_ButtonEventField___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar10 = FDelegateHandle::GenerateNewID();
    puVar9[2] = uVar10;
    *puVar9 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_PartyMenu____A6AXAEBUFDS_ButtonEventField___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar9[3] = 0;
    local_res20 = this;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar9 + 3),(FObjectPtr)&local_res20);
    puVar9[4] = local_2c8.Object;
    puVar9[5] = CONCAT44(local_2c8.SharedReferenceCount.ReferenceController._4_4_,
                         local_2c8.SharedReferenceCount.ReferenceController._0_4_);
  }
  if (local_98.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_98.Accessor,&local_98);
  }
  pUVar1 = (this->VM_PartyMenuButton4).field0_0x0.DebugPtr;
  local_2b8.Object = (FDS_ViewModelContext *)local_248.Object;
  local_2b8.SharedReferenceCount.ReferenceController =
       local_248.SharedReferenceCount.ReferenceController;
  if (local_248.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_248.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_248.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)pUVar1,&local_2b8);
  FVar4 = FFieldNotificationClassDescriptor::StatePartyMenuButton4.FieldName;
  if ((this->bIsPartyLeader == true) && (0 < this->PlayerUID)) {
    bVar7 = true;
  }
  else {
    bVar7 = false;
  }
  if (this->StatePartyMenuButton4 != bVar7) {
    local_270 = FFieldNotificationClassDescriptor::StatePartyMenuButton4.BitNumber;
    this->StatePartyMenuButton4 = bVar7;
    local_278 = FVar4;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_278);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_248.SharedReferenceCount.ReferenceController);
  return;
}

// UpdateRaidPartyMenu @ 14bf25300

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_PartyMenu::UpdateRaidPartyMenu(UDS_VM_PartyMenu *this)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  UDS_LogManager *pUVar4;
  FDS_RaidPartyRepo *pFVar5;
  UObject *pUVar6;
  undefined1 auStackY_178 [32];
  FWeakObjectPtr local_148 [2];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  UDS_PlayerData::GetMainPlayerData();
  bVar3 = FWeakObjectPtr::IsValid(local_148);
  if (bVar3) {
    pFVar5 = TDS_Singleton<FDS_RaidPartyRepo>::GetInst();
    bVar3 = FDS_RaidPartyRepo::IsValidRaidPartyInfo(pFVar5);
    if (bVar3) {
      pFVar5 = TDS_Singleton<FDS_RaidPartyRepo>::GetInst();
      lVar1 = (pFVar5->RaidPartyInfo).LeaderUID;
      pUVar6 = FWeakObjectPtr::Get(local_148);
      this->bIsPartyLeader = lVar1 == *(longlong *)&pUVar6[6].field_0x8;
      this->MemberCount = (longlong)(pFVar5->RaidPartyInfo).MemberCount;
      UpdatePartyMenuTitle(this);
      if (this->PartyMenuType == PartyMenu) {
        UpdateRaidPartyManageMenu(this);
      }
      else {
        UpdateRaidPartyMemberMenu(this);
      }
    }
    else {
      FDS_PartyService::ClosePartyMenuPopup();
    }
  }
  else {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4174273084280275231>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\Party\\DS_VM_PartyMenu.cpp"
                       ,0x11f,"myPlayerData.IsValid()");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 != (UDS_LogManager *)0x0) {
      pUVar4 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_VM_PartyMenu::UpdateRaidPartyMenu",0x25,Yes);
      UDS_LogManager::PrintLog(pUVar4,1,Warning,local_138.Ptr,0x121,L"myPlayerData is Invalid");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  return;
}

