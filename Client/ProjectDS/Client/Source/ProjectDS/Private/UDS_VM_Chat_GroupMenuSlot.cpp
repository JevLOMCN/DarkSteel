// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 22

// SetClickGroupMenu_WrapperImpl @ 14b610d80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UDS_VM_Chat_GroupMenuSlot::SetClickGroupMenu_WrapperImpl(void *param_1,void *param_2)

{
  int iVar1;
  FString *pFVar2;
  UDS_WindowManager *this;
  UDS_LogManager *pUVar3;
  undefined1 auStackY_188 [32];
  float fStack_158;
  uint uStack_154;
  FString FStack_150;
  TStringConversion<TStringConvert<char,wchar_t>,128> TStack_138;
  ulonglong uStack_18;
  
  uStack_18 = __security_cookie.value ^ (ulonglong)auStackY_188;
  if (1 < *(int *)((longlong)param_1 + 0x130)) {
    iVar1 = *(int *)((longlong)param_1 + 0x138);
    if (iVar1 == 1) {
      pFVar2 = ::FString::FString(&FStack_150,(FString *)((longlong)param_1 + 0x128));
      UDS_ChatUIPopupHelper::OpenGroupLeavePopup(pFVar2);
    }
    else if (iVar1 == 2) {
      OnChatGroupMembers(param_1);
    }
    else if (iVar1 == 3) {
      UDS_ChatUIPopupHelper::OpenGroupInvitePopup((FString *)((longlong)param_1 + 0x128));
    }
    else if (iVar1 == 4) {
      UDS_ChatUIPopupHelper::OpenGroupSettingPopup((FString *)((longlong)param_1 + 0x128));
    }
  }
  this = UDS_WindowManager::GetInst();
  if (this == (UDS_WindowManager *)0x0) {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 != (UDS_LogManager *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      TStack_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&TStack_138,"UDS_VM_Chat_GroupMenuSlot::OnClickGroupMenu",0x2b,Yes);
      UDS_LogManager::PrintLog(pUVar3,1,Warning,TStack_138.Ptr,0x41,L"windowManager == nullptr");
      if ((void *)TStack_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)TStack_138._padding_);
        return;
      }
    }
  }
  else {
    fStack_158 = 0.0;
    uStack_154 = 0;
    UDS_WindowManager::CloseWindow(this,ChattingSubTabList,&uStack_154,&fStack_158);
  }
  return;
}

// SetChatGroupMenuText_WrapperImpl @ 14b610d90

void __cdecl
UDS_VM_Chat_GroupMenuSlot::SetChatGroupMenuText_WrapperImpl(void *param_1,void *param_2)

