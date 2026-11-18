// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 19

// SetClickSlotButton_WrapperImpl @ 14b6c4f50

void __cdecl
UDS_VM_QuestMainChapterListSlot::SetClickSlotButton_WrapperImpl(void *param_1,void *param_2)

{
  undefined1 *puVar1;
  FDS_EventDelegate<int_const_&> *this;
  longlong lVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  uint uVar8;
  UDS_QuestEvent *pUVar9;
  uint uVar10;
  longlong lVar11;
  FDestructionSentinel FStack_38;
  
  if ((*(char *)((longlong)param_2 + 2) != '\x01') &&
     (pUVar9 = UDS_QuestEvent::GetEvent(), pUVar9 != (UDS_QuestEvent *)0x0)) {
    this = &pUVar9->OnSelectedChapterIndexDelegate;
    bVar5 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                      ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this);
    if (bVar5) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,
                 (FWriteAccessScope *)&FStack_38);
      puVar1 = &(pUVar9->OnSelectedChapterIndexDelegate).Delegate.field_0x1c;
      *(int *)puVar1 = *(int *)puVar1 + 1;
      bVar5 = false;
      uVar10 = *(int *)&(pUVar9->OnSelectedChapterIndexDelegate).Delegate.field_0x10 - 1;
      if (-1 < (int)uVar10) {
        lVar11 = (longlong)(int)uVar10 << 4;
        bVar5 = false;
        do {
          uVar8 = 0;
          if ((int)uVar10 < *(int *)&(pUVar9->OnSelectedChapterIndexDelegate).Delegate.field_0x10) {
            uVar8 = ~uVar10 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          lVar2 = *(longlong *)&(pUVar9->OnSelectedChapterIndexDelegate).Delegate.field_0x8;
          if (((*(int *)(lVar2 + 8 + lVar11) == 0) ||
              (plVar3 = *(longlong **)(lVar2 + lVar11), plVar3 == (longlong *)0x0)) ||
             (cVar7 = (**(code **)(*plVar3 + 0x68))(), cVar7 == '\0')) {
            bVar5 = true;
          }
          lVar11 = lVar11 + -0x10;
          uVar10 = uVar10 - 1;
        } while (-1 < (int)uVar10);
      }
      puVar1 = &(pUVar9->OnSelectedChapterIndexDelegate).Delegate.field_0x1c;
      *(int *)puVar1 = *(int *)puVar1 + -1;
      if (bVar5) {
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                  ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this,false);
      }
      if (FStack_38.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_38.Accessor,&FStack_38);
      }
    }
  }
  return;
}

// StaticClass @ 14b6c4f60

UClass * __cdecl UDS_VM_QuestMainChapterListSlot::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_QuestMainChapterListSlot.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_QuestMainChapterListSlot",
               &Z_Registration_Info_UClass_UDS_VM_QuestMainChapterListSlot.InnerSingleton,
               StaticRegisterNativesUDS_VM_QuestMainChapterListSlot,0x1c8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_VM_QuestMainChapterListSlot>,
               InternalVTableHelperCtorCaller<UDS_VM_QuestMainChapterListSlot>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_QuestMainChapterListSlot.InnerSingleton;
}

// UDS_VM_QuestMainChapterListSlot @ 14b6ca6f0

