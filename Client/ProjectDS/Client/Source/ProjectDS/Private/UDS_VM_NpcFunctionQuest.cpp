// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 19

// SetClickAcceptButton_WrapperImpl @ 14b6ac9d0

void __cdecl UDS_VM_NpcFunctionQuest::SetClickAcceptButton_WrapperImpl(void *param_1,void *param_2)

{
  bool bVar1;
  UDS_QuestManager *this;
  UDS_NpcFunctionEvent *pUVar2;
  
  if (*(char *)((longlong)param_2 + 3) != '\x01') {
    bVar1 = CanLevelSequencePlay(param_1,true);
    if (!bVar1) {
      this = UDS_QuestManager::GetInst();
      if (this != (UDS_QuestManager *)0x0) {
        UDS_QuestManager::OnReqAcceptQuest(this,*(int *)((longlong)param_1 + 400));
      }
      pUVar2 = UDS_NpcFunctionEvent::GetEvent();
      if (pUVar2 != (UDS_NpcFunctionEvent *)0x0) {
        FDS_EventDelegate<>::Broadcast(&pUVar2->OnBackDelegate);
        return;
      }
    }
  }
  return;
}

// SetClickGetReward_WrapperImpl @ 14b6ac9e0

void __cdecl UDS_VM_NpcFunctionQuest::SetClickGetReward_WrapperImpl(void *param_1,void *param_2)

{
  bool bVar1;
  UDS_QuestManager *this;
  UDS_NpcFunctionEvent *pUVar2;
  
  if (*(char *)((longlong)param_2 + 3) != '\x01') {
    bVar1 = CanLevelSequencePlay(param_1,false);
    if (!bVar1) {
      this = UDS_QuestManager::GetInst();
      if (this != (UDS_QuestManager *)0x0) {
        UDS_QuestManager::OnReqQuestComplete(this,*(int *)((longlong)param_1 + 400));
      }
      pUVar2 = UDS_NpcFunctionEvent::GetEvent();
      if (pUVar2 != (UDS_NpcFunctionEvent *)0x0) {
        FDS_EventDelegate<>::Broadcast(&pUVar2->OnBackDelegate);
        return;
      }
    }
  }
  return;
}

// StaticClass @ 14b6ac9f0

UClass * __cdecl UDS_VM_NpcFunctionQuest::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_NpcFunctionQuest.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_NpcFunctionQuest",
               &Z_Registration_Info_UClass_UDS_VM_NpcFunctionQuest.InnerSingleton,
               StaticRegisterNativesUDS_VM_NpcFunctionQuest,0x1a0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_NpcFunctionQuest>,
               InternalVTableHelperCtorCaller<UDS_VM_NpcFunctionQuest>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_NpcFunctionQuest.InnerSingleton;
}

// UDS_VM_NpcFunctionQuest @ 14b6b1b80

