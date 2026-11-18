// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 19

// SetClickPreviousStoryButton_WrapperImpl @ 14b6c3c20

void __cdecl UDS_VM_QuestMain::SetClickPreviousStoryButton_WrapperImpl(void *param_1,void *param_2)

{
  FName FVar1;
  int iVar2;
  FName FStack_18;
  int iStack_10;
  
  iVar2 = FFieldNotificationClassDescriptor::IsShowPreviousStory.BitNumber;
  FVar1 = FFieldNotificationClassDescriptor::IsShowPreviousStory.FieldName;
  if (*(char *)((longlong)param_1 + 0xb8) != '\x01') {
    *(undefined1 *)((longlong)param_1 + 0xb8) = 1;
    iStack_10 = iVar2;
    FStack_18 = FVar1;
    (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
              ((longlong *)((longlong)param_1 + 0x28),&FStack_18);
  }
  SetVM_QuestMainChapterInfo(param_1);
  return;
}

// SetClickProgressStoryButton_WrapperImpl @ 14b6c3c30

void __cdecl UDS_VM_QuestMain::SetClickProgressStoryButton_WrapperImpl(void *param_1,void *param_2)

{
  FName FVar1;
  int iVar2;
  FName FStack_18;
  int iStack_10;
  
  iVar2 = FFieldNotificationClassDescriptor::IsShowPreviousStory.BitNumber;
  FVar1 = FFieldNotificationClassDescriptor::IsShowPreviousStory.FieldName;
  if (*(char *)((longlong)param_1 + 0xb8) != '\0') {
    *(undefined1 *)((longlong)param_1 + 0xb8) = 0;
    iStack_10 = iVar2;
    FStack_18 = FVar1;
    (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
              ((longlong *)((longlong)param_1 + 0x28),&FStack_18);
  }
  SetVM_QuestMainChapterInfo(param_1);
  return;
}

// StaticClass @ 14b6c3c40

UClass * __cdecl UDS_VM_QuestMain::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_QuestMain.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_QuestMain",
               &Z_Registration_Info_UClass_UDS_VM_QuestMain.InnerSingleton,
               StaticRegisterNativesUDS_VM_QuestMain,0x160,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_QuestMain>,
               InternalVTableHelperCtorCaller<UDS_VM_QuestMain>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_QuestMain.InnerSingleton;
}

// UDS_VM_QuestMain @ 14b6ca210

UDS_VM_QuestMain * __thiscall
UDS_VM_QuestMain::UDS_VM_QuestMain(UDS_VM_QuestMain *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_QuestMain__6B_;
  (this->EntryBindingEventField_ChapterList).UserObjectList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->EntryBindingEventField_ChapterList).UserObjectList.ArrayNum = 0;
  (this->EntryBindingEventField_ChapterList).UserObjectList.ArrayMax = 0;
  (this->EntryFocusEventField_ChapterList).FocusIndex = 0;
  (this->EntryFocusEventField_ChapterList).Offset = 0.0;
  (this->ClickPreviousStoryButton)._padding_ = '\0';
  (this->ClickPreviousStoryButton).bIsCustomSelected = false;
  (this->ClickPreviousStoryButton).bIsLacked = false;
  (this->ClickPreviousStoryButton).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickPreviousStoryButton).Delegate = 0;
  *(undefined8 *)&(this->ClickPreviousStoryButton).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickPreviousStoryButton).Delegate.field_0x10 = 0;
  (this->ClickProgressStoryButton)._padding_ = '\0';
  (this->ClickProgressStoryButton).bIsCustomSelected = false;
  (this->ClickProgressStoryButton).bIsLacked = false;
  (this->ClickProgressStoryButton).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickProgressStoryButton).Delegate = 0;
  *(undefined8 *)&(this->ClickProgressStoryButton).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickProgressStoryButton).Delegate.field_0x10 = 0;
  (this->VM_QuestMainChapterInfo).field0_0x0.DebugPtr = (UDS_VM_QuestMainChapterInfo *)0x0;
  this->SelectedChapterIndex = 0;
  this->ProgressChapterIndex = 0;
  *(undefined8 *)&this->ChapterDataMap = 0;
  *(undefined8 *)&(this->ChapterDataMap).field_0x8 = 0;
  *(undefined8 *)&(this->ChapterDataMap).field_0x20 = 0;
  *(undefined4 *)&(this->ChapterDataMap).field_0x28 = 0;
  *(undefined4 *)&(this->ChapterDataMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->ChapterDataMap).field_0x34 = 0;
  *(undefined4 *)&(this->ChapterDataMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->ChapterDataMap).field_0x40 = 0;
  *(undefined4 *)&(this->ChapterDataMap).field_0x48 = 0;
  return this;
}

