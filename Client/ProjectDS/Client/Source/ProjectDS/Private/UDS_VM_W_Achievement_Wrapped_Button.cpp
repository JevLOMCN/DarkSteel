// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 11

// StaticClass @ 14b708b70

UClass * __cdecl UDS_VM_W_Achievement_Wrapped_Button::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_W_Achievement_Wrapped_Button.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_W_Achievement_Wrapped_Button",
               &Z_Registration_Info_UClass_UDS_VM_W_Achievement_Wrapped_Button.InnerSingleton,
               StaticRegisterNativesUDS_VM_W_Achievement_Wrapped_Button,200,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_VM_W_Achievement_Wrapped_Button>,
               InternalVTableHelperCtorCaller<UDS_VM_W_Achievement_Wrapped_Button>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_W_Achievement_Wrapped_Button.InnerSingleton;
}

// UDS_VM_W_Achievement_Wrapped_Button @ 14b7107a0

UDS_VM_W_Achievement_Wrapped_Button * __thiscall
UDS_VM_W_Achievement_Wrapped_Button::UDS_VM_W_Achievement_Wrapped_Button
          (UDS_VM_W_Achievement_Wrapped_Button *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_W_Achievement_Wrapped_Button__6B_;
  (this->ButtonViewModel).field0_0x0.DebugPtr = (UDS_VM_CommonIconTextButton *)0x0;
  this->CategoryID = 0;
  *(undefined8 *)&this->AchievementCategoryChangeDelegate = 0;
  *(undefined8 *)&(this->AchievementCategoryChangeDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->AchievementCategoryChangeDelegate).field_0x10 = 0;
  return this;
}

// UDS_VM_W_Achievement_Wrapped_Button @ 14b710800

UDS_VM_W_Achievement_Wrapped_Button * __thiscall
UDS_VM_W_Achievement_Wrapped_Button::UDS_VM_W_Achievement_Wrapped_Button
          (UDS_VM_W_Achievement_Wrapped_Button *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_W_Achievement_Wrapped_Button__6B_;
  (this->ButtonViewModel).field0_0x0.DebugPtr = (UDS_VM_CommonIconTextButton *)0x0;
  this->CategoryID = 0;
  *(undefined8 *)&this->AchievementCategoryChangeDelegate = 0;
  *(undefined8 *)&(this->AchievementCategoryChangeDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->AchievementCategoryChangeDelegate).field_0x10 = 0;
  return this;
}

// ~UDS_VM_W_Achievement_Wrapped_Button @ 14b712f80

void __thiscall
UDS_VM_W_Achievement_Wrapped_Button::~UDS_VM_W_Achievement_Wrapped_Button
          (UDS_VM_W_Achievement_Wrapped_Button *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_W_Achievement_Wrapped_Button__6B_;
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->AchievementCategoryChangeDelegate);
  pvVar1 = *(void **)&(this->AchievementCategoryChangeDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->AchievementCategoryChangeDelegate);
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b716910

