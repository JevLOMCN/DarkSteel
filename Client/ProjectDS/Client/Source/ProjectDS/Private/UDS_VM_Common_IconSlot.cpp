// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 19

// SetIconID_WrapperImpl @ 14b6298a0

void __cdecl UDS_VM_Common_IconSlot::SetIconID_WrapperImpl(void *param_1,void *param_2)

{
  SetIconID(param_1,*(int *)param_2);
  return;
}

// SetbIsSelected_WrapperImpl @ 14b6298b0

void __cdecl UDS_VM_Common_IconSlot::SetbIsSelected_WrapperImpl(void *param_1,void *param_2)

{
  SetSelected(param_1,*(bool *)param_2);
  return;
}

// SetClickIcon_WrapperImpl @ 14b6298c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UDS_VM_Common_IconSlot::SetClickIcon_WrapperImpl(void *param_1,void *param_2)

{
  uint uVar1;
  UDS_LogManager *pUVar2;
  UDS_UIEvent *pUVar3;
  uint *puVar4;
  TMulticastDelegate<void___cdecl(int,int),FDefaultTSDelegateUserPolicy> *this;
  undefined1 *puVar5;
  undefined1 auStackY_178 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> TStack_138;
  ulonglong uStack_18;
  
  uStack_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  pUVar2 = UDS_LogManager::GetInst();
  if (pUVar2 != (UDS_LogManager *)0x0) {
    pUVar2 = UDS_LogManager::GetInst();
    TStack_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&TStack_138,"UDS_VM_Common_IconSlot::OnClickIcon",0x23,Yes);
    UDS_LogManager::PrintLog
              (pUVar2,1,Display,TStack_138.Ptr,0x3c,
               L"UDS_VM_Common_IconSlot::OnClickIcon() - IconID : %d");
    if ((void *)TStack_138._padding_ != (void *)0x0) {
      FMemory::Free((void *)TStack_138._padding_);
    }
  }
  pUVar3 = UDS_UIEvent::GetEvent();
  if ((pUVar3 != (UDS_UIEvent *)0x0) &&
     (*(int *)&(pUVar3->OnSelectedIconSlot).Subscriptions.field_0x8 !=
      *(int *)&(pUVar3->OnSelectedIconSlot).Subscriptions.field_0x34)) {
    puVar5 = *(undefined1 **)&(pUVar3->OnSelectedIconSlot).Subscriptions.field_0x40;
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = &(pUVar3->OnSelectedIconSlot).Subscriptions.field_0x38;
    }
    uVar1 = *(uint *)(puVar5 + (ulonglong)
                               (*(int *)&(pUVar3->OnSelectedIconSlot).Subscriptions.field_0x48 - 1U
                               & *(uint *)((longlong)param_1 + 0x218)) * 4);
    if (uVar1 != 0xffffffff) {
      do {
        puVar4 = (uint *)((longlong)(int)uVar1 * 0x50 +
                         *(longlong *)&(pUVar3->OnSelectedIconSlot).Subscriptions);
        if (*puVar4 == *(uint *)((longlong)param_1 + 0x218)) {
          this = (TMulticastDelegate<void___cdecl(int,int),FDefaultTSDelegateUserPolicy> *)
                 (puVar4 + 2);
          if (puVar4 == (uint *)0x0) {
            this = (TMulticastDelegate<void___cdecl(int,int),FDefaultTSDelegateUserPolicy> *)0x0;
          }
          if (this == (TMulticastDelegate<void___cdecl(int,int),FDefaultTSDelegateUserPolicy> *)0x0)
          {
            return;
          }
          TMulticastDelegate<void___cdecl(int,int),FDefaultTSDelegateUserPolicy>::Broadcast
                    (this,*(int *)((longlong)param_1 + 0x21c),*(int *)((longlong)param_1 + 0xa0));
          return;
        }
        uVar1 = puVar4[0x12];
      } while (uVar1 != 0xffffffff);
    }
  }
  return;
}

// SetEventMouseEnter_WrapperImpl @ 14b629990

