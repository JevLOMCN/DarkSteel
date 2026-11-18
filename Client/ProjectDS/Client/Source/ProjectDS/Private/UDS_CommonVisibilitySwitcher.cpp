// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 9

// SetSwitcherIndex_WrapperImpl @ 14b46a6b0

void __cdecl UDS_CommonVisibilitySwitcher::SetSwitcherIndex_WrapperImpl(void *param_1,void *param_2)

{
  SetSwitcherIndex(param_1,*(int *)param_2);
  return;
}

// StaticClass @ 14b46a6c0

UClass * __cdecl UDS_CommonVisibilitySwitcher::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_CommonVisibilitySwitcher.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_CommonVisibilitySwitcher",
               &Z_Registration_Info_UClass_UDS_CommonVisibilitySwitcher.InnerSingleton,
               StaticRegisterNativesUDS_CommonVisibilitySwitcher,0x210,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_CommonVisibilitySwitcher>,
               InternalVTableHelperCtorCaller<UDS_CommonVisibilitySwitcher>,local_res8,
               UCommonVisibilitySwitcher::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_CommonVisibilitySwitcher.InnerSingleton;
}

// UDS_CommonVisibilitySwitcher @ 14b470650

UDS_CommonVisibilitySwitcher * __thiscall
UDS_CommonVisibilitySwitcher::UDS_CommonVisibilitySwitcher
          (UDS_CommonVisibilitySwitcher *this,FVTableHelper *param_1)

{
  UCommonVisibilitySwitcher::UCommonVisibilitySwitcher((UCommonVisibilitySwitcher *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  return this;
}

// UDS_CommonVisibilitySwitcher @ 14b470690

UDS_CommonVisibilitySwitcher * __thiscall
UDS_CommonVisibilitySwitcher::UDS_CommonVisibilitySwitcher
          (UDS_CommonVisibilitySwitcher *this,FObjectInitializer *param_1)

{
  UCommonVisibilitySwitcher::UCommonVisibilitySwitcher((UCommonVisibilitySwitcher *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  return this;
}

// ~UDS_CommonVisibilitySwitcher @ 14b4722c0

void __thiscall
UDS_CommonVisibilitySwitcher::~UDS_CommonVisibilitySwitcher(UDS_CommonVisibilitySwitcher *this)

{
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  UCommonVisibilitySwitcher::~UCommonVisibilitySwitcher((UCommonVisibilitySwitcher *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b474e70

IClassDescriptor * __thiscall
UDS_CommonVisibilitySwitcher::GetFieldNotificationDescriptor(UDS_CommonVisibilitySwitcher *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_CommonVisibilitySwitcher::FFieldNotificationClassDescriptor::GetDescriptor'::__l2
             ::_dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b474fa0

UClass * __cdecl UDS_CommonVisibilitySwitcher::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_CommonVisibilitySwitcher.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_CommonVisibilitySwitcher",
               &Z_Registration_Info_UClass_UDS_CommonVisibilitySwitcher.InnerSingleton,
               StaticRegisterNativesUDS_CommonVisibilitySwitcher,0x210,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_CommonVisibilitySwitcher>,
               InternalVTableHelperCtorCaller<UDS_CommonVisibilitySwitcher>,local_res8,
               UCommonVisibilitySwitcher::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_CommonVisibilitySwitcher.InnerSingleton;
}

// StaticRegisterNativesUDS_CommonVisibilitySwitcher @ 14b476c30

void __cdecl UDS_CommonVisibilitySwitcher::StaticRegisterNativesUDS_CommonVisibilitySwitcher(void)

{
  return;
}

// SetSwitcherIndex @ 14bcc9120

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_CommonVisibilitySwitcher::SetSwitcherIndex(UDS_CommonVisibilitySwitcher *this,int param_1)

{
  FFieldId local_18;
  
  if (*(int *)((longlong)&this->_padding_ + 4) != param_1) {
    this->SwitcherIndex = param_1;
    UCommonVisibilitySwitcher::SetActiveWidgetIndex((UCommonVisibilitySwitcher *)this,param_1);
    local_18.FieldName = FFieldNotificationClassDescriptor::SwitcherIndex.FieldName;
    local_18.BitNumber = FFieldNotificationClassDescriptor::SwitcherIndex.BitNumber;
    UWidget::BroadcastFieldValueChanged((UWidget *)&this->_padding_,&local_18);
  }
  return;
}

