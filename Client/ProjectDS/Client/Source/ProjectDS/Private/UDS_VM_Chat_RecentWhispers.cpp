// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 16

// SetFocusLostEvent_WrapperImpl @ 14b610600

void __cdecl UDS_VM_Chat_RecentWhispers::SetFocusLostEvent_WrapperImpl(void *param_1,void *param_2)

{
  FName FStack_18;
  int iStack_10;
  
  iStack_10 = UDS_ViewModelBase::FFieldNotificationClassDescriptor::Visibility.BitNumber;
  FStack_18 = UDS_ViewModelBase::FFieldNotificationClassDescriptor::Visibility.FieldName;
  if (*(char *)((longlong)param_2 + 1) == '\0') {
    if (*(char *)((longlong)param_1 + 0x80) != '\x01') {
      *(undefined1 *)((longlong)param_1 + 0x80) = 1;
      (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
                ((longlong *)((longlong)param_1 + 0x28),&FStack_18);
    }
  }
  return;
}

// StaticClass @ 14b610610

UClass * __cdecl UDS_VM_Chat_RecentWhispers::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_Chat_RecentWhispers.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_Chat_RecentWhispers",
               &Z_Registration_Info_UClass_UDS_VM_Chat_RecentWhispers.InnerSingleton,
               StaticRegisterNativesUDS_VM_Chat_RecentWhispers,0xb8,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UDS_VM_Chat_RecentWhispers>,
               InternalVTableHelperCtorCaller<UDS_VM_Chat_RecentWhispers>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_Chat_RecentWhispers.InnerSingleton;
}

// UDS_VM_Chat_RecentWhispers @ 14b6166e0

UDS_VM_Chat_RecentWhispers * __thiscall
UDS_VM_Chat_RecentWhispers::UDS_VM_Chat_RecentWhispers
          (UDS_VM_Chat_RecentWhispers *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_Chat_RecentWhispers__6B_;
  (this->EntryBindingEventField).UserObjectList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->EntryBindingEventField).UserObjectList.ArrayNum = 0;
  (this->EntryBindingEventField).UserObjectList.ArrayMax = 0;
  (this->FocusLostEvent)._padding_ = '\0';
  (this->FocusLostEvent).bLostFocusByChild = false;
  (this->SetFocusEvent).bIsActivate = false;
  return this;
}

// UDS_VM_Chat_RecentWhispers @ 14b616740

UDS_VM_Chat_RecentWhispers * __thiscall
UDS_VM_Chat_RecentWhispers::UDS_VM_Chat_RecentWhispers
          (UDS_VM_Chat_RecentWhispers *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_Chat_RecentWhispers__6B_;
  (this->EntryBindingEventField).UserObjectList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->EntryBindingEventField).UserObjectList.ArrayNum = 0;
  (this->EntryBindingEventField).UserObjectList.ArrayMax = 0;
  (this->FocusLostEvent)._padding_ = '\0';
  (this->FocusLostEvent).bLostFocusByChild = false;
  (this->SetFocusEvent).bIsActivate = false;
  return this;
}

// ~UDS_VM_Chat_RecentWhispers @ 14b6179e0