UDS_VM_QuestMainChapterListSlot * __thiscall
UDS_VM_QuestMainChapterListSlot::UDS_VM_QuestMainChapterListSlot
          (UDS_VM_QuestMainChapterListSlot *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_QuestMainChapterListSlot__6B_;
  *(undefined8 *)&(this->ClickSlotButton).Delegate = 0;
  *(undefined8 *)&(this->ClickSlotButton).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickSlotButton).Delegate.field_0x10 = 0;
  (this->ChapterTitle).StringTableType = None;
  (this->ChapterTitle).StringTableID = 0;
  (this->ChapterTitle).StringEnumTableNameID.ComparisonIndex = 0;
  (this->ChapterTitle).StringEnumTableNameID.Number = 0;
  (this->ChapterTitle).DateTime.Ticks = 0;
  (this->ChapterTitle).TimeSpan.Ticks = 0;
  (this->ChapterTitle).TimeExpressionType = None;
  (this->ChapterTitle).IsExpression = false;
  (this->ChapterTitle).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ChapterTitle).UniqueString.Data.ArrayNum = 0;
  (this->ChapterTitle).UniqueString.Data.ArrayMax = 0;
  (this->ChapterTitle).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ChapterTitle).FormatArgs.ArrayNum = 0;
  (this->ChapterTitle).FormatArgs.ArrayMax = 0;
  (this->PreviousPageName).StringTableType = None;
  (this->PreviousPageName).StringTableID = 0;
  (this->PreviousPageName).StringEnumTableNameID.ComparisonIndex = 0;
  (this->PreviousPageName).StringEnumTableNameID.Number = 0;
  (this->PreviousPageName).DateTime.Ticks = 0;
  (this->PreviousPageName).TimeSpan.Ticks = 0;
  (this->PreviousPageName).TimeExpressionType = None;
  (this->PreviousPageName).IsExpression = false;
  (this->PreviousPageName).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->PreviousPageName).UniqueString.Data.ArrayNum = 0;
  (this->PreviousPageName).UniqueString.Data.ArrayMax = 0;
  (this->PreviousPageName).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PreviousPageName).FormatArgs.ArrayNum = 0;
  (this->PreviousPageName).FormatArgs.ArrayMax = 0;
  (this->ChapterStoryName).StringTableType = None;
  (this->ChapterStoryName).StringTableID = 0;
  (this->ChapterStoryName).StringEnumTableNameID.ComparisonIndex = 0;
  (this->ChapterStoryName).StringEnumTableNameID.Number = 0;
  (this->ChapterStoryName).DateTime.Ticks = 0;
  (this->ChapterStoryName).TimeSpan.Ticks = 0;
  (this->ChapterStoryName).TimeExpressionType = None;
  (this->ChapterStoryName).IsExpression = false;
  (this->ChapterStoryName).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->ChapterStoryName).UniqueString.Data.ArrayNum = 0;
  (this->ChapterStoryName).UniqueString.Data.ArrayMax = 0;
  (this->ChapterStoryName).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ChapterStoryName).FormatArgs.ArrayNum = 0;
  (this->ChapterStoryName).FormatArgs.ArrayMax = 0;
  this->ChapterIndex = 0;
  (this->ClickSlotButton)._padding_ = '\0';
  (this->ClickSlotButton).bIsCustomSelected = false;
  (this->ClickSlotButton).bIsLacked = false;
  (this->ClickSlotButton).bIsCustomDisabled = false;
  return this;
}

// UDS_VM_QuestMainChapterListSlot @ 14b6ca840

