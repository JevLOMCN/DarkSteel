// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UMG
// Functions: 51

// GetCheckedState_WrapperImpl @ 14695c220

void __cdecl UCheckBox::GetCheckedState_WrapperImpl(void *param_1,void *param_2)

{
  ECheckBoxState EVar1;
  
  if (*(SCheckBox **)((longlong)param_1 + 0xb60) != (SCheckBox *)0x0) {
    EVar1 = SCheckBox::GetCheckedState(*(SCheckBox **)((longlong)param_1 + 0xb60));
    *(ECheckBoxState *)param_2 = EVar1;
    return;
  }
  *(undefined1 *)param_2 = *(undefined1 *)((longlong)param_1 + 0x1c8);
  return;
}

// SetCheckedState_WrapperImpl @ 14695c2a0

void __cdecl UCheckBox::SetCheckedState_WrapperImpl(void *param_1,void *param_2)

{
  SetCheckedState(param_1,*(ECheckBoxState *)param_2);
  return;
}

// GetWidgetStyle_WrapperImpl @ 14695c2f0

void __cdecl UCheckBox::GetWidgetStyle_WrapperImpl(void *param_1,void *param_2)

{
  FCheckBoxStyle *pFVar1;
  FCheckBoxStyle local_958;
  
  pFVar1 = FCheckBoxStyle::FCheckBoxStyle(&local_958,(FCheckBoxStyle *)((longlong)param_1 + 0x1f0));
  FCheckBoxStyle::operator=(param_2,pFVar1);
  FCheckBoxStyle::~FCheckBoxStyle(&local_958);
  return;
}

// SetWidgetStyle_WrapperImpl @ 14695c340

void __cdecl UCheckBox::SetWidgetStyle_WrapperImpl(void *param_1,void *param_2)

{
  FCheckBoxStyle::operator=((FCheckBoxStyle *)((longlong)param_1 + 0x1f0),param_2);
  if (*(SCheckBox **)((longlong)param_1 + 0xb60) != (SCheckBox *)0x0) {
    SCheckBox::SetStyle(*(SCheckBox **)((longlong)param_1 + 0xb60),
                        (FCheckBoxStyle *)((longlong)param_1 + 0x1f0));
  }
  return;
}

// GetClickMethod_WrapperImpl @ 14695c450

void __cdecl UCheckBox::GetClickMethod_WrapperImpl(void *param_1,void *param_2)

{
  *(undefined1 *)param_2 = *(undefined1 *)((longlong)param_1 + 0xb41);
  return;
}

// SetClickMethod_WrapperImpl @ 14695c460

void __cdecl UCheckBox::SetClickMethod_WrapperImpl(void *param_1,void *param_2)

{
  byte bVar1;
  
  bVar1 = *(byte *)param_2;
  *(byte *)((longlong)param_1 + 0xb41) = bVar1;
  if (*(SCheckBox **)((longlong)param_1 + 0xb60) != (SCheckBox *)0x0) {
    SCheckBox::SetClickMethod(*(SCheckBox **)((longlong)param_1 + 0xb60),(uint)bVar1);
    return;
  }
  return;
}

// GetTouchMethod_WrapperImpl @ 14695c490

void __cdecl UCheckBox::GetTouchMethod_WrapperImpl(void *param_1,void *param_2)

{
  *(undefined1 *)param_2 = *(undefined1 *)((longlong)param_1 + 0xb42);
  return;
}

// SetTouchMethod_WrapperImpl @ 14695c4a0

void __cdecl UCheckBox::SetTouchMethod_WrapperImpl(void *param_1,void *param_2)

{
  byte bVar1;
  
  bVar1 = *(byte *)param_2;
  *(byte *)((longlong)param_1 + 0xb42) = bVar1;
  if (*(SCheckBox **)((longlong)param_1 + 0xb60) != (SCheckBox *)0x0) {
    SCheckBox::SetTouchMethod(*(SCheckBox **)((longlong)param_1 + 0xb60),(uint)bVar1);
    return;
  }
  return;
}

// GetPressMethod_WrapperImpl @ 14695c4d0

void __cdecl UCheckBox::GetPressMethod_WrapperImpl(void *param_1,void *param_2)

{
  *(undefined1 *)param_2 = *(undefined1 *)((longlong)param_1 + 0xb43);
  return;
}

// SetPressMethod_WrapperImpl @ 14695c4e0

void __cdecl UCheckBox::SetPressMethod_WrapperImpl(void *param_1,void *param_2)

{
  byte bVar1;
  
  bVar1 = *(byte *)param_2;
  *(byte *)((longlong)param_1 + 0xb43) = bVar1;
  if (*(SCheckBox **)((longlong)param_1 + 0xb60) != (SCheckBox *)0x0) {
    SCheckBox::SetPressMethod(*(SCheckBox **)((longlong)param_1 + 0xb60),(uint)bVar1);
    return;
  }
  return;
}

// GetIsFocusable_WrapperImpl @ 14695c510

void __cdecl UCheckBox::GetIsFocusable_WrapperImpl(void *param_1,void *param_2)

{
  *(undefined1 *)param_2 = *(undefined1 *)((longlong)param_1 + 0xb44);
  return;
}

// StaticClass @ 14695c520

UClass * __cdecl UCheckBox::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCheckBox.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"CheckBox",&Z_Registration_Info_UClass_UCheckBox.InnerSingleton,
               StaticRegisterNativesUCheckBox,0xb70,0x10,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UCheckBox>,InternalVTableHelperCtorCaller<UCheckBox>,local_res8,
               UContentWidget::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCheckBox.InnerSingleton;
}