// UDS_VM_QuestMain @ 14b6ca2f0

UDS_VM_QuestMain * __thiscall
UDS_VM_QuestMain::UDS_VM_QuestMain(UDS_VM_QuestMain *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_QuestMain__6B_;
  (this->EntryBindingEventField_ChapterList).UserObjectList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->EntryBindingEventField_ChapterList).UserObjectList.ArrayNum = 0;
  (this->EntryBindingEventField_ChapterList).UserObjectList.ArrayMax = 0;
  (this->EntryFocusEventField_ChapterList).FocusIndex = 0;
  (this->EntryFocusEventField_ChapterList).Offset = 0.0;
  (this->ClickPreviousStoryButton)._padding_ = '\0';
  (this->ClickPreviousStoryButton).bIsCustomSelected = false;
  (this->ClickPreviousStoryButton).bIsLacked = false;
  (this->ClickPreviousStoryButton).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickPreviousStoryButton).Delegate = 0;
  *(undefined8 *)&(this->ClickPreviousStoryButton).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickPreviousStoryButton).Delegate.field_0x10 = 0;
  (this->ClickProgressStoryButton)._padding_ = '\0';
  (this->ClickProgressStoryButton).bIsCustomSelected = false;
  (this->ClickProgressStoryButton).bIsLacked = false;
  (this->ClickProgressStoryButton).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickProgressStoryButton).Delegate = 0;
  *(undefined8 *)&(this->ClickProgressStoryButton).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickProgressStoryButton).Delegate.field_0x10 = 0;
  (this->VM_QuestMainChapterInfo).field0_0x0.DebugPtr = (UDS_VM_QuestMainChapterInfo *)0x0;
  this->SelectedChapterIndex = 0;
  this->ProgressChapterIndex = 0;
  *(undefined8 *)&this->ChapterDataMap = 0;
  *(undefined8 *)&(this->ChapterDataMap).field_0x8 = 0;
  *(undefined8 *)&(this->ChapterDataMap).field_0x20 = 0;
  *(undefined4 *)&(this->ChapterDataMap).field_0x28 = 0;
  *(undefined4 *)&(this->ChapterDataMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->ChapterDataMap).field_0x34 = 0;
  *(undefined4 *)&(this->ChapterDataMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->ChapterDataMap).field_0x40 = 0;
  *(undefined4 *)&(this->ChapterDataMap).field_0x48 = 0;
  return this;
}

// ~UDS_VM_QuestMain @ 14b6cc530

void __thiscall UDS_VM_QuestMain::~UDS_VM_QuestMain(UDS_VM_QuestMain *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_QuestMain__6B_;
  *(undefined4 *)&(this->ChapterDataMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->ChapterDataMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<int,FDS_ChapterData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,FDS_ChapterData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,FDS_ChapterData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ChapterDataMap);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ClickProgressStoryButton).Delegate
            );
  pvVar1 = *(void **)&(this->ClickProgressStoryButton).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ClickProgressStoryButton).Delegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ClickPreviousStoryButton).Delegate
            );
  pvVar1 = *(void **)&(this->ClickPreviousStoryButton).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ClickPreviousStoryButton).Delegate);
  pFVar2 = (this->EntryBindingEventField_ChapterList).UserObjectList.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b6cf8b0

