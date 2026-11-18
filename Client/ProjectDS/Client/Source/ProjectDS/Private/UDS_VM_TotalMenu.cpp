// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 19

// SetUTCTime_WrapperImpl @ 14b6ed040

void __cdecl UDS_VM_TotalMenu::SetUTCTime_WrapperImpl(void *param_1,void *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined1 auStackX_8 [8];
  FName FStack_18;
  int iStack_10;
  
  plVar1 = *(longlong **)param_2;
  plVar2 = *(longlong **)((longlong)param_1 + 0x100);
  if (plVar2 != plVar1) {
    *(longlong **)((longlong)param_1 + 0x100) = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))(plVar1,auStackX_8);
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(undefined4 *)((longlong)param_1 + 0x108) = *(undefined4 *)((longlong)param_2 + 8);
  iStack_10 = FFieldNotificationClassDescriptor::UTCTime.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::UTCTime.FieldName;
  (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
            ((longlong *)((longlong)param_1 + 0x28),&FStack_18);
  return;
}

// SetLocalTime_WrapperImpl @ 14b6ed050

void __cdecl UDS_VM_TotalMenu::SetLocalTime_WrapperImpl(void *param_1,void *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined1 auStackX_8 [8];
  FName FStack_18;
  int iStack_10;
  
  plVar1 = *(longlong **)param_2;
  plVar2 = *(longlong **)((longlong)param_1 + 0x110);
  if (plVar2 != plVar1) {
    *(longlong **)((longlong)param_1 + 0x110) = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))(plVar1,auStackX_8);
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(undefined4 *)((longlong)param_1 + 0x118) = *(undefined4 *)((longlong)param_2 + 8);
  iStack_10 = FFieldNotificationClassDescriptor::LocalTime.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::LocalTime.FieldName;
  (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
            ((longlong *)((longlong)param_1 + 0x28),&FStack_18);
  return;
}

// StaticClass @ 14b6ed060

UClass * __cdecl UDS_VM_TotalMenu::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_TotalMenu.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_TotalMenu",
               &Z_Registration_Info_UClass_UDS_VM_TotalMenu.InnerSingleton,
               StaticRegisterNativesUDS_VM_TotalMenu,0x178,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_TotalMenu>,
               InternalVTableHelperCtorCaller<UDS_VM_TotalMenu>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_TotalMenu.InnerSingleton;
}

// UDS_VM_TotalMenu @ 14b6f25f0

UDS_VM_TotalMenu * __thiscall
UDS_VM_TotalMenu::UDS_VM_TotalMenu(UDS_VM_TotalMenu *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  (this->VM_ItemSetList).field0_0x0.DebugPtr = (UDS_VM_TotalMenu_ItemSetList *)0x0;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_TotalMenu__6B_;
  (this->EntryBindingEventField_FunctionList).UserObjectList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->EntryBindingEventField_FunctionList).UserObjectList.ArrayNum = 0;
  (this->EntryBindingEventField_FunctionList).UserObjectList.ArrayMax = 0;
  (this->OpenAnimationEventField).AnimationName.ComparisonIndex = 0;
  (this->OpenAnimationEventField).AnimationName.Number = 0;
  (this->OpenAnimationEventField).AnimationPlayTime = 0.0;
  (this->OpenAnimationEventField).AnimationEventType = None;
  (this->OpenAnimationEventField).AnimationStateType = None;
  (this->OpenAnimationEventField).NumberOfLoops = 1;
  *(undefined8 *)&(this->OpenAnimationEventField).Delegate_AnimationFinish = 0;
  *(undefined8 *)&(this->OpenAnimationEventField).Delegate_AnimationFinish.field_0x8 = 0;
  *(undefined4 *)&(this->OpenAnimationEventField).Delegate_AnimationFinish.field_0x10 = 0;
  *(undefined8 *)&(this->OpenAnimationEventField).Delegate_ValidAnimation = 0;
  *(undefined8 *)&(this->OpenAnimationEventField).Delegate_ValidAnimation.field_0x8 = 0;
  *(undefined4 *)&(this->OpenAnimationEventField).Delegate_ValidAnimation.field_0x10 = 0;
  FText::FText(&this->UTCTime);
  FText::FText(&this->LocalTime);
  (this->FixedText_Title).StringTableType = StringUi;
  (this->FixedText_Title).StringTableID = 0x13882;
  (this->FixedText_Title).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_Title).StringEnumTableNameID.Number = 0;
  (this->FixedText_Title).DateTime.Ticks = 0;
  (this->FixedText_Title).TimeSpan.Ticks = 0;
  (this->FixedText_Title).TimeExpressionType = None;
  (this->FixedText_Title).IsExpression = false;
  (this->FixedText_Title).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_Title).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_Title).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_Title).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_Title).FormatArgs.ArrayNum = 0;
  (this->FixedText_Title).FormatArgs.ArrayMax = 0;
  ::FName::FName(&this->OpenAnimationName,"Open_Ani");
  return this;
}

