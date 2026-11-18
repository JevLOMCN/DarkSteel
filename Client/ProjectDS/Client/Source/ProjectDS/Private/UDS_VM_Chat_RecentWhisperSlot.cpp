// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 15

// SetWhisperNickname_WrapperImpl @ 14b610830

void __cdecl
UDS_VM_Chat_RecentWhisperSlot::SetWhisperNickname_WrapperImpl(void *param_1,void *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  FName FVar3;
  int iVar4;
  bool bVar5;
  undefined1 auStackX_8 [8];
  FName FStack_28;
  int iStack_20;
  
  iVar4 = FFieldNotificationClassDescriptor::WhisperNickname.BitNumber;
  FVar3 = FFieldNotificationClassDescriptor::WhisperNickname.FieldName;
  bVar5 = FText::IdenticalTo((FText *)((longlong)param_1 + 0xa0),param_2,None);
  if (!bVar5) {
    plVar1 = *(longlong **)param_2;
    plVar2 = *(longlong **)((longlong)param_1 + 0xa0);
    if (plVar2 != plVar1) {
      *(longlong **)((longlong)param_1 + 0xa0) = plVar1;
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 8))(plVar1,auStackX_8);
      }
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
    *(undefined4 *)((longlong)param_1 + 0xa8) = *(undefined4 *)((longlong)param_2 + 8);
    FStack_28 = FVar3;
    iStack_20 = iVar4;
    (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
              ((longlong *)((longlong)param_1 + 0x28),&FStack_28);
  }
  return;
}

// SetWhisperNicknameColor_WrapperImpl @ 14b610840

void __cdecl
UDS_VM_Chat_RecentWhisperSlot::SetWhisperNicknameColor_WrapperImpl(void *param_1,void *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  FName FStack_18;
  int iStack_10;
  
  if ((((*(float *)param_2 != *(float *)((longlong)param_1 + 0xb0)) ||
       (*(float *)((longlong)param_2 + 4) != *(float *)((longlong)param_1 + 0xb4))) ||
      (*(float *)((longlong)param_2 + 8) != *(float *)((longlong)param_1 + 0xb8))) ||
     (*(float *)((longlong)param_2 + 0xc) != *(float *)((longlong)param_1 + 0xbc))) {
    uVar1 = *(undefined4 *)((longlong)param_2 + 4);
    uVar2 = *(undefined4 *)((longlong)param_2 + 8);
    uVar3 = *(undefined4 *)((longlong)param_2 + 0xc);
    iStack_10 = FFieldNotificationClassDescriptor::WhisperNicknameColor.BitNumber;
    FStack_18 = FFieldNotificationClassDescriptor::WhisperNicknameColor.FieldName;
    *(undefined4 *)((longlong)param_1 + 0xb0) = *(undefined4 *)param_2;
    *(undefined4 *)((longlong)param_1 + 0xb4) = uVar1;
    *(undefined4 *)((longlong)param_1 + 0xb8) = uVar2;
    *(undefined4 *)((longlong)param_1 + 0xbc) = uVar3;
    (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
              ((longlong)param_1 + 0x28,&FStack_18);
  }
  return;
}

// SetClickWhisper_WrapperImpl @ 14b610850

void __cdecl UDS_VM_Chat_RecentWhisperSlot::SetClickWhisper_WrapperImpl(void *param_1,void *param_2)

{
  UDS_ChatEvent *pUVar1;
  FString *pFVar2;
  
  pUVar1 = UDS_ChatEvent::GetEvent();
  if (pUVar1 != (UDS_ChatEvent *)0x0) {
    pFVar2 = FText::ToString((FText *)((longlong)param_1 + 0xa0));
    FDS_EventDelegate<FString_const_&>::Broadcast(&pUVar1->OnSelectedWhisper,pFVar2);
  }
  return;
}

// StaticClass @ 14b610860

UClass * __cdecl UDS_VM_Chat_RecentWhisperSlot::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_Chat_RecentWhisperSlot.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_Chat_RecentWhisperSlot",
               &Z_Registration_Info_UClass_UDS_VM_Chat_RecentWhisperSlot.InnerSingleton,
               StaticRegisterNativesUDS_VM_Chat_RecentWhisperSlot,0xe8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_VM_Chat_RecentWhisperSlot>,
               InternalVTableHelperCtorCaller<UDS_VM_Chat_RecentWhisperSlot>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_Chat_RecentWhisperSlot.InnerSingleton;
}