// UCheckBox @ 146988c90

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UCheckBox * __thiscall UCheckBox::UCheckBox(UCheckBox *this,FVTableHelper *param_1)

{
  UWidget::UWidget((UWidget *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = 0;
  *(undefined8 *)&this->CheckedStateDelegate = 0;
  *(undefined8 *)&(this->CheckedStateDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->CheckedStateDelegate).field_0x10 = 0;
  FCheckBoxStyle::FCheckBoxStyle(&this->WidgetStyle);
  *(undefined8 *)&this->OnCheckStateChanged = 0;
  *(undefined8 *)&(this->OnCheckStateChanged).field_0x8 = 0;
  *(undefined8 *)&(this->OnCheckStateChanged).field_0x10 = 0;
  (this->MyCheckbox).Object = (SCheckBox *)0x0;
  (this->MyCheckbox).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return this;
}

// UCheckBox @ 146988d20

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UCheckBox * __thiscall UCheckBox::UCheckBox(UCheckBox *this,FObjectInitializer *param_1)

{
  FDefaultStyleCache *pFVar1;
  
  UWidget::UWidget((UWidget *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = 0;
  *(undefined1 *)&this->_padding_ = 0;
  *(undefined8 *)&this->CheckedStateDelegate = 0;
  *(undefined8 *)&(this->CheckedStateDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->CheckedStateDelegate).field_0x10 = 0;
  FCheckBoxStyle::FCheckBoxStyle(&this->WidgetStyle);
  *(undefined8 *)&this->OnCheckStateChanged = 0;
  *(undefined8 *)&(this->OnCheckStateChanged).field_0x8 = 0;
  *(undefined8 *)&(this->OnCheckStateChanged).field_0x10 = 0;
  (this->MyCheckbox).Object = (SCheckBox *)0x0;
  (this->MyCheckbox).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pFVar1 = UE::Slate::Private::FDefaultStyleCache::Get();
  FCheckBoxStyle::operator=(&this->WidgetStyle,&(pFVar1->Runtime).CheckboxStyle);
  this->CheckedState = Unchecked;
  this->HorizontalAlignment = '\0';
  this->ClickMethod = '\0';
  this->TouchMethod = '\0';
  this->PressMethod = '\0';
  this->IsFocusable = true;
  return this;
}

// ~UCheckBox @ 146992700

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UCheckBox::~UCheckBox(UCheckBox *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->MyCheckbox).SharedReferenceCount.ReferenceController);
  pvVar1 = *(void **)&(this->OnCheckStateChanged).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnCheckStateChanged);
  FCheckBoxStyle::~FCheckBoxStyle(&this->WidgetStyle);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->CheckedStateDelegate);
  this->_padding_ = (longlong)&UPanelWidget::_vftable__for__UVisual__;
  this->_padding_ = (longlong)&UPanelWidget::_vftable__for__INotifyFieldValueChanged__;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  UWidget::~UWidget((UWidget *)this);
  return;
}

// GetAccessibleWidget @ 1469ccd60

