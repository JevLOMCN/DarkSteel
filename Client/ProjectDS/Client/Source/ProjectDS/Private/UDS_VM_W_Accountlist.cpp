// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 12

// SetButtonClickEvent_WrapperImpl @ 14b70c390

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __cdecl UDS_VM_W_Accountlist::SetButtonClickEvent_WrapperImpl(void *param_1,void *param_2)

{
  bool bVar1;
  UDS_AccountLocalSave *this;
  FDS_AccountInfo *pFVar2;
  UDS_LogManager *pUVar3;
  UDS_WindowManager *this_00;
  UDS_LoginState *pUVar4;
  int iVar5;
  undefined1 auStackY_188 [32];
  float fStack_158;
  float fStack_154;
  FWeakObjectPtr FStack_150;
  FWeakObjectPtr aFStack_148 [2];
  TStringConversion<TStringConvert<char,wchar_t>,128> TStack_138;
  ulonglong uStack_18;
  
  uStack_18 = __security_cookie.value ^ (ulonglong)auStackY_188;
  UDS_AccountLocalSave::GetInst();
  bVar1 = FWeakObjectPtr::IsValid(aFStack_148);
  if (bVar1) {
    this = (UDS_AccountLocalSave *)FWeakObjectPtr::Get(aFStack_148);
    pFVar2 = UDS_AccountLocalSave::GetAccountInfo(this,(FDS_AccountKey *)((longlong)param_1 + 0xa0))
    ;
    if (pFVar2 != (FDS_AccountInfo *)0x0) {
      UDS_LoginState::GetInst();
      bVar1 = FWeakObjectPtr::IsValid(&FStack_150);
      if (bVar1) {
        this_00 = UDS_WindowManager::GetInst();
        if (this_00 != (UDS_WindowManager *)0x0) {
          fStack_158 = 0.0;
          fStack_154 = 0.0;
          UDS_WindowManager::CloseWindow(this_00,APIServerList,(uint *)&fStack_154,&fStack_158);
          fStack_154 = 0.0;
          fStack_158 = 0.0;
          UDS_WindowManager::CloseWindow(this_00,LoginLocalList,(uint *)&fStack_158,&fStack_154);
          iVar5 = 1;
          if (0 < pFVar2->CharID) {
            iVar5 = pFVar2->CharID;
          }
          pUVar4 = (UDS_LoginState *)FWeakObjectPtr::Get(&FStack_150);
          UDS_LoginState::OnLogout(pUVar4);
          pUVar4 = (UDS_LoginState *)FWeakObjectPtr::Get(&FStack_150);
          UDS_LoginState::Request_Login(pUVar4,&pFVar2->AccountID,iVar5);
        }
      }
      else {
        pUVar3 = UDS_LogManager::GetInst();
        if (pUVar3 != (UDS_LogManager *)0x0) {
          pUVar3 = UDS_LogManager::GetInst();
          TStack_138._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&TStack_138,"UDS_VM_W_Accountlist::OnButtonClickEvent",0x28,Yes);
          UDS_LogManager::PrintLog
                    (pUVar3,1,Warning,TStack_138.Ptr,0x36,L"UDS_LoginState is invalid.");
          if ((void *)TStack_138._padding_ != (void *)0x0) {
            FMemory::Free((void *)TStack_138._padding_);
          }
        }
      }
    }
  }
  return;
}

// SetEditTextEvent_WrapperImpl @ 14b70c3a0

void __cdecl UDS_VM_W_Accountlist::SetEditTextEvent_WrapperImpl(void *param_1,void *param_2)

{
  bool bVar1;
  UDS_AccountLocalSave *this;
  FWeakObjectPtr aFStackX_18 [2];
  
  UDS_AccountLocalSave::GetInst();
  bVar1 = FWeakObjectPtr::IsValid(aFStackX_18);
  if (bVar1) {
    this = (UDS_AccountLocalSave *)FWeakObjectPtr::Get(aFStackX_18);
    UDS_AccountLocalSave::SetAccountMemo(this,(FDS_AccountKey *)((longlong)param_1 + 0xa0),param_2);
  }
  return;
}