{
  FName FVar1;
  int iVar2;
  FName FStack_18;
  int iStack_10;
  
  iVar2 = FFieldNotificationClassDescriptor::ChatGroupMenuText.BitNumber;
  FVar1 = FFieldNotificationClassDescriptor::ChatGroupMenuText.FieldName;
  FDS_Text::operator=((FDS_Text *)((longlong)param_1 + 0xc0),param_2);
  FStack_18 = FVar1;
  iStack_10 = iVar2;
  (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
            ((longlong *)((longlong)param_1 + 0x28),&FStack_18);
  return;
}

// SetChatGroupMenuIconID_WrapperImpl @ 14b610da0

void __cdecl
UDS_VM_Chat_GroupMenuSlot::SetChatGroupMenuIconID_WrapperImpl(void *param_1,void *param_2)

{
  SetChatGroupMenuIconID(param_1,*(int *)param_2);
  return;
}

// SetChatGroupMenuColor_WrapperImpl @ 14b610db0

void __cdecl
UDS_VM_Chat_GroupMenuSlot::SetChatGroupMenuColor_WrapperImpl(void *param_1,void *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  FName FStack_18;
  int iStack_10;
  
  if ((((*(float *)param_2 != *(float *)((longlong)param_1 + 0x114)) ||
       (*(float *)((longlong)param_2 + 4) != *(float *)((longlong)param_1 + 0x118))) ||
      (*(float *)((longlong)param_2 + 8) != *(float *)((longlong)param_1 + 0x11c))) ||
     (*(float *)((longlong)param_2 + 0xc) != *(float *)((longlong)param_1 + 0x120))) {
    uVar1 = *(undefined4 *)((longlong)param_2 + 4);
    uVar2 = *(undefined4 *)((longlong)param_2 + 8);
    uVar3 = *(undefined4 *)((longlong)param_2 + 0xc);
    iStack_10 = FFieldNotificationClassDescriptor::ChatGroupMenuColor.BitNumber;
    FStack_18 = FFieldNotificationClassDescriptor::ChatGroupMenuColor.FieldName;
    *(undefined4 *)((longlong)param_1 + 0x114) = *(undefined4 *)param_2;
    *(undefined4 *)((longlong)param_1 + 0x118) = uVar1;
    *(undefined4 *)((longlong)param_1 + 0x11c) = uVar2;
    *(undefined4 *)((longlong)param_1 + 0x120) = uVar3;
    (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
              ((longlong)param_1 + 0x28,&FStack_18);
  }
  return;
}

// StaticClass @ 14b610dc0

UClass * __cdecl UDS_VM_Chat_GroupMenuSlot::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_Chat_GroupMenuSlot.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_Chat_GroupMenuSlot",
               &Z_Registration_Info_UClass_UDS_VM_Chat_GroupMenuSlot.InnerSingleton,
               StaticRegisterNativesUDS_VM_Chat_GroupMenuSlot,0x140,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UDS_VM_Chat_GroupMenuSlot>,
               InternalVTableHelperCtorCaller<UDS_VM_Chat_GroupMenuSlot>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_Chat_GroupMenuSlot.InnerSingleton;
}

// UDS_VM_Chat_GroupMenuSlot @ 14b615680

UDS_VM_Chat_GroupMenuSlot * __thiscall
UDS_VM_Chat_GroupMenuSlot::UDS_VM_Chat_GroupMenuSlot
          (UDS_VM_Chat_GroupMenuSlot *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_Chat_GroupMenuSlot__6B_;
  *(undefined8 *)&(this->ClickGroupMenu).Delegate = 0;
  *(undefined8 *)&(this->ClickGroupMenu).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickGroupMenu).Delegate.field_0x10 = 0;
  (this->ChatGroupMenuText).StringTableType = None;
  (this->ChatGroupMenuText).StringTableID = 0;
  (this->ChatGroupMenuText).StringEnumTableNameID.ComparisonIndex = 0;
  (this->ChatGroupMenuText).StringEnumTableNameID.Number = 0;
  (this->ChatGroupMenuText).DateTime.Ticks = 0;
  (this->ChatGroupMenuText).TimeSpan.Ticks = 0;
  (this->ChatGroupMenuText).TimeExpressionType = None;
  (this->ChatGroupMenuText).IsExpression = false;
  (this->ChatGroupMenuText).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->ChatGroupMenuText).UniqueString.Data.ArrayNum = 0;
  (this->ChatGroupMenuText).UniqueString.Data.ArrayMax = 0;
  (this->ChatGroupMenuText).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ChatGroupMenuText).FormatArgs.ArrayNum = 0;
  (this->ChatGroupMenuText).FormatArgs.ArrayMax = 0;
  (this->GroupID).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GroupID).Data.ArrayNum = 0;
  (this->GroupID).Data.ArrayMax = 0;
  this->ChatGroupMenu = None;
  (this->ClickGroupMenu)._padding_ = '\0';
  (this->ClickGroupMenu).bIsCustomSelected = false;
  (this->ClickGroupMenu).bIsLacked = false;
  (this->ClickGroupMenu).bIsCustomDisabled = false;
  return this;
}

// UDS_VM_Chat_GroupMenuSlot @ 14b615740

