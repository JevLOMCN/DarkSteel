// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 21

// SetChatMacro_WrapperImpl @ 14b60fc00

void __cdecl UDS_VM_Chat_MacroSlot::SetChatMacro_WrapperImpl(void *param_1,void *param_2)

{
  FName FVar1;
  int iVar2;
  FName FStack_18;
  int iStack_10;
  
  iVar2 = FFieldNotificationClassDescriptor::ChatMacro.BitNumber;
  FVar1 = FFieldNotificationClassDescriptor::ChatMacro.FieldName;
  FDS_Text::operator=((FDS_Text *)((longlong)param_1 + 0xa0),param_2);
  FStack_18 = FVar1;
  iStack_10 = iVar2;
  (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
            ((longlong *)((longlong)param_1 + 0x28),&FStack_18);
  return;
}

// SetChatMacroColor_WrapperImpl @ 14b60fc10

void __cdecl UDS_VM_Chat_MacroSlot::SetChatMacroColor_WrapperImpl(void *param_1,void *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  FName FStack_18;
  int iStack_10;
  
  if ((((*(float *)param_2 != *(float *)((longlong)param_1 + 0xf0)) ||
       (*(float *)((longlong)param_2 + 4) != *(float *)((longlong)param_1 + 0xf4))) ||
      (*(float *)((longlong)param_2 + 8) != *(float *)((longlong)param_1 + 0xf8))) ||
     (*(float *)((longlong)param_2 + 0xc) != *(float *)((longlong)param_1 + 0xfc))) {
    uVar1 = *(undefined4 *)((longlong)param_2 + 4);
    uVar2 = *(undefined4 *)((longlong)param_2 + 8);
    uVar3 = *(undefined4 *)((longlong)param_2 + 0xc);
    iStack_10 = FFieldNotificationClassDescriptor::ChatMacroColor.BitNumber;
    FStack_18 = FFieldNotificationClassDescriptor::ChatMacroColor.FieldName;
    *(undefined4 *)((longlong)param_1 + 0xf0) = *(undefined4 *)param_2;
    *(undefined4 *)((longlong)param_1 + 0xf4) = uVar1;
    *(undefined4 *)((longlong)param_1 + 0xf8) = uVar2;
    *(undefined4 *)((longlong)param_1 + 0xfc) = uVar3;
    (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
              ((longlong)param_1 + 0x28,&FStack_18);
  }
  return;
}

// SetClickMacro_WrapperImpl @ 14b60fc20

void __cdecl UDS_VM_Chat_MacroSlot::SetClickMacro_WrapperImpl(void *param_1,void *param_2)

{
  OnClickedMacroSlot(param_1,*(int *)((longlong)param_1 + 0x124));
  return;
}

// SetbIsSelectedMacro_WrapperImpl @ 14b60fc30

void __cdecl UDS_VM_Chat_MacroSlot::SetbIsSelectedMacro_WrapperImpl(void *param_1,void *param_2)

{
  SetSelectedMacro(param_1,*(bool *)param_2);
  return;
}

// StaticClass @ 14b60fc40

UClass * __cdecl UDS_VM_Chat_MacroSlot::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_Chat_MacroSlot.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_Chat_MacroSlot",
               &Z_Registration_Info_UClass_UDS_VM_Chat_MacroSlot.InnerSingleton,
               StaticRegisterNativesUDS_VM_Chat_MacroSlot,0x128,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_Chat_MacroSlot>,
               InternalVTableHelperCtorCaller<UDS_VM_Chat_MacroSlot>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_Chat_MacroSlot.InnerSingleton;
}

// UDS_VM_Chat_MacroSlot @ 14b616240

UDS_VM_Chat_MacroSlot * __thiscall
UDS_VM_Chat_MacroSlot::UDS_VM_Chat_MacroSlot(UDS_VM_Chat_MacroSlot *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->ChatMacroIndex = -1;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_Chat_MacroSlot__6B_;
  (this->ChatMacro).StringTableID = 0;
  (this->ChatMacro).StringEnumTableNameID.ComparisonIndex = 0;
  (this->ChatMacro).StringEnumTableNameID.Number = 0;
  (this->ChatMacro).DateTime.Ticks = 0;
  (this->ChatMacro).TimeSpan.Ticks = 0;
  (this->ChatMacro).TimeExpressionType = None;
  (this->ChatMacro).IsExpression = false;
  (this->ChatMacro).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ChatMacro).UniqueString.Data.ArrayNum = 0;
  (this->ChatMacro).UniqueString.Data.ArrayMax = 0;
  (this->ChatMacro).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ChatMacro).FormatArgs.ArrayNum = 0;
  (this->ChatMacro).FormatArgs.ArrayMax = 0;
  (this->ClickMacro)._padding_ = '\0';
  (this->ClickMacro).bIsCustomSelected = false;
  (this->ClickMacro).bIsLacked = false;
  (this->ClickMacro).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickMacro).Delegate = 0;
  *(undefined8 *)&(this->ClickMacro).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickMacro).Delegate.field_0x10 = 0;
  (this->ChatMacro).StringTableType = None;
  return this;
}

