// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 18

// SetClickButton_WrapperImpl @ 14b6c5b30

void __cdecl UDS_VM_QuestInstanceSlot::SetClickButton_WrapperImpl(void *param_1,void *param_2)

{
  EDS_QuestStateType EVar1;
  UDS_QuestManager *this;
  
  this = UDS_QuestManager::GetInst();
  if (this != (UDS_QuestManager *)0x0) {
    EVar1 = UDS_QuestManager::GetQuestStateType(*(int *)((longlong)param_1 + 0x188));
    if (EVar1 == Complete) {
      UDS_QuestManager::OnReqQuestComplete(this,*(int *)((longlong)param_1 + 0x188));
    }
    else if (EVar1 == Failure) {
      UDS_QuestManager::OnReqCancelQuest(this,*(int *)((longlong)param_1 + 0x188));
      return;
    }
  }
  return;
}

// StaticClass @ 14b6c5c30

UClass * __cdecl UDS_VM_QuestInstanceSlot::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_QuestInstanceSlot.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_QuestInstanceSlot",
               &Z_Registration_Info_UClass_UDS_VM_QuestInstanceSlot.InnerSingleton,
               StaticRegisterNativesUDS_VM_QuestInstanceSlot,400,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_QuestInstanceSlot>,
               InternalVTableHelperCtorCaller<UDS_VM_QuestInstanceSlot>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_QuestInstanceSlot.InnerSingleton;
}

// UDS_VM_QuestInstanceSlot @ 14b6c9a50

UDS_VM_QuestInstanceSlot * __thiscall
UDS_VM_QuestInstanceSlot::UDS_VM_QuestInstanceSlot
          (UDS_VM_QuestInstanceSlot *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_QuestInstanceSlot__6B_;
  *(undefined8 *)&(this->ClickButton).Delegate = 0;
  *(undefined8 *)&(this->ClickButton).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickButton).Delegate.field_0x10 = 0;
  (this->VM_QuestData).field0_0x0.DebugPtr = (UDS_VM_QuestData *)0x0;
  (this->VM_QuestObjectiveData).field0_0x0.DebugPtr = (UDS_VM_QuestObjectiveData *)0x0;
  (this->VM_CampProgress).field0_0x0.DebugPtr = (UDS_VM_CommonProgress *)0x0;
  (this->FixedText_Complete).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_Complete).StringEnumTableNameID.Number = 0;
  (this->FixedText_Complete).DateTime.Ticks = 0;
  (this->FixedText_Complete).TimeSpan.Ticks = 0;
  (this->FixedText_Complete).TimeExpressionType = None;
  (this->FixedText_Complete).IsExpression = false;
  (this->FixedText_Complete).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_Complete).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_Complete).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_Complete).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_Complete).FormatArgs.ArrayNum = 0;
  (this->FixedText_Complete).FormatArgs.ArrayMax = 0;
  (this->FixedText_Failure).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_Failure).StringEnumTableNameID.Number = 0;
  (this->FixedText_Failure).DateTime.Ticks = 0;
  (this->FixedText_Failure).TimeSpan.Ticks = 0;
  (this->FixedText_Failure).TimeExpressionType = None;
  (this->FixedText_Failure).IsExpression = false;
  (this->FixedText_Failure).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_Failure).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_Failure).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_Failure).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_Failure).FormatArgs.ArrayNum = 0;
  (this->FixedText_Failure).FormatArgs.ArrayMax = 0;
  (this->M_CommonProgress).field0_0x0.DebugPtr = (UDS_M_CommonProgress *)0x0;
  this->QuestID = 0;
  (this->ClickButton)._padding_ = '\0';
  (this->ClickButton).bIsCustomSelected = false;
  (this->ClickButton).bIsLacked = false;
  (this->ClickButton).bIsCustomDisabled = false;
  (this->FixedText_Complete).StringTableType = StringUi;
  (this->FixedText_Complete).StringTableID = 0xeb29;
  (this->FixedText_Failure).StringTableType = StringUi;
  (this->FixedText_Failure).StringTableID = 0xeb3f;
  return this;
}

// UDS_VM_QuestInstanceSlot @ 14b6c9b70

