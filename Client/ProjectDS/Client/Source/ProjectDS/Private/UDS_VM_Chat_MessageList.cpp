// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 21

// SetUnreadCount_WrapperImpl @ 14b60fe70

void __cdecl UDS_VM_Chat_MessageList::SetUnreadCount_WrapperImpl(void *param_1,void *param_2)

{
  SetUnreadCount(param_1,*(int *)param_2);
  return;
}

// SetUnreadCountVisibility_WrapperImpl @ 14b60fe80

void __cdecl
UDS_VM_Chat_MessageList::SetUnreadCountVisibility_WrapperImpl(void *param_1,void *param_2)

{
  SetUnreadCountVisibility(param_1,*(ESlateVisibility *)param_2);
  return;
}

// SetbIsEmptyList_WrapperImpl @ 14b60fe90

void __cdecl UDS_VM_Chat_MessageList::SetbIsEmptyList_WrapperImpl(void *param_1,void *param_2)

{
  SetIsEmptyList(param_1,*(bool *)param_2);
  return;
}

// StaticClass @ 14b60fea0

UClass * __cdecl UDS_VM_Chat_MessageList::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_Chat_MessageList.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_Chat_MessageList",
               &Z_Registration_Info_UClass_UDS_VM_Chat_MessageList.InnerSingleton,
               StaticRegisterNativesUDS_VM_Chat_MessageList,200,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_Chat_MessageList>,
               InternalVTableHelperCtorCaller<UDS_VM_Chat_MessageList>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_Chat_MessageList.InnerSingleton;
}

// UDS_VM_Chat_MessageList @ 14b6163a0

UDS_VM_Chat_MessageList * __thiscall
UDS_VM_Chat_MessageList::UDS_VM_Chat_MessageList
          (UDS_VM_Chat_MessageList *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_Chat_MessageList__6B_;
  (this->EntryBindingEventField).UserObjectList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->EntryBindingEventField).UserObjectList.ArrayNum = 0;
  (this->EntryBindingEventField).UserObjectList.ArrayMax = 0;
  this->ChattingTypeFlag = 0;
  this->ScrollToEndEvent = false;
  this->bIsEmptyList = true;
  return this;
}

// UDS_VM_Chat_MessageList @ 14b616400

UDS_VM_Chat_MessageList * __thiscall
UDS_VM_Chat_MessageList::UDS_VM_Chat_MessageList
          (UDS_VM_Chat_MessageList *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_Chat_MessageList__6B_;
  (this->EntryBindingEventField).UserObjectList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->EntryBindingEventField).UserObjectList.ArrayNum = 0;
  (this->EntryBindingEventField).UserObjectList.ArrayMax = 0;
  this->ChattingTypeFlag = 0;
  this->ScrollToEndEvent = false;
  this->bIsEmptyList = true;
  return this;
}

// ~UDS_VM_Chat_MessageList @ 14b617840

