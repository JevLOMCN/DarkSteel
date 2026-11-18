// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 9

// StaticClass @ 14b755110

UClass * __cdecl UDS_VM_W_RingCommand_ToolTip_MenuInfo::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_W_RingCommand_ToolTip_MenuInfo.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_W_RingCommand_ToolTip_MenuInfo",
               &Z_Registration_Info_UClass_UDS_VM_W_RingCommand_ToolTip_MenuInfo.InnerSingleton,
               StaticRegisterNativesUDS_VM_W_RingCommand_ToolTip_MenuInfo,0xc0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_VM_W_RingCommand_ToolTip_MenuInfo>,
               InternalVTableHelperCtorCaller<UDS_VM_W_RingCommand_ToolTip_MenuInfo>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_W_RingCommand_ToolTip_MenuInfo.InnerSingleton;
}

// UDS_VM_W_RingCommand_ToolTip_MenuInfo @ 14b758d90

UDS_VM_W_RingCommand_ToolTip_MenuInfo * __thiscall
UDS_VM_W_RingCommand_ToolTip_MenuInfo::UDS_VM_W_RingCommand_ToolTip_MenuInfo
          (UDS_VM_W_RingCommand_ToolTip_MenuInfo *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_W_RingCommand_ToolTip_MenuInfo__6B_;
  (this->MenuName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MenuName).Data.ArrayNum = 0;
  (this->MenuName).Data.ArrayMax = 0;
  this->MenuID = 0;
  return this;
}

// UDS_VM_W_RingCommand_ToolTip_MenuInfo @ 14b758df0

UDS_VM_W_RingCommand_ToolTip_MenuInfo * __thiscall
UDS_VM_W_RingCommand_ToolTip_MenuInfo::UDS_VM_W_RingCommand_ToolTip_MenuInfo
          (UDS_VM_W_RingCommand_ToolTip_MenuInfo *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_W_RingCommand_ToolTip_MenuInfo__6B_;
  (this->MenuName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MenuName).Data.ArrayNum = 0;
  (this->MenuName).Data.ArrayMax = 0;
  this->MenuID = 0;
  return this;
}

// ~UDS_VM_W_RingCommand_ToolTip_MenuInfo @ 14b75b460