IClassDescriptor * __thiscall
UDS_VM_QuestMain::GetFieldNotificationDescriptor(UDS_VM_QuestMain *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_QuestMain::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b6d0480

UClass * __cdecl UDS_VM_QuestMain::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_QuestMain.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_QuestMain",
               &Z_Registration_Info_UClass_UDS_VM_QuestMain.InnerSingleton,
               StaticRegisterNativesUDS_VM_QuestMain,0x160,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_QuestMain>,
               InternalVTableHelperCtorCaller<UDS_VM_QuestMain>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_QuestMain.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_QuestMain @ 14b6d1030

void __cdecl UDS_VM_QuestMain::StaticRegisterNativesUDS_VM_QuestMain(void)

{
  return;
}

// GetChapterIndex @ 14bf57070

int __thiscall UDS_VM_QuestMain::GetChapterIndex(UDS_VM_QuestMain *this,int param_1)

{
  bool bVar1;
  FDS_QuestMainTableRow *this_00;
  
  if (0 < param_1) {
    this_00 = FDS_QuestMainTableRow::GetRef((longlong)param_1,true);
    bVar1 = FDS_QuestMainTableRow::IsValid(this_00);
    if (bVar1) {
      return this_00->ChapterIndex;
    }
  }
  return 0;
}

// OnClickPreviousStoryButton @ 14bf62580

void __thiscall
UDS_VM_QuestMain::OnClickPreviousStoryButton(UDS_VM_QuestMain *this,FDS_ButtonEventField *param_1)

{
  FName FVar1;
  int iVar2;
  FName local_18;
  int local_10;
  
  iVar2 = FFieldNotificationClassDescriptor::IsShowPreviousStory.BitNumber;
  FVar1 = FFieldNotificationClassDescriptor::IsShowPreviousStory.FieldName;
  if (this->IsShowPreviousStory != true) {
    this->IsShowPreviousStory = true;
    local_10 = iVar2;
    local_18 = FVar1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  SetVM_QuestMainChapterInfo(this);
  return;
}

// OnClickProgressStoryButton @ 14bf625e0

void __thiscall
UDS_VM_QuestMain::OnClickProgressStoryButton(UDS_VM_QuestMain *this,FDS_ButtonEventField *param_1)

{
  FName FVar1;
  int iVar2;
  FName local_18;
  int local_10;
  
  iVar2 = FFieldNotificationClassDescriptor::IsShowPreviousStory.BitNumber;
  FVar1 = FFieldNotificationClassDescriptor::IsShowPreviousStory.FieldName;
  if (this->IsShowPreviousStory != false) {
    this->IsShowPreviousStory = false;
    local_10 = iVar2;
    local_18 = FVar1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  SetVM_QuestMainChapterInfo(this);
  return;
}

// OnSelectedChapterIndex @ 14bf67960

void __thiscall UDS_VM_QuestMain::OnSelectedChapterIndex(UDS_VM_QuestMain *this,int *param_1)

{
  int iVar1;
  FName FVar2;
  bool bVar3;
  FName local_18;
  int local_10;
  
  iVar1 = *param_1;
  bVar3 = iVar1 != this->ProgressChapterIndex;
  this->SelectedChapterIndex = iVar1;
  iVar1 = FFieldNotificationClassDescriptor::IsShowPreviousStory.BitNumber;
  FVar2 = FFieldNotificationClassDescriptor::IsShowPreviousStory.FieldName;
  if (this->IsShowPreviousStory != bVar3) {
    this->IsShowPreviousStory = bVar3;
    local_10 = iVar1;
    local_18 = FVar2;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  iVar1 = FFieldNotificationClassDescriptor::IsProgressChapter.BitNumber;
  FVar2 = FFieldNotificationClassDescriptor::IsProgressChapter.FieldName;
  bVar3 = this->SelectedChapterIndex == this->ProgressChapterIndex;
  if (this->IsProgressChapter != bVar3) {
    this->IsProgressChapter = bVar3;
    local_10 = iVar1;
    local_18 = FVar2;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  SetVM_QuestMainChapterInfo(this);
  return;
}

// OnSetViewModel @ 14bf6b3d0

void __thiscall
UDS_VM_QuestMain::OnSetViewModel(UDS_VM_QuestMain *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  bool bVar1;
  int iVar2;
  UDS_QuestEvent *pUVar3;
  UDS_QuestManager *pUVar4;
  FDS_QuestMainTableRow *this_00;
  int iVar5;
  
  pUVar3 = UDS_QuestEvent::GetEvent();
  if (pUVar3 != (UDS_QuestEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar3->OnSelectedChapterIndexDelegate,this);
    TMulticastDelegateRegistration<void___cdecl(int_const_&),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_VM_QuestMain>
              ((TMulticastDelegateRegistration<void___cdecl(int_const_&),FDefaultDelegateUserPolicy>
                *)&pUVar3->OnSelectedChapterIndexDelegate,(UDS_VM_QuestMain *)&stack0x00000008,
               (pmf_fea95350 *)this);
  }
  pUVar4 = UDS_QuestManager::GetInst();
  if (pUVar4 != (UDS_QuestManager *)0x0) {
    iVar2 = UDS_QuestManager::GetProgressMainQuestID();
    iVar5 = 0;
    if (0 < iVar2) {
      this_00 = FDS_QuestMainTableRow::GetRef((longlong)iVar2,true);
      bVar1 = FDS_QuestMainTableRow::IsValid(this_00);
      iVar5 = 0;
      if (bVar1) {
        iVar5 = this_00->ChapterIndex;
      }
    }
    this->ProgressChapterIndex = iVar5;
  }
  OnSelectedChapterIndex(this,&this->ProgressChapterIndex);
  UpdateChapterListSlot(this);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// SetIsProgressChapter @ 14bf7b4c0

void __thiscall UDS_VM_QuestMain::SetIsProgressChapter(UDS_VM_QuestMain *this,bool param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::IsProgressChapter.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::IsProgressChapter.FieldName;
  if (this->IsProgressChapter != param_1) {
    this->IsProgressChapter = param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetIsShowPreviousStory @ 14bf7b700

void __thiscall UDS_VM_QuestMain::SetIsShowPreviousStory(UDS_VM_QuestMain *this,bool param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::IsShowPreviousStory.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::IsShowPreviousStory.FieldName;
  if (this->IsShowPreviousStory != param_1) {
    this->IsShowPreviousStory = param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// SetVM_QuestMainChapterInfo @ 14bf80ba0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall UDS_VM_QuestMain::SetVM_QuestMainChapterInfo(UDS_VM_QuestMain *this)

{
  code *pcVar1;
  bool bVar2;
  UClass *pUVar3;
  UClass *pUVar4;
  UDS_VM_QuestMainChapterInfo *pUVar5;
  FDS_ViewModelContext *pFVar6;
  UScriptStruct *pUVar7;
  UDS_ViewModelContextManager *this_00;
  longlong *plVar8;
  FDS_ViewModelContext *pFVar9;
  FDS_ViewModelContext *pFVar10;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  TSharedPtr<FDS_ViewModelContext,1> local_c0;
  TSharedPtr<FDS_ViewModelContext,1> local_b0;
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_e8;
  pFVar10 = (FDS_ViewModelContext *)0x0;
  if ((this->VM_QuestMainChapterInfo).field0_0x0.DebugPtr == (UDS_VM_QuestMainChapterInfo *)0x0) {
    local_c8 = 0;
    pUVar3 = Z_Construct_UClass_UDS_VM_QuestMainChapterInfo_NoRegister();
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)this,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar4 = Z_Construct_UClass_UDS_VM_QuestMainChapterInfo_NoRegister();
    CheckIsClassChildOf_Internal(pUVar4,pUVar3);
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_98,pUVar3);
    local_98._48_8_ = (FObjectInstancingGraph *)0x0;
    local_98._56_8_ = (UPackage *)0x0;
    local_98._16_4_ = 0;
    local_98._20_4_ = 0;
    local_98._24_4_ = RF_Transient;
    local_98._40_8_ = (UObject *)0x0;
    local_98[0x20] = false;
    local_98._8_8_ = this;
    pUVar5 = (UDS_VM_QuestMainChapterInfo *)
             StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
    if (local_98._64_8_ != 0) {
      plVar8 = (longlong *)(local_98 + 0x50);
      if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
        plVar8 = (longlong *)local_98._104_8_;
      }
      (**(code **)(*plVar8 + 0x10))();
    }
    if (pUVar5 != (UDS_VM_QuestMainChapterInfo *)0x0) {
      *(undefined1 *)((longlong)&pUVar5->_padding_ + 4) = 0;
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar5 != (UDS_VM_QuestMainChapterInfo *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar5);
    }
    (this->VM_QuestMainChapterInfo).field0_0x0.DebugPtr = pUVar5;
    if (pUVar5 == (UDS_VM_QuestMainChapterInfo *)0x0) {
      return;
    }
  }
  pFVar6 = ::operator_new(0x28);
  pFVar9 = pFVar10;
  if (pFVar6 != (FDS_ViewModelContext *)0x0) {
    *(undefined8 *)&pFVar6->ViewModelTemplateKey = 0;
    *(undefined2 *)((longlong)&pFVar6[1]._padding_ + 1) = 0;
    *(undefined1 *)((longlong)&pFVar6[1]._padding_ + 3) = 0;
    *(undefined8 *)&pFVar6->DerivedStaticStruct = 0;
    (pFVar6->ViewModelName).ComparisonIndex = 0;
    (pFVar6->ViewModelName).Number = 0;
    pFVar6->_padding_ = (longlong)&___7FDS_ViewModelContext_QuestMainChapterInfo__6B_;
    *(undefined1 *)&pFVar6[1]._padding_ = 0;
    *(undefined4 *)((longlong)&pFVar6[1]._padding_ + 4) = 0;
    pFVar9 = pFVar6;
  }
  pFVar6 = ::operator_new(0x20);
  if (pFVar6 != (FDS_ViewModelContext *)0x0) {
    *(atomic<int> *)&pFVar6->DerivedStaticStruct = (atomic<int>)0x1;
    *(code **)&(pFVar6->ViewModelName).ComparisonIndex = ViewModelContextDeleter;
    pFVar6->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_UFDS_ViewModelContext_QuestMainChapterInfo__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
    ;
    ((atomic<int> *)&pFVar6->DerivedStaticStruct)[1] = (atomic<int>)0x1;
    *(FDS_ViewModelContext **)&pFVar6->ViewModelTemplateKey = pFVar9;
    pFVar10 = pFVar6;
  }
  if ((pFVar9 == (FDS_ViewModelContext *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pUVar7 = FDS_ViewModelContext_QuestMainChapterInfo::StaticStruct();
  *(UScriptStruct **)&pFVar9->DerivedStaticStruct = pUVar7;
  this_00 = UDS_ViewModelContextManager::GetInst();
  if (this_00 != (UDS_ViewModelContextManager *)0x0) {
    if (pFVar10 != (FDS_ViewModelContext *)0x0) {
      LOCK();
      *(atomic<int> *)&pFVar10->DerivedStaticStruct =
           (atomic<int>)((int)*(atomic<int> *)&pFVar10->DerivedStaticStruct + 1);
      UNLOCK();
    }
    local_c0.Object = pFVar9;
    local_c0.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar10;
    UDS_ViewModelContextManager::RegisterContext(this_00,&local_c0);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_c0.SharedReferenceCount.ReferenceController);
  }
  pFVar9->ViewModelTemplateKey = QuestMainChapterInfo;
  *(int *)((longlong)&pFVar9[1]._padding_ + 4) = this->SelectedChapterIndex;
  *(bool *)&pFVar9[1]._padding_ = this->IsShowPreviousStory;
  pUVar5 = (this->VM_QuestMainChapterInfo).field0_0x0.DebugPtr;
  if (pFVar10 != (FDS_ViewModelContext *)0x0) {
    LOCK();
    *(atomic<int> *)&pFVar10->DerivedStaticStruct =
         (atomic<int>)((int)*(atomic<int> *)&pFVar10->DerivedStaticStruct + 1);
    UNLOCK();
  }
  local_b0.Object = pFVar9;
  local_b0.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar10;
  UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)pUVar5,&local_b0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar10);
  return;
}

// UnbindModel @ 14bf852b0

void __thiscall UDS_VM_QuestMain::UnbindModel(UDS_VM_QuestMain *this)

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

// UpdateChapterListSlot @ 14bf86cf0

void __thiscall UDS_VM_QuestMain::UpdateChapterListSlot(UDS_VM_QuestMain *this)

{
  FScriptContainerElement *pFVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  UDS_UserObjectListItem *this_00;
  FDS_ViewModelContext *pFVar5;
  TReferenceControllerBase<1> *pTVar6;
  UScriptStruct *pUVar7;
  UDS_ViewModelContextManager *this_01;
  int iVar8;
  FDS_ViewModelContext *pFVar9;
  ForAnyElementType FVar10;
  undefined1 local_res8 [8];
  UDS_UserObjectListItem *local_res10;
  FName local_78;
  int local_70;
  TArray<FDS_QuestMainChapterInfoTableRow_const_*,TSizedDefaultAllocator<32>_> local_68;
  TSharedPtr<FDS_ViewModelContext,1> local_58;
  TSharedPtr<FDS_ViewModelContext,1> local_48;
  
  FDS_EntryBindingEventField::Reset(&this->EntryBindingEventField_ChapterList);
  FDS_QuestMainChapterInfoTableRow::GetAll(&local_68);
  iVar8 = local_68.ArrayNum;
  pFVar1 = local_68.AllocatorInstance.Data + (longlong)iVar8 * 8;
  FVar10.Data = local_68.AllocatorInstance.Data;
  while( true ) {
    pFVar9 = (FDS_ViewModelContext *)0x0;
    if (local_68.ArrayNum != iVar8) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FDS_QuestMainChapterInfoTableRow_const_*,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (FVar10.Data == pFVar1) break;
    lVar2 = *(longlong *)FVar10.Data;
    this_00 = NewObject<UDS_UserObjectListItem>((UObject *)this);
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
      if (this_00 == (UDS_UserObjectListItem *)0x0) goto LAB_14bf86f38;
    }
    else {
      if (this_00 == (UDS_UserObjectListItem *)0x0) goto LAB_14bf86f38;
      UE::GC::MarkAsReachable((UObject *)this_00);
    }
    pFVar5 = ::operator_new(0x28);
    if (pFVar5 != (FDS_ViewModelContext *)0x0) {
      *(undefined8 *)&pFVar5->ViewModelTemplateKey = 0;
      *(undefined2 *)((longlong)&pFVar5[1]._padding_ + 1) = 0;
      *(undefined1 *)((longlong)&pFVar5[1]._padding_ + 3) = 0;
      pFVar5->DerivedStaticStruct = (UStruct *)0x0;
      (pFVar5->ViewModelName).ComparisonIndex = 0;
      (pFVar5->ViewModelName).Number = 0;
      pFVar5->_padding_ = (longlong)&___7FDS_ViewModelContext_QuestMainChapterListSlot__6B_;
      *(undefined1 *)&pFVar5[1]._padding_ = 0;
      *(undefined4 *)((longlong)&pFVar5[1]._padding_ + 4) = 0;
      pFVar9 = pFVar5;
    }
    pTVar6 = ::operator_new(0x20);
    if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
      pTVar6 = (TReferenceControllerBase<1> *)0x0;
    }
    else {
      pTVar6->SharedReferenceCount = (atomic<int>)0x1;
      pTVar6[1]._padding_ = (longlong)ViewModelContextDeleter;
      pTVar6->_padding_ =
           (longlong)
           &
           ___7__TReferenceControllerWithDeleter_UFDS_ViewModelContext_QuestMainChapterListSlot__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
      ;
      pTVar6->WeakReferenceCount = (atomic<int>)0x1;
      *(FDS_ViewModelContext **)&pTVar6[1].SharedReferenceCount = pFVar9;
    }
    if ((pFVar9 == (FDS_ViewModelContext *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pUVar7 = FDS_ViewModelContext_QuestMainChapterListSlot::StaticStruct();
    pFVar9->DerivedStaticStruct = (UStruct *)pUVar7;
    this_01 = UDS_ViewModelContextManager::GetInst();
    if (this_01 != (UDS_ViewModelContextManager *)0x0) {
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_58.Object = pFVar9;
      local_58.SharedReferenceCount.ReferenceController = pTVar6;
      UDS_ViewModelContextManager::RegisterContext(this_01,&local_58);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_58.SharedReferenceCount.ReferenceController);
    }
    pFVar9->ViewModelTemplateKey = QuestMainChapterListSlot;
    *(undefined4 *)((longlong)&pFVar9[1]._padding_ + 4) = *(undefined4 *)(lVar2 + 8);
    *(bool *)&pFVar9[1]._padding_ = *(int *)(lVar2 + 8) == this->SelectedChapterIndex;
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_48.Object = pFVar9;
    local_48.SharedReferenceCount.ReferenceController = pTVar6;
    UDS_UserObjectListItem::AddContext(this_00,&local_48);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
    local_res10 = this_00;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this_00);
    }
    FDS_EntryBindingEventField::Add
              (&this->EntryBindingEventField_ChapterList,
               (TObjectPtr<UDS_UserObjectListItem>)&local_res10);
    FVar10.Data = FVar10.Data + 8;
  }
  local_70 = FFieldNotificationClassDescriptor::EntryBindingEventField_ChapterList.BitNumber;
  local_78 = FFieldNotificationClassDescriptor::EntryBindingEventField_ChapterList.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_78);
LAB_14bf86f38:
  if (local_68.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AllocatorInstance.Data);
  }
  return;
}