void __thiscall UDS_VM_Chat_MessageList::~UDS_VM_Chat_MessageList(UDS_VM_Chat_MessageList *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_Chat_MessageList__6B_;
  pFVar1 = (this->EntryBindingEventField).UserObjectList.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b619400

IClassDescriptor * __thiscall
UDS_VM_Chat_MessageList::GetFieldNotificationDescriptor(UDS_VM_Chat_MessageList *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_Chat_MessageList::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b619ec0

UClass * __cdecl UDS_VM_Chat_MessageList::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_Chat_MessageList.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_Chat_MessageList",
               &Z_Registration_Info_UClass_UDS_VM_Chat_MessageList.InnerSingleton,
               StaticRegisterNativesUDS_VM_Chat_MessageList,200,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_Chat_MessageList>,
               InternalVTableHelperCtorCaller<UDS_VM_Chat_MessageList>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_Chat_MessageList.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_Chat_MessageList @ 14b61a280

void __cdecl UDS_VM_Chat_MessageList::StaticRegisterNativesUDS_VM_Chat_MessageList(void)

{
  return;
}

// BindModel @ 14bdb0460

void __thiscall UDS_VM_Chat_MessageList::BindModel(UDS_VM_Chat_MessageList *this)

{
  UDS_ChatEvent *pUVar1;
  
  UDS_ViewModelBase::BindModel((UDS_ViewModelBase *)this);
  pUVar1 = UDS_ChatEvent::GetEvent();
  if (pUVar1 != (UDS_ChatEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->OnChangedChatType,this
              );
    TMulticastDelegateRegistration<void___cdecl(unsigned___int64),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_VM_Chat_MessageList>
              ((TMulticastDelegateRegistration<void___cdecl(unsigned___int64),FDefaultDelegateUserPolicy>
                *)&pUVar1->OnChangedChatType,(UDS_VM_Chat_MessageList *)&stack0x00000010,
               (pmf_3b2e1759 *)this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar1->OnUpdateMarkMessageAsRead,this);
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_VM_Chat_MessageList>
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &pUVar1->OnUpdateMarkMessageAsRead,(UDS_VM_Chat_MessageList *)&stack0x00000010,
               (pmf_756e80b7 *)this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->OnAddChatMessage,this)
    ;
    TMulticastDelegateRegistration<void___cdecl(TWeakObjectPtr<UDS_ChattingData,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
    ::AddUObject<UDS_VM_Chat_MessageList>
              ((TMulticastDelegateRegistration<void___cdecl(TWeakObjectPtr<UDS_ChattingData,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
                *)&pUVar1->OnAddChatMessage,(UDS_VM_Chat_MessageList *)&stack0x00000010,
               (pmf_b4f594dc *)this);
  }
  return;
}

// OnAddChatMessage @ 14bdc9990

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UDS_VM_Chat_MessageList::OnAddChatMessage
          (UDS_VM_Chat_MessageList *this,TWeakObjectPtr<UDS_ChattingData,FWeakObjectPtr> param_1)

{
  code *pcVar1;
  TReferenceControllerBase<1> *pTVar2;
  FName FVar3;
  int iVar4;
  FDS_ViewModelContext_ChatMessage *pFVar5;
  bool bVar6;
  int iVar7;
  UDS_LogManager *pUVar8;
  UObject *pUVar9;
  UDS_UserObjectListItem *this_00;
  FTimerManager *this_01;
  undefined8 *puVar10;
  ulong64 uVar11;
  FWeakObjectPtr local_res10;
  undefined1 auStackY_1f8 [32];
  FDelegateAllocation local_1c8;
  TSharedPtr<FDS_ViewModelContext_ChatMessage,1> local_1b8;
  UDS_UserObjectListItem *local_1a8;
  UDS_VM_Chat_MessageList *local_1a0;
  FTimerHandle local_198 [2];
  FName local_188;
  int local_180;
  FName local_178;
  int local_170;
  TSharedPtr<FDS_ViewModelContext,1> local_168;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1f8;
  local_res10 = param_1.WeakPtr;
  bVar6 = FWeakObjectPtr::IsValid(&local_res10);
  if (!bVar6) {
    pUVar8 = UDS_LogManager::GetInst();
    if (pUVar8 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar8 = UDS_LogManager::GetInst();
    local_158._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_158,"UDS_VM_Chat_MessageList::OnAddChatMessage",0x29,Yes);
    UDS_LogManager::PrintLog
              (pUVar8,1,Warning,local_158.Ptr,0x91,L"InChattingData.IsValid() == false");
    if ((void *)local_158._padding_ == (void *)0x0) {
      return;
    }
    FMemory::Free((void *)local_158._padding_);
    return;
  }
  pUVar9 = FWeakObjectPtr::Get(&local_res10);
  if ((this->ChattingTypeFlag >> ((ulonglong)(byte)pUVar9[2].field_0x10 & 0x3f) & 1) == 0) {
    return;
  }
  pUVar9 = GetTransientPackageAsObject();
  this_00 = NewObject<UDS_UserObjectListItem>(pUVar9);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (this_00 != (UDS_UserObjectListItem *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)this_00);
  }
  MakeContext<FDS_ViewModelContext_ChatMessage>(&local_1b8);
  pFVar5 = local_1b8.Object;
  if ((local_1b8.Object == (FDS_ViewModelContext_ChatMessage *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar6)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pTVar2 = (TReferenceControllerBase<1> *)
           CONCAT44(local_1b8.SharedReferenceCount.ReferenceController._4_4_,
                    local_1b8.SharedReferenceCount.ReferenceController._0_4_);
  *(undefined4 *)&pFVar5->_padding_ = 0x11e;
  local_168.Object = (FDS_ViewModelContext *)local_1b8.Object;
  (pFVar5->ChattingData).WeakPtr = local_res10;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_168.SharedReferenceCount.ReferenceController = pTVar2;
  UDS_UserObjectListItem::AddContext(this_00,&local_168);
  local_1a8 = this_00;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (this_00 != (UDS_UserObjectListItem *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)this_00);
  }
  FDS_EntryBindingEventField::Add
            (&this->EntryBindingEventField,(TObjectPtr<UDS_UserObjectListItem>)&local_1a8);
  local_180 = FFieldNotificationClassDescriptor::EntryBindingEventField.BitNumber;
  local_188 = FFieldNotificationClassDescriptor::EntryBindingEventField.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_188);
  iVar7 = FDS_EntryBindingEventField::Num(&this->EntryBindingEventField);
  iVar4 = FFieldNotificationClassDescriptor::bIsEmptyList.BitNumber;
  FVar3 = FFieldNotificationClassDescriptor::bIsEmptyList.FieldName;
  if (this->bIsEmptyList != (iVar7 == 0)) {
    this->bIsEmptyList = iVar7 == 0;
    local_170 = iVar4;
    local_178 = FVar3;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_178);
  }
  local_198[0].Handle = 0;
  this_01 = FDS_TimerManager::Get((UObject *)0x0);
  local_1b8.SharedReferenceCount.ReferenceController._4_4_ =
       local_168.SharedReferenceCount.ReferenceController._4_4_;
  local_1b8.SharedReferenceCount.ReferenceController._0_4_ = 0;
  local_1b8.Object = (FDS_ViewModelContext_ChatMessage *)SetScrollToLastEvent;
  local_1c8.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_1c8.DelegateSize = 0;
  puVar10 = UE::Core::Private::DelegateAllocate(0x30,&local_1c8);
  if (puVar10 != (undefined8 *)0x0) {
    *puVar10 = &
               ___7__TCommonDelegateInstanceState___A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    uVar11 = FDelegateHandle::GenerateNewID();
    puVar10[2] = uVar11;
    *puVar10 = &
               ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_Chat_MessageList____A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar10[3] = 0;
    local_1a0 = this;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar10 + 3),(FObjectPtr)&local_1a0);
    puVar10[4] = local_1b8.Object;
    puVar10[5] = CONCAT44(local_1b8.SharedReferenceCount.ReferenceController._4_4_,
                          local_1b8.SharedReferenceCount.ReferenceController._0_4_);
  }
  FTimerManager::SetTimer
            (this_01,local_198,
             (TDelegate<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy> *)&local_1c8,
             __real_3c23d70a,false,__real_bf800000);
  if (local_1c8.DelegateSize != 0) {
    if (local_1c8.DelegateAllocator == (ForElementType<TAlignedBytes<16,16>_>)0x0)
    goto LAB_14bdc9ce8;
    (*(code *)**(undefined8 **)local_1c8.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_1c8,0,0,0x10);
    local_1c8.DelegateSize = 0;
  }
  if (local_1c8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_1c8.DelegateAllocator);
  }