// UDS_VM_Chat_RecentWhisperSlot @ 14b616600

UDS_VM_Chat_RecentWhisperSlot * __thiscall
UDS_VM_Chat_RecentWhisperSlot::UDS_VM_Chat_RecentWhisperSlot
          (UDS_VM_Chat_RecentWhisperSlot *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_Chat_RecentWhisperSlot__6B_;
  FText::FText(&this->WhisperNickname);
  (this->ClickWhisper)._padding_ = '\0';
  (this->ClickWhisper).bIsCustomSelected = false;
  (this->ClickWhisper).bIsLacked = false;
  (this->ClickWhisper).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickWhisper).Delegate = 0;
  *(undefined8 *)&(this->ClickWhisper).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickWhisper).Delegate.field_0x10 = 0;
  this->WhisperPlayerUID = 0;
  return this;
}

// UDS_VM_Chat_RecentWhisperSlot @ 14b616670

UDS_VM_Chat_RecentWhisperSlot * __thiscall
UDS_VM_Chat_RecentWhisperSlot::UDS_VM_Chat_RecentWhisperSlot
          (UDS_VM_Chat_RecentWhisperSlot *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_Chat_RecentWhisperSlot__6B_;
  FText::FText(&this->WhisperNickname);
  (this->ClickWhisper)._padding_ = '\0';
  (this->ClickWhisper).bIsCustomSelected = false;
  (this->ClickWhisper).bIsLacked = false;
  (this->ClickWhisper).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickWhisper).Delegate = 0;
  *(undefined8 *)&(this->ClickWhisper).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickWhisper).Delegate.field_0x10 = 0;
  this->WhisperPlayerUID = 0;
  return this;
}

// ~UDS_VM_Chat_RecentWhisperSlot @ 14b617960

void __thiscall
UDS_VM_Chat_RecentWhisperSlot::~UDS_VM_Chat_RecentWhisperSlot(UDS_VM_Chat_RecentWhisperSlot *this)

{
  void *pvVar1;
  ITextData *pIVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_Chat_RecentWhisperSlot__6B_;
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ClickWhisper).Delegate);
  pvVar1 = *(void **)&(this->ClickWhisper).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ClickWhisper).Delegate);
  pIVar2 = (this->WhisperNickname).TextData.Reference;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 0x10))();
  }
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b6194e0