void __cdecl UDS_VM_Common_IconSlot::SetEventMouseEnter_WrapperImpl(void *param_1,void *param_2)

{
  FName aFStackX_8 [4];
  FName FStack_18;
  int iStack_10;
  
  ::FName::FName(aFStackX_8,"Hover_Ani");
  *(FName *)((longlong)param_1 + 0x1d0) = aFStackX_8[0];
  *(undefined1 *)((longlong)param_1 + 0x1dc) = 2;
  iStack_10 = FFieldNotificationClassDescriptor::AnimationEvent.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::AnimationEvent.FieldName;
  (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
            ((longlong *)((longlong)param_1 + 0x28),&FStack_18);
  return;
}

// StaticClass @ 14b629a90

UClass * __cdecl UDS_VM_Common_IconSlot::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_Common_IconSlot.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_Common_IconSlot",
               &Z_Registration_Info_UClass_UDS_VM_Common_IconSlot.InnerSingleton,
               StaticRegisterNativesUDS_VM_Common_IconSlot,0x220,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_Common_IconSlot>,
               InternalVTableHelperCtorCaller<UDS_VM_Common_IconSlot>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_Common_IconSlot.InnerSingleton;
}

// UDS_VM_Common_IconSlot @ 14b62c630

UDS_VM_Common_IconSlot * __thiscall
UDS_VM_Common_IconSlot::UDS_VM_Common_IconSlot(UDS_VM_Common_IconSlot *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  (this->ClickIcon)._padding_ = '\0';
  (this->ClickIcon).bIsCustomSelected = false;
  (this->ClickIcon).bIsLacked = false;
  (this->ClickIcon).bIsCustomDisabled = false;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_Common_IconSlot__6B_;
  *(undefined8 *)&(this->ClickIcon).Delegate = 0;
  *(undefined8 *)&(this->ClickIcon).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickIcon).Delegate.field_0x10 = 0;
  FDS_WidgetPointerEventField::FDS_WidgetPointerEventField(&this->EventMouseEnter);
  (this->AnimationEvent).AnimationName.ComparisonIndex = 0;
  (this->AnimationEvent).AnimationName.Number = 0;
  (this->AnimationEvent).AnimationPlayTime = 0.0;
  (this->AnimationEvent).AnimationEventType = None;
  (this->AnimationEvent).AnimationStateType = None;
  (this->AnimationEvent).NumberOfLoops = 1;
  *(undefined8 *)&(this->AnimationEvent).Delegate_AnimationFinish = 0;
  *(undefined8 *)&(this->AnimationEvent).Delegate_AnimationFinish.field_0x8 = 0;
  *(undefined4 *)&(this->AnimationEvent).Delegate_AnimationFinish.field_0x10 = 0;
  *(undefined8 *)&(this->AnimationEvent).Delegate_ValidAnimation = 0;
  *(undefined8 *)&(this->AnimationEvent).Delegate_ValidAnimation.field_0x8 = 0;
  *(undefined4 *)&(this->AnimationEvent).Delegate_ValidAnimation.field_0x10 = 0;
  this->ParentViewModelTemplateKey = None;
  this->IconTableID = 0;
  return this;
}

// UDS_VM_Common_IconSlot @ 14b62c6f0