// UDS_VM_TotalMenu @ 14b6f2710

UDS_VM_TotalMenu * __thiscall
UDS_VM_TotalMenu::UDS_VM_TotalMenu(UDS_VM_TotalMenu *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  (this->VM_ItemSetList).field0_0x0.DebugPtr = (UDS_VM_TotalMenu_ItemSetList *)0x0;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_TotalMenu__6B_;
  (this->EntryBindingEventField_FunctionList).UserObjectList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->EntryBindingEventField_FunctionList).UserObjectList.ArrayNum = 0;
  (this->EntryBindingEventField_FunctionList).UserObjectList.ArrayMax = 0;
  (this->OpenAnimationEventField).AnimationName.ComparisonIndex = 0;
  (this->OpenAnimationEventField).AnimationName.Number = 0;
  (this->OpenAnimationEventField).AnimationPlayTime = 0.0;
  (this->OpenAnimationEventField).AnimationEventType = None;
  (this->OpenAnimationEventField).AnimationStateType = None;
  (this->OpenAnimationEventField).NumberOfLoops = 1;
  *(undefined8 *)&(this->OpenAnimationEventField).Delegate_AnimationFinish = 0;
  *(undefined8 *)&(this->OpenAnimationEventField).Delegate_AnimationFinish.field_0x8 = 0;
  *(undefined4 *)&(this->OpenAnimationEventField).Delegate_AnimationFinish.field_0x10 = 0;
  *(undefined8 *)&(this->OpenAnimationEventField).Delegate_ValidAnimation = 0;
  *(undefined8 *)&(this->OpenAnimationEventField).Delegate_ValidAnimation.field_0x8 = 0;
  *(undefined4 *)&(this->OpenAnimationEventField).Delegate_ValidAnimation.field_0x10 = 0;
  FText::FText(&this->UTCTime);
  FText::FText(&this->LocalTime);
  (this->FixedText_Title).StringTableType = StringUi;
  (this->FixedText_Title).StringTableID = 0x13882;
  (this->FixedText_Title).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_Title).StringEnumTableNameID.Number = 0;
  (this->FixedText_Title).DateTime.Ticks = 0;
  (this->FixedText_Title).TimeSpan.Ticks = 0;
  (this->FixedText_Title).TimeExpressionType = None;
  (this->FixedText_Title).IsExpression = false;
  (this->FixedText_Title).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_Title).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_Title).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_Title).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_Title).FormatArgs.ArrayNum = 0;
  (this->FixedText_Title).FormatArgs.ArrayMax = 0;
  ::FName::FName(&this->OpenAnimationName,"Open_Ani");
  return this;
}

// ~UDS_VM_TotalMenu @ 14b6f4330

void __thiscall UDS_VM_TotalMenu::~UDS_VM_TotalMenu(UDS_VM_TotalMenu *this)

{
  FScriptContainerElement *pFVar1;
  ITextData *pIVar2;
  void *pvVar3;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_TotalMenu__6B_;
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->FixedText_Title).FormatArgs.AllocatorInstance.Data,
             (this->FixedText_Title).FormatArgs.ArrayNum);
  pFVar1 = (this->FixedText_Title).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FixedText_Title).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pIVar2 = (this->LocalTime).TextData.Reference;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 0x10))();
  }
  pIVar2 = (this->UTCTime).TextData.Reference;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 0x10))();
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(this->OpenAnimationEventField).Delegate_ValidAnimation);
  pvVar3 = *(void **)&(this->OpenAnimationEventField).Delegate_ValidAnimation.field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)
             &(this->OpenAnimationEventField).Delegate_ValidAnimation);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(this->OpenAnimationEventField).Delegate_AnimationFinish);
  pvVar3 = *(void **)&(this->OpenAnimationEventField).Delegate_AnimationFinish.field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)
             &(this->OpenAnimationEventField).Delegate_AnimationFinish);
  pFVar1 = (this->EntryBindingEventField_FunctionList).UserObjectList.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b6f6d20

