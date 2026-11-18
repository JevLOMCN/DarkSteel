// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 19

// SetClick_Slot_WrapperImpl @ 14b755cc0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UDS_VM_W_ServerListSlot::SetClick_Slot_WrapperImpl(void *param_1,void *param_2)

{
  FDS_AuthData *pFVar1;
  UDS_WindowManager *this;
  float afStackX_8 [4];
  uint auStackX_18 [4];
  
  pFVar1 = TDS_Singleton<FDS_AuthData>::GetInst();
  pFVar1->WorldId = *(int *)((longlong)param_1 + 0xd4);
  pFVar1 = TDS_Singleton<FDS_AuthData>::GetInst();
  TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
            (&pFVar1->OnStateChangedServerChangeDelegate);
  this = UDS_WindowManager::GetInst();
  afStackX_8[0] = 0.0;
  auStackX_18[0] = 0;
  UDS_WindowManager::CloseWindow(this,ServerList,auStackX_18,afStackX_8);
  return;
}

// GetVisibility_Slot_WrapperImpl @ 14b755cd0

void __cdecl UDS_VM_W_ServerListSlot::GetVisibility_Slot_WrapperImpl(void *param_1,void *param_2)

{
  ESlateVisibility EVar1;
  
  EVar1 = GetVisibility_Slot(param_1);
  *(ESlateVisibility *)param_2 = EVar1;
  return;
}

// SetVisibility_Slot_WrapperImpl @ 14b755cf0

void __cdecl UDS_VM_W_ServerListSlot::SetVisibility_Slot_WrapperImpl(void *param_1,void *param_2)

{
  SetVisibility_Slot(param_1,*(ESlateVisibility *)param_2);
  return;
}

// StaticClass @ 14b755d40

UClass * __cdecl UDS_VM_W_ServerListSlot::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_W_ServerListSlot.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_W_ServerListSlot",
               &Z_Registration_Info_UClass_UDS_VM_W_ServerListSlot.InnerSingleton,
               StaticRegisterNativesUDS_VM_W_ServerListSlot,0xe0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_W_ServerListSlot>,
               InternalVTableHelperCtorCaller<UDS_VM_W_ServerListSlot>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_W_ServerListSlot.InnerSingleton;
}

// UDS_VM_W_ServerListSlot @ 14b758ef0

UDS_VM_W_ServerListSlot * __thiscall
UDS_VM_W_ServerListSlot::UDS_VM_W_ServerListSlot
          (UDS_VM_W_ServerListSlot *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_W_ServerListSlot__6B_;
  *(undefined8 *)&(this->Click_Slot).Delegate = 0;
  *(undefined8 *)&(this->Click_Slot).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->Click_Slot).Delegate.field_0x10 = 0;
  (this->WorldName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->WorldName).Data.ArrayNum = 0;
  (this->WorldName).Data.ArrayMax = 0;
  (this->Click_Slot)._padding_ = '\0';
  (this->Click_Slot).bIsCustomSelected = false;
  (this->Click_Slot).bIsLacked = false;
  (this->Click_Slot).bIsCustomDisabled = false;
  return this;
}

// UDS_VM_W_ServerListSlot @ 14b758f60

UDS_VM_W_ServerListSlot * __thiscall
UDS_VM_W_ServerListSlot::UDS_VM_W_ServerListSlot
          (UDS_VM_W_ServerListSlot *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_W_ServerListSlot__6B_;
  *(undefined8 *)&(this->Click_Slot).Delegate = 0;
  *(undefined8 *)&(this->Click_Slot).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->Click_Slot).Delegate.field_0x10 = 0;
  (this->WorldName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->WorldName).Data.ArrayNum = 0;
  (this->WorldName).Data.ArrayMax = 0;
  (this->Click_Slot)._padding_ = '\0';
  (this->Click_Slot).bIsCustomSelected = false;
  (this->Click_Slot).bIsLacked = false;
  (this->Click_Slot).bIsCustomDisabled = false;
  return this;
}

// ~UDS_VM_W_ServerListSlot @ 14b75b500

void __thiscall UDS_VM_W_ServerListSlot::~UDS_VM_W_ServerListSlot(UDS_VM_W_ServerListSlot *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_W_ServerListSlot__6B_;
  pFVar1 = (this->WorldName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->Click_Slot).Delegate);
  pvVar2 = *(void **)&(this->Click_Slot).Delegate.field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->Click_Slot).Delegate);
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b75dba0