UDS_VM_Chat_GroupMenuSlot * __thiscall
UDS_VM_Chat_GroupMenuSlot::UDS_VM_Chat_GroupMenuSlot
          (UDS_VM_Chat_GroupMenuSlot *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_Chat_GroupMenuSlot__6B_;
  *(undefined8 *)&(this->ClickGroupMenu).Delegate = 0;
  *(undefined8 *)&(this->ClickGroupMenu).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickGroupMenu).Delegate.field_0x10 = 0;
  (this->ChatGroupMenuText).StringTableType = None;
  (this->ChatGroupMenuText).StringTableID = 0;
  (this->ChatGroupMenuText).StringEnumTableNameID.ComparisonIndex = 0;
  (this->ChatGroupMenuText).StringEnumTableNameID.Number = 0;
  (this->ChatGroupMenuText).DateTime.Ticks = 0;
  (this->ChatGroupMenuText).TimeSpan.Ticks = 0;
  (this->ChatGroupMenuText).TimeExpressionType = None;
  (this->ChatGroupMenuText).IsExpression = false;
  (this->ChatGroupMenuText).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->ChatGroupMenuText).UniqueString.Data.ArrayNum = 0;
  (this->ChatGroupMenuText).UniqueString.Data.ArrayMax = 0;
  (this->ChatGroupMenuText).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ChatGroupMenuText).FormatArgs.ArrayNum = 0;
  (this->ChatGroupMenuText).FormatArgs.ArrayMax = 0;
  (this->GroupID).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GroupID).Data.ArrayNum = 0;
  (this->GroupID).Data.ArrayMax = 0;
  this->ChatGroupMenu = None;
  (this->ClickGroupMenu)._padding_ = '\0';
  (this->ClickGroupMenu).bIsCustomSelected = false;
  (this->ClickGroupMenu).bIsLacked = false;
  (this->ClickGroupMenu).bIsCustomDisabled = false;
  return this;
}

// ~UDS_VM_Chat_GroupMenuSlot @ 14b6172c0

void __thiscall
UDS_VM_Chat_GroupMenuSlot::~UDS_VM_Chat_GroupMenuSlot(UDS_VM_Chat_GroupMenuSlot *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_Chat_GroupMenuSlot__6B_;
  pFVar1 = (this->GroupID).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->ChatGroupMenuText).FormatArgs.AllocatorInstance.Data,
             (this->ChatGroupMenuText).FormatArgs.ArrayNum);
  pFVar1 = (this->ChatGroupMenuText).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ChatGroupMenuText).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ClickGroupMenu).Delegate);
  pvVar2 = *(void **)&(this->ClickGroupMenu).Delegate.field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ClickGroupMenu).Delegate);
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b619160