IClassDescriptor * __thiscall
UDS_VM_TotalMenu::GetFieldNotificationDescriptor(UDS_VM_TotalMenu *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_TotalMenu::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b6f7720

UClass * __cdecl UDS_VM_TotalMenu::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_TotalMenu.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_TotalMenu",
               &Z_Registration_Info_UClass_UDS_VM_TotalMenu.InnerSingleton,
               StaticRegisterNativesUDS_VM_TotalMenu,0x178,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_TotalMenu>,
               InternalVTableHelperCtorCaller<UDS_VM_TotalMenu>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_TotalMenu.InnerSingleton;
}

// GetTickableTickType @ 14b6f8330

ETickableTickType __thiscall UDS_VM_TotalMenu::GetTickableTickType(UDS_VM_TotalMenu *this)

{
  return Conditional;
}

// IsUpdate @ 14b6f8370

bool __thiscall UDS_VM_TotalMenu::IsUpdate(UDS_VM_TotalMenu *this)

{
  return true;
}

// StaticRegisterNativesUDS_VM_TotalMenu @ 14b6f8440

void __cdecl UDS_VM_TotalMenu::StaticRegisterNativesUDS_VM_TotalMenu(void)

{
  return;
}

// InitViewModel @ 14bf5ba40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall UDS_VM_TotalMenu::InitViewModel(UDS_VM_TotalMenu *this)

{
  FName FVar1;
  FName FVar2;
  UClass *pUVar3;
  UClass *pUVar4;
  UDS_VM_TotalMenu_ItemSetList *pUVar5;
  longlong *plVar6;
  undefined1 auStack_c8 [32];
  FName local_a8;
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_c8;
  if ((this->VM_ItemSetList).field0_0x0.DebugPtr == (UDS_VM_TotalMenu_ItemSetList *)0x0) {
    local_a8.ComparisonIndex.Value = 0;
    local_a8.Number = 0;
    pUVar3 = Z_Construct_UClass_UDS_VM_TotalMenu_ItemSetList_NoRegister();
    FVar1 = local_a8;
    if (local_a8 == (FName)0x0) {
      FObjectInitializer::AssertIfInConstructor
                ((UObject *)this,
                 L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                );
    }
    pUVar4 = Z_Construct_UClass_UDS_VM_TotalMenu_ItemSetList_NoRegister();
    CheckIsClassChildOf_Internal(pUVar4,pUVar3);
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_98,pUVar3);
    FVar2 = local_a8;
    local_98._48_8_ = (FObjectInstancingGraph *)0x0;
    local_98._56_8_ = (UPackage *)0x0;
    local_a8.ComparisonIndex = FVar1.ComparisonIndex.Value;
    local_a8.Number = FVar1.Number;
    local_98._16_4_ = local_a8.ComparisonIndex.Value;
    local_98._20_4_ = local_a8.Number;
    local_98._24_4_ = RF_Transient;
    local_98._40_8_ = (UObject *)0x0;
    local_98[0x20] = false;
    local_a8 = FVar2;
    local_98._8_8_ = this;
    pUVar5 = (UDS_VM_TotalMenu_ItemSetList *)
             StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
    if (local_98._64_8_ != 0) {
      plVar6 = (longlong *)(local_98 + 0x50);
      if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
        plVar6 = (longlong *)local_98._104_8_;
      }
      (**(code **)(*plVar6 + 0x10))();
    }
    if (pUVar5 != (UDS_VM_TotalMenu_ItemSetList *)0x0) {
      *(undefined1 *)((longlong)&pUVar5->_padding_ + 4) = 0;
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar5 != (UDS_VM_TotalMenu_ItemSetList *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar5);
    }
    (this->VM_ItemSetList).field0_0x0.DebugPtr = pUVar5;
  }
  return;
}

// OnSetViewModel @ 14bf6e4b0