void __thiscall
UDS_VM_W_RingCommand_ToolTip_MenuInfo::~UDS_VM_W_RingCommand_ToolTip_MenuInfo
          (UDS_VM_W_RingCommand_ToolTip_MenuInfo *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_W_RingCommand_ToolTip_MenuInfo__6B_;
  pFVar1 = (this->MenuName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b75dac0

IClassDescriptor * __thiscall
UDS_VM_W_RingCommand_ToolTip_MenuInfo::GetFieldNotificationDescriptor
          (UDS_VM_W_RingCommand_ToolTip_MenuInfo *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_W_RingCommand_ToolTip_MenuInfo::FFieldNotificationClassDescriptor::
             GetDescriptor'::__l2::_dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b75e1f0

UClass * __cdecl UDS_VM_W_RingCommand_ToolTip_MenuInfo::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_W_RingCommand_ToolTip_MenuInfo.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_W_RingCommand_ToolTip_MenuInfo",
               &Z_Registration_Info_UClass_UDS_VM_W_RingCommand_ToolTip_MenuInfo.InnerSingleton,
               StaticRegisterNativesUDS_VM_W_RingCommand_ToolTip_MenuInfo,0xc0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_VM_W_RingCommand_ToolTip_MenuInfo>,
               InternalVTableHelperCtorCaller<UDS_VM_W_RingCommand_ToolTip_MenuInfo>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_W_RingCommand_ToolTip_MenuInfo.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_W_RingCommand_ToolTip_MenuInfo @ 14b75ef10

void __cdecl
UDS_VM_W_RingCommand_ToolTip_MenuInfo::StaticRegisterNativesUDS_VM_W_RingCommand_ToolTip_MenuInfo
          (void)

{
  return;
}

// OnSetViewModel @ 14c034db0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_W_RingCommand_ToolTip_MenuInfo::OnSetViewModel
          (UDS_VM_W_RingCommand_ToolTip_MenuInfo *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  int iVar1;
  TReferenceControllerBase<1> *pTVar2;
  FDS_ViewModelContext *pFVar3;
  UDS_LogManager *pUVar4;
  FDS_ContentsTotalMenuTableRow *pFVar5;
  FString *pFVar6;
  undefined1 auStackY_1a8 [32];
  FName local_178;
  int local_170;
  FName local_168;
  int local_160;
  TSharedPtr<FDS_ViewModelContext_RingCmdTooltip,1> local_158;
  TSharedPtr<FDS_ViewModelContext,1> local_148;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  pTVar2 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  pFVar3 = param_1->Object;
  if (pFVar3 == (FDS_ViewModelContext *)0x0) {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 != (UDS_LogManager *)0x0) {
      pUVar4 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_VM_W_RingCommand_ToolTip_MenuInfo::OnSetViewModel",0x35,Yes);
      UDS_LogManager::PrintLog(pUVar4,1,Warning,local_138.Ptr,0x1a,L"InViewModelContext is nullptr")
      ;
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  else {
    local_148.SharedReferenceCount.ReferenceController =
         (param_1->SharedReferenceCount).ReferenceController;
    if (local_148.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_148.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_148.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_148.Object = pFVar3;
    SafeCast<FDS_ViewModelContext_RingCmdTooltip>(&local_158,&local_148);
    if (local_158.Object == (FDS_ViewModelContext_RingCmdTooltip *)0x0) {
      pUVar4 = UDS_LogManager::GetInst();
      if (pUVar4 != (UDS_LogManager *)0x0) {
        pUVar4 = UDS_LogManager::GetInst();
        local_138._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_138,"UDS_VM_W_RingCommand_ToolTip_MenuInfo::OnSetViewModel",0x35,Yes);
        UDS_LogManager::PrintLog(pUVar4,1,Warning,local_138.Ptr,0x21,L"context is nullptr");
        if ((void *)local_138._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_138._padding_);
        }
      }
    }
    else {
      iVar1 = (local_158.Object)->RingCmdContentId;
      this->MenuID = iVar1;
      pFVar5 = FDS_ContentsTotalMenuTableRow::Get((longlong)iVar1,true);
      if (pFVar5 != (FDS_ContentsTotalMenuTableRow *)0x0) {
        this->IconID = pFVar5->ID_Icon;
        pFVar6 = (FString *)(**(code **)((pFVar5->ID_Name)._padding_ + 8))(&pFVar5->ID_Name);
        ::FString::operator=(&this->MenuName,pFVar6);
        local_170 = FFieldNotificationClassDescriptor::IconID.BitNumber;
        local_178 = FFieldNotificationClassDescriptor::IconID.FieldName;
        (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_178);
        local_160 = FFieldNotificationClassDescriptor::MenuName.BitNumber;
        local_168 = FFieldNotificationClassDescriptor::MenuName.FieldName;
        (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_168);
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_158.SharedReferenceCount.ReferenceController);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// UpdateData @ 14c049f80

void __thiscall
UDS_VM_W_RingCommand_ToolTip_MenuInfo::UpdateData(UDS_VM_W_RingCommand_ToolTip_MenuInfo *this)

{
  FDS_ContentsTotalMenuTableRow *pFVar1;
  FString *pFVar2;
  FName local_18;
  int local_10;
  
  pFVar1 = FDS_ContentsTotalMenuTableRow::Get((longlong)this->MenuID,true);
  if (pFVar1 != (FDS_ContentsTotalMenuTableRow *)0x0) {
    this->IconID = pFVar1->ID_Icon;
    pFVar2 = (FString *)(**(code **)((pFVar1->ID_Name)._padding_ + 8))();
    ::FString::operator=(&this->MenuName,pFVar2);
    local_10 = FFieldNotificationClassDescriptor::IconID.BitNumber;
    local_18 = FFieldNotificationClassDescriptor::IconID.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
    local_10 = FFieldNotificationClassDescriptor::MenuName.BitNumber;
    local_18 = FFieldNotificationClassDescriptor::MenuName.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

