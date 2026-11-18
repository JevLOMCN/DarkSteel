// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 29

// StaticClass @ 14b641fc0

UClass * __cdecl UDS_VM_GameOptionComponent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_GameOptionComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_GameOptionComponent",
               &Z_Registration_Info_UClass_UDS_VM_GameOptionComponent.InnerSingleton,
               StaticRegisterNativesUDS_VM_GameOptionComponent,0x180,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_VM_GameOptionComponent>,
               InternalVTableHelperCtorCaller<UDS_VM_GameOptionComponent>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_GameOptionComponent.InnerSingleton;
}

// UDS_VM_GameOptionComponent @ 14b648b40

UDS_VM_GameOptionComponent * __thiscall
UDS_VM_GameOptionComponent::UDS_VM_GameOptionComponent
          (UDS_VM_GameOptionComponent *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_GameOptionComponent__6B_;
  (this->OptionName).StringTableID = 0;
  (this->OptionName).StringEnumTableNameID.ComparisonIndex = 0;
  (this->OptionName).StringEnumTableNameID.Number = 0;
  (this->OptionName).DateTime.Ticks = 0;
  (this->OptionName).TimeSpan.Ticks = 0;
  (this->OptionName).TimeExpressionType = None;
  (this->OptionName).IsExpression = false;
  (this->OptionName).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OptionName).UniqueString.Data.ArrayNum = 0;
  (this->OptionName).UniqueString.Data.ArrayMax = 0;
  (this->OptionName).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OptionName).FormatArgs.ArrayNum = 0;
  (this->OptionName).FormatArgs.ArrayMax = 0;
  (this->EntryBindingEventField_Spin).UserObjectList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->EntryBindingEventField_Spin).UserObjectList.ArrayNum = 0;
  (this->EntryBindingEventField_Spin).UserObjectList.ArrayMax = 0;
  (this->EntryBindingEventField_Combo).UserObjectList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->EntryBindingEventField_Combo).UserObjectList.ArrayNum = 0;
  (this->EntryBindingEventField_Combo).UserObjectList.ArrayMax = 0;
  (this->EntryBindingEventField_Slider).UserObjectList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->EntryBindingEventField_Slider).UserObjectList.ArrayNum = 0;
  (this->EntryBindingEventField_Slider).UserObjectList.ArrayMax = 0;
  (this->EntryBindingEventField_DropDown).UserObjectList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->EntryBindingEventField_DropDown).UserObjectList.ArrayNum = 0;
  (this->EntryBindingEventField_DropDown).UserObjectList.ArrayMax = 0;
  (this->EntryBindingEventField_Key).UserObjectList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->EntryBindingEventField_Key).UserObjectList.ArrayNum = 0;
  (this->EntryBindingEventField_Key).UserObjectList.ArrayMax = 0;
  (this->EntryBindingEventField_SoundSlider).UserObjectList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->EntryBindingEventField_SoundSlider).UserObjectList.ArrayNum = 0;
  (this->EntryBindingEventField_SoundSlider).UserObjectList.ArrayMax = 0;
  (this->EntryBindingEventField_ColorButton).UserObjectList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->EntryBindingEventField_ColorButton).UserObjectList.ArrayNum = 0;
  (this->EntryBindingEventField_ColorButton).UserObjectList.ArrayMax = 0;
  (this->EntryBindingEventField_TextField).UserObjectList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->EntryBindingEventField_TextField).UserObjectList.ArrayNum = 0;
  (this->EntryBindingEventField_TextField).UserObjectList.ArrayMax = 0;
  (this->ChildModelList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ChildModelList).ArrayNum = 0;
  (this->ChildModelList).ArrayMax = 0;
  (this->OptionName).StringTableType = None;
  return this;
}

// UDS_VM_GameOptionComponent @ 14b648c50

UDS_VM_GameOptionComponent * __thiscall
UDS_VM_GameOptionComponent::UDS_VM_GameOptionComponent
          (UDS_VM_GameOptionComponent *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_GameOptionComponent__6B_;
  (this->OptionName).StringTableID = 0;
  (this->OptionName).StringEnumTableNameID.ComparisonIndex = 0;
  (this->OptionName).StringEnumTableNameID.Number = 0;
  (this->OptionName).DateTime.Ticks = 0;
  (this->OptionName).TimeSpan.Ticks = 0;
  (this->OptionName).TimeExpressionType = None;
  (this->OptionName).IsExpression = false;
  (this->OptionName).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OptionName).UniqueString.Data.ArrayNum = 0;
  (this->OptionName).UniqueString.Data.ArrayMax = 0;
  (this->OptionName).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OptionName).FormatArgs.ArrayNum = 0;
  (this->OptionName).FormatArgs.ArrayMax = 0;
  (this->EntryBindingEventField_Spin).UserObjectList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->EntryBindingEventField_Spin).UserObjectList.ArrayNum = 0;
  (this->EntryBindingEventField_Spin).UserObjectList.ArrayMax = 0;
  (this->EntryBindingEventField_Combo).UserObjectList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->EntryBindingEventField_Combo).UserObjectList.ArrayNum = 0;
  (this->EntryBindingEventField_Combo).UserObjectList.ArrayMax = 0;
  (this->EntryBindingEventField_Slider).UserObjectList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->EntryBindingEventField_Slider).UserObjectList.ArrayNum = 0;
  (this->EntryBindingEventField_Slider).UserObjectList.ArrayMax = 0;
  (this->EntryBindingEventField_DropDown).UserObjectList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->EntryBindingEventField_DropDown).UserObjectList.ArrayNum = 0;
  (this->EntryBindingEventField_DropDown).UserObjectList.ArrayMax = 0;
  (this->EntryBindingEventField_Key).UserObjectList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->EntryBindingEventField_Key).UserObjectList.ArrayNum = 0;
  (this->EntryBindingEventField_Key).UserObjectList.ArrayMax = 0;
  (this->EntryBindingEventField_SoundSlider).UserObjectList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->EntryBindingEventField_SoundSlider).UserObjectList.ArrayNum = 0;
  (this->EntryBindingEventField_SoundSlider).UserObjectList.ArrayMax = 0;
  (this->EntryBindingEventField_ColorButton).UserObjectList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->EntryBindingEventField_ColorButton).UserObjectList.ArrayNum = 0;
  (this->EntryBindingEventField_ColorButton).UserObjectList.ArrayMax = 0;
  (this->EntryBindingEventField_TextField).UserObjectList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->EntryBindingEventField_TextField).UserObjectList.ArrayNum = 0;
  (this->EntryBindingEventField_TextField).UserObjectList.ArrayMax = 0;
  (this->ChildModelList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ChildModelList).ArrayNum = 0;
  (this->ChildModelList).ArrayMax = 0;
  (this->OptionName).StringTableType = None;
  return this;
}

// ~UDS_VM_GameOptionComponent @ 14b649930

void __thiscall
UDS_VM_GameOptionComponent::~UDS_VM_GameOptionComponent(UDS_VM_GameOptionComponent *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_GameOptionComponent__6B_;
  pFVar1 = (this->ChildModelList).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->EntryBindingEventField_TextField).UserObjectList.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->EntryBindingEventField_ColorButton).UserObjectList.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->EntryBindingEventField_SoundSlider).UserObjectList.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->EntryBindingEventField_Key).UserObjectList.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->EntryBindingEventField_DropDown).UserObjectList.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->EntryBindingEventField_Slider).UserObjectList.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->EntryBindingEventField_Combo).UserObjectList.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->EntryBindingEventField_Spin).UserObjectList.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->OptionName).FormatArgs.AllocatorInstance.Data,
             (this->OptionName).FormatArgs.ArrayNum);
  pFVar1 = (this->OptionName).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->OptionName).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b64b320

IClassDescriptor * __thiscall
UDS_VM_GameOptionComponent::GetFieldNotificationDescriptor(UDS_VM_GameOptionComponent *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_GameOptionComponent::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b64bd50

UClass * __cdecl UDS_VM_GameOptionComponent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_GameOptionComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_GameOptionComponent",
               &Z_Registration_Info_UClass_UDS_VM_GameOptionComponent.InnerSingleton,
               StaticRegisterNativesUDS_VM_GameOptionComponent,0x180,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_VM_GameOptionComponent>,
               InternalVTableHelperCtorCaller<UDS_VM_GameOptionComponent>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_GameOptionComponent.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_GameOptionComponent @ 14b64bfd0

void __cdecl UDS_VM_GameOptionComponent::StaticRegisterNativesUDS_VM_GameOptionComponent(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 9;
  local_18.DataPtr = Z_Construct_UClass_UDS_VM_GameOptionComponent_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execComponentEntryWidgetClass @ 14b64d060

void __cdecl
UDS_VM_GameOptionComponent::execComponentEntryWidgetClass
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  TSubclassOf<UUserWidget> TVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  TVar1 = ComponentEntryWidgetClass((UDS_VM_GameOptionComponent *)param_1);
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    *(undefined8 *)param_3 = *(undefined8 *)TVar1.Class.field0_0x0;
    return;
  }
  if (*(UObject **)TVar1.Class.field0_0x0 != (UObject *)0x0) {
    UE::GC::MarkAsReachable(*(UObject **)TVar1.Class.field0_0x0);
    *(undefined8 *)param_3 = *(undefined8 *)TVar1.Class.field0_0x0;
    return;
  }
  *(undefined8 *)param_3 = 0;
  return;
}

// execVisibleColorButton @ 14b64d3c0

void __cdecl
UDS_VM_GameOptionComponent::execVisibleColorButton(UObject *param_1,FFrame *param_2,void *param_3)

{
  ESlateVisibility EVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  EVar1 = VisibleColorButton((UDS_VM_GameOptionComponent *)param_1);
  *(ESlateVisibility *)param_3 = EVar1;
  return;
}