void __thiscall
UDS_VM_TotalMenu::OnSetViewModel(UDS_VM_TotalMenu *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  UDS_VM_TotalMenu_ItemSetList *this_00;
  code *pcVar2;
  bool bVar3;
  FDS_ViewModelContext *pFVar4;
  UScriptStruct *pUVar5;
  UDS_ViewModelContextManager *this_01;
  FDS_ViewModelContext *pFVar6;
  FDS_ViewModelContext *pFVar7;
  FName local_38;
  int local_30;
  TSharedPtr<FDS_ViewModelContext,1> local_28;
  TSharedPtr<FDS_ViewModelContext,1> local_18;
  
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  if ((this->VM_ItemSetList).field0_0x0.DebugPtr != (UDS_VM_TotalMenu_ItemSetList *)0x0) {
    pFVar4 = ::operator_new(0x20);
    pFVar6 = (FDS_ViewModelContext *)0x0;
    pFVar7 = pFVar6;
    if (pFVar4 != (FDS_ViewModelContext *)0x0) {
      *(undefined8 *)&pFVar4->ViewModelTemplateKey = 0;
      *(undefined8 *)&pFVar4->DerivedStaticStruct = 0;
      (pFVar4->ViewModelName).ComparisonIndex = 0;
      (pFVar4->ViewModelName).Number = 0;
      pFVar4->_padding_ = (longlong)&___7FDS_ViewModelContext_TotalMenuItemSetList__6B_;
      pFVar7 = pFVar4;
    }
    pFVar4 = ::operator_new(0x20);
    if (pFVar4 != (FDS_ViewModelContext *)0x0) {
      *(atomic<int> *)&pFVar4->DerivedStaticStruct = (atomic<int>)0x1;
      *(code **)&(pFVar4->ViewModelName).ComparisonIndex = ViewModelContextDeleter;
      pFVar4->_padding_ =
           (longlong)
           &
           ___7__TReferenceControllerWithDeleter_UFDS_ViewModelContext_TotalMenuItemSetList__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
      ;
      ((atomic<int> *)&pFVar4->DerivedStaticStruct)[1] = (atomic<int>)0x1;
      *(FDS_ViewModelContext **)&pFVar4->ViewModelTemplateKey = pFVar7;
      pFVar6 = pFVar4;
    }
    if ((pFVar7 == (FDS_ViewModelContext *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pUVar5 = FDS_ViewModelContext_TotalMenuItemSetList::StaticStruct();
    *(UScriptStruct **)&pFVar7->DerivedStaticStruct = pUVar5;
    this_01 = UDS_ViewModelContextManager::GetInst();
    if (this_01 != (UDS_ViewModelContextManager *)0x0) {
      if (pFVar6 != (FDS_ViewModelContext *)0x0) {
        LOCK();
        *(atomic<int> *)&pFVar6->DerivedStaticStruct =
             (atomic<int>)((int)*(atomic<int> *)&pFVar6->DerivedStaticStruct + 1);
        UNLOCK();
      }
      local_28.Object = pFVar7;
      local_28.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar6;
      UDS_ViewModelContextManager::RegisterContext(this_01,&local_28);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_28.SharedReferenceCount.ReferenceController);
    }
    pFVar7->ViewModelTemplateKey = TotalMenu_ItemSetList;
    this_00 = (this->VM_ItemSetList).field0_0x0.DebugPtr;
    if (pFVar6 != (FDS_ViewModelContext *)0x0) {
      LOCK();
      *(atomic<int> *)&pFVar6->DerivedStaticStruct =
           (atomic<int>)((int)*(atomic<int> *)&pFVar6->DerivedStaticStruct + 1);
      UNLOCK();
    }
    local_18.Object = pFVar7;
    local_18.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar6;
    UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)this_00,&local_18);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pFVar6);
  }
  SetFunctionList(this);
  (this->OpenAnimationEventField).AnimationName = this->OpenAnimationName;
  (this->OpenAnimationEventField).AnimationEventType = PlayForward;
  local_30 = FFieldNotificationClassDescriptor::OpenAnimationEventField.BitNumber;
  local_38 = FFieldNotificationClassDescriptor::OpenAnimationEventField.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_38);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// OnUpdate @ 14bf72540

void __thiscall UDS_VM_TotalMenu::OnUpdate(UDS_VM_TotalMenu *this,float param_1)

