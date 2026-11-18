// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 22

// SetItemSlotName_WrapperImpl @ 14b6873d0

void __cdecl UDS_VM_ItemCraft_Slot::SetItemSlotName_WrapperImpl(void *param_1,void *param_2)

{
  FName FVar1;
  int iVar2;
  FName FStack_18;
  int iStack_10;
  
  iVar2 = FFieldNotificationClassDescriptor::ItemSlotName.BitNumber;
  FVar1 = FFieldNotificationClassDescriptor::ItemSlotName.FieldName;
  FDS_Text::operator=((FDS_Text *)((longlong)param_1 + 0xa0),param_2);
  FStack_18 = FVar1;
  iStack_10 = iVar2;
  (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
            ((longlong *)((longlong)param_1 + 0x28),&FStack_18);
  return;
}

// SetClickEvent_WrapperImpl @ 14b6873e0

void __cdecl UDS_VM_ItemCraft_Slot::SetClickEvent_WrapperImpl(void *param_1,void *param_2)

{
  UDS_ItemCraftEvent *pUVar1;
  
  pUVar1 = UDS_ItemCraftEvent::GetEvent();
  if (pUVar1 != (UDS_ItemCraftEvent *)0x0) {
    FDS_EventDelegate<int_const_&>::Broadcast
              (&pUVar1->OnSelectCraftSlotEvent,(int *)((longlong)param_1 + 0x1b8));
    return;
  }
  return;
}

// SetIsSelected_WrapperImpl @ 14b6873f0

void __cdecl UDS_VM_ItemCraft_Slot::SetIsSelected_WrapperImpl(void *param_1,void *param_2)

{
  FName FStack_18;
  int iStack_10;
  
  *(undefined1 *)((longlong)param_1 + 0x110) = *(undefined1 *)param_2;
  iStack_10 = FFieldNotificationClassDescriptor::IsSelected.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::IsSelected.FieldName;
  (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
            ((longlong *)((longlong)param_1 + 0x28),&FStack_18);
  return;
}

// SetEnableWidgetSwitcherIndex_WrapperImpl @ 14b687400

void __cdecl
UDS_VM_ItemCraft_Slot::SetEnableWidgetSwitcherIndex_WrapperImpl(void *param_1,void *param_2)

{
  FName FStack_18;
  int iStack_10;
  
  *(undefined4 *)((longlong)param_1 + 0x114) = *(undefined4 *)param_2;
  iStack_10 = FFieldNotificationClassDescriptor::EnableWidgetSwitcherIndex.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::EnableWidgetSwitcherIndex.FieldName;
  (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
            ((longlong *)((longlong)param_1 + 0x28),&FStack_18);
  return;
}

// SetNeedRecipeText_WrapperImpl @ 14b687410

void __cdecl UDS_VM_ItemCraft_Slot::SetNeedRecipeText_WrapperImpl(void *param_1,void *param_2)

{
  FName FStack_18;
  int iStack_10;
  
  FDS_Text::operator=((FDS_Text *)((longlong)param_1 + 0x118),param_2);
  iStack_10 = FFieldNotificationClassDescriptor::NeedRecipeText.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::NeedRecipeText.FieldName;
  (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
            ((longlong *)((longlong)param_1 + 0x28),&FStack_18);
  return;
}

// StaticClass @ 14b687420

UClass * __cdecl UDS_VM_ItemCraft_Slot::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_ItemCraft_Slot.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_ItemCraft_Slot",
               &Z_Registration_Info_UClass_UDS_VM_ItemCraft_Slot.InnerSingleton,
               StaticRegisterNativesUDS_VM_ItemCraft_Slot,0x1c0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_ItemCraft_Slot>,
               InternalVTableHelperCtorCaller<UDS_VM_ItemCraft_Slot>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_ItemCraft_Slot.InnerSingleton;
}

// UDS_VM_ItemCraft_Slot @ 14b68ce80

UDS_VM_ItemCraft_Slot * __thiscall
UDS_VM_ItemCraft_Slot::UDS_VM_ItemCraft_Slot(UDS_VM_ItemCraft_Slot *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_ItemCraft_Slot__6B_;
  (this->ItemSlotName).StringTableID = 0;
  (this->ItemSlotName).StringEnumTableNameID.ComparisonIndex = 0;
  (this->ItemSlotName).StringEnumTableNameID.Number = 0;
  (this->ItemSlotName).DateTime.Ticks = 0;
  (this->ItemSlotName).TimeSpan.Ticks = 0;
  (this->ItemSlotName).TimeExpressionType = None;
  (this->ItemSlotName).IsExpression = false;
  (this->ItemSlotName).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ItemSlotName).UniqueString.Data.ArrayNum = 0;
  (this->ItemSlotName).UniqueString.Data.ArrayMax = 0;
  (this->ItemSlotName).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ItemSlotName).FormatArgs.ArrayNum = 0;
  (this->ItemSlotName).FormatArgs.ArrayMax = 0;
  (this->ClickEvent)._padding_ = '\0';
  (this->ClickEvent).bIsCustomSelected = false;
  (this->ClickEvent).bIsLacked = false;
  (this->ClickEvent).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickEvent).Delegate = 0;
  *(undefined8 *)&(this->ClickEvent).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickEvent).Delegate.field_0x10 = 0;
  (this->NeedRecipeText).StringTableType = None;
  (this->NeedRecipeText).StringTableID = 0;
  (this->NeedRecipeText).StringEnumTableNameID.ComparisonIndex = 0;
  (this->NeedRecipeText).StringEnumTableNameID.Number = 0;
  (this->NeedRecipeText).DateTime.Ticks = 0;
  (this->NeedRecipeText).TimeSpan.Ticks = 0;
  (this->NeedRecipeText).TimeExpressionType = None;
  (this->NeedRecipeText).IsExpression = false;
  (this->NeedRecipeText).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NeedRecipeText).UniqueString.Data.ArrayNum = 0;
  (this->NeedRecipeText).UniqueString.Data.ArrayMax = 0;
  (this->NeedRecipeText).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NeedRecipeText).FormatArgs.ArrayNum = 0;
  (this->NeedRecipeText).FormatArgs.ArrayMax = 0;
  (this->FixedText_NeedRecipe).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_NeedRecipe).StringEnumTableNameID.Number = 0;
  (this->FixedText_NeedRecipe).DateTime.Ticks = 0;
  (this->FixedText_NeedRecipe).TimeSpan.Ticks = 0;
  (this->FixedText_NeedRecipe).TimeExpressionType = None;
  (this->FixedText_NeedRecipe).IsExpression = false;
  (this->FixedText_NeedRecipe).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_NeedRecipe).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_NeedRecipe).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_NeedRecipe).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_NeedRecipe).FormatArgs.ArrayNum = 0;
  (this->FixedText_NeedRecipe).FormatArgs.ArrayMax = 0;
  this->ItemCraftListTID = 0;
  (this->ItemSlotName).StringTableType = None;
  (this->FixedText_NeedRecipe).StringTableType = StringUi;
  (this->FixedText_NeedRecipe).StringTableID = 0x18706;
  return this;
}