// UDS_VM_Chat_MacroSlot @ 14b6162f0

UDS_VM_Chat_MacroSlot * __thiscall
UDS_VM_Chat_MacroSlot::UDS_VM_Chat_MacroSlot
          (UDS_VM_Chat_MacroSlot *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->ChatMacroIndex = -1;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_Chat_MacroSlot__6B_;
  (this->ChatMacro).StringTableID = 0;
  (this->ChatMacro).StringEnumTableNameID.ComparisonIndex = 0;
  (this->ChatMacro).StringEnumTableNameID.Number = 0;
  (this->ChatMacro).DateTime.Ticks = 0;
  (this->ChatMacro).TimeSpan.Ticks = 0;
  (this->ChatMacro).TimeExpressionType = None;
  (this->ChatMacro).IsExpression = false;
  (this->ChatMacro).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ChatMacro).UniqueString.Data.ArrayNum = 0;
  (this->ChatMacro).UniqueString.Data.ArrayMax = 0;
  (this->ChatMacro).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ChatMacro).FormatArgs.ArrayNum = 0;
  (this->ChatMacro).FormatArgs.ArrayMax = 0;
  (this->ClickMacro)._padding_ = '\0';
  (this->ClickMacro).bIsCustomSelected = false;
  (this->ClickMacro).bIsLacked = false;
  (this->ClickMacro).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickMacro).Delegate = 0;
  *(undefined8 *)&(this->ClickMacro).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickMacro).Delegate.field_0x10 = 0;
  (this->ChatMacro).StringTableType = None;
  return this;
}

// ~UDS_VM_Chat_MacroSlot @ 14b617790

void __thiscall UDS_VM_Chat_MacroSlot::~UDS_VM_Chat_MacroSlot(UDS_VM_Chat_MacroSlot *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_Chat_MacroSlot__6B_;
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ClickMacro).Delegate);
  pvVar1 = *(void **)&(this->ClickMacro).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ClickMacro).Delegate);
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->ChatMacro).FormatArgs.AllocatorInstance.Data,
             (this->ChatMacro).FormatArgs.ArrayNum);
  pFVar2 = (this->ChatMacro).FormatArgs.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->ChatMacro).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b619390