IClassDescriptor * __thiscall
UDS_VM_W_ServerListSlot::GetFieldNotificationDescriptor(UDS_VM_W_ServerListSlot *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_W_ServerListSlot::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b75e370

UClass * __cdecl UDS_VM_W_ServerListSlot::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_W_ServerListSlot.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_W_ServerListSlot",
               &Z_Registration_Info_UClass_UDS_VM_W_ServerListSlot.InnerSingleton,
               StaticRegisterNativesUDS_VM_W_ServerListSlot,0xe0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_W_ServerListSlot>,
               InternalVTableHelperCtorCaller<UDS_VM_W_ServerListSlot>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_W_ServerListSlot.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_W_ServerListSlot @ 14b75ef30

void __cdecl UDS_VM_W_ServerListSlot::StaticRegisterNativesUDS_VM_W_ServerListSlot(void)

{
  return;
}

// GetVisibility_Slot @ 14c01c1c0

ESlateVisibility __thiscall
UDS_VM_W_ServerListSlot::GetVisibility_Slot(UDS_VM_W_ServerListSlot *this)

{
  return this->Visibility_Slot;
}

// OnClick_Slot @ 14c027e40

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_W_ServerListSlot::OnClick_Slot(UDS_VM_W_ServerListSlot *this,FDS_ButtonEventField *param_1)

{
  FDS_AuthData *pFVar1;
  UDS_WindowManager *this_00;
  float local_res8 [4];
  uint local_res18 [4];
  
  pFVar1 = TDS_Singleton<FDS_AuthData>::GetInst();
  pFVar1->WorldId = this->WorldId;
  pFVar1 = TDS_Singleton<FDS_AuthData>::GetInst();
  TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
            (&pFVar1->OnStateChangedServerChangeDelegate);
  this_00 = UDS_WindowManager::GetInst();
  local_res8[0] = 0.0;
  local_res18[0] = 0;
  UDS_WindowManager::CloseWindow(this_00,ServerList,local_res18,local_res8);
  return;
}

// OnSetViewModel @ 14c035510

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_W_ServerListSlot::OnSetViewModel
          (UDS_VM_W_ServerListSlot *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  int iVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  int iVar4;
  FName FVar5;
  bool bVar6;
  int iVar7;
  UDS_LogManager *pUVar8;
  FName *pFVar9;
  undefined1 auStackY_218 [32];
  TSharedPtr<FDS_ViewModelContext_WorldInfo,1> local_1e8;
  FName local_1d8;
  FName local_1c8;
  int local_1c0;
  FName local_1b8;
  int local_1b0;
  FName local_1a8;
  int local_1a0;
  FName local_198;
  int local_190;
  FName local_188;
  int local_180;
  FName local_178;
  int local_170;
  TSharedPtr<FDS_ViewModelContext,1> local_168;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_218;
  pTVar2 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  local_168.Object = param_1->Object;
  local_168.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_168.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_168.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_168.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SafeCast<FDS_ViewModelContext_WorldInfo>(&local_1e8,&local_168);
  if (local_1e8.Object == (FDS_ViewModelContext_WorldInfo *)0x0) {
    pUVar8 = UDS_LogManager::GetInst();
    if (pUVar8 != (UDS_LogManager *)0x0) {
      pUVar8 = UDS_LogManager::GetInst();
      local_158._padding_ = (longlong)local_1e8.Object;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_158,"UDS_VM_W_ServerListSlot::OnSetViewModel",0x27,Yes);
      UDS_LogManager::PrintLog
                (pUVar8,1,Warning,local_158.Ptr,0x12,L"worldInfoContext.IsValid() ==  false");
      if ((FDS_ViewModelContext_WorldInfo *)local_158._padding_ !=
          (FDS_ViewModelContext_WorldInfo *)0x0) {
        FMemory::Free((void *)local_158._padding_);
      }
    }
    goto LAB_14c0357e5;
  }
  if (local_1e8.Object == (FDS_ViewModelContext_WorldInfo *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar4 = FFieldNotificationClassDescriptor::WorldName.BitNumber;
  iVar7 = (this->WorldName).Data.ArrayNum;
  iVar1 = ((local_1e8.Object)->WorldInfo).WorldName.Data.ArrayNum;
  local_1d8 = FFieldNotificationClassDescriptor::WorldName.FieldName;
  if (iVar7 == iVar1) {
    if (1 < iVar7) {
      iVar7 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)(this->WorldName).Data.AllocatorInstance.Data,
                         (wchar_t *)
                         ((local_1e8.Object)->WorldInfo).WorldName.Data.AllocatorInstance.Data);
      bVar6 = iVar7 == 0;
      goto LAB_14c035687;
    }
  }
  else {
    bVar6 = iVar7 + iVar1 == 1;
LAB_14c035687:
    if (!bVar6) {
      ::FString::operator=(&this->WorldName,&((local_1e8.Object)->WorldInfo).WorldName);
      local_1c8 = local_1d8;
      local_1c0 = iVar4;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_1c8);
    }
  }
  iVar1 = FFieldNotificationClassDescriptor::WorldState.BitNumber;
  FVar5 = FFieldNotificationClassDescriptor::WorldState.FieldName;
  iVar7 = ((local_1e8.Object)->WorldInfo).WorldState;
  if (this->WorldState != iVar7) {
    this->WorldState = iVar7;
    local_1b0 = iVar1;
    local_1b8 = FVar5;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_1b8);
  }
  this->Visibility_Connect = iVar7 != 0;
  this->Visibility_DisConnect = iVar7 == 0;
  FVar5 = FFieldNotificationClassDescriptor::WorldId.FieldName;
  iVar7 = ((local_1e8.Object)->WorldInfo).WorldId;
  if (this->WorldId != iVar7) {
    local_1a0 = FFieldNotificationClassDescriptor::WorldId.BitNumber;
    this->WorldId = iVar7;
    local_1a8 = FVar5;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_1a8);
  }
  FVar5 = FFieldNotificationClassDescriptor::CharCount.FieldName;
  iVar7 = ((local_1e8.Object)->WorldInfo).CharCount;
  if (this->CharCount != iVar7) {
    local_190 = FFieldNotificationClassDescriptor::CharCount.BitNumber;
    this->CharCount = iVar7;
    local_198 = FVar5;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_198);
  }
  if (this->CharCount == 0) {
    this->Visibility_CharCount = Hidden;
    pFVar9 = &local_188;
    local_188 = FFieldNotificationClassDescriptor::Visibility_CharCount.FieldName;
    local_180 = FFieldNotificationClassDescriptor::Visibility_CharCount.BitNumber;
  }
  else {
    this->Visibility_CharCount = Visible;
    pFVar9 = &local_178;
    local_178 = FFieldNotificationClassDescriptor::Visibility_CharCount.FieldName;
    local_170 = FFieldNotificationClassDescriptor::Visibility_CharCount.BitNumber;
  }
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,pFVar9);
LAB_14c0357e5:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1e8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// SetCharCount @ 14c040ac0