{
  ITextData *pIVar1;
  ITextData *pIVar2;
  FText *pFVar3;
  undefined1 auStackX_8 [8];
  FDateTime FStackX_10;
  FDateTime FStackX_18;
  FName FStack_58;
  int iStack_50;
  FString FStack_48;
  FString FStack_38;
  FText FStack_28;
  
  UDS_TimeUtilManager::GetCurrentServerDateTime();
  UDS_TimeUtilManager::ConvertStringFromDateTime(&FStack_38,&FStackX_10,UTCDateHourMin,false);
  pFVar3 = FText::FromString(&FStack_28,&FStack_38);
  pIVar1 = (this->UTCTime).TextData.Reference;
  pIVar2 = (pFVar3->TextData).Reference;
  if (pIVar1 != pIVar2) {
    (this->UTCTime).TextData.Reference = pIVar2;
    if (pIVar2 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar2 + 8))(pIVar2,auStackX_8);
    }
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 0x10))(pIVar1);
    }
  }
  (this->UTCTime).Flags = pFVar3->Flags;
  iStack_50 = FFieldNotificationClassDescriptor::UTCTime.BitNumber;
  FStack_58 = FFieldNotificationClassDescriptor::UTCTime.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&FStack_58);
  if (FStack_28.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*FStack_28.TextData.Reference + 0x10))();
  }
  UDS_TimeUtilManager::GetCurrentGMTDateTime();
  UDS_TimeUtilManager::ConvertStringFromDateTime(&FStack_48,&FStackX_18,DateHourMin,false);
  pFVar3 = FText::FromString(&FStack_28,&FStack_48);
  pIVar1 = (this->LocalTime).TextData.Reference;
  pIVar2 = (pFVar3->TextData).Reference;
  if (pIVar1 != pIVar2) {
    (this->LocalTime).TextData.Reference = pIVar2;
    if (pIVar2 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar2 + 8))(pIVar2,auStackX_8);
    }
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 0x10))(pIVar1);
    }
  }
  (this->LocalTime).Flags = pFVar3->Flags;
  iStack_50 = FFieldNotificationClassDescriptor::LocalTime.BitNumber;
  FStack_58 = FFieldNotificationClassDescriptor::LocalTime.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&FStack_58);
  if (FStack_28.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*FStack_28.TextData.Reference + 0x10))();
  }
  if (FStack_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_48.Data.AllocatorInstance.Data);
  }
  if (FStack_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_38.Data.AllocatorInstance.Data);
  }
  return;
}

// SetFunctionList @ 14bf7abd0

void __thiscall UDS_VM_TotalMenu::SetFunctionList(UDS_VM_TotalMenu *this)