UDS_VM_QuestInstanceSlot * __thiscall
UDS_VM_QuestInstanceSlot::UDS_VM_QuestInstanceSlot
          (UDS_VM_QuestInstanceSlot *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_QuestInstanceSlot__6B_;
  *(undefined8 *)&(this->ClickButton).Delegate = 0;
  *(undefined8 *)&(this->ClickButton).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickButton).Delegate.field_0x10 = 0;
  (this->VM_QuestData).field0_0x0.DebugPtr = (UDS_VM_QuestData *)0x0;
  (this->VM_QuestObjectiveData).field0_0x0.DebugPtr = (UDS_VM_QuestObjectiveData *)0x0;
  (this->VM_CampProgress).field0_0x0.DebugPtr = (UDS_VM_CommonProgress *)0x0;
  (this->FixedText_Complete).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_Complete).StringEnumTableNameID.Number = 0;
  (this->FixedText_Complete).DateTime.Ticks = 0;
  (this->FixedText_Complete).TimeSpan.Ticks = 0;
  (this->FixedText_Complete).TimeExpressionType = None;
  (this->FixedText_Complete).IsExpression = false;
  (this->FixedText_Complete).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_Complete).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_Complete).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_Complete).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_Complete).FormatArgs.ArrayNum = 0;
  (this->FixedText_Complete).FormatArgs.ArrayMax = 0;
  (this->FixedText_Failure).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_Failure).StringEnumTableNameID.Number = 0;
  (this->FixedText_Failure).DateTime.Ticks = 0;
  (this->FixedText_Failure).TimeSpan.Ticks = 0;
  (this->FixedText_Failure).TimeExpressionType = None;
  (this->FixedText_Failure).IsExpression = false;
  (this->FixedText_Failure).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_Failure).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_Failure).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_Failure).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_Failure).FormatArgs.ArrayNum = 0;
  (this->FixedText_Failure).FormatArgs.ArrayMax = 0;
  (this->M_CommonProgress).field0_0x0.DebugPtr = (UDS_M_CommonProgress *)0x0;
  this->QuestID = 0;
  (this->ClickButton)._padding_ = '\0';
  (this->ClickButton).bIsCustomSelected = false;
  (this->ClickButton).bIsLacked = false;
  (this->ClickButton).bIsCustomDisabled = false;
  (this->FixedText_Complete).StringTableType = StringUi;
  (this->FixedText_Complete).StringTableID = 0xeb29;
  (this->FixedText_Failure).StringTableType = StringUi;
  (this->FixedText_Failure).StringTableID = 0xeb3f;
  return this;
}

// ~UDS_VM_QuestInstanceSlot @ 14b6cc1e0

void __thiscall UDS_VM_QuestInstanceSlot::~UDS_VM_QuestInstanceSlot(UDS_VM_QuestInstanceSlot *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_QuestInstanceSlot__6B_;
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->FixedText_Failure).FormatArgs.AllocatorInstance.Data,
             (this->FixedText_Failure).FormatArgs.ArrayNum);
  pFVar1 = (this->FixedText_Failure).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FixedText_Failure).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->FixedText_Complete).FormatArgs.AllocatorInstance.Data,
             (this->FixedText_Complete).FormatArgs.ArrayNum);
  pFVar1 = (this->FixedText_Complete).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FixedText_Complete).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ClickButton).Delegate);
  pvVar2 = *(void **)&(this->ClickButton).Delegate.field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ClickButton).Delegate);
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b6cf6f0