UDS_VM_QuestMainChapterListSlot * __thiscall
UDS_VM_QuestMainChapterListSlot::UDS_VM_QuestMainChapterListSlot
          (UDS_VM_QuestMainChapterListSlot *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_QuestMainChapterListSlot__6B_;
  *(undefined8 *)&(this->ClickSlotButton).Delegate = 0;
  *(undefined8 *)&(this->ClickSlotButton).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickSlotButton).Delegate.field_0x10 = 0;
  (this->ChapterTitle).StringTableType = None;
  (this->ChapterTitle).StringTableID = 0;
  (this->ChapterTitle).StringEnumTableNameID.ComparisonIndex = 0;
  (this->ChapterTitle).StringEnumTableNameID.Number = 0;
  (this->ChapterTitle).DateTime.Ticks = 0;
  (this->ChapterTitle).TimeSpan.Ticks = 0;
  (this->ChapterTitle).TimeExpressionType = None;
  (this->ChapterTitle).IsExpression = false;
  (this->ChapterTitle).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ChapterTitle).UniqueString.Data.ArrayNum = 0;
  (this->ChapterTitle).UniqueString.Data.ArrayMax = 0;
  (this->ChapterTitle).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ChapterTitle).FormatArgs.ArrayNum = 0;
  (this->ChapterTitle).FormatArgs.ArrayMax = 0;
  (this->PreviousPageName).StringTableType = None;
  (this->PreviousPageName).StringTableID = 0;
  (this->PreviousPageName).StringEnumTableNameID.ComparisonIndex = 0;
  (this->PreviousPageName).StringEnumTableNameID.Number = 0;
  (this->PreviousPageName).DateTime.Ticks = 0;
  (this->PreviousPageName).TimeSpan.Ticks = 0;
  (this->PreviousPageName).TimeExpressionType = None;
  (this->PreviousPageName).IsExpression = false;
  (this->PreviousPageName).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->PreviousPageName).UniqueString.Data.ArrayNum = 0;
  (this->PreviousPageName).UniqueString.Data.ArrayMax = 0;
  (this->PreviousPageName).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PreviousPageName).FormatArgs.ArrayNum = 0;
  (this->PreviousPageName).FormatArgs.ArrayMax = 0;
  (this->ChapterStoryName).StringTableType = None;
  (this->ChapterStoryName).StringTableID = 0;
  (this->ChapterStoryName).StringEnumTableNameID.ComparisonIndex = 0;
  (this->ChapterStoryName).StringEnumTableNameID.Number = 0;
  (this->ChapterStoryName).DateTime.Ticks = 0;
  (this->ChapterStoryName).TimeSpan.Ticks = 0;
  (this->ChapterStoryName).TimeExpressionType = None;
  (this->ChapterStoryName).IsExpression = false;
  (this->ChapterStoryName).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->ChapterStoryName).UniqueString.Data.ArrayNum = 0;
  (this->ChapterStoryName).UniqueString.Data.ArrayMax = 0;
  (this->ChapterStoryName).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ChapterStoryName).FormatArgs.ArrayNum = 0;
  (this->ChapterStoryName).FormatArgs.ArrayMax = 0;
  this->ChapterIndex = 0;
  (this->ClickSlotButton)._padding_ = '\0';
  (this->ClickSlotButton).bIsCustomSelected = false;
  (this->ClickSlotButton).bIsLacked = false;
  (this->ClickSlotButton).bIsCustomDisabled = false;
  return this;
}

// ~UDS_VM_QuestMainChapterListSlot @ 14b6cc750

void __thiscall
UDS_VM_QuestMainChapterListSlot::~UDS_VM_QuestMainChapterListSlot
          (UDS_VM_QuestMainChapterListSlot *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_QuestMainChapterListSlot__6B_;
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->ChapterStoryName).FormatArgs.AllocatorInstance.Data,
             (this->ChapterStoryName).FormatArgs.ArrayNum);
  pFVar1 = (this->ChapterStoryName).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ChapterStoryName).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->PreviousPageName).FormatArgs.AllocatorInstance.Data,
             (this->PreviousPageName).FormatArgs.ArrayNum);
  pFVar1 = (this->PreviousPageName).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->PreviousPageName).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->ChapterTitle).FormatArgs.AllocatorInstance.Data,
             (this->ChapterTitle).FormatArgs.ArrayNum);
  pFVar1 = (this->ChapterTitle).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ChapterTitle).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ClickSlotButton).Delegate);
  pvVar2 = *(void **)&(this->ClickSlotButton).Delegate.field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ClickSlotButton).Delegate);
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b6cf990