// execVisibleCombo @ 14b64d400

void __cdecl
UDS_VM_GameOptionComponent::execVisibleCombo(UObject *param_1,FFrame *param_2,void *param_3)

{
  ESlateVisibility EVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  EVar1 = VisibleCombo((UDS_VM_GameOptionComponent *)param_1);
  *(ESlateVisibility *)param_3 = EVar1;
  return;
}

// execVisibleDropDown @ 14b64d440

void __cdecl
UDS_VM_GameOptionComponent::execVisibleDropDown(UObject *param_1,FFrame *param_2,void *param_3)

{
  ESlateVisibility EVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  EVar1 = VisibleDropDown((UDS_VM_GameOptionComponent *)param_1);
  *(ESlateVisibility *)param_3 = EVar1;
  return;
}

// execVisibleKey @ 14b64d480

void __cdecl
UDS_VM_GameOptionComponent::execVisibleKey(UObject *param_1,FFrame *param_2,void *param_3)

{
  ESlateVisibility EVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  EVar1 = VisibleKey((UDS_VM_GameOptionComponent *)param_1);
  *(ESlateVisibility *)param_3 = EVar1;
  return;
}

// execVisibleSlider @ 14b64d4c0

void __cdecl
UDS_VM_GameOptionComponent::execVisibleSlider(UObject *param_1,FFrame *param_2,void *param_3)

{
  ESlateVisibility EVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  EVar1 = VisibleSlider((UDS_VM_GameOptionComponent *)param_1);
  *(ESlateVisibility *)param_3 = EVar1;
  return;
}

// execVisibleSoundSlider @ 14b64d500

void __cdecl
UDS_VM_GameOptionComponent::execVisibleSoundSlider(UObject *param_1,FFrame *param_2,void *param_3)

{
  ESlateVisibility EVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  EVar1 = VisibleSoundSlider((UDS_VM_GameOptionComponent *)param_1);
  *(ESlateVisibility *)param_3 = EVar1;
  return;
}

// execVisibleSpin @ 14b64d540

void __cdecl
UDS_VM_GameOptionComponent::execVisibleSpin(UObject *param_1,FFrame *param_2,void *param_3)

{
  ESlateVisibility EVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  EVar1 = VisibleSpin((UDS_VM_GameOptionComponent *)param_1);
  *(ESlateVisibility *)param_3 = EVar1;
  return;
}

// execVisibleTextField @ 14b64d580

void __cdecl
UDS_VM_GameOptionComponent::execVisibleTextField(UObject *param_1,FFrame *param_2,void *param_3)

{
  ESlateVisibility EVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  EVar1 = VisibleTextField((UDS_VM_GameOptionComponent *)param_1);
  *(ESlateVisibility *)param_3 = EVar1;
  return;
}

// BindModel @ 14be112f0

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void __thiscall UDS_VM_GameOptionComponent::BindModel(UDS_VM_GameOptionComponent *this)

{
  UDS_LanguageManager *pUVar1;
  
  if ((0 < (int)this->_padding_) &&
     (pUVar1 = UDS_LanguageManager::GetInst(), pUVar1 != (UDS_LanguageManager *)0x0)) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_ViewModelBase>
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &pUVar1->OnLanguageChanged,(UDS_ViewModelBase *)&stack0x00000008,(pmf_620f4446 *)this
              );
  }
  return;
}

// ComponentEntryWidgetClass @ 14be149d0

TSubclassOf<UUserWidget> __thiscall
UDS_VM_GameOptionComponent::ComponentEntryWidgetClass(UDS_VM_GameOptionComponent *this)

{
  TObjectPtr<UClass> in_RDX;
  
  *(undefined8 *)in_RDX.field0_0x0 = 0;
  return (TSubclassOf<UUserWidget>)in_RDX.field0_0x0;
}

// InitViewModel @ 14be24dd0

void __thiscall UDS_VM_GameOptionComponent::InitViewModel(UDS_VM_GameOptionComponent *this)

{
  longlong *plVar1;
  FName local_18;
  int local_10;
  
  FDS_EntryBindingEventField::Reset(&this->EntryBindingEventField_Spin);
  FDS_EntryBindingEventField::Reset(&this->EntryBindingEventField_Combo);
  FDS_EntryBindingEventField::Reset(&this->EntryBindingEventField_Slider);
  FDS_EntryBindingEventField::Reset(&this->EntryBindingEventField_DropDown);
  FDS_EntryBindingEventField::Reset(&this->EntryBindingEventField_Key);
  FDS_EntryBindingEventField::Reset(&this->EntryBindingEventField_SoundSlider);
  FDS_EntryBindingEventField::Reset(&this->EntryBindingEventField_ColorButton);
  FDS_EntryBindingEventField::Reset(&this->EntryBindingEventField_TextField);
  plVar1 = &this->_padding_;
  local_10 = FFieldNotificationClassDescriptor::EntryBindingEventField_Spin.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::EntryBindingEventField_Spin.FieldName;
  (**(code **)(*plVar1 + 0x38))(plVar1,&local_18);
  local_10 = FFieldNotificationClassDescriptor::EntryBindingEventField_Combo.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::EntryBindingEventField_Combo.FieldName;
  (**(code **)(*plVar1 + 0x38))(plVar1,&local_18);
  local_10 = FFieldNotificationClassDescriptor::EntryBindingEventField_Slider.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::EntryBindingEventField_Slider.FieldName;
  (**(code **)(*plVar1 + 0x38))(plVar1,&local_18);
  local_10 = FFieldNotificationClassDescriptor::EntryBindingEventField_DropDown.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::EntryBindingEventField_DropDown.FieldName;
  (**(code **)(*plVar1 + 0x38))(plVar1,&local_18);
  local_10 = FFieldNotificationClassDescriptor::EntryBindingEventField_Key.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::EntryBindingEventField_Key.FieldName;
  (**(code **)(*plVar1 + 0x38))(plVar1,&local_18);
  local_10 = FFieldNotificationClassDescriptor::EntryBindingEventField_SoundSlider.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::EntryBindingEventField_SoundSlider.FieldName;
  (**(code **)(*plVar1 + 0x38))(plVar1,&local_18);
  local_10 = FFieldNotificationClassDescriptor::EntryBindingEventField_ColorButton.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::EntryBindingEventField_ColorButton.FieldName;
  (**(code **)(*plVar1 + 0x38))(plVar1,&local_18);
  local_10 = FFieldNotificationClassDescriptor::EntryBindingEventField_TextField.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::EntryBindingEventField_TextField.FieldName;
  (**(code **)(*plVar1 + 0x38))(plVar1,&local_18);
  return;
}

// OnSetViewModel @ 14be346d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
UDS_VM_GameOptionComponent::OnSetViewModel
          (UDS_VM_GameOptionComponent *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  TArray<TObjectPtr<UDS_ModelBase>,TSizedDefaultAllocator<32>_> *pTVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  UDS_UserObjectListItem *pUVar4;
  int iVar5;
  EDS_GameOptionType EVar6;
  UDS_LogManager *pUVar7;
  FDS_StringBaseTableRow *pFVar8;
  UDS_GameOptionManager *this_00;
  UDS_GameOptionData *this_01;
  FDS_ViewModelContext *pFVar9;
  FDS_ViewModelContext *pFVar10;
  UScriptStruct *pUVar11;
  UDS_ViewModelContextManager *this_02;
  UDS_M_GameOptionDataBase *pUVar12;
  UObject *pUVar13;
  UClass *pUVar14;
  FName *pFVar15;
  undefined8 *puVar16;
  longlong *plVar17;
  atomic<unsigned_char> *paVar18;
  TReferenceControllerBase<1> *pTVar19;
  FDS_ViewModelContext *pFVar20;
  uint uVar21;
  FDS_ViewModelContext *pFVar22;
  int *piVar23;
  FDS_ViewModelContext_OptionComponent *pFVar24;
  FDS_ViewModelContext *pFVar25;
  bool bVar26;
  undefined1 auStackY_7d8 [32];
  TArray<TObjectPtr<UDS_UserObjectListItem>,TSizedDefaultAllocator<32>_> local_788;
  TSharedPtr<FDS_ViewModelContext_OptionComponent,1> local_778;
  TSharedPtr<FDS_ViewModelContext,1> *local_768;
  UDS_UserObjectListItem *local_760;
  UDS_UserObjectListItem *local_758;
  UDS_UserObjectListItem *local_750;
  UDS_UserObjectListItem *local_748;
  UDS_UserObjectListItem *local_740;
  UDS_UserObjectListItem *local_738;
  UDS_UserObjectListItem *local_730;
  UDS_UserObjectListItem *local_728;
  UDS_UserObjectListItem *local_720;
  UObject *local_718;
  UDS_M_GameOptionDataBase *local_710;
  UDS_M_GameOptionDataBase *local_708;
  UObject *local_700;
  UObject *local_6f8;
  UDS_M_GameOptionDataBase *local_6f0;
  UObject *local_6e8;
  UObject *local_6e0;
  UDS_GameOptionData *local_6d8;
  int *local_6d0;
  FName local_6c8;
  int local_6c0;
  FName local_6b8;
  int local_6b0;
  FName local_6a8;
  int local_6a0;
  FName local_698;
  int local_690;
  FName local_688;
  int local_680;
  FName local_678;
  int local_670;
  FName local_668;
  int local_660;
  FName local_658;
  int local_650;
  FName local_648;
  int local_640;
  FName local_638;
  int local_630;
  FName local_628;
  int local_620;
  FName local_618;
  int local_610;
  FName local_608;
  int local_600;
  TSharedPtr<FDS_ViewModelContext,1> local_5f8;
  FName local_5e8;
  int local_5e0;
  FName local_5d8;
  int local_5d0;
  FName local_5c8;
  int local_5c0;
  FName local_5b8;
  int local_5b0;
  TSharedPtr<FDS_ViewModelContext,1> local_5a8;
  TSharedPtr<FDS_ViewModelContext,1> local_598;
  TSharedPtr<FDS_ViewModelContext,1> local_588;
  TSharedPtr<FDS_ViewModelContext,1> local_578;
  TSharedPtr<FDS_ViewModelContext,1> local_568;
  TSharedPtr<FDS_ViewModelContext,1> local_558;
  TSharedPtr<FDS_ViewModelContext,1> local_548;
  TSharedPtr<FDS_ViewModelContext,1> local_538;
  TSharedPtr<FDS_ViewModelContext,1> local_528;
  TSharedPtr<FDS_ViewModelContext,1> local_518;
  FDestructionSentinel local_508;
  FName local_4f0;
  FName local_4e8;
  FName local_4e0;
  FName local_4d8;
  FName local_4d0;
  FName local_4c8;
  FName local_4c0;
  FName local_4b8;
  FName local_4b0;
  FName local_4a8;
  FName local_4a0;
  FName local_498;
  FName local_490;
  FName local_488;
  FName local_480;
  undefined1 local_478 [8];
  TReferenceControllerBase<1> *local_470;
  undefined1 local_468 [8];
  TReferenceControllerBase<1> *local_460;
  undefined1 local_458 [8];
  TReferenceControllerBase<1> *local_450;
  undefined1 local_448 [8];
  TReferenceControllerBase<1> *local_440;
  undefined1 local_438 [8];
  TReferenceControllerBase<1> *local_430;
  undefined1 local_428 [8];
  TReferenceControllerBase<1> *local_420;
  undefined1 local_418 [8];
  TReferenceControllerBase<1> *local_410;
  undefined1 local_408 [8];
  TReferenceControllerBase<1> *local_400;
  FName local_3f8 [2];
  undefined1 local_3e8 [128];
  undefined1 local_368 [128];
  undefined1 local_2e8 [128];
  undefined1 local_268 [128];
  undefined1 local_1e8 [128];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_168;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_7d8;
  pTVar19 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar19 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar19->SharedReferenceCount = (atomic<int>)((int)pTVar19->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_768 = param_1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar19);
  local_568.Object = param_1->Object;
  local_568.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_568.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_568.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_568.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SafeCast<FDS_ViewModelContext_OptionComponent>(&local_778,&local_568);
  pFVar24 = local_778.Object;
  bVar26 = local_778.Object == (FDS_ViewModelContext_OptionComponent *)0x0;
  if (local_778.Object == (FDS_ViewModelContext_OptionComponent *)0x0) {
    pUVar7 = UDS_LogManager::GetInst();
    if (pUVar7 != (UDS_LogManager *)0x0) {
      pUVar7 = UDS_LogManager::GetInst();
      local_168._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_168,"UDS_VM_GameOptionComponent::OnSetViewModel",0x2a,Yes);
      UDS_LogManager::PrintLog
                (pUVar7,1,Warning,local_168.Ptr,0x1d,L"optionComponentContext is Invalid.");
      if ((void *)local_168._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_168._padding_);
      }
    }