TSharedPtr<SWidget,1> * __thiscall
UCheckBox::GetAccessibleWidget(UCheckBox *this,TSharedPtr<SWidget,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  
  __return_storage_ptr__->Object = (SWidget *)(this->MyCheckbox).Object;
  pTVar1 = (this->MyCheckbox).SharedReferenceCount.ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// GetCheckedState @ 1469ce2d0

ECheckBoxState __thiscall UCheckBox::GetCheckedState(UCheckBox *this)

{
  SCheckBox *this_00;
  ECheckBoxState EVar1;
  
  this_00 = (this->MyCheckbox).Object;
  if (this_00 != (SCheckBox *)0x0) {
    EVar1 = SCheckBox::GetCheckedState(this_00);
    return EVar1;
  }
  return this->CheckedState;
}

// GetClickMethod @ 1469ce4f0

Type __thiscall UCheckBox::GetClickMethod(UCheckBox *this)

{
  return (Type)(this->ClickMethod).Value;
}

// GetFieldNotificationDescriptor @ 1469d02b0

IClassDescriptor * __thiscall UCheckBox::GetFieldNotificationDescriptor(UCheckBox *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UCheckBox::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetIsFocusable @ 1469d1680

bool __thiscall UCheckBox::GetIsFocusable(UCheckBox *this)

{
  return this->IsFocusable;
}

// GetPressMethod @ 1469d38a0

Type __thiscall UCheckBox::GetPressMethod(UCheckBox *this)

{
  return (Type)(this->PressMethod).Value;
}

// GetPrivateStaticClass @ 1469d38b0

UClass * __cdecl UCheckBox::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCheckBox.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"CheckBox",&Z_Registration_Info_UClass_UCheckBox.InnerSingleton,
               StaticRegisterNativesUCheckBox,0xb70,0x10,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UCheckBox>,InternalVTableHelperCtorCaller<UCheckBox>,local_res8,
               UContentWidget::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCheckBox.InnerSingleton;
}

// GetTouchMethod @ 1469d90c0

Type __thiscall UCheckBox::GetTouchMethod(UCheckBox *this)

{
  return (Type)(this->TouchMethod).Value;
}

// GetWidgetStyle @ 1469da350

FCheckBoxStyle * __thiscall UCheckBox::GetWidgetStyle(UCheckBox *this)

{
  return &this->WidgetStyle;
}

// InitCheckedStateDelegate @ 1469dfa90

void __thiscall UCheckBox::InitCheckedStateDelegate(UCheckBox *this,FGetCheckBoxState *param_1)

{
  undefined1 local_res8 [8];
  
  if ((this->MyCheckbox).Object != (SCheckBox *)0x0) {
    `UCheckBox::InitCheckedStateDelegate'::__l2::<lambda_1>::operator()(local_res8);
  }
  TScriptDelegate<FNotThreadSafeDelegateMode>::operator=
            ((TScriptDelegate<FNotThreadSafeDelegateMode> *)&this->CheckedStateDelegate,
             (TScriptDelegate<FNotThreadSafeDelegateMode> *)param_1);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)param_1);
  return;
}

// InitIsFocusable @ 1469dfd70

void __thiscall UCheckBox::InitIsFocusable(UCheckBox *this,bool param_1)

{
  undefined1 local_res10 [24];
  
  if ((this->MyCheckbox).Object != (SCheckBox *)0x0) {
    `UCheckBox::InitIsFocusable'::__l2::<lambda_1>::operator()(local_res10);
    this->IsFocusable = param_1;
    return;
  }
  this->IsFocusable = param_1;
  return;
}

// IsChecked @ 1469e0a70

bool __thiscall UCheckBox::IsChecked(UCheckBox *this)

{
  TDelegate<ECheckBoxState___cdecl(void),FDefaultDelegateUserPolicy> *this_00;
  SCheckBox *pSVar1;
  char cVar2;
  ECheckBoxState EVar3;
  longlong *plVar4;
  FReadAccessScope local_28;
  
  pSVar1 = (this->MyCheckbox).Object;
  if (pSVar1 == (SCheckBox *)0x0) {
    return this->CheckedState == Checked;
  }
  this_00 = &(pSVar1->IsCheckboxChecked).Getter;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,&local_28);
  if ((*(int *)&(pSVar1->IsCheckboxChecked).Getter.field_0x10 != 0) &&
     (plVar4 = *(longlong **)&(pSVar1->IsCheckboxChecked).Getter.field_0x8,
     plVar4 != (longlong *)0x0)) {
    cVar2 = (**(code **)(*plVar4 + 0x38))();
    if (cVar2 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,&local_28);
      if (*(int *)&(pSVar1->IsCheckboxChecked).Getter.field_0x10 == 0) {
        plVar4 = (longlong *)0x0;
      }
      else {
        plVar4 = *(longlong **)&(pSVar1->IsCheckboxChecked).Getter.field_0x8;
      }
      EVar3 = (**(code **)(*plVar4 + 0x60))();
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      (pSVar1->IsCheckboxChecked).Value = EVar3;
      return EVar3 == Checked;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return (pSVar1->IsCheckboxChecked).Value == Checked;
}

// IsPressed @ 1469e2810

bool __thiscall UCheckBox::IsPressed(UCheckBox *this)

{
  SCheckBox *pSVar1;
  
  pSVar1 = (this->MyCheckbox).Object;
  if (pSVar1 != (SCheckBox *)0x0) {
    return pSVar1->bIsPressed;
  }
  return false;
}

// OnSlotAdded @ 1469f0540

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UCheckBox::OnSlotAdded(UCheckBox *this,UPanelSlot *param_1)

{
  SCheckBox *this_00;
  UWidget *this_01;
  TSharedRef<SWidget,1> *pTVar1;
  TSharedRef<SWidget,1> local_28;
  TSharedRef<SWidget,1> local_18;
  
  this_00 = (this->MyCheckbox).Object;
  if (this_00 != (SCheckBox *)0x0) {
    this_01 = (param_1->Content).field0_0x0.DebugPtr;
    if (this_01 != (UWidget *)0x0) {
      pTVar1 = UWidget::TakeWidget(this_01,&local_18);
      SCheckBox::SetContent(this_00,pTVar1);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_18.SharedReferenceCount.ReferenceController);
      return;
    }
    local_28.Object = SNullWidget::NullWidget.Object;
    local_28.SharedReferenceCount.ReferenceController =
         SNullWidget::NullWidget.SharedReferenceCount.ReferenceController;
    if (SNullWidget::NullWidget.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (SNullWidget::NullWidget.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(SNullWidget::NullWidget.SharedReferenceCount.ReferenceController)->
                 SharedReferenceCount + 1);
      UNLOCK();
    }
    SCheckBox::SetContent(this_00,&local_28);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
  }
  return;
}

// OnSlotRemoved @ 1469f1230

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UCheckBox::OnSlotRemoved(UCheckBox *this,UPanelSlot *param_1)

{
  SCheckBox *this_00;
  
  this_00 = (this->MyCheckbox).Object;
  if (this_00 != (SCheckBox *)0x0) {
    SCheckBox::SetContent(this_00,&SNullWidget::NullWidget);
    return;
  }
  return;
}

// RebuildWidget @ 1469f9270

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<SWidget,1> * __thiscall
UCheckBox::RebuildWidget(UCheckBox *this,TSharedRef<SWidget,1> *__return_storage_ptr__)