void __thiscall UDS_VM_W_ServerListSlot::SetCharCount(UDS_VM_W_ServerListSlot *this,int param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::CharCount.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::CharCount.FieldName;
  if (this->CharCount != param_1) {
    this->CharCount = param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  if (this->CharCount == 0) {
    this->Visibility_CharCount = Hidden;
  }
  else {
    this->Visibility_CharCount = Visible;
  }
  local_10 = FFieldNotificationClassDescriptor::Visibility_CharCount.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::Visibility_CharCount.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// SetVisibility_CharCount @ 14c045bb0

void __thiscall
UDS_VM_W_ServerListSlot::SetVisibility_CharCount
          (UDS_VM_W_ServerListSlot *this,ESlateVisibility param_1)

{
  FName local_18;
  int local_10;
  
  this->Visibility_CharCount = param_1;
  local_10 = FFieldNotificationClassDescriptor::Visibility_CharCount.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::Visibility_CharCount.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// SetVisibility_Slot @ 14c045e70

void __thiscall
UDS_VM_W_ServerListSlot::SetVisibility_Slot(UDS_VM_W_ServerListSlot *this,ESlateVisibility param_1)

{
  FName local_18;
  int local_10;
  
  this->Visibility_Slot = param_1;
  local_10 = FFieldNotificationClassDescriptor::Visibility_Slot.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::Visibility_Slot.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// SetWorldId @ 14c046850

void __thiscall UDS_VM_W_ServerListSlot::SetWorldId(UDS_VM_W_ServerListSlot *this,int param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::WorldId.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::WorldId.FieldName;
  if (this->WorldId != param_1) {
    this->WorldId = param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetWorldName @ 14c0468a0

void __thiscall
UDS_VM_W_ServerListSlot::SetWorldName(UDS_VM_W_ServerListSlot *this,FString *param_1)

{
  int iVar1;
  FName FVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  FName local_18;
  int local_10;
  
  iVar3 = FFieldNotificationClassDescriptor::WorldName.BitNumber;
  FVar2 = FFieldNotificationClassDescriptor::WorldName.FieldName;
  iVar4 = (param_1->Data).ArrayNum;
  iVar1 = (this->WorldName).Data.ArrayNum;
  if (iVar1 == iVar4) {
    if (iVar1 < 2) {
      return;
    }
    iVar4 = FGenericPlatformStricmp::Stricmp
                      ((wchar_t *)(this->WorldName).Data.AllocatorInstance.Data,
                       (wchar_t *)(param_1->Data).AllocatorInstance.Data);
    bVar5 = iVar4 == 0;
  }
  else {
    bVar5 = iVar1 + iVar4 == 1;
  }
  if (!bVar5) {
    ::FString::operator=(&this->WorldName,param_1);
    local_18 = FVar2;
    local_10 = iVar3;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetWorldState @ 14c046ca0

void __thiscall UDS_VM_W_ServerListSlot::SetWorldState(UDS_VM_W_ServerListSlot *this,int param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::WorldState.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::WorldState.FieldName;
  if (this->WorldState != param_1) {
    this->WorldState = param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  this->Visibility_Connect = param_1 != 0;
  this->Visibility_DisConnect = param_1 == 0;
  return;
}