IClassDescriptor * __thiscall
UDS_VM_QuestMainChapterListSlot::GetFieldNotificationDescriptor
          (UDS_VM_QuestMainChapterListSlot *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_QuestMainChapterListSlot::FFieldNotificationClassDescriptor::GetDescriptor'::
             __l2::_dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b6d0600

UClass * __cdecl UDS_VM_QuestMainChapterListSlot::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_QuestMainChapterListSlot.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_QuestMainChapterListSlot",
               &Z_Registration_Info_UClass_UDS_VM_QuestMainChapterListSlot.InnerSingleton,
               StaticRegisterNativesUDS_VM_QuestMainChapterListSlot,0x1c8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_VM_QuestMainChapterListSlot>,
               InternalVTableHelperCtorCaller<UDS_VM_QuestMainChapterListSlot>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_QuestMainChapterListSlot.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_QuestMainChapterListSlot @ 14b6d1050

void __cdecl
UDS_VM_QuestMainChapterListSlot::StaticRegisterNativesUDS_VM_QuestMainChapterListSlot(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UDS_VM_QuestMainChapterListSlot_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execGetIsLackedChapter @ 14b6d24d0

void __cdecl
UDS_VM_QuestMainChapterListSlot::execGetIsLackedChapter
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar1 = GetIsLackedChapter((UDS_VM_QuestMainChapterListSlot *)param_1);
  *(bool *)param_3 = bVar1;
  return;
}

// GetIsLackedChapter @ 14bf57830

bool __thiscall
UDS_VM_QuestMainChapterListSlot::GetIsLackedChapter(UDS_VM_QuestMainChapterListSlot *this)

{
  return this->ChapterStateWidgetIndex == 2;
}

// OnClickSlotButton @ 14bf62b90

void __thiscall
UDS_VM_QuestMainChapterListSlot::OnClickSlotButton
          (UDS_VM_QuestMainChapterListSlot *this,FDS_ButtonEventField *param_1)

{
  undefined1 *puVar1;
  FDS_EventDelegate<int_const_&> *this_00;
  longlong lVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  uint uVar8;
  UDS_QuestEvent *pUVar9;
  uint uVar10;
  longlong lVar11;
  FDestructionSentinel local_38;
  
  if ((param_1->bIsLacked != true) &&
     (pUVar9 = UDS_QuestEvent::GetEvent(), pUVar9 != (UDS_QuestEvent *)0x0)) {
    this_00 = &pUVar9->OnSelectedChapterIndexDelegate;
    bVar5 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                      ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this_00);
    if (bVar5) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,
                 (FWriteAccessScope *)&local_38);
      puVar1 = &(pUVar9->OnSelectedChapterIndexDelegate).Delegate.field_0x1c;
      *(int *)puVar1 = *(int *)puVar1 + 1;
      bVar5 = false;
      uVar10 = *(int *)&(pUVar9->OnSelectedChapterIndexDelegate).Delegate.field_0x10 - 1;
      if (-1 < (int)uVar10) {
        lVar11 = (longlong)(int)uVar10 << 4;
        bVar5 = false;
        do {
          uVar8 = 0;
          if ((int)uVar10 < *(int *)&(pUVar9->OnSelectedChapterIndexDelegate).Delegate.field_0x10) {
            uVar8 = ~uVar10 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          lVar2 = *(longlong *)&(pUVar9->OnSelectedChapterIndexDelegate).Delegate.field_0x8;
          if (((*(int *)(lVar2 + 8 + lVar11) == 0) ||
              (plVar3 = *(longlong **)(lVar2 + lVar11), plVar3 == (longlong *)0x0)) ||
             (cVar7 = (**(code **)(*plVar3 + 0x68))(), cVar7 == '\0')) {
            bVar5 = true;
          }
          lVar11 = lVar11 + -0x10;
          uVar10 = uVar10 - 1;
        } while (-1 < (int)uVar10);
      }
      puVar1 = &(pUVar9->OnSelectedChapterIndexDelegate).Delegate.field_0x1c;
      *(int *)puVar1 = *(int *)puVar1 + -1;
      if (bVar5) {
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                  ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this_00,false);
      }
      if (local_38.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
      }
    }
  }
  return;
}

// OnSelectedChapterIndex @ 14bf67a20

void __thiscall
UDS_VM_QuestMainChapterListSlot::OnSelectedChapterIndex
          (UDS_VM_QuestMainChapterListSlot *this,int *param_1)

