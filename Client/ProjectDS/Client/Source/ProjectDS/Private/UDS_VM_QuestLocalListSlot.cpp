// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 16

// SetClickSlotButton_WrapperImpl @ 14b6c37d0

void __cdecl UDS_VM_QuestLocalListSlot::SetClickSlotButton_WrapperImpl(void *param_1,void *param_2)

{
  int iVar1;
  bool bVar2;
  UDS_QuestEvent *pUVar3;
  
  pUVar3 = UDS_QuestEvent::GetEvent();
  if (pUVar3 != (UDS_QuestEvent *)0x0) {
    iVar1 = *(int *)((longlong)param_1 + 0xd8);
    bVar2 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                      ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                       &pUVar3->OnSelectedQuestDelegate);
    if (bVar2) {
      TMulticastDelegate<void___cdecl(int),FDefaultDelegateUserPolicy>::Broadcast
                (&(pUVar3->OnSelectedQuestDelegate).Delegate,iVar1);
    }
  }
  return;
}

// SetIsSelectedSlot_WrapperImpl @ 14b6c37e0

void __cdecl UDS_VM_QuestLocalListSlot::SetIsSelectedSlot_WrapperImpl(void *param_1,void *param_2)

{
  SetIsSelectedSlot(param_1,*(bool *)param_2);
  return;
}

// StaticClass @ 14b6c37f0

UClass * __cdecl UDS_VM_QuestLocalListSlot::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_QuestLocalListSlot.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_QuestLocalListSlot",
               &Z_Registration_Info_UClass_UDS_VM_QuestLocalListSlot.InnerSingleton,
               StaticRegisterNativesUDS_VM_QuestLocalListSlot,0xe0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_QuestLocalListSlot>,
               InternalVTableHelperCtorCaller<UDS_VM_QuestLocalListSlot>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_QuestLocalListSlot.InnerSingleton;
}

// UDS_VM_QuestLocalListSlot @ 14b6ca130

UDS_VM_QuestLocalListSlot * __thiscall
UDS_VM_QuestLocalListSlot::UDS_VM_QuestLocalListSlot
          (UDS_VM_QuestLocalListSlot *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_QuestLocalListSlot__6B_;
  *(undefined8 *)&(this->ClickSlotButton).Delegate = 0;
  *(undefined8 *)&(this->ClickSlotButton).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickSlotButton).Delegate.field_0x10 = 0;
  (this->VM_QuestData).field0_0x0.DebugPtr = (UDS_VM_QuestData *)0x0;
  this->QuestID = 0;
  (this->ClickSlotButton)._padding_ = '\0';
  (this->ClickSlotButton).bIsCustomSelected = false;
  (this->ClickSlotButton).bIsLacked = false;
  (this->ClickSlotButton).bIsCustomDisabled = false;
  return this;
}

// UDS_VM_QuestLocalListSlot @ 14b6ca1a0

UDS_VM_QuestLocalListSlot * __thiscall
UDS_VM_QuestLocalListSlot::UDS_VM_QuestLocalListSlot
          (UDS_VM_QuestLocalListSlot *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_QuestLocalListSlot__6B_;
  *(undefined8 *)&(this->ClickSlotButton).Delegate = 0;
  *(undefined8 *)&(this->ClickSlotButton).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickSlotButton).Delegate.field_0x10 = 0;
  (this->VM_QuestData).field0_0x0.DebugPtr = (UDS_VM_QuestData *)0x0;
  this->QuestID = 0;
  (this->ClickSlotButton)._padding_ = '\0';
  (this->ClickSlotButton).bIsCustomSelected = false;
  (this->ClickSlotButton).bIsLacked = false;
  (this->ClickSlotButton).bIsCustomDisabled = false;
  return this;
}

// ~UDS_VM_QuestLocalListSlot @ 14b6cc4c0

void __thiscall
UDS_VM_QuestLocalListSlot::~UDS_VM_QuestLocalListSlot(UDS_VM_QuestLocalListSlot *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_QuestLocalListSlot__6B_;
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ClickSlotButton).Delegate);
  pvVar1 = *(void **)&(this->ClickSlotButton).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ClickSlotButton).Delegate);
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b6cf840