UDS_VM_Common_IconSlot * __thiscall
UDS_VM_Common_IconSlot::UDS_VM_Common_IconSlot
          (UDS_VM_Common_IconSlot *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  (this->ClickIcon)._padding_ = '\0';
  (this->ClickIcon).bIsCustomSelected = false;
  (this->ClickIcon).bIsLacked = false;
  (this->ClickIcon).bIsCustomDisabled = false;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_Common_IconSlot__6B_;
  *(undefined8 *)&(this->ClickIcon).Delegate = 0;
  *(undefined8 *)&(this->ClickIcon).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickIcon).Delegate.field_0x10 = 0;
  FDS_WidgetPointerEventField::FDS_WidgetPointerEventField(&this->EventMouseEnter);
  (this->AnimationEvent).AnimationName.ComparisonIndex = 0;
  (this->AnimationEvent).AnimationName.Number = 0;
  (this->AnimationEvent).AnimationPlayTime = 0.0;
  (this->AnimationEvent).AnimationEventType = None;
  (this->AnimationEvent).AnimationStateType = None;
  (this->AnimationEvent).NumberOfLoops = 1;
  *(undefined8 *)&(this->AnimationEvent).Delegate_AnimationFinish = 0;
  *(undefined8 *)&(this->AnimationEvent).Delegate_AnimationFinish.field_0x8 = 0;
  *(undefined4 *)&(this->AnimationEvent).Delegate_AnimationFinish.field_0x10 = 0;
  *(undefined8 *)&(this->AnimationEvent).Delegate_ValidAnimation = 0;
  *(undefined8 *)&(this->AnimationEvent).Delegate_ValidAnimation.field_0x8 = 0;
  *(undefined4 *)&(this->AnimationEvent).Delegate_ValidAnimation.field_0x10 = 0;
  this->ParentViewModelTemplateKey = None;
  this->IconTableID = 0;
  return this;
}

// ~UDS_VM_Common_IconSlot @ 14b62ebd0

void __thiscall UDS_VM_Common_IconSlot::~UDS_VM_Common_IconSlot(UDS_VM_Common_IconSlot *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_Common_IconSlot__6B_;
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(this->AnimationEvent).Delegate_ValidAnimation);
  pvVar1 = *(void **)&(this->AnimationEvent).Delegate_ValidAnimation.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->AnimationEvent).Delegate_ValidAnimation);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(this->AnimationEvent).Delegate_AnimationFinish);
  pvVar1 = *(void **)&(this->AnimationEvent).Delegate_AnimationFinish.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->AnimationEvent).Delegate_AnimationFinish);
  FKeyEvent::~FKeyEvent(&(this->EventMouseEnter).KeyEvent);
  FPointerEvent::~FPointerEvent(&(this->EventMouseEnter).PointerEvent);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ClickIcon).Delegate);
  pvVar1 = *(void **)&(this->ClickIcon).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ClickIcon).Delegate);
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b6317c0

