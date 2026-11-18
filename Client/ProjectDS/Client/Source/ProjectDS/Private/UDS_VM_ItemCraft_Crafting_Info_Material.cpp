// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 20

// StaticClass @ 14b689160

UClass * __cdecl UDS_VM_ItemCraft_Crafting_Info_Material::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_ItemCraft_Crafting_Info_Material.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_ItemCraft_Crafting_Info_Material",
               &Z_Registration_Info_UClass_UDS_VM_ItemCraft_Crafting_Info_Material.InnerSingleton,
               StaticRegisterNativesUDS_VM_ItemCraft_Crafting_Info_Material,0x140,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_VM_ItemCraft_Crafting_Info_Material>
               ,InternalVTableHelperCtorCaller<UDS_VM_ItemCraft_Crafting_Info_Material>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_ItemCraft_Crafting_Info_Material.InnerSingleton;
}

// UDS_VM_ItemCraft_Crafting_Info_Material @ 14b68ca40

UDS_VM_ItemCraft_Crafting_Info_Material * __thiscall
UDS_VM_ItemCraft_Crafting_Info_Material::UDS_VM_ItemCraft_Crafting_Info_Material
          (UDS_VM_ItemCraft_Crafting_Info_Material *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->CraftQuantity = 1;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_ItemCraft_Crafting_Info_Material__6B_;
  (this->EntryBindingEventField).UserObjectList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->EntryBindingEventField).UserObjectList.ArrayNum = 0;
  (this->EntryBindingEventField).UserObjectList.ArrayMax = 0;
  (this->VM_MoneyDisplay1).field0_0x0.DebugPtr = (UDS_VM_MoneyDisplay *)0x0;
  (this->VM_MoneyDisplay2).field0_0x0.DebugPtr = (UDS_VM_MoneyDisplay *)0x0;
  (this->VM_MoneyDisplay3).field0_0x0.DebugPtr = (UDS_VM_MoneyDisplay *)0x0;
  (this->VM_MoneyDisplay4).field0_0x0.DebugPtr = (UDS_VM_MoneyDisplay *)0x0;
  (this->VM_MoneyTooltip).field0_0x0.DebugPtr = (UDS_VM_MoneyTooltipDetector *)0x0;
  (this->FixedText_SubTitle_Material).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_SubTitle_Material).StringEnumTableNameID.Number = 0;
  (this->FixedText_SubTitle_Material).DateTime.Ticks = 0;
  (this->FixedText_SubTitle_Material).TimeSpan.Ticks = 0;
  (this->FixedText_SubTitle_Material).TimeExpressionType = None;
  (this->FixedText_SubTitle_Material).IsExpression = false;
  (this->FixedText_SubTitle_Material).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_SubTitle_Material).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_SubTitle_Material).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_SubTitle_Material).FormatArgs.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_SubTitle_Material).FormatArgs.ArrayNum = 0;
  (this->FixedText_SubTitle_Material).FormatArgs.ArrayMax = 0;
  (this->IsEnoughMaterial).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->IsEnoughMaterial).ArrayNum = 0;
  (this->IsEnoughMaterial).ArrayMax = 0;
  (this->FixedText_SubTitle_Material).StringTableType = StringUi;
  (this->FixedText_SubTitle_Material).StringTableID = 0x186a2;
  return this;
}

// UDS_VM_ItemCraft_Crafting_Info_Material @ 14b68cb20

UDS_VM_ItemCraft_Crafting_Info_Material * __thiscall
UDS_VM_ItemCraft_Crafting_Info_Material::UDS_VM_ItemCraft_Crafting_Info_Material
          (UDS_VM_ItemCraft_Crafting_Info_Material *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->CraftQuantity = 1;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_ItemCraft_Crafting_Info_Material__6B_;
  (this->EntryBindingEventField).UserObjectList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->EntryBindingEventField).UserObjectList.ArrayNum = 0;
  (this->EntryBindingEventField).UserObjectList.ArrayMax = 0;
  (this->VM_MoneyDisplay1).field0_0x0.DebugPtr = (UDS_VM_MoneyDisplay *)0x0;
  (this->VM_MoneyDisplay2).field0_0x0.DebugPtr = (UDS_VM_MoneyDisplay *)0x0;
  (this->VM_MoneyDisplay3).field0_0x0.DebugPtr = (UDS_VM_MoneyDisplay *)0x0;
  (this->VM_MoneyDisplay4).field0_0x0.DebugPtr = (UDS_VM_MoneyDisplay *)0x0;
  (this->VM_MoneyTooltip).field0_0x0.DebugPtr = (UDS_VM_MoneyTooltipDetector *)0x0;
  (this->FixedText_SubTitle_Material).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_SubTitle_Material).StringEnumTableNameID.Number = 0;
  (this->FixedText_SubTitle_Material).DateTime.Ticks = 0;
  (this->FixedText_SubTitle_Material).TimeSpan.Ticks = 0;
  (this->FixedText_SubTitle_Material).TimeExpressionType = None;
  (this->FixedText_SubTitle_Material).IsExpression = false;
  (this->FixedText_SubTitle_Material).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_SubTitle_Material).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_SubTitle_Material).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_SubTitle_Material).FormatArgs.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_SubTitle_Material).FormatArgs.ArrayNum = 0;
  (this->FixedText_SubTitle_Material).FormatArgs.ArrayMax = 0;
  (this->IsEnoughMaterial).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->IsEnoughMaterial).ArrayNum = 0;
  (this->IsEnoughMaterial).ArrayMax = 0;
  (this->FixedText_SubTitle_Material).StringTableType = StringUi;
  (this->FixedText_SubTitle_Material).StringTableID = 0x186a2;
  return this;
}

// ~UDS_VM_ItemCraft_Crafting_Info_Material @ 14b68dda0