IClassDescriptor * __thiscall
UDS_VM_QuestLocalListSlot::GetFieldNotificationDescriptor(UDS_VM_QuestLocalListSlot *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_QuestLocalListSlot::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b6d03c0

UClass * __cdecl UDS_VM_QuestLocalListSlot::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_QuestLocalListSlot.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_QuestLocalListSlot",
               &Z_Registration_Info_UClass_UDS_VM_QuestLocalListSlot.InnerSingleton,
               StaticRegisterNativesUDS_VM_QuestLocalListSlot,0xe0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_QuestLocalListSlot>,
               InternalVTableHelperCtorCaller<UDS_VM_QuestLocalListSlot>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_QuestLocalListSlot.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_QuestLocalListSlot @ 14b6d1020

void __cdecl UDS_VM_QuestLocalListSlot::StaticRegisterNativesUDS_VM_QuestLocalListSlot(void)

{
  return;
}

// OnChangeSelectQuestID @ 14bf5f930

void __thiscall
UDS_VM_QuestLocalListSlot::OnChangeSelectQuestID(UDS_VM_QuestLocalListSlot *this,int param_1)

{
  bool bVar1;
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::IsSelectedSlot.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::IsSelectedSlot.FieldName;
  bVar1 = this->QuestID == param_1;
  if (this->IsSelectedSlot != bVar1) {
    this->IsSelectedSlot = bVar1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// OnClickSlotButton @ 14bf62b40

void __thiscall
UDS_VM_QuestLocalListSlot::OnClickSlotButton
          (UDS_VM_QuestLocalListSlot *this,FDS_ButtonEventField *param_1)

{
  int iVar1;
  bool bVar2;
  UDS_QuestEvent *pUVar3;
  
  pUVar3 = UDS_QuestEvent::GetEvent();
  if (pUVar3 != (UDS_QuestEvent *)0x0) {
    iVar1 = this->QuestID;
    bVar2 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                      ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                       &pUVar3->OnSelectedQuestDelegate);
    if (bVar2) {
      TMulticastDelegate<void___cdecl(int),FDefaultDelegateUserPolicy>::Broadcast
                (&(pUVar3->OnSelectedQuestDelegate).Delegate,iVar1);
    }
  }
  return;
}

// OnSetViewModel @ 14bf6b100

void __thiscall
UDS_VM_QuestLocalListSlot::OnSetViewModel
          (UDS_VM_QuestLocalListSlot *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  bool bVar1;
  code *pcVar2;
  FName FVar3;
  int iVar4;
  FDS_ViewModelContext_Quest *pFVar5;
  bool bVar6;
  EDS_QuestConditionType EVar7;
  UDS_QuestEvent *pUVar8;
  UDS_VM_QuestData *pUVar9;
  UDS_QuestManager *this_00;
  TReferenceControllerBase<1> *pTVar10;
  FName local_98;
  int local_90;
  FName local_88;
  int local_80;
  FName local_78;
  int local_70;
  TSharedPtr<FDS_ViewModelContext_Quest,1> local_68;
  TSharedPtr<FDS_ViewModelContext_QuestListSlot,1> local_58;
  TSharedPtr<FDS_ViewModelContext,1> local_48;
  FDS_ViewModelContext_Quest *local_38;
  undefined8 uStack_30;
  TSharedPtr<FDS_ViewModelContext,1> local_28;
  
  local_48.Object = param_1->Object;
  local_48.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_48.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SafeCast<FDS_ViewModelContext_QuestListSlot>(&local_58,&local_48);
  if (local_58.Object == (FDS_ViewModelContext_QuestListSlot *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_58.SharedReferenceCount.ReferenceController);
    goto LAB_14bf6b3ad;
  }
  this->QuestID = (local_58.Object)->QuestID;
  bVar1 = (local_58.Object)->IsSelectedSlot;
  pUVar8 = UDS_QuestEvent::GetEvent();
  if (pUVar8 != (UDS_QuestEvent *)0x0) {
    local_68.SharedReferenceCount.ReferenceController._0_4_ = 0;
    local_68.Object = (FDS_ViewModelContext_Quest *)OnChangeSelectQuestID;
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar8->OnSelectedQuestDelegate,this);
    uStack_30 = CONCAT44(local_68.SharedReferenceCount.ReferenceController._4_4_,
                         local_68.SharedReferenceCount.ReferenceController._0_4_);
    local_38 = local_68.Object;
    TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_VM_QuestLocalListSlot>
              ((TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy> *)
               &pUVar8->OnSelectedQuestDelegate,(UDS_VM_QuestLocalListSlot *)&stack0x00000010,
               (pmf_715b8c22 *)this);
  }
  if ((this->VM_QuestData).field0_0x0.DebugPtr == (UDS_VM_QuestData *)0x0) {
    pUVar9 = UDS_ViewModelBase::CreateViewModel<UDS_VM_QuestData>((UObject *)this);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar9 != (UDS_VM_QuestData *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)pUVar9);
    }
    (this->VM_QuestData).field0_0x0.DebugPtr = pUVar9;
    if (pUVar9 != (UDS_VM_QuestData *)0x0) goto LAB_14bf6b1ff;
  }
  else {
LAB_14bf6b1ff:
    MakeContext<FDS_ViewModelContext_Quest>(&local_68);
    pFVar5 = local_68.Object;
    if (local_68.Object == (FDS_ViewModelContext_Quest *)0x0) {
      pTVar10 = (TReferenceControllerBase<1> *)
                CONCAT44(local_68.SharedReferenceCount.ReferenceController._4_4_,
                         local_68.SharedReferenceCount.ReferenceController._0_4_);
    }
    else {
      if (local_68.Object == (FDS_ViewModelContext_Quest *)0x0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar6) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      pTVar10 = (TReferenceControllerBase<1> *)
                CONCAT44(local_68.SharedReferenceCount.ReferenceController._4_4_,
                         local_68.SharedReferenceCount.ReferenceController._0_4_);
      *(undefined4 *)&pFVar5->_padding_ = 0x97;
      pFVar5->QuestID = this->QuestID;
      pUVar9 = (this->VM_QuestData).field0_0x0.DebugPtr;
      local_28.Object = (FDS_ViewModelContext *)local_68.Object;
      if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_28.SharedReferenceCount.ReferenceController = pTVar10;
      UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)pUVar9,&local_28);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  }
  iVar4 = FFieldNotificationClassDescriptor::IsSelectedSlot.BitNumber;
  FVar3 = FFieldNotificationClassDescriptor::IsSelectedSlot.FieldName;
  if (this->IsSelectedSlot != bVar1) {
    this->IsSelectedSlot = bVar1;
    local_90 = iVar4;
    local_98 = FVar3;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_98);
  }
  this_00 = UDS_QuestManager::GetInst();
  if (this_00 != (UDS_QuestManager *)0x0) {
    EVar7 = UDS_QuestManager::GetQuestConditionType(this_00,this->QuestID,0);
    if (EVar7 == AbleComplete) {
      this->QuestStateActiveWidgetIndex = 2;
    }
    else if (EVar7 == AbleAccept) {
      this->QuestStateActiveWidgetIndex = 1;
    }
    else if (EVar7 == InProgress) {
      this->QuestStateActiveWidgetIndex = 0;
    }
    else if (EVar7 == NotAbleAccept) {
      this->QuestStateActiveWidgetIndex = 3;
    }
    else if (EVar7 == Completed) {
      this->QuestStateActiveWidgetIndex = 4;
    }
    this->QuestTypeWidgetIndex = (uint)(EVar7 == AbleComplete);
    local_80 = FFieldNotificationClassDescriptor::QuestStateActiveWidgetIndex.BitNumber;
    local_88 = FFieldNotificationClassDescriptor::QuestStateActiveWidgetIndex.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_88);
    local_70 = FFieldNotificationClassDescriptor::QuestTypeWidgetIndex.BitNumber;
    local_78 = FFieldNotificationClassDescriptor::QuestTypeWidgetIndex.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_78);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_58.SharedReferenceCount.ReferenceController);
