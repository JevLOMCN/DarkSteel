// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 11

// StaticClass @ 14b6c5840

UClass * __cdecl UDS_VM_QuestMainChapterStepSlot::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_QuestMainChapterStepSlot.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_QuestMainChapterStepSlot",
               &Z_Registration_Info_UClass_UDS_VM_QuestMainChapterStepSlot.InnerSingleton,
               StaticRegisterNativesUDS_VM_QuestMainChapterStepSlot,0x108,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_VM_QuestMainChapterStepSlot>,
               InternalVTableHelperCtorCaller<UDS_VM_QuestMainChapterStepSlot>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_QuestMainChapterStepSlot.InnerSingleton;
}

// UDS_VM_QuestMainChapterStepSlot @ 14b6caa50

UDS_VM_QuestMainChapterStepSlot * __thiscall
UDS_VM_QuestMainChapterStepSlot::UDS_VM_QuestMainChapterStepSlot
          (UDS_VM_QuestMainChapterStepSlot *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_QuestMainChapterStepSlot__6B_;
  (this->VM_QuestData).field0_0x0.DebugPtr = (UDS_VM_QuestData *)0x0;
  (this->VM_QuestObjectiveData).field0_0x0.DebugPtr = (UDS_VM_QuestObjectiveData *)0x0;
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
  (this->FixedText_Complete).StringTableType = StringUi;
  (this->FixedText_Complete).StringTableID = 0xeb29;
  return this;
}

// UDS_VM_QuestMainChapterStepSlot @ 14b6caaf0

UDS_VM_QuestMainChapterStepSlot * __thiscall
UDS_VM_QuestMainChapterStepSlot::UDS_VM_QuestMainChapterStepSlot
          (UDS_VM_QuestMainChapterStepSlot *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_QuestMainChapterStepSlot__6B_;
  (this->VM_QuestData).field0_0x0.DebugPtr = (UDS_VM_QuestData *)0x0;
  (this->VM_QuestObjectiveData).field0_0x0.DebugPtr = (UDS_VM_QuestObjectiveData *)0x0;
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
  (this->FixedText_Complete).StringTableType = StringUi;
  (this->FixedText_Complete).StringTableID = 0xeb29;
  return this;
}

// ~UDS_VM_QuestMainChapterStepSlot @ 14b6cc8b0