{
  byte *pbVar1;
  SCheckBox *pSVar2;
  TReferenceControllerBase<1> *pTVar3;
  code *pcVar4;
  bool bVar5;
  char cVar6;
  byte bVar7;
  FArguments *pFVar8;
  undefined8 *puVar9;
  ulong64 uVar10;
  TSharedRef<SWidget,1> *pTVar11;
  FSharedReferencer<1> FVar12;
  UObject *pUVar13;
  UObject *pUVar14;
  T0RequiredArgs local_res8 [8];
  FLLMScope local_res10 [2];
  UCheckBox *local_res18;
  FName local_res20;
  undefined1 local_4c8 [8];
  FDelegateAllocation local_4c0;
  TSlateDecl<SCheckBox,RequiredArgs::T0RequiredArgs> local_4b0;
  FMemScope local_498;
  undefined4 uStack_490;
  undefined4 uStack_48c;
  SCheckBox *local_488;
  FSharedReferencer<1> local_480;
  TSharedRef<SWidget,1> local_478;
  TSharedRef<SWidget,1> local_468;
  FDestructionSentinel local_458;
  FDestructionSentinel local_440;
  FDelegateAllocation *local_428;
  undefined1 local_420 [536];
  undefined1 local_208 [32];
  undefined1 local_1e8 [64];
  undefined1 local_1a8 [64];
  undefined1 local_168 [48];
  undefined1 local_138 [32];
  undefined1 local_118 [224];
  
  pUVar14 = (UObject *)0x0;
  pFVar8 = SCheckBox::FArguments::FArguments((FArguments *)local_420);
  uStack_48c = local_468.SharedReferenceCount.ReferenceController._4_4_;
  uStack_490 = 0;
  local_498 = (FMemScope)SlateOnCheckStateChangedCallback;
  local_4c8 = (undefined1  [8])0x0;
  local_4c0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_4c0.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_4c8,
             (FWriteAccessScope *)&local_440);
  local_428 = &local_4c0;
  puVar9 = UE::Core::Private::DelegateAllocate(0x30,&local_4c0);
  if (puVar9 != (undefined8 *)0x0) {
    *puVar9 = &
              ___7__TCommonDelegateInstanceState___A6AXW4ECheckBoxState___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar10 = FDelegateHandle::GenerateNewID();
    puVar9[2] = uVar10;
    *puVar9 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUCheckBox____A6AXW4ECheckBoxState___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UCheckBox *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar9[3] = 0;
    local_res18 = this;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UCheckBox *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar9 + 3),(FObjectPtr)&local_res18);
    *(FMemScope *)(puVar9 + 4) = local_498;
    puVar9[5] = CONCAT44(uStack_48c,uStack_490);
  }
  if (local_440.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_440.Accessor,&local_440);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar8->_OnCheckStateChanged,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_4c8);
  pFVar8->_Style = &this->WidgetStyle;
  pFVar8->_HAlign = (uint)(this->HorizontalAlignment).Value;
  pFVar8->_ClickMethod = (uint)(this->ClickMethod).Value;
  pFVar8->_TouchMethod = (uint)(this->TouchMethod).Value;
  pFVar8->_PressMethod = (uint)(this->PressMethod).Value;
  pFVar8->_IsFocusable = this->IsFocusable;
  FLLMScope::FLLMScope(local_res10,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_res20 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_498,&local_res20,true);
  TSlateDecl<SCheckBox,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SCheckBox,RequiredArgs::T0RequiredArgs>
            (&local_4b0,"SCheckBox",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Private\\Components\\CheckBox.cpp"
             ,0x3b,local_res8);
  FMemScope::~FMemScope(&local_498);
  FLLMScope::~FLLMScope(local_res10);
  pSVar2 = local_4b0._Widget.Object;
  if ((local_4b0._Widget.Object == (SCheckBox *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar11 = (TSharedRef<SWidget,1> *)(*pcVar4)();
    return pTVar11;
  }
  SWidget::SWidgetConstruct((SWidget *)local_4b0._Widget.Object,(FSlateBaseNamedArgs *)pFVar8);
  SCheckBox::Construct(local_4b0._Widget.Object,pFVar8);
  if ((local_4b0._Widget.Object == (SCheckBox *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar11 = (TSharedRef<SWidget,1> *)(*pcVar4)();
    return pTVar11;
  }
  if (((local_4b0._Widget.Object)->_padding_ & 0x10) == 0) {
    cVar6 = (**(code **)((local_4b0._Widget.Object)->_padding_ + 0x228))(local_4b0._Widget.Object);
    bVar7 = 0;
    if (cVar6 == '\0') goto LAB_1469f94ee;
  }
  bVar7 = 0x20;
LAB_1469f94ee:
  *(byte *)&(local_4b0._Widget.Object)->_padding_ =
       (byte)(local_4b0._Widget.Object)->_padding_ & 0xdf;
  *(byte *)&(local_4b0._Widget.Object)->_padding_ =
       (byte)(local_4b0._Widget.Object)->_padding_ | bVar7;
  if ((local_4b0._Widget.Object == (SCheckBox *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar11 = (TSharedRef<SWidget,1> *)(*pcVar4)();
    return pTVar11;
  }
  pbVar1 = (byte *)((longlong)&(local_4b0._Widget.Object)->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if ((local_4b0._Widget.Object == (SCheckBox *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x416,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar11 = (TSharedRef<SWidget,1> *)(*pcVar4)();
    return pTVar11;
  }
  FVar12.ReferenceController = local_4b0._Widget.SharedReferenceCount.ReferenceController;
  local_4b0._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_4b0._Widget.Object = (SCheckBox *)0x0;
  if ((pSVar2 == (SCheckBox *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x26c,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar11 = (TSharedRef<SWidget,1> *)(*pcVar4)();
    return pTVar11;
  }
  local_488 = pSVar2;
  local_480.ReferenceController = FVar12.ReferenceController;
  if (FVar12.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar12.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar12.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (&this->MyCheckbox != (TSharedPtr<SCheckBox,1> *)&local_488) {
    (this->MyCheckbox).Object = pSVar2;
    local_488 = (SCheckBox *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->MyCheckbox).SharedReferenceCount,&local_480);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_480.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar12.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_4c8,
             (FWriteAccessScope *)&local_458);
  if ((local_4c0.DelegateSize != 0) &&
     (local_4c0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_4c0.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_4c0,0,0,0x10);
    local_4c0.DelegateSize = 0;
  }
  if (local_458.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_458.Accessor,&local_458);
  }
  if (local_4c0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_4c0.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_4c8);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_118);
  if ((void *)local_118._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_118._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_118);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_138);
  if ((void *)local_138._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_138._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_138);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_168);
  if ((void *)local_168._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_168._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_168);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1a8);
  if ((void *)local_1a8._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_1a8._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1a8);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1e8);
  if ((void *)local_1e8._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_1e8._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1e8);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_208);
  if ((void *)local_208._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_208._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_208);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_420._512_8_);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)local_420);
  if (0 < (int)this->_padding_) {
    if (((this->MyCheckbox).Object == (SCheckBox *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      pTVar11 = (TSharedRef<SWidget,1> *)(*pcVar4)();
      return pTVar11;
    }
    pSVar2 = (this->MyCheckbox).Object;
    pUVar13 = pUVar14;
    if (((0 < (int)this->_padding_) &&
        (pUVar13 = *(UObject **)this->_padding_, UE::GC::GIsIncrementalReachabilityPending != false)
        ) && (pUVar13 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar13);
    }
    if (*(longlong *)&pUVar13[1].field_0x8 == 0) {
      local_478.Object = SNullWidget::NullWidget.Object;
      local_478.SharedReferenceCount.ReferenceController =
           SNullWidget::NullWidget.SharedReferenceCount.ReferenceController;
      if (SNullWidget::NullWidget.SharedReferenceCount.ReferenceController !=
          (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (SNullWidget::NullWidget.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(SNullWidget::NullWidget.SharedReferenceCount.ReferenceController)->
                   SharedReferenceCount + 1);
        UNLOCK();
      }
      SCheckBox::SetContent(pSVar2,&local_478);
      FVar12.ReferenceController = local_478.SharedReferenceCount.ReferenceController;
    }
    else {
      if (((0 < (int)this->_padding_) &&
          (pUVar14 = *(UObject **)this->_padding_,
          UE::GC::GIsIncrementalReachabilityPending != false)) && (pUVar14 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar14);
      }
      pTVar11 = UWidget::TakeWidget(*(UWidget **)&pUVar14[1].field_0x8,&local_468);
      SCheckBox::SetContent(pSVar2,pTVar11);
      FVar12.ReferenceController =
           (TReferenceControllerBase<1> *)
           CONCAT44(local_468.SharedReferenceCount.ReferenceController._4_4_,
                    local_468.SharedReferenceCount.ReferenceController._0_4_);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar12.ReferenceController);
  }
  if (((this->MyCheckbox).Object == (SCheckBox *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x408,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar11 = (TSharedRef<SWidget,1> *)(*pcVar4)();
    return pTVar11;
  }
  pTVar3 = (this->MyCheckbox).SharedReferenceCount.ReferenceController;
  pSVar2 = (this->MyCheckbox).Object;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((pSVar2 == (SCheckBox *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x25d,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar11 = (TSharedRef<SWidget,1> *)(*pcVar4)();
    return pTVar11;
  }
  __return_storage_ptr__->Object = (SWidget *)pSVar2;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar3;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return __return_storage_ptr__;
}

// ReleaseSlateResources @ 146a0a0e0

void __thiscall UCheckBox::ReleaseSlateResources(UCheckBox *this,bool param_1)

{
  undefined8 local_18;
  FSharedReferencer<1> FStack_10;
  
  UPanelWidget::ReleaseSlateResources((UPanelWidget *)this,param_1);
  local_18 = 0;
  FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->MyCheckbox != (TSharedPtr<SCheckBox,1> *)&local_18) {
    (this->MyCheckbox).Object = (SCheckBox *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->MyCheckbox).SharedReferenceCount,&FStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_10.ReferenceController);
  return;
}

// SetCheckedState @ 146a11e40

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UCheckBox::SetCheckedState(UCheckBox *this,ECheckBoxState param_1)

{
  SCheckBox *this_00;
  bool bVar1;
  UObject *pUVar2;
  TAttribute<ECheckBoxState> *pTVar3;
  FName local_res8 [2];
  undefined1 local_98 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_90;
  ForAnyElementType FStack_88;
  ulonglong local_80;
  FName local_78;
  int local_70;
  undefined4 uStack_6c;
  bool local_68;
  TAttribute<ECheckBoxState> local_58;
  undefined1 local_38 [8];
  undefined1 local_30 [24];
  
  if (this->CheckedState != param_1) {
    this->CheckedState = param_1;
    local_78 = FFieldNotificationClassDescriptor::CheckedState.FieldName;
    local_70 = FFieldNotificationClassDescriptor::CheckedState.BitNumber;
    UWidget::BroadcastFieldValueChanged((UWidget *)&this->_padding_,(FFieldId *)&local_78);
  }
  this_00 = (this->MyCheckbox).Object;
  if (this_00 != (SCheckBox *)0x0) {
    bVar1 = TScriptDelegate<FNotThreadSafeDelegateMode>::IsBound
                      ((TScriptDelegate<FNotThreadSafeDelegateMode> *)&this->CheckedStateDelegate);
    bVar1 = !bVar1;
    if (bVar1) {
      pTVar3 = (TAttribute<ECheckBoxState> *)local_98;
      local_98[0] = this->CheckedState;
      local_98[1] = true;
      local_80 = 0;
      local_90.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
      FStack_88.Data = (FScriptContainerElement *)0x0;
    }
    else {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                 &this->CheckedStateDelegate,(FReadAccessScope *)&local_78);
      local_res8[0].ComparisonIndex.Value = *(uint *)&(this->CheckedStateDelegate).field_0x10;
      local_res8[0].Number = *(uint *)&(this->CheckedStateDelegate).field_0x14;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                ((FReadAccessScope *)&local_78);
      pUVar2 = TScriptDelegate<FNotThreadSafeDelegateMode>::GetUObject
                         ((TScriptDelegate<FNotThreadSafeDelegateMode> *)&this->CheckedStateDelegate
                         );
      pTVar3 = TAttribute<enum_ECheckBoxState>::Create<UObject>
                         ((TAttribute<ECheckBoxState> *)local_38,pUVar2,local_res8);
    }
    local_58.Value = pTVar3->Value;
    local_58.bIsSet = pTVar3->bIsSet;
    TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_58.Getter,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)&pTVar3->Getter);
    SCheckBox::SetIsChecked(this_00,&local_58);
    if (bVar1) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_90,(FWriteAccessScope *)&local_78);
      if (((int)local_80 != 0) && (FStack_88.Data != (FScriptContainerElement *)0x0)) {
        (*(code *)**(undefined8 **)FStack_88.Data)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_88,0,0,0x10);
        local_80 = local_80 & 0xffffffff00000000;
      }
      if (local_68 == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                  ((FMRSWRecursiveAccessDetector *)CONCAT44(uStack_6c,local_70),
                   (FDestructionSentinel *)&local_78);
      }
      if (FStack_88.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_88.Data);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_90.AccessDetector);
    }
    if (!bVar1) {
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_30);
      if ((void *)local_30._8_8_ != (void *)0x0) {
        FMemory::Free((void *)local_30._8_8_);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_30);
    }
  }
  return;
}