{
  bool bVar1;
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::IsSelectedSlot.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::IsSelectedSlot.FieldName;
  bVar1 = this->ChapterIndex == *param_1;
  if (this->IsSelectedSlot != bVar1) {
    this->IsSelectedSlot = bVar1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// OnSetViewModel @ 14bf6b9b0

void __thiscall
UDS_VM_QuestMainChapterListSlot::OnSetViewModel
          (UDS_VM_QuestMainChapterListSlot *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  FName FVar2;
  bool bVar3;
  int iVar4;
  UDS_QuestEvent *pUVar5;
  FDS_QuestMainTableRow *this_00;
  FDS_QuestMainChapterInfoTableRow *this_01;
  int iVar6;
  int iVar7;
  FName local_b8;
  int iStack_b0;
  undefined4 uStack_ac;
  FName local_a8;
  int local_a0;
  FName local_98;
  int local_90;
  FName local_88;
  int local_80;
  FName local_78;
  int local_70;
  FName local_68;
  int local_60;
  TSharedPtr<FDS_ViewModelContext_QuestMainChapterListSlot,1> local_58;
  TSharedPtr<FDS_ViewModelContext,1> local_48;
  FName local_38;
  undefined8 uStack_30;
  
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
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
  SafeCast<FDS_ViewModelContext_QuestMainChapterListSlot>(&local_58,&local_48);
  if (local_58.Object == (FDS_ViewModelContext_QuestMainChapterListSlot *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_58.SharedReferenceCount.ReferenceController);
  }
  else {
    this->ChapterIndex = (local_58.Object)->ChapterIndex;
    bVar3 = (local_58.Object)->IsSelectedSlot;
    pUVar5 = UDS_QuestEvent::GetEvent();
    if (pUVar5 != (UDS_QuestEvent *)0x0) {
      iStack_b0 = 0;
      local_b8 = (FName)OnSelectedChapterIndex;
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                 &pUVar5->OnSelectedChapterIndexDelegate,this);
      uStack_30 = CONCAT44(uStack_ac,iStack_b0);
      local_38 = local_b8;
      TMulticastDelegateRegistration<void___cdecl(int_const_&),FDefaultDelegateUserPolicy>::
      AddUObject<UDS_VM_QuestMainChapterListSlot>
                ((TMulticastDelegateRegistration<void___cdecl(int_const_&),FDefaultDelegateUserPolicy>
                  *)&pUVar5->OnSelectedChapterIndexDelegate,
                 (UDS_VM_QuestMainChapterListSlot *)&stack0x00000010,(pmf_2e721547 *)this);
    }
    iVar7 = FFieldNotificationClassDescriptor::IsSelectedSlot.BitNumber;
    FVar2 = FFieldNotificationClassDescriptor::IsSelectedSlot.FieldName;
    if (this->IsSelectedSlot != bVar3) {
      this->IsSelectedSlot = bVar3;
      local_a0 = iVar7;
      local_a8 = FVar2;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_a8);
    }
    iVar4 = UDS_QuestManager::GetProgressMainQuestID();
    iVar7 = 0;
    this_00 = FDS_QuestMainTableRow::GetRef((longlong)iVar4,true);
    bVar3 = FDS_QuestMainTableRow::IsValid(this_00);
    iVar4 = FFieldNotificationClassDescriptor::ChapterStateWidgetIndex.BitNumber;
    FVar2 = FFieldNotificationClassDescriptor::ChapterStateWidgetIndex.FieldName;
    if (bVar3) {
      iVar7 = this_00->ChapterIndex;
    }
    if (iVar7 < this->ChapterIndex) {
      iVar6 = 2;
    }
    else {
      iVar6 = 0;
      if (this->ChapterIndex < iVar7) {
        iVar6 = 1;
      }
    }
    if (this->ChapterStateWidgetIndex != iVar6) {
      this->ChapterStateWidgetIndex = iVar6;
      local_90 = iVar4;
      local_98 = FVar2;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_98);
    }
    FDS_Text::Reset(&this->ChapterTitle);
    if (0 < this->ChapterIndex) {
      this_01 = FDS_QuestMainChapterInfoTableRow::GetRef((longlong)this->ChapterIndex,true);
      bVar3 = FDS_QuestMainChapterInfoTableRow::IsValid(this_01);
      if (bVar3) {
        FDS_Text::SetTextFromStringID(&this->ChapterTitle,&this_01->ID_ChapterTitle);
      }
    }
    local_80 = FFieldNotificationClassDescriptor::ChapterTitle.BitNumber;
    local_88 = FFieldNotificationClassDescriptor::ChapterTitle.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_88);
    FDS_Text::SetTextFromStringTable(&this->PreviousPageName,StringUi,0xec62);
    local_70 = FFieldNotificationClassDescriptor::PreviousPageName.BitNumber;
    local_78 = FFieldNotificationClassDescriptor::PreviousPageName.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_78);
    FDS_Text::SetTextFromStringTable(&this->ChapterStoryName,StringUi,0xec63);
    local_60 = FFieldNotificationClassDescriptor::ChapterStoryName.BitNumber;
    local_68 = FFieldNotificationClassDescriptor::ChapterStoryName.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_68);
    iStack_b0 = FFieldNotificationClassDescriptor::GetIsLackedChapter.BitNumber;
    local_b8 = FFieldNotificationClassDescriptor::GetIsLackedChapter.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_b8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_58.SharedReferenceCount.ReferenceController);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// SetChapterStateWidgetIndex @ 14bf79750