void __thiscall
UDS_VM_ItemCraft_Crafting_Info_Material::~UDS_VM_ItemCraft_Crafting_Info_Material
          (UDS_VM_ItemCraft_Crafting_Info_Material *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_ItemCraft_Crafting_Info_Material__6B_;
  pFVar1 = (this->IsEnoughMaterial).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)
             (this->FixedText_SubTitle_Material).FormatArgs.AllocatorInstance.Data,
             (this->FixedText_SubTitle_Material).FormatArgs.ArrayNum);
  pFVar1 = (this->FixedText_SubTitle_Material).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FixedText_SubTitle_Material).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->EntryBindingEventField).UserObjectList.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b68fcc0

IClassDescriptor * __thiscall
UDS_VM_ItemCraft_Crafting_Info_Material::GetFieldNotificationDescriptor
          (UDS_VM_ItemCraft_Crafting_Info_Material *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_ItemCraft_Crafting_Info_Material::FFieldNotificationClassDescriptor::
             GetDescriptor'::__l2::_dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b690520

UClass * __cdecl UDS_VM_ItemCraft_Crafting_Info_Material::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_ItemCraft_Crafting_Info_Material.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_ItemCraft_Crafting_Info_Material",
               &Z_Registration_Info_UClass_UDS_VM_ItemCraft_Crafting_Info_Material.InnerSingleton,
               StaticRegisterNativesUDS_VM_ItemCraft_Crafting_Info_Material,0x140,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_VM_ItemCraft_Crafting_Info_Material>
               ,InternalVTableHelperCtorCaller<UDS_VM_ItemCraft_Crafting_Info_Material>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_ItemCraft_Crafting_Info_Material.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_ItemCraft_Crafting_Info_Material @ 14b691000

void __cdecl
UDS_VM_ItemCraft_Crafting_Info_Material::
StaticRegisterNativesUDS_VM_ItemCraft_Crafting_Info_Material(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 2;
  local_18.DataPtr = Z_Construct_UClass_UDS_VM_ItemCraft_Crafting_Info_Material_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execOnChangeItemDataSet @ 14b691ee0

void __cdecl
UDS_VM_ItemCraft_Crafting_Info_Material::execOnChangeItemDataSet
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UDS_DataSetBase *local_res10;
  
  local_res10 = (UDS_DataSetBase *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  OnChangeItemDataSet((UDS_VM_ItemCraft_Crafting_Info_Material *)param_1,local_res10);
  return;
}

// execOnChangeMoneyDataSet @ 14b692000

void __cdecl
UDS_VM_ItemCraft_Crafting_Info_Material::execOnChangeMoneyDataSet
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UDS_DataSetBase *local_res10;
  
  local_res10 = (UDS_DataSetBase *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  OnChangeMoneyDataSet((UDS_VM_ItemCraft_Crafting_Info_Material *)param_1,local_res10);
  return;
}

// BindModel @ 14be76fd0

void __thiscall
UDS_VM_ItemCraft_Crafting_Info_Material::BindModel(UDS_VM_ItemCraft_Crafting_Info_Material *this)

{
  code *pcVar1;
  bool bVar2;
  UDS_ItemCraftEvent *pUVar3;
  UObject *pUVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  FWeakObjectPtr local_res10;
  FWeakObjectPtr local_res18;
  FName local_res20;
  FName local_98;
  undefined1 local_90 [16];
  undefined4 uStack_80;
  undefined4 uStack_7c;
  code *local_78;
  undefined8 uStack_70;
  code *local_68;
  longlong lStack_60;
  code *local_58;
  longlong lStack_50;
  code *local_48;
  ulonglong uStack_40;
  
  UDS_ViewModelBase::BindModel((UDS_ViewModelBase *)this);
  pUVar3 = UDS_ItemCraftEvent::GetEvent();
  if (pUVar3 != (UDS_ItemCraftEvent *)0x0) {
    uStack_80 = 0;
    local_90._8_8_ = OnChangeCraftManager_CraftListTID;
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar3->OnChangeCraftManager_ItemCraftListTID,this);
    lStack_60 = CONCAT44(uStack_7c,uStack_80);
    local_68 = (code *)local_90._8_8_;
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_VM_ItemCraft_Crafting_Info_Material>
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &pUVar3->OnChangeCraftManager_ItemCraftListTID,
               (UDS_VM_ItemCraft_Crafting_Info_Material *)local_90,(pmf_d2b6c086 *)this);
    uStack_80 = 0;
    local_90._8_8_ = OnChangeCraftManager_CraftQuantity;
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar3->OnChangeCraftManager_ItemCraftQuantity,this);
    lStack_50 = CONCAT44(uStack_7c,uStack_80);
    local_58 = (code *)local_90._8_8_;
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_VM_ItemCraft_Crafting_Info_Material>
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &pUVar3->OnChangeCraftManager_ItemCraftQuantity,
               (UDS_VM_ItemCraft_Crafting_Info_Material *)(local_90 + 8),(pmf_d2b6c086 *)this);
  }
  TDS_DataSetGetter<UDS_ItemDataSet>::Get((ulong64)&local_res10);
  bVar2 = FWeakObjectPtr::IsValid(&local_res10);
  pcVar7 = &DAT_00000002;
  if (bVar2) {
    pUVar4 = FWeakObjectPtr::Get(&local_res10);
    pcVar5 = strstr("&UDS_VM_ItemCraft_Crafting_Info_Material::OnChangeItemDataSet","::");
    if (pcVar5 == (char *)0x0) {
LAB_14be7711c:
      pcVar6 = &DAT_00000002;
LAB_14be7711f:
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Result && Result[2] != \'0\'",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\Delegate.h"
                         ,0x1da,L"\'%hs\' does not look like a member function");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    else {
      do {
        pcVar6 = pcVar5;
        pcVar5 = strstr(pcVar6 + 1,"::");
      } while (pcVar5 != (char *)0x0);
      if (pcVar6 == (char *)0x0) goto LAB_14be7711c;
      pcVar6 = pcVar6 + 2;
      if (*pcVar6 == '0') goto LAB_14be7711f;
    }
    ::FName::FName(&local_res20,pcVar6);
    uStack_70 = (ulonglong)uStack_70._4_4_ << 0x20;
    local_78 = OnChangeItemDataSet;
    TBaseDynamicMulticastDelegate<FNotThreadSafeDelegateMode,void,UDS_DataSetBase_*>::
    __Internal_AddDynamic<UDS_VM_ItemCraft_Crafting_Info_Material>
              ((TBaseDynamicMulticastDelegate<FNotThreadSafeDelegateMode,void,UDS_DataSetBase_*> *)
               (pUVar4 + 1),this,(pmf_0b362824 *)&local_78,local_res20);
  }
  TDS_DataSetGetter<UDS_MoneyDataSet>::Get((ulong64)&local_res18);
  bVar2 = FWeakObjectPtr::IsValid(&local_res18);
  if (!bVar2) {
    return;
  }
  pUVar4 = FWeakObjectPtr::Get(&local_res18);
  pcVar5 = strstr("&UDS_VM_ItemCraft_Crafting_Info_Material::OnChangeMoneyDataSet","::");
  if (pcVar5 != (char *)0x0) {
    do {
      pcVar6 = pcVar5;
      pcVar5 = strstr(pcVar6 + 1,"::");
    } while (pcVar5 != (char *)0x0);
    if ((pcVar6 != (char *)0x0) && (pcVar7 = pcVar6 + 2, pcVar6[2] != '0')) goto LAB_14be77248;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Result && Result[2] != \'0\'",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\Delegate.h"
                     ,0x1da,L"\'%hs\' does not look like a member function");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
