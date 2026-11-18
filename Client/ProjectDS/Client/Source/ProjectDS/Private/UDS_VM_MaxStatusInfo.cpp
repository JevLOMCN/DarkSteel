// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 9

// StaticClass @ 14b694a90

UClass * __cdecl UDS_VM_MaxStatusInfo::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_MaxStatusInfo.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_MaxStatusInfo",
               &Z_Registration_Info_UClass_UDS_VM_MaxStatusInfo.InnerSingleton,
               StaticRegisterNativesUDS_VM_MaxStatusInfo,0xe8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_MaxStatusInfo>,
               InternalVTableHelperCtorCaller<UDS_VM_MaxStatusInfo>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_MaxStatusInfo.InnerSingleton;
}

// UDS_VM_MaxStatusInfo @ 14b699df0

UDS_VM_MaxStatusInfo * __thiscall
UDS_VM_MaxStatusInfo::UDS_VM_MaxStatusInfo(UDS_VM_MaxStatusInfo *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_MaxStatusInfo__6B_;
  FText::FText(&this->BeforeStatusText);
  FText::FText(&this->AfterStatusText);
  FText::FText(&this->BeforeMaxStatusText);
  FText::FText(&this->AfterMaxStatusText);
  this->MaxStatusVisibility = Visible;
  return this;
}

// UDS_VM_MaxStatusInfo @ 14b699e70

UDS_VM_MaxStatusInfo * __thiscall
UDS_VM_MaxStatusInfo::UDS_VM_MaxStatusInfo(UDS_VM_MaxStatusInfo *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_MaxStatusInfo__6B_;
  FText::FText(&this->BeforeStatusText);
  FText::FText(&this->AfterStatusText);
  FText::FText(&this->BeforeMaxStatusText);
  FText::FText(&this->AfterMaxStatusText);
  this->MaxStatusVisibility = Visible;
  return this;
}

// ~UDS_VM_MaxStatusInfo @ 14b69b140

void __thiscall UDS_VM_MaxStatusInfo::~UDS_VM_MaxStatusInfo(UDS_VM_MaxStatusInfo *this)

{
  ITextData *pIVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_MaxStatusInfo__6B_;
  pIVar1 = (this->AfterMaxStatusText).TextData.Reference;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x10))();
  }
  pIVar1 = (this->BeforeMaxStatusText).TextData.Reference;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x10))();
  }
  pIVar1 = (this->AfterStatusText).TextData.Reference;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x10))();
  }
  pIVar1 = (this->BeforeStatusText).TextData.Reference;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x10))();
  }
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b69d5d0

IClassDescriptor * __thiscall
UDS_VM_MaxStatusInfo::GetFieldNotificationDescriptor(UDS_VM_MaxStatusInfo *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_MaxStatusInfo::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b69e260

UClass * __cdecl UDS_VM_MaxStatusInfo::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_MaxStatusInfo.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_MaxStatusInfo",
               &Z_Registration_Info_UClass_UDS_VM_MaxStatusInfo.InnerSingleton,
               StaticRegisterNativesUDS_VM_MaxStatusInfo,0xe8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_MaxStatusInfo>,
               InternalVTableHelperCtorCaller<UDS_VM_MaxStatusInfo>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_MaxStatusInfo.InnerSingleton;
}

// ShouldSaveViewModelContext @ 14b69e5b0

bool __thiscall UDS_VM_MaxStatusInfo::ShouldSaveViewModelContext(UDS_VM_MaxStatusInfo *this)

{
  return true;
}

// StaticRegisterNativesUDS_VM_MaxStatusInfo @ 14b69e7d0

void __cdecl UDS_VM_MaxStatusInfo::StaticRegisterNativesUDS_VM_MaxStatusInfo(void)

{
  return;
}

// OnSetViewModel @ 14bddc980

