// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 21

// SetVisibilityStory_WrapperImpl @ 14b6c4e40

void __cdecl UDS_VM_QuestInfo::SetVisibilityStory_WrapperImpl(void *param_1,void *param_2)

{
  FName FStack_18;
  int iStack_10;
  
  iStack_10 = FFieldNotificationClassDescriptor::VisibilityStory.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::VisibilityStory.FieldName;
  if (*(char *)((longlong)param_1 + 0xa0) != *(char *)param_2) {
    *(char *)((longlong)param_1 + 0xa0) = *(char *)param_2;
    (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
              ((longlong)param_1 + 0x28,&FStack_18);
  }
  return;
}

// SetVisibilityRequirement_WrapperImpl @ 14b6c4e50

void __cdecl UDS_VM_QuestInfo::SetVisibilityRequirement_WrapperImpl(void *param_1,void *param_2)

{
  FName FStack_18;
  int iStack_10;
  
  iStack_10 = FFieldNotificationClassDescriptor::VisibilityRequirement.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::VisibilityRequirement.FieldName;
  if (*(char *)((longlong)param_1 + 0xa1) != *(char *)param_2) {
    *(char *)((longlong)param_1 + 0xa1) = *(char *)param_2;
    (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
              ((longlong)param_1 + 0x28,&FStack_18);
  }
  return;
}

// SetVisibilityCondition_WrapperImpl @ 14b6c4e60

void __cdecl UDS_VM_QuestInfo::SetVisibilityCondition_WrapperImpl(void *param_1,void *param_2)

{
  FName FStack_18;
  int iStack_10;
  
  iStack_10 = FFieldNotificationClassDescriptor::VisibilityCondition.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::VisibilityCondition.FieldName;
  if (*(char *)((longlong)param_1 + 0xa3) != *(char *)param_2) {
    *(char *)((longlong)param_1 + 0xa3) = *(char *)param_2;
    (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
              ((longlong)param_1 + 0x28,&FStack_18);
  }
  return;
}

// SetVisibilityQuestObjective_WrapperImpl @ 14b6c4e70

void __cdecl UDS_VM_QuestInfo::SetVisibilityQuestObjective_WrapperImpl(void *param_1,void *param_2)

{
  FName FStack_18;
  int iStack_10;
  
  iStack_10 = FFieldNotificationClassDescriptor::VisibilityQuestObjective.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::VisibilityQuestObjective.FieldName;
  if (*(char *)((longlong)param_1 + 0xa4) != *(char *)param_2) {
    *(char *)((longlong)param_1 + 0xa4) = *(char *)param_2;
    (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
              ((longlong)param_1 + 0x28,&FStack_18);
  }
  return;
}

// SetVisibilityActionPoint_WrapperImpl @ 14b6c4e80

void __cdecl UDS_VM_QuestInfo::SetVisibilityActionPoint_WrapperImpl(void *param_1,void *param_2)

{
  FName FStack_18;
  int iStack_10;
  
  iStack_10 = FFieldNotificationClassDescriptor::VisibilityActionPoint.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::VisibilityActionPoint.FieldName;
  if (*(char *)((longlong)param_1 + 0xa5) != *(char *)param_2) {
    *(char *)((longlong)param_1 + 0xa5) = *(char *)param_2;
    (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
              ((longlong)param_1 + 0x28,&FStack_18);
  }
  return;
}

// StaticClass @ 14b6c4e90

UClass * __cdecl UDS_VM_QuestInfo::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_QuestInfo.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_QuestInfo",
               &Z_Registration_Info_UClass_UDS_VM_QuestInfo.InnerSingleton,
               StaticRegisterNativesUDS_VM_QuestInfo,0xc0,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine"
               ,InternalConstructor<UDS_VM_QuestInfo>,
               InternalVTableHelperCtorCaller<UDS_VM_QuestInfo>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_QuestInfo.InnerSingleton;
}

// UDS_VM_QuestInfo @ 14b6c97b0

UDS_VM_QuestInfo * __thiscall
UDS_VM_QuestInfo::UDS_VM_QuestInfo(UDS_VM_QuestInfo *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_QuestInfo__6B_;
  (this->VM_QuestInfo_Reward).field0_0x0.DebugPtr = (UDS_VM_QuestInfo_Reward *)0x0;
  (this->VM_QuestData).field0_0x0.DebugPtr = (UDS_VM_QuestData *)0x0;
  this->QuestID = 0;
  return this;
}

// UDS_VM_QuestInfo @ 14b6c9810

UDS_VM_QuestInfo * __thiscall
UDS_VM_QuestInfo::UDS_VM_QuestInfo(UDS_VM_QuestInfo *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_QuestInfo__6B_;
  (this->VM_QuestInfo_Reward).field0_0x0.DebugPtr = (UDS_VM_QuestInfo_Reward *)0x0;
  (this->VM_QuestData).field0_0x0.DebugPtr = (UDS_VM_QuestData *)0x0;
  this->QuestID = 0;
  return this;
}

// ~UDS_VM_QuestInfo @ 14b6cc100

void __thiscall UDS_VM_QuestInfo::~UDS_VM_QuestInfo(UDS_VM_QuestInfo *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_QuestInfo__6B_;
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b6cf610

IClassDescriptor * __thiscall
UDS_VM_QuestInfo::GetFieldNotificationDescriptor(UDS_VM_QuestInfo *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_QuestInfo::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b6d0000

UClass * __cdecl UDS_VM_QuestInfo::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_QuestInfo.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_QuestInfo",
               &Z_Registration_Info_UClass_UDS_VM_QuestInfo.InnerSingleton,
               StaticRegisterNativesUDS_VM_QuestInfo,0xc0,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine"
               ,InternalConstructor<UDS_VM_QuestInfo>,
               InternalVTableHelperCtorCaller<UDS_VM_QuestInfo>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_QuestInfo.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_QuestInfo @ 14b6d0fd0

void __cdecl UDS_VM_QuestInfo::StaticRegisterNativesUDS_VM_QuestInfo(void)

{
  return;
}

// OnSetViewModel @ 14bf6a6e0

void __thiscall
UDS_VM_QuestInfo::OnSetViewModel(UDS_VM_QuestInfo *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  FName FVar3;
  int iVar4;
  FDS_ViewModelContext_Quest *pFVar5;
  bool bVar6;
  EDS_QuestConditionType EVar7;
  UDS_VM_QuestData *pUVar8;
  UDS_VM_QuestInfo_Reward *pUVar9;
  UDS_QuestManager *this_00;
  FDS_QuestBaseTableRow *this_01;
  ESlateVisibility EVar10;
  TSharedPtr<FDS_ViewModelContext_Quest,1> local_e8;
  TSharedPtr<FDS_ViewModelContext_Quest,1> local_d8;
  FName local_c8;
  int local_c0;
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
  TSharedPtr<FDS_ViewModelContext_Quest,1> local_68;
  TSharedPtr<FDS_ViewModelContext,1> local_58;
  TSharedPtr<FDS_ViewModelContext,1> local_48;
  TSharedPtr<FDS_ViewModelContext,1> local_38;
  
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
  SafeCast<FDS_ViewModelContext_Quest>(&local_68,&local_58);
  if (local_68.Object == (FDS_ViewModelContext_Quest *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_68.SharedReferenceCount.ReferenceController);
    goto LAB_14bf6aaed;
  }
  pUVar8 = (this->VM_QuestData).field0_0x0.DebugPtr;
  this->QuestID = (local_68.Object)->QuestID;
  if (pUVar8 == (UDS_VM_QuestData *)0x0) {
    pUVar8 = UDS_ViewModelBase::CreateViewModel<UDS_VM_QuestData>((UObject *)this);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar8 != (UDS_VM_QuestData *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)pUVar8);
    }
    (this->VM_QuestData).field0_0x0.DebugPtr = pUVar8;
    if (pUVar8 != (UDS_VM_QuestData *)0x0) goto LAB_14bf6a7a3;
  }
  else {
LAB_14bf6a7a3:
    MakeContext<FDS_ViewModelContext_Quest>(&local_e8);
    pFVar5 = local_e8.Object;
    if (local_e8.Object != (FDS_ViewModelContext_Quest *)0x0) {
      if ((local_e8.Object == (FDS_ViewModelContext_Quest *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar6)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      *(undefined4 *)&pFVar5->_padding_ = 0x97;
      pFVar5->QuestID = this->QuestID;
      pUVar8 = (this->VM_QuestData).field0_0x0.DebugPtr;
      local_48.Object = (FDS_ViewModelContext *)local_e8.Object;
      local_48.SharedReferenceCount.ReferenceController =
           local_e8.SharedReferenceCount.ReferenceController;
      if (local_e8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_e8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_e8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)pUVar8,&local_48);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_e8.SharedReferenceCount.ReferenceController);
  }
  if ((this->VM_QuestInfo_Reward).field0_0x0.DebugPtr == (UDS_VM_QuestInfo_Reward *)0x0) {
    pUVar9 = UDS_ViewModelBase::CreateViewModel<UDS_VM_QuestInfo_Reward>((UObject *)this);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar9 != (UDS_VM_QuestInfo_Reward *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar9);
    }
    (this->VM_QuestInfo_Reward).field0_0x0.DebugPtr = pUVar9;
    if (pUVar9 != (UDS_VM_QuestInfo_Reward *)0x0) goto LAB_14bf6a875;
  }
  else {
LAB_14bf6a875:
    MakeContext<FDS_ViewModelContext_Quest>(&local_d8);
    pFVar5 = local_d8.Object;
    if (local_d8.Object != (FDS_ViewModelContext_Quest *)0x0) {
      if ((local_d8.Object == (FDS_ViewModelContext_Quest *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar6)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      *(undefined4 *)&pFVar5->_padding_ = 0x77;
      pFVar5->QuestID = this->QuestID;
      pUVar9 = (this->VM_QuestInfo_Reward).field0_0x0.DebugPtr;
      local_38.Object = (FDS_ViewModelContext *)local_d8.Object;
      local_38.SharedReferenceCount.ReferenceController =
           local_d8.SharedReferenceCount.ReferenceController;
      if (local_d8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_d8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_d8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)pUVar9,&local_38);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_d8.SharedReferenceCount.ReferenceController);
  }
  local_c0 = FFieldNotificationClassDescriptor::VM_QuestInfo_Reward.BitNumber;
  local_c8 = FFieldNotificationClassDescriptor::VM_QuestInfo_Reward.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_c8);
  this_00 = UDS_QuestManager::GetInst();
  if (this_00 != (UDS_QuestManager *)0x0) {
    EVar7 = UDS_QuestManager::GetQuestConditionType(this_00,this->QuestID,0);
    iVar4 = FFieldNotificationClassDescriptor::VisibilityRequirement.BitNumber;
    FVar3 = FFieldNotificationClassDescriptor::VisibilityRequirement.FieldName;
    EVar10 = Collapsed;
    if (EVar7 == NotAbleAccept) {
      EVar10 = SelfHitTestInvisible;
    }
    if (this->VisibilityRequirement != EVar10) {
      this->VisibilityRequirement = EVar10;
      local_b0 = iVar4;
      local_b8 = FVar3;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_b8);
    }
    iVar4 = FFieldNotificationClassDescriptor::VisibilityCondition.BitNumber;
    FVar3 = FFieldNotificationClassDescriptor::VisibilityCondition.FieldName;
    if (this->VisibilityCondition != EVar10) {
      this->VisibilityCondition = EVar10;
      local_a0 = iVar4;
      local_a8 = FVar3;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_a8);
    }
    iVar4 = FFieldNotificationClassDescriptor::VisibilityQuestObjective.BitNumber;
    FVar3 = FFieldNotificationClassDescriptor::VisibilityQuestObjective.FieldName;
    EVar10 = Collapsed;
    if (EVar7 != NotAbleAccept) {
      EVar10 = SelfHitTestInvisible;
    }
    if (this->VisibilityQuestObjective != EVar10) {
      this->VisibilityQuestObjective = EVar10;
      local_90 = iVar4;
      local_98 = FVar3;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_98);
    }
    iVar4 = FFieldNotificationClassDescriptor::VisibilityActionPoint.BitNumber;
    FVar3 = FFieldNotificationClassDescriptor::VisibilityActionPoint.FieldName;
    if (this->VisibilityActionPoint != EVar10) {
      this->VisibilityActionPoint = EVar10;
      local_80 = iVar4;
      local_88 = FVar3;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_88);
    }
  }
  EVar10 = SelfHitTestInvisible;
  if (0 < this->QuestID) {
    this_01 = FDS_QuestBaseTableRow::GetRef((longlong)this->QuestID,true);
    bVar6 = FDS_QuestBaseTableRow::IsValid(this_01);
    if ((bVar6) && (EVar10 = SelfHitTestInvisible, this_01->QuestType == Daily)) {
      EVar10 = Collapsed;
    }
  }
  iVar4 = FFieldNotificationClassDescriptor::VisibilityClue.BitNumber;
  FVar3 = FFieldNotificationClassDescriptor::VisibilityClue.FieldName;
  if (this->VisibilityClue != EVar10) {
    this->VisibilityClue = EVar10;
    local_70 = iVar4;
    local_78 = FVar3;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_78);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_68.SharedReferenceCount.ReferenceController);