void __thiscall
UDS_VM_QuestMainChapterStepSlot::~UDS_VM_QuestMainChapterStepSlot
          (UDS_VM_QuestMainChapterStepSlot *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_QuestMainChapterStepSlot__6B_;
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
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b6cfa70

IClassDescriptor * __thiscall
UDS_VM_QuestMainChapterStepSlot::GetFieldNotificationDescriptor
          (UDS_VM_QuestMainChapterStepSlot *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_QuestMainChapterStepSlot::FFieldNotificationClassDescriptor::GetDescriptor'::
             __l2::_dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b6d0780

UClass * __cdecl UDS_VM_QuestMainChapterStepSlot::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_QuestMainChapterStepSlot.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_QuestMainChapterStepSlot",
               &Z_Registration_Info_UClass_UDS_VM_QuestMainChapterStepSlot.InnerSingleton,
               StaticRegisterNativesUDS_VM_QuestMainChapterStepSlot,0x108,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_VM_QuestMainChapterStepSlot>,
               InternalVTableHelperCtorCaller<UDS_VM_QuestMainChapterStepSlot>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_QuestMainChapterStepSlot.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_QuestMainChapterStepSlot @ 14b6d10a0

void __cdecl
UDS_VM_QuestMainChapterStepSlot::StaticRegisterNativesUDS_VM_QuestMainChapterStepSlot(void)

{
  return;
}

// OnSetViewModel @ 14bf6bcf0

void __thiscall
UDS_VM_QuestMainChapterStepSlot::OnSetViewModel
          (UDS_VM_QuestMainChapterStepSlot *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  FName FVar4;
  FDS_ViewModelContext_QuestObjectiveData *pFVar5;
  FDS_ViewModelContext_Quest *pFVar6;
  bool bVar7;
  UDS_VM_QuestData *pUVar8;
  FDS_QuestBaseTableRow *this_00;
  UDS_VM_QuestObjectiveData *pUVar9;
  UDS_QuestManager *this_01;
  FName local_88;
  int local_80;
  TSharedPtr<FDS_ViewModelContext_QuestObjectiveData,1> local_78;
  TSharedPtr<FDS_ViewModelContext_Quest,1> local_68;
  TSharedPtr<FDS_ViewModelContext_Quest,1> local_58;
  TSharedPtr<FDS_ViewModelContext,1> local_48;
  TSharedPtr<FDS_ViewModelContext,1> local_38;
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
  SafeCast<FDS_ViewModelContext_Quest>(&local_58,&local_48);
  if (local_58.Object == (FDS_ViewModelContext_Quest *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_58.SharedReferenceCount.ReferenceController);
    goto LAB_14bf6c003;
  }
  iVar1 = (local_58.Object)->QuestID;
  if (0 < iVar1) {
    pUVar8 = UDS_ViewModelBase::CreateViewModel<UDS_VM_QuestData>((UObject *)this);
    if ((UE::GC::GIsIncrementalReachabilityPending == false) || (pUVar8 == (UDS_VM_QuestData *)0x0))
    {
      (this->VM_QuestData).field0_0x0.DebugPtr = pUVar8;
      if (pUVar8 != (UDS_VM_QuestData *)0x0) goto LAB_14bf6bda2;
    }
    else {
      UE::GC::MarkAsReachable((UObject *)pUVar8);
      (this->VM_QuestData).field0_0x0.DebugPtr = pUVar8;
LAB_14bf6bda2:
      MakeContext<FDS_ViewModelContext_Quest>(&local_68);
      pFVar6 = local_68.Object;
      if (local_68.Object != (FDS_ViewModelContext_Quest *)0x0) {
        if ((local_68.Object == (FDS_ViewModelContext_Quest *)0x0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar7)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        *(undefined4 *)&pFVar6->_padding_ = 0x97;
        pFVar6->QuestID = iVar1;
        pUVar8 = (this->VM_QuestData).field0_0x0.DebugPtr;
        local_38.Object = (FDS_ViewModelContext *)local_68.Object;
        local_38.SharedReferenceCount.ReferenceController =
             local_68.SharedReferenceCount.ReferenceController;
        if (local_68.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
        {
          LOCK();
          (local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)pUVar8,&local_38);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_68.SharedReferenceCount.ReferenceController);
    }
    this_00 = FDS_QuestBaseTableRow::GetRef((longlong)iVar1,true);
    bVar7 = FDS_QuestBaseTableRow::IsValid(this_00);
    if ((bVar7) && (0 < (this_00->ID_QuestObjectiveId).ArrayNum)) {
      pUVar9 = UDS_ViewModelBase::CreateViewModel<UDS_VM_QuestObjectiveData>((UObject *)this);
      if ((UE::GC::GIsIncrementalReachabilityPending == false) ||
         (pUVar9 == (UDS_VM_QuestObjectiveData *)0x0)) {
        (this->VM_QuestObjectiveData).field0_0x0.DebugPtr = pUVar9;
        if (pUVar9 == (UDS_VM_QuestObjectiveData *)0x0) goto LAB_14bf6bf95;
      }
      else {
        UE::GC::MarkAsReachable((UObject *)pUVar9);
        (this->VM_QuestObjectiveData).field0_0x0.DebugPtr = pUVar9;
      }
      MakeContext<FDS_ViewModelContext_QuestObjectiveData>(&local_78);
      pFVar5 = local_78.Object;
      if (local_78.Object != (FDS_ViewModelContext_QuestObjectiveData *)0x0) {
        if ((local_78.Object == (FDS_ViewModelContext_QuestObjectiveData *)0x0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar7)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        *(undefined4 *)&pFVar5->_padding_ = 0x98;
        pFVar5->QuestID = iVar1;
        if (((this_00->ID_QuestObjectiveId).ArrayNum < 1) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar2 = *(int *)(this_00->ID_QuestObjectiveId).AllocatorInstance.Data;
        if ((pFVar5 == (FDS_ViewModelContext_QuestObjectiveData *)0x0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar7)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar5->QuestObjectiveID = iVar2;
        pUVar9 = (this->VM_QuestObjectiveData).field0_0x0.DebugPtr;
        local_28.Object = (FDS_ViewModelContext *)local_78.Object;
        local_28.SharedReferenceCount.ReferenceController =
             local_78.SharedReferenceCount.ReferenceController;
        if (local_78.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
        {
          LOCK();
          (local_78.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_78.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)pUVar9,&local_28);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_78.SharedReferenceCount.ReferenceController);
    }
LAB_14bf6bf95:
    this_01 = UDS_QuestManager::GetInst();
    if (this_01 != (UDS_QuestManager *)0x0) {
      bVar7 = UDS_QuestManager::IsQuestCompleted(this_01,iVar1);
      FVar4 = FFieldNotificationClassDescriptor::WidgetSwitcherIndex.FieldName;
      if (this->WidgetSwitcherIndex != (bVar7 ^ 1)) {
        local_80 = FFieldNotificationClassDescriptor::WidgetSwitcherIndex.BitNumber;
        this->WidgetSwitcherIndex = bVar7 ^ 1;
        local_88 = FVar4;
        (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_88);
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_58.SharedReferenceCount.ReferenceController);
LAB_14bf6c003:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// SetVM_QuestData @ 14bf800f0

void __thiscall
UDS_VM_QuestMainChapterStepSlot::SetVM_QuestData(UDS_VM_QuestMainChapterStepSlot *this,int param_1)

{
  code *pcVar1;
  FDS_ViewModelContext_Quest *pFVar2;
  bool bVar3;
  UDS_VM_QuestData *pUVar4;
  TSharedPtr<FDS_ViewModelContext_Quest,1> local_28;
  TSharedPtr<FDS_ViewModelContext,1> local_18;
  
  pUVar4 = UDS_ViewModelBase::CreateViewModel<UDS_VM_QuestData>((UObject *)this);
  if ((UE::GC::GIsIncrementalReachabilityPending == false) || (pUVar4 == (UDS_VM_QuestData *)0x0)) {
    (this->VM_QuestData).field0_0x0.DebugPtr = pUVar4;
    if (pUVar4 == (UDS_VM_QuestData *)0x0) {
      return;
    }
  }
  else {
    UE::GC::MarkAsReachable((UObject *)pUVar4);
    (this->VM_QuestData).field0_0x0.DebugPtr = pUVar4;
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
    *(undefined4 *)&pFVar2->_padding_ = 0x97;
    pFVar2->QuestID = param_1;
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
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  return;
}

// SetVM_QuestObjectiveData @ 14bf81410

void __thiscall
UDS_VM_QuestMainChapterStepSlot::SetVM_QuestObjectiveData
          (UDS_VM_QuestMainChapterStepSlot *this,int param_1)

{
  int iVar1;
  code *pcVar2;
  FDS_ViewModelContext_QuestObjectiveData *pFVar3;
  bool bVar4;
  FDS_QuestBaseTableRow *this_00;
  UDS_VM_QuestObjectiveData *pUVar5;
  TSharedPtr<FDS_ViewModelContext_QuestObjectiveData,1> local_28;
  TSharedPtr<FDS_ViewModelContext,1> local_18;
  
  this_00 = FDS_QuestBaseTableRow::GetRef((longlong)param_1,true);
  bVar4 = FDS_QuestBaseTableRow::IsValid(this_00);
  if ((bVar4) && (0 < (this_00->ID_QuestObjectiveId).ArrayNum)) {
    pUVar5 = UDS_ViewModelBase::CreateViewModel<UDS_VM_QuestObjectiveData>((UObject *)this);
    if ((UE::GC::GIsIncrementalReachabilityPending == false) ||
       (pUVar5 == (UDS_VM_QuestObjectiveData *)0x0)) {
      (this->VM_QuestObjectiveData).field0_0x0.DebugPtr = pUVar5;
      if (pUVar5 == (UDS_VM_QuestObjectiveData *)0x0) {
        return;
      }
    }
    else {
      UE::GC::MarkAsReachable((UObject *)pUVar5);
      (this->VM_QuestObjectiveData).field0_0x0.DebugPtr = pUVar5;
    }
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
      pFVar3->QuestID = param_1;
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

// SetWidgetSwitcherIndex @ 14bf82310

void __thiscall
UDS_VM_QuestMainChapterStepSlot::SetWidgetSwitcherIndex
          (UDS_VM_QuestMainChapterStepSlot *this,int *param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::WidgetSwitcherIndex.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::WidgetSwitcherIndex.FieldName;
  if (this->WidgetSwitcherIndex != *param_1) {
    this->WidgetSwitcherIndex = *param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