IClassDescriptor * __thiscall
UDS_VM_Common_IconSlot::GetFieldNotificationDescriptor(UDS_VM_Common_IconSlot *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_Common_IconSlot::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b6321e0

UClass * __cdecl UDS_VM_Common_IconSlot::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_Common_IconSlot.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_Common_IconSlot",
               &Z_Registration_Info_UClass_UDS_VM_Common_IconSlot.InnerSingleton,
               StaticRegisterNativesUDS_VM_Common_IconSlot,0x220,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_Common_IconSlot>,
               InternalVTableHelperCtorCaller<UDS_VM_Common_IconSlot>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_Common_IconSlot.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_Common_IconSlot @ 14b632f90

void __cdecl UDS_VM_Common_IconSlot::StaticRegisterNativesUDS_VM_Common_IconSlot(void)

{
  return;
}

// BindModel @ 14bdb1230

void __thiscall UDS_VM_Common_IconSlot::BindModel(UDS_VM_Common_IconSlot *this)

{
  UDS_UIEvent *pUVar1;
  TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *this_00;
  
  UDS_ViewModelBase::BindModel((UDS_ViewModelBase *)this);
  pUVar1 = UDS_UIEvent::GetEvent();
  if (pUVar1 != (UDS_UIEvent *)0x0) {
    this_00 = (TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)
              TMapBase<enum_EDS_ViewModelTemplateKey_const_,TMulticastDelegate<void___cdecl(int,int),FDefaultTSDelegateUserPolicy>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_ViewModelTemplateKey_const_,TMulticastDelegate<void___cdecl(int,int),FDefaultTSDelegateUserPolicy>,0>_>
              ::FindOrAddImpl<enum_EDS_ViewModelTemplateKey_const_&>
                        (&(pUVar1->OnSelectedIconSlot).Subscriptions,
                         this->ParentViewModelTemplateKey,&this->ParentViewModelTemplateKey);
    TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::RemoveAll(this_00,this);
    TMulticastDelegateRegistration<void___cdecl(int,int),FDefaultTSDelegateUserPolicy>::
    AddUObject<UDS_VM_Common_IconSlot>
              ((TMulticastDelegateRegistration<void___cdecl(int,int),FDefaultTSDelegateUserPolicy> *
               )this_00,(UDS_VM_Common_IconSlot *)&stack0x00000010,(pmf_db8937d4 *)this);
  }
  return;
}

// OnClickIcon @ 14bdccf90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_Common_IconSlot::OnClickIcon(UDS_VM_Common_IconSlot *this,FDS_ButtonEventField *param_1)

{
  EDS_ViewModelTemplateKey EVar1;
  UDS_LogManager *pUVar2;
  UDS_UIEvent *pUVar3;
  EDS_ViewModelTemplateKey *pEVar4;
  TMulticastDelegate<void___cdecl(int,int),FDefaultTSDelegateUserPolicy> *this_00;
  undefined1 *puVar5;
  undefined1 auStackY_178 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  pUVar2 = UDS_LogManager::GetInst();
  if (pUVar2 != (UDS_LogManager *)0x0) {
    pUVar2 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_VM_Common_IconSlot::OnClickIcon",0x23,Yes);
    UDS_LogManager::PrintLog
              (pUVar2,1,Display,local_138.Ptr,0x3c,
               L"UDS_VM_Common_IconSlot::OnClickIcon() - IconID : %d");
    if ((void *)local_138._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_138._padding_);
    }
  }
  pUVar3 = UDS_UIEvent::GetEvent();
  if ((pUVar3 != (UDS_UIEvent *)0x0) &&
     (*(int *)&(pUVar3->OnSelectedIconSlot).Subscriptions.field_0x8 !=
      *(int *)&(pUVar3->OnSelectedIconSlot).Subscriptions.field_0x34)) {
    puVar5 = *(undefined1 **)&(pUVar3->OnSelectedIconSlot).Subscriptions.field_0x40;
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = &(pUVar3->OnSelectedIconSlot).Subscriptions.field_0x38;
    }
    EVar1 = *(EDS_ViewModelTemplateKey *)
             (puVar5 + (ulonglong)
                       (*(int *)&(pUVar3->OnSelectedIconSlot).Subscriptions.field_0x48 - W_Patcher &
                       this->ParentViewModelTemplateKey) * 4);
    if (EVar1 != ~None) {
      do {
        pEVar4 = (EDS_ViewModelTemplateKey *)
                 ((longlong)(int)EVar1 * 0x50 +
                 *(longlong *)&(pUVar3->OnSelectedIconSlot).Subscriptions);
        if (*pEVar4 == this->ParentViewModelTemplateKey) {
          this_00 = (TMulticastDelegate<void___cdecl(int,int),FDefaultTSDelegateUserPolicy> *)
                    (pEVar4 + 2);
          if (pEVar4 == (EDS_ViewModelTemplateKey *)0x0) {
            this_00 = (TMulticastDelegate<void___cdecl(int,int),FDefaultTSDelegateUserPolicy> *)0x0;
          }
          if (this_00 ==
              (TMulticastDelegate<void___cdecl(int,int),FDefaultTSDelegateUserPolicy> *)0x0) {
            return;
          }
          TMulticastDelegate<void___cdecl(int,int),FDefaultTSDelegateUserPolicy>::Broadcast
                    (this_00,this->IconTableID,this->IconID);
          return;
        }
        EVar1 = pEVar4[0x12];
      } while (EVar1 != ~None);
    }
  }
  return;
}

// OnEventMouseEnter @ 14bdce730

void __thiscall
UDS_VM_Common_IconSlot::OnEventMouseEnter
          (UDS_VM_Common_IconSlot *this,FDS_WidgetPointerEventField *param_1)