LAB_14be77248:
  ::FName::FName(&local_98,pcVar7);
  local_78 = OnChangeMoneyDataSet;
  uStack_70 = uStack_70 & 0xffffffff00000000;
  local_48 = OnChangeMoneyDataSet;
  uStack_40 = uStack_70;
  TBaseDynamicMulticastDelegate<FNotThreadSafeDelegateMode,void,UDS_DataSetBase_*>::
  __Internal_AddDynamic<UDS_VM_ItemCraft_Crafting_Info_Material>
            ((TBaseDynamicMulticastDelegate<FNotThreadSafeDelegateMode,void,UDS_DataSetBase_*> *)
             (pUVar4 + 1),this,(pmf_0b362824 *)&local_48,local_98);
  return;
}

// InitViewModel @ 14be8d560

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
UDS_VM_ItemCraft_Crafting_Info_Material::InitViewModel
          (UDS_VM_ItemCraft_Crafting_Info_Material *this)

{
  FName FVar1;
  FName FVar2;
  UDS_VM_MoneyDisplay *pUVar3;
  UClass *pUVar4;
  UClass *pUVar5;
  UDS_VM_MoneyTooltipDetector *pUVar6;
  longlong *plVar7;
  undefined1 auStack_c8 [32];
  FName local_a8;
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_c8;
  if ((this->VM_MoneyDisplay1).field0_0x0.DebugPtr == (UDS_VM_MoneyDisplay *)0x0) {
    pUVar3 = UDS_ViewModelBase::CreateViewModel<UDS_VM_MoneyDisplay>((UObject *)this);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar3 != (UDS_VM_MoneyDisplay *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
    (this->VM_MoneyDisplay1).field0_0x0.DebugPtr = pUVar3;
  }
  if ((this->VM_MoneyDisplay2).field0_0x0.DebugPtr == (UDS_VM_MoneyDisplay *)0x0) {
    pUVar3 = UDS_ViewModelBase::CreateViewModel<UDS_VM_MoneyDisplay>((UObject *)this);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar3 != (UDS_VM_MoneyDisplay *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
    (this->VM_MoneyDisplay2).field0_0x0.DebugPtr = pUVar3;
  }
  if ((this->VM_MoneyDisplay3).field0_0x0.DebugPtr == (UDS_VM_MoneyDisplay *)0x0) {
    pUVar3 = UDS_ViewModelBase::CreateViewModel<UDS_VM_MoneyDisplay>((UObject *)this);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar3 != (UDS_VM_MoneyDisplay *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
    (this->VM_MoneyDisplay3).field0_0x0.DebugPtr = pUVar3;
  }
  if ((this->VM_MoneyDisplay4).field0_0x0.DebugPtr == (UDS_VM_MoneyDisplay *)0x0) {
    pUVar3 = UDS_ViewModelBase::CreateViewModel<UDS_VM_MoneyDisplay>((UObject *)this);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar3 != (UDS_VM_MoneyDisplay *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
    (this->VM_MoneyDisplay4).field0_0x0.DebugPtr = pUVar3;
  }
  if ((this->VM_MoneyTooltip).field0_0x0.DebugPtr == (UDS_VM_MoneyTooltipDetector *)0x0) {
    local_a8.ComparisonIndex.Value = 0;
    local_a8.Number = 0;
    pUVar4 = Z_Construct_UClass_UDS_VM_MoneyTooltipDetector_NoRegister();
    FVar1 = local_a8;
    if (local_a8 == (FName)0x0) {
      FObjectInitializer::AssertIfInConstructor
                ((UObject *)this,
                 L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                );
    }
    pUVar5 = Z_Construct_UClass_UDS_VM_MoneyTooltipDetector_NoRegister();
    CheckIsClassChildOf_Internal(pUVar5,pUVar4);
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_98,pUVar4);
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
    pUVar6 = (UDS_VM_MoneyTooltipDetector *)
             StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
    if (local_98._64_8_ != 0) {
      plVar7 = (longlong *)(local_98 + 0x50);
      if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
        plVar7 = (longlong *)local_98._104_8_;
      }
      (**(code **)(*plVar7 + 0x10))();
    }
    if (pUVar6 != (UDS_VM_MoneyTooltipDetector *)0x0) {
      *(undefined1 *)((longlong)&pUVar6->_padding_ + 4) = 0;
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar6 != (UDS_VM_MoneyTooltipDetector *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar6);
    }
    (this->VM_MoneyTooltip).field0_0x0.DebugPtr = pUVar6;
  }
  return;
}

// OnChangeCraftManager_CraftListTID @ 14be90470

void __thiscall
UDS_VM_ItemCraft_Crafting_Info_Material::OnChangeCraftManager_CraftListTID
          (UDS_VM_ItemCraft_Crafting_Info_Material *this)

{
  UDS_CraftManager *pUVar1;
  
  this->CraftQuantity = 1;
  pUVar1 = UDS_CraftManager::GetInst();
  if (pUVar1 != (UDS_CraftManager *)0x0) {
    pUVar1->IsEnoughMaterial = None;
    pUVar1->IsEnoughMoney = None;
    SetMaterial(this);
    SetMoneyDisplay(this);
    return;
  }
  return;
}

// OnChangeCraftManager_CraftQuantity @ 14be904c0

void __thiscall
UDS_VM_ItemCraft_Crafting_Info_Material::OnChangeCraftManager_CraftQuantity
          (UDS_VM_ItemCraft_Crafting_Info_Material *this)

{
  UDS_CraftManager *pUVar1;
  
  pUVar1 = UDS_CraftManager::GetInst();
  if (pUVar1 != (UDS_CraftManager *)0x0) {
    this->CraftQuantity = pUVar1->CraftQuantity;
    pUVar1->IsEnoughMaterial = None;
    pUVar1->IsEnoughMoney = None;
    SetMaterial(this);
    SetMoneyDisplay(this);
    return;
  }
  return;
}

// OnChangeItemDataSet @ 14be90a30

void __thiscall
UDS_VM_ItemCraft_Crafting_Info_Material::OnChangeItemDataSet
          (UDS_VM_ItemCraft_Crafting_Info_Material *this,UDS_DataSetBase *param_1)

{
  UDS_CraftManager *pUVar1;
  
  pUVar1 = UDS_CraftManager::GetInst();
  if (pUVar1 != (UDS_CraftManager *)0x0) {
    pUVar1->IsEnoughMaterial = None;
    SetMaterial(this);
    return;
  }
  return;
}

// OnChangeMoneyDataSet @ 14be90b50

void __thiscall
UDS_VM_ItemCraft_Crafting_Info_Material::OnChangeMoneyDataSet
          (UDS_VM_ItemCraft_Crafting_Info_Material *this,UDS_DataSetBase *param_1)

{
  UDS_CraftManager *pUVar1;
  
  pUVar1 = UDS_CraftManager::GetInst();
  if (pUVar1 != (UDS_CraftManager *)0x0) {
    pUVar1->IsEnoughMoney = None;
    SetMoneyDisplay(this);
    return;
  }
  return;
}

// OnCloseInit @ 14be97670

void __thiscall
UDS_VM_ItemCraft_Crafting_Info_Material::OnCloseInit(UDS_VM_ItemCraft_Crafting_Info_Material *this)

{
  UDS_CraftManager *pUVar1;
  
  UDS_ViewModelBase::OnCloseInit((UDS_ViewModelBase *)this);
  pUVar1 = UDS_CraftManager::GetInst();
  if (pUVar1 != (UDS_CraftManager *)0x0) {
    pUVar1->IsEnoughMaterial = None;
    pUVar1->IsEnoughMoney = None;
  }
  return;
}

// OnSetViewModel @ 14bea3aa0

void __thiscall
UDS_VM_ItemCraft_Crafting_Info_Material::OnSetViewModel
          (UDS_VM_ItemCraft_Crafting_Info_Material *this,TSharedPtr<FDS_ViewModelContext,1> *param_1
          )

{
  TReferenceControllerBase<1> *pTVar1;
  
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  SetMaterial(this);
  SetMoneyDisplay(this);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// SetMaterial @ 14beb2920

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_ItemCraft_Crafting_Info_Material::SetMaterial(UDS_VM_ItemCraft_Crafting_Info_Material *this)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  UDS_CraftManager *this_00;
  UDS_LogManager *pUVar8;
  UDS_UserObjectListItem *this_01;
  undefined8 *puVar9;
  TObjectPtr<UDS_UserObjectListItem>_u_0 TVar10;
  uint uVar11;
  ulonglong uVar12;
  uint uVar13;
  ulonglong uVar14;
  undefined1 auStackY_208 [32];
  undefined1 local_1d8 [8];
  UDS_M_ItemImplBase *local_1d0;
  TArray<int,TSizedDefaultAllocator<32>_> local_1c8;
  TArray<int,TSizedDefaultAllocator<32>_> local_1b8;
  UDS_UserObjectListItem *local_1a8;
  UDS_CraftManager *local_1a0;
  longlong local_198;
  FName local_188;
  int local_180;
  TSharedPtr<FDS_ViewModelContext,1> local_178;
  undefined1 local_168 [8];
  TReferenceControllerBase<1> *local_160;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_208;
  this_00 = UDS_CraftManager::GetInst();
  if (this_00 != (UDS_CraftManager *)0x0) {
    local_1a0 = this_00;
    UDS_CraftManager::GetSelectedMaterialItemTIDs(this_00,&local_1b8);
    UDS_CraftManager::GetSelectedMaterialItemCounts(this_00,&local_1c8);
    if (local_1b8.ArrayNum == local_1c8.ArrayNum) {
      FDS_EntryBindingEventField::Reset(&this->EntryBindingEventField);
      if (local_1b8.ArrayNum < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)local_1b8.ArrayNum);
      }
      piVar1 = &(this->IsEnoughMaterial).ArrayMax;
      uVar12 = 0;
      (this->IsEnoughMaterial).ArrayNum = 0;
      TVar10 = (TObjectPtr<UDS_UserObjectListItem>_u_0)piVar1;
      if ((this->IsEnoughMaterial).ArrayMax < local_1b8.ArrayNum) {
        TVar10.DebugPtr = (UDS_UserObjectListItem *)0x0;
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,local_1b8.ArrayNum,&(this->IsEnoughMaterial).AllocatorInstance,0,piVar1);
      }
      local_198 = (longlong)local_1b8.ArrayNum;
      uVar14 = uVar12;
      if (0 < local_198) {
        do {
          this_01 = NewObject<UDS_UserObjectListItem>((UObject *)this);
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (this_01 != (UDS_UserObjectListItem *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)this_01);
          }
          uVar11 = (uint)uVar12;
          uVar13 = ~uVar11 >> 0x1f;
          uVar5 = 0;
          if ((int)uVar11 < local_1b8.ArrayNum) {
            uVar5 = uVar13;
          }
          if (uVar5 == 0) {
            TVar10.DebugPtr = (UDS_UserObjectListItem *)0x1506109c0;
            bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar4) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
          }
          TVar10._0_1_ = 0xd;
          DS_ItemDataUtil::CreateItemModel((EDS_ItemSlotStateType)&local_1d0,TVar10._0_4_);
          if (local_1d0 != (UDS_M_ItemImplBase *)0x0) {
            uVar6 = 0;
            uVar5 = uVar6;
            if ((int)uVar11 < local_1c8.ArrayNum) {
              uVar5 = uVar13;
            }
            if ((uVar5 == 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar4)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            iVar7 = *(int *)(local_1c8.AllocatorInstance.Data + uVar14 * 4);
            iVar2 = this->CraftQuantity;
            puVar9 = (undefined8 *)(**(code **)(local_1d0->_padding_ + 0x310))(local_1d0,local_168);
            local_178.Object = (FDS_ViewModelContext *)*puVar9;
            local_178.SharedReferenceCount.ReferenceController =
                 (TReferenceControllerBase<1> *)puVar9[1];
            if (local_178.SharedReferenceCount.ReferenceController !=
                (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              (local_178.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                   (atomic<int>)
                   ((int)(local_178.SharedReferenceCount.ReferenceController)->SharedReferenceCount
                   + 1);
              UNLOCK();
            }
            UDS_UserObjectListItem::AddContext(this_01,&local_178);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_160);
            UDS_M_ItemImplBase::SetQuantity(local_1d0,iVar7 * iVar2);
            local_1a8 = this_01;
            if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
               (this_01 != (UDS_UserObjectListItem *)0x0)) {
              UE::GC::MarkAsReachable((UObject *)this_01);
            }
            TVar10.DebugPtr = (UDS_UserObjectListItem *)&local_1a8;
            FDS_EntryBindingEventField::Add
                      (&this->EntryBindingEventField,
                       (TObjectPtr<UDS_UserObjectListItem>)TVar10.ObjectPtr.field0_0x0);
            uVar5 = uVar6;
            if ((int)uVar11 < local_1c8.ArrayNum) {
              uVar5 = uVar13;
            }
            if (uVar5 == 0) {
              TVar10.DebugPtr = (UDS_UserObjectListItem *)0x1506109c0;
              bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar4) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
            }
            if (0 < *(int *)(local_1c8.AllocatorInstance.Data + uVar14 * 4)) {
              iVar7 = (**(code **)(local_1d0->_padding_ + 0x360))();
              if ((int)uVar11 < local_1c8.ArrayNum) {
                uVar6 = uVar13;
              }
              if ((uVar6 == 0) &&
                 (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar4)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              TVar10.DebugPtr = (UDS_UserObjectListItem *)local_1d8;
              local_1d8[0] = *(int *)(local_1c8.AllocatorInstance.Data + uVar14 * 4) *
                             this->CraftQuantity <= iVar7;
              UDS_CraftManager::SetEngoughMaterial(local_1a0,(bool *)TVar10.DebugPtr);
            }
          }
          uVar12 = (ulonglong)(uVar11 + 1);
          uVar14 = uVar14 + 1;
        } while ((longlong)uVar14 < local_198);
      }
      local_180 = FFieldNotificationClassDescriptor::EntryBindingEventField.BitNumber;
      local_188 = FFieldNotificationClassDescriptor::EntryBindingEventField.FieldName;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_188);
    }
    else {
      pUVar8 = UDS_LogManager::GetInst();
      if (pUVar8 != (UDS_LogManager *)0x0) {
        pUVar8 = UDS_LogManager::GetInst();
        local_158._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_158,"UDS_VM_ItemCraft_Crafting_Info_Material::SetMaterial",0x34,Yes);
        UDS_LogManager::PrintLog
                  (pUVar8,1,Warning,local_158.Ptr,0x7d,
                   L"MaterialItemTIDs and MaterialCounts count not match");
        if ((void *)local_158._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_158._padding_);
        }
      }
    }
    if (local_1c8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1c8.AllocatorInstance.Data);
    }
    if (local_1b8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1b8.AllocatorInstance.Data);
    }
  }
  return;
}