// StaticClass @ 14b70c3b0

UClass * __cdecl UDS_VM_W_Accountlist::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_W_Accountlist.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_W_Accountlist",
               &Z_Registration_Info_UClass_UDS_VM_W_Accountlist.InnerSingleton,
               StaticRegisterNativesUDS_VM_W_Accountlist,0x140,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_W_Accountlist>,
               InternalVTableHelperCtorCaller<UDS_VM_W_Accountlist>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_W_Accountlist.InnerSingleton;
}

// UDS_VM_W_Accountlist @ 14b7103e0

UDS_VM_W_Accountlist * __thiscall
UDS_VM_W_Accountlist::UDS_VM_W_Accountlist(UDS_VM_W_Accountlist *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_W_Accountlist__6B_;
  *(undefined8 *)&this->AccountKey = 0;
  (this->AccountKey).AccountID.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AccountKey).AccountID.Data.ArrayNum = 0;
  (this->AccountKey).AccountID.Data.ArrayMax = 0;
  ::FString::FString(&(this->AccountKey).AccountID,"");
  (this->ButtonClickEvent)._padding_ = '\0';
  (this->ButtonClickEvent).bIsCustomSelected = false;
  (this->ButtonClickEvent).bIsLacked = false;
  (this->ButtonClickEvent).bIsCustomDisabled = false;
  (this->ButtonClickEvent).ButtonEventType = None;
  *(undefined8 *)&(this->ButtonClickEvent).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->ButtonClickEvent).Delegate = 0;
  *(undefined8 *)&(this->ButtonClickEvent).Delegate.field_0x8 = 0;
  (this->EditTextEvent).NewText.TextData.Reference = (ITextData *)0x0;
  *(undefined8 *)&(this->EditTextEvent).NewText.Flags = 0;
  *(undefined8 *)&(this->EditTextEvent).CommitType = 0;
  FText::FText(&(this->EditTextEvent).NewText);
  (this->FixedText_Btn_Login).StringTableType = StringUi;
  (this->FixedText_Btn_Login).StringTableID = 0x7d3;
  (this->FixedText_Btn_Login).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_Btn_Login).StringEnumTableNameID.Number = 0;
  (this->FixedText_Btn_Login).DateTime.Ticks = 0;
  (this->FixedText_Btn_Login).TimeSpan.Ticks = 0;
  (this->FixedText_Btn_Login).TimeExpressionType = None;
  (this->FixedText_Btn_Login).IsExpression = false;
  (this->FixedText_Btn_Login).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_Btn_Login).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_Btn_Login).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_Btn_Login).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_Btn_Login).FormatArgs.ArrayNum = 0;
  (this->FixedText_Btn_Login).FormatArgs.ArrayMax = 0;
  return this;
}

// UDS_VM_W_Accountlist @ 14b7104e0