IClassDescriptor * __thiscall
UDS_VM_Chat_GroupMenuSlot::GetFieldNotificationDescriptor(UDS_VM_Chat_GroupMenuSlot *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_Chat_GroupMenuSlot::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b619a40

UClass * __cdecl UDS_VM_Chat_GroupMenuSlot::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_Chat_GroupMenuSlot.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_Chat_GroupMenuSlot",
               &Z_Registration_Info_UClass_UDS_VM_Chat_GroupMenuSlot.InnerSingleton,
               StaticRegisterNativesUDS_VM_Chat_GroupMenuSlot,0x140,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UDS_VM_Chat_GroupMenuSlot>,
               InternalVTableHelperCtorCaller<UDS_VM_Chat_GroupMenuSlot>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_Chat_GroupMenuSlot.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_Chat_GroupMenuSlot @ 14b61a220

void __cdecl UDS_VM_Chat_GroupMenuSlot::StaticRegisterNativesUDS_VM_Chat_GroupMenuSlot(void)

{
  return;
}

// OnChatGroupExit @ 14bd70440

void __thiscall UDS_VM_Chat_GroupMenuSlot::OnChatGroupExit(UDS_VM_Chat_GroupMenuSlot *this)

{
  FString *pFVar1;
  FString local_18;
  
  pFVar1 = ::FString::FString(&local_18,&this->GroupID);
  UDS_ChatUIPopupHelper::OpenGroupLeavePopup(pFVar1);
  return;
}

// OnChatGroupInvite @ 14bd70470

void __thiscall UDS_VM_Chat_GroupMenuSlot::OnChatGroupInvite(UDS_VM_Chat_GroupMenuSlot *this)

{
  UDS_ChatUIPopupHelper::OpenGroupInvitePopup(&this->GroupID);
  return;
}

// OnChatGroupMembers @ 14bd70490

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_Chat_GroupMenuSlot::OnChatGroupMembers(UDS_VM_Chat_GroupMenuSlot *this)

{
  ForAnyElementType FVar1;
  int iVar2;
  UDS_ChattingManager *this_00;
  UDS_LogManager *pUVar3;
  undefined8 *puVar4;
  ulong64 uVar5;
  undefined1 auStackY_1f8 [32];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_1c8;
  ForAnyElementType FStack_1c0;
  int local_1b8;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_1a8;
  FDelegateAllocation local_1a0;
  FDestructionSentinel local_190;
  FDelegateAllocation *local_178;
  undefined1 local_170 [8];
  ForAnyElementType local_168;
  int local_160;
  UDS_VM_Chat_GroupMenuSlot *local_158 [2];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_1f8;
  this_00 = UDS_ChattingManager::GetInst();
  if (this_00 == (UDS_ChattingManager *)0x0) {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar3 = UDS_LogManager::GetInst();
    local_148._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_148,"UDS_VM_Chat_GroupMenuSlot::OnChatGroupMembers",0x2d,Yes);
    UDS_LogManager::PrintLog(pUVar3,1,Warning,local_148.Ptr,0x8a,L"chattingManager == nullptr");
    if ((void *)local_148._padding_ == (void *)0x0) {
      return;
    }
    FMemory::Free((void *)local_148._padding_);
    return;
  }
  local_1c8.AccessDetector.State = (FMRSWRecursiveAccessDetector)OnRecvGroupMembers;
  FStack_1c0.Data = (FScriptContainerElement *)((ulonglong)FStack_1c0.Data._4_4_ << 0x20);
  local_1a8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_1a0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_1a0.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_1a8,(FWriteAccessScope *)&local_190);
  local_178 = &local_1a0;
  puVar4 = UE::Core::Private::DelegateAllocate(0x30,&local_1a0);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar5 = FDelegateHandle::GenerateNewID();
    puVar4[2] = uVar5;
    *puVar4 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_Chat_GroupMenuSlot____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this != (UDS_VM_Chat_GroupMenuSlot *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar4[3] = 0;
    local_158[0] = this;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this != (UDS_VM_Chat_GroupMenuSlot *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar4 + 3),(FObjectPtr)local_158);
    *(FMRSWRecursiveAccessDetector *)(puVar4 + 4) = local_1c8.AccessDetector.State;
    puVar4[5] = FStack_1c0.Data;
  }
  if (local_190.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_190.Accessor,&local_190);
  }
  local_170 = (undefined1  [8])0x0;
  local_168.Data = (FScriptContainerElement *)0x0;
  local_160 = 0;
  local_1c8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_1c0.Data = (FScriptContainerElement *)0x0;
  local_1b8 = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            (&local_1a8,(FReadAccessScope *)&local_190);
  if ((local_1a0.DelegateSize != 0) &&
     (local_1a0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (**(code **)(*(longlong *)local_1a0.DelegateAllocator + 0x50))
              (local_1a0.DelegateAllocator,&local_1c8);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            ((FReadAccessScope *)&local_190);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_1c8,(FWriteAccessScope *)&local_190);
  iVar2 = local_1b8;
  FVar1.Data = FStack_1c0.Data;
  FStack_1c0.Data = (FScriptContainerElement *)0x0;
  local_1b8 = 0;
  if (local_190.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_190.Accessor,&local_190);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_170,
             (FWriteAccessScope *)&local_190);
  if (local_160 != 0) {
    if (local_168.Data == (FScriptContainerElement *)0x0) goto LAB_14bd70701;
    (*(code *)**(undefined8 **)local_168.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_168,0,0,0x10);
    local_160 = 0;
  }
  if (local_168.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_168.Data);
  }
LAB_14bd70701:
  local_168.Data = FVar1.Data;
  local_160 = iVar2;
  if (local_190.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_190.Accessor,&local_190);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_1c8,(FWriteAccessScope *)&local_190);
  if ((local_1b8 != 0) && (FStack_1c0.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_1c0.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_1c0,0,0,0x10);
    local_1b8 = 0;
  }
  if (local_190.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_190.Accessor,&local_190);
  }
  if (FStack_1c0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_1c0.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_1c8.AccessDetector);
  UDS_ChattingManager::RequestGroupMemberList
            (this_00,&this->GroupID,
             (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_170);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_1a8,(FWriteAccessScope *)&local_190);
  if ((local_1a0.DelegateSize != 0) &&
     (local_1a0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_1a0.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_1a0,0,0,0x10);
    local_1a0.DelegateSize = 0;
  }
  if (local_190.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_190.Accessor,&local_190);
  }
  if (local_1a0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_1a0.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_1a8.AccessDetector);
  return;
}

// OnChatGroupSetting @ 14bd70860

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_Chat_GroupMenuSlot::OnChatGroupSetting(UDS_VM_Chat_GroupMenuSlot *this)