// SetMoneyDisplay @ 14beb31b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_ItemCraft_Crafting_Info_Material::SetMoneyDisplay
          (UDS_VM_ItemCraft_Crafting_Info_Material *this)

{
  int *piVar1;
  longlong lVar2;
  UDS_VM_MoneyTooltipDetector *this_00;
  code *pcVar3;
  ForAnyElementType FVar4;
  TReferenceControllerBase<1> *pTVar5;
  bool bVar6;
  int iVar7;
  UDS_CraftManager *this_01;
  UDS_LogManager *pUVar8;
  UScriptStruct *pUVar9;
  UDS_ViewModelContextManager *pUVar10;
  FDS_ViewModelContext *pFVar11;
  FDS_ViewModelContext *pFVar12;
  EDS_ViewModelTemplateKey EVar13;
  UDS_VM_MoneyDisplay *pUVar14;
  TSharedPtr<FDS_ViewModelContext,1> *pTVar15;
  int iVar16;
  FDS_ViewModelContext *pFVar17;
  FDS_ViewModelContext *pFVar18;
  FDS_ViewModelContext *pFVar19;
  UDS_VM_ItemCraft_Crafting_Info_Material *pUVar20;
  FDS_ViewModelContext *pFVar21;
  FDS_ViewModelContext *pFVar22;
  undefined1 auStackY_248 [32];
  bool local_218 [8];
  TArray<EDS_MoneyType,TSizedDefaultAllocator<32>_> local_210;
  TReferenceControllerBase<1> *local_200;
  TArray<__int64,TSizedDefaultAllocator<32>_> local_1f8;
  FDS_ViewModelContext *local_1e8;
  UDS_VM_ItemCraft_Crafting_Info_Material *local_1e0;
  UDS_CraftManager *local_1d8;
  TSharedPtr<FDS_ViewModelContext,1> local_1d0;
  TSharedPtr<FDS_ViewModelContext,1> local_1c0;
  TSharedPtr<FDS_ViewModelContext,1> local_1b0;
  TSharedPtr<FDS_ViewModelContext,1> local_1a0;
  TSharedPtr<FDS_ViewModelContext,1> local_190;
  TSharedPtr<FDS_ViewModelContext,1> local_180;
  TSharedPtr<FDS_ViewModelContext,1> local_170;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_248;
  local_1e0 = this;
  this_01 = UDS_CraftManager::GetInst();
  if (this_01 != (UDS_CraftManager *)0x0) {
    local_1d8 = this_01;
    UDS_CraftManager::GetSelectedMoneyTypes(this_01,&local_210);
    UDS_CraftManager::GetSelectedMoneyValues(this_01,&local_1f8);
    if (local_210.ArrayNum == local_1f8.ArrayNum) {
      local_1e8 = ::operator_new(0x48);
      pFVar21 = (FDS_ViewModelContext *)0x0;
      if (local_1e8 == (FDS_ViewModelContext *)0x0) {
        local_1e8 = (FDS_ViewModelContext *)0x0;
      }
      else {
        *(undefined8 *)&local_1e8->ViewModelTemplateKey = 0;
        local_1e8[1].ViewModelName.ComparisonIndex = 0;
        local_1e8[1].ViewModelName.Number = 0;
        local_1e8->DerivedStaticStruct = (UStruct *)0x0;
        (local_1e8->ViewModelName).ComparisonIndex = 0;
        (local_1e8->ViewModelName).Number = 0;
        local_1e8->_padding_ = (longlong)&___7FDS_ViewModelContext_MoneyTooltipDetector__6B_;
        local_1e8[1]._padding_ = 0;
        local_1e8[1].DerivedStaticStruct = (UStruct *)0x0;
        *(undefined8 *)&local_1e8[1].ViewModelTemplateKey = 0;
        local_1e8[2]._padding_ = 0;
      }
      pFVar19 = local_1e8;
      local_200 = ::operator_new(0x20);
      if (local_200 == (TReferenceControllerBase<1> *)0x0) {
        local_200 = (TReferenceControllerBase<1> *)0x0;
      }
      else {
        local_200[1]._padding_ = (longlong)ViewModelContextDeleter;
        local_200->_padding_ =
             (longlong)
             &
             ___7__TReferenceControllerWithDeleter_UFDS_ViewModelContext_MoneyTooltipDetector__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
        ;
        local_200->SharedReferenceCount = (atomic<int>)0x1;
        local_200->WeakReferenceCount = (atomic<int>)0x1;
        *(FDS_ViewModelContext **)&local_200[1].SharedReferenceCount = pFVar19;
      }
      pTVar5 = local_200;
      if ((pFVar19 == (FDS_ViewModelContext *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pUVar9 = FDS_ViewModelContext_MoneyTooltipDetector::StaticStruct();
      pFVar19->DerivedStaticStruct = (UStruct *)pUVar9;
      pUVar10 = UDS_ViewModelContextManager::GetInst();
      if (pUVar10 != (UDS_ViewModelContextManager *)0x0) {
        if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_1d0.Object = pFVar19;
        local_1d0.SharedReferenceCount.ReferenceController = pTVar5;
        UDS_ViewModelContextManager::RegisterContext(pUVar10,&local_1d0);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_1d0.SharedReferenceCount.ReferenceController);
      }
      pFVar19->ViewModelTemplateKey = MoneyTooltipDetector;
      *(undefined1 *)&pFVar19[1].ViewModelName.ComparisonIndex.Value = 0;
      *(undefined8 *)&pFVar19[1].ViewModelTemplateKey = 0x4084500000000000;
      pFVar19[2]._padding_ = 0x4051800000000000;
      pFVar17 = pFVar21;
      pFVar22 = pFVar21;
      do {
        while( true ) {
          iVar7 = local_210.ArrayNum;
          pFVar11 = ::operator_new(0x40);
          pFVar18 = pFVar21;
          if (pFVar11 != (FDS_ViewModelContext *)0x0) {
            *(undefined8 *)&pFVar11->ViewModelTemplateKey = 0;
            *(undefined8 *)&pFVar11[1].ViewModelTemplateKey = 0;
            *(undefined8 *)&pFVar11->DerivedStaticStruct = 0;
            (pFVar11->ViewModelName).ComparisonIndex = 0;
            (pFVar11->ViewModelName).Number = 0;
            pFVar11[1]._padding_ = 0;
            pFVar11->_padding_ = (longlong)&___7FDS_ViewModelContext_MoneyDisplay__6B_;
            *(undefined8 *)&pFVar11[1].DerivedStaticStruct = 0;
            pFVar11[1].ViewModelName.ComparisonIndex = 0;
            pFVar11[1].ViewModelName.Number = 0;
            pFVar18 = pFVar11;
          }
          pFVar12 = ::operator_new(0x20);
          pFVar11 = pFVar21;
          if (pFVar12 != (FDS_ViewModelContext *)0x0) {
            *(atomic<int> *)&pFVar12->DerivedStaticStruct = (atomic<int>)0x1;
            *(code **)&(pFVar12->ViewModelName).ComparisonIndex = ViewModelContextDeleter;
            pFVar12->_padding_ =
                 (longlong)
                 &
                 ___7__TReferenceControllerWithDeleter_UFDS_ViewModelContext_MoneyDisplay__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
            ;
            ((atomic<int> *)&pFVar12->DerivedStaticStruct)[1] = (atomic<int>)0x1;
            *(FDS_ViewModelContext **)&pFVar12->ViewModelTemplateKey = pFVar18;
            pFVar11 = pFVar12;
          }
          if ((pFVar18 == (FDS_ViewModelContext *)0x0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar6)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          pUVar9 = FDS_ViewModelContext_MoneyDisplay::StaticStruct();
          *(UScriptStruct **)&pFVar18->DerivedStaticStruct = pUVar9;
          pUVar10 = UDS_ViewModelContextManager::GetInst();
          if (pUVar10 != (UDS_ViewModelContextManager *)0x0) {
            if (pFVar11 != (FDS_ViewModelContext *)0x0) {
              LOCK();
              *(atomic<int> *)&pFVar11->DerivedStaticStruct =
                   (atomic<int>)((int)*(atomic<int> *)&pFVar11->DerivedStaticStruct + 1);
              UNLOCK();
            }
            local_1c0.Object = pFVar18;
            local_1c0.SharedReferenceCount.ReferenceController =
                 (TReferenceControllerBase<1> *)pFVar11;
            UDS_ViewModelContextManager::RegisterContext(pUVar10,&local_1c0);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_1c0.SharedReferenceCount.ReferenceController);
          }
          pFVar18->ViewModelTemplateKey = W_MoneyDisplay;
          iVar16 = (int)pFVar17;
          if (iVar16 < iVar7) {
            if ((local_210.ArrayNum <= iVar16) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            FVar4.Data = local_210.AllocatorInstance.Data;
            iVar7 = *(int *)&pFVar19[1].DerivedStaticStruct;
            piVar1 = (int *)((longlong)&pFVar19[1].DerivedStaticStruct + 4);
            if (iVar7 == *piVar1) {
              iVar7 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x101,(ForAnyElementType *)(pFVar19 + 1),piVar1);
            }
            *(int *)&pFVar19[1].DerivedStaticStruct = iVar7 + 1;
            *(FScriptContainerElement *)((longlong)iVar7 + pFVar19[1]._padding_) =
                 FVar4.Data[(longlong)&pFVar22->_padding_];
            if ((local_210.ArrayNum <= iVar16) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            *(ulonglong *)&pFVar18[1].DerivedStaticStruct =
                 (ulonglong)(byte)local_210.AllocatorInstance.Data[(longlong)&pFVar22->_padding_];
            if ((local_1f8.ArrayNum <= iVar16) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            pUVar20 = local_1e0;
            *(longlong *)&pFVar18[1].ViewModelName.ComparisonIndex =
                 (longlong)local_1e0->CraftQuantity *
                 *(longlong *)(local_1f8.AllocatorInstance.Data + (longlong)pFVar22 * 8);
            pFVar18[1].field_0x1c = 0;
            if ((local_1f8.ArrayNum <= iVar16) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            iVar7 = pUVar20->CraftQuantity;
            lVar2 = *(longlong *)(local_1f8.AllocatorInstance.Data + (longlong)pFVar22 * 8);
            if ((local_210.ArrayNum <= iVar16) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            local_218[0] = UDS_MoneyDataSet::CheckEnoughMoney
                                     ((EDS_MoneyType)
                                      local_210.AllocatorInstance.Data
                                      [(longlong)&pFVar22->_padding_],iVar7 * lVar2);
            EVar13 = 0x836;
            if (!local_218[0]) {
              EVar13 = 0x84a;
            }
            pFVar18[1].ViewModelTemplateKey = EVar13;
            UDS_CraftManager::SetEngoughMoney(local_1d8,local_218);
            pFVar19 = local_1e8;
          }
          else {
            pFVar18[1].field_0x1c = 1;
            pUVar20 = local_1e0;
          }
          if (iVar16 != 0) break;
          pUVar14 = (pUVar20->VM_MoneyDisplay1).field0_0x0.DebugPtr;
          if (pUVar14 != (UDS_VM_MoneyDisplay *)0x0) {
            if (pFVar11 != (FDS_ViewModelContext *)0x0) {
              LOCK();
              *(atomic<int> *)&pFVar11->DerivedStaticStruct =
                   (atomic<int>)((int)*(atomic<int> *)&pFVar11->DerivedStaticStruct + 1);
              UNLOCK();
            }
            pTVar15 = &local_1b0;
            local_1b0.Object = pFVar18;
            local_1b0.SharedReferenceCount.ReferenceController =
                 (TReferenceControllerBase<1> *)pFVar11;
LAB_14beb3763:
            UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)pUVar14,pTVar15);
          }
LAB_14beb3768:
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((TReferenceControllerBase<1> *)pFVar11);
          pFVar17 = (FDS_ViewModelContext *)(ulonglong)(iVar16 + 1);
          pFVar22 = (FDS_ViewModelContext *)((longlong)&pFVar22->_padding_ + 1);
        }
        if (iVar16 == 1) {
          pUVar14 = (pUVar20->VM_MoneyDisplay2).field0_0x0.DebugPtr;
          if (pUVar14 != (UDS_VM_MoneyDisplay *)0x0) {
            if (pFVar11 != (FDS_ViewModelContext *)0x0) {
              LOCK();
              *(atomic<int> *)&pFVar11->DerivedStaticStruct =
                   (atomic<int>)((int)*(atomic<int> *)&pFVar11->DerivedStaticStruct + 1);
              UNLOCK();
            }
            pTVar15 = &local_1a0;
            local_1a0.Object = pFVar18;
            local_1a0.SharedReferenceCount.ReferenceController =
                 (TReferenceControllerBase<1> *)pFVar11;
            goto LAB_14beb3763;
          }
          goto LAB_14beb3768;
        }
        if (iVar16 == 2) {
          pUVar14 = (pUVar20->VM_MoneyDisplay3).field0_0x0.DebugPtr;
          if (pUVar14 != (UDS_VM_MoneyDisplay *)0x0) {
            if (pFVar11 != (FDS_ViewModelContext *)0x0) {
              LOCK();
              *(atomic<int> *)&pFVar11->DerivedStaticStruct =
                   (atomic<int>)((int)*(atomic<int> *)&pFVar11->DerivedStaticStruct + 1);
              UNLOCK();
            }
            pTVar15 = &local_190;
            local_190.Object = pFVar18;
            local_190.SharedReferenceCount.ReferenceController =
                 (TReferenceControllerBase<1> *)pFVar11;
            goto LAB_14beb3763;
          }
          goto LAB_14beb3768;
        }
        if ((iVar16 == 3) &&
           (pUVar14 = (pUVar20->VM_MoneyDisplay4).field0_0x0.DebugPtr,
           pUVar14 != (UDS_VM_MoneyDisplay *)0x0)) {
          if (pFVar11 != (FDS_ViewModelContext *)0x0) {
            LOCK();
            *(atomic<int> *)&pFVar11->DerivedStaticStruct =
                 (atomic<int>)((int)*(atomic<int> *)&pFVar11->DerivedStaticStruct + 1);
            UNLOCK();
          }
          local_180.Object = pFVar18;
          local_180.SharedReferenceCount.ReferenceController =
               (TReferenceControllerBase<1> *)pFVar11;
          UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)pUVar14,&local_180);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((TReferenceControllerBase<1> *)pFVar11);
          break;
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)pFVar11);
        pFVar17 = (FDS_ViewModelContext *)(ulonglong)(iVar16 + 1U);
        pFVar22 = (FDS_ViewModelContext *)((longlong)&pFVar22->_padding_ + 1);
      } while ((int)(iVar16 + 1U) < 4);
      pTVar5 = local_200;
      this_00 = (pUVar20->VM_MoneyTooltip).field0_0x0.DebugPtr;
      if (this_00 != (UDS_VM_MoneyTooltipDetector *)0x0) {
        local_170.SharedReferenceCount.ReferenceController = local_200;
        if (local_200 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          local_200->SharedReferenceCount = (atomic<int>)((int)local_200->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_170.Object = pFVar19;
        UDS_ViewModelBase::SetContext((UDS_ViewModelBase *)this_00,&local_170);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
    }
    else {
      pUVar8 = UDS_LogManager::GetInst();
      if (pUVar8 != (UDS_LogManager *)0x0) {
        pUVar8 = UDS_LogManager::GetInst();
        local_158._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_158,"UDS_VM_ItemCraft_Crafting_Info_Material::SetMoneyDisplay",0x38,Yes);
        UDS_LogManager::PrintLog
                  (pUVar8,1,Warning,local_158.Ptr,0xa7,L"moneyTypes and moneyValues count not match"
                  );
        if ((void *)local_158._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_158._padding_);
        }
      }
    }
    if (local_1f8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1f8.AllocatorInstance.Data);
    }
    if (local_210.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_210.AllocatorInstance.Data);
    }
  }
  return;
}