UDS_VM_NpcFunctionQuest * __thiscall
UDS_VM_NpcFunctionQuest::UDS_VM_NpcFunctionQuest
          (UDS_VM_NpcFunctionQuest *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_NpcFunctionQuest__6B_;
  *(undefined8 *)&(this->ClickAcceptButton).Delegate = 0;
  *(undefined8 *)&(this->ClickAcceptButton).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickAcceptButton).Delegate.field_0x10 = 0;
  (this->ClickGetReward)._padding_ = '\0';
  (this->ClickGetReward).bIsCustomSelected = false;
  (this->ClickGetReward).bIsLacked = false;
  (this->ClickGetReward).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickGetReward).Delegate = 0;
  *(undefined8 *)&(this->ClickGetReward).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickGetReward).Delegate.field_0x10 = 0;
  (this->VM_QuestInfo).field0_0x0.DebugPtr = (UDS_VM_QuestInfo *)0x0;
  (this->FixedText_Btn_Rewards).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_Btn_Rewards).StringEnumTableNameID.Number = 0;
  (this->FixedText_Btn_Rewards).DateTime.Ticks = 0;
  (this->FixedText_Btn_Rewards).TimeSpan.Ticks = 0;
  (this->FixedText_Btn_Rewards).TimeExpressionType = None;
  (this->FixedText_Btn_Rewards).IsExpression = false;
  (this->FixedText_Btn_Rewards).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_Btn_Rewards).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_Btn_Rewards).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_Btn_Rewards).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_Btn_Rewards).FormatArgs.ArrayNum = 0;
  (this->FixedText_Btn_Rewards).FormatArgs.ArrayMax = 0;
  (this->FixedText_Btn_Accept).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_Btn_Accept).StringEnumTableNameID.Number = 0;
  (this->FixedText_Btn_Accept).DateTime.Ticks = 0;
  (this->FixedText_Btn_Accept).TimeSpan.Ticks = 0;
  (this->FixedText_Btn_Accept).TimeExpressionType = None;
  (this->FixedText_Btn_Accept).IsExpression = false;
  (this->FixedText_Btn_Accept).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_Btn_Accept).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_Btn_Accept).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_Btn_Accept).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_Btn_Accept).FormatArgs.ArrayNum = 0;
  (this->FixedText_Btn_Accept).FormatArgs.ArrayMax = 0;
  this->QuestID = 0;
  this->NpcID = 0;
  this->IsAccept = false;
  (this->ClickAcceptButton)._padding_ = '\0';
  (this->ClickAcceptButton).bIsCustomSelected = false;
  (this->ClickAcceptButton).bIsLacked = false;
  (this->ClickAcceptButton).bIsCustomDisabled = false;
  (this->FixedText_Btn_Rewards).StringTableType = StringUi;
  (this->FixedText_Btn_Rewards).StringTableID = 0xeb90;
  (this->FixedText_Btn_Accept).StringTableType = StringUi;
  (this->FixedText_Btn_Accept).StringTableID = 0xeb91;
  return this;
}

// UDS_VM_NpcFunctionQuest @ 14b6b1cb0

UDS_VM_NpcFunctionQuest * __thiscall
UDS_VM_NpcFunctionQuest::UDS_VM_NpcFunctionQuest
          (UDS_VM_NpcFunctionQuest *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_NpcFunctionQuest__6B_;
  *(undefined8 *)&(this->ClickAcceptButton).Delegate = 0;
  *(undefined8 *)&(this->ClickAcceptButton).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickAcceptButton).Delegate.field_0x10 = 0;
  (this->ClickGetReward)._padding_ = '\0';
  (this->ClickGetReward).bIsCustomSelected = false;
  (this->ClickGetReward).bIsLacked = false;
  (this->ClickGetReward).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickGetReward).Delegate = 0;
  *(undefined8 *)&(this->ClickGetReward).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickGetReward).Delegate.field_0x10 = 0;
  (this->VM_QuestInfo).field0_0x0.DebugPtr = (UDS_VM_QuestInfo *)0x0;
  (this->FixedText_Btn_Rewards).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_Btn_Rewards).StringEnumTableNameID.Number = 0;
  (this->FixedText_Btn_Rewards).DateTime.Ticks = 0;
  (this->FixedText_Btn_Rewards).TimeSpan.Ticks = 0;
  (this->FixedText_Btn_Rewards).TimeExpressionType = None;
  (this->FixedText_Btn_Rewards).IsExpression = false;
  (this->FixedText_Btn_Rewards).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_Btn_Rewards).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_Btn_Rewards).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_Btn_Rewards).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_Btn_Rewards).FormatArgs.ArrayNum = 0;
  (this->FixedText_Btn_Rewards).FormatArgs.ArrayMax = 0;
  (this->FixedText_Btn_Accept).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_Btn_Accept).StringEnumTableNameID.Number = 0;
  (this->FixedText_Btn_Accept).DateTime.Ticks = 0;
  (this->FixedText_Btn_Accept).TimeSpan.Ticks = 0;
  (this->FixedText_Btn_Accept).TimeExpressionType = None;
  (this->FixedText_Btn_Accept).IsExpression = false;
  (this->FixedText_Btn_Accept).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_Btn_Accept).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_Btn_Accept).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_Btn_Accept).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_Btn_Accept).FormatArgs.ArrayNum = 0;
  (this->FixedText_Btn_Accept).FormatArgs.ArrayMax = 0;
  this->QuestID = 0;
  this->NpcID = 0;
  this->IsAccept = false;
  (this->ClickAcceptButton)._padding_ = '\0';
  (this->ClickAcceptButton).bIsCustomSelected = false;
  (this->ClickAcceptButton).bIsLacked = false;
  (this->ClickAcceptButton).bIsCustomDisabled = false;
  (this->FixedText_Btn_Rewards).StringTableType = StringUi;
  (this->FixedText_Btn_Rewards).StringTableID = 0xeb90;
  (this->FixedText_Btn_Accept).StringTableType = StringUi;
  (this->FixedText_Btn_Accept).StringTableID = 0xeb91;
  return this;
}