UDS_VM_W_Accountlist * __thiscall
UDS_VM_W_Accountlist::UDS_VM_W_Accountlist(UDS_VM_W_Accountlist *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_W_Accountlist__6B_;
  *(undefined8 *)&this->AccountKey = 0;
  (this->AccountKey).AccountID.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AccountKey).AccountID.Data.ArrayNum = 0;
  (this->AccountKey).AccountID.Data.ArrayMax = 0;
  ::FString::FString(&(this->AccountKey).AccountID,"");
  (this->ButtonClickEvent)._padding_ = '\0';
  (this->ButtonClickEvent).bIsCustomSelected = false;
  (this->ButtonClickEvent).bIsLacked = false;
  (this->ButtonClickEvent).bIsCustomDisabled = false;
  (this->ButtonClickEvent).ButtonEventType = None;
  *(undefined8 *)&(this->ButtonClickEvent).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->ButtonClickEvent).Delegate = 0;
  *(undefined8 *)&(this->ButtonClickEvent).Delegate.field_0x8 = 0;
  (this->EditTextEvent).NewText.TextData.Reference = (ITextData *)0x0;
  *(undefined8 *)&(this->EditTextEvent).NewText.Flags = 0;
  *(undefined8 *)&(this->EditTextEvent).CommitType = 0;
  FText::FText(&(this->EditTextEvent).NewText);
  (this->FixedText_Btn_Login).StringTableType = StringUi;
  (this->FixedText_Btn_Login).StringTableID = 0x7d3;
  (this->FixedText_Btn_Login).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_Btn_Login).StringEnumTableNameID.Number = 0;
  (this->FixedText_Btn_Login).DateTime.Ticks = 0;
  (this->FixedText_Btn_Login).TimeSpan.Ticks = 0;
  (this->FixedText_Btn_Login).TimeExpressionType = None;
  (this->FixedText_Btn_Login).IsExpression = false;
  (this->FixedText_Btn_Login).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_Btn_Login).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_Btn_Login).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_Btn_Login).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_Btn_Login).FormatArgs.ArrayNum = 0;
  (this->FixedText_Btn_Login).FormatArgs.ArrayMax = 0;
  return this;
}

// ~UDS_VM_W_Accountlist @ 14b712de0

void __thiscall UDS_VM_W_Accountlist::~UDS_VM_W_Accountlist(UDS_VM_W_Accountlist *this)

{
  FScriptContainerElement *pFVar1;
  ITextData *pIVar2;
  void *pvVar3;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_W_Accountlist__6B_;
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->FixedText_Btn_Login).FormatArgs.AllocatorInstance.Data,
             (this->FixedText_Btn_Login).FormatArgs.ArrayNum);
  pFVar1 = (this->FixedText_Btn_Login).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FixedText_Btn_Login).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pIVar2 = (this->EditTextEvent).NewText.TextData.Reference;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 0x10))();
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ButtonClickEvent).Delegate);
  pvVar3 = *(void **)&(this->ButtonClickEvent).Delegate.field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ButtonClickEvent).Delegate);
  pFVar1 = (this->AccountKey).AccountID.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b716830