IClassDescriptor * __thiscall
UDS_VM_W_Achievement_Wrapped_Button::GetFieldNotificationDescriptor
          (UDS_VM_W_Achievement_Wrapped_Button *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_W_Achievement_Wrapped_Button::FFieldNotificationClassDescriptor::GetDescriptor'
             ::__l2::_dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b717590

UClass * __cdecl UDS_VM_W_Achievement_Wrapped_Button::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_W_Achievement_Wrapped_Button.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_W_Achievement_Wrapped_Button",
               &Z_Registration_Info_UClass_UDS_VM_W_Achievement_Wrapped_Button.InnerSingleton,
               StaticRegisterNativesUDS_VM_W_Achievement_Wrapped_Button,200,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_VM_W_Achievement_Wrapped_Button>,
               InternalVTableHelperCtorCaller<UDS_VM_W_Achievement_Wrapped_Button>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_W_Achievement_Wrapped_Button.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_W_Achievement_Wrapped_Button @ 14b718920

void __cdecl
UDS_VM_W_Achievement_Wrapped_Button::StaticRegisterNativesUDS_VM_W_Achievement_Wrapped_Button(void)

{
  return;
}

// InitViewModel @ 14bfaf570

void __thiscall
UDS_VM_W_Achievement_Wrapped_Button::InitViewModel(UDS_VM_W_Achievement_Wrapped_Button *this)

{
  UDS_VM_CommonIconTextButton *pUVar1;
  
  if ((this->ButtonViewModel).field0_0x0.DebugPtr == (UDS_VM_CommonIconTextButton *)0x0) {
    pUVar1 = UDS_ViewModelBase::CreateViewModel<UDS_VM_CommonIconTextButton>((UObject *)this);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar1 != (UDS_VM_CommonIconTextButton *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    (this->ButtonViewModel).field0_0x0.DebugPtr = pUVar1;
  }
  return;
}

// OnChangedSelect @ 14bfb7470

void __thiscall
UDS_VM_W_Achievement_Wrapped_Button::OnChangedSelect
          (UDS_VM_W_Achievement_Wrapped_Button *this,int param_1)

{
  return;
}

// OnClick @ 14bfb7da0

void __thiscall
UDS_VM_W_Achievement_Wrapped_Button::OnClick
          (UDS_VM_W_Achievement_Wrapped_Button *this,FDS_ButtonEventField *param_1)

{
  int iVar1;
  char cVar2;
  longlong *plVar3;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &this->AchievementCategoryChangeDelegate,&local_28);
  if ((*(int *)&(this->AchievementCategoryChangeDelegate).field_0x10 != 0) &&
     (plVar3 = *(longlong **)&(this->AchievementCategoryChangeDelegate).field_0x8,
     plVar3 != (longlong *)0x0)) {
    cVar2 = (**(code **)(*plVar3 + 0x38))();
    if (cVar2 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      iVar1 = this->CategoryID;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                 &this->AchievementCategoryChangeDelegate,&local_28);
      if (*(int *)&(this->AchievementCategoryChangeDelegate).field_0x10 == 0) {
        plVar3 = (longlong *)0x0;
      }
      else {
        plVar3 = *(longlong **)&(this->AchievementCategoryChangeDelegate).field_0x8;
      }
      (**(code **)(*plVar3 + 0x60))(plVar3,iVar1);
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return;
}

// OnSetViewModel @ 14bfc37c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_W_Achievement_Wrapped_Button::OnSetViewModel
          (UDS_VM_W_Achievement_Wrapped_Button *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  FName FVar1;
  UDS_VM_CommonIconTextButton *this_00;
  UDS_LogManager *pUVar2;
  TReferenceControllerBase<1> *pTVar3;
  undefined1 auStackY_198 [32];
  uint uVar4;
  wchar_t *pwVar5;
  TSharedPtr<FDS_ViewModelContext_CommonIconTextButton,1> local_168;
  TSharedPtr<FDS_ViewModelContext,1> local_158;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_198;
  pTVar3 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  FVar1 = (FName)param_1->Object;
  if (FVar1 == (FName)0x0) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 != (UDS_LogManager *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"UDS_VM_W_Achievement_Wrapped_Button::OnSetViewModel",0x33,Yes);
      UDS_LogManager::PrintLog(pUVar2,1,Warning,local_148.Ptr,0xf,L"InViewModelContext is nullptr.")
      ;
      if ((void *)local_148._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_148._padding_);
      }
    }
    goto LAB_14bfc39de;
  }
  local_158.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_158.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_158.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_158.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_158.Object = (FDS_ViewModelContext *)FVar1;
  SafeCast<FDS_ViewModelContext_CommonIconTextButton>(&local_168,&local_158);
  if ((FName)local_168.Object == (FName)0x0) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 != (UDS_LogManager *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"UDS_VM_W_Achievement_Wrapped_Button::OnSetViewModel",0x33,Yes);
      pwVar5 = L"achievementCategoryContext is nullptr.";
      uVar4 = 0x16;
LAB_14bfc38fc:
      UDS_LogManager::PrintLog(pUVar2,1,Warning,local_148.Ptr,uVar4,pwVar5);
      if ((void *)local_148._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_148._padding_);
      }
    }
LAB_14bfc3921:
    pTVar3 = (TReferenceControllerBase<1> *)
             CONCAT44(local_168.SharedReferenceCount.ReferenceController._4_4_,
                      (int)local_168.SharedReferenceCount.ReferenceController);
  }
  else {
    this_00 = (this->ButtonViewModel).field0_0x0.DebugPtr;
    if (this_00 == (UDS_VM_CommonIconTextButton *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      if (pUVar2 != (UDS_LogManager *)0x0) {
        pUVar2 = UDS_LogManager::GetInst();
        local_148._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_148,"UDS_VM_W_Achievement_Wrapped_Button::OnSetViewModel",0x33,Yes);
        pwVar5 = L"ButtonViewModel is nullptr.";
        uVar4 = 0x1e;
        goto LAB_14bfc38fc;
      }
      goto LAB_14bfc3921;
    }
    pTVar3 = (TReferenceControllerBase<1> *)
             CONCAT44(local_168.SharedReferenceCount.ReferenceController._4_4_,
                      (int)local_168.SharedReferenceCount.ReferenceController);
    local_158.Object = (FDS_ViewModelContext *)local_168.Object;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_158.SharedReferenceCount.ReferenceController = pTVar3;
    UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)this_00,&local_158);
    local_168.SharedReferenceCount.ReferenceController._0_4_ =
         FFieldNotificationClassDescriptor::ButtonViewModel.BitNumber;
    local_168.Object =
         (FDS_ViewModelContext_CommonIconTextButton *)
         FFieldNotificationClassDescriptor::ButtonViewModel.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_168);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
LAB_14bfc39de:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