LAB_14be347da:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_778.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_1->SharedReferenceCount).ReferenceController);
    return;
  }
  (**(code **)(this->_padding_ + 0x2e8))(this);
  if ((bVar26) &&
     (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar26)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar8 = FDS_GameOptionBaseTableRow::ID_OptionNameTable(pFVar24->GameOption);
  FDS_Text::SetTextFromStringTable(&this->OptionName,pFVar8);
  local_5e0 = FFieldNotificationClassDescriptor::OptionName.BitNumber;
  local_5e8 = FFieldNotificationClassDescriptor::OptionName.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_5e8);
  this_00 = UDS_GameOptionManager::GetInst();
  if (this_00 == (UDS_GameOptionManager *)0x0) goto LAB_14be347da;
  this_01 = UDS_GameOptionManager::GetGameOptionData(this_00,pFVar24->GameOption->ID);
  local_6d8 = this_01;
  if (this_01 == (UDS_GameOptionData *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_778.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_1->SharedReferenceCount).ReferenceController);
    return;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &this_01->GameOptionDataChangedToVM,(FWriteAccessScope *)&local_508);
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::ClearUnchecked
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             &this_01->GameOptionDataChangedToVM);
  if (local_508.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_508.Accessor,&local_508);
  }
  pFVar25 = (FDS_ViewModelContext *)0x0;
  local_788.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_788.ArrayNum = 0;
  local_788.ArrayMax = 0;
  iVar5 = UDS_GameOptionData::GetValueNum(this_01);
  pFVar22 = pFVar25;
  if (0 < iVar5) {
    do {
      local_720 = NewObject<UDS_UserObjectListItem>((UObject *)this);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (local_720 != (UDS_UserObjectListItem *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)local_720);
      }
      pFVar9 = ::operator_new(0x28);
      pFVar20 = pFVar25;
      if (pFVar9 != (FDS_ViewModelContext *)0x0) {
        *(undefined8 *)&pFVar9->field_0x1c = 0;
        *(undefined4 *)((longlong)&pFVar9[1]._padding_ + 4) = 0;
        *(undefined8 *)&pFVar9->DerivedStaticStruct = 0;
        (pFVar9->ViewModelName).ComparisonIndex = 0;
        (pFVar9->ViewModelName).Number = 0;
        pFVar9->ViewModelTemplateKey = None;
        pFVar9->_padding_ = (longlong)&___7FDS_ViewModelContext_OptionComponentSlot__6B_;
        pFVar20 = pFVar9;
      }
      pFVar10 = ::operator_new(0x20);
      pFVar9 = pFVar25;
      if (pFVar10 != (FDS_ViewModelContext *)0x0) {
        *(atomic<int> *)&pFVar10->DerivedStaticStruct = (atomic<int>)0x1;
        *(code **)&(pFVar10->ViewModelName).ComparisonIndex = ViewModelContextDeleter;
        pFVar10->_padding_ =
             (longlong)
             &
             ___7__TReferenceControllerWithDeleter_UFDS_ViewModelContext_OptionComponentSlot__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
        ;
        ((atomic<int> *)&pFVar10->DerivedStaticStruct)[1] = (atomic<int>)0x1;
        *(FDS_ViewModelContext **)&pFVar10->ViewModelTemplateKey = pFVar20;
        pFVar9 = pFVar10;
      }
      if ((pFVar20 == (FDS_ViewModelContext *)0x0) &&
         (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar26)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pUVar11 = FDS_ViewModelContext_OptionComponentSlot::StaticStruct();
      *(UScriptStruct **)&pFVar20->DerivedStaticStruct = pUVar11;
      this_02 = UDS_ViewModelContextManager::GetInst();
      if (this_02 != (UDS_ViewModelContextManager *)0x0) {
        if (pFVar9 != (FDS_ViewModelContext *)0x0) {
          LOCK();
          *(atomic<int> *)&pFVar9->DerivedStaticStruct =
               (atomic<int>)((int)*(atomic<int> *)&pFVar9->DerivedStaticStruct + 1);
          UNLOCK();
        }
        local_5f8.Object = pFVar20;
        local_5f8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar9;
        UDS_ViewModelContextManager::RegisterContext(this_02,&local_5f8);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_5f8.SharedReferenceCount.ReferenceController);
      }
      pFVar20->ViewModelTemplateKey = W_OptionComponentSlot;
      EVar6 = UDS_GameOptionData::GetGameOptionID(this_01);
      *(EDS_GameOptionType *)&pFVar20[1]._padding_ = EVar6;
      *(int *)((longlong)&pFVar20[1]._padding_ + 4) = (int)pFVar22;
      if (pFVar9 != (FDS_ViewModelContext *)0x0) {
        LOCK();
        *(atomic<int> *)&pFVar9->DerivedStaticStruct =
             (atomic<int>)((int)*(atomic<int> *)&pFVar9->DerivedStaticStruct + 1);
        UNLOCK();
      }
      local_598.Object = pFVar20;
      local_598.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar9;
      UDS_UserObjectListItem::AddContext(local_720,&local_598);
      if (((local_788.AllocatorInstance.Data <= (FScriptContainerElement *)&local_720) &&
          ((FScriptContainerElement *)&local_720 <
           local_788.AllocatorInstance.Data + (longlong)local_788.ArrayMax * 8)) &&
         (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar26)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar5 = local_788.ArrayNum;
      if (local_788.ArrayNum == local_788.ArrayMax) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&local_788.AllocatorInstance,&local_788.ArrayMax);
      }
      local_788.ArrayNum = iVar5 + 1;
      *(UDS_UserObjectListItem **)(local_788.AllocatorInstance.Data + (longlong)iVar5 * 8) =
           local_720;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (local_720 != (UDS_UserObjectListItem *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)local_720);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)pFVar9);
      uVar21 = (int)pFVar22 + 1;
      iVar5 = UDS_GameOptionData::GetValueNum(this_01);
      pFVar22 = (FDS_ViewModelContext *)(ulonglong)uVar21;
      pFVar24 = local_778.Object;
      param_1 = local_768;
    } while ((int)uVar21 < iVar5);
  }
  piVar23 = &(this->ChildModelList).ArrayMax;
  (this->ChildModelList).ArrayNum = 0;
  local_6d0 = piVar23;
  if (*piVar23 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->ChildModelList).AllocatorInstance,0,piVar23);
  }
  if ((pFVar24 == (FDS_ViewModelContext_OptionComponent *)0x0) &&
     (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar26)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar5 = local_788.ArrayMax;
  switch(pFVar24->GameOption->ComponentType) {
  case SpinButton:
    local_788._8_8_ = (ulonglong)(uint)local_788.ArrayMax << 0x20;
    if (iVar5 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,&local_788.AllocatorInstance,0,&local_788.ArrayMax);
    }
    local_760 = NewObject<UDS_UserObjectListItem>((UObject *)this);
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
LAB_14be34c1f:
      if (local_760 != (UDS_UserObjectListItem *)0x0) {
        pUVar13 = GetTransientPackageAsObject();
        FObjectInitializer::AssertIfInConstructor
                  (pUVar13,
                   L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                  );
        pUVar14 = Z_Construct_UClass_UDS_M_GameOptionDataSpin_NoRegister();
        FStaticConstructObjectParameters::FStaticConstructObjectParameters
                  ((FStaticConstructObjectParameters *)local_3e8,pUVar14);
        local_3e8._8_8_ = pUVar13;
        pUVar13 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_3e8);
        if (local_3e8._64_8_ != 0) {
          plVar17 = (longlong *)(local_3e8 + 0x50);
          if ((longlong *)local_3e8._104_8_ != (longlong *)0x0) {
            plVar17 = (longlong *)local_3e8._104_8_;
          }
          (**(code **)(*plVar17 + 0x10))();
        }
        if (UE::GC::GIsIncrementalReachabilityPending == false) {
          if (pUVar13 == (UObject *)0x0) goto LAB_14be34f70;
        }
        else {
          if (pUVar13 == (UObject *)0x0) {
LAB_14be34f70:
            bVar26 = UE::Assert::Private::ExecCheckImplInternal
                               (&bGEnsureHasExecuted<_738278395414052794>,false,
                                "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\DS_VM_GameOptionComponent.cpp"
                                ,0x46,"false");
            if (bVar26) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            break;
          }
          UE::GC::MarkAsReachable(pUVar13);
        }
        pTVar1 = &this->ChildModelList;
        local_718 = pUVar13;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable(pUVar13);
        }
        pFVar2 = (pTVar1->AllocatorInstance).Data;
        if (((pFVar2 <= (FScriptContainerElement *)&local_718) &&
            ((FScriptContainerElement *)&local_718 <
             pFVar2 + (longlong)(this->ChildModelList).ArrayMax * 8)) &&
           (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar26)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar5 = (this->ChildModelList).ArrayNum;
        if (iVar5 == (this->ChildModelList).ArrayMax) {
          iVar5 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&pTVar1->AllocatorInstance,piVar23);
        }
        (this->ChildModelList).ArrayNum = iVar5 + 1;
        *(UObject **)((pTVar1->AllocatorInstance).Data + (longlong)iVar5 * 8) = local_718;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_718 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(local_718);
        }
        EVar6 = UDS_GameOptionData::GetGameOptionID(this_01);
        FDS_DataContainer::SetData<int,enum_EDS_GameOptionData>
                  ((FDS_DataContainer *)&pUVar13[1].field_0x18,GameOptionID,EVar6);
        FDS_DataContainer::SetData<int,enum_EDS_GameOptionData>
                  ((FDS_DataContainer *)&pUVar13[1].field_0x18,GameOptionValueIndex,0);
        pUVar4 = local_760;
        pcVar3 = *(code **)(*(longlong *)pUVar13 + 0x308);
        ::FName::FName(&local_4a8,L"");
        pFVar15 = ::FName::FName(&local_4a0,L"");
        puVar16 = (undefined8 *)(*pcVar3)(pUVar13,local_478,0x151,*pFVar15);
        local_588.Object = (FDS_ViewModelContext *)*puVar16;
        local_588.SharedReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)puVar16[1];
        if (local_588.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
           ) {
          LOCK();
          (local_588.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_588.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
          ;
          UNLOCK();
        }
        UDS_UserObjectListItem::AddContext(pUVar4,&local_588);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_470);
        if (((local_788.AllocatorInstance.Data <= (FScriptContainerElement *)&local_760) &&
            ((FScriptContainerElement *)&local_760 <
             local_788.AllocatorInstance.Data + (longlong)local_788.ArrayMax * 8)) &&
           (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar26)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar5 = local_788.ArrayNum;
        if (local_788.ArrayNum == local_788.ArrayMax) {
          iVar5 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&local_788.AllocatorInstance,&local_788.ArrayMax);
        }
        local_788.ArrayNum = iVar5 + 1;
        *(UDS_UserObjectListItem **)(local_788.AllocatorInstance.Data + (longlong)iVar5 * 8) =
             local_760;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (local_760 != (UDS_UserObjectListItem *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)local_760);
        }
        FDS_EntryBindingEventField::SetUserObjectList(&this->EntryBindingEventField_Spin,&local_788)
        ;
        local_5d0 = FFieldNotificationClassDescriptor::EntryBindingEventField_Spin.BitNumber;
        local_5d8 = FFieldNotificationClassDescriptor::EntryBindingEventField_Spin.FieldName;
        (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_5d8);
        goto switchD_14be34bc6_default;
      }
    }
    else if (local_760 != (UDS_UserObjectListItem *)0x0) {
      UE::GC::MarkAsReachable((UObject *)local_760);
      goto LAB_14be34c1f;
    }
    bVar26 = UE::Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<_738278395414052797>,false,
                        "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\DS_VM_GameOptionComponent.cpp"
                        ,0x43,"false");
    if (bVar26) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    break;
  case ComboBox:
    local_788._8_8_ = (ulonglong)(uint)local_788.ArrayMax << 0x20;
    if (iVar5 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,&local_788.AllocatorInstance,0,&local_788.ArrayMax);
    }
    iVar5 = UDS_GameOptionData::GetValueNum(this_01);
    if (0 < iVar5) {
      pTVar1 = &this->ChildModelList;
      while (local_758 = NewObject<UDS_UserObjectListItem>((UObject *)this),
            UE::GC::GIsIncrementalReachabilityPending == false) {
LAB_14be3501a:
        if (local_758 == (UDS_UserObjectListItem *)0x0) goto LAB_14be3534c;
        pUVar13 = GetTransientPackageAsObject();
        pUVar12 = NewObject<UDS_M_GameOptionDataBase>(pUVar13);
        if (UE::GC::GIsIncrementalReachabilityPending == false) {
          if (pUVar12 == (UDS_M_GameOptionDataBase *)0x0) goto LAB_14be352f8;
        }
        else {
          if (pUVar12 == (UDS_M_GameOptionDataBase *)0x0) {
LAB_14be352f8:
            iVar5 = 0x5d;
            paVar18 = &bGEnsureHasExecuted<_738278395414052771>;
            goto LAB_14be35305;
          }
          UE::GC::MarkAsReachable((UObject *)pUVar12);
        }
        local_710 = pUVar12;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)pUVar12);
        }
        pFVar2 = (pTVar1->AllocatorInstance).Data;
        if (((pFVar2 <= (FScriptContainerElement *)&local_710) &&
            ((FScriptContainerElement *)&local_710 <
             pFVar2 + (longlong)(this->ChildModelList).ArrayMax * 8)) &&
           (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar26)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar5 = (this->ChildModelList).ArrayNum;
        if (iVar5 == (this->ChildModelList).ArrayMax) {
          iVar5 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&pTVar1->AllocatorInstance,piVar23);
        }
        (this->ChildModelList).ArrayNum = iVar5 + 1;
        *(UDS_M_GameOptionDataBase **)((pTVar1->AllocatorInstance).Data + (longlong)iVar5 * 8) =
             local_710;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (local_710 != (UDS_M_GameOptionDataBase *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)local_710);
        }
        EVar6 = UDS_GameOptionData::GetGameOptionID(this_01);
        FDS_DataContainer::SetData<int,enum_EDS_GameOptionData>
                  ((FDS_DataContainer *)&pUVar12->_padding_,GameOptionID,EVar6);
        FDS_DataContainer::SetData<int,enum_EDS_GameOptionData>
                  ((FDS_DataContainer *)&pUVar12->_padding_,GameOptionValueIndex,(int)pFVar25);
        pUVar4 = local_758;
        pcVar3 = *(code **)(pUVar12->_padding_ + 0x308);
        ::FName::FName(&local_498,L"");
        pFVar15 = ::FName::FName(&local_490,L"");
        puVar16 = (undefined8 *)(*pcVar3)(pUVar12,local_468,0x153,*pFVar15);
        local_578.Object = (FDS_ViewModelContext *)*puVar16;
        local_578.SharedReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)puVar16[1];
        if (local_578.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
           ) {
          LOCK();
          (local_578.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_578.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
          ;
          UNLOCK();
        }
        UDS_UserObjectListItem::AddContext(pUVar4,&local_578);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_460);
        if (((local_788.AllocatorInstance.Data <= (FScriptContainerElement *)&local_758) &&
            ((FScriptContainerElement *)&local_758 <
             local_788.AllocatorInstance.Data + (longlong)local_788.ArrayMax * 8)) &&
           (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar26)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar5 = local_788.ArrayNum;
        if (local_788.ArrayNum == local_788.ArrayMax) {
          iVar5 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&local_788.AllocatorInstance,&local_788.ArrayMax);
        }
        local_788.ArrayNum = iVar5 + 1;
        *(UDS_UserObjectListItem **)(local_788.AllocatorInstance.Data + (longlong)iVar5 * 8) =
             local_758;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (local_758 != (UDS_UserObjectListItem *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)local_758);
        }
        this_01 = local_6d8;
        uVar21 = (int)pFVar25 + 1;
        pFVar25 = (FDS_ViewModelContext *)(ulonglong)uVar21;
        iVar5 = UDS_GameOptionData::GetValueNum(local_6d8);
        piVar23 = local_6d0;
        param_1 = local_768;
        if (iVar5 <= (int)uVar21) goto LAB_14be352ae;
      }
      if (local_758 != (UDS_UserObjectListItem *)0x0) {
        UE::GC::MarkAsReachable((UObject *)local_758);
        goto LAB_14be3501a;
      }