IClassDescriptor * __thiscall
UDS_VM_Chat_RecentWhisperSlot::GetFieldNotificationDescriptor(UDS_VM_Chat_RecentWhisperSlot *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_Chat_RecentWhisperSlot::FFieldNotificationClassDescriptor::GetDescriptor'::__l2
             ::_dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b61a040

UClass * __cdecl UDS_VM_Chat_RecentWhisperSlot::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_Chat_RecentWhisperSlot.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_Chat_RecentWhisperSlot",
               &Z_Registration_Info_UClass_UDS_VM_Chat_RecentWhisperSlot.InnerSingleton,
               StaticRegisterNativesUDS_VM_Chat_RecentWhisperSlot,0xe8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_VM_Chat_RecentWhisperSlot>,
               InternalVTableHelperCtorCaller<UDS_VM_Chat_RecentWhisperSlot>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_Chat_RecentWhisperSlot.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_Chat_RecentWhisperSlot @ 14b61a2a0

void __cdecl UDS_VM_Chat_RecentWhisperSlot::StaticRegisterNativesUDS_VM_Chat_RecentWhisperSlot(void)

{
  return;
}

// OnClickWhisper @ 14bdcd550

void __thiscall
UDS_VM_Chat_RecentWhisperSlot::OnClickWhisper
          (UDS_VM_Chat_RecentWhisperSlot *this,FDS_ButtonEventField *param_1)

{
  UDS_ChatEvent *pUVar1;
  FString *pFVar2;
  
  pUVar1 = UDS_ChatEvent::GetEvent();
  if (pUVar1 != (UDS_ChatEvent *)0x0) {
    pFVar2 = FText::ToString(&this->WhisperNickname);
    FDS_EventDelegate<FString_const_&>::Broadcast(&pUVar1->OnSelectedWhisper,pFVar2);
  }
  return;
}

// OnSetViewModel @ 14bdd5eb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_Chat_RecentWhisperSlot::OnSetViewModel
          (UDS_VM_Chat_RecentWhisperSlot *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  UDS_LogManager *pUVar4;
  undefined1 auStackY_188 [32];
  TSharedPtr<FDS_ViewModelContext_ChatWhisper,1> local_158;
  TSharedPtr<FDS_ViewModelContext,1> local_148;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_188;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
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
  SafeCast<FDS_ViewModelContext_ChatWhisper>(&local_158,&local_148);
  if (local_158.Object == (FDS_ViewModelContext_ChatWhisper *)0x0) {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 != (UDS_LogManager *)0x0) {
      pUVar4 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_VM_Chat_RecentWhisperSlot::OnSetViewModel",0x2d,Yes);
      UDS_LogManager::PrintLog
                (pUVar4,1,Warning,local_138.Ptr,0x13,L"chatWhisperContext.IsValid() == false");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  else {
    if (local_158.Object == (FDS_ViewModelContext_ChatWhisper *)0x0) {
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
    this->WhisperPlayerUID = (local_158.Object)->PlayerUID;
    UpdateRecentWhisper(this);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_158.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// SetWhisperNickname @ 14bdea6c0

void __thiscall
UDS_VM_Chat_RecentWhisperSlot::SetWhisperNickname
          (UDS_VM_Chat_RecentWhisperSlot *this,FText *param_1)

{
  ITextData *pIVar1;
  ITextData *pIVar2;
  FName FVar3;
  int iVar4;
  bool bVar5;
  undefined1 local_res8 [8];
  FName local_28;
  int local_20;
  
  iVar4 = FFieldNotificationClassDescriptor::WhisperNickname.BitNumber;
  FVar3 = FFieldNotificationClassDescriptor::WhisperNickname.FieldName;
  bVar5 = FText::IdenticalTo(&this->WhisperNickname,param_1,None);
  if (!bVar5) {
    pIVar1 = (param_1->TextData).Reference;
    pIVar2 = (this->WhisperNickname).TextData.Reference;
    if (pIVar2 != pIVar1) {
      (this->WhisperNickname).TextData.Reference = pIVar1;
      if (pIVar1 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
      }
      if (pIVar2 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
      }
    }
    (this->WhisperNickname).Flags = param_1->Flags;
    local_28 = FVar3;
    local_20 = iVar4;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_28);
  }
  return;
}

// SetWhisperNicknameColor @ 14bdea780

void __thiscall
UDS_VM_Chat_RecentWhisperSlot::SetWhisperNicknameColor
          (UDS_VM_Chat_RecentWhisperSlot *this,FLinearColor *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  FName local_18;
  int local_10;
  
  if (((((param_1->field0_0x0)._s_0.R != (this->WhisperNicknameColor).field0_0x0._s_0.R) ||
       ((param_1->field0_0x0)._s_0.G != (this->WhisperNicknameColor).field0_0x0._s_0.G)) ||
      ((param_1->field0_0x0)._s_0.B != (this->WhisperNicknameColor).field0_0x0._s_0.B)) ||
     ((param_1->field0_0x0)._s_0.A != (this->WhisperNicknameColor).field0_0x0._s_0.A)) {
    fVar1 = (param_1->field0_0x0)._s_0.G;
    fVar2 = (param_1->field0_0x0)._s_0.B;
    fVar3 = (param_1->field0_0x0)._s_0.A;
    local_10 = FFieldNotificationClassDescriptor::WhisperNicknameColor.BitNumber;
    local_18 = FFieldNotificationClassDescriptor::WhisperNicknameColor.FieldName;
    (this->WhisperNicknameColor).field0_0x0._s_0.R = (param_1->field0_0x0)._s_0.R;
    (this->WhisperNicknameColor).field0_0x0._s_0.G = fVar1;
    (this->WhisperNicknameColor).field0_0x0._s_0.B = fVar2;
    (this->WhisperNicknameColor).field0_0x0._s_0.A = fVar3;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// UpdateRecentWhisper @ 14bdf4310

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_Chat_RecentWhisperSlot::UpdateRecentWhisper(UDS_VM_Chat_RecentWhisperSlot *this)

{
  ITextData *pIVar1;
  ITextData *pIVar2;
  code *pcVar3;
  FName FVar4;
  int iVar5;
  bool bVar6;
  UDS_ChattingManager *this_00;
  UDS_LogManager *pUVar7;
  FText *pFVar8;
  undefined1 auStackY_318 [32];
  FLinearColor_u_0 local_2e8;
  TSharedPtr<FDS_ChatUserInfo,1> local_2d8;
  undefined1 local_2c8 [16];
  FName local_2b8;
  int local_2b0;
  FName local_2a8;
  int local_2a0;
  FText local_298;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_288;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_168;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_318;
  this_00 = UDS_ChattingManager::GetInst();
  if (this_00 == (UDS_ChattingManager *)0x0) {
    pUVar7 = UDS_LogManager::GetInst();
    if (pUVar7 != (UDS_LogManager *)0x0) {
      pUVar7 = UDS_LogManager::GetInst();
      local_288._padding_ = (longlong)this_00;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_288,"UDS_VM_Chat_RecentWhisperSlot::UpdateRecentWhisper",0x32,Yes);
      UDS_LogManager::PrintLog(pUVar7,1,Warning,local_288.Ptr,0x33,L"chattingManager == nullptr");
      if ((UDS_ChattingManager *)local_288._padding_ != (UDS_ChattingManager *)0x0) {
        FMemory::Free((void *)local_288._padding_);
      }
    }
  }
  else {
    UDS_ChattingManager::GetChatUserInfo(this_00,&local_2d8,this->WhisperPlayerUID);
    if (local_2d8.Object == (FDS_ChatUserInfo *)0x0) {
      pUVar7 = UDS_LogManager::GetInst();
      if (pUVar7 != (UDS_LogManager *)0x0) {
        pUVar7 = UDS_LogManager::GetInst();
        local_168._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_168,"UDS_VM_Chat_RecentWhisperSlot::UpdateRecentWhisper",0x32,Yes);
        UDS_LogManager::PrintLog
                  (pUVar7,1,Warning,local_168.Ptr,0x3a,L"chatUserInfo.IsValid() == false");
        if ((void *)local_168._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_168._padding_);
        }
      }
    }
    else {
      if ((local_2d8.Object == (FDS_ChatUserInfo *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar8 = FText::FromString(&local_298,&(local_2d8.Object)->Nickname);
      iVar5 = FFieldNotificationClassDescriptor::WhisperNickname.BitNumber;
      FVar4 = FFieldNotificationClassDescriptor::WhisperNickname.FieldName;
      bVar6 = FText::IdenticalTo(&this->WhisperNickname,pFVar8,None);
      if (!bVar6) {
        pIVar1 = (pFVar8->TextData).Reference;
        pIVar2 = (this->WhisperNickname).TextData.Reference;
        if (pIVar2 != pIVar1) {
          (this->WhisperNickname).TextData.Reference = pIVar1;
          if (pIVar1 != (ITextData *)0x0) {
            (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_2c8);
          }
          if (pIVar2 != (ITextData *)0x0) {
            (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
          }
        }
        (this->WhisperNickname).Flags = pFVar8->Flags;
        local_2b8 = FVar4;
        local_2b0 = iVar5;
        (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_2b8);
      }
      if (local_298.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_298.TextData.Reference + 0x10))();
      }
      UDS_ChattingManager::GetChattingTabColor(this_00,(FLinearColor *)&local_2e8._s_0,Whisper,-1);
      if ((((local_2e8._s_0.R != (this->WhisperNicknameColor).field0_0x0._s_0.R) ||
           (local_2e8._s_0.G != (this->WhisperNicknameColor).field0_0x0._s_0.G)) ||
          (local_2e8._s_0.B != (this->WhisperNicknameColor).field0_0x0._s_0.B)) ||
         (local_2e8._s_0.A != (this->WhisperNicknameColor).field0_0x0._s_0.A)) {
        local_2a0 = FFieldNotificationClassDescriptor::WhisperNicknameColor.BitNumber;
        local_2a8 = FFieldNotificationClassDescriptor::WhisperNicknameColor.FieldName;
        (this->WhisperNicknameColor).field0_0x0._s_0.R = local_2e8._s_0.R;
        (this->WhisperNicknameColor).field0_0x0._s_0.G = local_2e8._s_0.G;
        (this->WhisperNicknameColor).field0_0x0._s_0.B = local_2e8._s_0.B;
        (this->WhisperNicknameColor).field0_0x0._s_0.A = local_2e8._s_0.A;
        (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_2a8);
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_2d8.SharedReferenceCount.ReferenceController);
  }
  return;
}