LAB_14bf6aaed:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// SetVM_QuestData @ 14bf7fcb0

void __thiscall UDS_VM_QuestInfo::SetVM_QuestData(UDS_VM_QuestInfo *this)

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

// SetVM_QuestInfo_Reward @ 14bf80960

void __thiscall UDS_VM_QuestInfo::SetVM_QuestInfo_Reward(UDS_VM_QuestInfo *this)

{
  code *pcVar1;
  FDS_ViewModelContext_Quest *pFVar2;
  bool bVar3;
  UDS_VM_QuestInfo_Reward *pUVar4;
  FName local_38;
  int local_30;
  TSharedPtr<FDS_ViewModelContext_Quest,1> local_28;
  TSharedPtr<FDS_ViewModelContext,1> local_18;
  
  if ((this->VM_QuestInfo_Reward).field0_0x0.DebugPtr == (UDS_VM_QuestInfo_Reward *)0x0) {
    pUVar4 = UDS_ViewModelBase::CreateViewModel<UDS_VM_QuestInfo_Reward>((UObject *)this);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar4 != (UDS_VM_QuestInfo_Reward *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar4);
    }
    (this->VM_QuestInfo_Reward).field0_0x0.DebugPtr = pUVar4;
    if (pUVar4 == (UDS_VM_QuestInfo_Reward *)0x0) goto LAB_14bf80a3e;
  }
  MakeContext<FDS_ViewModelContext_Quest>(&local_28);
  pFVar2 = local_28.Object;
  if (local_28.Object != (FDS_ViewModelContext_Quest *)0x0) {
    if ((local_28.Object == (FDS_ViewModelContext_Quest *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    *(undefined4 *)&pFVar2->_padding_ = 0x77;
    pFVar2->QuestID = this->QuestID;
    pUVar4 = (this->VM_QuestInfo_Reward).field0_0x0.DebugPtr;
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
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
LAB_14bf80a3e:
  local_30 = FFieldNotificationClassDescriptor::VM_QuestInfo_Reward.BitNumber;
  local_38 = FFieldNotificationClassDescriptor::VM_QuestInfo_Reward.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_38);
  return;
}

// SetVisibilityActionPoint @ 14bf81d60

void __thiscall
UDS_VM_QuestInfo::SetVisibilityActionPoint(UDS_VM_QuestInfo *this,ESlateVisibility *param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::VisibilityActionPoint.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::VisibilityActionPoint.FieldName;
  if (this->VisibilityActionPoint != *param_1) {
    this->VisibilityActionPoint = *param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetVisibilityClue @ 14bf81db0

void __thiscall UDS_VM_QuestInfo::SetVisibilityClue(UDS_VM_QuestInfo *this)

{
  bool bVar1;
  FDS_QuestBaseTableRow *this_00;
  ESlateVisibility EVar2;
  FName local_18;
  int local_10;
  
  EVar2 = SelfHitTestInvisible;
  if (0 < this->QuestID) {
    this_00 = FDS_QuestBaseTableRow::GetRef((longlong)this->QuestID,true);
    bVar1 = FDS_QuestBaseTableRow::IsValid(this_00);
    if (bVar1) {
      EVar2 = SelfHitTestInvisible;
      if (this_00->QuestType == Daily) {
        EVar2 = Collapsed;
      }
    }
  }
  local_10 = FFieldNotificationClassDescriptor::VisibilityClue.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::VisibilityClue.FieldName;
  if (this->VisibilityClue != EVar2) {
    this->VisibilityClue = EVar2;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetVisibilityCondition @ 14bf81e50

void __thiscall
UDS_VM_QuestInfo::SetVisibilityCondition(UDS_VM_QuestInfo *this,ESlateVisibility *param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::VisibilityCondition.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::VisibilityCondition.FieldName;
  if (this->VisibilityCondition != *param_1) {
    this->VisibilityCondition = *param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetVisibilityQuestObjective @ 14bf81f90

void __thiscall
UDS_VM_QuestInfo::SetVisibilityQuestObjective(UDS_VM_QuestInfo *this,ESlateVisibility *param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::VisibilityQuestObjective.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::VisibilityQuestObjective.FieldName;
  if (this->VisibilityQuestObjective != *param_1) {
    this->VisibilityQuestObjective = *param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetVisibilityRequirement @ 14bf82080

void __thiscall
UDS_VM_QuestInfo::SetVisibilityRequirement(UDS_VM_QuestInfo *this,ESlateVisibility *param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::VisibilityRequirement.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::VisibilityRequirement.FieldName;
  if (this->VisibilityRequirement != *param_1) {
    this->VisibilityRequirement = *param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetVisibilityStory @ 14bf82170

void __thiscall
UDS_VM_QuestInfo::SetVisibilityStory(UDS_VM_QuestInfo *this,ESlateVisibility *param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::VisibilityStory.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::VisibilityStory.FieldName;
  if (this->VisibilityStory != *param_1) {
    this->VisibilityStory = *param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