LAB_14be3534c:
      iVar5 = 0x5a;
      paVar18 = &bGEnsureHasExecuted<_738278395414052774>;
LAB_14be35305:
      bVar26 = UE::Assert::Private::ExecCheckImplInternal
                         (paVar18,false,
                          "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\DS_VM_GameOptionComponent.cpp"
                          ,iVar5,"false");
      if (bVar26) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (local_788.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_788.AllocatorInstance.Data);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_778.SharedReferenceCount.ReferenceController);
      pTVar19 = (local_768->SharedReferenceCount).ReferenceController;
      goto LAB_14be36af2;
    }
LAB_14be352ae:
    FDS_EntryBindingEventField::SetUserObjectList(&this->EntryBindingEventField_Combo,&local_788);
    local_5c0 = FFieldNotificationClassDescriptor::EntryBindingEventField_Combo.BitNumber;
    local_5c8 = FFieldNotificationClassDescriptor::EntryBindingEventField_Combo.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_5c8);
  default:
switchD_14be34bc6_default:
    local_670 = FFieldNotificationClassDescriptor::VisibleSpin.BitNumber;
    plVar17 = &this->_padding_;
    local_678 = FFieldNotificationClassDescriptor::VisibleSpin.FieldName;
    (**(code **)(*plVar17 + 0x38))(plVar17,&local_678);
    local_660 = FFieldNotificationClassDescriptor::VisibleCombo.BitNumber;
    local_668 = FFieldNotificationClassDescriptor::VisibleCombo.FieldName;
    (**(code **)(this->_padding_ + 0x38))(plVar17,&local_668);
    local_650 = FFieldNotificationClassDescriptor::VisibleSlider.BitNumber;
    local_658 = FFieldNotificationClassDescriptor::VisibleSlider.FieldName;
    (**(code **)(this->_padding_ + 0x38))(plVar17,&local_658);
    local_640 = FFieldNotificationClassDescriptor::VisibleDropDown.BitNumber;
    local_648 = FFieldNotificationClassDescriptor::VisibleDropDown.FieldName;
    (**(code **)(this->_padding_ + 0x38))(plVar17,&local_648);
    local_630 = FFieldNotificationClassDescriptor::VisibleKey.BitNumber;
    local_638 = FFieldNotificationClassDescriptor::VisibleKey.FieldName;
    (**(code **)(this->_padding_ + 0x38))(plVar17,&local_638);
    local_6c0 = FFieldNotificationClassDescriptor::VisibleSoundSlider.BitNumber;
    local_6c8 = FFieldNotificationClassDescriptor::VisibleSoundSlider.FieldName;
    (**(code **)(this->_padding_ + 0x38))(plVar17,&local_6c8);
    local_610 = FFieldNotificationClassDescriptor::VisibleColorButton.BitNumber;
    local_618 = FFieldNotificationClassDescriptor::VisibleColorButton.FieldName;
    (**(code **)(this->_padding_ + 0x38))(plVar17,&local_618);
    local_600 = FFieldNotificationClassDescriptor::VisibleTextField.BitNumber;
    local_608 = FFieldNotificationClassDescriptor::VisibleTextField.FieldName;
    (**(code **)(this->_padding_ + 0x38))(plVar17,&local_608);
    break;
  case Slider:
    local_788._8_8_ = (ulonglong)(uint)local_788.ArrayMax << 0x20;
    if (iVar5 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,&local_788.AllocatorInstance,0,&local_788.ArrayMax);
    }
    local_750 = NewObject<UDS_UserObjectListItem>((UObject *)this);
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
LAB_14be353b0:
      if (local_750 != (UDS_UserObjectListItem *)0x0) {
        pUVar13 = GetTransientPackageAsObject();
        pUVar12 = NewObject<UDS_M_GameOptionDataBase>(pUVar13);
        if (UE::GC::GIsIncrementalReachabilityPending == false) {
          if (pUVar12 == (UDS_M_GameOptionDataBase *)0x0) goto LAB_14be356a6;
        }
        else {
          if (pUVar12 == (UDS_M_GameOptionDataBase *)0x0) {
LAB_14be356a6:
            bVar26 = UE::Assert::Private::ExecCheckImplInternal
                               (&bGEnsureHasExecuted<_738278395414052749>,false,
                                "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\DS_VM_GameOptionComponent.cpp"
                                ,0x73,"false");
            if (bVar26) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            break;
          }
          UE::GC::MarkAsReachable((UObject *)pUVar12);
        }
        pTVar1 = &this->ChildModelList;
        local_708 = pUVar12;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)pUVar12);
        }
        pFVar2 = (pTVar1->AllocatorInstance).Data;
        if (((pFVar2 <= (FScriptContainerElement *)&local_708) &&
            ((FScriptContainerElement *)&local_708 <
             pFVar2 + (longlong)(this->ChildModelList).ArrayMax * 8)) &&
           (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar26)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar5 = (this->ChildModelList).ArrayNum;
        if (iVar5 == (this->ChildModelList).ArrayMax) {
          iVar5 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&pTVar1->AllocatorInstance,piVar23);
        }
        (this->ChildModelList).ArrayNum = iVar5 + 1;
        *(UDS_M_GameOptionDataBase **)((pTVar1->AllocatorInstance).Data + (longlong)iVar5 * 8) =
             local_708;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (local_708 != (UDS_M_GameOptionDataBase *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)local_708);
        }
        EVar6 = UDS_GameOptionData::GetGameOptionID(this_01);
        FDS_DataContainer::SetData<int,enum_EDS_GameOptionData>
                  ((FDS_DataContainer *)&pUVar12->_padding_,GameOptionID,EVar6);
        FDS_DataContainer::SetData<int,enum_EDS_GameOptionData>
                  ((FDS_DataContainer *)&pUVar12->_padding_,GameOptionValueIndex,0);
        pUVar4 = local_750;
        pcVar3 = *(code **)(pUVar12->_padding_ + 0x308);
        ::FName::FName(&local_488,L"");
        pFVar15 = ::FName::FName(&local_480,L"");
        puVar16 = (undefined8 *)(*pcVar3)(pUVar12,local_458,0x155,*pFVar15);
        local_5a8.Object = (FDS_ViewModelContext *)*puVar16;
        local_5a8.SharedReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)puVar16[1];
        if (local_5a8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
           ) {
          LOCK();
          (local_5a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_5a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
          ;
          UNLOCK();
        }
        UDS_UserObjectListItem::AddContext(pUVar4,&local_5a8);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_450);
        if (((local_788.AllocatorInstance.Data <= (FScriptContainerElement *)&local_750) &&
            ((FScriptContainerElement *)&local_750 <
             local_788.AllocatorInstance.Data + (longlong)local_788.ArrayMax * 8)) &&
           (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar26)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar5 = local_788.ArrayNum;
        if (local_788.ArrayNum == local_788.ArrayMax) {
          iVar5 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&local_788.AllocatorInstance,&local_788.ArrayMax);
        }
        local_788.ArrayNum = iVar5 + 1;
        *(UDS_UserObjectListItem **)(local_788.AllocatorInstance.Data + (longlong)iVar5 * 8) =
             local_750;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (local_750 != (UDS_UserObjectListItem *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)local_750);
        }
        FDS_EntryBindingEventField::SetUserObjectList
                  (&this->EntryBindingEventField_Slider,&local_788);
        local_5b0 = FFieldNotificationClassDescriptor::EntryBindingEventField_Slider.BitNumber;
        local_5b8 = FFieldNotificationClassDescriptor::EntryBindingEventField_Slider.FieldName;
        (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_5b8);
        goto switchD_14be34bc6_default;
      }
    }
    else if (local_750 != (UDS_UserObjectListItem *)0x0) {
      UE::GC::MarkAsReachable((UObject *)local_750);
      goto LAB_14be353b0;
    }
    bVar26 = UE::Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<_738278395414052752>,false,
                        "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\DS_VM_GameOptionComponent.cpp"
                        ,0x70,"false");
    if (bVar26) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    break;
  case Dropdown:
    local_788._8_8_ = (ulonglong)(uint)local_788.ArrayMax << 0x20;
    if (iVar5 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,&local_788.AllocatorInstance,0,&local_788.ArrayMax);
    }
    local_748 = NewObject<UDS_UserObjectListItem>((UObject *)this);
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
LAB_14be35731:
      if (local_748 != (UDS_UserObjectListItem *)0x0) {
        pUVar13 = GetTransientPackageAsObject();
        FObjectInitializer::AssertIfInConstructor
                  (pUVar13,
                   L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                  );
        pUVar14 = Z_Construct_UClass_UDS_M_GameOptionDropdown_NoRegister();
        FStaticConstructObjectParameters::FStaticConstructObjectParameters
                  ((FStaticConstructObjectParameters *)local_368,pUVar14);
        local_368._8_8_ = pUVar13;
        pUVar13 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_368);
        if (local_368._64_8_ != 0) {
          plVar17 = (longlong *)(local_368 + 0x50);
          if ((longlong *)local_368._104_8_ != (longlong *)0x0) {
            plVar17 = (longlong *)local_368._104_8_;
          }
          (**(code **)(*plVar17 + 0x10))();
        }
        if (UE::GC::GIsIncrementalReachabilityPending == false) {
          if (pUVar13 == (UObject *)0x0) goto LAB_14be35a7c;
        }
        else {
          if (pUVar13 == (UObject *)0x0) {
LAB_14be35a7c:
            bVar26 = UE::Assert::Private::ExecCheckImplInternal
                               (&bGEnsureHasExecuted<_738278395414052727>,false,
                                "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\DS_VM_GameOptionComponent.cpp"
                                ,0x89,"false");
            if (bVar26) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            break;
          }
          UE::GC::MarkAsReachable(pUVar13);
        }
        pTVar1 = &this->ChildModelList;
        local_700 = pUVar13;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable(pUVar13);
        }
        pFVar2 = (pTVar1->AllocatorInstance).Data;
        if (((pFVar2 <= (FScriptContainerElement *)&local_700) &&
            ((FScriptContainerElement *)&local_700 <
             pFVar2 + (longlong)(this->ChildModelList).ArrayMax * 8)) &&
           (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar26)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar5 = (this->ChildModelList).ArrayNum;
        if (iVar5 == (this->ChildModelList).ArrayMax) {
          iVar5 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&pTVar1->AllocatorInstance,piVar23);
        }
        (this->ChildModelList).ArrayNum = iVar5 + 1;
        *(UObject **)((pTVar1->AllocatorInstance).Data + (longlong)iVar5 * 8) = local_700;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_700 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(local_700);
        }
        EVar6 = UDS_GameOptionData::GetGameOptionID(this_01);
        FDS_DataContainer::SetData<int,enum_EDS_GameOptionData>
                  ((FDS_DataContainer *)&pUVar13[1].field_0x18,GameOptionID,EVar6);
        FDS_DataContainer::SetData<int,enum_EDS_GameOptionData>
                  ((FDS_DataContainer *)&pUVar13[1].field_0x18,GameOptionValueIndex,0);
        pUVar4 = local_748;
        pcVar3 = *(code **)(*(longlong *)pUVar13 + 0x308);
        ::FName::FName(local_3f8,L"");
        pFVar15 = ::FName::FName(&local_4f0,L"");
        puVar16 = (undefined8 *)(*pcVar3)(pUVar13,local_448,0x152,*pFVar15);
        local_558.Object = (FDS_ViewModelContext *)*puVar16;
        local_558.SharedReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)puVar16[1];
        if (local_558.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
           ) {
          LOCK();
          (local_558.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_558.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
          ;
          UNLOCK();
        }
        UDS_UserObjectListItem::AddContext(pUVar4,&local_558);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_440);
        if (((local_788.AllocatorInstance.Data <= (FScriptContainerElement *)&local_748) &&
            ((FScriptContainerElement *)&local_748 <
             local_788.AllocatorInstance.Data + (longlong)local_788.ArrayMax * 8)) &&
           (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar26)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar5 = local_788.ArrayNum;
        if (local_788.ArrayNum == local_788.ArrayMax) {
          iVar5 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&local_788.AllocatorInstance,&local_788.ArrayMax);
        }
        local_788.ArrayNum = iVar5 + 1;
        *(UDS_UserObjectListItem **)(local_788.AllocatorInstance.Data + (longlong)iVar5 * 8) =
             local_748;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (local_748 != (UDS_UserObjectListItem *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)local_748);
        }
        FDS_EntryBindingEventField::SetUserObjectList
                  (&this->EntryBindingEventField_DropDown,&local_788);
        local_620 = FFieldNotificationClassDescriptor::EntryBindingEventField_DropDown.BitNumber;
        local_628 = FFieldNotificationClassDescriptor::EntryBindingEventField_DropDown.FieldName;
        (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_628);
        goto switchD_14be34bc6_default;
      }
    }
    else if (local_748 != (UDS_UserObjectListItem *)0x0) {
      UE::GC::MarkAsReachable((UObject *)local_748);
      goto LAB_14be35731;
    }
    bVar26 = UE::Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<_738278395414052730>,false,
                        "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\DS_VM_GameOptionComponent.cpp"
                        ,0x86,"false");
    if (bVar26) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    break;
  case KeySettings:
    local_788._8_8_ = (ulonglong)(uint)local_788.ArrayMax << 0x20;
    if (iVar5 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,&local_788.AllocatorInstance,0,&local_788.ArrayMax);
    }
    iVar5 = UDS_GameOptionData::GetValueNum(this_01);
    if (0 < iVar5) {
      pTVar1 = &this->ChildModelList;
      do {
        local_740 = NewObject<UDS_UserObjectListItem>((UObject *)this);
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          if (local_740 != (UDS_UserObjectListItem *)0x0) {
            UE::GC::MarkAsReachable((UObject *)local_740);
            goto LAB_14be35b2a;
          }
LAB_14be35e67:
          iVar5 = 0x9d;
          paVar18 = &bGEnsureHasExecuted<_738278395414052707>;
          goto LAB_14be35305;
        }
LAB_14be35b2a:
        if (local_740 == (UDS_UserObjectListItem *)0x0) goto LAB_14be35e67;
        pUVar13 = GetTransientPackageAsObject();
        FObjectInitializer::AssertIfInConstructor
                  (pUVar13,
                   L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                  );
        pUVar14 = Z_Construct_UClass_UDS_M_GameOptionDataKey_NoRegister();
        FStaticConstructObjectParameters::FStaticConstructObjectParameters
                  ((FStaticConstructObjectParameters *)local_2e8,pUVar14);
        local_2e8._8_8_ = pUVar13;
        pUVar13 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_2e8);
        if (local_2e8._64_8_ != 0) {
          plVar17 = (longlong *)(local_2e8 + 0x50);
          if ((longlong *)local_2e8._104_8_ != (longlong *)0x0) {
            plVar17 = (longlong *)local_2e8._104_8_;
          }
          (**(code **)(*plVar17 + 0x10))();
        }
        if (UE::GC::GIsIncrementalReachabilityPending == false) {
          if (pUVar13 == (UObject *)0x0) goto LAB_14be35e55;
        }
        else {
          if (pUVar13 == (UObject *)0x0) {
LAB_14be35e55:
            iVar5 = 0xa0;
            paVar18 = &bGEnsureHasExecuted<_738278395414052704>;
            goto LAB_14be35305;
          }
          UE::GC::MarkAsReachable(pUVar13);
        }
        local_6f8 = pUVar13;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable(pUVar13);
        }
        pFVar2 = (pTVar1->AllocatorInstance).Data;
        if (((pFVar2 <= (FScriptContainerElement *)&local_6f8) &&
            ((FScriptContainerElement *)&local_6f8 <
             pFVar2 + (longlong)(this->ChildModelList).ArrayMax * 8)) &&
           (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar26)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar5 = (this->ChildModelList).ArrayNum;
        if (iVar5 == (this->ChildModelList).ArrayMax) {
          iVar5 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&pTVar1->AllocatorInstance,piVar23);
        }
        (this->ChildModelList).ArrayNum = iVar5 + 1;
        *(UObject **)((pTVar1->AllocatorInstance).Data + (longlong)iVar5 * 8) = local_6f8;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_6f8 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(local_6f8);
        }
        EVar6 = UDS_GameOptionData::GetGameOptionID(this_01);
        FDS_DataContainer::SetData<int,enum_EDS_GameOptionData>
                  ((FDS_DataContainer *)&pUVar13[1].field_0x18,GameOptionID,EVar6);
        FDS_DataContainer::SetData<int,enum_EDS_GameOptionData>
                  ((FDS_DataContainer *)&pUVar13[1].field_0x18,GameOptionValueIndex,(int)pFVar25);
        pUVar4 = local_740;
        pcVar3 = *(code **)(*(longlong *)pUVar13 + 0x308);
        ::FName::FName(&local_4e8,L"");
        pFVar15 = ::FName::FName(&local_4e0,L"");
        puVar16 = (undefined8 *)(*pcVar3)(pUVar13,local_438,0x154,*pFVar15);
        local_548.Object = (FDS_ViewModelContext *)*puVar16;
        local_548.SharedReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)puVar16[1];
        if (local_548.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
           ) {
          LOCK();
          (local_548.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_548.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
          ;
          UNLOCK();
        }
        UDS_UserObjectListItem::AddContext(pUVar4,&local_548);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_430);
        if (((local_788.AllocatorInstance.Data <= (FScriptContainerElement *)&local_740) &&
            ((FScriptContainerElement *)&local_740 <
             local_788.AllocatorInstance.Data + (longlong)local_788.ArrayMax * 8)) &&
           (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar26)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar5 = local_788.ArrayNum;
        if (local_788.ArrayNum == local_788.ArrayMax) {
          iVar5 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&local_788.AllocatorInstance,&local_788.ArrayMax);
        }
        local_788.ArrayNum = iVar5 + 1;
        *(UDS_UserObjectListItem **)(local_788.AllocatorInstance.Data + (longlong)iVar5 * 8) =
             local_740;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (local_740 != (UDS_UserObjectListItem *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)local_740);
        }
        this_01 = local_6d8;
        uVar21 = (int)pFVar25 + 1;
        pFVar25 = (FDS_ViewModelContext *)(ulonglong)uVar21;
        iVar5 = UDS_GameOptionData::GetValueNum(local_6d8);
        piVar23 = local_6d0;
        param_1 = local_768;
      } while ((int)uVar21 < iVar5);
    }
    FDS_EntryBindingEventField::SetUserObjectList(&this->EntryBindingEventField_Key,&local_788);
    local_6b0 = FFieldNotificationClassDescriptor::EntryBindingEventField_Key.BitNumber;
    local_6b8 = FFieldNotificationClassDescriptor::EntryBindingEventField_Key.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_6b8);
    goto switchD_14be34bc6_default;
  case SoundSlider:
    local_788._8_8_ = (ulonglong)(uint)local_788.ArrayMax << 0x20;
    if (iVar5 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,&local_788.AllocatorInstance,0,&local_788.ArrayMax);
    }
    local_738 = NewObject<UDS_UserObjectListItem>((UObject *)this);
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
LAB_14be35ece:
      if (local_738 != (UDS_UserObjectListItem *)0x0) {
        pUVar13 = GetTransientPackageAsObject();
        pUVar12 = NewObject<UDS_M_GameOptionDataBase>(pUVar13);
        if (UE::GC::GIsIncrementalReachabilityPending == false) {
          if (pUVar12 == (UDS_M_GameOptionDataBase *)0x0) goto LAB_14be361bb;
        }
        else {
          if (pUVar12 == (UDS_M_GameOptionDataBase *)0x0) {
LAB_14be361bb:
            bVar26 = UE::Assert::Private::ExecCheckImplInternal
                               (&bGEnsureHasExecuted<_738278395414052682>,false,
                                "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\DS_VM_GameOptionComponent.cpp"
                                ,0xb6,"false");
            if (bVar26) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            break;
          }
          UE::GC::MarkAsReachable((UObject *)pUVar12);
        }
        pTVar1 = &this->ChildModelList;
        local_6f0 = pUVar12;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)pUVar12);
        }
        pFVar2 = (pTVar1->AllocatorInstance).Data;
        if (((pFVar2 <= (FScriptContainerElement *)&local_6f0) &&
            ((FScriptContainerElement *)&local_6f0 <
             pFVar2 + (longlong)(this->ChildModelList).ArrayMax * 8)) &&
           (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar26)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar5 = (this->ChildModelList).ArrayNum;
        if (iVar5 == (this->ChildModelList).ArrayMax) {
          iVar5 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&pTVar1->AllocatorInstance,piVar23);
        }
        (this->ChildModelList).ArrayNum = iVar5 + 1;
        *(UDS_M_GameOptionDataBase **)((pTVar1->AllocatorInstance).Data + (longlong)iVar5 * 8) =
             local_6f0;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (local_6f0 != (UDS_M_GameOptionDataBase *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)local_6f0);
        }
        EVar6 = UDS_GameOptionData::GetGameOptionID(this_01);
        FDS_DataContainer::SetData<int,enum_EDS_GameOptionData>
                  ((FDS_DataContainer *)&pUVar12->_padding_,GameOptionID,EVar6);
        FDS_DataContainer::SetData<int,enum_EDS_GameOptionData>
                  ((FDS_DataContainer *)&pUVar12->_padding_,GameOptionValueIndex,0);
        pUVar4 = local_738;
        pcVar3 = *(code **)(pUVar12->_padding_ + 0x308);
        ::FName::FName(&local_4b0,L"");
        pFVar15 = ::FName::FName(&local_4d8,L"");
        puVar16 = (undefined8 *)(*pcVar3)(pUVar12,local_428,0x156,*pFVar15);
        local_538.Object = (FDS_ViewModelContext *)*puVar16;
        local_538.SharedReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)puVar16[1];
        if (local_538.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
           ) {
          LOCK();
          (local_538.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_538.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
          ;
          UNLOCK();
        }
        UDS_UserObjectListItem::AddContext(pUVar4,&local_538);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_420);
        if (((local_788.AllocatorInstance.Data <= (FScriptContainerElement *)&local_738) &&
            ((FScriptContainerElement *)&local_738 <
             local_788.AllocatorInstance.Data + (longlong)local_788.ArrayMax * 8)) &&
           (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar26)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar5 = local_788.ArrayNum;
        if (local_788.ArrayNum == local_788.ArrayMax) {
          iVar5 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&local_788.AllocatorInstance,&local_788.ArrayMax);
        }
        local_788.ArrayNum = iVar5 + 1;
        *(UDS_UserObjectListItem **)(local_788.AllocatorInstance.Data + (longlong)iVar5 * 8) =
             local_738;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (local_738 != (UDS_UserObjectListItem *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)local_738);
        }
        FDS_EntryBindingEventField::SetUserObjectList
                  (&this->EntryBindingEventField_SoundSlider,&local_788);
        local_6a0 = FFieldNotificationClassDescriptor::EntryBindingEventField_SoundSlider.BitNumber;
        local_6a8 = FFieldNotificationClassDescriptor::EntryBindingEventField_SoundSlider.FieldName;
        (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_6a8);
        goto switchD_14be34bc6_default;
      }
    }
    else if (local_738 != (UDS_UserObjectListItem *)0x0) {
      UE::GC::MarkAsReachable((UObject *)local_738);
      goto LAB_14be35ece;
    }
    bVar26 = UE::Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<_738278395414052685>,false,
                        "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\DS_VM_GameOptionComponent.cpp"
                        ,0xb3,"false");
    if (bVar26) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    break;
  case ColorButton:
    local_788._8_8_ = (ulonglong)(uint)local_788.ArrayMax << 0x20;
    if (iVar5 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,&local_788.AllocatorInstance,0,&local_788.ArrayMax);
    }
    iVar5 = UDS_GameOptionData::GetValueNum(this_01);
    if (0 < iVar5) {
      pTVar1 = &this->ChildModelList;
      do {
        local_730 = NewObject<UDS_UserObjectListItem>((UObject *)this);
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          if (local_730 != (UDS_UserObjectListItem *)0x0) {
            UE::GC::MarkAsReachable((UObject *)local_730);
            goto LAB_14be36262;
          }
LAB_14be3659f:
          iVar5 = 0xcb;
          paVar18 = &bGEnsureHasExecuted<_738278395414052661>;
          goto LAB_14be35305;
        }
LAB_14be36262:
        if (local_730 == (UDS_UserObjectListItem *)0x0) goto LAB_14be3659f;
        pUVar13 = GetTransientPackageAsObject();
        FObjectInitializer::AssertIfInConstructor
                  (pUVar13,
                   L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                  );
        pUVar14 = Z_Construct_UClass_UDS_M_GameOptionDataColor_NoRegister();
        FStaticConstructObjectParameters::FStaticConstructObjectParameters
                  ((FStaticConstructObjectParameters *)local_268,pUVar14);
        local_268._8_8_ = pUVar13;
        pUVar13 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_268);
        if (local_268._64_8_ != 0) {
          plVar17 = (longlong *)(local_268 + 0x50);
          if ((longlong *)local_268._104_8_ != (longlong *)0x0) {
            plVar17 = (longlong *)local_268._104_8_;
          }
          (**(code **)(*plVar17 + 0x10))();
        }
        if (UE::GC::GIsIncrementalReachabilityPending == false) {
          if (pUVar13 == (UObject *)0x0) goto LAB_14be3658d;
        }
        else {
          if (pUVar13 == (UObject *)0x0) {
LAB_14be3658d:
            iVar5 = 0xce;
            paVar18 = &bGEnsureHasExecuted<_738278395414052658>;
            goto LAB_14be35305;
          }
          UE::GC::MarkAsReachable(pUVar13);
        }
        local_6e8 = pUVar13;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable(pUVar13);
        }
        pFVar2 = (pTVar1->AllocatorInstance).Data;
        if (((pFVar2 <= (FScriptContainerElement *)&local_6e8) &&
            ((FScriptContainerElement *)&local_6e8 <
             pFVar2 + (longlong)(this->ChildModelList).ArrayMax * 8)) &&
           (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar26)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar5 = (this->ChildModelList).ArrayNum;
        if (iVar5 == (this->ChildModelList).ArrayMax) {
          iVar5 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&pTVar1->AllocatorInstance,piVar23);
        }
        (this->ChildModelList).ArrayNum = iVar5 + 1;
        *(UObject **)((pTVar1->AllocatorInstance).Data + (longlong)iVar5 * 8) = local_6e8;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_6e8 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(local_6e8);
        }
        EVar6 = UDS_GameOptionData::GetGameOptionID(this_01);
        FDS_DataContainer::SetData<int,enum_EDS_GameOptionData>
                  ((FDS_DataContainer *)&pUVar13[1].field_0x18,GameOptionID,EVar6);
        FDS_DataContainer::SetData<int,enum_EDS_GameOptionData>
                  ((FDS_DataContainer *)&pUVar13[1].field_0x18,GameOptionValueIndex,(int)pFVar25);
        pUVar4 = local_730;
        pcVar3 = *(code **)(*(longlong *)pUVar13 + 0x308);
        ::FName::FName(&local_4d0,L"");
        pFVar15 = ::FName::FName(&local_4c8,L"");
        puVar16 = (undefined8 *)(*pcVar3)(pUVar13,local_418,0x157,*pFVar15);
        local_528.Object = (FDS_ViewModelContext *)*puVar16;
        local_528.SharedReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)puVar16[1];
        if (local_528.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
           ) {
          LOCK();
          (local_528.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_528.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
          ;
          UNLOCK();
        }
        UDS_UserObjectListItem::AddContext(pUVar4,&local_528);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_410);
        if (((local_788.AllocatorInstance.Data <= (FScriptContainerElement *)&local_730) &&
            ((FScriptContainerElement *)&local_730 <
             local_788.AllocatorInstance.Data + (longlong)local_788.ArrayMax * 8)) &&
           (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar26)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar5 = local_788.ArrayNum;
        if (local_788.ArrayNum == local_788.ArrayMax) {
          iVar5 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&local_788.AllocatorInstance,&local_788.ArrayMax);
        }
        local_788.ArrayNum = iVar5 + 1;
        *(UDS_UserObjectListItem **)(local_788.AllocatorInstance.Data + (longlong)iVar5 * 8) =
             local_730;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (local_730 != (UDS_UserObjectListItem *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)local_730);
        }
        this_01 = local_6d8;
        uVar21 = (int)pFVar25 + 1;
        pFVar25 = (FDS_ViewModelContext *)(ulonglong)uVar21;
        iVar5 = UDS_GameOptionData::GetValueNum(local_6d8);
        piVar23 = local_6d0;
        param_1 = local_768;
      } while ((int)uVar21 < iVar5);
    }
    FDS_EntryBindingEventField::SetUserObjectList
              (&this->EntryBindingEventField_ColorButton,&local_788);
    local_690 = FFieldNotificationClassDescriptor::EntryBindingEventField_ColorButton.BitNumber;
    local_698 = FFieldNotificationClassDescriptor::EntryBindingEventField_ColorButton.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_698);
    goto switchD_14be34bc6_default;
  case TextField:
    local_788._8_8_ = (ulonglong)(uint)local_788.ArrayMax << 0x20;
    if (iVar5 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,&local_788.AllocatorInstance,0,&local_788.ArrayMax);
    }
    local_728 = NewObject<UDS_UserObjectListItem>((UObject *)this);
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
LAB_14be36606:
      if (local_728 == (UDS_UserObjectListItem *)0x0) goto LAB_14be3660b;
      pUVar13 = GetTransientPackageAsObject();
      FObjectInitializer::AssertIfInConstructor
                (pUVar13,
                 L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                );
      pUVar14 = Z_Construct_UClass_UDS_M_GameOptionDataText_NoRegister();
      FStaticConstructObjectParameters::FStaticConstructObjectParameters
                ((FStaticConstructObjectParameters *)local_1e8,pUVar14);
      local_1e8._8_8_ = pUVar13;
      pUVar13 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_1e8);
      if (local_1e8._64_8_ != 0) {
        plVar17 = (longlong *)(local_1e8 + 0x50);
        if ((longlong *)local_1e8._104_8_ != (longlong *)0x0) {
          plVar17 = (longlong *)local_1e8._104_8_;
        }
        (**(code **)(*plVar17 + 0x10))();
      }
      if (UE::GC::GIsIncrementalReachabilityPending == false) {
        if (pUVar13 != (UObject *)0x0) goto LAB_14be366cd;
      }
      else if (pUVar13 != (UObject *)0x0) {
        UE::GC::MarkAsReachable(pUVar13);
LAB_14be366cd:
        pTVar1 = &this->ChildModelList;
        local_6e0 = pUVar13;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable(pUVar13);
        }
        pFVar2 = (pTVar1->AllocatorInstance).Data;
        if (((pFVar2 <= (FScriptContainerElement *)&local_6e0) &&
            ((FScriptContainerElement *)&local_6e0 <
             pFVar2 + (longlong)(this->ChildModelList).ArrayMax * 8)) &&
           (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar26)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar5 = (this->ChildModelList).ArrayNum;
        if (iVar5 == (this->ChildModelList).ArrayMax) {
          iVar5 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&pTVar1->AllocatorInstance,piVar23);
        }
        (this->ChildModelList).ArrayNum = iVar5 + 1;
        *(UObject **)((pTVar1->AllocatorInstance).Data + (longlong)iVar5 * 8) = local_6e0;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_6e0 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(local_6e0);
        }
        EVar6 = UDS_GameOptionData::GetGameOptionID(this_01);
        FDS_DataContainer::SetData<int,enum_EDS_GameOptionData>
                  ((FDS_DataContainer *)&pUVar13[1].field_0x18,GameOptionID,EVar6);
        FDS_DataContainer::SetData<int,enum_EDS_GameOptionData>
                  ((FDS_DataContainer *)&pUVar13[1].field_0x18,GameOptionValueIndex,0);
        pUVar4 = local_728;
        pcVar3 = *(code **)(*(longlong *)pUVar13 + 0x308);
        ::FName::FName(&local_4b8,L"");
        pFVar15 = ::FName::FName(&local_4c0,L"");
        puVar16 = (undefined8 *)(*pcVar3)(pUVar13,local_408,0x158,*pFVar15);
        local_518.Object = (FDS_ViewModelContext *)*puVar16;
        local_518.SharedReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)puVar16[1];
        if (local_518.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
           ) {
          LOCK();
          (local_518.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_518.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
          ;
          UNLOCK();
        }
        UDS_UserObjectListItem::AddContext(pUVar4,&local_518);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_400);
        if (((local_788.AllocatorInstance.Data <= (FScriptContainerElement *)&local_728) &&
            ((FScriptContainerElement *)&local_728 <
             local_788.AllocatorInstance.Data + (longlong)local_788.ArrayMax * 8)) &&
           (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar26)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar5 = local_788.ArrayNum;
        if (local_788.ArrayNum == local_788.ArrayMax) {
          iVar5 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&local_788.AllocatorInstance,&local_788.ArrayMax);
        }
        local_788.ArrayNum = iVar5 + 1;
        *(UDS_UserObjectListItem **)(local_788.AllocatorInstance.Data + (longlong)iVar5 * 8) =
             local_728;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (local_728 != (UDS_UserObjectListItem *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)local_728);
        }
        FDS_EntryBindingEventField::SetUserObjectList
                  (&this->EntryBindingEventField_TextField,&local_788);
        local_680 = FFieldNotificationClassDescriptor::EntryBindingEventField_TextField.BitNumber;
        local_688 = FFieldNotificationClassDescriptor::EntryBindingEventField_TextField.FieldName;
        (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_688);
        goto switchD_14be34bc6_default;
      }
      bVar26 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<_738278395414052635>,false,
                          "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\DS_VM_GameOptionComponent.cpp"
                          ,0xe5,"false");
      if (bVar26) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    else {
      if (local_728 != (UDS_UserObjectListItem *)0x0) {
        UE::GC::MarkAsReachable((UObject *)local_728);
        goto LAB_14be36606;
      }
LAB_14be3660b:
      bVar26 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<_738278395414052638>,false,
                          "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\DS_VM_GameOptionComponent.cpp"
                          ,0xe2,"false");
      if (bVar26) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
  }
  if (local_788.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_788.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_778.SharedReferenceCount.ReferenceController);
  pTVar19 = (param_1->SharedReferenceCount).ReferenceController;