// ~UDS_VM_NpcFunctionQuest @ 14b6b3cd0

void __thiscall UDS_VM_NpcFunctionQuest::~UDS_VM_NpcFunctionQuest(UDS_VM_NpcFunctionQuest *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_NpcFunctionQuest__6B_;
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->FixedText_Btn_Accept).FormatArgs.AllocatorInstance.Data,
             (this->FixedText_Btn_Accept).FormatArgs.ArrayNum);
  pFVar1 = (this->FixedText_Btn_Accept).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FixedText_Btn_Accept).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->FixedText_Btn_Rewards).FormatArgs.AllocatorInstance.Data,
             (this->FixedText_Btn_Rewards).FormatArgs.ArrayNum);
  pFVar1 = (this->FixedText_Btn_Rewards).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FixedText_Btn_Rewards).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ClickGetReward).Delegate);
  pvVar2 = *(void **)&(this->ClickGetReward).Delegate.field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ClickGetReward).Delegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ClickAcceptButton).Delegate);
  pvVar2 = *(void **)&(this->ClickAcceptButton).Delegate.field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ClickAcceptButton).Delegate);
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b6b6860

IClassDescriptor * __thiscall
UDS_VM_NpcFunctionQuest::GetFieldNotificationDescriptor(UDS_VM_NpcFunctionQuest *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_NpcFunctionQuest::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b6b7160

UClass * __cdecl UDS_VM_NpcFunctionQuest::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_NpcFunctionQuest.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_NpcFunctionQuest",
               &Z_Registration_Info_UClass_UDS_VM_NpcFunctionQuest.InnerSingleton,
               StaticRegisterNativesUDS_VM_NpcFunctionQuest,0x1a0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_NpcFunctionQuest>,
               InternalVTableHelperCtorCaller<UDS_VM_NpcFunctionQuest>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_NpcFunctionQuest.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_NpcFunctionQuest @ 14b6b7d90

void __cdecl UDS_VM_NpcFunctionQuest::StaticRegisterNativesUDS_VM_NpcFunctionQuest(void)

{
  return;
}

// BindModel @ 14bed9660

void __thiscall UDS_VM_NpcFunctionQuest::BindModel(UDS_VM_NpcFunctionQuest *this)

{
  UDS_LevelSequenceEvent *pUVar1;
  
  UDS_ViewModelBase::BindModel((UDS_ViewModelBase *)this);
  pUVar1 = UDS_LevelSequenceEvent::GetEvent();
  if (pUVar1 != (UDS_LevelSequenceEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar1->LevelSequenceChangeStateDelegate,this);
    TMulticastDelegateRegistration<void___cdecl(enum_EDS_LevelSequenceState),FDefaultDelegateUserPolicy>
    ::AddUObject<UDS_VM_NpcFunctionQuest>
              (&pUVar1->LevelSequenceChangeStateDelegate,(UDS_VM_NpcFunctionQuest *)&stack0x00000010
               ,(pmf_9fbc0ba8 *)this);
  }
  return;
}

// CanLevelSequencePlay @ 14bed9db0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UDS_VM_NpcFunctionQuest::CanLevelSequencePlay(UDS_VM_NpcFunctionQuest *this,bool param_1)

{
  bool bVar1;
  FDS_QuestLocalTableRow *this_00;
  UDS_QuestDialogueSceneManager *this_01;
  UDS_WindowManager *this_02;
  int iVar2;
  
  this_00 = FDS_QuestLocalTableRow::GetRef((longlong)this->QuestID,true);
  bVar1 = FDS_QuestLocalTableRow::IsValid(this_00);
  if (bVar1) {
    this->IsAccept = param_1;
    if (param_1) {
      iVar2 = this_00->ID_AcceptSequence;
    }
    else {
      iVar2 = this_00->ID_CompleteSequence;
    }
    if (0 < iVar2) {
      this_01 = UDS_QuestDialogueSceneManager::GetInst();
      if (this_01 != (UDS_QuestDialogueSceneManager *)0x0) {
        bVar1 = UDS_QuestDialogueSceneManager::OpenDialogueSceneByLevelSequence(this_01,iVar2);
        if (bVar1) {
          this_02 = UDS_WindowManager::GetInst();
          if (this_02 != (UDS_WindowManager *)0x0) {
            UDS_WindowManager::ToggleVisibleWindow(this_02,NpcInteraction,false);
            UDS_WindowManager::ToggleVisibleWindow(this_02,InteractionQuestInfo,false);
          }
          return true;
        }
      }
    }
  }
  return false;
}

// OnClickAccept @ 14bef8630

void __thiscall
UDS_VM_NpcFunctionQuest::OnClickAccept(UDS_VM_NpcFunctionQuest *this,FDS_ButtonEventField *param_1)

{
  bool bVar1;
  UDS_QuestManager *this_00;
  UDS_NpcFunctionEvent *pUVar2;
  
  if (param_1->bIsCustomDisabled != true) {
    bVar1 = CanLevelSequencePlay(this,true);
    if (!bVar1) {
      this_00 = UDS_QuestManager::GetInst();
      if (this_00 != (UDS_QuestManager *)0x0) {
        UDS_QuestManager::OnReqAcceptQuest(this_00,this->QuestID);
      }
      pUVar2 = UDS_NpcFunctionEvent::GetEvent();
      if (pUVar2 != (UDS_NpcFunctionEvent *)0x0) {
        FDS_EventDelegate<>::Broadcast(&pUVar2->OnBackDelegate);
        return;
      }
    }
  }
  return;
}

// OnClickGetReward @ 14bef98e0

void __thiscall
UDS_VM_NpcFunctionQuest::OnClickGetReward
          (UDS_VM_NpcFunctionQuest *this,FDS_ButtonEventField *param_1)

{
  bool bVar1;
  UDS_QuestManager *this_00;
  UDS_NpcFunctionEvent *pUVar2;
  
  if (param_1->bIsCustomDisabled != true) {
    bVar1 = CanLevelSequencePlay(this,false);
    if (!bVar1) {
      this_00 = UDS_QuestManager::GetInst();
      if (this_00 != (UDS_QuestManager *)0x0) {
        UDS_QuestManager::OnReqQuestComplete(this_00,this->QuestID);
      }
      pUVar2 = UDS_NpcFunctionEvent::GetEvent();
      if (pUVar2 != (UDS_NpcFunctionEvent *)0x0) {
        FDS_EventDelegate<>::Broadcast(&pUVar2->OnBackDelegate);
        return;
      }
    }
  }
  return;
}

// OnSequencePlayStated @ 14bf045a0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_NpcFunctionQuest::OnSequencePlayStated
          (UDS_VM_NpcFunctionQuest *this,EDS_LevelSequenceState param_1)

{
  UDS_WindowManager *this_00;
  UDS_QuestManager *this_01;
  UDS_NpcFunctionEvent *pUVar1;
  
  if ((byte)(param_1 - SequenceFinished) < 2) {
    this_00 = UDS_WindowManager::GetInst();
    if (this_00 != (UDS_WindowManager *)0x0) {
      UDS_WindowManager::ToggleVisibleWindow(this_00,NpcInteraction,true);
      UDS_WindowManager::ToggleVisibleWindow(this_00,InteractionQuestInfo,true);
    }
    if (param_1 == SequenceFinished) {
      this_01 = UDS_QuestManager::GetInst();
      if (this_01 != (UDS_QuestManager *)0x0) {
        if (this->IsAccept == true) {
          UDS_QuestManager::OnReqAcceptQuest(this_01,this->QuestID);
        }
        else {
          UDS_QuestManager::OnReqQuestComplete(this_01,this->QuestID);
        }
      }
      pUVar1 = UDS_NpcFunctionEvent::GetEvent();
      if (pUVar1 != (UDS_NpcFunctionEvent *)0x0) {
        FDS_EventDelegate<>::Broadcast(&pUVar1->OnBackDelegate);
      }
    }
  }
  return;
}

// OnSetViewModel @ 14bf08910

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
UDS_VM_NpcFunctionQuest::OnSetViewModel
          (UDS_VM_NpcFunctionQuest *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  FName FVar2;
  code *pcVar3;
  FDS_ViewModelContext_Quest *pFVar4;
  bool bVar5;
  EDS_QuestConditionType EVar6;
  UDS_QuestManager *pUVar7;
  UClass *pUVar8;
  UClass *pUVar9;
  UDS_VM_QuestInfo *pUVar10;
  longlong *plVar11;
  undefined1 auStack_138 [32];
  FName local_118;
  TSharedPtr<FDS_ViewModelContext_Quest,1> local_108;
  FName local_f8;
  int local_f0;
  FName local_e8;
  int local_e0;
  TSharedPtr<FDS_ViewModelContext_NpcFunctionQuest,1> local_d8;
  TSharedPtr<FDS_ViewModelContext,1> local_c8;
  TSharedPtr<FDS_ViewModelContext,1> local_b8;
  undefined1 local_a8 [128];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_138;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  local_c8.Object = param_1->Object;
  local_c8.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_c8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_c8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_c8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SafeCast<FDS_ViewModelContext_NpcFunctionQuest>(&local_d8,&local_c8);
  if (local_d8.Object == (FDS_ViewModelContext_NpcFunctionQuest *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_d8.SharedReferenceCount.ReferenceController);
    goto LAB_14bf08bd7;
  }
  this->QuestID = (local_d8.Object)->QuestID;
  this->NpcID = (local_d8.Object)->NpcID;
  this->DisabledAcceptButton = true;
  pUVar7 = UDS_QuestManager::GetInst();
  if ((pUVar7 != (UDS_QuestManager *)0x0) &&
     (EVar6 = UDS_QuestManager::GetQuestConditionTypeByNpc(pUVar7,this->QuestID,this->NpcID),
     EVar6 == AbleAccept)) {
    this->DisabledAcceptButton = false;
  }
  local_f0 = FFieldNotificationClassDescriptor::DisabledAcceptButton.BitNumber;
  local_f8 = FFieldNotificationClassDescriptor::DisabledAcceptButton.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_f8);
  this->DisabledGetRewardButton = true;
  pUVar7 = UDS_QuestManager::GetInst();
  if ((pUVar7 != (UDS_QuestManager *)0x0) &&
     (EVar6 = UDS_QuestManager::GetQuestConditionTypeByNpc(pUVar7,this->QuestID,this->NpcID),
     EVar6 == AbleComplete)) {
    this->DisabledGetRewardButton = false;
  }
  local_e0 = FFieldNotificationClassDescriptor::DisabledGetRewardButton.BitNumber;
  local_e8 = FFieldNotificationClassDescriptor::DisabledGetRewardButton.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_e8);
  FVar2 = (FName)(this->VM_QuestInfo).field0_0x0.DebugPtr;
  if (FVar2 == (FName)0x0) {
    local_118 = FVar2;
    pUVar8 = Z_Construct_UClass_UDS_VM_QuestInfo_NoRegister();
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)this,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar9 = Z_Construct_UClass_UDS_VM_QuestInfo_NoRegister();
    CheckIsClassChildOf_Internal(pUVar9,pUVar8);
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_a8,pUVar8);
    local_a8._48_8_ = (FObjectInstancingGraph *)0x0;
    local_a8._56_8_ = (UPackage *)0x0;
    local_a8._24_4_ = RF_Transient;
    local_a8._40_8_ = (UObject *)0x0;
    local_a8[0x20] = false;
    local_a8._8_8_ = this;
    local_a8._16_8_ = FVar2;
    pUVar10 = (UDS_VM_QuestInfo *)
              StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_a8);
    if (local_a8._64_8_ != 0) {
      plVar11 = (longlong *)(local_a8 + 0x50);
      if ((longlong *)local_a8._104_8_ != (longlong *)0x0) {
        plVar11 = (longlong *)local_a8._104_8_;
      }
      (**(code **)(*plVar11 + 0x10))();
    }
    if (pUVar10 != (UDS_VM_QuestInfo *)0x0) {
      *(undefined1 *)((longlong)&pUVar10->_padding_ + 4) = 0;
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar10 != (UDS_VM_QuestInfo *)0x0)
       ) {
      UE::GC::MarkAsReachable((UObject *)pUVar10);
    }
    (this->VM_QuestInfo).field0_0x0.DebugPtr = pUVar10;
    if (pUVar10 != (UDS_VM_QuestInfo *)0x0) goto LAB_14bf08b30;
  }
  else {
LAB_14bf08b30:
    MakeContext<FDS_ViewModelContext_Quest>(&local_108);
    pFVar4 = local_108.Object;
    if (local_108.Object != (FDS_ViewModelContext_Quest *)0x0) {
      if ((local_108.Object == (FDS_ViewModelContext_Quest *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      *(undefined4 *)&pFVar4->_padding_ = 0x76;
      pFVar4->QuestID = this->QuestID;
      pUVar10 = (this->VM_QuestInfo).field0_0x0.DebugPtr;
      local_b8.Object = (FDS_ViewModelContext *)local_108.Object;
      local_b8.SharedReferenceCount.ReferenceController =
           local_108.SharedReferenceCount.ReferenceController;
      if (local_108.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (local_108.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_108.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)pUVar10,&local_b8);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_108.SharedReferenceCount.ReferenceController);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_d8.SharedReferenceCount.ReferenceController);
LAB_14bf08bd7:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// SetDisabledAcceptButton @ 14bf139e0

void __thiscall UDS_VM_NpcFunctionQuest::SetDisabledAcceptButton(UDS_VM_NpcFunctionQuest *this)

{
  EDS_QuestConditionType EVar1;
  UDS_QuestManager *this_00;
  FName local_18;
  int local_10;
  
  this->DisabledAcceptButton = true;
  this_00 = UDS_QuestManager::GetInst();
  if (this_00 != (UDS_QuestManager *)0x0) {
    EVar1 = UDS_QuestManager::GetQuestConditionTypeByNpc(this_00,this->QuestID,this->NpcID);
    if (EVar1 == AbleAccept) {
      this->DisabledAcceptButton = false;
    }
  }
  local_10 = FFieldNotificationClassDescriptor::DisabledAcceptButton.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::DisabledAcceptButton.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// SetDisabledGetRewardButton @ 14bf13a50

void __thiscall UDS_VM_NpcFunctionQuest::SetDisabledGetRewardButton(UDS_VM_NpcFunctionQuest *this)

{
  EDS_QuestConditionType EVar1;
  UDS_QuestManager *this_00;
  FName local_18;
  int local_10;
  
  this->DisabledGetRewardButton = true;
  this_00 = UDS_QuestManager::GetInst();
  if (this_00 != (UDS_QuestManager *)0x0) {
    EVar1 = UDS_QuestManager::GetQuestConditionTypeByNpc(this_00,this->QuestID,this->NpcID);
    if (EVar1 == AbleComplete) {
      this->DisabledGetRewardButton = false;
    }
  }
  local_10 = FFieldNotificationClassDescriptor::DisabledGetRewardButton.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::DisabledGetRewardButton.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// SetVM_QuestInfo @ 14bf1baf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall UDS_VM_NpcFunctionQuest::SetVM_QuestInfo(UDS_VM_NpcFunctionQuest *this)

{
  FName FVar1;
  code *pcVar2;
  FDS_ViewModelContext_Quest *pFVar3;
  bool bVar4;
  UClass *pUVar5;
  UClass *pUVar6;
  UDS_VM_QuestInfo *pUVar7;
  longlong *plVar8;
  undefined1 auStack_e8 [32];
  FName local_c8;
  TSharedPtr<FDS_ViewModelContext_Quest,1> local_b8;
  TSharedPtr<FDS_ViewModelContext,1> local_a8;
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_e8;
  FVar1 = (FName)(this->VM_QuestInfo).field0_0x0.DebugPtr;
  if (FVar1 == (FName)0x0) {
    local_c8 = FVar1;
    pUVar5 = Z_Construct_UClass_UDS_VM_QuestInfo_NoRegister();
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)this,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar6 = Z_Construct_UClass_UDS_VM_QuestInfo_NoRegister();
    CheckIsClassChildOf_Internal(pUVar6,pUVar5);
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_98,pUVar5);
    local_98._48_8_ = (FObjectInstancingGraph *)0x0;
    local_98._56_8_ = (UPackage *)0x0;
    local_98._24_4_ = RF_Transient;
    local_98._40_8_ = (UObject *)0x0;
    local_98[0x20] = false;
    local_98._8_8_ = this;
    local_98._16_8_ = FVar1;
    pUVar7 = (UDS_VM_QuestInfo *)
             StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
    if (local_98._64_8_ != 0) {
      plVar8 = (longlong *)(local_98 + 0x50);
      if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
        plVar8 = (longlong *)local_98._104_8_;
      }
      (**(code **)(*plVar8 + 0x10))();
    }
    if (pUVar7 != (UDS_VM_QuestInfo *)0x0) {
      *(undefined1 *)((longlong)&pUVar7->_padding_ + 4) = 0;
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UDS_VM_QuestInfo *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)pUVar7);
    }
    (this->VM_QuestInfo).field0_0x0.DebugPtr = pUVar7;
    if (pUVar7 == (UDS_VM_QuestInfo *)0x0) {
      return;
    }
  }
  MakeContext<FDS_ViewModelContext_Quest>(&local_b8);
  pFVar3 = local_b8.Object;
  if (local_b8.Object != (FDS_ViewModelContext_Quest *)0x0) {
    if ((local_b8.Object == (FDS_ViewModelContext_Quest *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    *(undefined4 *)&pFVar3->_padding_ = 0x76;
    pFVar3->QuestID = this->QuestID;
    pUVar7 = (this->VM_QuestInfo).field0_0x0.DebugPtr;
    local_a8.Object = (FDS_ViewModelContext *)local_b8.Object;
    local_a8.SharedReferenceCount.ReferenceController =
         local_b8.SharedReferenceCount.ReferenceController;
    if (local_b8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_b8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_b8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)pUVar7,&local_a8);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_b8.SharedReferenceCount.ReferenceController);
  return;
}

// UnbindModel @ 14bf1e630

void __thiscall UDS_VM_NpcFunctionQuest::UnbindModel(UDS_VM_NpcFunctionQuest *this)

{
  UDS_LevelSequenceEvent *pUVar1;
  
  UDS_ViewModelBase::UnbindModel((UDS_ViewModelBase *)this);
  pUVar1 = UDS_LevelSequenceEvent::GetEvent();
  if (pUVar1 != (UDS_LevelSequenceEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar1->LevelSequenceChangeStateDelegate,this);
    return;
  }
  return;
}