void __thiscall
UDS_VM_QuestMainChapterListSlot::SetChapterStateWidgetIndex(UDS_VM_QuestMainChapterListSlot *this)

{
  bool bVar1;
  int iVar2;
  FDS_QuestMainTableRow *this_00;
  int iVar3;
  FName local_18;
  int local_10;
  
  iVar2 = UDS_QuestManager::GetProgressMainQuestID();
  iVar3 = 0;
  this_00 = FDS_QuestMainTableRow::GetRef((longlong)iVar2,true);
  bVar1 = FDS_QuestMainTableRow::IsValid(this_00);
  local_10 = FFieldNotificationClassDescriptor::ChapterStateWidgetIndex.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::ChapterStateWidgetIndex.FieldName;
  if (bVar1) {
    iVar3 = this_00->ChapterIndex;
  }
  if (iVar3 < this->ChapterIndex) {
    iVar2 = 2;
  }
  else {
    iVar2 = 0;
    if (this->ChapterIndex < iVar3) {
      iVar2 = 1;
    }
  }
  if (this->ChapterStateWidgetIndex != iVar2) {
    this->ChapterStateWidgetIndex = iVar2;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetChapterStoryName @ 14bf79800

void __thiscall
UDS_VM_QuestMainChapterListSlot::SetChapterStoryName(UDS_VM_QuestMainChapterListSlot *this)

{
  FName local_18;
  int local_10;
  
  FDS_Text::SetTextFromStringTable(&this->ChapterStoryName,StringUi,0xec63);
  local_10 = FFieldNotificationClassDescriptor::ChapterStoryName.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::ChapterStoryName.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// SetChapterTitle @ 14bf798e0

void __thiscall
UDS_VM_QuestMainChapterListSlot::SetChapterTitle(UDS_VM_QuestMainChapterListSlot *this)

{
  bool bVar1;
  FDS_QuestMainChapterInfoTableRow *this_00;
  FName local_18;
  int local_10;
  
  FDS_Text::Reset(&this->ChapterTitle);
  if (0 < this->ChapterIndex) {
    this_00 = FDS_QuestMainChapterInfoTableRow::GetRef((longlong)this->ChapterIndex,true);
    bVar1 = FDS_QuestMainChapterInfoTableRow::IsValid(this_00);
    if (bVar1) {
      FDS_Text::SetTextFromStringID(&this->ChapterTitle,&this_00->ID_ChapterTitle);
    }
  }
  local_10 = FFieldNotificationClassDescriptor::ChapterTitle.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::ChapterTitle.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// SetIsSelectedSlot @ 14bf7b5b0

void __thiscall
UDS_VM_QuestMainChapterListSlot::SetIsSelectedSlot
          (UDS_VM_QuestMainChapterListSlot *this,bool *param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::IsSelectedSlot.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::IsSelectedSlot.FieldName;
  if (this->IsSelectedSlot != *param_1) {
    this->IsSelectedSlot = *param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetPreviousPageName @ 14bf7c9b0

void __thiscall
UDS_VM_QuestMainChapterListSlot::SetPreviousPageName(UDS_VM_QuestMainChapterListSlot *this)

{
  FName local_18;
  int local_10;
  
  FDS_Text::SetTextFromStringTable(&this->PreviousPageName,StringUi,0xec62);
  local_10 = FFieldNotificationClassDescriptor::PreviousPageName.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::PreviousPageName.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// UnbindModel @ 14bf85330

void __thiscall UDS_VM_QuestMainChapterListSlot::UnbindModel(UDS_VM_QuestMainChapterListSlot *this)

{
  UDS_QuestEvent *pUVar1;
  
  UDS_ViewModelBase::UnbindModel((UDS_ViewModelBase *)this);
  pUVar1 = UDS_QuestEvent::GetEvent();
  if (pUVar1 != (UDS_QuestEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar1->OnSelectedChapterIndexDelegate,this);
    return;
  }
  return;
}