LAB_14be36af2:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar19);
  return;
}

// UnbindModel @ 14be55290

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void __thiscall UDS_VM_GameOptionComponent::UnbindModel(UDS_VM_GameOptionComponent *this)

{
  UDS_LanguageManager *pUVar1;
  
  pUVar1 = UDS_LanguageManager::GetInst();
  if (pUVar1 != (UDS_LanguageManager *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->OnLanguageChanged,this
              );
  }
  return;
}

// VisibleColorButton @ 14be5b7c0

ESlateVisibility __thiscall
UDS_VM_GameOptionComponent::VisibleColorButton(UDS_VM_GameOptionComponent *this)

{
  int iVar1;
  ESlateVisibility EVar2;
  
  iVar1 = FDS_EntryBindingEventField::Num(&this->EntryBindingEventField_ColorButton);
  EVar2 = Collapsed;
  if (0 < iVar1) {
    EVar2 = SelfHitTestInvisible;
  }
  return EVar2;
}

// VisibleCombo @ 14be5b7f0

ESlateVisibility __thiscall
UDS_VM_GameOptionComponent::VisibleCombo(UDS_VM_GameOptionComponent *this)

{
  int iVar1;
  ESlateVisibility EVar2;
  
  iVar1 = FDS_EntryBindingEventField::Num(&this->EntryBindingEventField_Combo);
  EVar2 = Collapsed;
  if (0 < iVar1) {
    EVar2 = SelfHitTestInvisible;
  }
  return EVar2;
}