LAB_14bf6b3ad:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// SetIsSelectedSlot @ 14bf7b560

void __thiscall
UDS_VM_QuestLocalListSlot::SetIsSelectedSlot(UDS_VM_QuestLocalListSlot *this,bool param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::IsSelectedSlot.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::IsSelectedSlot.FieldName;
  if (this->IsSelectedSlot != param_1) {
    this->IsSelectedSlot = param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetQuestStateActiveWidgetIndex @ 14bf7ce30

void __thiscall
UDS_VM_QuestLocalListSlot::SetQuestStateActiveWidgetIndex(UDS_VM_QuestLocalListSlot *this)

{
  EDS_QuestConditionType EVar1;
  UDS_QuestManager *this_00;
  FName local_18;
  int local_10;
  
  this_00 = UDS_QuestManager::GetInst();
  if (this_00 != (UDS_QuestManager *)0x0) {
    EVar1 = UDS_QuestManager::GetQuestConditionType(this_00,this->QuestID,0);
    if (EVar1 == AbleComplete) {
      this->QuestStateActiveWidgetIndex = 2;
    }
    else if (EVar1 == AbleAccept) {
      this->QuestStateActiveWidgetIndex = 1;
    }
    else if (EVar1 == InProgress) {
      this->QuestStateActiveWidgetIndex = 0;
    }
    else if (EVar1 == NotAbleAccept) {
      this->QuestStateActiveWidgetIndex = 3;
    }
    else if (EVar1 == Completed) {
      this->QuestStateActiveWidgetIndex = 4;
    }
    this->QuestTypeWidgetIndex = (uint)(EVar1 == AbleComplete);
    local_10 = FFieldNotificationClassDescriptor::QuestStateActiveWidgetIndex.BitNumber;
    local_18 = FFieldNotificationClassDescriptor::QuestStateActiveWidgetIndex.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
    local_10 = FFieldNotificationClassDescriptor::QuestTypeWidgetIndex.BitNumber;
    local_18 = FFieldNotificationClassDescriptor::QuestTypeWidgetIndex.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetVM_QuestData @ 14bf7ffe0

void __thiscall UDS_VM_QuestLocalListSlot::SetVM_QuestData(UDS_VM_QuestLocalListSlot *this)

{
  code *pcVar1;
  FDS_ViewModelContext_Quest *pFVar2;
  bool bVar3;
  UDS_VM_QuestData *pUVar4;
  TSharedPtr<FDS_ViewModelContext_Quest,1> local_28;
  TSharedPtr<FDS_ViewModelContext,1> local_18;
  
  if ((this->VM_QuestData).field0_0x0.DebugPtr == (UDS_VM_QuestData *)0x0) {
    pUVar4 = UDS_ViewModelBase::CreateViewModel<UDS_VM_QuestData>((UObject *)this);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UDS_VM_QuestData *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)pUVar4);
    }
    (this->VM_QuestData).field0_0x0.DebugPtr = pUVar4;
    if (pUVar4 == (UDS_VM_QuestData *)0x0) {
      return;
    }
  }
  MakeContext<FDS_ViewModelContext_Quest>(&local_28);
  pFVar2 = local_28.Object;
  if (local_28.Object == (FDS_ViewModelContext_Quest *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
    return;
  }
  if ((local_28.Object == (FDS_ViewModelContext_Quest *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  *(undefined4 *)&pFVar2->_padding_ = 0x97;
  pFVar2->QuestID = this->QuestID;
  pUVar4 = (this->VM_QuestData).field0_0x0.DebugPtr;
  local_18.Object = (FDS_ViewModelContext *)local_28.Object;
  local_18.SharedReferenceCount.ReferenceController =
       local_28.SharedReferenceCount.ReferenceController;
  if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)pUVar4,&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  return;
}

// UnbindModel @ 14bf85270

void __thiscall UDS_VM_QuestLocalListSlot::UnbindModel(UDS_VM_QuestLocalListSlot *this)

{
  UDS_QuestEvent *pUVar1;
  
  UDS_ViewModelBase::UnbindModel((UDS_ViewModelBase *)this);
  pUVar1 = UDS_QuestEvent::GetEvent();
  if (pUVar1 != (UDS_QuestEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar1->OnSelectedQuestDelegate,this);
    return;
  }
  return;
}