LAB_14bdc9ce8:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  return;
}

// OnChangedChatType @ 14bdca6a0

void __thiscall
UDS_VM_Chat_MessageList::OnChangedChatType(UDS_VM_Chat_MessageList *this,ulong64 param_1)

{
  this->ChattingTypeFlag = param_1;
  UpdateChatMessages(this);
  return;
}

// OnSetViewModel @ 14bdd5b90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_Chat_MessageList::OnSetViewModel
          (UDS_VM_Chat_MessageList *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  UDS_LogManager *pUVar4;
  undefined1 auStackY_188 [32];
  TSharedPtr<FDS_ViewModelContext_Chat,1> local_158;
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
  SafeCast<FDS_ViewModelContext_Chat>(&local_158,&local_148);
  if (local_158.Object == (FDS_ViewModelContext_Chat *)0x0) {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 != (UDS_LogManager *)0x0) {
      pUVar4 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_VM_Chat_MessageList::OnSetViewModel",0x27,Yes);
      UDS_LogManager::PrintLog
                (pUVar4,1,Warning,local_138.Ptr,0x14,L"chatContext.IsValid() == false");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  else {
    if (local_158.Object == (FDS_ViewModelContext_Chat *)0x0) {
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
    this->ChattingTypeFlag = (local_158.Object)->ChattingTypeFlag;
    UpdateChatMessages(this);
    OnUpdateMarkMessageAsRead(this);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_158.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// OnUpdateMarkMessageAsRead @ 14bddfd40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_Chat_MessageList::OnUpdateMarkMessageAsRead(UDS_VM_Chat_MessageList *this)

{
  FName FVar1;
  int iVar2;
  UDS_ChattingManager *this_00;
  UDS_LogManager *pUVar3;
  undefined1 auStackY_178 [32];
  FName local_148;
  int local_140;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  this_00 = UDS_ChattingManager::GetInst();
  if (this_00 == (UDS_ChattingManager *)0x0) {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 != (UDS_LogManager *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_VM_Chat_MessageList::OnUpdateMarkMessageAsRead",0x32,Yes);
      UDS_LogManager::PrintLog(pUVar3,1,Warning,local_138.Ptr,0x7d,L"chattingManager == nullptr");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  else {
    iVar2 = UDS_ChattingManager::GetUnreadCount(this_00,Total,-1);
    local_140 = FFieldNotificationClassDescriptor::UnreadCountVisibility.BitNumber;
    local_148 = FFieldNotificationClassDescriptor::UnreadCountVisibility.FieldName;
    FVar1 = FFieldNotificationClassDescriptor::UnreadCount.FieldName;
    if (iVar2 < 1) {
      if (this->UnreadCountVisibility == Collapsed) {
        return;
      }
      this->UnreadCountVisibility = Collapsed;
    }
    else {
      if (this->UnreadCount != iVar2) {
        local_140 = FFieldNotificationClassDescriptor::UnreadCount.BitNumber;
        this->UnreadCount = iVar2;
        local_148 = FVar1;
        (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_148);
      }
      local_140 = FFieldNotificationClassDescriptor::UnreadCountVisibility.BitNumber;
      local_148 = FFieldNotificationClassDescriptor::UnreadCountVisibility.FieldName;
      if (this->UnreadCountVisibility == SelfHitTestInvisible) {
        return;
      }
      this->UnreadCountVisibility = SelfHitTestInvisible;
    }
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_148);
  }
  return;
}

// SetIsEmptyList @ 14bde6790

void __thiscall UDS_VM_Chat_MessageList::SetIsEmptyList(UDS_VM_Chat_MessageList *this,bool param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::bIsEmptyList.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::bIsEmptyList.FieldName;
  if (this->bIsEmptyList != param_1) {
    this->bIsEmptyList = param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetScrollToLastEvent @ 14bde8cc0

void __thiscall UDS_VM_Chat_MessageList::SetScrollToLastEvent(UDS_VM_Chat_MessageList *this)

{
  longlong *plVar1;
  FName local_18;
  int local_10;
  
  plVar1 = &this->_padding_;
  local_10 = FFieldNotificationClassDescriptor::ScrollToLastEventField.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::ScrollToLastEventField.FieldName;
  (**(code **)(*plVar1 + 0x38))(plVar1,&local_18);
  local_10 = FFieldNotificationClassDescriptor::ScrollToEndEvent.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::ScrollToEndEvent.FieldName;
  (**(code **)(*plVar1 + 0x38))(plVar1,&local_18);
  return;
}

// SetUnreadCount @ 14bde9b10

void __thiscall UDS_VM_Chat_MessageList::SetUnreadCount(UDS_VM_Chat_MessageList *this,int param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::UnreadCount.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::UnreadCount.FieldName;
  if (this->UnreadCount != param_1) {
    this->UnreadCount = param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetUnreadCountVisibility @ 14bde9c00

void __thiscall
UDS_VM_Chat_MessageList::SetUnreadCountVisibility
          (UDS_VM_Chat_MessageList *this,ESlateVisibility param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::UnreadCountVisibility.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::UnreadCountVisibility.FieldName;
  if (this->UnreadCountVisibility != param_1) {
    this->UnreadCountVisibility = param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// UnbindModel @ 14bdec080

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void __thiscall UDS_VM_Chat_MessageList::UnbindModel(UDS_VM_Chat_MessageList *this)

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
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar2->OnChangedChatType,this
              );
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar2->OnUpdateMarkMessageAsRead,this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar2->OnAddChatMessage,this)
    ;
  }
  return;
}

// UpdateChatMessages @ 14bdee9c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UDS_VM_Chat_MessageList::UpdateChatMessages(UDS_VM_Chat_MessageList *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  FName FVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  UDS_ChattingManager *pUVar8;
  ulonglong uVar9;
  UDS_LogManager *pUVar10;
  UObject *pUVar11;
  UDS_UserObjectListItem *pUVar12;
  FDS_ViewModelContext *pFVar13;
  UScriptStruct *pUVar14;
  UDS_ViewModelContextManager *this_00;
  FTimerManager *this_01;
  undefined8 *puVar15;
  ulong64 uVar16;
  FTimerUnifiedDelegate *pFVar17;
  FWeakObjectPtr *pFVar18;
  FDS_ViewModelContext *pFVar19;
  atomic<int> *paVar20;
  FDS_ViewModelContext *pFVar21;
  FDS_EntryBindingEventField *this_02;
  FWeakObjectPtr *this_03;
  undefined1 auStackY_268 [32];
  undefined1 local_238 [8];
  FWeakObjectPtr *local_230;
  FDelegateAllocation local_228;
  uint local_218;
  FDS_EntryBindingEventField *local_210;
  UDS_VM_Chat_MessageList *local_208;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  UDS_UserObjectListItem *local_1f8;
  UDS_VM_Chat_MessageList *local_1f0;
  FTimerHandle local_1e8 [2];
  FName local_1d8;
  int local_1d0;
  FName local_1c8;
  int local_1c0;
  TSharedPtr<FDS_ViewModelContext,1> local_1b8;
  undefined1 local_1a8;
  undefined8 local_1a0;
  FTimerUnifiedDelegate local_198;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_268;
  this_02 = &this->EntryBindingEventField;
  local_210 = this_02;
  local_208 = this;
  FDS_EntryBindingEventField::Reset(this_02);
  pUVar8 = UDS_ChattingManager::GetInst();
  if (pUVar8 != (UDS_ChattingManager *)0x0) {
    this_03 = (FWeakObjectPtr *)(pUVar8->ChattingDatas).AllocatorInstance.Data;
    local_218 = (pUVar8->ChattingDatas).ArrayNum;
    uVar9 = (ulonglong)(int)local_218;
    local_230 = this_03 + uVar9;
    pFVar18 = local_230;
    while( true ) {
      pFVar21 = (FDS_ViewModelContext *)0x0;
      if ((pUVar8->ChattingDatas).ArrayNum != (int)uVar9) {
        local_238[0] = 0;
        `TCheckedPointerIterator<TWeakObjectPtr<UDS_ChattingData,FWeakObjectPtr>_const_,int,0>::
        operator!='::__l2::<lambda_1>::operator()(local_238);
      }
      this_02 = local_210;
      this = local_208;
      if (this_03 == pFVar18) break;
      bVar5 = FWeakObjectPtr::IsValid(this_03);
      if (bVar5) {
        pUVar11 = GetTransientPackageAsObject();
        pUVar12 = NewObject<UDS_UserObjectListItem>(pUVar11);
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (pUVar12 != (UDS_UserObjectListItem *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)pUVar12);
        }
        pFVar13 = ::operator_new(0x28);
        pFVar19 = pFVar21;
        if (pFVar13 != (FDS_ViewModelContext *)0x0) {
          *(undefined8 *)&pFVar13->ViewModelTemplateKey = 0;
          *(undefined8 *)&pFVar13->DerivedStaticStruct = 0;
          (pFVar13->ViewModelName).ComparisonIndex = 0;
          (pFVar13->ViewModelName).Number = 0;
          pFVar13->_padding_ = (longlong)&___7FDS_ViewModelContext_ChatMessage__6B_;
          pFVar13[1]._padding_ = 0;
          pFVar19 = pFVar13;
        }
        pFVar13 = ::operator_new(0x20);
        if (pFVar13 != (FDS_ViewModelContext *)0x0) {
          *(code **)&(pFVar13->ViewModelName).ComparisonIndex = ViewModelContextDeleter;
          *(atomic<int> *)&pFVar13->DerivedStaticStruct = (atomic<int>)0x1;
          ((atomic<int> *)&pFVar13->DerivedStaticStruct)[1] = (atomic<int>)0x1;
          pFVar13->_padding_ =
               (longlong)
               &
               ___7__TReferenceControllerWithDeleter_UFDS_ViewModelContext_ChatMessage__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
          ;
          *(FDS_ViewModelContext **)&pFVar13->ViewModelTemplateKey = pFVar19;
          pFVar21 = pFVar13;
        }
        if ((pFVar19 == (FDS_ViewModelContext *)0x0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pUVar14 = FDS_ViewModelContext_ChatMessage::StaticStruct();
        *(UScriptStruct **)&pFVar19->DerivedStaticStruct = pUVar14;
        this_00 = UDS_ViewModelContextManager::GetInst();
        if (this_00 != (UDS_ViewModelContextManager *)0x0) {
          if (pFVar21 != (FDS_ViewModelContext *)0x0) {
            LOCK();
            *(atomic<int> *)&pFVar21->DerivedStaticStruct =
                 (atomic<int>)((int)*(atomic<int> *)&pFVar21->DerivedStaticStruct + 1);
            UNLOCK();
          }
          local_1b8.Object = pFVar19;
          local_1b8.SharedReferenceCount.ReferenceController =
               (TReferenceControllerBase<1> *)pFVar21;
          UDS_ViewModelContextManager::RegisterContext(this_00,&local_1b8);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_1b8.SharedReferenceCount.ReferenceController);
        }
        pFVar19->ViewModelTemplateKey = Chat_MessageSlot;
        pFVar19[1]._padding_ = (longlong)*this_03;
        if (pFVar21 == (FDS_ViewModelContext *)0x0) {
          paVar20 = (atomic<int> *)&DAT_00000008;
        }
        else {
          paVar20 = (atomic<int> *)&pFVar21->DerivedStaticStruct;
          LOCK();
          *paVar20 = (atomic<int>)((int)*paVar20 + 1);
          UNLOCK();
        }
        iVar6 = (pUVar12->ViewModelContextArray).ArrayNum;
        piVar1 = &(pUVar12->ViewModelContextArray).ArrayMax;
        if (iVar6 == *piVar1) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x810,&(pUVar12->ViewModelContextArray).AllocatorInstance,piVar1);
        }
        (pUVar12->ViewModelContextArray).ArrayNum = iVar6 + 1;
        pFVar2 = (pUVar12->ViewModelContextArray).AllocatorInstance.Data;
        *(FDS_ViewModelContext **)(pFVar2 + (longlong)iVar6 * 0x10) = pFVar19;
        *(FDS_ViewModelContext **)(pFVar2 + (longlong)iVar6 * 0x10 + 8) = pFVar21;
        if (pFVar21 != (FDS_ViewModelContext *)0x0) {
          LOCK();
          *paVar20 = (atomic<int>)((int)*paVar20 + 1);
          UNLOCK();
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)pFVar21);
        local_1f8 = pUVar12;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (pUVar12 != (UDS_UserObjectListItem *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)pUVar12);
        }
        FDS_EntryBindingEventField::Add(local_210,(TObjectPtr<UDS_UserObjectListItem>)&local_1f8);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)pFVar21);
        pFVar18 = local_230;
LAB_14bdeecdb:
        uVar9 = (ulonglong)local_218;
        this_03 = this_03 + 1;
      }
      else {
        pUVar10 = UDS_LogManager::GetInst();
        if (pUVar10 == (UDS_LogManager *)0x0) goto LAB_14bdeecdb;
        pUVar10 = UDS_LogManager::GetInst();
        local_158._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_158,"UDS_VM_Chat_MessageList::UpdateChatMessages",0x2b,Yes);
        UDS_LogManager::PrintLog
                  (pUVar10,1,Warning,local_158.Ptr,0x52,L"chattingData.IsValid() == false");
        pFVar18 = local_230;
        if ((void *)local_158._padding_ == (void *)0x0) goto LAB_14bdeecdb;
        FMemory::Free((void *)local_158._padding_);
        uVar9 = (ulonglong)local_218;
        this_03 = this_03 + 1;
        pFVar18 = local_230;
      }
    }
  }
  local_1d0 = FFieldNotificationClassDescriptor::EntryBindingEventField.BitNumber;
  local_1d8 = FFieldNotificationClassDescriptor::EntryBindingEventField.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_1d8);
  iVar7 = FDS_EntryBindingEventField::Num(this_02);
  iVar6 = FFieldNotificationClassDescriptor::bIsEmptyList.BitNumber;
  FVar4 = FFieldNotificationClassDescriptor::bIsEmptyList.FieldName;
  if (this->bIsEmptyList != (iVar7 == 0)) {
    this->bIsEmptyList = iVar7 == 0;
    local_1c0 = iVar6;
    local_1c8 = FVar4;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_1c8);
  }
  local_1e8[0].Handle = 0;
  this_01 = FDS_TimerManager::Get((UObject *)0x0);
  uStack_1fc = local_1a0._4_4_;
  uStack_200 = 0;
  local_208 = (UDS_VM_Chat_MessageList *)SetScrollToLastEvent;
  local_228.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_1a8 = 0;
  local_1a0 = &local_228;
  local_228.DelegateSize = 0;
  puVar15 = UE::Core::Private::DelegateAllocate(0x30,&local_228);
  if (puVar15 != (undefined8 *)0x0) {
    *puVar15 = &
               ___7__TCommonDelegateInstanceState___A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    uVar16 = FDelegateHandle::GenerateNewID();
    puVar15[2] = uVar16;
    *puVar15 = &
               ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_VM_Chat_MessageList____A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar15[3] = 0;
    local_1f0 = this;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar15 + 3),(FObjectPtr)&local_1f0);
    puVar15[4] = local_208;
    puVar15[5] = CONCAT44(uStack_1fc,uStack_200);
  }
  pFVar17 = FTimerUnifiedDelegate::FTimerUnifiedDelegate
                      (&local_198,
                       (TDelegate<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy> *)
                       &local_228);
  FTimerManager::InternalSetTimer(this_01,local_1e8,pFVar17,__real_3c23d70a,false,__real_bf800000);
  if ((3 < local_198.VariantDelegate.TypeIndex) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<std::nullptr_t,TDelegate<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy>,FTimerDynamicDelegate,TFunction<void___cdecl(void)>_>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[local_198.VariantDelegate.TypeIndex])(&local_198);
  if ((local_228.DelegateSize != 0) &&
     (local_228.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_228.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_228,0,0,0x10);
    local_228.DelegateSize = 0;
  }
  if (local_228.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_228.DelegateAllocator);
  }
  return;
}