IClassDescriptor * __thiscall
UDS_VM_W_Accountlist::GetFieldNotificationDescriptor(UDS_VM_W_Accountlist *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_W_Accountlist::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b717410

UClass * __cdecl UDS_VM_W_Accountlist::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_W_Accountlist.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_W_Accountlist",
               &Z_Registration_Info_UClass_UDS_VM_W_Accountlist.InnerSingleton,
               StaticRegisterNativesUDS_VM_W_Accountlist,0x140,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_W_Accountlist>,
               InternalVTableHelperCtorCaller<UDS_VM_W_Accountlist>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_W_Accountlist.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_W_Accountlist @ 14b718900

void __cdecl UDS_VM_W_Accountlist::StaticRegisterNativesUDS_VM_W_Accountlist(void)

{
  return;
}

// OnButtonClickEvent @ 14bfb4880

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
UDS_VM_W_Accountlist::OnButtonClickEvent(UDS_VM_W_Accountlist *this,FDS_ButtonEventField *param_1)

{
  bool bVar1;
  UDS_AccountLocalSave *this_00;
  FDS_AccountInfo *pFVar2;
  UDS_LogManager *pUVar3;
  UDS_WindowManager *this_01;
  UDS_LoginState *pUVar4;
  int iVar5;
  undefined1 auStackY_188 [32];
  float local_158;
  float local_154;
  FWeakObjectPtr local_150;
  FWeakObjectPtr local_148 [2];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_188;
  UDS_AccountLocalSave::GetInst();
  bVar1 = FWeakObjectPtr::IsValid(local_148);
  if (bVar1) {
    this_00 = (UDS_AccountLocalSave *)FWeakObjectPtr::Get(local_148);
    pFVar2 = UDS_AccountLocalSave::GetAccountInfo(this_00,&this->AccountKey);
    if (pFVar2 != (FDS_AccountInfo *)0x0) {
      UDS_LoginState::GetInst();
      bVar1 = FWeakObjectPtr::IsValid(&local_150);
      if (bVar1) {
        this_01 = UDS_WindowManager::GetInst();
        if (this_01 != (UDS_WindowManager *)0x0) {
          local_158 = 0.0;
          local_154 = 0.0;
          UDS_WindowManager::CloseWindow(this_01,APIServerList,(uint *)&local_154,&local_158);
          local_154 = 0.0;
          local_158 = 0.0;
          UDS_WindowManager::CloseWindow(this_01,LoginLocalList,(uint *)&local_158,&local_154);
          iVar5 = 1;
          if (0 < pFVar2->CharID) {
            iVar5 = pFVar2->CharID;
          }
          pUVar4 = (UDS_LoginState *)FWeakObjectPtr::Get(&local_150);
          UDS_LoginState::OnLogout(pUVar4);
          pUVar4 = (UDS_LoginState *)FWeakObjectPtr::Get(&local_150);
          UDS_LoginState::Request_Login(pUVar4,&pFVar2->AccountID,iVar5);
        }
      }
      else {
        pUVar3 = UDS_LogManager::GetInst();
        if (pUVar3 != (UDS_LogManager *)0x0) {
          pUVar3 = UDS_LogManager::GetInst();
          local_138._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_138,"UDS_VM_W_Accountlist::OnButtonClickEvent",0x28,Yes);
          UDS_LogManager::PrintLog
                    (pUVar3,1,Warning,local_138.Ptr,0x36,L"UDS_LoginState is invalid.");
          if ((void *)local_138._padding_ != (void *)0x0) {
            FMemory::Free((void *)local_138._padding_);
          }
        }
      }
    }
  }
  return;
}

// OnEditText @ 14bfbc4c0

void __thiscall
UDS_VM_W_Accountlist::OnEditText(UDS_VM_W_Accountlist *this,FDS_TextCommittedEventField *param_1)

{
  bool bVar1;
  UDS_AccountLocalSave *this_00;
  FWeakObjectPtr local_res18 [2];
  
  UDS_AccountLocalSave::GetInst();
  bVar1 = FWeakObjectPtr::IsValid(local_res18);
  if (bVar1) {
    this_00 = (UDS_AccountLocalSave *)FWeakObjectPtr::Get(local_res18);
    UDS_AccountLocalSave::SetAccountMemo(this_00,&this->AccountKey,&param_1->NewText);
  }
  return;
}

// OnSetViewModel @ 14bfc33a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_W_Accountlist::OnSetViewModel
          (UDS_VM_W_Accountlist *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  UDS_LogManager *pUVar4;
  undefined1 auStackY_188 [32];
  TSharedPtr<FDS_ViewModelContext_AccountInfo,1> local_158;
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
  SafeCast<FDS_ViewModelContext_AccountInfo>(&local_158,&local_148);
  if (local_158.Object == (FDS_ViewModelContext_AccountInfo *)0x0) {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 != (UDS_LogManager *)0x0) {
      pUVar4 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_VM_W_Accountlist::OnSetViewModel",0x24,Yes);
      UDS_LogManager::PrintLog
                (pUVar4,1,Warning,local_138.Ptr,0x12,L"accountInfoContext.IsValid() == false");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  else {
    if (local_158.Object == (FDS_ViewModelContext_AccountInfo *)0x0) {
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
    (this->AccountKey).APIServerIndex = ((local_158.Object)->AccountInfo).APIServerIndex;
    ::FString::operator=(&(this->AccountKey).AccountID,&((local_158.Object)->AccountInfo).AccountID)
    ;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_158.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