// VisibleDropDown @ 14be5b820

ESlateVisibility __thiscall
UDS_VM_GameOptionComponent::VisibleDropDown(UDS_VM_GameOptionComponent *this)

{
  int iVar1;
  ESlateVisibility EVar2;
  
  iVar1 = FDS_EntryBindingEventField::Num(&this->EntryBindingEventField_DropDown);
  EVar2 = Collapsed;
  if (0 < iVar1) {
    EVar2 = SelfHitTestInvisible;
  }
  return EVar2;
}

// VisibleKey @ 14be5b850

ESlateVisibility __thiscall UDS_VM_GameOptionComponent::VisibleKey(UDS_VM_GameOptionComponent *this)

{
  int iVar1;
  ESlateVisibility EVar2;
  
  iVar1 = FDS_EntryBindingEventField::Num(&this->EntryBindingEventField_Key);
  EVar2 = Collapsed;
  if (0 < iVar1) {
    EVar2 = SelfHitTestInvisible;
  }
  return EVar2;
}

// VisibleSlider @ 14be5b880

ESlateVisibility __thiscall
UDS_VM_GameOptionComponent::VisibleSlider(UDS_VM_GameOptionComponent *this)

{
  int iVar1;
  ESlateVisibility EVar2;
  
  iVar1 = FDS_EntryBindingEventField::Num(&this->EntryBindingEventField_Slider);
  EVar2 = Collapsed;
  if (0 < iVar1) {
    EVar2 = SelfHitTestInvisible;
  }
  return EVar2;
}