// SetClickMethod @ 146a12360

void __thiscall UCheckBox::SetClickMethod(UCheckBox *this,Type param_1)

{
  SCheckBox *this_00;
  
  (this->ClickMethod).Value = (uchar)param_1;
  this_00 = (this->MyCheckbox).Object;
  if (this_00 != (SCheckBox *)0x0) {
    SCheckBox::SetClickMethod(this_00,param_1 & 0xff);
    return;
  }
  return;
}

// SetIsChecked @ 146a158a0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UCheckBox::SetIsChecked(UCheckBox *this,bool param_1)

{
  SCheckBox *this_00;
  bool bVar1;
  UObject *pUVar2;
  TAttribute<ECheckBoxState> *pTVar3;
  FName local_res8 [2];
  undefined1 local_98 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_90;
  ForAnyElementType FStack_88;
  ulonglong local_80;
  FName local_78;
  int local_70;
  undefined4 uStack_6c;
  bool local_68;
  TAttribute<ECheckBoxState> local_58;
  undefined1 local_38 [8];
  undefined1 local_30 [24];
  
  if (param_1 != (bool)this->CheckedState) {
    this->CheckedState = param_1;
    local_78 = FFieldNotificationClassDescriptor::CheckedState.FieldName;
    local_70 = FFieldNotificationClassDescriptor::CheckedState.BitNumber;
    UWidget::BroadcastFieldValueChanged((UWidget *)&this->_padding_,(FFieldId *)&local_78);
  }
  this_00 = (this->MyCheckbox).Object;
  if (this_00 != (SCheckBox *)0x0) {
    bVar1 = TScriptDelegate<FNotThreadSafeDelegateMode>::IsBound
                      ((TScriptDelegate<FNotThreadSafeDelegateMode> *)&this->CheckedStateDelegate);
    bVar1 = !bVar1;
    if (bVar1) {
      pTVar3 = (TAttribute<ECheckBoxState> *)local_98;
      local_98[0] = this->CheckedState;
      local_98[1] = true;
      local_80 = 0;
      local_90.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
      FStack_88.Data = (FScriptContainerElement *)0x0;
    }
    else {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                 &this->CheckedStateDelegate,(FReadAccessScope *)&local_78);
      local_res8[0].ComparisonIndex.Value = *(uint *)&(this->CheckedStateDelegate).field_0x10;
      local_res8[0].Number = *(uint *)&(this->CheckedStateDelegate).field_0x14;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                ((FReadAccessScope *)&local_78);
      pUVar2 = TScriptDelegate<FNotThreadSafeDelegateMode>::GetUObject
                         ((TScriptDelegate<FNotThreadSafeDelegateMode> *)&this->CheckedStateDelegate
                         );
      pTVar3 = TAttribute<enum_ECheckBoxState>::Create<UObject>
                         ((TAttribute<ECheckBoxState> *)local_38,pUVar2,local_res8);
    }
    local_58.Value = pTVar3->Value;
    local_58.bIsSet = pTVar3->bIsSet;
    TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_58.Getter,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)&pTVar3->Getter);
    SCheckBox::SetIsChecked(this_00,&local_58);
    if (bVar1) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_90,(FWriteAccessScope *)&local_78);
      if (((int)local_80 != 0) && (FStack_88.Data != (FScriptContainerElement *)0x0)) {
        (*(code *)**(undefined8 **)FStack_88.Data)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_88,0,0,0x10);
        local_80 = local_80 & 0xffffffff00000000;
      }
      if (local_68 == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                  ((FMRSWRecursiveAccessDetector *)CONCAT44(uStack_6c,local_70),
                   (FDestructionSentinel *)&local_78);
      }
      if (FStack_88.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_88.Data);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_90.AccessDetector);
    }
    if (!bVar1) {
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_30);
      if ((void *)local_30._8_8_ != (void *)0x0) {
        FMemory::Free((void *)local_30._8_8_);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_30);
    }
  }
  return;
}