{
  UDS_LogManager *pUVar1;
  undefined1 auStackY_168 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  if ((this->GroupID).Data.ArrayNum < 2) {
    pUVar1 = UDS_LogManager::GetInst();
    if (pUVar1 != (UDS_LogManager *)0x0) {
      pUVar1 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_VM_Chat_GroupMenuSlot::OnChatGroupSetting",0x2d,Yes);
      UDS_LogManager::PrintLog(pUVar1,1,Warning,local_138.Ptr,0x9b,L"GroupID.IsEmpty() == true");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
        return;
      }
    }
  }
  else {
    UDS_ChatUIPopupHelper::OpenGroupSettingPopup(&this->GroupID);
  }
  return;
}

// OnClickGroupMenu @ 14bd73070

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_Chat_GroupMenuSlot::OnClickGroupMenu
          (UDS_VM_Chat_GroupMenuSlot *this,FDS_ButtonEventField *param_1)

{
  EDS_ChatGroupMenu EVar1;
  FString *pFVar2;
  UDS_WindowManager *this_00;
  UDS_LogManager *pUVar3;
  undefined1 auStackY_188 [32];
  float local_158;
  uint local_154;
  FString local_150;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_188;
  if (1 < (this->GroupID).Data.ArrayNum) {
    EVar1 = this->ChatGroupMenu;
    if (EVar1 == Exit) {
      pFVar2 = ::FString::FString(&local_150,&this->GroupID);
      UDS_ChatUIPopupHelper::OpenGroupLeavePopup(pFVar2);
    }
    else if (EVar1 == Members) {
      OnChatGroupMembers(this);
    }
    else if (EVar1 == Invite) {
      UDS_ChatUIPopupHelper::OpenGroupInvitePopup(&this->GroupID);
    }
    else if (EVar1 == Setting) {
      UDS_ChatUIPopupHelper::OpenGroupSettingPopup(&this->GroupID);
    }
  }
  this_00 = UDS_WindowManager::GetInst();
  if (this_00 == (UDS_WindowManager *)0x0) {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 != (UDS_LogManager *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_VM_Chat_GroupMenuSlot::OnClickGroupMenu",0x2b,Yes);
      UDS_LogManager::PrintLog(pUVar3,1,Warning,local_138.Ptr,0x41,L"windowManager == nullptr");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
        return;
      }
    }
  }
  else {
    local_158 = 0.0;
    local_154 = 0;
    UDS_WindowManager::CloseWindow(this_00,ChattingSubTabList,&local_154,&local_158);
  }
  return;
}

// OnRecvGroupMembers @ 14bd7c270

void __thiscall UDS_VM_Chat_GroupMenuSlot::OnRecvGroupMembers(UDS_VM_Chat_GroupMenuSlot *this)

{
  UDS_ChatUIPopupHelper::OpenGroupMembersPopup(&this->GroupID,false);
  return;
}