IClassDescriptor * __thiscall
UDS_VM_Chat_MacroSlot::GetFieldNotificationDescriptor(UDS_VM_Chat_MacroSlot *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_Chat_MacroSlot::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b619e00

UClass * __cdecl UDS_VM_Chat_MacroSlot::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_Chat_MacroSlot.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_Chat_MacroSlot",
               &Z_Registration_Info_UClass_UDS_VM_Chat_MacroSlot.InnerSingleton,
               StaticRegisterNativesUDS_VM_Chat_MacroSlot,0x128,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_Chat_MacroSlot>,
               InternalVTableHelperCtorCaller<UDS_VM_Chat_MacroSlot>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_Chat_MacroSlot.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_Chat_MacroSlot @ 14b61a270

void __cdecl UDS_VM_Chat_MacroSlot::StaticRegisterNativesUDS_VM_Chat_MacroSlot(void)

{
  return;
}

// BindModel @ 14bdb0390

void __thiscall UDS_VM_Chat_MacroSlot::BindModel(UDS_VM_Chat_MacroSlot *this)

{
  UDS_ChatEvent *pUVar1;
  
  UDS_ViewModelBase::BindModel((UDS_ViewModelBase *)this);
  pUVar1 = UDS_ChatEvent::GetEvent();
  if (pUVar1 != (UDS_ChatEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->OnSelectedMacroSlot,
               this);
    TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_VM_Chat_MacroSlot>
              ((TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy> *)
               &pUVar1->OnSelectedMacroSlot,(UDS_VM_Chat_MacroSlot *)&stack0x00000010,
               (pmf_e7ad9b88 *)this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->OnClickedMacroSlot,
               this);
    TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_VM_Chat_MacroSlot>
              ((TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy> *)
               &pUVar1->OnClickedMacroSlot,(UDS_VM_Chat_MacroSlot *)&stack0x00000010,
               (pmf_e7ad9b88 *)this);
  }
  return;
}

// OnClickMacro @ 14bdcd150

void __thiscall
UDS_VM_Chat_MacroSlot::OnClickMacro(UDS_VM_Chat_MacroSlot *this,FDS_ButtonEventField *param_1)

{
  OnClickedMacroSlot(this,this->ChatMacroIndex);
  return;
}

// OnClickedMacroSlot @ 14bdcd770

void __thiscall UDS_VM_Chat_MacroSlot::OnClickedMacroSlot(UDS_VM_Chat_MacroSlot *this,int param_1)

{
  UDS_ChatEvent *pUVar1;
  FText *this_00;
  FString *pFVar2;
  FText local_18;
  
  if ((this->ChatMacroIndex == param_1) &&
     (pUVar1 = UDS_ChatEvent::GetEvent(), pUVar1 != (UDS_ChatEvent *)0x0)) {
    FDS_EventDelegate<enum_EDS_ViewModelTemplateKey_const_,bool_const_>::Broadcast
              (&pUVar1->OnChatPopup,Chat_Macro,false);
    this_00 = FDS_Text::GetText(&this->ChatMacro,&local_18);
    pFVar2 = FText::ToString(this_00);
    FDS_EventDelegate<FString_const_&>::Broadcast(&pUVar1->OnSelectedMacro,pFVar2);
    if (local_18.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
    }
  }
  return;
}

// OnSelectedMacroSlot @ 14bdd1c80

void __thiscall UDS_VM_Chat_MacroSlot::OnSelectedMacroSlot(UDS_VM_Chat_MacroSlot *this,int param_1)

{
  bool bVar1;
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::bIsSelectedMacro.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::bIsSelectedMacro.FieldName;
  bVar1 = this->ChatMacroIndex == param_1;
  if (this->bIsSelectedMacro != bVar1) {
    this->bIsSelectedMacro = bVar1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// OnSetViewModel @ 14bdd59d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_Chat_MacroSlot::OnSetViewModel
          (UDS_VM_Chat_MacroSlot *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  FName FVar3;
  bool bVar4;
  UDS_LogManager *pUVar5;
  undefined1 auStackY_198 [32];
  TSharedPtr<FDS_ViewModelContext_ChatMacro,1> local_168;
  FName local_158;
  int local_150;
  TSharedPtr<FDS_ViewModelContext,1> local_148;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_198;
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
  SafeCast<FDS_ViewModelContext_ChatMacro>(&local_168,&local_148);
  if (local_168.Object == (FDS_ViewModelContext_ChatMacro *)0x0) {
    pUVar5 = UDS_LogManager::GetInst();
    if (pUVar5 != (UDS_LogManager *)0x0) {
      pUVar5 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_VM_Chat_MacroSlot::OnSetViewModel",0x25,Yes);
      UDS_LogManager::PrintLog
                (pUVar5,1,Warning,local_138.Ptr,0x14,L"chatMacroContext.IsValid() == false");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  else {
    if (local_168.Object == (FDS_ViewModelContext_ChatMacro *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    this->ChatMacroIndex = (local_168.Object)->ChatMacroIndex;
    FVar3 = FFieldNotificationClassDescriptor::bIsSelectedMacro.FieldName;
    if (this->bIsSelectedMacro != (local_168.Object)->IsSelected) {
      local_150 = FFieldNotificationClassDescriptor::bIsSelectedMacro.BitNumber;
      this->bIsSelectedMacro = (local_168.Object)->IsSelected;
      local_158 = FVar3;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_158);
    }
    UpdateChatMacroSlot(this);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_168.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// SetChatMacro @ 14bde39c0

void __thiscall UDS_VM_Chat_MacroSlot::SetChatMacro(UDS_VM_Chat_MacroSlot *this,FDS_Text *param_1)

{
  FName FVar1;
  int iVar2;
  FName local_18;
  int local_10;
  
  iVar2 = FFieldNotificationClassDescriptor::ChatMacro.BitNumber;
  FVar1 = FFieldNotificationClassDescriptor::ChatMacro.FieldName;
  FDS_Text::operator=(&this->ChatMacro,param_1);
  local_18 = FVar1;
  local_10 = iVar2;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// SetChatMacroColor @ 14bde3a20

void __thiscall
UDS_VM_Chat_MacroSlot::SetChatMacroColor(UDS_VM_Chat_MacroSlot *this,FLinearColor *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  FName local_18;
  int local_10;
  
  if (((((param_1->field0_0x0)._s_0.R != (this->ChatMacroColor).field0_0x0._s_0.R) ||
       ((param_1->field0_0x0)._s_0.G != (this->ChatMacroColor).field0_0x0._s_0.G)) ||
      ((param_1->field0_0x0)._s_0.B != (this->ChatMacroColor).field0_0x0._s_0.B)) ||
     ((param_1->field0_0x0)._s_0.A != (this->ChatMacroColor).field0_0x0._s_0.A)) {
    fVar1 = (param_1->field0_0x0)._s_0.G;
    fVar2 = (param_1->field0_0x0)._s_0.B;
    fVar3 = (param_1->field0_0x0)._s_0.A;
    local_10 = FFieldNotificationClassDescriptor::ChatMacroColor.BitNumber;
    local_18 = FFieldNotificationClassDescriptor::ChatMacroColor.FieldName;
    (this->ChatMacroColor).field0_0x0._s_0.R = (param_1->field0_0x0)._s_0.R;
    (this->ChatMacroColor).field0_0x0._s_0.G = fVar1;
    (this->ChatMacroColor).field0_0x0._s_0.B = fVar2;
    (this->ChatMacroColor).field0_0x0._s_0.A = fVar3;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetSelectedMacro @ 14bde8ec0

void __thiscall UDS_VM_Chat_MacroSlot::SetSelectedMacro(UDS_VM_Chat_MacroSlot *this,bool param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::bIsSelectedMacro.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::bIsSelectedMacro.FieldName;
  if (this->bIsSelectedMacro != param_1) {
    this->bIsSelectedMacro = param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// UnbindModel @ 14bdec000

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void __thiscall UDS_VM_Chat_MacroSlot::UnbindModel(UDS_VM_Chat_MacroSlot *this)

{
  UDS_LanguageManager *pUVar1;
  UDS_ChatEvent *pUVar2;
  
  pUVar1 = UDS_LanguageManager::GetInst();
  if (pUVar1 != (UDS_LanguageManager *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->OnLanguageChanged,this
              );
  }
  pUVar2 = UDS_ChatEvent::GetEvent();
  if (pUVar2 != (UDS_ChatEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar2->OnSelectedMacroSlot,
               this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar2->OnClickedMacroSlot,
               this);
  }
  return;
}

// UpdateChatMacroSlot @ 14bdede30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_Chat_MacroSlot::UpdateChatMacroSlot(UDS_VM_Chat_MacroSlot *this)

{
  TObjectPtr<UDS_M_ChatOption>_u_0 TVar1;
  FName FVar2;
  int iVar3;
  bool bVar4;
  UDS_ChattingManager *this_00;
  UDS_LogManager *pUVar5;
  UDS_M_ChatOption *this_01;
  FDS_Text *pFVar6;
  undefined1 auStackY_1f8 [32];
  uint uVar7;
  wchar_t *pwVar8;
  TObjectPtr<UDS_M_ChatOption>_u_0 local_1c8;
  int local_1c0;
  FWeakObjectPtr local_1b8;
  FLinearColor_u_0 local_1b0;
  FDS_Text local_1a0;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_1f8;
  this_00 = UDS_ChattingManager::GetInst();
  if (this_00 == (UDS_ChattingManager *)0x0) {
    pUVar5 = UDS_LogManager::GetInst();
    if (pUVar5 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar5 = UDS_LogManager::GetInst();
    local_148._padding_ = (longlong)this_00;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_148,"UDS_VM_Chat_MacroSlot::UpdateChatMacroSlot",0x2a,Yes);
    pwVar8 = L"chattingManager == nullptr";
    uVar7 = 0x4e;
  }
  else {
    TVar1 = (TObjectPtr<UDS_M_ChatOption>_u_0)(this_00->ChatOption).field0_0x0.DebugPtr;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if (TVar1.DebugPtr != (UDS_M_ChatOption *)0x0) {
        UE::GC::MarkAsReachable((UObject *)TVar1.DebugPtr);
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (TVar1.DebugPtr != (UDS_M_ChatOption *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)TVar1.DebugPtr);
      }
    }
    local_1b8.ObjectIndex = 0;
    local_1b8.ObjectSerialNumber = 0;
    local_1c8 = TVar1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (TVar1.DebugPtr != (UDS_M_ChatOption *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)TVar1.DebugPtr);
    }
    FWeakObjectPtr::operator=(&local_1b8,(FObjectPtr)&local_1c8);
    bVar4 = FWeakObjectPtr::IsValid(&local_1b8);
    if (bVar4) {
      this_01 = (UDS_M_ChatOption *)FWeakObjectPtr::Get(&local_1b8);
      pFVar6 = UDS_M_ChatOption::GetCharMacros(this_01,&local_1a0,this->ChatMacroIndex);
      iVar3 = FFieldNotificationClassDescriptor::ChatMacro.BitNumber;
      FVar2 = FFieldNotificationClassDescriptor::ChatMacro.FieldName;
      FDS_Text::operator=(&this->ChatMacro,pFVar6);
      local_1c8.ObjectPtr.field0_0x0 = (FObjectPtr)(FObjectPtr)FVar2;
      local_1c0 = iVar3;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_1c8);
      DestructItems<FDS_TextFormatArg,int>
                ((FDS_TextFormatArg *)local_1a0.FormatArgs.AllocatorInstance.Data,
                 local_1a0.FormatArgs.ArrayNum);
      if ((FDS_TextFormatArg *)local_1a0.FormatArgs.AllocatorInstance.Data !=
          (FDS_TextFormatArg *)0x0) {
        FMemory::Free(local_1a0.FormatArgs.AllocatorInstance.Data);
      }
      if (local_1a0.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1a0.UniqueString.Data.AllocatorInstance.Data);
      }
      UDS_ChattingManager::GetChattingTabColor(this_00,(FLinearColor *)&local_1b0._s_0,Total,-1);
      if ((((local_1b0._s_0.R == (this->ChatMacroColor).field0_0x0._s_0.R) &&
           (local_1b0._s_0.G == (this->ChatMacroColor).field0_0x0._s_0.G)) &&
          (local_1b0._s_0.B == (this->ChatMacroColor).field0_0x0._s_0.B)) &&
         (local_1b0._s_0.A == (this->ChatMacroColor).field0_0x0._s_0.A)) {
        return;
      }
      local_1c0 = FFieldNotificationClassDescriptor::ChatMacroColor.BitNumber;
      local_1c8.ObjectPtr.field0_0x0 =
           (FObjectPtr)(FObjectPtr)FFieldNotificationClassDescriptor::ChatMacroColor.FieldName;
      (this->ChatMacroColor).field0_0x0._s_0.R = local_1b0._s_0.R;
      (this->ChatMacroColor).field0_0x0._s_0.G = local_1b0._s_0.G;
      (this->ChatMacroColor).field0_0x0._s_0.B = local_1b0._s_0.B;
      (this->ChatMacroColor).field0_0x0._s_0.A = local_1b0._s_0.A;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_1c8);
      return;
    }
    pUVar5 = UDS_LogManager::GetInst();
    if (pUVar5 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar5 = UDS_LogManager::GetInst();
    local_148._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_148,"UDS_VM_Chat_MacroSlot::UpdateChatMacroSlot",0x2a,Yes);
    pwVar8 = L"chatOption.IsValid() == false";
    uVar7 = 0x55;
  }
  UDS_LogManager::PrintLog(pUVar5,1,Warning,local_148.Ptr,uVar7,pwVar8);
  if ((UDS_ChattingManager *)local_148._padding_ != (UDS_ChattingManager *)0x0) {
    FMemory::Free((void *)local_148._padding_);
  }
  return;
}