// SetPressMethod @ 146a19220

void __thiscall UCheckBox::SetPressMethod(UCheckBox *this,Type param_1)

{
  SCheckBox *this_00;
  
  (this->PressMethod).Value = (uchar)param_1;
  this_00 = (this->MyCheckbox).Object;
  if (this_00 != (SCheckBox *)0x0) {
    SCheckBox::SetPressMethod(this_00,param_1 & 0xff);
    return;
  }
  return;
}

// SetTouchMethod @ 146a1ce70

void __thiscall UCheckBox::SetTouchMethod(UCheckBox *this,Type param_1)

{
  SCheckBox *this_00;
  
  (this->TouchMethod).Value = (uchar)param_1;
  this_00 = (this->MyCheckbox).Object;
  if (this_00 != (SCheckBox *)0x0) {
    SCheckBox::SetTouchMethod(this_00,param_1 & 0xff);
    return;
  }
  return;
}

// SetWidgetStyle @ 146a1dc80

void __thiscall UCheckBox::SetWidgetStyle(UCheckBox *this,FCheckBoxStyle *param_1)

{
  SCheckBox *this_00;
  
  FCheckBoxStyle::operator=(&this->WidgetStyle,param_1);
  this_00 = (this->MyCheckbox).Object;
  if (this_00 != (SCheckBox *)0x0) {
    SCheckBox::SetStyle(this_00,&this->WidgetStyle);
  }
  return;
}