// OnSetViewModel @ 14bd81450

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_Chat_GroupMenuSlot::OnSetViewModel
          (UDS_VM_Chat_GroupMenuSlot *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  int iVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  UDS_LogManager *pUVar5;
  int iVar6;
  undefined1 auStackY_188 [32];
  TSharedPtr<FDS_ViewModelContext_ChatGroup,1> local_158;
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
  SafeCast<FDS_ViewModelContext_ChatGroup>(&local_158,&local_148);
  if (local_158.Object == (FDS_ViewModelContext_ChatGroup *)0x0) {
    pUVar5 = UDS_LogManager::GetInst();
    if (pUVar5 != (UDS_LogManager *)0x0) {
      pUVar5 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_VM_Chat_GroupMenuSlot::OnSetViewModel",0x29,Yes);
      UDS_LogManager::PrintLog
                (pUVar5,1,Warning,local_138.Ptr,0x14,L"chatGroupContext.IsValid() == false");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  else {
    if (local_158.Object == (FDS_ViewModelContext_ChatGroup *)0x0) {
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
    iVar1 = ((local_158.Object)->GroupID).Data.ArrayNum;
    iVar6 = iVar1 + -1;
    if (iVar1 == 0) {
      iVar6 = 0;
    }
    ::FString::AssignRange
              (&this->GroupID,(wchar_t *)((local_158.Object)->GroupID).Data.AllocatorInstance.Data,
               iVar6);
    if (local_158.Object == (FDS_ViewModelContext_ChatGroup *)0x0) {
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
    this->ChatGroupMenu = (local_158.Object)->ChatGroupMenu;
    UpdateGroupMenu(this);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_158.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// SetChatGroupMenuColor @ 14bd87870

void __thiscall
UDS_VM_Chat_GroupMenuSlot::SetChatGroupMenuColor
          (UDS_VM_Chat_GroupMenuSlot *this,FLinearColor *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  FName local_18;
  int local_10;
  
  if (((((param_1->field0_0x0)._s_0.R != (this->ChatGroupMenuColor).field0_0x0._s_0.R) ||
       ((param_1->field0_0x0)._s_0.G != (this->ChatGroupMenuColor).field0_0x0._s_0.G)) ||
      ((param_1->field0_0x0)._s_0.B != (this->ChatGroupMenuColor).field0_0x0._s_0.B)) ||
     ((param_1->field0_0x0)._s_0.A != (this->ChatGroupMenuColor).field0_0x0._s_0.A)) {
    fVar1 = (param_1->field0_0x0)._s_0.G;
    fVar2 = (param_1->field0_0x0)._s_0.B;
    fVar3 = (param_1->field0_0x0)._s_0.A;
    local_10 = FFieldNotificationClassDescriptor::ChatGroupMenuColor.BitNumber;
    local_18 = FFieldNotificationClassDescriptor::ChatGroupMenuColor.FieldName;
    (this->ChatGroupMenuColor).field0_0x0._s_0.R = (param_1->field0_0x0)._s_0.R;
    (this->ChatGroupMenuColor).field0_0x0._s_0.G = fVar1;
    (this->ChatGroupMenuColor).field0_0x0._s_0.B = fVar2;
    (this->ChatGroupMenuColor).field0_0x0._s_0.A = fVar3;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetChatGroupMenuIconID @ 14bd878f0

void __thiscall
UDS_VM_Chat_GroupMenuSlot::SetChatGroupMenuIconID(UDS_VM_Chat_GroupMenuSlot *this,int param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::ChatGroupMenuIconID.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::ChatGroupMenuIconID.FieldName;
  if (this->ChatGroupMenuIconID != param_1) {
    this->ChatGroupMenuIconID = param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetChatGroupMenuText @ 14bd87940

void __thiscall
UDS_VM_Chat_GroupMenuSlot::SetChatGroupMenuText(UDS_VM_Chat_GroupMenuSlot *this,FDS_Text *param_1)

{
  FName FVar1;
  int iVar2;
  FName local_18;
  int local_10;
  
  iVar2 = FFieldNotificationClassDescriptor::ChatGroupMenuText.BitNumber;
  FVar1 = FFieldNotificationClassDescriptor::ChatGroupMenuText.FieldName;
  FDS_Text::operator=(&this->ChatGroupMenuText,param_1);
  local_18 = FVar1;
  local_10 = iVar2;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// UpdateGroupMenu @ 14bd91120

void __thiscall UDS_VM_Chat_GroupMenuSlot::UpdateGroupMenu(UDS_VM_Chat_GroupMenuSlot *this)

{
  EDS_ChatGroupMenu EVar1;
  FName FVar2;
  int iVar3;
  UDS_ChattingManager *this_00;
  FNameEntryId FVar4;
  uint uVar5;
  FName local_88;
  int local_80;
  FLinearColor_u_0 local_78;
  FDS_Text local_68;
  
  EVar1 = this->ChatGroupMenu;
  if (EVar1 == Exit) {
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
    FDS_Text::SetTextFromStringTable(&local_68,StringUi,0xc5d6);
    iVar3 = FFieldNotificationClassDescriptor::ChatGroupMenuText.BitNumber;
    FVar2 = FFieldNotificationClassDescriptor::ChatGroupMenuText.FieldName;
    FDS_Text::operator=(&this->ChatGroupMenuText,&local_68);
    local_88 = FVar2;
    local_80 = iVar3;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_88);
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
    iVar3 = FFieldNotificationClassDescriptor::ChatGroupMenuIconID.BitNumber;
    FVar4 = FFieldNotificationClassDescriptor::ChatGroupMenuIconID.FieldName.ComparisonIndex.Value;
    uVar5 = FFieldNotificationClassDescriptor::ChatGroupMenuIconID.FieldName.Number;
    if (this->ChatGroupMenuIconID == 0x287) goto LAB_14bd91496;
    this->ChatGroupMenuIconID = 0x287;
  }
  else if (EVar1 == Members) {
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
    FDS_Text::SetTextFromStringTable(&local_68,StringUi,0xc5d7);
    iVar3 = FFieldNotificationClassDescriptor::ChatGroupMenuText.BitNumber;
    FVar2 = FFieldNotificationClassDescriptor::ChatGroupMenuText.FieldName;
    FDS_Text::operator=(&this->ChatGroupMenuText,&local_68);
    local_88 = FVar2;
    local_80 = iVar3;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_88);
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
    iVar3 = FFieldNotificationClassDescriptor::ChatGroupMenuIconID.BitNumber;
    FVar4 = FFieldNotificationClassDescriptor::ChatGroupMenuIconID.FieldName.ComparisonIndex.Value;
    uVar5 = FFieldNotificationClassDescriptor::ChatGroupMenuIconID.FieldName.Number;
    if (this->ChatGroupMenuIconID == 0x288) goto LAB_14bd91496;
    this->ChatGroupMenuIconID = 0x288;
  }
  else if (EVar1 == Invite) {
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
    FDS_Text::SetTextFromStringTable(&local_68,StringUi,0xc5d8);
    iVar3 = FFieldNotificationClassDescriptor::ChatGroupMenuText.BitNumber;
    FVar2 = FFieldNotificationClassDescriptor::ChatGroupMenuText.FieldName;
    FDS_Text::operator=(&this->ChatGroupMenuText,&local_68);
    local_88 = FVar2;
    local_80 = iVar3;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_88);
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
    iVar3 = FFieldNotificationClassDescriptor::ChatGroupMenuIconID.BitNumber;
    FVar4 = FFieldNotificationClassDescriptor::ChatGroupMenuIconID.FieldName.ComparisonIndex.Value;
    uVar5 = FFieldNotificationClassDescriptor::ChatGroupMenuIconID.FieldName.Number;
    if (this->ChatGroupMenuIconID == 0x289) goto LAB_14bd91496;
    this->ChatGroupMenuIconID = 0x289;
  }
  else {
    if (EVar1 != Setting) goto LAB_14bd91496;
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
    FDS_Text::SetTextFromStringTable(&local_68,StringUi,0xc5d9);
    iVar3 = FFieldNotificationClassDescriptor::ChatGroupMenuText.BitNumber;
    FVar2 = FFieldNotificationClassDescriptor::ChatGroupMenuText.FieldName;
    FDS_Text::operator=(&this->ChatGroupMenuText,&local_68);
    local_88 = FVar2;
    local_80 = iVar3;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_88);
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
    iVar3 = FFieldNotificationClassDescriptor::ChatGroupMenuIconID.BitNumber;
    FVar4 = FFieldNotificationClassDescriptor::ChatGroupMenuIconID.FieldName.ComparisonIndex.Value;
    uVar5 = FFieldNotificationClassDescriptor::ChatGroupMenuIconID.FieldName.Number;
    if (this->ChatGroupMenuIconID == 0x28a) goto LAB_14bd91496;
    this->ChatGroupMenuIconID = 0x28a;
  }
  local_88.Number = uVar5;
  local_88.ComparisonIndex.Value = FVar4.Value;
  local_80 = iVar3;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_88);
LAB_14bd91496:
  this_00 = UDS_ChattingManager::GetInst();
  if (this_00 != (UDS_ChattingManager *)0x0) {
    UDS_ChattingManager::GetChattingTabColor(this_00,(FLinearColor *)&local_78._s_0,Total,-1);
    if ((((local_78._s_0.R != (this->ChatGroupMenuColor).field0_0x0._s_0.R) ||
         (local_78._s_0.G != (this->ChatGroupMenuColor).field0_0x0._s_0.G)) ||
        (local_78._s_0.B != (this->ChatGroupMenuColor).field0_0x0._s_0.B)) ||
       (local_78._s_0.A != (this->ChatGroupMenuColor).field0_0x0._s_0.A)) {
      local_80 = FFieldNotificationClassDescriptor::ChatGroupMenuColor.BitNumber;
      local_88 = FFieldNotificationClassDescriptor::ChatGroupMenuColor.FieldName;
      (this->ChatGroupMenuColor).field0_0x0._s_0.R = local_78._s_0.R;
      (this->ChatGroupMenuColor).field0_0x0._s_0.G = local_78._s_0.G;
      (this->ChatGroupMenuColor).field0_0x0._s_0.B = local_78._s_0.B;
      (this->ChatGroupMenuColor).field0_0x0._s_0.A = local_78._s_0.A;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_88);
    }
  }
  return;
}