void __thiscall
UDS_VM_Chat_RecentWhispers::~UDS_VM_Chat_RecentWhispers(UDS_VM_Chat_RecentWhispers *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_Chat_RecentWhispers__6B_;
  pFVar1 = (this->EntryBindingEventField).UserObjectList.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b619550

IClassDescriptor * __thiscall
UDS_VM_Chat_RecentWhispers::GetFieldNotificationDescriptor(UDS_VM_Chat_RecentWhispers *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_Chat_RecentWhispers::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b61a100

UClass * __cdecl UDS_VM_Chat_RecentWhispers::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_Chat_RecentWhispers.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_Chat_RecentWhispers",
               &Z_Registration_Info_UClass_UDS_VM_Chat_RecentWhispers.InnerSingleton,
               StaticRegisterNativesUDS_VM_Chat_RecentWhispers,0xb8,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UDS_VM_Chat_RecentWhispers>,
               InternalVTableHelperCtorCaller<UDS_VM_Chat_RecentWhispers>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_Chat_RecentWhispers.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_Chat_RecentWhispers @ 14b61a2b0

void __cdecl UDS_VM_Chat_RecentWhispers::StaticRegisterNativesUDS_VM_Chat_RecentWhispers(void)

{
  return;
}

// BindModel @ 14bdb0700

void __thiscall UDS_VM_Chat_RecentWhispers::BindModel(UDS_VM_Chat_RecentWhispers *this)

{
  UDS_ChatEvent *pUVar1;
  
  UDS_ViewModelBase::BindModel((UDS_ViewModelBase *)this);
  pUVar1 = UDS_ChatEvent::GetEvent();
  if (pUVar1 != (UDS_ChatEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->OnChatPopup,this);
    TMulticastDelegateRegistration<void___cdecl(enum_EDS_ViewModelTemplateKey,bool),FDefaultDelegateUserPolicy>
    ::AddUObject<UDS_VM_Chat_RecentWhispers>
              (&pUVar1->OnChatPopup,(UDS_VM_Chat_RecentWhispers *)&stack0x00000010,
               (pmf_b1e7cf0c *)this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar1->OnRefreshRecentWhispers,this);
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_VM_Chat_RecentWhispers>
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &pUVar1->OnRefreshRecentWhispers,(UDS_VM_Chat_RecentWhispers *)&stack0x00000010,
               (pmf_c2c44c36 *)this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->OnSelectedWhisper,this
              );
    TMulticastDelegateRegistration<void___cdecl(FString_const_&),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_VM_Chat_RecentWhispers>
              ((TMulticastDelegateRegistration<void___cdecl(FString_const_&),FDefaultDelegateUserPolicy>
                *)&pUVar1->OnSelectedWhisper,(UDS_VM_Chat_RecentWhispers *)&stack0x00000010,
               (pmf_a4983512 *)this);
  }
  return;
}

// OnChatPopup @ 14bdcb030

void __thiscall
UDS_VM_Chat_RecentWhispers::OnChatPopup
          (UDS_VM_Chat_RecentWhispers *this,EDS_ViewModelTemplateKey param_1,bool param_2)

{
  FName local_18;
  int local_10;
  
  local_10 = UDS_ViewModelBase::FFieldNotificationClassDescriptor::Visibility.BitNumber;
  local_18 = UDS_ViewModelBase::FFieldNotificationClassDescriptor::Visibility.FieldName;
  if (param_1 == Chat_RecentWhispers) {
    if (param_2) {
      UpdateRecentWhispers(this);
      local_10 = UDS_ViewModelBase::FFieldNotificationClassDescriptor::Visibility.BitNumber;
      local_18 = UDS_ViewModelBase::FFieldNotificationClassDescriptor::Visibility.FieldName;
      if ((char)this->_padding_ == '\x04') {
        return;
      }
      *(undefined1 *)&this->_padding_ = 4;
    }
    else {
      if ((char)this->_padding_ == '\x01') {
        return;
      }
      *(undefined1 *)&this->_padding_ = 1;
    }
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// OnFocusLostEvent @ 14bdceda0

void __thiscall
UDS_VM_Chat_RecentWhispers::OnFocusLostEvent
          (UDS_VM_Chat_RecentWhispers *this,FDS_FocusEventField *param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = UDS_ViewModelBase::FFieldNotificationClassDescriptor::Visibility.BitNumber;
  local_18 = UDS_ViewModelBase::FFieldNotificationClassDescriptor::Visibility.FieldName;
  if (param_1->bLostFocusByChild == false) {
    if ((char)this->_padding_ != '\x01') {
      *(undefined1 *)&this->_padding_ = 1;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
    }
  }
  return;
}

// OnRefreshRecentWhispers @ 14bdd1640

void __thiscall
UDS_VM_Chat_RecentWhispers::OnRefreshRecentWhispers(UDS_VM_Chat_RecentWhispers *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  UDS_ChattingManager *this_00;
  ulonglong uVar6;
  UDS_UserObjectListItem *pUVar7;
  FDS_ViewModelContext *pFVar8;
  UScriptStruct *pUVar9;
  UDS_ViewModelContextManager *this_01;
  FDS_ViewModelContext *pFVar10;
  FDS_ViewModelContext *pFVar11;
  atomic<int> *paVar12;
  TSharedPtr<FDS_ChatUserInfo,1> *pTVar13;
  ForAnyElementType FVar14;
  undefined1 auStackX_8 [8];
  uint uStackX_10;
  UDS_UserObjectListItem *pUStackX_18;
  FName FStack_68;
  int iStack_60;
  TArray<TSharedPtr<FDS_ChatUserInfo,1>,TSizedDefaultAllocator<32>_> TStack_58;
  TSharedPtr<FDS_ViewModelContext,1> TStack_48;
  
  FDS_EntryBindingEventField::Reset(&this->EntryBindingEventField);
  this_00 = UDS_ChattingManager::GetInst();
  if (this_00 != (UDS_ChattingManager *)0x0) {
    UDS_ChattingManager::GetRecentWhispers(this_00,&TStack_58);
    uVar6 = (ulonglong)TStack_58.ArrayNum;
    pTVar13 = (TSharedPtr<FDS_ChatUserInfo,1> *)(TStack_58.AllocatorInstance.Data + uVar6 * 0x10);
    uStackX_10 = TStack_58.ArrayNum;
    FVar14.Data = TStack_58.AllocatorInstance.Data;
    while( true ) {
      pFVar11 = (FDS_ViewModelContext *)0x0;
      if (TStack_58.ArrayNum != (uint)uVar6) {
        auStackX_8[0] = 0;
        `TCheckedPointerIterator<TSharedPtr<FDS_ChatUserInfo,1>_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(auStackX_8);
      }
      if ((TSharedPtr<FDS_ChatUserInfo,1> *)FVar14.Data == pTVar13) break;
      if (((TSharedPtr<FDS_ChatUserInfo,1> *)FVar14.Data)->Object != (FDS_ChatUserInfo *)0x0) {
        pUVar7 = NewObject<UDS_UserObjectListItem>((UObject *)this);
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (pUVar7 != (UDS_UserObjectListItem *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)pUVar7);
        }
        pFVar8 = ::operator_new(0x28);
        pFVar10 = pFVar11;
        if (pFVar8 != (FDS_ViewModelContext *)0x0) {
          *(undefined8 *)&pFVar8->ViewModelTemplateKey = 0;
          *(undefined8 *)&pFVar8->DerivedStaticStruct = 0;
          (pFVar8->ViewModelName).ComparisonIndex = 0;
          (pFVar8->ViewModelName).Number = 0;
          pFVar8->_padding_ = (longlong)&___7FDS_ViewModelContext_ChatWhisper__6B_;
          pFVar8[1]._padding_ = 0;
          pFVar10 = pFVar8;
        }
        pFVar8 = ::operator_new(0x20);
        if (pFVar8 != (FDS_ViewModelContext *)0x0) {
          *(code **)&(pFVar8->ViewModelName).ComparisonIndex = ViewModelContextDeleter;
          *(atomic<int> *)&pFVar8->DerivedStaticStruct = (atomic<int>)0x1;
          ((atomic<int> *)&pFVar8->DerivedStaticStruct)[1] = (atomic<int>)0x1;
          pFVar8->_padding_ =
               (longlong)
               &
               ___7__TReferenceControllerWithDeleter_UFDS_ViewModelContext_ChatWhisper__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
          ;
          *(FDS_ViewModelContext **)&pFVar8->ViewModelTemplateKey = pFVar10;
          pFVar11 = pFVar8;
        }
        if ((pFVar10 == (FDS_ViewModelContext *)0x0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pUVar9 = FDS_ViewModelContext_ChatWhisper::StaticStruct();
        *(UScriptStruct **)&pFVar10->DerivedStaticStruct = pUVar9;
        this_01 = UDS_ViewModelContextManager::GetInst();
        if (this_01 != (UDS_ViewModelContextManager *)0x0) {
          if (pFVar11 != (FDS_ViewModelContext *)0x0) {
            LOCK();
            *(atomic<int> *)&pFVar11->DerivedStaticStruct =
                 (atomic<int>)((int)*(atomic<int> *)&pFVar11->DerivedStaticStruct + 1);
            UNLOCK();
          }
          TStack_48.Object = pFVar10;
          TStack_48.SharedReferenceCount.ReferenceController =
               (TReferenceControllerBase<1> *)pFVar11;
          UDS_ViewModelContextManager::RegisterContext(this_01,&TStack_48);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (TStack_48.SharedReferenceCount.ReferenceController);
        }
        pFVar10->ViewModelTemplateKey = Chat_RecentWhisperSlot;
        if ((((TSharedPtr<FDS_ChatUserInfo,1> *)FVar14.Data)->Object == (FDS_ChatUserInfo *)0x0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar10[1]._padding_ = ((TSharedPtr<FDS_ChatUserInfo,1> *)FVar14.Data)->Object->PlayerUID;
        if (pFVar11 == (FDS_ViewModelContext *)0x0) {
          paVar12 = (atomic<int> *)&DAT_00000008;
        }
        else {
          paVar12 = (atomic<int> *)&pFVar11->DerivedStaticStruct;
          LOCK();
          *paVar12 = (atomic<int>)((int)*paVar12 + 1);
          UNLOCK();
        }
        iVar5 = (pUVar7->ViewModelContextArray).ArrayNum;
        piVar1 = &(pUVar7->ViewModelContextArray).ArrayMax;
        if (iVar5 == *piVar1) {
          iVar5 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x810,&(pUVar7->ViewModelContextArray).AllocatorInstance,piVar1);
        }
        (pUVar7->ViewModelContextArray).ArrayNum = iVar5 + 1;
        pFVar2 = (pUVar7->ViewModelContextArray).AllocatorInstance.Data;
        *(FDS_ViewModelContext **)(pFVar2 + (longlong)iVar5 * 0x10) = pFVar10;
        *(FDS_ViewModelContext **)(pFVar2 + (longlong)iVar5 * 0x10 + 8) = pFVar11;
        if (pFVar11 != (FDS_ViewModelContext *)0x0) {
          LOCK();
          *paVar12 = (atomic<int>)((int)*paVar12 + 1);
          UNLOCK();
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)pFVar11);
        pUStackX_18 = pUVar7;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (pUVar7 != (UDS_UserObjectListItem *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)pUVar7);
        }
        FDS_EntryBindingEventField::Add
                  (&this->EntryBindingEventField,(TObjectPtr<UDS_UserObjectListItem>)&pUStackX_18);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)pFVar11);
      }
      uVar6 = (ulonglong)uStackX_10;
      FVar14.Data = FVar14.Data + 0x10;
    }
    DestructItems<TSharedPtr<FDS_ChatUserInfo,1>,int>
              ((TSharedPtr<FDS_ChatUserInfo,1> *)TStack_58.AllocatorInstance.Data,TStack_58.ArrayNum
              );
    if ((TSharedPtr<FDS_ChatUserInfo,1> *)TStack_58.AllocatorInstance.Data !=
        (TSharedPtr<FDS_ChatUserInfo,1> *)0x0) {
      FMemory::Free(TStack_58.AllocatorInstance.Data);
    }
  }
  iStack_60 = FFieldNotificationClassDescriptor::EntryBindingEventField.BitNumber;
  FStack_68 = FFieldNotificationClassDescriptor::EntryBindingEventField.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&FStack_68);
  return;
}

// OnSelectedWhisper @ 14bdd1f00

void __thiscall
UDS_VM_Chat_RecentWhispers::OnSelectedWhisper(UDS_VM_Chat_RecentWhispers *this,FString *param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = UDS_ViewModelBase::FFieldNotificationClassDescriptor::Visibility.BitNumber;
  local_18 = UDS_ViewModelBase::FFieldNotificationClassDescriptor::Visibility.FieldName;
  if ((param_1->Data).ArrayNum < 2) {
    UpdateRecentWhispers(this);
    local_10 = UDS_ViewModelBase::FFieldNotificationClassDescriptor::Visibility.BitNumber;
    local_18 = UDS_ViewModelBase::FFieldNotificationClassDescriptor::Visibility.FieldName;
    if ((char)this->_padding_ == '\x04') {
      return;
    }
    *(undefined1 *)&this->_padding_ = 4;
  }
  else {
    if ((char)this->_padding_ == '\x01') {
      return;
    }
    *(undefined1 *)&this->_padding_ = 1;
  }
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// OnSetViewModel @ 14bdd6030

void __thiscall
UDS_VM_Chat_RecentWhispers::OnSetViewModel
          (UDS_VM_Chat_RecentWhispers *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  FName FVar2;
  int iVar3;
  FName local_18;
  int local_10;
  
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  iVar3 = UDS_ViewModelBase::FFieldNotificationClassDescriptor::Visibility.BitNumber;
  FVar2 = UDS_ViewModelBase::FFieldNotificationClassDescriptor::Visibility.FieldName;
  if ((char)this->_padding_ != '\x01') {
    *(undefined1 *)&this->_padding_ = 1;
    local_10 = iVar3;
    local_18 = FVar2;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// UnbindModel @ 14bdec1a0

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void __thiscall UDS_VM_Chat_RecentWhispers::UnbindModel(UDS_VM_Chat_RecentWhispers *this)

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
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar2->OnChatPopup,this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar2->OnRefreshRecentWhispers,this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar2->OnSelectedWhisper,this
              );
  }
  return;
}

// UpdateRecentWhispers @ 14bdf4650

void __thiscall UDS_VM_Chat_RecentWhispers::UpdateRecentWhispers(UDS_VM_Chat_RecentWhispers *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  UDS_ChattingManager *this_00;
  ulonglong uVar6;
  UDS_UserObjectListItem *pUVar7;
  FDS_ViewModelContext *pFVar8;
  UScriptStruct *pUVar9;
  UDS_ViewModelContextManager *this_01;
  FDS_ViewModelContext *pFVar10;
  FDS_ViewModelContext *pFVar11;
  atomic<int> *paVar12;
  TSharedPtr<FDS_ChatUserInfo,1> *pTVar13;
  ForAnyElementType FVar14;
  undefined1 local_res8 [8];
  uint local_res10;
  UDS_UserObjectListItem *local_res18;
  FName local_68;
  int local_60;
  TArray<TSharedPtr<FDS_ChatUserInfo,1>,TSizedDefaultAllocator<32>_> local_58;
  TSharedPtr<FDS_ViewModelContext,1> local_48;
  
  FDS_EntryBindingEventField::Reset(&this->EntryBindingEventField);
  this_00 = UDS_ChattingManager::GetInst();
  if (this_00 != (UDS_ChattingManager *)0x0) {
    UDS_ChattingManager::GetRecentWhispers(this_00,&local_58);
    uVar6 = (ulonglong)local_58.ArrayNum;
    pTVar13 = (TSharedPtr<FDS_ChatUserInfo,1> *)(local_58.AllocatorInstance.Data + uVar6 * 0x10);
    local_res10 = local_58.ArrayNum;
    FVar14.Data = local_58.AllocatorInstance.Data;
    while( true ) {
      pFVar11 = (FDS_ViewModelContext *)0x0;
      if (local_58.ArrayNum != (uint)uVar6) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<TSharedPtr<FDS_ChatUserInfo,1>_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res8);
      }
      if ((TSharedPtr<FDS_ChatUserInfo,1> *)FVar14.Data == pTVar13) break;
      if (((TSharedPtr<FDS_ChatUserInfo,1> *)FVar14.Data)->Object != (FDS_ChatUserInfo *)0x0) {
        pUVar7 = NewObject<UDS_UserObjectListItem>((UObject *)this);
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (pUVar7 != (UDS_UserObjectListItem *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)pUVar7);
        }
        pFVar8 = ::operator_new(0x28);
        pFVar10 = pFVar11;
        if (pFVar8 != (FDS_ViewModelContext *)0x0) {
          *(undefined8 *)&pFVar8->ViewModelTemplateKey = 0;
          *(undefined8 *)&pFVar8->DerivedStaticStruct = 0;
          (pFVar8->ViewModelName).ComparisonIndex = 0;
          (pFVar8->ViewModelName).Number = 0;
          pFVar8->_padding_ = (longlong)&___7FDS_ViewModelContext_ChatWhisper__6B_;
          pFVar8[1]._padding_ = 0;
          pFVar10 = pFVar8;
        }
        pFVar8 = ::operator_new(0x20);
        if (pFVar8 != (FDS_ViewModelContext *)0x0) {
          *(code **)&(pFVar8->ViewModelName).ComparisonIndex = ViewModelContextDeleter;
          *(atomic<int> *)&pFVar8->DerivedStaticStruct = (atomic<int>)0x1;
          ((atomic<int> *)&pFVar8->DerivedStaticStruct)[1] = (atomic<int>)0x1;
          pFVar8->_padding_ =
               (longlong)
               &
               ___7__TReferenceControllerWithDeleter_UFDS_ViewModelContext_ChatWhisper__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
          ;
          *(FDS_ViewModelContext **)&pFVar8->ViewModelTemplateKey = pFVar10;
          pFVar11 = pFVar8;
        }
        if ((pFVar10 == (FDS_ViewModelContext *)0x0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pUVar9 = FDS_ViewModelContext_ChatWhisper::StaticStruct();
        *(UScriptStruct **)&pFVar10->DerivedStaticStruct = pUVar9;
        this_01 = UDS_ViewModelContextManager::GetInst();
        if (this_01 != (UDS_ViewModelContextManager *)0x0) {
          if (pFVar11 != (FDS_ViewModelContext *)0x0) {
            LOCK();
            *(atomic<int> *)&pFVar11->DerivedStaticStruct =
                 (atomic<int>)((int)*(atomic<int> *)&pFVar11->DerivedStaticStruct + 1);
            UNLOCK();
          }
          local_48.Object = pFVar10;
          local_48.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar11
          ;
          UDS_ViewModelContextManager::RegisterContext(this_01,&local_48);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_48.SharedReferenceCount.ReferenceController);
        }
        pFVar10->ViewModelTemplateKey = Chat_RecentWhisperSlot;
        if ((((TSharedPtr<FDS_ChatUserInfo,1> *)FVar14.Data)->Object == (FDS_ChatUserInfo *)0x0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar10[1]._padding_ = ((TSharedPtr<FDS_ChatUserInfo,1> *)FVar14.Data)->Object->PlayerUID;
        if (pFVar11 == (FDS_ViewModelContext *)0x0) {
          paVar12 = (atomic<int> *)&DAT_00000008;
        }
        else {
          paVar12 = (atomic<int> *)&pFVar11->DerivedStaticStruct;
          LOCK();
          *paVar12 = (atomic<int>)((int)*paVar12 + 1);
          UNLOCK();
        }
        iVar5 = (pUVar7->ViewModelContextArray).ArrayNum;
        piVar1 = &(pUVar7->ViewModelContextArray).ArrayMax;
        if (iVar5 == *piVar1) {
          iVar5 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x810,&(pUVar7->ViewModelContextArray).AllocatorInstance,piVar1);
        }
        (pUVar7->ViewModelContextArray).ArrayNum = iVar5 + 1;
        pFVar2 = (pUVar7->ViewModelContextArray).AllocatorInstance.Data;
        *(FDS_ViewModelContext **)(pFVar2 + (longlong)iVar5 * 0x10) = pFVar10;
        *(FDS_ViewModelContext **)(pFVar2 + (longlong)iVar5 * 0x10 + 8) = pFVar11;
        if (pFVar11 != (FDS_ViewModelContext *)0x0) {
          LOCK();
          *paVar12 = (atomic<int>)((int)*paVar12 + 1);
          UNLOCK();
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)pFVar11);
        local_res18 = pUVar7;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (pUVar7 != (UDS_UserObjectListItem *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)pUVar7);
        }
        FDS_EntryBindingEventField::Add
                  (&this->EntryBindingEventField,(TObjectPtr<UDS_UserObjectListItem>)&local_res18);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)pFVar11);
      }
      uVar6 = (ulonglong)local_res10;
      FVar14.Data = FVar14.Data + 0x10;
    }
    DestructItems<TSharedPtr<FDS_ChatUserInfo,1>,int>
              ((TSharedPtr<FDS_ChatUserInfo,1> *)local_58.AllocatorInstance.Data,local_58.ArrayNum);
    if ((TSharedPtr<FDS_ChatUserInfo,1> *)local_58.AllocatorInstance.Data !=
        (TSharedPtr<FDS_ChatUserInfo,1> *)0x0) {
      FMemory::Free(local_58.AllocatorInstance.Data);
    }
  }
  local_60 = FFieldNotificationClassDescriptor::EntryBindingEventField.BitNumber;
  local_68 = FFieldNotificationClassDescriptor::EntryBindingEventField.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_68);
  return;
}