// SlateOnCheckStateChangedCallback @ 146a1e440

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UCheckBox::SlateOnCheckStateChangedCallback(UCheckBox *this,ECheckBoxState param_1)

{
  undefined1 local_res10 [24];
  FFieldId local_18;
  
  if (this->CheckedState != param_1) {
    this->CheckedState = param_1;
    local_18.FieldName = FFieldNotificationClassDescriptor::CheckedState.FieldName;
    local_18.BitNumber = FFieldNotificationClassDescriptor::CheckedState.BitNumber;
    UWidget::BroadcastFieldValueChanged((UWidget *)&this->_padding_,&local_18);
  }
  local_res10[0] = param_1 != Unchecked;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->OnCheckStateChanged,
             local_res10);
  return;
}

// StaticRegisterNativesUCheckBox @ 146a1e5d0

void __cdecl UCheckBox::StaticRegisterNativesUCheckBox(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 8;
  local_18.DataPtr = Z_Construct_UClass_UCheckBox_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// SynchronizeProperties @ 146a1f690

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UCheckBox::SynchronizeProperties(UCheckBox *this)

{
  SCheckBox *pSVar1;
  code *pcVar2;
  bool bVar3;
  UObject *pUVar4;
  TAttribute<ECheckBoxState> *pTVar5;
  FName local_res8;
  undefined1 local_a8 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_a0;
  ForAnyElementType FStack_98;
  ulonglong local_90;
  FDestructionSentinel local_88;
  TAttribute<ECheckBoxState> local_70;
  undefined1 local_50 [8];
  undefined1 local_48 [24];
  FReadAccessScope local_30;
  
  UWidget::SynchronizeProperties((UWidget *)this);
  pSVar1 = (this->MyCheckbox).Object;
  if (pSVar1 != (SCheckBox *)0x0) {
    SCheckBox::SetStyle(pSVar1,&this->WidgetStyle);
    if ((this->MyCheckbox).Object == (SCheckBox *)0x0) {
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
    pSVar1 = (this->MyCheckbox).Object;
    bVar3 = TScriptDelegate<FNotThreadSafeDelegateMode>::IsBound
                      ((TScriptDelegate<FNotThreadSafeDelegateMode> *)&this->CheckedStateDelegate);
    bVar3 = !bVar3;
    if (bVar3) {
      pTVar5 = (TAttribute<ECheckBoxState> *)local_a8;
      local_a8[0] = this->CheckedState;
      local_a8[1] = true;
      local_90 = 0;
      local_a0.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
      FStack_98.Data = (FScriptContainerElement *)0x0;
    }
    else {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                 &this->CheckedStateDelegate,&local_30);
      local_res8.ComparisonIndex.Value = *(uint *)&(this->CheckedStateDelegate).field_0x10;
      local_res8.Number = *(uint *)&(this->CheckedStateDelegate).field_0x14;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_30);
      pUVar4 = TScriptDelegate<FNotThreadSafeDelegateMode>::GetUObject
                         ((TScriptDelegate<FNotThreadSafeDelegateMode> *)&this->CheckedStateDelegate
                         );
      pTVar5 = TAttribute<enum_ECheckBoxState>::Create<UObject>
                         ((TAttribute<ECheckBoxState> *)local_50,pUVar4,&local_res8);
    }
    local_70.Value = pTVar5->Value;
    local_70.bIsSet = pTVar5->bIsSet;
    TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_70.Getter,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)&pTVar5->Getter);
    SCheckBox::SetIsChecked(pSVar1,&local_70);
    if (bVar3) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_a0,(FWriteAccessScope *)&local_88);
      if (((int)local_90 != 0) && (FStack_98.Data != (FScriptContainerElement *)0x0)) {
        (*(code *)**(undefined8 **)FStack_98.Data)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_98,0,0,0x10);
        local_90 = local_90 & 0xffffffff00000000;
      }
      if (local_88.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_88.Accessor,&local_88);
      }
      if (FStack_98.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_98.Data);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_a0.AccessDetector);
    }
    if (!bVar3) {
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_48);
      if ((void *)local_48._8_8_ != (void *)0x0) {
        FMemory::Free((void *)local_48._8_8_);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_48);
    }
    if ((this->MyCheckbox).Object == (SCheckBox *)0x0) {
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
    SCheckBox::SetClickMethod((this->MyCheckbox).Object,(uint)(this->ClickMethod).Value);
    if ((this->MyCheckbox).Object == (SCheckBox *)0x0) {
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
    SCheckBox::SetTouchMethod((this->MyCheckbox).Object,(uint)(this->TouchMethod).Value);
    if ((this->MyCheckbox).Object == (SCheckBox *)0x0) {
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
    SCheckBox::SetPressMethod((this->MyCheckbox).Object,(uint)(this->PressMethod).Value);
  }
  return;
}

// execGetCheckedState @ 146a34660

void __cdecl UCheckBox::execGetCheckedState(UObject *param_1,FFrame *param_2,void *param_3)

{
  ECheckBoxState EVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(SCheckBox **)&param_1[0x48].field_0x20 != (SCheckBox *)0x0) {
    EVar1 = SCheckBox::GetCheckedState(*(SCheckBox **)&param_1[0x48].field_0x20);
    *(ECheckBoxState *)param_3 = EVar1;
    return;
  }
  *(undefined1 *)param_3 = param_1[0xb].field_0x10;
  return;
}