// VisibleSoundSlider @ 14be5b8b0

ESlateVisibility __thiscall
UDS_VM_GameOptionComponent::VisibleSoundSlider(UDS_VM_GameOptionComponent *this)

{
  int iVar1;
  ESlateVisibility EVar2;
  
  iVar1 = FDS_EntryBindingEventField::Num(&this->EntryBindingEventField_SoundSlider);
  EVar2 = Collapsed;
  if (0 < iVar1) {
    EVar2 = SelfHitTestInvisible;
  }
  return EVar2;
}

// VisibleSpin @ 14be5b8e0

ESlateVisibility __thiscall
UDS_VM_GameOptionComponent::VisibleSpin(UDS_VM_GameOptionComponent *this)

{
  int iVar1;
  ESlateVisibility EVar2;
  
  iVar1 = FDS_EntryBindingEventField::Num(&this->EntryBindingEventField_Spin);
  EVar2 = Collapsed;
  if (0 < iVar1) {
    EVar2 = SelfHitTestInvisible;
  }
  return EVar2;
}

// VisibleTextField @ 14be5b910

ESlateVisibility __thiscall
UDS_VM_GameOptionComponent::VisibleTextField(UDS_VM_GameOptionComponent *this)

{
  int iVar1;
  ESlateVisibility EVar2;
  
  iVar1 = FDS_EntryBindingEventField::Num(&this->EntryBindingEventField_TextField);
  EVar2 = Collapsed;
  if (0 < iVar1) {
    EVar2 = SelfHitTestInvisible;
  }
  return EVar2;
}