{
  FDS_EntryBindingEventField *this_00;
  code *pcVar1;
  bool bVar2;
  int iVar3;
  UObject *pUVar4;
  UDS_UserObjectListItem *pUVar5;
  FDS_ViewModelContext *pFVar6;
  TReferenceControllerBase<1> *pTVar7;
  UScriptStruct *pUVar8;
  UDS_ViewModelContextManager *pUVar9;
  FDS_ContentsTotalMenuTableRow *pFVar10;
  int iVar11;
  ForAnyElementType FVar12;
  FScriptContainerElement *pFVar13;
  ulonglong uVar14;
  int iVar15;
  FIdentityFunctor local_res8;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  ForAnyElementType local_d8;
  undefined8 local_d0;
  uint local_c8;
  TArray<FDS_ContentsTotalMenuTableRow_const_*,TSizedDefaultAllocator<32>_> local_c0;
  UDS_UserObjectListItem *local_b0;
  UDS_UserObjectListItem *local_a8;
  FScriptContainerElement *local_a0;
  FName local_98;
  int local_90;
  TSharedPtr<FDS_ViewModelContext,1> local_88;
  TSharedPtr<FDS_ViewModelContext,1> local_78;
  TSharedPtr<FDS_ViewModelContext,1> local_68;
  TSharedPtr<FDS_ViewModelContext,1> local_58;
  
  this_00 = &this->EntryBindingEventField_FunctionList;
  FDS_EntryBindingEventField::Reset(this_00);
  FDS_ContentsTotalMenuTableRow::GetAll(&local_c0);
  iVar15 = local_c0.ArrayNum;
  iVar11 = 0;
  local_d8.Data = (FScriptContainerElement *)0x0;
  local_d0 = 0;
  pFVar13 = local_c0.AllocatorInstance.Data + (longlong)local_c0.ArrayNum * 8;
  FVar12.Data = local_c0.AllocatorInstance.Data;
  while( true ) {
    iVar3 = iVar11;
    if (local_c0.ArrayNum != iVar15) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<FDS_ContentsTotalMenuTableRow_const_*,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res10);
      iVar3 = (uint)local_d0;
    }
    if (FVar12.Data == pFVar13) break;
    iVar11 = iVar3;
    if ((*(longlong *)FVar12.Data != 0) && (*(char *)(*(longlong *)FVar12.Data + 0x20) == '\x03')) {
      if (iVar3 == local_d0._4_4_) {
        iVar3 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&local_d8,(int *)((longlong)&local_d0 + 4));
      }
      iVar11 = iVar3 + 1;
      local_d0 = CONCAT44(local_d0._4_4_,iVar11);
      *(longlong *)(local_d8.Data + (longlong)iVar3 * 8) = *(longlong *)FVar12.Data;
    }
    FVar12.Data = FVar12.Data + 8;
  }
  if (local_c0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c0.AllocatorInstance.Data);
    iVar3 = (uint)local_d0;
  }
  local_res8 = SUB81(this,0);
  AlgoImpl::
  StableSortInternal<FDS_ContentsTotalMenuTableRow_const_*,FIdentityFunctor,TDereferenceWrapper<FDS_ContentsTotalMenuTableRow_const_*,_UDS_VM_TotalMenu::SetFunctionList_::__l2::<lambda_1>_>_>
            ((FDS_ContentsTotalMenuTableRow **)local_d8.Data,iVar3,local_res8,
             (<lambda_1> *)local_res20);
  uVar14 = (ulonglong)(int)(uint)local_d0;
  local_c8 = (uint)local_d0;
  if (0 < (int)(uint)local_d0) {
    pFVar13 = local_d8.Data + uVar14 * 8;
    iVar15 = (*(FDS_ContentsTotalMenuTableRow **)local_d8.Data)->Order;
    FVar12.Data = local_d8.Data;
    local_a0 = pFVar13;
    while( true ) {
      if ((uint)local_d0 != (int)uVar14) {
        local_res18[0] = 0;
        `TCheckedPointerIterator<FDS_ContentsTotalMenuTableRow_const_*,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res18);
      }
      if (FVar12.Data == pFVar13) break;
      pFVar10 = *(FDS_ContentsTotalMenuTableRow **)FVar12.Data;
      if (pFVar10 != (FDS_ContentsTotalMenuTableRow *)0x0) {
        iVar15 = iVar15 + 1;
        if (iVar15 < pFVar10->Order) {
          do {
            pUVar4 = GetTransientPackageAsObject();
            pUVar5 = NewObject<UDS_UserObjectListItem>(pUVar4);
            pFVar6 = ::operator_new(0x28);
            if (pFVar6 == (FDS_ViewModelContext *)0x0) {
              pFVar6 = (FDS_ViewModelContext *)0x0;
            }
            else {
              *(undefined8 *)&pFVar6->field_0x1c = 0;
              *(undefined4 *)((longlong)&pFVar6[1]._padding_ + 4) = 0;
              pFVar6->DerivedStaticStruct = (UStruct *)0x0;
              (pFVar6->ViewModelName).ComparisonIndex = 0;
              (pFVar6->ViewModelName).Number = 0;
              pFVar6->ViewModelTemplateKey = None;
              pFVar6->_padding_ = (longlong)&___7FDS_ViewModelContext_TotalMenuItem__6B_;
            }
            pTVar7 = ::operator_new(0x20);
            if (pTVar7 == (TReferenceControllerBase<1> *)0x0) {
              pTVar7 = (TReferenceControllerBase<1> *)0x0;
            }
            else {
              pTVar7->SharedReferenceCount = (atomic<int>)0x1;
              pTVar7[1]._padding_ = (longlong)ViewModelContextDeleter;
              pTVar7->_padding_ =
                   (longlong)
                   &
                   ___7__TReferenceControllerWithDeleter_UFDS_ViewModelContext_TotalMenuItem__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
              ;
              pTVar7->WeakReferenceCount = (atomic<int>)0x1;
              *(FDS_ViewModelContext **)&pTVar7[1].SharedReferenceCount = pFVar6;
            }
            if ((pFVar6 == (FDS_ViewModelContext *)0x0) &&
               (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x458,L""), bVar2)) {
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
            pUVar8 = FDS_ViewModelContext_TotalMenuItem::StaticStruct();
            pFVar6->DerivedStaticStruct = (UStruct *)pUVar8;
            pUVar9 = UDS_ViewModelContextManager::GetInst();
            if (pUVar9 != (UDS_ViewModelContextManager *)0x0) {
              if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
                LOCK();
                pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
                UNLOCK();
              }
              local_88.Object = pFVar6;
              local_88.SharedReferenceCount.ReferenceController = pTVar7;
              UDS_ViewModelContextManager::RegisterContext(pUVar9,&local_88);
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (local_88.SharedReferenceCount.ReferenceController);
            }
            pFVar6->ViewModelTemplateKey = TotalMenu_Item;
            *(undefined4 *)&pFVar6[1]._padding_ = 0;
            if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
              UNLOCK();
            }
            local_68.Object = pFVar6;
            local_68.SharedReferenceCount.ReferenceController = pTVar7;
            UDS_UserObjectListItem::AddContext(pUVar5,&local_68);
            local_b0 = pUVar5;
            if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
               (pUVar5 != (UDS_UserObjectListItem *)0x0)) {
              UE::GC::MarkAsReachable((UObject *)pUVar5);
            }
            FDS_EntryBindingEventField::Add(this_00,(TObjectPtr<UDS_UserObjectListItem>)&local_b0);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTVar7);
            pFVar10 = *(FDS_ContentsTotalMenuTableRow **)FVar12.Data;
            iVar15 = iVar15 + 1;
          } while (iVar15 < pFVar10->Order);
          uVar14 = (ulonglong)local_c8;
        }
        iVar15 = pFVar10->Order;
        pUVar4 = GetTransientPackageAsObject();
        pUVar5 = NewObject<UDS_UserObjectListItem>(pUVar4);
        pFVar6 = ::operator_new(0x28);
        if (pFVar6 == (FDS_ViewModelContext *)0x0) {
          pFVar6 = (FDS_ViewModelContext *)0x0;
        }
        else {
          *(undefined8 *)&pFVar6->field_0x1c = 0;
          *(undefined4 *)((longlong)&pFVar6[1]._padding_ + 4) = 0;
          pFVar6->DerivedStaticStruct = (UStruct *)0x0;
          (pFVar6->ViewModelName).ComparisonIndex = 0;
          (pFVar6->ViewModelName).Number = 0;
          pFVar6->ViewModelTemplateKey = None;
          pFVar6->_padding_ = (longlong)&___7FDS_ViewModelContext_TotalMenuItem__6B_;
        }
        pTVar7 = ::operator_new(0x20);
        if (pTVar7 == (TReferenceControllerBase<1> *)0x0) {
          pTVar7 = (TReferenceControllerBase<1> *)0x0;
        }
        else {
          pTVar7->SharedReferenceCount = (atomic<int>)0x1;
          pTVar7[1]._padding_ = (longlong)ViewModelContextDeleter;
          pTVar7->_padding_ =
               (longlong)
               &
               ___7__TReferenceControllerWithDeleter_UFDS_ViewModelContext_TotalMenuItem__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
          ;
          pTVar7->WeakReferenceCount = (atomic<int>)0x1;
          *(FDS_ViewModelContext **)&pTVar7[1].SharedReferenceCount = pFVar6;
        }
        if ((pFVar6 == (FDS_ViewModelContext *)0x0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        pUVar8 = FDS_ViewModelContext_TotalMenuItem::StaticStruct();
        pFVar6->DerivedStaticStruct = (UStruct *)pUVar8;
        pUVar9 = UDS_ViewModelContextManager::GetInst();
        if (pUVar9 != (UDS_ViewModelContextManager *)0x0) {
          if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
            UNLOCK();
          }
          local_78.Object = pFVar6;
          local_78.SharedReferenceCount.ReferenceController = pTVar7;
          UDS_ViewModelContextManager::RegisterContext(pUVar9,&local_78);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_78.SharedReferenceCount.ReferenceController);
        }
        pFVar6->ViewModelTemplateKey = TotalMenu_Item;
        *(EDS_TotalMenuId *)&pFVar6[1]._padding_ =
             (*(FDS_ContentsTotalMenuTableRow **)FVar12.Data)->ID;
        if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_58.Object = pFVar6;
        local_58.SharedReferenceCount.ReferenceController = pTVar7;
        UDS_UserObjectListItem::AddContext(pUVar5,&local_58);
        local_a8 = pUVar5;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (pUVar5 != (UDS_UserObjectListItem *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)pUVar5);
        }
        FDS_EntryBindingEventField::Add(this_00,(TObjectPtr<UDS_UserObjectListItem>)&local_a8);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
        pFVar13 = local_a0;
      }
      FVar12.Data = FVar12.Data + 8;
    }
    local_90 = FFieldNotificationClassDescriptor::EntryBindingEventField_FunctionList.BitNumber;
    local_98 = FFieldNotificationClassDescriptor::EntryBindingEventField_FunctionList.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_98);
  }
  if (local_d8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.Data);
  }
  return;
}

// SetLocalTime @ 14bf7b9b0

void __thiscall UDS_VM_TotalMenu::SetLocalTime(UDS_VM_TotalMenu *this,FText *param_1)

{
  ITextData *pIVar1;
  ITextData *pIVar2;
  undefined1 local_res8 [8];
  FName local_18;
  int local_10;
  
  pIVar1 = (param_1->TextData).Reference;
  pIVar2 = (this->LocalTime).TextData.Reference;
  if (pIVar2 != pIVar1) {
    (this->LocalTime).TextData.Reference = pIVar1;
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
    }
    if (pIVar2 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
    }
  }
  (this->LocalTime).Flags = param_1->Flags;
  local_10 = FFieldNotificationClassDescriptor::LocalTime.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::LocalTime.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// SetOpenAnimation @ 14bf7c830

void __thiscall UDS_VM_TotalMenu::SetOpenAnimation(UDS_VM_TotalMenu *this)

{
  FName local_18;
  int local_10;
  
  (this->OpenAnimationEventField).AnimationName = this->OpenAnimationName;
  (this->OpenAnimationEventField).AnimationEventType = PlayForward;
  local_10 = FFieldNotificationClassDescriptor::OpenAnimationEventField.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::OpenAnimationEventField.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// SetTimeText @ 14bf7e840

void __thiscall UDS_VM_TotalMenu::SetTimeText(UDS_VM_TotalMenu *this)

{
  ITextData *pIVar1;
  ITextData *pIVar2;
  FText *pFVar3;
  undefined1 local_res8 [8];
  FDateTime local_res10;
  FDateTime local_res18;
  FName local_58;
  int local_50;
  FString local_48;
  FString local_38;
  FText local_28;
  
  UDS_TimeUtilManager::GetCurrentServerDateTime();
  UDS_TimeUtilManager::ConvertStringFromDateTime(&local_38,&local_res10,UTCDateHourMin,false);
  pFVar3 = FText::FromString(&local_28,&local_38);
  pIVar1 = (this->UTCTime).TextData.Reference;
  pIVar2 = (pFVar3->TextData).Reference;
  if (pIVar1 != pIVar2) {
    (this->UTCTime).TextData.Reference = pIVar2;
    if (pIVar2 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar2 + 8))(pIVar2,local_res8);
    }
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 0x10))(pIVar1);
    }
  }
  (this->UTCTime).Flags = pFVar3->Flags;
  local_50 = FFieldNotificationClassDescriptor::UTCTime.BitNumber;
  local_58 = FFieldNotificationClassDescriptor::UTCTime.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_58);
  if (local_28.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
  }
  UDS_TimeUtilManager::GetCurrentGMTDateTime();
  UDS_TimeUtilManager::ConvertStringFromDateTime(&local_48,&local_res18,DateHourMin,false);
  pFVar3 = FText::FromString(&local_28,&local_48);
  pIVar1 = (this->LocalTime).TextData.Reference;
  pIVar2 = (pFVar3->TextData).Reference;
  if (pIVar1 != pIVar2) {
    (this->LocalTime).TextData.Reference = pIVar2;
    if (pIVar2 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar2 + 8))(pIVar2,local_res8);
    }
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 0x10))(pIVar1);
    }
  }
  (this->LocalTime).Flags = pFVar3->Flags;
  local_50 = FFieldNotificationClassDescriptor::LocalTime.BitNumber;
  local_58 = FFieldNotificationClassDescriptor::LocalTime.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_58);
  if (local_28.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return;
}

// SetUTCTime @ 14bf7ee60

void __thiscall UDS_VM_TotalMenu::SetUTCTime(UDS_VM_TotalMenu *this,FText *param_1)

{
  ITextData *pIVar1;
  ITextData *pIVar2;
  undefined1 local_res8 [8];
  FName local_18;
  int local_10;
  
  pIVar1 = (param_1->TextData).Reference;
  pIVar2 = (this->UTCTime).TextData.Reference;
  if (pIVar2 != pIVar1) {
    (this->UTCTime).TextData.Reference = pIVar1;
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
    }
    if (pIVar2 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
    }
  }
  (this->UTCTime).Flags = param_1->Flags;
  local_10 = FFieldNotificationClassDescriptor::UTCTime.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::UTCTime.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