// execIsChecked @ 146a37470

void __cdecl UCheckBox::execIsChecked(UObject *param_1,FFrame *param_2,void *param_3)

{
  longlong lVar1;
  char cVar2;
  undefined1 uVar3;
  longlong *plVar4;
  FReadAccessScope local_28;
  
  plVar4 = (longlong *)0x0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar1 = *(longlong *)&param_1[0x48].field_0x20;
  if (lVar1 == 0) {
    *(bool *)param_3 = param_1[0xb].field_0x10 == '\x01';
    return;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(lVar1 + 0x2c0),&local_28);
  if ((*(int *)(lVar1 + 0x2d0) != 0) && (*(longlong **)(lVar1 + 0x2c8) != (longlong *)0x0)) {
    cVar2 = (**(code **)(**(longlong **)(lVar1 + 0x2c8) + 0x38))();
    if (cVar2 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(lVar1 + 0x2c0),&local_28
                );
      if (*(int *)(lVar1 + 0x2d0) != 0) {
        plVar4 = *(longlong **)(lVar1 + 0x2c8);
      }
      uVar3 = (**(code **)(*plVar4 + 0x60))(plVar4);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      *(undefined1 *)(lVar1 + 0x2b8) = uVar3;
      goto LAB_146a37521;
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
LAB_146a37521:
  *(bool *)param_3 = *(char *)(lVar1 + 0x2b8) == '\x01';
  return;
}

// execIsPressed @ 146a37710

void __cdecl UCheckBox::execIsPressed(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(longlong *)&param_1[0x48].field_0x20 != 0) {
    *(undefined1 *)param_3 = *(undefined1 *)(*(longlong *)&param_1[0x48].field_0x20 + 0x2b0);
    return;
  }
  *(undefined1 *)param_3 = 0;
  return;
}

// execSetCheckedState @ 146a3add0

void __cdecl UCheckBox::execSetCheckedState(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  ECheckBoxState local_res10 [24];
  
  local_res10[0] = Unchecked;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  SetCheckedState((UCheckBox *)param_1,local_res10[0]);
  return;
}

// execSetClickMethod @ 146a3ae60

void __cdecl UCheckBox::execSetClickMethod(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  byte local_res8 [8];
  
  local_res8[0] = 0;
  FByteProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  param_1[0x48].field_0x1 = local_res8[0];
  if (*(SCheckBox **)&param_1[0x48].field_0x20 != (SCheckBox *)0x0) {
    SCheckBox::SetClickMethod(*(SCheckBox **)&param_1[0x48].field_0x20,(uint)local_res8[0]);
  }
  return;
}

// execSetIsChecked @ 146a3dd50

void __cdecl UCheckBox::execSetIsChecked(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res10 [2];
  
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  SetIsChecked((UCheckBox *)param_1,local_res10[0] != 0);
  return;
}

// execSetPressMethod @ 146a40d70

void __cdecl UCheckBox::execSetPressMethod(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  byte local_res8 [8];
  
  local_res8[0] = 0;
  FByteProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  param_1[0x48].field_0x3 = local_res8[0];
  if (*(SCheckBox **)&param_1[0x48].field_0x20 != (SCheckBox *)0x0) {
    SCheckBox::SetPressMethod(*(SCheckBox **)&param_1[0x48].field_0x20,(uint)local_res8[0]);
  }
  return;
}

// execSetTouchMethod @ 146a43e90

void __cdecl UCheckBox::execSetTouchMethod(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  byte local_res8 [8];
  
  local_res8[0] = 0;
  FByteProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  param_1[0x48].field_0x2 = local_res8[0];
  if (*(SCheckBox **)&param_1[0x48].field_0x20 != (SCheckBox *)0x0) {
    SCheckBox::SetTouchMethod(*(SCheckBox **)&param_1[0x48].field_0x20,(uint)local_res8[0]);
  }
  return;
}

// operator() @ 1504f6690

bool __thiscall `UCheckBox::InitCheckedStateDelegate'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<7083313489661395205>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<7083313489661395205>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504f68d0

bool __thiscall `UCheckBox::InitIsFocusable'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<7083313489661395199>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<7083313489661395199>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