// UDS_VM_ItemCraft_Slot @ 14b68cfd0

UDS_VM_ItemCraft_Slot * __thiscall
UDS_VM_ItemCraft_Slot::UDS_VM_ItemCraft_Slot
          (UDS_VM_ItemCraft_Slot *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_ItemCraft_Slot__6B_;
  (this->ItemSlotName).StringTableID = 0;
  (this->ItemSlotName).StringEnumTableNameID.ComparisonIndex = 0;
  (this->ItemSlotName).StringEnumTableNameID.Number = 0;
  (this->ItemSlotName).DateTime.Ticks = 0;
  (this->ItemSlotName).TimeSpan.Ticks = 0;
  (this->ItemSlotName).TimeExpressionType = None;
  (this->ItemSlotName).IsExpression = false;
  (this->ItemSlotName).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ItemSlotName).UniqueString.Data.ArrayNum = 0;
  (this->ItemSlotName).UniqueString.Data.ArrayMax = 0;
  (this->ItemSlotName).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ItemSlotName).FormatArgs.ArrayNum = 0;
  (this->ItemSlotName).FormatArgs.ArrayMax = 0;
  (this->ClickEvent)._padding_ = '\0';
  (this->ClickEvent).bIsCustomSelected = false;
  (this->ClickEvent).bIsLacked = false;
  (this->ClickEvent).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickEvent).Delegate = 0;
  *(undefined8 *)&(this->ClickEvent).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickEvent).Delegate.field_0x10 = 0;
  (this->NeedRecipeText).StringTableType = None;
  (this->NeedRecipeText).StringTableID = 0;
  (this->NeedRecipeText).StringEnumTableNameID.ComparisonIndex = 0;
  (this->NeedRecipeText).StringEnumTableNameID.Number = 0;
  (this->NeedRecipeText).DateTime.Ticks = 0;
  (this->NeedRecipeText).TimeSpan.Ticks = 0;
  (this->NeedRecipeText).TimeExpressionType = None;
  (this->NeedRecipeText).IsExpression = false;
  (this->NeedRecipeText).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NeedRecipeText).UniqueString.Data.ArrayNum = 0;
  (this->NeedRecipeText).UniqueString.Data.ArrayMax = 0;
  (this->NeedRecipeText).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NeedRecipeText).FormatArgs.ArrayNum = 0;
  (this->NeedRecipeText).FormatArgs.ArrayMax = 0;
  (this->FixedText_NeedRecipe).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_NeedRecipe).StringEnumTableNameID.Number = 0;
  (this->FixedText_NeedRecipe).DateTime.Ticks = 0;
  (this->FixedText_NeedRecipe).TimeSpan.Ticks = 0;
  (this->FixedText_NeedRecipe).TimeExpressionType = None;
  (this->FixedText_NeedRecipe).IsExpression = false;
  (this->FixedText_NeedRecipe).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_NeedRecipe).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_NeedRecipe).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_NeedRecipe).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_NeedRecipe).FormatArgs.ArrayNum = 0;
  (this->FixedText_NeedRecipe).FormatArgs.ArrayMax = 0;
  this->ItemCraftListTID = 0;
  (this->ItemSlotName).StringTableType = None;
  (this->FixedText_NeedRecipe).StringTableType = StringUi;
  (this->FixedText_NeedRecipe).StringTableID = 0x18706;
  return this;
}