IClassDescriptor * __thiscall
UDS_VM_QuestInstanceSlot::GetFieldNotificationDescriptor(UDS_VM_QuestInstanceSlot *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_QuestInstanceSlot::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b6d0180

UClass * __cdecl UDS_VM_QuestInstanceSlot::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_QuestInstanceSlot.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_QuestInstanceSlot",
               &Z_Registration_Info_UClass_UDS_VM_QuestInstanceSlot.InnerSingleton,
               StaticRegisterNativesUDS_VM_QuestInstanceSlot,400,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_QuestInstanceSlot>,
               InternalVTableHelperCtorCaller<UDS_VM_QuestInstanceSlot>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_QuestInstanceSlot.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_QuestInstanceSlot @ 14b6d0ff0

void __cdecl UDS_VM_QuestInstanceSlot::StaticRegisterNativesUDS_VM_QuestInstanceSlot(void)

{
  return;
}

// BindModel @ 14bf41800

void __thiscall UDS_VM_QuestInstanceSlot::BindModel(UDS_VM_QuestInstanceSlot *this)

{
  UDS_QuestEvent *pUVar1;
  
  UDS_ViewModelBase::BindModel((UDS_ViewModelBase *)this);
  pUVar1 = UDS_QuestEvent::GetEvent();
  if (pUVar1 != (UDS_QuestEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar1->OnUpdateQuestDataDelegate,this);
    TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_VM_QuestInstanceSlot>
              ((TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy> *)
               &pUVar1->OnUpdateQuestDataDelegate,(UDS_VM_QuestInstanceSlot *)&stack0x00000010,
               (pmf_8b0c0456 *)this);
  }
  return;
}

// OnClickButton @ 14bf61920

void __thiscall
UDS_VM_QuestInstanceSlot::OnClickButton
          (UDS_VM_QuestInstanceSlot *this,FDS_ButtonEventField *param_1)

{
  EDS_QuestStateType EVar1;
  UDS_QuestManager *this_00;
  
  this_00 = UDS_QuestManager::GetInst();
  if (this_00 != (UDS_QuestManager *)0x0) {
    EVar1 = UDS_QuestManager::GetQuestStateType(this->QuestID);
    if (EVar1 == Complete) {
      UDS_QuestManager::OnReqQuestComplete(this_00,this->QuestID);
    }
    else if (EVar1 == Failure) {
      UDS_QuestManager::OnReqCancelQuest(this_00,this->QuestID);
      return;
    }
  }
  return;
}

// OnQuestUpdate @ 14bf66800

void __thiscall UDS_VM_QuestInstanceSlot::OnQuestUpdate(UDS_VM_QuestInstanceSlot *this,int param_1)

{
  EDS_QuestStateType EVar1;
  UDS_QuestManager *pUVar2;
  
  if (param_1 == this->QuestID) {
    pUVar2 = UDS_QuestManager::GetInst();
    if (pUVar2 != (UDS_QuestManager *)0x0) {
      EVar1 = UDS_QuestManager::GetQuestStateType(this->QuestID);
      if (EVar1 == Progress) {
        SetQuestStateWidgetIndex(this,0);
        return;
      }
      if (EVar1 == Complete) {
        SetQuestStateWidgetIndex(this,1);
        return;
      }
      if (EVar1 == Failure) {
        SetQuestStateWidgetIndex(this,2);
        return;
      }
    }
  }
  return;
}

// OnSetViewModel @ 14bf6ac90

void __thiscall
UDS_VM_QuestInstanceSlot::OnSetViewModel
          (UDS_VM_QuestInstanceSlot *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  int iVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  FDS_ViewModelContext_QuestObjectiveData *pFVar4;
  FDS_ViewModelContext_Quest *pFVar5;
  bool bVar6;
  UDS_VM_QuestData *pUVar7;
  UDS_VM_QuestObjectiveData *pUVar8;
  FDS_QuestBaseTableRow *this_00;
  TSharedPtr<FDS_ViewModelContext_QuestObjectiveData,1> local_68;
  TSharedPtr<FDS_ViewModelContext_Quest,1> local_58;
  TSharedPtr<FDS_ViewModelContext_Quest,1> local_48;
  TSharedPtr<FDS_ViewModelContext,1> local_38;
  TSharedPtr<FDS_ViewModelContext,1> local_28;
  TSharedPtr<FDS_ViewModelContext,1> local_18;
  
  pTVar2 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  local_38.Object = param_1->Object;
  local_38.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_38.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SafeCast<FDS_ViewModelContext_Quest>(&local_48,&local_38);
  if (local_48.Object == (FDS_ViewModelContext_Quest *)0x0) goto LAB_14bf6af9a;
  if ((local_48.Object == (FDS_ViewModelContext_Quest *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pUVar7 = (this->VM_QuestData).field0_0x0.DebugPtr;
  this->QuestID = (local_48.Object)->QuestID;
  if (pUVar7 == (UDS_VM_QuestData *)0x0) {
    pUVar7 = UDS_ViewModelBase::CreateViewModel<UDS_VM_QuestData>((UObject *)this);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UDS_VM_QuestData *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)pUVar7);
    }
    (this->VM_QuestData).field0_0x0.DebugPtr = pUVar7;
    if (pUVar7 != (UDS_VM_QuestData *)0x0) goto LAB_14bf6ad70;
  }
  else {
LAB_14bf6ad70:
    MakeContext<FDS_ViewModelContext_Quest>(&local_58);
    pFVar5 = local_58.Object;
    if (local_58.Object != (FDS_ViewModelContext_Quest *)0x0) {
      if ((local_58.Object == (FDS_ViewModelContext_Quest *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      *(undefined4 *)&pFVar5->_padding_ = 0x97;
      pFVar5->QuestID = this->QuestID;
      pUVar7 = (this->VM_QuestData).field0_0x0.DebugPtr;
      local_28.Object = (FDS_ViewModelContext *)local_58.Object;
      local_28.SharedReferenceCount.ReferenceController =
           local_58.SharedReferenceCount.ReferenceController;
      if (local_58.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)pUVar7,&local_28);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_58.SharedReferenceCount.ReferenceController);
  }
  if ((this->VM_QuestObjectiveData).field0_0x0.DebugPtr == (UDS_VM_QuestObjectiveData *)0x0) {
    pUVar8 = UDS_ViewModelBase::CreateViewModel<UDS_VM_QuestObjectiveData>((UObject *)this);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar8 != (UDS_VM_QuestObjectiveData *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar8);
    }
    (this->VM_QuestObjectiveData).field0_0x0.DebugPtr = pUVar8;
    if (pUVar8 != (UDS_VM_QuestObjectiveData *)0x0) goto LAB_14bf6ae3d;
  }
  else {
LAB_14bf6ae3d:
    this_00 = FDS_QuestBaseTableRow::GetRef((longlong)this->QuestID,true);
    bVar6 = FDS_QuestBaseTableRow::IsValid(this_00);
    if ((bVar6) && (0 < (this_00->ID_QuestObjectiveId).ArrayNum)) {
      MakeContext<FDS_ViewModelContext_QuestObjectiveData>(&local_68);
      pFVar4 = local_68.Object;
      if (local_68.Object != (FDS_ViewModelContext_QuestObjectiveData *)0x0) {
        if ((local_68.Object == (FDS_ViewModelContext_QuestObjectiveData *)0x0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar6)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        *(undefined4 *)&pFVar4->_padding_ = 0x98;
        pFVar4->QuestID = this->QuestID;
        if (((this_00->ID_QuestObjectiveId).ArrayNum < 1) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar1 = *(int *)(this_00->ID_QuestObjectiveId).AllocatorInstance.Data;
        if ((pFVar4 == (FDS_ViewModelContext_QuestObjectiveData *)0x0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar6)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar4->QuestObjectiveID = iVar1;
        pUVar8 = (this->VM_QuestObjectiveData).field0_0x0.DebugPtr;
        local_18.Object = (FDS_ViewModelContext *)local_68.Object;
        local_18.SharedReferenceCount.ReferenceController =
             local_68.SharedReferenceCount.ReferenceController;
        if (local_68.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
        {
          LOCK();
          (local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)pUVar8,&local_18);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_68.SharedReferenceCount.ReferenceController);
    }
  }
  SetVM_Progress(this);
  OnQuestUpdate(this,this->QuestID);
LAB_14bf6af9a:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_48.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// SetQuestLimitTimeWidgetIndex @ 14bf7cde0

void __thiscall
UDS_VM_QuestInstanceSlot::SetQuestLimitTimeWidgetIndex(UDS_VM_QuestInstanceSlot *this,int param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::QuestLimitTimeWidgetIndex.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::QuestLimitTimeWidgetIndex.FieldName;
  if (this->QuestLimitTimeWidgetIndex != param_1) {
    this->QuestLimitTimeWidgetIndex = param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetQuestStateWidgetIndex @ 14bf7d0e0

void __thiscall
UDS_VM_QuestInstanceSlot::SetQuestStateWidgetIndex(UDS_VM_QuestInstanceSlot *this,int param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::QuestStateWidgetIndex.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::QuestStateWidgetIndex.FieldName;
  if (this->QuestStateWidgetIndex != param_1) {
    this->QuestStateWidgetIndex = param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetVM_Progress @ 14bf7f8e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall UDS_VM_QuestInstanceSlot::SetVM_Progress(UDS_VM_QuestInstanceSlot *this)

{
  double dVar1;
  FName FVar2;
  code *pcVar3;
  FDS_ViewModelContext_ModelBase *pFVar4;
  bool bVar5;
  UClass *pUVar6;
  UDS_M_CommonProgress *pUVar7;
  UClass *pUVar8;
  UDS_VM_CommonProgress *pUVar9;
  UObject *pUVar10;
  longlong *plVar11;
  double dVar12;
  undefined1 auStackY_188 [32];
  FWeakObjectPtr local_150;
  TSharedPtr<FDS_ViewModelContext_ModelBase,1> local_148;
  TSharedPtr<FDS_ViewModelContext,1> local_138;
  undefined1 local_128 [128];
  undefined1 local_a8 [128];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_188;
  if ((this->M_CommonProgress).field0_0x0.DebugPtr == (UDS_M_CommonProgress *)0x0) {
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)this,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar6 = Z_Construct_UClass_UDS_M_CommonProgress_NoRegister();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_a8,pUVar6);
    local_a8._8_8_ = this;
    pUVar7 = (UDS_M_CommonProgress *)
             StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_a8);
    if (local_a8._64_8_ != 0) {
      plVar11 = (longlong *)(local_a8 + 0x50);
      if ((longlong *)local_a8._104_8_ != (longlong *)0x0) {
        plVar11 = (longlong *)local_a8._104_8_;
      }
      (**(code **)(*plVar11 + 0x10))();
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar7 != (UDS_M_CommonProgress *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar7);
    }
    (this->M_CommonProgress).field0_0x0.DebugPtr = pUVar7;
  }
  FVar2 = (FName)(this->VM_CampProgress).field0_0x0.DebugPtr;
  if (FVar2 == (FName)0x0) {
    pUVar6 = Z_Construct_UClass_UDS_VM_CommonProgress_NoRegister();
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)this,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar8 = Z_Construct_UClass_UDS_VM_CommonProgress_NoRegister();
    CheckIsClassChildOf_Internal(pUVar8,pUVar6);
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_128,pUVar6);
    local_128._48_8_ = (FObjectInstancingGraph *)0x0;
    local_128._56_8_ = (UPackage *)0x0;
    local_128._24_4_ = RF_Transient;
    local_128._40_8_ = (UObject *)0x0;
    local_128[0x20] = false;
    local_128._8_8_ = this;
    local_128._16_8_ = FVar2;
    pUVar9 = (UDS_VM_CommonProgress *)
             StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_128);
    if (local_128._64_8_ != 0) {
      plVar11 = (longlong *)(local_128 + 0x50);
      if ((longlong *)local_128._104_8_ != (longlong *)0x0) {
        plVar11 = (longlong *)local_128._104_8_;
      }
      (**(code **)(*plVar11 + 0x10))();
    }
    if (pUVar9 != (UDS_VM_CommonProgress *)0x0) {
      pUVar9->field_0x8c = 0;
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar9 != (UDS_VM_CommonProgress *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar9);
    }
    (this->VM_CampProgress).field0_0x0.DebugPtr = pUVar9;
    if (pUVar9 == (UDS_VM_CommonProgress *)0x0) {
      return;
    }
  }
  if ((this->M_CommonProgress).field0_0x0.DebugPtr != (UDS_M_CommonProgress *)0x0) {
    UDS_QuestManager::GetQuestData((int)&local_150);
    bVar5 = FWeakObjectPtr::IsValid(&local_150);
    if (bVar5) {
      pUVar10 = FWeakObjectPtr::Get(&local_150);
      dVar1 = *(double *)&pUVar10[2].field_0x10;
      UDS_ModelBase::SetViewModelTemplateKey
                ((UDS_ModelBase *)(this->M_CommonProgress).field0_0x0.DebugPtr,W_CommonProgress);
      MakeContext<FDS_ViewModelContext_ModelBase>(&local_148);
      pFVar4 = local_148.Object;
      if ((local_148.Object == (FDS_ViewModelContext_ModelBase *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar7 = (this->M_CommonProgress).field0_0x0.DebugPtr,
         pUVar7 != (UDS_M_CommonProgress *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar7);
      }
      local_138.Object = (FDS_ViewModelContext *)local_148.Object;
      local_138.SharedReferenceCount.ReferenceController =
           local_148.SharedReferenceCount.ReferenceController;
      (pFVar4->Model).field0_0x0 =
           (TObjectPtr<UDS_ModelBase>_u_0)(this->M_CommonProgress).field0_0x0;
      pUVar9 = (this->VM_CampProgress).field0_0x0.DebugPtr;
      if (local_148.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (local_148.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_148.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)pUVar9,&local_138);
      pUVar7 = (this->M_CommonProgress).field0_0x0.DebugPtr;
      dVar12 = UDS_TimeUtilManager::GetCurrentServerTime();
      UDS_M_CommonProgress::Init(pUVar7,dVar12,dVar1,true,DayHourSec);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_148.SharedReferenceCount.ReferenceController);
    }
  }
  return;
}

// SetVM_QuestData @ 14bf7fed0

void __thiscall UDS_VM_QuestInstanceSlot::SetVM_QuestData(UDS_VM_QuestInstanceSlot *this)

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

// SetVM_QuestObjectiveData @ 14bf81260

void __thiscall UDS_VM_QuestInstanceSlot::SetVM_QuestObjectiveData(UDS_VM_QuestInstanceSlot *this)

{
  int iVar1;
  code *pcVar2;
  FDS_ViewModelContext_QuestObjectiveData *pFVar3;
  bool bVar4;
  UDS_VM_QuestObjectiveData *pUVar5;
  FDS_QuestBaseTableRow *this_00;
  TSharedPtr<FDS_ViewModelContext_QuestObjectiveData,1> local_28;
  TSharedPtr<FDS_ViewModelContext,1> local_18;
  
  if ((this->VM_QuestObjectiveData).field0_0x0.DebugPtr == (UDS_VM_QuestObjectiveData *)0x0) {
    pUVar5 = UDS_ViewModelBase::CreateViewModel<UDS_VM_QuestObjectiveData>((UObject *)this);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar5 != (UDS_VM_QuestObjectiveData *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar5);
    }
    (this->VM_QuestObjectiveData).field0_0x0.DebugPtr = pUVar5;
    if (pUVar5 == (UDS_VM_QuestObjectiveData *)0x0) {
      return;
    }
  }
  this_00 = FDS_QuestBaseTableRow::GetRef((longlong)this->QuestID,true);
  bVar4 = FDS_QuestBaseTableRow::IsValid(this_00);
  if ((bVar4) && (0 < (this_00->ID_QuestObjectiveId).ArrayNum)) {
    MakeContext<FDS_ViewModelContext_QuestObjectiveData>(&local_28);
    pFVar3 = local_28.Object;
    if (local_28.Object != (FDS_ViewModelContext_QuestObjectiveData *)0x0) {
      if ((local_28.Object == (FDS_ViewModelContext_QuestObjectiveData *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      *(undefined4 *)&pFVar3->_padding_ = 0x98;
      pFVar3->QuestID = this->QuestID;
      if (((this_00->ID_QuestObjectiveId).ArrayNum < 1) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar1 = *(int *)(this_00->ID_QuestObjectiveId).AllocatorInstance.Data;
      if ((pFVar3 == (FDS_ViewModelContext_QuestObjectiveData *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar3->QuestObjectiveID = iVar1;
      pUVar5 = (this->VM_QuestObjectiveData).field0_0x0.DebugPtr;
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
      UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)pUVar5,&local_18);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
  }
  return;
}

// UnbindModel @ 14bf85170

void __thiscall UDS_VM_QuestInstanceSlot::UnbindModel(UDS_VM_QuestInstanceSlot *this)

{
  UDS_QuestEvent *pUVar1;
  
  UDS_ViewModelBase::UnbindModel((UDS_ViewModelBase *)this);
  pUVar1 = UDS_QuestEvent::GetEvent();
  if (pUVar1 != (UDS_QuestEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar1->OnUpdateQuestDataDelegate,this);
    return;
  }
  return;
}