void __thiscall
UDS_VM_MaxStatusInfo::OnSetViewModel
          (UDS_VM_MaxStatusInfo *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  FText *pFVar2;
  FString local_f8;
  FString local_e8;
  FString local_d8;
  FString local_c8;
  FName local_b8;
  int local_b0;
  FName local_a8;
  int local_a0;
  FName local_98;
  int local_90;
  FName local_88;
  int local_80;
  FName local_78;
  int local_70;
  TSharedPtr<FDS_ViewModelContext_MaxStatusInfo,1> local_68;
  TSharedPtr<FDS_ViewModelContext,1> local_58;
  FText local_48;
  FText local_38;
  FText local_28;
  FText local_18;
  
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  local_58.Object = param_1->Object;
  local_58.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_58.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SafeCast<FDS_ViewModelContext_MaxStatusInfo>(&local_68,&local_58);
  if (local_68.Object == (FDS_ViewModelContext_MaxStatusInfo *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_68.SharedReferenceCount.ReferenceController);
  }
  else {
    local_f8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_f8.Data.ArrayNum = 0;
    local_f8.Data.ArrayMax = 0;
    ::FString::AppendInt(&local_f8,(int)(local_68.Object)->BeforeStatusValue);
    pFVar2 = FText::FromString(&local_48,&local_f8);
    FText::operator=(&this->BeforeStatusText,pFVar2);
    if (local_48.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
    }
    if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f8.Data.AllocatorInstance.Data);
    }
    local_e8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_e8.Data.ArrayNum = 0;
    local_e8.Data.ArrayMax = 0;
    ::FString::AppendInt(&local_e8,(int)(local_68.Object)->AfterStatusValue);
    pFVar2 = FText::FromString(&local_38,&local_e8);
    FText::operator=(&this->AfterStatusText,pFVar2);
    if (local_38.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
    }
    if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e8.Data.AllocatorInstance.Data);
    }
    this->MaxStatusVisibility = Collapsed;
    if ((0 < (local_68.Object)->BeforeMaxStatusValue) &&
       (0 < (local_68.Object)->AfterMaxStatusValue)) {
      local_d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_d8.Data.ArrayNum = 0;
      local_d8.Data.ArrayMax = 0;
      ::FString::AppendInt(&local_d8,(int)(local_68.Object)->BeforeMaxStatusValue);
      pFVar2 = FText::FromString(&local_28,&local_d8);
      FText::operator=(&this->BeforeMaxStatusText,pFVar2);
      if (local_28.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
      }
      if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_d8.Data.AllocatorInstance.Data);
      }
      local_c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_c8.Data.ArrayNum = 0;
      local_c8.Data.ArrayMax = 0;
      ::FString::AppendInt(&local_c8,(int)(local_68.Object)->AfterMaxStatusValue);
      pFVar2 = FText::FromString(&local_18,&local_c8);
      FText::operator=(&this->AfterMaxStatusText,pFVar2);
      if (local_18.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
      }
      if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_c8.Data.AllocatorInstance.Data);
      }
      this->MaxStatusVisibility = SelfHitTestInvisible;
    }
    local_b0 = FFieldNotificationClassDescriptor::BeforeStatusText.BitNumber;
    local_b8 = FFieldNotificationClassDescriptor::BeforeStatusText.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_b8);
    local_a0 = FFieldNotificationClassDescriptor::AfterStatusText.BitNumber;
    local_a8 = FFieldNotificationClassDescriptor::AfterStatusText.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_a8);
    local_90 = FFieldNotificationClassDescriptor::BeforeMaxStatusText.BitNumber;
    local_98 = FFieldNotificationClassDescriptor::BeforeMaxStatusText.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_98);
    local_80 = FFieldNotificationClassDescriptor::AfterMaxStatusText.BitNumber;
    local_88 = FFieldNotificationClassDescriptor::AfterMaxStatusText.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_88);
    local_70 = FFieldNotificationClassDescriptor::MaxStatusVisibility.BitNumber;
    local_78 = FFieldNotificationClassDescriptor::MaxStatusVisibility.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_78);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_68.SharedReferenceCount.ReferenceController);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