{
  FName local_res8 [4];
  FName local_18;
  int local_10;
  
  ::FName::FName(local_res8,"Hover_Ani");
  (this->AnimationEvent).AnimationName = local_res8[0];
  (this->AnimationEvent).AnimationEventType = PlayForward;
  local_10 = FFieldNotificationClassDescriptor::AnimationEvent.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::AnimationEvent.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// OnSelectedIconSlot @ 14bdd1c20

void __thiscall
UDS_VM_Common_IconSlot::OnSelectedIconSlot(UDS_VM_Common_IconSlot *this,int param_1,int param_2)

{
  bool bVar1;
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::bIsSelected.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::bIsSelected.FieldName;
  if ((this->IconTableID == param_1) && (this->IconID == param_2)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if (this->bIsSelected != bVar1) {
    this->bIsSelected = bVar1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// OnSetViewModel @ 14bdd8320

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_Common_IconSlot::OnSetViewModel
          (UDS_VM_Common_IconSlot *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  FName FVar3;
  bool bVar4;
  UDS_LogManager *pUVar5;
  undefined1 auStackY_1a8 [32];
  TSharedPtr<FDS_ViewModelContext_IconSlot,1> local_178;
  FName local_168;
  int local_160;
  FName local_158;
  int local_150;
  TSharedPtr<FDS_ViewModelContext,1> local_148;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
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
  SafeCast<FDS_ViewModelContext_IconSlot>(&local_178,&local_148);
  if (local_178.Object == (FDS_ViewModelContext_IconSlot *)0x0) {
    pUVar5 = UDS_LogManager::GetInst();
    if (pUVar5 != (UDS_LogManager *)0x0) {
      pUVar5 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_VM_Common_IconSlot::OnSetViewModel",0x26,Yes);
      UDS_LogManager::PrintLog
                (pUVar5,1,Warning,local_138.Ptr,0x11,L"iconSlotContext.IsValid() == false");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  else {
    if (local_178.Object == (FDS_ViewModelContext_IconSlot *)0x0) {
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
    this->ParentViewModelTemplateKey = (local_178.Object)->ParentViewModelTemplateKey;
    this->IconTableID = (local_178.Object)->IconTableID;
    FVar3 = FFieldNotificationClassDescriptor::IconID.FieldName;
    if (this->IconID != (local_178.Object)->IconID) {
      local_160 = FFieldNotificationClassDescriptor::IconID.BitNumber;
      this->IconID = (local_178.Object)->IconID;
      local_168 = FVar3;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_168);
    }
    FVar3 = FFieldNotificationClassDescriptor::bIsSelected.FieldName;
    if (this->bIsSelected != (local_178.Object)->bIsSelected) {
      local_150 = FFieldNotificationClassDescriptor::bIsSelected.BitNumber;
      this->bIsSelected = (local_178.Object)->bIsSelected;
      local_158 = FVar3;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_158);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_178.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// SetIconID @ 14bde65e0

void __thiscall UDS_VM_Common_IconSlot::SetIconID(UDS_VM_Common_IconSlot *this,int param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::IconID.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::IconID.FieldName;
  if (this->IconID != param_1) {
    this->IconID = param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetSelected @ 14bde8d30

void __thiscall UDS_VM_Common_IconSlot::SetSelected(UDS_VM_Common_IconSlot *this,bool param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::bIsSelected.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::bIsSelected.FieldName;
  if (this->bIsSelected != param_1) {
    this->bIsSelected = param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// UnbindModel @ 14bdec900

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void __thiscall UDS_VM_Common_IconSlot::UnbindModel(UDS_VM_Common_IconSlot *this)

{
  UDS_LanguageManager *pUVar1;
  UDS_UIEvent *pUVar2;
  
  pUVar1 = UDS_LanguageManager::GetInst();
  if (pUVar1 != (UDS_LanguageManager *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->OnLanguageChanged,this
              );
  }
  pUVar2 = UDS_UIEvent::GetEvent();
  if (pUVar2 != (UDS_UIEvent *)0x0) {
    FDS_FilteredEventDelegate<enum_EDS_ViewModelTemplateKey_const_,int_const_,int_const_>::
    Remove<UDS_VM_Common_IconSlot>(&pUVar2->OnSelectedIconSlot,this);
  }
  return;
}