// UnbindModel @ 14bebc7c0

void __thiscall
UDS_VM_ItemCraft_Crafting_Info_Material::UnbindModel(UDS_VM_ItemCraft_Crafting_Info_Material *this)

{
  bool bVar1;
  UDS_ItemCraftEvent *pUVar2;
  UObject *pUVar3;
  FWeakObjectPtr local_res10;
  FWeakObjectPtr local_res18 [2];
  
  pUVar2 = UDS_ItemCraftEvent::GetEvent();
  if (pUVar2 != (UDS_ItemCraftEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar2->OnChangeCraftManager_ItemCraftListTID,this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar2->OnChangeCraftManager_ItemCraftQuantity,this);
  }
  TDS_DataSetGetter<UDS_ItemDataSet>::Get((ulong64)&local_res10);
  bVar1 = FWeakObjectPtr::IsValid(&local_res10);
  if (bVar1) {
    pUVar3 = FWeakObjectPtr::Get(&local_res10);
    TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::RemoveAll
              ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)(pUVar3 + 1),(UObject *)this)
    ;
  }
  TDS_DataSetGetter<UDS_MoneyDataSet>::Get((ulong64)local_res18);
  bVar1 = FWeakObjectPtr::IsValid(local_res18);
  if (bVar1) {
    pUVar3 = FWeakObjectPtr::Get(local_res18);
    TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::RemoveAll
              ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)(pUVar3 + 1),(UObject *)this)
    ;
  }
  return;
}