// ~UDS_VM_ItemCraft_Slot @ 14b68df40

void __thiscall UDS_VM_ItemCraft_Slot::~UDS_VM_ItemCraft_Slot(UDS_VM_ItemCraft_Slot *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_ItemCraft_Slot__6B_;
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->FixedText_NeedRecipe).FormatArgs.AllocatorInstance.Data,
             (this->FixedText_NeedRecipe).FormatArgs.ArrayNum);
  pFVar1 = (this->FixedText_NeedRecipe).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FixedText_NeedRecipe).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->NeedRecipeText).FormatArgs.AllocatorInstance.Data,
             (this->NeedRecipeText).FormatArgs.ArrayNum);
  pFVar1 = (this->NeedRecipeText).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->NeedRecipeText).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ClickEvent).Delegate);
  pvVar2 = *(void **)&(this->ClickEvent).Delegate.field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ClickEvent).Delegate);
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->ItemSlotName).FormatArgs.AllocatorInstance.Data,
             (this->ItemSlotName).FormatArgs.ArrayNum);
  pFVar1 = (this->ItemSlotName).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ItemSlotName).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b68fef0

IClassDescriptor * __thiscall
UDS_VM_ItemCraft_Slot::GetFieldNotificationDescriptor(UDS_VM_ItemCraft_Slot *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_ItemCraft_Slot::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b6908e0

UClass * __cdecl UDS_VM_ItemCraft_Slot::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_ItemCraft_Slot.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_ItemCraft_Slot",
               &Z_Registration_Info_UClass_UDS_VM_ItemCraft_Slot.InnerSingleton,
               StaticRegisterNativesUDS_VM_ItemCraft_Slot,0x1c0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_ItemCraft_Slot>,
               InternalVTableHelperCtorCaller<UDS_VM_ItemCraft_Slot>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_ItemCraft_Slot.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_ItemCraft_Slot @ 14b6910b0

void __cdecl UDS_VM_ItemCraft_Slot::StaticRegisterNativesUDS_VM_ItemCraft_Slot(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UDS_VM_ItemCraft_Slot_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execOnSelectedCraftItemEvent @ 14b692210

void __cdecl
UDS_VM_ItemCraft_Slot::execOnSelectedCraftItemEvent(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int *piVar2;
  int local_res10 [2];
  
  local_res10[0] = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  piVar2 = local_res10;
  if ((int *)param_2->MostRecentPropertyAddress != (int *)0x0) {
    piVar2 = (int *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  OnSelectedCraftItemEvent((UDS_VM_ItemCraft_Slot *)param_1,piVar2);
  return;
}

// BindModel @ 14be77470

void __thiscall UDS_VM_ItemCraft_Slot::BindModel(UDS_VM_ItemCraft_Slot *this)

{
  UDS_ItemCraftEvent *pUVar1;
  
  pUVar1 = UDS_ItemCraftEvent::GetEvent();
  if (pUVar1 != (UDS_ItemCraftEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->OnSelectCraftSlotEvent
               ,this);
    TMulticastDelegateRegistration<void___cdecl(int_const_&),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_VM_ItemCraft_Slot>
              ((TMulticastDelegateRegistration<void___cdecl(int_const_&),FDefaultDelegateUserPolicy>
                *)&pUVar1->OnSelectCraftSlotEvent,(UDS_VM_ItemCraft_Slot *)&stack0x00000010,
               (pmf_67b3c529 *)this);
  }
  return;
}

// OnClickEvent @ 14be946b0

void __thiscall
UDS_VM_ItemCraft_Slot::OnClickEvent(UDS_VM_ItemCraft_Slot *this,FDS_ButtonEventField *param_1)

{
  UDS_ItemCraftEvent *pUVar1;
  
  pUVar1 = UDS_ItemCraftEvent::GetEvent();
  if (pUVar1 != (UDS_ItemCraftEvent *)0x0) {
    FDS_EventDelegate<int_const_&>::Broadcast
              (&pUVar1->OnSelectCraftSlotEvent,&this->ItemCraftListTID);
    return;
  }
  return;
}

// OnSelectedCraftItemEvent @ 14be9c720

void __thiscall
UDS_VM_ItemCraft_Slot::OnSelectedCraftItemEvent(UDS_VM_ItemCraft_Slot *this,int *param_1)

{
  FName local_18;
  int local_10;
  
  this->IsSelected = this->ItemCraftListTID == *param_1;
  local_10 = FFieldNotificationClassDescriptor::IsSelected.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::IsSelected.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// OnSetViewModel @ 14bea3d70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_ItemCraft_Slot::OnSetViewModel
          (UDS_VM_ItemCraft_Slot *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  FInstancedStruct *this_00;
  FObjectPtr_u_0 FVar1;
  FName FVar2;
  int iVar3;
  UDS_LogManager *pUVar4;
  UDS_CraftManager *pUVar5;
  FDS_ItemCraftListTableRow *pFVar6;
  longlong lVar7;
  FObjectPtr_u_0 *pFVar8;
  FDS_Int32StringFormatArg *pFVar9;
  int iVar10;
  undefined1 auStackY_2d8 [32];
  TArray<FDS_TextFormatArg,TSizedDefaultAllocator<32>_> local_298;
  FName local_288;
  int local_280;
  TSharedPtr<FDS_ViewModelContext_ItemCraftSlot,1> local_278;
  FName local_268;
  int local_260;
  FName local_258;
  int local_250;
  FName local_248;
  int local_240;
  FDS_Text local_238;
  FDS_Text local_1e8;
  TSharedPtr<FDS_ViewModelContext,1> local_198;
  FDS_StringUiID local_188;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_178;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_2d8;
  local_198.Object = param_1->Object;
  local_198.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_198.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_198.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_198.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SafeCast<FDS_ViewModelContext_ItemCraftSlot>(&local_278,&local_198);
  if (local_278.Object == (FDS_ViewModelContext_ItemCraftSlot *)0x0) {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 != (UDS_LogManager *)0x0) {
      pUVar4 = UDS_LogManager::GetInst();
      local_178._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_178,"UDS_VM_ItemCraft_Slot::OnSetViewModel",0x25,Yes);
      UDS_LogManager::PrintLog
                (pUVar4,1,Warning,local_178.Ptr,0x17,
                 L"FDS_ViewModelContext_ItemCraftSlot is nullptr");
      if ((void *)local_178._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_178._padding_);
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_278.SharedReferenceCount.ReferenceController);
  }
  else {
    local_288 = (FName)FDS_ItemBaseTableRow::Get((longlong)(local_278.Object)->ItemBaseTableID,true)
    ;
    if (local_288 == (FName)0x0) {
      pUVar4 = UDS_LogManager::GetInst();
      if (pUVar4 != (UDS_LogManager *)0x0) {
        pUVar4 = UDS_LogManager::GetInst();
        local_178._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_178,"UDS_VM_ItemCraft_Slot::OnSetViewModel",0x25,Yes);
        UDS_LogManager::PrintLog
                  (pUVar4,1,Warning,local_178.Ptr,0x1e,L"FDS_ItemBaseTableRow is nullptr  ID - %d");
        if ((void *)local_178._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_178._padding_);
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_278.SharedReferenceCount.ReferenceController);
    }
    else {
      pUVar5 = UDS_CraftManager::GetInst();
      if (pUVar5 != (UDS_CraftManager *)0x0) {
        iVar3 = (local_278.Object)->ItemCraftListTableID;
        this->ItemCraftListTID = iVar3;
        iVar10 = 0;
        if ((local_278.Object)->IsCondition == false) {
          iVar10 = 2;
          pFVar6 = FDS_ItemCraftListTableRow::Get((longlong)iVar3,true);
          if ((pFVar6 != (FDS_ItemCraftListTableRow *)0x0) &&
             (pFVar6->RecipeActiveCondition == NpcRelationGrade)) {
            local_188.ID = 0x18708;
            local_188._padding_ = (longlong)&___7FDS_StringUiID__6B_;
            local_238.StringTableType = None;
            local_238.StringTableID = 0;
            local_238.StringEnumTableNameID.ComparisonIndex.Value = 0;
            local_238.StringEnumTableNameID.Number = 0;
            local_238.DateTime.Ticks = 0;
            local_238.TimeSpan.Ticks = 0;
            local_238.TimeExpressionType = None;
            local_238.IsExpression = false;
            local_238.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_238.UniqueString.Data.ArrayNum = 0;
            local_238.UniqueString.Data.ArrayMax = 0;
            local_238.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_238.FormatArgs.ArrayNum = 0;
            local_238.FormatArgs.ArrayMax = 0;
            local_298.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_298.ArrayNum = 0;
            local_298.ArrayMax = 0;
            iVar3 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x828,&local_298.AllocatorInstance,&local_298.ArrayMax);
            local_298.ArrayNum = iVar3 + 1;
            FDS_TextFormatArg::FDS_TextFormatArg<FDS_StringUiID>
                      ((FDS_TextFormatArg *)
                       (local_298.AllocatorInstance.Data + (longlong)iVar3 * 0x28),&local_188);
            if (local_298.ArrayNum == local_298.ArrayMax) {
              local_298.ArrayNum =
                   UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x828,&local_298.AllocatorInstance,&local_298.ArrayMax);
            }
            lVar7 = (longlong)local_298.ArrayNum;
            local_298.ArrayNum = local_298.ArrayNum + 1;
            this_00 = (FInstancedStruct *)(local_298.AllocatorInstance.Data + lVar7 * 0x28);
            FInstancedStruct::FInstancedStruct(this_00);
            pFVar8 = (FObjectPtr_u_0 *)FNumberFormattingOptions::DefaultWithGrouping();
            FVar1 = pFVar8[1];
            this_00[1].ScriptStruct.field0_0x0.ObjectPtr.field0_0x0 = *pFVar8;
            this_00[1].StructMemory = (uchar *)FVar1;
            this_00[2].ScriptStruct.field0_0x0 = (TObjectPtr<UScriptStruct_const_>_u_0)pFVar8[2];
            FInstancedStruct::InitializeAs<FDS_Int32StringFormatArg>(this_00);
            pFVar9 = FInstancedStruct::GetMutablePtr<FDS_Int32StringFormatArg>(this_00);
            if (pFVar9 != (FDS_Int32StringFormatArg *)0x0) {
              pFVar9->Value = pFVar6->RecipeActiveValue;
            }
            FDS_Text::SetTextFormatFromStringTable(&local_238,StringUi,0x9de3,&local_298);
            DestructItems<FDS_TextFormatArg,int>
                      ((FDS_TextFormatArg *)local_298.AllocatorInstance.Data,local_298.ArrayNum);
            if ((FDS_TextFormatArg *)local_298.AllocatorInstance.Data != (FDS_TextFormatArg *)0x0) {
              FMemory::Free(local_298.AllocatorInstance.Data);
            }
            FDS_Text::operator=(&this->NeedRecipeText,&local_238);
            local_260 = FFieldNotificationClassDescriptor::NeedRecipeText.BitNumber;
            local_268 = FFieldNotificationClassDescriptor::NeedRecipeText.FieldName;
            (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_268);
            DestructItems<FDS_TextFormatArg,int>
                      ((FDS_TextFormatArg *)local_238.FormatArgs.AllocatorInstance.Data,
                       local_238.FormatArgs.ArrayNum);
            if ((FDS_TextFormatArg *)local_238.FormatArgs.AllocatorInstance.Data !=
                (FDS_TextFormatArg *)0x0) {
              FMemory::Free(local_238.FormatArgs.AllocatorInstance.Data);
            }
            if (local_238.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0
               ) {
              FMemory::Free(local_238.UniqueString.Data.AllocatorInstance.Data);
            }
          }
        }
        else if (((local_278.Object)->HasRecipe == false) ||
                ((local_278.Object)->IsEnoughCraftMaterial == false)) {
          iVar10 = 1;
        }
        local_1e8.StringTableType = None;
        local_1e8.StringTableID = 0;
        local_1e8.StringEnumTableNameID.ComparisonIndex.Value = 0;
        local_1e8.StringEnumTableNameID.Number = 0;
        local_1e8.DateTime.Ticks = 0;
        local_1e8.TimeSpan.Ticks = 0;
        local_1e8.TimeExpressionType = None;
        local_1e8.IsExpression = false;
        local_1e8.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_1e8.UniqueString.Data.ArrayNum = 0;
        local_1e8.UniqueString.Data.ArrayMax = 0;
        local_1e8.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_1e8.FormatArgs.ArrayNum = 0;
        local_1e8.FormatArgs.ArrayMax = 0;
        FDS_Text::SetTextFromStringID(&local_1e8,(FDS_StringItemID *)((longlong)local_288 + 0x10));
        iVar3 = FFieldNotificationClassDescriptor::ItemSlotName.BitNumber;
        FVar2 = FFieldNotificationClassDescriptor::ItemSlotName.FieldName;
        FDS_Text::operator=(&this->ItemSlotName,&local_1e8);
        local_288 = FVar2;
        local_280 = iVar3;
        (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_288);
        DestructItems<FDS_TextFormatArg,int>
                  ((FDS_TextFormatArg *)local_1e8.FormatArgs.AllocatorInstance.Data,
                   local_1e8.FormatArgs.ArrayNum);
        if ((FDS_TextFormatArg *)local_1e8.FormatArgs.AllocatorInstance.Data !=
            (FDS_TextFormatArg *)0x0) {
          FMemory::Free(local_1e8.FormatArgs.AllocatorInstance.Data);
        }
        if (local_1e8.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1e8.UniqueString.Data.AllocatorInstance.Data);
        }
        this->EnableWidgetSwitcherIndex = iVar10;
        local_250 = FFieldNotificationClassDescriptor::EnableWidgetSwitcherIndex.BitNumber;
        local_258 = FFieldNotificationClassDescriptor::EnableWidgetSwitcherIndex.FieldName;
        (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_258);
        this->IsSelected = pUVar5->SelectedCraftListTID == this->ItemCraftListTID;
        local_240 = FFieldNotificationClassDescriptor::IsSelected.BitNumber;
        local_248 = FFieldNotificationClassDescriptor::IsSelected.FieldName;
        (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_248);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_278.SharedReferenceCount.ReferenceController);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// SetEnableWidgetSwitcherIndex @ 14beaefd0

void __thiscall
UDS_VM_ItemCraft_Slot::SetEnableWidgetSwitcherIndex(UDS_VM_ItemCraft_Slot *this,int *param_1)

{
  FName local_18;
  int local_10;
  
  this->EnableWidgetSwitcherIndex = *param_1;
  local_10 = FFieldNotificationClassDescriptor::EnableWidgetSwitcherIndex.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::EnableWidgetSwitcherIndex.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// SetIsSelected @ 14beb1bd0

void __thiscall UDS_VM_ItemCraft_Slot::SetIsSelected(UDS_VM_ItemCraft_Slot *this,bool *param_1)

{
  FName local_18;
  int local_10;
  
  this->IsSelected = *param_1;
  local_10 = FFieldNotificationClassDescriptor::IsSelected.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::IsSelected.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// SetItemSlotName @ 14beb23b0

void __thiscall
UDS_VM_ItemCraft_Slot::SetItemSlotName(UDS_VM_ItemCraft_Slot *this,FDS_Text *param_1)

{
  FName FVar1;
  int iVar2;
  FName local_18;
  int local_10;
  
  iVar2 = FFieldNotificationClassDescriptor::ItemSlotName.BitNumber;
  FVar1 = FFieldNotificationClassDescriptor::ItemSlotName.FieldName;
  FDS_Text::operator=(&this->ItemSlotName,param_1);
  local_18 = FVar1;
  local_10 = iVar2;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// SetNeedRecipeText @ 14beb3870

void __thiscall
UDS_VM_ItemCraft_Slot::SetNeedRecipeText(UDS_VM_ItemCraft_Slot *this,FDS_Text *param_1)

{
  FName local_18;
  int local_10;
  
  FDS_Text::operator=(&this->NeedRecipeText,param_1);
  local_10 = FFieldNotificationClassDescriptor::NeedRecipeText.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::NeedRecipeText.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// UnbindModel @ 14bebc960

void __thiscall UDS_VM_ItemCraft_Slot::UnbindModel(UDS_VM_ItemCraft_Slot *this)

{
  UDS_ItemCraftEvent *pUVar1;
  
  pUVar1 = UDS_ItemCraftEvent::GetEvent();
  if (pUVar1 != (UDS_ItemCraftEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->OnSelectCraftSlotEvent
               ,this);
    return;
  }
  return;
}

